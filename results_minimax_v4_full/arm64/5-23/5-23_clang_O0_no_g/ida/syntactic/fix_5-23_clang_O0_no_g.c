/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <stdatomic.h>
#include <sys/types.h>
#include <string.h>
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
/* intmax_t and uintmax_t are already defined in stdint.h */

/* External functions from libc */
extern size_t strlen(const char *s);
extern char *strcpy(char *dest, const char *src);
extern void *memset(void *s, int c, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);
extern int mprotect(void *addr, size_t len, int prot);
extern int munmap(void *addr, size_t len);
extern long sysconf(int name);
extern void *mmap(void *addr, size_t len, int prot, int flags, int fd, long offset);
extern int printf(const char *format, ...);

/* Atomic operations from stdatomic.h - explicitly declare for linker */
extern unsigned int atomic_fetch_add(volatile atomic_uint *object, unsigned int desired);

/* Jump function - used to jump to an address */
#define JUMPOUT(addr) ((void (*)(void))(addr))()

/* Function declarations needed for proper compilation */
extern unsigned long __getauxval(unsigned long type);
extern long long call_weak_fn(void);

/* Fallback implementation for __getauxval when not linked against glibc */
unsigned long __getauxval(unsigned long type)
{
    /* Return 0 for unknown auxval types - caller checks for specific bits */
    return 0;
}

/* Fallback implementation for call_weak_fn when not linked against CRT */
__attribute__((weak))
long long call_weak_fn(void)
{
    return 0;
}

/* Function declarations - implemented in this file */
/* These are standard functions defined in this translation unit */
long long header_func(int a1);
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2);
long long param_macro_constants(int a1);
long long call_macro_constants(void);
long long param_macro_functions(int a1, int a2);
long long call_macro_functions(void);
long long param_conditional_compile(int a1);
long long call_conditional_compile(void);
long long param_multi_branch_compile(int a1);
long long call_multi_branch_compile(void);
long long param_macro_recursion(int a1);
long long call_macro_recursion(void);
long long param_stringize(void);
long long call_stringize(void);
long long my_func(int a1);
long long param_token_paste(int a1);
long long call_token_paste(void);
long long param_variadic_macro(int a1, int a2, int a3);
long long call_variadic_macro(void);
long long param_macro_override(int a1);
long long call_macro_override(void);
long long param_include_guard(void);
long long call_include_guard(void);
long long param_builtin_macros(int a1);
long long call_builtin_macros(void);
long long test_preprocessing_features(void);
long long param_asm_basic(int a1);
long long call_asm_basic(void);
long long param_asm_clobber(long long a1, int a2);
long long call_asm_clobber(void);
void * param_asm_multi_insn(void *a1, const void *a2, size_t a3);
long long call_asm_multi_insn(void);
long long param_asm_simd(long long a1, long long a2, long long a3);
long long param_simd_intrinsics(long long a1, long long a2, long long a3);
long long call_asm_simd(void);
long long param_asm_atomic(long long a1, unsigned int a2);
long long param_atomic_c11(long long a1, unsigned int a2);
long long call_asm_atomic(void);
long long param_dynamic_code(int a1);
long long param_memory_protection(void);
long long param_clobber_importance(int a1, int a2);
long long call_asm_privileged(void);
long long param_memory_clobber_demo(void);
long long test_asm_features(void);

/* ARM64 atomic intrinsics - implemented locally at bottom of file */

/* Global variable declaration */
extern int _aarch64_have_lse_atomics;

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/arm64/5-23/5-23_clang_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x780 */
long long init_proc()
{
 return call_weak_fn();
}


/* Function: sub_7A0 @ 0x7A0 */
void sub_7A0()
{
 JUMPOUT(0);
}


/* Function: init_have_lse_atomics @ 0x880 */
long long init_have_lse_atomics()
{
 long long result; // x0

 result = ((unsigned int)__getauxval(16) >> 8) & 1;
 _aarch64_have_lse_atomics = result;
 return result;
}



/* CRT stub function _start removed by preprocessor */




/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */

