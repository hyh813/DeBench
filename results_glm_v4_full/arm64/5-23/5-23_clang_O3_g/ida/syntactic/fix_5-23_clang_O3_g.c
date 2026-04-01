/* Auto-injected type definitions by preprocessor */
#define _GNU_SOURCE
#include <stdint.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;

/* Forward declarations and global variables */
#ifndef AT_HWCAP
#define AT_HWCAP 16
#endif
int _aarch64_have_lse_atomics = 0;
unsigned int custom_ldaxr(volatile int *ptr)
{
 unsigned int result;
 __asm__ __volatile__("ldaxr %w0, [%1]" : "=r"(result) : "r"(ptr) : "memory");
 return result;
}

unsigned int custom_stlxr(unsigned int newval, volatile int *ptr)
{
 unsigned int result;
 __asm__ __volatile__("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(newval), "r"(ptr) : "memory");
 return result;
}
int global_var = 0;

/* Forward declarations */
unsigned int custom_ldadd4_acq_rel(int a1, int *a2);
long long call_weak_fn(void);
long long init_have_lse_atomics(void);

#define JUMPOUT(x) __builtin_unreachable()

#include <arm_neon.h>
#include <stdatomic.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/auxv.h>

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_clang_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x780 */
__attribute__((constructor))
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_7A0 @ 0x7A0 */
void sub_7A0()
{
 JUMPOUT(0);
}


/* Function: call_weak_fn @ 0x7B0 */
long long call_weak_fn(void)
{
 extern long long init_have_lse_atomics(void);
 return init_have_lse_atomics();
}


/* Function: init_have_lse_atomics @ 0x880 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)getauxval(AT_HWCAP) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




























/* Global string declarations */
const char *asc_14C7 = "=== Preprocessing Features Test ===";
const char *aPpL201D = "PPL201: %d\n";
const char *aPpL202D = "PPL202: %d\n";
const char *aPpL203D = "PPL203: %d\n";
const char *aPpL204D = "PPL204: %d\n";
const char *aPpL301D = "PPL301: %d\n";
const char *aPpL302D = "PPL302: %d\n";
const char *aPpL303D = "PPL303: %d\n";
const char *aPpL304D = "PPL304: %d\n";
const char *aPpL305D = "PPL305: %d\n";
const char *aPpL306D = "PPL306: %d\n";
const char *aPpL307D = "PPL307: %d\n";
const char *asc_14EE = "=== ASM Features Test ===";
const char *aAsmL401D = "ASML401: %d\n";
const char *aAsmL402D = "ASML402: %d\n";
const char *aAsmL403D = "ASML403: %d\n";
const char *aAsmL404D = "ASML404: %d\n";
const char *aAsmL405D = "ASML405: %d\n";
const char *aAsmL406D = "ASML406: %d\n";



/* Function: param_macro_constants @ 0x9D4 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x9E8 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x9F0 */
int param_macro_functions(int x, int y)
{
 int v2; // w8

 if ( x <= y )
 v2 = y;
 else
 v2 = x;
 return v2 + x * x;
}


/* Function: call_macro_functions @ 0xA00 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xA08 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xA14 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xA1C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xA2C */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xA34 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xA3C */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xA44 */
long long param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0xA4C */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xA54 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xA60 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0xA70 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xA78 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xAB0 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0xADC */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0xAE8 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xAF0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xAF8 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xB00 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:44");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xB50 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:44");
 return 382;
}


/* Function: test_preprocessing_features @ 0xB94 */
void test_preprocessing_features()
{
 puts(asc_14C7);
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
 "03:01:44");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xCA4 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xCAC */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xCB4 */
int param_asm_clobber(int *arr, int n)
{
 long long v2; // x10
 int v3; // w8
 int *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x11
 long long v12; // x9
 int v13; // t1

 if ( n < 1 )
 return 0;
 if ( (unsigned int)n >= 8 )
 {
 v2 = n & 0xFFFFFFF8;
 v5 = arr + 4;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = *((int32x4_t *)v5 - 1);
 v10 = *(int32x4_t *)v5;
 v5 += 8;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == n )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = &arr[v2];
 v12 = (unsigned int)n - v2;
 do
 {
 v13 = *v11++;
 --v12;
 v3 += v13;
 }
 while ( v12 );
 return v3;
}


/* Function: call_asm_clobber @ 0xD3C */
int call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xD44 */
// attributes: thunk
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xD48 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xD50 */
int param_asm_simd(int *a, int *b, int *result)
{
 int v3; // w8
 int v4; // w0

 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 v3 = a[3];
 v4 = 0;
 result[3] = b[3] + v3;
 return v4;
}


/* Function: param_simd_intrinsics @ 0xD98 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 int v3; // w8
 int v4; // w0

 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 v3 = a[3];
 v4 = 0;
 result[3] = b[3] + v3;
 return v4;
}


/* Function: call_asm_simd @ 0xDE0 */
int call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0xDE8 */
int param_asm_atomic(int *counter, int increment)
{
 return custom_ldadd4_acq_rel(increment, counter) + increment;
}


