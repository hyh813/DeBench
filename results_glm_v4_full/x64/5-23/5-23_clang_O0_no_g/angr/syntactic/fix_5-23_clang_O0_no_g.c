// Angr Decompilation of 5-23_clang_O0_no_g
// Platform: AMD64

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdint.h>
#include <stdlib.h>

/* Define int128_t for GCC/Clang on x86_64 */
typedef __int128 int128_t;

/* CRT stub function _init removed by preprocessor */
typedef struct { void *unused; } struct_0;

extern void *g_403fe8;

// Function declarations for CRT stubs
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);

// Helper function declarations
unsigned long long AddV(unsigned long long a, unsigned long long b);
unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val);

// Helper function definitions
unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}

unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val)
{
 unsigned int old = *ptr;
 *ptr += val;
 return old;
}

/* Forward declarations for functions used before definition */
unsigned int param_macro_constants(unsigned int a0);
int call_macro_constants(void);
int param_macro_functions(unsigned int a0, unsigned int a1);
int call_macro_functions(void);
int param_conditional_compile(unsigned long a0);
int call_conditional_compile(void);
int param_multi_branch_compile(unsigned long a0);
int call_multi_branch_compile(void);
int param_macro_recursion(unsigned long a0);
int call_macro_recursion(void);
long long param_stringize(unsigned long a0);
unsigned long long call_stringize(void);
unsigned int my_func(unsigned int a0);
unsigned int param_token_paste(unsigned long a0);
int call_token_paste(void);
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2);
int call_variadic_macro(void);
int param_macro_override(unsigned long a0);
int call_macro_override(void);
void param_include_guard(void);
unsigned int header_func(unsigned int a0);
unsigned int call_include_guard(void);
int param_builtin_macros(unsigned long a0);
int call_builtin_macros(void);
int test_preprocessing_features(void);
int param_asm_basic(unsigned int a0);
int call_asm_basic(void);
unsigned int param_asm_clobber(unsigned long *ptr, unsigned int a1);
int call_asm_clobber(void);
unsigned long long param_asm_multi_insn(char *a0, char *a1, unsigned long long a2);
unsigned long long call_asm_multi_insn(void);
unsigned long long param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr);
int call_asm_simd(void);
int param_asm_atomic(unsigned int *ptr, unsigned int a1);
int call_asm_atomic(void);
int param_atomic_c11(unsigned int *ptr, unsigned int a1);
unsigned int param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(void);
int param_clobber_importance(unsigned int a0, unsigned int a1);
int param_asm_privileged(void);
unsigned int call_asm_privileged(void);
unsigned int param_memory_clobber_demo(void);
unsigned int param_memory_clobber_demo(void);
unsigned long long param_simd_intrinsics(void* ptr, unsigned long long *p, unsigned long long *addr);
unsigned int test_asm_features(void);
int main(void);

/* Proper _init stub removed - conflicts with system _init */


// Function: sub_401020 at 0x401020
extern unsigned long long g_404008;
extern unsigned long long g_404010;

/* Define missing global variables */
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
 /* goto g_404010; - removed as jump to variable address is invalid */
}


// Function: sub_40102c at 0x40102c
long long sub_40102c()
{
 char *v1; // rdi

 v1 = "";
 return strlen(v1);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4010d5 at 0x4010d5
void sub_4010d5()
{
 /* Unsupported jumpkind Ijk_SigTRAP at address 4198613 */
}


// Function: sub_4010d6 at 0x4010d6
void sub_4010d6()
{
 deregister_tm_clones();
 return;
}



/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void)
{
}

// Function: sub_401109 at 0x401109
void sub_401109()
{
 register_tm_clones();
 return;
}



/* CRT stub function register_tm_clones */
void register_tm_clones(void)
{
}

// Function: sub_401149 at 0x401149
void sub_401149()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux */
void __do_global_dtors_aux(void)
{
}

// Function: sub_401185 at 0x401185
void sub_401185()
{
}


// Function: sub_401189 at 0x401189
void sub_401189()
{
 frame_dummy();
 return;
}



