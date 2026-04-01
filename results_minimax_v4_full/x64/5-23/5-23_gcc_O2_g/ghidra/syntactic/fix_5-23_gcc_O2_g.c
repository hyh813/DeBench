/* Auto-injected type definitions by preprocessor */
typedef unsigned char undefined;
typedef unsigned char undefined1;
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
typedef unsigned long ulong;
typedef unsigned char uchar;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef void (*code)();

/* Global variable referenced by the code */
extern int global_var;
int global_var = 0;

/* String constants referenced by Ghidra */
extern const char DAT_001021f0[];
extern const char DAT_0010203d[];
extern const char DAT_00102058[];
extern const char DAT_00102073[];
extern const char DAT_00102218[];
extern const char DAT_0010208e[];
extern const char DAT_00102238[];
extern const char DAT_001020aa[];
extern const char DAT_001020c5[];
extern const char DAT_001020e0[];
extern const char DAT_001020fb[];
extern const char DAT_00102268[];
extern const char DAT_00102298[];
extern const char DAT_00102117[];
extern const char DAT_00102133[];
extern const char DAT_0010214f[];
extern const char DAT_0010216b[];
extern const char DAT_00102187[];
extern const char DAT_001021a3[];

/* String constant definitions */
const char DAT_00102133[] = "Sum: %d\n";
const char DAT_001020e0[] = "call_macro_override: %d\n";
const char DAT_001020fb[] = "call_include_guard: %d\n";
const char DAT_00102187[] = "call_asm_atomic: %d\n";
const char DAT_00102218[] = "call_multi_branch_compile: %d\n";
const char DAT_001021f0[] = "test_preprocessing_features\n";
const char DAT_001020aa[] = "call_variadic_macro: %d\n";
const char DAT_00102238[] = "call_stringize: %d\n";
const char DAT_00102298[] = "test_asm_features\n";
const char DAT_0010214f[] = "call_asm_multi_insn: %d\n";
const char DAT_0010216b[] = "call_asm_simd: %d\n";
const char DAT_00102268[] = "call_builtin_macros: %d\n";
const char DAT_0010203d[] = "call_macro_functions: %d\n";
const char DAT_00102058[] = "call_conditional_compile: %d\n";
const char DAT_001020c5[] = "call_token_paste: %d\n";
const char DAT_00102117[] = "call_asm_basic: %d\n";
const char DAT_00102073[] = "call_conditional_compile: %d\n";
const char DAT_0010208e[] = "call_macro_recursion: %d\n";
const char DAT_001021a3[] = "test_asm_features completed\n";

/* Assembly macros for atomic operations */
#define LOCK()   __asm__ __volatile__("lock")
#define UNLOCK() __asm__ __volatile__("")

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_gcc_O2_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 /* Original code was: asm volatile(""); */
 return;
}



/* Function: main @ 00101100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00101210 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 00101230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00101240 */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x * x;
 if (x < y) {
 x = y;
 }
 return iVar1 + x;
}



/* Function: call_macro_functions @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00101270 */

int param_conditional_compile(int x)

{
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00101290 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 001012a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 001012b0 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 001012d0 */

int param_stringize(int value)

{
 return 0x13;
}



/* Function: call_stringize @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 001012f0 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00101300 */

int param_token_paste(int x)

{
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00101310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00101320 */

int param_variadic_macro(int x,int y,int z)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00101390 */

int param_macro_override(int x)

{
 return x * 3 + 1;
}



/* Function: call_macro_override @ 001013a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 001013b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 001013c0 */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 001013d0 */

int param_builtin_macros(int x)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:30");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:30");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00101470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 __printf_chk(1,&DAT_001021f0);
 __printf_chk(1,&DAT_0010203d,0x40);
 __printf_chk(1,&DAT_00102058,0x1e);
 __printf_chk(1,&DAT_00102073,0x20);
 __printf_chk(1,&DAT_00102218,0xdf22);
 __printf_chk(1,&DAT_0010208e,0x74);
 __printf_chk(1,&DAT_00102238,0x13);
 __printf_chk(1,&DAT_001020aa,0x3c);
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,&DAT_001020c5,0x3c);
 __printf_chk(1,&DAT_001020e0,0x10);
 __printf_chk(1,&DAT_001020fb,500);
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:30");
 __printf_chk(1,&DAT_00102268,0x17e);
 return;
}



