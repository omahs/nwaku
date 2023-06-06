{.used.}

import
  std/[sequtils, sets],
  stew/results,
  stew/shims/net,
  chronos,
  chronicles,
  testutils/unittests,
  libp2p/crypto/crypto as libp2p_keys,
  eth/keys as eth_keys
import
  ../../waku/v2/waku_node,
  ../../waku/v2/waku_enr,
  ../../waku/v2/waku_discv5,
  ./testlib/common,
  ./testlib/wakucore,
  ./testlib/wakunode


proc newTestEnrRecord(privKey: libp2p_keys.PrivateKey,
                      extIp: string, tcpPort: uint16, udpPort: uint16,
                      flags = none(CapabilitiesBitfield)): waku_enr.Record =
  var builder = EnrBuilder.init(privKey)
  builder.withIpAddressAndPorts(
      ipAddr = some(ValidIpAddress.init(extIp)),
      tcpPort = some(Port(tcpPort)),
      udpPort = some(Port(udpPort)),
  )

  if flags.isSome():
    builder.withWakuCapabilities(flags.get())

  builder.build().tryGet()


proc newTestDiscv5Node(privKey: libp2p_keys.PrivateKey,
                       bindIp: string, tcpPort: uint16, udpPort: uint16,
                       record: waku_enr.Record,
                       bootstrapRecords = newSeq[waku_enr.Record]()): WakuNode =
  let config = WakuDiscoveryV5Config(
      privateKey: eth_keys.PrivateKey(privKey.skkey),
      address: ValidIpAddress.init(bindIp),
      port: Port(udpPort),
      bootstrapRecords: bootstrapRecords,
  )

  let protocol = WakuDiscoveryV5.new(rng(), config, some(record))
  let node = newTestWakuNode(
      nodeKey = privKey,
      bindIp = ValidIpAddress.init(bindIp),
      bindPort = Port(tcpPort),
      wakuDiscv5 = some(protocol)
    )

  return node



