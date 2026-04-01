// Angr Decompilation of 5-23_clang_O3_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdatomic.h>
#include <stdint.h>


/* CRT stub function _init removed by preprocessor */

unsigned long long (*g_403fe8)(void) = NULL;

unsigned long long _init()
{
 unsigned long long v1; // rax

 v1 = (unsigned long long)g_403fe8;
 if (g_403fe8)
 v1 = g_403fe8();
 return v1;
}


// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

// Forward declarations
unsigned long long AddV(unsigned long long a, unsigned long long b);
unsigned long long param_macro_constants(unsigned int a0);
unsigned long long call_macro_constants();
long long param_macro_functions(unsigned long a0, unsigned int a1);
unsigned long long call_macro_functions();
int param_conditional_compile(unsigned int a0);
unsigned long long call_conditional_compile();
int param_multi_branch_compile(unsigned int a0);
unsigned long long call_multi_branch_compile();
int param_macro_recursion(unsigned int a0);
unsigned long long call_macro_recursion();
unsigned long long param_stringize(unsigned int a0);
unsigned long long call_stringize();
unsigned int my_func(unsigned int a0);
int param_token_paste(unsigned int a0);
unsigned long long call_token_paste();
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long long call_variadic_macro();
int param_macro_override(unsigned int a0);
unsigned long long call_macro_override();
unsigned long long param_include_guard(unsigned int a0);
unsigned long long call_include_guard();
int param_builtin_macros(unsigned int a0);
unsigned long long call_builtin_macros();
int test_preprocessing_features();
int param_asm_basic(unsigned int a0);
unsigned long long call_asm_basic();
unsigned int param_asm_clobber(unsigned long ptr, unsigned int a1);
unsigned int call_asm_clobber();
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i);
char call_asm_multi_insn();
unsigned long long param_asm_simd(int *ptr, int *p, int *addr);
long long call_asm_simd(int a0, int a1, int a2);
int param_asm_atomic(unsigned int *a0, unsigned int a1);
long long call_asm_atomic(unsigned int a0, unsigned int a1);
int param_atomic_c11(unsigned int *a0, unsigned int a1);
unsigned long long param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(unsigned int a0);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned long long call_asm_privileged();
unsigned int param_memory_clobber_demo();
int test_asm_features();
int main();

// Global variables
unsigned int global_var = 0;

// Definition of AddV
unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}

// Stub functions for CRT
void deregister_tm_clones(void) {}
void register_tm_clones(void) {}
void __do_global_dtors_aux(void) {}
void frame_dummy(void) {}

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 (void)v0;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 return puts("test");
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010c5 at 0x4010c5
void sub_4010c5()
{
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401139 at 0x401139
void sub_401139()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
}


// Function: sub_401179 at 0x401179
void sub_401179()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401189 at 0x401189
void sub_401189(unsigned long a0)
{
 param_macro_constants(a0);
 return;
}


// Function: param_macro_constants at 0x401190
unsigned long long param_macro_constants(unsigned int a0)
{
 if (1025 > a0)
 return 0x200;
 return 64;
}


// Function: sub_4011a4 at 0x4011a4
void sub_4011a4()
{
 call_macro_constants(0);
 return;
}


// Function: call_macro_constants at 0x4011b0
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: sub_4011b6 at 0x4011b6
void sub_4011b6(unsigned long a0, unsigned long a1)
{
 param_macro_functions(a0, a1);
 return;
}


// Function: param_macro_functions at 0x4011c0
long long param_macro_functions(unsigned long a0, unsigned int a1)
{
 return a0 * (a0 & 4294967295) + (a1 < (unsigned int)a0 ? a0 & 4294967295 : a1);
}


// Function: sub_4011cd at 0x4011cd
void sub_4011cd()
{
 call_macro_functions(0, 0);
 return;
}


// Function: call_macro_functions at 0x4011d0
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: sub_4011d6 at 0x4011d6
void sub_4011d6(unsigned long a0)
{
 param_conditional_compile(a0);
 return;
}


// Function: param_conditional_compile at 0x4011e0
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: sub_4011e7 at 0x4011e7
void sub_4011e7()
{
 call_conditional_compile(0);
 return;
}


// Function: call_conditional_compile at 0x4011f0
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: sub_4011f6 at 0x4011f6
void sub_4011f6(unsigned long a0)
{
 param_multi_branch_compile(a0);
 return;
}


// Function: param_multi_branch_compile at 0x401200
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: sub_401209 at 0x401209
void sub_401209()
{
 call_multi_branch_compile(0);
 return;
}


// Function: call_multi_branch_compile at 0x401210
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_401216 at 0x401216
void sub_401216(unsigned long a0)
{
 param_macro_recursion(a0);
 return;
}


