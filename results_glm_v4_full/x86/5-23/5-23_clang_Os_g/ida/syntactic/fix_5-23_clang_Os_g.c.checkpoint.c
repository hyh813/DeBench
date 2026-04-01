/* Standard library headers */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

/* SIMD intrinsics */
#include <emmintrin.h>

/* Windows/MSVC intrinsics compatibility */
#ifdef _MSC_VER
#include <intrin.h>
#else
static inline int _InterlockedExchangeAdd(volatile int *addend, int value)
{
    return __sync_fetch_and_add(addend, value);
}
#endif

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
/* size_t typically defined in stddef.h or sys/types.h */
#if !defined(__size_t_defined) && !defined(_SIZE_T) && !defined(__need_size_t)
typedef unsigned long size_t;
#define __size_t_defined
#define _SIZE_T
#endif
/* ssize_t typically defined in sys/types.h */
#if !defined(_SSIZE_T) && !defined(__ssize_t_defined) && !defined(__need_ssize_t)
typedef long ssize_t;
#define _SSIZE_T
#define __ssize_t_defined
#endif
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_Os_g
 * Processor: pc
 */

/* External declarations */
extern void (*_gmon_start__)(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Helper macros */
#define DWORD1(x) (*((unsigned int*)&(x)))
#define DWORD2(x) (*((unsigned int*)&(x) + 1))
#define HIDWORD(x) (*((unsigned int*)&(x) + 1))
#define LODWORD(x) (*((unsigned int*)&(x)))
#define BYTE4(x) (*((unsigned char*)&(x) + 4))

/* qmemcpy function - inline memcpy */
static inline void qmemcpy(void *dst, const void *src, size_t n)
{
    memcpy(dst, src, n);
}

/* Global data declarations */
extern const char asc_22C9[];
extern const char aPpL201D[];
extern const char aPpL202D[];
extern const char aPpL203D[];
extern const char aPpL204D[];
extern const char aPpL301D[];
extern const char aPpL302D[];
extern const char aPpL303D[];
extern const char aPpL304D[];
extern const char aPpL305D[];
extern const char aPpL306D[];
extern const char aPpL307D[];
extern const char asc_22F0[];
extern const char aAsmL401D[];
extern const char aAsmL402D[];
extern const char aAsmL403D[];
extern const char aAsmL404D[];
extern const char aAsmL405D[];
extern const char aAsmL406D[];

extern __m128i xmmword_2030;
extern __m128i xmmword_2040;
extern __m128i xmmword_2010;
extern __m128i xmmword_2020;
extern __m128i xmmword_231C;

extern int global_var;

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( _gmon_start__ )
 _gmon_start__();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *%0" : : "r" (*((void**)((intptr_t)(*((int*)0 + 8))))));
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


/* Function: param_macro_constants @ 0x1234 */
int param_macro_constants(int size)
{
 int result; // eax

 result = 512;
 if ( size >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x124A */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1250 */
int param_macro_functions(int x, int y)
{
 int v2; // eax

 v2 = y;
 if ( x > y )
 v2 = x;
 return x * x + v2;
}


/* Function: call_macro_functions @ 0x1265 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x126B */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x1276 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x127C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1289 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x128F */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1297 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x129D */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x12A3 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x12A9 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x12B3 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x12C1 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x12C7 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x12FD */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x132C */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x1335 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x133B */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1341 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1347 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:19");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1396 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:19");
 return 382;
}


/* Function: test_preprocessing_features @ 0x13E1 */
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
 "03:00:19");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1515 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x1523 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x1532 */
int param_asm_clobber(int *arr, int n)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < n; ++i )
 result += arr[i];
 return result;
}


/* Function: call_asm_clobber @ 0x154F */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 __m128i v2; // [esp+0h] [ebp-1Ch]
 int v3; // [esp+10h] [ebp-Ch]

 v3 = 5;
 v2 = (__m128i)xmmword_231C;
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += *((unsigned int *)&v2 + i);
 return result;
}


/* Function: param_asm_multi_insn @ 0x1590 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 qmemcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x15AE */
int call_asm_multi_insn()
{
 int result; // eax
 char v1[12]; // [esp+4h] [ebp-38h] BYREF
 unsigned char v2[44]; // [esp+10h] [ebp-2Ch] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, 32);
 qmemcpy(v2, v1, 9u);
 result = 42;
 if ( v2[0] ^ 0x48 | v2[4] ^ 0x6F )
 return -1;
 return result;
}


