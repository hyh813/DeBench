/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned long ulong;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long long undefined8;
typedef void undefined;
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdbool.h>

/* Function declarations */
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
static void deregister_tm_clones(void);
static void init_have_lse_atomics(void);

/* Stub implementations for missing functions */
static unsigned long __getauxval(unsigned long type)
{
 return 0;
}

static void __cxa_finalize(void *dso_handle)
{
 return;
}

static bool ExclusiveMonitorPass(int *param_2,unsigned long param_3)
{
 return true;
}

static char ExclusiveMonitorsStatus(void)
{
 return 0;
}

static void LOAcquire(void)
{
 return;
}

static void LORelease(void)
{
 return;
}

static void deregister_tm_clones(void)
{
 return;
}

/* Global variables */
static byte __aarch64_have_lse_atomics;
static int global_var;
static byte completed_0;
static void *__dso_handle;

/* String constants */
const char *DAT_001014ee = "=== Assembly Features Test ===";
const char *DAT_0010141f = "ASM basic: %d\n";
const char *DAT_0010143b = "ASM clobber: %d\n";
const char *DAT_00101457 = "ASM multi-instruction: %d\n";
const char *DAT_00101473 = "ASM SIMD: %d\n";
const char *DAT_0010148f = "ASM atomic: %d\n";
const char *DAT_001014ab = "ASM privileged: %d\n";
const char *DAT_001014c7 = "=== Preprocessing Features Test ===";
const char *DAT_001012d3 = "param_macro_constants: %d\n";
const char *DAT_001012ee = "call_macro_functions: %d\n";
const char *DAT_00101309 = "param_conditional_compile: %d\n";
const char *DAT_00101324 = "call_multi_branch_compile: %d\n";
const char *DAT_00101343 = "call_macro_recursion: %d\n";
const char *DAT_0010135f = "call_stringize: %d\n";
const char *DAT_00101389 = "call_token_paste: %d\n";
const char *DAT_001013a4 = "call_macro_override: %d\n";
const char *DAT_001013bf = "call_include_guard: %d\n";
const char *DAT_001013da = "param_include_guard: %d\n";
const char *DAT_001013f6 = "call_builtin_macros: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */

void FUN_001007a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

static void init_have_lse_atomics(void)

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

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x40;
 if (size < 0x401) {
 iVar1 = 0x200;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 001009e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 001009f0 */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x;
 if (x <= y) {
 iVar1 = y;
 }
 return iVar1 + x * x;
}



/* Function: call_macro_functions @ 00100a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100a08 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100a14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100a1c */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100a34 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100a3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100a44 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00100a4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100a54 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00100a60 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int temp__LINE__@[???] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00100a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100a78 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 printf("LOG: Values: %d, %d, %d\n",(ulong)(uint)x,(ulong)(uint)y,(ulong)(uint)z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00100ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100adc */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100af8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100b00 */

int param_builtin_macros(int x)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter3@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter1@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:44");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:44");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00100b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 puts(DAT_001014c7);
 printf(DAT_001012d3,0x40);
 printf(DAT_001012ee,0x1e);
 printf(DAT_00101309,0x20);
 printf(DAT_00101324,0xdf22);
 printf(DAT_00101343,0x74);
 printf(DAT_0010135f,0x13);
 printf(DAT_00101389,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_001013a4,0x3c);
 printf(DAT_001013bf,0x10);
 printf(DAT_001013da,500);
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:44");
 printf(DAT_001013f6,0x17e);
 return;
}



/* Function: param_asm_basic @ 00100ca4 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[???] */
 return x + 10;
}



/* Function: call_asm_basic @ 00100cac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100cb4 */

int param_asm_clobber(int *arr,int n)

