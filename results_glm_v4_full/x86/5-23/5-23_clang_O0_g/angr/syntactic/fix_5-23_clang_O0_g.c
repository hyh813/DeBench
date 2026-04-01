// Angr Decompilation of 5-23_clang_O0_g
// Platform: X86

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <stddef.h>

typedef struct struct_0 {
    char padding_0[256];
} struct_0;

typedef struct struct_1 {
 unsigned int field_0;
} struct_1;

/* Define int128_t as int64_t instead of __int128 */
typedef int64_t int128_t;

/* Forward declarations for functions used before definition */
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
unsigned int my_func_helper(void);
unsigned int param_token_paste(unsigned int a0);
unsigned int call_token_paste(void);
unsigned int param_variadic_macro(void);
unsigned int call_variadic_macro(void);
int param_macro_override(unsigned int a0);
unsigned int call_macro_override(void);
void param_include_guard(void);
int header_func(int a0);
void call_include_guard(void);
unsigned int param_builtin_macros(unsigned int a0);
unsigned int call_builtin_macros(void);
unsigned int test_preprocessing_features(void);
int param_asm_basic(unsigned int a0);
unsigned int call_asm_basic(void);
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1);
unsigned int call_asm_clobber(void);
unsigned int param_asm_multi_insn(char *a0, char *a1, unsigned int a2);
unsigned int call_asm_multi_insn(void);
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
int call_asm_simd(void);
unsigned int param_simd_intrinsics(unsigned long long *ptr, unsigned long long *p, unsigned long long *addr);
int param_asm_atomic(unsigned int *ptr, unsigned int a1);
unsigned int call_asm_atomic(void);
int param_atomic_c11(unsigned int *ptr, unsigned int a1);
unsigned int param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(void);
int param_clobber_importance(unsigned int a0, unsigned int a1);
unsigned int call_asm_privileged(void);
unsigned int param_memory_clobber_demo(void);
unsigned int test_asm_features(void);

/* Function stubs for missing CRT functions */
void frame_dummy(void);
unsigned int *deregister_tm_clones(void);
unsigned int * __do_global_dtors_aux(void);
unsigned int __do_global_ctors_aux(void);
unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val);
unsigned long long AddV(unsigned long long a, unsigned long long b);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_bx(void);
int __x86_get_pc_thunk_di(int a0);
unsigned int register_tm_clones(void);

/* Implementations for missing functions */
unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val)
{
 unsigned int old = *ptr;
 *ptr += val;
 return old;
}

unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}

/* Global variables */
extern struct_0 *g_404ff4;
unsigned int global_var = 0;
extern unsigned int _GLOBAL_OFFSET_TABLE_;

