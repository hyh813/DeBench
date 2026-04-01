// Angr Decompilation of 5-23_clang_O3_g
// Platform: X86

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/sysinfo.h>
#include <stdint.h>
#include <stdatomic.h>
#include <errno.h>
#include <stddef.h>

// Macro definitions for SIMD operations
#define AddV(a, b) ((a) + (b))

// Atomic operations
static inline unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val) {
    return atomic_fetch_add_explicit((_Atomic unsigned int *)ptr, val, memory_order_seq_cst);
}

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int padding_0[256];
    unsigned int field_2eb7;
} struct_0;

extern struct_0 *g_403ff4;

/* Forward declarations */
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);

int _init()
{
 if (g_403ff4)
 g_403ff4->field_2eb7 = 0;
 frame_dummy();
 return __do_global_ctors_aux();
}


void frame_dummy()
{
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3] = {0}; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return v0;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0(void* v1)
{
 return 0;
}


// Function: sub_4010b6 at 0x4010b6
void sub_4010b6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010eb at 0x4010eb
void sub_4010eb()
{
 return;
}


// Function: sub_4010ec at 0x4010ec
void sub_4010ec()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010f0
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void)
{
 return;
}


void deregister_tm_clones()
{
}


// Function: sub_4010f4 at 0x4010f4
void sub_4010f4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */



// Function: sub_401133 at 0x401133
void sub_401133()
{
}


// Function: sub_401139 at 0x401139
void sub_401139()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_401187 at 0x401187
void sub_401187()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux()
{
 deregister_tm_clones();
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401229
void __x86_get_pc_thunk_dx(void)
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40122d
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_401231 at 0x401231
void sub_401231()
{
 param_macro_constants(64);
 return;
}


// Function: param_macro_constants at 0x401240
unsigned int param_macro_constants(unsigned int a0)
{
 if (a0 < 1025)
 return 0x200;
 return 64;
}


// Function: sub_401256 at 0x401256
void sub_401256()
{
 unsigned int result = call_macro_constants();
 (void)result;
 return;
}


// Function: call_macro_constants at 0x401260
unsigned int call_macro_constants()
{
 return 64;
}


// Function: sub_401266 at 0x401266
void sub_401266()
{
 unsigned int result = param_macro_functions(10, 20);
 (void)result;
 return;
}


// Function: param_macro_functions at 0x401270
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // ecx
 unsigned int v1; // eax

 v0 = a0;
 if (v0 > a1)
 v1 = v0;
 else
 v1 = a1;
 return v1 + v0 * v0;
}


// Function: sub_401285 at 0x401285
void sub_401285()
{
 unsigned int result = call_macro_functions();
 (void)result;
 return;
}


// Function: call_macro_functions at 0x401290
unsigned int call_macro_functions()
{
 return 30;
}


// Function: sub_401296 at 0x401296
void sub_401296()
{
 unsigned int result = param_conditional_compile(10);
 (void)result;
 return;
}


// Function: param_conditional_compile at 0x4012a0
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: sub_4012ab at 0x4012ab
void sub_4012ab()
{
 unsigned int result = call_conditional_compile();
 (void)result;
 return;
}


// Function: call_conditional_compile at 0x4012b0
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6()
{
 unsigned int result = param_multi_branch_compile(11409);
 (void)result;
 return;
}


// Function: param_multi_branch_compile at 0x4012c0
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: sub_4012cd at 0x4012cd
void sub_4012cd()
{
 unsigned int result = call_multi_branch_compile();
 (void)result;
 return;
}


// Function: call_multi_branch_compile at 0x4012d0
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6()
{
 unsigned int result = param_macro_recursion(100);
 (void)result;
 return;
}


// Function: param_macro_recursion at 0x4012e0
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: sub_4012e8 at 0x4012e8
void sub_4012e8()
{
 unsigned int result = call_macro_recursion();
 (void)result;
 return;
}


// Function: call_macro_recursion at 0x4012f0
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: sub_4012f6 at 0x4012f6
void sub_4012f6()
{
 unsigned int result = param_stringize();
 (void)result;
 return;
}


// Function: param_stringize at 0x401300
unsigned int param_stringize()
{
 return 19;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 unsigned int result = call_stringize();
 (void)result;
 return;
}


// Function: call_stringize at 0x401310
unsigned int call_stringize()
{
 return 19;
}


// Function: sub_401316 at 0x401316
void sub_401316()
{
 unsigned int result = my_func(10);
 (void)result;
 return;
}


// Function: my_func at 0x401320
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_40132a at 0x40132a
void sub_40132a()
{
 unsigned int result = param_token_paste(5);
 (void)result;
 return;
}