// Function: param_macro_recursion at 0x401220
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: sub_401224 at 0x401224
void sub_401224()
{
 call_macro_recursion(0);
 return;
}


// Function: call_macro_recursion at 0x401230
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: sub_401236 at 0x401236
void sub_401236()
{
 param_stringize(0);
 return;
}


// Function: param_stringize at 0x401240
unsigned long long param_stringize(unsigned int a0)
{
 return 19;
}


// Function: sub_401246 at 0x401246
void sub_401246()
{
 call_stringize(0);
 return;
}


// Function: call_stringize at 0x401250
unsigned long long call_stringize()
{
 return 19;
}


// Function: sub_401256 at 0x401256
void sub_401256(unsigned long a0)
{
 my_func(a0);
 return;
}


// Function: my_func at 0x401260
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_401266 at 0x401266
void sub_401266(unsigned long a0)
{
 param_token_paste(a0);
 return;
}


// Function: param_token_paste at 0x401270
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: sub_40127a at 0x40127a
void sub_40127a()
{
 call_token_paste(0);
 return;
}


// Function: call_token_paste at 0x401280
unsigned long long call_token_paste()
{
 return 60;
}


// Function: sub_401286 at 0x401286
void sub_401286(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_variadic_macro(a0, a1, a2);
 return;
}


// Function: param_variadic_macro at 0x401290
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: sub_4012ae at 0x4012ae
void sub_4012ae()
{
 call_variadic_macro(0, 0, 0);
 return;
}


// Function: call_variadic_macro at 0x4012b0
unsigned long long call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: sub_4012d5 at 0x4012d5
void sub_4012d5(unsigned long a0)
{
 param_macro_override(a0);
 return;
}


// Function: param_macro_override at 0x4012e0
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: sub_4012e7 at 0x4012e7
void sub_4012e7()
{
 call_macro_override(0);
 return;
}


// Function: call_macro_override at 0x4012f0
unsigned long long call_macro_override()
{
 return 16;
}


// Function: sub_4012f6 at 0x4012f6
void sub_4012f6()
{
 param_include_guard(0);
 return;
}


// Function: param_include_guard at 0x401300
unsigned long long param_include_guard(unsigned int a0)
{
 return 500;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x401310
unsigned long long call_include_guard()
{
 return 500;
}


// Function: sub_401316 at 0x401316
void sub_401316(unsigned long a0)
{
 param_builtin_macros(a0);
 return;
}


// Function: param_builtin_macros at 0x401320
int param_builtin_macros(unsigned int a0)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:56");
 return a0 + 282;
}


// Function: sub_40135c at 0x40135c
void sub_40135c()
{
 call_builtin_macros(0);
 return;
}


// Function: call_builtin_macros at 0x401360
unsigned long long call_builtin_macros()
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:56");
 return 382;
}


// Function: sub_401397 at 0x401397
void sub_401397()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x4013a0
char g_40207f[] = "%d\n";
char g_40209a[] = "%d\n";
char g_4020b5[] = "%d\n";
char g_4020d0[] = "%d\n";
char g_4020ef[] = "%d\n";
char g_40210b[] = "%d\n";
char g_402135[] = "%d\n";
char g_402150[] = "%d\n";
char g_40216b[] = "%d\n";
char g_402186[] = "%d\n";
char g_4021a2[] = "%d\n";
char g_40227d[] = "test_preprocessing_features";

