// Angr Decompilation of 5-23_clang_O2_no_g
// Platform: X86

#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdatomic.h>
#include <stdint.h>

/* Declare puts to avoid implicit declaration */
int puts(const char *s);

#ifndef PROT_READ
#define PROT_READ 1
#endif
#ifndef PROT_WRITE
#define PROT_WRITE 2
#endif
#ifndef PROT_EXEC
#define PROT_EXEC 4
#endif
#ifndef MAP_PRIVATE
#define MAP_PRIVATE 0x02
#endif
#ifndef MAP_ANONYMOUS
#define MAP_ANONYMOUS 0x20
#endif

/* System function declarations */
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int mprotect(void *addr, size_t len, int prot);
int munmap(void *addr, size_t length);

/* Stub function declarations */
__attribute__((unused)) void frame_dummy(void);
__attribute__((unused)) unsigned int __do_global_ctors_aux(void);
__attribute__((unused)) unsigned int *deregister_tm_clones(void);
__attribute__((unused)) unsigned int *__do_global_dtors_aux(void);
__attribute__((unused)) unsigned int register_tm_clones(void);
__attribute__((unused)) void __x86_get_pc_thunk_dx(void);
__attribute__((unused)) unsigned int *__x86_get_pc_thunk_di(int a0, char *a1);
__attribute__((unused)) void __x86_get_pc_thunk_bx(void);

/* Helper function definitions */
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

static inline unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val) {
    unsigned int old = *ptr;
    *ptr = old + val;
    return old;
}

/* Function forward declarations */
unsigned int param_macro_constants(unsigned int a0);
unsigned int call_macro_constants(void);
int param_macro_functions(unsigned int a0, unsigned int a1);
unsigned int call_macro_functions(void);
int param_conditional_compile(unsigned int a0);
unsigned int call_conditional_compile(void);
int param_multi_branch_compile(unsigned int a0);
unsigned int call_multi_branch_compile(void);
int param_macro_recursion(unsigned int a0);
unsigned int call_macro_recursion(void);
unsigned int param_stringize(void);
unsigned int call_stringize(void);
unsigned int my_func(unsigned int a0);
int param_token_paste(unsigned int a0);
unsigned int call_token_paste(void);
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int call_variadic_macro(void);
int param_macro_override(unsigned int a0);
unsigned int call_macro_override(void);
unsigned int param_include_guard(void);
unsigned int call_include_guard(void);
int param_builtin_macros(unsigned int a0);
unsigned int call_builtin_macros(void);
int test_preprocessing_features(void);
int param_asm_basic(unsigned int a0);
unsigned int call_asm_basic(void);
unsigned int param_asm_clobber(void);
unsigned int call_asm_clobber(void);
char param_asm_multi_insn(void);
char call_asm_multi_insn(void);
unsigned int param_asm_simd(void);
unsigned int param_simd_intrinsics(void);
unsigned int call_asm_simd(void);
unsigned int param_simd_intrinsics(void);
int param_asm_atomic(void);
int param_atomic_c11(void);
int call_asm_atomic(void);
unsigned int param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned int call_asm_privileged(void);
int param_memory_clobber_demo(void);
int test_asm_features(void);
unsigned int main(void);

/* CRT stub function _init removed by preprocessor */
typedef struct struct_0 {
    char padding_0[1024];
    char padding_2e57[1024];
    int field_2eb7;
} struct_0;

struct_0 g_403ff4_instance;
struct_0 *g_403ff4 = &g_403ff4_instance;

int _init()
{
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3] = {0}; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0(int a0)
{
 void* v1 = NULL; // ebx

 return (int)((char*)v1 + 16);
}


// Function: sub_4010b6 at 0x4010b6
void sub_4010b6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010eb at 0x4010eb
void sub_4010eb()
{
}


// Function: sub_4010ec at 0x4010ec
void sub_4010ec()
{
}


// Function: __x86_get_pc_thunk_bx at 0x4010f0
void __x86_get_pc_thunk_bx()
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

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

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

unsigned int * __do_global_dtors_aux()
{
 static int done = 0;
 if (done)
 return 0;
 done = 1;
 return deregister_tm_clones();
}


// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401229
void __x86_get_pc_thunk_dx()
{
}


// Function: __x86_get_pc_thunk_di at 0x40122d
unsigned int *__x86_get_pc_thunk_di(int a0, char *a1)
{
 return NULL;
}


