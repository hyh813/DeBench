// Angr Decompilation of 5-23_gcc_O2_no_g
// Platform: ARMEL

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* Stack check failure declaration */
void __stack_chk_fail(void) __attribute__((noreturn));

/* Helper function for Angr's symbolic execution */
int armg_calculate_condition(int op, int a1, int a2, int a3)
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


// Function: main at 0x104c4
unsigned int main()
{
 unsigned int v2; // r0

 v2 = test_preprocessing_features();
 test_asm_features();
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
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x106b0
unsigned int call_variadic_macro()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:06");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x10768
unsigned int call_builtin_macros()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:06");
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
 printf("TEST-1\n");
 printf("TEST-2: %d\n", 64);
 printf("TEST-3: %d\n", 30);
 printf("TEST-4: %d\n", 32);
 printf("TEST-5: %d\n", 57122);
 printf("TEST-6: %d\n", 116);
 printf("TEST-7: %d\n", 19);
 printf("TEST-8: %d\n", 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf("TEST-9: %d\n", 60);
 printf("TEST-10: %d\n", 16);
 printf("PP-L3-06: %d\n", 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:06");
 printf("TEST-11: %d\n", 382);
 printf("TEST-12: %d\n", 382);
 return 0;
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
 return 0;
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

 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 ptr = &result;
 v6 = 0;
 do {
 v8 = ptr + 1;
 v6 += *ptr;
 ptr = v8;
 } while (ptr != &v6);
 return v6;
}


// Function: param_asm_multi_insn at 0x109e0
void* param_asm_multi_insn()
{
 return NULL;
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
 unsigned int *v14; // r5
 unsigned int *i; // r12
 unsigned int *ptr; // r4
 unsigned int *v17; // r12
 unsigned int *v18; // r5
 unsigned int *v19; // r4
 char v0; // [bp-0x44], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 char v4; // [bp-0x34]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 unsigned int v8; // [bp-0x28]
 char v9; // [bp-0x24], Other Possible Types: unsigned int
 unsigned int v10; // [bp-0x20]
 unsigned int v11; // [bp-0x1c]
 unsigned int v12; // [bp-0x18]
 unsigned int v13; // [bp-0x14]

 v14 = (unsigned int *)&v4;
 i = (unsigned int *)&v0;
 v13 = __glibc___stack_chk_guard;
 ptr = (unsigned int *)&v9;
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
 *ptr = *i + *v14;
 v14 = v18;
 ptr = v19;
 i = v17;
 } while (i != (unsigned int *)&v13);
 if (v13 != __glibc___stack_chk_guard)
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
 if (v1 != __glibc___stack_chk_guard)
 __stack_chk_fail(); /* do not return */
 return v4 + 5 + v0;
}


// Function: param_dynamic_code at 0x10b74
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // r5
 void* ptr; // r0

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, 0);
 if (ptr == (void*)-1)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: param_memory_protection at 0x10bd4
unsigned int param_memory_protection()
{
 unsigned int v0; // r5
 unsigned int *ptr; // r4
 unsigned int v2; // r6
 int ret;

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 3, 34, -1, 0);
 if (ptr == (void*)-1)
 return 4294967295;
 *ptr = 42;
 ret = mprotect(ptr, v0, 1);
 if (ret != 0)
 {
 (void)munmap(ptr, v0);
 return 4294967294;
 }
 v2 = *ptr;
 ret = mprotect(ptr, v0, 3);
 if (ret != 0)
 {
 munmap(ptr, v0);
 return 4294967293;
 }
 *ptr = 100;
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
 unsigned int v2; // r0;

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, 0);
 if (ptr == (void*)-1)
 {
 param_memory_protection();
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
 return 77;
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
 void *ptr; // r3
 void *v9; // r3
 unsigned int v12; // r5
 void *v13; // r0
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
 printf("ASM-1\n");
 printf("ASM-2: %d\n", 15);
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
 printf("ASM-3: %d\n", v7);
 printf("ASM-4: %d\n", 42);
 printf("ASM-5: %d\n", call_asm_simd());
 v0 = 10;
 printf("ASM-6: %d\n", __sync_fetch_and_add_4(&v0, 5) + 5 + v0);
 v12 = sysconf(30);
 v13 = mmap(NULL, v12, 7, 34, -1, 0);
 if (v13 != (void*)-1)
 {
 munmap(v13, v12);
 v14 = param_memory_protection();
 if (v14 != 42)
 {
 v15 = 0xf;
 if (!armg_calculate_condition(2, v14, 42, 0))
 v15 = 0x4d;
 }
 else
 {
 if (armg_calculate_condition(2, v14, 42, 0))
 v15 = 0x4d;
 else
 v15 = 0xf;
 }
 }
 else
 {
 param_memory_protection();
 v15 = 0xf;
 }
 if (v6 != __glibc___stack_chk_guard)
 __stack_chk_fail(); /* do not return */
 printf("ASM-7: %d\n", v15);
 return v15;
}


