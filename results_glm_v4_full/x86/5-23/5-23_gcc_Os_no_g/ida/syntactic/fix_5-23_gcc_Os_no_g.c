/* Auto-injected type definitions by preprocessor */
#include <emmintrin.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Linux-compatible implementation of Windows _InterlockedExchangeAdd intrinsic */
static inline long _InterlockedExchangeAdd(volatile long *Target, long Value)
{
    return __sync_fetch_and_add(Target, Value);
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_Os_no_g
 * Processor: pc
 */


void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" : : : "memory");
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


/* Function: main @ 0x1130 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_117C @ 0x117C */
void sub_117C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1180 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x12B9 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12BD */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x12C1 */
int param_macro_constants(int a1)
{
 int result; // eax

 result = 512;
 if ( a1 > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x12DE */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x12E8 */
int param_macro_functions(int a1, int a2)
{
 int v2; // edx

 v2 = a1;
 if ( a1 < a2 )
 v2 = a2;
 return v2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x1303 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x130D */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x131D */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1327 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x1339 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1343 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x1352 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x135C */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1366 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1370 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x137D */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x138D */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1397 */
int param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x13D0 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x13E7 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
}


/* Function: call_macro_override @ 0x13FA */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1404 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x140E */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1418 */
int param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:02");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x146A */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Global data definitions */
static int global_var;

static const uint8_t unk_22C0[16] = {1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0};
static const uint8_t unk_22D0[16] = {10, 0, 0, 0, 20, 0, 0, 0, 30, 0, 0, 0, 40, 0, 0, 0};

static const char asc_21EC[] = "=== ASM Tests ===\n";
static const char aAsmL401D[] = "ASM.L401=%d\n";
static const char aAsmL402D[] = "ASM.L402=%d\n";
static const char aAsmL403D[] = "ASM.L403=%d\n";
static const char aAsmL404D[] = "ASM.L404=%lld\n";
static const char aAsmL405D[] = "ASM.L405=%lld\n";
static const char aAsmL406D[] = "ASM.L406=%d\n";

/* Function: test_preprocessing_features @ 0x147D */
int test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax;
 
 const char asc_206E[] = "=== Preprocessor Tests ===\n";
 const char aPpL201D[] = "PP.L201=%d\n";
 const char aPpL202D[] = "PP.L202=%d\n";
 const char aPpL203D[] = "PP.L203=%d\n";
 const char aPpL204D[] = "PP.L204=%d\n";
 const char aPpL301D[] = "PP.L301=%d\n";
 const char aPpL302D[] = "PP.L302=%d\n";
 const char aPpL303D[] = "PP.L303=%d\n";
 const char aPpL304D[] = "PP.L304=%d\n";
 const char aPpL305D[] = "PP.L305=%d\n";
 const char aPpL306D[] = "PP.L306=%d\n";
 const char aPpL307D[] = "PP.L307=%d\n";

 __printf_chk(1, asc_206E);
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


/* Function: param_asm_basic @ 0x1588 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x159D */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x15B0 */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x15D3 */
int call_asm_clobber()
{
 unsigned char v1[20]; // [esp+10h] [ebp-20h] BYREF
 unsigned int v2; // [esp+24h] [ebp-Ch]

 v2 = 0;
 return param_asm_clobber((int)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x1606 */
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


/* Function: call_asm_multi_insn @ 0x1629 */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[10]; // [esp-3Ah] [ebp-3Ah] BYREF
 unsigned char v2[32]; // [esp-30h] [ebp-30h] BYREF
 unsigned int v3; // [esp-10h] [ebp-10h]

 v3 = 0;
 memset(v2, 0, sizeof(v2));
 strcpy(v1, "Hello ASM");
 param_asm_multi_insn(v2, v1, 9);
 result = -1;
 if ( v2[0] == 72 && v2[4] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x16AD */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x16CE */
int param_simd_intrinsics(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a2, *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x16EC */
long long call_asm_simd()
{
 long long result; // rax
 __m128i v1; // [esp-40h] [ebp-40h] BYREF
 __m128i v2; // [esp-30h] [ebp-30h] BYREF
 __m128i v3; // [esp-20h] [ebp-20h] BYREF
 unsigned int v4; // [esp-10h] [ebp-10h]

 v4 = 0;
 memcpy(&v1, &unk_22C0, sizeof(v1));
 memcpy(&v2, &unk_22D0, sizeof(v2));
 param_asm_simd(&v1, &v2, &v3);
 {
   int *arr = (int *)&v3;
   result = (long long)(arr[3] + arr[2] + arr[0] + arr[1]);
 }
 return result;
}


/* Function: param_asm_atomic @ 0x1763 */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return _InterlockedExchangeAdd(a1, a2) + a2;
}


/* Function: param_atomic_c11 @ 0x177A */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x1791 */
long long call_asm_atomic()
{
 signed int v0; // eax
 long long result; // rax
 signed int v2; // [esp+8h] [ebp-10h] BYREF
 unsigned int v3; // [esp+Ch] [ebp-Ch]

 v3 = 0;
 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 result = v0 + v2 + 5;
 return result;
}


/* Function: param_dynamic_code @ 0x17D3 */
int param_dynamic_code(int a1)
{
 size_t v1; // edi
 int v2; // esi
 void *v3; // eax

 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 if ( v3 != (void *)-1 )
 {
 v2 = a1 + 5;
 munmap(v3, v1);
 }
 return v2;
}


/* Function: param_memory_protection @ 0x182D */
int param_memory_protection()
{
 size_t v0; // edi
 int *v1; // eax
 int v2; // edx
 int *v3; // esi
 int v5; // [esp+0h] [ebp-1Ch]

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 v2 = -1;
 if ( v1 != (int *)-1 )
 {
 v3 = v1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v3, v0);
 return -2;
 }
 else
 {
 v5 = *v3;
 if ( mprotect(v3, v0, 3) )
 {
 munmap(v3, v0);
 return -3;
 }
 else
 {
 *v3 = 100;
 munmap(v3, v0);
 return v5;
 }
 }
 }
 return v2;
}


/* Function: param_clobber_importance @ 0x18E5 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x1907 */
int call_asm_privileged()
{
 int v0; // ebx
 int v1; // esi
 int v2; // eax

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if ( v0 == 15 && v1 == 42 && v2 == 20 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x194F */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x1970 */
int test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 __printf_chk(1, asc_21EC);
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


/* Function: __x86.get_pc_thunk.ax @ 0x1A26 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x1A2A */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x1A30 */
void _stack_chk_fail_local()
{
 __asm__ volatile ("add $_GLOBAL_OFFSET_TABLE_ - (.), %ebx");
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

/* Total functions decompiled: 67, failed: 8 */
