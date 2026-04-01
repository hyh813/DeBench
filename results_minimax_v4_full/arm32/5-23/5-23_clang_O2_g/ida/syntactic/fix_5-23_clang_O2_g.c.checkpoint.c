/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;

/* String format variables for preprocessing tests */
char aPpL201D[] = "param_macro_constants(64) = %d\n";
char aPpL202D[] = "call_macro_functions() = %d\n";
char aPpL203D[] = "call_conditional_compile() = %d\n";
char aPpL204D[] = "call_multi_branch_compile() = %d\n";
char aPpL301D[] = "call_macro_recursion() = %d\n";
char aPpL302D[] = "call_stringize() = %d\n";
char aPpL303D[] = "call_token_paste() = %d\n";
char aPpL304D[] = "call_variadic_macro() = %d\n";
char aPpL305D[] = "call_macro_override() = %d\n";
char aPpL306D[] = "call_include_guard() = %d\n";
char aPpL307D[] = "call_builtin_macros() = %d\n";

/* String format variables for asm tests */
char aAsmL401D[] = "param_asm_basic(5) = %d\n";
char aAsmL402D[] = "call_asm_basic() = %d\n";
char aAsmL403D[] = "call_asm_multi_insn() = %d\n";
char aAsmL404D[] = "call_asm_simd() = %d\n";
char aAsmL405D[] = "call_asm_atomic() = %d\n";
char aAsmL406D[] = "call_asm_privileged() = %d\n";

/* Additional string variables */
char asc_11D2[] = "Testing ASM features";

/* Global variable for memory clobber demo */
int global_var = 0;

/* Standard integer types - using system headers */
#include <stdint.h>
#include <stddef.h>
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef int bool;
#define true 1
#define false 0

/* Stub for weak function call_weak_fn */
int call_weak_fn()
{
 return 0;
}

