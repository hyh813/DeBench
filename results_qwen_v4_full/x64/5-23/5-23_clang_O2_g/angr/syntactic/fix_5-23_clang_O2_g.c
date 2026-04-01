// Angr Decompilation of 5-23_clang_O2_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdatomic.h>

/* CRT stub function _init removed by preprocessor */
struct struct_0 {
 int dummy;
};

extern struct struct_0 *g_403fe8;

// Global variable for param_memory_clobber_demo
unsigned int global_var = 0;

// Forward declaration for AddV function
int AddV(int a, int b);

// Forward declarations for other functions
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
unsigned long long param_stringize();
unsigned long long call_stringize();
unsigned int my_func(unsigned int a0);
int param_token_paste(unsigned int a0);
unsigned long long call_token_paste();
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned long long call_variadic_macro();
int param_macro_override(unsigned int a0);
unsigned long long call_macro_override();
unsigned long long param_include_guard();
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
double param_asm_simd(long long ptr, long long p, long long addr);
double param_simd_intrinsics(long long p, long long ptr, long long addr);
long long call_asm_simd();
int param_asm_atomic(atomic_uint *a0, unsigned int a1);
int param_atomic_c11(atomic_uint *a0, unsigned int a1);
long long call_asm_atomic();
unsigned long long param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection();
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned long long call_asm_privileged();
int param_memory_clobber_demo();
int test_asm_features();
unsigned int main();

// Definition of AddV function
int AddV(int a, int b)
{
 return a + b;
}

void _init()
{
 // CRT initialization stub
 return;
}


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 (void)g_404010;
 return;
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
 // SIGTRAP placeholder
}


// Function: sub_4010c6 at 0x4010c6
void deregister_tm_clones(void);
void sub_4010c6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_4010f9 at 0x4010f9
void register_tm_clones(void);
void sub_4010f9()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_401139 at 0x401139
void __do_global_dtors_aux(void);
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
void frame_dummy(void);
void sub_401179()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401189 at 0x401189
void sub_401189(unsigned long a0)
{
 param_macro_constants();
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
 call_macro_constants();
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
 param_macro_functions();
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
 call_macro_functions();
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
 param_conditional_compile();
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
 call_conditional_compile();
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
 param_multi_branch_compile();
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
 call_multi_branch_compile();
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
 param_macro_recursion();
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
 call_macro_recursion();
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
 param_stringize();
 return;
}


// Function: param_stringize at 0x401240
unsigned long long param_stringize()
{
 return 19;
}


// Function: sub_401246 at 0x401246
void sub_401246()
{
 call_stringize();
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
 my_func();
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
 param_token_paste();
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
 call_token_paste();
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
 param_variadic_macro();
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
 call_variadic_macro();
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
 param_macro_override();
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
 call_macro_override();
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
 param_include_guard();
 return;
}


// Function: param_include_guard at 0x401300
unsigned long long param_include_guard()
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
 param_builtin_macros();
 return;
}


// Function: param_builtin_macros at 0x401320
int param_builtin_macros(unsigned int a0)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:50");
 return a0 + 282;
}


// Function: sub_40135c at 0x40135c
void sub_40135c()
{
 call_builtin_macros();
 return;
}


// Function: call_builtin_macros at 0x401360
unsigned long long call_builtin_macros()
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:50");
 return 382;
}


// Function: sub_401397 at 0x401397
void sub_401397()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x4013a0
// String definitions for test_preprocessing_features
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
char g_40227d[] = "Testing preprocessing features";

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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:50");
 return printf(&g_4021a2, 382);
}


