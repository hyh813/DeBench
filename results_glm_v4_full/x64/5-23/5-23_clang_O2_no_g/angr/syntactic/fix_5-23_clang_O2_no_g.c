// Angr Decompilation of 5-23_clang_O2_no_g
// Platform: AMD64

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdatomic.h>

// SIMD helper macros
#define AddV(a, b) ((a) + (b))
#define CONCAT(x, y) ((x) | (y))

// Forward declarations
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
void sub_401020(void);
int sub_40102c(void);
void sub_4010c5(void);
void sub_401175(void);
void sub_401189(unsigned long a0);
unsigned long long param_macro_constants();
void sub_4011a4(void);
unsigned long long call_macro_constants(void);
void sub_4011b6(unsigned long a0, unsigned long a1);
long long param_macro_functions();
void sub_4011cd(void);
unsigned long long call_macro_functions(void);
void sub_4011d6(unsigned long a0);
int param_conditional_compile();
void sub_4011e7(void);
unsigned long long call_conditional_compile(void);
void sub_4011f6(unsigned long a0);
int param_multi_branch_compile();
void sub_401209(void);
unsigned long long call_multi_branch_compile(void);
void sub_401216(unsigned long a0);
int param_macro_recursion();
void sub_401224(void);
unsigned long long call_macro_recursion(void);
void sub_401236(void);
unsigned long long param_stringize(void);
void sub_401246(void);
unsigned long long call_stringize(void);
void sub_401256(unsigned long a0);
unsigned int my_func();
void sub_401266(unsigned long a0);
int param_token_paste();
void sub_40127a(void);
unsigned long long call_token_paste(void);
void sub_401286(unsigned long a0, unsigned long a1, unsigned long a2);
int param_variadic_macro();
void sub_4012ae(void);
unsigned long long call_variadic_macro(void);
void sub_4012d5(unsigned long a0);
int param_macro_override(unsigned int a0);
void sub_4012e7(void);
unsigned long long call_macro_override(void);
void sub_4012f6(void);
unsigned long long param_include_guard(void);
void sub_401306(void);
unsigned long long call_include_guard(void);
void sub_401316(unsigned long a0);
int param_builtin_macros();
void sub_40135c(void);
unsigned long long call_builtin_macros(void);
void sub_401397(void);
int test_preprocessing_features(void);
void sub_4014cb(unsigned long a0);
int param_asm_basic();
void sub_4014da(void);
unsigned long long call_asm_basic(void);
void sub_4014ef(void);
unsigned int param_asm_clobber();
void sub_401504(void);
unsigned int call_asm_clobber(void);
void sub_401544(void);
char param_asm_multi_insn();
void sub_401567(void);
char call_asm_multi_insn(void);
void sub_4015d5(unsigned long a0, unsigned long a1, unsigned long a2);
double param_asm_simd();
double param_simd_intrinsics();
void sub_4015ff(void);
long long call_asm_simd(void);
void sub_401651(unsigned long a0, unsigned long a1);
int param_asm_atomic();
void sub_401669(unsigned long a0, unsigned long a1);
int param_atomic_c11();
void sub_401679(void);
long long call_asm_atomic(void);
unsigned long long param_dynamic_code(unsigned int a0);
void sub_401708(void);
unsigned int param_memory_protection(void);
void sub_4017ab(unsigned long a0, unsigned long a1);
unsigned int param_clobber_importance();
void sub_4017bf(void);
unsigned long long call_asm_privileged(void);
void sub_401863(void);
int param_memory_clobber_demo();
void sub_401882(void);
int test_asm_features(void);
void sub_4019ff(void);
int main(void);

// Stub definitions for CRT functions
void deregister_tm_clones() {}
void register_tm_clones() {}
void __do_global_dtors_aux() {}
void frame_dummy() {}

// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 (void)v0;
}


