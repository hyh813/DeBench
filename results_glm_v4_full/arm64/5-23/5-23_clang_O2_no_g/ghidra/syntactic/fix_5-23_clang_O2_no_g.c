/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <stddef.h>

/* Ghidra-specific type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

/* Function pointer type for indirect calls */
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/auxv.h>
#include <stdbool.h>

/* External and global variable declarations */
void deregister_tm_clones(void);
extern void __cxa_finalize(void *dso_handle);

/* ARM atomic intrinsic function declarations */
bool ExclusiveMonitorPass(int *addr, unsigned long size);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);

/* String data from decompiled binary */
extern char DAT_00101407[];
extern char DAT_00101213[];
extern char DAT_0010122e[];
extern char DAT_00101249[];
extern char DAT_00101264[];
extern char DAT_00101283[];
extern char DAT_0010129f[];
extern char DAT_001012c9[];
extern char DAT_001012e4[];
extern char DAT_001012ff[];
extern char DAT_0010131a[];
extern char DAT_00101336[];
extern char DAT_0010142e[];
extern char DAT_0010135f[];
extern char DAT_0010137b[];
extern char DAT_00101397[];
extern char DAT_001013b3[];
extern char DAT_001013cf[];
extern char DAT_001013eb[];

static char __aarch64_have_lse_atomics = 0;
static char completed_0 = 0;
static int global_var = 0;
static void *__dso_handle = NULL;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */

void FUN_001007a0(void)

