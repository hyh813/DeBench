// Angr Decompilation of 5-23_clang_O3_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdatomic.h>
#include <stdint.h>

typedef struct struct_0 {
    unsigned int field_0;
    char padding_0[1024];
    char padding_2e57[1024];
    char field_2eb7[1024];
} struct_0;

// Stub functions for missing implementations
unsigned long long AddV(unsigned long long a, unsigned long long b) { return a + b; }
void atomic_exchange_add(unsigned int *ptr, unsigned int val) { *ptr += val; }
long sysconf(int name) { return 4096; }
void* mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) { return (void*)0x1000; }
int munmap(void *addr, size_t length) { return 0; }
int mprotect(void *addr, size_t len, int prot) { return 0; }
void frame_dummy() { }
void __x86_get_pc_thunk_dx() { }
int __x86_get_pc_thunk_di(int a0, char* a1) { return a0; }
void __x86_get_pc_thunk_bx() { }
unsigned int* deregister_tm_clones() { return NULL; }

/* CRT stub function _init removed by preprocessor */

// Forward declarations
unsigned int param_macro_constants(unsigned int a0);
unsigned int call_macro_constants();
int param_macro_functions(unsigned int a0, unsigned int a1);
unsigned int call_macro_functions();
unsigned int param_conditional_compile(unsigned int a0);
unsigned int call_conditional_compile();
unsigned int param_multi_branch_compile(unsigned int a0);
unsigned int call_multi_branch_compile();
unsigned int param_macro_recursion(unsigned int a0);
unsigned int call_macro_recursion();
unsigned int param_stringize();
unsigned int call_stringize();
unsigned int my_func(unsigned int a0);
unsigned int param_token_paste(unsigned int a0);
unsigned int call_token_paste();
unsigned int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
unsigned int call_variadic_macro();
unsigned int param_macro_override(unsigned int a0);
unsigned int call_macro_override();
unsigned int param_include_guard();
unsigned int call_include_guard();
unsigned int param_builtin_macros(unsigned int a0);
unsigned int call_builtin_macros();
int test_preprocessing_features();
unsigned int param_asm_basic(unsigned int a0);
unsigned int call_asm_basic();
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1);
unsigned int call_asm_clobber();
char param_asm_multi_insn(char *a0, char *a1, unsigned int a2);
char call_asm_multi_insn();
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
int call_asm_simd();
unsigned int param_asm_atomic(unsigned int *a0, unsigned int a1);
unsigned int param_atomic_c11(unsigned int *a0, unsigned int a1);
int call_asm_atomic();
unsigned int param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection();
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned int call_asm_privileged();
unsigned int param_memory_clobber_demo();
int test_asm_features();
int main();
unsigned int __do_global_ctors_aux();

extern struct_0 *g_403ff4;
struct_0 *g_403ff4 = NULL;

// Forward declarations for global string arrays
extern char g_4020cb[];
extern char g_4020e6[];
extern char g_402101[];
extern char g_40211c[];
extern char g_40213b[];
extern char g_402157[];
extern char g_402181[];
extern char g_40219c[];
extern char g_4021b7[];
extern char g_4021d2[];
extern char g_4021ee[];
extern char g_4022c9[];
extern char g_402221[];
extern char g_40223d[];
extern char g_402259[];
extern char g_402275[];
extern char g_402291[];
extern char g_4022ad[];
extern char g_4022f0[];

static int _init()
{
 if (g_403ff4)
 ;
 frame_dummy();
 return __do_global_ctors_aux();
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3]; // ebx
 unsigned int v0; // [bp-0x4]

 v0 = ptr[1];
 return ptr[2];
}


