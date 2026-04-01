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

/* Ghidra types */
typedef void undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned int uint;
typedef int (*code)(void);

/* Ghidra CONCAT macros */
#define CONCAT44(hi, lo) (((uint32_t)(hi) << 32) | (uint32_t)(lo))
#define CONCAT62(hi, lo) (((uint64_t)(hi) << 48) | (uint64_t)(lo)))

/* Standard library */
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>

/* LOCK/UNLOCK macros for atomic operations */
#define LOCK()
#define UNLOCK()

/* Global variable referenced in the code */
extern int global_var;

/* String constants from binary */
extern char DAT_0010227d[];
extern char DAT_0010207f[];
extern char DAT_0010209a[];
extern char DAT_001020b5[];
extern char DAT_001020d0[];
extern char DAT_001020ef[];
extern char DAT_0010210b[];
extern char DAT_00102135[];
extern char DAT_00102150[];
extern char DAT_0010216b[];
extern char DAT_00102186[];
extern char DAT_001021a2[];
extern char DAT_001021d5[];
extern char DAT_001021f1[];
extern char DAT_0010220d[];
extern char DAT_00102229[];
extern char DAT_00102245[];
extern char DAT_00102261[];
extern char *DAT_001022a4;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_clang_O2_g
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




/* Function: param_macro_constants @ 00101190 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}

int param_macro_functions(int x,int y)

{
 if (y < x) {
 y = x;
 }
 return x * x + y;
}



/* Function: call_macro_functions @ 001011d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 001011e0 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg5(RDI)] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 001011f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00101200 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101210 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00101220 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00101230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00101240 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00101250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00101260 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00101270 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int temp__LINE__@[???] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00101290 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 printf("LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 001012e0 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00101320 */

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
 "Jan 15 2026","03:00:50");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00101360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:50");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 001013a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 puts(DAT_0010227d);
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
 "Jan 15 2026","03:00:50");
 printf(&DAT_001021a2,0x17e);
 return;
}



/* Function: param_asm_basic @ 001014d0 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[???] */
 return x + 10;
}



/* Function: call_asm_basic @ 001014e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 001014f0 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 unsigned long uVar2;
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < n; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + arr[uVar2];
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 unsigned long uVar2;
 int local_18 [6];
 
 /* Unresolved local var: int[5] arr@[???] */
 local_18[4] = 5;
 local_18[0] = 1;
 local_18[1] = 2;
 local_18[2] = 3;
 local_18[3] = 4;
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + local_18[uVar2];
 }
 return iVar1;
}



/* Function: param_asm_multi_insn @ 00101550 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 for (; n != 0; n = n - 1) {
 *(char *)dst = *(char *)src;
 dst = (void *)((long)dst + 1);
 src = (void *)((long)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 int iVar1;
 char *pcVar2;
 char *pcVar3;
 long lVar4;
 char local_38 [16];
 char local_28 [40];
 
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 strncpy(local_38,"Hello ASM",10);
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
 pcVar2 = local_28;
 pcVar3 = local_38;
 for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
 *pcVar2 = *pcVar3;
 pcVar2 = pcVar2 + 1;
 pcVar3 = pcVar3 + 1;
 }
 iVar1 = -1;
 if (local_28[4] == 'o' && local_28[0] == 'H') {
 iVar1 = 0x2a;
 }
 return iVar1;
}



/* Function: param_asm_simd @ 001015e0 */

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



/* Function: param_simd_intrinsics @ 001015f0 */

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



/* Function: call_asm_simd @ 00101600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???]
 Unresolved local var: int[4] result@[???] */
 return 0x24;
}



/* Function: param_asm_atomic @ 00101660 */

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



/* Function: param_atomic_c11 @ 00101670 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00101680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int new_val@[???] */
 LOCK();
 UNLOCK();
 return 0x1e;
}



/* Function: param_dynamic_code @ 001016a0 */

int param_dynamic_code(int x)

{
 int iVar1;
 size_t __len;
 code *__addr;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: func_t dynamic_func@[???]
 Unresolved local var: int result@[???]
 Unresolved local var: uchar[6] code@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (code *)0xffffffffffffffff) {
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



/* Function: param_memory_protection @ 00101710 */

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



/* Function: param_clobber_importance @ 001017b0 */

int param_clobber_importance(int a,int b)

{
 /* Unresolved local var: int result1@[???]
 Unresolved local var: int result2@[???] */
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 001017c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 size_t __len;
 code *__addr;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (code *)0xffffffffffffffff) {
 *(undefined2 *)(__addr + 4) = 0xc305;
 *(undefined4 *)__addr = 0xc083f889;
 iVar1 = (*__addr)(10);
 munmap(__addr,__len);
 }
 iVar2 = param_memory_protection();
 iVar3 = 0x4d;
 if (iVar2 != 0x2a || iVar1 != 0xf) {
 iVar3 = iVar1;
 }
 return iVar3;
}



/* Function: param_memory_clobber_demo @ 00101870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 uint uVar1;
 unsigned long uVar2;
 long lVar3;
 undefined8 *puVar4;
 int *piVar5;
 undefined8 uVar6;
 int local_58;
 char cStack_54;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined8 local_38;
 undefined8 uStack_30;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 uStack_1c;
 int _cStack_54;
 int _local_58;

 _local_58 = 0;
 piVar5 = &local_58;
 puts(DAT_001022a4);
 printf(&DAT_001021d5,0xf);
 /* Unresolved local var: int[5] arr@[???] */
 local_48 = CONCAT44(5, 5);
 local_58 = 0x200000001;
 uStack_50 = 0x400000003;
 /* Unresolved local var: int sum@[???] */
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 uVar1 = uVar1 + (&local_58)[uVar2];
 }
 printf(&DAT_001021f1,(unsigned long)uVar1);
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 local_38 = 0x5341206f6c6c6548;
 uStack_30 = 0x4d000000003ULL;
 local_48 = 0;
 uStack_40 = 0;
 local_58 = 0;
 uStack_50 = 0;
 puVar4 = &local_38;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *(char *)piVar5 = *(char *)puVar4;
 piVar5 = (int *)((long)piVar5 + 1);
 puVar4 = (undefined8 *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if (cStack_54 == 'o' && (char)local_58 == 'H') {
 uVar6 = 0x2a;
 }
 printf(&DAT_0010220d,uVar6);
 /* Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???]
 Unresolved local var: int[4] result@[???] */
 local_58 = 0x200000001;
 uStack_50 = 0x400000003;
 local_38 = 0x600000005;
 uStack_30 = 0x800000007;
 local_28 = 6;
 uStack_24 = 8;
 uStack_20 = 10;
 uStack_1c = 0xc;
 printf(&DAT_00102229,0x24);
 /* Unresolved local var: int counter@[???] */
 LOCK();
 _local_58 = CONCAT44(_cStack_54,0xf);
 UNLOCK();
 printf(&DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(&DAT_00102261,(unsigned long)uVar1);
 return;
}



/* Function: main @ 00101a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */

/* Ghidra CONCAT macros */
#define CONCAT44(hi, lo) (((uint32_t)(hi) << 32) | (uint32_t)(lo))
#define CONCAT62(hi, lo) (((uint64_t)(hi) << 48) | (uint64_t)(lo))

/* Total functions decompiled: 50 */
