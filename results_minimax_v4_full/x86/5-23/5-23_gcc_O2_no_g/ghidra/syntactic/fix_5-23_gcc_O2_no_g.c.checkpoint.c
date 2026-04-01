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

/* Additional types from decompiler */
typedef char undefined;
typedef unsigned char undefined1;
typedef void (*code)(void);

/* Data references from binary */
extern char DAT_000121f4[];
extern int global_var;
extern char DAT_00012041[];
extern char DAT_0001205c[];
extern char DAT_00012077[];
extern char DAT_0001221c[];
extern char DAT_00012092[];
extern char DAT_0001223c[];
extern char DAT_000120ae[];
extern char DAT_000120c9[];
extern char DAT_000120e4[];
extern char DAT_000120ff[];
extern char DAT_00012268[];
extern char DAT_00012294[];
extern char DAT_0001211b[];
extern char DAT_00012137[];
extern char DAT_00012153[];
extern char DAT_0001216f[];
extern char DAT_0001218b[];
extern char DAT_000121a7[];

/* Data definitions */
char DAT_0001205c[] = "%d\n";
char DAT_0001223c[] = "%d\n";
char DAT_00012153[] = "%d\n";
char DAT_000120ff[] = "%d\n";
char DAT_00012077[] = "%d\n";
char DAT_0001211b[] = "%d\n";
char DAT_0001221c[] = "%d\n";
char DAT_0001216f[] = "%d\n";
char DAT_0001218b[] = "%d\n";
char DAT_000120c9[] = "%d\n";
char DAT_00012294[] = "%s\n";
char DAT_00012137[] = "%d\n";
char DAT_00012041[] = "%d\n";
char DAT_00012092[] = "%d\n";
char DAT_000120ae[] = "%d\n";
char DAT_000120e4[] = "%d\n";
char DAT_000121a7[] = "%d\n";
char DAT_000121f4[] = "Testing preprocessing features:\n";
char DAT_00012268[] = "%d\n";
int global_var = 0;

/* LOCK/UNLOCK - memory barrier functions for atomic operations */
void LOCK(void) {
    __asm__ __volatile__("" ::: "memory");
}

