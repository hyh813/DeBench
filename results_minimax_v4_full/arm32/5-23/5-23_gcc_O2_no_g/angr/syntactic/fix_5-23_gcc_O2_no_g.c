// Angr Decompilation of 5-23_gcc_O2_no_g
// Platform: ARMEL


/* CRT stub function _init removed by preprocessor */

#ifndef NULL
#define NULL ((void*)0)
#endif



// Function: sub_10438 at 0x10438
unsigned int sub_10438(unsigned int v1)
{
 return v1;
}


// Function: main at 0x104c4
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



// Function: sub_10510 at 0x10510
void sub_10510()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x105d0
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


// Function: call_macro_constants at 0x105e0
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x105e8
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1

 if (a1 <= a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x10600
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x10608
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x10614
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x1061c
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x1062c
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x10638
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x10640
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x10648
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x10650
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x10658
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x10664
int param_token_paste(unsigned int a0)
{
 return a0 + 5 + a0 * 10;
}


// Function: call_token_paste at 0x10674
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x1067c
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x106b0
unsigned int call_variadic_macro()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: param_macro_override at 0x106e4
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x106f0
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x106f8
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x10700
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x10708
int param_builtin_macros(unsigned int a0)
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:06");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x10768
unsigned int call_builtin_macros()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:06");
 return 382;
}


// Function: test_preprocessing_features at 0x107c4
extern char g_11ec0;
extern char g_11ee8;
extern char g_11f04;
extern char g_11f20;
extern char g_11f3c;
extern char g_11f5c;
extern char g_11f78;
extern char g_11fa4;
extern char g_11fc0;
extern char g_11fdc;
extern char g_12014;

int test_preprocessing_features()
{
 unsigned int v0; // r0

 __printf_chk(1, 0x11ec0);
 __printf_chk(1, 0x11ee8, 64);
 __printf_chk(1, 0x11f04, 30);
 __printf_chk(1, 0x11f20, 32);
 __printf_chk(1, 0x11f3c, 57122);
 __printf_chk(1, 0x11f5c, 116);
 __printf_chk(1, 0x11f78, 19);
 __printf_chk(1, 0x11fa4, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, 0x11fc0, 60);
 __printf_chk(1, 0x11fdc, 16);
 __printf_chk(1, "PP-L3-06", 500);
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:06");
 v0 = __printf_chk(1, 0x12014, 382);
 return __printf_chk(1, 0x12014, 382);
}


// Function: param_asm_basic at 0x10928
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x10930
unsigned int call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x10938
unsigned int param_asm_clobber(unsigned int *a0, unsigned int a1)
{
 unsigned int v0; // r0
 unsigned int *v1; // r3
 unsigned int *i; // r3
 unsigned int v3; // r0
 unsigned int *ptr; // r3
 unsigned int *v5; // r3
 unsigned int v6; // r0

 v0 = 0;
 if (a1 > 0)
 goto LABEL_10948;
 return v0;
LABEL_10948:
 v1 = a0 + 1;
 i = v1;
 do
 {
 v3 = v0;
 v5 = i + 1;
 v6 = v3 + i[1];
 i = v5;
 v0 = v6;
 } while (i != &v1[a1]);
 return v0;
}


