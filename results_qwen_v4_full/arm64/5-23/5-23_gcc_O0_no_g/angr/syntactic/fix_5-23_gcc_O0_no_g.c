// Angr Decompilation of 5-23_gcc_O0_no_g
// Platform: AARCH64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/auxv.h>
#include <sys/mman.h>
#include <unistd.h>

/* CRT stub function _init removed by preprocessor */

// Define __ROL__ macro for rotate left
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (32 - (n))))

// Declare _start function
extern void _start(void);



// Function: __dollar_x at 0x400880
unsigned long long g_412f50 = 0;

long long __dollar_x()
{
 unsigned long long v2; // x16
 unsigned long long v3; // x30
 unsigned long long v0; // [bp-0x10]
 unsigned long long v1; // [bp-0x8]

 v0 = v2;
 v1 = v3;
 return g_412f50;
}


// Function: sub_400894 at 0x400894
void* sub_400894()
{
 void* v0; // x0
 void* v1; // x1
 unsigned long v2; // x2
 void* dst; // x0

 dst = memcpy(v0, v1, v2);
 return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400980
extern char __aarch64_have_lse_atomics;

unsigned int init_have_lse_atomics()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 4278190081 & 1;
}


// Function: sub_4009a4 at 0x4009a4
void sub_4009a4(unsigned long a0)
{
 _start(); /* do not return */
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4009f0 at 0x4009f0
void sub_4009f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Declare CRT stub functions
extern void __stack_chk_fail(void);

// Declare ARM64 atomic intrinsic
extern unsigned int __aarch64_ldadd4_acq_rel(unsigned int, unsigned long long);

// Declare arm64g_calculate_condition (decompiler artifact)
extern int arm64g_calculate_condition(int, void*, int, int);

// Stub implementation for arm64g_calculate_condition
int arm64g_calculate_condition(int a0, void* a1, int a2, int a3)
{
 return 1;
}





/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */







/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x400ad4
unsigned long long param_macro_constants(unsigned int a0)
{
 if (a0 <= 0x400)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x400afc
unsigned long long call_macro_constants()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_macro_constants(0x800);
 return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x400b14
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned long v0; // x0

 if (a0 <= a1)
 v0 = a1;
 else
 v0 = a0;
 return a0 * a0 + v0;
}


// Function: call_macro_functions at 0x400b48
unsigned long long call_macro_functions()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_macro_functions(5, 3);
 return param_macro_functions(5, 3);
}


// Function: param_conditional_compile at 0x400b64
int param_conditional_compile(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0;
 v0 = ((v0 * 2 | v0 >> 31) & 4294967294) + v0 + 2;
 return v0;
}


// Function: call_conditional_compile at 0x400b98
int call_conditional_compile()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x400bb0
int param_multi_branch_compile(unsigned int a0)
{
 return ((a0 * 4 | a0 >> 30) & 0xfffffffc) + a0 + 57072;
}


// Function: call_multi_branch_compile at 0x400bd8
int call_multi_branch_compile()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x400bf0
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400c08
int call_macro_recursion()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_macro_recursion(100);
}


// Function: param_stringize at 0x400c20
int param_stringize(unsigned int a0)
{
 unsigned int v6; // w0
 unsigned int v7; // w0
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x24]
 char *v2; // [bp-0x18]
 char *v3; // [bp-0x10]
 char *v4; // [bp-0x8]
 char v5; // [bp+0x0]

 v0 = &v5;
 v1 = a0;
 v2 = "Hello World";
 v3 = "1_2.3";
 v4 = "155";
 v6 = strlen(v2);
 v7 = strlen(v3);
 return v6 + v7 + (unsigned int)strlen(v4);
}


// Function: call_stringize at 0x400c84
int call_stringize()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_stringize(0);
}


// Function: my_func at 0x400c9c
unsigned int my_func(unsigned int a0)
{
 return ((((a0 * 4 | a0 >> 30) & 0xfffffffc) + a0) * 2 | ((a0 * 4 | a0 >> 30) & 0xfffffffc) + a0 >> 31) & 4294967294;
}


// Function: param_token_paste at 0x400cc0
unsigned int param_token_paste(unsigned int a0)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x8]
 unsigned int v2; // [bp-0x4]
 char v3; // [bp+0x0]

 v0 = &v3;
 v1 = my_func(a0);
 v2 = a0 + 5;
 v1 += v2;
 return v1;
}


// Function: call_token_paste at 0x400d00
int call_token_paste()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_token_paste(5);
}


// Function: param_variadic_macro at 0x400d18
extern char __stack_chk_guard;

unsigned long long param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x24]
 unsigned long v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v0 = &v3;
 v2 = *((long long *)&__stack_chk_guard);
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 v1 = 5;
 if (v2 == *((long long *)&__stack_chk_guard))
 return (__ROL__((__ROL__(v1, 2) & 0xfffffffc) + v1, 1) & 4294967294) + a0 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: call_variadic_macro at 0x400db0
