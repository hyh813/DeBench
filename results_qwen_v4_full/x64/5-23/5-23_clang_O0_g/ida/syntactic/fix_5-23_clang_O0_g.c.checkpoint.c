/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <emmintrin.h>
#include <stdbool.h>

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
 * Binary: build/x64/5-23/5-23_clang_O0_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 return;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x11A0 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x11D0 */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x11E0 */
int param_macro_functions(int x, int y)
{
 int v3; // [rsp+0h] [rbp-10h]

 if ( x <= y )
 v3 = y;
 else
 v3 = x;
 return v3 + x * x;
}


/* Function: call_macro_functions @ 0x1220 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1240 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1260 */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x1270 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1290 */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x12A0 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x12E0 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x12F0 */
int param_stringize(int value)
{
 size_t v2; // [rsp+0h] [rbp-30h]
 size_t v3; // [rsp+8h] [rbp-28h]

 v2 = strlen("Hello World");
 v3 = strlen("1.2.3") + v2;
 return strlen("155") + v3;
}


/* Function: call_stringize @ 0x1360 */
int call_stringize()
{
 return param_stringize(0);
}


/* Function: my_func @ 0x1370 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1380 */
int param_token_paste(int x)
{
 return my_func(x) + x + 5;
}


/* Function: call_token_paste @ 0x13C0 */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x13D0 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x1410 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1430 */
int param_macro_override(int x)
{
 return 2 * x + x + 1;
}


/* Function: call_macro_override @ 0x1460 */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: header_func @ 0x1480 */
int header_func(int x);

/* Function: param_include_guard @ 0x1470 */
int param_include_guard()
{
 return header_func(5);
}


/* Function: header_func @ 0x1480 */
int header_func(int x)
{
 return 100 * x;
}


/* Function: call_include_guard @ 0x1490 */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0x14A0 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:43");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1530 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Global string constants */
const char *asc_2095 = "Testing preprocessing features:\n";
const char *aPpL201D = "PPL201: %d\n";
const char *aPpL202D = "PPL202: %d\n";
const char *aPpL203D = "PPL203: %d\n";
const char *aPpL204D = "PPL204: %d\n";
const char *aPpL301D = "PPL301: %d\n";
const char *aPpL302D = "PPL302: %d\n";
const char *aPpL303D = "PPL303: %d\n";
const char *aPpL304D = "PPL304: %d\n";
const char *aPpL305D = "PPL305: %d\n";
const char *aPpL306D = "PPL306: %d\n";
const char *aPpL307D = "PPL307: %d\n";
const char *asc_2213 = "Testing ASM features:\n";
const char *aAsmL401D = "ASM_L401: %d\n";
const char *aAsmL402D = "ASM_L402: %d\n";
const char *aAsmL403D = "ASM_L403: %d\n";
const char *aAsmL404D = "ASM_L404: %d\n";
const char *aAsmL405D = "ASM_L405: %d\n";
const char *aAsmL406D = "ASM_L406: %d\n";

/* Global variable */
int global_var = 100;

/* Function: test_preprocessing_features @ 0x1540 */
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

 printf(asc_2095);
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


