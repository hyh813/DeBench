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
 * Binary: build/arm32/5-23/5-23_clang_O3_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* String constants from binary */
const char DAT_00011283[] = "Testing preprocessing features...\n";
const char DAT_0001108f[] = "  param_macro_constants: %d\n";
const char DAT_000110aa[] = "  param_macro_functions: %d\n";
const char DAT_000110c5[] = "  param_conditional_compile: %d\n";
const char DAT_000110e0[] = "  param_multi_branch_compile: %d\n";
const char DAT_000110ff[] = "  param_macro_recursion: %d\n";
const char DAT_0001111b[] = "  param_stringize: %d\n";
const char DAT_00011145[] = "  param_token_paste: %d\n";
const char DAT_00011160[] = "  param_variadic_macro: %d\n";
const char DAT_0001117b[] = "  param_macro_override: %d\n";
const char DAT_00011196[] = "  param_include_guard: %d\n";
const char DAT_000111b2[] = "  param_builtin_macros: %d\n";
const char DAT_000112aa[] = "Testing ASM features...\n";
const char DAT_000111db[] = "  call_asm_basic: %d\n";
const char DAT_000111f7[] = "  call_asm_clobber: %d\n";
const char DAT_00011213[] = "  call_asm_multi_insn: %d\n";
const char DAT_0001122f[] = "  call_asm_simd: %d\n";
const char DAT_0001124b[] = "  call_asm_atomic: %d\n";
const char DAT_00011267[] = "  call_asm_privileged: %d\n";

/* Global variable */
int global_var = 0;

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
 "Jan 15 2026","03:01:20");
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
 "Jan 15 2026","03:01:20");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 puts(&DAT_00011283);
 printf(&DAT_0001108f,0x40);
 printf(&DAT_000110aa,0x1e);
 printf(&DAT_000110c5,0x20);
 printf(&DAT_000110e0,0xdf22);
 printf(&DAT_000110ff,0x74);
 printf(&DAT_0001111b,0x13);
 printf(&DAT_00011145,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_00011160,0x3c);
 printf(&DAT_0001117b,0x10);
 printf(&DAT_00011196,500);
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:20");
 printf(&DAT_000111b2,0x17e);
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
 /* Unresolved local var: int i@[???] */
 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 result[3] = b[3] + a[3];
 return 0;
}



/* Function: param_simd_intrinsics @ 00010b08 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 /* Unresolved local var: int i@[???] */
 *result = *b + *a;
 result[1] = b[1] + a[1];
 result[2] = b[2] + a[2];
 result[3] = b[3] + a[3];
 return 0;
}



/* Function: call_asm_simd @ 00010b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???]
 Unresolved local var: int[4] result@[???] */
 return 0x24;
}



/* Function: param_asm_atomic @ 00010b58 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __atomic_fetch_add_4(counter,increment,5);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00010b74 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __atomic_fetch_add_4(counter,increment,5);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00010b90 */

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



/* Function: param_dynamic_code @ 00010bc8 */

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



/* Function: param_memory_protection @ 00010c28 */

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



/* Function: param_clobber_importance @ 00010cd4 */

int param_clobber_importance(int a,int b)

{
 return (b + a) * 2;
}



/* Function: call_asm_privileged @ 00010ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 size_t sVar1;
 void *__addr;
 int *__addr_00;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 sVar1 = sysconf(0x1e);
 iVar3 = -1;
 __addr = mmap((void *)0x0,sVar1,7,0x22,-1,0);
 iVar4 = -1;
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,sVar1);
 iVar4 = 0xf;
 }
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 sVar1 = sysconf(0x1e);
 __addr_00 = mmap((void *)0x0,sVar1,3,0x22,-1,0);
 if (__addr_00 != (int *)0xffffffff) {
 *__addr_00 = 0x2a;
 iVar2 = mprotect(__addr_00,sVar1,1);
 iVar3 = -2;
 if (iVar2 == 0) {
 iVar5 = *__addr_00;
 iVar2 = mprotect(__addr_00,sVar1,3);
 iVar3 = -3;
 if (iVar2 == 0) {
 *__addr_00 = 100;
 iVar3 = iVar5;
 }
 }
 munmap(__addr_00,sVar1);
 }
 iVar2 = iVar4;
 if (iVar3 == 0x2a) {
 iVar2 = 0x4d;
 }
 if (__addr == (void *)0xffffffff) {
 iVar2 = iVar4;
 }
 return iVar2;
}



/* Function: param_memory_clobber_demo @ 00010ddc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00010df0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 int local_c;
 
 puts(&DAT_000112aa);
 printf(&DAT_000111db,0xf);
 printf(&DAT_000111f7,0xf);
 printf(&DAT_00011213,0x2a);
 printf(&DAT_0001122f,0x24);
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int old_value@[???] */
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 printf(&DAT_0001124b,iVar1 + local_c + 5);
 iVar1 = call_asm_privileged();
 printf(&DAT_00011267,iVar1);
 return;
}



/* Function: main @ 00010eb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 int iVar1;
 int local_c;
 
 test_preprocessing_features();
 puts(&DAT_000112aa);
 printf(&DAT_000111db,0xf);
 printf(&DAT_000111f7,0xf);
 printf(&DAT_00011213,0x2a);
 printf(&DAT_0001122f,0x24);
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int old_value@[???] */
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 printf(&DAT_0001124b,iVar1 + local_c + 5);
 iVar1 = call_asm_privileged();
 printf(&DAT_00011267,iVar1);
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
