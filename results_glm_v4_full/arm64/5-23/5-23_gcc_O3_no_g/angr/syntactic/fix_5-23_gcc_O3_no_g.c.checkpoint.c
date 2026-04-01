// Angr Decompilation of 5-23_gcc_O3_no_g
// Platform: AARCH64

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/auxv.h>
#include <sys/mman.h>
#include <unistd.h>

// Rotate left macro
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))


/* CRT stub function _init removed by preprocessor */

// Forward declarations
void _start(void);
void deregister_tm_clones(void);
unsigned int init_have_lse_atomics(void);
void __do_global_dtors_aux(void);

unsigned long long param_macro_constants(void);
long long param_macro_functions(void);
int param_conditional_compile(unsigned int a0);
unsigned long long call_conditional_compile(void);
int param_multi_branch_compile(unsigned int a0);
int param_macro_recursion(unsigned int a0);
unsigned long long call_macro_recursion(void);
unsigned long long param_stringize(void);
unsigned long long call_stringize(void);
unsigned int my_func(unsigned int a0);
int param_token_paste(unsigned int a0);
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long long call_variadic_macro(void);
int param_macro_override(unsigned int a0);
unsigned long long call_macro_override(void);
unsigned long long param_include_guard(void);
unsigned long long call_include_guard(void);
int param_builtin_macros(unsigned int a0);
int param_asm_basic(unsigned int a0);
unsigned long long call_asm_basic(void);
unsigned long long param_asm_clobber(unsigned long long a0, unsigned long a1);
long long param_asm_multi_insn(void);
unsigned long long param_asm_simd(void*, void*, void*);
unsigned long long call_asm_simd(void);
unsigned long long param_simd_intrinsics(void*, void*, void*);
int param_asm_atomic(unsigned long long a0, unsigned int a1);
int param_atomic_c11(unsigned long long a0, unsigned int a1);
long long call_asm_atomic(void);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
int param_memory_clobber_demo(void);
__int128 AddV(__int128 a, __int128 b)
{
    return a + b;
}
unsigned int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned int *mem, ...);
void __stack_chk_fail(void);
unsigned long long call_asm_privileged(void);

// Stub for Valgrind VEX IR helper function
unsigned long arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
    // Simplified stub - just return 0
    return 0;
}

// Function: __dollar_x at 0x400810
extern unsigned long long g_412f60;
extern void g_412f60_func(void);
void g_412f60_func(void) {}

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 g_412f60_func();
 return 0;
}


// Function: sub_400824 at 0x400824
long long sub_400824()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}


// Forward declarations
long long test_asm_features();
int test_preprocessing_features();


// Function: main at 0x400900
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_40091c at 0x40091c
void sub_40091c()
{
 init_have_lse_atomics();
 return;
}


