#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

#ifdef _WIN32
#include <intrin.h>
#include <emmintrin.h>
#define LODWORD(x) ((unsigned int)((x) & 0xffffffff))
#define HIBYTE(x) ((unsigned char)(((x) >> 24) & 0xFF))
#define LOBYTE(x) ((unsigned char)((x) & 0xFF))
#define BYTE4(x) ((unsigned char)(((uint64_t)(x) >> 32) & 0xFF))
#else
#include <x86intrin.h>
#include <emmintrin.h>
#include <stdatomic.h>
#define LODWORD(x) (*(unsigned int*)((uintptr_t)(&(x))))
#define HIBYTE(x) ((unsigned char)(((uintptr_t)(x) >> 24) & 0xFF))
#define LOBYTE(x) ((unsigned char)((uintptr_t)(x) & 0xFF))
#define BYTE4(x) ((unsigned char)(((uint64_t)(x) >> 32) & 0xFF))
#define _InterlockedExchangeAdd(addr, val) __atomic_fetch_add((addr), (val), __ATOMIC_SEQ_CST)
#endif

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

#if defined(__GNUC__) || defined(__clang__)
typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
#else
typedef long long int128_t;
typedef unsigned long long uint128_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif

#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif




/* Forward declarations and stubs */
#define JUMPOUT(x) return

/* Global data definitions */
const char *s = "Preprocessing Features Test";

/* Format strings for preprocessing test */
const char *aPpL201D = "MACRO_CONSTANTS: %d\n";
const char *aPpL202D = "MACRO_FUNCTIONS: %d\n";
const char *aPpL203D = "CONDITIONAL_COMPILE: %d\n";
const char *aPpL204D = "MULTI_BRANCH_COMPILE: %d\n";
const char *aPpL301D = "MACRO_RECURSION: %d\n";
const char *aPpL302D = "STRINGIZE: %d\n";
const char *aPpL303D = "TOKEN_PASTE: %d\n";
const char *aPpL304D = "VARIADIC_MACRO: %d\n";
const char *aPpL305D = "MACRO_OVERRIDE: %d\n";
const char *aPpL306D = "INCLUDE_GUARD: %d\n";
const char *aPpL307D = "BUILTIN_MACROS: %d\n";

/* Format strings for ASM test */
const char *asc_22A4 = "Assembly Features Test";
const char *aAsmL401D = "ASM_BASIC: %d\n";
const char *aAsmL402D = "ASM_CLOBBER: %d\n";
const char *aAsmL403D = "ASM_MULTI_INSN: %lld\n";
const char *aAsmL404D = "ASM_SIMD: %d\n";
const char *aAsmL405D = "ASM_ATOMIC: %d\n";
const char *aAsmL406D = "ASM_PRIVILEGED: %d\n";

/* Global data arrays for SIMD operations */
typedef union {
    __m128i m128i;
    unsigned long long u64[2];
} m128i_init_t;

static const m128i_init_t xmmword_22D0_init = {{0x00000004, 0x00000003, 0x00000002, 0x00000001}};
static const m128i_init_t xmmword_22F0_init = {{0x00000008, 0x00000007, 0x00000006, 0x00000005}};
static const m128i_init_t xmmword_2300_init = {{0x0000000C, 0x0000000B, 0x0000000A, 0x00000009}};

#define xmmword_22D0 (xmmword_22D0_init.m128i)
#define xmmword_22F0 (xmmword_22F0_init.m128i)
#define xmmword_2300 (xmmword_2300_init.m128i)

/* Global variable */
int global_var = 10;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_clang_O1_no_g
 * Processor: pc
 */




/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
 JUMPOUT(0);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x1190 */
long long param_macro_constants(int a1)
{
 long long result; // rax

 result = 512;
 if ( a1 >= 1025 )
 return 64;
 return result;
}


/* Function: call_macro_constants @ 0x11B0 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x11C0 */
long long param_macro_functions(int a1, int a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return (unsigned int)(a2 + a1 * a1);
}


/* Function: call_macro_functions @ 0x11D0 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x11E0 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x11F0 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1200 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1210 */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x1220 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x1230 */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x1240 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1250 */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x1260 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x1270 */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0x1280 */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1290 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x12B0 */
long long call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x12E0 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0x12F0 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x1300 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x1310 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x1320 */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:48");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1360 */
long long call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:48");
 return 382;
}


/* Function: test_preprocessing_features @ 0x13A0 */
void test_preprocessing_features()
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
 "03:00:48");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x14D0 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x14E0 */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x14F0 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 long long i; // rcx

 LODWORD(result) = 0;
 for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
 LODWORD(result) = *(unsigned int *)(a1 + 4 * i) + result;
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x1510 */
long long call_asm_clobber()
{
 long long result; // rax
 long long i; // rcx
 uint128_t v2; // [rsp+0h] [rbp-18h]
 int v3; // [rsp+10h] [rbp-8h]

 v3 = 5;
 memcpy(&v2, &xmmword_22D0, sizeof(xmmword_22D0));
 LODWORD(result) = 0;
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 LODWORD(result) = *((unsigned int *)&v2 + i) + result;
 return (unsigned int)result;
}


/* Function: param_asm_multi_insn @ 0x1550 */
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


