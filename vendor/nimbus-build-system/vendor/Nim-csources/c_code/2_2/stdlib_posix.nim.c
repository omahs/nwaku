/* Generated by Nim Compiler v0.20.0 */
/*   (c) 2019 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <sys/types.h>
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
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
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
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG_T7ZeAv6ofGPBA29bsuGG1ug)(int s);
TNimType NTI_r9bTMVI8f19ah9b11jMgY4kPg_;

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

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFSIGNALED_o9b5GK70QLj9ahJeczQ2LyRg)(int s) {
	NIM_BOOL result;
	NI TM_mJPr4mHlDfNAl9asG6X7NFA_2;
	result = (NIM_BOOL)0;
	TM_mJPr4mHlDfNAl9asG6X7NFA_2 = addInt((NI32)(s & ((NI32) 127)), ((NI32) 1));
	if (TM_mJPr4mHlDfNAl9asG6X7NFA_2 < (-2147483647 -1) || TM_mJPr4mHlDfNAl9asG6X7NFA_2 > 2147483647) raiseOverflow();
	result = (((NI8) 0) < (NI8)((NI64)(((NI8) ((NI32)(TM_mJPr4mHlDfNAl9asG6X7NFA_2)))) >> (NU64)(((NI) 1))));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(int, WTERMSIG_T7ZeAv6ofGPBA29bsuGG1ug)(int s) {
	int result;
	result = (int)0;
	result = (NI32)(s & ((NI32) 127));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(int, WEXITSTATUS_T7ZeAv6ofGPBA29bsuGG1ug_2)(int s) {
	int result;
	result = (int)0;
	result = (NI32)((NI64)((NI32)(s & ((NI32) 65280))) >> (NU64)(((NI) 8)));
	return result;
}

N_LIB_PRIVATE N_NIMCALL(NIM_BOOL, WIFEXITED_o9b5GK70QLj9ahJeczQ2LyRg_2)(int s) {
	NIM_BOOL result;
	int T1_;
	result = (NIM_BOOL)0;
	T1_ = (int)0;
	T1_ = WTERMSIG_T7ZeAv6ofGPBA29bsuGG1ug(s);
	result = (T1_ == ((NI32) 0));
	return result;
}
N_LIB_PRIVATE N_NIMCALL(void, stdlib_posixDatInit000)(void) {
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.size = sizeof(pid_t);
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.kind = 34;
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.base = 0;
NTI_r9bTMVI8f19ah9b11jMgY4kPg_.flags = 3;
}
