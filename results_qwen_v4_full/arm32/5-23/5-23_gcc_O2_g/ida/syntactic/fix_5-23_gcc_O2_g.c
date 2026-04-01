/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
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
typedef int bool;

/* Stub functions for undefined references */
static int call_weak_fn(void) { return 0; }
static int _printf_chk(int flag, const char *format, ...) { va_list args; va_start(args, format); int ret = vprintf(format, args); va_end(args); return ret; }
static void JUMPOUT(int x) { (void)x; }

/* MEMORY macro for atomic operations - simulates kernel helper */
/* Forward declaration */
static int memory_helper(unsigned int old_val, unsigned int new_val, unsigned int *ptr);
static int memory_helper_noargs(void);

/* Wrapper function for memory operations */
static int memory_wrapper(unsigned int old_val, unsigned int new_val, unsigned int *ptr)
{
 return memory_helper(old_val, new_val, ptr);
}

/* Wrapper function for memory operations with no args */
static int memory_helper_noargs(void)
{
 return 0;
}

/* MEMORY array for atomic operations - indexed by memory address */
/* Using function pointer array to simulate memory-mapped function calls */
static int (*MEMORY[])(int, ...) = {
 [0] = (int (*)(int, ...))memory_wrapper,
 [1] = (int (*)(int, ...))memory_helper_noargs
};

/* Helper to access MEMORY array with large indices */
static int memory_access(unsigned int index, ...)
{
 va_list args;
 int result;
 
 if (index == 0xFFFF0FC0)
 {
  va_start(args, index);
  unsigned int arg1 = va_arg(args, unsigned int);
  unsigned int arg2 = va_arg(args, unsigned int);
  unsigned int *arg3 = va_arg(args, unsigned int *);
  result = memory_wrapper(arg1, arg2, arg3);
  va_end(args);
 }
 else if (index == 0xFFFF0FA0)
 {
  result = memory_helper_noargs();
 }
 else
 {
  result = 0;
 }
 return result;
}

/* Redefine MEMORY to use helper function */
#undef MEMORY
/* Macro to call memory_access with index and variadic arguments */
#define MEMORY_CALL(idx, ...) memory_access(idx, ##__VA_ARGS__)

/* String constants */
static const char *asc_11EC0 = "Testing preprocessing features:\n";
static const char *aPpL201D = "PP_L201: %d\n";
static const char *aPpL202D = "PP_L202: %d\n";
static const char *aPpL203D = "PP_L203: %d\n";
static const char *aPpL204D = "PP_L204: %d\n";
static const char *aPpL301D = "PP_L301: %d\n";
static const char *aPpL302D = "PP_L302: %d\n";
static const char *aPpL303D = "PP_L303: %d\n";
static const char *aPpL304D = "PP_L304: %d\n";
static const char *aPpL305D = "PP_L305: %d\n";
static const char *aPpL306D = "PP_L306: %d\n";
static const char *aPpL307D = "PP_L307: %d\n";
static const char *asc_12040 = "Testing ASM features:\n";
static const char *aAsmL401D = "ASM_L401: %d\n";
static const char *aAsmL402D = "ASM_L402: %d\n";
static const char *aAsmL403D = "ASM_L403: %d\n";
static const char *aAsmL404D = "ASM_L404: %d\n";
static const char *aAsmL405D = "ASM_L405: %d\n";
static const char *aAsmL406D = "ASM_L406: %d\n";

/* Global variable */
int global_var = 0;