void UNLOCK(void) {
    __asm__ __volatile__("" ::: "memory");
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_gcc_O2_no_g
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

int main(void)

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



/* Function: param_macro_constants @ 000112d0 */

int param_macro_constants(int param_1)

{
 int uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 000112f0 */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00011300 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1 * param_1;
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return iVar1 + param_1;
}



/* Function: call_macro_functions @ 00011320 */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00011330 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00011340 */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00011350 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00011360 */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00011370 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00011380 */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00011390 */

int param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 000113a0 */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 000113b0 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 000113c0 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 000113d0 */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 000113e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_variadic_macro(int param_1,int param_2,int param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00011420 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_variadic_macro(void)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00011460 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00011470 */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00011480 */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00011490 */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 000114a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:54");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 000114f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_builtin_macros(void)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:54");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00011540 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_preprocessing_features(void)

{
 __printf_chk(1,&DAT_000121f4);
 __printf_chk(1,&DAT_00012041,0x40);
 __printf_chk(1,&DAT_0001205c,0x1e);
 __printf_chk(1,&DAT_00012077,0x20);
 __printf_chk(1,&DAT_0001221c,0xdf22);
 __printf_chk(1,&DAT_00012092,0x74);
 __printf_chk(1,&DAT_0001223c,0x13);
 __printf_chk(1,&DAT_000120ae,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,&DAT_000120c9,0x3c);
 __printf_chk(1,&DAT_000120e4,0x10);
 __printf_chk(1,&DAT_000120ff,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:54");
 __printf_chk(1,&DAT_00012268,0x17e);
 return;
}



/* Function: param_asm_basic @ 00011690 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 000116b0 */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 000116d0 */

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



/* Function: call_asm_clobber @ 00011700 */

int call_asm_clobber(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + local_24[iVar2];
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_asm_multi_insn @ 00011750 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,int param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011780 */

int call_asm_multi_insn(void)

{
 int uVar1;
 char *pcVar2;
 char *pcVar3;
 int iVar4;
 int in_GS_OFFSET;
 char local_3a [42];
 int local_10;
 
 iVar4 = 9;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(local_3a,"Hello ASM",10);
 pcVar3 = local_3a + 10;
 pcVar2 = local_3a;
 local_3a[10] = '\0';
 local_3a[0xb] = '\0';
 local_3a[0xc] = '\0';
 local_3a[0xd] = '\0';
 local_3a[0xe] = '\0';
 local_3a[0xf] = '\0';
 local_3a[0x10] = '\0';
 local_3a[0x11] = '\0';
 local_3a[0x12] = '\0';
 local_3a[0x13] = '\0';
 local_3a[0x14] = '\0';
 local_3a[0x15] = '\0';
 local_3a[0x16] = '\0';
 local_3a[0x17] = '\0';
 local_3a[0x18] = '\0';
 local_3a[0x19] = '\0';
 local_3a[0x1a] = '\0';
 local_3a[0x1b] = '\0';
 local_3a[0x1c] = '\0';
 local_3a[0x1d] = '\0';
 local_3a[0x1e] = '\0';
 local_3a[0x1f] = '\0';
 local_3a[0x20] = '\0';
 local_3a[0x21] = '\0';
 local_3a[0x22] = '\0';
 local_3a[0x23] = '\0';
 local_3a[0x24] = '\0';
 local_3a[0x25] = '\0';
 local_3a[0x26] = '\0';
 local_3a[0x27] = '\0';
 local_3a[0x28] = '\0';
 local_3a[0x29] = '\0';
 for (; iVar4 != 0; iVar4 = iVar4 + -1) {
 *pcVar3 = *pcVar2;
 pcVar3 = pcVar3 + 1;
 pcVar2 = pcVar2 + 1;
 }
 if (local_3a[10] == 'H') {
 uVar1 = 0xffffffff;
 if (local_3a[0xe] == 'o') {
 uVar1 = 0x2a;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_asm_simd @ 00011850 */

int param_asm_simd(int *param_1,int *param_2,int *param_3)

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



/* Function: param_simd_intrinsics @ 00011870 */

int param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

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



/* Function: call_asm_simd @ 00011890 */

int call_asm_simd(void)

{
 int in_GS_OFFSET;
 
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x24;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_asm_atomic @ 00011930 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}



/* Function: param_atomic_c11 @ 00011950 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00011970 */

int call_asm_atomic(void)

{
 int in_GS_OFFSET;
 
 LOCK();
 UNLOCK();
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x1e;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_dynamic_code @ 000119c0 */

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



/* Function: param_memory_protection @ 00011a20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_memory_protection(void)

{
 size_t __len;
 int *__addr;
 int iVar1;
 int uVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (int *)0xffffffff) {
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



/* Function: param_clobber_importance @ 00011af0 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00011b10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_asm_privileged(void)

{
 size_t __len;
 void *__addr;
 int iVar1;
 int uVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = 0xf;
 munmap(__addr,__len);
 }
 iVar1 = param_memory_protection();
 if ((iVar1 == 0x2a) && (__addr != (void *)0xffffffff)) {
 uVar2 = 0x4d;
 }
 return uVar2;
}



/* Function: param_memory_clobber_demo @ 00011bc0 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_asm_features(void)

{
 int iVar1;
 int uVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 int uStack_c;
 
 uStack_c = 0x11c00;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 __printf_chk(1,&DAT_00012294);
 __printf_chk(1,&DAT_0001211b,0xf);
 iVar1 = 0;
 for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
 iVar1 = iVar1 + local_24[iVar3];
 }
 __printf_chk(1,&DAT_00012137,iVar1);
 uVar2 = call_asm_multi_insn();
 __printf_chk(1,&DAT_00012153,uVar2);
 uVar2 = call_asm_simd();
 __printf_chk(1,&DAT_0001216f,uVar2);
 LOCK();
 UNLOCK();
 __printf_chk(1,&DAT_0001218b,0x1e);
 uVar2 = call_asm_privileged();
 __printf_chk(1,&DAT_000121a7,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.cx @ 00011cec */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
 return;
}



/* Function: __stack_chk_fail_local @ 00011cf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 57 */
