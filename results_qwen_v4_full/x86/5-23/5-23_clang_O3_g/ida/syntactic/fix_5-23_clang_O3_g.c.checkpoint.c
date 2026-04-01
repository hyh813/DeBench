/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <emmintrin.h>
#include <stddef.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;



/* Missing macro definitions */
#define LOBYTE(x) ((uint8_t)((x) & 0xFF))
#define BYTE4(x) ((uint8_t)(((x) >> 24) & 0xFF))
#define DWORD1(x) ((uint32_t)(x))
#define DWORD2(x) ((uint32_t)(((x) >> 32) & 0xFFFFFFFF))
#define HIDWORD(x) ((uint32_t)(((x) >> 32) & 0xFFFFFFFF))
#define LODWORD(x) ((uint32_t)((x) & 0xFFFFFFFF))

/* Missing global variables */
int global_var = 0;
unsigned char xmmword_2010[16] = {0};
unsigned char xmmword_2020[16] = {0};
unsigned char xmmword_2030[16] = {0};
unsigned char xmmword_2040[16] = {0};
unsigned char xmmword_231C[16] = {0};

/* Missing string constants */
const char *asc_22C9 = "Testing preprocessing features";
const char *asc_22F0 = "Testing ASM features";
const char *aPpL201D = "LOG: param_macro_constants result: %d\n";
const char *aPpL202D = "LOG: call_macro_functions result: %d\n";
const char *aPpL203D = "LOG: call_conditional_compile result: %d\n";
const char *aPpL204D = "LOG: call_multi_branch_compile result: %d\n";
const char *aPpL301D = "LOG: call_macro_recursion result: %d\n";
const char *aPpL302D = "LOG: call_stringize result: %d\n";
const char *aPpL303D = "LOG: call_token_paste result: %d\n";
const char *aPpL304D = "LOG: call_variadic_macro result: %d\n";
const char *aPpL305D = "LOG: call_macro_override result: %d\n";
const char *aPpL306D = "LOG: call_include_guard result: %d\n";
const char *aPpL307D = "LOG: call_builtin_macros result: %d\n";
const char *aAsmL401D = "LOG: call_asm_basic result: %d\n";
const char *aAsmL402D = "LOG: call_asm_clobber result: %d\n";
const char *aAsmL403D = "LOG: call_asm_multi_insn result: %d\n";
const char *aAsmL404D = "LOG: call_asm_simd result: %d\n";
const char *aAsmL405D = "LOG: call_asm_atomic result: %d\n";
const char *aAsmL406D = "LOG: call_asm_privileged result: %d\n";

/* Helper function for qmemcpy */
void qmemcpy(void *dst, const void *src, unsigned int n) {
    memcpy(dst, src, n);
}

/* Linux equivalent for InterlockedExchangeAdd */
static inline int _InterlockedExchangeAdd(volatile int *ptr, int val) {
    return __sync_fetch_and_add(ptr, val);
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O3_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *(%%ebx)" ::: "memory");
}


/* Function: sub_10B0 @ 0x10B0 */
int sub_10B0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10EC @ 0x10EC */
void sub_10EC()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10F0 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1229 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x122D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: param_macro_constants @ 0x1240 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1260 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1270 */
int param_macro_functions(int x, int y)
{
 int v2; // eax

 v2 = y;
 if ( x > y )
 v2 = x;
 return x * x + v2;
}


/* Function: call_macro_functions @ 0x1290 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x12A0 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x12B0 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x12C0 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x12D0 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x12E0 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x12F0 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1300 */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1310 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1320 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x1330 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x1340 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1350 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x1390 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x13C0 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x13D0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x13E0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x13F0 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1400 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:15");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1450 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:15");
 return 382;
}


/* Function: test_preprocessing_features @ 0x14A0 */
void test_preprocessing_features()
{
 puts(asc_22C9);
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
 "03:00:15");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x15D0 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x15E0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x15F0 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < n; ++i )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x1610 */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 unsigned char v2[16]; // [esp+0h] [ebp-1Ch]
 int v3; // [esp+10h] [ebp-Ch]

 v3 = 5;
 memcpy((void*)v2, (const void*)xmmword_231C, 16);
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += ((unsigned int *)v2)[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x1660 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1680 */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[12]; // [esp+4h] [ebp-38h] BYREF
 unsigned long long v2[2]; // [esp+10h] [ebp-2Ch] BYREF
 unsigned int v2_int;

  strcpy(v1, "Hello ASM");
  memset(v2, 0, sizeof(v2));
  qmemcpy(v2, v1, 9u);
  result = -1;
  v2_int = *(unsigned int *)v2;
  if ( !((LOBYTE(v2_int) ^ 0x48) | (BYTE4(v2_int) ^ 0x6F)) )
    result = 42;
  return result;
}


/* Function: param_asm_simd @ 0x16F0 */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1710 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
 return 0;
}


