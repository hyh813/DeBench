#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

/* Ensure _SC_PAGESIZE is defined */
#ifndef _SC_PAGESIZE
#define _SC_PAGESIZE 30
#endif

/* Auto-injected type definitions by preprocessor - using standard headers */
#include <stdint.h>
#include <stddef.h>
#include <inttypes.h>

/* SSE/AVX intrinsics */
#include <emmintrin.h>
#include <immintrin.h>

/* 128-bit integer types - use compiler built-ins directly */
/* For GCC and Clang, __int128 and unsigned __int128 are built-in types */

/* 128-bit integer types - these are built-in in GCC/Clang */
/* Use __int128_t and __uint128_t as the standard types */
#if defined(__SIZEOF_INT128__)
/* Standard 128-bit types are available - alias built-in to standard names */
typedef __int128 __int128_t;
typedef unsigned __int128 __uint128_t;
#else
/* Fallback for compilers without 128-bit support - use uint64_t */
typedef uint64_t __int128_t;
typedef uint64_t __uint128_t;
#endif

/* Forward declarations for data references */
extern const char asc_22C9[];
extern const char asc_22F0[];
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
extern const char aAsmL401D[];
extern const char aAsmL402D[];
extern const char aAsmL403D[];
extern const char aAsmL404D[];
extern const char aAsmL405D[];
extern const char aAsmL406D[];
extern __uint128_t xmmword_2010;
extern __uint128_t xmmword_2020;
extern __uint128_t xmmword_2030;
extern __uint128_t xmmword_2040;
extern __uint128_t xmmword_231C;
extern int global_var;

/* Define the external data symbols */
__uint128_t xmmword_2010 = 0;
__uint128_t xmmword_2020 = 0;
__uint128_t xmmword_2030 = 0;
__uint128_t xmmword_2040 = 0;
__uint128_t xmmword_231C = 0;
int global_var = 0;

/* String constant definitions */
const char asc_22C9[] = "Preprocessing Features:";
const char asc_22F0[] = "Assembly Features:";
const char aPpL201D[] = "param_macro_constants: %d\n";
const char aPpL202D[] = "param_macro_functions: %d\n";
const char aPpL203D[] = "param_conditional_compile: %d\n";
const char aPpL204D[] = "param_multi_branch_compile: %d\n";
const char aPpL301D[] = "param_macro_recursion: %d\n";
const char aPpL302D[] = "param_stringize: %d\n";
const char aPpL303D[] = "param_token_paste: %d\n";
const char aPpL304D[] = "param_variadic_macro: %d\n";
const char aPpL305D[] = "param_macro_override: %d\n";
const char aPpL306D[] = "param_include_guard: %d\n";
const char aPpL307D[] = "param_builtin_macros: %d\n";
const char aAsmL401D[] = "param_asm_basic: %d\n";
const char aAsmL402D[] = "param_asm_clobber: %d\n";
const char aAsmL403D[] = "param_asm_multi_insn: %d\n";
const char aAsmL404D[] = "param_asm_simd: %d\n";
const char aAsmL405D[] = "param_asm_atomic: %d\n";
const char aAsmL406D[] = "param_asm_privileged: %d\n";

/* Inline qmemcpy definition */
static inline void qmemcpy(void *dst, const void *src, size_t n) {
    memcpy(dst, src, n);
}

/* Helper macros for extracting parts of larger values */
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define LODWORD(x) ((unsigned int)((x) & 0xFFFFFFFF))
#define SET_LODWORD(x, val) ((x) = ((x) & ~0xFFFFFFFFULL) | ((unsigned int)(val) & 0xFFFFFFFF))
/* BYTE4 works for both 64-bit and 128-bit types */
#define BYTE4(x) ((unsigned char)((((unsigned long long)(x)) >> 32) & 0xFF))
#define DWORD1(x) ((unsigned int)((x) & 0xFFFFFFFF))
#define DWORD2(x) ((unsigned int)((((unsigned long long)(x)) >> 32) & 0xFFFFFFFF))
#define HIDWORD(x) ((unsigned int)((((__uint128_t)(x)) >> 96) & 0xFFFFFFFF))

/* InterlockedExchangeAdd replacement for Linux */
static inline int _InterlockedExchangeAdd(volatile int *Addend, int Value) {
    return __sync_fetch_and_add(Addend, Value);
}

/* Additional atomic intrinsics for compatibility */
static inline long _InterlockedExchangeAdd64(volatile long *Addend, long Value) {
    return __sync_fetch_and_add(Addend, Value);
}

/* Forward declarations for CRT symbols */
extern void _gmon_start__(void) __attribute__((weak));

/* CRT stub implementations */
void frame_dummy(void) {
}

int _do_global_ctors_aux(void) {
    return 0;
}

int _do_global_dtors_aux(void) {
    return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O1_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030() __attribute__((noreturn))
{
 __asm__ volatile ("jmp *8(%%ebx)" : : : "memory");
 __builtin_unreachable();
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
 "03:00:07");
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
 "03:00:07");
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
 "03:00:07");
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
 __uint128_t v2; // [esp+0h] [ebp-1Ch]
 int v3; // [esp+10h] [ebp-Ch]

 v3 = 5;
 v2 = xmmword_231C;
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += *((unsigned int *)&v2 + i);
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

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 qmemcpy(v2, v1, 9u);
 result = -1;
 if ( !(LOBYTE(v2[0]) ^ 0x48 | BYTE4(v2[0]) ^ 0x6F) )
 return 42;
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
 __m128i v0; // xmm0
 union { __m128i v; int i[4]; } u;

 u.v = _mm_add_epi32(*(__m128i *)&xmmword_2030, *(__m128i *)&xmmword_2040);
 return u.i[3] + u.i[2] + u.i[0] + u.i[1];
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
 v2 = mmap(0, len, 7, DWORD1(xmmword_2010), DWORD2(xmmword_2010), HIDWORD(xmmword_2010));
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
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
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
int param_memory_clobber_demo()
{
 return (int)global_var + 50;
}


/* Function: test_asm_features @ 0x1A00 */
void test_asm_features()
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
 __uint128_t v10; // [esp+20h] [ebp-5Ch] BYREF
 __uint128_t v11; // [esp+30h] [ebp-4Ch] BYREF
 __uint128_t v12; // [esp+40h] [ebp-3Ch]
 __m128i v13; // [esp+5Ch] [ebp-20h]

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 SET_LODWORD(v12, 5);
 v11 = xmmword_231C;
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += *((unsigned int *)&v11 + i);
 printf(aAsmL402D, v0);
 strcpy((char *)&v10, "Hello ASM");
 v12 = 0;
 v11 = 0;
 qmemcpy(&v11, &v10, 9u);
 v2 = 42;
 v3 = -1;
 if ( (unsigned char)v11 ^ 0x48 | BYTE4(v11) ^ 0x6F )
 v2 = -1;
 printf(aAsmL403D, v2);
 v11 = xmmword_2030;
 v10 = xmmword_2040;
 {
 union { __m128i v; int i[4]; } u;
 u.v = _mm_add_epi32(*(__m128i *)&xmmword_2030, *(__m128i *)&xmmword_2040);
 printf(aAsmL404D, u.i[3] + u.i[2] + u.i[0] + u.i[1]);
 }
 volatile int atomic_temp = 10;
 v4 = _InterlockedExchangeAdd(&atomic_temp, 5);
 SET_LODWORD(v11, atomic_temp);
 printf(aAsmL405D, v4 + (unsigned int)v11 + 5);
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
 printf(aAsmL406D, v9);
}


/* Function: main @ 0x1C00 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x1C7C */
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
