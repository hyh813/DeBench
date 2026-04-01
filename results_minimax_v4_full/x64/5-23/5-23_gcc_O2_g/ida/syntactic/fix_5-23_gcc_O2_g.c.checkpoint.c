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

/* Required includes */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>
#include <mmintrin.h>

/* Stack canary read - not needed for functionality, returning 0 */
static inline unsigned long long read_fs_qword(unsigned long offset) {
    unsigned long long result = 0;
    __asm__ volatile("mov %%fs:0x0, %0" : "=r"(result));
    return result;
}

/* External declaration for gmon startup */
void (*_gmon_start__)(void);

/* Global variables */
int global_var = 0;

/* String literals that were not properly decompiled */
static const char asc_21F0[] = "Testing Preprocessing Features:\n";
static const char aPpL201D[] = "param_macro_constants(64) = %d\n";
static const char aPpL202D[] = "param_macro_functions(5, 3) = %d\n";
static const char aPpL203D[] = "param_conditional_compile(10) = %d\n";
static const char aPpL204D[] = "param_multi_branch_compile(10) = %d\n";
static const char aPpL301D[] = "param_macro_recursion(100) = %d\n";
static const char aPpL302D[] = "param_stringize(5) = %d\n";
static const char aPpL303D[] = "param_token_paste(5) = %d\n";
static const char aPpL304D[] = "call_variadic_macro() = %d\n";
static const char aPpL305D[] = "param_macro_override(5) = %d\n";
static const char aPpL306D[] = "param_include_guard() = %d\n";
static const char aPpL307D[] = "call_builtin_macros() = %d\n";

/* ASM test strings */
static const char asc_2298[] = "Testing ASM Features:\n";
static const char aAsmL401D[] = "call_asm_basic() = %d\n";
static const char aAsmL402D[] = "call_asm_clobber() = %d\n";
static const char aAsmL403D[] = "call_asm_multi_insn() = %d\n";
static const char aAsmL404D[] = "call_asm_simd() = %d\n";
static const char aAsmL405D[] = "call_asm_atomic() = %d\n";
static const char aAsmL406D[] = "call_asm_privileged() = %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_O2_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
void init_proc()
{
 if ( _gmon_start__ )
   _gmon_start__();
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
 sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
 sub_1020();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
 sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
 sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
 sub_1020();
}


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



/* Function: param_macro_constants @ 0x1210 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size > 1024 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1230 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1240 */
int param_macro_functions(int x, int y)
{
 int v2; // eax

 v2 = x * x;
 if ( x < y )
 x = y;
 return x + v2;
}


/* Function: call_macro_functions @ 0x1260 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x1270 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1280 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1290 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x12A0 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x12B0 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x12C0 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x12D0 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x12E0 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x12F0 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1300 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x1310 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1320 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x1350 */
int call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x1390 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x13A0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x13B0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x13C0 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x13D0 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:30");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1420 */
int call_builtin_macros()
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:30");
 return 382;
}


