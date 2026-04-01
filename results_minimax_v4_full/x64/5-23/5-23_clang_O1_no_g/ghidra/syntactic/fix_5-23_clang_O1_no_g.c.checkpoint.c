/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <string.h>

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

/* Ghidra type definitions */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef uint8_t undefined;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)();

/* Atomic operation macros */
#define LOCK()   __asm__ __volatile__("lock")
#define UNLOCK() __asm__ __volatile__("")

/* Ghidra concat macros */
#define CONCAT44(a,b) (((a) & 0xffffffff) | (((b) & 0xffffffff) << 32))
#define CONCAT62(a,b) (((a) & 0xffffffffffff) | (((b) & 0xffffffffffff) << 48))

/* Global variable */
int global_var;

/* Ghidra data references */
const char DAT_0010227d[] = "Testing preprocessing features:\n";
const char DAT_0010207f[] = "param_macro_constants: %d\n";
const char DAT_0010209a[] = "call_macro_constants: %d\n";
const char DAT_001020b5[] = "param_conditional_compile: %d\n";
const char DAT_001020d0[] = "call_multi_branch_compile: %d\n";
const char DAT_001020ef[] = "param_macro_recursion: %d\n";
const char DAT_0010210b[] = "call_stringize: %d\n";
const char DAT_00102135[] = "call_token_paste: %d\n";
const char DAT_00102150[] = "call_variadic_macro: %d\n";
const char DAT_0010216b[] = "call_macro_override: %d\n";
const char DAT_00102186[] = "call_include_guard: %d\n";
const char DAT_001021a2[] = "call_builtin_macros: %d\n";
const char DAT_001022a4[] = "Testing asm features:\n";
const char DAT_001021d5[] = "param_asm_basic: %d\n";
const char DAT_001021f1[] = "Sum: %lu\n";
const char DAT_0010220d[] = "param_asm_multi_insn: %d\n";
const char DAT_00102229[] = "param_asm_simd: %d\n";
const char DAT_00102245[] = "param_asm_atomic: %d\n";
const char DAT_00102261[] = "call_asm_privileged: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_clang_O1_no_g
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

undefined8 param_macro_constants(int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 001011b0 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 001011c0 */

int param_macro_functions(int param_1,int param_2)

{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}



/* Function: call_macro_functions @ 001011d0 */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 001011e0 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 001011f0 */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00101200 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101210 */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00101220 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00101230 */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00101240 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00101250 */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00101260 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00101270 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00101280 */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00101290 */

int param_variadic_macro(uint param_1,ulong param_2,ulong param_3)

{
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 001012b0 */

undefined8 call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 001012e0 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 001012f0 */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00101300 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00101310 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00101320 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:48");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00101360 */

undefined8 call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:48");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 001013a0 */

undefined8 test_preprocessing_features(void)

{
 undefined8 in_RAX;
 
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
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:48");
 printf(&DAT_001021a2,0x17e);
 return in_RAX;
}



/* Function: param_asm_basic @ 001014d0 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 001014e0 */

undefined8 call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 001014f0 */

int param_asm_clobber(long param_1,int param_2)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00101510 */

int call_asm_clobber(void)

{
 int iVar1;
 ulong uVar2;
 int local_18 [6];
 
 local_18[4] = 5;
 local_18[0] = 1;
 local_18[1] = 2;
 local_18[2] = 3;
 local_18[3] = 4;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + local_18[uVar2];
 }
 return iVar1;
}



/* Function: param_asm_multi_insn @ 00101550 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,long param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101570 */

undefined8 call_asm_multi_insn(void)

{
 undefined8 uVar1;
 char *pcVar2;
 char *pcVar3;
 long lVar4;
 char local_38 [16];
 char local_28 [40];
 
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
 uVar1 = 0xffffffff;
 if (local_28[4] == 'o' && local_28[0] == 'H') {
 uVar1 = 0x2a;
 }
 return uVar1;
}



/* Function: param_asm_simd @ 001015e0 */

undefined8 param_asm_simd(int *param_1,int *param_2,int *param_3)

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



/* Function: param_simd_intrinsics @ 001015f0 */

undefined8 param_simd_intrinsics(int *param_1,int *param_2,int *param_3)

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



/* Function: call_asm_simd @ 00101600 */

undefined4 call_asm_simd(void)

{
 return 0x24;
}



/* Function: param_asm_atomic @ 00101650 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101660 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00101670 */

undefined4 call_asm_atomic(void)

{
 LOCK();
 UNLOCK();
 return 0x1e;
}



/* Function: param_dynamic_code @ 00101690 */

undefined4 param_dynamic_code(undefined4 param_1)

{
 undefined4 uVar1;
 size_t __len;
 int (*__addr)(int);
 
 __len = sysconf(0x1e);
 uVar1 = 0xffffffff;
 __addr = (int (*)(int))mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (int (*)(int))0xffffffffffffffff) {
 *(undefined2 *)(__addr + 4) = 0xc305;
 *(undefined4 *)__addr = 0xc083f889;
 uVar1 = (*__addr)(param_1);
 munmap((void *)__addr,__len);
 }
 return uVar1;
}



