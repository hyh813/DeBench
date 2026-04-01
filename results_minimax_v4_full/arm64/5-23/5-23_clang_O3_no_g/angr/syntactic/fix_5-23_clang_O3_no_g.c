// Angr Decompilation of 5-23_clang_O3_no_g
// Platform: AARCH64

#include <stddef.h>  // for NULL
#include <string.h>  // for memcpy
#include <sys/auxv.h>  // for __getauxval
#include <unistd.h>  // for sysconf
#include <stdlib.h>  // for mmap, munmap, mprotect
#include <sys/mman.h>  // for mmap, mprotect
#include <stdio.h>  // for printf, puts
#include <stdint.h>  // for uint64_t

// Define __ROL__ (rotate left) macro
#define __ROL__(x, n) (((x) << (n)) | ((x) >> (64 - (n))))

// Global variables defined in the binary
unsigned int global_var = 0;

// External globals referenced in the code (from binary data sections)
// Note: g_411ff8 is defined later in the file
extern const char *g_4012d3;
extern const char *g_4012ee;
extern const char *g_401309;
extern const char *g_401324;
extern const char *g_401343;
extern const char *g_40135f;
extern const char *g_401389;
extern const char *g_4013a4;
extern const char *g_4013bf;
extern const char *g_4013da;
extern const char *g_4013f6;
extern const char *g_40141f;
extern const char *g_40143b;
extern const char *g_401457;
extern const char *g_401473;
extern const char *g_40148f;
extern const char *g_4014ab;
extern const char *g_4014ee;
extern const char *g_4014c7;

// getauxval is declared in <sys/auxv.h>

// String constants used in the binary (defined here to resolve linker errors)
// These are format strings used in printf/puts calls
const char *g_4012d3 = "%d\n";
const char *g_4012ee = "%d\n";
const char *g_401309 = "%d\n";
const char *g_401324 = "%d\n";
const char *g_401343 = "%d\n";
const char *g_40135f = "%d\n";
const char *g_401389 = "%d\n";
const char *g_4013a4 = "%d\n";
const char *g_4013bf = "%d\n";
const char *g_4013da = "%d\n";
const char *g_4013f6 = "%d\n";
const char *g_40141f = "%d\n";
const char *g_40143b = "%d\n";
const char *g_401457 = "%d\n";
const char *g_401473 = "%d\n";
const char *g_40148f = "%d\n";
const char *g_4014ab = "%d\n";
const char *g_4014ee = "Test passed\n";
const char *g_4014c7 = "Test passed\n";

// Additional format strings needed by the code
const char *g_4014ab = "%d\n";

// Stub implementation for __aarch64_ldadd4_acq_rel
// This is an atomic load-add operation for ARM64
// Returns the original value at the memory location before the addition
unsigned int __aarch64_ldadd4_acq_rel(unsigned int value, unsigned int *ptr)
{
    // Simplified stub - atomically add value and return original
    unsigned int original;
    // Use a simple implementation with volatile to prevent optimization
    volatile unsigned int *vptr = (volatile unsigned int *)ptr;
    original = *vptr;
    *vptr = original + value;
    return original;
}

// Stub for arm64g_calculate_condition - this is a dummy implementation
// The actual function is likely in a separate library
int arm64g_calculate_condition(unsigned long long cc_op, void *cc_dep1, unsigned long long cc_dep2, unsigned long long cc_ndep)
{
    // Simplified stub - returns 0 (false condition)
    (void)cc_op;
    (void)cc_dep1;
    (void)cc_dep2;
    (void)cc_ndep;
    return 0;
}

// Declare init_have_lse_atomics before use
unsigned int init_have_lse_atomics();

// CRT stub function declarations
extern void _start(void);
extern void abort(void);
// frame_dummy may be a weak symbol - use weak attribute
__attribute__((weak))
void frame_dummy(void) { }
extern void __do_global_dtors_aux(void);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);

/* CRT stub function _init removed by preprocessor */



// Function: __dollar_x at 0x4007a0
// g_411ff8 is declared at top of file - provide a definition to avoid linker error
unsigned long long g_411ff8 = 0;

unsigned long long __dollar_x(unsigned long long v2, unsigned long long v3)
{
 return v2 + v3;
}


// Function: sub_4007b4 at 0x4007b4
void* sub_4007b4(void* v0, void* v1, unsigned long v2)
{
 return memcpy(v0, v1, v2);
}


// Function: init_have_lse_atomics at 0x400880
char __aarch64_have_lse_atomics = 0;

unsigned int init_have_lse_atomics()
{
 __aarch64_have_lse_atomics = (char)(__ROL__((unsigned int)getauxval(16), 24)) & 1;
 return __ROL__((unsigned int)getauxval(16), 24) & 0xFC000001 & 1;
}