/* SIMD/XMM register constants (128-bit values) */
static __int128 xmmword_196C = 0;  /* Used in call_asm_clobber */
static __int128 xmmword_1980 = 0;  /* Used in call_asm_simd */
static __int128 xmmword_1990 = 0;  /* Used in call_asm_simd */

/* Byte extraction macros (typically from Windows headers) */
#define LOBYTE(w) ((unsigned char)((uintptr_t)(w) & 0xFF))
#define BYTE4(w)  ((unsigned char)(((uintptr_t)(w) >> 24) & 0xFF))

/* Jump function - used to jump to an address - defined at top of file */

/* Global variable definition */
int _aarch64_have_lse_atomics = 0;

/* External global variable reference */
extern int global_var;

/* Global variable definition */
int global_var = 0;

/* String constants for printf format strings */
static const char asc_1719[] = "=== Preprocessing Tests ===\n";
static const char aPpL201D[] = "Macro Constants Test: %d\n";
static const char aPpL202D[] = "Macro Functions Test: %d\n";
static const char aPpL203D[] = "Conditional Compile Test: %d\n";
static const char aPpL204D[] = "Multi-branch Compile Test: %d\n";
static const char aPpL301D[] = "Macro Recursion Test: %d\n";
static const char aPpL302D[] = "Stringize Test: %d\n";
static const char aPpL303D[] = "Token Paste Test: %d\n";
static const char aPpL304D[] = "Variadic Macro Test: %d\n";
static const char aPpL305D[] = "Macro Override Test: %d\n";
static const char aPpL306D[] = "Include Guard Test: %d\n";
static const char aPpL307D[] = "Builtin Macros Test: %d\n";

/* String constants for ASM tests */
static const char asc_1897[] = "=== ASM Features Tests ===\n";
static const char aAsmL401D[] = "ASM Basic Test: %d\n";
static const char aAsmL402D[] = "ASM Clobber Test: %d\n";
static const char aAsmL403D[] = "ASM Multi-insn Test: %d\n";
static const char aAsmL404D[] = "ASM SIMD Test: %d\n";
static const char aAsmL405D[] = "ASM Atomic Test: %d\n";
static const char aAsmL406D[] = "ASM Privileged Test: %d\n";

/* Function: param_macro_constants @ 0x9D4 */
long long param_macro_constants(int a1)
{
 if ( a1 <= 1024 )
 return 512;
 else
 return 64;
}


/* Function: call_macro_constants @ 0xA10 */
long long call_macro_constants()
{
 return param_macro_constants(2048);
}


/* Function: param_macro_functions @ 0xA28 */
long long param_macro_functions(int a1, int a2)
{
 int v3; // [xsp+0h] [xbp-10h]

 if ( a1 <= a2 )
 v3 = a2;
 else
 v3 = a1;
 return (unsigned int)(a1 * a1 + v3);
}


/* Function: call_macro_functions @ 0xA84 */
long long call_macro_functions()
{
 return param_macro_functions(5, 3);
}


/* Function: param_conditional_compile @ 0xAA0 */
long long param_conditional_compile(int a1)
{
 return (unsigned int)(3 * a1 + 2);
}


/* Function: call_conditional_compile @ 0xAD0 */
long long call_conditional_compile()
{
 return param_conditional_compile(10);
}


/* Function: param_multi_branch_compile @ 0xAE8 */
long long param_multi_branch_compile(int a1)
{
 return (unsigned int)(5 * a1 + 57072);
}


/* Function: call_multi_branch_compile @ 0xB0C */
long long call_multi_branch_compile()
{
 return param_multi_branch_compile(10);
}


/* Function: param_macro_recursion @ 0xB24 */
long long param_macro_recursion(int a1)
{
 return (unsigned int)(a1 + 16);
}


/* Function: call_macro_recursion @ 0xB78 */
long long call_macro_recursion()
{
 return param_macro_recursion(100);
}


/* Function: param_stringize @ 0xB90 */
long long param_stringize()
{
 size_t v1; // [xsp+0h] [xbp-30h]
 size_t v2; // [xsp+8h] [xbp-28h]

 v1 = strlen("Hello World");
 v2 = v1 + strlen("1.2.3");
 return (unsigned int)v2 + (unsigned int)strlen("155");
}


