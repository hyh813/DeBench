// Angr Decompilation of 5-23_gcc_Os_no_g
// Platform: AMD64


/* CRT stub function _init removed by preprocessor */
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

typedef unsigned long long *(*struct_0)();

extern struct_0 g_403fe8;


// Function: sub_401020 at 0x401020
extern unsigned long long g_403f98;
void empty_function() {}
unsigned long long g_403fa0 = (unsigned long long)empty_function;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_403f98;
 ((void(*)())g_403fa0)();
}


// Function: sub_40102d at 0x40102d
void sub_40102d()
{
 sub_401030();
 return;
}


// Function: sub_401030 at 0x401030
void sub_401030()
{
 unsigned long long result; // [bp-0x8]

 result = 0;
 sub_401020();
 return;
}


// Function: sub_40103f at 0x40103f
void sub_40103f()
{
 sub_401040();
 return;
}


// Function: sub_401040 at 0x401040
void sub_401040()
{
 unsigned long long result; // [bp-0x8]

 result = 1;
 sub_401020();
 return;
}


// Function: sub_40104f at 0x40104f
void sub_40104f()
{
 sub_401050();
 return;
}


// Function: sub_401050 at 0x401050
void sub_401050()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 2;
 sub_401020();
 return;
}


// Function: sub_40105f at 0x40105f
void sub_40105f()
{
 sub_401060();
 return;
}


// Function: sub_401060 at 0x401060
void sub_401060()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 3;
 sub_401020();
 return;
}


// Function: sub_40106f at 0x40106f
void sub_40106f()
{
 sub_401070();
 return;
}


// Function: sub_401070 at 0x401070
void sub_401070()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 4;
 sub_401020();
 return;
}


// Function: sub_40107f at 0x40107f
void sub_40107f()
{
 sub_401080();
 return;
}


// Function: sub_401080 at 0x401080
void sub_401080()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 5;
 sub_401020();
 return;
}


// Function: sub_40108f at 0x40108f
void sub_40108f()
{
 __cxa_finalize();
 return;
}


// Function: main at 0x401100
unsigned int main()
{
 unsigned long long v1; // rdi
 unsigned long long v2; // rsi
 unsigned long long v3; // rdx
 unsigned long long v4; // rcx
 unsigned long long v5; // r8
 unsigned long long v6; // r9
 unsigned long long v7; // rax

 test_preprocessing_features();
 test_asm_features(v1, v2, v3, v4, v5, v6, v7);
 return 0;
}










// Function: param_macro_constants at 0x401209
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x401221
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x40122b
long long param_macro_functions(unsigned long a0, unsigned int a1)
{
 return a0 * (a0 & 4294967295) + ((unsigned int)a0 < a1 ? a1 : a0 & 4294967295);
}


// Function: call_macro_functions at 0x40123c
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x401246
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x401251
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x40125b
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x401268
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x401272
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x40127a
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x401284
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x40128e
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x401298
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x4012a0
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x4012ab
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x4012b5
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 __printf_chk(1, "LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x4012db
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: param_macro_override at 0x4012f0
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x4012fc
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x401306
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x401310
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x40131a
int param_builtin_macros(unsigned int a0)
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x10]

 v0 = v2;
 __printf_chk(1, "file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:41");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x401362
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


char g_40206a[] = "test_macro_constants: PASS\n";
char g_402092[] = "test_macro_functions: PASS\n";
char g_4020ad[] = "test_conditional_compile: PASS\n";
char g_4020c8[] = "test_multi_branch_compile: PASS\n";
char g_4020e3[] = "test_macro_recursion: PASS\n";
char g_402102[] = "test_stringize: PASS\n";
char g_40211e[] = "test_token_paste: PASS\n";
char g_402148[] = "test_variadic_macro: PASS\n";
char g_402163[] = "test_macro_override: PASS\n";
char g_40217e[] = "test_include_guard: PASS\n";
char g_402199[] = "test_builtin_macros: PASS\n";
char g_4021b5[] = "test_preprocessing_features complete\n";
char g_4021de[] = "test_asm_basic: PASS\n";
char g_402225[] = "test_asm_clobber: PASS\n";
char g_402241[] = "test_asm_multi_insn: PASS\n";
char g_40225d[] = "test_asm_simd: PASS\n";
char g_402279[] = "test_asm_atomic: PASS\n";
char g_402295[] = "test_asm_privileged: PASS\n";

int test_preprocessing_features()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 __printf_chk(1, &g_40206a);
 __printf_chk(1, &g_402092, 64);
 __printf_chk(1, &g_4020ad, 30);
 __printf_chk(1, &g_4020c8, 32);
 __printf_chk(1, &g_4020e3, 57122);
 __printf_chk(1, &g_402102, 116);
 __printf_chk(1, &g_40211e, 19);
 __printf_chk(1, &g_402148, 60);
 __printf_chk(1, &g_402163, call_variadic_macro() & 4294967295);
 __printf_chk(1, &g_40217e, 16);
 __printf_chk(1, &g_402199, 500);
 return __printf_chk(1, &g_4021b5, call_builtin_macros() & 4294967295);
}