// Function: init_have_lse_atomics at 0x400920
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_400944 at 0x400944
void sub_400944(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009b0 at 0x4009b0
void sub_4009b0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */








/* CRT stub function register_tm_clones removed by preprocessor */



/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_400a94 at 0x400a94
void sub_400a94(unsigned long a0)
{
 param_macro_constants();
 return;
}


// Function: param_macro_constants at 0x400aa0
unsigned long long param_macro_constants(void)
{
 return 64;
}


// Function: call_macro_constants at 0x400ab4
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: sub_400abc at 0x400abc
void sub_400abc(unsigned long a0, unsigned long a1)
{
 param_macro_functions();
 return;
}


// Function: param_macro_functions at 0x400ac0
long long param_macro_functions(void)
{
 return 30;
}


// Function: call_macro_functions at 0x400ad0
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: sub_400ad8 at 0x400ad8
void sub_400ad8(unsigned long a0)
{
 param_conditional_compile(0);
 return;
}


// Function: param_conditional_compile at 0x400ae0
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: sub_400aec at 0x400aec
void sub_400aec()
{
 param_conditional_compile(10);
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x400af0
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: sub_400af8 at 0x400af8
void sub_400af8(unsigned long a0)
{
 param_multi_branch_compile(0);
 return;
}


// Function: param_multi_branch_compile at 0x400b00
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400b10
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_400b18 at 0x400b18
void sub_400b18(unsigned long a0)
{
 param_multi_branch_compile(10);
 param_macro_recursion(0);
 return;
}


// Function: param_macro_recursion at 0x400b20
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: sub_400b28 at 0x400b28
void sub_400b28()
{
 param_macro_recursion(100);
 call_macro_recursion();
 return;
}


// Function: call_macro_recursion at 0x400b30
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: sub_400b38 at 0x400b38
void sub_400b38()
{
 param_stringize();
 return;
}


// Function: param_stringize at 0x400b40
unsigned long long param_stringize()
{
 return 19;
}


// Function: sub_400b48 at 0x400b48
void sub_400b48()
{
 call_stringize();
 return;
}


// Function: call_stringize at 0x400b50
unsigned long long call_stringize()
{
 return 19;
}


// Function: sub_400b58 at 0x400b58
void sub_400b58(unsigned long a0)
{
 my_func(0);
 return;
}


// Function: my_func at 0x400b60
unsigned int my_func(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: sub_400b6c at 0x400b6c
void sub_400b6c(unsigned long a0)
{
 param_token_paste(0);
 return;
}


// Function: param_token_paste at 0x400b70
int param_token_paste(unsigned int a0)
{
 return a0 + 5 + a0 * 10;
}


// Function: call_token_paste at 0x400b80
unsigned long long call_token_paste()
{
 return 60;
}


// Function: sub_400b88 at 0x400b88
void sub_400b88(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_variadic_macro(0, 0, 0);
 return;
}


// Function: param_variadic_macro at 0x400b90
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: sub_400bcc at 0x400bcc
void sub_400bcc()
{
 call_variadic_macro();
 return;
}


// Function: call_variadic_macro at 0x400bd0
unsigned long long call_variadic_macro()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: param_macro_override at 0x400c00
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: sub_400c0c at 0x400c0c
void sub_400c0c()
{
 call_macro_override();
 return;
}


// Function: call_macro_override at 0x400c10
unsigned long long call_macro_override()
{
 return 16;
}


// Function: sub_400c18 at 0x400c18
void sub_400c18()
{
 param_include_guard();
 return;
}


// Function: param_include_guard at 0x400c20
unsigned long long param_include_guard()
{
 return 500;
}


// Function: sub_400c28 at 0x400c28
void sub_400c28()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x400c30
unsigned long long call_include_guard()
{
 return 500;
}


// Function: sub_400c38 at 0x400c38
void sub_400c38(unsigned long a0)
{
 param_builtin_macros(0);
 return;
}


// Function: param_builtin_macros at 0x400c40
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:33");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400c94
unsigned long long call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:33");
 return 382;
}


// Function: sub_400cdc at 0x400cdc
void sub_400cdc()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x400ce0
extern char g_4014d0[];
extern char g_4014f8[];
extern char g_401518[];
extern char g_401538[];
extern char g_401558[];
extern char g_401578[];
extern char g_401598[];
extern char g_4015c8[];
extern char g_4015e8[];
extern char g_401608[];
extern char g_401628[];
extern char g_401648[];

// Define missing format string globals
char g_4014d0[] = "test_preprocessing_features:\n";
char g_4014f8[] = "call_macro_constants: %d\n";
char g_401518[] = "call_macro_functions: %d\n";
char g_401538[] = "call_conditional_compile: %d\n";
char g_401558[] = "call_multi_branch_compile: %d\n";
char g_401578[] = "call_macro_recursion: %d\n";
char g_401598[] = "call_stringize: %d\n";
char g_4015c8[] = "call_token_paste: %d\n";
char g_4015e8[] = "call_variadic_macro: %d\n";
char g_401608[] = "call_macro_override: %d\n";
char g_401628[] = "call_include_guard: %d\n";
char g_401648[] = "call_builtin_macros: %d\n";
char g_401678[] = "test_asm_features:\n";
char g_4016c8[] = "call_asm_basic: %d\n";
char g_4016e8[] = "call_asm_multi_insn: %d\n";
char g_401748[] = "call_asm_privileged: %d\n";

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, g_4014d0);
 __printf_chk(1, g_4014f8, 64);
 __printf_chk(1, g_401518, 30);
 __printf_chk(1, g_401538, 32);
 __printf_chk(1, g_401558, 57122);
 __printf_chk(1, g_401578, 116);
 __printf_chk(1, g_401598, 19);
 __printf_chk(1, g_4015c8, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, g_4015e8, 60);
 __printf_chk(1, g_401608, 16);
 __printf_chk(1, g_401628, 500);
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:33");
 return __printf_chk(1, g_401648, 382);
}


