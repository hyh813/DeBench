// Angr Decompilation of 5-23_gcc_O0_g
// Platform: ARMEL

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* Stack canary guard variable (glibc internal) */
unsigned int __glibc___stack_chk_guard = 0;

/* Global variable referenced in param_memory_clobber_demo */
unsigned int global_var = 0;

/* CRT stub function _init removed by preprocessor */



// Function: sub_10480 at 0x10480
extern unsigned int g_23008;

int sub_10480()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_1055c at 0x1055c
void sub_1055c()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x1061c
unsigned int param_macro_constants(unsigned int a0)
{
 return (a0 <= 0x400 ? 0x200 : 64);
}


// Function: call_macro_constants at 0x10654
unsigned int call_macro_constants()
{
 unsigned int v0; // r0

 v0 = param_macro_constants(0x800);
 return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x10670
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v2; // r3
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = a0;
 v0 = a1;
 if (v1 <= v0)
 v2 = v0;
 else
 v2 = v1;
 return v1 * v1 + v2;
}


// Function: call_macro_functions at 0x106b4
unsigned int call_macro_functions()
{
 unsigned int v0; // r0

 v0 = param_macro_functions(5, 3);
 return param_macro_functions(5, 3);
}


// Function: param_conditional_compile at 0x106d4
int param_conditional_compile(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0;
 v0 = v0 * 3 + 2;
 return v0;
}


// Function: call_conditional_compile at 0x10718
unsigned int call_conditional_compile()
{
 unsigned int v0; // r0

 v0 = param_conditional_compile(10);
 return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x10734
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x1076c
unsigned int call_multi_branch_compile()
{
 unsigned int v0; // r0

 v0 = param_multi_branch_compile(10);
 return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x10788
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x107b0
unsigned int call_macro_recursion()
{
 unsigned int v0; // r0

 v0 = param_macro_recursion(100);
 return param_macro_recursion(100);
}


// Function: param_stringize at 0x107cc
int param_stringize(unsigned int a0)
{
 unsigned int len; // r0
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x1c]
 char *v2; // [bp-0x18]
 char *v3; // [bp-0x14]

 v0 = a0;
 v1 = "Hello World";
 v2 = "1_2.3";
 v3 = "155";
 len = strlen(v1);
 len = strlen(v2);
 return len + len + strlen(v3);
}


// Function: call_stringize at 0x10838
unsigned int call_stringize()
{
 unsigned int v0; // r0

 v0 = param_stringize(0);
 return param_stringize(0);
}


// Function: my_func at 0x10854
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x10888
unsigned int param_token_paste(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = my_func(a0);
 v1 = a0 + 5;
 v0 += v1;
 return v0;
}


// Function: call_token_paste at 0x108d0
unsigned int call_token_paste()
{
 unsigned int v0; // r0

 v0 = param_token_paste(5);
 return param_token_paste(5);
}


// Function: param_variadic_macro at 0x108ec
extern unsigned int __glibc___stack_chk_guard;

int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0xc]

 v1 = __glibc___stack_chk_guard;
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 v0 = 5;
 if (!(v1 ^ __glibc___stack_chk_guard))
 return v0 * 10 + a0;
 __stack_chk_fail(); /* do not return */
}


// Function: call_variadic_macro at 0x10980
unsigned int call_variadic_macro()
{
 unsigned int v0; // r0

 v0 = param_variadic_macro(10, 20, 30);
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x109a4
int param_macro_override(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = a0 + 1;
 v1 = a0 * 2;
 return v0 + v1;
}


// Function: call_macro_override at 0x109e8
unsigned int call_macro_override()
{
 unsigned int v0; // r0

 v0 = param_macro_override(5);
 return param_macro_override(5);
}


// Function: header_func at 0x10a04
unsigned int header_func(unsigned int a0)
{
 return a0 * 100;
}


// Function: param_include_guard at 0x10a40
unsigned int param_include_guard()
{
 unsigned int v0; // r0

 v0 = header_func(5);
 return header_func(5);
}


// Function: call_include_guard at 0x10a5c
unsigned int call_include_guard()
{
 unsigned int v0; // r0

 v0 = param_include_guard();
 return param_include_guard();
}


// Function: param_builtin_macros at 0x10a74
int param_builtin_macros(unsigned int a0)
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int result; // [bp-0x14]
 unsigned int flag1; // [bp-0x10]
 unsigned int v7; // [bp-0xc]

 v0 = "src/5-23.c";
 v1 = 279;
 v2 = "param_builtin_macros";
 v3 = "Jan 15 2026";
 v4 = "03:01:01";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v2, v1, v3, v4);
 result = 0;
 flag1 = 1;
 v7 = 2;
 return a0 + v1 + result + flag1 + v7;
}