procSuite "Waku Discovery v5":
  asyncTest "find random peers":
    ## Given
    # Node 1
    let
      privKey1 =  generateSecp256k1Key()
      bindIp1 = "0.0.0.0"
      extIp1 = "127.0.0.1"
      tcpPort1 = 61500u16
      udpPort1 = 9000u16

    let record1 = newTestEnrRecord(
        privKey = privKey1,
        extIp = extIp1,
        tcpPort = tcpPort1,
        udpPort = udpPort1,
    )
    let node1 = newTestDiscv5Node(
        privKey = privKey1,
        bindIp = bindIp1,
        tcpPort = tcpPort1,
        udpPort = udpPort1,
        record = record1
    )

    # Node 2
    let
      privKey2 = generateSecp256k1Key()
      bindIp2 = "0.0.0.0"
      extIp2 = "127.0.0.1"
      tcpPort2 = 61502u16
      udpPort2 = 9002u16

    let record2 = newTestEnrRecord(
        privKey = privKey2,
        extIp = extIp2,
        tcpPort = tcpPort2,
        udpPort = udpPort2,
    )

    let node2 = newTestDiscv5Node(
        privKey = privKey2,
        bindIp = bindIp2,
        tcpPort = tcpPort2,
        udpPort = udpPort2,
        record = record2,
    )

    # Node 3
    let
      privKey3 = generateSecp256k1Key()
      bindIp3 = "0.0.0.0"
      extIp3 = "127.0.0.1"
      tcpPort3 = 61504u16
      udpPort3 = 9004u16

    let record3 = newTestEnrRecord(
        privKey = privKey3,
        extIp = extIp3,
        tcpPort = tcpPort3,
        udpPort = udpPort3,
    )

    let node3 = newTestDiscv5Node(
        privKey = privKey3,
        bindIp = bindIp3,
        tcpPort = tcpPort3,
        udpPort = udpPort3,
        record = record3,
        bootstrapRecords = @[record1, record2]
    )

    await allFutures(node1.start(), node2.start(), node3.start())

    ## When
    # Starting discv5 via `WakuNode.startDiscV5()` starts the discv5 background task.
    await allFutures(node1.startDiscv5(), node2.startDiscv5(), node3.startDiscv5())

    await sleepAsync(5.seconds) # Wait for discv5 discovery loop to run
    let res = await node1.wakuDiscv5.findRandomPeers()

    ## Then
    check:
      res.len >= 1

    ## Cleanup
    await allFutures(node1.stop(), node2.stop(), node3.stop())

  asyncTest "find random peers with predicate":
    ## Setup
    # Records
    let
      privKey1 =  generateSecp256k1Key()
      bindIp1 = "0.0.0.0"
      extIp1 = "127.0.0.1"
      tcpPort1 = 61500u16
      udpPort1 = 9000u16

    let record1 = newTestEnrRecord(
        privKey = privKey1,
        extIp = extIp1,
        tcpPort = tcpPort1,
        udpPort = udpPort1,
        flags = some(CapabilitiesBitfield.init(Capabilities.Relay))
    )

    let
      privKey2 = generateSecp256k1Key()
      bindIp2 = "0.0.0.0"
      extIp2 = "127.0.0.1"
      tcpPort2 = 61502u16
      udpPort2 = 9002u16

    let record2 = newTestEnrRecord(
        privKey = privKey2,
        extIp = extIp2,
        tcpPort = tcpPort2,
        udpPort = udpPort2,
        flags = some(CapabilitiesBitfield.init(Capabilities.Relay, Capabilities.Store))
    )

    let
      privKey3 = generateSecp256k1Key()
      bindIp3 = "0.0.0.0"
      extIp3 = "127.0.0.1"
      tcpPort3 = 61504u16
      udpPort3 = 9004u16

    let record3 = newTestEnrRecord(
        privKey = privKey3,
        extIp = extIp3,
        tcpPort = tcpPort3,
        udpPort = udpPort3,
        flags = some(CapabilitiesBitfield.init(Capabilities.Relay, Capabilities.Filter))
    )

    let
      privKey4 = generateSecp256k1Key()
      bindIp4 = "0.0.0.0"
      extIp4 = "127.0.0.1"
      tcpPort4 = 61506u16
      udpPort4 = 9006u16

    let record4 = newTestEnrRecord(
        privKey = privKey4,
        extIp = extIp4,
        tcpPort = tcpPort4,
        udpPort = udpPort4,
        flags = some(CapabilitiesBitfield.init(Capabilities.Relay, Capabilities.Store))
    )


    # Nodes
    let node1 = newTestDiscv5Node(
        privKey = privKey1,
        bindIp = bindIp1,
        tcpPort = tcpPort1,
        udpPort = udpPort1,
        record = record1,
        bootstrapRecords = @[record2]
    )
    let node2 = newTestDiscv5Node(
        privKey = privKey2,
        bindIp = bindIp2,
        tcpPort = tcpPort2,
        udpPort = udpPort2,
        record = record2,
        bootstrapRecords = @[record3, record4]
    )

    let node3 = newTestDiscv5Node(
        privKey = privKey3,
        bindIp = bindIp3,
        tcpPort = tcpPort3,
        udpPort = udpPort3,
        record = record3
    )

    let node4 = newTestDiscv5Node(
        privKey = privKey4,
        bindIp = bindIp4,
        tcpPort = tcpPort4,
        udpPort = udpPort4,
        record = record4
    )

    # Start nodes' discoveryV5 protocols
    require node1.wakuDiscV5.start().isOk()
    require node2.wakuDiscV5.start().isOk()
    require node3.wakuDiscV5.start().isOk()
    require node4.wakuDiscV5.start().isOk()

    await allFutures(node1.start(), node2.start(), node3.start(), node4.start())

    ## Given
    let recordPredicate = proc(record: waku_enr.Record): bool =
          let typedRecord = record.toTyped()
          if typedRecord.isErr():
            return false

          let capabilities =  typedRecord.value.waku2
          if capabilities.isNone():
            return false

          return capabilities.get().supportsCapability(Capabilities.Store)


    ## When
    # # Do a random peer search with a predicate multiple times
    # var peers = initHashSet[waku_enr.Record]()
    # for i in 0..<10:
    #   for peer in await node1.wakuDiscv5.findRandomPeers(pred=recordPredicate):
    #     peers.incl(peer)
    await sleepAsync(5.seconds) # Wait for discv5 discvery loop to run
    let peers = await node1.wakuDiscv5.findRandomPeers(pred=recordPredicate)

    ## Then
    check:
      peers.len >= 1
      peers.allIt(it.supportsCapability(Capabilities.Store))

    # Cleanup
    await allFutures(node1.stop(), node2.stop(), node3.stop(), node4.stop())