/* CRT stub function frame_dummy */
void frame_dummy(void)
{
}

// Function: sub_401199 at 0x401199
void sub_401199(unsigned long a0)
{
 param_macro_constants(a0);
 return;
}


// Function: param_macro_constants at 0x4011a0
unsigned int param_macro_constants(unsigned int a0)
{
 unsigned int v0; // [bp-0xc]

 v0 = (a0 <= 0x400 ? 0x200 : 64);
 return v0;
}


// Function: sub_4011cc at 0x4011cc
void sub_4011cc()
{
 call_macro_constants();
 return;
}


// Function: call_macro_constants at 0x4011d0
int call_macro_constants()
{
 return param_macro_constants(0x800);
}


// Function: param_macro_functions at 0x4011e0
int param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]

 v1 = a0 * a0;
 v0 = (a0 <= a1 ? a1 : a0);
 return v1 + v0;
}


// Function: sub_40121b at 0x40121b
void sub_40121b()
{
 call_macro_functions();
 return;
}


// Function: call_macro_functions at 0x401220
int call_macro_functions()
{
 return param_macro_functions(5, 3);
}


// Function: sub_401235 at 0x401235
void sub_401235(unsigned long a0)
{
 param_conditional_compile(0);
 return;
}


// Function: param_conditional_compile at 0x401240
int param_conditional_compile(unsigned long a0)
{
 unsigned long v0; // [bp-0x10]

 v0 = a0;
 v0 = v0 * 3 + 2;
 return v0;
}


// Function: sub_40125c at 0x40125c
void sub_40125c()
{
 call_conditional_compile();
 return;
}


// Function: call_conditional_compile at 0x401260
int call_conditional_compile()
{
 return param_conditional_compile(10);
}


// Function: param_multi_branch_compile at 0x401270
int param_multi_branch_compile(unsigned long a0)
{
 return a0 * 5 + 57072;
}


// Function: sub_401282 at 0x401282
void sub_401282()
{
 call_multi_branch_compile();
 return;
}


// Function: call_multi_branch_compile at 0x401290
int call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


// Function: param_macro_recursion at 0x4012a0
int param_macro_recursion(unsigned long a0)
{
 return a0 + 16;
}


// Function: sub_4012dc at 0x4012dc
void sub_4012dc()
{
 call_macro_recursion();
 return;
}


// Function: call_macro_recursion at 0x4012e0
int call_macro_recursion()
{
 return param_macro_recursion(100);
}


// Function: param_stringize at 0x4012f0
long long param_stringize(unsigned long a0)
{
 unsigned long len; // [bp-0x38]
 unsigned long long v1; // [bp-0x30]
 char *v2; // [bp-0x28]
 char *v3; // [bp-0x20]
 char *v4; // [bp-0x18]
 unsigned long v5; // [bp-0xc]

 v5 = a0;
 v4 = "Hello World";
 v3 = "1_2.3";
 v2 = "155";
 len = strlen(v4);
 v1 = len + strlen(v3);
 return v1 + strlen(v2);
}


// Function: sub_401359 at 0x401359
void sub_401359()
{
 call_stringize();
 return;
}


// Function: call_stringize at 0x401360
unsigned long long call_stringize()
{
 return param_stringize(0);
}


// Function: sub_40136d at 0x40136d
void sub_40136d(unsigned long a0)
{
 my_func(a0);
 return;
}


// Function: my_func at 0x401370
unsigned int my_func(unsigned int a0)
{
 return a0 * 10;
}


// Function: sub_40137d at 0x40137d
void sub_40137d(unsigned long a0)
{
 param_token_paste(0);
 return;
}


// Function: param_token_paste at 0x401380
unsigned int param_token_paste(unsigned long a0)
{
 unsigned long v0; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 v1 = my_func(a0);
 v0 = a0 + 5;
 v1 += v0;
 return v1;
}


// Function: sub_4013b1 at 0x4013b1
void sub_4013b1()
{
 call_token_paste();
 return;
}


