/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra types */
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>

/* External function declarations */
/* param_asm_simd and param_simd_intrinsics are defined in assembly */
extern undefined8 param_asm_simd(long, long, long);
extern undefined8 param_simd_intrinsics(long, long, long);
extern int call_asm_simd(void);
extern int call_asm_clobber(void);
extern undefined8 call_asm_multi_insn(void);
extern undefined8 call_asm_privileged(void);

/* Inline implementations for param_asm_simd and param_simd_intrinsics */
undefined8 param_asm_simd(long param_1, long param_2, long param_3)
{
    undefined4 local_4;
    
    for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
        *(int *)(param_3 + (long)local_4 * 4) =
            *(int *)(param_1 + (long)local_4 * 4) + *(int *)(param_2 + (long)local_4 * 4);
    }
    return 0;
}

undefined8 param_simd_intrinsics(long param_1, long param_2, long param_3)
{
    undefined4 local_4;
    
    for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
        *(int *)(param_3 + (long)local_4 * 4) =
            *(int *)(param_1 + (long)local_4 * 4) + *(int *)(param_2 + (long)local_4 * 4);
    }
    return 0;
}
char __aarch64_have_lse_atomics;

/* Additional CRT/system declarations */
extern unsigned long __getauxval(unsigned long);
extern void __cxa_finalize(void *);
extern void *__dso_handle;
extern void deregister_tm_clones(void);

/* Global variable definitions */
char completed_0 = 0;

/* Stack protection - define the guard symbol */
unsigned long long ___stack_chk_guard = 0;

/* Stub for stack chk fail - called when stack buffer overflow detected */
void __stack_chk_fail(void)
{
    abort();
}

/* ARM64 atomic operations */
extern int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
extern int ExclusiveMonitorPass(void *addr, int val);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);

