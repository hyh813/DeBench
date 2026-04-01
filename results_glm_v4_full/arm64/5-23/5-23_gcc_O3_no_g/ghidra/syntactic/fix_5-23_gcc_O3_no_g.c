/* Standard library headers */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <sys/mman.h>
#include <unistd.h>

/* Auto-injected type definitions by preprocessor */
#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif

#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif

#ifndef size_t
typedef unsigned long size_t;
#endif
#ifndef ssize_t
typedef long ssize_t;
#endif
#ifndef uintptr_t
typedef unsigned long uintptr_t;
#endif
#ifndef intptr_t
typedef long intptr_t;
#endif
#ifndef ptrdiff_t
typedef unsigned long ptrdiff_t;
#endif


#ifndef ulong
typedef unsigned long ulong;
#endif
#ifndef off_t
typedef long off_t;
#endif

/* Ghidra decompiler types */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int undefined;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int code;
#define true 1
#define false 0

/* Global variables */
static long ___stack_chk_guard;
byte __aarch64_have_lse_atomics;
byte completed_0;
void *__dso_handle;
char DAT_001014d0[] = "Testing preprocessing features\n";
char DAT_001014f8[] = "  Result: %d\n";
char DAT_00101518[] = "  Result: %d\n";
char DAT_00101538[] = "  Result: %d\n";
char DAT_00101558[] = "  Result: %d\n";
char DAT_00101578[] = "  Result: %d\n";
char DAT_00101598[] = "  Result: %d\n";
char DAT_001015c8[] = "  Result: %d\n";
char DAT_001015e8[] = "  Result: %d\n";
char DAT_00101608[] = "  Result: %d\n";
char DAT_00101628[] = "  Result: %d\n";
char DAT_00101648[] = "  Result: %d\n";
char DAT_00101678[] = "Testing ASM features\n";
char DAT_001016a8[] = "  Basic ASM: %d\n";
char DAT_001016c8[] = "  ASM with clobber: %d\n";
char DAT_001016e8[] = "  Multi-instruction ASM: %d\n";
char DAT_00101708[] = "  SIMD ASM: %d\n";
char DAT_00101728[] = "  Atomic ASM: %d\n";
char DAT_00101748[] = "  Privileged ASM: OK\n";
static int global_var = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function declarations */
void test_preprocessing_features(void);
void test_asm_features(void);
unsigned long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
void __stack_chk_fail(void) __attribute__((noreturn));
int __printf_chk(int flag, const char *fmt, ...);

/* External inline atomic operations removed - causes linker conflicts */

/* Ghidra decompiler macro */
#define CONCAT44(high, low) ((((uint64_t)(high) & 0xffffffffULL) << 32) | ((uint64_t)(low) & 0xffffffffULL))


/* CRT stub function _init removed by preprocessor */


/* CRT stub function deregister_tm_clones made static */
static void deregister_tm_clones(void)
{
    return;
}


/* Function: FUN_00100810 @ 00100810 */

void FUN_00100810(void)

{
 return;
}



/* Function: main @ 00100900 */

undefined8 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}







/* Function: init_have_lse_atomics @ 00100920 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00100aa0 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00100ab4 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00100ac0 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00100ad0 */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100ae0 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100af0 */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100b00 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b10 */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100b20 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100b30 */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100b40 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00100b50 */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100b60 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100b70 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00100b80 */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100b90 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100bd0 */

undefined8 call_variadic_macro(void)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100c00 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100c10 */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100c20 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100c30 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100c40 */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:33");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100c94 */

undefined8 call_builtin_macros(void)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:33");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00100ce0 */

void test_preprocessing_features(void)

{
 __printf_chk(1,DAT_001014d0);
 __printf_chk(1,DAT_001014f8,0x40);
 __printf_chk(1,DAT_00101518,0x1e);
 __printf_chk(1,DAT_00101538,0x20);
 __printf_chk(1,DAT_00101558,0xdf22);
 __printf_chk(1,DAT_00101578,0x74);
 __printf_chk(1,DAT_00101598,0x13);
 __printf_chk(1,DAT_001015c8,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_001015e8,0x3c);
 __printf_chk(1,DAT_00101608,0x10);
 __printf_chk(1,DAT_00101628,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:33");
 __printf_chk(1,DAT_00101648,0x17e);
 return;
}



/* Function: param_asm_basic @ 00100e30 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100e40 */

undefined8 call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100e50 */

int param_asm_clobber(undefined8 *param_1,uint param_2)

{
 undefined8 *puVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 undefined8 *puVar2;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = param_1;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((ulong)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((ulong)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != param_1 + (ulong)((param_2 >> 2) - 1) * 2 + 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(param_2 & 0xfffffffc);
 if ((param_2 & 3) == 0) {
 return iVar4;
 }
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)param_1 + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 4);
 if (iVar5 + 2 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 8);
 }
 }
 return iVar4;
}



