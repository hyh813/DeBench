#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Helper functions for extracting DWORDs from __m128i */
static inline unsigned int xmmword_get_low32(__m128i x) {
    union { __m128i v; unsigned long long u[2]; } u;
    u.v = x;
    return (unsigned int)(u.u[0] & 0xFFFFFFFFUL);
}

static inline unsigned int xmmword_get_high32(__m128i x) {
    union { __m128i v; unsigned long long u[2]; } u;
    u.v = x;
    return (unsigned int)(u.u[1] >> 32);
}

static inline unsigned long long xmmword_get_low64(__m128i x) {
    union { __m128i v; unsigned long long u[2]; } u;
    u.v = x;
    return u.u[0];
}

static inline unsigned long long xmmword_get_high64(__m128i x) {
    union { __m128i v; unsigned long long u[2]; } u;
    u.v = x;
    return u.u[1];
}

/* Helper functions for DWORD extraction */
static inline unsigned int xmmword_get_dword1(__m128i x) {
    unsigned long long low = xmmword_get_low64(x);
    return (unsigned int)(low & 0xFFFFFFFFUL);
}

static inline unsigned int xmmword_get_dword2(__m128i x) {
    unsigned long long low = xmmword_get_low64(x);
    return (unsigned int)(low >> 32);
}

static inline unsigned int xmmword_get_hidword(__m128i x) {
    unsigned long long high = xmmword_get_high64(x);
    return (unsigned int)(high >> 32);
}

/* Helper macros */
#define DWORD1(x) _Generic((x), \
    __m128i: xmmword_get_dword1((__m128i)(x)), \
    default: ((unsigned int)((x) & 0xFFFFFFFFUL)))

#define DWORD2(x) _Generic((x), \
    __m128i: xmmword_get_dword2((__m128i)(x)), \
    default: ((unsigned int)((x) >> 32)))

#define HIDWORD(x) _Generic((x), \
    __m128i: xmmword_get_hidword((__m128i)(x)), \
    default: ((unsigned int)((x) >> 32)))

#define LOBYTE(x) (((unsigned long)(x)) & 0xFF)
#define BYTE4(x) (((((unsigned long)(x)) >> 24) & 0xFF))
#define LODWORD(x) (((unsigned long)(x)) & 0xFFFFFFFF)

/* Atomic operation wrapper for Linux */
static inline int _InterlockedExchangeAdd(volatile int *target, int increment) {
    return __sync_fetch_and_add(target, increment);
}





/* Stub declarations for CRT functions */
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* CRT stub implementations */
void frame_dummy(void) {
}

int _do_global_ctors_aux(void) {
    return 0;
}

void _do_global_dtors_aux(void) {
}

/* Global data placeholders */
extern int global_var;
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
extern __m128i xmmword_2010;
extern __m128i xmmword_2020;
extern __m128i xmmword_2030;
extern __m128i xmmword_2040;
extern __m128i xmmword_231C;

/* Definitions for global data */
int global_var = 0;
const char asc_22C9[] = "Testing preprocessing features\n";
const char asc_22F0[] = "Testing ASM features\n";
const char aPpL201D[] = "param_macro_constants returned: %d\n";
const char aPpL202D[] = "param_macro_functions returned: %d\n";
const char aPpL203D[] = "param_conditional_compile returned: %d\n";
const char aPpL204D[] = "param_multi_branch_compile returned: %d\n";
const char aPpL301D[] = "param_macro_recursion returned: %d\n";
const char aPpL302D[] = "param_stringize returned: %d\n";
const char aPpL303D[] = "param_token_paste returned: %d\n";
const char aPpL304D[] = "param_variadic_macro returned: %d\n";
const char aPpL305D[] = "param_macro_override returned: %d\n";
const char aPpL306D[] = "param_include_guard returned: %d\n";
const char aPpL307D[] = "param_builtin_macros returned: %d\n";
const char aAsmL401D[] = "param_asm_basic returned: %d\n";
const char aAsmL402D[] = "param_asm_clobber returned: %d\n";
const char aAsmL403D[] = "param_asm_multi_insn returned: %d\n";
const char aAsmL404D[] = "param_asm_simd returned: %d\n";
const char aAsmL405D[] = "param_asm_atomic returned: %d\n";
const char aAsmL406D[] = "call_asm_privileged returned: %d\n";
__m128i xmmword_2010 = (__m128i){0};
__m128i xmmword_2020 = (__m128i){0};
__m128i xmmword_2030 = (__m128i){0};
__m128i xmmword_2040 = (__m128i){0};
__m128i xmmword_231C = (__m128i){0};

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_O3_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile("jmp *8(%%ebx)" : : : "memory");
}