// Function: sub_400e28 at 0x400e28
void sub_400e28(unsigned long a0)
{
 param_asm_basic(0);
 return;
}


// Function: param_asm_basic at 0x400e30
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_400e38 at 0x400e38
void sub_400e38()
{
 call_asm_basic();
 return;
}


// Function: call_asm_basic at 0x400e40
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: sub_400e48 at 0x400e48
long long sub_400e48(unsigned long a0, unsigned long a1)
{
 unsigned long long v0; // x0

 v0 = param_asm_clobber(a0, a1);
 return param_asm_clobber(a0, a1);
}


// Function: param_asm_clobber at 0x400e50
unsigned long long param_asm_clobber(unsigned long long a0, unsigned long a1)
{
 unsigned long long ptr; // x4
 unsigned long long i; // x2
 unsigned long long v3; // d0
 unsigned long long v4; // x2
 unsigned long long v5; // x0
 unsigned long long v6; // x0

 ptr = a0;
 if ((unsigned int)a1 <= 0)
 return 0;
 if ((unsigned int)a1 - 1 > 2)
 {
 i = ptr;
 do
 {
 i += 16;
 } while (i != ptr + 16 + ((((unsigned int)a1 * 0x40000000 | (unsigned int)a1 >> 2) & 1073741823) - 1) * 16);
 v3 = 0;
 v4 = (unsigned int)a1 & 0xfffffffc;
 if ((char)arm64g_calculate_condition(10, a1 & 3, 0, 0))
 return v3;
 }
 else
 {
 v4 = 0;
 v3 = 0;
 }
 v5 = v3 + *((int *)(ptr + (v4 & 4294967295) * 4));
 if ((unsigned int)a1 <= (unsigned int)v4 + 1)
 return v5;
 v6 = v5 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 4));
 if ((unsigned int)a1 <= (unsigned int)v4 + 2)
 return v6;
 return v6 + *((int *)(ptr + (v4 * 0x100000000 >> 63 & 0xfffffffc00000000 | __ROL__(v4, 2) & 17179869180 & 17179869183) + 8));
}


// Function: call_asm_clobber at 0x400ef4
unsigned long long call_asm_clobber()
{
 return 15;
}


// Function: sub_400efc at 0x400efc
long long sub_400efc()
{
 return param_asm_multi_insn();
}


// Function: param_asm_multi_insn at 0x400f00
long long param_asm_multi_insn()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x400f04
unsigned long long call_asm_multi_insn()
{
 return 42;
}


// Function: sub_400f0c at 0x400f0c
long long sub_400f0c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long v0; // x0

 v0 = param_asm_simd((void*)a0, (void*)a1, (void*)a2);
 return param_asm_simd((void*)a0, (void*)a1, (void*)a2);
}


