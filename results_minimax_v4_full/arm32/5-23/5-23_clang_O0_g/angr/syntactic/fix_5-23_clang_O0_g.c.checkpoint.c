// Angr Decompilation of 5-23_clang_O0_g
// Platform: ARMEL

#include <stddef.h>

/* CRT stub function _init removed by preprocessor */


/* String constants from binary */
const char g_401551[] = "Testing Preprocessing Features:\n";
const char g_401579[] = "call_macro_constants() = %d\n";
const char g_401594[] = "call_macro_functions() = %d\n";
const char g_4015af[] = "call_conditional_compile() = %d\n";
const char g_4015ca[] = "call_multi_branch_compile() = %d\n";
const char g_4015e9[] = "call_macro_recursion() = %d\n";
const char g_401605[] = "call_stringize() = %d\n";
const char g_40162f[] = "call_token_paste() = %d\n";
const char g_40164a[] = "call_variadic_macro() = %d\n";
const char g_401665[] = "call_macro_override() = %d\n";
const char g_401680[] = "call_include_guard() = %d\n";
const char g_40169c[] = "call_builtin_macros() = %d\n";

const char g_4016cf[] = "Testing ASM Features:\n";
const char g_4016fa[] = "call_asm_basic() = %d\n";
const char g_401716[] = "call_asm_clobber() = %d\n";
const char g_401732[] = "call_asm_multi_insn() = %d\n";
const char g_40174e[] = "call_asm_simd() = %d\n";
const char g_40176a[] = "call_asm_atomic() = %d\n";
const char g_401786[] = "call_asm_privileged() = %d\n";

/* Global variable definition */
unsigned int global_var = 0;


// Function: sub_4004ec at 0x4004ec

// Stub function for g_412008 (removed by linker)
void g_412008_stub(void)
{
}

int sub_4004ec()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 ((void (*)(void))g_412008_stub)();
 return 0;
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
 unsigned int v0; // [bp-0x4]

 v0 = (a0 <= 0x400 ? 0x200 : 64);
 return v0;
}


// Function: call_macro_constants at 0x400734
unsigned int call_macro_constants()
{
 unsigned int v0; // r0

 v0 = param_macro_constants(0x800);
 return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x40074c
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = a0 * a0;
 v0 = (a0 <= a1 ? a1 : a0);
 return v1 + v0;
}


// Function: call_macro_functions at 0x4007a0
unsigned int call_macro_functions()
{
 unsigned int v0; // r0

 v0 = param_macro_functions(5, 3);
 return param_macro_functions(5, 3);
}


// Function: param_conditional_compile at 0x4007bc
int param_conditional_compile(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0;
 v0 = v0 * 3 + 2;
 return v0;
}


// Function: call_conditional_compile at 0x4007e8
unsigned int call_conditional_compile()
{
 unsigned int v0; // r0

 v0 = param_conditional_compile(10);
 return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x400800
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400824
unsigned int call_multi_branch_compile()
{
 unsigned int v0; // r0

 v0 = param_multi_branch_compile(10);
 return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x40083c
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400854
unsigned int call_macro_recursion()
{
 unsigned int v0; // r0

 v0 = param_macro_recursion(100);
 return param_macro_recursion(100);
}


// Function: param_stringize at 0x40086c
int param_stringize(unsigned int a0)
{
 unsigned int len; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 char *v2; // [bp-0x18]
 char *v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v5 = a0;
 v4 = "Hello World";
 v3 = "1_2.3";
 v2 = "155";
 len = strlen(v4);
 v1 = len + strlen(v3);
 return v1 + strlen(v2);
}


// Function: call_stringize at 0x4008f0
unsigned int call_stringize()
{
 unsigned int v0; // r0

 v0 = param_stringize(0);
 return param_stringize(0);
}


// Function: my_func at 0x400908
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x400924
unsigned int param_token_paste(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v1 = my_func(a0);
 v0 = a0 + 5;
 v1 += v0;
 return v1;
}


// Function: call_token_paste at 0x40096c
unsigned int call_token_paste()
{
 unsigned int v0; // r0

 v0 = param_token_paste(5);
 return param_token_paste(5);
}


// Function: param_variadic_macro at 0x400984
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]

 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 v0 = 5;
 return a0 + v0 * 10;
}