// Function: call_builtin_macros at 0x10b30
unsigned int call_builtin_macros()
{
 unsigned int v0; // r0

 v0 = param_builtin_macros(100);
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x10b4c
extern char g_124c0;
extern char g_124e8;
extern char g_12504;
extern char g_12520;
extern char g_1253c;
extern char g_1255c;
extern char g_12578;
extern char g_125a4;
extern char g_125c0;
extern char g_125dc;
extern char g_125f8;
extern char g_12614;

int test_preprocessing_features()
{
 unsigned int v10; // r0

 puts(0x124c0);
 printf(0x124e8, call_macro_constants());
 printf(0x12504, call_macro_functions());
 printf(0x12520, call_conditional_compile());
 printf(0x1253c, call_multi_branch_compile());
 printf(0x1255c, call_macro_recursion());
 printf(0x12578, call_stringize());
 printf(0x125a4, call_token_paste());
 printf(0x125c0, call_variadic_macro());
 printf(0x125dc, call_macro_override());
 printf(0x125f8, call_include_guard());
 v10 = printf(0x12614, call_builtin_macros());
 return printf(0x12614, call_builtin_macros());
}


// Function: param_asm_basic at 0x10c70
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = a0 + 10;
 return v0;
}


// Function: call_asm_basic at 0x10ca0
unsigned int call_asm_basic()
{
 unsigned int v0; // r0

 v0 = param_asm_basic(5);
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x10cbc
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int idx; // [bp-0xc]

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: call_asm_clobber at 0x10d34
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_clobber()
{
 unsigned int v6; // r0
 unsigned int result; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v5 = __glibc___stack_chk_guard;
 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v6 = param_asm_clobber(&result, 5);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_multi_insn at 0x10db0
int param_asm_multi_insn(void* a0, void* a1, unsigned int a2)
{
 unsigned int dst; // r0

 dst = memcpy(a0, a1, a2);
 return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x10de4
extern unsigned int __glibc___stack_chk_guard;

unsigned int call_asm_multi_insn()
{
 unsigned int v5; // r3
 char v0; // [bp-0x38]
 unsigned short v1; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 char v3; // [bp-0x28]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 strncpy(&v0, "Hello AS", 8);
 v1 = 77;
 result = 0;
 memset(&v3, 0, 28);
 param_asm_multi_insn(&result, &v0, 9);
 if ((char)result == 72 && v3 == 111)
 v5 = 42;
 else
 v5 = 4294967295;
 if (!(v4 ^ __glibc___stack_chk_guard))
 return v5;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_simd at 0x10ea8
unsigned int param_asm_simd(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int idx; // [bp-0xc]

 for (idx = 0; idx <= 3; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 }
 return 0;
}


// Function: param_simd_intrinsics at 0x10f38
unsigned int param_simd_intrinsics(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int v0; // [bp-0xc]

 for (v0 = 0; v0 <= 3; v0 += 1)
 {
 *((int *)(ptr + v0 * 4)) = *((int *)(a0 + v0 * 4)) + *((int *)(a1 + v0 * 4));
 }
 return 0;
}


// Function: call_asm_simd at 0x10fc8
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


// Function: param_asm_atomic at 0x11068
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 v0 = __sync_fetch_and_add_4((int *)a0, a1);
 return v0 + a1;
}


// Function: param_atomic_c11 at 0x110b0
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 char v0; // [bp-0x4]
 char v1; // [bp+0x0]

 return __sync_fetch_and_add_4((int *)a0, a1) + a1;
}


// Function: call_asm_atomic at 0x110f4
extern unsigned int __glibc___stack_chk_guard;

int call_asm_atomic()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = __glibc___stack_chk_guard;
 v0 = 10;
 v1 = param_asm_atomic(&v0, 5);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return v0 + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: param_dynamic_code at 0x11164
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 void* ptr; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, NULL);
 if (ptr != 0xffffffff)
 {
 v2 = a0 + 5;
 munmap(ptr, v0);
 return v2;
 }
 return 4294967295;
}


