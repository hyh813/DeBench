/* Auto-injected type definitions by preprocessor */
#include <stdint.h>

/* Define size_t and related types if not already defined */
#ifndef _SIZE_T_DEFINED
typedef unsigned long size_t;
#define _SIZE_T_DEFINED
#endif

#ifndef _SSIZE_T_DEFINED
typedef long ssize_t;
#define _SSIZE_T_DEFINED
#endif

typedef unsigned long uintptr_t;
typedef long intptr_t;

/* Additional type definitions for Ghidra compatibility */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;

/* Additional type for function pointers */
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

#include <sys/auxv.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include <sys/mman.h>

/* External function declarations */
extern void __cxa_finalize(void *dso_handle);
extern void *__dso_handle;

/* Global variable definitions */
byte __aarch64_have_lse_atomics = 0;
byte completed_0 = 0;
int global_var = 0;

/* External data symbol definitions - string constants from original binary */
const char DAT_00101719[] = "Testing macro constants...\n";
const char DAT_00101741[] = "  macro_constants result: %u\n";
const char DAT_0010175c[] = "  macro_functions result: %u\n";
const char DAT_00101777[] = "  conditional_compile result: %u\n";
const char DAT_00101792[] = "  multi_branch_compile result: %u\n";
const char DAT_001017b1[] = "  macro_recursion result: %u\n";
const char DAT_001017cd[] = "  stringize result: %u\n";
const char DAT_001017f7[] = "  token_paste result: %u\n";
const char DAT_00101812[] = "  variadic_macro result: %u\n";
const char DAT_0010182d[] = "  macro_override result: %u\n";
const char DAT_00101848[] = "  include_guard result: %u\n";
const char DAT_00101864[] = "  builtin_macros result: %u\n";
const char DAT_00101897[] = "Testing ASM features...\n";
const char DAT_001018c2[] = "  asm_basic result: %u\n";
const char DAT_001018de[] = "  asm_clobber result: %u\n";
const char DAT_001018fa[] = "  asm_multi_insn result: %u\n";
const char DAT_00101916[] = "  asm_simd result: %u\n";
const char DAT_00101932[] = "  asm_atomic result: %u\n";
const char DAT_0010194e[] = "  asm_privileged result: %u\n";


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */

void FUN_001007a0(void)

{
 /* Removed invalid call to NULL address - stub function */
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

/* Forward declarations for static functions */
static int header_func(int x);
static int custom_aarch64_ldadd4_acq_rel(int param_1,int *param_2);


/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010097c @ 0010097c */

void FUN_0010097c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001009d4 */

int param_macro_constants(int size)

{
 undefined4 local_4;
 
 if (size < 0x401) {
 local_4 = 0x200;
 }
 else {
 local_4 = 0x40;
 }
 return local_4;
}



/* Function: call_macro_constants @ 00100a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 int iVar1;
 
 iVar1 = param_macro_constants(0x800);
 return iVar1;
}



/* Function: param_macro_functions @ 00100a28 */

int param_macro_functions(int x,int y)

{
 int local_10;
 
 local_10 = y;
 if (y < x) {
 local_10 = x;
 }
 return x * x + local_10;
}



/* Function: call_macro_functions @ 00100a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 int iVar1;
 
 iVar1 = param_macro_functions(5,3);
 return iVar1;
}



/* Function: param_conditional_compile @ 00100aa0 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[???] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 int iVar1;
 
 iVar1 = param_conditional_compile(10);
 return iVar1;
}



/* Function: param_multi_branch_compile @ 00100ae8 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 int iVar1;
 
 iVar1 = param_multi_branch_compile(10);
 return iVar1;
}



/* Function: param_macro_recursion @ 00100b24 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100b78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 int iVar1;
 
 iVar1 = param_macro_recursion(100);
 return iVar1;
}



/* Function: param_stringize @ 00100b90 */

int param_stringize(int value)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[DW_OP_breg31(sp): +24]
 Unresolved local var: char * str3@[DW_OP_breg31(sp): +16] */
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return (int)sVar1 + (int)sVar2 + (int)sVar3;
}



/* Function: call_stringize @ 00100c08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 int iVar1;
 
 iVar1 = param_stringize(0);
 return iVar1;
}



/* Function: my_func @ 00100c20 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00100c3c */

int param_token_paste(int x)

{
 int iVar1;
 
 /* Unresolved local var: int result@[DW_OP_breg31(sp): +8]
 Unresolved local var: int temp__LINE__@[DW_OP_breg31(sp): +4] */
 iVar1 = my_func(x);
 return iVar1 + x + 5;
}