// Function: call_variadic_macro at 0x4009dc
unsigned int call_variadic_macro()
{
 unsigned int v0; // r0

 v0 = param_variadic_macro(10, 20, 30);
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4009fc
int param_macro_override(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0 + 1;
 v0 = a0 * 2;
 return v1 + v0;
}


// Function: call_macro_override at 0x400a30
unsigned int call_macro_override()
{
 unsigned int v0; // r0

 v0 = param_macro_override(5);
 return param_macro_override(5);
}


// Function: param_include_guard at 0x400a48
extern unsigned int header_func(unsigned int a0);

int param_include_guard()
{
 unsigned int v0; // r0

 v0 = header_func(5);
 return header_func(5);
}


// Function: header_func at 0x400a60
unsigned int header_func(unsigned int a0)
{
 return a0 * 100;
}


// Function: call_include_guard at 0x400a7c
unsigned int call_include_guard()
{
 unsigned int v0; // r0

 v0 = param_include_guard();
 return param_include_guard();
}


// Function: param_builtin_macros at 0x400a90
int param_builtin_macros(unsigned int a0)
{
 unsigned int v0; // [bp-0x2c]
 unsigned int flag1; // [bp-0x28]
 unsigned int result; // [bp-0x24]
 unsigned int v3; // [bp-0x20]
 unsigned int v4; // [bp-0x1c]
 unsigned int v5; // [bp-0x18]
 unsigned int v6; // [bp-0x14]
 unsigned int v7; // [bp-0x10]

 v7 = "src/5-23.c";
 v6 = 279;
 v5 = "param_builtin_macros";
 v4 = "Jan 15 2026";
 v3 = "03:01:13";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v7, v5, v6, v4, v3);
 result = 0;
 flag1 = 1;
 v0 = 2;
 return a0 + v6 + result + flag1 + v0;
}


// Function: call_builtin_macros at 0x400b64
unsigned int call_builtin_macros()
{
 unsigned int v0; // r0

 v0 = param_builtin_macros(100);
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x400b7c

int test_preprocessing_features()
{
 unsigned int v10; // r0
 unsigned int v11; // r0

 printf(&g_401551);
 printf(&g_401579, call_macro_constants());
 printf(&g_401594, call_macro_functions());
 printf(&g_4015af, call_conditional_compile());
 printf(&g_4015ca, call_multi_branch_compile());
 printf(&g_4015e9, call_macro_recursion());
 printf(&g_401605, call_stringize());
 printf(&g_40162f, call_token_paste());
 printf(&g_40164a, call_variadic_macro());
 printf(&g_401665, call_macro_override());
 printf(&g_401680, call_include_guard());
 v10 = call_builtin_macros();
 v11 = printf(&g_40169c, v10);
 return printf(&g_40169c, v10);
}


// Function: param_asm_basic at 0x400ca4
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0 + 10;
 return v0;
}


