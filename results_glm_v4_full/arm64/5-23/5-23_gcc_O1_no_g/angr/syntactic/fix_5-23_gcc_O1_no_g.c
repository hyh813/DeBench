// Angr Decompilation of 5-23_gcc_O1_no_g
// Platform: AARCH64

#include <stddef.h>
#include <string.h>
#include <sys/auxv.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>

#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

void __stack_chk_fail(void);

extern void _start(void);

/* Forward declarations */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
int __aarch64_ldadd4_acq_rel(int, unsigned long long);
char arm64g_calculate_condition(unsigned long, unsigned long, unsigned long, unsigned long);

/* Global variable definitions */
unsigned int global_var = 0;
unsigned long long g_411f60 = 0;

/* ARM64 condition flag helper function */
char arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
 switch (cc_op) {
 case 2: // NE (not equal) / NZ (not zero) condition
 return cc_dep1 != 0;
 default:
 return 0;
 }
}

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x400810
extern unsigned long long g_411f60;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return ((long long(*)())g_411f60)();
}


// Function: sub_400824 at 0x400824
void* sub_400824()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 void* dst; // x0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400900
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_400924 at 0x400924
void sub_400924(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_400970 at 0x400970
void sub_400970()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400988 at 0x400988
void sub_400988()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {}





/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_4009fc at 0x4009fc
void sub_4009fc()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {}




// Function: sub_400a48 at 0x400a48
long long sub_400a48()
{
 unsigned long long v0; // x0

 frame_dummy();
 v0 = 0;
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {}




// Function: param_macro_constants at 0x400a54
unsigned long long param_macro_constants(unsigned int a0)
{
 if (a0 > 0x400)
 return 64;
 return 0x200;
}


// Function: call_macro_constants at 0x400a68
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x400a70
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w1

 if (a1 <= a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400a80
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x400a88
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x400a94
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x400a9c
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400aac
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x400ab4
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400abc
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x400ac4
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x400acc
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x400ad4
unsigned int my_func(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: param_token_paste at 0x400ae0
int param_token_paste(unsigned int a0)
{
 return a0 + 5 + a0 * 10;
}


// Function: call_token_paste at 0x400af0
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x400af8
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x400b34
int call_variadic_macro()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x400b54
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x400b60
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x400b68
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x400b70
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x400b78
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:28");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400bcc
int call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x400be4
extern const char g_401320[];
extern const char g_401348[];
extern const char g_401368[];
extern const char g_401388[];
extern const char g_4013a8[];
extern const char g_4013c8[];
extern const char g_4013e8[];
extern const char g_401418[];
extern const char g_401438[];
extern const char g_401458[];
extern const char g_401478[];
extern const char g_401498[];

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, g_401320);
 __printf_chk(1, g_401348, 64);
 __printf_chk(1, g_401368, 30);
 __printf_chk(1, g_401388, 32);
 __printf_chk(1, g_4013a8, 57122);
 __printf_chk(1, g_4013c8, 116);
 __printf_chk(1, g_4013e8, 19);
 __printf_chk(1, g_401418, 60);
 __printf_chk(1, g_401438, call_variadic_macro() & 4294967295);
 __printf_chk(1, g_401458, 16);
 __printf_chk(1, g_401478, 500);
 return __printf_chk(1, g_401498, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x400ce8
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400cf0
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400cf8
unsigned long long param_asm_clobber(unsigned long ptr, unsigned int i)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0

 if (i <= 0)
 return 0;
 v0 = 0;
 v1 = 0;
 do
 {
 v1 += *((int *)(ptr + v0 * 4));
 v0 += 1;
 } while ((unsigned int)v0 < i);
 return v1;
}


// Function: call_asm_clobber at 0x400d2c
extern char __stack_chk_guard;

unsigned long long call_asm_clobber()
{
 unsigned long long v6; // x0
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned int v3; // [bp-0x10]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 v1 = 8589934593;
 v2 = 17179869187;
 v3 = 5;
 v6 = param_asm_clobber((unsigned long)&v1, 5);
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: param_asm_multi_insn at 0x400d94
void* param_asm_multi_insn(void* a0, void* a1, unsigned long a2)
{
 void* dst; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 dst = memcpy(a0, a1, a2);
 return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x400da8
extern char __stack_chk_guard;

unsigned long long call_asm_multi_insn()
{
 unsigned long long v6; // x0
 char *v0; // [bp-0x50]
 char v1; // [bp-0x38]
 char v2; // [bp-0x28]
 char v3; // [bp-0x24]
 unsigned long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v4 = *((long long *)&__stack_chk_guard);
 strncpy(&v1, "Hello ASM", 9);
 memset(&v2, 0, 32);
 param_asm_multi_insn(&v2, &v1, 9);
 if (v2 != 72)
 {
 v6 = 4294967295;
 }
 else if (v3 == 111)
 {
 v6 = 42;
 }
 else
 {
 v6 = 4294967295;
 }
 if (v4 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v6;
}


// Function: param_asm_simd at 0x400e40
unsigned long long param_asm_simd(void* a0, void* a1, void* a2)
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


// Function: param_simd_intrinsics at 0x400e68
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


// Function: call_asm_simd at 0x400e90
extern char __stack_chk_guard;

long long call_asm_simd()
{
 char *v0; // [bp-0x50]
 unsigned int result; // [bp-0x38]
 unsigned int v2; // [bp-0x34]
 unsigned int v3; // [bp-0x30]
 unsigned int v4; // [bp-0x2c]
 unsigned int v5; // [bp-0x28]
 unsigned int v6; // [bp-0x24]
 unsigned int v7; // [bp-0x20]
 unsigned int v8; // [bp-0x1c]
 char v9; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v10; // [bp-0x14]
 unsigned int v11; // [bp-0x10]
 unsigned int v12; // [bp-0xc]
 unsigned long v13; // [bp-0x8]
 char v14; // [bp+0x0]

 v0 = &v14;
 v13 = *((long long *)&__stack_chk_guard);
 result = 1;
 v2 = 2;
 v3 = 3;
 v4 = 4;
 v5 = 5;
 v6 = 6;
 v7 = 7;
 v8 = 8;
 param_asm_simd(&result, &v5, &v9);
 if (v13 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v9 + v10 + v11 + v12;
}


// Function: param_asm_atomic at 0x400f40
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: param_atomic_c11 at 0x400f6c
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: call_asm_atomic at 0x400f98
extern char __stack_chk_guard;

long long call_asm_atomic()
{
 unsigned long long v4; // x0
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 v1 = 10;
 v4 = param_asm_atomic((unsigned long long)&v1, 5);
 if (v2 != *((long long *)&__stack_chk_guard))
 __stack_chk_fail(); /* do not return */
 return v4 + v1;
}


// Function: param_dynamic_code at 0x400ff8
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x0
 void* ptr; // x0
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0))
 return 4294967295;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: param_memory_protection at 0x40105c
unsigned int param_memory_protection()
{
 unsigned long v2; // x20
 unsigned int *ptr; // x0
 unsigned int v5; // w21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 3, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0))
 return 4294967295;
 *(ptr) = 42;
 *(ptr) = 42;
 if (mprotect(ptr, v2, 1))
 {
 munmap(ptr, v2);
 return 4294967294;
 }
 v5 = *(ptr);
 if (mprotect(ptr, v2, 3))
 {
 munmap(ptr, v2);
 return 4294967293;
 }
 *(ptr) = 100;
 munmap(ptr, v2);
 return v5;
}


// Function: param_clobber_importance at 0x40112c
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x401138
unsigned long long call_asm_privileged()
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 unsigned long v14; // cc_op
 unsigned long v15; // cc_dep1
 unsigned long v16; // cc_dep2
 unsigned long v17; // cc_ndep
 unsigned long long v6; // x19
 unsigned long long v7; // cc_op
 unsigned long v8; // cc_op
 unsigned long v9; // cc_dep1
 unsigned long v10; // cc_dep2
 unsigned long v11; // cc_ndep
 unsigned long long v12; // cc_dep1
 unsigned long long v13; // cc_dep2
 char *v0; // [bp-0x20]
 unsigned long long v1; // [bp-0x18]
 unsigned long long v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = v4;
 v2 = v5;
 v6 = param_dynamic_code(10) & 4294967295;
 if (param_memory_protection() == 42)
 {
 v7 = 3;
 v12 = ((char)arm64g_calculate_condition(v8, v9, v10, v11) ? v6 & 4294967295 : 0);
 v13 = ((char)arm64g_calculate_condition(v8, v9, v10, v11) ? 15 : 0);
 }
 else
 {
 v7 = 0;
 v12 = ((char)arm64g_calculate_condition(v14, v15, v16, v17) ? v6 & 4294967295 : 0);
 v13 = ((char)arm64g_calculate_condition(v14, v15, v16, v17) ? 15 : 0);
 }
 if (!((char)arm64g_calculate_condition(v7 | 16, v12, v13, 0)))
 return 77;
 return v6 & 4294967295;
}


// Function: param_memory_clobber_demo at 0x401170
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x401180
extern const char g_4014d8[];
extern const char g_401508[];
extern const char g_401528[];
extern const char g_401548[];
extern const char g_401568[];
extern const char g_401588[];
extern const char g_4015a8[];

int test_asm_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, g_4014d8);
 __printf_chk(1, g_401508, 15);
 __printf_chk(1, g_401528, call_asm_clobber() & 4294967295);
 __printf_chk(1, g_401548, call_asm_multi_insn() & 4294967295);
 __printf_chk(1, g_401568, call_asm_simd() & 4294967295);
 __printf_chk(1, g_401588, call_asm_atomic() & 4294967295);
 return __printf_chk(1, g_4015a8, call_asm_privileged() & 4294967295);
}


// Global string definitions for printf format strings
const char g_401320[] = "macro_constants: %d\n";
const char g_401348[] = "macro_functions: %d\n";
const char g_401368[] = "conditional_compile: %d\n";
const char g_401388[] = "multi_branch: %d\n";
const char g_4013a8[] = "macro_recursion: %d\n";
const char g_4013c8[] = "stringize: %d\n";
const char g_4013e8[] = "token_paste: %d\n";
const char g_401418[] = "variadic_macro: %d\n";
const char g_401438[] = "macro_override: %d\n";
const char g_401458[] = "include_guard: %d\n";
const char g_401478[] = "builtin_macros: %d\n";
const char g_401498[] = "test_preprocessing done: %d\n";
const char g_4014d8[] = "asm_basic: %d\n";
const char g_401508[] = "asm_clobber: %d\n";
const char g_401528[] = "asm_multi_insn: %d\n";
const char g_401548[] = "asm_simd: %d\n";
const char g_401568[] = "asm_atomic: %d\n";
const char g_401588[] = "asm_privileged: %d\n";
const char g_4015a8[] = "test_asm done: %d\n";


// Function: main at 0x40122c
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401248 at 0x401248
long long sub_401248()
{
 unsigned long long v0; // x0

 v0 = __aarch64_ldadd4_acq_rel(0, 0);
 return __aarch64_ldadd4_acq_rel(0, 0);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401250
// Function: sub_401264 at 0x401264
long long sub_401264()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


