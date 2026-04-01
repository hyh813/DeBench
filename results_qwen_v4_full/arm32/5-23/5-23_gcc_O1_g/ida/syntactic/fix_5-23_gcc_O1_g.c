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
#define true 1
#define false 0

/* MEMORY macro for atomic operations */
typedef int (*memory_op_func)(int, int, void*);
memory_op_func MEMORY[0x100000];
int memory_op(int old_val, int new_val, void *ptr);
int global_var = 0;

/* Missing function declarations */
int call_weak_fn(void);
int _printf_chk(int flag, const char *format, ...);

/* Function implementations for missing symbols */
int call_weak_fn(void)
{
 return 0;
}

int _printf_chk(int flag, const char *format, ...)
{
 return 0;
}

/* JUMPOUT macro */
#define JUMPOUT(x) return


/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_gcc_O1_g
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



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x105BC */
int param_macro_constants(int size)
{
 if ( size > 1024 )
 return 64;
 else
 return 512;
}


/* Function: call_macro_constants @ 0x105CC */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x105D4 */
int param_macro_functions(int x, int y)
{
 if ( x >= y )
 y = x;
 return y + x * x;
}


/* Function: call_macro_functions @ 0x105EC */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x105F4 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0x10600 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x10608 */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0x10618 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x10624 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0x1062C */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x10634 */
int param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0x1063C */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x10644 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0x10650 */
int param_token_paste(int x)
{
 return x + 5 + 10 * x;
}