// Function: call_asm_basic at 0x400cc4
unsigned int call_asm_basic()
{
 unsigned int v0; // r0

 v0 = param_asm_basic(5);
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x400cdc
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int idx; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 for (idx = 0; a1 > idx; idx += 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: call_asm_clobber at 0x400d44
unsigned int call_asm_clobber()
{
 unsigned int v5; // r0
 unsigned int result; // [bp-0x24]
 unsigned int v1; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]

 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = param_asm_clobber(&result, 5);
 return param_asm_clobber(&result, 5);
}


// Function: param_asm_multi_insn at 0x400d80
int param_asm_multi_insn(void* a0, void* a1, unsigned int a2)
{
 unsigned int dst; // r0

 dst = memcpy(a0, a1, a2);
 return memcpy(a0, a1, a2);
}


// Function: call_asm_multi_insn at 0x400db4
unsigned int call_asm_multi_insn()
{
 unsigned int result; // [bp-0x3c]
 unsigned int v1; // [bp-0x38]
 char v2; // [bp-0x34]
 char v3; // [bp-0x30]
 char v4; // [bp-0x14]
 char v5[4]; // [bp-0xc]

 strncpy(v5, "Hello ASM", 9);
 result = 0;
 memset(&v2, 0, 32);
 param_asm_multi_insn(&v2, &v4, 9);
 v1 = result;
 if (v2 == 72)
 v1 = v3 - 111 + -(v3 - 111) + (v3 - 111 <= 0);
 return ((v1 & 1) ? 42 : 4294967295);
}


// Function: param_asm_simd at 0x400e64
unsigned int param_asm_simd(unsigned int a0, unsigned int a1)
{
 unsigned int ptr; // r2
 unsigned int idx; // [bp-0x10]

 for (idx = 0; 3 >= idx; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 }
 return 0;
}


// Function: param_simd_intrinsics at 0x400ed0
unsigned int param_simd_intrinsics(unsigned int a0, unsigned int a1)
{
 unsigned int ptr; // r2
 unsigned int idx; // [bp-0x10]

 for (idx = 0; 3 >= idx; idx += 1)
 {
 *((int *)(ptr + idx * 4)) = *((int *)(a0 + idx * 4)) + *((int *)(a1 + idx * 4));
 }
 return 0;
}


// Function: call_asm_simd at 0x400f3c
int call_asm_simd()
{
 unsigned int v0; // [bp-0x38]
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int result; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]

 result = 1;
 v11 = 4;
 v10 = 3;
 v9 = 2;
 v7 = 8;
 v6 = 7;
 v5 = 6;
 v4 = 5;
 param_asm_simd(&result, &v4);
 return v0 + v1 + v2 + v3;
}


// Function: param_asm_atomic at 0x400fe8
int param_asm_atomic(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x14]

 v0 = __atomic_fetch_add_4(a0, a1, 5);
 v1 = v0;
 return v1 + a1;
}


// Function: param_atomic_c11 at 0x401038
int param_atomic_c11(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]

 v0 = __atomic_fetch_add_4(a0, a1, 5);
 return v0 + a1;
}


// Function: call_asm_atomic at 0x401080
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 10;
 v0 = param_asm_atomic(&v1, 5);
 return v1 + v0;
}


// Function: param_dynamic_code at 0x4010bc
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 void* ptr; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0xc]

 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, NULL);
 if (ptr != 0xffffffff)
 {
 v0 = a0 + 5;
 munmap(ptr, v2);
 v3 = v0;
 return v3;
 }
 v3 = 4294967295;
 return v3;
}


// Function: param_memory_protection at 0x401150
unsigned int param_memory_protection()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18]
 unsigned int *ptr2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v3 = sysconf(30);
 ptr = mmap(NULL, v3, 3, 34, -1, NULL);
 if (ptr == 0xffffffff)
 {
 v4 = 4294967295;
 return v4;
 }
 ptr2 = ptr;
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


// Function: param_clobber_importance at 0x401268
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x40128c
unsigned int call_asm_privileged()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

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


// Function: param_memory_clobber_demo at 0x401314
extern unsigned int global_var;

unsigned int param_memory_clobber_demo()
{
 unsigned int v0; // [bp-0x8]
 unsigned int v1; // [bp-0x4]

 v1 = 50;
 v0 = v1 + global_var;
 return v0;
}


// Function: test_asm_features at 0x401344

int test_asm_features()
{
 unsigned int v5; // r0

 printf(&g_4016cf);
 printf(&g_4016fa, call_asm_basic());
 printf(&g_401716, call_asm_clobber());
 printf(&g_401732, call_asm_multi_insn());
 printf(&g_40174e, call_asm_simd());
 printf(&g_40176a, call_asm_atomic());
 v5 = printf(&g_401786, call_asm_privileged());
 return printf(&g_401786, call_asm_privileged());
}


// Function: main at 0x4013f4
int main()
{
 unsigned int result; // [bp-0x10]
 unsigned int flag1; // [bp-0xc]

 result = 0;
 flag1 = 0;
 test_preprocessing_features();
 test_asm_features();
 return result;
}



/* CRT stub function _fini removed by preprocessor */


