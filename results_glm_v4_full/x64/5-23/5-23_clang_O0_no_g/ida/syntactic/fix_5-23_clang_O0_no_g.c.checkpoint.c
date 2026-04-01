/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
/* uint64_t is defined in system headers */
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
/* int64_t is defined in system headers */
typedef unsigned long size_t;
#ifndef _SSIZE_T_DEFINED
typedef long ssize_t;
#endif
typedef unsigned long uintptr_t;
typedef long intptr_t;
#ifndef ptrdiff_t
typedef long ptrdiff_t;
#endif
/* intmax_t and uintmax_t are defined in system headers */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>
#include <stdbool.h>
#include <stdatomic.h>

/* External and missing definitions */
int global_var = 100;

/* Forward declarations */
long long header_func(int a1);

/* Portable helper for extracting low 32 bits */
#define LODWORD(x) ((x) & 0xFFFFFFFFULL)

/* Union for __m128i access */
typedef union {
    __m128i vec;
    int64_t m128i_i64[2];
    int32_t m128i_i32[4];
} m128i_union_t;

#define JUMPOUT(x) do { __builtin_unreachable(); } while(0)
#define qmemcpy(dest, src, n) memcpy(dest, src, n)

/* Format string definitions */
static const char asc_2095[] = "=== Preprocessing Features Test ===\n";
static const char aPpL201D[] = "  param_macro_constants: %d\n";
static const char aPpL202D[] = "  param_macro_functions: %d\n";
static const char aPpL203D[] = "  param_conditional_compile: %d\n";
static const char aPpL204D[] = "  param_multi_branch_compile: %d\n";
static const char aPpL301D[] = "  param_macro_recursion: %d\n";
static const char aPpL302D[] = "  param_stringize: %d\n";
static const char aPpL303D[] = "  param_token_paste: %d\n";
static const char aPpL304D[] = "  param_variadic_macro: %d\n";
static const char aPpL305D[] = "  param_macro_override: %d\n";
static const char aPpL306D[] = "  param_include_guard: %d\n";
static const char aPpL307D[] = "  param_builtin_macros: %d\n";

static const char asc_2213[] = "=== ASM Features Test ===\n";
static const char aAsmL401D[] = "  param_asm_basic: %d\n";
static const char aAsmL402D[] = "  param_asm_clobber: %d\n";
static const char aAsmL403D[] = "  param_asm_multi_insn: %d\n";
static const char aAsmL404D[] = "  param_asm_simd: %d\n";
static const char aAsmL405D[] = "  param_asm_atomic: %d\n";
static const char aAsmL406D[] = "  call_asm_privileged: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x64/5-23/5-23_clang_O0_no_g
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



/* Function: param_macro_constants @ 0x11A0 */
long long param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x11D0 */
long long call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0x11E0 */
long long param_macro_functions(int a1, int a2)
{
 int v3; // [rsp+0h] [rbp-10h]

 if ( a1 <= a2 )
 v3 = a2;
 else
 v3 = a1;
 return (unsigned int)(v3 + a1 * a1);
}


/* Function: call_macro_functions @ 0x1220 */
long long call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0x1240 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0x1260 */
long long call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0x1270 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0x1290 */
long long call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0x12A0 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0x12E0 */
long long call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0x12F0 */
size_t param_stringize()
{
 size_t v1; // [rsp+0h] [rbp-30h]
 size_t v2; // [rsp+8h] [rbp-28h]

 v1 = strlen("Hello World");
 v2 = strlen("1.2.3") + v1;
 return strlen("155") + v2;
}


/* Function: call_stringize @ 0x1360 */
size_t call_stringize()
{
 return param_stringize();
}


/* Function: my_func @ 0x1370 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0x1380 */
long long param_token_paste(int a1)
{
 return (unsigned int)my_func(a1) + a1 + 5;
}


/* Function: call_token_paste @ 0x13C0 */
long long call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0x13D0 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0x1410 */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x1430 */
long long param_macro_override(int a1)
{
 return (unsigned int)(2 * a1 + a1 + 1);
}


/* Function: call_macro_override @ 0x1460 */
long long call_macro_override()
{
 return param_macro_override(5);
}


/* Function: param_include_guard @ 0x1470 */
long long param_include_guard()
{
 return header_func(5);
}