/* External data definitions */
char g_403099[] = "Preprocessing features test\n";
char g_4032ec[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
char g_403217[] = "ASM features test\n";

void frame_dummy(void) {}

int _init()
{
 frame_dummy();
 return 0;
}


// Function: sub_401030 at 0x401030
int sub_401030()
{
 unsigned int ptr[3] = {0, 0, 0};
 unsigned int v0 = 0;
 v0 = 1;
 return v0;
}


// Function: sub_4010d0 at 0x4010d0
int sub_4010d0()
{
 return 0;
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_40110b at 0x40110b
void sub_40110b()
{
 __builtin_trap();
}


// Function: sub_40110c at 0x40110c
void sub_40110c()
{
 return;
}


// Function: __x86.get_pc_thunk_bx at 0x401110
void __x86_get_pc_thunk_bx()
{
 return;
}


// Function: sub_401114 at 0x401114
void sub_401114()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */

unsigned int *deregister_tm_clones(void)
{
 return NULL;
}


// Function: sub_401153 at 0x401153
void sub_401153()
{
}


// Function: sub_401159 at 0x401159
void sub_401159()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones removed by preprocessor */

unsigned int register_tm_clones()
{
 return 0;
}


// Function: sub_4011a7 at 0x4011a7
void sub_4011a7()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */

unsigned int * __do_global_dtors_aux(void)
{
 deregister_tm_clones();
 return NULL;
}


// Function: sub_40123a at 0x40123a
void sub_40123a()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: __x86.get_pc_thunk_dx at 0x401249
void __x86_get_pc_thunk_dx()
{
 return;
}


// Function: __x86.get_pc_thunk_di at 0x40124d
int __x86_get_pc_thunk_di(int a0)
{
 return a0;
}


// Function: sub_401251 at 0x401251
void sub_401251()
{
 param_macro_constants(0x800);
 return;
}


// Function: param_macro_constants at 0x401260
unsigned int param_macro_constants(unsigned int a0)
{
 unsigned int v1; // eax
 unsigned int v0; // [bp-0x8]

 v0 = v1;
 v0 = (a0 <= 0x400 ? 0x200 : 64);
 return v0;
}


// Function: sub_40128f at 0x40128f
void sub_40128f()
{
 call_macro_constants();
 return;
}


// Function: call_macro_constants at 0x401290
unsigned int call_macro_constants()
{
 return param_macro_constants(0x800);
}


// Function: sub_4012b3 at 0x4012b3
void sub_4012b3(unsigned int a0, unsigned int a1)
{
 param_macro_functions(a0, a1);
 return;
}


// Function: param_macro_functions at 0x4012c0
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0 * a0;
 v0 = (a0 <= a1 ? a1 : a0);
 return v1 + v0;
}


// Function: call_macro_functions at 0x401300
unsigned int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


// Function: sub_40132d at 0x40132d
void sub_40132d()
{
 param_conditional_compile(10);
 return;
}


// Function: param_conditional_compile at 0x401330
int param_conditional_compile(unsigned int a0)
{
 unsigned int v0; // [bp-0x8]

 v0 = a0;
 v0 = v0 * 3 + 2;
 return v0;
}


// Function: sub_40134f at 0x40134f
void sub_40134f()
{
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x401350
unsigned int call_conditional_compile()
{
 return param_conditional_compile(10);
}


// Function: sub_401373 at 0x401373
void sub_401373()
{
 param_multi_branch_compile(10);
 return;
}


// Function: param_multi_branch_compile at 0x401380
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: sub_401391 at 0x401391
void sub_401391()
{
 call_multi_branch_compile();
 return;
}


// Function: call_multi_branch_compile at 0x4013a0
unsigned int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


// Function: sub_4013c3 at 0x4013c3
void sub_4013c3()
{
 param_macro_recursion(100);
 return;
}


// Function: param_macro_recursion at 0x4013d0
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: sub_40140b at 0x40140b
void sub_40140b()
{
 call_macro_recursion();
 return;
}


// Function: call_macro_recursion at 0x401410
unsigned int call_macro_recursion()
{
 return param_macro_recursion(100);
}


// Function: sub_401433 at 0x401433
void sub_401433()
{
 param_stringize();
 return;
}


// Function: param_stringize at 0x401440

unsigned int param_stringize()
{
 unsigned int v0; // [bp-0x20]
 unsigned int len; // [bp-0x1c]
 unsigned int v2; // [bp-0x18]
 char *v3; // [bp-0x14]
 char *v4; // [bp-0x10]
 char *v5; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 v5 = "Hello World";
 v4 = "1_2.3";
 v3 = "155";
 len = strlen(v5);
 v2 = len + strlen(v4);
 return v2 + strlen(v3);
}


// Function: sub_4014b8 at 0x4014b8
void sub_4014b8()
{
 call_stringize();
 return;
}


// Function: call_stringize at 0x4014c0
unsigned int call_stringize()
{
 return param_stringize();
}


// Function: sub_4014e5 at 0x4014e5
void sub_4014e5()
{
 my_func_helper();
 return;
}


// Function: my_func at 0x4014f0
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}

unsigned int my_func_helper(void)
{
 return my_func(10);
}


// Function: sub_4014fc at 0x4014fc
void sub_4014fc()
{
 param_token_paste(5);
 return;
}


// Function: param_token_paste at 0x401500
unsigned int param_token_paste(unsigned int a0)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = my_func(a0);
 v0 = a0 + 5;
 v1 += v0;
 return v1;
}


// Function: sub_40153f at 0x40153f
void sub_40153f()
{
 call_token_paste();
 return;
}


// Function: call_token_paste at 0x401540
unsigned int call_token_paste()
{
 return param_token_paste(5);
}


// Function: sub_401563 at 0x401563
void sub_401563()
{
 param_variadic_macro();
 return;
}


// Function: param_variadic_macro at 0x401570
unsigned int param_variadic_macro()
{
 unsigned int v3; // [bp-0x10]

 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 v3 = 5;
 return v3 * 10 + 10;
}


// Function: sub_4015c5 at 0x4015c5
void sub_4015c5()
{
 call_variadic_macro();
 return;
}


// Function: call_variadic_macro at 0x4015d0
unsigned int call_variadic_macro()
{
 return param_variadic_macro();
}


// Function: sub_401605 at 0x401605
void sub_401605()
{
 param_macro_override(5);
 return;
}


// Function: param_macro_override at 0x401610
int param_macro_override(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v1 = a0 + 1;
 v0 = a0 * 2;
 return v1 + v0;
}


