/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw;
typedef struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w;
typedef struct tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw;
typedef struct tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw;
typedef struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA;
typedef struct RootObj RootObj;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tySequence_Ef05srmQTDulnBdXR4Ja6Q tySequence_Ef05srmQTDulnBdXR4Ja6Q;
typedef struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA tySequence_DXS6mEo7PVUFJkirsQ9bNQA;
typedef struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA;
typedef struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ tySequence_DfgJFJEYoj4YBAHLZPl5lQ;
typedef struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ;
typedef struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA;
typedef struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q;
typedef struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA;
typedef struct tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA;
typedef struct tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ;
typedef struct tySequence_MvZmat48bhe9b6x9aUD58D5Q tySequence_MvZmat48bhe9b6x9aUD58D5Q;
typedef struct tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g;
typedef struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g;
typedef struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w;
typedef struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ;
typedef struct tyObject_GcStack_7fytPA5bBsob6See21YMRA tyObject_GcStack_7fytPA5bBsob6See21YMRA;
typedef struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg;
typedef struct tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ;
typedef struct tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg;
typedef struct tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw;
typedef struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA;
typedef struct tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw;
typedef struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw;
typedef struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg;
typedef struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyTuple_ujsjpB2O9cjj3uDHsXbnSzg;
typedef struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg;
typedef struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ;
typedef struct tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg;
typedef struct tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA;
typedef struct tyTuple_zwpS6d6iewrdlBSTNFoyVA tyTuple_zwpS6d6iewrdlBSTNFoyVA;
typedef NU16 tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw;
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
struct RootObj {
TNimType* m_type;
};
struct tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA {
  RootObj Sup;
NI id;
};
typedef NU8 tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw;
struct tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA {
NI counter;
tySequence_DfgJFJEYoj4YBAHLZPl5lQ* data;
};
typedef NU16 tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg;
struct tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q {
NU16 line;
NI16 col;
NI32 fileIndex;
};
typedef NU64 tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
typedef NU32 tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg;
typedef NU8 tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg;
typedef NU8 tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw;
typedef NU16 tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA;
struct tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA {
tyEnum_TLocKind_O7PRFZKuiBBWbku09cayVBg k;
tyEnum_TStorageLoc_JK9cKMX3XnqHaUky9b6gkGEw storage;
tySet_tyEnum_TLocFlag_o2bqJgR4ceIupnUSpxiudA flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* lode;
tyObject_RopeObj_OFzf0kSiPTcNreUIeJgWVA* r;
};
struct tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TSymKind_cNCW9acsSznmEccl1fgQwkw kind;
union{
struct {tySequence_Ef05srmQTDulnBdXR4Ja6Q* typeInstCache;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* procInstCache;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* gcUnsafetyReason;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* transformedBody;
};
struct {tySequence_DXS6mEo7PVUFJkirsQ9bNQA* usedGenerics;
tyObject_TStrTable_f07aOS3dr28kGa5wcE29aFA tab;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* guard;
NI bitsize;
};
};
tyEnum_TMagic_shZhZOdbVC5nnFvcXQAImg magic;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* name;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tySet_tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw flags;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* ast;
tySet_tyEnum_TOption_WspMeQySXNP2XoTWR5MTgg options;
NI position;
NI offset;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TLib_NBMxlJ6g3utqUlplqTTHkA* annex;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* constraint;
};
typedef NU32 tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg;
typedef NU8 tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw {
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typ;
tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info;
tySet_tyEnum_TNodeFlag_jyh9acXHkhZANSSvPIY7ZLg flags;
tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind;
union{
struct {NI64 intVal;
};
struct {NF floatVal;
};
struct {NimStringDesc* strVal;
};
struct {tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
};
struct {tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* ident;
};
struct {tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ* sons;
};
};
NimStringDesc* comment;
};
typedef NU8 tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw[21];
struct tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
NimStringDesc* s;
tyObject_TIdent_GufRQq9c0miSybX3zBD4tyA* next;
NI h;
};
typedef NU8 tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA;
typedef NU64 tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
typedef tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* tyArray_PsPyPA45AAjHu4uDGHNjTg[4];
struct tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ {
  tyObject_TIdObj_iIXPrEsiKHiioLj0HSkQhA Sup;
tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kind;
tyEnum_TCallingConvention_yjAJ8w0h1PBaSwSGJ3P7IA callConv;
tySet_tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw flags;
tySequence_Ef05srmQTDulnBdXR4Ja6Q* sons;
tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* owner;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym;
tyArray_PsPyPA45AAjHu4uDGHNjTg attachedOps;
tySequence_MvZmat48bhe9b6x9aUD58D5Q* methods;
NI64 size;
NI16 align;
NI16 lockLevel;
tyObject_TLoc_EtHNvCB0bgfu9bFjzx9cb6aA loc;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* typeInst;
NI uniqueId;
};
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
typedef NU64 tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag;
typedef NU8 tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw;
struct tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g {
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* partialParam;
tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* objType;
tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache;
};
typedef tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* tyArray_jlWPjgtbdjE069arIWHC9c9bg[1];
typedef NU8 tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw;
struct tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g {
NI refcount;
TNimType* typ;
};
struct tyObject_GcStack_7fytPA5bBsob6See21YMRA {
void* bottom;
};
struct tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w {
NI len;
NI cap;
tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g** d;
};
typedef tyObject_SmallChunk_tXn60W2f8h3jgAYdEmy5NQ* tyArray_SiRwrEKZdLgxqz9a9aoVBglg[512];
typedef NU32 tyArray_BHbOSqU1t9b3Gt7K2c6fQig[24];
typedef tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* tyArray_N1u1nqOgmuJN9cSZrnMHgOQ[32];
typedef tyArray_N1u1nqOgmuJN9cSZrnMHgOQ tyArray_B6durA4ZCi1xjJvRtyYxMg[24];
typedef tyObject_Trunk_W0r8S0Y3UGke6T9bIUWnnuw* tyArray_lh2A89ahMmYg9bCmpVaplLbA[256];
struct tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA {
tyArray_lh2A89ahMmYg9bCmpVaplLbA data;
};
typedef tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* tyArray_0aOLqZchNi8nWtMTi8ND8w[2];
struct tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw {
tyArray_0aOLqZchNi8nWtMTi8ND8w link;
NI key;
NI upperBound;
NI level;
};
struct tyTuple_ujsjpB2O9cjj3uDHsXbnSzg {
tyObject_BigChunk_Rv9c70Uhp2TytkX7eH78qEg* Field0;
NI Field1;
};
typedef tyTuple_ujsjpB2O9cjj3uDHsXbnSzg tyArray_LzOv2eCDGiceMKQstCLmhw[30];
struct tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg {
NI len;
tyArray_LzOv2eCDGiceMKQstCLmhw chunks;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg* next;
};
struct tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg {
NI minLargeObj;
NI maxLargeObj;
tyArray_SiRwrEKZdLgxqz9a9aoVBglg freeSmallChunks;
NU32 flBitmap;
tyArray_BHbOSqU1t9b3Gt7K2c6fQig slBitmap;
tyArray_B6durA4ZCi1xjJvRtyYxMg matrix;
tyObject_LLChunk_XsENErzHIZV9bhvyJx56wGw* llmem;
NI currMem;
NI maxMem;
NI freeMem;
NI occ;
NI lastSize;
tyObject_IntSet_EZObFrE3NC9bIb3YMkY9crZA chunkStarts;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* root;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* deleted;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* last;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw* freeAvlNodes;
NIM_BOOL locked;
NIM_BOOL blockChunkSizeIncrease;
NI nextChunkSize;
tyObject_AvlNode_IaqjtwKhxLEpvDS9bct9blEw bottomData;
tyObject_HeapLinks_PDV1HBZ8CQSQJC9aOBFNRSg heapLinks;
};
struct tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg {
NI stackScans;
NI cycleCollections;
NI maxThreshold;
NI maxStackSize;
NI maxStackCells;
NI cycleTableSize;
NI64 maxPause;
};
struct tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ {
NI counter;
NI max;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg* head;
tyObject_PageDesc_fublkgIY4LG3mT51LU2WHg** data;
};
struct tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ {
tyObject_GcStack_7fytPA5bBsob6See21YMRA stack;
NI cycleThreshold;
NI zctThreshold;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w zct;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w decStack;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w tempStack;
NI recGcLock;
tyObject_MemRegion_x81NhDv59b8ercDZ9bi85jyg region;
tyObject_GcStat_0RwLoVBHZPfUAcLczmfQAg stat;
tyObject_CellSet_jG87P0AI9aZtss9ccTYBIISQ marked;
tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w additionalRoots;
NI gcThreadId;
};
struct tyTuple_zwpS6d6iewrdlBSTNFoyVA {
NI Field0;
tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* Field1;
};
struct tySequence_Ef05srmQTDulnBdXR4Ja6Q {
  TGenericSeq Sup;
  tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* data[SEQ_DECL_SIZE];
};
struct tySequence_DXS6mEo7PVUFJkirsQ9bNQA {
  TGenericSeq Sup;
  tyObject_TInstantiation_5LqgVn6Tq9ainQRK7TQAQxA* data[SEQ_DECL_SIZE];
};
struct tySequence_DfgJFJEYoj4YBAHLZPl5lQ {
  TGenericSeq Sup;
  tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* data[SEQ_DECL_SIZE];
};
struct tySequence_ehmV9bTklH2Gt9cXHV9c0HLeQ {
  TGenericSeq Sup;
  tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* data[SEQ_DECL_SIZE];
};
struct tySequence_MvZmat48bhe9b6x9aUD58D5Q {
  TGenericSeq Sup;
  tyTuple_zwpS6d6iewrdlBSTNFoyVA data[SEQ_DECL_SIZE];
};
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, getPragmaVal_fMcQjyT1dTz2fXfUKJSCCA)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* procAst, tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw name);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, lookupParam_XJudyjSIbAQSzxP19bffS8A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* params, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* dest);
static N_INLINE(NI, len_P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NOINLINE(void, raiseFieldError)(NimStringDesc* f);
N_NOINLINE(void, raiseIndexError2)(NI i, NI n);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, localError_NF6kBGchnhQYPbCedyefVA)(tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info, NimStringDesc* arg);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatOpenArray)(NimStringDesc* formatstr, NimStringDesc** a, NI aLen_0);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, dollar__qX5C9b0n9bOP7jk69amC8dA7A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_LIB_PRIVATE N_NIMCALL(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ*, skipTypes_zsqmUNR5OZrTUna0Y9bdu9bg)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* t, tySet_tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag kinds);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, nsuFormatSingleElem)(NimStringDesc* formatstr, NimStringDesc* a);
N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newTree_FpOm4fidh9bWdkMa1BMRJkQ)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw** children, NI childrenLen_0);
N_LIB_PRIVATE N_NIMCALL(void, liftLocals_UcDN5YNBelL9bXFeLvxzn7Q)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NI i, tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g* c);
static N_INLINE(NIM_BOOL, interestingVar_ISRlamvcJhcnDvn0K9aiZPQliftlocals)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, lookupOrAdd_n6xVDBYbDiXGgZPQefdKGg)(tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g* c, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, addUniqueField_CLL3aqLIY5XbgRQPQDI3cw)(tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* obj, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s, tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newNodeI_vokyXY9cZDshCSxFKChhG9bg)(tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw kind, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr);
static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NOINLINE(void, addZCT_Y66tOYFjgwJ0k4aLz4bc0Q)(tyObject_CellSeq_Axo1XVm9aaQueTOldv8le5w* s, tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c);
N_LIB_PRIVATE N_NIMCALL(void, add_P8dDSotTW25BkfbyspojGg)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* father, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* son);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newSymNode_AFd9c9cdRrILXl9anrr9aRvqig)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info);
N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, newSymNode_I2DV2TmmOysY1ZEGW19b9bRg)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* sym);
static N_INLINE(NI, safeLen_P89cqdlERShb9alU3iC0yj8w_2ast)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n);
extern tyObject_GcHeap_1TRH1TZMaVZTnLNcIHuNFQ gch_IcYaEuuWivYAS86vFMTS3Q;
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_xMgMWEFctBTF9b4zdqZ9bcYg_2 = {
0xEC, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_xMgMWEFctBTF9b4zdqZ9bcYg_3, "sons", 4);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_xMgMWEFctBTF9b4zdqZ9bcYg_4 = {
0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_xMgMWEFctBTF9b4zdqZ9bcYg_5, "sym", 3);
static NIM_CONST tySet_tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw TM_xMgMWEFctBTF9b4zdqZ9bcYg_6 = {
0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00}
;
STRING_LITERAL(TM_xMgMWEFctBTF9b4zdqZ9bcYg_7, "ident", 5);
STRING_LITERAL(TM_xMgMWEFctBTF9b4zdqZ9bcYg_9, "\'$1\' is not a parameter of \'$2\'", 31);
STRING_LITERAL(TM_xMgMWEFctBTF9b4zdqZ9bcYg_10, "parameter \'$1\' is not a pointer to a partial object", 51);