{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 ulong uVar5;
 long lVar6;
 ulong uVar7;
 ulong uVar8;
 int iVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 undefined8 uVar17;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 uVar5 = (ulong)(uint)n;
 if ((uint)n < 8) {
 uVar7 = 0;
 iVar9 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 piVar4 = arr + 4;
 iVar9 = 0;
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 uVar8 = uVar7;
 do {
 piVar1 = piVar4 + -4;
 piVar2 = piVar4 + -2;
 piVar3 = piVar4 + 2;
 uVar17 = *(undefined8 *)piVar4;
 piVar4 = piVar4 + 8;
 uVar8 = uVar8 - 8;
 iVar9 = (int)*(undefined8 *)piVar1 + iVar9;
 iVar10 = (int)((ulong)*(undefined8 *)piVar1 >> 0x20) + iVar10;
 iVar11 = (int)*(undefined8 *)piVar2 + iVar11;
 iVar12 = (int)((ulong)*(undefined8 *)piVar2 >> 0x20) + iVar12;
 iVar13 = (int)uVar17 + iVar13;
 iVar14 = (int)((ulong)uVar17 >> 0x20) + iVar14;
 iVar15 = (int)*(undefined8 *)piVar3 + iVar15;
 iVar16 = (int)((ulong)*(undefined8 *)piVar3 >> 0x20) + iVar16;
 } while (uVar8 != 0);
 iVar9 = iVar13 + iVar9 + iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12;
 if (uVar7 == uVar5) {
 return iVar9;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar4 = arr + uVar7;
 do {
 lVar6 = lVar6 + -1;
 iVar9 = *piVar4 + iVar9;
 piVar4 = piVar4 + 1;
 } while (lVar6 != 0);
 return iVar9;
}



/* Function: call_asm_clobber @ 00100d3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 /* Unresolved local var: int[5] arr@[???] */
 return 0xf;
}



/* Function: param_asm_multi_insn @ 00100d44 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00100d48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 return 0x2a;
}



/* Function: param_asm_simd @ 00100d50 */

int param_asm_simd(int *a,int *b,int *result)

{
 /* Unresolved local var: int i@[???] */
 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 result[3] = b[3] + a[3];
 return 0;
}



/* Function: param_simd_intrinsics @ 00100d98 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 /* Unresolved local var: int i@[???] */
 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 result[3] = b[3] + a[3];
 return 0;
}



/* Function: call_asm_simd @ 00100de0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???]
 Unresolved local var: int[4] result@[???] */
 return 0x24;
}



/* Function: param_asm_atomic @ 00100de8 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00100e14 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00100e40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 return iVar1 + local_14 + 5;
}



/* Function: param_dynamic_code @ 00100e78 */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 iVar1 = x + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00100ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 int *__addr;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 iVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 if (iVar2 == 0) {
 *__addr = 100;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 iVar1 = -2;
 }
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_clobber_importance @ 00100f90 */

int param_clobber_importance(int a,int b)

{
 return (b + a) * 2;
}



/* Function: call_asm_privileged @ 00100f9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 size_t sVar3;
 void *__addr;
 int *__addr_00;
 int iVar4;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 sVar3 = sysconf(0x1e);
 iVar4 = -1;
 __addr = mmap((void *)0x0,sVar3,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 munmap(__addr,sVar3);
 iVar4 = 0xf;
 }
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 sVar3 = sysconf(0x1e);
 iVar1 = -1;
 __addr_00 = mmap((void *)0x0,sVar3,3,0x22,-1,0);
 if (__addr_00 != (int *)0xffffffffffffffff) {
 *__addr_00 = 0x2a;
 iVar1 = mprotect(__addr_00,sVar3,1);
 if (iVar1 == 0) {
 iVar1 = *__addr_00;
 iVar2 = mprotect(__addr_00,sVar3,3);
 if (iVar2 == 0) {
 *__addr_00 = 100;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 iVar1 = -2;
 }
 munmap(__addr_00,sVar3);
 }
 iVar2 = 0x4d;
 if (iVar1 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 iVar2 = iVar4;
 }
 return iVar2;
}



/* Function: param_memory_clobber_demo @ 001010ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001010bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 uint uVar2;
 int local_14;
 
 puts(DAT_001014ee);
 printf(DAT_0010141f,0xf);
 printf(DAT_0010143b,0xf);
 printf(DAT_00101457,0x2a);
 printf(DAT_00101473,0x24);
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int old_value@[???] */
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 printf(DAT_0010148f,(ulong)(iVar1 + local_14 + 5));
 uVar2 = call_asm_privileged();
 printf(DAT_001014ab,(ulong)uVar2);
 return;
}



/* Function: main @ 00101160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 int iVar1;
 uint uVar2;
 int local_14;
 
 test_preprocessing_features();
 puts(DAT_001014ee);
 printf(DAT_0010141f,0xf);
 printf(DAT_0010143b,0xf);
 printf(DAT_00101457,0x2a);
 printf(DAT_00101473,0x24);
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int old_value@[???] */
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 printf(DAT_0010148f,(ulong)(iVar1 + local_14 + 5));
 uVar2 = call_asm_privileged();
 printf(DAT_001014ab,(ulong)uVar2);
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101210 */

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




/* Total functions decompiled: 54 */
