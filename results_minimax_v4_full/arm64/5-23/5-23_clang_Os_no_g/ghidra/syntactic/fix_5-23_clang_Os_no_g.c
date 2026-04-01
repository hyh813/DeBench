/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdint.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/mman.h>

/* Auto-injected type definitions by preprocessor */
/* Note: uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t are defined in stdint.h */
/* ptrdiff_t, size_t, ssize_t are defined in stddef.h/sys/types.h */
/* uintptr_t, intptr_t are defined in stdint.h */

/* Ghidra decompilation types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint8_t undefined;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned char code;
typedef uint8_t undefined1;

/* External declarations for libc functions and variables */
extern unsigned long __getauxval(unsigned long);
extern void __cxa_finalize(void *);

/* Definition for __dso_handle - required by CRT (weak to allow CRT to override) */
__attribute__((weak)) void *__dso_handle = (void*)0;

/* POSIX functions */
extern long sysconf(int);
extern void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
extern int munmap(void *addr, size_t length);
extern int mprotect(void *addr, size_t length, int prot);

/* Global variable for LSE atomics detection */
char __aarch64_have_lse_atomics;

/* Global variable for destructor completion */
char completed_0;

/* Global variable for memory clobber demo */
int global_var;

/* Function declarations for atomic operations */
int __aarch64_ldadd4_acq_rel(int, int *);
int ExclusiveMonitorPass(int *addr, int val);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Function declarations for ASM SIMD tests */
extern undefined8 call_asm_simd(void);
extern undefined8 call_asm_multi_insn(void);
extern undefined8 call_asm_privileged(void);

/* Function declarations for SIMD operations */
extern long param_asm_simd(long, long, long);
extern long param_simd_intrinsics(long, long, long);

/* Weak function declarations that need stub implementations */
__attribute__((weak)) void deregister_tm_clones(void);
__attribute__((weak)) void register_tm_clones(void);

/* String constants from binary data section */
static const char DAT_001012e7[] = "Testing Preprocessing Features:\n";
static const char DAT_001010f3[] = "MACRO_CONSTANT = %d\n";
static const char DAT_0010110e[] = "MACRO_FUNCTION = %d\n";
static const char DAT_00101129[] = "CONDITIONAL_COMPILE = %d\n";
static const char DAT_00101144[] = "MULTI_BRANCH = %d\n";
static const char DAT_00101163[] = "MACRO_RECURSION = %d\n";
static const char DAT_0010117f[] = "STRINGIZE_TEST = %d\n";
static const char DAT_001011a9[] = "TOKEN_PASTE = %d\n";
static const char DAT_001011c4[] = "VARIADIC_MACRO = %d\n";
static const char DAT_001011df[] = "MACRO_OVERRIDE = %d\n";
static const char DAT_001011fa[] = "INCLUDE_GUARD = %d\n";
static const char DAT_00101216[] = "BUILTIN_MACROS = %d\n";
static const char DAT_0010123f[] = "ASM_BASIC = %d\n";
static const char DAT_0010125b[] = "ASM_CLOBBER = %d\n";
static const char DAT_00101277[] = "ASM_SIMD = %d\n";
static const char DAT_00101293[] = "ASM_ATOMIC = %d\n";
static const char DAT_001012af[] = "C11_ATOMIC = %d\n";
static const char DAT_001012cb[] = "DYNAMIC_CODE = %d\n";
static const char DAT_0010130e[] = "Testing Assembly Features:\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */

void FUN_001007a0(void)