/* Function: call_asm_clobber @ 00100ef4 */

undefined8 call_asm_clobber(void)

{
 return 0xf;
}



/* Function: call_asm_multi_insn @ 00100f04 */

undefined8 call_asm_multi_insn(void)

{
 return 0x2a;
}



/* Function: param_asm_simd @ 00100f10 */

undefined8 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
 undefined8 uVar1;
 undefined8 uVar2;
 
 if (8 < (ulong)((long)param_3 - (long)(param_1 + 1)) &&
 8 < (ulong)((long)param_3 - (long)(param_2 + 1))) {
 uVar1 = *(undefined8 *)param_1;
 uVar2 = *(undefined8 *)param_2;
 *(ulong *)(param_3 + 2) =
 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20),
 (int)*(undefined8 *)(param_1 + 2) + (int)*(undefined8 *)(param_2 + 2));
 *(ulong *)param_3 =
 CONCAT44((int)((ulong)uVar1 >> 0x20) + (int)((ulong)uVar2 >> 0x20),(int)uVar1 + (int)uVar2)
 ;
 return 0;
 }
 *param_3 = *param_1 + *param_2;
 param_3[1] = param_1[1] + param_2[1];
 param_3[2] = param_1[2] + param_2[2];
 param_3[3] = param_1[3] + param_2[3];
 return 0;
}



/* Function: param_simd_intrinsics @ 00100f90 */

undefined8 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
 undefined8 uVar1;
 undefined8 uVar2;
 
 if (8 < (ulong)((long)param_3 - (long)(param_1 + 1)) &&
 8 < (ulong)((long)param_3 - (long)(param_2 + 1))) {
 uVar1 = *(undefined8 *)param_1;
 uVar2 = *(undefined8 *)param_2;
 *(ulong *)(param_3 + 2) =
 CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20) +
 (int)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20),
 (int)*(undefined8 *)(param_1 + 2) + (int)*(undefined8 *)(param_2 + 2));
 *(ulong *)param_3 =
 CONCAT44((int)((ulong)uVar1 >> 0x20) + (int)((ulong)uVar2 >> 0x20),(int)uVar1 + (int)uVar2)
 ;
 return 0;
 }
 *param_3 = *param_1 + *param_2;
 param_3[1] = param_1[1] + param_2[1];
 param_3[2] = param_1[2] + param_2[2];
 param_3[3] = param_1[3] + param_2[3];
 return 0;
}



/* Function: call_asm_simd @ 00101010 */

undefined8 call_asm_simd(void)

{
 return 0x24;
}



/* Function: param_asm_atomic @ 00101020 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101050 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}







/* Function: call_asm_atomic @ 00101080 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 001010e4 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}



/* Function: param_memory_protection @ 00101150 */

undefined4 param_memory_protection(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t __len;
 undefined4 *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 uVar2 = 0xfffffffd;
 munmap(__addr,__len);
 }
 }
 else {
 uVar2 = 0xfffffffe;
 munmap(__addr,__len);
 }
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00101220 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 00101230 */

undefined4 call_asm_privileged(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection();
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = munmap(__addr,__len);
 iVar1 = param_memory_protection();
 uVar2 = 0xf;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 return uVar2;
}



/* Function: param_memory_clobber_demo @ 001012a4 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001012b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_asm_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t __len;
 void *__addr;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 __printf_chk(1,DAT_00101678);
 __printf_chk(1,DAT_001016a8,0xf);
 __printf_chk(1,DAT_001016c8,0xf);
 __printf_chk(1,DAT_001016e8,0x2a);
 __printf_chk(1,DAT_00101708,0x24);
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 __printf_chk(1,DAT_00101728,iVar1 + 5 + local_c);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection();
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = munmap(__addr,__len);
 iVar1 = param_memory_protection();
 uVar2 = 0xf;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 __printf_chk(1,DAT_00101748);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_00101748);
 return;
}















/* Function: ExclusiveMonitorPass @ 00101400 - external, no definition needed */
/* Function: ExclusiveMonitorsStatus @ 00101410 - external, no definition needed */
/* Function: LOAcquire @ 00101420 - external, no definition needed */
/* Function: LORelease @ 00101430 - external, no definition needed */


/* Function: __stack_chk_fail @ runtime - provided by system */

/* Stub for system atomic functions to prevent linker errors */
__attribute__((weak))
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2) {
    int old = *param_2;
    *param_2 += param_1;
    return old;
}

/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 59 */
