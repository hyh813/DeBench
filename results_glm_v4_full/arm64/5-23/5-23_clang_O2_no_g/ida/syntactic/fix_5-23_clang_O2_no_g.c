/* ARM NEON header must be first to get int64_t, uint64_t, and SIMD types */
#include <arm_neon.h>

/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
#include <stdatomic.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* ARM64 load/store exclusive intrinsics - implemented as inline assembly */
static inline unsigned int __ldaxr(const volatile unsigned int *addr)
{
    unsigned int result;
    __asm__ volatile("ldaxr %w0, [%1]" : "=r"(result) : "r"(addr) : "memory");
    return result;
}

static inline int __stlxr(unsigned int val, volatile unsigned int *addr)
{
    int result;
    __asm__ volatile("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(val), "r"(addr) : "memory");
    return result;
}

/* Global variable for LSE atomics support */
int _aarch64_have_lse_atomics = 0;

/* Global variable used in param_memory_clobber_demo */
int global_var = 0;

/* String constants */
static const char asc_1407[] = "Preprocessing Features Test:";
static const char aPpL201D[] = "PP1.01: %d\n";
static const char aPpL202D[] = "PP1.02: %d\n";
static const char aPpL203D[] = "PP1.03: %d\n";
static const char aPpL204D[] = "PP1.04: %d\n";
static const char aPpL301D[] = "PP2.01: %d\n";
static const char aPpL302D[] = "PP2.02: %d\n";
static const char aPpL303D[] = "PP2.03: %d\n";
static const char aPpL304D[] = "PP2.04: %d\n";
static const char aPpL305D[] = "PP2.05: %d\n";
static const char aPpL306D[] = "PP2.06: %d\n";
static const char aPpL307D[] = "PP3.01: %d\n";
static const char asc_142E[] = "Assembly Features Test:";
static const char aAsmL401D[] = "ASM4.01: %d\n";
static const char aAsmL402D[] = "ASM4.02: %d\n";
static const char aAsmL403D[] = "ASM4.03: %d\n";
static const char aAsmL404D[] = "ASM4.04: %d\n";
static const char aAsmL405D[] = "ASM4.05: %d\n";
static const char aAsmL406D[] = "ASM4.06: %d\n";

/* Forward declarations for CRT stub functions */
long long call_weak_fn(void);
extern unsigned long getauxval(unsigned long type);
long long init_have_lse_atomics(void);
void init_proc(void);
void term_proc(void);
#define JUMPOUT(x) __builtin_unreachable()

/* Atomic operation implementation for ARM64 */
unsigned int _aarch64_ldadd4_acq_rel(unsigned int a1, _Atomic unsigned int *a2)
{
 unsigned int result;
 unsigned int new_val;
 volatile unsigned int *addr;

 addr = (volatile unsigned int *)a2;
 if ( _aarch64_have_lse_atomics )
 {
 result = atomic_fetch_add_explicit((_Atomic unsigned int *)a2, a1, memory_order_acq_rel);
 return result;
 }
 do {
 result = __ldaxr(addr);
 new_val = result + a1;
 } while ( __stlxr(new_val, addr) );
 return result;
}

/* Stub implementation for getauxval - returns 0 (no LSE atomics) */
unsigned long getauxval(unsigned long type)
{
    return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_clang_O2_no_g
 * Processor: arm
 */

/* CRT stub function call_weak_fn removed by preprocessor */
long long call_weak_fn(void)
{
 return 0;
}

/* Stub for __libc_start_main */
void __libc_start_main(int (*main_func)(int, const char **, const char **),
                       int argc, const char **argv,
                       void (*init)(void), void (*fini)(void),
                       void (*rtld_fini)(void), void (*stack_end)
{
    if (init) init();
    exit(main_func(argc, argv, NULL));
}

/* Entry point _start - minimal CRT stub */
void _start(void)
{
    /* Setup stack and call __libc_start_main */
    extern int main(int argc, const char **argv, const char **envp);
    
    __libc_start_main(main, 0, NULL, init_proc, term_proc, NULL, NULL);
}


/* Function: .init_proc @ 0x780 */
void init_proc()
{
 init_have_lse_atomics();
 call_weak_fn();
}


/* Function: sub_7A0 @ 0x7A0 */
void sub_7A0()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x880 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */






/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x9D4 */
long long param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x9E8 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x9F0 */
long long param_macro_functions(int a1, int a2)
{
 int v2; // w8

 if ( a1 <= a2 )
 v2 = a2;
 else
 v2 = a1;
 return (unsigned int)(v2 + a1 * a1);
}


/* Function: call_macro_functions @ 0xA00 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xA08 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0xA14 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xA1C */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0xA2C */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xA34 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0xA3C */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xA44 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0xA4C */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xA54 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0xA60 */
long long param_token_paste(int a1)
{
 return (unsigned int)(11 * a1 + 5);
}


/* Function: call_token_paste @ 0xA70 */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xA78 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0xAB0 */
long long call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0xADC */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0xAE8 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xAF0 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xAF8 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xB00 */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:43");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0xB50 */
long long call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:43");
 return 382;
}


/* Function: test_preprocessing_features @ 0xB94 */
long long test_preprocessing_features()
{
 puts(asc_1407);
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
 "03:01:43");
 return printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xCA4 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0xCAC */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xCB4 */
long long param_asm_clobber(int32x4_t *a1, int a2)
{
 long long v2; // x10
 unsigned int v3; // w8
 int32x4_t *v5; // x8
 int32x4_t v6; // q0
 long long v7; // x11
 int32x4_t v8; // q1
 int32x4_t v9; // q2
 int32x4_t v10; // q3
 int *v11; // x11
 long long v12; // x9
 int v13; // t1

 if ( a2 < 1 )
 return 0;
 if ( (unsigned int)a2 >= 8 )
 {
 v2 = a2 & 0xFFFFFFF8;
 v5 = a1 + 1;
 v6 = vdupq_n_s32(0);
 v7 = v2;
 v8 = vdupq_n_s32(0);
 do
 {
 v9 = v5[-1];
 v10 = *v5;
 v5 += 2;
 v7 -= 8;
 v6 = vaddq_s32(v9, v6);
 v8 = vaddq_s32(v10, v8);
 }
 while ( v7 );
 v3 = vaddvq_s32(vaddq_s32(v8, v6));
 if ( v2 == a2 )
 return v3;
 }
 else
 {
 v2 = 0;
 v3 = 0;
 }
 v11 = (int *)a1 + v2;
 v12 = (unsigned int)a2 - v2;
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
long long call_asm_clobber()
{
 return 15;
}


/* Custom memcpy implementation */
void *memcpy_custom(void *dest, const void *src, size_t n)
{
 unsigned char *d = (unsigned char *)dest;
 const unsigned char *s = (const unsigned char *)src;
 while (n--)
 {
 *d++ = *s++;
 }
 return dest;
}

/* Function: param_asm_multi_insn @ 0xD44 */
// attributes: thunk
void *param_asm_multi_insn(void *dest, const void *src, size_t n)
{
 return memcpy_custom(dest, src, n);
}


/* Function: call_asm_multi_insn @ 0xD48 */
long long call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xD50 */
long long param_asm_simd(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
 int v3; // w8
 long long result; // x0

 *a3 = *a2 + *a1;
 a3[1] = a2[1] + a1[1];
 a3[2] = a2[2] + a1[2];
 v3 = a1[3];
 result = 0;
 a3[3] = a2[3] + v3;
 return result;
}


/* Function: param_simd_intrinsics @ 0xD98 */
long long param_simd_intrinsics(unsigned int *a1, unsigned int *a2, unsigned int *a3)
{
 int v3; // w8
 long long result; // x0

 *a3 = *a2 + *a1;
 a3[1] = a2[1] + a1[1];
 a3[2] = a2[2] + a1[2];
 v3 = a1[3];
 result = 0;
 a3[3] = a2[3] + v3;
 return result;
}


/* Function: call_asm_simd @ 0xDE0 */
long long call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0xDE8 */
long long param_asm_atomic(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: param_atomic_c11 @ 0xE14 */
long long param_atomic_c11(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: call_asm_atomic @ 0xE40 */
long long call_asm_atomic()
{
 int v0; // w0
 atomic_uint v2; // [xsp+Ch] [xbp-4h] BYREF

 v2 = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, &v2);
 return (unsigned int)(v0 + v2 + 5);
}


/* Function: param_dynamic_code @ 0xE78 */
long long param_dynamic_code(int a1)
{
 size_t v2; // x20
 unsigned int v3; // w21
 void *v4; // x0

 v2 = sysconf(30);
 v3 = -1;
 v4 = mmap(0, v2, 7, 34, -1, 0);
 if ( v4 != (void *)-1LL )
 {
 v3 = a1 + 5;
 munmap(v4, v2);
 }
 return v3;
}


/* Function: param_memory_protection @ 0xEE0 */
long long param_memory_protection()
{
 size_t v0; // x19
 unsigned int v1; // w21
 unsigned int *v2; // x0
 unsigned int *v3; // x20

 v0 = sysconf(30);
 v1 = -1;
 v2 = (unsigned int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (unsigned int *)-1LL )
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
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a2 + a1));
}


/* Function: call_asm_privileged @ 0xF9C */
long long call_asm_privileged()
{
 size_t v0; // x20
 unsigned int v1; // w21
 void *v2; // x0
 void *v3; // x19

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 v3 = v2;
 if ( v2 != (void *)-1LL )
 {
 munmap(v2, v0);
 v1 = 15;
 }
 if ( (unsigned int)param_memory_protection() != 42 || v3 == (void *)-1LL )
 return v1;
 else
 return 77;
}


/* Function: param_memory_clobber_demo @ 0x101C */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x102C */
long long test_asm_features()
{
 int v0; // w0
 size_t v1; // x20
 unsigned int v2; // w21
 void *v3; // x0
 void *v4; // x19
 long long v6; // x1
 atomic_uint v8; // [xsp+1Ch] [xbp+1Ch] BYREF

 puts(asc_142E);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 printf(aAsmL404D, 36);
 v8 = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, &v8);
 printf(aAsmL405D, (unsigned int)(v0 + v8 + 5));
 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 v4 = v3;
 if ( v3 != (void *)-1LL )
 {
 munmap(v3, v1);
 v2 = 15;
 }
 if ( (unsigned int)param_memory_protection() != 42 || v4 == (void *)-1LL )
 v6 = v2;
 else
 v6 = 77;
 return printf(aAsmL406D, v6);
}


/* Function: main @ 0x1130 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0x1180 */
void term_proc()
{
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
