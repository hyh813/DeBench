// Angr Decompilation of 5-23_clang_O0_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/auxv.h>
#include <stddef.h>
#include <sys/mman.h>
#include <unistd.h>

/* CRT stub function _init removed by preprocessor */

// Define __ROL__ if not available (rotate left)
#ifndef __ROL__
#define __ROL__(val, n) (((val) << (n)) | ((val) >> (32 - (n))))
#endif

// Declare missing functions
extern void abort(void);

// Forward declarations for CRT stub functions
// _start is provided by CRT, removed to avoid multiple definition

// Stub implementations for CRT functions
void deregister_tm_clones(void) { }
void __do_global_dtors_aux(void) { }
unsigned long long frame_dummy(void) { return 0; }

// Forward declaration for header_func
// (definition appears later in this file)
unsigned int header_func(unsigned int a0);

// Standard library function declarations
extern void* memcpy(void* dest, const void* src, size_t n);
extern size_t strlen(const char* s);
extern int printf(const char* format, ...);
extern char* strncpy(char* dest, const char* src, size_t n);
extern long sysconf(int name);
extern void* mmap(void* addr, size_t length, int prot, int flags, int fd, off_t offset);
extern int munmap(void* addr, size_t length);
extern int mprotect(void* addr, size_t len, int prot);
extern unsigned long getauxval(unsigned long type);



// Define missing global variables
char __aarch64_have_lse_atomics = 0;
unsigned int global_var = 0;

// Format strings for test_preprocessing_features
char g_401719[] = "Testing preprocessing features\n";
char g_401741[] = "Macro constants: %d\n";
char g_40175c[] = "Macro functions: %d\n";
char g_401777[] = "Conditional compile: %d\n";
char g_401792[] = "Multi branch compile: %d\n";
char g_4017b1[] = "Macro recursion: %d\n";
char g_4017cd[] = "Stringize: %d\n";
char g_4017f7[] = "Token paste: %d\n";
char g_401812[] = "Variadic macro: %d\n";
char g_40182d[] = "Macro override: %d\n";
char g_401848[] = "Include guard: %d\n";
char g_401864[] = "Builtin macros: %d\n";

// Format strings for test_asm_features
char g_401897[] = "Testing ASM features\n";
char g_4018c2[] = "ASM basic: %d\n";
char g_4018de[] = "ASM clobber: %d\n";
char g_4018fa[] = "ASM multi insn: %d\n";
char g_401916[] = "ASM SIMD: %d\n";
char g_401932[] = "ASM atomic: %d\n";
char g_40194e[] = "ASM privileged: %d\n";



// Function: __dollar_x at 0x4007a0
long long __dollar_x()
{
 return 0;
}


// Function: sub_4007b4 at 0x4007b4
long long sub_4007b4()
{
 void* v0 = NULL; // x0
 void* v1 = NULL; // x1
 unsigned long v2 = 0; // x2
 unsigned long long dst; // x0

 dst = (unsigned long long)memcpy(v0, v1, v2);
 return (unsigned long long)memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400880
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
unsigned int param_macro_constants(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 if (a0 <= 0x400)
 {
 v0 = 0x200;
 return v0;
 }
 v0 = 64;
 return v0;
}


// Function: call_macro_constants at 0x400a10
int call_macro_constants()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x400a28
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = a0 * a0;
 if (a0 > a1)
 v0 = a0;
 else
 v0 = a1;
 return v1 + v0;
}


// Function: call_macro_functions at 0x400a84
int call_macro_functions()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_macro_functions(5, 3);
}


// Function: param_conditional_compile at 0x400aa0
int param_conditional_compile(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0;
 v0 = 3 * v0 + 2;
 return v0;
}


// Function: call_conditional_compile at 0x400ad0
int call_conditional_compile()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x400ae8
int param_multi_branch_compile(unsigned int a0)
{
 return 5 * a0 + 57072;
}


// Function: call_multi_branch_compile at 0x400b0c
int call_multi_branch_compile()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x400b24
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400b78
int call_macro_recursion()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_macro_recursion(100);
}


// Function: param_stringize at 0x400b90
int param_stringize(unsigned int a0)
{
 unsigned long long len; // [bp-0x40]
 unsigned long long v1; // [bp-0x38]
 char *v2; // [bp-0x30]
 char *v3; // [bp-0x28]
 char *v4; // [bp-0x20]
 unsigned int v5; // [bp-0x14]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 v5 = a0;
 v4 = "Hello World";
 v3 = "1_2.3";
 v2 = "155";
 len = strlen(v4);
 v1 = len + strlen(v3);
 return (unsigned int)v1 + (unsigned int)strlen(v2);
}


// Function: call_stringize at 0x400c08
int call_stringize()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_stringize(0);
}


// Function: my_func at 0x400c20
unsigned int my_func(unsigned int a0)
{
 return 10 * a0;
}


// Function: param_token_paste at 0x400c3c
unsigned int param_token_paste(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = my_func(a0);
 v0 = a0 + 5;
 v1 += v0;
 return v1;
}