// Function: sub_4010b0 at 0x4010b0
int sub_4010b0()
{
 void* v1; // ebx

 return (int)((unsigned int*)v1)[16];
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











unsigned int register_tm_clones()
{
 struct_0 *v2; // edx
 struct_0 *v3; // edx
 unsigned int v4; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 v3 = (char *)&v2->field_2eb7 + 3;
 v0 = v4;
 if (!(&v3->padding_0[52] - &v3->padding_0[52] >> 31) + (&v3->padding_0[52] - &v3->padding_0[52] >> 2) >> 1)
 {
 return (&v3->padding_0[52] - &v3->padding_0[52] >> 31) + (&v3->padding_0[52] - &v3->padding_0[52] >> 2) >> 1;
 }
 else if (*((int *)&v3->padding_0[4]))
 {
 return ((int(*)(void*, int))(*((int *)&v3->padding_0[4])))(&v3->padding_0[52], (&v3->padding_0[52] - &v3->padding_0[52] >> 31) + (&v3->padding_0[52] - &v3->padding_0[52] >> 2) >> 1);
 }
 else
 {
 return (&v3->padding_0[52] - &v3->padding_0[52] >> 31) + (&v3->padding_0[52] - &v3->padding_0[52] >> 2) >> 1;
 }
}




 unsigned int * __do_global_dtors_aux()
{
 unsigned int *v5; // eax
 struct_0 v6; // edi
 struct_0 *ptr; // edi
 unsigned int v8; // esi
 unsigned int v9; // ebx
 char *v10; // esi
 unsigned int v11; // eax
 unsigned int i; // ebx
 unsigned int v13; // eax
 unsigned int *v14; // eax
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp+0x0]

 v5 = __x86_get_pc_thunk_di(*((int *)&v2), &v3);
 ptr = (struct_0 *)((uintptr_t)&v6 + 11);
 v1 = v8;
 v0 = v9;
 if (ptr->padding_0[52])
 return v5;
 if (*((int *)&ptr->padding_0[16]))
 sub_4010b0(*((int *)&ptr->padding_0[44]));
 v10 = &ptr->padding_0[244];
 v11 = *((int *)&ptr->padding_0[56]);
 i = (&ptr->padding_0[240] - v10 >> 2) - 1;
 if (*((int *)&ptr->padding_0[56]) < i)
 {
 do
 {
 v13 = v11 + 1;
 *((unsigned int *)&ptr->padding_0[56]) = v13;
 ((void(*)())(*((int *)&v10[4 * v13])))();
 v11 = *((int *)&ptr->padding_0[56]);
 } while (*((int *)&ptr->padding_0[56]) < i);
 }
 v14 = deregister_tm_clones();
 ptr->padding_0[52] = 1;
 return v14;
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
unsigned int param_conditional_compile(unsigned int a0)
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
unsigned int param_multi_branch_compile(unsigned int a0)
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
unsigned int param_macro_recursion(unsigned int a0)
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
unsigned int param_token_paste(unsigned int a0)
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
 param_variadic_macro(10, 20, 30);
 return 0;
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
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
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
void sub_4013bf(unsigned int a0)
{
 param_macro_override(a0);
 return;
}


// Function: param_macro_override at 0x4013c0
unsigned int param_macro_override(unsigned int a0)
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
 param_builtin_macros(0);
 return 0;
}


// Function: param_builtin_macros at 0x401400
unsigned int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x28]
 char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 char *v3; // [bp-0x1c]
 char *v4; // [bp-0x18]

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
 call_builtin_macros();
 return 0;
}


// Function: call_builtin_macros at 0x401450
unsigned int call_builtin_macros()
{
 char *v0; // [bp-0x28]
 char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 char *v3; // [bp-0x1c]
 char *v4; // [bp-0x18]

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
 test_preprocessing_features();
 return 0;
}


// Function: test_preprocessing_features at 0x4014a0
char g_4020cb[] = "LOG: %d\n";
char g_4020e6[] = "LOG: %d\n";
char g_402101[] = "LOG: %d\n";
char g_40211c[] = "LOG: %d\n";
char g_40213b[] = "LOG: %d\n";
char g_402157[] = "LOG: %d\n";
char g_402181[] = "LOG: %d\n";
char g_40219c[] = "LOG: %d\n";
char g_4021b7[] = "LOG: %d\n";
char g_4021d2[] = "LOG: %d\n";
char g_4021ee[] = "LOG: %d\n";
char g_4022c9[] = "Test preprocessing features\n";