/* Function: call_token_paste @ 00100c84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 int iVar1;
 
 iVar1 = param_token_paste(5);
 return iVar1;
}



/* Function: param_variadic_macro @ 00100c9c */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[DW_OP_breg31(sp): 0] */
 printf("LOG: Values: %d, %d, %d\n",(ulong)(uint)x,(ulong)(uint)y,(ulong)(uint)z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00100cf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 00100d14 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100d48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 int iVar1;
 
 iVar1 = param_macro_override(5);
 return iVar1;
}







/* Function: param_include_guard @ 00100d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 int iVar1;
 
 iVar1 = header_func(5);
 return iVar1;
}



/* Function: header_func @ 00100d78 */

static int header_func(int x)

{
 return x * 100;
}



/* Function: call_include_guard @ 00100d94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 int iVar1;
 
 iVar1 = param_include_guard();
 return iVar1;
}



/* Function: param_builtin_macros @ 00100da8 */

int param_builtin_macros(int x)

{
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[DW_OP_breg31(sp): +32]
 Unresolved local var: char * date@[DW_OP_breg31(sp): +24]
 Unresolved local var: char * time@[DW_OP_breg31(sp): +16]
 Unresolved local var: int counter1@[DW_OP_breg31(sp): +12]
 Unresolved local var: int counter2@[DW_OP_breg31(sp): +8]
 Unresolved local var: int counter3@[DW_OP_breg31(sp): +4] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:37");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100e54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 00100e6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 uint uVar1;
 
 printf(DAT_00101719);
 uVar1 = call_macro_constants();
 printf(DAT_00101741,(ulong)uVar1);
 uVar1 = call_macro_functions();
 printf(DAT_0010175c,(ulong)uVar1);
 uVar1 = call_conditional_compile();
 printf(DAT_00101777,(ulong)uVar1);
 uVar1 = call_multi_branch_compile();
 printf(DAT_00101792,(ulong)uVar1);
 uVar1 = call_macro_recursion();
 printf(DAT_001017b1,(ulong)uVar1);
 uVar1 = call_stringize();
 printf(DAT_001017cd,(ulong)uVar1);
 uVar1 = call_token_paste();
 printf(DAT_001017f7,(ulong)uVar1);
 uVar1 = call_variadic_macro();
 printf(DAT_00101812,(ulong)uVar1);
 uVar1 = call_macro_override();
 printf(DAT_0010182d,(ulong)uVar1);
 uVar1 = call_include_guard();
 printf(DAT_00101848,(ulong)uVar1);
 uVar1 = call_builtin_macros();
 printf(DAT_00101864,(ulong)uVar1);
 return;
}



/* Function: param_asm_basic @ 00100f64 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[???] */
 return x + 10;
}



/* Function: call_asm_basic @ 00100f84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 int iVar1;
 
 iVar1 = param_asm_basic(5);
 return iVar1;
}



/* Function: param_asm_clobber @ 00100f9c */

int param_asm_clobber(int *arr,int n)

{
 int local_14;
 int local_10;
 
 /* Unresolved local var: int sum@[???] */
 local_10 = 0;
 /* Unresolved local var: int i@[???] */
 for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
 local_10 = local_10 + arr[local_14];
 }
 return local_10;
}



/* Function: call_asm_clobber @ 00101000 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 int local_30 [8];
 
 /* Unresolved local var: int[5] arr@[DW_OP_breg31(sp): 0] */
 local_30[2] = 3;
 local_30[3] = 4;
 local_30[0] = 1;
 local_30[1] = 2;
 local_30[4] = 5;
 iVar1 = param_asm_clobber(local_30,5);
 return iVar1;
}



/* Function: param_asm_multi_insn @ 0010103c */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00101070 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 bool bVar1;
 int iVar2;
 undefined8 local_40;
 undefined8 uStack_38;
 undefined8 local_30;
 undefined8 uStack_28;
 char local_20 [16];
 
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[DW_OP_breg31(sp): +16] */
 strncpy(local_20,"Hello ASM",10);
 uStack_38 = 0;
 local_40 = 0;
 uStack_28 = 0;
 local_30 = 0;
 param_asm_multi_insn(&local_40,local_20,9);
 bVar1 = false;
 if ((char)local_40 == 'H') {
 bVar1 = ((unsigned char *)&local_40)[4] == 'o';
 }
 iVar2 = 0x2a;
 if (!bVar1) {
 iVar2 = -1;
 }
 return iVar2;
}



/* Function: param_asm_simd @ 001010f8 */

int param_asm_simd(int *a,int *b,int *result)

{
 int local_1c;
 
 /* Unresolved local var: int i@[???] */
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 result[local_1c] = a[local_1c] + b[local_1c];
 }
 return 0;
}