// Function: sub_4014cb at 0x4014cb
void sub_4014cb(unsigned long a0)
{
 param_asm_basic();
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
 call_asm_basic();
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
 param_asm_clobber();
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
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x401510
unsigned int call_asm_clobber()
{
 unsigned int v3; // eax
 unsigned long long idx; // rcx
 unsigned int v0[5]; // [bp-0x18]
 unsigned int v1; // [bp-0x8]

 v1 = 5;
 v0[0] = 0x45454545;
 v0[1] = 0x45454545;
 v0[2] = 0x45454545;
 v0[3] = 0x45454545;
 v0[4] = 0x45454545;
 v3 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v3 += v0[idx];
 }
 return v3;
}


// Function: sub_401544 at 0x401544
void sub_401544()
{
 param_asm_multi_insn();
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
 call_asm_multi_insn();
 return;
}


// Function: call_asm_multi_insn at 0x401570
char call_asm_multi_insn()
{
 char *cur; // rcx
 char *v7; // rdx
 unsigned long long i; // rsi
 char v0[8]; // [bp-0x38]
 unsigned short v1; // [bp-0x30]
 int flag1; // [bp-0x28]
 char v3; // [bp-0x24]
 unsigned long long result; // [bp-0x18]

 strncpy(v0, "Hello AS", 8);
 v1 = 77;
 *((void*)&result) = 0;
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
 param_asm_simd();
 return;
}


// Function: param_asm_simd at 0x4015e0
double param_asm_simd(long long ptr, long long p, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*(int*)ptr, *(int*)p);
 *((int*)addr) = v1;
 return (double)v1;
}


// Function: param_simd_intrinsics at 0x4015f0
double param_simd_intrinsics(long long p, long long ptr, long long addr)
{
 int v1; // xmm0

 v1 = AddV(*(int*)ptr, *(int*)p);
 *((int*)addr) = v1;
 return (double)v1;
}


// Function: sub_4015ff at 0x4015ff
void sub_4015ff()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401600
long long call_asm_simd()
{
 unsigned long long v4; // xmm1lq
 unsigned long long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x18]

 v2 = 0x4545454545454545ULL;
 v1 = 0x8585858585858585ULL;
 v0 = AddV((int)v2, (int)v1);
 v4 = (unsigned long long)(AddV((int)(v0 >> 32), (int)v0));
 return AddV((int)(v4 >> 32), (int)v4);
}


// Function: sub_401651 at 0x401651
void sub_401651(unsigned long a0, unsigned long a1)
{
 param_asm_atomic();
 return;
}


// Function: param_asm_atomic at 0x401660
int param_asm_atomic(atomic_uint *a0, unsigned int a1)
{
 atomic_fetch_add(a0, a1);
 return atomic_load(a0) + a1;
}


// Function: sub_401669 at 0x401669
void sub_401669(unsigned long a0, unsigned long a1)
{
 param_atomic_c11();
 return;
}


// Function: param_atomic_c11 at 0x401670
int param_atomic_c11(atomic_uint *a0, unsigned int a1)
{
 atomic_fetch_add(a0, a1);
 return atomic_load(a0) + a1;
}


// Function: sub_401679 at 0x401679
void sub_401679()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x401680
long long call_asm_atomic()
{
 atomic_uint v0; // [bp-0x4]

 atomic_init(&v0, 10);
 atomic_fetch_add(&v0, 5);
 return atomic_load(&v0) * 2 + 5;
}


// Function: param_dynamic_code at 0x4016a0
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* ptr; // rax
 unsigned int v3; // eax

 v1 = sysconf(30);
 ptr = mmap(NULL, v1, 7, 34, -1, NULL);
 if (ptr == (void*)0xffffffffffffffff)
 return 4294967295;
 *((unsigned short *)((char*)ptr + 4)) = 49925;
 *((unsigned int *)ptr) = 3229874313;
 v3 = ((unsigned int (*)(unsigned int))ptr)(a0);
 munmap(ptr, v1);
 return v3;
}


// Function: sub_401708 at 0x401708
void sub_401708()
{
 param_memory_protection();
 return;
}


