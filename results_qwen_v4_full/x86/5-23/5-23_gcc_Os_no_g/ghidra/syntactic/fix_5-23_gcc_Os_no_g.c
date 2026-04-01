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

/* Ghidra type definitions */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned int undefined4;
typedef void (*code)(void);

/* External data declarations */
extern char DAT_0001206e[];
extern char DAT_00012096[];
extern char DAT_000120b1[];
extern char DAT_000120cc[];
extern char DAT_000120e7[];
extern char DAT_00012106[];
extern char DAT_00012122[];
extern char DAT_0001214c[];
extern char DAT_00012167[];
extern char DAT_00012182[];
extern char DAT_0001219d[];
extern char DAT_000121b9[];
extern char DAT_000121ec[];
extern char DAT_00012217[];
extern char DAT_00012233[];
extern char DAT_0001224f[];
extern char DAT_0001226b[];
extern char DAT_00012287[];
extern char DAT_000122a3[];
extern char DAT_000122c0[];
extern char DAT_000122d0[];
extern int global_var;

/* Define the missing DAT_ string arrays */
char DAT_0001206e[] = "=== Preprocessing Features Test ===\n";
char DAT_00012096[] = "Macro constants: %d\n";
char DAT_000120b1[] = "Macro functions: %d\n";
char DAT_000120cc[] = "Conditional compile: %d\n";
char DAT_000120e7[] = "Multi-branch compile: %d\n";
char DAT_00012106[] = "Macro recursion: %d\n";
char DAT_00012122[] = "Stringize: %d\n";
char DAT_0001214c[] = "Token paste: %d\n";
char DAT_00012167[] = "Macro override: %d\n";
char DAT_00012182[] = "Include guard: %d\n";
char DAT_0001219d[] = "Builtin macros: %d\n";
char DAT_000121b9[] = "Preprocessing test complete\n";
char DAT_000121ec[] = "=== ASM Features Test ===\n";
char DAT_00012217[] = "ASM basic: %d\n";
char DAT_00012233[] = "ASM clobber: %d\n";
char DAT_0001224f[] = "ASM multi-instruction: %d\n";
char DAT_0001226b[] = "ASM SIMD: %d\n";
char DAT_00012287[] = "ASM atomic: %d\n";
char DAT_000122a3[] = "ASM privileged: %d\n";
char DAT_000122c0[] = {1, 2, 3, 4};
char DAT_000122d0[] = {5, 6, 7, 8};

/* Define global_var */
int global_var = 0;

/* Macro definitions for LOCK/UNLOCK */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_gcc_Os_no_g
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



/* Function: main @ 00011130 */

undefined4 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _start removed by preprocessor */




/* Function: __i686.get_pc_thunk.bx @ 0001117c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011180 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112b9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112bd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_macro_constants @ 000112c1 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 000112de */

undefined4 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 000112e8 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1 * param_1;
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return iVar1 + param_1;
}



/* Function: call_macro_functions @ 00011303 */

undefined4 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 0001130d */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 0001131d */

undefined4 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00011327 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00011339 */

undefined4 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00011343 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00011352 */

undefined4 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 0001135c */

undefined4 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00011366 */

undefined4 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00011370 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 0001137d */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 0001138d */

undefined4 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00011397 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000113d0 */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}



/* Function: param_macro_override @ 000113e7 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 000113fa */

undefined4 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00011404 */

undefined4 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 0001140e */

undefined4 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00011418 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:02");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 0001146a */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* Function: test_preprocessing_features @ 0001147d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_preprocessing_features(void)

