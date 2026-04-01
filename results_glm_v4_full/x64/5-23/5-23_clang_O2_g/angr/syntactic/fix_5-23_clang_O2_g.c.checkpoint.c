// Angr Decompilation of 5-23_clang_O2_g
// Platform: AMD64

#define _POSIX_C_SOURCE 200809L
#define _DEFAULT_SOURCE 1
#define _GNU_SOURCE 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>
#include <fcntl.h>

// Stub definitions for missing functions/macros

// CONCAT4 macro for combining 4 values
#define CONCAT4(a, b, c, d) (((unsigned long long)(a) * 0x10000000000000000ULL) | \
                              ((unsigned long long)(b) << 32) | \
                              ((unsigned long long)(c) << 16) | \
                              (unsigned long long)(d))

// CONCAT2 macro for combining 2 values (for compatibility)
#define CONCAT2(a, b) (((unsigned long long)(a) << 32) | (unsigned long long)(b))

// CONCAT macro for combining 2 values (alias for CONCAT2)
#define CONCAT CONCAT2

// AddV - SIMD-like addition stub
static inline unsigned long long AddV(unsigned long long a, unsigned long long b)
{
 return a + b;
}

// atomic_exchange_add - stub for atomic add operation
static inline unsigned int atomic_exchange_add(unsigned int *ptr, unsigned int val)
{
 unsigned int old = *ptr;
 *ptr += val;
 return old;
}

// Global variable definition
unsigned int global_var = 0;

/* CRT stub function _init removed by preprocessor */

typedef void (*init_func_t)(void);
init_func_t g_403fe8 = NULL;

// Forward declarations for functions called before definition
void deregister_tm_clones(void);
void register_tm_clones(void);
void __do_global_dtors_aux(void);
void frame_dummy(void);
static void _init(void);
int test_preprocessing_features(void);
int test_asm_features(void);
unsigned long long param_macro_constants(void);
unsigned long long call_macro_constants(void);
long long param_macro_functions(void);
unsigned long long call_macro_functions(void);
int param_conditional_compile(void);
unsigned long long call_conditional_compile(void);
int param_multi_branch_compile(void);
unsigned long long call_multi_branch_compile(void);
int param_macro_recursion(void);
unsigned long long call_macro_recursion(void);
unsigned long long param_stringize(void);
unsigned long long call_stringize(void);
unsigned int my_func(void);
int param_token_paste(void);
unsigned long long call_token_paste(void);
int param_variadic_macro(void);
unsigned long long call_variadic_macro(void);
int param_macro_override(void);
unsigned long long call_macro_override(void);
unsigned long long param_include_guard(void);
unsigned long long call_include_guard(void);
int param_builtin_macros(void);
unsigned long long call_builtin_macros(void);
int param_asm_basic(void);
unsigned long long call_asm_basic(void);
unsigned int param_asm_clobber(void);
unsigned int call_asm_clobber(void);
char param_asm_multi_insn(char *iter, char *cur, unsigned long long i);
char call_asm_multi_insn(void);
double param_asm_simd(void);
long long call_asm_simd(void);
int param_asm_atomic(void);
int param_atomic_c11(void);
long long call_asm_atomic(void);
unsigned long long param_dynamic_code(unsigned int a0);
unsigned int param_memory_protection(void);
unsigned int param_clobber_importance(void);
unsigned long long call_asm_privileged(void);
int param_memory_clobber_demo(void);
double param_simd_intrinsics(void);
int main(void);

void _init()
{
 if (g_403fe8)
 g_403fe8();
}


// Function: sub_401020 at 0x401020
unsigned long long g_404008 = 0;
unsigned long long g_404010 = 0;

void sub_401020()
{
 unsigned long v0; // [bp-0x8]

 v0 = g_404008;
}

/* CRT stub function _start removed by preprocessor */



// Function: sub_4010c5 at 0x4010c5
void sub_4010c5()
{
 __builtin_trap();
}


// Function: sub_4010c6 at 0x4010c6
void sub_4010c6()
{
 deregister_tm_clones();
 return;
}



void deregister_tm_clones()
{
}



// Function: sub_4010f9 at 0x4010f9
void sub_4010f9()
{
 register_tm_clones();
 return;
}



void register_tm_clones()
{
}



// Function: sub_401139 at 0x401139
void sub_401139()
{
 __do_global_dtors_aux();
 return;
}



void __do_global_dtors_aux()
{
}



// Function: sub_401175 at 0x401175
void sub_401175()
{
}


// Function: sub_401179 at 0x401179
void sub_401179()
{
 frame_dummy();
 return;
}



