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

/* Ghidra decompiler types */
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef void (*code)(void);

/* Atomic operation stubs */
#define LOCK()
#define UNLOCK()

/* External data references */
extern char DAT_00012088[];
extern char DAT_000120af[];
extern char DAT_000120ca[];
extern char DAT_000120e5[];
extern char DAT_00012100[];
extern char DAT_0001211f[];
extern char DAT_0001213c[];
extern char DAT_00012166[];
extern char DAT_00012181[];
extern char DAT_0001219c[];
extern char DAT_000121b7[];
extern char DAT_000121d4[];
extern char DAT_00012200[];
extern char DAT_0001222a[];
extern char DAT_00012246[];
extern char DAT_00012262[];
extern char DAT_0001227e[];
extern char DAT_0001229a[];
extern char DAT_000122b6[];
extern int global_var;

/* Data definitions */
char DAT_00012088[] = "Testing preprocessing features\n";
char DAT_000120af[] = "Macro constants result: %d\n";
char DAT_000120ca[] = "Macro functions result: %d\n";
char DAT_000120e5[] = "Conditional compile result: %d\n";
char DAT_00012100[] = "Multi branch compile result: %d\n";
char DAT_0001211f[] = "Macro recursion result: %d\n";
char DAT_0001213c[] = "Stringize result: %d\n";
char DAT_00012166[] = "Token paste result: %d\n";
char DAT_00012181[] = "Variadic macro result: %d\n";
char DAT_0001219c[] = "Macro override result: %d\n";
char DAT_000121b7[] = "Include guard result: %d\n";
char DAT_000121d4[] = "Builtin macros result: %d\n";
char DAT_00012200[] = "Testing ASM features\n";
char DAT_0001222a[] = "ASM basic result: %d\n";
char DAT_00012246[] = "ASM clobber result: %d\n";
char DAT_00012262[] = "ASM multi insn result: %d\n";
char DAT_0001227e[] = "ASM SIMD result: %d\n";
char DAT_0001229a[] = "ASM atomic result: %d\n";
char DAT_000122b6[] = "ASM privileged result: %d\n";
int global_var = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_gcc_O0_no_g
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




/* Function: __i686.get_pc_thunk.bx @ 0001119c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111a0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
 return;
}




/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: __x86.get_pc_thunk.dx @ 000112d9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
 return;
}



/* Function: __x86.get_pc_thunk.di @ 000112dd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
 return;
}



/* Function: param_macro_constants @ 000112e1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 else {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00011309 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_macro_constants(void)

{
 return param_macro_constants(0x800);
}



/* Function: param_macro_functions @ 00011329 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1 * param_1;
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1 + iVar1;
}



/* Function: call_macro_functions @ 00011351 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_macro_functions(void)

{
 return param_macro_functions(5,3);
}



/* Function: param_conditional_compile @ 00011370 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 0001139e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_conditional_compile(void)

{
 return param_conditional_compile(10);
}



/* Function: param_multi_branch_compile @ 000113bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 000113dd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_multi_branch_compile(void)

{
 return param_multi_branch_compile(10);
}



/* Function: param_macro_recursion @ 000113fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00011413 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_macro_recursion(void)

{
 return param_macro_recursion(100);
}



/* Function: param_stringize @ 00011430 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_stringize(void)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar3 + sVar1 + sVar2;
}



/* Function: call_stringize @ 00011499 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_stringize(void)

{
 return param_stringize();
}



/* Function: my_func @ 000114bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 000114db */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_token_paste(int param_1)