static N_INLINE(NI, len_P89cqdlERShb9alU3iC0yj8wast)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	NI T1_;
	result = (NI)0;
	if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
	T1_ = ((*n).sons ? (*n).sons->Sup.len : 0);
	result = T1_;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*, lookupParam_XJudyjSIbAQSzxP19bffS8A)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* params, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* dest) {
	tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* result;
{	result = (tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w*)0;
	{
		if (!!(((*dest).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 2)))) goto LA3_;
		result = NIM_NIL;
		goto BeforeRet_;
	}
	LA3_: ;
	{
		NI i;
		NI colontmp_;
		NI i_2;
		i = (NI)0;
		colontmp_ = (NI)0;
		colontmp_ = len_P89cqdlERShb9alU3iC0yj8wast(params);
		i_2 = ((NI) 1);
		{
			while (1) {
				NI TM_xMgMWEFctBTF9b4zdqZ9bcYg_8;
				if (!(i_2 < colontmp_)) goto LA7;
				i = i_2;
				{
					NIM_BOOL T10_;
					T10_ = (NIM_BOOL)0;
					if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*params).kind)>>3] &(1U<<((NU)((*params).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
					if ((NU)(i) >= (NU)((*params).sons ? (*params).sons->Sup.len : 0)) raiseIndexError2(i,((*params).sons ? (*params).sons->Sup.len : 0)-1);
					T10_ = ((*(*params).sons->data[i]).kind == ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3));
					if (!(T10_)) goto LA11_;
					if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*params).kind)>>3] &(1U<<((NU)((*params).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
					if ((NU)(i) >= (NU)((*params).sons ? (*params).sons->Sup.len : 0)) raiseIndexError2(i,((*params).sons ? (*params).sons->Sup.len : 0)-1);
					if (!(((TM_xMgMWEFctBTF9b4zdqZ9bcYg_4[(NU)((*(*params).sons->data[i]).kind)>>3] &(1U<<((NU)((*(*params).sons->data[i]).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_5));
					if (!(((TM_xMgMWEFctBTF9b4zdqZ9bcYg_6[(NU)((*dest).kind)>>3] &(1U<<((NU)((*dest).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_7));
					T10_ = ((*(*(*(*params).sons->data[i]).sym).name).Sup.id == (*(*dest).ident).Sup.id);
					LA11_: ;
					if (!T10_) goto LA12_;
					if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*params).kind)>>3] &(1U<<((NU)((*params).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
					if ((NU)(i) >= (NU)((*params).sons ? (*params).sons->Sup.len : 0)) raiseIndexError2(i,((*params).sons ? (*params).sons->Sup.len : 0)-1);
					if (!(((TM_xMgMWEFctBTF9b4zdqZ9bcYg_4[(NU)((*(*params).sons->data[i]).kind)>>3] &(1U<<((NU)((*(*params).sons->data[i]).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_5));
					result = (*(*params).sons->data[i]).sym;
					goto BeforeRet_;
				}
				LA12_: ;
				TM_xMgMWEFctBTF9b4zdqZ9bcYg_8 = addInt(i_2, ((NI) 1));
				i_2 = (NI)(TM_xMgMWEFctBTF9b4zdqZ9bcYg_8);
			} LA7: ;
		}
	}
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {
	void* T1_;
	T1_ = (void*)0;
	T1_ = memset(a, v, ((size_t) (size)));
}

static N_INLINE(void, nimZeroMem)(void* p, NI size) {
	nimSetMem_zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

static N_INLINE(NIM_BOOL, interestingVar_ISRlamvcJhcnDvn0K9aiZPQliftlocals)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s) {
	NIM_BOOL result;
	NIM_BOOL T1_;
	result = (NIM_BOOL)0;
	T1_ = (NIM_BOOL)0;
	T1_ = ((2100000 &(1U<<((NU)((*s).kind)&31U)))!=0);
	if (!(T1_)) goto LA2_;
	T1_ = !((((*s).flags &((NU64)1<<((NU)(((tyEnum_TSymFlag_K9ay6LWMat9bUiT9bIbMxpDHw) 3))&63U)))!=0));
	LA2_: ;
	result = T1_;
	return result;
}

static N_INLINE(void, incRef_AT1eRuflKWyTTBdLjEDZbg_3system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) + (NU64)(((NI) 8)));
}

static N_INLINE(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*, usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem)(void* usr) {
	tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* result;
	result = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
	result = ((tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*) ((NI)((NU64)(((NI) (ptrdiff_t) (usr))) - (NU64)(((NI) 16)))));
	return result;
}

static N_INLINE(void, rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	addZCT_Y66tOYFjgwJ0k4aLz4bc0Q((&gch_IcYaEuuWivYAS86vFMTS3Q.zct), c);
}

static N_INLINE(void, decRef_AT1eRuflKWyTTBdLjEDZbgsystem)(tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* c) {
	(*c).refcount = (NI)((NU64)((*c).refcount) - (NU64)(((NI) 8)));
	{
		if (!((NU64)((*c).refcount) < (NU64)(((NI) 8)))) goto LA3_;
		rtlAddZCT_AT1eRuflKWyTTBdLjEDZbg_2system(c);
	}
	LA3_: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T5_;
		if (!!((src == NIM_NIL))) goto LA3_;
		T5_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T5_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem(src);
		incRef_AT1eRuflKWyTTBdLjEDZbg_3system(T5_);
	}
	LA3_: ;
	{
		tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g* T10_;
		if (!!(((*dest) == NIM_NIL))) goto LA8_;
		T10_ = (tyObject_Cell_1zcF9cV8XIAtbN8h5HRUB8g*)0;
		T10_ = usrToCell_QFQqcLB3lgOdwipkv9a60xwsystem((*dest));
		decRef_AT1eRuflKWyTTBdLjEDZbgsystem(T10_);
	}
	LA8_: ;
	(*dest) = src;
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, lookupOrAdd_n6xVDBYbDiXGgZPQefdKGg)(tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g* c, tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* s, tyObject_TLineInfo_WGx4rAexNXnczy1Avn646Q info) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* field;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* deref;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T1_;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* T2_;
	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	field = addUniqueField_CLL3aqLIY5XbgRQPQDI3cw((*c).objType, s, (*c).cache);
	deref = newNodeI_vokyXY9cZDshCSxFKChhG9bg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 65), info);
	asgnRef((void**) (&(*deref).typ), (*c).objType);
	T1_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T1_ = newSymNode_AFd9c9cdRrILXl9anrr9aRvqig((*c).partialParam, info);
	add_P8dDSotTW25BkfbyspojGg(deref, T1_);
	result = newNodeI_vokyXY9cZDshCSxFKChhG9bg(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 45), info);
	add_P8dDSotTW25BkfbyspojGg(result, deref);
	T2_ = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	T2_ = newSymNode_I2DV2TmmOysY1ZEGW19b9bRg(field);
	add_P8dDSotTW25BkfbyspojGg(result, T2_);
	asgnRef((void**) (&(*result).typ), (*field).typ);
	return result;
}

static N_INLINE(NI, safeLen_P89cqdlERShb9alU3iC0yj8w_2ast)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n) {
	NI result;
	result = (NI)0;
	{
		if (!((*n).kind >= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 0) && (*n).kind <= ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 23))) goto LA3_;
		result = ((NI) 0);
	}
	goto LA1_;
	LA3_: ;
	{
		result = len_P89cqdlERShb9alU3iC0yj8wast(n);
	}
	LA1_: ;
	return result;
}

N_LIB_PRIVATE N_NIMCALL(void, liftLocals_UcDN5YNBelL9bXFeLvxzn7Q)(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, NI i, tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g* c) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* it;
	if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
	if ((NU)(i) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(i,((*n).sons ? (*n).sons->Sup.len : 0)-1);
	it = (*n).sons->data[i];
	switch ((*it).kind) {
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 3):
	{
		{
			NIM_BOOL T4_;
			if (!(((TM_xMgMWEFctBTF9b4zdqZ9bcYg_4[(NU)((*it).kind)>>3] &(1U<<((NU)((*it).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_5));
			T4_ = (NIM_BOOL)0;
			T4_ = interestingVar_ISRlamvcJhcnDvn0K9aiZPQliftlocals((*it).sym);
			if (!T4_) goto LA5_;
			if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*n).kind)>>3] &(1U<<((NU)((*n).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
			if ((NU)(i) >= (NU)((*n).sons ? (*n).sons->Sup.len : 0)) raiseIndexError2(i,((*n).sons ? (*n).sons->Sup.len : 0)-1);
			if (!(((TM_xMgMWEFctBTF9b4zdqZ9bcYg_4[(NU)((*it).kind)>>3] &(1U<<((NU)((*it).kind)&7U)))!=0))) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_5));
			asgnRef((void**) (&(*n).sons->data[i]), lookupOrAdd_n6xVDBYbDiXGgZPQefdKGg(c, (*it).sym, (*it).info));
		}
		LA5_: ;
	}
	break;
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 51) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 52):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 98):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 79) ... ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 81):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 84):
	case ((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 159):
	{
	}
	break;
	default:
	{
		{
			NI i_2;
			NI colontmp_;
			NI i_3;
			i_2 = (NI)0;
			colontmp_ = (NI)0;
			colontmp_ = safeLen_P89cqdlERShb9alU3iC0yj8w_2ast(it);
			i_3 = ((NI) 0);
			{
				while (1) {
					NI TM_xMgMWEFctBTF9b4zdqZ9bcYg_11;
					if (!(i_3 < colontmp_)) goto LA11;
					i_2 = i_3;
					liftLocals_UcDN5YNBelL9bXFeLvxzn7Q(it, i_2, c);
					TM_xMgMWEFctBTF9b4zdqZ9bcYg_11 = addInt(i_3, ((NI) 1));
					i_3 = (NI)(TM_xMgMWEFctBTF9b4zdqZ9bcYg_11);
				} LA11: ;
			}
		}
	}
	break;
	}
}

N_LIB_PRIVATE N_NIMCALL(tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*, liftLocalsIfRequested_LPFQUSXwjhtGHYhcDkDrbA)(tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* prc, tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* n, tyObject_IdentCachecolonObjectType__TzLHS09bRH9a0TYLs39cqcNaw* cache, tyObject_ConfigRefcolonObjectType__LaK09ayL9alwKUad7rts0rTw* conf) {
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* result;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* liftDest;
	tyObject_TSym_JpsEh5i1AcKChGYbg7aV4w* partialParam;
	tyObject_TType_v9ae2Dpu13OW2ZJ2U9bNMd9cQ* objType;
	tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g c;
	tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw* w;
	tyArray_jlWPjgtbdjE069arIWHC9c9bg T19_;
{	result = (tyObject_TNode_bROa11lyF5vxEN9aYNbHmhw*)0;
	liftDest = getPragmaVal_fMcQjyT1dTz2fXfUKJSCCA((*prc).ast, ((tyEnum_TSpecialWord_ycbpMCRV6Cd2eBh3X9biEiw) 207));
	{
		if (!(liftDest == NIM_NIL)) goto LA3_;
		result = n;
		goto BeforeRet_;
	}
	LA3_: ;
	partialParam = lookupParam_XJudyjSIbAQSzxP19bffS8A((*(*prc).typ).n, liftDest);
	{
		tyArray_Re75IspeoxXy2oCZHwcRrA T9_;
		NimStringDesc* T10_;
		if (!(partialParam == 0)) goto LA7_;
		nimZeroMem((void*)T9_, sizeof(tyArray_Re75IspeoxXy2oCZHwcRrA));
		T9_[0] = dollar__qX5C9b0n9bOP7jk69amC8dA7A(liftDest);
		T9_[1] = copyString((*(*prc).name).s);
		T10_ = (NimStringDesc*)0;
		T10_ = nsuFormatOpenArray(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_9), T9_, 2);
		localError_NF6kBGchnhQYPbCedyefVA(conf, (*liftDest).info, T10_);
		result = n;
		goto BeforeRet_;
	}
	LA7_: ;
	objType = skipTypes_zsqmUNR5OZrTUna0Y9bdu9bg((*partialParam).typ, IL64(36275087638309136));
	{
		NIM_BOOL T13_;
		NimStringDesc* T17_;
		NimStringDesc* T18_;
		T13_ = (NIM_BOOL)0;
		T13_ = !(((*objType).kind == ((tyEnum_TTypeKind_9a3YiReNVD0IJHWFKgXRe9ag) 17)));
		if (T13_) goto LA14_;
		T13_ = !((((*objType).flags &((NU64)1<<((NU)(((tyEnum_TTypeFlag_x2m5g1NpbmDig4wLT3Ylhw) 16))&63U)))!=0));
		LA14_: ;
		if (!T13_) goto LA15_;
		T17_ = (NimStringDesc*)0;
		T17_ = dollar__qX5C9b0n9bOP7jk69amC8dA7A(liftDest);
		T18_ = (NimStringDesc*)0;
		T18_ = nsuFormatSingleElem(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_10), T17_);
		localError_NF6kBGchnhQYPbCedyefVA(conf, (*liftDest).info, T18_);
		result = n;
		goto BeforeRet_;
	}
	LA15_: ;
	nimZeroMem((void*)(&c), sizeof(tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g));
	chckNil((void*)(&c));
	nimZeroMem((void*)(&c), sizeof(tyObject_Ctx_A9b2QU9aJFjQJmSPHiXNYt7g));
	c.partialParam = partialParam;
	c.objType = objType;
	c.cache = cache;
	nimZeroMem((void*)T19_, sizeof(tyArray_jlWPjgtbdjE069arIWHC9c9bg));
	T19_[0] = n;
	w = newTree_FpOm4fidh9bWdkMa1BMRJkQ(((tyEnum_TNodeKind_G4E4Gxe7oI2Cm03rkiOzQw) 115), T19_, 1);
	liftLocals_UcDN5YNBelL9bXFeLvxzn7Q(w, ((NI) 0), (&c));
	if (((TM_xMgMWEFctBTF9b4zdqZ9bcYg_2[(NU)((*w).kind)>>3] &(1U<<((NU)((*w).kind)&7U)))!=0)) raiseFieldError(((NimStringDesc*) &TM_xMgMWEFctBTF9b4zdqZ9bcYg_3));
	if ((NU)(((NI) 0)) >= (NU)((*w).sons ? (*w).sons->Sup.len : 0)) raiseIndexError2(((NI) 0),((*w).sons ? (*w).sons->Sup.len : 0)-1);
	result = (*w).sons->data[((NI) 0)];
	}BeforeRet_: ;
	return result;
}