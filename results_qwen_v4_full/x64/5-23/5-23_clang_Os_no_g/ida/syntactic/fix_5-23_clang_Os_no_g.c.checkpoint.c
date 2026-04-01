#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_clang_Os_no_g
 * Processor: pc
 */

/* Macro definitions */
#define LODWORD(x) ((unsigned int)(x))
#define BYTE4(x) ((unsigned char)(((x) >> 32) & 0xFF))
#define qmemcpy(dest, src, n) memcpy(dest, src, n)

/* Global variables */
long long global_var = 0;
__int128 xmmword_22D0 = 0;
__int128 xmmword_22F0 = 0;
__int128 xmmword_2300 = 0;

/* Function: .init_proc @ 0x1000 */
long long (*_gmon_start__)(void) = 0;

long long (**init_proc())(void)
{
 long long (**result)(void); // rax

 result = (long long (**)(void))&_gmon_start__;
 if ( _gmon_start__ )
 return (long long (**)(void))_gmon_start__;
 return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x118C */
long long param_macro_constants(int a1)
{
 long long result; // rax

 result = 512;
 if ( a1 >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x11A0 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x11A6 */
long long param_macro_functions(int a1, int a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return (unsigned int)(a2 + a1 * a1);
}


/* Function: call_macro_functions @ 0x11B3 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x11B9 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x11C0 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x11C6 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x11CF */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x11D5 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x11D9 */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x11DF */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x11E5 */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x11EB */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x11F1 */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x11FB */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1201 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x121F */
long long call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x1244 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x124A */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1250 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1256 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x125C */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:00");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1298 */
long long call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:00");
 return 382;
}


/* String constants */
const char *s = "Testing preprocessing features";
const char *aPpL201D = "param_macro_constants: %d\n";
const char *aPpL202D = "call_macro_functions: %d\n";
const char *aPpL203D = "call_conditional_compile: %d\n";
const char *aPpL204D = "call_multi_branch_compile: %d\n";
const char *aPpL301D = "call_macro_recursion: %d\n";
const char *aPpL302D = "call_stringize: %d\n";
const char *aPpL303D = "call_token_paste: %d\n";
const char *aPpL304D = "call_variadic_macro: %d\n";
const char *aPpL305D = "call_macro_override: %d\n";
const char *aPpL306D = "call_include_guard: %d\n";
const char *aPpL307D = "call_builtin_macros: %d\n";

/* Function: test_preprocessing_features @ 0x12CF */
int test_preprocessing_features()
{
 puts(s);
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
 "03:01:00");
 return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x13FA */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x1404 */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x1413 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
 result = *(unsigned int *)(a1 + 4 * i) + result;
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x1427 */
long long call_asm_clobber()
{
 long long result; // rax
 long long i; // rcx
 __int128 v2; // [rsp+0h] [rbp-18h]
 int v3; // [rsp+10h] [rbp-8h]

 v3 = 5;
 v2 = xmmword_22D0;
 result = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 result = *((unsigned int *)&v2 + i) + result;
 return (unsigned int)result;
}


/* Function: param_asm_multi_insn @ 0x1458 */
char param_asm_multi_insn(unsigned char *a1, char *a2, long long a3)
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


/* Function: call_asm_multi_insn @ 0x146F */
long long call_asm_multi_insn()
{
 long long result; // rax
 char v1[16]; // [rsp+0h] [rbp-38h] BYREF
 unsigned char v2[40]; // [rsp+10h] [rbp-28h] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, 32);
 qmemcpy(v2, v1, 9u);
 result = 0xFFFFFFFFLL;
 if ( !(v2[0] ^ 0x48 | v2[4] ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x14CE */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x14DE */
long long param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x14ED */
long long call_asm_simd()
{
 __m128i si128; // xmm0
 __m128i v1; // xmm1
 __m128i v3[3]; // [rsp+0h] [rbp-38h] BYREF

 v3[2] = (__m128i)xmmword_22F0;
 v3[1] = (__m128i)xmmword_2300;
 v3[0] = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
 si128 = _mm_load_si128(v3);
 v1 = _mm_add_epi32(_mm_shuffle_epi32(si128, 238), si128);
 return (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v1, 85), v1));
}


/* Function: param_asm_atomic @ 0x1538 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1541 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + __sync_fetch_and_add(a1, a2);
}


/* Function: call_asm_atomic @ 0x154A */
long long call_asm_atomic()
{
 signed int v0; // ecx
 signed int v2; // [rsp+0h] [rbp-4h] BYREF

 v2 = 10;
 v0 = __sync_fetch_and_add(&v2, 5);
 return (unsigned int)(v0 + v2 + 5);
}


/* Function: param_dynamic_code @ 0x1566 */
long long param_dynamic_code(unsigned int a1)
{
 size_t v1; // rbx
 unsigned int *v2; // rax
 void *v3; // rbp
 unsigned int v4; // r14d

 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (unsigned int *)-1LL )
 return 0xFFFFFFFFLL;
 v3 = v2;
 *((unsigned short *)v2 + 2) = -15611;
 *v2 = -1065092983;
 v4 = ((long long ( *)(unsigned long long))v2)(a1);
 munmap(v3, v1);
 return v4;
}


/* Function: param_memory_protection @ 0x15CE */
long long param_memory_protection()
{
 size_t v0; // r14
 unsigned int v1; // ebp
 unsigned int *v2; // rax
 unsigned int *v3; // rbx
 unsigned int v4; // r15d

 v0 = sysconf(30);
 v1 = -1;
 v2 = (unsigned int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (unsigned int *)-1LL )
 {
 v3 = v2;
 *v2 = 42;
 v1 = -2;
 if ( !mprotect(v2, v0, 1) )
 {
 v4 = *v3;
 v1 = -3;
 if ( !mprotect(v3, v0, 3) )
 {
 *v3 = 100;
 v1 = v4;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0x1669 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x1678 */
long long call_asm_privileged()
{
 unsigned int v0; // ebx
 int v1; // ecx
 long long result; // rax

 v0 = param_dynamic_code(0xAu);
 v1 = v0 ^ 0xF | param_memory_protection() ^ 0x2A;
 result = 77;
 if ( v1 )
 return v0;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x16C0 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* String constants for ASM tests */
const char *asc_22A4 = "Testing ASM features";
const char *aAsmL401D = "asm_basic: %d\n";
const char *aAsmL402D = "asm_clobber: %d\n";
const char *aAsmL403D = "asm_multi_insn: %lld, %s, %d\n";
const char *aAsmL404D = "asm_simd: %d\n";
const char *aAsmL405D = "asm_atomic: %d\n";
const char *aAsmL406D = "asm_privileged: %d\n";

/* Function: test_asm_features @ 0x16D2 */
int test_asm_features()
{
 unsigned int v0; // eax
 long long i; // rcx
 long long v2; // rsi
 __m128i v3; // xmm0
 __m128i v4; // xmm1
 long long v5; // rdx
 long long v6; // rcx
 long long v7; // r8
 long long v8; // r9
 signed int v9; // r14d
 unsigned int v10; // eax
 __m128i v12; // [rsp+0h] [rbp-58h] BYREF
 __int128 v13; // [rsp+10h] [rbp-48h] BYREF
 __int128 v14; // [rsp+20h] [rbp-38h] BYREF
 __int128 v15; // [rsp+30h] [rbp-28h]

 puts(asc_22A4);
 printf(aAsmL401D, 15);
 v15 = 5;
 v14 = xmmword_22D0;
 v0 = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v0 += *((unsigned int *)&v14 + i);
 printf(aAsmL402D, v0);
 strcpy((char *)&v13, "Hello ASM");
 v15 = 0;
 v14 = 0;
 qmemcpy(&v14, &v13, 9u);
 v2 = 0xFFFFFFFFLL;
 if ( !((unsigned char)v14 ^ 0x48 | BYTE4(v14) ^ 0x6F) )
 v2 = 42;
 printf(aAsmL403D, v2, (char *)&v13 + 9, (unsigned char)v14 ^ 0x48 | BYTE4(v14) ^ 0x6Fu);
 v14 = xmmword_22F0;
 v13 = xmmword_2300;
 v12 = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
 v3 = _mm_load_si128(&v12);
 v4 = _mm_add_epi32(_mm_shuffle_epi32(v3, 238), v3);
 printf(
 aAsmL404D,
 (unsigned int)_mm_cvtsi128_si32(_mm_add_epi32(_mm_shuffle_epi32(v4, 85), v4)),
 v5,
 v6,
 v7,
 v8,
 *(unsigned long long *)&v12,
 0x600000005LL,
 0x800000007LL,
 0x200000001LL,
 0x400000003LL,
 v15);
 v14 = 10;
 v9 = __sync_fetch_and_add((volatile signed int *)&v14, 5);
 printf(aAsmL405D, (unsigned int)(v9 + v14 + 5));
 v10 = call_asm_privileged();
 return printf(aAsmL406D, v10);
}


/* Function: main @ 0x1835 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1844 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4068 */

/* FAILED to decompile: puts @ 0x4070 */

/* FAILED to decompile: mmap @ 0x4078 */

/* FAILED to decompile: printf @ 0x4080 */

/* FAILED to decompile: munmap @ 0x4088 */

/* FAILED to decompile: mprotect @ 0x4090 */

/* FAILED to decompile: sysconf @ 0x4098 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40A0 */

/* FAILED to decompile: __gmon_start__ @ 0x40B0 */

/* Total functions decompiled: 51, failed: 9 */