/* Function: header_func @ 0x1480 */
long long header_func(int a1)
{
 return (unsigned int)(100 * a1);
}


/* Function: call_include_guard @ 0x1490 */
long long call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0x14A0 */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:00:44");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0x1530 */
long long call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x1540 */
int test_preprocessing_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax
 unsigned int v6; // eax
 unsigned int v7; // eax
 unsigned int v8; // eax
 unsigned int v9; // eax
 unsigned int v10; // eax

 printf(asc_2095);
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


/* Function: param_asm_basic @ 0x1640 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0x1660 */
long long call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0x1670 */
long long param_asm_clobber(long long a1, int a2)
{
 long long result; // rax
 long long i; // rcx

 result = 0;
 for ( i = 0; (int)i < a2; i = (unsigned int)(i + 1) )
 result = *(unsigned int *)(a1 + 4 * i) + result;
 return (unsigned int)result;
}


/* Function: call_asm_clobber @ 0x16B0 */
long long call_asm_clobber()
{
 unsigned long long v1[2]; // [rsp+0h] [rbp-20h] BYREF
 int v2; // [rsp+10h] [rbp-10h]

 v1[0] = 0x200000001LL;
 v1[1] = 0x400000003LL;
 v2 = 5;
 return param_asm_clobber((long long)v1, 5);
}


/* Function: param_asm_multi_insn @ 0x16F0 */
long long param_asm_multi_insn(void *a1, const void *a2, unsigned long long a3)
{
 qmemcpy(a1, a2, a3);
 return 0;
}


/* Function: call_asm_multi_insn @ 0x1740 */
long long call_asm_multi_insn()
{
 long long result; // rax
 bool v1; // [rsp+Fh] [rbp-31h]
 unsigned char s[38]; // [rsp+10h] [rbp-30h] BYREF
 char v3[10]; // [rsp+36h] [rbp-Ah] BYREF

 strcpy(v3, "Hello ASM");
 memset(s, 0, 0x20u);
 param_asm_multi_insn(s, v3, 9u);
 v1 = 0;
 if ( s[0] == 72 )
 v1 = s[4] == 111;
 result = 0xFFFFFFFFLL;
 if ( v1 )
 return 42;
 return result;
}


