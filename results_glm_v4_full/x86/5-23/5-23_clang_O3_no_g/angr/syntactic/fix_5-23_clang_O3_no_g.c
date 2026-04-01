// Angr Decompilation of 5-23_clang_O3_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdint.h>
#include <stddef.h>

/* Ensure MAP_ANONYMOUS is defined (compatibility for different systems) */
#ifndef MAP_ANONYMOUS
#define MAP_ANONYMOUS 0x20
#endif

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    int field_2eb7;
    char padding_0[300];
    char padding_2e57[300];
} struct_0;

extern struct_0 *g_403ff4;

/* Define global variables */
unsigned int global_var;

/* Define the extern variable to avoid linker errors */
struct_0 *g_403ff4 = NULL;

/* Define string constants */
const char g_4020cb[] = "param_macro_constants=%d\n";
const char g_4020e6[] = "call_macro_constants=%d\n";
const char g_402101[] = "param_macro_functions=%d\n";
const char g_40211c[] = "call_macro_functions=%d\n";
const char g_40213b[] = "param_conditional_compile=%d\n";
const char g_402157[] = "call_conditional_compile=%d\n";
const char g_402181[] = "param_multi_branch_compile=%d\n";
const char g_40219c[] = "param_variadic_macro=%d\n";
const char g_4021b7[] = "call_variadic_macro=%d\n";
const char g_4021d2[] = "param_include_guard=%d\n";
const char g_4021ee[] = "call_builtin_macros=%d\n";
const char g_4022c9[] = "Testing Preprocessing Features\n";
const char g_402221[] = "call_asm_basic=%d\n";
const char g_40223d[] = "call_asm_clobber=%d\n";
const char g_402259[] = "call_asm_multi_insn=%d\n";
const char g_402275[] = "call_asm_simd=%d\n";
const char g_402291[] = "call_asm_atomic=%d\n";
const char g_4022ad[] = "call_asm_privileged=%d\n";
const char g_4022f0[] = "Testing ASM Features\n";

/* Forward declarations for missing functions */
void frame_dummy(void);
void __do_global_ctors_aux(void);
void __do_global_dtors_aux(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
int sub_4010b0(void);
unsigned int call_multi_branch_compile(void);
unsigned int call_macro_recursion(void);
unsigned int call_stringize(void);
unsigned int call_token_paste(void);
int param_macro_recursion(void);
unsigned int param_stringize(void);
int param_token_paste(void);
unsigned int param_include_guard(void);
unsigned int call_include_guard(void);
int param_builtin_macros(void);
unsigned int call_builtin_macros(void);
unsigned int param_macro_constants(void);
unsigned int call_macro_constants(void);
unsigned int call_macro_functions(void);
unsigned int call_conditional_compile(void);
int param_conditional_compile(void);
int param_multi_branch_compile(void);
unsigned int param_variadic_macro(void);
unsigned int call_variadic_macro(void);
int sub_401346(void);
int sub_401386(void);
void sub_4013bf(void);
int param_macro_override(void);
void sub_4013cb(void);
unsigned int call_macro_override(void);
int param_asm_basic(void);
unsigned int call_asm_basic(void);
unsigned int param_asm_clobber(void);
unsigned int call_asm_clobber(void);
char param_asm_multi_insn(void);
char call_asm_multi_insn(void);
unsigned int param_asm_simd(void);
int call_asm_simd(void);
unsigned int param_simd_intrinsics(void);
int param_asm_atomic(void);
int param_atomic_c11(void);
int call_asm_atomic(void);
unsigned int param_dynamic_code(void);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(void);
unsigned int call_asm_privileged(void);
int param_memory_clobber_demo(void);
int test_preprocessing_features(void);
int test_asm_features(void);
int main(void);
unsigned int __x86_get_pc_thunk_bx(void);
unsigned int __x86_get_pc_thunk_dx(void);
unsigned int my_func(void);
int sub_401316(unsigned int a0);

/* Helper macros/functions for SIMD */
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

#define CONCAT(x, y) x ## y



/* Atomic operation placeholder */
static inline unsigned int atomic_exchange_add(unsigned int* ptr, unsigned int val) {
    unsigned int old = *ptr;
    *ptr += val;
    return old;
}

void _init()
{
 if (g_403ff4)
 ((void (*)(void))g_403ff4)();
 __x86_get_pc_thunk_bx();
 frame_dummy();
 __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3] = {0}; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return 0;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 void* v1; // ebx

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
 abort();
}


