/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stdint.h>
#include <stddef.h>

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned char undefined1;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001110c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011110 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 00011249 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 0001124d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_macro_constants @ 00011260 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 local_8;
 
 if (param_1 < 0x401) {
 local_8 = 0x200;
 }
 else {
 local_8 = 0x40;
 }
 return local_8;
}



/* Function: call_macro_constants @ 00011290 */

undefined4 call_macro_constants(void)

{
 return param_macro_constants(0x800);
}



/* Function: param_macro_functions @ 000112c0 */

int param_macro_functions(int param_1,int param_2)

{
 undefined4 local_c;
 
 if (param_2 < param_1) {
 local_c = param_1;
 }
 else {
 local_c = param_2;
 }
 return param_1 * param_1 + local_c;
}



/* Function: call_macro_functions @ 00011300 */

int call_macro_functions(void)

{
 return param_macro_functions(5,3);
}



/* Function: param_conditional_compile @ 00011330 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00011350 */

int call_conditional_compile(void)

{
 return param_conditional_compile(10);
}



/* Function: param_multi_branch_compile @ 00011380 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 000113a0 */

int call_multi_branch_compile(void)

{
 return param_multi_branch_compile(10);
}



/* Function: param_macro_recursion @ 000113d0 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00011410 */

int call_macro_recursion(void)

{
 return param_macro_recursion(100);
}



/* Function: param_stringize @ 00011440 */

int param_stringize(void)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3;
}



/* Function: call_stringize @ 000114c0 */

int call_stringize(void)

{
 return param_stringize();
}



/* Function: my_func @ 000114f0 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00011500 */

int param_token_paste(int param_1)

{
 int iVar1;
 
 iVar1 = my_func(param_1);
 return param_1 + 5 + iVar1;
}



/* Function: call_token_paste @ 00011540 */

int call_token_paste(void)

{
 return param_token_paste(5);
}



/* Function: param_variadic_macro @ 00011570 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000115d0 */

int call_variadic_macro(void)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 00011610 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00011640 */

int call_macro_override(void)

{
 return param_macro_override(5);
}



/* Function: param_include_guard @ 00011670 */

/* Forward declaration */
int header_func(int param_1);

int param_include_guard(void)

{
 return header_func(5);
}



/* Function: header_func @ 000116a0 */

int header_func(int param_1)

{
 return param_1 * 100;
}



/* Function: call_include_guard @ 000116b0 */

int call_include_guard(void)

{
 return param_include_guard();
}



/* Function: param_builtin_macros @ 000116d0 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:06");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00011780 */

int call_builtin_macros(void)

{
 return param_builtin_macros(100);
}



/* Data strings for printf format */
static const char DAT_00013099[] = "Testing preprocessing features\n";
static const char DAT_000130c1[] = "Macro constants result: %d\n";
static const char DAT_000130dc[] = "Macro functions result: %d\n";
static const char DAT_000130f7[] = "Conditional compile result: %d\n";
static const char DAT_00013112[] = "Multi branch compile result: %d\n";
static const char DAT_00013131[] = "Macro recursion result: %d\n";
static const char DAT_0001314d[] = "Stringize result: %d\n";
static const char DAT_00013177[] = "Token paste result: %d\n";
static const char DAT_00013192[] = "Variadic macro result: %d\n";
static const char DAT_000131ad[] = "Macro override result: %d\n";
static const char DAT_000131c8[] = "Include guard result: %d\n";
static const char DAT_000131e4[] = "Builtin macros result: %d\n";

/* Function: test_preprocessing_features @ 000117b0 */

void test_preprocessing_features(void)

{
 undefined4 uVar1;
 
 printf(DAT_00013099);
 uVar1 = call_macro_constants();
 printf(DAT_000130c1,uVar1);
 uVar1 = call_macro_functions();
 printf(DAT_000130dc,uVar1);
 uVar1 = call_conditional_compile();
 printf(DAT_000130f7,uVar1);
 uVar1 = call_multi_branch_compile();
 printf(DAT_00013112,uVar1);
 uVar1 = call_macro_recursion();
 printf(DAT_00013131,uVar1);
 uVar1 = call_stringize();
 printf(DAT_0001314d,uVar1);
 uVar1 = call_token_paste();
 printf(DAT_00013177,uVar1);
 uVar1 = call_variadic_macro();
 printf(DAT_00013192,uVar1);
 uVar1 = call_macro_override();
 printf(DAT_000131ad,uVar1);
 uVar1 = call_include_guard();
 printf(DAT_000131c8,uVar1);
 uVar1 = call_builtin_macros();
 printf(DAT_000131e4,uVar1);
 return;
}