// Function: call_token_paste at 0x4013c0
int call_token_paste()
{
 return param_token_paste(5);
}


// Function: param_variadic_macro at 0x4013d0
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 unsigned int v0; // [bp-0x18]

 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 v0 = 5;
 return v0 * 10 + a0;
}


// Function: sub_40140c at 0x40140c
void sub_40140c()
{
 call_variadic_macro();
 return;
}


// Function: call_variadic_macro at 0x401410
int call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


// Function: sub_40142a at 0x40142a
void sub_40142a(unsigned long a0)
{
 param_macro_override(0);
 return;
}


// Function: param_macro_override at 0x401430
int param_macro_override(unsigned long a0)
{
 unsigned long v0; // [bp-0x14]
 unsigned long v1; // [bp-0x10]

 v1 = a0 + 1;
 v0 = a0 * 2;
 return v1 + v0;
}


// Function: sub_401451 at 0x401451
void sub_401451()
{
 call_macro_override();
 return;
}


// Function: call_macro_override at 0x401460
int call_macro_override()
{
 return param_macro_override(5);
}


// Function: param_include_guard at 0x401470
void param_include_guard()
{
 header_func(5);
 return;
}


// Function: header_func at 0x401480
unsigned int header_func(unsigned int a0)
{
 return a0 * 100;
}


// Function: sub_40148d at 0x40148d
void sub_40148d()
{
 call_include_guard();
 return;
}


// Function: call_include_guard at 0x401490
unsigned int call_include_guard()
{
 param_include_guard();
 return 500;
}


// Function: sub_40149b at 0x40149b
void sub_40149b(unsigned long a0)
{
 param_builtin_macros(0);
 return;
;
}


// Function: param_builtin_macros at 0x4014a0
int param_builtin_macros(unsigned long a0)
{
 unsigned int v0; // [bp-0x44]
 unsigned int flag1; // [bp-0x40]
 unsigned int result; // [bp-0x3c]
 const char *v3; // [bp-0x38]
 const char *v4; // [bp-0x30]
 const char *v5; // [bp-0x28]
 unsigned int v6; // [bp-0x1c]
 const char *v7; // [bp-0x18]

 v7 = "src/5-23.c";
 v6 = 279;
 v5 = "param_builtin_macros";
 v4 = "Jan 15 2026";
 v3 = "03:00:44";
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", v7, v5, v6, v4, v3);
 result = 0;
 flag1 = 1;
 v0 = 2;
 return a0 + v6 + result + flag1 + v0;
}


// Function: sub_401529 at 0x401529
void sub_401529()
{
 call_builtin_macros();
 return;
}


// Function: call_builtin_macros at 0x401530
int call_builtin_macros()
{
 return param_builtin_macros(100);
}


// Function: test_preprocessing_features at 0x401540
/* String constants for test output */
static const char g_402095[] = "Testing macro constants: %u\n";
static const char g_4020bd[] = "  Result: %u\n";
static const char g_4020d8[] = "Testing macro functions: %u\n";
static const char g_4020f3[] = "Testing conditional compile: %u\n";
static const char g_40210e[] = "Testing multi-branch compile: %u\n";
static const char g_40212d[] = "Testing macro recursion: %u\n";
static const char g_402149[] = "Testing stringize: %llu\n";
static const char g_402173[] = "Testing token paste: %u\n";
static const char g_40218e[] = "Testing variadic macro: %u\n";
static const char g_4021a9[] = "Testing macro override: %u\n";
static const char g_4021c4[] = "Testing include guard: %llu\n";
static const char g_4021e0[] = "Testing builtin macros: %u\n";

