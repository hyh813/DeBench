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

/* Include necessary headers */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

/* Additional type definitions */
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef int (*intcode)(int);
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;

/* Helper macros for concatenation */
#define CONCAT44(x, y) (((uint64_t)(x) << 32) | ((uint64_t)(y) & 0xFFFFFFFF))
#define CONCAT62(x, y) (((uint64_t)(x) << 48) | ((uint64_t)(y) & 0xFFFFFFFFFFFFULL))

/* Lock/Unlock macros (stubs for demo) */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)

/* Global variable */
int global_var = 0;

/* Data variable declarations (string constants from binary) */
const char DAT_0010227d[] = "=== Preprocessing Features Tests ===";
const char DAT_0010207f[] = "param_macro_constants: %d\n";
const char DAT_0010209a[] = "param_macro_functions: %d\n";
const char DAT_001020b5[] = "param_conditional_compile: %d\n";
const char DAT_001020d0[] = "param_multi_branch_compile: %d\n";
const char DAT_001020ef[] = "param_macro_recursion: %d\n";
const char DAT_0010210b[] = "param_stringize: %d\n";
const char DAT_00102135[] = "param_token_paste: %d\n";
const char DAT_00102150[] = "param_variadic_macro: %d\n";
const char DAT_0010216b[] = "param_macro_override: %d\n";
const char DAT_00102186[] = "param_include_guard: %d\n";
const char DAT_001021a2[] = "param_builtin_macros: %d\n";
const char DAT_001022a4[] = "=== ASM Features Tests ===";
const char DAT_001021d5[] = "param_asm_basic: %d\n";
const char DAT_001021f1[] = "param_asm_clobber: %d\n";
const char DAT_0010220d[] = "param_asm_multi_insn: %d\n";
const char DAT_00102229[] = "param_asm_simd: %d\n";
const char DAT_00102245[] = "param_asm_atomic: %d\n";
const char DAT_00102261[] = "call_asm_privileged: %d\n";

/* builtin_strncpy wrapper */
#define builtin_strncpy(dest, src, n) strncpy(dest, src, n)

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_clang_Os_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 0010118c */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 001011a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 001011a6 */

int param_macro_functions(int x,int y)

{
 if (y < x) {
 y = x;
 }
 return x * x + y;
}



/* Function: call_macro_functions @ 001011b3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 001011b9 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 001011c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 001011c6 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 001011cf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 001011d5 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 001011d9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 001011df */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 001011e5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 001011eb */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 001011f1 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int temp__LINE__@[???] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 001011fb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00101201 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 printf("LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 0010121f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00101244 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 0010124a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00101250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00101256 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 0010125c */

int param_builtin_macros(int x)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:58");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00101298 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:58");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 001012cf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 puts(&DAT_0010227d);
 printf(&DAT_0010207f,0x40);
 printf(&DAT_0010209a,0x1e);
 printf(&DAT_001020b5,0x20);
 printf(&DAT_001020d0,0xdf22);
 printf(&DAT_001020ef,0x74);
 printf(&DAT_0010210b,0x13);
 printf(&DAT_00102135,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_00102150,0x3c);
 printf(&DAT_0010216b,0x10);
 printf(&DAT_00102186,500);
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:58");
 printf(&DAT_001021a2,0x17e);
 return;
}



/* Function: param_asm_basic @ 001013fa */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[???] */
 return x + 10;
}



/* Function: call_asm_basic @ 00101404 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00101413 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < n; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + arr[uVar2];
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00101427 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 ulong uVar2;
 int local_18 [6];
 
 /* Unresolved local var: int[5] arr@[???] */
 local_18[4] = 5;
 local_18[0] = 1;
 local_18[1] = 2;
 local_18[2] = 3;
 local_18[3] = 4;
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + local_18[uVar2];
 }
 return iVar1;
}



/* Function: param_asm_multi_insn @ 00101458 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 for (; n != 0; n = n - 1) {
 *(undefined1 *)dst = *(undefined1 *)src;
 dst = (void *)((long)dst + 1);
 src = (void *)((long)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 0010146f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 int iVar1;
 char *pcVar2;
 long lVar3;
 char *pcVar4;
 char local_38 [16];
 char local_28 [40];
 
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 pcVar2 = local_38;
 builtin_strncpy(local_38,"Hello ASM",10);
 pcVar4 = local_28;
 local_28[0x10] = '\0';
 local_28[0x11] = '\0';
 local_28[0x12] = '\0';
 local_28[0x13] = '\0';
 local_28[0x14] = '\0';
 local_28[0x15] = '\0';
 local_28[0x16] = '\0';
 local_28[0x17] = '\0';
 local_28[0x18] = '\0';
 local_28[0x19] = '\0';
 local_28[0x1a] = '\0';
 local_28[0x1b] = '\0';
 local_28[0x1c] = '\0';
 local_28[0x1d] = '\0';
 local_28[0x1e] = '\0';
 local_28[0x1f] = '\0';
 local_28[0] = '\0';
 local_28[1] = '\0';
 local_28[2] = '\0';
 local_28[3] = '\0';
 local_28[4] = '\0';
 local_28[5] = '\0';
 local_28[6] = '\0';
 local_28[7] = '\0';
 local_28[8] = '\0';
 local_28[9] = '\0';
 local_28[10] = '\0';
 local_28[0xb] = '\0';
 local_28[0xc] = '\0';
 local_28[0xd] = '\0';
 local_28[0xe] = '\0';
 local_28[0xf] = '\0';
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *pcVar4 = *pcVar2;
 pcVar4 = pcVar4 + 1;
 pcVar2 = pcVar2 + 1;
 }
 iVar1 = -1;
 if (local_28[4] == 'o' && local_28[0] == 'H') {
 iVar1 = 0x2a;
 }
 return iVar1;
}



/* Function: param_asm_simd @ 001014ce */

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



