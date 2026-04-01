// Angr Decompilation of 5-23_clang_O2_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdint.h>
#include <stdlib.h>

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int padding_0[300];
    unsigned int padding_2e57[300];
} struct_0;

typedef void (*init_func_t)(unsigned int);
init_func_t g_403ff4 = NULL;

// Global string constants
const char g_4022c9[] = "=== Testing Preprocessing Features ===\n";
const char g_4020cb[] = "Macro constants: %d\n";
const char g_4020e6[] = "Macro functions: %d\n";
const char g_402101[] = "Conditional compile: %d\n";
const char g_40211c[] = "Multi-branch compile: %d\n";
const char g_40213b[] = "Macro recursion: %d\n";
const char g_402157[] = "Stringize: %d\n";
const char g_402181[] = "Token paste: %d\n";
const char g_40219c[] = "Variadic macro: %d\n";
const char g_4021b7[] = "Macro override: %d\n";
const char g_4021d2[] = "Include guard: %d\n";
const char g_4021ee[] = "Builtin macros: %d\n";
const char g_4022f0[] = "=== Testing ASM Features ===\n";
const char g_402221[] = "Basic ASM: %d\n";
const char g_40223d[] = "Multi-instruction ASM: %d\n";
const char g_402259[] = "SIMD intrinsics: %d\n";
const char g_402275[] = "Atomic operations: %d\n";
const char g_402291[] = "Dynamic code: %d\n";
const char g_4022ad[] = "Memory clobber demo: %d\n";

// Define missing type - use conditional compilation for portability
#if defined(__SIZEOF_INT128__)
typedef __int128 int128_t;
#else
typedef long long int128_t;
#endif

// Define missing helper function
static inline unsigned long long AddV(unsigned long long a, unsigned long long b) {
    return a + b;
}

// Define atomic operation helper
static inline int atomic_exchange_add(unsigned int *ptr, unsigned int value) {
    return __sync_fetch_and_add(ptr, value);
}

// Define stub for sysconf to avoid compilation errors
inline long sysconf(int name) {
    return 4096;
}

// Define stub for mmap to avoid compilation errors
inline void* mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) {
    return (void*)0xffffffff;
}

// Define stub for mprotect
inline int mprotect(void *addr, size_t len, int prot) {
    return 0;
}

// Define stub for munmap
inline int munmap(void *addr, size_t length) {
    return 0;
}

// Define global variable
unsigned int global_var = 0;

void frame_dummy(void);
void __do_global_ctors_aux(void);

// Forward declarations for functions called before definition
unsigned int my_func(unsigned int a0);
char call_asm_multi_insn(void);
int call_asm_simd(void);
int call_asm_atomic(void);
int test_asm_features(void);
int test_preprocessing_features(void);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned int call_asm_privileged(void);
int sub_4013bf(unsigned int a0);
int sub_4017ed(void);
int sub_4019de(void);
unsigned int param_dynamic_code(unsigned int a0);
int param_builtin_macros(unsigned int a0);
int call_builtin_macros(void);
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
int param_token_paste(unsigned int a0);
unsigned int call_token_paste(void);
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
int call_variadic_macro(void);
int param_macro_override(unsigned int a0);
unsigned int call_macro_override(void);
unsigned int param_include_guard(void);
unsigned int call_include_guard(void);
char param_asm_multi_insn(char *a0, char *a1, unsigned int a2);
unsigned int param_asm_basic(unsigned int a0);
unsigned int call_asm_basic(void);
unsigned int param_asm_clobber(unsigned int *ptr, unsigned int a1);
unsigned int call_asm_clobber(void);
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
int param_asm_atomic(unsigned int *a0, unsigned int a1);
int param_atomic_c11(unsigned int *a0, unsigned int a1);
int call_asm_atomic(void);
int param_memory_clobber_demo(void);
unsigned int param_asm_basic(unsigned int a0);

// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 // goto ptr[2]; // Invalid computed goto, stubbed
 return v0;
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 void* v1; // ebx

 // goto (int)v1[16]; // Invalid computed goto, stubbed
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
 // Unsupported jumpkind Ijk_SigTRAP - stubbed
 return;
}


// Function: sub_4010ec at 0x4010ec
void sub_4010ec()
{
 return;
}


// Function: __x86_get_pc_thunk_bx at 0x4010f0
void __x86_get_pc_thunk_bx()
{
 return;
}