{
 int iVar1;
 
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 00011511 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_token_paste(void)

{
 return param_token_paste(5);
}



/* Function: param_variadic_macro @ 0001152e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 int iVar1;
 int in_GS_OFFSET;
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 param_1 = param_1 + 0x32;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 param_1 = __stack_chk_fail_local();
 }
 return param_1;
}



/* Function: call_variadic_macro @ 00011599 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_variadic_macro(void)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 000115c0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 000115ef */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_macro_override(void)

{
 return param_macro_override(5);
}



/* Function: header_func @ 0001160c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int header_func(int param_1)

{
 return param_1 * 100;
}



/* Function: param_include_guard @ 00011625 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void param_include_guard(void)

{
 header_func(5);
 return;
}



/* Function: call_include_guard @ 00011642 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_include_guard(void)

{
 param_include_guard();
 return 0;
}



/* Function: param_builtin_macros @ 0001165a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","02:59:46");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 000116ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_builtin_macros(void)

{
 return param_builtin_macros(100);
}



/* Function: test_preprocessing_features @ 00011711 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_preprocessing_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012088);
 uVar1 = call_macro_constants();
 printf(&DAT_000120af,uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_000120ca,uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_000120e5,uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_00012100,uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_0001211f,uVar1);
 uVar1 = call_stringize();
 printf(&DAT_0001213c,uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00012166,uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_00012181,uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_0001219c,uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_000121b7,uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_000121d4,uVar1);
 return;
}



/* Function: param_asm_basic @ 00011847 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 0001186d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_asm_basic(void)

{
 param_asm_basic(5);
 return;
}



/* Function: param_asm_clobber @ 0001188a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: call_asm_clobber @ 000118c7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_asm_clobber(void)

{
 int in_GS_OFFSET;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 1;
 local_20 = 2;
 local_1c = 3;
 local_18 = 4;
 local_14 = 5;
 param_asm_clobber(&local_24,5);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}



/* Function: param_asm_multi_insn @ 0001192a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011969 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_asm_multi_insn(void)

{
 undefined4 uVar1;
 int in_GS_OFFSET;
 undefined4 local_3a;
 undefined4 local_36;
 undefined2 local_32;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 undefined4 local_18;
 undefined4 local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_3a = 0x6c6c6548;
 local_36 = 0x5341206f;
 local_32 = 0x4d;
 local_30 = 0;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 param_asm_multi_insn(&local_30,&local_3a,9);
 if (((char)local_30 == 'H') && ((char)local_2c == 'o')) {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = __stack_chk_fail_local();
 }
 return uVar1;
}



/* Function: param_asm_simd @ 00011a15 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: param_simd_intrinsics @ 00011a43 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar4 + iVar1;
 param_3[2] = iVar5 + iVar2;
 param_3[3] = iVar6 + iVar3;
 return 0;
}



/* Function: call_asm_simd @ 00011abf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_asm_simd(void)

{
 int in_GS_OFFSET;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_40 = 1;
 local_3c = 2;
 local_38 = 3;
 local_34 = 4;
 local_30 = 5;
 local_2c = 6;
 local_28 = 7;
 local_24 = 8;
 param_asm_simd(&local_40,&local_30,&local_20);
 local_14 = local_14 + local_20 + local_1c + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 local_14 = __stack_chk_fail_local();
 }
 return local_14;
}



/* Function: param_asm_atomic @ 00011b4f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}



/* Function: param_atomic_c11 @ 00011b7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}



/* Function: call_asm_atomic @ 00011b9c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_asm_atomic(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 10;
 local_14 = param_asm_atomic(&local_18,5);
 iVar1 = local_14 + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: param_dynamic_code @ 00011bee */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: param_memory_protection @ 00011c5e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_memory_protection(void)

{
 size_t __len;
 undefined4 *__addr;
 undefined4 uVar1;
 int iVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffff) {
 uVar1 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 if (iVar2 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 uVar1 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 uVar1 = 0xfffffffe;
 }
 }
 return uVar1;
}



/* Function: param_clobber_importance @ 00011d46 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00011d82 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: param_memory_clobber_demo @ 00011dde */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00011e0f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_asm_features(void)

{
 undefined4 uVar1;
 
 puts(&DAT_00012200);
 call_asm_basic();
 uVar1 = 0;
 printf(&DAT_0001222a,uVar1);
 call_asm_clobber();
 uVar1 = 0;
 printf(&DAT_00012246,uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00012262,uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_0001227e,uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_0001229a,uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_000122b6,uVar1);
 return;
}



/* Function: main @ 00011ecd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00011ef2 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
 undefined4 unaff_retaddr;
 
 return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00011ef6 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011f00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 59 */