// Function: sub_4010ec at 0x4010ec
void sub_4010ec()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x4010f0
unsigned int __x86_get_pc_thunk_bx()
{
 return 0;
}


// Function: sub_4010f4 at 0x4010f4
void sub_4010f4()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

void deregister_tm_clones()
{
 return;
}


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

void register_tm_clones()
{
 return;
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
 return;
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */

void frame_dummy()
{
 return;
}

// Function: __x86.get_pc_thunk_dx at 0x401229
unsigned int __x86_get_pc_thunk_dx()
{
 return 0;
}


// Function: __x86.get_pc_thunk_di at 0x40122d
unsigned int __x86_get_pc_thunk_di()
{
 return 0;
}


// Function: sub_401231 at 0x401231
void sub_401231(void)
{
 param_macro_constants();
 return;
}


// Function: param_macro_constants at 0x401240
unsigned int param_macro_constants(void)
{
 return 64;
}


// Function: sub_401256 at 0x401256
void sub_401256()
{
 call_macro_constants();
 return;
}


// Function: call_macro_constants at 0x401260
unsigned int call_macro_constants()
{
 return 64;
}


// Function: sub_401266 at 0x401266
void sub_401266(void)
{
 param_macro_functions();
 return;
}


// Function: param_macro_functions at 0x401270
int param_macro_functions(void)
{
 return 30;
}


// Function: sub_401285 at 0x401285
void sub_401285()
{
 call_macro_functions();
 return;
}


// Function: call_macro_functions at 0x401290
unsigned int call_macro_functions()
{
 return 30;
}


// Function: sub_401296 at 0x401296
void sub_401296(void)
{
 param_conditional_compile();
 return;
}


// Function: param_conditional_compile at 0x4012a0
int param_conditional_compile(void)
{
 return 32;
}


// Function: sub_4012ab at 0x4012ab
void sub_4012ab()
{
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x4012b0
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6(void)
{
 param_multi_branch_compile();
 return;
}


// Function: param_multi_branch_compile at 0x4012c0
int param_multi_branch_compile(void)
{
 return 57122;
}


// Function: sub_4012cd at 0x4012cd
void sub_4012cd()
{
 call_multi_branch_compile();
 return;
}


// Function: call_multi_branch_compile at 0x4012d0
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6(void)
{
 param_macro_recursion();
 return;
}


// Function: param_macro_recursion at 0x4012e0
int param_macro_recursion(void)
{
 return 116;
}


// Function: sub_4012e8 at 0x4012e8
void sub_4012e8()
{
 call_macro_recursion();
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
 param_stringize();
 return;
}


// Function: param_stringize at 0x401300
unsigned int param_stringize(void)
{
 return 19;
}


// Function: sub_401306 at 0x401306
void sub_401306()
{
 call_stringize();
 return;
}


// Function: call_stringize at 0x401310
unsigned int call_stringize()
{
 return 19;
}


// Function: sub_401316 at 0x401316
int sub_401316(unsigned int a0)
{
 my_func();
 (void)a0;  // Suppress unused parameter warning
 return 0;
}


// Function: my_func at 0x401320
unsigned int my_func(void)
{
 return 10;
}


// Function: sub_40132a at 0x40132a
void sub_40132a(void)
{
 param_token_paste();
 return;
}


// Function: param_token_paste at 0x401330
int param_token_paste(void)
{
 return 60;
}


// Function: sub_40133e at 0x40133e
void sub_40133e()
{
 call_token_paste();
 return;
}


// Function: call_token_paste at 0x401340
unsigned int call_token_paste()
{
 return 60;
}


// Function: sub_401346 at 0x401346
int sub_401346(void)
{
 param_variadic_macro();
 return 0;
}


// Function: param_variadic_macro at 0x401350
unsigned int param_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: sub_401386 at 0x401386
int sub_401386()
{
 call_variadic_macro();
 return 0;
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
void sub_4013bf(void)
{
 param_macro_override();
 return;
}


// Function: param_macro_override at 0x4013c0
int param_macro_override(void)
{
 return 16;
}


// Function: sub_4013cb at 0x4013cb
void sub_4013cb()
{
 call_macro_override();
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
 param_include_guard();
 return;
}


// Function: param_include_guard at 0x4013e0
unsigned int param_include_guard(void)
{
 return 500;
}


// Function: sub_4013e6 at 0x4013e6
void sub_4013e6()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x4013f0
unsigned int call_include_guard()
{
 return 500;
}


// Function: sub_4013f6 at 0x4013f6
int sub_4013f6(void)
{
 param_builtin_macros();
 return 0;
}


// Function: param_builtin_macros at 0x401400
int param_builtin_macros(void)
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:17";
 v3 = "Jan 15 2026";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 return 282;
}


// Function: sub_40144f at 0x40144f
int sub_40144f()
{
 call_builtin_macros();
 return 0;
}


// Function: call_builtin_macros at 0x401450
unsigned int call_builtin_macros(void)
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:17";
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
 test_preprocessing_features();
 return 0;
}


// Function: test_preprocessing_features at 0x4014a0

int test_preprocessing_features()
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]
 const char *v6; // [bp-0xc]

 puts(g_4022c9);
 v3 = 64;
 printf(g_4020cb);
 v3 = 30;
 printf(g_4020e6);
 v3 = 32;
 printf(g_402101);
 v3 = 57122;
 printf(g_40211c);
 v3 = 116;
 printf(g_40213b);
 v3 = 19;
 printf(g_402157);
 v3 = 60;
 printf(g_402181);
 v5 = 30;
 v4 = 20;
 v3 = 10;
 printf("LOG: Values: %d, %d, %d\n", v3, v4, v5);
 v3 = 60;
 printf(g_40219c);
 v3 = 16;
 printf(g_4021b7);
 v3 = 500;
 printf(g_4021d2);
 v6 = "Jan 15 2026";
 v3 = "03:00:17";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v6, v3);
 v3 = 382;
 return printf(g_4021ee);
}


