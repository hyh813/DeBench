// Angr Decompilation of 5-23_clang_O1_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/auxv.h>
#include <sys/mman.h>
#include <unistd.h>

/* CRT stub function _init removed by preprocessor */

// Helper macro for rotate left
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

// ARM64 atomic intrinsic declaration
extern int __aarch64_ldadd4_acq_rel(unsigned int, unsigned long long);

// Program entry point declaration
extern void _start(void);

// Decompiler helper function
extern int arm64g_calculate_condition(unsigned long long, void*, unsigned long long, unsigned long long);

// Stub implementation for arm64g_calculate_condition
int arm64g_calculate_condition(unsigned long long a0, void* a1, unsigned long long a2, unsigned long long a3)
{
 return 0;
}

// Missing function declarations
extern unsigned long __getauxval(unsigned long);

// Global variable definitions
unsigned int global_var = 0;
unsigned long long g_411ff8 = 0;
char g_401223[] = "Result: %d\n";
char g_40123e[] = "Result: %d\n";
char g_401259[] = "Result: %d\n";
char g_401274[] = "Result: %d\n";
char g_401293[] = "Result: %d\n";
char g_4012af[] = "Result: %d\n";
char g_4012d9[] = "Result: %d\n";
char g_4012f4[] = "Result: %d\n";
char g_40130f[] = "Result: %d\n";
char g_40132a[] = "Result: %d\n";
char g_401346[] = "Result: %d\n";
char g_401417[] = "Testing preprocessing features...";
char g_401478[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
char __dollar_d_2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
char g_40136f[] = "ASM Result: %d\n";
char g_40138b[] = "ASM Result: %d\n";
char g_4013a7[] = "ASM Result: %d\n";
char g_4013c3[] = "SIMD Result: %d\n";
char g_4013df[] = "Atomic Result: %d\n";
char g_4013fb[] = "Final Result: %d\n";
char g_40143e[] = "Testing ASM features...";



// Function: __dollar_x at 0x4007a0
extern unsigned long long g_411ff8;

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
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)__getauxval(16), 24) & 4278190081 & 1;
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







/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */







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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:40");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400b50
unsigned long long call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:40");
 return 382;
}


// Function: test_preprocessing_features at 0x400b94
extern char g_401223[];
extern char g_40123e[];
extern char g_401259[];
extern char g_401274[];
extern char g_401293[];
extern char g_4012af[];
extern char g_4012d9[];
extern char g_4012f4[];
extern char g_40130f[];
extern char g_40132a[];
extern char g_401346[];
extern char g_401417[];

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(&g_401417);
 printf(&g_401223, 64);
 printf(&g_40123e, 30);
 printf(&g_401259, 32);
 printf(&g_401274, 57122);
 printf(&g_401293, 116);
 printf(&g_4012af, 19);
 printf(&g_4012d9, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(&g_4012f4, 60);
 printf(&g_40130f, 16);
 printf(&g_40132a, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:40");
 return printf(&g_401346, 382);
}


// Function: param_asm_basic at 0x400ca8
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400cb0
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400cb8
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


// Function: call_asm_clobber at 0x400ce8
unsigned long long call_asm_clobber()
{
 return 15;
}


// Function: param_asm_multi_insn at 0x400cf0
long long param_asm_multi_insn(void* a0, void* a1, unsigned long a2)
{
 unsigned long long dst; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 dst = (unsigned long long)memcpy(a0, a1, a2);
 return (long long)memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x400d04
unsigned long long call_asm_multi_insn()
{
 return 42;
}


// Function: param_asm_simd at 0x400d0c
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


// Function: param_simd_intrinsics at 0x400d34
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


// Function: call_asm_simd at 0x400d5c
extern char __dollar_d_2[];
extern char g_401478[];

int call_asm_simd()
{
 unsigned long long idx; // x8
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 char v3; // [bp-0x4]

 idx = 0;
 do
 {
 *((int *)((char *)&v0 + idx)) = *((int *)&(&g_401478)[idx]) + *((int *)&(&__dollar_d_2)[idx]);
 idx += 4;
 } while (idx != 16);
 return v1 + v0 + v2 + *((int *)&v3);
}


// Function: param_asm_atomic at 0x400db0
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: param_atomic_c11 at 0x400ddc
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: call_asm_atomic at 0x400e08
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 10;
 return (int)__aarch64_ldadd4_acq_rel(5, (unsigned long long)&v0) + v0 + 5;
}


// Function: param_dynamic_code at 0x400e40
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x20
 void* ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return 4294967295;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: param_memory_protection at 0x400ea8
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
 p = mmap(NULL, v2, 3, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, p, 1, 0))
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect(p, v2, 0))
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