/* Function: param_asm_simd @ 0x17C0 */
long long param_asm_simd(__m128i *a1, __m128i *a2, __m128i *a3)
{
 *a3 = _mm_add_epi32(*a1, *a2);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x17F0 */
long long param_simd_intrinsics(const __m128i *a1, const __m128i *a2, __m128i *a3)
{
 __m128i v3; // xmm0
 __m128i v4; // xmm0
 __m128i v6; // [rsp+0h] [rbp-A0h] BYREF
 __m128i v7; // [rsp+10h] [rbp-90h] BYREF
 __m128i si128; // [rsp+20h] [rbp-80h] BYREF
 __m128i *v9; // [rsp+38h] [rbp-68h]
 const __m128i *v10; // [rsp+40h] [rbp-60h]
 const __m128i *v11; // [rsp+48h] [rbp-58h]
 const __m128i *v12; // [rsp+50h] [rbp-50h]
 const __m128i *v13; // [rsp+58h] [rbp-48h]
 __m128i v14; // [rsp+60h] [rbp-40h] BYREF
 __m128i v15; // [rsp+70h] [rbp-30h] BYREF
 __m128i v16; // [rsp+80h] [rbp-20h] BYREF
 __m128i *v17; // [rsp+98h] [rbp-8h]

 v11 = a1;
 v10 = a2;
 v9 = a3;
 v13 = a1;
 si128 = _mm_load_si128(a1);
 v12 = a2;
 v7 = _mm_load_si128(a2);
 v3 = _mm_load_si128(&v7);
 v15 = _mm_load_si128(&si128);
 v14 = v3;
 v6 = _mm_add_epi32(_mm_load_si128(&v15), _mm_load_si128(&v14));
 v4 = _mm_load_si128(&v6);
 v17 = a3;
 v16 = v4;
 *a3 = _mm_load_si128(&v16);
 return 0;
}


/* Function: call_asm_simd @ 0x1890 */
long long call_asm_simd()
{
 m128i_union_t v1; // [rsp+0h] [rbp-30h] BYREF
 m128i_union_t v2; // [rsp+10h] [rbp-20h] BYREF
 m128i_union_t v3; // [rsp+20h] [rbp-10h] BYREF

 v3.m128i_i64[0] = 0x200000001LL;
 v3.m128i_i64[1] = 0x400000003LL;
 v2.m128i_i64[0] = 0x600000005LL;
 v2.m128i_i64[1] = 0x800000007LL;
 param_asm_simd(&v3.vec, &v2.vec, &v1.vec);
 return (unsigned int)(v1.m128i_i32[3] + v1.m128i_i32[2] + v1.m128i_i32[1] + v1.m128i_i32[0]);
}


/* Function: param_asm_atomic @ 0x18F0 */
long long param_asm_atomic(volatile signed int *a1, unsigned int a2)
{
 return a2 + __atomic_fetch_add(a1, (int)a2, __ATOMIC_SEQ_CST);
}


/* Function: param_atomic_c11 @ 0x1920 */
long long param_atomic_c11(volatile signed int *a1, unsigned int a2)
{
 return a2 + __atomic_fetch_add(a1, (int)a2, __ATOMIC_SEQ_CST);
}


/* Function: call_asm_atomic @ 0x1950 */
long long call_asm_atomic()
{
 int v1; // [rsp+8h] [rbp-8h]
 signed int v2; // [rsp+Ch] [rbp-4h] BYREF

 v2 = 10;
 v1 = param_asm_atomic(&v2, 5u);
 return (unsigned int)(v1 + v2);
}


/* Function: param_dynamic_code @ 0x1980 */
long long param_dynamic_code(unsigned int a1)
{
 unsigned int v2; // [rsp+4h] [rbp-2Ch]
 unsigned short *addr; // [rsp+18h] [rbp-18h]
 long long len; // [rsp+20h] [rbp-10h]

 len = sysconf(30);
 addr = mmap(0, len, 7, 34, -1, 0);
 if ( addr == (unsigned short *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 *(unsigned int *)addr = -1065092983;
 addr[2] = -15611;
 v2 = ((long long ( *)(unsigned long long))addr)(a1);
 munmap(addr, len);
 return v2;
 }
}


/* Function: param_memory_protection @ 0x1A30 */
long long param_memory_protection()
{
 unsigned int v1; // [rsp+Ch] [rbp-24h]
 unsigned int *addr; // [rsp+18h] [rbp-18h]
 long long len; // [rsp+20h] [rbp-10h]

 len = sysconf(30);
 addr = mmap(0, len, 3, 34, -1, 0);
 if ( addr == (unsigned int *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 *addr = 42;
 if ( mprotect(addr, len, 1) )
 {
 munmap(addr, len);
 return (unsigned int)-2;
 }
 else
 {
 v1 = *addr;
 if ( mprotect(addr, len, 3) )
 {
 munmap(addr, len);
 return (unsigned int)-3;
 }
 else
 {
 *addr = 100;
 munmap(addr, len);
 return v1;
 }
 }
 }
}


/* Function: param_clobber_importance @ 0x1B40 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0x1B80 */
long long call_asm_privileged()
{
 int v1; // [rsp+0h] [rbp-10h]
 int v2; // [rsp+4h] [rbp-Ch]
 unsigned int v3; // [rsp+8h] [rbp-8h]

 v3 = param_dynamic_code(0xAu);
 v2 = param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if ( v3 == 15 && v2 == 42 && v1 == 20 )
 return 77;
 else
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1BF0 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1C20 */
int test_asm_features()
{
 unsigned int v0; // eax
 unsigned int v1; // eax
 unsigned int v2; // eax
 unsigned int v3; // eax
 unsigned int v4; // eax
 unsigned int v5; // eax

 printf(asc_2213);
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


/* Function: main @ 0x1CC0 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1CE4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: strlen @ 0x4078 */

/* FAILED to decompile: mmap @ 0x4080 */

/* FAILED to decompile: printf @ 0x4088 */

/* FAILED to decompile: memset @ 0x4090 */

/* FAILED to decompile: munmap @ 0x4098 */

/* FAILED to decompile: mprotect @ 0x40A0 */

/* FAILED to decompile: sysconf @ 0x40A8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40B0 */

/* FAILED to decompile: __gmon_start__ @ 0x40C0 */

/* Total functions decompiled: 52, failed: 10 */