void deregister_tm_clones(void);
void register_tm_clones(void);

// Function: sub_4010f4 at 0x4010f4
void sub_4010f4()
{
 deregister_tm_clones();
 return;
}

void deregister_tm_clones(void) {
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

void register_tm_clones(void)
{
 return;
}

void __do_global_dtors_aux(void);

// Function: sub_401187 at 0x401187
void sub_401187()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

void __do_global_dtors_aux(void)
{
 return;
}


void frame_dummy(void);

// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 frame_dummy();
 return;
}

void frame_dummy(void) {
    return;
}

/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86_get_pc_thunk_dx at 0x401229
unsigned int __x86_get_pc_thunk_dx()
{
 unsigned int pc;
 __asm__ __volatile__("call 1f; 1: pop %0" : "=r"(pc));
 return pc;
}


// Function: __x86_get_pc_thunk_di at 0x40122d
unsigned int __x86_get_pc_thunk_di(int a0)
{
 unsigned int v0; // eax
 (void)a0;
 __asm__ __volatile__("call 1f; 1: pop %0" : "=r"(v0));
 return v0;
}


// Function: sub_401231 at 0x401231
void sub_401231(unsigned int a0)
{
 param_macro_constants(a0);
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
 param_macro_functions(a0, a1);
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
 param_conditional_compile(a0);
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
 param_multi_branch_compile(a0);
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
 param_macro_recursion(a0);
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
void sub_401316(unsigned int a0)
{
 my_func(a0);
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
 param_token_paste(a0);
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
 return param_variadic_macro(10, 20, 30);
}


// Function: param_variadic_macro at 0x401350
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v4; // eax
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v3 = v4;
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
int call_variadic_macro()
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
int sub_4013bf(unsigned int a0)
{
 return param_macro_override(a0);
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

 v4 = "03:00:11";
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
int call_builtin_macros()
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:11";
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


int test_preprocessing_features()
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 unsigned int v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 puts(&g_4022c9);
 v3 = 64;
 printf(&g_4020cb, v3);
 v3 = 30;
 printf(&g_4020e6, v3);
 v3 = 32;
 printf(&g_402101, v3);
 v3 = 57122;
 printf(&g_40211c, v3);
 v3 = 116;
 printf(&g_40213b, v3);
 v3 = 19;
 printf(&g_402157, v3);
 v3 = 60;
 printf(&g_402181, v3);
 v5 = 30;
 v4 = 20;
 v3 = 10;
 printf("LOG: Values: %d, %d, %d\n", v5, v4, v3);
 v3 = 60;
 printf(&g_40219c, v3);
 v3 = 16;
 printf(&g_4021b7, v3);
 v3 = 500;
 printf(&g_4021d2, v3);
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, "Jan 15 2026", "03:00:11");
 v3 = 382;
 return printf(&g_4021ee, v3);
}


// Function: sub_4015ce at 0x4015ce
void sub_4015ce(unsigned int a0)
{
 param_asm_basic(a0);
 return;
}


// Function: param_asm_basic at 0x4015d0
unsigned int param_asm_basic(unsigned int a0)
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
void sub_4015ef(unsigned int *a0, unsigned int a1)
{
 param_asm_clobber(a0, a1);
 return;
}


// Function: param_asm_clobber at 0x4015f0
unsigned int param_asm_clobber(unsigned int *ptr, unsigned int a1)
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
 v0 = 0x464c6c6548ULL;
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
 param_asm_multi_insn((char *)a0, (char *)a1, a2);
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
 unsigned int v8; // esi
 char *cur; // ecx
 char *v10; // edx
 unsigned int flag2; // esi
 char v0[4]; // [bp-0x38]
 char v1[4]; // [bp-0x34]
 unsigned short v2; // [bp-0x30]
 int flag1; // [bp-0x2c]
 char v4; // [bp-0x28]
 unsigned long long result; // [bp-0x1c]
 unsigned int v6; // [bp-0x4]

 v6 = v8;
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
void sub_4016e5(unsigned long long *a0, unsigned long long *a1, unsigned long long *a2)
{
 param_asm_simd(a0, a1, a2);
 return;
}


// Function: param_asm_simd at 0x4016f0
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: sub_40170c at 0x40170c
void sub_40170c(unsigned long long *a0, unsigned long long *a1, unsigned long long *a2)
{
 param_simd_intrinsics(a0, a1, a2);
 return;
}