/* Function: call_asm_multi_insn @ 0x1570 */
long long call_asm_multi_insn()
{
 long long result; // rax
 char v1[16]; // [rsp+0h] [rbp-38h] BYREF
 unsigned long long v2[2]; // [rsp+10h] [rbp-28h] BYREF

 strcpy(v1, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 memcpy(v2, v1, 9u);
 result = 0xFFFFFFFFLL;
 if ( !(LOBYTE(v2[0]) ^ 0x48 | BYTE4(v2[0]) ^ 0x6F) )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x15E0 */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x15F0 */
long long param_simd_intrinsics(__m128i *a1, const __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(_mm_load_si128(a2), *a1);
 return 0;
}


/* Function: call_asm_simd @ 0x1600 */
long long call_asm_simd()
{
 __m128i v0; // xmm0

 v0 = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
 return (unsigned int)(_mm_extract_epi32(v0, 0) + _mm_extract_epi32(v0, 1) + _mm_extract_epi32(v0, 2) + _mm_extract_epi32(v0, 3));
}


/* Function: param_asm_atomic @ 0x1650 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: param_atomic_c11 @ 0x1660 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + _InterlockedExchangeAdd(a1, a2);
}


/* Function: call_asm_atomic @ 0x1670 */
long long call_asm_atomic()
{
 signed int v0; // eax
 signed int v2; // [rsp+0h] [rbp-4h] BYREF

 v2 = 10;
 v0 = _InterlockedExchangeAdd(&v2, 5u);
 return (unsigned int)(v2 + v0 + 5);
}


/* Function: param_dynamic_code @ 0x1690 */
long long param_dynamic_code(unsigned int a1, void *unused)
{
 size_t v1; // r15
 unsigned int v2; // ebp
 void *v3; // rax
 void *v4; // rbx

 (void)unused;
 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 if ( v3 != (void *)-1LL )
 {
 v4 = v3;
 *((unsigned short *)v3 + 2) = -15611;
 *(unsigned int *)v3 = -1065092983;
 {
   long long (*func_ptr)(unsigned long long) = (long long (*)(unsigned long long))v3;
   v2 = func_ptr(a1);
 }
 munmap(v4, v1);
 }
 return v2;
}


/* Function: param_memory_protection @ 0x1700 */
long long param_memory_protection(void *unused)
{
 size_t v0; // r14
 unsigned int v1; // ebp
 void *v2; // rax
 void *v3; // rbx
 unsigned int v4; // r15d

 (void)unused;
 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (void *)-1LL )
 {
 v3 = v2;
 *(unsigned int *)v2 = 42;
 v1 = -2;
 if ( !mprotect(v2, v0, 1) )
 {
 v4 = *(unsigned int *)v3;
 v1 = -3;
 if ( !mprotect(v3, v0, 3) )
 {
 *(unsigned int *)v3 = 100;
 v1 = v4;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0x17A0 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x17B0 */
long long call_asm_privileged()
{
 size_t v0; // r14
 unsigned int v1; // ebp
 void *v2; // rdi
 void *v3; // rax
 void *v4; // rbx
 int v5; // ecx
 long long result; // rax

 v0 = sysconf(30);
 v1 = -1;
 v2 = 0;
 v3 = mmap(0, v0, 7, 34, -1, 0);
 if ( v3 != (void *)-1LL )
 {
 v4 = v3;
 *((unsigned short *)v3 + 2) = -15611;
 *(unsigned int *)v3 = -1065092983;
 {
   long long (*func_ptr)(long long) = (long long (*)(long long))v3;
   v1 = func_ptr(10);
 }
 v2 = v4;
 munmap(v4, v0);
 }
 v5 = v1 ^ 0xF | param_memory_protection(v2) ^ 0x2A;
 result = 77;
 if ( v5 )
 return v1;
 return result;
}


/* Function: param_memory_clobber_demo @ 0x1860 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1880 */
int test_asm_features()
{
 long long v0; // rdx
 long long v1; // r8
 long long v2; // r9
 unsigned int v3; // eax
 long long i; // rcx
 long long v5; // r8
 long long v6; // r9
 long long v7; // rsi
 signed int v8; // ebx
 unsigned int v9; // eax
 uint128_t v11; // [rsp+0h] [rbp-58h] BYREF
 uint128_t v12; // [rsp+10h] [rbp-48h]
 __m128i v13; // [rsp+20h] [rbp-38h]
 char v14[40]; // [rsp+30h] [rbp-28h] BYREF

 puts(asc_22A4);
 printf(aAsmL401D, 15);
 v3 = 0;
 memcpy(&v11, &xmmword_22D0, sizeof(xmmword_22D0));
 for ( i = 0; (int)i < 5; i = (unsigned int)(i + 1) )
 v3 += *((unsigned int *)&v11 + i);
 printf(aAsmL402D, v3);
 strcpy(v14, "Hello ASM");
 memset(&v11, 0, sizeof(v11));
 memset(&v12, 0, sizeof(v12));
 memcpy(&v11, v14, 9u);
 v7 = 0xFFFFFFFFLL;
 if ( !((unsigned char)v11 ^ 0x48 | BYTE4(v11) ^ 0x6F) )
 v7 = 42;
 printf(aAsmL403D, v7);
 memcpy(&v11, &xmmword_22F0, sizeof(xmmword_22F0));
 memcpy(&v12, &xmmword_2300, sizeof(xmmword_2300));
 v13 = _mm_add_epi32((__m128i)xmmword_22F0, (__m128i)xmmword_2300);
 printf(aAsmL404D, (unsigned int)(_mm_extract_epi32(v13, 0) + _mm_extract_epi32(v13, 1) + _mm_extract_epi32(v13, 2) + _mm_extract_epi32(v13, 3)));
 v8 = 10;
 v8 = _InterlockedExchangeAdd(&v8, 5u);
 printf(aAsmL405D, (unsigned int)(v8 + 15));
 v9 = call_asm_privileged();
 return printf(aAsmL406D, v9);
}


/* Function: main @ 0x19F0 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1A00 */
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