// Function: param_memory_protection at 0x111e8
unsigned int param_memory_protection()
{
 unsigned int v0; // [bp-0x18]
 unsigned int *ptr; // [bp-0x14]
 unsigned int *ptr2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 3, 34, -1, NULL);
 if (ptr == (void *)-1)
 return 4294967295;
 ptr2 = ptr;
 *(ptr2) = 42;
 if (mprotect(ptr, v0, 1))
 {
 munmap(ptr, v0);
 return 4294967294;
 }
 v3 = *(ptr2);
 if (!mprotect(ptr, v0, 3))
 {
 *(ptr2) = 100;
 munmap(ptr, v0);
 return v3;
 }
 munmap(ptr, v0);
 return 4294967293;
}


// Function: param_clobber_importance at 0x112e8
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x1131c
unsigned int call_asm_privileged()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v0 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if (v0 == 15 && v1 == 42 && v2 == 20)
 return 77;
 return v0;
}


// Function: param_memory_clobber_demo at 0x11388
extern unsigned int global_var;

unsigned int param_memory_clobber_demo()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v0 = 50;
 v1 = v0 + global_var;
 return v1;
}


// Function: test_asm_features at 0x113c8
extern char g_12680;
extern char g_126ac;
extern char g_126c8;
extern char g_126e4;
extern char g_12700;
extern char g_1271c;
extern char g_12738;

int test_asm_features()
{
 unsigned int v5; // r0
 unsigned int v6; // r0

 puts(0x12680);
 printf(0x126ac, call_asm_basic());
 printf(0x126c8, call_asm_clobber());
 printf(0x126e4, call_asm_multi_insn());
 printf(0x12700, call_asm_simd());
 printf(0x1271c, call_asm_atomic());
 v5 = call_asm_privileged();
 v6 = printf(0x12738, v5);
 return printf(0x12738, v5);
}


// Function: main at 0x11474
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: __sync_fetch_and_add_4 at 0x11490
int __sync_fetch_and_add_4(int *ptr, int value)
{
 int old_val = *ptr;
 *ptr = old_val + value;
 return old_val;
}


// Function: __sync_fetch_and_sub_4 at 0x114c8
int __sync_fetch_and_sub_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_or_4 at 0x11500
int __sync_fetch_and_or_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_and_4 at 0x11538
int __sync_fetch_and_and_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_xor_4 at 0x11570
int __sync_fetch_and_xor_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_nand_4 at 0x115a8
int __sync_fetch_and_nand_4(unsigned int *a0, unsigned int a1)
{
 do
 { } while (0);
 return *(a0);
}


// Function: __sync_fetch_and_add_2 at 0x115e4
int __sync_fetch_and_add_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_2 at 0x11644
int __sync_fetch_and_sub_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_2 at 0x116a4
int __sync_fetch_and_or_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_and_2 at 0x11704
int __sync_fetch_and_and_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_xor_2 at 0x11764
int __sync_fetch_and_xor_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_nand_2 at 0x117c4
int __sync_fetch_and_nand_2(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (unsigned short)((65535 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_add_1 at 0x11828
int __sync_fetch_and_add_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_sub_1 at 0x11884
int __sync_fetch_and_sub_1(unsigned int a0, unsigned int a1)
{
 do
 { } while (0);
 return (char)((255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31 & *((int *)(a0 & 0xfffffffc))) >> ((char)a0 * 8 & 24 & 31)) & ((char)a0 * 8 & 24) - 32 >> 31;
}


// Function: __sync_fetch_and_or_1 at 0x118e0
int __sync_fetch_and_or_1(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 255 << (shift & 31);
 unsigned int byte_val = (old_val & mask) >> (shift & 31);
 unsigned int result = byte_val | a1;
 *ptr = (old_val & ~mask) | ((result & 255) << (shift & 31));
 return byte_val;
}


// Function: __sync_fetch_and_and_1 at 0x1193c
int __sync_fetch_and_and_1(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 255 << (shift & 31);
 unsigned int byte_val = (old_val & mask) >> (shift & 31);
 unsigned int result = byte_val & a1;
 *ptr = (old_val & ~mask) | ((result & 255) << (shift & 31));
 return byte_val;
}


// Function: __sync_fetch_and_xor_1 at 0x11998
int __sync_fetch_and_xor_1(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 255 << (shift & 31);
 unsigned int byte_val = (old_val & mask) >> (shift & 31);
 unsigned int result = byte_val ^ a1;
 *ptr = (old_val & ~mask) | ((result & 255) << (shift & 31));
 return byte_val;
}


// Function: __sync_fetch_and_nand_1 at 0x119f4
int __sync_fetch_and_nand_1(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 255 << (shift & 31);
 unsigned int byte_val = (old_val & mask) >> (shift & 31);
 unsigned int result = ~(byte_val & a1);
 *ptr = (old_val & ~mask) | ((result & 255) << (shift & 31));
 return byte_val;
}


// Function: __sync_add_and_fetch_4 at 0x11a54
int __sync_add_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) += a1;
 return *(a0);
}


// Function: __sync_sub_and_fetch_4 at 0x11a8c
int __sync_sub_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) -= a1;
 return *(a0);
}