// Function: param_token_paste at 0x401330
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: sub_40133e at 0x40133e
void sub_40133e()
{
 unsigned int result = call_token_paste();
 (void)result;
 return;
}


// Function: call_token_paste at 0x401340
unsigned int call_token_paste()
{
 return 60;
}


// Function: sub_401346 at 0x401346
int sub_401346()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: param_variadic_macro at 0x401350
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = a2;
 v1 = a1;
 v0 = a0;
 printf("LOG: Values: %d, %d, %d\n", v0, v1, v2);
 return a0 + 50;
}


// Function: sub_401386 at 0x401386
int sub_401386()
{
 return call_variadic_macro();
}


// Function: call_variadic_macro at 0x401390
unsigned int call_variadic_macro()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]

 v2 = 30;
 v1 = 20;
 v0 = 10;
 printf("LOG: Values: %d, %d, %d\n", v0, v1, v2);
 return 60;
}


// Function: sub_4013bf at 0x4013bf
void sub_4013bf()
{
 unsigned int result = param_macro_override(5);
 (void)result;
 return;
}


// Function: param_macro_override at 0x4013c0
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: sub_4013cb at 0x4013cb
void sub_4013cb()
{
 unsigned int result = call_macro_override();
 (void)result;
 return;
}


// Function: call_macro_override at 0x4013d0
unsigned int call_macro_override()
{
 return 16;
}


// Function: sub_4013d6 at 0x4013d6
void sub_4013d6()
{
 unsigned int result = param_include_guard();
 (void)result;
 return;
}


// Function: param_include_guard at 0x4013e0
unsigned int param_include_guard()
{
 return 500;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 unsigned int result = call_include_guard();
 (void)result;
 return;
}


// Function: call_include_guard at 0x4013f0
unsigned int call_include_guard()
{
 return 500;
}


// Function: sub_4013f6 at 0x4013f6
int sub_4013f6()
{
 return param_builtin_macros(0);
}


// Function: param_builtin_macros at 0x401400
int param_builtin_macros(unsigned int a0)
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:15";
 v3 = "Jan 15 2026";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 return 282 + a0;
}


// Function: sub_40144f at 0x40144f
int sub_40144f()
{
 return call_builtin_macros();
}


// Function: call_builtin_macros at 0x401450
unsigned int call_builtin_macros()
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:15";
 v3 = "Jan 15 2026";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 return 382;
}


// Function: sub_40149b at 0x40149b
int sub_40149b()
{
 return test_preprocessing_features();
}


/* Global string constants used by test_preprocessing_features */
char g_4020cb[] = "";
char g_4020e6[] = "";
char g_402101[] = "";
char g_40211c[] = "";
char g_40213b[] = "";
char g_402157[] = "";
char g_402181[] = "";
char g_40219c[] = "";
char g_4021b7[] = "";
char g_4021d2[] = "";
char g_4021ee[] = "";
char g_4022c9[] = "";
char g_4022f0[] = "";
char g_402221[] = "";
char g_40223d[] = "";
char g_402259[] = "";
char g_402275[] = "";
char g_402291[] = "";
char g_4022ad[] = "";

// Function: test_preprocessing_features at 0x4014a0
int test_preprocessing_features()
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x18]
 const char *v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 puts(&g_4022c9);
 v3 = 64;
 puts(&g_4020cb);
 v3 = 30;
 puts(&g_4020e6);
 v3 = 32;
 puts(&g_402101);
 v3 = 57122;
 puts(&g_40211c);
 v3 = 116;
 puts(&g_40213b);
 v3 = 19;
 puts(&g_402157);
 v3 = 60;
 puts(&g_402181);
 v5 = 30;
 v4 = 20;
 v3 = 10;
 printf("LOG: Values: %d, %d, %d\n", v3, v4, v5);
 v3 = 60;
 puts(&g_40219c);
 v3 = 16;
 puts(&g_4021b7);
 v3 = 500;
 puts(&g_4021d2);
 v4 = "Jan 15 2026";
 v3 = "03:00:15";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 v3 = 382;
 return puts(&g_4021ee);
}


// Function: sub_4015ce at 0x4015ce
void sub_4015ce(unsigned int a0)
{
 param_asm_basic();
 return;
}


// Function: param_asm_basic at 0x4015d0
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: sub_4015de at 0x4015de
void sub_4015de()
{
 call_asm_basic();
 return;
}


// Function: call_asm_basic at 0x4015e0
unsigned int call_asm_basic()
{
 return 15;
}


// Function: sub_4015ef at 0x4015ef
void sub_4015ef(unsigned int a0, unsigned int a1)
{
 param_asm_clobber();
 return;
}


