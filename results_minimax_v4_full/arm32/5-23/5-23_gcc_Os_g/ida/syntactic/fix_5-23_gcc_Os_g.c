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
typedef int bool;

/* String constants from the binary */
const char asc_11CFA[] = "Testing Preprocessing Features:\n";
const char aPpL201D[] = "param_macro_constants(64) = %d\n";
const char aPpL202D[] = "call_macro_constants() = %d\n";
const char aPpL203D[] = "call_macro_functions() = %d\n";
const char aPpL204D[] = "call_multi_branch_compile() = %d\n";
const char aPpL301D[] = "call_macro_recursion() = %d\n";
const char aPpL302D[] = "call_stringize() = %d\n";
const char aPpL303D[] = "call_token_paste() = %d\n";
const char aPpL304D[] = "call_variadic_macro() = %d\n";
const char aPpL305D[] = "call_macro_override() = %d\n";
const char aPpL306D[] = "call_include_guard() = %d\n";
const char aPpL307D[] = "call_builtin_macros() = %d\n";

const char asc_11E78[] = "Testing ASM Features:\n";
const char aAsmL401D[] = "call_asm_basic() = %d\n";
const char aAsmL402D[] = "call_asm_clobber() = %d\n";
const char aAsmL403D[] = "call_asm_multi_insn() = %d\n";
const char aAsmL404D[] = "call_asm_simd() = %d\n";
const char aAsmL405D[] = "call_asm_atomic() = %d\n";
const char aAsmL406D[] = "call_asm_privileged() = %d\n";

/* MEMORY placeholders for atomic operations - using GCC builtins */
#define MEMORY_CAS __sync_val_compare_and_swap
#define MEMORY_SYNC __sync_synchronize

/* Include stdarg for variadic functions */
#include <stdarg.h>

/* Wrapper for _printf_chk (GNU extension) */
int _printf_chk(int flag, const char *format, ...)
{
    va_list args;
    va_start(args, format);
    int result = vprintf(format, args);
    va_end(args);
    return result;
}

