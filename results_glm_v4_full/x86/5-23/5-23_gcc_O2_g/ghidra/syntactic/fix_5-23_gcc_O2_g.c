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

/* External function declarations */
void LOCK(void);
void UNLOCK(void);

/* Stub implementations for LOCK/UNLOCK */
void LOCK(void) {
    /* Empty stub - synchronization primitive */
}

void UNLOCK(void) {
    /* Empty stub - synchronization primitive */
}

/* External string data declarations */
extern const char DAT_000121f4[];
extern const char DAT_00012041[];
extern const char DAT_0001205c[];
extern const char DAT_00012077[];
extern const char DAT_0001221c[];
extern const char DAT_00012092[];
extern const char DAT_0001223c[];
extern const char DAT_000120ae[];
extern const char DAT_000120c9[];
extern const char DAT_000120e4[];
extern const char DAT_000120ff[];
extern const char DAT_00012268[];
extern const char DAT_00012294[];
extern const char DAT_0001211b[];
extern const char DAT_00012137[];
extern const char DAT_00012153[];
extern const char DAT_0001216f[];
extern const char DAT_0001218b[];
extern const char DAT_000121a7[];

/* String data definitions */
const char DAT_000121f4[] = "Preprocessing Features:\n";
const char DAT_00012041[] = "call_macro_constants: %d\n";
const char DAT_0001205c[] = "call_macro_functions: %d\n";
const char DAT_00012077[] = "call_conditional_compile: %d\n";
const char DAT_0001221c[] = "call_multi_branch_compile: %d\n";
const char DAT_00012092[] = "call_macro_recursion: %d\n";
const char DAT_0001223c[] = "call_token_paste: %d\n";
const char DAT_000120ae[] = "call_stringize: %d\n";
const char DAT_000120c9[] = "call_variadic_macro: %d\n";
const char DAT_000120e4[] = "call_macro_override: %d\n";
const char DAT_000120ff[] = "call_include_guard: %d\n";
const char DAT_00012268[] = "call_builtin_macros: %d\n";
const char DAT_00012294[] = "ASM Features:\n";
const char DAT_0001211b[] = "call_asm_basic: %d\n";
const char DAT_00012137[] = "call_asm_clobber: %d\n";
const char DAT_00012153[] = "call_asm_multi_insn: %d\n";
const char DAT_0001216f[] = "call_asm_simd: %d\n";
const char DAT_0001218b[] = "call_asm_atomic: %d\n";
const char DAT_000121a7[] = "call_asm_privileged: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Global variable declarations */
int global_var;


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
 ((void (*)(void))0)();
 return;
}



/* Function: main @ 00011130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* WARNING: Unknown calling convention */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 000112f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00011300 */

/* WARNING: Unknown calling convention */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x * x;
 if (x < y) {
 x = y;
 }
 return iVar1 + x;
}



/* Function: call_macro_functions @ 00011320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00011330 */

/* WARNING: Unknown calling convention */

int param_conditional_compile(int x)

{
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00011340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00011350 */

/* WARNING: Unknown calling convention */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00011360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00011370 */

/* WARNING: Unknown calling convention */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00011380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00011390 */

/* WARNING: Unknown calling convention */

int param_stringize(int value)

{
 return 0x13;
}



/* Function: call_stringize @ 000113a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 000113b0 */

/* WARNING: Unknown calling convention */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 000113c0 */

/* WARNING: Unknown calling convention */

int param_token_paste(int x)

{
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 000113e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_variadic_macro(int x,int y,int z)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00011420 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00011460 */

/* WARNING: Unknown calling convention */

int param_macro_override(int x)

{
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00011470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00011480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
/* WARNING: Unknown calling convention */

int param_builtin_macros(int x)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:51");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 000114f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:51");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00011540 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,&DAT_000120c9,0x3c);
 __printf_chk(1,&DAT_000120e4,0x10);
 __printf_chk(1,&DAT_000120ff,500);
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:51");
 __printf_chk(1,&DAT_00012268,0x17e);
 return;
}



/* Function: param_asm_basic @ 00011690 */

/* WARNING: Unknown calling convention */

int param_asm_basic(int x)

{
 return x + 10;
}



/* Function: call_asm_basic @ 000116b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 /* Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_asm_clobber @ 000116d0 */