// Function: sub_4015ce at 0x4015ce
void sub_4015ce(void)
{
 param_asm_basic();
 return;
}


// Function: param_asm_basic at 0x4015d0
int param_asm_basic(void)
{
 return 15;
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
void sub_4015ef(void)
{
 param_asm_clobber();
 return;
}


// Function: param_asm_clobber at 0x4015f0
unsigned int param_asm_clobber(void)
{
 unsigned int v0; // eax
 unsigned int idx; // ecx
 unsigned long long v1; // [bp-0x1c]

 v1 = 0x696c6c6548415f53ULL;
 v0 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v0 += *((int *)((char *)&v1 + 4 * idx));
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
 v0 = 0x696c6c6548415f53ULL;
 v3 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((int *)((char *)&v0 + 4 * idx));
 }
 return v3;
}


// Function: sub_401653 at 0x401653
void sub_401653(void)
{
 param_asm_multi_insn();
 return;
}


// Function: param_asm_multi_insn at 0x401660
char param_asm_multi_insn(void)
{
 char *iter; // ecx
 char *cur; // edx
 unsigned int result; // esi
 char v3; // al
 char v0[4]; // [bp-0x38]
 char v1[4]; // [bp-0x34]
 unsigned short v2; // [bp-0x30]
 int flag1; // [bp-0x2c]
 char v4; // [bp-0x28]

 v2 = 77;
 strncpy(v1, "o AS", 4);
 strncpy(v0, "Hell", 4);
 flag1 = 0;
 iter = (char *)&flag1;
 cur = &v0;
 for (result = 9; result; result -= 1)
 {
 v3 = *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 return (!(v4 ^ 111) && !((char)flag1 ^ 72) ? 42 : 255);
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
 char *cur; // ecx
 char *v10; // edx
 unsigned int flag2; // esi
 char v0[4]; // [bp-0x38]
 char v1[4]; // [bp-0x34]
 unsigned short v2; // [bp-0x30]
 int flag1; // [bp-0x2c]
 char v4; // [bp-0x28]
 unsigned long long result; // [bp-0x1c]

 v2 = 77;
 strncpy(v1, "o AS", 4);
 strncpy(v0, "Hell", 4);
 result = 0;
 flag1 = 0;
 cur = &flag1;
 v10 = &v0;
 for (flag2 = 9; flag2; flag2 -= 1)
 {
 *(cur) = *(v10);
 cur += 1;
 v10 += 1;
 }
 return (!(v4 ^ 111) && !((char)flag1 ^ 72) ? 42 : 255);
}


// Function: sub_4016e5 at 0x4016e5
void sub_4016e5(void)
{
 param_asm_simd();
 return;
}


// Function: param_asm_simd at 0x4016f0
unsigned int param_asm_simd(void)
{
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]
 unsigned long v4; // xmm1

 v2 = 0x696c6c6548415f53ULL;
 v1 = 0x696c6c6548415f53ULL;
 v0 = AddV(v2, v1);
 v4 = (unsigned long long)(AddV((unsigned int)(v0 >> 32), (unsigned int)v0));
 return AddV((unsigned int)(v4 >> 32), (unsigned int)v4);
}