// Function: __sync_fetch_and_add_4 at 0x10ea8
int __sync_fetch_and_add_4(volatile unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 += a1;
 return old;
}


// Function: __sync_fetch_and_sub_4 at 0x10ee0
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 -= a1;
 return old;
}


// Function: __sync_fetch_and_or_4 at 0x10f18
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 |= a1;
 return old;
}


// Function: __sync_fetch_and_and_4 at 0x10f50
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 &= a1;
 return old;
}


// Function: __sync_fetch_and_xor_4 at 0x10f88
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 ^= a1;
 return old;
}


// Function: __sync_fetch_and_nand_4 at 0x10fc0
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = ~(*a0 & a1);
 return old;
}


// Function: __sync_fetch_and_add_2 at 0x10ffc
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
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
 unsigned int old = *(unsigned int *)a0;
 *(unsigned int *)a0 = old | a1;
 return old;
}


// Function: __sync_fetch_and_and_2 at 0x1111c
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 unsigned int old = *(unsigned int *)a0;
 *(unsigned int *)a0 = old & a1;
 return old;
}


// Function: __sync_fetch_and_xor_2 at 0x1117c
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 unsigned int old = *(unsigned int *)a0;
 *(unsigned int *)a0 = old ^ a1;
 return old;
}


// Function: __sync_fetch_and_nand_2 at 0x111dc
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 unsigned int old = *(unsigned int *)a0;
 *(unsigned int *)a0 = ~(old & a1);
 return old;
}


// Function: __sync_fetch_and_add_1 at 0x11240
int __sync_fetch_and_add_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned int old = *(unsigned int *)((unsigned int)a0 & 0xfffffffc);
 unsigned int shift = ((char)(unsigned int)a0 * 8 & 24 & 31);
 unsigned int mask = 255 << shift;
 unsigned int byte_val = (old & mask) >> shift;
 *(unsigned int *)((unsigned int)a0 & 0xfffffffc) = (old & ~mask) | (((byte_val + a1) & 255) << shift);
 return byte_val;
}


// Function: __sync_fetch_and_sub_1 at 0x1129c
int __sync_fetch_and_sub_1(volatile unsigned char *a0, unsigned int a1)
{
 unsigned int old = *(unsigned int *)((unsigned int)a0 & 0xfffffffc);
 unsigned int shift = ((char)(unsigned int)a0 * 8 & 24 & 31);
 unsigned int mask = 255 << shift;
 unsigned int byte_val = (old & mask) >> shift;
 *(unsigned int *)((unsigned int)a0 & 0xfffffffc) = (old & ~mask) | (((byte_val - a1) & 255) << shift);
 return byte_val;
}


