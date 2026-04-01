// Angr Decompilation of 5-23_gcc_O1_g
// Platform: ARMEL

#include <stddef.h>

// Define missing symbols
unsigned int __glibc___stack_chk_guard = 0;
unsigned int global_var = 0;

int armg_calculate_condition(unsigned int cond, unsigned int arg1, unsigned int arg2, unsigned int arg3)
{
 return 0;
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_10438 at 0x10438
extern unsigned int g_23008;

int sub_10438()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_104fc at 0x104fc
void sub_104fc()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x105bc
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


// Function: call_macro_constants at 0x105cc
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x105d4
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1

 if (a1 <= a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x105ec
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x105f4
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x10600
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x10608
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x10618
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x10624
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x1062c
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x10634
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x1063c
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x10644
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x10650
int param_token_paste(unsigned int a0)
{
 return a0 + 5 + a0 * 10;
}


// Function: call_token_paste at 0x10660
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x10668
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x1069c
unsigned int call_variadic_macro()
{
 unsigned int v0; // r0

 v0 = param_variadic_macro(10, 20, 30);
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x106b4
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x106c0
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x106c8
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x106d0
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x106d8
int param_builtin_macros(unsigned int a0)
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:02");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x10738
unsigned int call_builtin_macros()
{
 unsigned int v0; // r0

 v0 = param_builtin_macros(100);
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x10748
extern char g_11d6c;
extern char g_11d94;
extern char g_11db0;
extern char g_11dcc;
extern char g_11de8;
extern char g_11e08;
extern char g_11e24;
extern char g_11e50;
extern char g_11e6c;
extern char g_11e88;
extern char g_11ea4;
extern char g_11ec0;

int test_preprocessing_features()
{
 unsigned int v1; // r0
 unsigned int v2; // r0

 __printf_chk(1, 0x11d6c);
 __printf_chk(1, 0x11d94, 64);
 __printf_chk(1, 0x11db0, 30);
 __printf_chk(1, 0x11dcc, 32);
 __printf_chk(1, 0x11de8, 57122);
 __printf_chk(1, 0x11e08, 116);
 __printf_chk(1, 0x11e24, 19);
 __printf_chk(1, 0x11e50, 60);
 __printf_chk(1, 0x11e6c, call_variadic_macro());
 __printf_chk(1, 0x11e88, 16);
 __printf_chk(1, 0x11ea4, 500);
 v1 = call_builtin_macros();
 v2 = __printf_chk(1, 0x11ec0, v1);
 return __printf_chk(1, 0x11ec0, v1);
}


// Function: param_asm_basic at 0x10848
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x10850
unsigned int call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x10858
unsigned int param_asm_clobber(unsigned int *a0, unsigned int a1)
{
 unsigned int *v0; // r3
 unsigned int v1; // r0
 unsigned int *i; // r3
 unsigned int v3; // r0
 unsigned int *ptr; // r3
 unsigned int *v5; // r3
 unsigned int v6; // r0

 if (a1 <= 0)
 return 0;
 v0 = a0 + 1;
 v1 = 0;
 i = v0;
 do
 {
 v3 = v1;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v1 = v6;
 } while (i != &v0[a1]);
 return v3 + ptr[1];
}


// Function: call_asm_clobber at 0x10888
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_clobber()
{
 unsigned int v7; // lr
 unsigned int v8; // r0
 unsigned int result[1]; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]
 unsigned int v6; // [bp-0x4]

 v6 = v7;
 v5 = __glibc___stack_chk_guard;
 *(unsigned int *)result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v8 = param_asm_clobber(&result, 5);
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v8;
}


// Function: param_asm_multi_insn at 0x108f0
int param_asm_multi_insn(void* a0, void* a1, unsigned int a2)
{
 unsigned int dst; // r0

 dst = memcpy(a0, a1, a2);
 return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x108fc
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_multi_insn()
{
 unsigned int v5; // lr
 unsigned int v6; // r0
 unsigned int v7; // r3
 char v0; // [bp-0x38]
 char v1; // [bp-0x2c]
 char v2; // [bp-0x28]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x4]

 v4 = v5;
 v3 = __glibc___stack_chk_guard;
 strncpy(&v0, "Hello ASM", 9);
 memset(&v1, 0, 32);
 v6 = param_asm_multi_insn(&v1, &v0, 9);
 if (v1 == 72)
 {
 v7 = v2;
 if (v7 != 111)
 {
 v6 = 4294967295;
 if (!armg_calculate_condition(2, v7, 111, 0))
 goto LABEL_10976;
LABEL_10975:
 v6 = 42;
 }
 else
 {
  if (armg_calculate_condition(2, v7, 111, 0))
   goto LABEL_10975;
LABEL_10976:
  ;
 }
 }
 else
 {
 v6 = 4294967295;
 }
 if ((v3 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: param_asm_simd at 0x109ac
unsigned int param_asm_simd(unsigned int *a0, unsigned int *a1, unsigned int *a2)
{
 unsigned int v1; // lr
 unsigned int *index; // r12
 unsigned int *pos; // r1
 unsigned int *ptr; // r2
 unsigned int *v5; // r12
 unsigned int *v6; // r1
 unsigned int *v7; // r2
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 index = a0 + 1;
 pos = a1 + 1;
 ptr = a2 + 1;
 do
 {
 v5 = index + 1;
 v6 = pos + 1;
 v7 = ptr + 1;
 ptr[1] = index[1] + pos[1];
 index = v5;
 pos = v6;
 ptr = v7;
 } while (index != a0 + 3);
 return 0;
}


// Function: param_simd_intrinsics at 0x109e0
unsigned int param_simd_intrinsics(unsigned int *a0, unsigned int *a1, unsigned int *a2)
{
 unsigned int v1; // lr
 unsigned int *index; // r12
 unsigned int *pos; // r1
 unsigned int *ptr; // r2
 unsigned int *v5; // r12
 unsigned int *v6; // r1
 unsigned int *v7; // r2
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 index = a0 + 1;
 pos = a1 + 1;
 ptr = a2 + 1;
 do
 {
 v5 = index + 1;
 v6 = pos + 1;
 v7 = ptr + 1;
 ptr[1] = index[1] + pos[1];
 index = v5;
 pos = v6;
 ptr = v7;
 } while (index != a0 + 3);
 return 0;
}


// Function: call_asm_simd at 0x10a14
extern unsigned int __glibc___stack_chk_guard;

int call_asm_simd()
{
 unsigned int result[1]; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 unsigned int v8[1]; // [bp-0x1c]
 unsigned int v9; // [bp-0x18]
 unsigned int v10; // [bp-0x14]
 unsigned int v11; // [bp-0x10]
 unsigned int v12; // [bp-0xc]

 v12 = __glibc___stack_chk_guard;
 *(unsigned int *)result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 param_asm_simd(&result, &v4, &v8);
 if ((v12 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return *(v8) + v9 + v10 + v11;
}


// Function: param_asm_atomic at 0x10aa8
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 return __sync_fetch_and_add_4((unsigned int *)a0, a1) + a1;
}


// Function: param_atomic_c11 at 0x10abc
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 return __sync_fetch_and_add_4((unsigned int *)a0, a1) + a1;
}


// Function: call_asm_atomic at 0x10ad0
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_atomic()
{
 unsigned int v3; // lr
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x4]

 v2 = v3;
 v1 = __glibc___stack_chk_guard;
 v0 = 10;
 v4 = param_asm_atomic(&v0, 5);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4 + v0;
}


// Function: param_dynamic_code at 0x10b2c
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // r5
 void* ptr; // r0

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, NULL);
 if (ptr == 0xffffffff)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: param_memory_protection at 0x10b8c
unsigned int param_memory_protection()
{
 unsigned int v0; // r5
 unsigned int *p; // r0
 unsigned int *ptr; // r4
 unsigned int v3; // r6

 v0 = sysconf(30);
 p = mmap(NULL, v0, 3, 34, -1, NULL);
 if (p == 0xffffffff)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect())
 {
 munmap(ptr, v0);
 return 4294967294;
 }
 v3 = *(ptr);
 if (mprotect(ptr, v0, 3))
 {
 munmap(ptr, v0);
 return 4294967293;
 }
 *(ptr) = 100;
 munmap(ptr, v0);
 return v3;
}


// Function: param_clobber_importance at 0x10c54
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x10c60
unsigned int call_asm_privileged()
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
 v4 = param_dynamic_code(10);
 v5 = param_memory_protection();
 if (v4 == 15)
 {
 v9 = (armg_calculate_condition(2, v6, v7, v8) ? v5 : v6);
 v10 = (armg_calculate_condition(2, v6, v7, v8) ? 42 : v7);
 v11 = (armg_calculate_condition(2, v6, v7, v8) ? 0 : v8);
 if (!armg_calculate_condition(18, v9, v10, v11))
 goto LABEL_10c7e;
LABEL_10c7d:
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
 goto LABEL_10c7d;
LABEL_10c7e:
 v18 = v5;
 if (!armg_calculate_condition(2, v9, v10, v11))
 return v18;
 }
 return 77;
}


// Function: param_memory_clobber_demo at 0x10c88
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x10c9c
extern char g_11ef8;
extern char g_11f24;
extern char g_11f40;
extern char g_11f5c;
extern char g_11f78;
extern char g_11f94;
extern char g_11fb0;

int test_asm_features()
{
 unsigned int v4; // r0

 __printf_chk(1, 0x11ef8);
 __printf_chk(1, 0x11f24, 15);
 __printf_chk(1, 0x11f40, call_asm_clobber());
 __printf_chk(1, 0x11f5c, call_asm_multi_insn());
 __printf_chk(1, 0x11f78, call_asm_simd());
 __printf_chk(1, 0x11f94, call_asm_atomic());
 v4 = __printf_chk(1, 0x11fb0, call_asm_privileged());
 return __printf_chk(1, 0x11fb0, call_asm_privileged());
}


// Function: main at 0x10d40
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: __sync_fetch_and_add_4 at 0x10d54
int __sync_fetch_and_add_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) += a1;
 return old;
}


// Function: __sync_fetch_and_sub_4 at 0x10d8c
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) -= a1;
 return old;
}


