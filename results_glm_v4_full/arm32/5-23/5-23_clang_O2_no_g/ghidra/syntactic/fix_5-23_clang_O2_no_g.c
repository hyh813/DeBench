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

/* Ghidra undefined types */
typedef unsigned int undefined4;

/* Global variables */
int global_var;

/* Data references from Ghidra decompilation */
const char DAT_000111ab[] = "=== Testing Preprocessing Features ===\n";
const char DAT_00010fb7[] = "macro_constants result: %d\n";
const char DAT_00010fd2[] = "macro_functions result: %d\n";
const char DAT_00010fed[] = "conditional_compile result: %d\n";
const char DAT_00011008[] = "multi_branch_compile result: %d\n";
const char DAT_00011027[] = "macro_recursion result: %d\n";
const char DAT_00011043[] = "stringize result: %d\n";
const char DAT_0001106d[] = "token_paste result: %d\n";
const char DAT_00011088[] = "macro_override result: %d\n";
const char DAT_000110a3[] = "include_guard result: %d\n";
const char DAT_000110be[] = "builtin_macros result: %d\n";
const char DAT_000110da[] = "builtin_macros call result: %d\n";
const char DAT_000111d2[] = "=== Testing ASM Features ===\n";
const char DAT_00011103[] = "asm_basic result: %d\n";
const char DAT_0001111f[] = "asm_clobber result: %d\n";
const char DAT_0001113b[] = "asm_multi_insn result: %d\n";
const char DAT_00011157[] = "asm_simd result: %d\n";
const char DAT_00011173[] = "asm_atomic result: %d\n";
const char DAT_0001118f[] = "asm_privileged result: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-23/5-23_clang_O2_no_g
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

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 0001070c */

undefined4 call_macro_constants(void)

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

undefined4 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00010730 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 0001073c */

undefined4 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00010744 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00010754 */

undefined4 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00010760 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00010768 */

undefined4 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00010770 */

undefined4 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00010778 */

undefined4 call_stringize(void)

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

undefined4 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 000107a4 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 000107d4 */

undefined4 call_variadic_macro(void)

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

undefined4 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00010814 */

undefined4 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 0001081c */

undefined4 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00010824 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:19");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00010894 */

undefined4 call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:19");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00010900 */

void test_preprocessing_features(void)

{
 puts(&DAT_000111ab);
 printf(&DAT_00010fb7,0x40);
 printf(&DAT_00010fd2,0x1e);
 printf(&DAT_00010fed,0x20);
 printf(&DAT_00011008,0xdf22);
 printf(&DAT_00011027,0x74);
 printf(&DAT_00011043,0x13);
 printf(&DAT_0001106d,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_00011088,0x3c);
 printf(&DAT_000110a3,0x10);
 printf(&DAT_000110be,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:19");
 printf(&DAT_000110da,0x17e);
 return;
}



/* Function: param_asm_basic @ 00010a70 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00010a78 */

undefined4 call_asm_basic(void)

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

undefined4 call_asm_clobber(void)

{
 return 0xf;
}



/* Function: call_asm_multi_insn @ 00010ab8 */

undefined4 call_asm_multi_insn(void)

{
 return 0x2a;
}



/* Function: param_asm_simd @ 00010ac0 */

undefined4 param_asm_simd(int *param_1,int *param_2,int *param_3)

{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}



/* Function: param_simd_intrinsics @ 00010b08 */

undefined4 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}



/* Function: call_asm_simd @ 00010b50 */

undefined4 call_asm_simd(void)

{
 return 0x24;
}



/* Function: param_asm_atomic @ 00010b58 */

int param_asm_atomic(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00010b74 */

int param_atomic_c11(undefined4 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00010b90 */

int call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 return iVar1 + local_c + 5;
}



/* Function: param_dynamic_code @ 00010bc8 */

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



/* Function: param_memory_protection @ 00010c28 */

undefined4 param_memory_protection(void)

{
 size_t __len;
 undefined4 *__addr;
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (undefined4 *)0xffffffff) {
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



/* Function: param_clobber_importance @ 00010cd4 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_2 + param_1) * 2;
}



/* Function: call_asm_privileged @ 00010ce0 */

undefined4 call_asm_privileged(void)

{
 size_t __len;
 void *__addr;
 int iVar1;
 undefined4 uVar2;
 undefined4 uVar3;
 
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 uVar3 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = uVar3;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar3;
 }
 return uVar2;
}



/* Function: param_memory_clobber_demo @ 00010d58 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00010d6c */

void test_asm_features(void)

{
 int iVar1;
 size_t __len;
 void *__addr;
 undefined4 uVar2;
 undefined4 uVar3;
 int local_14;
 
 puts(&DAT_000111d2);
 printf(&DAT_00011103,0xf);
 printf(&DAT_0001111f,0xf);
 printf(&DAT_0001113b,0x2a);
 printf(&DAT_00011157,0x24);
 local_14 = 10;
 iVar1 = __atomic_fetch_add_4(&local_14,5,5);
 printf(&DAT_00011173,iVar1 + local_14 + 5);
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 uVar3 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = uVar3;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar3;
 }
 printf(&DAT_0001118f,uVar2);
 return;
}



/* Function: main @ 00010e88 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 49 */