/* Function: call_token_paste @ 0x10660 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x10668 */
int param_variadic_macro(int x, int y, int z)
{
 _printf_chk(1, "LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0x1069C */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x106B4 */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0x106C0 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0x106C8 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0x106D0 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0x106D8 */
int param_builtin_macros(int x)
{
 _printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:02");
 return x + 282;
}


/* Function: call_builtin_macros @ 0x10738 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* String constants */
const char *asc_11D6C = "=== Preprocessing Features Test ===\n";
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

/* Function: test_preprocessing_features @ 0x10748 */
void test_preprocessing_features()
{
 int v0; // r0
 int v1; // r0

 _printf_chk(1, asc_11D6C);
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


/* Function: param_asm_basic @ 0x10848 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0x10850 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x10858 */
int param_asm_clobber(int *arr, int n)
{
 int *v2; // r3
 int *v3; // r1
 int result; // r0
 int v5; // t1

 if ( n <= 0 )
 return 0;
 v2 = arr - 1;
 v3 = &arr[n - 1];
 result = 0;
 do
 {
 v5 = v2[1];
 ++v2;
 result += v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: call_asm_clobber @ 0x10888 */
int call_asm_clobber()
{
 unsigned int *v0; // r12
 int arr[5]; // [sp+0h] [bp-20h] BYREF

 *v0 = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 return param_asm_clobber(arr, 5);
}


/* Function: param_asm_multi_insn @ 0x108F0 */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0x108FC */
int call_asm_multi_insn()
{
 char src[12]; // [sp+0h] [bp-38h] BYREF
 char dst[32]; // [sp+Ch] [bp-2Ch] BYREF

 strcpy(src, "Hello ASM");
 memset(dst, 0, sizeof(dst));
 param_asm_multi_insn(dst, src, 9u);
 if ( dst[0] != 72 )
 return -1;
 if ( dst[4] == 111 )
 return 42;
 return -1;
}


/* Function: param_asm_simd @ 0x109AC */
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


/* Function: param_simd_intrinsics @ 0x109E0 */
int param_simd_intrinsics(int *a, int *b, int *result)
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


/* Function: call_asm_simd @ 0x10A14 */
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


/* Function: param_asm_atomic @ 0x10AA8 */
int param_asm_atomic(int *counter, int increment)
{
 return _sync_fetch_and_add_4(counter) + increment;
}


/* Function: param_atomic_c11 @ 0x10ABC */
int param_atomic_c11(int *counter, int increment)
{
 return _sync_fetch_and_add_4(counter) + increment;
}


/* Function: call_asm_atomic @ 0x10AD0 */
int call_asm_atomic()
{
 int v0; // r0
 int counter; // [sp+0h] [bp-10h] BYREF

 counter = 10;
 v0 = param_asm_atomic(&counter, 5);
 return v0 + counter;
}


/* Function: param_dynamic_code @ 0x10B2C */
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


/* Function: param_memory_protection @ 0x10B8C */
int param_memory_protection()
{
 size_t v0; // r5
 int *v1; // r0
 int *v2; // r4
 int v3; // r6

 v0 = sysconf(30);
 v1 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v1 == (int *)-1 )
 return -1;
 v2 = v1;
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


/* Function: param_clobber_importance @ 0x10C54 */
int param_clobber_importance(int a, int b)
{
 return 2 * (a + b);
}


/* Function: call_asm_privileged @ 0x10C60 */
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


/* Function: param_memory_clobber_demo @ 0x10C88 */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* String constants for ASM tests */
const char *asc_11EF8 = "=== ASM Features Test ===\n";
const char *aAsmL401D = "AsmL401: %d\n";
const char *aAsmL402D = "AsmL402: %d\n";
const char *aAsmL403D = "AsmL403: %d\n";
const char *aAsmL404D = "AsmL404: %d\n";
const char *aAsmL405D = "AsmL405: %d\n";
const char *aAsmL406D = "AsmL406: %d\n";

/* Function: test_asm_features @ 0x10C9C */
void test_asm_features()
{
 int v0; // r0
 int v1; // r0
 int v2; // r0
 int v3; // r0
 int v4; // r0

 _printf_chk(1, asc_11EF8);
 _printf_chk(1, aAsmL401D, 15);
 v0 = call_asm_clobber();
 _printf_chk(1, aAsmL402D, v0);
 v1 = call_asm_multi_insn();
 _printf_chk(1, aAsmL403D, v1);
 v2 = call_asm_simd();
 _printf_chk(1, aAsmL404D, v2);
 v3 = call_asm_atomic();
 _printf_chk(1, aAsmL405D, v3);
 v4 = call_asm_privileged();
 _printf_chk(1, aAsmL406D, v4);
}


/* Function: main @ 0x10D40 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: __sync_fetch_and_add_4 @ 0x10D54 */
int _sync_fetch_and_add_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x10D8C */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x10DC4 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x10DFC */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x10E34 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
 return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x10E6C */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
 return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x10EA8 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x10F08 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x10F68 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x10FC8 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x11028 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x11088 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x110EC */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11148 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x111A4 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11200 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x1125C */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x112B8 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11318 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 + a2;
 while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
 return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11350 */
int _sync_sub_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 - a2;
 while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
 return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11388 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x113C0 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x113F8 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11430 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( MEMORY[0xFFFF0FC0](*a1, v4, a1) );
 return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x1146C */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x114D4 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x1153C */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x115A4 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x1160C */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x11674 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (short)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x116E0 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x11744 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x117A8 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x1180C */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x11870 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x118D4 */
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
 while ( MEMORY[0xFFFF0FC0](*v4, v6, v4) );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x1193C */
int _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
 while ( *(unsigned int *)a1 == a2 )
 {
 if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
 return a2;
 }
 return *(unsigned int *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x1198C */
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
 if ( !MEMORY[0xFFFF0FC0](*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
 return a2;
 }
 return (short)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x11A04 */
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
 if ( !MEMORY[0xFFFF0FC0](*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x11A78 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x11AA4 */
bool _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x11AC0 */
bool _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
 return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x11AE8 */
int _sync_lock_test_and_set_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1;
 while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
 return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x11B20 */
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
 while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (short)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x11B80 */
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
 while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x11BDC */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0](0, 0, a1);
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x11C00 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0](0, 0, a1);
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x11C20 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0](0, 0, a1);
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x11C40 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY[0xFFFF0FA0](0, 0, a1);
 *a1 = 0;
 return result;
}


/* Function: .term_proc @ 0x11C60 */
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

/* FAILED to decompile: __imp_memcpy @ 0x23068 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x2306C */

/* FAILED to decompile: __imp_munmap @ 0x23070 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23074 */

/* Total functions decompiled: 101, failed: 10 */
