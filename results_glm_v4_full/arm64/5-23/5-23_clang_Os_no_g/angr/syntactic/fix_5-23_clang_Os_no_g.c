// Angr Decompilation of 5-23_clang_Os_no_g
// Platform: AARCH64

#include <string.h>
#include <sys/auxv.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>

#define __ROL__(x, y) (((x) << (y)) | ((x) >> (32 - (y))))

extern void _start(void);

/* ARM64 atomic intrinsic */
unsigned int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned int *ptr);

/* Valgrind/Angr helper function */
char arm64g_calculate_condition(unsigned long cc_op, unsigned long long cc_dep1, unsigned long long cc_dep2, unsigned long cc_ndep)
{
 /* Simplified implementation for condition evaluation */
 return (char)((cc_dep1 != 0) ? 1 : 0);
}

/* CRT stub function _init removed by preprocessor */

/* CRT stub function forward declarations */
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Function: __dollar_x at 0x4007a0
unsigned long long g_411ff8 = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_411ff8;
}


// Function: sub_4007b4 at 0x4007b4
long long sub_4007b4()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400880
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_4008a4 at 0x4008a4
void sub_4008a4(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4008f0 at 0x4008f0
void sub_4008f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400908 at 0x400908
void sub_400908()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */
void deregister_tm_clones(void) {}


/* CRT stub function register_tm_clones removed by preprocessor */
void register_tm_clones(void) {}



// Function: sub_40097c at 0x40097c
void sub_40097c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */
void __do_global_dtors_aux(void) {}



// Function: sub_4009c8 at 0x4009c8
long long sub_4009c8()
{
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */
void frame_dummy(void) {}



// Function: param_macro_constants at 0x4009d4
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x4009e8
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x4009f0
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w8

 if (a1 < a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400a00
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x400a08
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x400a14
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x400a1c
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400a2c
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x400a34
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400a3c
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x400a44
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x400a4c
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x400a54
unsigned int my_func(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: param_token_paste at 0x400a60
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x400a70
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x400a78
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x400ab0
unsigned long long call_variadic_macro()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: param_macro_override at 0x400adc
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x400ae8
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x400af0
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x400af8
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x400b00
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:49");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400b50
unsigned long long call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:49");
 return 382;
}


// String constant definitions for test_preprocessing_features
char g_4010f3[] = "%d\n";
char g_40110e[] = "%d\n";
char g_401129[] = "%d\n";
char g_401144[] = "%d\n";
char g_401163[] = "%d\n";
char g_40117f[] = "%d\n";
char g_4011a9[] = "%d\n";
char g_4011c4[] = "%d\n";
char g_4011df[] = "%d\n";
char g_4011fa[] = "%d\n";
char g_401216[] = "%d\n";
char g_4012e7[] = "Testing preprocessing features\n";

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_4012e7);
 printf(&g_4010f3, 64);
 printf(&g_40110e, 30);
 printf(&g_401129, 32);
 printf(&g_401144, 57122);
 printf(&g_401163, 116);
 printf(&g_40117f, 19);
 printf(&g_4011a9, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(&g_4011c4, 60);
 printf(&g_4011df, 16);
 printf(&g_4011fa, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:49");
 return printf(&g_401216, 382);
}


// Function: param_asm_basic at 0x400ca4
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400cac
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400cb4
unsigned long long param_asm_clobber(unsigned int *cur, unsigned int a1)
{
 unsigned long long v0; // x0
 unsigned long i; // x9
 unsigned long long v2; // x0
 unsigned long v3; // x10
 unsigned long long v5; // x0

 if (a1 < 1)
 return 0;
 v0 = 0;
 i = a1;
 do
 {
 v2 = v0;
 cur += 1;
 v5 = *(cur) + v2;
 v0 = v5;
 i -= 1;
 } while (i != 1);
 return v3 + v2;
}


// Function: call_asm_clobber at 0x400ce4
unsigned long long call_asm_clobber()
{
 return 15;
}


// Function: param_asm_multi_insn at 0x400cec
long long param_asm_multi_insn()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (long long)memcpy(v0, v1, v2);
}


// Function: call_asm_multi_insn at 0x400cf0
unsigned long long call_asm_multi_insn()
{
 return 42;
}


// Function: param_asm_simd at 0x400cf8
unsigned long long param_asm_simd(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long i; // x8

 i = 0;
 do
 {
 *((int *)(a2 + i)) = *((int *)(a1 + i)) + *((int *)(a0 + i));
 i += 4;
 } while (i != 16);
 return 0;
}


// Function: param_simd_intrinsics at 0x400d20
unsigned long long param_simd_intrinsics(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long i; // x8

 i = 0;
 do
 {
 *((int *)(a2 + i)) = *((int *)(a1 + i)) + *((int *)(a0 + i));
 i += 4;
 } while (i != 16);
 return 0;
}


// Function: call_asm_simd at 0x400d48
unsigned long long call_asm_simd()
{
 return 36;
}


// Function: param_asm_atomic at 0x400d50
int param_asm_atomic(unsigned long long *a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: param_atomic_c11 at 0x400d7c
int param_atomic_c11(unsigned long long *a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: call_asm_atomic at 0x400da8
int call_asm_atomic()
{
 unsigned long long v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 10;
 return (int)__aarch64_ldadd4_acq_rel(5, (unsigned int *)&v0) + v0 + 5;
}


// Function: param_dynamic_code at 0x400de0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x20
 void* ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long long)ptr, 1, 0))
 return 4294967295;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: param_memory_protection at 0x400e48
unsigned int param_memory_protection()
{
 unsigned long v2; // x19
 unsigned int *p; // x0
 unsigned int *ptr; // x20
 unsigned int v5; // w21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 p = mmap(NULL, v2, 3, 34, -1, (unsigned long)NULL);
 if ((char)arm64g_calculate_condition(2, (unsigned long long)p, 1, 0))
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect(p, v2, 1))
 {
 v5 = 4294967294;
 }
 else
 {
 v5 = *(ptr);
 if (mprotect(ptr, v2, 3))
 v5 = 4294967293;
 else
 *(ptr) = 100;
 }
 munmap(ptr, v2);
 return v5;
}


