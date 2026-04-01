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

/* Forward declarations for global string literals */
extern const char asc_122F[];
extern const char aPpL201D[];
extern const char aPpL202D[];
extern const char aPpL203D[];
extern const char aPpL204D[];
extern const char aPpL301D[];
extern const char aPpL302D[];
extern const char aPpL303D[];
extern const char aPpL304D[];
extern const char aPpL305D[];
extern const char aPpL306D[];
extern const char aPpL307D[];
extern const char asc_1256[];
extern const char aAsmL401D[];
extern const char aAsmL402D[];
extern const char aAsmL403D[];
extern const char aAsmL404D[];
extern const char aAsmL405D[];
extern const char aAsmL406D[];



/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_clang_O1_g
 * Processor: arm
 */





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
 "03:01:15");
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
 "03:01:15");
 return 382;
}


/* Function: test_preprocessing_features @ 0x900 */
void test_preprocessing_features()
{
 puts(asc_122F);
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
 "03:01:15");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xA74 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xA7C */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xA84 */
int param_asm_clobber(int *arr, int n)
{
 int result; // r0
 int v4; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *arr++;
 result += v4;
 --n;
 }
 while ( n );
 return result;
}


/* Function: call_asm_clobber @ 0xAB0 */
int call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xAB8 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xAC8 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xAD0 */
int param_asm_simd(int *a, int *b, int *result)
{
 int i; // lr

 for ( i = 0; i != 4; ++i )
 result[i] = b[i] + a[i];
 return 0;
}

/* GCC atomic builtin implementation */
int _atomic_fetch_add_4(int *ptr, int val, int memorder)
{
 return __atomic_fetch_add(ptr, val, memorder);
}


/* Function: param_simd_intrinsics @ 0xB00 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 int i; // lr

 for ( i = 0; i != 4; ++i )
 result[i] = b[i] + a[i];
 return 0;
}





/* Function: param_asm_atomic @ 0xB90 */
int param_asm_atomic(int *counter, int increment)
{
 return _atomic_fetch_add_4(counter, increment, 5) + increment;
}


/* Function: param_atomic_c11 @ 0xBAC */
int param_atomic_c11(int *counter, int increment)
{
 return _atomic_fetch_add_4(counter, increment, 5) + increment;
}


/* Function: call_asm_atomic @ 0xBC8 */
int call_asm_atomic()
{
 int add_4; // r0
 int v2; // [sp+4h] [bp-Ch] BYREF

 v2 = 10;
 add_4 = _atomic_fetch_add_4(&v2, 5, 5);
 return add_4 + v2 + 5;
}


/* Function: param_dynamic_code @ 0xC00 */
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


/* Function: param_memory_protection @ 0xC60 */
int param_memory_protection()
{
 size_t v0; // r4
 int v1; // r6
 int *v2; // r0
 int *v3; // r5
 int v4; // r7

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
 *v3 = 100;
 v1 = v4;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0xD0C */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0xD18 */
int call_asm_privileged()
{
 size_t v0; // r4
 int v1; // r6
 void *v2; // r0
 void *v3; // r5
 int v4; // zf
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


int global_var;

/* Function: param_memory_clobber_demo @ 0xD90 */
int param_memory_clobber_demo()
{
 return (int)global_var + 50;
}





/* Global string literals */
const char asc_122F[] = "Preprocessing Tests:";
const char aPpL201D[] = "  PpL2_01: %d\n";
const char aPpL202D[] = "  PpL2_02: %d\n";
const char aPpL203D[] = "  PpL2_03: %d\n";
const char aPpL204D[] = "  PpL2_04: %d\n";
const char aPpL301D[] = "  PpL3_01: %d\n";
const char aPpL302D[] = "  PpL3_02: %d\n";
const char aPpL303D[] = "  PpL3_03: %d\n";
const char aPpL304D[] = "  PpL3_04: %d\n";
const char aPpL305D[] = "  PpL3_05: %d\n";
const char aPpL306D[] = "  PpL3_06: %d\n";
const char aPpL307D[] = "  PpL3_07: %d\n";
const char asc_1256[] = "Assembly Tests:";
const char aAsmL401D[] = "  AsmL4_01: %d\n";
const char aAsmL402D[] = "  AsmL4_02: %d\n";
const char aAsmL403D[] = "  AsmL4_03: %d\n";
const char aAsmL404D[] = "  AsmL4_04: %d\n";
const char aAsmL405D[] = "  AsmL4_05: %d\n";
const char aAsmL406D[] = "  AsmL4_06: %d\n";



/* Function: main @ 0xF0C */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 return 0;
}


/* Function: .term_proc @ 0xF24 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp___libc_start_main @ 0x12088 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x1208C */

/* FAILED to decompile: __imp_printf @ 0x12090 */

/* FAILED to decompile: __imp_mprotect @ 0x12094 */

/* FAILED to decompile: __imp_memcpy @ 0x12098 */

/* FAILED to decompile: __imp___atomic_fetch_add_4 @ 0x1209C */

/* FAILED to decompile: __imp_sysconf @ 0x120A0 */

/* FAILED to decompile: __imp_puts @ 0x120A4 */

/* FAILED to decompile: __imp_mmap @ 0x120A8 */

/* FAILED to decompile: __imp_munmap @ 0x120AC */

/* FAILED to decompile: __imp_abort @ 0x120B0 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x120B8 */

/* Total functions decompiled: 52, failed: 12 */