// Function: param_asm_clobber at 0x4015f0
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v0; // eax
 unsigned int idx; // ecx

 v0 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v0 += *((int *)(ptr + idx * 4));
 }
 return v0;
}


// Function: sub_40160d at 0x40160d
void sub_40160d()
{
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x401610
unsigned int call_asm_clobber()
{
 unsigned int v3; // eax
 unsigned int idx; // ecx
 unsigned long long v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 v1 = 5;
 v0 = 0x4550524f4f48ULL;
 v3 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((unsigned int *)((char *)&v0 + 4 * idx));
 }
 return v3;
}


// Function: sub_401653 at 0x401653
void sub_401653(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_multi_insn();
 return;
}


// Function: param_asm_multi_insn at 0x401660
char param_asm_multi_insn(char *a0, char *a1, unsigned int a2)
{
 char *iter; // ecx
 char *cur; // edx
 unsigned int result; // esi
 char v3; // al

 iter = a0;
 cur = a1;
 for (result = a2; result; result -= 1)
 {
 v3 = *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 return v3;
}


// Function: sub_40167e at 0x40167e
void sub_40167e()
{
 call_asm_multi_insn();
 return;
}


// Function: call_asm_multi_insn at 0x401680
char call_asm_multi_insn()
{
 unsigned int v8 = 0; // esi
 char *cur; // ecx
 char *v10; // edx
 unsigned int flag2; // esi
 unsigned long long v0; // [bp-0x40]
 unsigned long long v1; // [bp-0x38]
 unsigned short v2; // [bp-0x30]
 int flag1; // [bp-0x2c]
 char v4 = 0; // [bp-0x28]
 unsigned long long result; // [bp-0x1c]
 unsigned int v6; // [bp-0x4]

 v6 = v8;
 v2 = 77;
 strncpy((char*)&v1, "o AS", 4);
 strncpy((char*)&v0, "Hell", 4);
 result = 0;
 flag1 = 0;
 cur = (char*)&flag1;
 v10 = (char*)&v0;
 for (flag2 = 9; flag2; flag2 -= 1)
 {
 *(cur) = *(v10);
 cur += 1;
 v10 += 1;
 }
 return (!(v4 ^ 111) && !((char)flag1 ^ 72) ? 42 : 255);
}


// Function: sub_4016e5 at 0x4016e5
void sub_4016e5(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_simd();
 return;
}


// Function: param_asm_simd at 0x4016f0
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: sub_40170c at 0x40170c
void sub_40170c(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_simd_intrinsics();
 return;
}


// Function: param_simd_intrinsics at 0x401710
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a1), *(a0));
 return 0;
}


// Function: sub_40172b at 0x40172b
void sub_40172b()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401730
int call_asm_simd()
{
 unsigned long long v4; // xmm1
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV((unsigned long long)v2, (unsigned long long)v1);
 v4 = AddV((unsigned long long)v0, (unsigned long long)v0);
 return (int)AddV((unsigned long long)v4, (unsigned long long)v4);
}


// Function: sub_40178d at 0x40178d
void sub_40178d(unsigned int a0, unsigned int a1)
{
 param_asm_atomic();
 return;
}


// Function: param_asm_atomic at 0x401790
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1(unsigned int a0, unsigned int a1)
{
 param_atomic_c11();
 return;
}


// Function: param_atomic_c11 at 0x4017b0
int param_atomic_c11(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: sub_4017c1 at 0x4017c1
void sub_4017c1()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x4017d0
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: sub_4017ed at 0x4017ed
int sub_4017ed()
{
 return param_dynamic_code(10);
}


// Function: param_dynamic_code at 0x4017f0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // eax
 void* ptr; // eax

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 7, 7, 7);
 if (ptr == MAP_FAILED)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: sub_401854 at 0x401854
int sub_401854()
{
 return param_memory_protection();
}


// Function: param_memory_protection at 0x401860
unsigned int param_memory_protection()
{
 unsigned int v2; // esi
 unsigned int *p; // eax
 unsigned int *ptr; // edi
 unsigned int v5; // ebp
 unsigned int v0; // [bp-0x14]

 v2 = sysconf(30);
 p = mmap(NULL, v2, 3, 3, 3, 3);
 if (p == MAP_FAILED)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 v5 = 4294967294;
 if (!mprotect(p, v2, 1))
 {
 v0 = *(ptr);
 v5 = 4294967293;
 if (!mprotect(ptr, v2, 3))
 {
 *(ptr) = 100;
 v5 = v0;
 }
 }
 munmap(ptr, v2);
 return v5;
}


