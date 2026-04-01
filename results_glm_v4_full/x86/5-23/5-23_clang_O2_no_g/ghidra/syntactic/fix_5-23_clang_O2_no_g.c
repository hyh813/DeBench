/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions for decompiled code compatibility */
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef void undefined;
typedef void (*code)(void);

/* Standard library includes */
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>

/* Placeholder macros for LOCK/UNLOCK */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

/* String constants */
#define DAT_000122c9 "=== Preprocessing Features ===\n"
#define DAT_000120cb "Macro constants: %d\n"
#define DAT_000120e6 "Macro functions: %d\n"
#define DAT_00012101 "Conditional compile: %d\n"
#define DAT_0001211c "Multi-branch compile: %d\n"
#define DAT_0001213b "Macro recursion: %d\n"
#define DAT_00012157 "Stringize: %d\n"
#define DAT_00012181 "Token paste: %d\n"
#define DAT_0001219c "Variadic macro: %d\n"
#define DAT_000121b7 "Macro override: %d\n"
#define DAT_000121d2 "Include guard: %d\n"
#define DAT_000121ee "Builtin macros: %d\n"
#define DAT_000122f0 "=== Assembly Features ===\n"
#define DAT_00012221 "Basic ASM: %d\n"
#define DAT_0001223d "ASM clobber: %d\n"
#define DAT_00012259 "ASM multi-insn: %d\n"
#define DAT_00012275 "ASM SIMD: %d\n"
#define DAT_00012291 "ASM atomic: %d\n"
#define DAT_000122ad "ASM privileged: %d\n"

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_clang_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 000110ec */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110f0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011229 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001122d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_macro_constants @ 00011240 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00011260 */

undefined4 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00011270 */

int param_macro_functions(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00011290 */

undefined4 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 000112a0 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 000112b0 */

undefined4 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 000112c0 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 000112d0 */

undefined4 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 000112e0 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 000112f0 */

undefined4 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00011300 */

undefined4 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00011310 */

undefined4 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00011320 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00011330 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00011340 */

undefined4 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00011350 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00011390 */

undefined4 call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 000113c0 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 000113d0 */

undefined4 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 000113e0 */

undefined4 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 000113f0 */

undefined4 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00011400 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:13");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00011450 */

undefined4 call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:13");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 000114a0 */

void test_preprocessing_features(void)

{
 puts(&DAT_000122c9);
 printf(&DAT_000120cb,0x40);
 printf(&DAT_000120e6,0x1e);
 printf(&DAT_00012101,0x20);
 printf(&DAT_0001211c,0xdf22);
 printf(&DAT_0001213b,0x74);
 printf(&DAT_00012157,0x13);
 printf(&DAT_00012181,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_0001219c,0x3c);
 printf(&DAT_000121b7,0x10);
 printf(&DAT_000121d2,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:13");
 printf(&DAT_000121ee,0x17e);
 return;
}



/* Function: param_asm_basic @ 000115d0 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 000115e0 */

undefined4 call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 000115f0 */

int param_asm_clobber(int param_1,int param_2)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00011610 */

int call_asm_clobber(void)

{
 int iVar1;
 int iVar2;
 int local_1c [6];
 
 local_1c[4] = 5;
 local_1c[0] = 1;
 local_1c[1] = 2;
 local_1c[2] = 3;
 local_1c[3] = 4;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + local_1c[iVar2];
 }
 return iVar1;
}



/* Function: param_asm_multi_insn @ 00011660 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011680 */

undefined4 call_asm_multi_insn(void)

{
 undefined4 uVar1;
 char *pcVar2;
 char *pcVar3;
 int iVar4;
 char local_38 [12];
 char local_2c [40];
 
 strncpy(local_38 + 4,"o ASM",6);
 strncpy(local_38,"Hell",4);
 local_2c[0x10] = '\0';
 local_2c[0x11] = '\0';
 local_2c[0x12] = '\0';
 local_2c[0x13] = '\0';
 local_2c[0x14] = '\0';
 local_2c[0x15] = '\0';
 local_2c[0x16] = '\0';
 local_2c[0x17] = '\0';
 local_2c[0x18] = '\0';
 local_2c[0x19] = '\0';
 local_2c[0x1a] = '\0';
 local_2c[0x1b] = '\0';
 local_2c[0x1c] = '\0';
 local_2c[0x1d] = '\0';
 local_2c[0x1e] = '\0';
 local_2c[0x1f] = '\0';
 local_2c[0] = '\0';
 local_2c[1] = '\0';
 local_2c[2] = '\0';
 local_2c[3] = '\0';
 local_2c[4] = '\0';
 local_2c[5] = '\0';
 local_2c[6] = '\0';
 local_2c[7] = '\0';
 local_2c[8] = '\0';
 local_2c[9] = '\0';
 local_2c[10] = '\0';
 local_2c[0xb] = '\0';
 local_2c[0xc] = '\0';
 local_2c[0xd] = '\0';
 local_2c[0xe] = '\0';
 local_2c[0xf] = '\0';
 pcVar2 = local_2c;
 pcVar3 = local_38;
 for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
 *pcVar2 = *pcVar3;
 pcVar2 = pcVar2 + 1;
 pcVar3 = pcVar3 + 1;
 }
 uVar1 = 0xffffffff;
 if (local_2c[4] == 'o' && local_2c[0] == 'H') {
 uVar1 = 0x2a;
 }
 return uVar1;
}