int test_preprocessing_features()
{
 char *v0; // [bp-0x28]
 char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 char *v3; // [bp-0x18]
 unsigned int v4; // [bp-0x14]
 unsigned int v5; // [bp-0x10]

 puts(&g_4022c9);
 v3 = (char*)64;
 printf(&g_4020cb, (int)v3);
 v3 = (char*)30;
 printf(&g_4020e6, (int)v3);
 v3 = (char*)32;
 printf(&g_402101, (int)v3);
 v3 = (char*)57122;
 printf(&g_40211c, (int)v3);
 v3 = (char*)116;
 printf(&g_40213b, (int)v3);
 v3 = (char*)19;
 printf(&g_402157, (int)v3);
 v3 = (char*)60;
 printf(&g_402181, (int)v3);
 v5 = 30;
 v4 = 20;
 v3 = (char*)10;
 printf("LOG: Values: %d, %d, %d\n", v3, v4, v5);
 v3 = (char*)60;
 printf(&g_40219c, (int)v3);
 v3 = (char*)16;
 printf(&g_4021b7, (int)v3);
 v3 = (char*)500;
 printf(&g_4021d2, (int)v3);
 v3 = "03:00:15";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v3);
 v3 = (char*)382;
 return printf(&g_4021ee, (int)v3);
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
void sub_4015ef(unsigned int a0, unsigned int a1)
{
 param_asm_clobber(a0, a1);
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
 int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 v1 = 5;
 v0 = 0x12345678;
 v3 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((int *)((char *)&v0 + 4 * idx));
 }
 return v3;
}


// Function: sub_401653 at 0x401653
void sub_401653(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_multi_insn((char*)a0, (char*)a1, a2);
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
 char v4 = 0; // [bp-0x28]
 unsigned long long result; // [bp-0x1c]
 unsigned int v6; // [bp-0x4]

 v8 = 0;
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
void sub_4016e5(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_simd((unsigned long long*)a0, (unsigned long long*)a1, (unsigned long long*)a2);
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
 param_simd_intrinsics((unsigned long long*)a0, (unsigned long long*)a1, (unsigned long long*)a2);
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

 v2 = 0x123456789ABCDEF0ULL;
 v1 = 0xFEDCBA9876543210ULL;
 v0 = AddV(v2, v1);
 v4 = AddV((unsigned long long)(unsigned int)(v0 >> 32), v0);
 return (int)AddV(v4 >> 32, v4);
}


// Function: sub_40178d at 0x40178d
void sub_40178d(unsigned int a0, unsigned int a1)
{
 param_asm_atomic((unsigned int*)a0, a1);
 return;
}


// Function: param_asm_atomic at 0x401790
unsigned int param_asm_atomic(unsigned int *a0, unsigned int a1)
{
 atomic_exchange_add(a0, a1);
 return *(a0) + a1;
}


// Function: sub_4017a1 at 0x4017a1
void sub_4017a1(unsigned int a0, unsigned int a1)
{
 param_atomic_c11((unsigned int*)a0, a1);
 return;
}


// Function: param_atomic_c11 at 0x4017b0
unsigned int param_atomic_c11(unsigned int *a0, unsigned int a1)
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
 param_dynamic_code(0);
 return 0;
}


// Function: param_dynamic_code at 0x4017f0
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // eax
 void* ptr; // eax

 v0 = sysconf(30);
 ptr = mmap(NULL, v0, 7, 7, 7, 7);
 if (ptr == 0xffffffff)
 return 4294967295;
 munmap(ptr, v0);
 return a0 + 5;
}


// Function: sub_401854 at 0x401854
int sub_401854()
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

 v2 = sysconf(30);
 p = mmap(NULL, v2, 3, 3, 3, 3);
 if (p == 0xffffffff)
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
 call_asm_privileged();
 return 0;
}


