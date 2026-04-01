#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>

/* Auto-injected type definitions by preprocessor */
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
 * Binary: build/x64/5-23/5-23_clang_O1_g
 * Processor: pc
 */

/* Global function pointer for _gmon_start__ */
static long long (*_gmon_start__)(void) = 0;

/* Function: .init_proc @ 0x1000 */
long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( _gmon_start__ )
 return (long long (**)(void))_gmon_start__;
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 /* JUMPOUT removed - placeholder function */
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1190 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x11B0 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x11C0 */
int param_macro_functions(int x, int y)
{
 if ( x > y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0x11D0 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x11E0 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x11F0 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1200 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1210 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1220 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1230 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1240 */
long long param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x1250 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1260 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1270 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x1280 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1290 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x12B0 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x12E0 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x12F0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1300 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1310 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1320 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:46");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1360 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:46");
 return 382;
}


/* Global data for SIMD operations */
static __m128i xmmword_22D0 = {0};
static __m128i xmmword_22F0 = {0};
static __m128i xmmword_2300 = {0};

/* Helper function for qmemcpy (IDA Pro helper) */
static void qmemcpy(void *dst, const void *src, size_t n);

/* String constants */
static const char *s = "Testing preprocessing features";
static const char *aPpL201D = "param_macro_constants: %d\n";
static const char *aPpL202D = "call_macro_functions: %d\n";
static const char *aPpL203D = "call_conditional_compile: %d\n";
static const char *aPpL204D = "call_multi_branch_compile: %d\n";
static const char *aPpL301D = "call_macro_recursion: %d\n";
static const char *aPpL302D = "call_stringize: %d\n";
static const char *aPpL303D = "call_token_paste: %d\n";
static const char *aPpL304D = "call_variadic_macro: %d\n";
static const char *aPpL305D = "call_macro_override: %d\n";
static const char *aPpL306D = "call_include_guard: %d\n";
static const char *aPpL307D = "call_builtin_macros: %d\n";

