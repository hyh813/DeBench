// Angr Decompilation of 5-23_clang_Os_no_g
// Platform: X86

#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdatomic.h>
#include <stdint.h>

// Helper macros for SIMD operations
#define AddV(a, b) ((a) + (b))
#define CONCAT(a, b) ((a) | (b))

/* CRT stub function _init removed by preprocessor */

typedef struct struct_0 {
    unsigned int field_0;
    char padding_0[256];
    char padding_2e57[256];
    unsigned int field_2eb7;
} struct_0;

extern void (*g_403ff4)(void);
extern char *g_4022c9;
extern char *g_4020cb;
extern char *g_4020e6;
extern char *g_402101;
extern char *g_40211c;
extern char *g_40213b;
extern char *g_402157;
extern char *g_402181;
extern char *g_40219c;
extern char *g_4021b7;
extern char *g_4021d2;
extern char *g_4021ee;
extern char *g_4022f0;
extern char *g_402221;
extern char *g_40223d;
extern char *g_402259;
extern char *g_402275;
extern char *g_402291;
extern char *g_4022ad;

// Define global string variables
char *g_4020cb = "";
char *g_4020e6 = "";
char *g_402101 = "";
char *g_40211c = "";
char *g_40213b = "";
char *g_402157 = "";
char *g_402181 = "";
char *g_40219c = "";
char *g_4021b7 = "";
char *g_4021d2 = "";
char *g_4021ee = "";
char *g_402221 = "";
char *g_40223d = "";
char *g_402259 = "";
char *g_402275 = "";
char *g_402291 = "";
char *g_4022ad = "";
char *g_4022c9 = "";
char *g_4022f0 = "";

// Forward declarations
void frame_dummy(void);
unsigned int __do_global_ctors_aux(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
unsigned int *__do_global_dtors_aux(void);
unsigned int param_macro_constants(unsigned int a0);

static int _init()
{
 if (g_403ff4)
 g_403ff4();
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

 return (int)((char*)v1)[16];
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
void __x86_get_pc_thunk_bx(void)
{
 return;
}


// Function: sub_4010f4 at 0x4010f4
void sub_4010f4()
{
 deregister_tm_clones();
}



void deregister_tm_clones(void)
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
}



void register_tm_clones(void)
{
 return;
}

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;




// Function: sub_401187 at 0x401187
void sub_401187()
{
 __do_global_dtors_aux();
}



unsigned int *__do_global_dtors_aux()
{
 return 0;
}




// Function: sub_40121a at 0x40121a
void sub_40121a()
{
 frame_dummy();
}



void frame_dummy()
{
}



// Function: __x86_get_pc_thunk_dx at 0x401229
void __x86_get_pc_thunk_dx(void)
{
}


// Function: __x86_get_pc_thunk_di at 0x40122d
int __x86_get_pc_thunk_di(int a0, int a1)
{
 unsigned int v0; // eax

 return v0;
}


// Function: sub_401231 at 0x401231
void sub_401231(unsigned int a0)
{
 param_macro_constants(a0);
}


// Function: param_macro_constants at 0x401234
unsigned int param_macro_constants(unsigned int a0)
{
 if (a0 < 1025)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x40124a
unsigned int call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x401250
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


// Function: call_macro_functions at 0x401265
unsigned int call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x40126b
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x401276
unsigned int call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x40127c
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x401289
unsigned int call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x40128f
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x401297
unsigned int call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x40129d
unsigned int param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x4012a3
unsigned int call_stringize()
{
 return 19;
}


// Function: my_func at 0x4012a9
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: param_token_paste at 0x4012b3
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x4012c1
unsigned int call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x4012c7
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


// Function: call_variadic_macro at 0x4012fd
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


// Function: param_macro_override at 0x40132c
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x401335
unsigned int call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x40133b
unsigned int param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x401341
unsigned int call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x401347
int param_builtin_macros(unsigned int a0)
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:21";
 v3 = "Jan 15 2026";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 return 282 + a0;
}


// Function: call_builtin_macros at 0x401396
unsigned int call_builtin_macros()
{
 const char *v0; // [bp-0x28]
 const char *v1; // [bp-0x24]
 unsigned int v2; // [bp-0x20]
 const char *v3; // [bp-0x1c]
 const char *v4; // [bp-0x18]

 v4 = "03:00:21";
 v3 = "Jan 15 2026";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 return 382;
}


// Function: test_preprocessing_features at 0x4013e1
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
 printf(&g_4020cb);
 v3 = 30;
 printf(&g_4020e6);
 v3 = 32;
 printf(&g_402101);
 v3 = 57122;
 printf(&g_40211c);
 v3 = 116;
 printf(&g_40213b);
 v3 = 19;
 printf(&g_402157);
 v3 = 60;
 printf(&g_402181);
 v5 = 30;
 v4 = 20;
 v3 = 10;
 printf("LOG: Values: %d, %d, %d\n", v3, v4, v5);
 v3 = 60;
 printf(&g_40219c);
 v3 = 16;
 printf(&g_4021b7);
 v3 = 500;
 printf(&g_4021d2);
 v4 = "03:00:21";
 v2 = 279;
 v1 = "param_builtin_macros";
 v0 = "src/5-23.c";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v0, v1, v2, v3, v4);
 v3 = 382;
 return printf(&g_4021ee);
}