/* Stub implementations for atomic operations */
int ExclusiveMonitorPass(void *addr, int val)
{
    return 0;
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



/* Stub implementation for __getauxval - returns 0 for unknown features */
unsigned long __getauxval(unsigned long type)
{
    /* Return 0 to indicate LSE atomics are not available, causing fallback to LL/SC */
    return 0;
}

/* Global variables */
int global_var = 0;

/* Data symbols from binary */
extern const char DAT_00101840[];
extern const char DAT_00101868[];
extern const char DAT_00101888[];
extern const char DAT_001018a8[];
extern const char DAT_001018c8[];
extern const char DAT_001018e8[];
extern const char DAT_00101908[];
extern const char DAT_00101938[];
extern const char DAT_00101958[];
extern const char DAT_00101978[];
extern const char DAT_00101998[];
extern const char DAT_001019b8[];
extern const char DAT_00101a10[];
extern const char DAT_00101a40[];
extern const char DAT_00101a60[];
extern const char DAT_00101a80[];
extern const char DAT_00101aa0[];
extern const char DAT_00101ac0[];
extern const char DAT_00101ae0[];

/* Standard library function - use strncpy from string.h */

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100880 @ 00100880 */

void FUN_00100880(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00100980 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00100ad4 */

undefined8 param_macro_constants(int param_1)

{
 undefined8 uVar1;
 
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 else {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00100afc */

int call_macro_constants(void)

{
 return param_macro_constants(0x800);
}



/* Function: param_macro_functions @ 00100b14 */

int param_macro_functions(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 00100b48 */

void call_macro_functions(void)

{
 param_macro_functions(5,3);
 return;
}



/* Function: param_conditional_compile @ 00100b64 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100b98 */

void call_conditional_compile(void)

{
 param_conditional_compile(10);
 return;
}



/* Function: param_multi_branch_compile @ 00100bb0 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100bd8 */

void call_multi_branch_compile(void)

{
 param_multi_branch_compile(10);
 return;
}



/* Function: param_macro_recursion @ 00100bf0 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100c08 */

void call_macro_recursion(void)

{
 param_macro_recursion(100);
 return;
}



/* Function: param_stringize @ 00100c20 */

int param_stringize(void)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return (int)sVar1 + (int)sVar2 + (int)sVar3;
}



/* Function: call_stringize @ 00100c84 */

void call_stringize(void)

{
 param_stringize();
 return;
}



/* Function: my_func @ 00100c9c */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100cc0 */

int param_token_paste(int param_1)

{
 int iVar1;
 
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 00100d00 */

void call_token_paste(void)

{
 param_token_paste(5);
 return;
}



/* Function: param_variadic_macro @ 00100d18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_variadic_macro(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
 long lVar1;
 
 lVar1 = ___stack_chk_guard;
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,(ulong)param_2,(ulong)param_3);
 if (lVar1 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100db0 */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}



/* Function: param_macro_override @ 00100dd0 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100e04 */

void call_macro_override(void)

{
 param_macro_override(5);
 return;
}



/* Function: header_func @ 00100e1c */

int header_func(int param_1)

{
 return param_1 * 100;
}



/* Function: param_include_guard @ 00100e38 */

void param_include_guard(void)

{
 header_func(5);
 return;
}



/* Function: call_include_guard @ 00100e50 */

void call_include_guard(void)

{
 param_include_guard();
 return;
}



/* Function: param_builtin_macros @ 00100e64 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:26");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100f08 */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* Function: test_preprocessing_features @ 00100f20 */

int test_preprocessing_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = puts(DAT_00101840);
 call_macro_constants();
 iVar1 = printf(DAT_00101868,iVar1);
 call_macro_functions();
 iVar1 = printf(DAT_00101888,iVar1);
 call_conditional_compile();
 iVar1 = printf(DAT_001018a8,iVar1);
 call_multi_branch_compile();
 iVar1 = printf(DAT_001018c8,iVar1);
 call_macro_recursion();
 iVar1 = printf(DAT_001018e8,iVar1);
 call_stringize();
 iVar1 = printf(DAT_00101908,iVar1);
 call_token_paste();
 iVar1 = printf(DAT_00101938,iVar1);
 call_variadic_macro();
 iVar1 = printf(DAT_00101958,iVar1);
 call_macro_override();
 iVar1 = printf(DAT_00101978,iVar1);
 call_include_guard();
 iVar1 = printf(DAT_00101998,iVar1);
 call_builtin_macros();
 iVar1 = printf(DAT_001019b8,iVar1);
 return iVar1;
}



/* Function: param_asm_basic @ 0010101c */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 0010103c */

void call_asm_basic(void)

{
 param_asm_basic(5);
 return;
}



/* Function: param_asm_clobber @ 00101054 */

int param_asm_clobber(long param_1,int param_2)

{
 undefined4 local_8;
 undefined4 local_4;
 
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
 }
 return local_8;
}



/* Function: call_asm_clobber @ 001010b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_clobber(void)

{
 int uVar1;
 undefined8 local_20;
 undefined8 uStack_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = param_asm_clobber((long)&local_20,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: param_asm_multi_insn @ 0010112c */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return;
}



/* Function: call_asm_multi_insn @ 0010115c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_asm_multi_insn(void)

{
 undefined8 uVar1;
 char local_38 [16];
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 strncpy(local_38,"Hello ASM",10);
 local_38[9] = '\0';  /* Ensure null termination */
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 param_asm_multi_insn(&local_28,local_38,9);
 if (((char)local_28 == 'H') && (((local_28 >> 32) & 0xff) == 'o')) {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}







/* Function: call_asm_simd @ 001012f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_simd(void)

{
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 local_2c = 4;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 local_c = 0;
 param_asm_simd((long)&local_38,(long)&local_28,(long)&local_18);
 local_c = local_18 + local_14 + local_10 + local_c;
 local_c = local_18 + local_14 + local_10 + local_c;
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_c;
}



/* Function: param_asm_atomic @ 001013b0 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 001013e4 */

int param_atomic_c11(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00101414 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_atomic(void)

{
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_10 = 10;
 local_c = param_asm_atomic(&local_10,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return local_10 + local_c;
}



/* Function: param_dynamic_code @ 00101484 */

int param_dynamic_code(int param_1)

{
 long __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,(size_t)__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}



/* Function: param_memory_protection @ 001014f4 */

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
 munmap(__addr,__len);
 uVar2 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 001015d8 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 001015fc */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00101660 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101690 */

int test_asm_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = puts(DAT_00101a10);
 call_asm_basic();
 iVar1 = printf(DAT_00101a40,iVar1);
 uVar2 = call_asm_clobber();
 iVar1 = printf(DAT_00101a60,uVar2 & 0xffffffff);
 uVar2 = call_asm_multi_insn();
 iVar1 = printf(DAT_00101a80,uVar2 & 0xffffffff);
 uVar2 = call_asm_simd();
 iVar1 = printf(DAT_00101aa0,uVar2 & 0xffffffff);
 uVar2 = call_asm_atomic();
 iVar1 = printf(DAT_00101ac0,uVar2 & 0xffffffff);
 uVar2 = call_asm_privileged();
 iVar1 = printf(DAT_00101ae0,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00101728 */

undefined8 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101750 */

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




/* Total functions decompiled: 55 */