/* Stub for atomic_fetch_add_4 - 32-bit atomic fetch and add */
#include <stdatomic.h>
int _atomic_fetch_add_4(int *ptr, int val, int memory_order)
{
 return atomic_fetch_add_explicit((_Atomic int *)ptr, val, memory_order);
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_clang_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x4E0 */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_4EC @ 0x4EC */
void sub_4EC()
{
 /* Empty stub - original jumped to external address */
}


/* Function: param_asm_multi_insn_0 @ 0x530 */
void *param_asm_multi_insn_0(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x6F8 */
int param_macro_constants(int size)
{
 int v1; // r1

 v1 = 512;
 if ( size > 1024 )
 return 64;
 return v1;
}


/* Function: call_macro_constants @ 0x70C */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x714 */
int param_macro_functions(int x, int y)
{
 if ( x > y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0x728 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x730 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x73C */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x744 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x754 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x760 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x768 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x770 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x778 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x780 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x78C */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0x79C */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x7A4 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x7D4 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x800 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x80C */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x814 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x81C */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x824 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:17");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x894 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:17");
 return 382;
}


/* Function: test_preprocessing_features @ 0x900 */
void test_preprocessing_features()
{
 puts("Testing preprocessing features");
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
 "03:01:17");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xA70 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xA78 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xA80 */
int param_asm_clobber(int *arr, int n)
{
 int result; // r0

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 result += *arr++;
 --n;
 }
 while ( n );
 return result;
}


/* Function: call_asm_clobber @ 0xAAC */
int call_asm_clobber()
{
 return 15;
}


/* Function: call_asm_multi_insn @ 0xAB8 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xAC0 */
int param_asm_simd(int *a, int *b, int *result)
{
 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 result[3] = b[3] + a[3];
 return 0;
}


/* Function: param_simd_intrinsics @ 0xB08 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 result[3] = b[3] + a[3];
 return 0;
}


/* Function: call_asm_simd @ 0xB50 */
int call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0xB58 */
int param_asm_atomic(int *counter, int increment)
{
 return _atomic_fetch_add_4(counter, increment, 5) + increment;
}


/* Function: param_atomic_c11 @ 0xB74 */
int param_atomic_c11(int *counter, int increment)
{
 return _atomic_fetch_add_4(counter, increment, 5) + increment;
}


/* Function: call_asm_atomic @ 0xB90 */
int call_asm_atomic()
{
 int add_4; // r0
 int v2; // [sp+4h] [bp-Ch] BYREF

 v2 = 10;
 add_4 = _atomic_fetch_add_4(&v2, 5, 5);
 return add_4 + v2 + 5;
}


/* Function: param_dynamic_code @ 0xBC8 */
int param_dynamic_code(int x)
{
 size_t v2; // r5
 int v3; // r6
 void *v4; // r0

 v2 = sysconf(30);
 v3 = -1;
 v4 = mmap(0, v2, 7, 34, -1, 0);
 if ( v4 != (void *)-1 )
 {
 munmap(v4, v2);
 return x + 5;
 }
 return v3;
}


/* Function: param_memory_protection @ 0xC28 */
int param_memory_protection()
{
 size_t v0; // r4
 int v1; // r6
 int *v2; // r0
 int *v3; // r5
 int v4; // r7
 bool v4_bool; // for comparison result

 v0 = sysconf(30);
 v1 = -1;
 v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (int *)-1 )
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
 v1 = v4;
 *v3 = 100;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0xCD4 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0xCE0 */
int call_asm_privileged()
{
 size_t v0; // r4
 int v1; // r6
 void *v2; // r0
 void *v3; // r5
 bool v4; // zf
 int result; // r0

 v0 = sysconf(30);
 v1 = -1;
 v2 = mmap(0, v0, 7, 34, -1, 0);
 v3 = v2;
 if ( v2 != (void *)-1 )
 {
 munmap(v2, v0);
 v1 = 15;
 }
 v4 = param_memory_protection() == 42;
 result = v1;
 if ( v4 )
 result = 77;
 if ( v3 == (void *)-1 )
 return v1;
 return result;
}


/* Function: param_memory_clobber_demo @ 0xD58 */
int param_memory_clobber_demo()
{
 return (int)global_var + 50;
}


/* Function: test_asm_features @ 0xD6C */
void test_asm_features()
{
 int add_4; // r0
 size_t v1; // r4
 int v2; // r6
 void *v3; // r0
 void *v4; // r5
 int v5; // r0
 int v6; // r1
 int v7; // [sp+Ch] [bp-14h] BYREF

 puts(asc_11D2);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 printf(aAsmL404D, 36);
 v7 = 10;
 add_4 = _atomic_fetch_add_4(&v7, 5, 5);
 printf(aAsmL405D, add_4 + v7 + 5);
 v1 = sysconf(30);
 v2 = -1;
 v3 = mmap(0, v1, 7, 34, -1, 0);
 v4 = v3;
 if ( v3 != (void *)-1 )
 {
 munmap(v3, v1);
 v2 = 15;
 }
 v5 = param_memory_protection();
 v6 = v2;
 if ( v5 == 42 )
 v6 = 77;
 if ( v4 == (void *)-1 )
 v6 = v2;
 printf(aAsmL406D, v6);
}


/* Function: main @ 0xE88 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0xEA0 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x12088 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1208C */

/* FAILED to decompile: __imp_printf @ 0x12090 */

/* FAILED to decompile: __imp_mprotect @ 0x12094 */

/* FAILED to decompile: memcpy @ 0x12098 */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x1209C */

/* FAILED to decompile: __imp_sysconf @ 0x120A0 */

/* FAILED to decompile: __imp_puts @ 0x120A4 */

/* FAILED to decompile: __imp_mmap @ 0x120A8 */

/* FAILED to decompile: __imp_munmap @ 0x120AC */

/* FAILED to decompile: __imp_abort @ 0x120B0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120B8 */

/* Total functions decompiled: 52, failed: 12 */