// Function: call_asm_clobber at 0x10964
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_clobber()
{
 unsigned int v6; // r12
 unsigned int *ptr; // r3
 unsigned int *v8; // r3
 unsigned int result; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v5 = __glibc___stack_chk_guard;
 v6 = 0;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 ptr = &result;
 v4 = 5;
 do
 {
 v8 = ptr + 1;
 v6 += *(ptr);
 ptr = v8;
 } while (ptr != &v5);
 if ((v5 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: param_asm_multi_insn at 0x109e0
unsigned int param_asm_multi_insn()
{
 return 42;
}


// Function: call_asm_multi_insn at 0x109e4
unsigned int call_asm_multi_insn()
{
 return 42;
}


// Function: param_asm_simd at 0x109ec
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


// Function: param_simd_intrinsics at 0x10a20
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


// Function: call_asm_simd at 0x10a54
extern unsigned int __glibc___stack_chk_guard;

int call_asm_simd()
{
 char *v14; // r5
 char *i; // r12
 char *ptr; // r4
 char *v17; // r12
 char *v18; // r5
 char *v19; // r4
 unsigned int v0; // [bp-0x44]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 unsigned int v11; // [bp-0x1c]
 unsigned int v12; // [bp-0x18]
 unsigned int v13; // [bp-0x14]

 v14 = &v4;
 i = &v0;
 v13 = __glibc___stack_chk_guard;
 ptr = &v9;
 v0 = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v5 = 5;
 v6 = 6;
 v7 = 7;
 v8 = 8;
 do
 {
 v17 = i + 1;
 v18 = v14 + 1;
 v19 = ptr + 1;
 *(ptr) = *(i) + *(v14);
 v14 = v18;
 ptr = v19;
 i = v17;
 } while (i != &v4);
 if ((v13 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v9 + v10 + v11 + v12;
}


// Function: param_asm_atomic at 0x10aec
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 return __sync_fetch_and_add_4(&a0, a1) + a1;
}


// Function: param_atomic_c11 at 0x10b00
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 return __sync_fetch_and_add_4(&a0, a1) + a1;
}


// Function: call_asm_atomic at 0x10b14
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
 v4 = __sync_fetch_and_add_4(&v0, 5);
 if ((v1 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4 + 5 + v0;
}


// Function: param_dynamic_code at 0x10b74
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


// Function: param_memory_protection at 0x10bd4
void param_memory_protection()
{
 unsigned int v0; // r5
 unsigned int *ptr; // r4
 unsigned int v2; // r6

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 3, 34, -1, NULL);
 if (ptr == 0xffffffff)
 return 4294967295;
 *(ptr) = 42;
 if (mprotect(ptr, v0, 3) != 0)
 {
 munmap(ptr, v0);
 return 4294967294;
 }
 v2 = *(ptr);
 if (mprotect(ptr, v0, 3) != 0)
 {
 munmap(ptr, v0);
 return 4294967293;
 }
 *(ptr) = 100;
 munmap(ptr, v0);
 return v2;
}


// Function: param_clobber_importance at 0x10ca0
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x10cac
unsigned int call_asm_privileged()
{
 unsigned int v0; // r5
 void* ptr; // r0
 unsigned int v2; // r0

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, NULL);
 if (ptr == 0xffffffff)
 {
 (void)param_memory_protection();
 return 4294967295;
 }
 munmap(ptr, v0);
 v2 = param_memory_protection();
 if (v2 != 42)
 {
 if (!armg_calculate_condition(2, v2, 42, 0))
 return 15;
 }
 else
 {
 if (!armg_calculate_condition(2, v2, 42, 0))
 return 42;
 }
 return 0;
}


// Function: param_memory_clobber_demo at 0x10d18
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x10d2c
extern unsigned int __glibc___stack_chk_guard;
extern char g_12040;
extern char g_1206c;
extern char g_12088;
extern char g_120a4;
extern char g_120c0;
extern char g_120dc;
extern char g_120f8;

int test_asm_features()
{
 unsigned int v7; // r12
 unsigned int *v9; // r3
 unsigned int v12; // r5
 void* ptr; // r0
 unsigned int v14; // r0
 unsigned int v15; // r0
 unsigned int v0; // [bp-0x2c]
 unsigned int result; // [bp-0x28]
 unsigned int v2; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int v6; // [bp-0x14]

 v6 = __glibc___stack_chk_guard;
 __printf_chk(1, 0x12040);
 __printf_chk(1, 0x1206c, 15);
 v7 = 0;
 result = 1;
 v2 = 2;
 v3 = 3;
 v4 = 4;
 ptr = &result;
 v5 = 5;
 do
 {
 v9 = ptr + 1;
 v7 += *(ptr);
 ptr = v9;
 } while (ptr != &v6);
 __printf_chk(1, 0x12088, v7);
 __printf_chk(1, 0x120a4, 42);
 __printf_chk(1, 0x120c0, call_asm_simd());
 v0 = 10;
 __printf_chk(1, 0x120dc, __sync_fetch_and_add_4(&v0, 5) + 5 + v0);
 v12 = sysconf(30);
 ptr = mmap(NULL, v12, 7, 34, -1, NULL);
 if (ptr != 0xffffffff)
 {
 munmap(ptr, v12);
 v14 = param_memory_protection();
 if (v14 != 42)
 {
 ptr = 0xf;
 if (!armg_calculate_condition(2, v14, 42, 0))
 {
 ptr = 0x4d;
 }
 }
 else
 {
 if (armg_calculate_condition(2, v14, 42, 0))
 {
 ptr = 0x4d;
 }
 }
 }
 else
 {
 (void)param_memory_protection();
 }
 if ((v6 ^ __glibc___stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v15 = __printf_chk(1, 0x120f8, ptr);
 return v15;
}


// Function: __sync_fetch_and_add_4 at 0x10ea8
int __sync_fetch_and_add_4(unsigned int *ptr, unsigned int val)
{
 unsigned int result;

 do
 { result = *ptr; } while (__sync_val_compare_and_swap_4(ptr, result, result + val) != result);
 return result;
}


// Function: __sync_fetch_and_sub_4 at 0x10ee0
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 unsigned int result;
 do
 { result = *a0; } while (!__sync_bool_compare_and_swap_4(a0, result, result - a1));
 return result;
}


// Function: __sync_fetch_and_or_4 at 0x10f18
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x10f50
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x10f88
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x10fc0
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x10ffc
int __sync_fetch_and_add_2(unsigned int *a0, unsigned int a1)
{
 unsigned short result;
 do
 { result = *a0; } while (__sync_val_compare_and_swap_2(a0, result, result + a1) != result);
 return result;
}


// Function: __sync_fetch_and_sub_2 at 0x1105c
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x110bc
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x1111c
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x1117c
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x111dc
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x11240
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x1129c
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x112f8
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_1 at 0x11354
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_1 at 0x113b0
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_1 at 0x1140c
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_add_and_fetch_4 at 0x1146c
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) + a1;
}


// Function: __sync_sub_and_fetch_4 at 0x114a4
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) - a1;
}