/* Function: param_simd_intrinsics @ 001014de */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 
 /* Unresolved local var: __m128i vec_sum@[???]
 Unresolved local var: __m128i vec_a@[???]
 Unresolved local var: __m128i vec_b@[???] */
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



/* Function: call_asm_simd @ 001014ed */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???]
 Unresolved local var: int[4] result@[???] */
 return 0x24;
}



/* Function: param_asm_atomic @ 00101538 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00101541 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 0010154a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int new_val@[???] */
 LOCK();
 UNLOCK();
 return 0x1e;
}



/* Function: param_dynamic_code @ 00101566 */

int param_dynamic_code(int x)

{
 int iVar1;
 size_t __len;
 intcode *__addr;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: func_t dynamic_func@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: uchar[6] code@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (intcode *)0xffffffffffffffff) {
 iVar1 = -1;
 }
 else {
 *(undefined2 *)(__addr + 4) = 0xc305;
 *(undefined4 *)__addr = 0xc083f889;
 iVar1 = (*__addr)(x);
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 001015ce */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 int *__addr;
 int iVar3;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 __len = sysconf(0x1e);
 iVar3 = -1;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 iVar3 = -2;
 if (iVar1 == 0) {
 iVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 iVar3 = -3;
 if (iVar2 == 0) {
 *__addr = 100;
 iVar3 = iVar1;
 }
 }
 munmap(__addr,__len);
 }
 return iVar3;
}



/* Function: param_clobber_importance @ 00101669 */

int param_clobber_importance(int a,int b)

{
 /* Unresolved local var: int result1@[???]
 Unresolved local var: int result2@[???] */
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00101678 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 /* Unresolved local var: int result1@[???]
 Unresolved local var: int result2@[???] */
 iVar3 = 0x4d;
 if (iVar2 != 0x2a || iVar1 != 0xf) {
 iVar3 = iVar1;
 }
 return iVar3;
}



/* Function: param_memory_clobber_demo @ 001016c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001016d2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 uint uVar1;
 ulong uVar2;
 long lVar3;
 undefined8 *puVar4;
 int *piVar5;
 undefined8 uVar6;
 undefined8 local_48;
 undefined8 uStack_40;
 int local_38;
 char cStack_34;
 undefined8 uStack_30;
 undefined8 local_28;
 undefined8 uStack_20;
 
 puts(&DAT_001022a4);
 printf(&DAT_001021d5,0xf);
 /* Unresolved local var: int[5] arr@[???] */
 piVar5 = &local_38;
 local_28 = CONCAT44(local_28,5);
 local_38 = 0x200000001;
 uStack_30 = 0x400000003;
 /* Unresolved local var: int sum@[???] */
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
 uVar1 = uVar1 + piVar5[uVar2];
 }
 printf(&DAT_001021f1,(ulong)uVar1);
 puVar4 = &local_48;
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 local_48 = 0x5341206f6c6c6548;
 uStack_40 = CONCAT62(uStack_40,0x4d);
 local_28 = 0;
 uStack_20 = 0;
 local_38 = 0;
 uStack_30 = 0;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *(undefined1 *)piVar5 = *(undefined1 *)puVar4;
 piVar5 = (int *)((long)piVar5 + 1);
 puVar4 = (undefined8 *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if (cStack_34 == 'o' && (char)local_38 == 'H') {
 uVar6 = 0x2a;
 }
 printf(&DAT_0010220d,uVar6);
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???]
 Unresolved local var: int[4] result@[???] */
 local_38 = 0x200000001;
 uStack_30 = 0x400000003;
 local_48 = 0x600000005;
 uStack_40 = 0x800000007;
 printf(&DAT_00102229,0x24);
 /* Unresolved local var: int counter@[???] */
 LOCK();
 local_38 = CONCAT44(cStack_34,0xf);
 UNLOCK();
 printf(&DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(&DAT_00102261,(ulong)uVar1);
 return;
}



/* Function: main @ 00101835 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
