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


#include <arm_neon.h>
#include <stdbool.h>

/* Union for accessing NEON vector elements */
typedef union {
    int32x4_t vec;
    uint32_t u32[4];
    uint8_t u8[16];
} int32x4_u;
#include <stdatomic.h>
#include <sys/auxv.h>
#include <sys/mman.h>
#include <arm_acle.h>
#include <string.h>
#include <unistd.h>

/* IDA decompilation helper macros */
#define LODWORD(x)  ((unsigned int)((x) & 0xffffffff))

/* Forward declarations */
long long test_preprocessing_features(int argc, const char **argv, const char **envp);
long long test_asm_features(long long a1);
unsigned int _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
int __printf_chk(int flag, const char *format, ...);

/* ARM ACLE intrinsic declarations */
static inline unsigned int __ldaxr(const volatile unsigned int *addr) {
    unsigned int result;
    __asm__ volatile("ldaxr %w0, [%1]" : "=r"(result) : "r"(addr) : "memory");
    return result;
}

static inline unsigned int __stlxr(unsigned int val, volatile unsigned int *addr) {
    unsigned int result;
    __asm__ volatile("stlxr %w0, %w1, [%2]" : "=&r"(result) : "r"(val), "r"(addr) : "memory");
    return result;
}

/* Global variables */
int _aarch64_have_lse_atomics = 0;

/* String constants */
static const char asc_14D0[] = "=== Preprocessing Features Test ===\n";
static const char aPpL201D[] = "PPL201: %d\n";
static const char aPpL202D[] = "PPL202: %d\n";
static const char aPpL203D[] = "PPL203: %d\n";
static const char aPpL204D[] = "PPL204: %d\n";
static const char aPpL301D[] = "PPL301: %d\n";
static const char aPpL302D[] = "PPL302: %d\n";
static const char aPpL303D[] = "PPL303: %d\n";
static const char aPpL304D[] = "PPL304: %d\n";
static const char aPpL305D[] = "PPL305: %d\n";
static const char aPpL306D[] = "PPL306: %d\n";
static const char aPpL307D[] = "PPL307: %d\n";
static const char asc_1678[] = "=== ASM Features Test ===\n";
static const char aAsmL401D[] = "ASML401: %d\n";
static const char aAsmL402D[] = "ASML402: %d\n";
static const char aAsmL403D[] = "ASML403: %d\n";
static const char aAsmL404D[] = "ASML404: %d\n";
static const char aAsmL405D[] = "ASML405: %d\n";
static const char aAsmL406D[] = "ASML406: %d, %lld\n";

/* Global variable for stack check */
long unsigned int _stack_chk_guard;
int global_var = 0;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O3_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x7F0 */
long long init_proc()
{
 return 0;
}


/* Function: sub_810 @ 0x810 */
void sub_810()
{
 __builtin_unreachable();
}


/* Function: main @ 0x900 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0

 v3 = test_preprocessing_features(argc, argv, envp);
 test_asm_features(v3);
 return 0;
}


/* Function: init_have_lse_atomics @ 0x920 */
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