/* WARNING: Unknown calling convention */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 int iVar2;
 
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < n; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + arr[iVar2];
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00011700 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int arr [5];
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + arr[iVar2];
 }
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_asm_multi_insn @ 00011750 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 for (; n != 0; n = n - 1) {
 *(uint8_t *)dst = *(uint8_t *)src;
 dst = (void *)((int)dst + 1);
 src = (void *)((int)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 int iVar1;
 char *pcVar2;
 char *pcVar3;
 int iVar4;
 int in_GS_OFFSET;
 char src [10];
 char dst [32];
 
 iVar4 = 9;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 strncpy(src,"Hello ASM",10);
 src[9] = '\0';
 pcVar3 = dst;
 pcVar2 = src;
 dst[0] = '\0';
 dst[1] = '\0';
 dst[2] = '\0';
 dst[3] = '\0';
 dst[4] = '\0';
 dst[5] = '\0';
 dst[6] = '\0';
 dst[7] = '\0';
 dst[8] = '\0';
 dst[9] = '\0';
 dst[10] = '\0';
 dst[0xb] = '\0';
 dst[0xc] = '\0';
 dst[0xd] = '\0';
 dst[0xe] = '\0';
 dst[0xf] = '\0';
 dst[0x10] = '\0';
 dst[0x11] = '\0';
 dst[0x12] = '\0';
 dst[0x13] = '\0';
 dst[0x14] = '\0';
 dst[0x15] = '\0';
 dst[0x16] = '\0';
 dst[0x17] = '\0';
 dst[0x18] = '\0';
 dst[0x19] = '\0';
 dst[0x1a] = '\0';
 dst[0x1b] = '\0';
 dst[0x1c] = '\0';
 dst[0x1d] = '\0';
 dst[0x1e] = '\0';
 dst[0x1f] = '\0';
 for (; iVar4 != 0; iVar4 = iVar4 + -1) {
 *pcVar3 = *pcVar2;
 pcVar3 = pcVar3 + 1;
 pcVar2 = pcVar2 + 1;
 }
 if (dst[0] == 'H') {
 iVar4 = -1;
 if (dst[4] == 'o') {
 iVar4 = 0x2a;
 }
 }
 else {
 iVar4 = -1;
 }
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar4;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_asm_simd @ 00011850 */

/* WARNING: Unknown calling convention */

int param_asm_simd(int *a,int *b,int *result)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar1 = a[1];
 iVar2 = a[2];
 iVar3 = a[3];
 iVar4 = b[1];
 iVar5 = b[2];
 iVar6 = b[3];
 *result = *a + *b;
 result[1] = iVar1 + iVar4;
 result[2] = iVar2 + iVar5;
 result[3] = iVar3 + iVar6;
 return 0;
}



/* Function: param_simd_intrinsics @ 00011870 */

/* WARNING: Unknown calling convention */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 iVar1 = b[1];
 iVar2 = b[2];
 iVar3 = b[3];
 iVar4 = a[1];
 iVar5 = a[2];
 iVar6 = a[3];
 *result = *b + *a;
 result[1] = iVar1 + iVar4;
 result[2] = iVar2 + iVar5;
 result[3] = iVar3 + iVar6;
 return 0;
}



/* Function: call_asm_simd @ 00011890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int in_GS_OFFSET;
 int a [4];
 int b [4];
 int result [4];
 
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x24;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail_local();
}



/* Function: param_asm_atomic @ 00011930 */

/* WARNING: Unknown calling convention */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return increment + iVar1;
}



/* Function: param_atomic_c11 @ 00011950 */

/* WARNING: Unknown calling convention */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00011970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int in_GS_OFFSET;
 int counter;
 
 /* Unresolved local var: int old_value@[???] */
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
/* WARNING: Unknown calling convention */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 iVar1 = -1;
 }
 else {
 iVar1 = x + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00011a20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 size_t __len;
 int *__addr;
 int iVar1;
 int iVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (int *)0xffffffff) {
 iVar1 = -1;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 iVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 if (iVar2 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 iVar1 = -3;
 munmap(__addr,__len);
 }
 }
 else {
 iVar1 = -2;
 munmap(__addr,__len);
 }
 }
 return iVar1;
}



/* Function: param_clobber_importance @ 00011af0 */

/* WARNING: Unknown calling convention */

int param_clobber_importance(int a,int b)

{
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00011b10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 size_t __len;
 void *__addr;
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 iVar2 = -1;
 }
 else {
 iVar2 = 0xf;
 munmap(__addr,__len);
 }
 iVar1 = param_memory_protection();
 /* Unresolved local var: int result1@[???]
 Unresolved local var: int result2@[???] */
 if ((iVar1 == 0x2a) && (__addr != (void *)0xffffffff)) {
 iVar2 = 0x4d;
 }
 return iVar2;
}



/* Function: param_memory_clobber_demo @ 00011bc0 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int in_GS_OFFSET;
 int counter;
 int arr [5];
 
 /* Unresolved local var: int result@[???] */
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 __printf_chk(1,&DAT_00012294);
 __printf_chk(1,&DAT_0001211b,0xf);
 /* Unresolved local var: int sum@[???] */
 iVar2 = 0;
 for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
 iVar2 = iVar2 + arr[iVar3];
 }
 __printf_chk(1,&DAT_00012137,iVar2);
 iVar2 = call_asm_multi_insn();
 __printf_chk(1,&DAT_00012153,iVar2);
 iVar2 = call_asm_simd();
 __printf_chk(1,&DAT_0001216f,iVar2);
 /* Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 LOCK();
 UNLOCK();
 __printf_chk(1,&DAT_0001218b,0x1e);
 iVar2 = call_asm_privileged();
 __printf_chk(1,&DAT_000121a7,iVar2);
 if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
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