/* Function: call_asm_simd @ 0x1730 */
int call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [esp+0h] [ebp-3Ch] BYREF

 v3[2] = *(__m128i *)(void*)xmmword_2030;
 v3[1] = *(__m128i *)(void*)xmmword_2040;
 v3[0] = _mm_add_epi32(*(__m128i *)(void*)xmmword_2030, *(__m128i *)(void*)xmmword_2040);
 si128 = _mm_load_si128(v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x1790 */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x17B0 */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x17D0 */
int call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [esp+0h] [ebp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v2 + v0 + 5;
}


/* Function: param_dynamic_code @ 0x17F0 */
int param_dynamic_code(int x)
{
 size_t len; // esi
 void *v2; // eax
 int v3; // edi

 len = sysconf(30);
 v2 = mmap(0, len, 7, (int)DWORD1(*(uint64_t*)xmmword_2010), (int)DWORD2(*(uint64_t*)xmmword_2010), (int)HIDWORD(*(uint64_t*)xmmword_2010));
 if ( v2 == (void *)-1 )
 return -1;
 v3 = x + 5;
 munmap(v2, len);
 return v3;
}


/* Function: param_memory_protection @ 0x1860 */
int param_memory_protection()
{
 size_t len; // esi
 void *v1; // eax
 int *v2; // edi
 int v3; // ebp
 int v5; // [esp+18h] [ebp-14h]

 len = sysconf(30);
 v1 = mmap(0, len, 3, (int)DWORD1(*(uint64_t*)xmmword_2020), (int)DWORD2(*(uint64_t*)xmmword_2020), (int)HIDWORD(*(uint64_t*)xmmword_2020));
 if ( v1 == (void *)-1 )
 return -1;
 v2 = (int *)v1;
 *v2 = 42;
 v3 = -2;
 if ( !mprotect(v1, len, 1) )
 {
 v5 = *v2;
 v3 = -3;
 if ( !mprotect(v2, len, 3) )
 {
 *v2 = 100;
 v3 = v5;
 }
 }
 munmap(v1, len);
 return v3;
}


/* Function: param_clobber_importance @ 0x1920 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1940 */
int call_asm_privileged()
{
 size_t len; // edi
 void *v1; // ebp
 int v2; // esi
 int v3; // eax
 size_t v4; // edi
 void *v5; // eax
 int *v6; // ebp
 int result; // eax
 int v8; // [esp+20h] [ebp-1Ch]
 int v9; // [esp+24h] [ebp-18h]
 void *v10; // [esp+28h] [ebp-14h]

 len = sysconf(30);
 v1 = mmap(0, len, 7, (int)DWORD1(*(uint64_t*)xmmword_2010), (int)DWORD2(*(uint64_t*)xmmword_2010), (int)HIDWORD(*(uint64_t*)xmmword_2010));
 v2 = -1;
 v3 = -1;
 if ( v1 != (void *)-1 )
 {
 munmap(v1, len);
 v3 = 15;
 }
 v9 = v3;
 v10 = v1;
 v4 = sysconf(30);
 v5 = mmap(0, v4, 3, (int)DWORD1(*(uint64_t*)xmmword_2020), (int)DWORD2(*(uint64_t*)xmmword_2020), (int)HIDWORD(*(uint64_t*)xmmword_2020));
 if ( v5 != (void *)-1 )
 {
 v6 = (int *)v5;
 *v6 = 42;
 v2 = -2;
 if ( !mprotect(v5, v4, 1) )
 {
 v8 = *v6;
 v2 = -3;
 if ( !mprotect(v6, v4, 3) )
 {
 *v6 = 100;
 v2 = v8;
 }
 }
 munmap(v5, v4);
 }
 result = 77;
 if ( v2 != 0x2A )
 result = v9;
 if ( v10 == (void *)-1 )
 return v9;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x1A80 */
int param_memory_clobber_demo()
{
 return (int)global_var + 50;
}


/* Function: test_asm_features @ 0x1AA0 */
void test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // ecx
 __m128i si128; // xmm0
 __m128i v4; // xmm1
 signed int v5; // esi
 int v6; // eax
 unsigned char v7[16]; // [esp+10h] [ebp-5Ch] BYREF
 unsigned char v8[16]; // [esp+20h] [ebp-4Ch] BYREF
 unsigned char v9[16]; // [esp+30h] [ebp-3Ch]
 __m128i v10[2]; // [esp+40h] [ebp-2Ch] BYREF

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 memset((void*)v9, 0, sizeof(v9));
 *(int *)v9 = 5;
 memcpy((void*)v8, (const void*)xmmword_231C, 16);
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += ((unsigned int *)v8)[i];
 printf(aAsmL402D, v0);
 strcpy((char *)v7, "Hello ASM");
 memset((void*)v9, 0, sizeof(v9));
 memset((void*)v8, 0, sizeof(v8));
 qmemcpy((void*)v8, (const void*)v7, 9u);
 v2 = -1;
 {
  unsigned int v8_int = *(unsigned int *)v8;
  if ( !(LOBYTE(v8_int) ^ 0x48 | BYTE4(v8_int) ^ 0x6F) )
  v2 = 42;
 }
 printf(aAsmL403D, v2);
 memcpy((void*)v8, (const void*)xmmword_2030, 16);
 memcpy((void*)v7, (const void*)xmmword_2040, 16);
 v10[0] = _mm_add_epi32(*(__m128i *)xmmword_2030, *(__m128i *)xmmword_2040);
 si128 = _mm_load_si128(v10);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 printf(aAsmL404D, _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4)));
 memset((void*)v8, 0, sizeof(v8));
 *(int *)v8 = 10;
 v5 = _InterlockedExchangeAdd((volatile signed int *)v8, 5u);
 printf(aAsmL405D, v5 + (unsigned int)v8 + 5);
 v6 = call_asm_privileged();
 printf(aAsmL406D, v6);
}


/* Function: main @ 0x1C30 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: __libc_start_main @ 0x4040 */

/* FAILED to decompile: mprotect @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: sysconf @ 0x404C */

/* FAILED to decompile: __cxa_finalize @ 0x4050 */

/* FAILED to decompile: puts @ 0x4054 */

/* FAILED to decompile: mmap @ 0x4058 */

/* FAILED to decompile: munmap @ 0x405C */

/* Total functions decompiled: 57, failed: 8 */
