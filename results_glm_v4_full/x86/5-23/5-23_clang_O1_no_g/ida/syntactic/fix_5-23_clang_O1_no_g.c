/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef signed int int32_t;
#endif
#ifndef int64_t
typedef long long int64_t;
#endif
/* size_t already defined in system headers */
/* ssize_t already defined in system headers */
/* uintptr_t already defined in system headers */
#ifndef intptr_t
typedef long intptr_t;
#endif
/* ptrdiff_t already defined in system headers */
#ifndef intmax_t
typedef long long intmax_t;
#endif
#ifndef uintmax_t
typedef unsigned long long uintmax_t;
#endif

/* Standard library headers */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <xmmintrin.h>
#include <emmintrin.h>

/* External symbol declarations removed (_gmon_start__ is CRT artifact) */

/* IDA decompiler helper functions */
static inline void qmemcpy(void *dst, const void *src, size_t n) { memcpy(dst, src, n); }
#define LOBYTE(x) (*((unsigned char*)&(x)))
#define BYTE4(x) (*((unsigned char*)&(x) + 4))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#define LODWORD(x) (*((unsigned int*)&(x)))
#define DWORD1(x) (*((unsigned int*)&(x)))
#define DWORD2(x) (*((unsigned int*)&(x) + 1))

/* GCC atomic built-in compatibility for Windows _InterlockedExchangeAdd intrinsic */
static inline long _InterlockedExchangeAdd(volatile long *Addend, long Value)
{
    return __sync_fetch_and_add(Addend, Value);
}

/* Global data declarations (stubs) */
static const char asc_22C9[] = "Preprocessing Test\n";
static const char aPpL201D[] = "macro_constants: %d\n";
static const char aPpL202D[] = "macro_functions: %d\n";
static const char aPpL203D[] = "conditional_compile: %d\n";
static const char aPpL204D[] = "multi_branch_compile: %d\n";
static const char aPpL301D[] = "macro_recursion: %d\n";
static const char aPpL302D[] = "stringize: %d\n";
static const char aPpL303D[] = "token_paste: %d\n";
static const char aPpL304D[] = "variadic_macro: %d\n";
static const char aPpL305D[] = "macro_override: %d\n";
static const char aPpL306D[] = "include_guard: %d\n";
static const char aPpL307D[] = "builtin_macros: %d\n";
static const char asc_22F0[] = "ASM Features Test\n";
static const char aAsmL401D[] = "asm_basic: %d\n";
static const char aAsmL402D[] = "asm_clobber sum: %d\n";
static const char aAsmL403D[] = "asm_multi_insn: %d\n";
static const char aAsmL404D[] = "asm_simd sum: %d\n";
static const char aAsmL405D[] = "asm_atomic result: %d\n";
static const char aAsmL406D[] = "call_asm_privileged: %d\n";
static __m128i xmmword_2010 = {0};
static __m128i xmmword_2020 = {0};
static __m128i xmmword_2030 = {0};
static __m128i xmmword_2040 = {0};
static __m128i xmmword_231C = {0};
static int global_var = 0;

/* CRT function stubs removed */

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O1_no_g
 * Processor: pc
 */




/* Function: param_macro_constants @ 0x1240 */
int param_macro_constants(int a1)
{
 int result; // eax

 result = 512;
 if ( a1 >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x1260 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1270 */
int param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a2;
 if ( a1 > a2 )
 v2 = a1;
 return a1 * a1 + v2;
}


/* Function: call_macro_functions @ 0x1290 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x12A0 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x12B0 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x12C0 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x12D0 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x12E0 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
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
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x1330 */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x1340 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1350 */
int param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x1390 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x13C0 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
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
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:09");
 return a1 + 282;
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
 "03:00:09");
 return 382;
}


/* Function: test_preprocessing_features @ 0x14A0 */
int test_preprocessing_features()
{
 puts(asc_22C9);
 printf(aPpL201D, 64);
 printf(aPpL202D, 30);
 printf(aPpL203D, 32);
 printf(aPpL204D, 57122);
 printf(aPpL301D, 116);
 printf(aPpL302D, 19);
 printf(aPpL303D, 60);
 printf("LOG: Values: %d, %d, %d\n", 10);
 printf(aPpL304D, 60);
 printf(aPpL305D, 16);
 printf(aPpL306D, 500);
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:09");
 return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x15D0 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x15E0 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x15F0 */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x1610 */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 __m128i v2; // [esp+0h] [ebp-10h] BYREF
 int v3; // [esp+10h] [ebp-Ch]

 v3 = 5;
 v2 = xmmword_231C;
 result = 0;
 {
   union { __m128i vec; unsigned int u[4]; } u = { .vec = v2 };
   for ( i = 0; i < 5; ++i )
   result += u.u[i];
 }
 return result;
}


/* Function: param_asm_multi_insn @ 0x1660 */
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