int test_preprocessing_features()
{
 puts(&g_40227d);
 printf(&g_40207f, 64);
 printf(&g_40209a, 30);
 printf(&g_4020b5, 32);
 printf(&g_4020d0, 57122);
 printf(&g_4020ef, 116);
 printf(&g_40210b, 19);
 printf(&g_402135, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(&g_402150, 60);
 printf(&g_40216b, 16);
 printf(&g_402186, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:56");
 return printf(&g_4021a2, 382);
}


// Function: sub_4014cb at 0x4014cb
void sub_4014cb(unsigned long a0)
{
 param_asm_basic(a0);
 return;
}


// Function: param_asm_basic at 0x4014d0
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_4014da at 0x4014da
void sub_4014da()
{
 call_asm_basic(0);
 return;
}


// Function: call_asm_basic at 0x4014e0
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: sub_4014ef at 0x4014ef
void sub_4014ef()
{
 param_asm_clobber(0, 0);
 return;
}


// Function: param_asm_clobber at 0x4014f0
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


// Function: sub_401504 at 0x401504
void sub_401504()
{
 call_asm_clobber(0, 0);
 return;
}


// Function: call_asm_clobber at 0x401510
unsigned int call_asm_clobber()
{
 unsigned int v3; // eax
 unsigned long long idx; // rcx
 int v0[5]; // [bp-0x18]
 unsigned int v1; // [bp-0x8]

 v1 = 5;
 v0[0] = 1; v0[1] = 2; v0[2] = 3; v0[3] = 4; v0[4] = 5;
 v3 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v3 += *((int *)((char *)&v0 + 4 * idx));
 }
 return v3;
}


// Function: sub_401544 at 0x401544
void sub_401544()
{
 param_asm_multi_insn(0, 0, 0);
 return;
}


// Function: param_asm_multi_insn at 0x401550
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


// Function: sub_401567 at 0x401567
void sub_401567()
{
 call_asm_multi_insn(0, 0, 0);
 return;
}


// Function: call_asm_multi_insn at 0x401570
char call_asm_multi_insn()
{
 char *cur; // rcx
 char *v7; // rdx
 unsigned long long i; // rsi
 char v0[9]; // [bp-0x38]
 unsigned short v1; // [bp-0x30]
 int flag1; // [bp-0x28]
 char v3; // [bp-0x24]
 unsigned long long result; // [bp-0x18]

 strncpy(v0, "Hello AS", 9);
 v1 = 77;
 result = 0;
 flag1 = 0;
 cur = &flag1;
 v7 = &v0;
 for (i = 9; i; i -= 1)
 {
 *(cur) = *(v7);
 cur += 1;
 v7 += 1;
 }
 if ((v3 ^ 111) || ((char)flag1 ^ 72))
 return 255;
 return 42;
}


// Function: sub_4015d5 at 0x4015d5
void sub_4015d5(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_asm_simd((int *)a0, (int *)a1, (int *)a2);
 return;
}


// Function: param_asm_simd at 0x4015e0
unsigned long long param_asm_simd(int *ptr, int *p, int *addr)
{
 unsigned long long v1; // xmm0

 v1 = AddV(*ptr, *p);
 *addr = (int)v1;
 return v1;
}


// Function: sub_4015ff at 0x4015ff
void sub_4015ff()
{
 call_asm_simd(0, 0, 0);
 return;
}


// Function: call_asm_simd at 0x401600
long long call_asm_simd(int a0, int a1, int a2)
{
 unsigned long v4; // xmm1lq
 int v0; // [bp-0x38]
 int v1; // [bp-0x28]
 int v2; // [bp-0x18]

 v2 = 10;
 v1 = 20;
 v0 = AddV(v2, v1);
 v4 = (unsigned long long)(AddV(v0, v0));
 return AddV(v4, v4);
}


// Function: sub_401651 at 0x401651
void sub_401651(unsigned long a0, unsigned long a1)
{
 param_asm_atomic((unsigned int *)a0, a1);
 return;
}


// Function: param_asm_atomic at 0x401660
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_fetch_add((_Atomic unsigned int *)a0, a1);
 return *(a0) + a1;
}


// Function: sub_401669 at 0x401669
void sub_401669(unsigned long a0, unsigned long a1)
{
 param_atomic_c11((unsigned int *)a0, a1);
 return;
}


// Function: param_atomic_c11 at 0x401670
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_fetch_add((_Atomic unsigned int *)a0, a1);
 return *(a0) + a1;
}


// Function: sub_401679 at 0x401679
void sub_401679()
{
 call_asm_atomic(0, 0);
 return;
}