unsigned long long call_variadic_macro()
{
 unsigned long long v2; // x0
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = param_variadic_macro(10, 20, 30);
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x400dd0
int param_macro_override(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = a0 + 1;
 v1 = (a0 * 2 | a0 >> 31) & 4294967294;
 return v0 + v1;
}


// Function: call_macro_override at 0x400e04
int call_macro_override()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_macro_override(5);
}


// Function: header_func at 0x400e1c
unsigned int header_func(unsigned int a0)
{
 return 100 * a0;
}


// Function: param_include_guard at 0x400e38
int param_include_guard()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return header_func(5);
}


// Function: call_include_guard at 0x400e50
int call_include_guard()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_include_guard();
}


// Function: param_builtin_macros at 0x400e64
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x50]
 unsigned int v1; // [bp-0x30]
 unsigned int result; // [bp-0x2c]
 unsigned int flag1; // [bp-0x28]
 unsigned int v4; // [bp-0x24]
 char *v5; // [bp-0x20]
 char *v6; // [bp-0x18]
 char *v7; // [bp-0x10]
 char *v8; // [bp-0x8]
 char v9; // [bp+0x0]

 v0 = &v9;
 v5 = "src/5-23.c";
 v1 = 279;
 v6 = "param_builtin_macros";
 v7 = "Jan 15 2026";
 v8 = "03:01:26";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v5, v6, v1, v7, v8);
 result = 0;
 flag1 = 1;
 v4 = 2;
 return a0 + v1 + result + flag1 + v4;
}


// Function: call_builtin_macros at 0x400f08
int call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x400f20
char g_401840[] = "Testing preprocessing features";
char g_401868[] = "macro_constants: %d\n";
char g_401888[] = "macro_functions: %d\n";
char g_4018a8[] = "conditional_compile: %d\n";
char g_4018c8[] = "multi_branch_compile: %d\n";
char g_4018e8[] = "macro_recursion: %d\n";
char g_401908[] = "stringize: %d\n";
char g_401938[] = "token_paste: %d\n";
char g_401958[] = "variadic_macro: %d\n";
char g_401978[] = "macro_override: %d\n";
char g_401998[] = "include_guard: %d\n";
char g_4019b8[] = "builtin_macros: %d\n";

int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401840);
 printf(g_401868, call_macro_constants() & 4294967295);
 printf(g_401888, call_macro_functions() & 4294967295);
 printf(g_4018a8, call_conditional_compile() & 4294967295);
 printf(g_4018c8, call_multi_branch_compile() & 4294967295);
 printf(g_4018e8, call_macro_recursion() & 4294967295);
 printf(g_401908, call_stringize() & 4294967295);
 printf(g_401938, call_token_paste() & 4294967295);
 printf(g_401958, call_variadic_macro() & 4294967295);
 printf(g_401978, call_macro_override() & 4294967295);
 printf(g_401998, call_include_guard() & 4294967295);
 return printf(g_4019b8, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x40101c
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x4]

 v0 = a0 + 10;
 return v0;
}


// Function: call_asm_basic at 0x40103c
int call_asm_basic()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x401054
unsigned int param_asm_clobber(unsigned long a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 unsigned int i; // [bp-0x4]

 v0 = 0;
 for (i = 0; i < a1; i += 1)
 {
 v0 += *((int *)(a0 + (__ROL__(i, 2) & 18446744073709551612)));
 }
 return v0;
}


// Function: call_asm_clobber at 0x4010b4
extern char __stack_chk_guard;

long long call_asm_clobber()
{
 unsigned int v6; // w0
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


// Function: param_asm_multi_insn at 0x40112c
void* param_asm_multi_insn(void* a0, void* a1, unsigned long a2)
{
 void* dst; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 dst = memcpy(a0, a1, a2);
 return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x40115c
extern char __stack_chk_guard;

long long call_asm_multi_insn()
{
 unsigned int v6; // w0
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
 if (v2 == 72 && v3 == 111)
 v6 = 42;
 else
 v6 = 4294967295;
 if (v4 == *((long long *)&__stack_chk_guard))
 return v6;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_simd at 0x401200
unsigned long long param_asm_simd(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned int i; // [bp-0x4]

 for (i = 0; i <= 3; i += 1)
 {
 *((int *)(a2 + (__ROL__(i, 2) & 18446744073709551612))) = *((int *)(a0 + (__ROL__(i, 2) & 18446744073709551612))) + *((int *)(a1 + (__ROL__(i, 2) & 18446744073709551612)));
 }
 return 0;
}


// Function: param_simd_intrinsics at 0x40127c
unsigned long long param_simd_intrinsics(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned int v0; // [bp-0x4]

 for (v0 = 0; v0 <= 3; v0 += 1)
 {
 *((int *)(a2 + (__ROL__(v0, 2) & 18446744073709551612))) = *((int *)(a0 + (__ROL__(v0, 2) & 18446744073709551612))) + *((int *)(a1 + (__ROL__(v0, 2) & 18446744073709551612)));
 }
 return 0;
}


// Function: call_asm_simd at 0x4012f8
extern char __stack_chk_guard;

unsigned long long call_asm_simd()
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
 param_asm_simd((unsigned long)&result, (unsigned long)&v5, (unsigned long)&v9);
 if (v13 == *((long long *)&__stack_chk_guard))
 return v9 + v10 + v11 + v12 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: param_asm_atomic at 0x4013b0
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x4]
 char v2; // [bp+0x0]

 v0 = &v2;
 v1 = __aarch64_ldadd4_acq_rel(a1, a0);
 return v1 + a1;
}


// Function: param_atomic_c11 at 0x4013e4
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, a0) + a1;
}