// Function: __sync_fetch_and_or_4 at 0x10dc4
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) |= a1;
 return old;
}


// Function: __sync_fetch_and_and_4 at 0x10dfc
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) &= a1;
 return old;
}


// Function: __sync_fetch_and_xor_4 at 0x10e34
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) ^= a1;
 return old;
}


// Function: __sync_fetch_and_nand_4 at 0x10e6c
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) = ~(old & a1);
 return old;
}


// Function: __sync_fetch_and_add_2 at 0x10ea8
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr += a1;
 return old;
}


// Function: __sync_fetch_and_sub_2 at 0x10f08
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr -= a1;
 return old;
}


// Function: __sync_fetch_and_or_2 at 0x10f68
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr |= a1;
 return old;
}


// Function: __sync_fetch_and_and_2 at 0x10fc8
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr &= a1;
 return old;
}


// Function: __sync_fetch_and_xor_2 at 0x11028
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr ^= a1;
 return old;
}


// Function: __sync_fetch_and_nand_2 at 0x11088
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr = ~(old & a1);
 return old;
}


// Function: __sync_fetch_and_add_1 at 0x110ec
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr += a1;
 return old;
}


// Function: __sync_fetch_and_sub_1 at 0x11148
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr -= a1;
 return old;
}


// Function: __sync_fetch_and_or_1 at 0x111a4
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr |= a1;
 return old;
}