/* Function: sub_10B0 @ 0x10B0 */
int sub_10B0(int a1)
{
 return (*(int (**)(void))(a1 - 16))();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_10EC @ 0x10EC */
void sub_10EC(void)
{
    __asm__ volatile("" ::: "memory");
}


/* Function: __x86.get_pc_thunk.bx @ 0x10F0 */
void __x86_get_pc_thunk_bx(void)
{
    __asm__ volatile("mov %%ebx, %%eax" ::: "eax");
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1229 */
void __x86_get_pc_thunk_dx(void)
{
    __asm__ volatile("mov %%edx, %%eax" ::: "eax");
}


/* Function: __x86.get_pc_thunk.di @ 0x122D */
void __x86_get_pc_thunk_di(void)
{
    __asm__ volatile("mov %%edi, %%eax" ::: "eax");
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
 int result;
 int i;
 unsigned char v2[16];
 int v3;

 v3 = 5;
 memcpy(v2, &xmmword_231C, sizeof(xmmword_231C));
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += ((unsigned int *)v2)[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x1660 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x1680 */
int call_asm_multi_insn()
{
 int result;
 char v1[12];
 unsigned long long v2[2];

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 memcpy(v2, v1, 9u);
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
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [esp+0h] [ebp-3Ch] BYREF

 v3[2] = xmmword_2030;
 v3[1] = xmmword_2040;
 v3[0] = _mm_add_epi32(xmmword_2030, xmmword_2040);
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
	v2 = mmap(0, len, 7, (int)xmmword_get_dword1(xmmword_2010), (int)xmmword_get_dword2(xmmword_2010), (off_t)xmmword_get_hidword(xmmword_2010));
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
	v1 = (int *)mmap(0, len, 3, (int)xmmword_get_dword1(xmmword_2020), (int)xmmword_get_dword2(xmmword_2020), (off_t)xmmword_get_hidword(xmmword_2020));
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
 void *v1; // ebp
 int v2; // esi
 int v3; // eax
 size_t v4; // edi
 int *v5; // eax
 int *v6; // ebp
 int result; // eax
 int v8; // [esp+20h] [ebp-1Ch]
 int v9; // [esp+24h] [ebp-18h]
 void *v10; // [esp+28h] [ebp-14h]

len = sysconf(30);
	v1 = mmap(0, len, 7, (int)xmmword_get_dword1(xmmword_2010), (int)xmmword_get_dword2(xmmword_2010), (off_t)xmmword_get_hidword(xmmword_2010));
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
	v5 = (int *)mmap(0, v4, 3, (int)xmmword_get_dword1(xmmword_2020), (int)xmmword_get_dword2(xmmword_2020), (off_t)xmmword_get_hidword(xmmword_2020));
	if ( v5 != (int *)-1 )
 {
 v6 = v5;
 *v5 = 42;
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
 munmap(v6, v4);
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
 int v0;
 int i;
 int v2;
 __m128i si128;
 __m128i v4;
 signed int v5;
 int v6;
 unsigned char v7[16];
 unsigned char v8[16];
 unsigned long long v9[2];
 __m128i v10[2];

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 v9[0] = 5;
 v9[1] = 0;
 memcpy(v8, &xmmword_231C, sizeof(xmmword_231C));
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += ((unsigned int *)v8)[i];
 printf(aAsmL402D, v0);
 strcpy((char *)v7, "Hello ASM");
 v9[0] = 0;
 v9[1] = 0;
 memset(v8, 0, sizeof(v8));
 memcpy(v8, v7, 9u);
 v2 = -1;
 if ( !(((unsigned char *)v8)[0] ^ 0x48 | ((((unsigned char *)v8)[0]) >> 24) & 0xFF ^ 0x6F) )
 v2 = 42;
 printf(aAsmL403D, v2);
 memcpy(v8, &xmmword_2030, sizeof(xmmword_2030));
 memcpy(v7, &xmmword_2040, sizeof(xmmword_2040));
 v10[0] = _mm_add_epi32(*(__m128i *)v8, *(__m128i *)v7);
 si128 = _mm_load_si128((__m128i *)v10);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 printf(aAsmL404D, _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4)));
 ((unsigned int *)v8)[0] = 10;
 v5 = _InterlockedExchangeAdd((volatile int *)v8, 5);
 printf(aAsmL405D, v5 + ((unsigned int *)v8)[0] + 5);
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



/* Function: .term_proc @ 0x1CAC */
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
