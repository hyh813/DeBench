#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdatomic.h>
#include <stdarg.h>
#include <arm_neon.h>
#include <sys/mman.h>
#include <unistd.h>
#include <sys/auxv.h>

/* Define MAP_FAILED if not already defined */
#ifndef MAP_FAILED
#define MAP_FAILED ((void *)-1)
#endif

/* Define __printf_chk as wrapper around printf for compatibility */
/* Declare vprintf from stdio.h */
extern int vprintf(const char *format, va_list ap);

int __printf_chk(int level, const char *format, ...)
{
    va_list args;
    int result;
    va_start(args, format);
    result = vprintf(format, args);
    va_end(args);
    return result;
}

/* Auto-injected type definitions by preprocessor */
/* Note: Basic types already defined in stdint.h, skipping duplicates */

/* Atomic type definition - using stdatomic.h types */
typedef _Atomic unsigned int atomic_uint;

/* Union type for accessing NEON vector elements */
typedef union {
    int32x4_t v;
    uint32_t n128_u32[4];
    uint8_t n128_u8[16];
} int32x4_union_t;

/* Global variables */
long long _aarch64_have_lse_atomics = 0;
int global_var = 0;
uintptr_t _stack_chk_guard = 0;

/* String constants */
const char *asc_14D0 = "=== Preprocessing Features Test ===\n";
const char *aPpL201D = "L2.1: Macro constants (param): %d\n";
const char *aPpL202D = "L2.2: Macro constants (call): %d\n";
const char *aPpL203D = "L2.3: Conditional compile: %d\n";
const char *aPpL204D = "L2.4: Multi-branch compile: %d\n";
const char *aPpL301D = "L3.1: Macro recursion: %d\n";
const char *aPpL302D = "L3.2: Stringize: %d\n";
const char *aPpL303D = "L3.3: Token paste: %d\n";
const char *aPpL304D = "L3.4: Variadic macro: %d\n";
const char *aPpL305D = "L3.5: Macro override: %d\n";
const char *aPpL306D = "L3.6: Include guard: %d\n";
const char *aPpL307D = "L3.7: Builtin macros: %d\n";
const char *asc_1678 = "=== Assembly Features Test ===\nStack guard: %p, cookie: %d\n";
const char *aAsmL401D = "L4.1: ASM basic: %d\n";
const char *aAsmL402D = "L4.2: ASM clobber: %d\n";
const char *aAsmL403D = "L4.3: ASM multi-instruction: %d\n";
const char *aAsmL404D = "L4.4: ASM SIMD: %d\n";
const char *aAsmL405D = "L4.5: ASM atomic: %d\n";
const char *aAsmL406D = "L4.6: ASM privileged: %lld, stack cookie check: %lld\n";

/* CRT stub function declarations */
long long call_weak_fn(void);
void JUMPOUT(int);

/* CRT stub function implementations */
long long call_weak_fn(void)
{
 return 0;
}

void JUMPOUT(int val)
{
 /* No-op stub */
}

/* External function declarations */
extern void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset);
extern int munmap(void *addr, size_t length);
extern long sysconf(int name);
extern int mprotect(void *addr, size_t len, int prot);
extern void abort(void);
extern void *memcpy(void *dest, const void *src, size_t n);
extern unsigned long getauxval(unsigned long type);

/* Stack check fail implementation */
void __stack_chk_fail(void)
{
    abort();
}

/* ARM atomic builtins - provide implementations */
/* Declare atomic functions from stdatomic.h */
extern unsigned int atomic_load_explicit(atomic_uint *ptr, int order);
extern int atomic_compare_exchange_strong_explicit(atomic_uint *ptr, unsigned int *expected, unsigned int desired, int success_order, int failure_order);
extern unsigned int atomic_fetch_add_explicit(atomic_uint *ptr, unsigned int val, int order);

static inline unsigned int __ldaxr(unsigned int *ptr)
{
    return atomic_load_explicit((atomic_uint *)ptr, memory_order_acquire);
}

static inline int __stlxr(unsigned int val, unsigned int *ptr, unsigned int expected)
{
    return !atomic_compare_exchange_strong_explicit(
        (atomic_uint *)ptr, &expected, val,
        memory_order_release, memory_order_relaxed);
}

/* Atomic fetch_add implementation - using stdatomic.h */

/* Internal function declarations */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x7F0 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_810 @ 0x810 */
void sub_810()
{
 JUMPOUT(0);
}


/* Forward declarations */
void test_preprocessing_features(void);
void test_asm_features(void);