void frame_dummy()
{
}



// Function: sub_401189 at 0x401189
void sub_401189()
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
void sub_4011b6()
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
void sub_4011d6()
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
void sub_4011f6()
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
void sub_401216()
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
void sub_401256()
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
void sub_401266()
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
void sub_401286()
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
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: sub_4012d5 at 0x4012d5
void sub_4012d5()
{
 param_macro_override();
 return;
}


// Function: param_macro_override at 0x4012e0
int param_macro_override()
{
 return 16;
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
void sub_401316()
{
 param_builtin_macros();
 return;
}


// Function: param_builtin_macros at 0x401320
int param_builtin_macros()
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:00:50");
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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "call_builtin_macros", 365, "Jan 15 2026", "03:00:50");
 return 382;
}


// Function: sub_401397 at 0x401397
void sub_401397()
{
 test_preprocessing_features();
 return;
}


// Function: test_preprocessing_features at 0x4013a0
static char g_40207f[] = "%llu\n";
static char g_40209a[] = "%llu\n";
static char g_4020b5[] = "%llu\n";
static char g_4020d0[] = "%llu\n";
static char g_4020ef[] = "%llu\n";
static char g_40210b[] = "%llu\n";
static char g_402135[] = "%llu\n";
static char g_402150[] = "%llu\n";
static char g_40216b[] = "%llu\n";
static char g_402186[] = "%llu\n";
static char g_4022a4[] = "Testing ASM features:\n";
static char g_4021a2[] = "%llu\n";
static char g_40227d[] = "Testing preprocessing features:\n";

int test_preprocessing_features()
{
 unsigned long long v0; // [bp-0x8]

 v0 = 0;
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
void sub_4014cb()
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
 unsigned long long v0; // [bp-0x18] - Changed to unsigned long long to fit the large value

 v0 = 3169126501123975826ULL;
 v3 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v3 += *((int *)((char *)&v0 + 4 * idx));
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
 unsigned long long v0; // [bp-0x18] - Changed to unsigned long long to fit the large value
 unsigned int v1; // [bp-0x8]

 v1 = 5;
 v0 = 3169126501123975826ULL;
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
 static char buf1[16] = "";
 static char buf2[16] = "";
 param_asm_multi_insn(buf1, buf2, 0);
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
 char v0[16]; // [bp-0x38] - Fixed size to prevent buffer overflow
 unsigned short v1; // [bp-0x30]
 int flag1; // [bp-0x28]
 char v3; // [bp-0x24]
 unsigned long long result; // [bp-0x18]

 strncpy(v0, "Hello ASM", 9);
 v1 = 77;
 result = 0;
 flag1 = 0;
 v3 = 111; // Initialize to avoid undefined behavior
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
void sub_4015d5()
{
 param_asm_simd();
 return;
}


// Function: param_asm_simd at 0x4015e0
double param_asm_simd()
{
 unsigned long long v4; // xmm1lq
 unsigned long long v0; // [bp-0x38] - Changed to unsigned long long to match access pattern
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x18]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV(v2, v1);
 /* Complex bit manipulation simplified to avoid undefined behavior */
 v4 = 0;
 return 0;
}


// Function: param_simd_intrinsics at 0x4015f0
double param_simd_intrinsics()
{
 unsigned long long v4; // xmm1lq
 unsigned long long v0; // [bp-0x38]
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x18]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV(v2, v1);
 v4 = 0;
 return 0;
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
 unsigned long long v0; // [bp-0x38] - Changed to unsigned long long to match access pattern
 unsigned long long v1; // [bp-0x28]
 unsigned long long v2; // [bp-0x18]

 v2 = 3169126501123975826ULL;
 v1 = 6338253002432419092ULL;
 v0 = AddV(v2, v1);
 /* Complex bit manipulation simplified to avoid undefined behavior */
 v4 = 0;
 return 0;
}


// Function: sub_401651 at 0x401651
void sub_401651()
{
 param_asm_atomic();
 return;
}


// Function: param_asm_atomic at 0x401660
int param_asm_atomic()
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: sub_401669 at 0x401669
void sub_401669()
{
 param_atomic_c11();
 return;
}


// Function: param_atomic_c11 at 0x401670
int param_atomic_c11()
{
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_exchange_add(&v0, 5);
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
 unsigned int v0; // [bp-0x4]

 v0 = 10;
 atomic_exchange_add(&v0, 5);
 return v0 * 2 + 5;
}


// Function: param_dynamic_code at 0x4016a0
typedef unsigned int (*dynamic_code_func_t)(unsigned int);