// Function: param_clobber_importance at 0x400f58
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x400f64
unsigned long long call_asm_privileged()
{
 unsigned long long v6; // x30
 unsigned long long v7; // x21
 unsigned long long v16; // cc_dep2
 unsigned long long v8; // x20
 unsigned long long v9; // x19
 unsigned long v10; // x20
 unsigned int v11; // w21
 void* ptr; // x19
 void* v13; // cc_dep1
 unsigned long long v14; // cc_op
 void* v15; // cc_dep1
 char *v0; // [bp-0x30]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x20]
 unsigned long long v3; // [bp-0x10]
 unsigned long long v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = v6;
 v2 = v7;
 v3 = v8;
 v4 = v9;
 v10 = sysconf(30);
 v11 = 4294967295;
 ptr = mmap(NULL, v10, 7, 34, -1, 0);
 v13 = ptr;
 if (!((char)arm64g_calculate_condition(2, ptr, 1, 0)))
 {
 munmap(ptr, v10);
 v11 = 15;
 }
 if (param_memory_protection() == 42)
 {
 v14 = 4;
 v15 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? ptr : 0x40000000);
 v16 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? 18446744073709551615 : 0);
 }
 else
 {
 v14 = 0;
 v15 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? ptr : 0x40000000);
 v16 = ((char)arm64g_calculate_condition(2, v13, 1, 0) ? 18446744073709551615 : 0);
 }
 if (!((char)arm64g_calculate_condition(v14 | 16, v15, v16, 0)))
 return v11;
 return 77;
}


// Function: param_memory_clobber_demo at 0x400fe4
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x400ff4
extern char __dollar_d_2[];
extern char g_40136f[];
extern char g_40138b[];
extern char g_4013a7[];
extern char g_4013c3[];
extern char g_4013df[];
extern char g_4013fb[];
extern char g_40143e[];
extern char g_401478[];

int test_asm_features()
{
 unsigned long long idx; // x8
 unsigned long v9; // x20
 unsigned int v10; // w21
 void* ptr; // x19
 void* v12; // cc_dep1
 unsigned long long v13; // cc_op
 void* v14; // cc_dep1
 unsigned long long v15; // cc_dep2
 unsigned long long v16; // x1
 unsigned int v0; // [bp-0x40]
 unsigned int v1; // [bp-0x40]
 unsigned int v2; // [bp-0x3c]
 unsigned int v3; // [bp-0x38]
 unsigned int v4; // [bp-0x34]
 char *v5; // [bp-0x30]
 char v6; // [bp+0x0]

 v5 = &v6;
 puts(&g_40143e);
 printf(&g_40136f, 15);
 printf(&g_40138b, 15);
 printf(&g_4013a7, 42);
 idx = 0;
 do
 {
 *((int *)((char *)&v1 + idx)) = *((int *)&(&g_401478)[idx]) + *((int *)&(&__dollar_d_2)[idx]);
 idx += 4;
 } while (idx != 16);
 printf(&g_4013c3, v2 + v0 + v3 + v4);
 v1 = 10;
 printf(&g_4013df, (int)__aarch64_ldadd4_acq_rel(5, (unsigned long long)&v1) + v1 + 5);
 v9 = sysconf(30);
 v10 = 4294967295;
 ptr = mmap(NULL, v9, 7, 34, -1, 0);
 v12 = ptr;
 if (!((char)arm64g_calculate_condition(2, ptr, 1, 0)))
 {
 munmap(ptr, v9);
 v10 = 15;
 }
 if (param_memory_protection() == 42)
 {
 v13 = 4;
 v14 = ((char)arm64g_calculate_condition(2, v12, 1, 0) ? ptr : 0x40000000);
 v15 = ((char)arm64g_calculate_condition(2, v12, 1, 0) ? 18446744073709551615 : 0);
 }
 else
 {
 v13 = 0;
 v14 = ((char)arm64g_calculate_condition(2, v12, 1, 0) ? ptr : 0x40000000);
 v15 = ((char)arm64g_calculate_condition(2, v12, 1, 0) ? 18446744073709551615 : 0);
 }
 if ((char)arm64g_calculate_condition(v13 | 16, v14, v15, 0))
 v16 = 77;
 else
 v16 = v10;
 return printf(&g_4013fb, v16);
}


// Function: main at 0x401144
int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401160
// Function: sub_401174 at 0x401174
long long sub_401174()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