// Function: call_asm_atomic at 0x401414
extern char __stack_chk_guard;

unsigned long long call_asm_atomic()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned long v3; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v3 = *((long long *)&__stack_chk_guard);
 v1 = 10;
 v2 = param_asm_atomic((unsigned long long)&v1, 5);
 if (v3 == *((long long *)&__stack_chk_guard))
 return v1 + v2 & 4294967295;
 __stack_chk_fail(); /* do not return */
}


// Function: param_dynamic_code at 0x401484
unsigned long long param_dynamic_code(unsigned int a0)
{
 char *v0; // [bp-0x40]
 unsigned int v1; // [bp-0x14]
 unsigned long v2; // [bp-0x10]
 void* ptr; // [bp-0x8]
 char v4; // [bp+0x0]

 v0 = &v4;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(18, ptr, 1, 0))
 {
 v1 = a0 + 5;
 munmap(ptr, v2);
 return v1;
 }
 return 4294967295;
}


// Function: param_memory_protection at 0x4014f4
unsigned long long param_memory_protection()
{
 char *v0; // [bp-0x30]
 unsigned int v1; // [bp-0x1c]
 unsigned long v2; // [bp-0x18]
 unsigned int *ptr; // [bp-0x10]
 char v5; // [bp+0x0]

 v0 = &v5;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 3, 34, -1, 0);
 if (!((char)arm64g_calculate_condition(18, ptr, 1, 0)))
 return 4294967295;
 *(ptr) = 42;
 if (mprotect(ptr, v2, 1))
 {
 munmap(ptr, v2);
 return 4294967294;
 }
 v1 = *(ptr);
 if (!mprotect(ptr, v2, 3))
 {
 *(ptr) = 100;
 munmap(ptr, v2);
 return v1;
 }
 munmap(ptr, v2);
 return 4294967293;
}


// Function: param_clobber_importance at 0x4015d8
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a0 + a1) * 2 | a0 + a1 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x4015fc
unsigned long long call_asm_privileged()
{
 char *v0; // [bp-0x20]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]
 char v4; // [bp+0x0]

 v0 = &v4;
 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v3 = param_clobber_importance(3, 7);
 if (v1 == 15 && v2 == 42 && v3 == 20)
 return 77;
 return v1;
}


// Function: param_memory_clobber_demo at 0x401660
unsigned int global_var = 0;

unsigned int param_memory_clobber_demo()
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v0 = 50;
 v1 = v0 + global_var;
 return v1;
}


// Function: test_asm_features at 0x401690
char g_401a10[] = "Testing ASM features";
char g_401a40[] = "asm_basic: %d\n";
char g_401a60[] = "asm_clobber: %d\n";
char g_401a80[] = "asm_multi_insn: %d\n";
char g_401aa0[] = "asm_simd: %d\n";
char g_401ac0[] = "asm_atomic: %d\n";
char g_401ae0[] = "asm_privileged: %d\n";

int test_asm_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_401a10);
 printf(g_401a40, call_asm_basic() & 4294967295);
 printf(g_401a60, call_asm_clobber() & 4294967295);
 printf(g_401a80, call_asm_multi_insn() & 4294967295);
 printf(g_401aa0, call_asm_simd() & 4294967295);
 printf(g_401ac0, call_asm_atomic() & 4294967295);
 return printf(g_401ae0, call_asm_privileged() & 4294967295);
}


// Function: main at 0x401728
unsigned int main()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401744 at 0x401744
long long sub_401744()
{
 unsigned long long v0; // x0

 v0 = __aarch64_ldadd4_acq_rel(0, 0);
 return __aarch64_ldadd4_acq_rel(0, 0);
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401750
// Function: sub_401764 at 0x401764
long long sub_401764()
{
 unsigned long v0; // x0

 return v0;
}



/* CRT stub function _fini removed by preprocessor */


