// Angr Decompilation of 5-23_gcc_O2_no_g
// Platform: AARCH64

#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/auxv.h>
#include <unistd.h>
#include <sys/mman.h>


/* Define missing global variables */
char g_401550[] = "Preprocessing features test:\n";
char g_401578[] = "param_macro_constants: %d\n";
char g_401598[] = "param_macro_functions: %d\n";
char g_4015b8[] = "call_conditional_compile: %d\n";
char g_4015d8[] = "call_multi_branch_compile: %d\n";
char g_4015f8[] = "call_macro_recursion: %d\n";
char g_401618[] = "call_stringize: %d\n";
char g_401648[] = "call_token_paste: %d\n";
char g_401668[] = "call_macro_override: %d\n";
char g_401688[] = "call_include_guard: %d\n";
char g_4016a8[] = "call_builtin_macros: %d\n";
char g_4016c8[] = "call_builtin_macros return: %d\n";
char g_4016f8[] = "ASM features test:\n";
char g_401728[] = "call_asm_basic: %d\n";
char g_401748[] = "call_asm_clobber: %d\n";
char g_401768[] = "call_asm_multi_insn: %d\n";
char g_401788[] = "call_asm_simd: %d\n";
char g_4017a8[] = "call_asm_atomic: %d\n";
char g_4017c8[] = "call_asm_privileged: %d\n";
unsigned int global_var = 0;

/* CRT stub function _init removed by preprocessor */

/* Define __ROL__ macro for rotate left */
#define __ROL__(val, n) (((val) << (n)) | ((val) >> (32 - (n))))

/* Declare CRT and system functions */
extern void _start(void);
extern void abort(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void __do_global_dtors_aux(void);
extern unsigned long long frame_dummy(void);
extern void __stack_chk_fail(void);

/* Declare ARM64 atomic and decompiler helper functions */
extern int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned int *ptr);
extern int arm64g_calculate_condition(int cond, void *a1, int a2, int a3);

/* Define arm64g_calculate_condition helper function */
int arm64g_calculate_condition(int cond, void *a1, int a2, int a3)
{
 return 1;
}

/* Forward declarations for functions */
extern unsigned long long param_macro_constants(unsigned int a0);
extern long long param_macro_functions(unsigned int a0, unsigned int a1);
extern int param_conditional_compile(unsigned int a0);
extern unsigned long long call_conditional_compile(void);
extern int param_multi_branch_compile(unsigned int a0);
extern int param_macro_recursion(unsigned int a0);
extern unsigned long long call_macro_recursion(void);
extern unsigned long long param_stringize(void);
extern unsigned long long call_stringize(void);
extern unsigned int my_func(unsigned int a0);
extern int param_token_paste(unsigned int a0);
extern unsigned long long call_token_paste(void);
extern int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
extern unsigned long long call_variadic_macro(void);
extern int param_macro_override(unsigned int a0);
extern unsigned long long call_macro_override(void);
extern unsigned long long param_include_guard(void);
extern unsigned long long call_include_guard(void);
extern int param_builtin_macros(unsigned int a0);
extern unsigned long long call_builtin_macros(void);
extern int test_preprocessing_features(void);
extern int param_asm_basic(unsigned int a0);
extern unsigned long long call_asm_basic(void);
extern unsigned long long param_asm_clobber(unsigned long ptr, unsigned int i);
extern unsigned long long call_asm_clobber(void);
extern long long param_asm_multi_insn(void);
extern unsigned long long call_asm_multi_insn(void);
extern unsigned long long param_asm_simd(unsigned long a0, unsigned long a1, unsigned long a2);
extern unsigned long long call_asm_simd(void);
extern unsigned long long param_simd_intrinsics(unsigned long a0, unsigned long a1, unsigned long a2);
extern int param_asm_atomic(unsigned long long a0, unsigned int a1);
extern int param_atomic_c11(unsigned long long a0, unsigned int a1);
extern unsigned long long call_asm_atomic(void);
extern int param_dynamic_code(unsigned int a0);
extern unsigned int param_memory_protection(void);
extern unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
extern unsigned long long call_asm_privileged(void);
extern int param_memory_clobber_demo(void);
extern long long test_asm_features(void);



// Function: __dollar_x at 0x400810
extern unsigned long long g_412f60;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
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
 return (unsigned long long)memcpy(v0, v1, v2);
}


// Function: test_preprocessing_features at 0x400ce0
int test_preprocessing_features();

// Function: test_asm_features at 0x4012f4
long long test_asm_features();

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


// Function: init_have_lse_atomics at 0x400920
unsigned int init_have_lse_atomics();

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







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_400a94 at 0x400a94
void sub_400a94(unsigned long a0)
{
 param_macro_constants(a0);
 return;
}


// Function: param_macro_constants at 0x400aa0
unsigned long long param_macro_constants(unsigned int a0)
{
 if (a0 > 0x400)
 return 64;
 return 0x200;
}


