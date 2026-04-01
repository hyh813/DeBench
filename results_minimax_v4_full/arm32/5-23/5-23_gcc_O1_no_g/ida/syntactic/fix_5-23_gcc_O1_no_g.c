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
typedef _Bool bool;

/* Memory barrier function pointer type - using __sync_synchronize() for memory barriers */
#define MEMORY_BARRIER() __sync_synchronize()

/* Atomic compare-and-swap helper function */
static inline int __atomic_compare_exchange(int *ptr, int *expected, int desired) {
    return __sync_val_compare_and_swap(ptr, *expected, desired) == *expected;
}

/* Global variable referenced in code */
static int global_var = 0;

/* String literals referenced in code */
static const char asc_11D6C[] = "Testing preprocessing features:\n";
static const char aPpL201D[] = "param_macro_constants(64) = %d\n";
static const char aPpL202D[] = "call_macro_constants() = %d\n";
static const char aPpL203D[] = "param_conditional_compile(32) = %d\n";
static const char aPpL204D[] = "param_multi_branch_compile(57122) = %d\n";
static const char aPpL301D[] = "param_macro_recursion(116) = %d\n";
static const char aPpL302D[] = "param_stringize() = %d\n";
static const char aPpL303D[] = "param_token_paste(60) = %d\n";
static const char aPpL304D[] = "call_variadic_macro() = %d\n";
static const char aPpL305D[] = "call_macro_override() = %d\n";
static const char aPpL306D[] = "call_include_guard() = %d\n";
static const char aPpL307D[] = "call_builtin_macros() = %d\n";
static const char asc_11EF8[] = "Testing asm features:\n";
static const char aAsmL401D[] = "call_asm_basic() = %d\n";
static const char aAsmL402D[] = "call_asm_clobber() = %d\n";
static const char aAsmL403D[] = "call_asm_multi_insn() = %d\n";
static const char aAsmL404D[] = "call_asm_simd() = %d\n";
static const char aAsmL405D[] = "call_asm_atomic() = %d\n";
static const char aAsmL406D[] = "call_asm_privileged() = %d\n";

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm32/5-23/5-23_gcc_O1_no_g
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
int param_macro_constants(int a1)
{
 if ( a1 > 1024 )
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
int param_macro_functions(int a1, int a2)
{
 if ( a1 >= a2 )
 a2 = a1;
 return a2 + a1 * a1;
}


/* Function: call_macro_functions @ 0x105EC */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0x105F4 */
int param_conditional_compile(int a1)
{
 return 3 * a1 + 2;
}


/* Function: call_conditional_compile @ 0x10600 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0x10608 */
int param_multi_branch_compile(int a1)
{
 return 5 * a1 + 57072;
}


/* Function: call_multi_branch_compile @ 0x10618 */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0x10624 */
int param_macro_recursion(int a1)
{
 return a1 + 16;
}


/* Function: call_macro_recursion @ 0x1062C */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0x10634 */
int param_stringize()
{
 return 19;
}


/* Function: call_stringize @ 0x1063C */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0x10644 */
int my_func(int a1)
{
 return 10 * a1;
}


/* Function: param_token_paste @ 0x10650 */
int param_token_paste(int a1)
{
 return a1 + 5 + 10 * a1;
}


/* Function: call_token_paste @ 0x10660 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0x10668 */
int param_variadic_macro(int a1, int a2, int a3)
{
 _printf_chk(1, "LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return a1 + 50;
}


/* Function: call_variadic_macro @ 0x1069C */
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0x106B4 */
int param_macro_override(int a1)
{
 return 3 * a1 + 1;
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
int param_builtin_macros(int a1)
{
 _printf_chk(
 1,
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:03");
 return a1 + 282;
}


/* Function: call_builtin_macros @ 0x10738 */
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0x10748 */
int test_preprocessing_features()
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
 return _printf_chk(1, aPpL307D, v1);
}


/* Function: param_asm_basic @ 0x10848 */
int param_asm_basic(int a1)
{
 return a1 + 10;
}


/* Function: call_asm_basic @ 0x10850 */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0x10858 */
int param_asm_clobber(int a1, int a2)
{
 int v2; // r3
 int v3; // r1
 int result; // r0
 int v5; // t1

 if ( a2 <= 0 )
 return 0;
 v2 = a1 - 4;
 v3 = a1 - 4 + 4 * a2;
 result = 0;
 do
 {
 v5 = *(unsigned int *)(v2 + 4);
 v2 += 4;
 result += v5;
 }
 while ( v2 != v3 );
 return result;
}


/* Function: call_asm_clobber @ 0x10888 */
int call_asm_clobber()
{
 unsigned int v0[5]; // r12
 int v2; // [sp+0h] [bp-20h] BYREF

 v0[0] = 1;
 v0[1] = 2;
 v0[2] = 3;
 v0[3] = 4;
 v0[4] = 5;
 return param_asm_clobber((int)&v2, 5);
}


/* Function: param_asm_multi_insn @ 0x108F0 */
void * param_asm_multi_insn(void *a1, const void *a2, size_t a3)
{
 return memcpy(a1, a2, a3);
}


/* Function: call_asm_multi_insn @ 0x108FC */
int call_asm_multi_insn()
{
 char v1[12]; // [sp+0h] [bp-38h] BYREF
 int v2; // [sp+Ch] [bp-2Ch] BYREF
 int v3; // [sp+10h] [bp-28h]
 int v4; // [sp+14h] [bp-24h]
 int v5; // [sp+18h] [bp-20h]
 int v6; // [sp+1Ch] [bp-1Ch]
 int v7; // [sp+20h] [bp-18h]
 int v8; // [sp+24h] [bp-14h]
 int v9; // [sp+28h] [bp-10h]

 strcpy(v1, "Hello ASM");
 v2 = 0;
 v3 = 0;
 v4 = 0;
 v5 = 0;
 v6 = 0;
 v7 = 0;
 v8 = 0;
 v9 = 0;
 param_asm_multi_insn(&v2, v1, 9u);
 if ( (unsigned char)v2 != 72 )
 return -1;
 if ( (unsigned char)v3 == 111 )
 return 42;
 return -1;
}


/* Function: param_asm_simd @ 0x109AC */
int param_asm_simd(int a1, int a2, int a3)
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


/* Function: param_simd_intrinsics @ 0x109E0 */
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


/* Function: call_asm_simd @ 0x10A14 */
int call_asm_simd()
{
 unsigned int v1[4]; // [sp+4h] [bp-3Ch] BYREF
 unsigned int v2[4]; // [sp+14h] [bp-2Ch] BYREF
 unsigned int v3[4]; // [sp+24h] [bp-1Ch] BYREF

 v1[0] = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v2[0] = 5;
 v2[1] = 6;
 v2[2] = 7;
 v2[3] = 8;
 param_asm_simd((int)v1, (int)v2, (int)v3);
 return v3[0] + v3[1] + v3[2] + v3[3];
}


/* Function: param_asm_atomic @ 0x10AA8 */
int param_asm_atomic(int a1, int a2)
{
 return _sync_fetch_and_add_4((unsigned int *)a1, a2) + a2;
}


/* Function: param_atomic_c11 @ 0x10ABC */
int param_atomic_c11(int a1, int a2)
{
 return _sync_fetch_and_add_4((unsigned int *)a1, a2) + a2;
}


/* Function: call_asm_atomic @ 0x10AD0 */
int call_asm_atomic()
{
 int v0; // r0
 int v2; // [sp+0h] [bp-10h] BYREF

 v2 = 10;
 v0 = param_asm_atomic((int)&v2, 5);
 return v0 + v2;
}


/* Function: param_dynamic_code @ 0x10B2C */
int param_dynamic_code(int a1)
{
 size_t v2; // r5
 void *v3; // r0
 int v4; // r4

 v2 = sysconf(30);
 v3 = mmap(0, v2, 7, 34, -1, 0);
 if ( v3 == (void *)-1 )
 return -1;
 v4 = a1 + 5;
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
int param_clobber_importance(int a1, int a2)
{
 return 2 * (a1 + a2);
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


/* Function: test_asm_features @ 0x10C9C */
int test_asm_features()
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
 return _printf_chk(1, aAsmL406D, v4);
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
 return __sync_fetch_and_add(a1, a2);
}


/* Function: __sync_fetch_and_sub_4 @ 0x10D8C */
int _sync_fetch_and_sub_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_sub(a1, a2);
}


/* Function: __sync_fetch_and_or_4 @ 0x10DC4 */
int _sync_fetch_and_or_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_or(a1, a2);
}


/* Function: __sync_fetch_and_and_4 @ 0x10DFC */
int _sync_fetch_and_and_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_and(a1, a2);
}


/* Function: __sync_fetch_and_xor_4 @ 0x10E34 */
int _sync_fetch_and_xor_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_xor(a1, a2);
}


