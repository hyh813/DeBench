// Angr Decompilation of 5-23_gcc_Os_g
// Platform: AARCH64


/* CRT stub function _init removed by preprocessor */

#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/auxv.h>
#include <sys/mman.h>

/* Declare missing functions */
extern unsigned long __getauxval(unsigned long type);
extern void __stack_chk_fail(void);
extern unsigned int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned long long *ptr);
extern int arm64g_calculate_condition(int cond, void *ptr, int op1, int op2);
extern int __printf_chk(int flag, const char *format, ...);
extern int munmap(void *addr, unsigned long length);
extern void *mmap(void *addr, unsigned long length, int prot, int flags, int fd, off_t offset);
extern int mprotect(void *addr, unsigned long len, int prot);

/* Define __ROL__ as a rotate left macro */
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* Function prototypes */
int test_asm_features(void);
int test_preprocessing_features(void);
void init_have_lse_atomics(void);

/* CRT stub functions - provide weak definitions */
void __attribute__((weak)) deregister_tm_clones(void) {}
void __attribute__((weak)) __do_global_dtors_aux(void) {}
void __attribute__((weak)) frame_dummy(void) {}

/* _start should not return - define as noreturn */
void __attribute__((noreturn)) _start(void);



// Function: __dollar_x at 0x400810
extern void* (*g_411f60)(void);

void* __dollar_x()
{
 void* v2; // x16
 void* v3; // x30
 void* v0; // [bp-0x10]
 void* v1; // [bp-0x8]

 v0 = (void*)v2;
 v1 = (void*)v3;
 return g_411f60();
}

// Function: sub_401214 at 0x401214
void* sub_401214()
{
 void* v0; // x0

 return v0;
}


// Function: sub_400824 at 0x400824
unsigned long long sub_400824()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 void* dst; // x0

 dst = memcpy(v0, v1, v2);
 return (unsigned long long)dst;
}


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

void init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)__getauxval(16), 24)) & 1;
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



// Function: sub_4009c8 at 0x4009c8
void sub_4009c8()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_400a3c at 0x400a3c
void sub_400a3c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_400a88 at 0x400a88
void sub_400a88()
{
 frame_dummy();
 frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x400a94
unsigned long long param_macro_constants(unsigned int a0)
{
 if (a0 > 0x400)
 return 64;
 return 0x200;
}


// Function: call_macro_constants at 0x400aa8
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x400ab0
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w1

 if (a1 <= a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400ac0
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x400ac8
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x400ad4
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x400adc
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400aec
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x400af4
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400afc
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x400b04
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x400b0c
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x400b14
unsigned int my_func(unsigned int a0)
{
 return 10 * a0;
}


// Function: param_token_paste at 0x400b20
int param_token_paste(unsigned int a0)
{
 return a0 + 5 + 10 * a0;
}


// Function: call_token_paste at 0x400b30
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x400b38
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 (void)a0; (void)a1; (void)a2;
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x400b74
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x400b84
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x400b90
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x400b98
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x400ba0
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x400ba8
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:34");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400bfc
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x400c04
extern char g_4012ae;
extern char g_4012d6;
extern char g_4012f1;
extern char g_40130c;
extern char g_401327;
extern char g_401346;
extern char g_401362;
extern char g_40138c;
extern char g_4013a7;
extern char g_4013c2;
extern char g_4013dd;
extern char g_4013f9;

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, &g_4012ae);
 __printf_chk(1, &g_4012d6, 64);
 __printf_chk(1, &g_4012f1, 30);
 __printf_chk(1, &g_40130c, 32);
 __printf_chk(1, &g_401327, 57122);
 __printf_chk(1, &g_401346, 116);
 __printf_chk(1, &g_401362, 19);
 __printf_chk(1, &g_40138c, 60);
 __printf_chk(1, &g_4013a7, call_variadic_macro() & 4294967295);
 __printf_chk(1, &g_4013c2, 16);
 __printf_chk(1, &g_4013dd, 500);
 return __printf_chk(1, &g_4013f9, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x400d04
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400d0c
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400d14
unsigned long long param_asm_clobber(unsigned long ptr, unsigned int a1)
{
 unsigned long long v0; // x2
 unsigned long long v1; // x0
 unsigned long long v2; // x2
 unsigned long long v3; // x2

 v0 = 0;
 v1 = 0;
 while (true)
 {
 v2 = v0;
 if ((unsigned int)v2 >= a1)
 break;
 v3 = v2 + 1;
 v1 += *((int *)(ptr + v2 * 4));
 v0 = v3;
 }
 return v1;
}


// Function: call_asm_clobber at 0x400d3c
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
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_multi_insn at 0x400da4
unsigned long long param_asm_multi_insn(unsigned long a0, unsigned long a1, unsigned long a2)
{
 void* dst; // x0

 dst = memcpy((void*)a0, (void*)a1, a2);
 return (unsigned long long)dst;
}


// Function: call_asm_multi_insn at 0x400da8
extern char __stack_chk_guard;

unsigned long long call_asm_multi_insn()
{
 unsigned long long v10; // x0
 char *v0; // [bp-0x50]
 char v1[8]; // [bp-0x38]
 unsigned short v2; // [bp-0x30]
 void* result; // [bp-0x28]
 char v4; // [bp-0x24]
 unsigned long long flag1; // [bp-0x20]
 unsigned long long flag2; // [bp-0x18]
 unsigned long long flag3; // [bp-0x10]
 unsigned long v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 v8 = *((long long *)&__stack_chk_guard);
 result = (void*)0;
 flag1 = 0;
 strncpy(v1, "Hello AS", 8);
 v2 = 77;
 flag2 = 0;
 flag3 = 0;
 result = (void*)param_asm_multi_insn((unsigned long)v1, (unsigned long)v1, 8);
 if (result != NULL && *(char*)result != 72)
 {
 v10 = 4294967295;
 }
 else if (v4 == 111)
 {
 v10 = 42;
 }
 else
 {
 v10 = 4294967295;
 }
 if (v8 == *((long long *)&__stack_chk_guard))
 return v10;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_simd at 0x400e40
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


// Function: param_simd_intrinsics at 0x400e68
unsigned long long param_simd_intrinsics()
{
 unsigned long v0; // x0
 unsigned long v1; // x1
 unsigned long v2; // x2
 unsigned long long v3; // x0

 v3 = param_asm_simd(v0, v1, v2);
 return param_asm_simd(v0, v1, v2);
}


// Function: call_asm_simd at 0x400e6c
extern char __stack_chk_guard;

long long call_asm_simd()
{
 char *v0; // [bp-0x50]
 unsigned long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 unsigned long long v4; // [bp-0x20]
 char v5; // [bp-0x18], Other Possible Types: unsigned int
 unsigned int v6; // [bp-0x14]
 unsigned int v7; // [bp-0x10]
 unsigned int v8; // [bp-0xc]
 unsigned long v9; // [bp-0x8]
 char v10; // [bp+0x0]

 v0 = &v10;
 v9 = *((long long *)&__stack_chk_guard);
 v1 = 8589934593;
 v2 = 17179869187;
 v3 = 25769803781;
 v4 = 34359738375;
 param_asm_simd(v1, v3, (unsigned long)&v5);
 if (v9 == *((long long *)&__stack_chk_guard))
 return v5 + v6 + v7 + v8;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_atomic at 0x400f08
int param_asm_atomic(unsigned long long *a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: param_atomic_c11 at 0x400f34
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned long long *)a0) + a1;
}


// Function: call_asm_atomic at 0x400f60
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
 v4 = param_asm_atomic((unsigned long long *)((unsigned long)&v1), 5);
 if (v2 == *((long long *)&__stack_chk_guard))
 return v4 + v1;
 __stack_chk_fail(); /* do not return */
}


// Function: param_dynamic_code at 0x400fc0
int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x0
 unsigned long ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = (unsigned long)mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (void*)ptr, 1, 0))
 return (unsigned int)ptr;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: param_memory_protection at 0x40102c