// Function: sub_401911 at 0x401911
void sub_401911(unsigned int a0, unsigned int a1)
{
 param_clobber_importance();
 return;
}


// Function: param_clobber_importance at 0x401920
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: sub_40193b at 0x40193b
int sub_40193b()
{
 return call_asm_privileged();
}


// Function: call_asm_privileged at 0x401940
unsigned int call_asm_privileged()
{
 unsigned int v7 = 0; // ebx
 unsigned int v8 = 0; // edi
 unsigned int v9 = 0; // esi
 unsigned int v10; // eax
 void* ptr; // ebp
 unsigned int v12; // esi
 unsigned int v13; // eax
 unsigned int v14; // edi
 unsigned int *p; // eax
 unsigned int *ptr2; // ebp
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 void* v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]
 unsigned int v5; // [bp-0x8]

 v5 = v7;
 v4 = v8;
 v3 = v9;
 v10 = sysconf(30);
 ptr = mmap(NULL, v10, 7, 7, 7, 7);
 v12 = 4294967295;
 v13 = 4294967295;
 if (ptr != MAP_FAILED)
 {
 v2 = ptr;
 munmap(v2, v10);
 v13 = 15;
 }
 v1 = v13;
 v14 = sysconf(30);
 p = mmap(NULL, v14, 3, 3, 3, 3);
 if (p != MAP_FAILED)
 {
 ptr2 = p;
 *(p) = 42;
 v12 = 4294967294;
 if (!mprotect(p, v14, 1))
 {
 v0 = *(ptr2);
 v12 = 4294967293;
 if (!mprotect(ptr2, v14, 3))
 {
 *(ptr2) = 100;
 v12 = v0;
 }
 }
 munmap(ptr2, v14);
 }
 if (v2 != MAP_FAILED)
 return (0 || (v12 ^ 42) ? 77 : v1);
 return v1;
}


// Function: sub_401a72 at 0x401a72
void sub_401a72()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401a80
int param_memory_clobber_demo()
{
 return 100;
}


// Function: sub_401a9e at 0x401a9e
int sub_401a9e()
{
 return test_asm_features();
}


// Function: test_asm_features at 0x401aa0
int test_asm_features()
{
unsigned int v10; // eax
unsigned int idx; // ecx
char *v12; // edx
unsigned int result; // ecx
char *cur; // edi
unsigned long long v0; // [bp-0x68]
char v1[8]; // [bp-0x60]
char v2[8]; // [bp-0x58]
unsigned short v3; // [bp-0x54]
unsigned long long v4; // [bp-0x4c]
unsigned int v5; // [bp-0x44]
char v6 = 0; // [bp-0x40]
unsigned long long v7; // [bp-0x38]
unsigned long long v8; // [bp-0x30]
unsigned long long v15; // [bp-0x28]

 puts(&g_4022f0);
 v0 = 15;
 puts(&g_402221);
 v7 = 5;
 v4 = 0x4550524f4f48ULL;
 v10 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v10 += *((int *)((char *)&v4 + 4 * idx));
 }
 v0 = v10;
 puts(&g_40223d);
 v3 = 77;
 strncpy((char*)&v2, "o AS", 4);
 strncpy((char*)&v1, "Hell", 4);
 v7 = 0;
 v4 = 0;
 v12 = &v1;
 result = 9;
 for (cur = (char*)&v4; result; result -= 1)
 {
 *(cur) = *(v12);
 cur += 1;
 v12 += 1;
 }
 v0 = (!(v6 ^ 111) && !((char)v4 ^ 72) ? 42 : 4294967295);
 puts(&g_402259);
 v4 = 3169126501123975826ULL;
 memcpy(&v1, "\x58\x57\x80\x12\x10\x50\x3d\x85", 8);
 {
 unsigned long long temp;
 memcpy(&temp, v1, sizeof(temp));
 v8 = AddV((unsigned long long)v4, temp);
 }
 v15 = AddV((unsigned long long)v8, (unsigned long long)v8);
 v0 = (unsigned int)AddV((unsigned long long)v15, (unsigned long long)v15);
 puts(&g_402275);
 v5 = 10;
 v4 = v5;
 atomic_exchange_add((unsigned int*)&v4, 5);
 v0 = v5 * 2 + 5;
 puts(&g_402291);
 v0 = call_asm_privileged();
 return puts(&g_4022ad);
}


// Function: sub_401c29 at 0x401c29
int sub_401c29()
{
 main();
 return;
}


// Function: main at 0x401c30
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401c51 at 0x401c51
void sub_401c51()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_401ca2 at 0x401ca2
void sub_401ca2()
{
}



/* CRT stub function _fini removed by preprocessor */