int test_preprocessing_features()
{
 printf(&g_402095);
 printf(&g_4020bd, call_macro_constants() & 4294967295);
 printf(&g_4020d8, call_macro_functions() & 4294967295);
 printf(&g_4020f3, call_conditional_compile() & 4294967295);
 printf(&g_40210e, call_multi_branch_compile() & 4294967295);
 printf(&g_40212d, call_macro_recursion() & 4294967295);
 printf(&g_402149, call_stringize() & 4294967295);
 printf(&g_402173, call_token_paste() & 4294967295);
 printf(&g_40218e, call_variadic_macro() & 4294967295);
 printf(&g_4021a9, call_macro_override() & 4294967295);
 printf(&g_4021c4, (unsigned long long)call_include_guard() & 4294967295);
 return printf(&g_4021e0, call_builtin_macros() & 4294967295);
}


// Function: sub_40163b at 0x40163b
void sub_40163b(unsigned long a0)
{
 param_asm_basic(0);
 return;
}


// Function: param_asm_basic at 0x401640
int param_asm_basic(unsigned int a0)
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]

 v0 = a0 + 10;
 v1 = v0;
 return v1;
}


// Function: sub_40165f at 0x40165f
void sub_40165f()
{
 call_asm_basic();
 return;
}


// Function: call_asm_basic at 0x401660
int call_asm_basic()
{
 return param_asm_basic(5);
}


// Function: param_asm_clobber at 0x401670
unsigned int param_asm_clobber(unsigned long *ptr, unsigned int a1)
{
 unsigned int v3; // eax
 unsigned long long idx; // rcx
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]

 v1 = 0;
 v3 = 0;
 for (idx = 0; (unsigned int)idx < a1; idx = (unsigned int)idx + 1)
 {
 v3 += *((int *)(ptr + idx * 4));
 }
 v0 = v3;
 v1 = v0;
 return v1;
}


// Function: sub_4016af at 0x4016af
void sub_4016af()
{
 call_asm_clobber();
 return;
}


// Function: call_asm_clobber at 0x4016b0
int call_asm_clobber()
{
 unsigned long v0; // [bp-0x28]
 unsigned long long v1; // [bp-0x20]
 unsigned int v2; // [bp-0x18]

 v0 = 8589934593;
 v1 = 17179869187;
 v2 = 5;
 return param_asm_clobber(&v0, 5);
}


// Function: sub_4016eb at 0x4016eb
void sub_4016eb(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_asm_multi_insn(0, 0, 0);
 return;
}


// Function: param_asm_multi_insn at 0x4016f0
unsigned long long param_asm_multi_insn(char *a0, char *a1, unsigned long long a2)
{
 char *cur; // rdx
 char *v3; // rcx
 unsigned long long i; // rsi
 unsigned long long result; // [bp-0x28]

 cur = a0;
 v3 = a1;
 for (i = a2; i; i -= 1)
 {
 *(cur) = *(v3);
 cur += 1;
 v3 += 1;
 }
 result = 0;
 return result;
}


// Function: sub_40173f at 0x40173f
void sub_40173f()
{
 call_asm_multi_insn();
 return;
}


// Function: call_asm_multi_insn at 0x401740
unsigned long long call_asm_multi_insn()
{
 char v0; // [bp-0x39]
 char v1; // [bp-0x38]
 char v2; // [bp-0x34]
 char v3[10]; // [bp-0x12]

 strncpy(v3, "Hello ASM", 9);
 memset(&v1, 0, 32);
 param_asm_multi_insn(&v1, &v3, 9);
 v0 = 0;
 if (v1 == 72)
 v0 = v2 == 111;
 return ((v0 & 1) ? 42 : 4294967295);
}


// Function: sub_4017b8 at 0x4017b8
void sub_4017b8(unsigned long a0, unsigned long a1, unsigned long a2)
{
 unsigned long long dummy1 = 0, dummy2 = 0, dummy3 = 0;
 param_asm_simd(&dummy1, &dummy2, &dummy3);
 return;
}


// Function: param_asm_simd at 0x4017c0
unsigned long long param_asm_simd(unsigned long long *a0, unsigned long long *a1, unsigned long long *ptr)
{
 *(ptr) = AddV(*(a0), *(a1));
 return 0;
}


// Function: sub_4017ed at 0x4017ed
void sub_4017ed(unsigned long a0, unsigned long a1, unsigned long a2)
{
 param_simd_intrinsics(0, 0, 0);
 return;
}


