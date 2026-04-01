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

#include <emmintrin.h>
#include <stdbool.h>
#include <string.h>

/* Global data declarations */
extern __m128i xmmword_22F0;
extern __m128i xmmword_2300;

/* Define missing global SIMD data */
__m128i xmmword_22F0 = {0};
__m128i xmmword_2300 = {0};

/* Compiler intrinsic for stack canary (x86_64) */
static inline unsigned long long __readfsqword(unsigned long offset)
{
    unsigned long long value;
    __asm__ volatile ("movq %%fs:%1, %0" : "=r" (value) : "m" (*(const unsigned long long *)(offset)));
    return value;
}

/* Quick memcpy function (IDA-specific) */
static inline void qmemcpy(void *dst, const void *src, size_t n)
{
    memcpy(dst, src, n);
}
extern long long (*_gmon_start__)(void);
static const char asc_21F0[] = "=== Preprocessing Features Test ===\n";
static const char aPpL201D[] = "  macro_constants: %d\n";
static const char aPpL202D[] = "  macro_functions: %d\n";
static const char aPpL203D[] = "  conditional_compile: %d\n";
static const char aPpL204D[] = "  multi_branch_compile: %d\n";
static const char aPpL301D[] = "  macro_recursion: %d\n";
static const char aPpL302D[] = "  stringize: %d\n";
static const char aPpL303D[] = "  token_paste: %d\n";
static const char aPpL304D[] = "  variadic_macro: %d\n";
static const char aPpL305D[] = "  macro_override: %d\n";
static const char aPpL306D[] = "  include_guard: %d\n";
static const char aPpL307D[] = "  builtin_macros: %d\n";
static const char asc_2298[] = "=== Assembly Features Test ===\n";
static const char aAsmL401D[] = "  asm_basic: %d\n";
static const char aAsmL402D[] = "  asm_clobber: %d\n";
static const char aAsmL403D[] = "  asm_multi_insn: %d\n";
static const char aAsmL404D[] = "  asm_simd: %d\n";
static const char aAsmL405D[] = "  asm_atomic: %d\n";
static const char aAsmL406D[] = "  call_asm_privileged: %d\n";
int global_var = 0;

/* Atomic intrinsic for cross-platform support */
static inline long _InterlockedExchangeAdd(volatile int *addend, int value)
{
    return __sync_fetch_and_add(addend, value);
}

/* Macro definitions */
#define JUMPOUT(x) return

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_O3_g
 * Processor: pc
 */

/* CRT stub init_proc removed */


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
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
 "03:00:34");
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
 "03:00:34");
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
 "03:00:34");
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

 v3 = __readfsqword(0x28u);
 result = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x16A0 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x16C0 */
int call_asm_multi_insn()
{
 int result; // eax
 char src[10]; // [rsp+6h] [rbp-42h] BYREF
 char dst[40]; // [rsp+10h] [rbp-38h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-10h]

 v3 = __readfsqword(0x28u);
 memset(dst, 0, 32);
 strcpy(src, "Hello ASM");
 qmemcpy(dst, src, 9u);
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
 __m128i result; // [rsp+20h] [rbp-28h]

 result = _mm_add_epi32(_mm_load_si128((const __m128i *)&xmmword_22F0), _mm_load_si128((const __m128i *)&xmmword_2300));
 return ((int*)&result)[0] + ((int*)&result)[1] + ((int*)&result)[2] + ((int*)&result)[3];
}


/* Function: param_asm_atomic @ 0x1820 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1830 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1840 */
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


/* Function: param_dynamic_code @ 0x1890 */
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


/* Function: param_memory_protection @ 0x1930 */
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


/* Function: param_clobber_importance @ 0x1A00 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1A20 */
int call_asm_privileged()
{
 size_t v0; // r13
 unsigned int *v1; // rax
 void *v2; // rbp
 int v3; // r12d
 bool v4; // bp

 v0 = sysconf(30);
 v1 = mmap(0, v0, 7, 34, -1, 0);
 if ( v1 == (unsigned int *)-1LL )
 {
 v4 = 0;
 v3 = -1;
 }
 else
 {
 v2 = v1;
 *v1 = -1065092983;
 *((unsigned short *)v1 + 2) = -15611;
 v3 = ((long long ( *)(long long))v1)(10);
 munmap(v2, v0);
 v4 = v3 == 15;
 }
 if ( param_memory_protection() == 42 && v4 )
 return 77;
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1B10 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1B30 */
void test_asm_features()
{
 unsigned int v0; // eax
 long long i; // rcx
 long long v2; // rdx
 signed int v3; // eax
 long long v4; // rdx
 signed int v5; // [rsp+Ch] [rbp-8Ch] BYREF
 __m128i si128; // [rsp+10h] [rbp-88h]
 __m128i v7; // [rsp+20h] [rbp-78h]
 __m128i v8; // [rsp+30h] [rbp-68h]
 char v9[10]; // [rsp+46h] [rbp-52h] BYREF
 unsigned long long v10[2]; // [rsp+50h] [rbp-48h] BYREF
 unsigned long long v11; // [rsp+78h] [rbp-20h]

 v11 = __readfsqword(0x28u);
 __printf_chk(1, asc_2298);
 __printf_chk(1, aAsmL401D, 15);
 v0 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v0 += ((unsigned int*)&v8)[i];
 __printf_chk(1, aAsmL402D, v0);
 strcpy(v9, "Hello ASM");
 memset(v10, 0, sizeof(v10));
 qmemcpy(v10, v9, 9u);
 if ( ((unsigned char*)&v10[0])[0] == 72 )
 {
 v2 = 0xFFFFFFFFLL;
 if ( ((unsigned char*)&v10[0])[4] == 111 )
 v2 = 42;
 }
 else
 {
 v2 = 0xFFFFFFFFLL;
 }
 __printf_chk(1, aAsmL403D, v2, &v9[9]);
 si128 = _mm_load_si128((const __m128i *)&xmmword_22F0);
 v7 = _mm_load_si128((const __m128i *)&xmmword_2300);
 v8 = _mm_add_epi32(si128, v7);
 __printf_chk(1, aAsmL404D, (unsigned int)(((int*)&v8)[0] + ((int*)&v8)[1] + ((int*)&v8)[2] + ((int*)&v8)[3]));
 v5 = 10;
 v3 = _InterlockedExchangeAdd(&v5, 5u);
 __printf_chk(1, aAsmL405D, (unsigned int)(v3 + v5 + 5));
 v4 = (unsigned int)call_asm_privileged();
 __printf_chk(1, aAsmL406D, v4);
}


/* Function: .term_proc @ 0x1CF0 */
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