{
 undefined4 uVar1;
 
 __printf_chk(1,&DAT_0001206e);
 __printf_chk(1,&DAT_00012096,0x40);
 __printf_chk(1,&DAT_000120b1,0x1e);
 __printf_chk(1,&DAT_000120cc,0x20);
 __printf_chk(1,&DAT_000120e7,0xdf22);
 __printf_chk(1,&DAT_00012106,0x74);
 __printf_chk(1,&DAT_00012122,0x13);
 __printf_chk(1,&DAT_0001214c,0x3c);
 call_variadic_macro();
 __printf_chk(1,&DAT_00012167,0);
 __printf_chk(1,&DAT_00012182,0x10);
 __printf_chk(1,&DAT_0001219d,500);
 call_builtin_macros();
 __printf_chk(1,&DAT_000121b9,0);
 return;
}



/* Function: param_asm_basic @ 00011588 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 0001159d */

void call_asm_basic(void)

{
 param_asm_basic(5);
 return;
}



/* Function: param_asm_clobber @ 000115b0 */

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



/* Function: call_asm_clobber @ 000115d3 */

void call_asm_clobber(void)

{
 int in_GS_OFFSET;
 undefined1 local_24 [20];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 param_asm_clobber(local_24,5);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_asm_multi_insn @ 00011606 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011629 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_asm_multi_insn(void)

{
 undefined4 uVar1;
 int iVar2;
 char *pcVar3;
 char *pcVar4;
 int in_GS_OFFSET;
 char local_3a [10];
 undefined4 local_30;
 char local_2c [28];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_30 = 0;
 pcVar3 = "Hello ASM";
 pcVar4 = local_3a;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *pcVar4 = *pcVar3;
 pcVar3 = pcVar3 + 1;
 pcVar4 = pcVar4 + 1;
 }
 pcVar3 = local_2c;
 for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
 pcVar3[0] = '\0';
 pcVar3[1] = '\0';
 pcVar3[2] = '\0';
 pcVar3[3] = '\0';
 pcVar3 = pcVar3 + 4;
 }
 param_asm_multi_insn(&local_30,local_3a,9);
 uVar1 = 0xffffffff;
 if (((char)local_30 == 'H') && (local_2c[0] == 'o')) {
 uVar1 = 0x2a;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar1;
}



/* Function: param_asm_simd @ 000116ad */

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



/* Function: param_simd_intrinsics @ 000116ce */

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



/* Function: call_asm_simd @ 000116ec */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_asm_simd(void)

{
 int iVar1;
 undefined4 *puVar2;
 undefined4 *puVar3;
 int in_GS_OFFSET;
 undefined4 local_40 [4];
 undefined4 local_30 [4];
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar2 = &DAT_000122c0;
 puVar3 = local_40;
 for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 puVar2 = &DAT_000122d0;
 puVar3 = local_30;
 for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 param_asm_simd(local_40,local_30,&local_20);
 local_14 = local_20 + local_1c + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}



/* Function: param_asm_atomic @ 00011763 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}



/* Function: param_atomic_c11 @ 0001177a */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00011791 */

undefined4 call_asm_atomic(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 
 do {} while(0);
 do {} while(0);
 uVar1 = 0x1e;
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar1;
}



/* Function: param_dynamic_code @ 000117d3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 iVar1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 0001182d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_memory_protection(void)

{
 size_t __len;
 undefined4 *__addr;
 int iVar1;
 undefined4 uVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 uVar2 = 0xffffffff;
 if (__addr != (undefined4 *)0xffffffff) {
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



/* Function: param_clobber_importance @ 000118e5 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00011907 */

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



/* Function: param_memory_clobber_demo @ 0001194f */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00011970 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_asm_features(void)

{
 undefined4 uVar1;
 
 __printf_chk(1,&DAT_000121ec);
 call_asm_basic();
 __printf_chk(1,&DAT_00012217,0);
 call_asm_clobber();
 __printf_chk(1,&DAT_00012233,0);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0001224f,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0001226b,uVar1);
 call_asm_atomic();
 __printf_chk(1,&DAT_00012287,0);
 uVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_000122a3,uVar1);
 return;
}



/* Function: __x86.get_pc_thunk.ax @ 00011a26 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00011a2a */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011a30 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 __stack_chk_fail();
}

/* WARNING: Subroutine does not return */




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 58 */