// Function: sub_40170c at 0x40170c
void sub_40170c(void)
{
 (void)param_simd_intrinsics();
 return;
}


// Function: param_simd_intrinsics at 0x401710
unsigned int param_simd_intrinsics(void)
{
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]
 unsigned long v4; // xmm1

 v2 = 0x696c6c6548415f53ULL;
 v1 = 0x696c6c6548415f53ULL;
 v0 = AddV(v2, v1);
 v4 = (unsigned long long)(AddV((unsigned int)(v0 >> 32), (unsigned int)v0));
 return AddV((unsigned int)(v4 >> 32), (unsigned int)v4);
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
 unsigned long v4; // xmm1
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 0x696c6c6548415f53ULL;
 v1 = 0x696c6c6548415f53ULL;
 v0 = AddV(v2, v1);
 v4 = (unsigned long long)(AddV((unsigned int)(v0 >> 32), (unsigned int)v0));
 return AddV((unsigned int)(v4 >> 32), (unsigned int)v4);
}


// Function: sub_40178d at 0x40178d
void sub_40178d(void)
{
 param_asm_atomic();
 return;
}


// Function: param_asm_atomic at 0x401790
int param_asm_atomic(void)
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1(void)
{
 param_atomic_c11();
 return;
}


// Function: param_atomic_c11 at 0x4017b0
int param_atomic_c11(void)
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
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
int sub_4017ed(void)
{
 param_dynamic_code();
 return 0;
}