/* Function: call_stringize @ 0xC08 */
long long call_stringize()
{
 return param_stringize();
}


/* Function: my_func @ 0xC20 */
long long my_func(int a1)
{
 return (unsigned int)(10 * a1);
}


/* Function: param_token_paste @ 0xC3C */
long long param_token_paste(int a1)
{
 return (unsigned int)my_func(a1) + a1 + 5;
}


/* Function: call_token_paste @ 0xC84 */
long long call_token_paste()
{
 return param_token_paste(5);
}


/* Function: param_variadic_macro @ 0xC9C */
long long param_variadic_macro(int a1, int a2, int a3)
{
 printf("LOG: Values: %d, %d, %d\n", a1, a2, a3);
 return (unsigned int)(a1 + 50);
}


/* Function: call_variadic_macro @ 0xCF4 */
long long call_variadic_macro()
{
 return param_variadic_macro(10, 20, 30);
}


/* Function: param_macro_override @ 0xD14 */
long long param_macro_override(int a1)
{
 return (unsigned int)(a1 + 1 + 2 * a1);
}


/* Function: call_macro_override @ 0xD48 */
long long call_macro_override()
{
 return param_macro_override(5);
}


/* Function: param_include_guard @ 0xD60 */
long long param_include_guard()
{
 return header_func(5);
}


/* Function: header_func @ 0xD78 */
long long header_func(int a1)
{
 return (unsigned int)(100 * a1);
}


/* Function: call_include_guard @ 0xD94 */
long long call_include_guard()
{
 return param_include_guard();
}


/* Function: param_builtin_macros @ 0xDA8 */
long long param_builtin_macros(int a1)
{
 printf(
 "file=%s, func=%s, line=%d, date=%s, time=%s\n",
 "src/5-23.c",
 "param_builtin_macros",
 279,
 "Jan 15 2026",
 "03:01:38");
 return (unsigned int)(a1 + 282);
}


/* Function: call_builtin_macros @ 0xE54 */
long long call_builtin_macros()
{
 return param_builtin_macros(100);
}


/* Function: test_preprocessing_features @ 0xE6C */
long long test_preprocessing_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0
 unsigned int v6; // w0
 unsigned int v7; // w0
 unsigned int v8; // w0
 unsigned int v9; // w0
 unsigned int v10; // w0

 printf(asc_1719);
 v0 = call_macro_constants();
 printf(aPpL201D, v0);
 v1 = call_macro_functions();
 printf(aPpL202D, v1);
 v2 = call_conditional_compile();
 printf(aPpL203D, v2);
 v3 = call_multi_branch_compile();
 printf(aPpL204D, v3);
 v4 = call_macro_recursion();
 printf(aPpL301D, v4);
 v5 = call_stringize();
 printf(aPpL302D, v5);
 v6 = call_token_paste();
 printf(aPpL303D, v6);
 v7 = call_variadic_macro();
 printf(aPpL304D, v7);
 v8 = call_macro_override();
 printf(aPpL305D, v8);
 v9 = call_include_guard();
 printf(aPpL306D, v9);
 v10 = call_builtin_macros();
 return printf(aPpL307D, v10);
}


/* Function: param_asm_basic @ 0xF64 */
long long param_asm_basic(int a1)
{
 return (unsigned int)(a1 + 10);
}


/* Function: call_asm_basic @ 0xF84 */
long long call_asm_basic()
{
 return param_asm_basic(5);
}


/* Function: param_asm_clobber @ 0xF9C */
long long param_asm_clobber(long long a1, int a2)
{
 int i; // [xsp+Ch] [xbp-14h]
 unsigned int v4; // [xsp+10h] [xbp-10h]

 v4 = 0;
 for ( i = 0; i < a2; ++i )
 v4 += *(unsigned int *)(a1 + 4LL * i);
 return v4;
}


/* Function: call_asm_clobber @ 0x1000 */
long long call_asm_clobber()
{
 __int128 v1; // [xsp+0h] [xbp-20h] BYREF
 int v2; // [xsp+10h] [xbp-10h]

 v1 = xmmword_196C;
 v2 = 5;
 return param_asm_clobber((long long)&v1, 5);
}