// Function: param_clobber_importance at 0x400ef8
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x400f04
unsigned long long call_asm_privileged()
{
 unsigned long long v4; // x30
 unsigned long long v5; // x19
 unsigned long v14; // cc_ndep
 unsigned long long v6; // x19
 unsigned long v7; // cc_op
 unsigned long v8; // cc_dep1
 unsigned long v9; // cc_dep2
 unsigned long v10; // cc_ndep
 unsigned long v11; // cc_op
 unsigned long v12; // cc_dep1
 unsigned long v13; // cc_dep2
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
 if (!((char)arm64g_calculate_condition(3, ((char)arm64g_calculate_condition(v7, v8, v9, v10) ? v6 & 4294967295 : 0), ((char)arm64g_calculate_condition(v7, v8, v9, v10) ? 15 : 0), 0)))
 return v6 & 4294967295;
 }
 else
 {
 if (!((char)arm64g_calculate_condition(0, ((char)arm64g_calculate_condition(v11, v12, v13, v14) ? v6 & 4294967295 : 0), ((char)arm64g_calculate_condition(v11, v12, v13, v14) ? 15 : 0), 0)))
 return v6 & 4294967295;
 }
 return 77;
}


// Function: param_memory_clobber_demo at 0x400f3c
unsigned int global_var = 0;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// String constant definitions for test_asm_features
char g_40123f[] = "%d\n";
char g_40125b[] = "%d\n";
char g_401277[] = "%d\n";
char g_401293[] = "%d\n";
char g_4012af[] = "%d\n";
char g_4012cb[] = "%d\n";
char g_40130e[] = "Testing assembly features\n";

int test_asm_features()
{
 unsigned long v13; // cc_op
 unsigned long v14; // cc_dep1
 unsigned long v15; // cc_dep2
 unsigned long v16; // cc_ndep
 unsigned long long v21; // x1
 unsigned long long v5; // x19
 unsigned long long v6; // cc_op
 unsigned long v7; // cc_op
 unsigned long v8; // cc_dep1
 unsigned long v9; // cc_dep2
 unsigned long v10; // cc_ndep
 unsigned long long v11; // cc_dep1
 unsigned long long v12; // cc_dep2
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 puts(&g_40130e);
 printf(&g_40123f, 15);
 printf(&g_40125b, 15);
 printf(&g_401277, 42);
 printf(&g_401293, call_asm_simd() & 4294967295);
 v1 = 10;
 printf(&g_4012af, (int)__aarch64_ldadd4_acq_rel(5, &v1) + v1 + 5);
 v5 = param_dynamic_code(10) & 4294967295;
 if (param_memory_protection() == 42)
 {
 v6 = 3;
 v11 = ((char)arm64g_calculate_condition(v7, v8, v9, v10) ? v5 & 4294967295 : 0);
 v12 = ((char)arm64g_calculate_condition(v7, v8, v9, v10) ? 15 : 0);
 }
 else
 {
 v6 = 0;
 v11 = ((char)arm64g_calculate_condition(v13, v14, v15, v16) ? v5 & 4294967295 : 0);
 v12 = ((char)arm64g_calculate_condition(v13, v14, v15, v16) ? 15 : 0);
 }
 if ((char)arm64g_calculate_condition(v6, v11, v12, 0))
 v21 = 77;
 else
 v21 = v5 & 4294967295;
 return printf(&g_4012cb, v21);
}


// Function: main at 0x40100c
int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401028 at 0x401028
long long sub_401028()
{
 unsigned long v0; // x0
 unsigned int dummy_ptr = 0;

 v0 = __aarch64_ldadd4_acq_rel(0, &dummy_ptr);
 return __aarch64_ldadd4_acq_rel(0, &dummy_ptr);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401030
// Function: sub_401044 at 0x401044
long long sub_401044()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