// Function: param_dynamic_code at 0x4017f0
unsigned int param_dynamic_code(void)
{
 unsigned int v0; // eax
 void* ptr; // eax

 v0 = sysconf(_SC_PAGESIZE);
 ptr = mmap(NULL, v0, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
 if (ptr == MAP_FAILED)
 return 4294967295;
 munmap(ptr, v0);
 return 5;
}


// Function: sub_401854 at 0x401854
int sub_401854(void)
{
 param_memory_protection();
 return 0;
}


// Function: param_memory_protection at 0x401860
unsigned int param_memory_protection()
{
 unsigned int v2; // esi
 unsigned int *p; // eax
 unsigned int *ptr; // edi
 unsigned int v5; // ebp
 unsigned int v0; // [bp-0x14]

 v2 = sysconf(_SC_PAGESIZE);
 p = mmap(NULL, v2, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
 if (p == MAP_FAILED)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 v5 = 4294967294;
 if (!mprotect(p, v2, PROT_READ))
 {
 v0 = *(ptr);
 v5 = 4294967293;
 if (!mprotect(ptr, v2, PROT_READ | PROT_WRITE))
 {
 *(ptr) = 100;
 v5 = v0;
 }
 }
 munmap(ptr, v2);
 return v5;
}


// Function: sub_401911 at 0x401911
void sub_401911(void)
{
 param_clobber_importance();
 return;
}


// Function: param_clobber_importance at 0x401920
unsigned int param_clobber_importance(void)
{
 return 30;
}


// Function: sub_40193b at 0x40193b
int sub_40193b()
{
 call_asm_privileged();
 return 0;
}


// Function: call_asm_privileged at 0x401940
unsigned int call_asm_privileged(void)
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
 v10 = sysconf(_SC_PAGESIZE);
 ptr = mmap(NULL, v10, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
 v12 = 4294967295;
 v13 = 4294967295;
 if (ptr != MAP_FAILED)
 {
 munmap(ptr, v10);
 v13 = 15;
 }
 v1 = v13;
 v2 = ptr;
 v14 = sysconf(_SC_PAGESIZE);
 p = mmap(NULL, v14, PROT_READ | PROT_WRITE, MAP_ANONYMOUS | MAP_PRIVATE, -1, 0);
 if (p != MAP_FAILED)
 {
 ptr = p;
 *(p) = 42;
 v12 = 4294967294;
 if (!mprotect(p, v14, PROT_READ))
 {
 v0 = *(ptr);
 v12 = 4294967293;
 if (!mprotect(ptr, v14, PROT_READ | PROT_WRITE))
 {
 *(ptr) = 100;
 v12 = v0;
 }
 }
 munmap(ptr, v14);
 }
 if (v2 != MAP_FAILED)
 return ((v0 != 0) || ((v12 ^ 42) != 0) ? 77 : v1);
 return v1;
}


// Function: sub_401a72 at 0x401a72
void sub_401a72()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401a80
int param_memory_clobber_demo(void)
{
 return 50 + global_var;
}


// Function: sub_401a9e at 0x401a9e
int sub_401a9e()
{
 test_asm_features();
 return 0;
}


// Function: test_asm_features at 0x401aa0

int test_asm_features()
{
 unsigned int v9 = 0; // ebp
 unsigned int v10; // eax
 unsigned int idx; // ecx
 char *v12; // edx
 unsigned int result; // ecx
 char *cur; // edi
 unsigned long v15; // xmm1
 unsigned int v0; // [bp-0x68]
 unsigned long long v1 = 0; // [bp-0x5c]
 char v2[4]; // [bp-0x58]
 unsigned short v3; // [bp-0x54]
 unsigned long long v4; // [bp-0x4c]
 unsigned int v5; // [bp-0x4c]
 char v6; // [bp-0x48]
 unsigned long long v7; // [bp-0x3c], Other Possible Types: unsigned int
 unsigned long long v8; // [bp-0x2c]

 puts(g_4022f0);
 v0 = 15;
 printf(g_402221);
 v7 = 5;
 v4 = 0x696c6c6548415f53ULL;
 v10 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v10 += *((int *)((char *)&v4 + 4 * idx));
 }
 v0 = v10;
 printf(g_40223d);
 v3 = 77;
 strncpy(v2, "o AS", 4);
 strncpy((char *)&v1, "Hell", 4);
 v7 = 0;
 v9 = 0;
 v12 = &v1;
 result = 9;
 for (cur = (char *)&v9; result; result -= 1)
 {
 *(cur) = *(v12);
 cur += 1;
 v12 += 1;
 }
 v0 = (unsigned int)(!(v6 ^ 111) && !((char)v9 ^ 72) ? 42 : 4294967295);
 printf(g_402259);
 v4 = 0x696c6c6548415f53ULL;
 v1 = 0x696c6c6548415f53ULL;
 v8 = AddV(v4, v1);
 v15 = (unsigned long long)(AddV((unsigned int)(v8 >> 32), (unsigned int)v8));
 v0 = AddV((unsigned int)(v15 >> 32), (unsigned int)v15);
 printf(g_402275);
 v5 = 10;
 atomic_exchange_add(&v5, 5);
 v0 = v5 * 2 + 5;
 printf(g_402291);
 v0 = call_asm_privileged();
 return printf(g_4022ad);
}


// Function: sub_401c29 at 0x401c29
int sub_401c29()
{
 return main();
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

void __do_global_ctors_aux()
{
 return;
}


// Function: sub_401ca2 at 0x401ca2
void sub_401ca2()
{
}



/* CRT stub function _fini removed by preprocessor */