/* Function: param_asm_multi_insn @ 0x103C */
void * param_asm_multi_insn(void *a1, const void *a2, size_t a3)
{
 return memcpy(a1, a2, a3);
}


/* Function: call_asm_multi_insn @ 0x1070 */
long long call_asm_multi_insn()
{
 bool v1; // [xsp+Ch] [xbp-34h]
 unsigned long long v2[2]; // [xsp+10h] [xbp-30h] BYREF
 char v3[16]; // [xsp+30h] [xbp-10h] BYREF

 strcpy(v3, "Hello ASM");
 memset(v2, 0, sizeof(v2));
 /* Copy 9 bytes from v3 to v2 */
 memcpy(v2, v3, 9u);
 v1 = 0;
 if ( LOBYTE(v2[0]) == 72 )
 v1 = BYTE4(v2[0]) == 111;
 if ( v1 )
 return 42;
 else
 return 0xFFFFFFFFLL;
}


/* Function: param_asm_simd @ 0x10F8 */
long long param_asm_simd(long long a1, long long a2, long long a3)
{
 int i; // [xsp+4h] [xbp-1Ch]

 for ( i = 0; i < 4; ++i )
 *(unsigned int *)(a3 + 4LL * i) = *(unsigned int *)(a1 + 4LL * i) + *(unsigned int *)(a2 + 4LL * i);
 return 0;
}


/* Function: param_simd_intrinsics @ 0x1168 */
long long param_simd_intrinsics(long long a1, long long a2, long long a3)
{
 int i; // [xsp+4h] [xbp-1Ch]

 for ( i = 0; i < 4; ++i )
 *(unsigned int *)(a3 + 4LL * i) = *(unsigned int *)(a1 + 4LL * i) + *(unsigned int *)(a2 + 4LL * i);
 return 0;
}


/* Function: call_asm_simd @ 0x11D8 */
long long call_asm_simd()
{
 unsigned int v1[4]; // [xsp+0h] [xbp-30h] BYREF
 __int128 v2; // [xsp+10h] [xbp-20h] BYREF
 __int128 v3; // [xsp+20h] [xbp-10h] BYREF

 v3 = xmmword_1980;
 v2 = xmmword_1990;
 param_asm_simd((long long)&v3, (long long)&v2, (long long)v1);
 return (unsigned int)(v1[0] + v1[1] + v1[2] + v1[3]);
}


/* Function: param_asm_atomic @ 0x123C */
long long param_asm_atomic(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)(uintptr_t)a1) + a2;
}


/* Function: param_atomic_c11 @ 0x1288 */
long long param_atomic_c11(long long a1, unsigned int a2)
{
 return (unsigned int)_aarch64_ldadd4_acq_rel(a2, (atomic_uint *)(uintptr_t)a1) + a2;
}


/* Function: call_asm_atomic @ 0x12CC */
long long call_asm_atomic()
{
 int v1; // [xsp+8h] [xbp-8h]
 int v2; // [xsp+Ch] [xbp-4h] BYREF

 v2 = 10;
 v1 = param_asm_atomic((long long)&v2, 5u);
 return (unsigned int)(v2 + v1);
}