// Function: call_asm_atomic at 0x401680
long long call_asm_atomic(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_fetch_add((_Atomic unsigned int *)&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x4016a0
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* ptr; // rax
 unsigned int v3; // eax

 v1 = sysconf(_SC_PAGE_SIZE);
 ptr = mmap(NULL, v1, 7, 34, -1, 0);
 if (ptr == 0xffffffffffffffff)
 return 4294967295;
 *((unsigned short *)&ptr[4]) = 49925;
 *((unsigned int *)ptr) = 3229874313;
 v3 = ((unsigned int (*)(unsigned int))ptr)(a0);
 munmap(ptr, v1);
 return v3;
}


// Function: sub_40170b at 0x40170b
void sub_40170b()
{
 param_memory_protection(0);
 return;
}


// Function: param_memory_protection at 0x401710
unsigned int param_memory_protection(unsigned int a0)
{
 unsigned long v3; // r14
 unsigned int *p; // rax
 unsigned int *ptr; // rbx
 unsigned int v6; // ebp
 unsigned int v7; // r15d
 unsigned long long v0; // [bp-0x28]

 v3 = sysconf(_SC_PAGE_SIZE);
 p = mmap(NULL, v3, 3, 34, -1, 0);
 if (p == 0xffffffffffffffff)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 v6 = 4294967294;
 if (!mprotect(p, v3, 1))
 {
 v7 = *(ptr);
 v6 = 4294967293;
 if (!mprotect(ptr, v3, 3))
 {
 *(ptr) = 100;
 v6 = v7;
 }
 }
 munmap(ptr, v3);
 return v6;
}


// Function: sub_4017ab at 0x4017ab
void sub_4017ab(unsigned long a0, unsigned long a1)
{
 param_clobber_importance(a0, a1);
 return;
}


// Function: param_clobber_importance at 0x4017b0
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: sub_4017bf at 0x4017bf
void sub_4017bf()
{
 call_asm_privileged();
 return;
}


// Function: call_asm_privileged at 0x4017c0
unsigned long long call_asm_privileged()
{
 unsigned long v17; // r15
 unsigned int *addr; // rax
 unsigned int *ptr; // rbp
 unsigned int v20; // r13d
 unsigned long v13; // rax
 unsigned int v14; // ebx
 void* p; // rax
 unsigned int v16; // r14d
 unsigned long long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x30]
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x20]
 unsigned long long v4; // [bp-0x18]
 unsigned long long v5; // [bp-0x10]

 v13 = sysconf(_SC_PAGE_SIZE);
 v14 = 4294967295;
 p = mmap(NULL, v13, 7, 34, -1, 0);
 v16 = 4294967295;
 if (p != 0xffffffffffffffff)
 {
 *((unsigned short *)&p[4]) = 49925;
 *((unsigned int *)p) = 3229874313;
 v16 = ((unsigned int (*)(unsigned int))p)(10);
 munmap(p, v13);
 }
 v17 = sysconf(_SC_PAGE_SIZE);
 addr = mmap(NULL, v17, 3, 34, -1, 0);
 if (addr != 0xffffffffffffffff)
 {
 ptr = addr;
 *(addr) = 42;
 v14 = 4294967294;
 if (!mprotect(addr, v17, 1))
 {
 v20 = *(ptr);
 v14 = 4294967293;
 if (!mprotect(ptr, v17, 3))
 {
 *(ptr) = 100;
 v14 = v20;
 }
 }
 munmap(ptr, v17);
 }
 return (0 || (v14 ^ 42) || (v16 ^ 15) ? 77 : v16);
}


// Function: sub_4018f1 at 0x4018f1
void sub_4018f1()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401900
unsigned int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: sub_401912 at 0x401912
void sub_401912()
{
 test_asm_features();
 return;
}


// Function: test_asm_features at 0x401920
char g_4021d5[] = "%d\n";
char g_4021f1[] = "%d\n";
char g_40220d[] = "%d\n";
char g_402229[] = "%d\n";
char g_402245[] = "%d\n";
char g_402261[] = "%d\n";
char g_4022a4[] = "test_asm_features";

int test_asm_features()
{
 unsigned int v7; // eax
 unsigned long long idx; // rcx
 unsigned long long j; // rcx
 char *v10; // rdx
 char *cur; // rsi
 unsigned long long v12; // xmm1lq
 int v0; // [bp-0x58], Other Possible Types: unsigned int
 unsigned long long v1; // [bp-0x58], Other Possible Types: unsigned long long
 char v2; // [bp-0x54]
 unsigned long long v3; // [bp-0x48], Other Possible Types: unsigned int
 char v4[10]; // [bp-0x38]
 unsigned long long v5; // [bp-0x28]

 puts(&g_4022a4);
 printf(&g_4021d5, 15);
 v3 = 5;
 v0 = 0xdeadbeef;
 v7 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v7 += *((int *)((char *)&v0 + 4 * idx));
 }
 printf(&g_4021f1, v7);
 strncpy(v4, "Hello ASM", 10);
 v3 = 0;
 v0 = 0;
 j = 9;
 v10 = &v4;
 for (cur = (char*)&v0; j; j -= 1)
 {
 *(cur) = *(v10);
 cur += 1;
 v10 += 1;
 }
 printf(&g_40220d, (!(v2 ^ 111) && !((char)v0 ^ 72) ? 42 : 4294967295));
 v1 = 0xdeadbeef;
 v5 = 0xcafebabe;
 v5 = AddV(v1, v5);
 v12 = (unsigned long long)(AddV(((unsigned int)(v5 >> 32) | (unsigned int)(v5)), v5));
 printf(&g_402229, (unsigned long long)(AddV(((unsigned int)(v12 >> 32) | (unsigned int)(v12)), v12)));
 v0 = 10;
 v1 = v0;
 atomic_fetch_add((_Atomic unsigned int *)&v1, 5);
 printf(&g_402245, v0 * 2 + 5);
 return printf(&g_402261, call_asm_privileged() & 4294967295);
}


// Function: sub_401a8f at 0x401a8f
void sub_401a8f()
{
 main(0, 0);
 return;
}


// Function: main at 0x401a90
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