// Function: call_macro_constants at 0x400ab4
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: sub_400abc at 0x400abc
void sub_400abc(unsigned long a0, unsigned long a1)
{
 param_macro_functions(a0, a1);
 return;
}


// Function: param_macro_functions at 0x400ac0
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w1

 if (a1 <= a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400ad0
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: sub_400ad8 at 0x400ad8
void sub_400ad8(unsigned long a0)
{
 param_conditional_compile(a0);
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
 param_multi_branch_compile(a0);
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
 param_macro_recursion(a0);
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
 my_func(a0);
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
 param_token_paste(a0);
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
 param_variadic_macro(a0, a1, a2);
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
 param_builtin_macros(a0);
 return;
}


// Function: param_builtin_macros at 0x400c40
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:30");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400c94
unsigned long long call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:30");
 return 382;
}


// Function: sub_400cdc at 0x400cdc
void sub_400cdc()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x400ce0
extern char g_401550[];
extern char g_401578[];
extern char g_401598[];
extern char g_4015b8[];
extern char g_4015d8[];
extern char g_4015f8[];
extern char g_401618[];
extern char g_401648[];
extern char g_401668[];
extern char g_401688[];
extern char g_4016a8[];
extern char g_4016c8[];

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, g_401550);
 __printf_chk(1, g_401578, 64);
 __printf_chk(1, g_401598, 30);
 __printf_chk(1, g_4015b8, 32);
 __printf_chk(1, g_4015d8, 57122);
 __printf_chk(1, g_4015f8, 116);
 __printf_chk(1, g_401618, 19);
 __printf_chk(1, g_401648, 60);
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", 10, 20, 30);
 __printf_chk(1, g_401668, 60);
 __printf_chk(1, g_401688, 16);
 __printf_chk(1, g_4016a8, 500);
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:30");
 return __printf_chk(1, g_4016c8, 382);
}


// Function: sub_400e28 at 0x400e28
void sub_400e28(unsigned long a0)
{
 param_asm_basic(a0);
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
unsigned long long param_asm_clobber(unsigned long ptr, unsigned int i)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x0
 unsigned long v3; // x3
 unsigned long long v4; // x0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v2 = v1;
 v0 += 1;
 v4 = v2 + *((int *)(ptr + v0 * 4));
 v1 = v4;
 } while ((unsigned int)v0 < i);
 return v2 + v3;
}


