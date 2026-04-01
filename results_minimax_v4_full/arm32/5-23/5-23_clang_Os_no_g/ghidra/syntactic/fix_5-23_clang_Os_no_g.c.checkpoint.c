/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>

/* String constants referenced in code */
char DAT_0001114f[] = "Testing Preprocessing Features:\n";
char DAT_00010f5b[] = "param_macro_constants(1024) = %d\n";
char DAT_00010f76[] = "call_macro_constants() = %d\n";
char DAT_00010f91[] = "param_conditional_compile(10) = %d\n";
char DAT_00010fac[] = "param_multi_branch_compile(100) = %d\n";
char DAT_00010fcb[] = "param_macro_recursion(100) = %d\n";
char DAT_00010fe7[] = "param_stringize() = %d\n";
char DAT_00011011[] = "param_token_paste(5) = %d\n";
char DAT_0001102c[] = "call_variadic_macro() = %d\n";
char DAT_00011047[] = "param_macro_override(5) = %d\n";
char DAT_00011062[] = "param_include_guard() = %d\n";
char DAT_0001107e[] = "call_builtin_macros() = %d\n";
char DAT_00011176[] = "\nTesting Assembly Features:\n";
char DAT_000110a7[] = "call_asm_basic() = %d\n";
char DAT_000110c3[] = "call_asm_clobber() = %d\n";
char DAT_000110df[] = "param_memory_protection() = %d\n";
char DAT_000110fb[] = "call_asm_simd() = %d\n";
char DAT_00011117[] = "call_asm_atomic() = %d\n";
char DAT_00011133[] = "call_asm_privileged() = %d\n";
int DAT_000111b0[] = { 1, 2, 3, 4 };
int DAT_000111a0[] = { 10, 20, 30, 40 };

int global_var = 50;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-23/5-23_clang_Os_no_g
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

int param_macro_constants(int param_1)

{
 int uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 0001070c */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00010714 */

int param_macro_functions(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 00010728 */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00010730 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 0001073c */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00010744 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010754 */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00010760 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00010768 */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00010770 */

int param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00010778 */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00010780 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 0001078c */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 0001079c */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 000107a4 */

int param_variadic_macro(int param_1,int param_2,int param_3)

{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000107d4 */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00010800 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 0001080c */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00010814 */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 0001081c */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00010824 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:24");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00010894 */

int call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:24");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00010900 */

void test_preprocessing_features(void)

{
 puts(&DAT_0001114f);
 printf(&DAT_00010f5b,0x40);
 printf(&DAT_00010f76,0x1e);
 printf(&DAT_00010f91,0x20);
 printf(&DAT_00010fac,0xdf22);
 printf(&DAT_00010fcb,0x74);
 printf(&DAT_00010fe7,0x13);
 printf(&DAT_00011011,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_0001102c,0x3c);
 printf(&DAT_00011047,0x10);
 printf(&DAT_00011062,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:24");
 printf(&DAT_0001107e,0x17e);
 return;
}



/* Function: param_asm_basic @ 00010a70 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00010a78 */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00010a80 */

int param_asm_clobber(int *param_1,int param_2)

{
 int iVar1;
 
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00010aac */

int call_asm_clobber(void)

{
 return 0xf;
}



/* Function: call_asm_multi_insn @ 00010ab8 */

int call_asm_multi_insn(void)

{
 return 0x2a;
}



/* Function: param_asm_simd @ 00010ac0 */

int param_asm_simd(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}



/* Function: param_simd_intrinsics @ 00010af0 */

int param_simd_intrinsics(int param_1,int param_2,int param_3)

{
 int iVar1;
 
 iVar1 = 0;
 do {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}



/* Function: call_asm_simd @ 00010b20 */

int call_asm_simd(void)

{
 int iVar1;
 int local_18 [4];
 
 iVar1 = 0;
 do {
 local_18[iVar1] = (*(&DAT_000111b0))[iVar1] + (*(&DAT_000111a0))[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return local_18[1] + local_18[0] + local_18[2] + local_18[3];
}



/* Function: param_asm_atomic @ 00010b80 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00010b9c */

int param_atomic_c11(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00010bb8 */

int call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 return iVar1 + local_c + 5;
}



/* Function: param_dynamic_code @ 00010bf0 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 iVar1 = param_1 + 5;
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00010c50 */

int param_memory_protection(void)

{
 size_t __len;
 int *__addr;
 int iVar1;
 int uVar2;
 int uVar3;
 
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (int *)0xffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 uVar2 = 0xfffffffe;
 if (iVar1 == 0) {
 uVar3 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 uVar2 = 0xfffffffd;
 if (iVar1 == 0) {
 *__addr = 100;
 uVar2 = uVar3;
 }
 }
 munmap(__addr,__len);
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00010cfc */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_2 + param_1) * 2;
}



/* Function: call_asm_privileged @ 00010d08 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar1 == 0xf && iVar2 == 0x2a) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00010d38 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00010d4c */

void test_asm_features(void)

{
 int uVar1;
 int iVar2;
 int iVar3;
 int local_14;
 
 puts(&DAT_00011176);
 printf(&DAT_000110a7,0xf);
 printf(&DAT_000110c3,0xf);
 printf(&DAT_000110df,0x2a);
 uVar1 = call_asm_simd();
 printf(&DAT_000110fb,uVar1);
 local_14 = 10;
 iVar2 = __atomic_fetch_add_4(&local_14,5,5);
 printf(&DAT_00011117,iVar2 + local_14 + 5);
 iVar2 = param_dynamic_code(10);
 iVar3 = param_memory_protection();
 if (iVar2 == 0xf && iVar3 == 0x2a) {
 iVar2 = 0x4d;
 }
 printf(&DAT_00011133,iVar2);
 return;
}



/* Function: main @ 00010e2c */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 49 */