// Function: call_token_paste at 0x400c84
int call_token_paste()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_token_paste(5);
}


// Function: param_variadic_macro at 0x400c9c
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x20]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 v0 = 5;
 return 10 * v0 + a0;
}


// Function: call_variadic_macro at 0x400cf4
int call_variadic_macro()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x400d14
int param_macro_override(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0 + 1;
 v0 = (a0 * 2 | a0 >> 31) & 4294967294;
 return v1 + v0;
}


// Function: call_macro_override at 0x400d48
int call_macro_override()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_macro_override(5);
}


// Function: param_include_guard at 0x400d60
long long param_include_guard()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = header_func(5);
 return header_func(5);
}


// Function: header_func at 0x400d78
unsigned int header_func(unsigned int a0)
{
 return 100 * a0;
}




// Function: __aarch64_ldadd4_acq_rel at 0x401640
int __aarch64_ldadd4_acq_rel(unsigned int val, unsigned long long *addr)
{
 int result = (int)val;
 *addr += val;
 return result;
}


// Function: arm64g_calculate_condition at 0x401654
int arm64g_calculate_condition(int cond, unsigned long long val1, unsigned long long val2, unsigned long long val3)
{
 // Simplified condition calculation for ARM64
 if (cond == 18) return val1 != 0;
 if (cond == 25) return val1 == val2;
 return 1;
}


// Function: call_include_guard at 0x400d94
long long call_include_guard()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_include_guard();
 return param_include_guard();
}


// Function: param_builtin_macros at 0x400da8
int param_builtin_macros(unsigned int a0)
{
 unsigned int v0; // [bp-0x4c]
 unsigned int flag1; // [bp-0x48]
 unsigned int result; // [bp-0x44]
 unsigned long long v3; // [bp-0x40]
 unsigned long long v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x30]
 unsigned int v6; // [bp-0x24]
 unsigned long long v7; // [bp-0x20]
 char *v8; // [bp-0x10]
 char v9; // [bp+0x0]

 v8 = &v9;
 char *v7_str = "src/5-23.c";
 v6 = 279;
 char *v5_str = "param_builtin_macros";
 char *v4_str = "Jan 15 2026";
 char *v3_str = "03:01:37";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v7_str, v5_str, v6, v4_str, v3_str);
 result = 0;
 flag1 = 1;
 v0 = 2;
 return a0 + v6 + result + flag1 + v0;
}


// Function: call_builtin_macros at 0x400e54
int call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x400e6c
int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_401719);
 printf(g_401741, call_macro_constants() & 4294967295);
 printf(g_40175c, call_macro_functions() & 4294967295);
 printf(g_401777, call_conditional_compile() & 4294967295);
 printf(g_401792, call_multi_branch_compile() & 4294967295);
 printf(g_4017b1, call_macro_recursion() & 4294967295);
 printf(g_4017cd, call_stringize() & 4294967295);
 printf(g_4017f7, call_token_paste() & 4294967295);
 printf(g_401812, call_variadic_macro() & 4294967295);
 printf(g_40182d, call_macro_override() & 4294967295);
 printf(g_401848, call_include_guard() & 4294967295);
 return printf(g_401864, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x400f64
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0 + 10;
 return v0;
}


// Function: call_asm_basic at 0x400f84
int call_asm_basic()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x400f9c
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1)
{
 unsigned int i; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = 0;
 for (i = 0; a1 > i; i += 1)
 {
 v1 += *((int *)(ptr + i * 4));
 }
 return v1;
}


// Function: call_asm_clobber at 0x401000
int call_asm_clobber()
{
 unsigned long long v0; // [bp-0x30]
 unsigned int v1; // [bp-0x20]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = 316912650112397582603894390785;
 v1 = 5;
 return param_asm_clobber((unsigned long)&v0, 5);
}


