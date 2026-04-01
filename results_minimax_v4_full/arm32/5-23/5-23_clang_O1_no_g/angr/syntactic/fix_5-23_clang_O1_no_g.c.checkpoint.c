// Angr Decompilation of 5-23_clang_O1_no_g
// Platform: ARMEL

#include <stddef.h>

/* CRT stub function _init removed by preprocessor */



// Function: sub_4004ec at 0x4004ec
extern unsigned int g_412008;

unsigned int sub_4004ec()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 // goto g_412008; // Removed: undeclared label
 return v0;
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4005c8 at 0x4005c8
void sub_4005c8()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x4006f8
unsigned int param_macro_constants(unsigned int a0)
{
 return (0x400 < a0 ? 64 : 0x200);
}


// Function: call_macro_constants at 0x40070c
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x400714
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // r1

 if (a1 < a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400728
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x400730
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x40073c
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x400744
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400754
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x400760
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400768
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x400770
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x400778
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x400780
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x40078c
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x40079c
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x4007a4
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x4007d4
unsigned int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: param_macro_override at 0x400800
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x40080c
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x400814
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x40081c
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x400824
int param_builtin_macros(unsigned int a0)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:16");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400894
unsigned int call_builtin_macros()
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:16");
 return 382;
}


// Function: test_preprocessing_features at 0x400900
extern char g_40103b[];
extern char g_401056[];
extern char g_401071[];
extern char g_40108c[];
extern char g_4010ab[];
extern char g_4010c7[];
extern char g_4010f1[];
extern char g_40110c[];
extern char g_401127[];
extern char g_401142[];
extern char g_40115e[];
extern char g_40122f[];

int test_preprocessing_features()
{
 unsigned int v0; // r0

 puts(&g_40122f);
 printf(&g_40103b, 64);
 printf(&g_401056, 30);
 printf(&g_401071, 32);
 printf(&g_40108c, 57122);
 printf(&g_4010ab, 116);
 printf(&g_4010c7, 19);
 printf(&g_4010f1, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(&g_40110c, 60);
 printf(&g_401127, 16);
 printf(&g_401142, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:16");
 v0 = printf(&g_40115e, 382);
 return printf(&g_40115e, 382);
}


// Function: param_asm_basic at 0x400a74
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400a7c
unsigned int call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400a84
unsigned int param_asm_clobber(unsigned int *a0, unsigned int i)
{
 unsigned int v0; // r0
 unsigned int v1; // r0
 unsigned int *ptr; // r2
 unsigned int *v3; // r2
 unsigned int v4; // r0

 if (i < 1)
 return 0;
 v0 = 0;
 do
 {
 v1 = v0;
 v3 = a0 + 1;
 v4 = *(a0) + v1;
 a0 = v3;
 v0 = v4;
 i -= 1;
 } while (i != 1);
 return *(ptr) + v1;
}


// Function: call_asm_clobber at 0x400ab0
unsigned int call_asm_clobber()
{
 return 15;
}


// Function: param_asm_multi_insn at 0x400ab8
int param_asm_multi_insn(void* a0, void* a1, unsigned int a2)
{
 unsigned int dst; // r0

 dst = memcpy(a0, a1, a2);
 return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x400ac8
unsigned int call_asm_multi_insn()
{
 return 42;
}


// Function: param_asm_simd at 0x400ad0
unsigned int param_asm_simd(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int i = 0;
 do
 {
 *((int *)(ptr + i * 4)) = *((int *)(a1 + i * 4)) + *((int *)(a0 + i * 4));
 i = i + 1;
 } while (i != 4);
 return 0;
}


// Function: param_simd_intrinsics at 0x400b00
unsigned int param_simd_intrinsics(unsigned int a0, unsigned int a1, unsigned int ptr)
{
 unsigned int i = 0;
 do
 {
 *((int *)(ptr + i * 4)) = *((int *)(a1 + i * 4)) + *((int *)(a0 + i * 4));
 i = i + 1;
 } while (i != 4);
 return 0;
}


// Function: call_asm_simd at 0x400b30
extern unsigned int g_401280[4];
extern unsigned int g_401290[4];

int call_asm_simd()
{
 unsigned int idx; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 idx = 0;
 do
 {
 (&v0)[idx] = g_401290[idx] + g_401280[idx];
 idx += 1;
 } while (idx != 4);
 return v1 + v0 + v2 + v3;
}


// Function: param_asm_atomic at 0x400b90
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 return __atomic_fetch_add_4() + a1;
}


// Function: param_atomic_c11 at 0x400bac
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 return __atomic_fetch_add_4() + a1;
}


// Function: call_asm_atomic at 0x400bc8
int call_asm_atomic()
{
 unsigned int v0; // [bp-0xc]

 v0 = 10;
 return __atomic_fetch_add_4(&v0, 5, 5) + v0 + 5;
}


// Function: param_dynamic_code at 0x400c00
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // r5
 void* ptr; // r0

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 34, -1, NULL);
 if (ptr == 0xffffffff)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: param_memory_protection at 0x400c60
