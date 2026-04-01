/* Auto-injected type definitions by preprocessor */
#include <emmintrin.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Missing global variable declarations */
#define __readgsdword(x) (0)
#define _InterlockedExchangeAdd(a, b) __sync_fetch_and_add((a), (b))

static char global_var[100] = "";
static char asc_2294[] = "ASM Test Results:\n";
static char aAsmL401D[] = "ASM Basic: %d\n";
static char aAsmL402D[] = "ASM Clobber: %d\n";
static char aAsmL403D[] = "ASM Multi Insn: %d\n";
static char aAsmL404D[] = "ASM SIMD: %lld\n";
static char aAsmL405D[] = "ASM Atomic: %lld\n";
static char aAsmL406D[] = "ASM Privileged: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_O1_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ __volatile__("");
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
 sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
 sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
int sub_10B0(int a1)
{
 return (*(int (**)(void))(a1 + 44))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_115C @ 0x115C */
void sub_115C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1160 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1299 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x129D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x12A1 */
int param_macro_constants(int a1)
{
 int result; // eax

 result = 512;
 if ( a1 > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x12BB */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x12C5 */
int param_macro_functions(int a1, int a2)
{
 int v2; // edx

 v2 = a1;
 if ( a1 < a2 )
 v2 = a2;
 return v2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x12DE */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x12E8 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x12F5 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x12FF */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x130F */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1319 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x1325 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x132F */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1339 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1343 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x1351 */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x1361 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x136B */
int param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x13A3 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x13B9 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
}


/* Function: call_macro_override @ 0x13C6 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x13D0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x13DA */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x13E4 */
int param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:50");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x1434 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x1446 */
static char asc_21F4[] = "Preprocessing Test Results:\n";
static char aPpL201D[] = "Macro Constants: %d\n";
static char aPpL202D[] = "Macro Functions: %d\n";
static char aPpL203D[] = "Conditional Compile: %d\n";
static char aPpL204D[] = "Multi Branch Compile: %d\n";
static char aPpL301D[] = "Macro Recursion: %d\n";
static char aPpL302D[] = "Stringize: %d\n";
static char aPpL303D[] = "Token Paste: %d\n";
static char aPpL304D[] = "Variadic Macro: %d\n";
static char aPpL305D[] = "Macro Override: %d\n";
static char aPpL306D[] = "Include Guard: %d\n";
static char aPpL307D[] = "Builtin Macros: %d\n";
int test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax

 __printf_chk(1, asc_21F4);
 __printf_chk(1, aPpL201D, 64);
 __printf_chk(1, aPpL202D, 30);
 __printf_chk(1, aPpL203D, 32);
 __printf_chk(1, aPpL204D, 57122);
 __printf_chk(1, aPpL301D, 116);
 __printf_chk(1, aPpL302D, 19);
 __printf_chk(1, aPpL303D, 60);
 v0 = call_variadic_macro();
 __printf_chk(1, aPpL304D, v0);
 __printf_chk(1, aPpL305D, 16);
 __printf_chk(1, aPpL306D, 500);
 v1 = call_builtin_macros();
 return __printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0x154B */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x155D */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x156C */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x158D */
int call_asm_clobber()
{
 unsigned char v1[20]; // [esp+8h] [ebp-24h] BYREF
 unsigned int v2; // [esp+1Ch] [ebp-10h]

 v2 = __readgsdword(0x14u);
 return param_asm_clobber((int)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x15C5 */
char param_asm_multi_insn(unsigned char *a1, char *a2, int a3)
{
 char result; // al

 while ( a3 )
 {
 result = *a2;
 *a1++ = *a2++;
 --a3;
 }
 return result;
}


/* Function: call_asm_multi_insn @ 0x15E7 */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[10]; // [esp+2h] [ebp-3Ah] BYREF
 int v2; // [esp+Ch] [ebp-30h] BYREF
 int v3; // [esp+10h] [ebp-2Ch]
 int v4; // [esp+14h] [ebp-28h]
 int v5; // [esp+18h] [ebp-24h]
 int v6; // [esp+1Ch] [ebp-20h]
 int v7; // [esp+20h] [ebp-1Ch]
 int v8; // [esp+24h] [ebp-18h]
 int v9; // [esp+28h] [ebp-14h]
 unsigned int v10; // [esp+2Ch] [ebp-10h]

 v10 = __readgsdword(0x14u);
 strcpy(v1, "Hello ASM");
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 param_asm_multi_insn(&v2, v1, 9);
 if ( (unsigned char)v2 != 72 )
 return -1;
 result = -1;
 if ( (unsigned char)v3 == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x169B */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x16BE */
int param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x16DF */
long long call_asm_simd()
{
 long long result; // rax
 union { __m128i v; long long q[2]; int d[4]; } v1, v2, v3;
 unsigned int v4; // [esp+3Ch] [ebp-10h]
 union { long long ll; unsigned int d[2]; } result_union;

 v4 = __readgsdword(0x14u);
 v1.q[0] = 0x200000001LL;
 v1.q[1] = 0x400000003LL;
 v2.q[0] = 0x600000005LL;
 v2.q[1] = 0x800000007LL;
 param_asm_simd(&v1.v, &v2.v, &v3.v);
 result_union.d[0] = v3.d[3] + v3.d[2] + v3.d[0] + v3.d[1];
 result_union.d[1] = v4 - __readgsdword(0x14u);
 result = result_union.ll;
 return result;
}


/* Function: param_asm_atomic @ 0x176F */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return _InterlockedExchangeAdd(a1, a2) + a2;
}


/* Function: param_atomic_c11 @ 0x1784 */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x1799 */
long long call_asm_atomic()
{
 signed int v0; // eax
 long long result; // rax
 signed int v2; // [esp+8h] [ebp-14h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-10h]
 union { long long ll; unsigned int d[2]; } result_union;

 v3 = __readgsdword(0x14u);
 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 result_union.d[0] = v0 + v2 + 5;
 result_union.d[1] = v3 - __readgsdword(0x14u);
 result = result_union.ll;
 return result;
}


/* Function: param_dynamic_code @ 0x17DF */
int param_dynamic_code(int a1)
{
 size_t v1; // esi
 void *v2; // eax
 int v3; // edi

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (void *)-1 )
 return -1;
 v3 = a1 + 5;
 munmap(v2, v1);
 return v3;
}


/* Function: param_memory_protection @ 0x1839 */
int param_memory_protection()
{
 size_t v0; // edi
 int *v1; // eax
 int *v2; // esi
 int v3; // ebp

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (int *)-1 )
 return -1;
 v2 = v1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v2, v0);
 return -2;
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 {
 munmap(v2, v0);
 return -3;
 }
 else
 {
 *v2 = 100;
 munmap(v2, v0);
 }
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x18EF */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x190F */
int call_asm_privileged()
{
 int v0; // ebx
 int v1; // esi
 int v2; // eax

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if ( v1 == 42 && v0 == 15 && v2 == 20 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x195A */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x197B */
int test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 __printf_chk(1, asc_2294);
 v0 = call_asm_basic();
 __printf_chk(1, aAsmL401D, v0);
 v1 = call_asm_clobber();
 __printf_chk(1, aAsmL402D, v1);
 v2 = call_asm_multi_insn();
 __printf_chk(1, aAsmL403D, v2);
 v3 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v3);
 v4 = call_asm_atomic();
 __printf_chk(1, aAsmL405D, v4);
 v5 = call_asm_privileged();
 return __printf_chk(1, aAsmL406D, v5);
}


/* Function: main @ 0x1A2B */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: __x86.get_pc_thunk.cx @ 0x1A46 */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1A50 */
void _stack_chk_fail_local()
{
 __asm__ __volatile__("");
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x4018 */

/* FAILED to decompile: mprotect @ 0x401C */

/* FAILED to decompile: __stack_chk_fail @ 0x4020 */

/* FAILED to decompile: sysconf @ 0x4024 */

/* FAILED to decompile: __cxa_finalize @ 0x4028 */

/* FAILED to decompile: mmap @ 0x402C */

/* FAILED to decompile: __printf_chk @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4034 */

/* Total functions decompiled: 66, failed: 8 */