unsigned int param_memory_protection()
{
 unsigned long v2; // x20
 unsigned int *ptr; // x19
 unsigned int v4; // w21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = (unsigned int *)mmap(NULL, v2, 3, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return (unsigned int)ptr;
 *(ptr) = 42;
 if (mprotect(ptr, v2, 3))
 {
 munmap(ptr, v2);
 return 4294967294;
 }
 v4 = *(ptr);
 if (!mprotect(ptr, v2, 3))
 {
 *(ptr) = 100;
 munmap(ptr, v2);
 return v4;
 }
 munmap(ptr, v2);
 return 4294967293;
}


// Function: param_clobber_importance at 0x4010f8
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x401104
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
 v6 = (unsigned long long)param_dynamic_code(10) & 0xFFFFFFFF;
 if (param_memory_protection() == 42)
 {
 int cond_result1 = arm64g_calculate_condition((int)v7, (void*)v8, (int)v9, (int)v10);
 unsigned long ptr1 = cond_result1 ? v6 & 4294967295 : 0;
 unsigned long val1 = cond_result1 ? 15 : 0;
 if (!arm64g_calculate_condition(19, (void*)ptr1, (int)val1, 0))
 return 77;
 }
 else
 {
 int cond_result2 = arm64g_calculate_condition((int)v11, (void*)v12, (int)v13, (int)v14);
 unsigned long ptr2 = cond_result2 ? v6 & 4294967295 : 0;
 unsigned long val2 = cond_result2 ? 15 : 0;
 if (!arm64g_calculate_condition(16, (void*)ptr2, (int)val2, 0))
 return 77;
 }
 return v6 & 4294967295;
}


// Function: param_memory_clobber_demo at 0x40113c
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x40114c
extern char g_40142c;
extern char g_401457;
extern char g_401473;
extern char g_40148f;
extern char g_4014ab;
extern char g_4014c7;
extern char g_4014e3;

int test_asm_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __printf_chk(1, &g_40142c);
 __printf_chk(1, &g_401457, 15);
 __printf_chk(1, &g_401473, call_asm_clobber() & 4294967295);
 __printf_chk(1, &g_40148f, call_asm_multi_insn() & 4294967295);
 __printf_chk(1, &g_4014ab, call_asm_simd() & 4294967295);
 __printf_chk(1, &g_4014c7, call_asm_atomic() & 4294967295);
 return __printf_chk(1, &g_4014e3, call_asm_privileged() & 4294967295);
}


// Function: sub_4011f4 at 0x4011f4
unsigned int sub_4011f4(unsigned int *ptr, unsigned int value)
{
 unsigned int v0; // x0

 v0 = __aarch64_ldadd4_acq_rel(value, (unsigned long long *)ptr);
 return __aarch64_ldadd4_acq_rel(value, (unsigned long long *)ptr);
}


// Function: __aarch64_ldadd4_acq_rel at 0x401200
unsigned int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned long long *ptr)
{
 unsigned int old;
 old = *((unsigned int *)ptr);
 *((unsigned int *)ptr) = value;
 return old;
}



/* CRT stub function _fini removed by preprocessor */