// Function: param_asm_basic at 0x401515
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x401523
unsigned int call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x401532
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


// Function: call_asm_clobber at 0x40154f
unsigned int call_asm_clobber()
{
 unsigned int v3; // eax
 unsigned int idx; // ecx
 unsigned long long v0; // [bp-0x1c]
 unsigned int v1; // [bp-0xc]

 v1 = 5;
 v0 = 0x1234567890ABCDEFULL;
 v3 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v3 += *((int *)((char *)&v0 + 4 * idx));
 }
 return v3;
}


// Function: param_asm_multi_insn at 0x401590
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


// Function: call_asm_multi_insn at 0x4015ae
char call_asm_multi_insn()
{
 unsigned int v9; // edi
 unsigned int v10; // esi
 char *v11; // ecx
 unsigned int flag2; // esi
 char *cur; // edi
 char v0[4]; // [bp-0x38]
 char v1[4]; // [bp-0x34]
 unsigned short v2; // [bp-0x30]
 int flag1; // [bp-0x2c]
 char v4; // [bp-0x28]
 unsigned long long result; // [bp-0x1c]
 unsigned int v6; // [bp-0x8]
 unsigned int v7; // [bp-0x4]

 v7 = v9;
 v6 = v10;
 v11 = &v0;
 v2 = 77;
 strncpy(v1, "o AS", 4);
 strncpy(v0, "Hell", 4);
 result = 0;
 flag1 = 0;
 flag2 = 9;
 for (cur = &flag1; flag2; flag2 -= 1)
 {
 *(cur) = *(v11);
 cur += 1;
 v11 += 1;
 }
 return ((v4 ^ 111) || ((char)flag1 ^ 72) ? 255 : 42);
}


// Function: param_asm_simd at 0x40160b
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: param_simd_intrinsics at 0x401627
unsigned int param_simd_intrinsics(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a1), *(a0));
 return 0;
}


// Function: call_asm_simd at 0x401642
int call_asm_simd()
{
 unsigned long v4; // xmm1
 unsigned long long v0; // [bp-0x3c]
 unsigned long long v1; // [bp-0x2c]
 unsigned long long v2; // [bp-0x1c]

 v2 = 0x1234567890ABCDEFULL;
 v1 = 0xFEDCBA0987654321ULL;
 v0 = AddV(v2, v1);
 v4 = v0;
 return (int)(v4 >> 32) + (int)v4;
}


