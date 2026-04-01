/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;

typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Include headers for standard functions */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdint.h>
#include <immintrin.h>

/* External symbols */
extern void (*_gmon_start__)(void);

/* Missing helper function stubs */
void frame_dummy(void) {}
int _do_global_ctors_aux(void) { return 0; }
void _do_global_dtors_aux(void) {}

/* 128-bit type compatible with all targets */
typedef union {
    unsigned char bytes[16];
    unsigned int words[4];
    unsigned long long qwords[2];
    __m128i vec;
} xmm128_t;

/* Global data variables */
static const char asc_22C9[] = "Testing preprocessing features\n";
static const char aPpL201D[] = "param_macro_constants: %d\n";
static const char aPpL202D[] = "param_macro_functions: %d\n";
static const char aPpL203D[] = "param_conditional_compile: %d\n";
static const char aPpL204D[] = "param_multi_branch_compile: %d\n";
static const char aPpL301D[] = "param_macro_recursion: %d\n";
static const char aPpL302D[] = "param_stringize: %d\n";
static const char aPpL303D[] = "param_token_paste: %d\n";
static const char aPpL304D[] = "param_variadic_macro: %d\n";
static const char aPpL305D[] = "param_macro_override: %d\n";
static const char aPpL306D[] = "param_include_guard: %d\n";
static const char aPpL307D[] = "call_builtin_macros: %d\n";
static const char aAsmL401D[] = "param_asm_basic: %d\n";
static const char aAsmL402D[] = "param_asm_clobber: %d\n";
static const char aAsmL403D[] = "param_asm_multi_insn: %d\n";
static const char aAsmL404D[] = "param_asm_simd: %d\n";
static const char aAsmL405D[] = "param_asm_atomic: %d\n";
static const char aAsmL406D[] = "call_asm_privileged: %d\n";
static const char asc_22F0[] = "Testing ASM features\n";
extern xmm128_t xmmword_2030;
extern xmm128_t xmmword_2040;
extern xmm128_t xmmword_2010;
extern xmm128_t xmmword_2020;
extern xmm128_t xmmword_231C;
extern int global_var;

/* Helper macros */
#define DWORD1(x) ((unsigned int)((x).qwords[0] & 0xFFFFFFFF))
#define DWORD2(x) ((unsigned int)((x).qwords[0] >> 32))
#define HIDWORD(x) ((unsigned int)((x).qwords[0] >> 32))
    #define LODWORD(x) ((x).words[0])
#define BYTE4(x) ((x).bytes[4])

/* Windows _InterlockedExchangeAdd implementation for Linux */
static inline long _InterlockedExchangeAdd(volatile long *Addend, long Value)
{
    return __sync_fetch_and_add(Addend, Value);
}

/* Define external xmm128_t variables */
xmm128_t xmmword_2030 = {{0}};
xmm128_t xmmword_2040 = {{0}};
xmm128_t xmmword_2010 = {{0}};
xmm128_t xmmword_2020 = {{0}};
xmm128_t xmmword_231C = {{0}};

/* Define global_var */
int global_var = 0;

/* qmemcpy wrapper */
static inline void qmemcpy(void *dst, const void *src, size_t n) {
    memcpy(dst, src, n);
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_clang_Os_no_g
 * Processor: pc
 */




/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" ::: "memory");
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
int param_macro_constants(int a1)
{
 int result; // eax

 result = 512;
 if ( a1 >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x124A */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x1250 */
int param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a2;
 if ( a1 > a2 )
 v2 = a1;
 return a1 * a1 + v2;
}


/* Function: call_macro_functions @ 0x1265 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x126B */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x1276 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x127C */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x1289 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x128F */
int param_macro_recursion(int a1)
{
 return a1 + 16;
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
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x12B3 */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x12C1 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x12C7 */
int param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x12FD */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x132C */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
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
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:21");
 return a1 + 282;
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
 "03:00:21");
 return 382;
}


/* Function: test_preprocessing_features @ 0x13E1 */
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
 "03:00:21");
 return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x1515 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x1523 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x1532 */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x154F */