/* Stub for call_weak_fn */
int call_weak_fn()
{
    return 0;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_gcc_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10450 */
int init_proc()
{
 return call_weak_fn();
}


/* JUMPOUT macro for IDA Pro - generates indirect jump */
#define JUMPOUT(addr) __builtin_trap()

/* Function: sub_1045C @ 0x1045C */
void sub_1045C()
{
 JUMPOUT(0);
}


/* Function: param_asm_multi_insn_0 @ 0x10488 */
void *param_asm_multi_insn_0(void *dest, const void *src, size_t n)
{
 return memcpy(dest, src, n);
}


/* Function: main @ 0x104F4 */
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



/* Function: param_macro_constants @ 0x10600 */
int param_macro_constants(int size)
{
 if ( size > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0x10610 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x10618 */
int param_macro_functions(int x, int y)
{
 if ( x >= y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0x10630 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x10638 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x10644 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x1064C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x1065C */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x10668 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x10670 */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x10678 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x10680 */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x10688 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x10694 */
int param_token_paste(int x)
{
 return x + 5 + 10 * x;
}


/* Function: call_token_paste @ 0x106A4 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x106AC */
int param_variadic_macro(int x, int y, int z)
{
 _printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x106DC */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x106EC */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x106F8 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x10700 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x10708 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x10710 */
int param_builtin_macros(int x)
{
 _printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:10");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x1076C */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x10774 */
void test_preprocessing_features()
{
 int v0; // r0
 int v1; // r0

 _printf_chk(1, asc_11CFA);
 _printf_chk(1, aPpL201D, 64);
 _printf_chk(1, aPpL202D, 30);
 _printf_chk(1, aPpL203D, 32);
 _printf_chk(1, aPpL204D, 57122);
 _printf_chk(1, aPpL301D, 116);
 _printf_chk(1, aPpL302D, 19);
 _printf_chk(1, aPpL303D, 60);
 v0 = call_variadic_macro();
 _printf_chk(1, aPpL304D, v0);
 _printf_chk(1, aPpL305D, 16);
 _printf_chk(1, aPpL306D, 500);
 v1 = call_builtin_macros();
 _printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0x10874 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x1087C */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x10884 */
int param_asm_clobber(int *arr, int n)
{
 int v2; // r3
 int result; // r0
 int v5; // r12

 v2 = 0;
 result = 0;
 while ( v2 < n )
 {
 v5 = arr[v2++];
 result += v5;
 }
 return result;
}


/* Function: call_asm_clobber @ 0x108A8 */
int call_asm_clobber(int a1, int a2, int a3, int a4)
{
 unsigned int *v4; // r12
 int arr[5]; // [sp+0h] [bp-20h] BYREF

 arr[0] = a1;
 arr[1] = a2;
 arr[2] = a3;
 arr[3] = a4;
 *v4 = 1;
 v4[1] = 2;
 v4[2] = 3;
 v4[3] = 4;
 v4[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: call_asm_multi_insn @ 0x10910 */
int call_asm_multi_insn()
{
 char src[10]; // [sp+0h] [bp-38h] BYREF
 char dst[32]; // [sp+Ch] [bp-2Ch] BYREF

 param_asm_multi_insn_0(src, "Hello ASM", 0xAu);
 memset(dst, 0, sizeof(dst));
 param_asm_multi_insn_0(dst, src, 9u);
 if ( dst[0] != 72 )
 return -1;
 if ( dst[4] == 111 )
 return 42;
 return -1;
}


/* Function: param_asm_simd @ 0x109A8 */
int param_asm_simd(int *a, int *b, int *result)
{
 int i; // r3

 for ( i = 0; i != 4; ++i )
 result[i] = a[i] + b[i];
 return 0;
}


/* Function: param_simd_intrinsics @ 0x109D4 */
// attributes: thunk
int param_simd_intrinsics(int *a, int *b, int *result)
{
 return param_asm_simd(a, b, result);
}


/* Function: call_asm_simd @ 0x109D8 */
int call_asm_simd()
{
 int a[4]; // [sp+4h] [bp-3Ch] BYREF
 int b[4]; // [sp+14h] [bp-2Ch] BYREF
 int result[4]; // [sp+24h] [bp-1Ch] BYREF

 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a, b, result);
 return result[0] + result[1] + result[2] + result[3];
}


/* Function: param_asm_atomic @ 0x10A68 */
int param_asm_atomic(int *counter, int increment)
{
 return _sync_fetch_and_add_4(counter) + increment;
}


/* Function: param_atomic_c11 @ 0x10A7C */
int param_atomic_c11(int *counter, int increment)
{
 return _sync_fetch_and_add_4(counter) + increment;
}


/* Function: call_asm_atomic @ 0x10A90 */
int call_asm_atomic(int a1, int a2, int a3)
{
 int v3; // r0
 int counter[4]; // [sp+0h] [bp-10h] BYREF

 counter[1] = a2;
 counter[2] = a3;
 counter[0] = 10;
 v3 = param_asm_atomic(counter, 5);
 return v3 + counter[0];
}


/* Function: param_dynamic_code @ 0x10AE8 */
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


/* Function: param_memory_protection @ 0x10B40 */
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


/* Function: param_clobber_importance @ 0x10C00 */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x10C0C */
int call_asm_privileged()
{
 int v0; // r4
 int v1; // r0
 bool v2; // zf

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = v0 == 15;
 if ( v0 == 15 )
 v2 = v1 == 42;
 if ( v2 )
 return 77;
 else
 return v0;
}


/* Global variable declaration */
int global_var = 0;

/* Function: param_memory_clobber_demo @ 0x10C34 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0x10C48 */
void test_asm_features()
{
 int v3; // r0
 int v4; // r0
 int v5; // r0
 int v8; // r0
 int v9; // r0
 long long v6; // r0
 int v1; // r2
 int v2; // r3
 int v7; // r2

 _printf_chk(1, asc_11E78);
 _printf_chk(1, aAsmL401D, 15);
 v3 = call_asm_clobber(15, 0, v1, v2);
 _printf_chk(1, aAsmL402D, v3);
 v4 = call_asm_multi_insn();
 _printf_chk(1, aAsmL403D, v4);
 v5 = call_asm_simd();
 _printf_chk(1, aAsmL404D, v5);
 v6 = v5;
 v8 = call_asm_atomic((int)v6, (int)(v6 >> 32), v7);
 _printf_chk(1, aAsmL405D, v8);
 v9 = call_asm_privileged();
 _printf_chk(1, aAsmL406D, v9);
}


/* Function: __sync_fetch_and_add_4 @ 0x10CEC */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( __sync_val_compare_and_swap(a1, v4, v4 + a2) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x10D24 */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CAS(a1, *a1, *a1 - a2) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x10D5C */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CAS(a1, *a1, *a1 | a2) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x10D94 */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CAS(a1, *a1, *a1 & a2) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x10DCC */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CAS(a1, *a1, *a1 ^ a2) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x10E04 */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY_CAS(a1, *a1, ~(*a1 & a2)) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x10E40 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x10EA0 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x10F00 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x10F60 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x10FC0 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11020 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x11084 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x110E0 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x1113C */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11198 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x111F4 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x11250 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x112B0 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY_CAS(a1, *a1, v4) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x112E8 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY_CAS(a1, *a1, v4) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11320 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY_CAS(a1, *a1, v4) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11358 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY_CAS(a1, *a1, v4) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x11390 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY_CAS(a1, *a1, v4) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x113C8 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY_CAS(a1, *a1, v4) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x11404 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x1146C */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((((unsigned int)v5 & *v4) >> v3) - a2) << v3) & v5 ^ *v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x114D4 */
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
 while ( !MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x1153C */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x115A4 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x1160C */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x11678 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x116DC */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x11740 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x117A4 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x11808 */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x1186C */
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
 while ( MEMORY_CAS(v4, *v4, (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x118D4 */
int _sync_val_compare_and_swap_4(unsigned int *a1, int a2, int a3)
{
 while ( *a1 == a2 )
 {
 if ( !MEMORY_CAS(a1, a2, a3) )
 return a2;
 }
 return *a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x11924 */
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
 if ( !MEMORY_CAS(v6, *v6, (v7 ^ *v6) & v5 ^ *v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x1199C */
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
 if ( !MEMORY_CAS(v5, (v7 ^ *v5) & v6 ^ *v5, v7) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x11A10 */
bool _sync_bool_compare_and_swap_4(unsigned int *a1, int a2, int a3)
{
 return MEMORY_CAS(a1, a2, a3) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x11A3C */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x11A58 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x11A80 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY_CAS(a1, v4, a2) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x11AB8 */
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
 while ( MEMORY_CAS(v3, *v3, (v5 ^ *v3) & v4 ^ *v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x11B18 */
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
 while ( MEMORY_CAS(v3, *v3, (v5 ^ *v3) & v4 ^ *v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x11B74 */
int _sync_lock_release_8(unsigned int *a1)
{
 MEMORY_SYNC();
 *a1 = 0;
 a1[1] = 0;
 return 0;
}


/* Function: __sync_lock_release_4 @ 0x11B98 */
int _sync_lock_release_4(unsigned int *a1)
{
 MEMORY_SYNC();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_2 @ 0x11BB8 */
int _sync_lock_release_2(unsigned short *a1)
{
 MEMORY_SYNC();
 *a1 = 0;
 return 0;
}


/* Function: __sync_lock_release_1 @ 0x11BD8 */
int _sync_lock_release_1(unsigned char *a1)
{
 MEMORY_SYNC();
 *a1 = 0;
 return 0;
}


/* Function: .term_proc @ 0x11BF8 */
void term_proc()
{
 ;
}


/* FAILED to decompile: __imp_sysconf @ 0x23054 */

/* FAILED to decompile: __imp_mmap @ 0x23058 */

/* FAILED to decompile: __imp_memset @ 0x2305C */

/* FAILED to decompile: __imp___printf_chk @ 0x23060 */

/* FAILED to decompile: __imp_abort @ 0x23064 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23068 */

/* FAILED to decompile: __imp_mprotect @ 0x2306C */

/* FAILED to decompile: memcpy @ 0x23070 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x23074 */

/* FAILED to decompile: __imp_munmap @ 0x23078 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2307C */

/* Total functions decompiled: 101, failed: 11 */
