#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t already defined by system headers */
/* ssize_t already defined by system headers */
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Linux-compatible atomic intrinsic replacement */
static inline long _InterlockedExchangeAdd(long volatile *addend, long value)
{
    return __sync_fetch_and_add(addend, value);
}

/* Missing global variables - now defined locally */
int global_var = 0;
static const char asc_3099[] = "Testing preprocessing features:\n";
static const char aPpL201D[] = "PPL201: %d\n";
static const char aPpL202D[] = "PPL202: %d\n";
static const char aPpL203D[] = "PPL203: %d\n";
static const char aPpL204D[] = "PPL204: %d\n";
static const char aPpL301D[] = "PPL301: %d\n";
static const char aPpL302D[] = "PPL302: %d\n";
static const char aPpL303D[] = "PPL303: %d\n";
static const char aPpL304D[] = "PPL304: %d\n";
static const char aPpL305D[] = "PPL305: %d\n";
static const char aPpL306D[] = "PPL306: %d\n";
static const char aPpL307D[] = "PPL307: %d\n";
static const char asc_3217[] = "Testing assembly features:\n";
static const char aAsmL401D[] = "ASML401: %d\n";
static const char aAsmL402D[] = "ASML402: %d\n";
static const char aAsmL403D[] = "ASML403: %d\n";
static const char aAsmL404D[] = "ASML404: %d\n";
static const char aAsmL405D[] = "ASML405: %d\n";
static const char aAsmL406D[] = "ASML406: %d\n";

/* CRT function stubs */
extern void _gmon_start__(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern void frame_dummy(void);

/* qmemcpy compatibility */
#define qmemcpy memcpy

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O0_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%ebx)");
}


/* Function: sub_10D0 @ 0x10D0 */
int sub_10D0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_110C @ 0x110C */
void sub_110C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1110 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1249 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x124D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x1260 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x1290 */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x12C0 */
int param_macro_functions(int x, int y)
{
 int v3; // [esp+0h] [ebp-8h]

 if ( x <= y )
 v3 = y;
 else
 v3 = x;
 return v3 + x * x;
}


/* Function: call_macro_functions @ 0x1300 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1330 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1350 */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x1380 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x13A0 */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x13D0 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1410 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x1440 */
int param_stringize(int value)
{
 size_t v2; // [esp+10h] [ebp-18h]
 size_t v3; // [esp+14h] [ebp-14h]

 v2 = strlen("Hello World");
 v3 = strlen("1.2.3") + v2;
 return strlen("155") + v3;
}


/* Function: call_stringize @ 0x14C0 */
int call_stringize()
{
 return param_stringize(0);
}


/* Function: my_func @ 0x14F0 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1500 */
int param_token_paste(int x)
{
 return my_func(x) + x + 5;
}


/* Function: call_token_paste @ 0x1540 */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x1570 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x15D0 */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1610 */
int param_macro_override(int x)
{
 return 2 * x + x + 1;
}


/* Function: call_macro_override @ 0x1640 */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: param_include_guard @ 0x1670 */
int param_include_guard()
{
 return header_func(5);
}


/* Function: header_func @ 0x16A0 */
int header_func(int x)
{
 return 100 * x;
}


/* Function: call_include_guard @ 0x16B0 */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0x16D0 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:04",
 "03:00:04");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1780 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x17B0 */
void test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax

 printf(asc_3099);
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