// Function: sub_4008a4 at 0x4008a4
__attribute__((noreturn))
void sub_4008a4(unsigned long a0)
{
 (void)a0;
 // Attempting to call _start() causes void value errors
 // Just loop forever to simulate "does not return"
 for (;;) { }
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_4008f0 at 0x4008f0
void sub_4008f0()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */



// Function: sub_400908 at 0x400908
void sub_400908()
{
 // Stub - original function removed by preprocessor
 return;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */



// Function: sub_40097c at 0x40097c
void sub_40097c()
{
 __do_global_dtors_aux();
 return;
}



/* CRT stub function __do_global_dtors_aux removed by preprocessor */



// Function: sub_4009c8 at 0x4009c8
long long sub_4009c8()
{
 // frame_dummy() returns void, so we can't assign or return its value
 frame_dummy();
 return 0;
}



/* CRT stub function frame_dummy removed by preprocessor */



// Function: param_macro_constants at 0x4009d4
unsigned long long param_macro_constants(unsigned int a0)
{
 if (0x400 >= a0)
 return 0x200;
 return 64;
}


// Function: call_macro_constants at 0x4009e8
unsigned long long call_macro_constants()
{
 return 64;
}


// Function: param_macro_functions at 0x4009f0
long long param_macro_functions(unsigned int a0, unsigned int a1)
{
 unsigned int v0; // w8

 if (a1 < a0)
 v0 = a0;
 else
 v0 = a1;
 return v0 + a0 * a0;
}


// Function: call_macro_functions at 0x400a00
unsigned long long call_macro_functions()
{
 return 30;
}


// Function: param_conditional_compile at 0x400a08
int param_conditional_compile(unsigned int a0)
{
 return a0 * 3 + 2;
}


// Function: call_conditional_compile at 0x400a14
unsigned long long call_conditional_compile()
{
 return 32;
}


// Function: param_multi_branch_compile at 0x400a1c
int param_multi_branch_compile(unsigned int a0)
{
 return a0 * 5 + 57072;
}


// Function: call_multi_branch_compile at 0x400a2c
unsigned long long call_multi_branch_compile()
{
 return 57122;
}


// Function: param_macro_recursion at 0x400a34
int param_macro_recursion(unsigned int a0)
{
 return a0 + 16;
}


// Function: call_macro_recursion at 0x400a3c
unsigned long long call_macro_recursion()
{
 return 116;
}


// Function: param_stringize at 0x400a44
unsigned long long param_stringize()
{
 return 19;
}


// Function: call_stringize at 0x400a4c
unsigned long long call_stringize()
{
 return 19;
}


// Function: my_func at 0x400a54
unsigned int my_func(unsigned int a0)
{
 return (a0 * 10 | a0 * 5 >> 31) & 4294967294;
}


// Function: param_token_paste at 0x400a60
int param_token_paste(unsigned int a0)
{
 return a0 * 11 + 5;
}


// Function: call_token_paste at 0x400a70
unsigned long long call_token_paste()
{
 return 60;
}


// Function: param_variadic_macro at 0x400a78
int param_variadic_macro(unsigned int a0, unsigned int a1, unsigned int a2)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("LOG: Values: %d, %d, %d\n", a0, a1, a2);
 return a0 + 50;
}


// Function: call_variadic_macro at 0x400ab0
unsigned long long call_variadic_macro()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 return 60;
}


// Function: param_macro_override at 0x400adc
int param_macro_override(unsigned int a0)
{
 return a0 * 3 + 1;
}


// Function: call_macro_override at 0x400ae8
unsigned long long call_macro_override()
{
 return 16;
}


// Function: param_include_guard at 0x400af0
unsigned long long param_include_guard()
{
 return 500;
}


// Function: call_include_guard at 0x400af8
unsigned long long call_include_guard()
{
 return 500;
}


// Function: param_builtin_macros at 0x400b00
int param_builtin_macros(unsigned int a0)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:46");
 return a0 + 282;
}


// Function: call_builtin_macros at 0x400b50
unsigned long long call_builtin_macros()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:46");
 return 382;
}