// Function: param_simd_intrinsics at 0x4017f0
unsigned long long param_simd_intrinsics(void* ptr, unsigned long long *p, unsigned long long *addr)
{
 unsigned long long v0; // [bp-0xa8]
 int v1; // [bp-0x98]
 int v2; // [bp-0x88]
 int v3; // [bp-0x48]
 char v4; // [bp-0x38]
 unsigned long long v5; // [bp-0x28]

 *((int128_t *)&v2) = *((int128_t *)ptr);
 *((unsigned long long *)&v1) = *(p);
 memcpy(&v4, &v2, 16);
 v3 = v1;
 v0 = AddV(*(unsigned long long *)&v4, (unsigned long long)v3);
 v5 = v0;
 *(addr) = v5;
 return 0;
}


// Function: sub_401888 at 0x401888
void sub_401888()
{
 call_asm_simd();
 return;
}


// Function: call_asm_simd at 0x401890
int call_asm_simd()
{
 unsigned long long v0; // [bp-0x38], Other Possible Types: unsigned int
 unsigned int v1; // [bp-0x34]
 unsigned int v2; // [bp-0x30]
 unsigned int v3; // [bp-0x2c]
 unsigned long long v4; // [bp-0x28]
 unsigned long long v5; // [bp-0x20]
 unsigned long v6; // [bp-0x18]
 unsigned long long v7; // [bp-0x10]

 v6 = 8589934593;
 v7 = 17179869187;
 v4 = 25769803781;
 v5 = 34359738375;
 param_asm_simd(&v6, &v4, &v0);
 return v0 + v1 + v2 + v3;
}


// Function: sub_4018e7 at 0x4018e7
void sub_4018e7(unsigned long a0, unsigned long a1)
{
 param_asm_atomic(0, 0);
 return;
}


// Function: param_asm_atomic at 0x4018f0
int param_asm_atomic(unsigned int *ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x18]

 atomic_exchange_add(ptr, a1);
 v0 = *(ptr);
 return v0 + a1;
}


// Function: sub_401911 at 0x401911
void sub_401911(unsigned long a0, unsigned long a1)
{
 param_atomic_c11(0, 0);
 return;
}


// Function: param_atomic_c11 at 0x401920
int param_atomic_c11(unsigned int *ptr, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]

 atomic_exchange_add(ptr, a1);
 v0 = *(ptr);
 return v0 + a1;
}


// Function: sub_401947 at 0x401947
void sub_401947()
{
 call_asm_atomic();
 return;
}


// Function: call_asm_atomic at 0x401950
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x10]
 unsigned int v1[1]; // [bp-0xc]

 v1[0] = 10;
 v0 = param_asm_atomic(&v1[0], 5);
 return v1[0] + v0;
}


// Function: sub_40197c at 0x40197c
void sub_40197c(unsigned long a0)
{
 param_dynamic_code(a0);
 return;
}


// Function: param_dynamic_code at 0x401980
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned int v0; // [bp-0x34]
 void* v1; // [bp-0x30]
 unsigned int v2; // [bp-0x26]
 unsigned short v3; // [bp-0x22]
 void* ptr; // [bp-0x20]
 unsigned long v5; // [bp-0x18]
 unsigned int v6; // [bp-0xc]
 unsigned int (*func_ptr)(unsigned int); // Function pointer

 v5 = sysconf(_SC_PAGESIZE);
 ptr = mmap(NULL, v5, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr != (void*)-1)
 {
 v2 = 3229874313;
 v3 = 49925;
 *((unsigned int *)ptr) = v2;
 *((unsigned short *)((char*)ptr + 4)) = v3;
 func_ptr = (unsigned int (*)(unsigned int))ptr;
 v0 = func_ptr(a0);
 munmap(ptr, v5);
 v6 = v0;
 return v6;
 }
 v6 = 4294967295;
 return v6;
}