// Function: param_asm_simd at 0x400f10
unsigned long long param_asm_simd(void* index, void* pos, void* ptr)
{
 void* v0; // x3
 unsigned long v1; // cc_op
 unsigned long v2; // cc_dep1
 unsigned long v3; // cc_dep2
 unsigned long v4; // cc_ndep
 unsigned long v5; // cc_op
 unsigned long v6; // cc_dep1
 unsigned long v7; // cc_dep2
 unsigned long v8; // cc_ndep

 v0 = (void*)((char*)ptr - ((char*)pos + 4));
 if (8 < (char*)ptr - ((char*)index + 4))
 {
 if ((char)arm64g_calculate_condition(148, ((char)arm64g_calculate_condition(v1 | 128, v2, v3, v4) ? (unsigned long)v0 : 0), ((char)arm64g_calculate_condition(v1 | 128, v2, v3, v4) ? 8 : 0), 0))
 {
 *((int *)ptr) = *((int *)index) + *((int *)pos);
 *((int *)((char*)ptr + 4)) = *((int *)((char*)index + 4)) + *((int *)((char*)pos + 4));
 *((int *)((char*)ptr + 8)) = *((int *)((char*)index + 8)) + *((int *)((char*)pos + 8));
 *((int *)((char*)ptr + 12)) = *((int *)((char*)index + 12)) + *((int *)((char*)pos + 12));
 return 0;
 }
 }
 else
 {
 if ((char)arm64g_calculate_condition(144, ((char)arm64g_calculate_condition(v5 | 128, v6, v7, v8) ? (unsigned long)v0 : 0), ((char)arm64g_calculate_condition(v5 | 128, v6, v7, v8) ? 8 : 0), 0))
 {
 *((int *)ptr) = *((int *)index) + *((int *)pos);
 *((int *)((char*)ptr + 4)) = *((int *)((char*)index + 4)) + *((int *)((char*)pos + 4));
 *((int *)((char*)ptr + 8)) = *((int *)((char*)index + 8)) + *((int *)((char*)pos + 8));
 *((int *)((char*)ptr + 12)) = *((int *)((char*)index + 12)) + *((int *)((char*)pos + 12));
 return 0;
 }
 }
 *((__int128 *)ptr) = AddV(*((__int128 *)index), *((__int128 *)pos));
 return 0;
}

// Function: sub_400f8c at 0x400f8c
long long sub_400f8c(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long v0; // x0

 v0 = param_simd_intrinsics((void*)a0, (void*)a1, (void*)a2);
 return param_simd_intrinsics((void*)a0, (void*)a1, (void*)a2);
}


// Function: param_simd_intrinsics at 0x400f90
unsigned long long param_simd_intrinsics(void* index, void* pos, void* ptr)
{
 void* v0; // x3
 unsigned long v1; // cc_op
 unsigned long v2; // cc_dep1
 unsigned long v3; // cc_dep2
 unsigned long v4; // cc_ndep
 unsigned long v5; // cc_op
 unsigned long v6; // cc_dep1
 unsigned long v7; // cc_dep2
 unsigned long v8; // cc_ndep

 v0 = (void*)((char*)ptr - ((char*)pos + 4));
 if (8 < (char*)ptr - ((char*)index + 4))
 {
 if ((char)arm64g_calculate_condition(148, ((char)arm64g_calculate_condition(v1 | 128, v2, v3, v4) ? (unsigned long)v0 : 0), ((char)arm64g_calculate_condition(v1 | 128, v2, v3, v4) ? 8 : 0), 0))
 {
 *((int *)ptr) = *((int *)index) + *((int *)pos);
 *((int *)((char*)ptr + 4)) = *((int *)((char*)index + 4)) + *((int *)((char*)pos + 4));
 *((int *)((char*)ptr + 8)) = *((int *)((char*)index + 8)) + *((int *)((char*)pos + 8));
 *((int *)((char*)ptr + 12)) = *((int *)((char*)index + 12)) + *((int *)((char*)pos + 12));
 return 0;
 }
 }
 else
 {
 if ((char)arm64g_calculate_condition(144, ((char)arm64g_calculate_condition(v5 | 128, v6, v7, v8) ? (unsigned long)v0 : 0), ((char)arm64g_calculate_condition(v5 | 128, v6, v7, v8) ? 8 : 0), 0))
 {
 *((int *)ptr) = *((int *)index) + *((int *)pos);
 *((int *)((char*)ptr + 4)) = *((int *)((char*)index + 4)) + *((int *)((char*)pos + 4));
 *((int *)((char*)ptr + 8)) = *((int *)((char*)index + 8)) + *((int *)((char*)pos + 8));
 *((int *)((char*)ptr + 12)) = *((int *)((char*)index + 12)) + *((int *)((char*)pos + 12));
 return 0;
 }
 }
 *((__int128 *)ptr) = AddV(*((__int128 *)index), *((__int128 *)pos));
 return 0;
}

// Function: sub_40100c at 0x40100c
void sub_40100c()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401010
unsigned long long call_asm_simd()
{
 return 36;
}