/* Function: param_asm_basic @ 0x1920 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x1950 */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1980 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < n; ++i )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x19D0 */
int call_asm_clobber()
{
 int arr[6]; // [esp+10h] [ebp-18h] BYREF

 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x1A20 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1A70 */
int call_asm_multi_insn()
{
 int result; // eax
 bool v1; // [esp+19h] [ebp-2Fh]
 char dst[32]; // [esp+1Ah] [ebp-2Eh] BYREF
 char src[14]; // [esp+3Ah] [ebp-Eh] BYREF

 strcpy(src, "Hello ASM");
 memset(dst, 0, sizeof(dst));
 param_asm_multi_insn(dst, src, 9u);
 v1 = 0;
 if ( dst[0] == 72 )
 v1 = dst[4] == 111;
 result = -1;
 if ( v1 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x1B20 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1B50 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 __m128i v3; // xmm0
 __m128i v4; // xmm0
 __m128i vec_sum; // [esp+0h] [ebp-78h] BYREF
 __m128i vec_b; // [esp+10h] [ebp-68h] BYREF
 __m128i vec_a; // [esp+20h] [ebp-58h] BYREF
 int *v9; // [esp+38h] [ebp-40h]
 int *v10; // [esp+3Ch] [ebp-3Ch]
 __m128i v11; // [esp+40h] [ebp-38h] BYREF
 __m128i v12; // [esp+50h] [ebp-28h] BYREF
 __m128i v13; // [esp+60h] [ebp-18h] BYREF
 int *v14; // [esp+74h] [ebp-4h]

 v10 = a;
 vec_a = _mm_load_si128((const __m128i *)a);
 v9 = b;
 vec_b = _mm_load_si128((const __m128i *)b);
 v3 = _mm_load_si128(&vec_b);
 v12 = _mm_load_si128(&vec_a);
 v11 = v3;
 vec_sum = _mm_add_epi32(_mm_load_si128(&v12), _mm_load_si128(&v11));
 v4 = _mm_load_si128(&vec_sum);
 v14 = result;
 v13 = v4;
 *(__m128i *)result = _mm_load_si128(&v13);
 return 0;
}


/* Function: call_asm_simd @ 0x1BD0 */
int call_asm_simd()
{
 int result[4]; // [esp+14h] [ebp-34h] BYREF
 int b[4]; // [esp+24h] [ebp-24h] BYREF
 int a[5]; // [esp+34h] [ebp-14h] BYREF

 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a, b, result);
 return result[3] + result[2] + result[1] + result[0];
}


/* Function: param_asm_atomic @ 0x1C60 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x1C90 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x1CC0 */
int call_asm_atomic()
{
 int new_val; // [esp+Ch] [ebp-Ch]
 int counter; // [esp+10h] [ebp-8h] BYREF

 counter = 10;
 new_val = param_asm_atomic(&counter, 5);
 return new_val + counter;
}


/* Function: param_dynamic_code @ 0x1D00 */
int param_dynamic_code(int x)
{
 void *exec_mem; // [esp+28h] [ebp-10h]
 int page_size; // [esp+2Ch] [ebp-Ch]

 page_size = sysconf(30);
 exec_mem = mmap(0, page_size, 7, 34, -1, 0);
 if ( exec_mem == (void *)-1 )
 return -1;
 munmap(exec_mem, page_size);
 return x + 5;
}


/* Function: param_memory_protection @ 0x1DB0 */
int param_memory_protection()
{
 int value; // [esp+20h] [ebp-18h]
 unsigned int *mem; // [esp+28h] [ebp-10h]
 int page_size; // [esp+2Ch] [ebp-Ch]

 page_size = sysconf(30);
 mem = mmap(0, page_size, 3, 34, -1, 0);
 if ( mem == (unsigned int *)-1 )
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


/* Function: param_clobber_importance @ 0x1F00 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1F40 */
int call_asm_privileged()
{
 int r3; // [esp+14h] [ebp-14h]
 int r2; // [esp+18h] [ebp-10h]
 int r1; // [esp+1Ch] [ebp-Ch]

 r1 = param_dynamic_code(10);
 r2 = param_memory_protection();
 r3 = param_clobber_importance(3, 7);
 if ( r1 == 15 && r2 == 42 && r3 == 20 )
 return 77;
 else
 return r1;
}


/* Function: param_memory_clobber_demo @ 0x1FD0 */
int param_memory_clobber_demo()
{
 return (int)global_var + 50;
}


/* Function: test_asm_features @ 0x2010 */
void test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 printf(asc_3217);
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


/* Function: main @ 0x20F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x5048 */

/* FAILED to decompile: mprotect @ 0x504C */

/* FAILED to decompile: printf @ 0x5050 */

/* FAILED to decompile: memcpy @ 0x5054 */

/* FAILED to decompile: sysconf @ 0x5058 */

/* FAILED to decompile: __cxa_finalize @ 0x505C */

/* FAILED to decompile: mmap @ 0x5060 */

/* FAILED to decompile: strlen @ 0x5064 */

/* FAILED to decompile: memset @ 0x5068 */

/* FAILED to decompile: munmap @ 0x506C */

/* Total functions decompiled: 58, failed: 10 */