// Function: sub_40102c at 0x40102c
int sub_40102c()
{
 char *v1; // rdi

 v1 = "";
 return puts(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010c5 at 0x4010c5
void sub_4010c5()
{
}






/* CRT stub function deregister_tm_clones removed by preprocessor */







/* CRT stub function register_tm_clones removed by preprocessor */







/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_401175 at 0x401175
void sub_401175()
{
}






/* CRT stub function frame_dummy removed by preprocessor */



// Function: sub_401189 at 0x401189
void sub_401189(unsigned long a0)
{
 param_macro_constants();
 return;
}


// Function: param_macro_constants at 0x401190
unsigned long long param_macro_constants()
{
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
long long param_macro_functions()
{
 return 30;
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
int param_conditional_compile()
{
 return 32;
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
int param_multi_branch_compile()
{
 return 57122;
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
int param_macro_recursion()
{
 return 116;
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
unsigned int my_func()
{
 return 0;
}


// Function: sub_401266 at 0x401266
void sub_401266(unsigned long a0)
{
 param_token_paste();
 return;
}


// Function: param_token_paste at 0x401270
int param_token_paste()
{
 return 60;
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
int param_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
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
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
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
int param_builtin_macros()
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:52");
 return 382;
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
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:52");
 return 382;
}


// Function: sub_401397 at 0x401397
void sub_401397(void)
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x4013a0
char g_40227d[] = "=== Testing preprocessing features ===\n";
char g_40207f[] = "PASS: macro_constants - %d\n";
char g_40209a[] = "PASS: macro_functions - %d\n";
char g_4020b5[] = "PASS: conditional_compile - %d\n";
char g_4020d0[] = "PASS: multi_branch_compile - %d\n";
char g_4020ef[] = "PASS: macro_recursion - %d\n";
char g_40210b[] = "PASS: stringize - %d\n";
char g_402135[] = "PASS: token_paste - %d\n";
char g_402150[] = "PASS: variadic_macro - %d\n";
char g_40216b[] = "PASS: macro_override - %d\n";
char g_402186[] = "PASS: include_guard - %d\n";
char g_4021a2[] = "PASS: test_preprocessing_features - %d\n";

int test_preprocessing_features()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:52");
 return printf(&g_4021a2, 382);
}


// Function: sub_4014cb at 0x4014cb
void sub_4014cb(unsigned long a0)
{
 param_asm_basic();
 return;
}


// Function: param_asm_basic at 0x4014d0
int param_asm_basic()
{
 return 15;
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
unsigned int param_asm_clobber()
{
 unsigned int v3; // eax
 unsigned long long idx; // rcx
 int v0[5]; // [bp-0x18]

 v0[0] = 0x12345678;
 v0[1] = 0x9ABCDEF0;
 v0[2] = 0x11223344;
 v0[3] = 0x55667788;
 v0[4] = 0x99AABBCC;
 v3 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v3 += v0[idx];
 }
 return v3;
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
 int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x8]

 v1 = 5;
 v0 = 0x0123456789ABCDEF;
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
 param_asm_multi_insn();
 return;
}


// Function: param_asm_multi_insn at 0x401550
char param_asm_multi_insn()
{
 char v4[9]; // [bp-0x38]
 unsigned short v1; // [bp-0x30]
 int flag1; // [bp-0x28]
 char v3; // [bp-0x24];
 char *iter; // rcx
 char *cur; // rdx
 unsigned long long i; // rsi
 char result; // al

 strncpy(v4, "Hello AS", 8);
 v1 = 77;
 flag1 = 0;
 v3 = 0;
 iter = (char *)&flag1;
 cur = &v4[0];
 for (i = 9; i; i -= 1)
 {
 result = *(cur);
 *(iter) = *(cur);
 iter += 1;
 cur += 1;
 }
 if ((v3 ^ 111) || ((char)flag1 ^ 72))
 return (char)255;
 return (char)42;
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
 param_asm_simd();
 return;
}


// Function: param_asm_simd at 0x4015e0
double param_asm_simd()
{
 unsigned long long v1; // xmm0lq
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x18]
 unsigned long long v4; // xmm1lq

 v2 = 0x0123456789ABCDEFULL;
 v3 = 0xFEDCBA9876543210ULL;
 v1 = v2 + v3;
 v4 = (unsigned long long)(v1 + v1);
 return (double)((unsigned int)v4 + v4);
}


// Function: param_simd_intrinsics at 0x4015f0
double param_simd_intrinsics()
{
 unsigned long long v1; // xmm0lq
 unsigned long long v2; // [bp-0x28]
 unsigned long long v3; // [bp-0x18]
 unsigned long long v4; // xmm1lq

 v2 = 0x0123456789ABCDEFULL;
 v3 = 0xFEDCBA9876543210ULL;
 v1 = v2 + v3;
 v4 = (unsigned long long)(v1 + v1);
 return (double)((unsigned int)v4 + v4);
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
 unsigned long v4; // xmm1lq
 unsigned long long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x18]

 v2 = 0x0123456789ABCDEFULL;
 v1 = 0xFEDCBA9876543210ULL;
 v0 = AddV(v2, v1);
 v4 = (unsigned long long)(AddV((unsigned int)v0, v0));
 return AddV((unsigned int)v4, v4);
}


// Function: sub_401651 at 0x401651
void sub_401651(unsigned long a0, unsigned long a1)
{
 param_asm_atomic();
 return;
}


// Function: param_asm_atomic at 0x401660
int param_asm_atomic()
{
 _Atomic unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_fetch_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: sub_401669 at 0x401669
void sub_401669(unsigned long a0, unsigned long a1)
{
 param_atomic_c11();
 return;
}


// Function: param_atomic_c11 at 0x401670
int param_atomic_c11()
{
 _Atomic unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_fetch_add(&v0, 5);
 return v0 * 2 + 5;
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
 _Atomic unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_fetch_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x4016a0
unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* ptr; // rax

 v1 = sysconf(30);
 ptr = mmap(NULL, v1, 7, 34, -1, 0);
 if (ptr == (void*)0xffffffffffffffff)
 return 4294967295;
 munmap(ptr, v1);
 return 0;
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
 unsigned long long v2; // rax
 unsigned long v3; // r14
 unsigned int *p; // rax
 unsigned int *ptr; // rbx
 unsigned int v6; // ebp
 unsigned int v7; // r15d
 unsigned long long v0; // [bp-0x28]

 v0 = v2;
 v3 = sysconf(30);
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
 param_clobber_importance();
 return;
}


// Function: param_clobber_importance at 0x4017b0
unsigned int param_clobber_importance()
{
 return 30;
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
 unsigned long long v5; // r15
 unsigned long long v6; // r14
 unsigned long long v7; // rbx
 unsigned long long v8; // rax
 unsigned long v9; // rax
 unsigned int v10; // ebp
 void* ptr; // rax
 unsigned long long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned long long v2; // [bp-0x18]
 unsigned long long v3; // [bp-0x10]

 v3 = v5;
 v2 = v6;
 v1 = v7;
 v0 = v8;
 v9 = sysconf(30);
 v10 = 4294967295;
 ptr = mmap(NULL, v9, 7, 34, -1, 0);
 if (ptr != 0xffffffffffffffff)
 {
 *((unsigned short *)&ptr[4]) = 49925;
 *((unsigned int *)ptr) = 3229874313;
 v10 = ((unsigned int (*)(int))ptr)(10);
 munmap(ptr, v9);
 }
 return (0 || (param_memory_protection() ^ 42) || (v10 ^ 15) ? v10 : 77);
}


// Function: sub_401863 at 0x401863
void sub_401863(void)
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401870
int param_memory_clobber_demo()
{
 return 50;
}


// Function: sub_401882 at 0x401882
void sub_401882(void)
{
 test_asm_features();
 return;
}


// Function: test_asm_features at 0x401890
char g_4022a4[] = "=== Testing ASM features ===\n";
char g_4021d5[] = "PASS: asm_basic - %d\n";
char g_4021f1[] = "PASS: asm_clobber - %d\n";
char g_40220d[] = "PASS: asm_multi_insn - %d\n";
char g_402229[] = "PASS: asm_simd - %d\n";
char g_402245[] = "PASS: asm_atomic - %d\n";
char g_402261[] = "PASS: call_asm_privileged - %d\n";

int test_asm_features()
{
 unsigned int v7; // eax
 unsigned long long idx; // rcx
 unsigned long long j; // rcx
 char *v10; // rdx
 char *cur; // rsi
 unsigned long v12; // xmm1lq
 unsigned long long v0; // [bp-0x58], Other Possible Types: unsigned int
 unsigned long long v1; // [bp-0x58], Other Possible Types: unsigned long long
 char v2; // [bp-0x54]
 unsigned long long v3; // [bp-0x48], Other Possible Types: unsigned int
 char v4[16]; // [bp-0x38]
 unsigned long long v5; // [bp-0x28]

 puts(&g_4022a4);
 printf(&g_4021d5, 15);
 v3 = 5;
 v0 = 0x0123456789ABCDEFULL;
 v7 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v7 += *((int *)((char *)&v0 + 4 * idx));
 }
 printf(&g_4021f1, v7);
strncpy(v4, "Hello ASM", 9);
*((unsigned int*)&v3) = 0;
v0 = 0;
 j = 9;
 v10 = &v4;
 for (cur = (char *)&v0; j; j -= 1)
 {
 *(cur) = *(v10);
 cur += 1;
 v10 += 1;
 }
 printf(&g_40220d, (!(v2 ^ 111) && !((char)v0 ^ 72) ? 42 : 4294967295));
 v1 = 0x0123456789ABCDEFULL;
 *((unsigned long long *)&v4) = 0xFEDCBA9876543210ULL;
 v5 = AddV(v1, *((unsigned long long *)&v4));
 v12 = (unsigned long long)(AddV((unsigned int)v5, v5));
 printf(&g_402229, (unsigned long long)(AddV((unsigned int)v12, v12)));
 v0 = 10;
 atomic_fetch_add((_Atomic unsigned long long*)&v1, 5);
 printf(&g_402245, (unsigned int)(v0 * 2 + 5));
 return printf(&g_402261, call_asm_privileged() & 4294967295);
}


// Function: sub_4019ff at 0x4019ff
void sub_4019ff(void)
{
 main();
 return;
}


// Function: main at 0x401a00
int main()
{
 unsigned long long v2; // rax
 unsigned long long v0; // [bp-0x8]

 v0 = v2;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