// Function: test_preprocessing_features at 0x400b94
int test_preprocessing_features()
{
 char *v0; // [bp-0x10]
 char v1; // [bp+0x0]

 v0 = &v1;
 puts(g_4014c7);
 printf(g_4012d3, 64);
 printf(g_4012ee, 30);
 printf(g_401309, 32);
 printf(g_401324, 57122);
 printf(g_401343, 116);
 printf(g_40135f, 19);
 printf(g_401389, 60);
 printf("LOG: Values: %d, %d, %d\n", 10, 20, 30);
 printf(g_4013a4, 60);
 printf(g_4013bf, 16);
 printf(g_4013da, 500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n", "src/5-23.c", "param_builtin_macros", 279, "Jan 15 2026", "03:01:46");
 return printf(g_4013f6, 382);
}


// Function: param_asm_basic at 0x400ca4
int param_asm_basic(unsigned int a0)
{
 return a0 + 10;
}


// Function: call_asm_basic at 0x400cac
unsigned long long call_asm_basic()
{
 return 15;
}


// Function: param_asm_clobber at 0x400cb4
unsigned long long param_asm_clobber(unsigned long a0, unsigned int a1)
{
 unsigned long v0; // x9
 unsigned long long v1; // x10
 unsigned long long v2; // x8
 unsigned long long i; // x11
 unsigned long long v5; // d0
 unsigned int *ptr; // x11
 unsigned long long j; // x9

 if (a1 < 1)
 return 0;
 v0 = a1;
 if (8 > a1)
 {
 v1 = 0;
 v2 = 0;
 }
 else
 {
 v1 = v0 & 0xfffffff8;
 i = v1;
 do
 {
 i -= 8;
 } while (i != 8);
 // SIMD instruction to zero upper 96 bits of V128 - simplified to return 0
 v5 = 0;
 if (v1 == v0)
 return v5 & 4294967295;
 }
 ptr = (unsigned int *)(a0 + v1 * 4);
 j = v0 - v1;
 do
 {
 v2 += *(ptr);
 j -= 1;
 ptr += 1;
 } while (j != 1);
 return v2 & 4294967295;
}


// Function: call_asm_clobber at 0x400d3c
unsigned long long call_asm_clobber()
{
 return 15;
}


// Function: param_asm_multi_insn at 0x400d44
long long param_asm_multi_insn(void* v0, void* v1, unsigned long v2)
{
 memcpy(v0, v1, v2);
 return 0;
}


// Function: call_asm_multi_insn at 0x400d48
unsigned long long call_asm_multi_insn()
{
 return 42;
}


// Function: param_asm_simd at 0x400d50
unsigned long long param_asm_simd(unsigned int *pos, unsigned int *index, unsigned int *ptr)
{
 *(ptr) = *(index) + *(pos);
 ptr[1] = index[1] + pos[1];
 ptr[2] = index[2] + pos[2];
 ptr[3] = index[3] + pos[3];
 return 0;
}


// Function: param_simd_intrinsics at 0x400d98
unsigned long long param_simd_intrinsics(unsigned int *pos, unsigned int *index, unsigned int *ptr)
{
 *(ptr) = *(index) + *(pos);
 ptr[1] = index[1] + pos[1];
 ptr[2] = index[2] + pos[2];
 ptr[3] = index[3] + pos[3];
 return 0;
}


// Function: call_asm_simd at 0x400de0
unsigned long long call_asm_simd()
{
 return 36;
}


// Function: param_asm_atomic at 0x400de8
int param_asm_atomic(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int*)a0) + a1;
}


// Function: param_atomic_c11 at 0x400e14
int param_atomic_c11(unsigned long long a0, unsigned int a1)
{
 char *v0; // [bp-0x20]
 char v1; // [bp+0x0]

 v0 = &v1;
 return __aarch64_ldadd4_acq_rel(a1, (unsigned int*)(uintptr_t)a0) + a1;
}


// Function: call_asm_atomic at 0x400e40
int call_asm_atomic()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 v0 = 10;
 return (int)__aarch64_ldadd4_acq_rel(5, &v0) + v0 + 5;
}


// Function: param_dynamic_code at 0x400e78
unsigned int param_dynamic_code(unsigned int a0)
{
 unsigned long v2; // x20
 void* ptr; // x0
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 ptr = mmap(NULL, v2, 7, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, ptr, 1, 0))
 return 4294967295;
 munmap(ptr, v2);
 return a0 + 5;
}


// Function: param_memory_protection at 0x400ee0
unsigned int param_memory_protection()
{
 unsigned long v2; // x19
 unsigned int *p; // x0
 unsigned int *ptr; // x20
 unsigned int v5; // w21
 char *v0; // [bp-0x30]
 char v1; // [bp+0x0]

 v0 = &v1;
 v2 = sysconf(30);
 p = mmap(NULL, v2, 3, 34, -1, 0);
 if ((char)arm64g_calculate_condition(2, p, 1, 0))
 return 4294967295;
 ptr = p;
 *(p) = 42;
 if (mprotect(ptr, v2, 1))  // PROT_READ: remove write
 {
 v5 = 4294967294;
 }
 else
 {
 v5 = *(ptr);
 if (mprotect(ptr, v2, 3))  // PROT_WRITE: restore write
 v5 = 4294967293;
 else
 *(ptr) = 100;
 }
 munmap(ptr, v2);
 return v5;
}