// Function: param_asm_multi_insn at 0x40103c
long long param_asm_multi_insn(void* a0, void* a1, unsigned long a2)
{
 unsigned long long dst; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 dst = (unsigned long long)memcpy(a0, a1, a2);
 return (unsigned long long)memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x401070
unsigned int call_asm_multi_insn()
{
 unsigned long long v9; // x30
 unsigned int v10; // w8
 unsigned int v0; // [bp-0x44]
 unsigned long long result; // [bp-0x40]
 char v2; // [bp-0x40]
 char v3; // [bp-0x3c]
 unsigned long long flag1; // [bp-0x30]
 char v5; // [bp-0x20]
 char *v6; // [bp-0x10]
 unsigned long long v7; // [bp-0x8]
 char v8; // [bp+0x0]

 v6 = &v8;
 v7 = v9;
 strncpy(&v5, "Hello ASM", 9);
 result = 0;
 flag1 = 0;
 param_asm_multi_insn(&v2, &v5, 9);
 v0 = 0;
 if (v2 == 72)
 {
 if (v3 != 111)
 v10 = 0;
 else
 v10 = 1;
 v0 = v10;
 }
 if (!((char)arm64g_calculate_condition(25, (unsigned long long)(v0 & 1), 0, 0)))
 return 4294967295;
 return 42;
}


// Function: param_asm_simd at 0x4010f8
unsigned long long param_asm_simd(unsigned long a0, unsigned long a1, unsigned long ptr)
{
 unsigned int i; // [bp-0x1c]

 for (i = 0; 4 > i; i += 1)
 {
 *((int *)(ptr + i * 4)) = *((int *)(a0 + i * 4)) + *((int *)(a1 + i * 4));
 }
 return 0;
}


// Function: param_simd_intrinsics at 0x401168
unsigned long long param_simd_intrinsics(unsigned long a0, unsigned long a1, unsigned long ptr)
{
 unsigned int v0; // [bp-0x1c]

 for (v0 = 0; 4 > v0; v0 += 1)
 {
 *((int *)(ptr + v0 * 4)) = *((int *)(a0 + v0 * 4)) + *((int *)(a1 + v0 * 4));
 }
 return 0;
}


// Function: call_asm_simd at 0x4011d8
int call_asm_simd()
{
 char v0; // [bp-0x40], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x3c]
 unsigned int v2; // [bp-0x38]
 unsigned int v3; // [bp-0x34]
 unsigned long long v4; // [bp-0x30]
 unsigned long long v5; // [bp-0x20]
 char *v6; // [bp-0x10]
 char v7; // [bp+0x0]

 v6 = &v7;
 v5 = 316912650112397582603894390785;
 v4 = 633825300243241909290088267781;
 param_asm_simd((unsigned long)&v5, (unsigned long)&v4, (unsigned long)&v0);
 return v0 + v1 + v2 + v3;
}


// Function: param_asm_atomic at 0x40123c
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x20]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v0 = __aarch64_ldadd4_acq_rel(a1, (unsigned long long *)a0);
 v1 = v0;
 return v1 + a1;
}


// Function: param_atomic_c11 at 0x401288
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x24]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = __aarch64_ldadd4_acq_rel(a1, (unsigned long long *)a0);
 return v0 + a1;
}


// Function: call_asm_atomic at 0x4012cc
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 v1 = 10;
 v0 = param_asm_atomic((unsigned long long)&v1, 5);
 return v1 + v0;
}


// Function: param_dynamic_code at 0x401308
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x2c]
 void* ptr; // [bp-0x28]
 unsigned long v2; // [bp-0x20]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(18, (unsigned long long)ptr, 1, 0))
 {
 v0 = a0 + 5;
 munmap(ptr, v2);
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: param_memory_protection at 0x401394
unsigned int param_memory_protection()
{
 unsigned int v0; // [bp-0x34]
 unsigned int *ptr; // [bp-0x30]
 unsigned long v3; // [bp-0x20]
 unsigned int v4; // [bp-0x14]
 char *v5; // [bp-0x10]
 char v6; // [bp+0x0]

 v5 = &v6;
 v3 = sysconf(30);
 ptr = mmap(NULL, v3, 3, 34, -1, 0);
 if (!((char)arm64g_calculate_condition(18, (unsigned long long)ptr, 1, 0)))
 {
 v4 = 4294967295;
 return v4;
 }
 ptr = ptr;
 *(ptr) = 42;
 if (mprotect(ptr, v3, 1))
 {
 munmap(ptr, v3);
 v4 = 4294967294;
 return v4;
 }
 v0 = *(ptr);
 if (!mprotect(ptr, v3, 3))
 {
 *(ptr) = 100;
 munmap(ptr, v3);
 v4 = v0;
 return v4;
 }
 munmap(ptr, v3);
 v4 = 4294967293;
 return v4;
}


// Function: param_clobber_importance at 0x40149c
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x4014c0
unsigned int call_asm_privileged()
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 unsigned int v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char v5; // [bp+0x0]

 v4 = &v5;
 v2 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v0 = param_clobber_importance(3, 7);
 if (v2 == 15 && v1 == 42 && v0 == 20)
 {
 v3 = 77;
 return v3;
 }
 v3 = v2;
 return v3;
}


// Function: param_memory_clobber_demo at 0x401548
unsigned int param_memory_clobber_demo()
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = 50;
 v0 = v1 + global_var;
 return v0;
}


// Function: test_asm_features at 0x401574
int test_asm_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf(g_401897);
 printf(g_4018c2, call_asm_basic() & 4294967295);
 printf(g_4018de, call_asm_clobber() & 4294967295);
 printf(g_4018fa, call_asm_multi_insn() & 4294967295);
 printf(g_401916, call_asm_simd() & 4294967295);
 printf(g_401932, call_asm_atomic() & 4294967295);
 return printf(g_40194e, call_asm_privileged() & 4294967295);
}


// Function: main at 0x401608
int main(void)
{
 unsigned int result; // [bp-0x18]
 unsigned int flag1; // [bp-0x14]
 char *v2; // [bp-0x10]
 char v3; // [bp+0x0]

 v2 = &v3;
 result = 0;
 flag1 = 0;
 test_preprocessing_features();
 test_asm_features();
 return result;
}






/* CRT stub function _fini removed by preprocessor */