// Function: param_memory_protection at 0x401a30
unsigned int param_memory_protection()
{
 unsigned int v0; // [bp-0x2c]
 void *ptr; // [bp-0x28]
 unsigned int *ptr2; // [bp-0x20]
 unsigned long v3; // [bp-0x18]
 unsigned int v4; // [bp-0xc]

 v3 = sysconf(_SC_PAGESIZE);
 ptr = mmap(NULL, v3, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr == NULL)
 {
 v4 = 4294967295;
 return v4;
 }
 ptr2 = (unsigned int *)ptr;
 *(ptr2) = 42;
 if (mprotect(ptr, v3, PROT_READ))
 {
 munmap(ptr, v3);
 v4 = 4294967294;
 return v4;
 }
 v0 = *(ptr2);
 if (!mprotect(ptr, v3, PROT_READ | PROT_WRITE))
 {
 *(ptr2) = 100;
 munmap(ptr, v3);
 v4 = v0;
 return v4;
 }
 munmap(ptr, v3);
 v4 = 4294967293;
 return v4;
}


// Function: sub_401b31 at 0x401b31
void sub_401b31(unsigned long a0, unsigned long a1)
{
 param_clobber_importance(a0, a1);
 return;
}


// Function: param_clobber_importance at 0x401b40
int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // [bp-0x1c]
 unsigned int v1; // [bp-0x18]
 unsigned int v2; // [bp-0x14]

 v0 = a0 + a1;
 v2 = v0;
 v1 = a0 + a1;
 return v2 + v1;
}


// Function: sub_401b76 at 0x401b76
void sub_401b76()
{
 call_asm_privileged();
 return;
}

// Function: param_asm_privileged at 0x401b90
int param_asm_privileged()
{
    return 0;
}


// Function: call_asm_privileged at 0x401b80
unsigned int call_asm_privileged()
{
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]

 v2 = param_dynamic_code(10);
 v1 = param_memory_protection();
 v0 = param_clobber_importance(3, 7);
 if (v2 == 15 && v1 == 42 && v0 == 20)
 {
 v3 = 77;
 return v3;
 }
 v3 = v2;
 return v3;
}


// Function: sub_401be8 at 0x401be8
void sub_401be8()
{
 param_memory_clobber_demo();
 return;
}


// Function: param_memory_clobber_demo at 0x401bf0
unsigned int global_var = 10;

unsigned int param_memory_clobber_demo()
{
 unsigned int v0; // [bp-0x14]
 unsigned int v1; // [bp-0x10]
 unsigned int v2; // [bp-0xc]

 v2 = 50;
 v0 = v2 + global_var;
 v1 = v0;
 return v1;
}


// Function: sub_401c16 at 0x401c16
void sub_401c16()
{
 test_asm_features();
 return;
}


// Function: test_asm_features at 0x401c20
/* String constants for ASM test output */
static const char g_402213[] = "Testing ASM basic: %u\n";
static const char g_40223e[] = "Testing ASM clobber: %u\n";
static const char g_40225a[] = "Testing ASM multi insn: %llu\n";
static const char g_402276[] = "Testing ASM SIMD: %llu\n";
static const char g_402292[] = "Testing ASM atomic: %u\n";
static const char g_4022ae[] = "Testing ASM privileged: %u\n";
static const char g_4022ca[] = "All ASM tests passed!\n";

unsigned int test_asm_features()
{
 printf(&g_402213);
 printf(&g_40223e, call_asm_basic() & 4294967295);
 printf(&g_40225a, call_asm_clobber() & 4294967295);
 printf(&g_402276, call_asm_multi_insn() & 4294967295);
 printf(&g_402292, call_asm_simd() & 4294967295);
 printf(&g_4022ae, call_asm_atomic() & 4294967295);
 return printf(&g_4022ca, call_asm_privileged() & 4294967295);
}


// Function: sub_401cb2 at 0x401cb2
void sub_401cb2()
{
 main();
 return;
}


// Function: main at 0x401cc0
int main()
{
 unsigned int result; // [bp-0xc]

 result = 0;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


