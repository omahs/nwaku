## Core Waku data types are defined here to avoid recursive dependencies.
##
## TODO Move more common data types here

import
  std/[tables, times],
  chronos, bearssl, stew/byteutils,
  libp2p/[switch, peerinfo, multiaddress, crypto/crypto],
  libp2p/protobuf/minprotobuf,
  libp2p/protocols/protocol,
  libp2p/switch,
  libp2p/stream/connection,
  libp2p/protocols/pubsub/[pubsub, gossipsub],
  nimcrypto/sha2,
  stew/byteutils

# Common data types -----------------------------------------------------------

type
  Topic* = string
  Message* = seq[byte]

  WakuMessage* = object
    payload*: seq[byte]
    contentTopic*: string

  MessageNotificationHandler* = proc(topic: string, msg: WakuMessage): Future[void] {.gcsafe, closure.}

  MessageNotificationSubscriptions* = TableRef[string, MessageNotificationSubscription]

  MessageNotificationSubscription* = object
    topics*: seq[string] # @TODO TOPIC
    handler*: MessageNotificationHandler

  QueryHandlerFunc* = proc(response: HistoryResponse) {.gcsafe, closure.}


  Index* = object
    ## This type contains the  description of an index used in the pagination of waku messages
    digest*: MDigest[256]
    receivedTime*: float

  IndexedWakuMessage* = object
    msg*: WakuMessage
    index*: Index

  PagingInfo* = object
    ## This type holds the information needed for the pagination
    pageSize*: int
    cursor*: Index
    direction*: bool

  HistoryQuery* = object
    topics*: seq[string]
    pagingInfo*: PagingInfo

  HistoryResponse* = object
    messages*: seq[WakuMessage]
    pagingInfo*: PagingInfo

  HistoryRPC* = object
    requestId*: string
    query*: HistoryQuery
    response*: HistoryResponse

  HistoryPeer* = object
    peerInfo*: PeerInfo

  WakuStore* = ref object of LPProtocol
    switch*: Switch
    rng*: ref BrHmacDrbgContext
    peers*: seq[HistoryPeer]
    messages*: seq[WakuMessage]

  FilterRequest* = object
    contentFilters*: seq[ContentFilter]
    topic*: string

  MessagePush* = object
    messages*: seq[WakuMessage]

  FilterRPC* = object
    requestId*: string
    request*: FilterRequest
    push*: MessagePush

  Subscriber* = object
    peer*: PeerInfo
    requestId*: string
    filter*: FilterRequest # @TODO MAKE THIS A SEQUENCE AGAIN?

  MessagePushHandler* = proc(requestId: string, msg: MessagePush) {.gcsafe, closure.}

  FilterPeer* = object
    peerInfo*: PeerInfo

  WakuFilter* = ref object of LPProtocol
    rng*: ref BrHmacDrbgContext
    switch*: Switch
    peers*: seq[FilterPeer]
    subscribers*: seq[Subscriber]
    pushHandler*: MessagePushHandler

  ContentFilter* = object
    topics*: seq[string]

  ContentFilterHandler* = proc(msg: WakuMessage) {.gcsafe, closure.}

  Filter* = object
    contentFilters*: seq[ContentFilter]
    handler*: ContentFilterHandler

  # @TODO MAYBE MORE INFO?
  Filters* = Table[string, Filter]

  # NOTE based on Eth2Node in NBC eth2_network.nim
  WakuNode* = ref object of RootObj
    switch*: Switch
    wakuRelay*: WakuRelay
    wakuStore*: WakuStore
    wakuFilter*: WakuFilter
    peerInfo*: PeerInfo
    libp2pTransportLoops*: seq[Future[void]]
  # TODO Revist messages field indexing as well as if this should be Message or WakuMessage
    messages*: seq[(Topic, WakuMessage)]
    filters*: Filters
    subscriptions*: MessageNotificationSubscriptions
    rng*: ref BrHmacDrbgContext

  WakuRelay* = ref object of GossipSub
    gossipEnabled*: bool

  WakuInfo* = object
    # NOTE One for simplicity, can extend later as needed
    listenStr*: string
    #multiaddrStrings*: seq[string]

  # Encoding and decoding -------------------------------------------------------

proc init*(T: type WakuMessage, buffer: seq[byte]): ProtoResult[T] =
  var msg = WakuMessage()
  let pb = initProtoBuffer(buffer)

  discard ? pb.getField(1, msg.payload)
  discard ? pb.getField(2, msg.contentTopic)

  ok(msg)

proc encode*(message: WakuMessage): ProtoBuffer =
  result = initProtoBuffer()

  result.write(1, message.payload)
  result.write(2, message.contentTopic)

proc notify*(filters: Filters, msg: WakuMessage, requestId: string = "") =
  for key in filters.keys:
    let filter = filters[key]
    # We do this because the key for the filter is set to the requestId received from the filter protocol.
    # This means we do not need to check the content filter explicitly as all MessagePushs already contain
    # the requestId of the coresponding filter.
    if requestId != "" and requestId == key:
      filter.handler(msg)
      continue

    # TODO: In case of no topics we should either trigger here for all messages,
    # or we should not allow such filter to exist in the first place.
    for contentFilter in filter.contentFilters:
      if contentFilter.topics.len > 0:
        if msg.contentTopic in contentFilter.topics:
          filter.handler(msg)
          break

proc generateRequestId*(rng: ref BrHmacDrbgContext): string =
  var bytes: array[10, byte]
  brHmacDrbgGenerate(rng[], bytes)
  toHex(bytes)

proc computeIndex*(msg: WakuMessage): Index =
  ## Takes a WakuMessage and returns its index
  var ctx: sha256
  ctx.init()
  if msg.contentTopic.len != 0: # checks for non-empty contentTopic
    ctx.update(msg.contentTopic.toBytes()) # converts the topic to bytes
  ctx.update(msg.payload)
  let digest = ctx.finish()  # computes the hash
  ctx.clear()

  result.digest = digest
  result.receivedTime = epochTime() # gets the unix timestamp

