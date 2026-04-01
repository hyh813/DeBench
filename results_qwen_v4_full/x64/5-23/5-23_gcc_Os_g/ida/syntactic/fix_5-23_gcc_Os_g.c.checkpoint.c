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
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_Os_g
 * Processor: pc
 */

/* External declarations */

/* Helper macros for decompiler artifacts */
#define __readfsqword(x) (0ULL)
#define _InterlockedExchangeAdd(ptr, val) __sync_fetch_and_add((int*)(ptr), (val))


/* Function: main @ 0x1100 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1209 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1221 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x122B */
int param_macro_functions(int x, int y)
{
 int v2; // eax

 v2 = x * x;
 if ( x < y )
 x = y;
 return x + v2;
}


/* Function: call_macro_functions @ 0x123C */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1246 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1251 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x125B */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1268 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1272 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x127A */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1284 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x128E */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1298 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x12A0 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x12AB */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x12B5 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x12DB */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x12F0 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x12FC */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1306 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1310 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x131A */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:39");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1362 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* String constants */
const char *asc_206A = "Testing preprocessing features:\n";
const char *aPpL201D = "  param_macro_constants: %d\n";
const char *aPpL202D = "  call_macro_constants: %d\n";
const char *aPpL203D = "  param_conditional_compile: %d\n";
const char *aPpL204D = "  call_multi_branch_compile: %d\n";
const char *aPpL301D = "  call_macro_recursion: %d\n";
const char *aPpL302D = "  call_stringize: %d\n";
const char *aPpL303D = "  call_token_paste: %d\n";
const char *aPpL304D = "  call_variadic_macro: %d\n";
const char *aPpL305D = "  call_macro_override: %d\n";
const char *aPpL306D = "  call_include_guard: %d\n";
const char *aPpL307D = "  call_builtin_macros: %d\n";
const char *asc_21DE = "Testing ASM features:\n";
const char *aAsmL401D = "  call_asm_basic: %d\n";
const char *aAsmL402D = "  call_asm_clobber: %d\n";
const char *aAsmL403D = "  call_asm_multi_insn: %d\n";
const char *aAsmL404D = "  call_asm_simd: %d\n";
const char *aAsmL405D = "  call_asm_atomic: %d\n";
const char *aAsmL406D = "  call_asm_privileged: %d\n";

/* Global variables */
int global_var = 0;

/* Function: test_preprocessing_features @ 0x136D */
void test_preprocessing_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax

 __printf_chk(1, asc_206A);
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
 __printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0x1496 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x14A6 */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x14B1 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x14CB */
// bad sp value at call has been detected, the output may be wrong!
int call_asm_clobber()
{
 int arr[5]; // [rsp+4h] [rbp-24h] BYREF

 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x1508 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1523 */
int call_asm_multi_insn()
{
 int result; // eax
 char src[10]; // [rsp+Eh] [rbp-3Ah] BYREF
 char dst[32]; // [rsp+18h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 memset(dst, 0, sizeof(dst));
 strcpy(src, "Hello ASM");
 param_asm_multi_insn(dst, src, 9u);
 result = -1;
 if ( dst[0] == 72 && dst[4] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15A1 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x15B5 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 int v3; // eax

 v3 = 0;
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)b, *(__m128i *)a);
 return v3;
}


/* Function: call_asm_simd @ 0x15C6 */
int call_asm_simd()
{
 int a[4]; // [rsp+8h] [rbp-40h] BYREF
 int b[4]; // [rsp+18h] [rbp-30h] BYREF
 int result[4]; // [rsp+28h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-10h]

 v4 = __readfsqword(0x28u);
 *(unsigned long long *)a = 0x200000001LL;
 *(unsigned long long *)&a[2] = 0x400000003LL;
 *(unsigned long long *)b = 0x600000005LL;
 *(unsigned long long *)&b[2] = 0x800000007LL;
 param_asm_simd(a, b, result);
 return result[3] + result[2] + result[0] + result[1];
}


/* Function: param_asm_atomic @ 0x1656 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1663 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1670 */
int call_asm_atomic()
{
 signed int v0; // eax
 int counter; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 counter = 10;
 v0 = _InterlockedExchangeAdd(&counter, 5u);
 return v0 + counter + 5;
}


/* Function: param_dynamic_code @ 0x16C0 */
int param_dynamic_code(int x)
{
 int v1; // r12d
 size_t v2; // r13
 unsigned int *v3; // rax
 void *v4; // rbp

 v1 = -1;
 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 != (unsigned int *)-1LL )
 {
 v4 = v3;
 *v3 = -1065092983;
 *((unsigned short *)v3 + 2) = -15611;
 v1 = ((long long ( *)(unsigned long long))v3)((unsigned int)x);
 munmap(v4, v2);
 }
 return v1;
}


/* Function: param_memory_protection @ 0x175A */
int param_memory_protection()
{
 int v0; // r12d
 size_t v1; // rbp
 int *v2; // rax
 int *v3; // rdi
 int *data; // [rsp+8h] [rbp-20h]

 v0 = -1;
 v1 = sysconf(30);
 v2 = (int *)mmap(0, v1, 3, 34, -1, 0);
 if ( v2 != (int *)-1LL )
 {
 data = v2;
 *v2 = 42;
 v3 = v2;
 if ( mprotect(v2, v1, 1) )
 {
 v0 = -2;
 munmap(v3, v1);
 }
 else
 {
 v0 = *data;
 if ( mprotect(v3, v1, 3) )
 v0 = -3;
 else
 *data = 100;
 munmap(data, v1);
 }
 }
 return v0;
}


/* Function: param_clobber_importance @ 0x1812 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1826 */
int call_asm_privileged()
{
 int v0; // r12d
 int v1; // eax
 int v2; // r8d

 v0 = param_dynamic_code(10);
 param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if ( v0 == 15 && v2 == 42 && v1 == 20 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x1870 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x188A */
void test_asm_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 __printf_chk(1, asc_21DE);
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
 __printf_chk(1, aAsmL406D, v5);
}


/* Function: .term_proc @ 0x194C */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: __stack_chk_fail @ 0x4028 */

/* FAILED to decompile: mmap @ 0x4030 */

/* FAILED to decompile: munmap @ 0x4038 */

/* FAILED to decompile: __printf_chk @ 0x4040 */

/* FAILED to decompile: mprotect @ 0x4048 */

/* FAILED to decompile: sysconf @ 0x4050 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4058 */

/* FAILED to decompile: __gmon_start__ @ 0x4068 */

/* Total functions decompiled: 57, failed: 9 */