// Function: sub_401018 at 0x401018
void sub_401018(unsigned long a0, unsigned long a1)
{
 param_asm_atomic(a0, a1);
 return;
}


// Function: param_asm_atomic at 0x401020
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: sub_40104c at 0x40104c
void sub_40104c(unsigned long a0, unsigned long a1)
{
 param_atomic_c11(a0, a1);
 return;
}


// Function: param_atomic_c11 at 0x401050
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: sub_40107c at 0x40107c
void sub_40107c()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x401080
extern char __stack_chk_guard;

long long call_asm_atomic()
{
 unsigned int v4; // w0
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 v1 = 10;
 v4 = __aarch64_ldadd4_acq_rel(5, &v1);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4 + 5 + v1;
}


// Function: param_dynamic_code at 0x4010e4
int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x0
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0))
 return (unsigned int)ptr;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: sub_401148 at 0x401148
void sub_401148()
{
 param_memory_protection();
 return;
}


// Function: param_memory_protection at 0x401150
unsigned int param_memory_protection()
{
 unsigned long v2; // x20
 unsigned int *ptr; // x19
 unsigned int v4; // w21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 3, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0))
 return (unsigned int)ptr;
 *(ptr) = 42;
 if (mprotect(ptr, v2, 7))
 {
 munmap(ptr, v2);
 return 4294967294;
 }
 v4 = *(ptr);
 if (mprotect(ptr, v2, 3))
 {
 munmap(ptr, v2);
 return 4294967293;
 }
 *(ptr) = 100;
 munmap(ptr, v2);
 return v4;
}


// Function: sub_40121c at 0x40121c
void sub_40121c(unsigned long a0, unsigned long a1)
{
 param_clobber_importance(a0, a1);
 return;
}


// Function: param_clobber_importance at 0x401220
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: sub_40122c at 0x40122c
void sub_40122c()
{
 call_asm_privileged();
 return;
}


// Function: call_asm_privileged at 0x401230
unsigned long long call_asm_privileged()
{
 unsigned long v2; // x0
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0))
 {
 param_memory_protection();
 return (unsigned long long)ptr & 4294967295;
 }
 munmap(ptr, v2);
 if (param_memory_protection() == 42)
 return 77;
 return 15;
}


// Function: param_memory_clobber_demo at 0x4012a4
unsigned int global_var = 0;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x4012b4
extern char __stack_chk_guard;
extern char g_401678[];
extern char g_4016a8[];
extern char g_4016c8[];
extern char g_4016e8[];
extern char g_401708[];
extern char g_401728[];
extern char g_401748[];

// Define missing format string globals
char g_4016a8[] = "call_asm_clobber: %d\n";
char g_401708[] = "call_asm_simd: %d\n";
char g_401728[] = "call_asm_atomic: %d\n";

long long test_asm_features()
{
 unsigned long v5; // x0
 void* ptr; // x0
 unsigned long long v7; // x2
 unsigned long long v8; // x0
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 __printf_chk(1, g_401678);
 __printf_chk(1, g_4016a8, 15);
 __printf_chk(1, g_4016c8, 15);
 __printf_chk(1, g_4016e8, 42);
 __printf_chk(1, g_401708, 36);
 v1 = 10;
 __printf_chk(1, g_401728, (int)__aarch64_ldadd4_acq_rel(5, &v1) + 5 + v1);
 v5 = sysconf(30);
 ptr = mmap(NULL, v5, 7, 34, -1, 0);
 if (!((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0)))
 {
 munmap(ptr, v5);
 if (param_memory_protection() != 42)
 v7 = 15;
 else
 v7 = 77;
 }
 else
 {
 param_memory_protection();
 v7 = (unsigned long long)ptr & 4294967295;
 }
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v8 = __printf_chk(1, g_401748, v7);
 return __printf_chk(1, g_401748, v7);
}


// Function: sub_4013f8 at 0x4013f8
long long sub_4013f8()
{
 unsigned int v0; // w0

 v0 = __aarch64_ldadd4_acq_rel(0, NULL);
 return __aarch64_ldadd4_acq_rel(0, NULL);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401400
// Function: sub_401414 at 0x401414
long long sub_401414()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


