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

/* Global variables referenced in code */
unsigned int dword_11A0[4] = {1, 2, 3, 4};
unsigned int dword_11B0[4] = {5, 6, 7, 8};
int global_var = 0;
char asc_1176[] = "ASM Testing";
const char *aAsmL401D = "ASM Test 401: %d\n";
const char *aAsmL402D = "ASM Test 402: %d\n";
const char *aAsmL403D = "ASM Test 403: %d\n";
const char *aAsmL404D = "ASM Test 404: %d\n";
const char *aAsmL405D = "ASM Test 405: %d\n";
const char *aAsmL406D = "ASM Test 406: %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_clang_Os_no_g
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
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn */
__attribute__((weak)) int call_weak_fn()
{
 return 0;
}

/* Atomic fetch add - wrapper for GCC built-in */
static inline int _atomic_fetch_add_4(int *ptr, int val, int memmodel)
{
 return __atomic_fetch_add(ptr, val, memmodel);
}




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x6F8 */
int param_macro_constants(int a1)
{
 int v1; // r1

 v1 = 512;
 if ( a1 > 1024 )
 return 64;
 return v1;
}


/* Function: call_macro_constants @ 0x70C */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x714 */
int param_macro_functions(int a1, int a2)
{
 if ( a1 > a2 )
 a2 = a1;
 return a2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x728 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x730 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x73C */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x744 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x754 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x760 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x768 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x770 */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x778 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x780 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x78C */
int param_token_paste(int a1)
{
 return 11 * a1 + 5;
}


/* Function: call_token_paste @ 0x79C */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x7A4 */
int param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x7D4 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x800 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
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
int param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:24");
 return a1 + 282;
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
 "03:01:24");
 return 382;
}


/* Function: test_preprocessing_features @ 0x900 */
int test_preprocessing_features()
{
 puts("Preprocessing Tests");
 printf("Preprocessing Test 201: %d\n", 64);
 printf("Preprocessing Test 202: %d\n", 30);
 printf("Preprocessing Test 203: %d\n", 32);
 printf("Preprocessing Test 204: %d\n", 57122);
 printf("Preprocessing Test 301: %d\n", 116);
 printf("Preprocessing Test 302: %d\n", 19);
 printf("Preprocessing Test 303: %d\n", 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf("Preprocessing Test 304: %d\n", 60);
 printf("Preprocessing Test 305: %d\n", 16);
 printf("Preprocessing Test 306: %d\n", 500);
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:24");
 return printf("Preprocessing Test 307: %d\n", 382);
}


/* Function: param_asm_basic @ 0xA70 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0xA78 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xA80 */
int param_asm_clobber(int *a1, int a2)
{
 int result; // r0
 int v4; // t1

 if ( a2 < 1 )
 return 0;
 result = 0;
 do
 {
 v4 = *a1++;
 --a2;
 result += v4;
 }
 while ( a2 );
 return result;
}


/* Function: call_asm_clobber @ 0xAAC */
int call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xAB4 */
// attributes: thunk
void *param_asm_multi_insn(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}


/* Function: call_asm_multi_insn @ 0xAB8 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xAC0 */
int param_asm_simd(int a1, int a2, int a3)
{
 int i; // lr

 for ( i = 0; i != 4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a2 + 4 * i) + *(unsigned int *)(a1 + 4 * i);
 return 0;
}


/* Function: param_simd_intrinsics @ 0xAF0 */
int param_simd_intrinsics(int a1, int a2, int a3)
{
 int i; // lr

 for ( i = 0; i != 4; ++i )
 *(unsigned int *)(a3 + 4 * i) = *(unsigned int *)(a2 + 4 * i) + *(unsigned int *)(a1 + 4 * i);
 return 0;
}


/* Function: call_asm_simd @ 0xB20 */
int call_asm_simd()
{
 int i; // r0
 unsigned int v2[6]; // [sp+0h] [bp-18h]

 for ( i = 0; i != 4; ++i )
 v2[i] = dword_11B0[i] + dword_11A0[i];
 return v2[1] + v2[0] + v2[2] + v2[3];
}


/* Function: param_asm_atomic @ 0xB80 */
int param_asm_atomic(int a1, int a2)
{
 return _atomic_fetch_add_4(a1, a2, 5) + a2;
}


/* Function: param_atomic_c11 @ 0xB9C */
int param_atomic_c11(int a1, int a2)
{
 return _atomic_fetch_add_4(a1, a2, 5) + a2;
}


/* Function: call_asm_atomic @ 0xBB8 */
int call_asm_atomic()
{
 int add_4; // r0
 int v2; // [sp+4h] [bp-Ch] BYREF

 v2 = 10;
 add_4 = _atomic_fetch_add_4(&v2, 5, 5);
 return add_4 + v2 + 5;
}


/* Function: param_dynamic_code @ 0xBF0 */
int param_dynamic_code(int a1)
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
 return a1 + 5;
 }
 return v3;
}


/* Function: param_memory_protection @ 0xC50 */
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
 v1 = v4;
 *v3 = 100;
 }
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0xCFC */
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a2 + a1);
}


/* Function: call_asm_privileged @ 0xD08 */
int call_asm_privileged()
{
 int v0; // r4

 v0 = param_dynamic_code(10);
 if ( !(v0 ^ 0xF | param_memory_protection() ^ 0x2A) )
 return 77;
 return v0;
}


/* Function: param_memory_clobber_demo @ 0xD38 */
char *param_memory_clobber_demo()
{
 return (char *)global_var + 50;
}


/* Function: test_asm_features @ 0xD4C */
int test_asm_features()
{
 int v0; // r0
 int add_4; // r0
 int v2; // r4
 int v4; // [sp+4h] [bp-14h] BYREF

 puts(asc_1176);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 v0 = call_asm_simd();
 printf(aAsmL404D, v0);
 v4 = 10;
 add_4 = _atomic_fetch_add_4(&v4, 5, 5);
 printf(aAsmL405D, add_4 + v4 + 5);
 v2 = param_dynamic_code(10);
 if ( !(v2 ^ 0xF | param_memory_protection() ^ 0x2A) )
 v2 = 77;
 return printf(aAsmL406D, v2);
}


/* Function: main @ 0xE2C */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: .term_proc @ 0xE44 */
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
