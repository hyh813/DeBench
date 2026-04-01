/* Standard library headers for needed types and functions */
#include <stddef.h>
#include <stdint.h>
#include <stdatomic.h>
#include <sys/types.h>

/* Atomic type - using stdatomic.h built-in type */
typedef atomic_uint atomic_uint_t;

/* External function declarations */
int printf(const char *restrict format, ...);
int puts(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t len);
long sysconf(int name);
int mprotect(void *addr, size_t len, int prot);

/* __getauxval - Linux syscall helper for getting auxiliary vectors */
/* Using weak definition that can be overridden by libc if available */
__attribute__((weak)) unsigned long __getauxval(unsigned long type)
{
    /* Default to 0 - will be overridden by libc implementation if available */
    (void)type;
    return 0;
}

/* Weak implementation of call_weak_fn - returns 0 if not overridden */
__attribute__((weak)) long long call_weak_fn(void)
{
    return 0;
}

/* JUMPOUT - IDA Pro macro for indirect jump */
#define JUMPOUT(addr) ((void(*)(void))(*(void**)(addr))())

/* Global variable for LSE atomics detection */
int _aarch64_have_lse_atomics = 0;

/* Global variable for memory clobber demo */
int global_var = 0;

/* Forward declaration for atomic function */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint_t *a2);

/* ARM64 atomic intrinsics implementation - must be before _aarch64_ldadd4_acq_rel */
static inline long long __ldaxr_impl(unsigned int *ptr) {
    long long result;
    __asm__ __volatile__("ldaxr %0, [%1]" : "=r"(result) : "r"(ptr) : "memory");
    return result;
}

static inline int __stlxr_impl(unsigned int val, unsigned int *ptr) {
    int result;
    __asm__ __volatile__("stlxr %w0, %1, [%2]" : "=r"(result) : "r"(val), "r"(ptr) : "memory");
    return result;
}

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_clang_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x780 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_7A0 @ 0x7A0 - placeholder for jump table */
void sub_7A0()
{
 /* Empty function - placeholder from decompilation */
}