/* Function: param_asm_basic @ 0x1640 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x1660 */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1670 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < n; i = (unsigned int)(i + 1) )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x16B0 */
int call_asm_clobber()
{
 int arr[5]; // [rsp+0h] [rbp-20h] BYREF

 *(unsigned long long *)arr = 0x200000001LL;
 *(unsigned long long *)&arr[2] = 0x400000003LL;
 arr[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x16F0 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1740 */
int call_asm_multi_insn()
{
 int result; // eax
 bool v1; // [rsp+Fh] [rbp-31h]
 char dst[38]; // [rsp+10h] [rbp-30h] BYREF
 char src[10]; // [rsp+36h] [rbp-Ah] BYREF

 strcpy(src, "Hello ASM");
 memset(dst, 0, 0x20u);
 param_asm_multi_insn(dst, src, 9u);
 v1 = 0;
 if ( dst[0] == 72 )
 v1 = dst[4] == 111;
 result = -1;
 if ( v1 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x17C0 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x17F0 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 __m128i v3; // xmm0
 __m128i v4; // xmm0
 __m128i vec_sum; // [rsp+0h] [rbp-A0h] BYREF
 __m128i vec_b; // [rsp+10h] [rbp-90h] BYREF
 __m128i vec_a; // [rsp+20h] [rbp-80h] BYREF
 int *resulta; // [rsp+38h] [rbp-68h]
 int *ba; // [rsp+40h] [rbp-60h]
 int *aa; // [rsp+48h] [rbp-58h]
 int *v12; // [rsp+50h] [rbp-50h]
 int *v13; // [rsp+58h] [rbp-48h]
 __m128i v14; // [rsp+60h] [rbp-40h] BYREF
 __m128i v15; // [rsp+70h] [rbp-30h] BYREF
 __m128i v16; // [rsp+80h] [rbp-20h] BYREF
 int *v17; // [rsp+98h] [rbp-8h]

 aa = a;
 ba = b;
 resulta = result;
 v13 = a;
 vec_a = _mm_load_si128((const __m128i *)a);
 v12 = b;
 vec_b = _mm_load_si128((const __m128i *)b);
 v3 = _mm_load_si128(&vec_b);
 v15 = _mm_load_si128(&vec_a);
 v14 = v3;
 vec_sum = _mm_add_epi32(_mm_load_si128(&v15), _mm_load_si128(&v14));
 v4 = _mm_load_si128(&vec_sum);
 v17 = result;
 v16 = v4;
 *(__m128i *)result = _mm_load_si128(&v16);
 return 0;
}


/* Function: call_asm_simd @ 0x1890 */
int call_asm_simd()
{
 int result[4]; // [rsp+0h] [rbp-30h] BYREF
 int b[4]; // [rsp+10h] [rbp-20h] BYREF
 int a[4]; // [rsp+20h] [rbp-10h] BYREF

 *(unsigned long long *)a = 0x200000001LL;
 *(unsigned long long *)&a[2] = 0x400000003LL;
 *(unsigned long long *)b = 0x600000005LL;
 *(unsigned long long *)&b[2] = 0x800000007LL;
 param_asm_simd(a, b, result);
 return result[3] + result[2] + result[1] + result[0];
}


/* Function: param_asm_atomic @ 0x18F0 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + __sync_fetch_and_add(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1920 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + __sync_fetch_and_add(counter, increment);
}


/* Function: call_asm_atomic @ 0x1950 */
int call_asm_atomic()
{
 int new_val; // [rsp+8h] [rbp-8h]
 int counter; // [rsp+Ch] [rbp-4h] BYREF

 counter = 10;
 new_val = param_asm_atomic(&counter, 5);
 return new_val + counter;
}


/* Function: param_dynamic_code @ 0x1980 */
int param_dynamic_code(int x)
{
 int result; // [rsp+4h] [rbp-2Ch]
 unsigned short *exec_mem; // [rsp+18h] [rbp-18h]
 long long page_size; // [rsp+20h] [rbp-10h]

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


/* Function: param_memory_protection @ 0x1A30 */
int param_memory_protection()
{
 int value; // [rsp+Ch] [rbp-24h]
 unsigned int *mem; // [rsp+18h] [rbp-18h]
 long long page_size; // [rsp+20h] [rbp-10h]

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


/* Function: param_clobber_importance @ 0x1B40 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1B80 */
int call_asm_privileged()
{
 int r3; // [rsp+0h] [rbp-10h]
 int r2; // [rsp+4h] [rbp-Ch]
 int r1; // [rsp+8h] [rbp-8h]

 r1 = param_dynamic_code(10);
 r2 = param_memory_protection();
 r3 = param_clobber_importance(3, 7);
 if ( r1 == 15 && r2 == 42 && r3 == 20 )
 return 77;
 else
 return r1;
}


/* Function: param_memory_clobber_demo @ 0x1BF0 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x1C20 */
void test_asm_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 printf(asc_2213);
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


/* Function: main @ 0x1CC0 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1CE4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: strlen @ 0x4078 */

/* FAILED to decompile: mmap @ 0x4080 */

/* FAILED to decompile: printf @ 0x4088 */

/* FAILED to decompile: memset @ 0x4090 */

/* FAILED to decompile: munmap @ 0x4098 */

/* FAILED to decompile: mprotect @ 0x40A0 */

/* FAILED to decompile: sysconf @ 0x40A8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40B0 */

/* FAILED to decompile: __gmon_start__ @ 0x40C0 */

/* Total functions decompiled: 52, failed: 10 */