/* Function: param_asm_simd @ 000116f0 */

undefined4 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar1 = param_1[1];
 iVar2 = param_1[2];
 iVar3 = param_1[3];
 iVar4 = param_2[1];
 iVar5 = param_2[2];
 iVar6 = param_2[3];
 *param_3 = *param_1 + *param_2;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}



/* Function: param_simd_intrinsics @ 00011710 */

undefined4 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar1 = param_2[1];
 iVar2 = param_2[2];
 iVar3 = param_2[3];
 iVar4 = param_1[1];
 iVar5 = param_1[2];
 iVar6 = param_1[3];
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}



/* Function: call_asm_simd @ 00011730 */

undefined4 call_asm_simd(void)

{
 return 0x24;
}



/* Function: param_asm_atomic @ 00011790 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 000117b0 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 000117d0 */

undefined4 call_asm_atomic(void)

{
 LOCK();
 UNLOCK();
 return 0x1e;
}



/* Function: param_dynamic_code @ 000117f0 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}



/* Function: param_memory_protection @ 00011860 */

undefined4 param_memory_protection(void)

{
 undefined4 uVar1;
 size_t __len;
 undefined4 *__addr;
 int iVar2;
 undefined4 uVar3;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 uVar3 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 uVar3 = 0xfffffffd;
 if (iVar2 == 0) {
 *__addr = 100;
 uVar3 = uVar1;
 }
 }
 munmap(__addr,__len);
 }
 return uVar3;
}



/* Function: param_clobber_importance @ 00011920 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00011940 */

undefined4 call_asm_privileged(void)

{
 size_t __len;
 void *__addr;
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 munmap(__addr,__len);
 uVar3 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = 0x4d;
 if (iVar1 != 0x2a) {
 uVar2 = uVar3;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: FUN_000119e5 @ 000119e5 */

int FUN_000119e5(void)

{
 int unaff_retaddr;
 
 return *(int *)(unaff_retaddr + 0x264b) + 0x32;
}



/* Function: test_asm_features @ 00011a00 */

void test_asm_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t __len;
 void *__addr;
 int iVar3;
 int *piVar4;
 undefined4 *puVar5;
 undefined4 uVar6;
 undefined4 local_5c;
 undefined4 uStack_58;
 undefined4 uStack_54;
 undefined4 uStack_50;
 int local_4c;
 undefined4 uStack_48;
 undefined4 uStack_44;
 undefined4 uStack_40;
 undefined4 local_3c;
 undefined4 uStack_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 
 puts(&DAT_000122f0);
 printf(&DAT_00012221,0xf);
 local_3c = 5;
 local_4c = 1;
 uStack_48 = 2;
 uStack_44 = 3;
 uStack_40 = 4;
 piVar4 = &local_4c;
 iVar1 = 0;
 for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
 iVar1 = iVar1 + piVar4[iVar3];
 }
 printf(&DAT_0001223d,iVar1);
 uStack_54 = 0x4d;
 uStack_58 = 0x5341206f;
 local_5c = 0x6c6c6548;
 local_3c = 0;
 uStack_38 = 0;
 uStack_34 = 0;
 uStack_30 = 0;
 local_4c = 0;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 puVar5 = &local_5c;
 for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
 *(undefined1 *)piVar4 = *(undefined1 *)puVar5;
 piVar4 = (int *)((int)piVar4 + 1);
 puVar5 = (undefined4 *)((int)puVar5 + 1);
 }
 uVar2 = 0x2a;
 uVar6 = 0xffffffff;
 if ((char)uStack_48 != 'o' || (char)local_4c != 'H') {
 uVar2 = 0xffffffff;
 }
 printf(&DAT_00012259,uVar2);
 local_4c = 1;
 uStack_48 = 2;
 uStack_44 = 3;
 uStack_40 = 4;
 local_5c = 5;
 uStack_58 = 6;
 uStack_54 = 7;
 uStack_50 = 8;
 local_2c = 6;
 uStack_28 = 8;
 uStack_24 = 10;
 uStack_20 = 0xc;
 printf(&DAT_00012275,0x24);
 LOCK();
 local_4c = 0xf;
 UNLOCK();
 printf(&DAT_00012291,0x1e);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 uVar6 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = 0x4d;
 if (iVar1 != 0x2a) {
 uVar2 = uVar6;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar6;
 }
 printf(&DAT_000122ad,uVar2);
 return;
}



/* Function: main @ 00011c10 */

int main(void)

{
	test_preprocessing_features();
	test_asm_features();
	return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 55 */