// Function: sub_401636 at 0x401636
void sub_401636()
{
 call_macro_override();
 return;
}


// Function: call_macro_override at 0x401640
unsigned int call_macro_override()
{
 return param_macro_override(5);
}


// Function: sub_401663 at 0x401663
void sub_401663()
{
 param_include_guard();
 return;
}


// Function: param_include_guard at 0x401670
void param_include_guard()
{
 char v0; // [bp-0x8]
 char v1; // [bp+0x0]

 header_func(5);
 return;
}


// Function: sub_401693 at 0x401693
void sub_401693()
{
 header_func(0);
 return;
}


// Function: header_func at 0x4016a0
int header_func(int a0)
{
 return a0 * 100;
}


// Function: sub_4016ac at 0x4016ac
void sub_4016ac()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x4016b0
void call_include_guard()
{
 param_include_guard();
 return;
}


// Function: sub_4016cc at 0x4016cc
void sub_4016cc()
{
 param_builtin_macros(100);
 return;
}


// Function: param_builtin_macros at 0x4016d0
unsigned int param_builtin_macros(unsigned int a0)
{
 unsigned int v12; // [bp-0x18]
 unsigned int result; // [bp-0x28]
 unsigned int flag1; // [bp-0x2c]
 unsigned int v6; // [bp-0x30]

 v12 = 279;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:04");
 result = 0;
 flag1 = 1;
 v6 = 2;
 return a0 + v12 + result + flag1 + v6;
}


// Function: sub_401776 at 0x401776
void sub_401776()
{
 call_builtin_macros();
 return;
}


// Function: call_builtin_macros at 0x401780
unsigned int call_builtin_macros()
{
 return param_builtin_macros(100);
}


// Function: sub_4017a3 at 0x4017a3
void sub_4017a3()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x4017b0
unsigned int test_preprocessing_features()
{
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char *)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 printf("%s", g_403099);
 v0 = call_macro_constants();
 printf(v1 + 7999);
 v0 = call_macro_functions();
 printf(v1 + 7972);
 v0 = call_conditional_compile();
 printf(v1 + 7945);
 v0 = call_multi_branch_compile();
 printf(v1 + 7918);
 v0 = call_macro_recursion();
 printf(v1 + 7887);
 v0 = call_stringize();
 printf(v1 + 7859);
 v0 = call_token_paste();
 printf(v1 + 7817);
 v0 = call_variadic_macro();
 printf(v1 + 7790);
 v0 = call_macro_override();
 printf(v1 + 7763);
 v0 = (unsigned int)call_include_guard();
 printf(v1 + 7736);
 v0 = call_builtin_macros();
 return printf(v1 + 7708);
}


// Function: sub_401919 at 0x401919
void sub_401919()
{
 param_asm_basic(5);
 return;
}


// Function: param_asm_basic at 0x401920
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]
 unsigned int v1; // [bp-0x8]

 v0 = a0 + 10;
 v1 = v0;
 return v1;
}


// Function: sub_401944 at 0x401944
void sub_401944()
{
 call_asm_basic();
 return;
}


// Function: call_asm_basic at 0x401950
unsigned int call_asm_basic()
{
 return param_asm_basic(5);
}


// Function: sub_401973 at 0x401973
void sub_401973(unsigned int a0, unsigned int a1)
{
 param_asm_clobber(a0, a1);
 return;
}


// Function: param_asm_clobber at 0x401980
unsigned int param_asm_clobber(unsigned int ptr, unsigned int a1)
{
 unsigned int v2; // eax
 unsigned int idx; // ecx
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]

 v1 = 0;
 v2 = 0;
 for (idx = 0; idx < a1; idx += 1)
 {
 v2 += *((int *)(uintptr_t)((char *)(uintptr_t)ptr + idx * 4));
 }
 v0 = v2;
 v1 = v0;
 return v1;
}