// Function: sub_401231 at 0x401231
void sub_401231(unsigned int a0)
{
 param_macro_constants();
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
 call_macro_constants();
 return;
}


// Function: call_macro_constants at 0x401260
unsigned int call_macro_constants()
{
 return 64;
}


// Function: sub_401266 at 0x401266
void sub_401266(unsigned int a0, unsigned int a1)
{
 param_macro_functions();
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
 call_macro_functions();
 return;
}


// Function: call_macro_functions at 0x401290
unsigned int call_macro_functions()
{
 return 30;
}


// Function: sub_401296 at 0x401296
void sub_401296(unsigned int a0)
{
 param_conditional_compile();
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
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x4012b0
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: sub_4012b6 at 0x4012b6
void sub_4012b6(unsigned int a0)
{
 param_multi_branch_compile();
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
 call_multi_branch_compile();
 return;
}


// Function: call_multi_branch_compile at 0x4012d0
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: sub_4012d6 at 0x4012d6
void sub_4012d6(unsigned int a0)
{
 param_macro_recursion();
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
unsigned int param_stringize()
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
void sub_401316(unsigned int a0)
{
 my_func();
 return;
}


// Function: my_func at 0x401320
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_40132a at 0x40132a
void sub_40132a(unsigned int a0)
{
 param_token_paste();
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
 call_token_paste();
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
 param_variadic_macro();
 return;
}


// Function: param_variadic_macro at 0x401350
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v4 = 0; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = v4;
 v2 = a2;
 v1 = a1;
 v0 = a0;
 puts("LOG: Values: 10, 20, 30\n");
 return a0 + 50;
}


// Function: sub_401386 at 0x401386
int sub_401386()
{
 call_variadic_macro();
 return;
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
 puts("LOG: Values: 10, 20, 30\n");
 return 60;
}


// Function: sub_4013bf at 0x4013bf
void sub_4013bf(unsigned int a0)
{
 param_macro_override();
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
unsigned int param_include_guard()
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
int sub_4013f6()
{
 param_builtin_macros();
 return;
}


// Function: param_builtin_macros at 0x401400
int param_builtin_macros(unsigned int a0)
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]

 v4 = (unsigned int)"03:00:13";
 v3 = (unsigned int)"Jan 15 2026";
 v2 = 279;
 v1 = (unsigned int)"param_builtin_macros";
 v0 = (unsigned int)"src/5-23.c";
 puts("file=src/5-23.c, func=param_builtin_macros, line=279, date=Jan 15 2026, time=03:00:13\n");
 return 282 + a0;
}


// Function: sub_40144f at 0x40144f
int sub_40144f()
{
 call_builtin_macros();
 return;
}


// Function: call_builtin_macros at 0x401450
unsigned int call_builtin_macros()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]

 v4 = (unsigned int)"03:00:13";
 v3 = (unsigned int)"Jan 15 2026";
 v2 = 279;
 v1 = (unsigned int)"param_builtin_macros";
 v0 = (unsigned int)"src/5-23.c";
 puts("file=src/5-23.c, func=param_builtin_macros, line=279, date=Jan 15 2026, time=03:00:13\n");
 return 382;
}


// Function: sub_40149b at 0x40149b
int sub_40149b()
{
 test_preprocessing_features();
 return;
}


// Global string declarations
const char g_4020cb[] = "LOG: macro_constants returned 64\n";
const char g_4020e6[] = "LOG: macro_functions returned 30\n";
const char g_402101[] = "LOG: conditional_compile returned 32\n";
const char g_40211c[] = "LOG: multi_branch_compile returned 57122\n";
const char g_40213b[] = "LOG: macro_recursion returned 116\n";
const char g_402157[] = "LOG: stringize returned 19\n";
const char g_402181[] = "LOG: token_paste returned 60\n";
const char g_40219c[] = "LOG: macro_override returned 16\n";
const char g_4021b7[] = "LOG: include_guard returned 500\n";
const char g_4021d2[] = "LOG: builtin_macros test\n";
const char g_4021ee[] = "LOG: preprocessing features test complete\n";
const char g_4022c9[] = "=== Testing Preprocessing Features ===\n";