/* Function: __sync_fetch_and_nand_4 @ 0x10E6C */
int _sync_fetch_and_nand_4(unsigned int *a1, int a2)
{
 return __sync_fetch_and_nand(a1, a2);
}


/* Function: __sync_fetch_and_add_2 @ 0x10EA8 */
int _sync_fetch_and_add_2(int a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 unsigned int v5; // r8
 unsigned int v6; // r4
 unsigned int old_val; // r4
 unsigned int new_val; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (unsigned int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 {
   old_val = *v4;
   v6 = (v5 & old_val) >> v3;
   new_val = (old_val ^ (((v6 + a2) << v3) & v5)) ^ old_val;
 }
 while ( __sync_val_compare_and_swap((int *)v4, old_val, new_val) != old_val );
 return (short)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x10F08 */
int _sync_fetch_and_sub_2(int a1, int a2)
{
 char v3; // r5
 int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * a1) & 0x18;
 v4 = (int *)(a1 & 0xFFFFFFFC);
 v5 = 0xFFFF << v3;
 do
 {
   v6 = ((unsigned int)v5 & *v4) >> v3;
 }
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (short)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x110EC */
int _sync_fetch_and_add_1(int *a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 unsigned int v5; // r8
 unsigned int v6; // r4
 unsigned int old_val; // r4
 unsigned int new_val; // r4

 v3 = (8 * (unsigned int)a1) & 0x18;
 v4 = (unsigned int *)((unsigned int)a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 {
   old_val = *v4;
   v6 = (v5 & old_val) >> v3;
   new_val = (old_val ^ (((v6 + a2) << v3) & v5)) ^ old_val;
 }
 while ( __sync_val_compare_and_swap(v4, old_val, new_val) != old_val );
 return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x11148 */
int _sync_fetch_and_sub_1(unsigned int *a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * (int)a1) & 0x18;
 v4 = (unsigned int *)((int)a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x111A4 */
int _sync_fetch_and_or_1(unsigned int *a1, int a2)
{
 char v3; // r5
 int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * (int)a1) & 0x18;
 v4 = (int *)((int)a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x11200 */
int _sync_fetch_and_and_1(unsigned int *a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * (int)a1) & 0x18;
 v4 = (unsigned int *)((int)a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x1125C */
int _sync_fetch_and_xor_1(unsigned int *a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * (int)a1) & 0x18;
 v4 = (unsigned int *)((int)a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x112B8 */
int _sync_fetch_and_nand_1(unsigned int *a1, int a2)
{
 char v3; // r5
 unsigned int *v4; // r9
 int v5; // r8
 unsigned int v6; // r4

 v3 = (8 * (int)a1) & 0x18;
 v4 = (unsigned int *)((int)a1 & 0xFFFFFFFC);
 v5 = 255 << v3;
 do
 v6 = ((unsigned int)v5 & *v4) >> v3;
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x11318 */
int _sync_add_and_fetch_4(unsigned int *a1, int a2)
{
 return __sync_add_and_fetch(a1, a2);
}


/* Function: __sync_or_and_fetch_4 @ 0x11388 */
int _sync_or_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 | a2;
 while ( __sync_val_compare_and_swap((int *)a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x113C0 */
int _sync_and_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 & a2;
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x113F8 */
int _sync_xor_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r5

 do
 v4 = *a1 ^ a2;
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
 return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11430 */
int _sync_nand_and_fetch_4(unsigned int *a1, int a2)
{
 int v4; // r4

 do
 v4 = ~(*a1 & a2);
 while ( __sync_val_compare_and_swap(a1, *a1, v4) != *a1 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, v6) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
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
 while ( __sync_val_compare_and_swap(v4, *v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4) != *v4 );
 return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x1193C */
int _sync_val_compare_and_swap_4(int *a1, int a2, int a3)
{
 while ( *a1 == a2 )
 {
 if ( !__sync_val_compare_and_swap(a1, a2, a3) )
 return a2;
 }
 return *a1;
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
 if ( !__sync_val_compare_and_swap((int *)v6, (v7 ^ *v6) & v5 ^ *v6, (int *)v6) )
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
 if ( !__sync_val_compare_and_swap(*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
 return a2;
 }
 return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x11A78 */
bool _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
 return __sync_val_compare_and_swap(a2, a3, a1) == 0;
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
 while ( __sync_val_compare_and_swap(a1, v4, a2) );
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
 while ( __sync_val_compare_and_swap(v3, v6, (v5 ^ v6) & v4 ^ v6) );
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
 while ( __sync_val_compare_and_swap(v3, v6, (v5 ^ v6) & v4 ^ v6) );
 return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x11BDC */
int _sync_lock_release_8(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_BARRIER();
 *a1 = 0;
 a1[1] = 0;
 return result;
}


/* Function: __sync_lock_release_4 @ 0x11C00 */
int _sync_lock_release_4(unsigned int *a1)
{
 int result; // r0

 result = MEMORY_BARRIER();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_2 @ 0x11C20 */
int _sync_lock_release_2(unsigned short *a1)
{
 int result; // r0

 result = MEMORY_BARRIER();
 *a1 = 0;
 return result;
}


/* Function: __sync_lock_release_1 @ 0x11C40 */
int _sync_lock_release_1(unsigned char *a1)
{
 int result; // r0

 result = MEMORY_BARRIER();
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