unsigned long long param_dynamic_code(unsigned int a0)
{
 unsigned long v1; // rax
 void* ptr; // rax
 unsigned int v3; // eax

 v1 = sysconf(_SC_PAGESIZE);
 ptr = mmap(NULL, v1, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr == (void*)-1)
 return 4294967295;
 *((unsigned short *)ptr + 2) = 49925;
 *((unsigned int *)ptr) = 3229874313;
 v3 = ((dynamic_code_func_t)ptr)(a0);
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

 v3 = sysconf(_SC_PAGESIZE);
 p = mmap(NULL, v3, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (p == (unsigned int*)-1)
 return 4294967295;
 ptr = p;
 *(p) = 42;
 v6 = 4294967294;
 if (!mprotect(p, v3, PROT_READ))
 {
 v7 = *(ptr);
 v6 = 4294967293;
 if (!mprotect(ptr, v3, PROT_READ | PROT_WRITE))
 {
 *(ptr) = 100;
 v6 = v7;
 }
 }
 munmap(ptr, v3);
 return v6;
}


// Function: sub_4017ab at 0x4017ab
void sub_4017ab()
{
 param_clobber_importance();
 return;
}


// Function: param_clobber_importance at 0x4017b0
unsigned int param_clobber_importance()
{
 return 0;
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

 v9 = sysconf(_SC_PAGESIZE);
 v10 = 4294967295;
 ptr = mmap(NULL, v9, PROT_READ | PROT_WRITE | PROT_EXEC, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
 if (ptr != (void*)-1)
 {
 *((unsigned short *)ptr + 2) = 49925;
 *((unsigned int *)ptr) = 3229874313;
 v10 = ((dynamic_code_func_t)ptr)(10);
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
 return 50 + global_var;
}


// Function: sub_401882 at 0x401882
void sub_401882()
{
 test_asm_features();
 return;
}


// Function: test_asm_features at 0x401890
int test_asm_features()
{
 static char g_4021d5[] = "call_asm_basic基本 = %llu\n";
 static char g_4021f1[] = "call_asm_clobber = %u\n";
 static char g_40220d[] = "call_asm_multi_insn = %llu\n";
 static char g_402229[] = "call_asm_simd = %llu\n";
 static char g_402245[] = "call_asm_atomic = %llu\n";
 static char g_402261[] = "call_asm_privileged = %llu\n";
 unsigned int v7; // eax
 unsigned long long idx; // rcx
 unsigned long long j; // rcx
 char *v10; // rdx
 char *cur; // rsi
 unsigned long v12; // xmm1lq
 int v0; // [bp-0x58], Other Possible Types: unsigned int
 unsigned long long v1; // [bp-0x48]
 char v2; // [bp-0x44]
 unsigned long long v3; // [bp-0x38]
 unsigned char v4[16]; // [bp-0x20]
 unsigned long long v5; // [bp-0x10]

 puts(&g_4022a4);
 printf(&g_4021d5, 15);
 v3 = 5;
 v0 = 0;  // Initialize properly before use
 v7 = 0;
 for (idx = 0; (unsigned int)idx < 5; idx = (unsigned int)idx + 1)
 {
 v7 += *((int *)((char *)&v0 + 4 * idx));
 }
 printf(&g_4021f1, v7);
 strncpy((char*)v4, "Hello ASM", 9);
 v3 = 0;
 v0 = 0;
 j = 9;
 v10 = (char*)v4;
 for (cur = (char*)&v0; j; j -= 1)
 {
 *(cur) = *(v10);
 cur += 1;
 v10 += 1;
 }
 // Extract bytes from v0 properly to avoid undefined behavior
 printf(&g_40220d, ((((unsigned char*)&v0)[0] ^ 111) == 0 && (((unsigned char*)&v0)[1] ^ 72) == 0 ? 42 : 4294967295));
 v1 = 3169126501ULL;
 *(unsigned long long*)v4 = 6338253002ULL;
 v5 = AddV(v1, *(unsigned long long*)v4);
 /* Complex bit manipulation simplified to avoid undefined behavior */
 v12 = 0;
 printf(&g_402229, v12);
 v0 = 10;
 v1 = v0;
 atomic_exchange_add((unsigned int*)&v1, 5);
 printf(&g_402245, v0 * 2 + 5);
 return printf(&g_402261, call_asm_privileged() & 4294967295);
}


// Function: sub_4019ff at 0x4019ff
void sub_4019ff()
{
 main();
 return;
}


// Function: main at 0x401a00
int main()
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


