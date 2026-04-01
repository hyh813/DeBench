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

#include <stdatomic.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* Decompilation helper macro */
#define LODWORD(x) ((uint32_t)(x))

/* Forward declarations */
long long test_preprocessing_features(void);
long long test_asm_features(void);
long long call_weak_fn(void);
unsigned long __getauxval(unsigned long type);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);

/* Global variables */
int _aarch64_have_lse_atomics;
unsigned long _stack_chk_guard;
int global_var;

/* String constants */
static const char asc_1550[] = "Testing preprocessing features:\n";
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
static const char asc_16F8[] = "Stack guard: %p, %d\n";
static const char aAsmL401D[] = "  asm_basic: %d\n";
static const char aAsmL402D[] = "  asm_clobber: %d\n";
static const char aAsmL403D[] = "  asm_multi_insn: %d\n";
static const char aAsmL404D[] = "  asm_simd: %d\n";
static const char aAsmL405D[] = "  asm_atomic: %d\n";
static const char aAsmL406D[] = "  asm_privileged: %d, %d\n";

/* Decompilation helper macro */
#define JUMPOUT(x) __builtin_unreachable()

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_gcc_O2_no_g
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


/* Function: main @ 0x900 */
int main(int argc, const char **argv, const char **envp)
{
 long long v3; // x0

 v3 = test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: init_have_lse_atomics @ 0x920 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)__getauxval(16) >> 8) & 1;
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
 "03:01:30");
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
 "03:01:30");
 return 382;
}


/* Function: test_preprocessing_features @ 0xCE0 */
long long test_preprocessing_features(void)
{
 __printf_chk(1, asc_1550);
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
 "03:01:30");
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
long long param_asm_clobber(long long a1, int a2)
{
 long long v3; // x2
 long long result; // x0
 int v5; // w3
 union { long long v; uint32_t low; } result_u;

 if ( a2 <= 0 )
 return 0;
 v3 = 0;
 result_u.v = result;
 result_u.low = 0;
 result = result_u.v;
 do
 {
 v5 = *(unsigned int *)(a1 + 4 * v3++);
 result = (unsigned int)(result + v5);
 }
 while ( a2 > (int)v3 );
 return result;
}


/* Function: call_asm_clobber @ 0xE90 */
long long call_asm_clobber()
{
 long long v0; // x1
 long long result; // x0
 char *v2; // x2
 unsigned long long v3[2]; // [xsp+10h] [xbp+10h] BYREF
 int v4; // [xsp+20h] [xbp+20h]
 union { long long v; uint32_t low; } result_u;

 v0 = 1;
 result_u.v = result;
 result_u.low = 0;
 result = result_u.v;
 v3[0] = 0x200000001LL;
 v3[1] = 0x400000003LL;
 v4 = 5;
 do
 {
 v2 = (char *)v3 + 4 * v0++;
 result = (unsigned int)(result + *((unsigned int *)v2 - 1));
 }
 while ( v0 != 6 );
 return result;
}


/* Function: param_asm_multi_insn @ 0xF10 */
// attributes: thunk
void *param_asm_multi_insn(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}


/* Function: call_asm_multi_insn @ 0xF14 */
long long call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xF20 */
long long param_asm_simd(long long a1, long long a2, long long a3)
{
 long long i; // x3
 unsigned int *p1 = (unsigned int *)a1;
 unsigned int *p2 = (unsigned int *)a2;
 unsigned int *p3 = (unsigned int *)a3;

 for ( i = 0; i != 4; ++i )
 p3[i] = p1[i] + p2[i];
 return 0;
}


/* Function: param_simd_intrinsics @ 0xF50 */
long long param_simd_intrinsics(long long a1, long long a2, long long a3)
{
 long long i; // x3
 unsigned int *p1 = (unsigned int *)a1;
 unsigned int *p2 = (unsigned int *)a2;
 unsigned int *p3 = (unsigned int *)a3;

 for ( i = 0; i != 4; ++i )
 p3[i] = p1[i] + p2[i];
 return 0;
}


