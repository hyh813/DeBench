/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
#ifndef _SIZE_T_DEFINED
typedef unsigned long size_t;
#define _SIZE_T_DEFINED
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>

/* LODWORD/HIDWORD macros for Windows compatibility */
#define LODWORD(x) (*((uint32_t*)&(x)))
#define HIDWORD(x) (*(((uint32_t*)&(x)) + 1))

/* Portable intrinsics for Linux (replacing Windows intrin.h) */
static inline unsigned int __readgsdword(unsigned int offset) {
    unsigned int result;
    __asm__ __volatile__("mov %%gs:%1, %0" : "=r"(result) : "m"(*(const unsigned int *)(offset)));
    return result;
}

static inline long _InterlockedExchangeAdd(volatile long *Addend, long Value) {
    return __sync_fetch_and_add(Addend, Value);
}

/* IDA decompiler placeholder type */
typedef void _UNKNOWN;

/* Global variables */
int global_var = 0;

/* String constants from data section */
const char *asc_2088 = "=== Testing Preprocessing Features ===";
const char *aPpL201D = "Macro constants result: %d\n";
const char *aPpL202D = "Macro functions result: %d\n";
const char *aPpL203D = "Conditional compile result: %d\n";
const char *aPpL204D = "Multi-branch compile result: %d\n";
const char *aPpL301D = "Macro recursion result: %d\n";
const char *aPpL302D = "Stringize result: %zu\n";
const char *aPpL303D = "Token paste result: %d\n";
const char *aPpL304D = "Variadic macro result: %lld\n";
const char *aPpL305D = "Macro override result: %d\n";
const char *aPpL306D = "Include guard result: %d\n";
const char *aPpL307D = "Built-in macros result: %d\n";
const char *asc_2200 = "=== Testing ASM Features ===";
const char *aAsmL401D = "ASM basic result: %d\n";
const char *aAsmL402D = "ASM clobber result: %d\n";
const char *aAsmL403D = "ASM multi insn result: %d\n";
const char *aAsmL404D = "ASM SIMD result: %lld\n";
const char *aAsmL405D = "ASM atomic result: %lld\n";
const char *aAsmL406D = "ASM privileged result: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-23/5-23_gcc_O0_no_g
 * Processor: pc
 */





/* CRT stub function _start removed by preprocessor */






/* Function: param_macro_constants @ 0x12E1 */
int param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x1309 */
int call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x1329 */
int param_macro_functions(int a1, int a2)
{
 int v2; // eax

 v2 = a1;
 if ( a2 >= a1 )
 v2 = a2;
 return a1 * a1 + v2;
}


/* Function: call_macro_functions @ 0x1351 */
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1370 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x139E */
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x13BB */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x13DD */
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x13FA */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x1413 */
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x1430 */
size_t param_stringize()
{
 size_t v0; // esi
 size_t v1; // esi

 v0 = strlen("Hello World");
 v1 = strlen("1.2.3") + v0;
 return v1 + strlen("155");
}


/* Function: call_stringize @ 0x1499 */
size_t call_stringize()
{
 return param_stringize();
}


/* Function: my_func @ 0x14BC */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x14DB */
int param_token_paste(int a1)
{
 return a1 + 5 + my_func(a1);
}


/* Function: call_token_paste @ 0x1511 */
int call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x152E */
long long param_variadic_macro(int a1, int a2, int a3)
{
 long long result; // rax
 unsigned int v4; // [esp+1Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 LODWORD(result) = a1 + 50;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: call_variadic_macro @ 0x1599 */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x15C0 */
int param_macro_override(int a1)
{
 return a1 + 1 + 2 * a1;
}


/* Function: call_macro_override @ 0x15EF */
int call_macro_override()
{
 return param_macro_override(5);
}


/* Function: header_func @ 0x160C */
int header_func(int a1)
{
 return 100 * a1;
}


/* Function: param_include_guard @ 0x1625 */
int param_include_guard()
{
 return header_func(5);
}


/* Function: call_include_guard @ 0x1642 */
int call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0x165A */
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "02:59:46");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x16EE */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x1711 */
int test_preprocessing_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 size_t v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax
 int v9; // eax
 int v10; // eax

 puts(asc_2088);
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
 return printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0x1847 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x186D */
int call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x188A */
int param_asm_clobber(int a1, int a2)
{
 int result; // eax
 int i; // ecx

 result = 0;
 for ( i = 0; i < a2; ++i )
 result += *(unsigned int *)(a1 + 4 * i);
 return result;
}