// Function: param_asm_basic at 0x401496
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x4014a6
int call_asm_basic()
{
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x4014b1
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


// Function: call_asm_clobber at 0x4014cb
unsigned int call_asm_clobber()
{
 unsigned long ptr; // fs
 char v0; // [bp-0x24]
 unsigned long v1; // [bp-0x10]

 v1 = *((long long *)(40 + ptr));
 return param_asm_clobber(&v0, 5);
}


// Function: param_asm_multi_insn at 0x401508
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


// Function: call_asm_multi_insn at 0x401523
unsigned long long call_asm_multi_insn()
{
 char v0[8]; // [bp-0x3a]
 char v1[2]; // [bp-0x32]
 char v2[4]; // [bp-0x30]
 char v3; // [bp-0x2c]

 strncpy(v1, "Hello ASM", 9);
 param_asm_multi_insn(&v2, &v0, 9);
 if (v2 != 72)
 return 4294967295;
 return (v3 == 111 ? 42 : 4294967295);
}


// Function: param_asm_simd at 0x4015a1
double param_asm_simd(long long ptr, long long p, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*(int*)ptr, *(int*)p);
 *(int*)addr = v1;
 return (unsigned long long)v1;
}


// Function: param_simd_intrinsics at 0x4015b5
double param_simd_intrinsics(long long p, long long ptr, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*(int*)ptr, *(int*)p);
 *(int*)addr = v1;
 return (unsigned long long)v1;
}


// Function: call_asm_simd at 0x4015c6
long long call_asm_simd()
{
 unsigned long long v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x38]
 unsigned long long v2; // [bp-0x30]
 unsigned long long v3; // [bp-0x28]
 char v4; // [bp-0x20], Other Possible Types: unsigned int
 unsigned int v5; // [bp-0x1c]
 unsigned int v6; // [bp-0x18]
 unsigned int v7; // [bp-0x14]

 v0 = 8589934593;
 v1 = 17179869187;
 v2 = 25769803781;
 v3 = 34359738375;
 param_asm_simd(&v0, &v2, &v4);
 return v5 + v4 + v6 + v7;
}


// Function: param_asm_atomic at 0x401656
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: param_atomic_c11 at 0x401663
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: call_asm_atomic at 0x401670
long long call_asm_atomic()
{
 unsigned long ptr; // fs
 unsigned int v0; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 v1 = *((long long *)(40 + ptr));
 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x4016c0
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* ptr; // rax
 unsigned int v3; // r12d

 v1 = sysconf(30);
 ptr = mmap(NULL, v1, 7, 34, -1, NULL);
 if (ptr == 0xffffffffffffffff)
 return 4294967295;
 *((unsigned int *)ptr) = 3229874313;
 *((unsigned short *)&ptr[4]) = 49925;
 v3 = ((unsigned int(*)(unsigned int))ptr)(a0);
 munmap(ptr, v1);
 return v3;
}


// Function: param_memory_protection at 0x40175a
unsigned int param_memory_protection()
{
 unsigned long v3; // rbp
 unsigned int *p; // rax
 unsigned int v5; // r12d
 unsigned int *v0; // [bp-0x20]
 unsigned int *ptr; // [bp-0x20]

 v3 = sysconf(30);
 p = mmap(NULL, v3, 3, 34, -1, NULL);
 if (p == 0xffffffffffffffff)
 return 4294967295;
 v0 = p;
 *(p) = 42;
 if (mprotect(p, v3, 1))
 {
 munmap(ptr, v3);
 return 4294967294;
 }
 ptr = v0;
 v5 = *(ptr);
 if (!mprotect(ptr, v3, 3))
 {
 *(ptr) = 100;
 munmap(ptr, v3);
 return v5;
 }
 munmap(ptr, v3);
 return 4294967293;
}


// Function: param_clobber_importance at 0x401812
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x401826
unsigned int call_asm_privileged()
{
 unsigned int v1; // r12d
 unsigned int v2; // eax
 unsigned int v3; // r8d

 v1 = param_dynamic_code(10);
 param_memory_protection();
 v2 = param_clobber_importance(3, 7);
 if (v1 != 15)
 {
 return v1;
 }
 else if (v3 == 42)
 {
 return (v2 == 20 ? 77 : v1);
 }
 else
 {
 return v1;
 }
}


unsigned int global_var = 0;

// Function: param_memory_clobber_demo at 0x401870

int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: test_asm_features at 0x40188a
int test_asm_features()
{
 unsigned long long v2; // rax
 char *v3; // rsi
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 __printf_chk(1, &g_4021de);
 call_asm_basic();
 __printf_chk(1, v3);
 __printf_chk(1, &g_402225, call_asm_clobber() & 4294967295);
 __printf_chk(1, &g_402241, call_asm_multi_insn() & 4294967295);
 __printf_chk(1, &g_40225d, call_asm_simd() & 4294967295);
 __printf_chk(1, &g_402279, call_asm_atomic() & 4294967295);
 return __printf_chk(1, &g_402295, call_asm_privileged() & 4294967295);
}



/* CRT stub function _fini removed by preprocessor */

// SIMD addition function
int AddV(int a, int b)
{
 return a + b;
}

// Atomic exchange add function (GCC atomic built-in)
void atomic_exchange_add(unsigned int *ptr, unsigned int val)
{
 __sync_fetch_and_add(ptr, val);
}