/* Memory helper function for atomic operations */
static int memory_helper(unsigned int old_val, unsigned int new_val, unsigned int *ptr)
{
 *ptr = new_val;
 return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_gcc_O2_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1042C */
int init_proc()
{
 return call_weak_fn();
}


/* Function: sub_10438 @ 0x10438 */
void sub_10438()
{
 JUMPOUT(0);
}


/* Function: param_asm_multi_insn_0 @ 0x10464 */
void *param_asm_multi_insn_0(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}


/* Function: main @ 0x104C4 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x105D0 */
int param_macro_constants(int size)
{
 if ( size > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0x105E0 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x105E8 */
int param_macro_functions(int x, int y)
{
 if ( x >= y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0x10600 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x10608 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x10614 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1061C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1062C */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x10638 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x10640 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x10648 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x10650 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x10658 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x10664 */
int param_token_paste(int x)
{
 return x + 5 + 10 * x;
}


/* Function: call_token_paste @ 0x10674 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x1067C */
int param_variadic_macro(int x, int y, int z)
{
 _printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x106B0 */
int call_variadic_macro()
{
 _printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0x106E4 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x106F0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x106F8 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x10700 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x10708 */
int param_builtin_macros(int x)
{
 _printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:04");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x10768 */
int call_builtin_macros()
{
 _printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:04");
 return 382;
}


/* Function: test_preprocessing_features @ 0x107C4 */
void test_preprocessing_features()
{
 _printf_chk(1, asc_11EC0);
 _printf_chk(1, aPpL201D, 64);
 _printf_chk(1, aPpL202D, 30);
 _printf_chk(1, aPpL203D, 32);
 _printf_chk(1, aPpL204D, 57122);
 _printf_chk(1, aPpL301D, 116);
 _printf_chk(1, aPpL302D, 19);
 _printf_chk(1, aPpL303D, 60);
 _printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 _printf_chk(1, aPpL304D, 60);
 _printf_chk(1, aPpL305D, 16);
 _printf_chk(1, aPpL306D, 500);
 _printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:04");
 _printf_chk(1, aPpL307D, 382);
}


/* Function: param_asm_basic @ 0x10928 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x10930 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x10938 */
int param_asm_clobber(int *arr, int n)
{
 int result; // r0
 int *v4; // r3
 int *v5; // r1
 int v6; // t1

 result = 0;
 if ( n > 0 )
 {
 v4 = arr - 1;
 v5 = &v4[n];
 do
 {
 v6 = v4[1];
 ++v4;
 result += v6;
 }
 while ( v4 != v5 );
 }
 return result;
}


/* Function: call_asm_clobber @ 0x10964 */
int call_asm_clobber()
{
 int v0; // r12
 int *v1; // r3
 int v2; // t1
 int arr[5]; // [sp+0h] [bp-20h] BYREF
 int v5; // [sp+14h] [bp-Ch] BYREF

 v0 = 0;
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 v1 = arr;
 arr[4] = 5;
 do
 {
 v2 = *v1++;
 v0 += v2;
 }
 while ( v1 != &v5 );
 return v0;
}


/* Function: call_asm_multi_insn @ 0x109E4 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0x109EC */
int param_asm_simd(int *a, int *b, int *result)
{
 int *v3; // r12
 int *v4; // r1
 int *v5; // r2
 int *v6; // r0
 int v7; // r3
 int v8; // t1
 int v9; // t1

 v3 = a - 1;
 v4 = b - 1;
 v5 = result - 1;
 v6 = a + 3;
 do
 {
 v8 = v3[1];
 ++v3;
 v7 = v8;
 v9 = v4[1];
 ++v4;
 v5[1] = v7 + v9;
 ++v5;
 }
 while ( v3 != v6 );
 return 0;
}


/* Function: param_simd_intrinsics @ 0x10A20 */
int param_simd_intrinsics(int a1, int a2, int a3)
{
 int v3; // r12
 int v4; // r1
 int v5; // r2
 int v6; // r0
 int v7; // r3
 int v8; // t1
 int v9; // t1

 v3 = a1 - 4;
 v4 = a2 - 4;
 v5 = a3 - 4;
 v6 = a1 + 12;
 do
 {
 v8 = *(unsigned int *)(v3 + 4);
 v3 += 4;
 v7 = v8;
 v9 = *(unsigned int *)(v4 + 4);
 v4 += 4;
 *(unsigned int *)(v5 + 4) = v7 + v9;
 v5 += 4;
 }
 while ( v3 != v6 );
 return 0;
}


/* Function: call_asm_simd @ 0x10A54 */
int call_asm_simd()
{
 int *v0; // r5
 int *v1; // r12
 int *v2; // r4
 int v3; // r3
 int v4; // t1
 int v5; // t1
 int a[4]; // [sp+4h] [bp-44h] BYREF
 int b[4]; // [sp+14h] [bp-34h] BYREF
 int result[4]; // [sp+24h] [bp-24h] BYREF

 v0 = b;
 v1 = a;
 v2 = result;
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 do
 {
 v4 = *v1++;
 v3 = v4;
 v5 = *v0++;
 *v2++ = v3 + v5;
 }
 while ( v1 != b );
 return result[0] + result[1] + result[2] + result[3];
}


/* Function: param_asm_atomic @ 0x10AEC */
int param_asm_atomic(int *counter, int increment)
{
 return _sync_fetch_and_add_4(counter) + increment;
}


/* Function: param_atomic_c11 @ 0x10B00 */
int param_atomic_c11(int *counter, int increment)
{
 return _sync_fetch_and_add_4(counter) + increment;
}


/* Function: call_asm_atomic @ 0x10B14 */
int call_asm_atomic()
{
 int v0; // r0
 int counter; // [sp+0h] [bp-10h] BYREF

 counter = 10;
 v0 = _sync_fetch_and_add_4(&counter);
 return v0 + 5 + counter;
}


/* Function: param_dynamic_code @ 0x10B74 */
int param_dynamic_code(int x)
{
 size_t v2; // r5
 void *v3; // r0
 int v4; // r4

 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 == (void *)-1 )
 return -1;
 v4 = x + 5;
 munmap(v3, v2);
 return v4;
}


/* Function: param_memory_protection @ 0x10BD4 */
int param_memory_protection()
{
 size_t v0; // r5
 int *v1; // r0
 int *v2; // r4
 int v3; // r6

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 v2 = v1;
 if ( v1 == (int *)-1 )
 return -1;
 *v1 = 42;
 if ( mprotect(v1, v0, 1) )
 {
 munmap(v2, v0);
 return -2;
 }
 else
 {
 v3 = *v2;
 if ( mprotect(v2, v0, 3) )
 {
 munmap(v2, v0);
 return -3;
 }
 else
 {
 *v2 = 100;
 munmap(v2, v0);
 }
 }
 return v3;
}


/* Function: param_clobber_importance @ 0x10CA0 */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x10CAC */
int call_asm_privileged()
{
 size_t v0; // r5
 void *v1; // r0

 v0 = sysconf(30);
 v1 = mmap(0, v0, 7, 34, -1, 0);
 if ( v1 == (void *)-1 )
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


/* Function: param_memory_clobber_demo @ 0x10D18 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x10D2C */
void test_asm_features(int a1, int a2, int a3)
{
 int v3; // r12
 int *v4; // r3
 int v5; // t1
 int v6; // r0
 int v7; // r0
 size_t v8; // r5
 void *v9; // r0
 int v10; // r2
 int v11; // [sp+Ch] [bp-2Ch] BYREF
 unsigned int v12[5]; // [sp+10h] [bp-28h] BYREF
 int v13; // [sp+24h] [bp-14h] BYREF

 _printf_chk(1, asc_12040, a3, 0);
 _printf_chk(1, aAsmL401D, 15);
 v3 = 0;
 v12[0] = 1;
 v12[1] = 2;
 v12[2] = 3;
 v12[3] = 4;
 v4 = v12;
 v12[4] = 5;
 do
 {
 v5 = *v4++;
 v3 += v5;
 }
 while ( v4 != &v13 );
 _printf_chk(1, aAsmL402D, v3);
 _printf_chk(1, aAsmL403D, 42);
 v6 = call_asm_simd();
 _printf_chk(1, aAsmL404D, v6);
 v11 = 10;
 v7 = _sync_fetch_and_add_4(&v11);
 _printf_chk(1, aAsmL405D, v7 + 5 + v11);
 v8 = sysconf(30);
 v9 = mmap(0, v8, 7, 34, -1, 0);
 if ( v9 == (void *)-1 )
 {
 param_memory_protection();
 v10 = -1;
 }
 else
 {
 munmap(v9, v8);
 if ( param_memory_protection() == 42 )
 v10 = 77;
 else
 v10 = 15;
 }
 _printf_chk(1, aAsmL406D, v10, 0);
}


/* Function: __sync_fetch_and_add_4 @ 0x10EA8 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x10EE0 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x10F18 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x10F50 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x10F88 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x10FC0 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x10FFC */
int _sync_fetch_and_add_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x1105C */
int _sync_fetch_and_sub_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x110BC */
int _sync_fetch_and_or_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x1111C */
int _sync_fetch_and_and_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x1117C */
int _sync_fetch_and_xor_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x111DC */
int _sync_fetch_and_nand_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11240 */
int _sync_fetch_and_add_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x1129C */
int _sync_fetch_and_sub_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x112F8 */
int _sync_fetch_and_or_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11354 */
int _sync_fetch_and_and_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x113B0 */
int _sync_fetch_and_xor_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x1140C */
int _sync_fetch_and_nand_1(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x1146C */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x114A4 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x114DC */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11514 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x1154C */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11584 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x115C0 */
int _sync_add_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x11628 */
int _sync_sub_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x11690 */
int _sync_or_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x116F8 */
int _sync_and_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x11760 */
int _sync_xor_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x117C8 */
int _sync_nand_and_fetch_2(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x11834 */
int _sync_add_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x11898 */
int _sync_sub_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x118FC */
int _sync_or_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x11960 */
int _sync_and_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x119C4 */
int _sync_xor_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x11A28 */
int _sync_nand_and_fetch_1(int a1, int a2)
{
 char v3; // r8
 unsigned int *v4; // r9
 int v5; // r5
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
 while ( MEMORY_CALL(0xFFFF0FC0) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x11A90 */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY_CALL(0xFFFF0FC0, a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x11AE0 */
int _sync_val_compare_and_swap_2(int a1, int a2, int a3)
{
 char v4; // r5
 int v5; // r10
 unsigned int *v6; // r4
 int v7; // r9
 int v8; // r7
 unsigned int v9; // r3

 v4 = (8 * a1) & 0x18;
 v5 = 0xFFFF << v4;
 v6 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v7 = a3 << v4;
 v8 = (unsigned short)a2;
 while ( 1 )
 {
 v9 = ((unsigned int)v5 & *v6) >> v4;
 if ( v9 != v8 )
 break;
 if ( !MEMORY_CALL(0xFFFF0FC0, *v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x11B58 */
int _sync_val_compare_and_swap_1(int a1, int a2, int a3)
{
 char v4; // r5
 unsigned int *v5; // r4
 int v6; // r7
 int v7; // r9
 int v8; // r10
 unsigned int v9; // r3

 v4 = (8 * a1) & 0x18;
 v5 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v6 = 255 << v4;
 v7 = a3 << v4;
 v8 = (unsigned char)a2;
 while ( 1 )
 {
 v9 = ((unsigned int)v6 & *v5) >> v4;
 if ( v9 != v8 )
 break;
 if ( !MEMORY_CALL(0xFFFF0FC0, *v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x11BCC */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY_CALL(0xFFFF0FC0, a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x11BF8 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x11C14 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x11C3C */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY_CALL(0xFFFF0FC0, *a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x11C74 */
int _sync_lock_test_and_set_2(int a1, int a2)
{
 char v2; // r9
 unsigned int *v3; // r5
 int v4; // r6
 int v5; // r7
 unsigned int v6; // r4

 v2 = (8 * a1) & 0x18;
 v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v4 = 0xFFFF << v2;
 v5 = a2 << v2;
 do
 v6 = *v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x11CD4 */
int _sync_lock_test_and_set_1(int a1, int a2)
{
 char v2; // r9
 unsigned int *v3; // r5
 int v4; // r6
 int v5; // r7
 unsigned int v6; // r4

 v2 = (8 * a1) & 0x18;
 v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v4 = 255 << v2;
 v5 = a2 << v2;
 do
 v6 = *v3;
 while ( MEMORY_CALL(0xFFFF0FC0, *v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x11D30 */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_CALL(0xFFFF0FA0);
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x11D54 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_CALL(0xFFFF0FA0);
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x11D74 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY_CALL(0xFFFF0FA0);
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x11D94 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY_CALL(0xFFFF0FA0);
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x11DB4 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_sysconf @ 0x23050 */

/* FAILED to decompile: __imp_mmap @ 0x23054 */

/* FAILED to decompile: __imp___printf_chk @ 0x23058 */

/* FAILED to decompile: __imp_abort @ 0x2305C */

/* FAILED to decompile: __imp___libc_start_main @ 0x23060 */

/* FAILED to decompile: __imp_mprotect @ 0x23064 */

/* FAILED to decompile: memcpy @ 0x23068 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2306C */

/* FAILED to decompile: __imp_munmap @ 0x23070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23074 */

/* Total functions decompiled: 101, failed: 10 */