/* Function: param_simd_intrinsics @ 00101168 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int local_1c;
 
 /* Unresolved local var: int i@[???] */
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 result[local_1c] = a[local_1c] + b[local_1c];
 }
 return 0;
}



/* Function: call_asm_simd @ 001011d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 int local_30 [8];
 
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[DW_OP_breg31(sp): +16]
 Unresolved local var: int[4] result@[DW_OP_breg31(sp): 0] */
 local_30[6] = 3;
 local_30[7] = 4;
 local_30[4] = 1;
 local_30[5] = 2;
 local_30[2] = 7;
 local_30[3] = 8;
 local_30[0] = 5;
 local_30[1] = 6;
 param_asm_simd(local_30 + 4,local_30,&local_40);
 return local_40 + local_3c + local_38 + local_34;
}



/* Function: param_asm_atomic @ 0010123c */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[DW_OP_breg31(sp): +16] */
 iVar1 = custom_aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00101288 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = custom_aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 001012cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int new_val@[DW_OP_breg31(sp): +8] */
 local_14 = 10;
 iVar1 = param_asm_atomic(&local_14,5);
 return local_14 + iVar1;
}



/* Function: param_dynamic_code @ 00101308 */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 undefined4 local_14;
 
 /* Unresolved local var: size_t page_size@[DW_OP_breg31(sp): +16]
 Unresolved local var: void * exec_mem@[DW_OP_breg31(sp): +8]
 Unresolved local var: int result@[DW_OP_breg31(sp): +4] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 local_14 = -1;
 }
 else {
 local_14 = x + 5;
 munmap(__addr,__len);
 }
 return local_14;
}



/* Function: param_memory_protection @ 00101394 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 int *__addr;
 undefined4 local_14;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[DW_OP_breg31(sp): +24]
 Unresolved local var: int * data@[DW_OP_breg31(sp): +16]
 Unresolved local var: int value@[DW_OP_breg31(sp): +12] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (int *)0xffffffffffffffff) {
 local_14 = -1;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 local_14 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 local_14 = -3;
 }
 }
 else {
 munmap(__addr,__len);
 local_14 = -2;
 }
 }
 return local_14;
}



/* Function: param_clobber_importance @ 0010149c */

int param_clobber_importance(int a,int b)

{
 return (a + b) * 2;
}



/* Function: call_asm_privileged @ 001014c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 /* Unresolved local var: int r1@[DW_OP_breg31(sp): +8]
 Unresolved local var: int r2@[DW_OP_breg31(sp): +4]
 Unresolved local var: int r3@[DW_OP_breg31(sp): 0] */
 local_14 = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_14 == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_14 = 0x4d;
 }
 return local_14;
}



/* Function: param_memory_clobber_demo @ 00101548 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101574 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 uint uVar1;
 
 printf(DAT_00101897);
 uVar1 = call_asm_basic();
 printf(DAT_001018c2,(ulong)uVar1);
 uVar1 = call_asm_clobber();
 printf(DAT_001018de,(ulong)uVar1);
 uVar1 = call_asm_multi_insn();
 printf(DAT_001018fa,(ulong)uVar1);
 uVar1 = call_asm_simd();
 printf(DAT_00101916,(ulong)uVar1);
 uVar1 = call_asm_atomic();
 printf(DAT_00101932,(ulong)uVar1);
 uVar1 = call_asm_privileged();
 printf(DAT_0010194e,(ulong)uVar1);
 return;
}



/* Function: main @ 00101608 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: ExclusiveMonitorPass @ 00101618 */

bool ExclusiveMonitorPass(void *addr, size_t size)

{
 uint64_t tmp;
 
 __asm__ __volatile__ (
 "ldxr %0, [%1]"
 : "=&r" (tmp)
 : "r" (addr)
 : "memory"
 );
 return true;
}



/* Function: ExclusiveMonitorsStatus @ 00101624 */

char ExclusiveMonitorsStatus(void)

{
 uint64_t tmp;
 
 __asm__ __volatile__ (
 "stxr %w0, %1, [%2]"
 : "=&r" (tmp)
 : "r" (0), "r" (0)
 : "memory"
 );
 return (char)tmp;
}



/* Function: LOAcquire @ 00101630 */

void LOAcquire(void)

{
 __asm__ __volatile__ (
 "dmb ish"
 :::
 );
 return;
}



/* Function: LORelease @ 00101638 */

void LORelease(void)

{
 __asm__ __volatile__ (
 "dmb ish"
 :::
 );
 return;
}



/* Function: custom_aarch64_ldadd4_acq_rel @ 00101640 */

static int custom_aarch64_ldadd4_acq_rel(int param_1,int *param_2)

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




/* Total functions decompiled: 55 */