/* Function: call_asm_clobber @ 0x18C7 */
int call_asm_clobber()
{
 unsigned int v1[8]; // [esp+8h] [ebp-20h] BYREF

 v1[5] = __readgsdword(0x14u);
 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 return param_asm_clobber((int)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x192A */
char param_asm_multi_insn(unsigned char *a1, char *a2, int a3)
{
 char result; // al
 int i; // edx

 result = a3;
 for ( i = a3; i; --i )
 {
 result = *a2;
 *a1++ = *a2++;
 }
 return result;
}


/* Function: call_asm_multi_insn @ 0x1969 */
int call_asm_multi_insn()
{
 char v1[10]; // [esp+2h] [ebp-36h] BYREF
 int v2; // [esp+Ch] [ebp-2Ch] BYREF
 int v3; // [esp+10h] [ebp-28h]
 int v4; // [esp+14h] [ebp-24h]
 int v5; // [esp+18h] [ebp-20h]
 int v6; // [esp+1Ch] [ebp-1Ch]
 int v7; // [esp+20h] [ebp-18h]
 int v8; // [esp+24h] [ebp-14h]
 int v9; // [esp+28h] [ebp-10h]
 unsigned int v10; // [esp+2Ch] [ebp-Ch]

 v10 = __readgsdword(0x14u);
 strcpy(v1, "Hello ASM");
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 param_asm_multi_insn(&v2, v1, 9);
 if ( (unsigned char)v2 == 72 && (unsigned char)v3 == 111 )
 return 42;
 else
 return -1;
}


/* Function: param_asm_simd @ 0x1A15 */
int param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1A43 */
int param_simd_intrinsics(const __m128i *a1, const __m128i *a2, __m128i *a3)
{
 __m128i si128; // [esp+10h] [ebp-68h] BYREF
 __m128i v5; // [esp+20h] [ebp-58h] BYREF
 __m128i v6; // [esp+30h] [ebp-48h] BYREF
 __m128i v7; // [esp+40h] [ebp-38h] BYREF
 __m128i v8; // [esp+50h] [ebp-28h] BYREF
 __m128i v9; // [esp+60h] [ebp-18h] BYREF

 si128 = _mm_load_si128(a1);
 v5 = _mm_load_si128(a2);
 v8 = si128;
 v9 = v5;
 v6 = _mm_add_epi32(v9, v8);
 v7 = v6;
 *a3 = v7;
 return 0;
}


/* Function: call_asm_simd @ 0x1ABF */
long long call_asm_simd()
{
 long long result; // rax
 __m128i v1; // [esp+Ch] [ebp-3Ch] BYREF
 __m128i v2; // [esp+1Ch] [ebp-2Ch] BYREF
 __m128i v3; // [esp+2Ch] [ebp-1Ch] BYREF
 unsigned int v4; // [esp+3Ch] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v1 = _mm_set_epi64x(0x400000003LL, 0x200000001LL);
 v2 = _mm_set_epi64x(0x800000007LL, 0x600000005LL);
 param_asm_simd(&v1, &v2, &v3);
 {
   int tmp[4];
   _mm_storeu_si128((__m128i*)tmp, v3);
   LODWORD(result) = tmp[0] + tmp[1] + tmp[2] + tmp[3];
 }
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: param_asm_atomic @ 0x1B4F */
unsigned int param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return _InterlockedExchangeAdd(a1, a2) + a2;
}


/* Function: param_atomic_c11 @ 0x1B7A */
unsigned int param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return _InterlockedExchangeAdd(a1, a2) + a2;
}


/* Function: call_asm_atomic @ 0x1B9C */
long long call_asm_atomic()
{
 long long result; // rax
 signed int v1; // [esp+4h] [ebp-14h] BYREF
 unsigned int v2; // [esp+8h] [ebp-10h]
 unsigned int v3; // [esp+Ch] [ebp-Ch]

 v3 = __readgsdword(0x14u);
 v1 = 10;
 v2 = param_asm_atomic(&v1, 5u);
 LODWORD(result) = v1 + v2;
 HIDWORD(result) = v3 - __readgsdword(0x14u);
 return result;
}


/* Function: param_dynamic_code @ 0x1BEE */
int param_dynamic_code(int a1)
{
 int len; // [esp+4h] [ebp-14h]
 void *addr; // [esp+8h] [ebp-10h]

 len = sysconf(30);
 addr = mmap(0, len, 7, 34, -1, 0);
 if ( addr == (void *)-1 )
 return -1;
 munmap(addr, len);
 return a1 + 5;
}


/* Function: param_memory_protection @ 0x1C5E */
int param_memory_protection()
{
 int len; // [esp+0h] [ebp-18h]
 int *addr; // [esp+4h] [ebp-14h]
 int v3; // [esp+Ch] [ebp-Ch]

 len = sysconf(30);
 addr = (int *)mmap(0, len, 3, 34, -1, 0);
 if ( addr == (int *)-1 )
 return -1;
 *addr = 42;
 if ( mprotect(addr, len, 1) )
 {
 munmap(addr, len);
 return -2;
 }
 else
 {
 v3 = *addr;
 if ( mprotect(addr, len, 3) )
 {
 munmap(addr, len);
 return -3;
 }
 else
 {
 *addr = 100;
 munmap(addr, len);
 return v3;
 }
 }
}


/* Function: param_clobber_importance @ 0x1D46 */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0x1D82 */
int call_asm_privileged()
{
 int v1; // [esp+4h] [ebp-14h]
 int v2; // [esp+8h] [ebp-10h]
 int v3; // [esp+Ch] [ebp-Ch]

 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v3 = param_clobber_importance(3, 7);
 if ( v1 == 15 && v2 == 42 && v3 == 20 )
 return 77;
 else
 return v1;
}


/* Function: param_memory_clobber_demo @ 0x1DDE */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0x1E0F */
int test_asm_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax

 puts(asc_2200);
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
 return printf(aAsmL406D, v5);
}


/* Function: main @ 0x1ECD */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}





/* FAILED to decompile: __libc_start_main @ 0x4018 */

/* FAILED to decompile: mprotect @ 0x401C */

/* FAILED to decompile: printf @ 0x4020 */

/* FAILED to decompile: __stack_chk_fail @ 0x4024 */

/* FAILED to decompile: sysconf @ 0x4028 */

/* FAILED to decompile: __cxa_finalize @ 0x402C */

/* FAILED to decompile: puts @ 0x4030 */

/* FAILED to decompile: mmap @ 0x4034 */

/* FAILED to decompile: strlen @ 0x4038 */

/* FAILED to decompile: munmap @ 0x403C */

/* Total functions decompiled: 70, failed: 10 */