// Function: __sync_or_and_fetch_4 at 0x11ac4
unsigned int __sync_or_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) |= a1;
 return *(a0);
}


// Function: __sync_and_and_fetch_4 at 0x11afc
unsigned int __sync_and_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) &= a1;
 return *(a0);
}


// Function: __sync_xor_and_fetch_4 at 0x11b34
int __sync_xor_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) ^= a1;
 return *(a0);
}


// Function: __sync_nand_and_fetch_4 at 0x11b6c
unsigned int __sync_nand_and_fetch_4(unsigned int *a0, unsigned int a1)
{
 *(a0) = ~(*(a0) & a1);
 return *(a0);
}


// Function: __sync_add_and_fetch_2 at 0x11ba8
unsigned int __sync_add_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 unsigned int result = short_val + a1;
 *ptr = (old_val & ~mask) | ((result & 65535) << (shift & 31));
 return result & 65535;
}


// Function: __sync_sub_and_fetch_2 at 0x11c10
unsigned int __sync_sub_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 unsigned int result = short_val - a1;
 *ptr = (old_val & ~mask) | ((result & 65535) << (shift & 31));
 return result & 65535;
}


// Function: __sync_or_and_fetch_2 at 0x11c78
unsigned int __sync_or_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 unsigned int result = short_val | a1;
 *ptr = (old_val & ~mask) | ((result & 65535) << (shift & 31));
 return result & 65535;
}


// Function: __sync_and_and_fetch_2 at 0x11ce0
unsigned int __sync_and_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 unsigned int result = short_val & a1;
 *ptr = (old_val & ~mask) | ((result & 65535) << (shift & 31));
 return result & 65535;
}


// Function: __sync_xor_and_fetch_2 at 0x11d48
unsigned int __sync_xor_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 unsigned int result = short_val ^ a1;
 *ptr = (old_val & ~mask) | ((result & 65535) << (shift & 31));
 return result & 65535;
}


// Function: __sync_nand_and_fetch_2 at 0x11db0
unsigned int __sync_nand_and_fetch_2(unsigned int a0, unsigned int a1)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 unsigned int result = ~(short_val & a1);
 *ptr = (old_val & ~mask) | ((result & 65535) << (shift & 31));
 return result & 65535;
}


// Function: __sync_add_and_fetch_1 at 0x11e1c
unsigned int __sync_add_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 __sync_synchronize();
 v1 = *((int *)(a0 & 0xfffffffc));
 __sync_synchronize();
 return (v1 & v0) >> ((char)a0 * 8 & 24 & 31);
}


// Function: __sync_sub_and_fetch_1 at 0x11e80
unsigned int __sync_sub_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 __sync_synchronize();
 v1 = *((int *)(a0 & 0xfffffffc));
 __sync_synchronize();
 return (v1 & v0) >> ((char)a0 * 8 & 24 & 31);
}


// Function: __sync_or_and_fetch_1 at 0x11ee4
unsigned int __sync_or_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 __sync_synchronize();
 v1 = *((int *)(a0 & 0xfffffffc));
 __sync_synchronize();
 return (v1 & v0) >> ((char)a0 * 8 & 24 & 31);
}


// Function: __sync_and_and_fetch_1 at 0x11f48
unsigned int __sync_and_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 __sync_synchronize();
 v1 = *((int *)(a0 & 0xfffffffc));
 __sync_synchronize();
 return (v1 & v0) >> ((char)a0 * 8 & 24 & 31);
}


// Function: __sync_xor_and_fetch_1 at 0x11fac
unsigned int __sync_xor_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 __sync_synchronize();
 v1 = *((int *)(a0 & 0xfffffffc));
 __sync_synchronize();
 return (v1 & v0) >> ((char)a0 * 8 & 24 & 31);
}


// Function: __sync_nand_and_fetch_1 at 0x12010
unsigned int __sync_nand_and_fetch_1(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r5
 unsigned int v1; // r0

 v0 = 255 << ((char)a0 * 8 & 24 & 31) & ((char)a0 * 8 & 24) - 32 >> 31;
 __sync_synchronize();
 v1 = *((int *)(a0 & 0xfffffffc));
 __sync_synchronize();
 return (v1 & v0) >> ((char)a0 * 8 & 24 & 31);
}