/* Function: call_asm_simd @ 0xF80 */
long long call_asm_simd()
{
 long long v0; // x0
 char *v1; // x1
 char *v2; // x2
 unsigned int *v3; // x3
 unsigned long long v5[2]; // [xsp+18h] [xbp+18h] BYREF
 unsigned long long v6[2]; // [xsp+28h] [xbp+28h] BYREF
 unsigned int v7[4]; // [xsp+38h] [xbp+38h] BYREF

 v6[0] = 0x600000005LL;
 v6[1] = 0x800000007LL;
 v0 = 2;
 v7[0] = 6;
 v5[0] = 0x200000001LL;
 v5[1] = 0x400000003LL;
 do
 {
 v1 = (char *)v5 + v0 * 4;
 v2 = (char *)v6 + v0 * 4;
 v3 = &v7[v0++];
 v7[v0-2] = *((unsigned int *)v1 - 1) + *((unsigned int *)v2 - 1);
 }
 while ( v0 != 5 );
 return (unsigned int)(v7[0] + v7[1] + v7[2] + v7[3]);
}


/* Function: param_asm_atomic @ 0x1060 */
long long param_asm_atomic(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: param_atomic_c11 @ 0x1090 */
long long param_atomic_c11(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)a1) + a2;
}


/* Function: call_asm_atomic @ 0x10C0 */
long long call_asm_atomic()
{
 int v0; // w0
 int v2; // [xsp+14h] [xbp+14h] BYREF

 v2 = 10;
 v0 = _aarch64_ldadd4_acq_rel(5, (atomic_uint *)&v2);
 return (unsigned int)(v0 + 5 + v2);
}


/* Function: param_dynamic_code @ 0x1124 */
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


/* Function: param_memory_protection @ 0x1190 */
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


/* Function: param_clobber_importance @ 0x1260 */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a1 + a2));
}


/* Function: call_asm_privileged @ 0x1270 */
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


/* Function: param_memory_clobber_demo @ 0x12E4 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x12F4 */
long long test_asm_features(void)
{
 long long v0; // x0
 long long v1; // x2
 char *v2; // x1
 unsigned int v3; // w0
 int v4; // w0
 size_t v5; // x20
 void *v6; // x0
 long long v7; // x2
 int v9; // [xsp+2Ch] [xbp+2Ch] BYREF
 unsigned long long v10[2]; // [xsp+30h] [xbp+30h] BYREF
 int v11; // [xsp+40h] [xbp+40h]
 long long v12; // [xsp+48h] [xbp+48h]
 union { long long v; uint32_t low; } v1_u;

 __printf_chk(1, asc_16F8, &_stack_chk_guard, 0);
 v12 = _stack_chk_guard;
 __printf_chk(1, aAsmL401D, 15);
 v0 = 1;
 v1_u.v = v1;
 v1_u.low = 0;
 v1 = v1_u.v;
 v10[0] = 0x200000001LL;
 v10[1] = 0x400000003LL;
 v11 = 5;
 do
 {
 v2 = (char *)v10 + 4 * v0++;
 v1 = (unsigned int)(v1 + *((unsigned int *)v2 - 1));
 }
 while ( v0 != 6 );
 __printf_chk(1, aAsmL402D, v1);
 __printf_chk(1, aAsmL403D, 42);
 v3 = call_asm_simd();
 __printf_chk(1, aAsmL404D, v3);
 v9 = 10;
 v4 = _aarch64_ldadd4_acq_rel(5, (atomic_uint *)&v9);
 __printf_chk(1, aAsmL405D, (unsigned int)(v4 + 5 + v9));
 v5 = sysconf(30);
 v6 = mmap(0, v5, 7, 34, -1, 0);
 if ( v6 == (void *)-1LL )
 {
 param_memory_protection();
 v7 = 0xFFFFFFFFLL;
 }
 else
 {
 munmap(v6, v5);
 if ( (unsigned int)param_memory_protection() == 42 )
 v7 = 77;
 else
 v7 = 15;
 }
 return __printf_chk(1, aAsmL406D, v7, v12 - _stack_chk_guard);
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x1480 */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 unsigned int expected;
 unsigned int newval;
 
 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 {
 expected = atomic_load(a2);
 newval = expected + a1;
 }
 while (!atomic_compare_exchange_strong(a2, &expected, newval));
 return expected;
}


/* Function: .term_proc @ 0x14B0 */
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