// Function: param_asm_atomic at 0x40169a
int param_asm_atomic(_Atomic unsigned int *a0, unsigned int a1)
{
 atomic_fetch_add(a0, a1);
 return *(a0) + a1;
}


// Function: param_atomic_c11 at 0x4016ab
int param_atomic_c11(_Atomic unsigned int *a0, unsigned int a1)
{
 atomic_fetch_add(a0, a1);
 return *(a0) + a1;
}


// Function: call_asm_atomic at 0x4016bc
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_fetch_add((_Atomic unsigned int *)&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x4016d7
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


// Function: param_memory_protection at 0x401739
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


// Function: param_clobber_importance at 0x4017e8
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return (a0 + a1) * 2;
}


// Function: call_asm_privileged at 0x401803
unsigned int call_asm_privileged()
{
 unsigned int v4; // ebx
 unsigned int v5; // edi
 unsigned int v6; // esi
 unsigned int v7; // esi
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = v4;
 v1 = v5;
 v0 = v6;
 v7 = param_dynamic_code(10);
 if (!(param_memory_protection() ^ 42) && !(v7 ^ 15))
 return 77;
 return v7;
}


unsigned int global_var = 0;

// Function: param_memory_clobber_demo at 0x401862
int param_memory_clobber_demo()
{
 return 50 + global_var;
}


// Function: test_asm_features at 0x401880
int test_asm_features()
{
 unsigned int v13; // eax
 unsigned int idx; // ecx
 unsigned int flag1; // ecx
 char *v16; // edx
 char *cur; // edi
 unsigned long long v18; // xmm1
 unsigned int v0; // [bp-0x68]
 unsigned long long v1; // [bp-0x5c]
 char v2[4]; // [bp-0x4c]
 char v3[4]; // [bp-0x48]
 unsigned short v4; // [bp-0x44]
 unsigned int v5; // [bp-0x3c]
 unsigned long long v6; // [bp-0x3c]
 unsigned int v7; // [bp-0x3c]
 unsigned long long v8; // [bp-0x3c]
 unsigned long long result; // [bp-0x3c]
 char v10; // [bp-0x38]
 unsigned long long v11; // [bp-0x2c], Other Possible Types: unsigned int

 puts(&g_4022f0);
 v0 = 15;
 printf(&g_402221);
 v11 = 5;
 v8 = 0x1234567890ABCDEFULL;
 v13 = 0;
 for (idx = 0; idx < 5; idx += 1)
 {
 v13 += *((int *)&v8);
 }
 v0 = v13;
 printf(&g_40223d);
 v4 = 77;
 strncpy(v3, "o AS", 4);
 strncpy(v2, "Hell", 4);
 v11 = 0;
 result = 0;
 flag1 = 9;
 v16 = &v2[0];
 for (cur = (char*)&v5; flag1; flag1 -= 1)
 {
 *(cur) = *(v16);
 cur += 1;
 v16 += 1;
 }
 v0 = ((v10 ^ 111) || (v5 ^ 72) ? 4294967295 : 42);
 printf(&g_402259);
 v6 = 0x1234567890ABCDEFULL;
 v1 = 0xFEDCBA0987654321ULL;
 v1 = AddV(v6, v1);
 v18 = v1;
 v0 = (unsigned int)(v18 >> 32) + (unsigned int)v18;
 printf(&g_402275);
 v7 = 10;
 atomic_fetch_add((_Atomic unsigned int *)&v5, 5);
 v0 = v7 * 2 + 5;
 printf(&g_402291);
 v0 = call_asm_privileged();
 return printf(&g_4022ad);
}


// Function: main at 0x4019f3
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_401a14 at 0x401a14
void sub_401a14()
{
 __do_global_ctors_aux();
}



unsigned int __do_global_ctors_aux()
{
 return 0;
}




// Function: sub_401a62 at 0x401a62
void sub_401a62()
{
}



/* CRT stub function _fini removed by preprocessor */