// Function: param_memory_protection at 0x401710
unsigned int param_memory_protection()
{
 unsigned long v3; // r14
 unsigned int *p; // rax
 unsigned int *ptr; // rbx
 unsigned int v6; // ebp
 unsigned int v7; // r15d
 unsigned long long v0; // [bp-0x28]

 v0 = 0;
 v3 = sysconf(30);
 p = mmap(NULL, v3, 3, 34, -1, NULL);
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
 param_clobber_importance();
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
 unsigned long v9; // rax
 unsigned int v10; // ebp
 void* ptr; // rax
 unsigned long long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned long long v3; // [bp-0x10]

 v3 = 0;
 v2 = 0;
 v1 = 0;
 v0 = 0;
 v9 = sysconf(30);
 v10 = 4294967295;
 ptr = mmap(NULL, v9, 7, 34, -1, NULL);
 if (ptr != (void*)0xffffffffffffffff)
 {
 *((unsigned short *)((char*)ptr + 4)) = 49925;
 *((unsigned int *)ptr) = 3229874313;
 v10 = ((unsigned int (*)(unsigned int))ptr)(10);
 munmap(ptr, v9);
 }
 return (0 || (param_memory_protection() ^ 42) || (v10 ^ 15) ? v10 : 77);
}


// Function: sub_401863 at 0x401863
void sub_401863()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401870
int param_memory_clobber_demo()
{
 return 50 + (int)global_var;
}


// Function: sub_401882 at 0x401882
void sub_401882()
{
 test_asm_features();
 return;
}


// Function: test_asm_features at 0x401890
// String definitions for test_asm_features
char g_4021d5[] = "%d\n";
char g_4021f1[] = "%d\n";
char g_40220d[] = "%d\n";
char g_402229[] = "%d\n";
char g_402245[] = "%d\n";
char g_402261[] = "%d\n";
char g_4022a4[] = "Testing ASM features";

int test_asm_features()
{
 unsigned int v7; // eax
 unsigned long long idx; // rcx
 unsigned long long j; // rcx
 char *v10; // rdx
 char *cur; // rsi
 unsigned long v12; // xmm1lq
 unsigned int v0_arr[5]; // [bp-0x58]
 atomic_uint v1_atom; // [bp-0x54]
 char v2; // [bp-0x50]
 unsigned long long v3; // [bp-0x48]
 char v4[16]; // [bp-0x38]
 unsigned long long v5; // [bp-0x28]

 puts(&g_4022a4);
 printf(&g_4021d5, 15);
 v3 = 5;
 v0_arr[0] = 0x45454545;
 v0_arr[1] = 0x45454545;
 v0_arr[2] = 0x45454545;
 v0_arr[3] = 0x45454545;
 v0_arr[4] = 0x45454545;
 v7 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v7 += v0_arr[idx];
 }
 printf(&g_4021f1, v7);
 strncpy(v4, "Hello ASM", 9);
 v3 = 0;
 v5 = 0;
 j = 9;
 v10 = &v4;
 for (cur = (char*)&v5; j; j -= 1)
 {
 *(cur) = *(v10);
 cur += 1;
 v10 += 1;
 }
 printf(&g_40220d, (!(v2 ^ 111) && !((char)v5 ^ 72) ? 42 : 4294967295));
 *((unsigned long long *)&v4) = 0x8585858585858585ULL;
 v5 = AddV(0, (int)v4[0]);
 v12 = (unsigned long long)(AddV((int)(v5 >> 32), (int)v5));
 printf(&g_402229, (unsigned long long)(AddV((int)(v12 >> 32), (int)v12)));
 atomic_init(&v1_atom, 10);
 atomic_fetch_add(&v1_atom, 5);
 printf(&g_402245, atomic_load(&v1_atom));
 return printf(&g_402261, call_asm_privileged() & 4294967295);
}


// Function: sub_4019ff at 0x4019ff
void sub_4019ff()
{
 main();
 return;
}


// Function: main at 0x401a00
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