/* Function: param_atomic_c11 @ 0xE14 */
int param_atomic_c11(int *counter, int increment)
{
 return custom_ldadd4_acq_rel(increment, counter) + increment;
}


/* Function: call_asm_atomic @ 0xE40 */
int call_asm_atomic()
{
 int v0; // w0
 int counter; // [xsp+Ch] [xbp-4h] BYREF

 counter = 10;
 v0 = custom_ldadd4_acq_rel(5, &counter);
 return v0 + counter + 5;
}


/* Function: param_dynamic_code @ 0xE78 */
int param_dynamic_code(int x)
{
 size_t v2; // x20
 int v3; // w21
 void *v4; // x0

 v2 = sysconf(30);
 v3 = -1;
 v4 = mmap(0, v2, 7, 34, -1, 0);
 if ( v4 != (void *)-1LL )
 {
 v3 = x + 5;
 munmap(v4, v2);
 }
 return v3;
}


/* Function: param_memory_protection @ 0xEE0 */
int param_memory_protection()
{
 size_t v0; // x19
 int v1; // w21
 int *v2; // x0
 int *v3; // x20

 v0 = sysconf(30);
 v1 = -1;
 v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (int *)-1LL )
 {
 v3 = v2;
 *v2 = 42;
 if ( mprotect(v2, v0, 1) )
 {
 v1 = -2;
 }
 else
 {
 v1 = *v3;
 if ( mprotect(v3, v0, 3) )
 v1 = -3;
 else
 *v3 = 100;
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0xF90 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0xF9C */
int call_asm_privileged()
{
 size_t v0; // x20
 int v1; // w22
 void *v2; // x0
 void *v3; // x19
 size_t v4; // x20
 int v5; // w23
 int *v6; // x0
 int *v7; // x21

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 v3 = v2;
 if ( v2 != (void *)-1LL )
 {
 munmap(v2, v0);
 v1 = 15;
 }
 v4 = sysconf(30);
 v5 = -1;
 v6 = (int *)mmap(0, v4, 3, 34, -1, 0);
 if ( v6 != (int *)-1LL )
 {
 v7 = v6;
 *v6 = 42;
 if ( mprotect(v6, v4, 1) )
 {
 v5 = -2;
 }
 else
 {
 v5 = *v7;
 if ( mprotect(v7, v4, 3) )
 v5 = -3;
 else
 *v7 = 100;
 }
 munmap(v7, v4);
 }
 if ( v5 != 42 || v3 == (void *)-1LL )
 return v1;
 else
 return 77;
}


/* Function: param_memory_clobber_demo @ 0x10AC */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x10BC */
void test_asm_features()
{
 int v0; // w0
 unsigned int v1; // w0
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 puts(asc_14EE);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 printf(aAsmL404D, 36);
 v2 = 10;
 v0 = custom_ldadd4_acq_rel(5, &v2);
 printf(aAsmL405D, (unsigned int)(v0 + v2 + 5));
 v1 = call_asm_privileged();
 printf(aAsmL406D, v1);
}


/* Function: main @ 0x1160 */
int main(int argc, const char **argv, const char **envp)
{
 int v3; // w0
 unsigned int v4; // w0
 int v6; // [xsp+Ch] [xbp-4h] BYREF

 test_preprocessing_features();
 puts(asc_14EE);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 printf(aAsmL404D, 36);
 v6 = 10;
 v3 = custom_ldadd4_acq_rel(5, &v6);
 printf(aAsmL405D, (unsigned int)(v3 + v6 + 5));
 v4 = call_asm_privileged();
 printf(aAsmL406D, v4);
 return 0;
}


/* Function: custom_ldadd4_acq_rel @ 0x1210 */
unsigned int custom_ldadd4_acq_rel(int a1, int *a2)
{
 unsigned int result; // x0
 volatile int *ptr = (volatile int *)a2;

 do
 result = custom_ldaxr(ptr);
 while ( custom_stlxr(result + a1, ptr) );
 return result;
}


/* Function: .term_proc @ 0x1240 */
__attribute__((destructor))
long long term_proc()
{
 return 0;
}


/* FAILED to decompile: memcpy @ 0x120D8 */

/* FAILED to decompile: __libc_start_main @ 0x120E0 */

/* FAILED to decompile: __cxa_finalize @ 0x120E8 */

/* FAILED to decompile: __getauxval @ 0x120F0 */

/* FAILED to decompile: abort @ 0x120F8 */

/* FAILED to decompile: puts @ 0x12100 */

/* FAILED to decompile: mmap @ 0x12108 */

/* FAILED to decompile: munmap @ 0x12110 */

/* FAILED to decompile: sysconf @ 0x12118 */

/* FAILED to decompile: printf @ 0x12120 */

/* FAILED to decompile: mprotect @ 0x12128 */

/* FAILED to decompile: __gmon_start__ @ 0x12138 */

/* Total functions decompiled: 54, failed: 12 */
