#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <emmintrin.h>

/* Linux-compatible replacements for Windows intrinsics */
static inline unsigned long long __readfsqword(unsigned long offset) {
    unsigned long long value;
    __asm__ volatile ("mov %%gs:%1, %0" : "=r" (value) : "m" (*(volatile unsigned long long *)(offset)));
    return value;
}

static inline long _InterlockedExchangeAdd(int * volatile addend, int value) {
    return __sync_fetch_and_add(addend, value);
}

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

/* String constants from binary */
static const char s[] = "=== Testing Preprocessing Features ===";
static const char aPpL201D[] = "APP201: %d\n";
static const char aPpL202D[] = "APP202: %d\n";
static const char aPpL203D[] = "APP203: %d\n";
static const char aPpL204D[] = "APP204: %d\n";
static const char aPpL301D[] = "APP301: %d\n";
static const char aPpL302D[] = "APP302: %d\n";
static const char aPpL303D[] = "APP303: %d\n";
static const char aPpL304D[] = "APP304: %d\n";
static const char aPpL305D[] = "APP305: %d\n";
static const char aPpL306D[] = "APP306: %d\n";
static const char aPpL307D[] = "APP307: %d\n";
static const char asc_2210[] = "=== Testing ASM Features ===";
static const char aAsmL401D[] = "ASM401: %d\n";
static const char aAsmL402D[] = "ASM402: %d\n";
static const char aAsmL403D[] = "ASM403: %d\n";
static const char aAsmL404D[] = "ASM404: %d\n";
static const char aAsmL405D[] = "ASM405: %d\n";
static const char aAsmL406D[] = "ASM406: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_gcc_O0_g
 * Processor: pc
 */








/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1229 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x124B */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x125F */
int param_macro_functions(int x, int y)
{
 int v2; // eax

 v2 = x;
 if ( y >= x )
 v2 = y;
 return x * x + v2;
}


/* Function: call_macro_functions @ 0x1284 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x129D */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x12C2 */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x12D6 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x12F2 */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x1306 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1319 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x132D */
int param_stringize(int value)
{
 int v1; // ebx
 int v2; // ebx

 v1 = strlen("Hello World");
 v2 = strlen("1.2.3") + v1;
 return v2 + strlen("155");
}


/* Function: call_stringize @ 0x138E */
int call_stringize()
{
 return param_stringize(0);
}


/* Function: my_func @ 0x13A2 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x13BB */
int param_token_paste(int x)
{
 return x + 5 + my_func(x);
}


/* Function: call_token_paste @ 0x13EB */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x13FF */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x1472 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1490 */
int param_macro_override(int x)
{
 return x + 1 + 2 * x;
}


/* Function: call_macro_override @ 0x14B6 */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: header_func @ 0x14CA */
int header_func(int x)
{
 return 100 * x;
}


/* Function: param_include_guard @ 0x14DD */
int param_include_guard()
{
 return header_func(5);
}


/* Function: call_include_guard @ 0x14F1 */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0x1505 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:23");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x15A5 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x15B9 */
void test_preprocessing_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 unsigned int v10; // eax

 puts(s);
 v0 = call_macro_constants();
 printf(aPpL201D, v0);
 v1 = call_macro_functions();
 printf(aPpL202D, v1);
 v2 = call_conditional_compile();
 printf(aPpL203D, v2);
 v3 = call_multi_branch_compile();
 printf(aPpL204D, v3);
 v4 = call_macro_recursion();
 printf(aPpL301D, v4);
 v5 = call_stringize();
 printf(aPpL302D, v5);
 v6 = call_token_paste();
 printf(aPpL303D, v6);
 v7 = call_variadic_macro();
 printf(aPpL304D, v7);
 v8 = call_macro_override();
 printf(aPpL305D, v8);
 v9 = call_include_guard();
 printf(aPpL306D, v9);
 v10 = call_builtin_macros();
 printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0x1733 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x1750 */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1764 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x179A */
int call_asm_clobber()
{
 int arr[6]; // [rsp+0h] [rbp-20h] BYREF
 unsigned long long v2; // [rsp+18h] [rbp-8h]

 v2 = __readfsqword(0x28u);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x17FF */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x184D */
int call_asm_multi_insn()
{
 char src[10]; // [rsp+6h] [rbp-3Ah] BYREF
 char dst[40]; // [rsp+10h] [rbp-30h] BYREF
 unsigned long long v3; // [rsp+38h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 strcpy(src, "Hello ASM");
 memset(dst, 0, 32);
 param_asm_multi_insn(dst, src, 9u);
 if ( dst[0] == 72 && dst[4] == 111 )
 return 42;
 else
 return -1;
}


/* Function: param_asm_simd @ 0x18E6 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x191A */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 __m128i vec_a; // [rsp+38h] [rbp-60h] BYREF
 __m128i vec_b; // [rsp+48h] [rbp-50h] BYREF
 __m128i vec_sum; // [rsp+58h] [rbp-40h] BYREF
 __m128i v7; // [rsp+68h] [rbp-30h] BYREF
 __m128i v8; // [rsp+78h] [rbp-20h] BYREF
 __m128i v9; // [rsp+88h] [rbp-10h] BYREF

 vec_a = _mm_load_si128((const __m128i *)a);
 vec_b = _mm_load_si128((const __m128i *)b);
 v8 = _mm_load_si128(&vec_a);
 v9 = _mm_load_si128(&vec_b);
 vec_sum = _mm_add_epi32(_mm_load_si128(&v9), _mm_load_si128(&v8));
 v7 = _mm_load_si128(&vec_sum);
 *(__m128i *)result = _mm_load_si128(&v7);
 return 0;
}