// Function: test_preprocessing_features at 0x4014a0
int test_preprocessing_features()
{
 unsigned int v0; // [bp-0x28]
 unsigned int v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
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
 puts("LOG: Values: 10, 20, 30\n");
 v3 = 60;
 puts(&g_40219c);
 v3 = 16;
 puts(&g_4021b7);
 v3 = 500;
 puts(&g_4021d2);
 v3 = (unsigned int)"03:00:13";
 v2 = 279;
 v1 = (unsigned int)"param_builtin_macros";
 v0 = (unsigned int)"src/5-23.c";
 puts("file=src/5-23.c, func=param_builtin_macros, line=279, date=Jan 15 2026, time=03:00:13\n");
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
unsigned int param_asm_clobber(void)
{
 unsigned int v3; // eax
 unsigned int idx; // ecx
 unsigned long long v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 v1 = 5;
 v0 = 3169126501123975826ULL;
 v3 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((int *)((char *)&v0 + (size_t)idx * 4));
 }
 return v3;
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
 v0 = 3169126501123975826ULL;
 v3 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((int *)((char *)&v0 + (size_t)idx * 4));
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
char param_asm_multi_insn(void)
{
 char *cur = NULL; // ecx
 char *v10 = NULL; // edx
 unsigned int flag2 = 0; // esi
 char v0[8] = {0}; // [bp-0x38]
 char v1[8] = {0}; // [bp-0x34]
 unsigned short v2 = 0; // [bp-0x30]
 int flag1 = 0; // [bp-0x2c]
 char v4 = 0; // [bp-0x28]
 unsigned long long result = 0; // [bp-0x1c]
 unsigned int v6 = 0; // [bp-0x4]

 v6 = 0;
 v4 = 0;

 v2 = 77;
 strncpy(v1, "o AS", 4);
 strncpy(v0, "Hell", 4);
 result = 0;
 flag1 = 0;
 cur = (char*)&flag1;
 v10 = v0;
 for (flag2 = 9; flag2; flag2 -= 1)
 {
 *cur = *v10;
 cur += 1;
 v10 += 1;
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
 char *cur = NULL; // ecx
 char *v10 = NULL; // edx
 unsigned int flag2 = 0; // esi
 char v0[8] = {0}; // [bp-0x38]
 char v1[8] = {0}; // [bp-0x34]
 unsigned short v2 = 0; // [bp-0x30]
 int flag1 = 0; // [bp-0x2c]
 char v4 = 0; // [bp-0x28]
 unsigned long long result = 0; // [bp-0x1c]
 unsigned int v6 = 0; // [bp-0x4]

 v6 = 0;
 v4 = 0;

 v2 = 77;
 strncpy(v1, "o AS", 4);
 strncpy(v0, "Hell", 4);
 result = 0;
 flag1 = 0;
 cur = (char*)&flag1;
 v10 = v0;
 for (flag2 = 9; flag2; flag2 -= 1)
 {
 *cur = *v10;
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
unsigned int param_asm_simd(void)
{
 unsigned long long v4; // xmm1
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV(v2, v1);
 v4 = AddV((unsigned int)(v0 >> 32), (unsigned int)v0);
 return (int)AddV((unsigned int)(v4 >> 32), (unsigned int)v4);
}


// Function: sub_40170c at 0x40170c
void sub_40170c(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_simd();
 return;
}


// Function: param_simd_intrinsics at 0x401710
unsigned int param_simd_intrinsics(void)
{
 unsigned long long v4; // xmm1
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV(v2, v1);
 v4 = AddV((unsigned int)(v0 >> 32), (unsigned int)v0);
 return (int)AddV((unsigned int)(v4 >> 32), (unsigned int)v4);
}


// Function: sub_40172b at 0x40172b
void sub_40172b()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401730
unsigned int call_asm_simd()
{
 unsigned long long v4; // xmm1
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV(v2, v1);
 v4 = AddV((unsigned int)(v0 >> 32), (unsigned int)v0);
 return (unsigned int)AddV((unsigned int)(v4 >> 32), (unsigned int)v4);
}


// Function: sub_40178d at 0x40178d
void sub_40178d(unsigned int a0, unsigned int a1)
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
void sub_4017a1(unsigned int a0, unsigned int a1)
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
int sub_4017ed()
{
 param_dynamic_code();
 return;
}


// Function: param_dynamic_code at 0x4017f0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // eax
 void* ptr; // eax

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr == (void*)0xffffffff)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: sub_401854 at 0x401854
int sub_401854()
{
 param_memory_protection();
 return;
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
 p = mmap(NULL, v2, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (p == (void*)0xffffffff)
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
 call_asm_privileged();
 return;
}


// Function: call_asm_privileged at 0x401940
unsigned int call_asm_privileged()
{
 unsigned int v4 = 0; // ebx
 unsigned int v5 = 0; // edi
 unsigned int v6 = 0; // esi
 unsigned int v7; // eax
 void* ptr; // esi
 unsigned int v9; // edi
 unsigned int v10; // eax
 unsigned int v12; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = v4;
 v1 = v5;
 v0 = v6;
 v7 = sysconf(30);
 ptr = mmap(NULL, v7, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr != (void*)0xffffffff)
 {
 munmap(ptr, v7);
 v9 = 15;
 }
 else
 {
 v9 = 4294967295;
 }
 if ((param_memory_protection() ^ 42))
 v10 = v9;
 else
 v10 = 77;
 v12 = v10;
 if (ptr != (void*)0xffffffff)
 return v12;
 return v9;
}


// Function: sub_4019de at 0x4019de
void sub_4019de()
{
 param_memory_clobber_demo();
 return;
}


// Global variable
unsigned int global_var = 0;

// Function: param_memory_clobber_demo at 0x4019e0
int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: sub_4019fe at 0x4019fe
int sub_4019fe()
{
 test_asm_features();
 return;
}


// Global string declarations for test_asm_features
const char g_402221[] = "LOG: asm_clobber test\n";
const char g_40223d[] = "LOG: asm_multi_insn test\n";
const char g_402259[] = "LOG: asm_simd test\n";
const char g_402275[] = "LOG: asm_atomic test\n";
const char g_402291[] = "LOG: dynamic_code test\n";
const char g_4022ad[] = "LOG: asm features test complete\n";
const char g_4022f0[] = "=== Testing ASM Features ===\n";

// Function: test_asm_features at 0x401a00
int test_asm_features()
{
 unsigned int i = 0; // ecx
 char *v11 = NULL; // ebp
 unsigned int result = 0; // ecx
 char *cur = NULL; // edx
 unsigned int v14 = 0; // eax
 void* ptr = NULL; // esi
 void* v0 = NULL; // [bp-0x60]
 char v1[8] = {0}; // [bp-0x5c]
 char v2[4] = {0}; // [bp-0x58]
 unsigned short v3 = 0; // [bp-0x54]
 unsigned long long v4 = 0; // [bp-0x4c]
 unsigned long long v5 = 0; // [bp-0x44]
 unsigned long long v7 = 0; // [bp-0x3c]
 int v8 = 0; // [bp-0x2c]

 v8 = 0;

 puts(&g_4022f0);
 puts(&g_402221);
 v7 = 5;
 v4 = 3169126501123975826ULL;
 for (i = 0; i < 5; i += 1)
 {
 v4 += 1;
 }
 puts(&g_40223d);
 v3 = 77;
 strncpy(v2, "o AS", 4);
 strncpy(v1, "Hell", 4);
 v7 = 0;
 v4 = 0;
 v11 = v1;
 result = 9;
 for (cur = (char*)&v4; result; result -= 1)
 {
 *cur = *v11;
 cur += 1;
 v11 += 1;
 }
 puts(&g_402259);
 v5 = 3169126501123975826ULL;
 *((unsigned long long *)v1) = 6338253002432419092ULL;
 v8 = (int)AddV(v5, *((unsigned long long *)v1));
 puts(&g_402275);
 v4 = 10;
 v4 = (v5 & 0xffffffff00000000ULL) | v4;
 atomic_exchange_add((unsigned int*)&v4, 5);
 puts(&g_402291);
 v14 = sysconf(30);
 ptr = mmap(NULL, v14, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr != (void*)0xffffffff)
 munmap(ptr, v14);
 v0 = ptr;
 return puts(&g_4022ad);
}


// Function: sub_401c09 at 0x401c09
int sub_401c09()
{
 main();
 return;
}


// Function: main at 0x401c10
unsigned int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401c31 at 0x401c31
void sub_401c31()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 return 0;
}


// Function: sub_401c82 at 0x401c82
void sub_401c82()
{
}



/* CRT stub function _fini removed by preprocessor */