// Function: __sync_val_compare_and_swap_4 at 0x12078
int __sync_val_compare_and_swap_4(unsigned int *a0, unsigned int i, unsigned int a2)
{
 int old_val = *(a0);
 if (old_val == (int)i)
 {
 *(a0) = a2;
 return i;
 }
 return old_val;
}


// Function: __sync_val_compare_and_swap_2 at 0x120c8
unsigned int __sync_val_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (shift & 31);
 unsigned int short_val = (old_val & mask) >> (shift & 31);
 if (short_val == (a1 & 65535))
 {
 *ptr = (old_val & ~mask) | ((a2 & 65535) << (shift & 31));
 return a1 & 65535;
 }
 return short_val;
}


// Function: __sync_val_compare_and_swap_1 at 0x12140
unsigned int __sync_val_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 int shift = (char)a0 * 8 & 24;
 unsigned int old_val = *ptr;
 unsigned int mask = 255 << (shift & 31);
 unsigned int byte_val = (old_val & mask) >> (shift & 31);
 if (byte_val == (a1 & 255))
 {
 *ptr = (old_val & ~mask) | ((a2 & 255) << (shift & 31));
 return a1 & 255;
 }
 return byte_val;
}


// Function: __sync_bool_compare_and_swap_4 at 0x121b4
unsigned int __sync_bool_compare_and_swap_4(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int *ptr = (unsigned int *)a0;
 if (*ptr == a1)
 {
 *ptr = a2;
 return 1;
 }
 return 0;
}


// Function: __sync_bool_compare_and_swap_2 at 0x121e0
unsigned int __sync_bool_compare_and_swap_2(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val = __sync_val_compare_and_swap_2(a0, a1, a2);
 return (old_val == (a1 & 65535)) ? 1 : 0;
}


// Function: __sync_bool_compare_and_swap_1 at 0x121fc
unsigned int __sync_bool_compare_and_swap_1(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int old_val = __sync_val_compare_and_swap_1(a0, a1, a2);
 return (old_val == (a1 & 255)) ? 1 : 0;
}


// Function: __sync_synchronize at 0x12218
int __sync_synchronize()
{
}


// Function: __sync_lock_test_and_set_4 at 0x12224
int __sync_lock_test_and_set_4(unsigned int *a0, unsigned int a1)
{
 int old_val = *(a0);
 *(a0) = a1;
 return old_val;
}


// Function: __sync_lock_test_and_set_2 at 0x1225c
unsigned int __sync_lock_test_and_set_2(unsigned int a0, unsigned int a1)
{
 char v0; // r9

 v0 = (char)a0 * 8 & 24;
 unsigned int *ptr = (unsigned int *)(a0 & 0xfffffffc);
 unsigned int old_val = *ptr;
 unsigned int mask = 65535 << (v0 & 31);
 unsigned int short_val = (old_val & mask) >> (v0 & 31);
 *ptr = (old_val & ~mask) | ((a1 & 65535) << (v0 & 31));
 return short_val;
}


// Function: __sync_lock_test_and_set_1 at 0x122bc
unsigned int __sync_lock_test_and_set_1(unsigned int a0, unsigned int a1)
{
 char v0; // r9
 unsigned int *ptr;
 unsigned int old_val;
 unsigned int mask;
 unsigned int byte_val;

 v0 = (char)a0 * 8 & 24;
 __sync_synchronize();
 ptr = (unsigned int *)(a0 & 0xfffffffc);
 old_val = *ptr;
 mask = 255 << (v0 & 31);
 byte_val = (old_val & mask) >> (v0 & 31);
 *ptr = (old_val & ~mask) | ((a1 & 255) << (v0 & 31));
 __sync_synchronize();
 return byte_val;
}


// Function: __sync_lock_release_8 at 0x12318
void __sync_lock_release_8(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 ptr[1] = 0;
 return;
}


// Function: __sync_lock_release_4 at 0x1233c
void __sync_lock_release_4(unsigned int *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_2 at 0x1235c
void __sync_lock_release_2(unsigned short *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}


// Function: __sync_lock_release_1 at 0x1237c
void __sync_lock_release_1(char *ptr)
{
 __sync_synchronize();
 *(ptr) = 0;
 return;
}



/* CRT stub function _fini removed by preprocessor */