// Function: __sync_fetch_and_and_1 at 0x11200
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr &= a1;
 return old;
}


// Function: __sync_fetch_and_xor_1 at 0x1125c
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr ^= a1;
 return old;
}


// Function: __sync_fetch_and_nand_1 at 0x112b8
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 int old = *ptr;
 *ptr = ~(old & a1);
 return old;
}


// Function: __sync_add_and_fetch_4 at 0x11318
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) += a1;
 return *(a0);
}


// Function: __sync_sub_and_fetch_4 at 0x11350
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) -= a1;
 return *(a0);
}


// Function: __sync_or_and_fetch_4 at 0x11388
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) |= a1;
 return *(a0);
}


// Function: __sync_and_and_fetch_4 at 0x113c0
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) &= a1;
 return *(a0);
}


// Function: __sync_xor_and_fetch_4 at 0x113f8
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) ^= a1;
 return *(a0);
}


// Function: __sync_nand_and_fetch_4 at 0x11430
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) = ~(*(a0) & a1);
 return *(a0);
}


// Function: __sync_add_and_fetch_2 at 0x1146c
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 *ptr += a1;
 return *ptr;
}


// Function: __sync_sub_and_fetch_2 at 0x114d4
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 *ptr -= a1;
 return *ptr;
}


// Function: __sync_or_and_fetch_2 at 0x1153c
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 *ptr |= a1;
 return *ptr;
}