// Function: sub_4019c3 at 0x4019c3
void sub_4019c3()
{
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x4019d0
unsigned int call_asm_clobber()
{
 char v1[20];

 memcpy(&v1, &g_4032ec, 20);
 return param_asm_clobber((unsigned int)&v1, 5);
}


// Function: sub_401a1f at 0x401a1f
void sub_401a1f(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_multi_insn((char *)a0, (char *)a1, a2);
 return;
}


// Function: param_asm_multi_insn at 0x401a20
unsigned int param_asm_multi_insn(char *a0, char *a1, unsigned int a2)
{
 unsigned int v1; // eax
 char *cur; // edx
 char *v3; // ecx
 unsigned int result; // esi
 unsigned int v0; // [bp-0xc]

 v0 = v1;
 cur = a0;
 v3 = a1;
 for (result = a2; result; result -= 1)
 {
 *(cur) = *(v3);
 cur += 1;
 v3 += 1;
 }
 v0 = 0;
 return v0;
}


// Function: sub_401a62 at 0x401a62
void sub_401a62()
{
 call_asm_multi_insn();
 return;
}


// Function: call_asm_multi_insn at 0x401a70
unsigned int call_asm_multi_insn()
{
 char v1; // [bp-0x33]
 char v2[32]; // [bp-0x32]
 char v3 = 0; // [bp-0x2e]
 char v4[10]; // [bp-0x12]

 strncpy(v4, "Hello ASM", 9);
 memset(v2, 0, 32);
 param_asm_multi_insn(v2, v4, 9);
 v1 = 0;
 if (v2[0] == 72)
 v1 = v3 == 111;
 return ((v1 & 1) ? 42 : 4294967295);
}


// Function: sub_401b15 at 0x401b15
void sub_401b15(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_asm_simd((unsigned long long *)a0, (unsigned long long *)a1, (unsigned long long *)a2);
 return;
}


// Function: param_asm_simd at 0x401b20
unsigned int param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: sub_401b46 at 0x401b46
void sub_401b46(unsigned int a0, unsigned int a1, unsigned int a2)
{
 param_simd_intrinsics((void *)a0, (unsigned long long *)a1, (unsigned long long *)a2);
 return;
}


// Function: param_simd_intrinsics at 0x401b50
unsigned int param_simd_intrinsics(unsigned long long *ptr, unsigned long long *p, unsigned long long *addr)
{
 unsigned long long v0; // [bp-0x7c]
 unsigned long long v1; // [bp-0x6c]
 unsigned long long v2; // [bp-0x5c]
 unsigned long long v3; // [bp-0x3c]
 char v4[16]; // [bp-0x2c]
 unsigned long long v5; // [bp-0x1c]

 v2 = *(ptr);
 v1 = *(p);
 memcpy(v4, &v2, 16);
 v3 = v1;
 v0 = AddV(*(unsigned long long *)v4, v3);
 v5 = v0;
 *(addr) = v5;
 return 0;
}


// Function: sub_401bcd at 0x401bcd
void sub_401bcd()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401bd0
int call_asm_simd()
{
 unsigned long long v0; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned int v4; // [bp-0x28]
 unsigned int v5; // [bp-0x24]
 unsigned int v6; // [bp-0x20]
 unsigned int v7; // [bp-0x1c]
 unsigned int result; // [bp-0x18]
 unsigned int v9; // [bp-0x14]
 unsigned int v10; // [bp-0x10]
 unsigned int v11; // [bp-0xc]

 result = 1;
 v9 = 2;
 v10 = 3;
 v11 = 4;
 v4 = 5;
 v5 = 6;
 v6 = 7;
 v7 = 8;
 param_asm_simd(&result, &v4, &v0);
 return v0 + v1 + v2 + v3;
}


// Function: sub_401c56 at 0x401c56
void sub_401c56(unsigned int a0, unsigned int a1)
{
 param_asm_atomic((unsigned int *)a0, a1);
 return;
}


// Function: param_asm_atomic at 0x401c60
int param_asm_atomic(unsigned int *ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x8]
 
 atomic_exchange_add(ptr, a1);
 v0 = *(ptr);
 return v0 + a1;
}


// Function: sub_401c82 at 0x401c82
void sub_401c82(unsigned int a0, unsigned int a1)
{
 param_atomic_c11((unsigned int *)a0, a1);
 return;
}


// Function: param_atomic_c11 at 0x401c90
int param_atomic_c11(unsigned int *ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0xc]

 atomic_exchange_add(ptr, a1);
 v0 = *(ptr);
 return v0 + a1;
}


// Function: sub_401cba at 0x401cba
void sub_401cba()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x401cc0
unsigned int call_asm_atomic()
{
 unsigned int v0; // [bp-0x10]
 v0 = 5;
 return param_asm_atomic(&v0, v0);
}





// Function: sub_401cfc at 0x401cfc
void sub_401cfc()
{
 param_dynamic_code(10);
 return;
}


// Function: param_dynamic_code at 0x401d00
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 void* ptr; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 v3 = sysconf(30);
 ptr = mmap(NULL, v3, 7, 34, -1, 0);
 if (ptr != MAP_FAILED)
 {
 v1 = a0 + 5;
 munmap(ptr, v3);
 v4 = v1;
 return v4;
 }
 v4 = 4294967295;
 return v4;
}


// Function: sub_401daa at 0x401daa
void sub_401daa()
{
 param_memory_protection();
 return;
}