{
 /* Empty CRT stub - was likely a function pointer call */
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010097c @ 0010097c */

void FUN_0010097c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001009d4 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x40;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 001009e8 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 001009f0 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 <= param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00100a00 */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100a08 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100a14 */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100a1c */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100a2c */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100a34 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100a3c */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100a44 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00100a4c */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100a54 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100a60 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00100a70 */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100a78 */

int param_variadic_macro(uint param_1,ulong param_2,ulong param_3)

{
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100ab0 */

undefined8 call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100adc */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100ae8 */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100af0 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100af8 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100b00 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:49");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100b50 */

undefined8 call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:49");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00100b94 */

int test_preprocessing_features(void)

{
 int iVar1;
 
 puts(DAT_001012e7);
 printf(DAT_001010f3,0x40);
 printf(DAT_0010110e,0x1e);
 printf(DAT_00101129,0x20);
 printf(DAT_00101144,0xdf22);
 printf(DAT_00101163,0x74);
 printf(DAT_0010117f,0x13);
 printf(DAT_001011a9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_001011c4,0x3c);
 printf(DAT_001011df,0x10);
 printf(DAT_001011fa,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:49");
 iVar1 = printf(DAT_00101216,0x17e);
 return iVar1;
}



/* Function: param_asm_basic @ 00100ca4 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100cac */

undefined8 call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100cb4 */

int param_asm_clobber(int *param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (ulong)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00100ce4 */

undefined8 call_asm_clobber(void)

{
 return 0xf;
}



/* Function: call_asm_multi_insn @ 00100cf0 */

undefined8 call_asm_multi_insn(void)

{
 return 0x2a;
}



/* Function: param_asm_simd @ 00100cf8 */

long param_asm_simd(long param_1,long param_2,long param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: param_simd_intrinsics @ 00100d20 */

long param_simd_intrinsics(long param_1,long param_2,long param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: call_asm_simd @ 00100d48 */

undefined8 call_asm_simd(void)

{
 return 0x24;
}



/* Function: param_asm_atomic @ 00100d50 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00100d7c */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00100da8 */

undefined8 call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 return (undefined8)(iVar1 + local_14 + 5);
}



/* Function: param_dynamic_code @ 00100de0 */

int param_dynamic_code(int param_1)

{
 long __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,(size_t)__len,7,0x22,-1,0);
 if (__addr != (void *)-1) {
 iVar1 = param_1 + 5;
 munmap(__addr,(size_t)__len);
 }
 return iVar1;
}


/* Function: param_memory_protection @ 00100e48 */

undefined4 param_memory_protection(void)

{
 int iVar1;
 long __len;
 void *__addr;
 undefined4 uVar2;
 
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = mmap((void *)0x0,(size_t)__len,3,0x22,-1,0);
 if (__addr != (void *)-1) {
 *(undefined4 *)__addr = 0x2a;
 iVar1 = mprotect(__addr,(size_t)__len,1);
 if (iVar1 == 0) {
 uVar2 = *(undefined4 *)__addr;
 iVar1 = mprotect(__addr,(size_t)__len,3);
 if (iVar1 == 0) {
 *(undefined4 *)__addr = 100;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 uVar2 = 0xfffffffe;
 }
 munmap(__addr,(size_t)__len);
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00100ef8 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_2 + param_1) * 2;
}



/* Function: call_asm_privileged @ 00100f04 */

undefined8 call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar2 = param_dynamic_code(10);
 iVar3 = param_memory_protection();
 iVar1 = 0x4d;
 if (iVar3 != 0x2a || iVar2 != 0xf) {
 iVar1 = iVar2;
 }
 return (undefined8)(ulong)iVar1;
}



/* Function: param_memory_clobber_demo @ 00100f3c */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00100f4c */

int test_asm_features(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 ulong uVar4;
 int local_4;
 
 puts(DAT_0010130e);
 printf(DAT_0010123f,0xf);
 printf(DAT_0010125b,0xf);
 iVar2 = printf(DAT_00101277,0x2a);
 uVar4 = call_asm_simd();
 printf(DAT_00101293,uVar4 & 0xffffffff);
 local_4 = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(5,&local_4);
 printf(DAT_001012af,(ulong)(iVar2 + local_4 + 5));
 uVar3 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || uVar3 != 0xf) {
 uVar1 = uVar3;
 }
 iVar2 = printf(DAT_001012cb,(ulong)uVar1);
 return iVar2;
}



/* Function: main @ 0010100c */

undefined8 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101030 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar2) {
 *param_2 = iVar3 + param_1;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_2;
 *param_2 = iVar3 + param_1;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Stub implementations for missing CRT/extern functions - using __attribute__((weak)) */

/* Implementation for ExclusiveMonitorPass - required for non-LSE atomic fallback */
int ExclusiveMonitorPass(int *addr, int val)
{
    (void)addr;
    (void)val;
    return 0;
}

/* Implementation for ExclusiveMonitorsStatus - required for non-LSE atomic fallback */
char ExclusiveMonitorsStatus(void)
{
    return 0;
}

/* Implementation for LOAcquire - required for LSE atomic fallback */
void LOAcquire(void)
{
    /* No-op for stub */
}

/* Implementation for LORelease - required for LSE atomic fallback */
void LORelease(void)
{
    /* No-op for stub */
}

/* Weak implementation for deregister_tm_clones - required by CRT */
__attribute__((weak))
void deregister_tm_clones(void)
{
    /* No-op for stub */
}

/* Weak implementation for register_tm_clones - required by CRT */
__attribute__((weak))
void register_tm_clones(void)
{
    /* No-op for stub */
}

/* Total functions decompiled: 53 */
