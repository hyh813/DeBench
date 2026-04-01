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

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-23/5-23_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */





/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 000106f8 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 0001070c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00010714 */

int param_macro_functions(int x,int y)

{
 if (y < x) {
 y = x;
 }
 return x * x + y;
}



/* Function: call_macro_functions @ 00010728 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00010730 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(r0)] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 0001073c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00010744 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010754 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00010760 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00010768 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00010770 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00010778 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00010780 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 0001078c */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int temp__LINE__@[???] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 0001079c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 000107a4 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 printf("LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 000107d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00010800 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 0001080c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00010814 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 0001081c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00010824 */

int param_builtin_macros(int x)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: int counter3@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter1@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:23");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00010894 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:23");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 puts("Testing Preprocessing Features:\n");
 printf("Result: %d\n",0x40);
 printf("Result: %d\n",0x1e);
 printf("Result: %d\n",0x20);
 printf("Result: %d\n",0xdf22);
 printf("Result: %d\n",0x74);
 printf("Result: %d\n",0x13);
 printf("Result: %d\n",0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf("Result: %d\n",0x3c);
 printf("Result: %d\n",0x10);
 printf("Result: %d\n",500);
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:23");
 printf("Result: %d\n",0x17e);
 return;
}



/* Function: param_asm_basic @ 00010a70 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[???] */
 return x + 10;
}



/* Function: call_asm_basic @ 00010a78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00010a80 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 do {
 n = n + -1;
 iVar1 = *arr + iVar1;
 arr = arr + 1;
 } while (n != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00010aac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 /* Unresolved local var: int[5] arr@[???] */
 return 0xf;
}



/* Function: param_asm_multi_insn @ 00010ab4 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00010ab8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 return 0x2a;
}



/* Function: param_asm_simd @ 00010ac0 */

int param_asm_simd(int *a,int *b,int *result)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg14(lr)] */
 result[iVar1] = b[iVar1] + a[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}



/* Function: param_simd_intrinsics @ 00010af0 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg14(lr)] */
 result[iVar1] = b[iVar1] + a[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}



/* Function: call_asm_simd @ 00010b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int iVar1;
 int local_18 [4];
 int a [4] = {1,2,3,4};
 int b [4] = {5,6,7,8};
 
 /* Unresolved local var: int[4] result@[???]
 Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???] */
 iVar1 = 0;
 do {
 /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
 local_18[iVar1] = a[iVar1] + b[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return local_18[1] + local_18[0] + local_18[2] + local_18[3];
}



/* Function: param_asm_atomic @ 00010b80 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __atomic_fetch_add_4(counter,increment,5);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00010b9c */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __atomic_fetch_add_4(counter,increment,5);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 return iVar1 + local_c + 5;
}



/* Function: param_dynamic_code @ 00010bf0 */

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
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 iVar1 = x + 5;
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00010c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 size_t __len;
 int *__addr;
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 __len = sysconf(0x1e);
 iVar2 = -1;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (int *)0xffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 iVar2 = -2;
 if (iVar1 == 0) {
 iVar3 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 iVar2 = -3;
 if (iVar1 == 0) {
 *__addr = 100;
 iVar2 = iVar3;
 }
 }
 munmap(__addr,__len);
 }
 return iVar2;
}



/* Function: param_clobber_importance @ 00010cfc */

int param_clobber_importance(int a,int b)

{
 return (b + a) * 2;
}



/* Function: call_asm_privileged @ 00010d08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar1 == 0xf && iVar2 == 0x2a) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00010d38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return 0x32 + 0x32;
}



/* Function: test_asm_features @ 00010d4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 puts("Testing Assembly Features:\n");
 printf("Result: %d\n",0xf);
 printf("Result: %d\n",0xf);
 printf("Result: %d\n",0x2a);
 iVar1 = call_asm_simd();
 printf("Result: %d\n",iVar1);
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int old_value@[???] */
 local_14 = 10;
 iVar1 = __atomic_fetch_add_4(&local_14,5,5);
 printf("Result: %d\n",iVar1 + local_14 + 5);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar1 == 0xf && iVar2 == 0x2a) {
 iVar1 = 0x4d;
 }
 printf("Result: %d\n",iVar1);
 return;
}



/* Function: main @ 00010e2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