int call_asm_clobber()
{
 int result; // eax
 int i; // ecx
 xmm128_t v2; // [esp+0h] [ebp-1Ch]
 int v3; // [esp+10h] [ebp-Ch]

 v3 = 5;
 v2 = xmmword_231C;
 result = 0;
 for ( i = 0; i < 5; ++i )
 result += v2.words[i];
 return result;
}


/* Function: param_asm_multi_insn @ 0x1590 */
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
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1627 */
int param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x1642 */
int call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [esp+0h] [ebp-3Ch] BYREF

 v3[2] = xmmword_2030.vec;
 v3[1] = xmmword_2040.vec;
 v3[0] = _mm_add_epi32(xmmword_2030.vec, xmmword_2040.vec);
 si128 = _mm_load_si128(v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x169A */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x16AB */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x16BC */
signed int call_asm_atomic()
{
 signed int v0; // ecx
 signed int v2; // [esp-4h] [ebp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return v0 + v2 + 5;
}


/* Function: param_dynamic_code @ 0x16D7 */
int param_dynamic_code(int a1)
{
 size_t len; // esi
 void *v2; // eax
 int v3; // edi
 xmm128_t local_xmm;
 unsigned long xmm_val;
 unsigned int low_part;
 unsigned int high_part;

 len = sysconf(30);
 local_xmm = xmmword_2010;
 xmm_val = local_xmm.qwords[0];
 low_part = (unsigned int)(xmm_val & 0xFFFFFFFF);
 high_part = (unsigned int)(xmm_val >> 32);
 v2 = mmap(0, len, 7, (int)low_part, (int)high_part, (int)high_part);
 if ( v2 == (void *)-1 )
 return -1;
 v3 = a1 + 5;
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
 xmm128_t local_xmm;
 unsigned long xmm_val;
 unsigned int low_part;
 unsigned int high_part;

 len = sysconf(30);
 xmm_val = xmmword_2020.qwords[0];
 low_part = (unsigned int)(xmm_val & 0xFFFFFFFF);
 high_part = (unsigned int)(xmm_val >> 32);
 v1 = (int *)mmap(0, len, 3, (int)low_part, (int)high_part, (int)high_part);
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
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
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
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x1880 */
int test_asm_features()
{
 int v0; // eax
 int i; // ecx
 int v2; // eax
 __m128i v3; // xmm0
 __m128i v4; // xmm1
 signed int v5; // ecx
 int v6; // eax
 __m128i v8; // [esp+10h] [ebp-5Ch] BYREF
 xmm128_t v9; // [esp+20h] [ebp-4Ch] BYREF
 xmm128_t v10; // [esp+30h] [ebp-3Ch] BYREF
 xmm128_t v11; // [esp+40h] [ebp-2Ch]

 puts(asc_22F0);
 printf(aAsmL401D, 15);
 v11.words[0] = 5;
 v10 = xmmword_231C;
 v0 = 0;
 for ( i = 0; i < 5; ++i )
 v0 += v10.words[i];
 printf(aAsmL402D, v0);
 strcpy((char *)v9.bytes, "Hello ASM");
 memset(v11.bytes, 0, sizeof(v11));
 memset(v10.bytes, 0, sizeof(v10));
 qmemcpy(v10.bytes, v9.bytes, 9u);
 v2 = 42;
 if ( v10.bytes[0] ^ 0x48 | v10.bytes[4] ^ 0x6F )
 v2 = -1;
 printf(aAsmL403D, v2);
 v10.vec = xmmword_2030.vec;
 v9.vec = xmmword_2040.vec;
 v8 = _mm_add_epi32(v10.vec, v9.vec);
 v3 = _mm_load_si128(&v8);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v3, 238), v3);
 printf(aAsmL404D, _mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4)));
 v10.words[0] = 10;
 v5 = _InterlockedExchangeAdd((volatile signed int *)&v10.words[0], 5u);
 printf(aAsmL405D, v5 + v10.words[0] + 5);
 v6 = call_asm_privileged();
 return printf(aAsmL406D, v6);
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
