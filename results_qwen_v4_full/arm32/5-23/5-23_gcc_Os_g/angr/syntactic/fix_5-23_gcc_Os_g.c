// Angr Decompilation of 5-23_gcc_Os_g
// Platform: ARMEL

#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>


// Global variables for linker
unsigned int global_var = 0;
unsigned int __glibc___stack_chk_guard = 0;

// Helper function for condition calculation
unsigned int armg_calculate_condition(unsigned int cond, unsigned int v1, unsigned int v2, unsigned int v3)
{
 return 1;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_1045c at 0x1045c
extern unsigned int g_23008;

int sub_1045c()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: main at 0x104f4
unsigned int main()
{
 unsigned int v2; // r0
 unsigned int v3; // r1
 unsigned int v4; // r2
 unsigned int v5; // r3
 char v0; // [bp-0x8]
 char v1; // [bp-0x4]

 v2 = test_preprocessing_features();
 test_asm_features(v2, v3, v4, v5, *((int *)&v0), *((int *)&v1));
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10540 at 0x10540
void sub_10540()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x10600
unsigned int param_macro_constants(unsigned int a0)
{
 unsigned int v1; // r0

 if (a0 <= 0x400)
 {
 v1 = 0x200;
 if (!armg_calculate_condition(194, a0, 0x400, 0))
 return v1;
 }
 else if (!armg_calculate_condition(194, v1, 0x400, 0))
 {
 return a0;
 }
 return 64;
}


// Function: call_macro_constants at 0x10610
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x10618
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1

 if (a1 <= a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x10630
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x10638
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x10644
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x1064c
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x1065c
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x10668
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x10670
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x10678
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x10680
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x10688
unsigned int my_func(unsigned int a0)
{
 return 10 * a0;
}


// Function: param_token_paste at 0x10694
int param_token_paste(unsigned int a0)
{
 return a0 + 5 + 10 * a0;
}


// Function: call_token_paste at 0x106a4
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x106ac
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0xc]

 v0 = a1;
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x106dc
unsigned int call_variadic_macro()
{
 unsigned int v0; // r0

 v0 = param_variadic_macro(10, 20, 30);
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x106ec
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x106f8
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x10700
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x10708
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x10710
int param_builtin_macros(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // [bp-0xc]

 v0 = a3;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:10");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x1076c
unsigned int call_builtin_macros(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v0; // r0

 v0 = param_builtin_macros(100, a1, a2, a3);
 return param_builtin_macros(100, a1, a2, a3);
}


// Function: test_preprocessing_features at 0x10774
extern char g_11cfa;
extern char g_11d22;
extern char g_11d3d;
extern char g_11d58;
extern char g_11d73;
extern char g_11d92;
extern char g_11dae;
extern char g_11dd8;
extern char g_11df3;
extern char g_11e0e;
extern char g_11e29;
extern char g_11e45;

int test_preprocessing_features()
{
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r3
 unsigned int v4; // r0
 unsigned int v5; // r0

 __printf_chk(1, 0x11cfa);
 __printf_chk(1, 0x11d22, 64);
 __printf_chk(1, 0x11d3d, 30);
 __printf_chk(1, 0x11d58, 32);
 __printf_chk(1, 0x11d73, 57122);
 __printf_chk(1, 0x11d92, 116);
 __printf_chk(1, 0x11dae, 19);
 __printf_chk(1, 0x11dd8, 60);
 __printf_chk(1, 0x11df3, call_variadic_macro());
 __printf_chk(1, 0x11e0e, 16);
 v4 = call_builtin_macros(__printf_chk(1, 0x11e29, 500), v1, v2, v3);
 v5 = __printf_chk(1, 0x11e45, v4);
 return __printf_chk(1, 0x11e45, v4);
}


// Function: param_asm_basic at 0x10874
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x1087c
unsigned int call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x10884
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // r3
 unsigned int v1; // r0
 unsigned int idx; // r3
 unsigned int v3; // r3

 v0 = 0;
 v1 = 0;
 while (1)
 {
 idx = v0;
 if (a1 > idx)
 goto LABEL_10898;
 return v1;
LABEL_10898:
 v3 = idx + 1;
 v1 += *((int *)(ptr + idx * 4));
 v0 = v3;
 }
}


// Function: call_asm_clobber at 0x108a8
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_clobber(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v8; // lr
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int v12; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = v8;
 v6 = v9;
 v5 = v10;
 v4 = v11;
 v3 = a3;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 v5 = __glibc___stack_chk_guard;
 v0 = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v12 = param_asm_clobber(&v0, 5);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return v12;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_multi_insn at 0x1090c
int param_asm_multi_insn()
{
 void* v0; // r0
 void* v1; // r1
 unsigned int v2; // r2
 unsigned int dst; // r0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x10910
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_multi_insn()
{
 unsigned int v5; // lr
 unsigned int v6; // r0
 unsigned int v7; // r3
 unsigned int v8; // r0
 unsigned int v9; // r3
 char v0; // [bp-0x38]
 unsigned int result; // [bp-0x2c]
 char v2; // [bp-0x28]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 memcpy(&v0, "Hello ASM", 10);
 result = 0;
 memset(&v2, 0, 28);
 v6 = param_asm_multi_insn();
 v7 = (char)result;
 if (v7 != 72)
 {
 v8 = 4294967295;
 if (!((char)armg_calculate_condition(18, v7, 72, 0)))
 goto LABEL_1096c;
 }
 else
 {
 v8 = v6;
 if (!((char)armg_calculate_condition(18, v7, 72, 0)))
 {
LABEL_1096c:
 v9 = v2;
 if (v9 != 111)
 {
 v8 = 4294967295;
 if (!armg_calculate_condition(2, v9, 111, 0))
 goto LABEL_1097a;
LABEL_10979:
 v8 = 42;
 }
else
{
 if (armg_calculate_condition(2, v9, 111, 0))
 goto LABEL_10979;
LABEL_1097a:
 ;
}
 }
 }
 if (!(v3 ^ __glibc___stack_chk_guard))
 return v8;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_simd at 0x109a8
unsigned int param_asm_simd(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int idx; // r3
 unsigned int v2; // lr
 unsigned int v0; // [bp-0x4]

 idx = 0;
 v0 = v2;
 do
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 idx += 1;
 } while (idx != 4);
 return 0;
}


// Function: param_simd_intrinsics at 0x109d4
unsigned int param_simd_intrinsics()
{
 unsigned int v0; // r0
 unsigned int v1; // r1
 unsigned int v2; // r2
 unsigned int v3; // r0

 v3 = param_asm_simd(v0, v1, v2);
 return param_asm_simd(v0, v1, v2);
}


// Function: call_asm_simd at 0x109d8
extern unsigned int __glibc___stack_chk_guard;

int call_asm_simd()
{
 unsigned int result; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 char v8; // [bp-0x1c], Other Possible Types: unsigned int
 unsigned int v9; // [bp-0x18]
 unsigned int v10; // [bp-0x14]
 unsigned int v11; // [bp-0x10]
 unsigned int v12; // [bp-0xc]

 v12 = __glibc___stack_chk_guard;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 param_asm_simd(&result, &v4, &v8);
 if (!(v12 ^ __glibc___stack_chk_guard))
 return v8 + v9 + v10 + v11;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_atomic at 0x10a68
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 return __sync_fetch_and_add_4((unsigned int *)a0, a1) + a1;
}


// Function: param_atomic_c11 at 0x10a7c
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 return __sync_fetch_and_add_4((unsigned int *)a0, a1) + a1;
}


// Function: call_asm_atomic at 0x10a90
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_atomic(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v5; // lr
 unsigned int v6; // r0
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x8]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = a2;
 v2 = a1;
 v1 = a0;
 v2 = __glibc___stack_chk_guard;
 v1 = 10;
 v6 = param_asm_atomic(&v1, 5);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v6 + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: param_dynamic_code at 0x10ae8
unsigned int param_dynamic_code(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 void* ptr; // r0
 unsigned int v2; // r4

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, NULL);
 if (ptr == 0xffffffff)
 {
 if ((char)armg_calculate_condition(1, ptr, 1, 0))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(1, ptr, 1, 0))
 return v2;
 }
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: param_memory_protection at 0x10b40
unsigned int param_memory_protection(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int *ptr; // r4
 unsigned int v2; // r6
 unsigned int v3; // r6

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 3, 34, -1, NULL);
 if (ptr == 0xffffffff)
 {
 if ((char)armg_calculate_condition(1, ptr, 1, 0))
 return 4294967295;
 }
 else
 {
 if ((char)armg_calculate_condition(1, ptr, 1, 0))
 return v3;
 }
 *(ptr) = 42;
 if (mprotect())
 {
 munmap(ptr, v0);
 return 4294967294;
 }
 v2 = *(ptr);
 if (!mprotect(ptr, v0, 3))
 {
 *(ptr) = 100;
 munmap(ptr, v0);
 return v2;
 }
 munmap(ptr, v0);
 return 4294967293;
}


// Function: param_clobber_importance at 0x10c00
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x10c0c
unsigned int call_asm_privileged(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v12; // cc_dep1
 unsigned int v13; // cc_dep2
 unsigned int v14; // cc_ndep
 unsigned int v18; // r0
 unsigned int v4; // r4
 unsigned int v5; // r0
 unsigned int v6; // cc_dep1
 unsigned int v7; // cc_dep2
 unsigned int v8; // cc_ndep
 unsigned int v9; // cc_dep1
 unsigned int v10; // cc_dep2
 unsigned int v11; // cc_ndep
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = param_dynamic_code(10, a1);
 v5 = param_memory_protection(v4, a1);
 if (v4 == 15)
 {
 v9 = (armg_calculate_condition(2, v6, v7, v8) ? v5 : v6);
 v10 = (armg_calculate_condition(2, v6, v7, v8) ? 42 : v7);
 v11 = (armg_calculate_condition(2, v6, v7, v8) ? 0 : v8);
 if (!armg_calculate_condition(18, v9, v10, v11))
 goto LABEL_10c2a;
LABEL_10c29:
 v18 = v4;
 if (!armg_calculate_condition(2, v9, v10, v11))
 return v18;
 }
 else
 {
 v9 = (armg_calculate_condition(2, v12, v13, v14) ? v5 : v12);
 v10 = (armg_calculate_condition(2, v12, v13, v14) ? 42 : v13);
 v11 = (armg_calculate_condition(2, v12, v13, v14) ? 0 : v14);
 if (armg_calculate_condition(18, v9, v10, v11))
 goto LABEL_10c29;
 v18 = v5;
 if (!armg_calculate_condition(2, v9, v10, v11))
 return v18;
LABEL_10c2a:
 ;
 }
 return 77;
}


// Function: param_memory_clobber_demo at 0x10c34
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x10c48
extern char g_11e78;
extern char g_11ea3;
extern char g_11ebf;
extern char g_11edb;
extern char g_11ef7;
extern char g_11f13;
extern char g_11f2f;

int test_asm_features()
{
 unsigned int v0; // r1
 unsigned int v1; // r2
 unsigned int v2; // r3
 unsigned int v5; // r0
 unsigned int v6; // r0
 unsigned int v7; // r0
 unsigned int v8; // r0

 __printf_chk(1, 0x11e78);
 __printf_chk(1, 0x11ebf, call_asm_clobber(__printf_chk(1, 0x11ea3, 15), v0, v1, v2));
 __printf_chk(1, 0x11edb, call_asm_multi_insn());
 v5 = call_asm_simd();
 v6 = call_asm_atomic(__printf_chk(1, 0x11ef7, v5), v0, v1);
 v7 = call_asm_privileged(__printf_chk(1, 0x11f13, v6), v0);
 v8 = __printf_chk(1, 0x11f2f, v7);
 return __printf_chk(1, 0x11f2f, v7);
}


// Function: __sync_fetch_and_add_4 at 0x10cec
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_sub_4 at 0x10d24
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x10d5c
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x10d94
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x10dcc
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x10e04
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x10e40
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x10ea0
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x10f00
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x10f60
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x10fc0
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x11020
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x11084
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x110e0
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x1113c
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x11198
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x111f4
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x11250
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x112b0
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x112e8
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x11320
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x11358
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x11390
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x113c8
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x11404
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_sub_and_fetch_2 at 0x1146c
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_or_and_fetch_2 at 0x114d4
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_and_and_fetch_2 at 0x1153c
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_xor_and_fetch_2 at 0x115a4
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_nand_and_fetch_2 at 0x1160c
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_add_and_fetch_1 at 0x11678
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_sub_and_fetch_1 at 0x116dc
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_or_and_fetch_1 at 0x11740
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_and_and_fetch_1 at 0x117a4
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_xor_and_fetch_1 at 0x11808
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_nand_and_fetch_1 at 0x1186c
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return v1;
}


// Function: __sync_val_compare_and_swap_4 at 0x118d4
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 return *(a0);
}


// Function: __sync_val_compare_and_swap_2 at 0x11924
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x1199c
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return (255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x11a10
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x11a3c
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_bool_compare_and_swap_1 at 0x11a58
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 return 1;
}


// Function: __sync_synchronize at 0x11a74
int __sync_synchronize()
{
 return 0;
}


// Function: __sync_lock_test_and_set_4 at 0x11a80
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x11ab8
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x11b18
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x11b74
void __sync_lock_release_8(unsigned int *ptr)
{
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x11b98
void __sync_lock_release_4(unsigned int *ptr)
{
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x11bb8
void __sync_lock_release_2(unsigned short *ptr)
{
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x11bd8
void __sync_lock_release_1(char *ptr)
{
 *(ptr) = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