// Function: __sync_fetch_and_or_1 at 0x112f8
int __sync_fetch_and_or_1(volatile unsigned char *a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)(unsigned int)a0 * 8 & 24 & 31) & ((char)(unsigned int)a0 * 8 & 24) - 32 >> 31 & *((int *)((unsigned int)a0 & 0xfffffffc))) >> ((char)(unsigned int)a0 * 8 & 24 & 31)) & ((char)(unsigned int)a0 * 8 & 24) - 32 >> 31;
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
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned short)(((v1 & v0) + (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_sub_and_fetch_2 at 0x11628
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned short)(((v1 & v0) - (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_or_and_fetch_2 at 0x11690
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned short)(((v1 & v0) | (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_and_and_fetch_2 at 0x116f8
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned short)(((v1 & v0) & (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_xor_and_fetch_2 at 0x11760
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned short)(((v1 & v0) ^ (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_nand_and_fetch_2 at 0x117c8
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned short)(~((v1 & v0) & (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_add_and_fetch_1 at 0x11834
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned char)(((v1 & v0) + (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_sub_and_fetch_1 at 0x11898
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned char)(((v1 & v0) - (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_or_and_fetch_1 at 0x118fc
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned char)(((v1 & v0) | (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_and_and_fetch_1 at 0x11960
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned char)(((v1 & v0) & (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_xor_and_fetch_1 at 0x119c4
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned char)(((v1 & v0) ^ (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_nand_and_fetch_1 at 0x11a28
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 v1 = *((int *)(a0 & 0xfffffffc));
 return (unsigned char)(~((v1 & v0) & (a1 & v0)) >> ((char)0 * 8 & 24 & 31)) & v0;
}


// Function: __sync_val_compare_and_swap_4 at 0x11a90
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 unsigned int old_val = *a0;
 if (old_val == i)
 {
 *a0 = a2;
 return i;
 }
 return old_val;
}


// Function: __sync_val_compare_and_swap_2 at 0x11ae0
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 unsigned int old_val = *ptr;
 unsigned int v0 = 65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 unsigned int masked_old = (old_val & v0) >> ((char)a0 * 8 & 24 & 31);
 if (masked_old == (a1 & 65535))
 {
 *ptr = (old_val & ~v0) | ((a2 & 65535) << ((char)a0 * 8 & 24 & 31));
 return a1;
 }
 return masked_old & 65535;
}


// Function: __sync_val_compare_and_swap_1 at 0x11b58
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 unsigned int old_val = *ptr;
 unsigned int v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 unsigned int masked_old = (old_val & v0) >> ((char)a0 * 8 & 24 & 31);
 if (masked_old == (a1 & 255))
 {
 *ptr = (old_val & ~v0) | ((a2 & 255) << ((char)a0 * 8 & 24 & 31));
 return a1;
 }
 return masked_old & 255;
}


// Function: __sync_bool_compare_and_swap_4 at 0x11bcc
unsigned int __sync_bool_compare_and_swap_4(unsigned int *a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val = *a0;
 if (old_val == a1)
 {
 *a0 = a2;
 return 1;
 }
 return 0;
}


// Function: __sync_bool_compare_and_swap_2 at 0x11bf8
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val = __sync_val_compare_and_swap_2(a0, a1, a2);
 return (old_val == a1) ? 1 : 0;
}


// Function: __sync_bool_compare_and_swap_1 at 0x11c14
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val = __sync_val_compare_and_swap_1(a0, a1, a2);
 return (old_val == a1) ? 1 : 0;
}


// Function: __sync_synchronize at 0x11c30
void __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x11c3c
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 unsigned int old = *a0;
 *a0 = a1;
 return old;
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
void __sync_lock_release_8(volatile unsigned long *ptr)
{
 __sync_synchronize();
 *ptr = 0;
}


// Function: __sync_lock_release_4 at 0x11d54
void __sync_lock_release_4(unsigned int *ptr)
{
 *ptr = 0;
}


// Function: __sync_lock_release_2 at 0x11d74
void __sync_lock_release_2(unsigned short *ptr)
{
 *ptr = 0;
}


// Function: __sync_lock_release_1 at 0x11d94
void __sync_lock_release_1(char *ptr)
{
 *ptr = 0;
}



/* CRT stub function _fini removed by preprocessor */