/* Function: param_asm_basic @ 00011920 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00011950 */

int call_asm_basic(void)

{
 return param_asm_basic(5);
}



/* Function: param_asm_clobber @ 00011980 */

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



/* Data for ASM clobber test */
static const char DAT_000132ec[] = "test data for clobber";

/* Function: call_asm_clobber @ 000119d0 */

int call_asm_clobber(void)

{
 undefined1 local_1c [20];
 
 memcpy(local_1c,DAT_000132ec,0x14);
 return param_asm_clobber(local_1c,5);
}



/* Function: param_asm_multi_insn @ 00011a20 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011a70 */

undefined4 call_asm_multi_insn(void)

{
 undefined4 uVar1;
 char local_32 [4];
 char local_2e;
 char local_12 [4];
 char local_e [4];
 char local_a [2];
 
 local_12[0] = 'H';
 local_12[1] = 'e';
 local_12[2] = 'l';
 local_12[3] = 'l';
 local_e[0] = 'o';
 local_e[1] = ' ';
 local_e[2] = 'A';
 local_e[3] = 'S';
 local_a[0] = 'M';
 local_a[1] = '\0';
 memset(local_32,0,0x20);
 param_asm_multi_insn(local_32,local_12,9);
 uVar1 = 0xffffffff;
 if (local_32[0] == 'H' && local_2e == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}



/* Function: param_asm_simd @ 00011b20 */

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



/* Function: param_simd_intrinsics @ 00011b50 */

undefined4 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

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



/* Function: call_asm_simd @ 00011bd0 */

int call_asm_simd(void)

{
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 undefined4 local_10;
 undefined4 local_c;
 
 local_18 = 1;
 local_14 = 2;
 local_10 = 3;
 local_c = 4;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 param_asm_simd(&local_18,&local_28,&local_38);
 return local_38 + local_34 + local_30 + local_2c;
}



/* Lock/Unlock macros for atomic operations */
#define LOCK()
#define UNLOCK()

/* Function: param_asm_atomic @ 00011c60 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00011c90 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00011cc0 */

int call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}



/* Function: param_dynamic_code @ 00011d00 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 undefined4 local_c;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 local_c = -1;
 }
 else {
 local_c = param_1 + 5;
 munmap(__addr,__len);
 }
 return local_c;
}



/* Function: param_memory_protection @ 00011db0 */

undefined4 param_memory_protection(void)

{
 size_t __len;
 undefined4 *__addr;
 int iVar1;
 undefined4 local_c;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffff) {
 local_c = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 local_c = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 local_c = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 local_c = 0xfffffffe;
 }
 }
 return local_c;
}



/* Function: param_clobber_importance @ 00011f00 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00011f40 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 local_c = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_c == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_c = 0x4d;
 }
 return local_c;
}



/* Global variable definition */
int global_var = 0;

/* Function: param_memory_clobber_demo @ 00011fd0 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Data strings for printf format */
static const char DAT_00013217[] = "Testing ASM features\n";
static const char DAT_00013242[] = "ASM basic result: %d\n";
static const char DAT_0001325e[] = "ASM clobber result: %d\n";
static const char DAT_0001327a[] = "ASM multi insn result: %d\n";
static const char DAT_00013296[] = "ASM SIMD result: %d\n";
static const char DAT_000132b2[] = "ASM atomic result: %d\n";
static const char DAT_000132ce[] = "ASM privileged result: %d\n";

/* Function: test_asm_features @ 00012010 */

void test_asm_features(void)

{
 undefined4 uVar1;
 
 printf(DAT_00013217);
 uVar1 = call_asm_basic();
 printf(DAT_00013242,uVar1);
 uVar1 = call_asm_clobber();
 printf(DAT_0001325e,uVar1);
 uVar1 = call_asm_multi_insn();
 printf(DAT_0001327a,uVar1);
 uVar1 = call_asm_simd();
 printf(DAT_00013296,uVar1);
 uVar1 = call_asm_atomic();
 printf(DAT_000132b2,uVar1);
 uVar1 = call_asm_privileged();
 printf(DAT_000132ce,uVar1);
 return;
}



/* Function: main @ 000120f0 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 56 */