// Function: sub_400e88 at 0x400e88
void sub_400e88()
{
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x400e90
extern char __stack_chk_guard;

unsigned long long call_asm_clobber()
{
 unsigned long long i; // x1
 unsigned long long v7; // x0
 unsigned long long v8; // x0
 unsigned long long v9; // x1
 unsigned long v10; // x2
 unsigned long long v11; // x0
 char *v0; // [bp-0x30]
 unsigned int v12; // [bp-0x24]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 i = 1;
 v7 = 0;
 v1 = 8589934593;
 v2 = 17179869187;
 v3 = 5;
 do
 {
 v8 = v7;
 v9 = i + 1;
 v11 = v8 + (&v12)[i];
 v7 = v11;
 i = v9;
 } while (i != 6);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v8 + v10;
}


// Function: param_asm_multi_insn at 0x400f10
long long param_asm_multi_insn()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (unsigned long long)memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x400f14
unsigned long long call_asm_multi_insn()
{
 return 42;
}


// Function: sub_400f1c at 0x400f1c
long long sub_400f1c()
{
 unsigned long long v0; // x0

 v0 = param_asm_simd(0, 0, 0);
 return param_asm_simd(0, 0, 0);
}


// Function: param_asm_simd at 0x400f20
unsigned long long param_asm_simd(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long i; // x3

 i = 0;
 do
 {
 *((int *)(a2 + i)) = *((int *)(a0 + i)) + *((int *)(a1 + i));
 i += 4;
 } while (i != 16);
 return 0;
}


// Function: sub_400f48 at 0x400f48
long long sub_400f48()
{
 unsigned long long v0; // x0

 v0 = param_simd_intrinsics(0, 0, 0);
 return param_simd_intrinsics(0, 0, 0);
}


// Function: param_simd_intrinsics at 0x400f50
unsigned long long param_simd_intrinsics(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long i; // x3

 i = 0;
 do
 {
 *((int *)(a2 + i)) = *((int *)(a0 + i)) + *((int *)(a1 + i));
 i += 4;
 } while (i != 16);
 return 0;
}


// Function: sub_400f78 at 0x400f78
void sub_400f78()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x400f80
extern char __stack_chk_guard;

unsigned long long call_asm_simd()
{
 unsigned long long i; // x0
 unsigned long long v12; // x0
 char *v0; // [bp-0x50]
 unsigned int v13; // [bp-0x3c]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 unsigned int v14; // [bp-0x2c]
 unsigned long long v3; // [bp-0x28]
 unsigned long long v4; // [bp-0x20]
 unsigned int v15; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int v6; // [bp-0x14]
 unsigned int v7; // [bp-0x10]
 unsigned int v8; // [bp-0xc]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 v3 = 25769803781;
 v4 = 34359738375;
 i = 8;
 v5 = 6;
 v1 = 8589934593;
 v2 = 17179869187;
 do
 {
 v12 = i + 4;
 *((int *)((char *)&v15 + i)) = *((int *)((char *)&v13 + i)) + *((int *)((char *)&v14 + i));
 i = v12;
 } while (i != 20);
 if (v9 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v5 + v6 + v7 + v8;
}


// Function: sub_40105c at 0x40105c
void sub_40105c(unsigned long a0, unsigned long a1)
{
 param_asm_atomic(a0, a1);
 return;
}


// Function: param_asm_atomic at 0x401060
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: sub_40108c at 0x40108c
void sub_40108c(unsigned long a0, unsigned long a1)
{
 param_atomic_c11(a0, a1);
 return;
}


// Function: param_atomic_c11 at 0x401090
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: sub_4010bc at 0x4010bc
void sub_4010bc()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x4010c0
extern char __stack_chk_guard;

unsigned long long call_asm_atomic()
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


// Function: param_dynamic_code at 0x401124
int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x0
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return (unsigned int)ptr;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: sub_401188 at 0x401188
void sub_401188()
{
 param_memory_protection();
 return;
}


// Function: param_memory_protection at 0x401190
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
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return (unsigned int)ptr;
 *(ptr) = 42;
 if (mprotect(ptr, v2, 3))
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


// Function: sub_40125c at 0x40125c
void sub_40125c(unsigned long a0, unsigned long a1)
{
 param_clobber_importance(a0, a1);
 return;
}


// Function: param_clobber_importance at 0x401260
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: sub_40126c at 0x40126c
void sub_40126c()
{
 call_asm_privileged();
 return;
}


// Function: call_asm_privileged at 0x401270
unsigned long long call_asm_privileged()
{
 unsigned long v2; // x0
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 {
 param_memory_protection();
 return (unsigned long)ptr & 4294967295;
 }
 munmap(ptr, v2);
 if (param_memory_protection() == 42)
 return 77;
 return 15;
}


// Function: param_memory_clobber_demo at 0x4012e4
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x4012f4
extern char __stack_chk_guard;
extern char g_4016f8[];
extern char g_401728[];
extern char g_401748[];
extern char g_401768[];
extern char g_401788[];
extern char g_4017a8[];
extern char g_4017c8[];

long long test_asm_features()
{
 unsigned long long i; // x0
 unsigned long long v8; // x2
 unsigned long long v9; // x0
 unsigned long v12; // x0
 void* ptr; // x0
 unsigned long long v14; // x2
 unsigned long long v15; // x0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x24]
 unsigned long long v2; // [bp-0x20]
 unsigned long long v3; // [bp-0x18]
 unsigned int v4; // [bp-0x10]
 unsigned long v5; // [bp-0x8]
 char v6; // [bp+0x0]

 v0 = &v6;
 v5 = *((long long *)&__stack_chk_guard);
 __printf_chk(1, g_4016f8);
 __printf_chk(1, g_401728, 15);
 i = 1;
 v8 = 0;
 v2 = 8589934593;
 v3 = 17179869187;
 v4 = 5;
 do
 {
 v9 = i + 1;
 v8 += (&v1)[i];
 i = v9;
 } while (i != 6);
 __printf_chk(1, g_401748, v8);
 __printf_chk(1, g_401768, 42);
 __printf_chk(1, g_401788, call_asm_simd() & 4294967295);
 v1 = 10;
 __printf_chk(1, g_4017a8, (int)__aarch64_ldadd4_acq_rel(5, &v1) + 5 + v1);
 v12 = sysconf(30);
 ptr = mmap(NULL, v12, 7, 34, -1, 0);
 if (!((char)arm64g_calculate_condition(2, ptr, 1, 0)))
 {
 munmap(ptr, v12);
 if (param_memory_protection() != 42)
 v14 = 15;
 else
 v14 = 77;
 }
 else
 {
 param_memory_protection();
 v14 = (unsigned long)ptr & 4294967295;
 }
 if (v5 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 v15 = __printf_chk(1, g_4017c8, v14);
 return __printf_chk(1, g_4017c8, v14);
}


// Function: sub_401478 at 0x401478
long long sub_401478()
{
 unsigned long v0; // x0
 unsigned int val = 0;
 unsigned int *ptr = NULL;

 v0 = __aarch64_ldadd4_acq_rel(val, ptr);
 return __aarch64_ldadd4_acq_rel(val, ptr);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401480
// Function: sub_401494 at 0x401494
long long sub_401494()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


