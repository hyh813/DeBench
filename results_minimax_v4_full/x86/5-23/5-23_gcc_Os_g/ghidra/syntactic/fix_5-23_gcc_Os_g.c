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
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Atomic operation helpers for x86 */
#define LOCK()   /* atomic lock prefix */
#define UNLOCK() /* atomic unlock */

/* String constants from binary data */
static const char DAT_0001206e[] = "Testing Preprocessing Features:\n";
static const char DAT_00012096[] = "param_macro_constants(1024) = %d\n";
static const char DAT_000120b1[] = "call_macro_constants() = %d\n";
static const char DAT_000120cc[] = "param_macro_functions(3,5) = %d\n";
static const char DAT_000120e7[] = "call_macro_functions() = %d\n";
static const char DAT_00012106[] = "param_conditional_compile(10) = %d\n";
static const char DAT_00012122[] = "call_conditional_compile() = %d\n";
static const char DAT_0001214c[] = "param_token_paste(5) = %d\n";
static const char DAT_00012167[] = "call_variadic_macro() = %d\n";
static const char DAT_00012182[] = "call_macro_override() = %d\n";
static const char DAT_0001219d[] = "call_include_guard() = %d\n";
static const char DAT_000121b9[] = "call_builtin_macros() = %d\n";
static const char DAT_000121ec[] = "\nTesting ASM Features:\n";
static const char DAT_00012217[] = "call_asm_basic() = %d\n";
static const char DAT_00012233[] = "call_asm_clobber() = %d\n";
static const char DAT_0001224f[] = "call_asm_multi_insn() = %d\n";
static const char DAT_0001226b[] = "call_asm_simd() = %d\n";
static const char DAT_00012287[] = "call_asm_atomic() = %d\n";
static const char DAT_000122a3[] = "call_asm_privileged() = %d\n";
static const int DAT_000122c0[] = {1, 2, 3, 4};
static const int DAT_000122d0[] = {10, 20, 30, 40};

/* Global variable used by param_memory_clobber_demo */
int global_var = 0;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x86/5-23/5-23_gcc_Os_g
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



/* Function: param_macro_constants @ 000112c1 */

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



/* Function: call_macro_constants @ 000112de */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 000112e8 */

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



/* Function: call_macro_functions @ 00011303 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 0001130d */

/* WARNING: Unknown calling convention */

int param_conditional_compile(int x)