/* Function: test_preprocessing_features @ 0x13A0 */
void test_preprocessing_features()
{
 puts(s);
 printf(aPpL201D, 64);
 printf(aPpL202D, 30);
 printf(aPpL203D, 32);
 printf(aPpL204D, 57122);
 printf(aPpL301D, 116);
 printf(aPpL302D, 19);
 printf(aPpL303D, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(aPpL304D, 60);
 printf(aPpL305D, 16);
 printf(aPpL306D, 500);
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:46");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x14D0 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x14E0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x14F0 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x1510 */
int call_asm_clobber()
{
 int result; // eax
 long long i; // rcx
 __m128i v2; // [rsp+0h] [rbp-18h]
 int v3; // [rsp+10h] [rbp-8h]

 v3 = 5;
 v2 = xmmword_22D0;
 result = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 result += *((unsigned int *)&v2 + i);
 return result;
}


/* Function: param_asm_multi_insn @ 0x1550 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1570 */
// local variable allocation has failed, the output may be wrong!
int call_asm_multi_insn()
{
 int result; // eax
 unsigned char v1[48]; // [rsp+0h] [rbp-38h] OVERLAPPED BYREF

 strcpy(v1, "Hello ASM");
 memset(&v1[16], 0, 32);
 qmemcpy(&v1[16], v1, 9u);
 result = -1;
 if ( !(v1[16] ^ 0x48 | v1[20] ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15E0 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x15F0 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
 return 0;
}


/* Helper function for qmemcpy (IDA Pro helper) - definition */
static void qmemcpy(void *dst, const void *src, size_t n) {
 memcpy(dst, src, n);
}

/* Windows intrinsic compatibility for _InterlockedExchangeAdd */
static int _InterlockedExchangeAdd(int *ptr, int val) {
 return __sync_fetch_and_add(ptr, val);
}

/* Function: call_asm_simd @ 0x1600 */
int call_asm_simd()
{
 __m128i v0; // xmm0
 int *v0_ptr;

 v0 = _mm_add_epi32(xmmword_22F0, xmmword_2300);
 v0_ptr = (int *)&v0;
 return v0_ptr[3] + v0_ptr[2] + v0_ptr[0] + v0_ptr[1];
}


/* Function: param_asm_atomic @ 0x1650 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1660 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1670 */
int call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [rsp+0h] [rbp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v2 + v0 + 5;
}


/* Function: param_dynamic_code @ 0x1690 */
int param_dynamic_code(int x)
{
 size_t v1; // r15
 int v2; // ebp
 unsigned int *v3; // rax
 void *v4; // rbx

 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 if ( v3 != (unsigned int *)-1LL )
 {
 v4 = v3;
 *((unsigned short *)v3 + 2) = -15611;
 *v3 = -1065092983;
 v2 = ((long long ( *)(unsigned long long))v3)((unsigned int)x);
 munmap(v4, v1);
 }
 return v2;
}


/* Function: param_memory_protection @ 0x1700 */
int param_memory_protection()
{
 size_t v0; // r14
 int v1; // ebp
 int *v2; // rax
 int *v3; // rbx
 int v4; // r15d

 v0 = sysconf(30);
 v1 = -1;
 v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (int *)-1LL )
 {
 v3 = v2;
 *v2 = 42;
 v1 = -2;
 if ( !mprotect(v2, v0, 1) )
 {
 v4 = *v3;
 v1 = -3;
 if ( !mprotect(v3, v0, 3) )
 {
 *v3 = 100;
 v1 = v4;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0x17A0 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x17B0 */
int call_asm_privileged()
{
 size_t v0; // r14
 int v1; // ebp
 unsigned int *v2; // rax
 void *v3; // rbx
 int v4; // ecx
 int result; // eax

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 if ( v2 != (unsigned int *)-1LL )
 {
 v3 = v2;
 *((unsigned short *)v2 + 2) = -15611;
 *v2 = -1065092983;
 v1 = ((long long ( *)(long long))v2)(10);
 munmap(v3, v0);
 }
 v4 = v1 ^ 0xF | param_memory_protection() ^ 0x2A;
 result = 77;
 if ( v4 )
 return v1;
 return result;
}


/* Global variable */
static int global_var = 100;

/* Function: param_memory_clobber_demo @ 0x1860 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* String constant for asm features */
static const char *asc_22A4 = "Testing ASM features";
static const char *aAsmL401D = "call_asm_basic: %d\n";
static const char *aAsmL402D = "call_asm_clobber: %d\n";
static const char *aAsmL403D = "call_asm_multi_insn: %lld\n";
static const char *aAsmL404D = "call_asm_simd: %d\n";
static const char *aAsmL405D = "call_asm_atomic: %d\n";
static const char *aAsmL406D = "call_asm_privileged: %d\n";

/* Function: test_asm_features @ 0x1880 */
void test_asm_features()
{
 unsigned int v3; // eax
 long long i; // rcx
 long long v7; // rsi
 signed int v8; // ebx
 unsigned int v9; // eax
 __m128i v12; // [rsp+20h] [rbp-38h]
 char v13[40]; // [rsp+30h] [rbp-28h] BYREF
 int v10; // for atomic operations

 puts(asc_22A4);
 printf(aAsmL401D, 15);
 v3 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v3 += xmmword_22D0[i % 4];
 printf(aAsmL402D, v3);
 strcpy(v13, "Hello ASM");
 memcpy(v13 + 16, v13, 9u);
 v7 = 0xFFFFFFFFLL;
 if ( !(v13[16] ^ 0x48 | v13[20] ^ 0x6F) )
 v7 = 42;
 printf(aAsmL403D, v7);
 v12 = _mm_add_epi32(xmmword_22F0, xmmword_2300);
 printf(aAsmL404D, (unsigned int)(((int *)&v12)[3] + ((int *)&v12)[2] + ((int *)&v12)[0] + ((int *)&v12)[1]));
 v10 = 10;
 v8 = __sync_fetch_and_add(&v10, 5);
 printf(aAsmL405D, (unsigned int)(v8 + v10 + 5));
 v9 = call_asm_privileged();
 printf(aAsmL406D, v9);
}


/* Function: main @ 0x19F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1A00 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4068 */

/* FAILED to decompile: puts @ 0x4070 */

/* FAILED to decompile: mmap @ 0x4078 */

/* FAILED to decompile: printf @ 0x4080 */

/* FAILED to decompile: munmap @ 0x4088 */

/* FAILED to decompile: mprotect @ 0x4090 */

/* FAILED to decompile: sysconf @ 0x4098 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40A0 */

/* FAILED to decompile: __gmon_start__ @ 0x40B0 */

/* Total functions decompiled: 51, failed: 9 */