// Stub for ARM condition code calculation helper
static int armg_calculate_condition(unsigned int cond, unsigned int result, unsigned int a2, unsigned int a3)
{
    // Simplified stub: return 1 if result == 0 (EQ condition)
    return (result == 0) ? 1 : 0;
}

unsigned int param_memory_protection()
{
 unsigned int v0; // r4
 unsigned int *ptr; // r0
 unsigned int v3; // r6
 unsigned int v4; // r7
 unsigned int result; // r0
 unsigned int v7; // r0

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 3, 34, -1, NULL);
 if (ptr == 0xffffffff)
 return 4294967295;
 ptr = ptr;
 *(ptr) = 42;
 v3 = 4294967294;
 if (!mprotect(ptr, v0, 1))
 {
 v4 = *(ptr);
 result = mprotect(ptr, v0, 3);
 if (!result)
 v7 = 100;
 else
 v7 = result;
 *(ptr) = v7;
 v3 = (armg_calculate_condition(2, result, 0, 0) ? v4 : 4294967293);
 }
 munmap(ptr, v0);
 return v3;
}


// Function: param_clobber_importance at 0x400d0c
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a1 + a0) * 2;
}


// Function: call_asm_privileged at 0x400d18
unsigned int call_asm_privileged()
{
 unsigned int v4; // lr
 unsigned int v5; // r6
 unsigned int v6; // r5
 unsigned int v7; // r4
 unsigned int v8; // r4
 unsigned int v9; // r6
 void* ptr; // r5
 unsigned int v12; // r0
 unsigned int v13; // r0
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = v5;
 v1 = v6;
 v0 = v7;
 v8 = sysconf(30);
 v9 = 4294967295;
 ptr = mmap(NULL, v8, 7, 34, -1, NULL);
 if (ptr != 0xffffffff)
 {
 munmap(ptr, v8);
 v9 = 15;
 }
 if (param_memory_protection() == 42)
 v12 = 77;
 else
 v12 = v9;
 v13 = v12;
 if (ptr != 0xffffffff)
 return v13;
 return v9;
}


// Function: param_memory_clobber_demo at 0x400d90
extern unsigned int global_var;

int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x400da4
extern char g_401187[];
extern char g_4011a3[];
extern char g_4011bf[];
extern char g_4011db[];
extern char g_4011f7[];
extern char g_401213[];
extern char g_401256[];
extern unsigned int g_401280[4];
extern unsigned int g_401290[4];

int test_asm_features()
{
 unsigned int idx; // r0
 unsigned int v6; // r4
 unsigned int v7; // r6
 void* ptr; // r5
 unsigned int v10; // r1
 unsigned int v11; // r1
 unsigned int v12; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 char v3; // [bp-0x14]

 puts(&g_401256);
 printf(&g_401187, 15);
 printf(&g_4011a3, 15);
 printf(&g_4011bf, 42);
 idx = 0;
 do
 {
 (&v0)[idx] = g_401290[idx] + g_401280[idx];
 idx += 1;
 } while (idx != 4);
 printf(&g_4011db, v1 + v0 + v2 + *((int *)&v3));
 v0 = 10;
 printf(&g_4011f7, __atomic_fetch_add_4(&v0, 5, 5) + v0 + 5);
 v6 = sysconf(30);
 v7 = 4294967295;
 ptr = mmap(NULL, v6, 7, 34, -1, NULL);
 if (ptr != 0xffffffff)
 {
 munmap(ptr, v6);
 v7 = 15;
 }
 if (param_memory_protection() == 42)
 v10 = 77;
 else
 v10 = v7;
 v11 = v10;
 if (ptr == 0xffffffff)
 v11 = v7;
 v12 = printf(&g_401213, v11);
 return printf(&g_401213, v11);
}


// Function: main at 0x400f0c
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */



// String data definitions for undefined references
char g_40103b[] = "macro_constants: %d\n";
char g_401056[] = "macro_functions: %d\n";
char g_401071[] = "conditional_compile: %d\n";
char g_40108c[] = "multi_branch_compile: %d\n";
char g_4010c7[] = "stringize: %d\n";
char g_401142[] = "include_guard: %d\n";
char g_4010ab[] = "macro_recursion: %d\n";
char g_4010f1[] = "token_paste: %d\n";
char g_40122f[] = "test_preprocessing_features called\n";
char g_4011db[] = "asm_simd: %d\n";
char g_401127[] = "macro_override: %d\n";
char g_4011bf[] = "asm_multi_insn: %d\n";
char g_4011a3[] = "asm_clobber: %d\n";
char g_401187[] = "asm_basic: %d\n";
char g_40115e[] = "builtin_macros: %d\n";
char g_40110c[] = "call_variadic_macro: %d\n";
char g_4011f7[] = "atomic_result: %d\n";
char g_401213[] = "test_asm_features result: %d\n";
char g_401256[] = "test_asm_features called\n";

// Global variable needed by param_memory_clobber_demo
unsigned int global_var = 42;