/* Function: param_dynamic_code @ 0x1308 */
long long param_dynamic_code(int a1)
{
 void *addr; // [xsp+8h] [xbp-18h]
 long long len; // [xsp+10h] [xbp-10h]

 len = sysconf(30);
 addr = mmap(0, len, 7, 34, -1, 0);
 if ( addr == (void *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 munmap(addr, len);
 return (unsigned int)(a1 + 5);
 }
}


/* Function: param_memory_protection @ 0x1394 */
long long param_memory_protection()
{
 unsigned int v1; // [xsp+Ch] [xbp-24h]
 unsigned int *addr; // [xsp+18h] [xbp-18h]
 size_t v3; // [xsp+20h] [xbp-10h]

 v3 = sysconf(30);
 addr = mmap(0, v3, 3, 34, -1, 0);
 if ( addr == (unsigned int *)-1LL )
 {
 return (unsigned int)-1;
 }
 else
 {
 *addr = 42;
 if ( mprotect(addr, v3, 1) )
 {
 munmap(addr, v3);
 return (unsigned int)-2;
 }
 else
 {
 v1 = *addr;
 if ( mprotect(addr, v3, 3) )
 {
 munmap(addr, v3);
 return (unsigned int)-3;
 }
 else
 {
 *addr = 100;
 munmap(addr, v3);
 return v1;
 }
 }
 }
}


/* Function: param_clobber_importance @ 0x149C */
long long param_clobber_importance(int a1, int a2)
{
 return (unsigned int)(2 * (a1 + a2));
}


/* Function: call_asm_privileged @ 0x14C0 */
long long call_asm_privileged()
{
 int v1; // [xsp+0h] [xbp-10h]
 int v2; // [xsp+4h] [xbp-Ch]
 unsigned int v3; // [xsp+8h] [xbp-8h]

 v3 = param_dynamic_code(10);
 v2 = param_memory_protection();
 v1 = param_clobber_importance(3, 7);
 if ( v3 == 15 && v2 == 42 && v1 == 20 )
 return 77;
 else
 return v3;
}


/* Function: param_memory_clobber_demo @ 0x1548 */
long long param_memory_clobber_demo()
{
 return (unsigned int)(global_var + 50);
}


/* Function: test_asm_features @ 0x1574 */
long long test_asm_features()
{
 unsigned int v0; // w0
 unsigned int v1; // w0
 unsigned int v2; // w0
 unsigned int v3; // w0
 unsigned int v4; // w0
 unsigned int v5; // w0

 printf(asc_1897);
 v0 = call_asm_basic();
 printf(aAsmL401D, v0);
 v1 = call_asm_clobber();
 printf(aAsmL402D, v1);
 v2 = call_asm_multi_insn();
 printf(aAsmL403D, v2);
 v3 = call_asm_simd();
 printf(aAsmL404D, v3);
 v4 = call_asm_atomic();
 printf(aAsmL405D, v4);
 v5 = call_asm_privileged();
 return printf(aAsmL406D, v5);
}


/* Function: main @ 0x1608 */
int main(int argc, const char **argv, const char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}


/* ARM64 LSE atomic intrinsics - load exclusive */
static unsigned int __ldaxr_impl(unsigned int *addr)
{
 unsigned int val;
 __asm__ __volatile__("ldaxr %w0, [%1]" : "=r"(val) : "r"(addr) : "memory");
 return val;
}

/* ARM64 LSE atomic intrinsics - store exclusive */
static int __stlxr_impl(unsigned int value, unsigned int *addr)
{
 int res;
 __asm__ __volatile__("stlxr %w0, %w1, [%2]" : "=r"(res) : "r"(value), "r"(addr) : "memory");
 return res;
}

/* Function: __aarch64_ldadd4_acq_rel @ 0x1640 */
long long _aarch64_ldadd4_acq_rel(unsigned int a1, atomic_uint *a2)
{
 unsigned long long result; // x0

 if ( _aarch64_have_lse_atomics )
 return atomic_fetch_add(a2, a1);
 do
 result = __ldaxr_impl((unsigned int *)a2);
 while ( __stlxr_impl(result + a1, (unsigned int *)a2) );
 return result;
}


/* Function: .term_proc @ 0x1670 */
void term_proc()
{
 ;
}


/* FAILED to decompile: memcpy @ 0x130D8 */

/* FAILED to decompile: strlen @ 0x130E0 */

/* FAILED to decompile: __libc_start_main @ 0x130E8 */

/* FAILED to decompile: __cxa_finalize @ 0x130F0 */

/* FAILED to decompile: __getauxval @ 0x130F8 */

/* FAILED to decompile: abort @ 0x13100 */

/* FAILED to decompile: mmap @ 0x13108 */

/* FAILED to decompile: munmap @ 0x13110 */

/* FAILED to decompile: sysconf @ 0x13118 */

/* FAILED to decompile: printf @ 0x13120 */

/* FAILED to decompile: mprotect @ 0x13128 */

/* FAILED to decompile: __gmon_start__ @ 0x13138 */

/* Total functions decompiled: 55, failed: 12 */