// Function: param_simd_intrinsics at 0x401710
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a1), *(a0));
 return 0;
}


// Function: sub_40172b at 0x40172b
int sub_40172b()
{
 return call_asm_simd();
}


// Function: call_asm_simd at 0x401730
int call_asm_simd()
{
 unsigned long long v4;
 int v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 0x464c6c6548ULL;
 v1 = 0x8c606c6c65ULL;
 v0 = (int)(AddV(v2, v1));
 v4 = (unsigned long long)v0;
 return (int)AddV((unsigned long long)(v0 >> 32), (unsigned int)v0);
}


// Function: sub_40178d at 0x40178d
void sub_40178d(unsigned int *a0, unsigned int a1)
{
 param_asm_atomic(a0, a1);
 return;
}


// Function: param_asm_atomic at 0x401790
int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1(unsigned int *a0, unsigned int a1)
{
 param_atomic_c11(a0, a1);
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
 return param_dynamic_code(0);
}


// Function: param_dynamic_code at 0x4017f0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // eax
 void* ptr; // eax

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 7, 7, 7);
 if (ptr == (void*)-1)
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
 if (p == (void*)-1)
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
 param_clobber_importance(a0, a1);
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
 unsigned int v4; // ebx
 unsigned int v5; // edi
 unsigned int v6; // esi
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
 ptr = mmap(NULL, v7, 7, 7, 7, 7);
 if (ptr != (void*)-1)
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
 if (ptr != (void*)-1)
 return v12;
 return v9;
}


// Function: sub_4019de at 0x4019de
int sub_4019de()
{
 return param_memory_clobber_demo();
}


// Function: param_memory_clobber_demo at 0x4019e0
int param_memory_clobber_demo(void)
{
 return 50 + global_var;
}


// Function: sub_4019fe at 0x4019fe
int sub_4019fe()
{
 return test_asm_features();
}


int test_asm_features()
{
 unsigned int i; // ecx
 unsigned int result; // ecx
 const char *cur; // edx
 const char *v11; // ebp
 unsigned int v14; // eax
 void* ptr; // esi
 void* v0; // [bp-0x60]
 char v1[4]; // [bp-0x5c]
 char v2[4]; // [bp-0x58]
 unsigned short v3; // [bp-0x54]
 unsigned long long v4; // [bp-0x4c]
 unsigned long long v5; // [bp-0x48]
 unsigned int v7; // [bp-0x3c]
 int v8; // [bp-0x2c]

 puts(&g_4022f0);
 v7 = 5;
 v4 = 0x464c6c6548ULL;
 printf(&g_402221, v7);
 for (i = 0; i < 5; i += 1);
 printf(&g_40223d, v7);
 v3 = 77;
 strncpy(v2, "o AS", 4);
 strncpy(v1, "Hell", 4);
 v7 = 0;
 v4 = 0;
 v11 = &v1[0];
 result = 9;
 for (cur = (const char *)&v4; result; result -= 1)
 {
 *(char*)cur = *(char*)v11;
 cur = (const char*)((char*)cur + 1);
 v11 = (const char*)((char*)v11 + 1);
 }
 printf(&g_402259, v7);
 v5 = 0x464c6c6548ULL;
 *((unsigned long long *)&v1) = 0x8c606c6c65ULL;
 *((unsigned long long *)&v8) = AddV(v5, *((unsigned long long *)&v1));
 printf(&g_402275, v7);
 v4 = 10;
 *((unsigned long long *)&v4) = v5 & 0xffffffff00000000ULL | v4;
 atomic_exchange_add((unsigned int *)&v4, 5);
 printf(&g_402291, v7);
 v14 = sysconf(30);
 ptr = mmap(NULL, v14, 7, 7, 7, 7);
 if (ptr != (void*)-1)
 munmap(ptr, v14);
 v0 = ptr;
 return printf(&g_4022ad, v7);
}


// Function: sub_401c09 at 0x401c09
int sub_401c09()
{
 return main();
}


// Function: main at 0x401c10
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401c31 at 0x401c31
void sub_401c31()
{
 __do_global_ctors_aux();
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

void __do_global_ctors_aux(void)
{
 return;
}


// Function: sub_401c82 at 0x401c82
void sub_401c82()
{
}



/* CRT stub function _fini removed by preprocessor */


