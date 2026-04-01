// Angr Decompilation of 5-23_clang_Os_g
// Platform: AARCH64

#include <stddef.h>    // for NULL
#include <string.h>    // for memcpy
#include <sys/auxv.h>  // for getauxval
#include <unistd.h>    // for sysconf
#include <stdlib.h>    // for abort
#include <stdio.h>     // for printf, puts
#include <sys/mman.h>  // for mmap, munmap, mprotect

// Declare missing functions
extern int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned int *ptr);
extern int arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep);

// Declare __getauxval (glibc internal)
extern unsigned long __getauxval(unsigned long type);

// Stub implementations for missing external functions
int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned int *ptr)
{
 // Atomic load-add: returns the old value, adds value to *ptr
 if (ptr == NULL) return 0;
 unsigned int old = *ptr;
 *ptr = old + value;
 return old;
}

int arm64g_calculate_condition(unsigned long cc_op, unsigned long cc_dep1, unsigned long cc_dep2, unsigned long cc_ndep)
{
 // Simplified condition calculation - returns 1 if condition is true
 // cc_op values: 0=COND_EQ, 1=COND_NE, 2=COND_HS, 3=COND_LO, etc.
 switch (cc_op)
 {
 case 0: return (cc_dep1 == cc_dep2) ? 1 : 0;  // COND_EQ
 case 1: return (cc_dep1 != cc_dep2) ? 1 : 0;  // COND_NE
 case 2: return (cc_dep1 >= cc_dep2) ? 1 : 0;  // COND_HS
 case 3: return (cc_dep1 < cc_dep2) ? 1 : 0;   // COND_LO
 default: return (cc_dep1 != 0) ? 1 : 0;
 }
}

unsigned long __getauxval(unsigned long type)
{
 // Stub implementation - returns 0 for unknown types
 // Type 16 = AT_HWCAP (hardware capabilities)
 return 0;
}

// Define missing global variables (weak definitions for linking)
char __aarch64_have_lse_atomics = 0;
unsigned int global_var = 0;

// Define a simple exit function to prevent jumping to NULL
void default_exit_handler(void)
{
 while(1) { } // Infinite loop
}

// Define function pointer for exit handler
void (*g_411ff8)(void) = &default_exit_handler;

// CRT stub function declarations
void deregister_tm_clones(void);
void __do_global_dtors_aux(void);
int frame_dummy(void);
void _start(void);

// Forward declaration for main (called by _start)
int main(void);

// Stub implementations for CRT functions
void deregister_tm_clones(void)
{
 // Empty stub - nothing to unregister
}

void __do_global_dtors_aux(void)
{
 // Empty stub - no dtors to run
}

int frame_dummy(void)
{
 return 0;
}

// _start implementation - entry point (never called directly)
void _start(void)
{
 // Call main and exit
 // In a real program, this would be more complex
 main();
 // If main returns, exit (should not reach here)
 while(1) { } // Infinite loop to prevent return
}

// Computed goto macro (not actually used in this binary)
#define GOTO_LABEL(idx) do { } while(0)

// Define __ROL__ (rotate left) macro
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

/* CRT stub function _init removed by preprocessor */


// Define string data at referenced addresses (used by printf/puts)
char *g_4010f3 = "param_asm_basic returned: %d\n";
char *g_40110e = "call_asm_basic returned: %d\n";
char *g_401129 = "call_asm_clobber returned: %d\n";
char *g_401144 = "call_asm_multi_insn returned: %d\n";
char *g_401163 = "call_asm_recursion returned: %d\n";
char *g_40117f = "call_stringize returned: %llu\n";
char *g_4011a9 = "LOG: Values: %d, %d, %d\n";
char *g_4011c4 = "call_token_paste returned: %llu\n";
char *g_4011df = "call_macro_override returned: %llu\n";
char *g_4011fa = "call_include_guard returned: %llu\n";
char *g_401216 = "call_builtin_macros returned: %llu\n";
char *g_40123f = "param_asm_basic returned: %d\n";
char *g_40125b = "call_asm_basic returned: %d\n";
char *g_401277 = "param_asm_multi_insn returned: %d\n";
char *g_401293 = "call_asm_simd returned: %llu\n";
char *g_4012af = "call_asm_atomic returned: %d\n";
char *g_4012cb = "call_asm_privileged returned: %llu\n";
char *g_4012e7 = "Testing preprocessing features:\n";
char *g_40130e = "Testing asm features:\n";


// Function: __dollar_x at 0x4007a0
// Note: g_411ff8 is defined globally as a function pointer

long long __dollar_x(unsigned long long v2, unsigned long long v3)
{
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 // Computed goto using function pointer - call the exit handler
 g_411ff8();
 return 0;
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
 // Call the default exit handler instead of _start (which is the entry point)
 g_411ff8();
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




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40097c at 0x40097c
void sub_40097c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4009c8 at 0x4009c8
long long sub_4009c8()
{
 unsigned long long v0; // x0

 v0 = frame_dummy();
 return frame_dummy();
}



/* CRT stub function frame_dummy removed by preprocessor */



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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:47");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400b50
unsigned long long call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:47");
 return 382;
}


// Function: test_preprocessing_features at 0x400b94
extern char *g_4010f3;
extern char *g_40110e;
extern char *g_401129;
extern char *g_401144;
extern char *g_401163;
extern char *g_40117f;
extern char *g_4011a9;
extern char *g_4011c4;
extern char *g_4011df;
extern char *g_4011fa;
extern char *g_401216;
extern char *g_4012e7;

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4012e7);
 printf(g_4010f3, 64);
 printf(g_40110e, 30);
 printf(g_401129, 32);
 printf(g_401144, 57122);
 printf(g_401163, 116);
 printf(g_40117f, 19);
 printf(g_4011a9, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(g_4011c4, 60);
 printf(g_4011df, 16);
 printf(g_4011fa, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:47");
 return printf(g_401216, 382);
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
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: param_atomic_c11 at 0x400d7c
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int *)a0) + a1;
}


// Function: call_asm_atomic at 0x400da8
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 10;
 return (int)__aarch64_ldadd4_acq_rel(5, &v0) + v0 + 5;
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
 if ((char)arm64g_calculate_condition(2, (unsigned long)ptr, 1, 0))
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
 p = mmap(NULL, v2, 3, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, (unsigned long)p, 1, 0))
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect(ptr, v2, 3))
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
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x400f4c
extern char *g_40123f;
extern char *g_40125b;
extern char *g_401277;
extern char *g_401293;
extern char *g_4012af;
extern char *g_4012cb;
extern char *g_40130e;

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
 puts(g_40130e);
 printf(g_40123f, 15);
 printf(g_40125b, 15);
 printf(g_401277, 42);
 printf(g_401293, call_asm_simd() & 4294967295);
 v1 = 10;
 printf(g_4012af, (int)__aarch64_ldadd4_acq_rel(5, &v1) + v1 + 5);
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
 return printf(g_4012cb, v21);
}


// Function: main at 0x40100c
int main(void)
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
 return 0;
}


// Function: sub_401044 at 0x401044
long long sub_401044()
{
 unsigned long v0 = 0; // x0

 return (long long)v0;
}



/* CRT stub function _fini removed by preprocessor */