// Function: param_memory_protection at 0x401db0
unsigned int param_memory_protection()
{
 unsigned int v0; // [bp-0x20]
 unsigned int v1; // [bp-0x1c]
 unsigned int *ptr; // [bp-0x18]
 unsigned int *ptr2; // [bp-0x14]
 unsigned int v4; // [bp-0x10]
 unsigned int v5; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 v4 = sysconf(30);
 ptr = (unsigned int *)mmap(NULL, v4, 3, 34, -1, 0);
 if (ptr == (unsigned int *)MAP_FAILED)
 {
 v5 = 4294967295;
 return v5;
 }
 ptr2 = ptr;
 *(ptr) = 42;
 if (mprotect(ptr, v4, 1))
 {
 munmap(ptr, v4);
 v5 = 4294967294;
 return v5;
 }
 v1 = *(ptr);
 if (!mprotect(ptr, v4, 3))
 {
 *(ptr) = 100;
 munmap(ptr, v4);
 v5 = v1;
 return v5;
 }
 munmap(ptr, v4);
 v5 = 4294967293;
 return v5;
}


// Function: sub_401efc at 0x401efc
void sub_401efc(unsigned int a0, unsigned int a1)
{
 param_clobber_importance(a0, a1);
 return;
}


// Function: param_clobber_importance at 0x401f00
int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v0 = a0 + a1;
 v2 = v0;
 v1 = a0 + a1;
 return v2 + v1;
}


// Function: sub_401f3b at 0x401f3b
void sub_401f3b()
{
 call_asm_privileged();
 return;
}


// Function: call_asm_privileged at 0x401f40
unsigned int call_asm_privileged()
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 v3 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if (v3 == 15 && v2 == 42 && v1 == 20)
 {
 v4 = 77;
 return v4;
 }
 v4 = v3;
 return v4;
}


// Function: sub_401fc3 at 0x401fc3
void sub_401fc3()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401fd0
unsigned int param_memory_clobber_demo()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1; // [bp-0xc]
 unsigned int v2; // [bp-0x8]

 v2 = 50;
 v0 = v2 + global_var;
 v1 = v0;
 return v1;
}


// Function: sub_402007 at 0x402007
void sub_402007()
{
 test_asm_features();
 return;
}


// Function: test_asm_features at 0x402010
unsigned int test_asm_features()
{
 unsigned int v0; // [bp-0x18]
 char *v1; // [bp-0xc]

 v1 = (char *)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 printf("%s", g_403217);
 v0 = call_asm_basic();
 printf(v1 + 7614);
 v0 = call_asm_clobber();
 printf(v1 + 7586);
 v0 = call_asm_multi_insn();
 printf(v1 + 7558);
 v0 = call_asm_simd();
 printf(v1 + 7530);
 v0 = call_asm_atomic();
 printf(v1 + 7502);
 v0 = call_asm_privileged();
 return printf(v1 + 7474);
}


// Function: sub_4020e8 at 0x4020e8
void sub_4020e8()
{
 main();
 return;
}


// Function: main at 0x4020f0
int main()
{
 unsigned int v0; // [bp-0x10]
 unsigned int result; // [bp-0xc]

 v0 = (unsigned int)(uintptr_t)&_GLOBAL_OFFSET_TABLE_;
 result = 0;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


// Function: sub_402122 at 0x402122
void sub_402122()
{
 __do_global_ctors_aux();
 return;
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */

unsigned int __do_global_ctors_aux()
{
 struct_0 *v2; // edx
 struct_0 *ptr; // edx
 unsigned int *v4; // eax
 unsigned int v5; // ebx
 struct_0 *v6; // ebx
 struct_0 *p; // ebx
 unsigned int v0; // [bp-0x8]

 ptr = &v2;
 ptr = (struct_0 *)((char *)ptr + 247);
 v4 = *((unsigned int **)&ptr->padding_0[252]);
 if (v4 == (unsigned int *)0xffffffff)
 return 4294967295;
 v0 = v5;
 v6 = (struct_0 *)&ptr->padding_0[252];
 do
 {
 p = v6;
 {
 void (*func)(void) = (void (*)(void))(uintptr_t)v4;
 func();
 }
 {
 unsigned int **next_ptr_ptr = (unsigned int **)((char *)p + 4);
 v4 = *next_ptr_ptr;
 }
 v6 = (struct_0 *)((char *)p + 4);
 } while (v4 != (unsigned int *)0xffffffff);
 return 4294967295;
}


// Function: sub_402172 at 0x402172
void sub_402172()
{
}



/* CRT stub function _fini removed by preprocessor */