/* Function: call_asm_simd @ 0x19B5 */
int call_asm_simd()
{
 int a[4]; // [rsp+0h] [rbp-40h] BYREF
 int b[4]; // [rsp+10h] [rbp-30h] BYREF
 int result[6]; // [rsp+20h] [rbp-20h] BYREF
 unsigned long long v4; // [rsp+38h] [rbp-8h]

 v4 = __readfsqword(0x28u);
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a, b, result);
 return result[2] + result[1] + result[0] + result[3];
}


/* Function: param_asm_atomic @ 0x1A47 */
int param_asm_atomic(int *counter, int increment)
{
 return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: param_atomic_c11 @ 0x1A6E */
int param_atomic_c11(int *counter, int increment)
{
 return _InterlockedExchangeAdd(counter, increment) + increment;
}


/* Function: call_asm_atomic @ 0x1A8F */
int call_asm_atomic()
{
 int counter; // [rsp+0h] [rbp-10h] BYREF
 int new_val; // [rsp+4h] [rbp-Ch]
 unsigned long long v3; // [rsp+8h] [rbp-8h]

 v3 = __readfsqword(0x28u);
 counter = 10;
 new_val = param_asm_atomic(&counter, 5);
 return counter + new_val;
}


/* Function: param_dynamic_code @ 0x1AE3 */
int param_dynamic_code(int x)
{
 int result; // [rsp+14h] [rbp-2Ch]
 long long page_size; // [rsp+18h] [rbp-28h]
 unsigned short *exec_mem; // [rsp+20h] [rbp-20h]

 page_size = sysconf(30);
 exec_mem = mmap(0, page_size, 7, 34, -1, 0);
 if ( exec_mem == (unsigned short *)-1LL )
 return -1;
 *(unsigned int *)exec_mem = -1065092983;
 exec_mem[2] = -15611;
 result = ((long long ( *)(unsigned long long))exec_mem)((unsigned int)x);
 munmap(exec_mem, page_size);
 return result;
}


/* Function: param_memory_protection @ 0x1BA8 */
int param_memory_protection()
{
 int value; // [rsp+4h] [rbp-1Ch]
 long long page_size; // [rsp+8h] [rbp-18h]
 unsigned int *mem; // [rsp+10h] [rbp-10h]

 page_size = sysconf(30);
 mem = mmap(0, page_size, 3, 34, -1, 0);
 if ( mem == (unsigned int *)-1LL )
 return -1;
 *mem = 42;
 if ( mprotect(mem, page_size, 1) )
 {
 munmap(mem, page_size);
 return -2;
 }
 else
 {
 value = *mem;
 if ( mprotect(mem, page_size, 3) )
 {
 munmap(mem, page_size);
 return -3;
 }
 else
 {
 *mem = 100;
 munmap(mem, page_size);
 return value;
 }
 }
}


/* Function: param_clobber_importance @ 0x1CA7 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1CDD */
int call_asm_privileged()
{
 int r1; // [rsp+4h] [rbp-Ch]
 int r2; // [rsp+8h] [rbp-8h]
 int r3; // [rsp+Ch] [rbp-4h]

 r1 = param_dynamic_code(10);
 r2 = param_memory_protection();
 r3 = param_clobber_importance(3, 7);
 if ( r1 == 15 && r2 == 42 && r3 == 20 )
 return 77;
 else
 return r1;
}


/* Function: param_memory_clobber_demo @ 0x1D33 */
int global_var = 0;
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1D57 */
void test_asm_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 puts(asc_2210);
 v0 = call_asm_basic();
 printf(aAsmL401D, v0);
 v1 = call_asm_clobber();
 printf(aAsmL402D, v1);
 v2 = call_asm_multi_insn();
 printf(aAsmL403D, v2);
 v3 = call_asm_simd();
 printf(aAsmL404D, v3);
 v4 = call_asm_atomic();
 printf(aAsmL405D, v4);
 v5 = call_asm_privileged();
 printf(aAsmL406D, v5);
}


/* Function: main @ 0x1E31 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1E54 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: strlen @ 0x4030 */

/* FAILED to decompile: __stack_chk_fail @ 0x4038 */

/* FAILED to decompile: mmap @ 0x4040 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: munmap @ 0x4050 */

/* FAILED to decompile: mprotect @ 0x4058 */

/* FAILED to decompile: sysconf @ 0x4060 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4068 */

/* FAILED to decompile: __gmon_start__ @ 0x4078 */

/* Total functions decompiled: 60, failed: 11 */