/* Function: init_have_lse_atomics @ 0x880 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)__getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start - uses default CRT implementation */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: param_macro_constants @ 0x9D4 */
int param_macro_constants(int size)
{
 if ( size <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0x9E8 */
int call_macro_constants()
{
 return 64;
}


/* Function: param_macro_functions @ 0x9F0 */
int param_macro_functions(int x, int y)
{
 int v2; // w8

 if ( x <= y )
 v2 = y;
 else
 v2 = x;
 return v2 + x * x;
}


/* Function: call_macro_functions @ 0xA00 */
int call_macro_functions()
{
 return 30;
}


/* Function: param_conditional_compile @ 0xA08 */
int param_conditional_compile(int x)
{
 return 3 * x + 2;
}


/* Function: call_conditional_compile @ 0xA14 */
int call_conditional_compile()
{
 return 32;
}


/* Function: param_multi_branch_compile @ 0xA1C */
int param_multi_branch_compile(int x)
{
 return 5 * x + 57072;
}


/* Function: call_multi_branch_compile @ 0xA2C */
int call_multi_branch_compile()
{
 return 57122;
}


/* Function: param_macro_recursion @ 0xA34 */
int param_macro_recursion(int x)
{
 return x + 16;
}


/* Function: call_macro_recursion @ 0xA3C */
int call_macro_recursion()
{
 return 116;
}


/* Function: param_stringize @ 0xA44 */
long long param_stringize(int value)
{
 return 19;
}


/* Function: call_stringize @ 0xA4C */
int call_stringize()
{
 return 19;
}


/* Function: my_func @ 0xA54 */
int my_func(int x)
{
 return 10 * x;
}


/* Function: param_token_paste @ 0xA60 */
int param_token_paste(int x)
{
 return 11 * x + 5;
}


/* Function: call_token_paste @ 0xA70 */
int call_token_paste()
{
 return 60;
}


/* Function: param_variadic_macro @ 0xA78 */
int param_variadic_macro(int x, int y, int z)
{
 printf("LOG: Values: %d, %d, %d\n", x, y, z);
 return x + 50;
}


/* Function: call_variadic_macro @ 0xAB0 */
int call_variadic_macro()
{
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


/* Function: param_macro_override @ 0xADC */
int param_macro_override(int x)
{
 return 3 * x + 1;
}


/* Function: call_macro_override @ 0xAE8 */
int call_macro_override()
{
 return 16;
}


/* Function: param_include_guard @ 0xAF0 */
int param_include_guard()
{
 return 500;
}


/* Function: call_include_guard @ 0xAF8 */
int call_include_guard()
{
 return 500;
}


/* Function: param_builtin_macros @ 0xB00 */
int param_builtin_macros(int x)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:47");
 return x + 282;
}


/* Function: call_builtin_macros @ 0xB50 */
int call_builtin_macros()
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:47");
 return 382;
}


/* String constants */
const char asc_12E7[] = "Testing Preprocessing Features:\n";
const char asc_130E[] = "Testing ASM Features:\n";
const char aAsmL401D[] = "call_asm_basic: %d\n";
const char aAsmL402D[] = "call_asm_clobber: %d\n";
const char aAsmL403D[] = "call_asm_multi_insn: %d\n";
const char aAsmL404D[] = "call_asm_simd: %d\n";
const char aAsmL405D[] = "call_asm_atomic: %d\n";
const char aAsmL406D[] = "call_asm_privileged: %d\n";
const char aPpL201D[] = "call_macro_constants: %d\n";
const char aPpL202D[] = "call_macro_functions: %d\n";
const char aPpL203D[] = "call_conditional_compile: %d\n";
const char aPpL204D[] = "call_multi_branch_compile: %d\n";
const char aPpL301D[] = "call_macro_recursion: %d\n";
const char aPpL302D[] = "call_stringize: %d\n";
const char aPpL303D[] = "call_token_paste: %d\n";
const char aPpL304D[] = "call_macro_override: %d\n";
const char aPpL305D[] = "call_macro_override: %d\n";
const char aPpL306D[] = "call_include_guard: %d\n";
const char aPpL307D[] = "call_builtin_macros: %d\n";

/* Function: test_preprocessing_features @ 0xB94 */
void test_preprocessing_features()
{
 puts(asc_12E7);
 printf(aPpL201D, 64);
 printf(aPpL202D, 30);
 printf(aPpL203D, 32);
 printf(aPpL204D, 57122);
 printf(aPpL301D, 116);
 printf(aPpL302D, 19);
 printf(aPpL303D, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(aPpL304D, 60);
 printf(aPpL305D, 16);
 printf(aPpL306D, 500);
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:47");
 printf(aPpL307D, 382);
}


/* Function: param_asm_basic @ 0xCA4 */
int param_asm_basic(int x)
{
 return x + 10;
}


/* Function: call_asm_basic @ 0xCAC */
int call_asm_basic()
{
 return 15;
}


/* Function: param_asm_clobber @ 0xCB4 */
int param_asm_clobber(int *arr, int n)
{
 int result; // w0
 long long v4; // x9
 int v5; // t1

 if ( n < 1 )
 return 0;
 result = 0;
 v4 = (unsigned int)n;
 do
 {
 v5 = *arr++;
 --v4;
 result += v5;
 }
 while ( v4 );
 return result;
}


/* Function: call_asm_clobber @ 0xCE4 */
int call_asm_clobber()
{
 return 15;
}


/* Function: param_asm_multi_insn @ 0xCEC */
void param_asm_multi_insn(void *dst, const void *src, size_t n)
{
 memcpy(dst, src, n);
}


/* Function: call_asm_multi_insn @ 0xCF0 */
int call_asm_multi_insn()
{
 return 42;
}


/* Function: param_asm_simd @ 0xCF8 */
int param_asm_simd(int *a, int *b, int *result)
{
 long long i; // x8

 for ( i = 0; i != 4; ++i )
 result[i] = b[i] + a[i];
 return 0;
}


/* Function: param_simd_intrinsics @ 0xD20 */
int param_simd_intrinsics(int *a, int *b, int *result)
{
 long long i; // x8

 for ( i = 0; i != 4; ++i )
 result[i] = b[i] + a[i];
 return 0;
}


/* Function: call_asm_simd @ 0xD48 */
int call_asm_simd()
{
 return 36;
}


/* Function: param_asm_atomic @ 0xD50 */
int param_asm_atomic(atomic_uint *counter, unsigned int increment)
{
 return _aarch64_ldadd4_acq_rel(increment, counter) + increment;
}


/* Function: param_atomic_c11 @ 0xD7C */
int param_atomic_c11(int *counter, int increment)
{
 atomic_uint atomic_counter;
 atomic_init(&atomic_counter, *counter);
 return _aarch64_ldadd4_acq_rel((unsigned int)increment, &atomic_counter) + increment;
}


/* Function: call_asm_atomic @ 0xDA8 */
int call_asm_atomic()
{
 int v0; // w0
 atomic_uint counter; // [xsp+Ch] [xbp-4h] BYREF

 atomic_init(&counter, 10);
 v0 = _aarch64_ldadd4_acq_rel(5, &counter);
 return v0 + atomic_load(&counter) + 5;
}


/* Function: param_dynamic_code @ 0xDE0 */
int param_dynamic_code(int x)
{
 size_t v2; // x20
 int v3; // w21
 void *v4; // x0

 v2 = sysconf(30);
 v3 = -1;
 v4 = mmap(0, v2, 7, 34, -1, 0);
 if ( v4 != (void *)-1LL )
 {
 v3 = x + 5;
 munmap(v4, v2);
 }
 return v3;
}


/* Function: param_memory_protection @ 0xE48 */
int param_memory_protection()
{
 size_t v0; // x19
 int v1; // w21
 int *v2; // x0
 int *v3; // x20

 v0 = sysconf(30);
 v1 = -1;
 v2 = (int *)mmap(0, v0, 3, 34, -1, 0);
 if ( v2 != (int *)-1LL )
 {
 v3 = v2;
 *v2 = 42;
 if ( mprotect(v2, v0, 1) )
 {
 v1 = -2;
 }
 else
 {
 v1 = *v3;
 if ( mprotect(v3, v0, 3) )
 v1 = -3;
 else
 *v3 = 100;
 }
 munmap(v3, v0);
 }
 return v1;
}


/* Function: param_clobber_importance @ 0xEF8 */
int param_clobber_importance(int a, int b)
{
 return 2 * (b + a);
}


/* Function: call_asm_privileged @ 0xF04 */
int call_asm_privileged()
{
 int v0; // w19

 v0 = param_dynamic_code(10);
 if ( param_memory_protection() == 42 && v0 == 15 )
 return 77;
 else
 return v0;
}


/* Function: param_memory_clobber_demo @ 0xF3C */
int param_memory_clobber_demo()
{
 return global_var + 50;
}


/* Function: test_asm_features @ 0xF4C */
void test_asm_features()
{
 unsigned int v0; // w0
 int v1; // w0
 unsigned int v2; // w19
 long long v4; // x1
 atomic_uint v5; // [xsp+1Ch] [xbp+1Ch] BYREF

 puts(asc_130E);
 printf(aAsmL401D, 15);
 printf(aAsmL402D, 15);
 printf(aAsmL403D, 42);
 v0 = call_asm_simd();
 printf(aAsmL404D, v0);
 atomic_init(&v5, 10);
 v1 = _aarch64_ldadd4_acq_rel(5, &v5);
 printf(aAsmL405D, (unsigned int)(v1 + atomic_load(&v5) + 5));
 v2 = param_dynamic_code(10);
 if ( param_memory_protection() == 42 && v2 == 15 )
 v4 = 77;
 else
 v4 = v2;
 printf(aAsmL406D, v4);
}


/* Function: main @ 0x100C */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* Function: __aarch64_ldadd4_acq_rel @ 0x1030 */
__attribute__((visibility("default")))
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 unsigned int result; // x0
 unsigned int old_val;
 unsigned int new_val;

 if ( _aarch64_have_lse_atomics )
 {
  /* Use compiler atomic builtins for LSE atomics */
  old_val = atomic_load_explicit(a2, memory_order_acquire);
  do {
   new_val = old_val + a1;
  } while (!atomic_compare_exchange_weak_explicit(a2, &old_val, new_val, 
                                                   memory_order_acq_rel, 
                                                   memory_order_acquire));
  return (long long)old_val;
 }
 do
 result = __ldaxr_impl((unsigned int *)a2);
 while ( __stlxr_impl(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: .term_proc @ 0x1060 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x120D8 */

/* FAILED to decompile: __libc_start_main @ 0x120E0 */

/* FAILED to decompile: __cxa_finalize @ 0x120E8 */

/* FAILED to decompile: __getauxval @ 0x120F0 */

/* FAILED to decompile: abort @ 0x120F8 */

/* FAILED to decompile: puts @ 0x12100 */

/* FAILED to decompile: mmap @ 0x12108 */

/* FAILED to decompile: munmap @ 0x12110 */

/* FAILED to decompile: sysconf @ 0x12118 */

/* FAILED to decompile: printf @ 0x12120 */

/* FAILED to decompile: mprotect @ 0x12128 */

/* FAILED to decompile: __gmon_start__ @ 0x12138 */

/* Total functions decompiled: 54, failed: 12 */