/* Function: test_preprocessing_features @ 0x1470 */
void test_preprocessing_features()
{
 __printf_chk(1, asc_21F0);
 __printf_chk(1, aPpL201D, 64);
 __printf_chk(1, aPpL202D, 30);
 __printf_chk(1, aPpL203D, 32);
 __printf_chk(1, aPpL204D, 57122);
 __printf_chk(1, aPpL301D, 116);
 __printf_chk(1, aPpL302D, 19);
 __printf_chk(1, aPpL303D, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, aPpL304D, 60);
 __printf_chk(1, aPpL305D, 16);
 __printf_chk(1, aPpL306D, 500);
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:30");
 __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1600 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x1610 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x1630 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x1650 */
int call_asm_clobber()
{
 int result; // eax
 long long i; // rcx
 int arr[6]; // [rsp+0h] [rbp-28h]
 unsigned long long v3; // [rsp+18h] [rbp-10h]

 v3 = read_fs_qword(0x28u);
 result = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x16A0 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x16C0 */
int call_asm_multi_insn()
{
 int result; // eax
 char src[10]; // [rsp+6h] [rbp-42h] BYREF
 char dst[40]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-10h]

 v3 = read_fs_qword(0x28u);
 memset(dst, 0, 32);
 strcpy(src, "Hello ASM");
 memcpy(dst, src, 9u);
 if ( dst[0] != 72 )
 return -1;
 result = -1;
 if ( dst[4] == 111 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x1760 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1780 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 int v3; // eax

 v3 = 0;
 *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
 return v3;
}


/* Function: call_asm_simd @ 0x17A0 */
int call_asm_simd()
{
 __m128i a;
 __m128i b;
 __m128i result;

 a = _mm_set_epi32(3, 1, 2, 1);
 b = _mm_set_epi32(7, 5, 6, 5);
 result = _mm_add_epi32(a, b);
 return ((int*)&result)[3] + ((int*)&result)[2] + ((int*)&result)[0] + ((int*)&result)[1];
}


/* Function: param_asm_atomic @ 0x1840 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + __sync_fetch_and_add(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1850 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + __sync_fetch_and_add(counter, increment);
}


/* Function: call_asm_atomic @ 0x1860 */
int call_asm_atomic()
{
 signed int v0; // eax
 int counter; // [rsp+4h] [rbp-14h] BYREF
 unsigned long long v3; // [rsp+8h] [rbp-10h]

 v3 = read_fs_qword(0x28u);
 counter = 10;
 v0 = __sync_fetch_and_add(&counter, 5u);
 return v0 + counter + 5;
}


/* Function: param_dynamic_code @ 0x18B0 */
int param_dynamic_code(int x)
{
 size_t v1; // r12
 unsigned int *v2; // rax
 void *v3; // rbp
 int v4; // r13d

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (unsigned int *)-1LL )
 return -1;
 v3 = v2;
 *v2 = -1065092983;
 *((unsigned short *)v2 + 2) = -15611;
 v4 = ((long long ( *)(unsigned long long))v2)((unsigned int)x);
 munmap(v3, v1);
 return v4;
}


/* Function: param_memory_protection @ 0x1950 */
int param_memory_protection()
{
 size_t v0; // r12
 int *v1; // rax
 int *v2; // rbp
 int v3; // r13d

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (int *)-1LL )
 return -1;
 *v1 = 42;
 v2 = v1;
 if ( mprotect(v1, v0, 1) )
 {
 v3 = -2;
 munmap(v2, v0);
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 v3 = -3;
 else
 *v2 = 100;
 munmap(v2, v0);
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x1A20 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1A40 */
int call_asm_privileged()
{
 int v0; // r12d
 int v1; // esi

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 if ( v0 == 15 && v1 == 42 )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0x1AA0 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1AC0 */
void test_asm_features()
{
 unsigned int v0; // eax
 long long i; // rcx
 unsigned int v2; // eax
 unsigned int v3; // eax
 signed int v4; // ebx
 long long v5; // rdx
 signed int v6[7]; // [rsp+Ch] [rbp-2Ch] BYREF
 unsigned long long v7; // [rsp+28h] [rbp-10h]

 v7 = read_fs_qword(0x28u);
 __printf_chk(1, asc_2298);
 __printf_chk(1, aAsmL401D, 15);
 v0 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v0 += v6[i + 1];
 __printf_chk(1, aAsmL402D, v0);
 v2 = call_asm_multi_insn();
 __printf_chk(1, aAsmL403D, v2);
 v3 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v3);
 v6[0] = 10;
 v4 = __sync_fetch_and_add(v6, 5u);
 __printf_chk(1, aAsmL405D, (unsigned int)(v4 + v6[0] + 5));
 v5 = (unsigned int)call_asm_privileged();
 __printf_chk(1, aAsmL406D, v5);
}


/* Function: .term_proc @ 0x1BCC */
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