/* Function: main @ 0x900 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: init_have_lse_atomics @ 0x920 */
long long init_have_lse_atomics(void)
{
 long long result;

 result = ((unsigned int)getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}




/* Function: param_macro_constants @ 0xAA0 */
int param_macro_constants(int size)
{
 if ( size > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0xAB4 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0xAC0 */
int param_macro_functions(int x, int y)
{
 if ( x >= y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0xAD0 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xAE0 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xAF0 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xB00 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xB10 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xB20 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xB30 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xB40 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0xB50 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xB60 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xB70 */
int param_token_paste(int x)
{
 return x + 5 + 10 * x;
}


/* Function: call_token_paste @ 0xB80 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xB90 */
int param_variadic_macro(int x, int y, int z)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xBD0 */
int call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0xC00 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0xC10 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xC20 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xC30 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xC40 */
int param_builtin_macros(int x)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:31");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xC94 */
int call_builtin_macros()
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:31");
 return 382;
}


/* Function: test_preprocessing_features @ 0xCE0 */
void test_preprocessing_features()
{
 __printf_chk(1, asc_14D0);
 __printf_chk(1, aPpL201D, 64);
 __printf_chk(1, aPpL202D, 30);
 __printf_chk(1, aPpL203D, 32);
 __printf_chk(1, aPpL204D, 57122);
 __printf_chk(1, aPpL301D, 116);
 __printf_chk(1, aPpL302D, 19);
 __printf_chk(1, aPpL303D, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, aPpL304D, 60);
 __printf_chk(1, aPpL305D, 16);
 __printf_chk(1, aPpL306D, 500);
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:31");
 __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xE30 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xE40 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xE50 */
int param_asm_clobber(int *arr, int n)
{
 int *v3; // x2
 int32x4_t v4; // q0
 int32x4_t v5; // t1
 int v6; // w2
 int result; // w0
 int *v8; // x4

 if ( n <= 0 )
 return 0;
 if ( (unsigned int)(n - 1) <= 2 )
 {
 v6 = 0;
 result = 0;
 }
 else
 {
 v3 = arr;
 v4 = vdupq_n_s32(0);
 do
 {
 v5 = *(int32x4_t *)v3;
 v3 += 4;
 v4 = vaddq_s32(v4, v5);
 }
 while ( v3 != &arr[4 * ((unsigned int)n >> 2)] );
 v6 = n & 0x7FFFFFFC;
 result = vaddvq_s32(v4);
 if ( (n & 3) == 0 )
 return result;
 }
 result += arr[v6];
 if ( n > v6 + 1 )
 {
 v8 = &arr[v6];
 result += v8[1];
 if ( n > v6 + 2 )
 result += v8[2];
 }
 return result;
}


/* Function: call_asm_clobber @ 0xEF4 */
int call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xF00 */
// attributes: thunk
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xF04 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xF10 */
int param_asm_simd(int *a, int *b, int *result)
{
 unsigned long long v3; // x3
 bool v4; // cf
 bool v5; // zf
 int32x4_t v6; // q0
 int v7; // w0

 v3 = (char *)result - (char *)(b + 1);
 if ( (unsigned long long)((char *)result - (char *)(a + 1)) > 8 )
 {
 v4 = v3 >= 8;
 v5 = v3 == 8;
 }
 else
 {
 v4 = 0;
 v5 = 0;
 }
 if ( !v5 && v4 )
 {
 v6 = *(int32x4_t *)a;
 v7 = 0;
 *(int32x4_t *)result = vaddq_s32(v6, *(int32x4_t *)b);
 }
 else
 {
 *result = *a + *b;
 result[1] = a[1] + b[1];
 result[2] = a[2] + b[2];
 result[3] = a[3] + b[3];
 return 0;
 }
 return v7;
}


/* Function: param_simd_intrinsics @ 0xF90 */
long long param_simd_intrinsics(int32x4_t *a1, int32x4_t *a2, int32x4_t *a3)
{
 unsigned long long v3; // x3
 bool v4; // cf
 bool v5; // zf
 int32x4_t v6; // q0
 long long result; // x0
 int32x4_union_t ua1, ua2, ua3;

 ua1.v = *a1;
 ua2.v = *a2;
 ua3.v = *a3;

 v3 = (char *)&ua3 - (char *)&ua2.n128_u8[4];
 if ( (unsigned long long)((char *)&ua3 - (char *)&ua1.n128_u8[4]) > 8 )
 {
 v4 = v3 >= 8;
 v5 = v3 == 8;
 }
 else
 {
 v4 = 0;
 v5 = 0;
 }
 if ( !v5 && v4 )
 {
 v6 = ua1.v;
 result = 0;
 ua3.v = vaddq_s32(v6, ua2.v);
 *a3 = ua3.v;
 }
 else
 {
 ua3.n128_u32[0] = ua1.n128_u32[0] + ua2.n128_u32[0];
 ua3.n128_u32[1] = ua1.n128_u32[1] + ua2.n128_u32[1];
 ua3.n128_u32[2] = ua1.n128_u32[2] + ua2.n128_u32[2];
 ua3.n128_u32[3] = ua1.n128_u32[3] + ua2.n128_u32[3];
 *a3 = ua3.v;
 return 0;
 }
 return result;
}


/* Function: call_asm_simd @ 0x1010 */
int call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0x1020 */
int param_asm_atomic(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (atomic_uint *)counter) + increment;
}


/* Function: param_atomic_c11 @ 0x1050 */
int param_atomic_c11(int *counter, int increment)
{
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, (atomic_uint *)counter) + increment;
}


/* Function: call_asm_atomic @ 0x1080 */
int call_asm_atomic()
{
 int v0; // w0
 int counter; // [xsp+14h] [xbp+14h] BYREF

 counter = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, (atomic_uint *)&counter);
 return v0 + 5 + counter;
}


/* Function: param_dynamic_code @ 0x10E4 */
int param_dynamic_code(int x)
{
 size_t v2; // x20
 void *v3; // x0
 int v4; // w19

 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 == (void *)-1LL )
 return -1;
 v4 = x + 5;
 munmap(v3, v2);
 return v4;
}


/* Function: param_memory_protection @ 0x1150 */
int param_memory_protection()
{
 size_t v0; // x20
 int *v1; // x0
 int *v2; // x19
 int v3; // w21

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 v2 = v1;
 if ( v1 == (int *)-1LL )
 return -1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 v3 = -2;
 munmap(v2, v0);
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 v3 = -3;
 else
 *v2 = 100;
 munmap(v2, v0);
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x1220 */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x1230 */
int call_asm_privileged()
{
 size_t v0; // x20
 void *v1; // x0

 v0 = sysconf(30);
 v1 = mmap(0, v0, 7, 34, -1, 0);
 if ( v1 == (void *)-1LL )
 {
 param_memory_protection();
 return -1;
 }
 else
 {
 munmap(v1, v0);
 if ( param_memory_protection() == 42 )
 return 77;
 else
 return 15;
 }
}


/* Function: param_memory_clobber_demo @ 0x12A4 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x12B4 */
void test_asm_features()
{
    int v0; // w0
    size_t v1; // x20
    void *v2; // x0
    long long v3; // x2
    int v4; // [xsp+24h] [xbp+24h] BYREF
    long long v5; // [xsp+28h] [xbp+28h]
    v5 = 0;

 __printf_chk(1, asc_1678, &_stack_chk_guard, 0);
 __printf_chk(1, aAsmL401D, 15);
 __printf_chk(1, aAsmL402D, 15);
 __printf_chk(1, aAsmL403D, 42);
 __printf_chk(1, aAsmL404D, 36);
 v4 = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, (atomic_uint *)&v4);
 __printf_chk(1, aAsmL405D, (unsigned int)(v0 + 5 + v4));
 v1 = sysconf(30);
 v2 = mmap(0, v1, 7, 34, -1, 0);
 if ( v2 == (void *)-1LL )
 {
 param_memory_protection();
 v3 = 0xFFFFFFFFLL;
 }
 else
 {
 munmap(v2, v1);
 if ( param_memory_protection() == 42 )
 v3 = 77;
 else
 v3 = 15;
 }
 __printf_chk(1, aAsmL406D, v3, v5 - _stack_chk_guard);
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x1400 */
/* Declare memory order constants */
#define memory_order_acquire 0
#define memory_order_release 1
#define memory_order_acq_rel 2
#define memory_order_relaxed 3

long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 unsigned int result; // x0

 if ( _aarch64_have_lse_atomics )
 {
 result = atomic_fetch_add_explicit(a2, a1, memory_order_acq_rel);
 return (long long)result;
 }
 do
 {
 result = __ldaxr((unsigned int *)a2);
 }
 while ( __stlxr(result + a1, (unsigned int *)a2, result) );
 return (long long)result;
}


/* Stub implementations removed - using system library functions */

/* Main entry point is provided by C runtime */


/* Function: .term_proc @ 0x1430 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x13078 */

/* FAILED to decompile: __libc_start_main @ 0x13080 */

/* FAILED to decompile: __cxa_finalize @ 0x13088 */

/* FAILED to decompile: __printf_chk @ 0x13090 */

/* FAILED to decompile: __stack_chk_fail @ 0x13098 */

/* FAILED to decompile: __getauxval @ 0x130A8 */

/* FAILED to decompile: abort @ 0x130B0 */

/* FAILED to decompile: mmap @ 0x130B8 */

/* FAILED to decompile: munmap @ 0x130C0 */

/* FAILED to decompile: sysconf @ 0x130C8 */

/* FAILED to decompile: mprotect @ 0x130D0 */

/* FAILED to decompile: __gmon_start__ @ 0x130E0 */

/* Total functions decompiled: 54, failed: 12 */