/* Function: param_memory_protection @ 00101700 */

undefined4 param_memory_protection(void)

{
 undefined4 uVar1;
 int iVar2;
 size_t __len;
 undefined4 *__addr;
 undefined4 uVar3;
 
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (undefined4 *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 uVar3 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 uVar3 = 0xfffffffd;
 if (iVar2 == 0) {
 *__addr = 100;
 uVar3 = uVar1;
 }
 }
 munmap(__addr,__len);
 }
 return uVar3;
}



/* Function: param_clobber_importance @ 001017a0 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 001017b0 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 size_t __len;
 int (*__addr)(int);
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = (int (*)(int))mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (int (*)(int))0xffffffffffffffff) {
 *(undefined2 *)(__addr + 4) = 0xc305;
 *(undefined4 *)__addr = 0xc083f889;
 iVar1 = (*__addr)(10);
 munmap((void *)__addr,__len);
 }
 iVar2 = param_memory_protection();
 iVar3 = 0x4d;
 if (iVar2 != 0x2a || iVar1 != 0xf) {
 iVar3 = iVar1;
 }
 return iVar3;
}



/* Function: param_memory_clobber_demo @ 00101860 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101880 */

void test_asm_features(void)

{
 uint uVar1;
 ulong uVar2;
 long lVar3;
 undefined8 *puVar4;
 int *piVar5;
 undefined8 uVar6;
 int local_58;
 char cStack_54;
 undefined8 uStack_50;
 undefined8 local_48;
 undefined8 uStack_40;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 uStack_2c;
 undefined8 local_28;
 undefined8 uStack_20;
 
 piVar5 = &local_58;
 puts(&DAT_001022a4);
 printf(&DAT_001021d5,0xf);
 local_48 = CONCAT44((uint32_t)local_48,5);
 local_58 = 0x200000001;
 uStack_50 = 0x400000003;
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
 uVar1 = uVar1 + (&local_58)[uVar2];
 }
 printf(&DAT_001021f1,(ulong)uVar1);
 local_28 = 0x5341206f6c6c6548;
 uStack_20 = CONCAT62((uint16_t)uStack_20,0x4d);
 local_48 = 0;
 uStack_40 = 0;
 local_58 = 0;
 uStack_50 = 0;
 puVar4 = &local_28;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *(undefined1 *)piVar5 = *(undefined1 *)puVar4;
 piVar5 = (int *)((long)piVar5 + 1);
 puVar4 = (undefined8 *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if (cStack_54 == 'o' && (char)local_58 == 'H') {
 uVar6 = 0x2a;
 }
 printf(&DAT_0010220d,uVar6);
 local_58 = 0x200000001;
 uStack_50 = 0x400000003;
 local_28 = 0x600000005;
 uStack_20 = 0x800000007;
 local_38 = 6;
 uStack_34 = 8;
 uStack_30 = 10;
 uStack_2c = 0xc;
 printf(&DAT_00102229,0x24);
 LOCK();
 local_58 = CONCAT44((uint32_t)cStack_54,0xf);
 UNLOCK();
 printf(&DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(&DAT_00102261,(ulong)uVar1);
 return;
}



/* Function: main @ 001019f0 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