/* Function: param_asm_simd @ 0x160B */
int param_asm_simd(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(*(__m128i *)a, *(__m128i *)b);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1627 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *(__m128i *)result = _mm_add_epi32(_mm_load_si128((const __m128i *)b), *(__m128i *)a);
 return 0;
}


/* Function: call_asm_simd @ 0x1642 */
int call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [esp+0h] [ebp-3Ch] BYREF

 v3[2] = (__m128i)xmmword_2030;
 v3[1] = (__m128i)xmmword_2040;
 v3[0] = _mm_add_epi32((__m128i)xmmword_2030, (__m128i)xmmword_2040);
 si128 = _mm_load_si128(v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x169A */
int param_asm_atomic(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: param_atomic_c11 @ 0x16AB */
int param_atomic_c11(int *counter, int increment)
{
 return increment + _InterlockedExchangeAdd(counter, increment);
}


/* Function: call_asm_atomic @ 0x16BC */
int call_asm_atomic()
{
 signed int v0; // ecx
 signed int v2; // [esp-4h] [ebp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v0 + v2 + 5;
}


/* Function: param_dynamic_code @ 0x16D7 */
int param_dynamic_code(int x)
{
 size_t len; // esi
 void *v2; // eax
 int v3; // edi

 len = sysconf(30);
 v2 = mmap(0, len, 7, DWORD1(xmmword_2010), DWORD2(xmmword_2010), HIDWORD(xmmword_2010));
 if ( v2 == (void *)-1 )
 return -1;
 v3 = x + 5;
 munmap(v2, len);
 return v3;
}


/* Function: param_memory_protection @ 0x1739 */
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


/* Function: param_clobber_importance @ 0x17E8 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0x1803 */
int call_asm_privileged()
{
 int v0; // esi
 int v1; // ecx
 int result; // eax

 v0 = param_dynamic_code(10);
 v1 = v0 ^ 0xF | param_memory_protection() ^ 0x2A;
 result = 77;
 if ( v1 )
 return v0;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x1862 */
int param_memory_clobber_demo()
{
 return (int)global_var + 50;
}


/* Function: test_asm_features @ 0x1880 */
void test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // eax
 __m128i v3; // xmm0
 __m128i v4; // xmm1
 signed int v5; // ecx
 int v6; // eax
 __m128i v7; // [esp+10h] [ebp-5Ch] BYREF
 __m128i v8; // [esp+20h] [ebp-4Ch] BYREF
 __m128i v9; // [esp+30h] [ebp-3Ch] BYREF
 __m128i v10; // [esp+40h] [ebp-2Ch]

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 v10 = _mm_set1_epi32(5);
 v9 = xmmword_231C;
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += *((unsigned int *)&v9 + i);
 printf(aAsmL402D, v0);
 strcpy((char *)&v8, "Hello ASM");
 v10 = _mm_setzero_si128();
 v9 = _mm_setzero_si128();
 qmemcpy(&v9, &v8, 9u);
 v2 = 42;
 if ( (_mm_cvtsi128_si32(v9) & 0xFF) ^ 0x48 | (*((unsigned char *)&v9 + 4)) ^ 0x6F )
 v2 = -1;
 printf(aAsmL403D, v2);
 v9 = xmmword_2030;
 v8 = xmmword_2040;
 v7 = _mm_add_epi32((__m128i)xmmword_2030, (__m128i)xmmword_2040);
 v3 = _mm_load_si128(&v7);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v3, 238), v3);
 printf(aAsmL404D, _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4)));
 v9 = _mm_cvtsi32_si128(10);
 v5 = _InterlockedExchangeAdd((volatile signed int *)&v9, 5u);
 printf(aAsmL405D, v5 + (unsigned int)_mm_cvtsi128_si32(v9) + 5);
 v6 = call_asm_privileged();
 printf(aAsmL406D, v6);
}


/* Function: main @ 0x19F3 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1A6C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x4040 */

/* FAILED to decompile: mprotect @ 0x4044 */

/* FAILED to decompile: printf @ 0x4048 */

/* FAILED to decompile: sysconf @ 0x404C */

/* FAILED to decompile: __cxa_finalize @ 0x4050 */

/* FAILED to decompile: puts @ 0x4054 */

/* FAILED to decompile: mmap @ 0x4058 */

/* FAILED to decompile: munmap @ 0x405C */

/* Total functions decompiled: 57, failed: 8 */
