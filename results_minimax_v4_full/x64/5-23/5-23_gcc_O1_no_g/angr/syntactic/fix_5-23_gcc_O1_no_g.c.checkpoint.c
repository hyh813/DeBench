// Angr Decompilation of 5-23_gcc_O1_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stddef.h>

typedef unsigned long long (*func_ptr)(void);

extern func_ptr g_403fe8;






/* CRT stub function _start removed by preprocessor */



// Function: sub_401125 at 0x401125
void sub_401125()
{
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4011d5 at 0x4011d5
void sub_4011d5()
{
}


// Function: sub_4011d9 at 0x4011d9
void sub_4011d9()
{
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x4011e9
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x401201
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x40120b
long long param_macro_functions(unsigned long a0, unsigned int a1)
{
 return a0 * (a0 & 4294967295) + ((unsigned int)a0 < a1 ? a1 : a0 & 4294967295);
}


// Function: call_macro_functions at 0x40121c
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x401226
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x40122f
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x401239
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x401245
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x40124f
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x401257
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x401261
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x40126b
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x401275
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x40127f
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x40128b
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x401295
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x4012be
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4012df
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x4012e8
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x4012f2
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x4012fc
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x401306
int param_builtin_macros(unsigned int a0)
{
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:28");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x401356
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x40136d
extern char g_40203d[];
extern char g_402058[];
extern char g_402073[];
extern char g_40208e[];
extern char g_4020aa[];
extern char g_4020c5[];
extern char g_4020e0[];
extern char g_4020fb[];
extern char g_4021f0[];
extern char g_402218[];
extern char g_402238[];
extern char g_402268[];

// Define the string constants
char g_4021f0[] = "Test Preprocessing Features:\n";
char g_40203d[] = "param_macro_constants: %d\n";
char g_402058[] = "call_macro_constants: %d\n";
char g_402073[] = "param_macro_functions: %d\n";
char g_402218[] = "call_multi_branch_compile: %d\n";
char g_40208e[] = "call_macro_recursion: %d\n";
char g_402238[] = "call_stringize: %d\n";
char g_4020aa[] = "call_token_paste: %d\n";
char g_4020c5[] = "call_variadic_macro: %d\n";
char g_4020e0[] = "call_macro_override: %d\n";
char g_4020fb[] = "call_include_guard: %d\n";
char g_402268[] = "call_builtin_macros: %d\n";

int test_preprocessing_features()
{
 __printf_chk(1, &g_4021f0);
 __printf_chk(1, &g_40203d, 64);
 __printf_chk(1, &g_402058, 30);
 __printf_chk(1, &g_402073, 32);
 __printf_chk(1, &g_402218, 57122);
 __printf_chk(1, &g_40208e, 116);
 __printf_chk(1, &g_402238, 19);
 __printf_chk(1, &g_4020aa, 60);
 __printf_chk(1, &g_4020c5, call_variadic_macro() & 4294967295);
 __printf_chk(1, &g_4020e0, 16);
 __printf_chk(1, &g_4020fb, 500);
 return __printf_chk(1, &g_402268, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x4014c7
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x4014d5
int call_asm_basic()
{
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x4014e4
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1)
{
 unsigned int v1; // eax
 unsigned long long idx; // rcx

 v1 = 0;
 for (idx = 0; (unsigned int)idx < a1; idx = (unsigned int)idx + 1)
 {
 v1 += *((int *)(ptr + idx * 4));
 }
 return v1;
}


// Function: call_asm_clobber at 0x4014fc
int call_asm_clobber()
{
 char v0; // [bp-0x28]

 return param_asm_clobber(&v0, 5);
}


// Function: param_asm_multi_insn at 0x40153b
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i)
{
 char v1; // al

 for (; i; i -= 1)
 {
 v1 = *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 return v1;
}


// Function: call_asm_multi_insn at 0x401556
unsigned long long call_asm_multi_insn()
{
 char v0[10]; // [bp-0x42]
 char v1; // [bp-0x38]
 char v2; // [bp-0x34]

 strncpy(v0, "Hello ASM", 9);
 memset(&v1, 0, 32);
 param_asm_multi_insn(&v1, &v0, 9);
 return (v1 == 72 ? (v2 == 111 ? 42 : 4294967295) : 4294967295);
}


// Function: param_asm_simd at 0x4015f6

int AddV(int a, int b)
{
 return a + b;
}

int param_asm_simd(int *ptr, int *p, void *addr)
{
 int v1; // xmm0

 // AddV(*ptr, *p);  // inline asm intrinsic, result in register
 v1 = *ptr + *p;
 *((int *)addr) = v1;
 return v1;
}


// Function: param_simd_intrinsics at 0x40160d
int param_simd_intrinsics(int *p, int *ptr, void *addr)
{
 int v1; // xmm0

 AddV(*ptr, *p);
 v1 = *ptr + *p;
 *((int *)addr) = v1;
 return v1;
}


// Function: call_asm_simd at 0x401622
long long call_asm_simd()
{
 unsigned int result; // [bp-0x48]
 unsigned int v1; // [bp-0x44]
 unsigned int v2; // [bp-0x40]
 unsigned int v3; // [bp-0x3c]
 unsigned int v4; // [bp-0x38]
 unsigned int v5; // [bp-0x34]
 unsigned int v6; // [bp-0x30]
 unsigned int v7; // [bp-0x2c]
 char v8; // [bp-0x28], Other Possible Types: unsigned int
 unsigned int v9; // [bp-0x24]
 unsigned int v10; // [bp-0x20]
 char v11; // [bp-0x1c]

 result = 1;
 v1 = 2;
 v2 = 3;
 v3 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 param_asm_simd(&result, &v4, &v8);
 return v9 + v8 + v10 + *((int *)&v11);
}


// Function: param_asm_atomic at 0x4016b5
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val;
 old_val = *a0;
 *a0 = *a0 + a1;
 return old_val + a1;
}


// Function: param_atomic_c11 at 0x4016c2
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 unsigned int old_val;
 old_val = *a0;
 *a0 = *a0 + a1;
 return old_val + a1;
}


// Include for atomic operations
#include <stdatomic.h>

// Function: call_asm_atomic at 0x4016cf
long long call_asm_atomic()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 v1 = *((long long *)(40 + ptr));
 v0 = 10;
 v0 = atomic_fetch_add((_Atomic unsigned int *)&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x40171f
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 unsigned long (*func_ptr)(unsigned int); // function pointer
 void* ptr; // rax
 unsigned int v3; // r12d

 v1 = sysconf(30);
 ptr = mmap(NULL, v1, 7, 34, -1, NULL);
 if (ptr == 0xffffffffffffffff)
 return 4294967295;
 *((unsigned int *)ptr) = 3229874313;
 *((unsigned short *)&ptr[4]) = 49925;
 func_ptr = (unsigned long (*)(unsigned int))ptr;
 v3 = func_ptr(a0);
 munmap(ptr, v1);
 return v3;
}


// Function: param_memory_protection at 0x4017bf
unsigned int param_memory_protection()
{
 unsigned long v1; // rbp
 unsigned int *p; // rax
 unsigned int *ptr; // rbx
 unsigned int v4; // r12d

 v1 = sysconf(30);
 p = mmap(NULL, v1, 3, 34, -1, NULL);
 if (p == 0xffffffffffffffff)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect(p, v1, 1))
 {
 munmap(ptr, v1);
 return 4294967294;
 }
 v4 = *(ptr);
 if (mprotect(ptr, v1, 3))
 {
 munmap(ptr, v1);
 return 4294967293;
 }
 *(ptr) = 100;
 munmap(ptr, v1);
 return v4;
}


// Function: param_clobber_importance at 0x401878
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x40188c
unsigned int call_asm_privileged()
{
 unsigned int v1; // ebx
 unsigned int v2; // eax
 unsigned int v3; // eax

 v1 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v3 = param_clobber_importance(3, 7);
 if (!(v2 == 42 & v1 == 15))
 return v1;
 return (v3 == 20 ? 77 : v1);
}


// Function: param_memory_clobber_demo at 0x4018e1
unsigned int global_var = 0;

int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: test_asm_features at 0x4018f7
extern char g_402117[];
extern char g_402133[];
extern char g_40214f[];
extern char g_40216b[];
extern char g_402187[];
extern char g_4021a3[];
extern char g_402298[];

// Define the missing string constants
char g_402298[] = "Test ASM Features:\n";
char g_402117[] = "call_asm_basic: %d\n";
char g_402133[] = "call_asm_clobber: %d\n";
char g_40214f[] = "call_asm_multi_insn: %d\n";
char g_40216b[] = "call_asm_simd: %d\n";
char g_402187[] = "call_asm_atomic: %d\n";
char g_4021a3[] = "call_asm_privileged: %d\n";

int test_asm_features()
{
 __printf_chk(1, &g_402298);
 __printf_chk(1, &g_402117, call_asm_basic() & 4294967295);
 __printf_chk(1, &g_402133, call_asm_clobber() & 4294967295);
 __printf_chk(1, &g_40214f, call_asm_multi_insn() & 4294967295);
 __printf_chk(1, &g_40216b, call_asm_simd() & 4294967295);
 __printf_chk(1, &g_402187, call_asm_atomic() & 4294967295);
 return __printf_chk(1, &g_4021a3, call_asm_privileged() & 4294967295);
}


// Function: main at 0x4019e6
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