// Function: call_asm_privileged at 0x401940
unsigned int call_asm_privileged()
{
 unsigned int v7; // ebx
 unsigned int v8; // edi
 unsigned int v9; // esi
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

 v7 = 0;
 v8 = 0;
 v9 = 0;
 v5 = v7;
 v4 = v8;
 v3 = v9;
 v10 = sysconf(30);
 ptr = mmap(NULL, v10, 7, 7, 7, 7);
 v12 = 4294967295;
 v13 = 4294967295;
 if (ptr != 0xffffffff)
 {
 munmap(v2, v10);
 v13 = 15;
 }
 v1 = v13;
 v2 = ptr;
 v14 = sysconf(30);
 p = mmap(NULL, v14, 3, 3, 3, 3);
 if (p != 0xffffffff)
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
 if (v2 != 0xffffffff)
 return (0 || (v12 ^ 42) ? 77 : v1);
 return v1;
}


// Function: sub_401a72 at 0x401a72
void sub_401a72()
{
 param_memory_clobber_demo();
 return;
}


// Global variable
unsigned int global_var = 0;

// Function: param_memory_clobber_demo at 0x401a80
unsigned int param_memory_clobber_demo()
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
char g_402221[] = "LOG: %d\n";
char g_40223d[] = "LOG: %d\n";
char g_402259[] = "LOG: %d\n";
char g_402275[] = "LOG: %d\n";
char g_402291[] = "LOG: %d\n";
char g_4022ad[] = "LOG: %d\n";
char g_4022f0[] = "Test asm features\n";

int test_asm_features()
{
 unsigned int v10; // eax
 unsigned int idx; // ecx
 char *v12; // edx
 unsigned int result; // ecx
 char *cur; // edi
 unsigned int v0; // [bp-0x68]
 char v1[4]; // [bp-0x5c]
 char v2[4]; // [bp-0x58]
 unsigned short v3; // [bp-0x54]
 unsigned int v5; // [bp-0x50]
 unsigned long long v4; // [bp-0x4c]
 char v6 = 0; // [bp-0x48]
 unsigned long long v7; // [bp-0x3c]
 unsigned long long v8; // [bp-0x2c]
 unsigned long long v15 = 0; // [bp-0x28]

 puts(g_4022f0);
 v0 = 15;
 printf(g_402221, v0);
 v7 = 5;
 v4 = 0x123456789ABCDEF0ULL;
 v10 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v10 += *((int *)((char *)&v4 + 4 * idx));
 }
 v0 = v10;
 printf(g_40223d, v0);
 v3 = 77;
 strncpy(v2, "o AS", 4);
 strncpy(v1, "Hell", 4);
 v7 = 0;
 v4 = 0;
 v12 = v1;
 result = 9;
 for (cur = (char*)&v4; result; result -= 1)
 {
 *(cur) = *(v12);
 cur += 1;
 v12 += 1;
 }
 v0 = (!(v6 ^ 111) && !((char)v4 ^ 72) ? 42 : 4294967295);
 printf(g_402259, v0);
 v4 = 0x123456789ABCDEF0ULL;
 v7 = 0xFEDCBA9876543210ULL;
 v8 = AddV(v4, v7);
 v15 = AddV(v8, v8);
 v0 = (unsigned int)AddV(v15, v15);
 printf(g_402275, v0);
 v5 = 10;
 atomic_exchange_add(&v5, 5);
 v0 = v5 * 2 + 5;
 printf(g_402291, v0);
 v0 = call_asm_privileged();
 return printf(g_4022ad, v0);
}


// Function: sub_401c29 at 0x401c29
int sub_401c29()
{
 main();
 return 0;
}


// Function: main at 0x401c30
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 __x86_get_pc_thunk_dx();
 ptr = (struct_0 *)&v2->padding_0[247];
 v4 = *((int *)&ptr->padding_0[252]);
 if (*((int *)&ptr->padding_0[252]) == 0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = &ptr->padding_0[252];
 do
 {
 p = v6;
 ((void(*)())(uintptr_t)v4)();
 v4 = *((int *)&p->padding_0[4]);
 v6 = &p->padding_0[4];
 } while (*((int *)&p->padding_0[4]) != 0xffffffff);
 return 4294967295;
}


// Function: sub_401ca2 at 0x401ca2
void sub_401ca2()
{
}



/* CRT stub function _fini removed by preprocessor */


