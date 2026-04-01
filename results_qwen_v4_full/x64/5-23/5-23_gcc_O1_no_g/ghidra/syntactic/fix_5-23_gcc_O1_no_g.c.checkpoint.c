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
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned long ulong;
typedef unsigned long undefined;
typedef unsigned long (*code)(int);

/* LOCK/UNLOCK macros for atomic operations */
#define LOCK()
#define UNLOCK()

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_gcc_O1_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001011e9 */

undefined8 param_macro_constants(int param_1)

{
 undefined8 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00101201 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 0010120b */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return param_1 * param_1 + iVar1;
}



/* Function: call_macro_functions @ 0010121c */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00101226 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 0010122f */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00101239 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101245 */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 0010124f */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00101257 */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00101261 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 0010126b */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00101275 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 0010127f */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 0010128b */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00101295 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 001012be */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}



/* Function: param_macro_override @ 001012df */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 001012e8 */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 001012f2 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 001012fc */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00101306 */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:28");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00101356 */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* External data declarations */
extern char DAT_001021f0[];
extern char DAT_0010203d[];
extern char DAT_00102058[];
extern char DAT_00102073[];
extern char DAT_00102218[];
extern char DAT_0010208e[];
extern char DAT_00102238[];
extern char DAT_001020aa[];
extern char DAT_001020c5[];
extern char DAT_001020e0[];
extern char DAT_001020fb[];
extern char DAT_00102268[];
extern char DAT_00102298[];
extern char DAT_00102117[];
extern char DAT_00102133[];
extern char DAT_0010214f[];
extern char DAT_0010216b[];
extern char DAT_00102187[];
extern char DAT_001021a3[];
extern int global_var;

/* Data definitions for external symbols */
char DAT_0010203d[] = "param_macro_constants: %d\n";
char DAT_00102058[] = "call_macro_functions: %d\n";
char DAT_00102073[] = "call_conditional_compile: %d\n";
char DAT_0010208e[] = "call_macro_recursion: %d\n";
char DAT_001020aa[] = "call_token_paste: %d\n";
char DAT_001020c5[] = "call_macro_override: %d\n";
char DAT_001020e0[] = "call_include_guard: %d\n";
char DAT_001020fb[] = "param_include_guard: %d\n";
char DAT_00102117[] = "call_asm_basic: %d\n";
char DAT_00102133[] = "call_asm_clobber: %d\n";
char DAT_0010214f[] = "call_asm_multi_insn: %d\n";
char DAT_0010216b[] = "call_asm_simd: %d\n";
char DAT_00102187[] = "call_asm_atomic: %d\n";
char DAT_001021a3[] = "call_asm_privileged: %d\n";
char DAT_001021f0[] = "=== Testing Preprocessing Features ===\n";
char DAT_00102218[] = "call_multi_branch_compile: %d\n";
char DAT_00102238[] = "call_stringize: %d\n";
char DAT_00102268[] = "=== Testing ASM Features ===\n";
char DAT_00102298[] = "=== Testing ASM Features ===\n";
int global_var = 0;

/* Function: test_preprocessing_features @ 0010136d */

void test_preprocessing_features(void)

{
 undefined4 uVar1;
 
 __printf_chk(1,&DAT_001021f0);
 __printf_chk(1,&DAT_0010203d,0x40);
 __printf_chk(1,&DAT_00102058,0x1e);
 __printf_chk(1,&DAT_00102073,0x20);
 __printf_chk(1,&DAT_00102218,0xdf22);
 __printf_chk(1,&DAT_0010208e,0x74);
 __printf_chk(1,&DAT_00102238,0x13);
 __printf_chk(1,&DAT_001020aa,0x3c);
 call_variadic_macro();
 __printf_chk(1,&DAT_001020c5,0);
 __printf_chk(1,&DAT_001020e0,0x10);
 __printf_chk(1,&DAT_001020fb,500);
 call_builtin_macros();
 __printf_chk(1,&DAT_00102268,0);
 return;
}



/* Function: param_asm_basic @ 001014c7 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 001014d5 */

void call_asm_basic(void)

{
 param_asm_basic(5);
 return;
}



/* Function: param_asm_clobber @ 001014e4 */

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



/* Function: call_asm_clobber @ 001014fc */

void call_asm_clobber(void)

{
 long in_FS_OFFSET;
 undefined1 auStack_28 [24];
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 param_asm_clobber(auStack_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ 0010153b */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,long param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101556 */

undefined8 call_asm_multi_insn(void)

{
 undefined8 uVar1;
 long in_FS_OFFSET;
 undefined8 local_42;
 undefined2 local_3a;
 undefined8 local_38;
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_42 = 0x5341206f6c6c6548;
 local_3a = 0x4d;
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 param_asm_multi_insn(&local_38,&local_42,9);
 if ((char)local_38 == 'H') {
 uVar1 = 0xffffffff;
 if (((unsigned char*)&local_38)[4] == 'o') {
 uVar1 = 0x2a;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_simd @ 001015f6 */

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



/* Function: param_simd_intrinsics @ 0010160d */

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



/* Function: call_asm_simd @ 00101622 */

int call_asm_simd(void)

{
 long in_FS_OFFSET;
 undefined4 local_48;
 undefined4 local_44;
 undefined4 local_40;
 undefined4 local_3c;
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 1;
 local_44 = 2;
 local_40 = 3;
 local_3c = 4;
 local_38 = 5;
 local_34 = 6;
 local_30 = 7;
 local_2c = 8;
 param_asm_simd(&local_48,&local_38,&local_28);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_24 + local_28 + local_20 + local_1c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_atomic @ 001016b5 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 001016c2 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 001016cf */

undefined4 call_asm_atomic(void)

{
 long in_FS_OFFSET;
 
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0x1e;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 0010171f */

undefined4 param_dynamic_code(undefined4 param_1)

{
 long lVar1;
 undefined4 uVar2;
 size_t __len;
 code *__addr;
 long in_FS_OFFSET;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (code *)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *(undefined4 *)__addr = 0xc083f889;
 *(undefined2 *)(__addr + 4) = 0xc305;
 uVar2 = (*__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_memory_protection @ 001017bf */

undefined4 param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 uVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffffffffffff) {
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
 munmap(__addr,__len);
 uVar2 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00101878 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 0010188c */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if ((iVar1 == 0xf && iVar2 == 0x2a) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 001018e1 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001018f7 */

void test_asm_features(void)

{
 undefined4 uVar1;
 
 __printf_chk(1,&DAT_00102298);
 call_asm_basic();
 __printf_chk(1,&DAT_00102117,0);
 call_asm_clobber();
 __printf_chk(1,&DAT_00102133,0);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0010214f,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0010216b,uVar1);
 uVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00102187,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_001021a3,uVar1);
 return;
}



/* Function: main @ 001019e6 */

undefined8 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