// Function: __sync_and_and_fetch_2 at 0x115a4
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 *ptr &= a1;
 return *ptr;
}


// Function: __sync_xor_and_fetch_2 at 0x1160c
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 *ptr ^= a1;
 return *ptr;
}


// Function: __sync_nand_and_fetch_2 at 0x11674
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 *ptr = ~(*ptr & a1);
 return *ptr;
}


// Function: __sync_add_and_fetch_1 at 0x116e0
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 *ptr += a1;
 return *ptr;
}


// Function: __sync_sub_and_fetch_1 at 0x11744
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 *ptr -= a1;
 return *ptr;
}


// Function: __sync_or_and_fetch_1 at 0x117a8
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 *ptr |= a1;
 return *ptr;
}


// Function: __sync_and_and_fetch_1 at 0x1180c
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 *ptr &= a1;
 return *ptr;
}


// Function: __sync_xor_and_fetch_1 at 0x11870
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 *ptr ^= a1;
 return *ptr;
}


// Function: __sync_nand_and_fetch_1 at 0x118d4
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 *ptr = ~(*ptr & a1);
 return *ptr;
}


// Function: __sync_val_compare_and_swap_4 at 0x1193c
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 int old = *(a0);
 if (old == i)
 {
 *(a0) = a2;
 }
 return old;
}


// Function: __sync_val_compare_and_swap_2 at 0x1198c
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 unsigned short old = *ptr;
 if (old == (a1 & 0xFFFF))
 {
 *ptr = (a2 & 0xFFFF);
 }
 return old;
}


// Function: __sync_val_compare_and_swap_1 at 0x11a04
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 char old = *ptr;
 if (old == (a1 & 0xFF))
 {
 *ptr = (a2 & 0xFF);
 }
 return old;
}


// Function: __sync_bool_compare_and_swap_4 at 0x11a78
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int *ptr = (unsigned int *)a0;
 unsigned int old = *ptr;
 if (old == a1)
 {
 *ptr = a2;
 return 1;
 }
 return 0;
}


// Function: __sync_bool_compare_and_swap_2 at 0x11aa4
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 unsigned short old = *ptr;
 if (old == (a1 & 0xFFFF))
 {
 *ptr = (a2 & 0xFFFF);
 return 1;
 }
 return 0;
}


// Function: __sync_bool_compare_and_swap_1 at 0x11ac0
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 char old = *ptr;
 if (old == (a1 & 0xFF))
 {
 *ptr = (a2 & 0xFF);
 return 1;
 }
 return 0;
}


// Function: __sync_synchronize at 0x11adc
int __sync_synchronize()
{
 __asm__ __volatile__("" ::: "memory");
 return 0;
}


// Function: __sync_lock_test_and_set_4 at 0x11ae8
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 int old = *(a0);
 *(a0) = a1;
 return old;
}


// Function: __sync_lock_test_and_set_2 at 0x11b20
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 unsigned short *ptr = (unsigned short *)(a0 & 0xfffffffc);
 unsigned short old = *ptr;
 *ptr = a1;
 return old;
}


// Function: __sync_lock_test_and_set_1 at 0x11b80
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char *ptr = (char *)(a0 & 0xfffffffc);
 char old = *ptr;
 *ptr = a1;
 return old;
}


// Function: __sync_lock_release_8 at 0x11bdc
void __sync_lock_release_8(unsigned int *ptr)
{
 __asm__ __volatile__("" ::: "memory");
 *(ptr) = 0;
 ptr[1] = 0;
}


// Function: __sync_lock_release_4 at 0x11c00
void __sync_lock_release_4(unsigned int *ptr)
{
 __asm__ __volatile__("" ::: "memory");
 *(ptr) = 0;
}


// Function: __sync_lock_release_2 at 0x11c20
void __sync_lock_release_2(unsigned short *ptr)
{
 __asm__ __volatile__("" ::: "memory");
 *(ptr) = 0;
}


// Function: __sync_lock_release_1 at 0x11c40
void __sync_lock_release_1(char *ptr)
{
 __asm__ __volatile__("" ::: "memory");
 *(ptr) = 0;
}



/* CRT stub function _fini removed by preprocessor */