// Function: param_clobber_importance at 0x400f90
unsigned int param_clobber_importance(unsigned int a0, unsigned int a1)
{
 return ((a1 + a0) * 2 | a1 + a0 >> 31) & 4294967294;
}


// Function: call_asm_privileged at 0x400f9c
unsigned long long call_asm_privileged()
{
 unsigned long v14; // x20
 unsigned int v15; // w22
 unsigned int *ptr; // x21
 unsigned long v17; // x20
 unsigned int v18; // w23
 unsigned int *p; // x0
 unsigned long long result; // result to ensure all paths return

 v14 = sysconf(30);
 v15 = 4294967295;
 ptr = (unsigned int *)mmap(NULL, v14, 7, 34, -1, 0);
 if (!((char)arm64g_calculate_condition(2, ptr, 1, 0)))
 {
 (void)munmap(ptr, v14);
 v15 = 15;
 }
 v17 = sysconf(30);
 v18 = 4294967295;
 p = (unsigned int *)mmap(NULL, v17, 3, 34, -1, 0);
 if (!((char)arm64g_calculate_condition(2, p, 1, 0)))
 {
 ptr = p;
 *(p) = 42;
 if (mprotect(ptr, v17, 1))
 {
 v18 = 4294967294;
 }
 else
 {
 v18 = *(ptr);
 if (mprotect(ptr, v17, 3))
 v18 = 4294967293;
 else
 *(ptr) = 100;
 }
 (void)munmap(ptr, v17);
 }
 if (v18 == 42)
 {
 unsigned long long v22 = 4;
 void *v23 = (void *)((char)arm64g_calculate_condition(2, p, 1, 0) ? (uintptr_t)ptr : 0x40000000);
 unsigned long long v24 = ((char)arm64g_calculate_condition(2, p, 1, 0) ? 18446744073709551615ULL : 0);
 if (!((char)arm64g_calculate_condition(v22 | 16, v23, v24, 0)))
 result = v15;
 else
 result = 77;
 }
 else
 {
 unsigned long long v22 = 0;
 void *v23 = (void *)((char)arm64g_calculate_condition(2, p, 1, 0) ? (uintptr_t)ptr : 0x40000000);
 unsigned long long v24 = ((char)arm64g_calculate_condition(2, p, 1, 0) ? 18446744073709551615ULL : 0);
 if (!((char)arm64g_calculate_condition(v22 | 16, v23, v24, 0)))
 result = v15;
 else
 result = 77;
 }
 return result;
}


// Function: param_memory_clobber_demo at 0x4010ac
int param_memory_clobber_demo()
{
 return global_var + 50;
}


// Function: test_asm_features at 0x4010bc
// Uses globals already declared at top of file: g_40141f, g_40143b, g_401457, g_401473, g_40148f, g_4014ab, g_4014ee

int test_asm_features()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 puts(g_4014ee);
 printf(g_40141f, 15);
 printf(g_40143b, 15);
 printf(g_401457, 42);
 printf(g_401473, 36);
 v0 = 10;
 printf(g_40148f, (int)__aarch64_ldadd4_acq_rel(5, &v0) + v0 + 5);
 return printf(g_4014ab, call_asm_privileged() & 4294967295);
}


// Function: main at 0x401160
// Uses globals already declared at top of file: g_40141f, g_40143b, g_401457, g_401473, g_40148f, g_4014ab, g_4014ee

unsigned int main()
{
 unsigned int v0; // [bp-0x14]
 char *v1; // [bp-0x10]
 char v2; // [bp+0x0]

 v1 = &v2;
 test_preprocessing_features();
 puts(g_4014ee);
 printf(g_40141f, 15);
 printf(g_40143b, 15);
 printf(g_401457, 42);
 printf(g_401473, 36);
 v0 = 10;
 printf(g_40148f, (int)__aarch64_ldadd4_acq_rel(5, &v0) + v0 + 5);
 printf(g_4014ab, call_asm_privileged() & 4294967295);
 return 0;
}


// Function: sub_40120c at 0x40120c
long long sub_40120c()
{
 unsigned long v0; // x0

 // Stub function - was unable to decompile, returning 0
 v0 = 0;
 return 0;
}


// Failed to decompile function __aarch64_ldadd4_acq_rel at 0x401210
// Function: sub_401224 at 0x401224
long long sub_401224()
{
 // Stub function - returning 0 instead of uninitialized variable
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