/* Function: param_macro_constants @ 0xAA0 */
long long param_macro_constants(int a1)
{
 if ( a1 > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0xAB4 */
long long call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0xAC0 */
long long param_macro_functions(int a1, int a2)
{
 if ( a1 >= a2 )
 a2 = a1;
 return (unsigned int)(a2 + a1 * a1);
}


/* Function: call_macro_functions @ 0xAD0 */
long long call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xAE0 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0xAF0 */
long long call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xB00 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0xB10 */
long long call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xB20 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0xB30 */
long long call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xB40 */
long long param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0xB50 */
long long call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xB60 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0xB70 */
long long param_token_paste(int a1)
{
 return (unsigned int)(a1 + 5 + 10 * a1);
}


/* Function: call_token_paste @ 0xB80 */
long long call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xB90 */
long long param_variadic_macro(int a1, int a2, int a3)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0xBD0 */
long long call_variadic_macro()
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0xC00 */
long long param_macro_override(int a1)
{
 return (unsigned int)(3 * a1 + 1);
}


/* Function: call_macro_override @ 0xC10 */
long long call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xC20 */
long long param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xC30 */
long long call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xC40 */
long long param_builtin_macros(int a1)
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:33");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0xC94 */
long long call_builtin_macros()
{
 __printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:33");
 return 382;
}


/* Function: test_preprocessing_features @ 0xCE0 */
long long test_preprocessing_features(int argc, const char **argv, const char **envp)
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
 "03:01:33");
 return __printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xE30 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0xE40 */
long long call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xE50 */
long long param_asm_clobber(int32x4_u *a1, int a2)
{
 int32x4_u *v3; // x2
 int32x4_t v4; // q0
 int32x4_t v5; // t1
 int v6; // w2
 long long result; // x0
 char *v8; // x4

 if ( a2 <= 0 )
 return 0;
 if ( (unsigned int)(a2 - 1) <= 2 )
 {
 v6 = 0;
 result = 0;
 }
 else
 {
 v3 = a1;
 v4 = vdupq_n_s32(0);
 do
 {
 v5 = v3->vec;
 v4 = vaddq_s32(v4, v5);
 v3++;
 }
 while ( v3 != &a1[(unsigned int)a2 >> 2] );
 v6 = a2 & 0x7FFFFFFC;
 result = (unsigned int)vaddvq_s32(v4);
 if ( (a2 & 3) == 0 )
 return result;
 }
 result = (unsigned int)(result + a1->u32[v6]);
 if ( a2 > v6 + 1 )
 {
 v8 = (char *)a1 + 4 * v6;
 result = (unsigned int)(result + *((unsigned int *)v8 + 1));
 if ( a2 > v6 + 2 )
 return (unsigned int)(result + *((unsigned int *)v8 + 2));
 }
 return result;
}


/* Function: call_asm_clobber @ 0xEF4 */
long long call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xF00 */
// attributes: thunk
void *param_asm_multi_insn(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}


/* Function: call_asm_multi_insn @ 0xF04 */
long long call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xF10 */
long long param_asm_simd(int32x4_u *a1, int32x4_u *a2, int32x4_u *a3)
{
 unsigned long long v3; // x3
 bool v4; // cf
 bool v5; // zf
 int32x4_t v6; // q0
 long long result; // x0

 v3 = (uintptr_t)a3 - (uintptr_t)&a2->u8[4];
 if ( ((uintptr_t)a3 - (uintptr_t)&a1->u8[4]) > 8 )
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
 v6 = a1->vec;
 result = 0;
 {
 int32x4_u temp;
 temp.vec = v6;
 a3->u32[0] = temp.u32[0] + a2->u32[0];
 a3->u32[1] = temp.u32[1] + a2->u32[1];
 a3->u32[2] = temp.u32[2] + a2->u32[2];
 a3->u32[3] = temp.u32[3] + a2->u32[3];
 }
 }
 else
 {
 a3->u32[0] = a1->u32[0] + a2->u32[0];
 a3->u32[1] = a1->u32[1] + a2->u32[1];
 a3->u32[2] = a1->u32[2] + a2->u32[2];
 a3->u32[3] = a1->u32[3] + a2->u32[3];
 return 0;
 }
 return result;
}