/* Function: param_asm_basic @ 00101600 */

int param_asm_basic(int x)

{
 return x + 10;
}



/* Function: call_asm_basic @ 00101610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 /* Unresolved local var: int result@[???] */
 return 0xf;
}



/* Function: param_asm_clobber @ 00101630 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < n; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + arr[uVar2];
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00101650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 int iVar1;
 ulong uVar2;
 long in_FS_OFFSET;
 int arr [5];
 
 /* Unresolved local var: int sum@[???] */
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + arr[uVar2];
 }
 (void)in_FS_OFFSET;
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ 001016a0 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 for (; n != 0; n = n - 1) {
 *(undefined1 *)dst = *(undefined1 *)src;
 dst = (void *)((long)dst + 1);
 src = (void *)((long)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 001016c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 long lVar1;
 int iVar2;
 char *pcVar3;
 char *pcVar4;
 long lVar5;
 long in_FS_OFFSET;
 char src [10];
 char dst [32];
 
 lVar5 = 9;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 pcVar4 = dst;
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
 pcVar3 = src;
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
 strncpy(src,"Hello ASM",10);
 for (; lVar5 != 0; lVar5 = lVar5 + -1) {
 *pcVar4 = *pcVar3;
 pcVar4 = pcVar4 + 1;
 pcVar3 = pcVar3 + 1;
 }
 if (dst[0] == 'H') {
 iVar2 = -1;
 if (dst[4] == 'o') {
 iVar2 = 0x2a;
 }
 }
 else {
 iVar2 = -1;
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_simd @ 00101760 */

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



/* Function: param_simd_intrinsics @ 00101780 */

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



/* Function: call_asm_simd @ 001017a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 long in_FS_OFFSET;
 int a [4];
 int b [4];
 int result [4];
 
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0x24;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_atomic @ 00101840 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00101850 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00101860 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 long in_FS_OFFSET;
 int counter;
 
 /* Unresolved local var: int old_value@[???] */
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0x1e;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 001018b0 */

int param_dynamic_code(int x)

{
 long lVar1;
 int iVar2;
 size_t __len;
 code *__addr;
 long in_FS_OFFSET;
 uchar code_arr [6];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (code *)0xffffffffffffffff) {
 iVar2 = -1;
 }
 else {
 *(undefined4 *)__addr = 0xc083f889;
 *(undefined2 *)(__addr + 4) = 0xc305;
 iVar2 = (*(int (*)(int))__addr)(x);
 munmap(__addr,__len);
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_memory_protection @ 00101950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 int *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (int *)0xffffffffffffffff) {
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



/* Function: param_clobber_importance @ 00101a20 */

int param_clobber_importance(int a,int b)

{
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00101a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 /* Unresolved local var: int result1@[???]
 Unresolved local var: int result2@[???] */
 if ((iVar1 == 0xf) && (iVar2 == 0x2a)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00101aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 long lVar1;
 int iVar2;
 ulong uVar3;
 long in_FS_OFFSET;
 int counter;
 int arr [5];
 
 /* Unresolved local var: int result@[???] */
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __printf_chk(1,&DAT_00102298);
 __printf_chk(1,&DAT_00102117,0xf);
 /* Unresolved local var: int sum@[???] */
 iVar2 = 0;
 for (uVar3 = 0; (int)uVar3 < 5; uVar3 = (ulong)((int)uVar3 + 1)) {
 iVar2 = iVar2 + arr[uVar3];
 }
 __printf_chk(1,&DAT_00102133,iVar2);
 iVar2 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0010214f,iVar2);
 iVar2 = call_asm_simd();
 __printf_chk(1,&DAT_0010216b,iVar2);
 /* Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 LOCK();
 UNLOCK();
 __printf_chk(1,&DAT_00102187,0x1e);
 call_asm_privileged();
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_001021a3);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