/* Function: call_asm_multi_insn @ 0x1680 */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[12]; // [esp+4h] [ebp-38h] BYREF
 __m128i v2; // [esp+10h] [ebp-2Ch] BYREF

 strcpy(v1, "Hello ASM");
 memset(&v2, 0, sizeof(v2));
 qmemcpy(&v2, v1, 9u);
 result = -1;
 if ( !(LOBYTE(v2) ^ 0x48 | BYTE4(v2) ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x16F0 */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1710 */
int param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x1730 */
int call_asm_simd()
{
 __m128i v0; // xmm0
 int32_t *p;

 v0 = _mm_add_epi32((__m128i)xmmword_2030, (__m128i)xmmword_2040);
 p = (int32_t *)&v0;
 return p[3] + p[2] + p[0] + p[1];
}


/* Function: param_asm_atomic @ 0x1790 */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x17B0 */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x17D0 */
signed int call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [esp+0h] [ebp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v2 + v0 + 5;
}


/* Function: param_dynamic_code @ 0x17F0 */
int param_dynamic_code(int a1)
{
 size_t len; // esi
 void *v2; // eax
 int v3; // edi

 len = sysconf(30);
 v2 = mmap(0, len, 7, DWORD1(xmmword_2010), DWORD2(xmmword_2010), HIDWORD(xmmword_2010));
 if ( v2 == (void *)-1 )
 return -1;
 v3 = a1 + 5;
 munmap(v2, len);
 return v3;
}


/* Function: param_memory_protection @ 0x1860 */
int param_memory_protection()
{
 size_t len; // esi
 int *v1; // eax
 int *v2; // edi
 int v3; // ebp
 int v5; // [esp+18h] [ebp-14h]

 len = sysconf(30);
 v1 = (int *)mmap(0, len, 3, DWORD1(xmmword_2020), DWORD2(xmmword_2020), HIDWORD(xmmword_2020));
 if ( v1 == (int *)-1 )
 return -1;
 v2 = v1;
 *v1 = 42;
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
 munmap(v2, len);
 return v3;
}


/* Function: param_clobber_importance @ 0x1920 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x1940 */
int call_asm_privileged()
{
 size_t len; // edi
 void *v1; // eax
 void *v2; // esi
 int v3; // edi
 int v4; // ecx
 int result; // eax

 len = sysconf(30);
 v1 = mmap(0, len, 7, DWORD1(xmmword_2010), DWORD2(xmmword_2010), HIDWORD(xmmword_2010));
 v2 = v1;
 if ( v1 == (void *)-1 )
 {
 v3 = -1;
 }
 else
 {
 munmap(v1, len);
 v3 = 15;
 }
 v4 = param_memory_protection() ^ 0x2A;
 result = 77;
 if ( v4 )
 result = v3;
 if ( v2 == (void *)-1 )
 return v3;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x19E0 */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x1A00 */
int test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // eax
 int v3; // ebp
 signed int v4; // esi
 size_t len; // edi
 void *v6; // eax
 void *v7; // esi
 int v8; // ecx
 int v9; // eax
 __m128i v11; // [esp+20h] [ebp-5Ch] BYREF
 __m128i v12; // [esp+30h] [ebp-4Ch] BYREF
 __m128i v13; // [esp+40h] [ebp-3Ch]
 __m128i v14; // [esp+5Ch] [ebp-20h]
 int32_t *p;

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 v12 = xmmword_231C;
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += *((unsigned int *)&v12 + i);
 printf(aAsmL402D, v0);
 strcpy((char *)&v11, "Hello ASM");
 v13 = _mm_setzero_si128();
 v12 = _mm_setzero_si128();
 qmemcpy(&v12, &v11, 9u);
 v2 = 42;
 v3 = -1;
 {
   union { __m128i vec; unsigned char bytes[16]; } u = { .vec = v12 };
   if ( u.bytes[0] ^ 0x48 | u.bytes[4] ^ 0x6F )
     v2 = -1;
 }
 v2 = -1;
 printf(aAsmL403D, v2);
 v12 = xmmword_2030;
 v11 = xmmword_2040;
 v14 = _mm_add_epi32((__m128i)xmmword_2030, (__m128i)xmmword_2040);
 p = (int32_t *)&v14;
 printf(aAsmL404D, p[3] + p[2] + p[0] + p[1]);
 {
   union { __m128i vec; int32_t i32[4]; } u = { .vec = v12 };
   int atomic_val = u.i32[0];
   v4 = _InterlockedExchangeAdd(&atomic_val, 5u);
   printf(aAsmL405D, v4 + atomic_val + 5);
 }
 len = sysconf(30);
 v6 = mmap(0, len, 7, DWORD1(xmmword_2010), DWORD2(xmmword_2010), HIDWORD(xmmword_2010));
 v7 = v6;
 if ( v6 != (void *)-1 )
 {
 munmap(v6, len);
 v3 = 15;
 }
 v8 = param_memory_protection() ^ 0x2A;
 v9 = 77;
 if ( v8 )
 v9 = v3;
 if ( v7 == (void *)-1 )
 v9 = v3;
 return printf(aAsmL406D, v9);
}


/* Function: main @ 0x1C00 */
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