{
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 0001131d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00011327 */

/* WARNING: Unknown calling convention */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00011339 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00011343 */

/* WARNING: Unknown calling convention */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00011352 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 0001135c */

/* WARNING: Unknown calling convention */

int param_stringize(int value)

{
 return 0x13;
}



/* Function: call_stringize @ 00011366 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00011370 */

/* WARNING: Unknown calling convention */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 0001137d */

/* WARNING: Unknown calling convention */

int param_token_paste(int x)

{
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 0001138d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00011397 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_variadic_macro(int x,int y,int z)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 000113d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 000113e7 */

/* WARNING: Unknown calling convention */

int param_macro_override(int x)

{
 return x * 3 + 1;
}



/* Function: call_macro_override @ 000113fa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00011404 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

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
/* WARNING: Unknown calling convention */

int param_builtin_macros(int x)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:00");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 0001146a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 0001147d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 int iVar1;
 
 __printf_chk(1,&DAT_0001206e);
 __printf_chk(1,&DAT_00012096,0x40);
 __printf_chk(1,&DAT_000120b1,0x1e);
 __printf_chk(1,&DAT_000120cc,0x20);
 __printf_chk(1,&DAT_000120e7,0xdf22);
 __printf_chk(1,&DAT_00012106,0x74);
 __printf_chk(1,&DAT_00012122,0x13);
 __printf_chk(1,&DAT_0001214c,0x3c);
 iVar1 = call_variadic_macro();
 __printf_chk(1,&DAT_00012167,iVar1);
 __printf_chk(1,&DAT_00012182,0x10);
 __printf_chk(1,&DAT_0001219d,500);
 iVar1 = call_builtin_macros();
 __printf_chk(1,&DAT_000121b9,iVar1);
 return;
}



/* Function: param_asm_basic @ 00011588 */

/* WARNING: Unknown calling convention */

int param_asm_basic(int x)

{
 return x + 10;
}



/* Function: call_asm_basic @ 0001159d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 int iVar1;
 
 iVar1 = param_asm_basic(5);
 return iVar1;
}



/* Function: param_asm_clobber @ 000115b0 */

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



/* Function: call_asm_clobber @ 000115d3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int arr [5];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 iVar2 = param_asm_clobber(arr,5);
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_asm_multi_insn @ 00011606 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 for (; n != 0; n = n - 1) {
 *(undefined *)dst = *(undefined *)src;
 dst = (void *)((int)dst + 1);
 src = (void *)((int)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 00011629 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 int iVar1;
 int iVar2;
 char *pcVar3;
 char *pcVar4;
 int in_GS_OFFSET;
 char src [10];
 char dst [32];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 dst[0] = '\0';
 dst[1] = '\0';
 dst[2] = '\0';
 dst[3] = '\0';
 pcVar3 = "Hello ASM";
 pcVar4 = src;
 for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
 *pcVar4 = *pcVar3;
 pcVar3 = pcVar3 + 1;
 pcVar4 = pcVar4 + 1;
 }
 pcVar3 = dst;
 for (iVar2 = 7; pcVar3 = pcVar3 + 4, iVar2 != 0; iVar2 = iVar2 + -1) {
 pcVar3[0] = '\0';
 pcVar3[1] = '\0';
 pcVar3[2] = '\0';
 pcVar3[3] = '\0';
 }
 param_asm_multi_insn(dst,src,9);
 iVar2 = -1;
 if ((dst[0] == 'H') && (dst[4] == 'o')) {
 iVar2 = 0x2a;
 }
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_asm_simd @ 000116ad */

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



/* Function: param_simd_intrinsics @ 000116ce */

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



/* Function: call_asm_simd @ 000116ec */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 int *piVar4;
 int in_GS_OFFSET;
 int a [4];
 int b [4];
 int result [4];
 
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 piVar3 = &DAT_000122c0;
 piVar4 = a;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 piVar3 = &DAT_000122d0;
 piVar4 = b;
 for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
 *piVar4 = *piVar3;
 piVar3 = piVar3 + 1;
 piVar4 = piVar4 + 1;
 }
 param_asm_simd(a,b,result);
 iVar2 = result[1] + result[0] + result[2] + result[3];
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}



/* Function: param_asm_atomic @ 00011763 */

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



/* Function: param_atomic_c11 @ 0001177a */

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



/* Function: call_asm_atomic @ 00011791 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int in_GS_OFFSET;
 int counter;
 
 /* Unresolved local var: int old_value@[???] */
 LOCK();
 UNLOCK();
 iVar1 = 0x1e;
 if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}



/* Function: param_dynamic_code @ 000117d3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 iVar1 = x + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 0001182d */

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
 iVar2 = -1;
 if (__addr != (int *)0xffffffff) {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 if (iVar2 == 0) {
 iVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 iVar2 = -3;
 }
 }
 else {
 munmap(__addr,__len);
 iVar2 = -2;
 }
 }
 return iVar2;
}



/* Function: param_clobber_importance @ 000118e5 */

/* WARNING: Unknown calling convention */

int param_clobber_importance(int a,int b)

{
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00011907 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00011970 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 
 __printf_chk(1,&DAT_000121ec);
 iVar1 = call_asm_basic();
 __printf_chk(1,&DAT_00012217,iVar1);
 iVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00012233,iVar1);
 iVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0001224f,iVar1);
 iVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0001226b,iVar1);
 iVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00012287,iVar1);
 iVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_000122a3,iVar1);
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
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function __do_global_ctors_aux removed by preprocessor */





/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 58 */