{
 (*(code *)(void *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 unsigned long auxval;
 
 auxval = getauxval(0x10);
 __aarch64_have_lse_atomics = (char)(auxval & 1);
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
 "Jan 15 2026","03:01:43");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100b50 */

undefined8 call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:43");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00100b94 */

int test_preprocessing_features(void)

{
 int iVar1;
 
 puts((const char *)&DAT_00101407);
 printf((const char *)&DAT_00101213,0x40);
 printf((const char *)&DAT_0010122e,0x1e);
 printf((const char *)&DAT_00101249,0x20);
 printf((const char *)&DAT_00101264,0xdf22);
 printf((const char *)&DAT_00101283,0x74);
 printf((const char *)&DAT_0010129f,0x13);
 printf((const char *)&DAT_001012c9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf((const char *)&DAT_001012e4,0x3c);
 printf((const char *)&DAT_001012ff,0x10);
 printf((const char *)&DAT_0010131a,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:43");
 iVar1 = printf((const char *)&DAT_00101336,0x17e);
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

int param_asm_clobber(long param_1,uint param_2)

{
 undefined8 *puVar1;
 undefined8 *puVar2;
 undefined8 *puVar3;
 undefined8 *puVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 undefined8 uVar18;
 
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (ulong)param_2;
 if (param_2 < 8) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (undefined8 *)(param_1 + 0x10);
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 uVar8 = uVar7;
 do {
 puVar1 = puVar4 + -2;
 puVar2 = puVar4 + -1;
 puVar3 = puVar4 + 1;
 uVar18 = *puVar4;
 puVar4 = puVar4 + 4;
 uVar8 = uVar8 - 8;
 iVar10 = (int)*puVar1 + iVar10;
 iVar11 = (int)((ulong)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((ulong)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((ulong)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((ulong)*puVar3 >> 0x20) + iVar17;
 } while (uVar8 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
 if (uVar7 == uVar5) {
 return iVar10;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar9 = (int *)(param_1 + uVar7 * 4);
 do {
 lVar6 = lVar6 + -1;
 iVar10 = *piVar9 + iVar10;
 piVar9 = piVar9 + 1;
 } while (lVar6 != 0);
 return iVar10;
}



/* Function: call_asm_clobber @ 00100d3c */

undefined8 call_asm_clobber(void)

{
 return 0xf;
}



/* Function: call_asm_multi_insn @ 00100d48 */

undefined8 call_asm_multi_insn(void)

{
 return 0x2a;
}



/* Function: param_asm_simd @ 00100d50 */

undefined8 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}



/* Function: param_simd_intrinsics @ 00100d98 */

undefined8 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}



/* Function: call_asm_simd @ 00100de0 */

undefined8 call_asm_simd(void)

{
 return 0x24;
}



/* Function: param_asm_atomic @ 00100de8 */

int param_asm_atomic(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00100e14 */

int param_atomic_c11(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00100e40 */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 return iVar1 + local_14 + 5;
}



/* Function: param_dynamic_code @ 00100e78 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 iVar1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00100ee0 */

undefined4 param_memory_protection(void *pvVar4)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 uVar2;
 
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (undefined4 *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 uVar2 = 0xfffffffe;
 }
 munmap(__addr,__len);
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00100f90 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_2 + param_1) * 2;
}



/* Function: call_asm_privileged @ 00100f9c */

undefined4 call_asm_privileged(void)

{
 undefined4 uVar1;
 uint uVar2;
 int iVar3;
 size_t __len;
 void *__addr;
 undefined4 uVar5;
 void *pvVar4;
 
 __len = sysconf(0x1e);
 uVar5 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar2 = munmap(__addr,__len);
 pvVar4 = (void *)(ulong)uVar2;
 uVar5 = 0xf;
 }
 iVar3 = param_memory_protection(pvVar4);
 uVar1 = 0x4d;
 if (iVar3 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar5;
 }
 return uVar1;
}



/* Function: param_memory_clobber_demo @ 0010101c */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 0010102c */

int test_asm_features(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 size_t __len;
 void *__addr;
 int local_14;
 void *pvVar4;
 
 puts((const char *)&DAT_0010142e);
 printf((const char *)&DAT_0010135f,0xf);
 printf((const char *)&DAT_0010137b,0xf);
 printf((const char *)&DAT_00101397,0x2a);
 printf((const char *)&DAT_001013b3,0x24);
 local_14 = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(5,&local_14);
 printf((const char *)&DAT_001013cf,(ulong)(iVar2 + local_14 + 5));
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar3 = munmap(__addr,__len);
 pvVar4 = (void *)(ulong)uVar3;
 uVar3 = 0xf;
 }
 iVar2 = param_memory_protection(pvVar4);
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar3;
 }
 iVar2 = printf((const char *)&DAT_001013eb,(ulong)uVar1);
 return iVar2;
}



/* Function: main @ 00101130 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* ARM atomic intrinsic function stub implementations */
bool ExclusiveMonitorPass(int *addr, unsigned long size)
{
 return true;
}

char ExclusiveMonitorsStatus(void)
{
 return 0;
}

void LOAcquire(void)
{
}

void LORelease(void)
{
}

void deregister_tm_clones(void)
{
}

void __cxa_finalize(void *dso_handle)
{
}

/* String data definitions */
char DAT_00101407[] = "Testing preprocessing features:\n";
char DAT_00101213[] = "  param_macro_constants: %d\n";
char DAT_0010122e[] = "  param_macro_functions: %d\n";
char DAT_00101249[] = "  param_conditional_compile: %d\n";
char DAT_00101264[] = "  param_multi_branch_compile: %d\n";
char DAT_00101283[] = "  param_macro_recursion: %d\n";
char DAT_0010129f[] = "  param_stringize: %d\n";
char DAT_001012c9[] = "  param_token_paste: %d\n";
char DAT_001012e4[] = "  param_variadic_macro: %d\n";
char DAT_001012ff[] = "  param_macro_override: %d\n";
char DAT_0010131a[] = "  param_include_guard: %d\n";
char DAT_00101336[] = "  param_builtin_macros: %d\n";
char DAT_0010142e[] = "Testing asm features:\n";
char DAT_0010135f[] = "  param_asm_basic: %d\n";
char DAT_0010137b[] = "  param_asm_clobber: %d\n";
char DAT_00101397[] = "  call_asm_multi_insn: %d\n";
char DAT_001013b3[] = "  call_asm_simd: %d\n";
char DAT_001013cf[] = "  call_asm_atomic: %d\n";
char DAT_001013eb[] = "  param_memory_protection result: %d\n";

/* Function: __aarch64_ldadd4_acq_rel @ 00101150 */

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




/* Total functions decompiled: 53 */