/* Function: param_simd_intrinsics @ 0xF90 */
long long param_simd_intrinsics(int32x4_u *a1, int32x4_u *a2, int32x4_u *a3)
{
 unsigned long long v3; // x3
 bool v4; // cf
 bool v5; // zf
 int32x4_t v6; // q0
 long long result; // x0

 v3 = (uintptr_t)a3 - (uintptr_t)&a2->u8[4];
 if ( ((uintptr_t)a3 - (uintptr_t)&a1->u8[4]) > 8 )
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
 v6 = a1->vec;
 result = 0;
 {
 int32x4_u temp;
 temp.vec = vaddq_s32(v6, a2->vec);
 a3->u32[0] = temp.u32[0];
 a3->u32[1] = temp.u32[1];
 a3->u32[2] = temp.u32[2];
 a3->u32[3] = temp.u32[3];
 }
 }
 else
 {
 a3->u32[0] = a1->u32[0] + a2->u32[0];
 a3->u32[1] = a1->u32[1] + a2->u32[1];
 a3->u32[2] = a1->u32[2] + a2->u32[2];
 a3->u32[3] = a1->u32[3] + a2->u32[3];
 return 0;
 }
 return result;
}


/* Function: call_asm_simd @ 0x1010 */
long long call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0x1020 */
long long param_asm_atomic(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: param_atomic_c11 @ 0x1050 */
long long param_atomic_c11(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: call_asm_atomic @ 0x1080 */
long long call_asm_atomic()
{
 int v0; // w0
 atomic_uint v2; // [xsp+14h] [xbp+14h] BYREF

 atomic_init(&v2, 10);
 v0 = _aarch64_ldadd4_acq_rel(5, &v2);
 return (unsigned int)(v0 + 5 + atomic_load(&v2));
}


/* Function: param_dynamic_code @ 0x10E4 */
long long param_dynamic_code(int a1)
{
 size_t v2; // x20
 void *v3; // x0
 unsigned int v4; // w19

 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 == (void *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 v4 = a1 + 5;
 munmap(v3, v2);
 }
 return v4;
}


/* Function: param_memory_protection @ 0x1150 */
long long param_memory_protection()
{
 size_t v0; // x20
 unsigned int *v1; // x0
 unsigned int *v2; // x19
 unsigned int v3; // w21

 v0 = sysconf(30);
 v1 = mmap(0, v0, 3, 34, -1, 0);
 v2 = v1;
 if ( v1 == (unsigned int *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
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
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x1220 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a1 + a2));
}


/* Function: call_asm_privileged @ 0x1230 */
long long call_asm_privileged()
{
 size_t v0; // x20
 void *v1; // x0

 v0 = sysconf(30);
 v1 = mmap(0, v0, 7, 34, -1, 0);
 if ( v1 == (void *)-1LL )
 {
 param_memory_protection();
 return 0xFFFFFFFFLL;
 }
 else
 {
 munmap(v1, v0);
 if ( (unsigned int)param_memory_protection() == 42 )
 return 77;
 else
 return 15;
 }
}


/* Function: param_memory_clobber_demo @ 0x12A4 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x12B4 */
long long test_asm_features(long long a1)
{
 int v0; // w0
 size_t v1; // x20
 void *v2; // x0
 long long v3; // x2
 atomic_uint v5; // [xsp+24h] [xbp+24h] BYREF
 long long v6; // [xsp+28h] [xbp+28h]

 v6 = _stack_chk_guard;
 __printf_chk(1, asc_1678, &_stack_chk_guard, 0);
 __printf_chk(1, aAsmL401D, 15);
 __printf_chk(1, aAsmL402D, 15);
 __printf_chk(1, aAsmL403D, 42);
 __printf_chk(1, aAsmL404D, 36);
 atomic_init(&v5, 10);
 v0 = _aarch64_ldadd4_acq_rel(5, &v5);
 __printf_chk(1, aAsmL405D, (unsigned int)(v0 + 5 + atomic_load(&v5)));
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
 if ( (unsigned int)param_memory_protection() == 42 )
 v3 = 77;
 else
 v3 = 15;
 }
 return __printf_chk(1, aAsmL406D, v3, v6 - _stack_chk_guard);
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x1400 */
unsigned int _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 unsigned int result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr((unsigned int *)a2);
 while ( __stlxr(result + a1, (unsigned int *)a2) );
 return result;
}


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