// Function: __sync_or_and_fetch_4 at 0x114dc
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) | a1;
}


// Function: __sync_and_and_fetch_4 at 0x11514
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) & a1;
}


// Function: __sync_xor_and_fetch_4 at 0x1154c
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0) ^ a1;
}


// Function: __sync_nand_and_fetch_4 at 0x11584
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return ~(*(a0) & a1);
}


// Function: __sync_add_and_fetch_2 at 0x115c0
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_sub_and_fetch_2 at 0x11628
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_or_and_fetch_2 at 0x11690
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_and_and_fetch_2 at 0x116f8
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_xor_and_fetch_2 at 0x11760
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_nand_and_fetch_2 at 0x117c8
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_add_and_fetch_1 at 0x11834
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_sub_and_fetch_1 at 0x11898
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_or_and_fetch_1 at 0x118fc
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_and_and_fetch_1 at 0x11960
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_xor_and_fetch_1 at 0x119c4
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_nand_and_fetch_1 at 0x11a28
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 do
 {
 v1 = *((int *)(a0 & 0xfffffffc));
 } while (__sync_val_compare_and_swap_4((unsigned int *)(a0 & 0xfffffffc), v1, v1 + a1) != v1);
 return v1 + a1;
}


// Function: __sync_val_compare_and_swap_4 at 0x11a90
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 unsigned int old;
 do
 {
 old = *a0;
 if (old == i)
 {
 *a0 = a2;
 return old;
 }
 } while (__sync_val_compare_and_swap_4(a0, old, a2) != old);
 return *a0;
}


// Function: __sync_val_compare_and_swap_2 at 0x11ae0
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int old;
 unsigned int old_val;
 do
 {
 old_val = *((unsigned short *)(a0 & 0xfffffffc));
 old = old_val;
 } while (old_val == a1);
 return old_val;
}


// Function: __sync_val_compare_and_swap_1 at 0x11b58
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int old;
 unsigned int old_val;
 do
 {
 old_val = *(unsigned char *)a0;
 old = old_val;
 } while (old_val == a1);
 return old_val;
}


// Function: __sync_bool_compare_and_swap_4 at 0x11bcc
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = __sync_val_compare_and_swap_4(a0, a1, a2);
 return v4 == a1;
}


// Function: __sync_bool_compare_and_swap_2 at 0x11bf8
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_2(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_bool_compare_and_swap_1 at 0x11c14
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v2; // lr
 unsigned int v3; // r4
 unsigned int v4; // r0
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = v2;
 v0 = v3;
 v4 = a1 - __sync_val_compare_and_swap_1(a0, a1, a2);
 return (!v4 ? 32 : Clz(v4)) >> 5;
}


// Function: __sync_synchronize at 0x11c30
int __sync_synchronize()
{
 return 0;
}


// Function: __sync_lock_test_and_set_4 at 0x11c3c
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_lock_test_and_set_2 at 0x11c74
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (0);
 return (65535 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 65535;
}


// Function: __sync_lock_test_and_set_1 at 0x11cd4
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 do
 { } while (0);
 return (255 << (v0 & 31) & v0 - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> (v0 & 31) & v0 - 32 >> 31 & 255;
}


// Function: __sync_lock_release_8 at 0x11d30
void __sync_lock_release_8(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 ptr[1] = 0;
}


// Function: __sync_lock_release_4 at 0x11d54
void __sync_lock_release_4(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x11d74
void __sync_lock_release_2(unsigned short *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x11d94
void __sync_lock_release_1(char *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


