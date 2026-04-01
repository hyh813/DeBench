#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>

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
typedef unsigned long ulong;
typedef unsigned char uchar;
typedef void undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef int (*code)(int);

/* External data references */
extern int global_var;

/* Data definitions */
int global_var = 0;
const char DAT_0010203d[] = "%d\n";
const char DAT_00102058[] = "%d\n";
const char DAT_00102073[] = "%d\n";
const char DAT_0010208e[] = "%d\n";
const char DAT_001020aa[] = "%d\n";
const char DAT_001020c5[] = "%d\n";
const char DAT_001020e0[] = "%d\n";
const char DAT_001020fb[] = "%d\n";
const char DAT_00102117[] = "%d\n";
const char DAT_00102133[] = "%d\n";
const char DAT_0010214f[] = "%d\n";
const char DAT_0010216b[] = "%d\n";
const char DAT_00102187[] = "%d\n";
const char DAT_001021a3[] = "%d\n";
const char DAT_001021f0[] = "Preprocessing features test:\n";
const char DAT_00102218[] = "%d\n";
const char DAT_00102238[] = "%d\n";
const char DAT_00102268[] = "%d\n";
const char DAT_00102298[] = "ASM features test:\n";

/* External function declarations */
void __stack_chk_fail(void);
int __printf_chk(int __flag, const char *__fmt, ...);
long sysconf(int name);

/* Macro definitions */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)
extern const char DAT_0010203d[];
extern const char DAT_00102058[];
extern const char DAT_00102073[];
extern const char DAT_0010208e[];
extern const char DAT_001020aa[];
extern const char DAT_001020c5[];
extern const char DAT_001020e0[];
extern const char DAT_001020fb[];
extern const char DAT_00102117[];
extern const char DAT_00102133[];
extern const char DAT_0010214f[];
extern const char DAT_0010216b[];
extern const char DAT_00102187[];
extern const char DAT_001021a3[];
extern const char DAT_001021f0[];
extern const char DAT_00102218[];
extern const char DAT_00102238[];
extern const char DAT_00102268[];
extern const char DAT_00102298[];

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_gcc_O1_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001011e9 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 00101201 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 0010120b */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x * x;
 if (x < y) {
 x = y;
 }
 return iVar1 + x;
}



/* Function: call_macro_functions @ 0010121c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00101226 */

int param_conditional_compile(int x)

{
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 0010122f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00101239 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101245 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 0010124f */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00101257 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00101261 */

int param_stringize(int value)

{
 return 0x13;
}



/* Function: call_stringize @ 0010126b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00101275 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 0010127f */

int param_token_paste(int x)

{
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 0010128b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00101295 */

int param_variadic_macro(int x,int y,int z)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 001012be */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 001012df */

int param_macro_override(int x)

{
 return x * 3 + 1;
}



/* Function: call_macro_override @ 001012e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 001012f2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 001012fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00101306 */

int param_builtin_macros(int x)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:26");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00101356 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 0010136d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 int iVar1;
 
 __printf_chk(1,&DAT_001021f0);
 __printf_chk(1,&DAT_0010203d,0x40);
 __printf_chk(1,&DAT_00102058,0x1e);
 __printf_chk(1,&DAT_00102073,0x20);
 __printf_chk(1,&DAT_00102218,0xdf22);
 __printf_chk(1,&DAT_0010208e,0x74);
 __printf_chk(1,&DAT_00102238,0x13);
 __printf_chk(1,&DAT_001020aa,0x3c);
 iVar1 = call_variadic_macro();
 __printf_chk(1,&DAT_001020c5,iVar1);
 __printf_chk(1,&DAT_001020e0,0x10);
 __printf_chk(1,&DAT_001020fb,500);
 iVar1 = call_builtin_macros();
 __printf_chk(1,&DAT_00102268,iVar1);
 return;
}



/* Function: param_asm_basic @ 001014c7 */

int param_asm_basic(int x)

{
 return x + 10;
}



/* Function: call_asm_basic @ 001014d5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 int iVar1;
 
 iVar1 = param_asm_basic(5);
 return iVar1;
}



/* Function: param_asm_clobber @ 001014e4 */

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



/* Function: call_asm_clobber @ 001014fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 int arr [5];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 iVar2 = param_asm_clobber(arr,5);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ 0010153b */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 for (; n != 0; n = n - 1) {
 *(undefined1 *)dst = *(undefined1 *)src;
 dst = (void *)((long)dst + 1);
 src = (void *)((long)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101556 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 char src [10];
 char dst [32];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 strncpy(src,"Hello ASM",10);
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
 param_asm_multi_insn(dst,src,9);
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



/* Function: param_asm_simd @ 001015f6 */

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



/* Function: param_simd_intrinsics @ 0010160d */

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



/* Function: call_asm_simd @ 00101622 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int a [4];
 int b [4];
 int result [4];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a,b,result);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return result[1] + result[0] + result[2] + result[3];
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_atomic @ 001016b5 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 001016c2 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 LOCK();
 iVar1 = *counter;
 *counter = *counter + increment;
 UNLOCK();
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 001016cf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 long lVar1;
 long in_FS_OFFSET;
 int counter;
 int old_value;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 old_value = param_asm_atomic(&counter,10);
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return old_value;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 0010171f */

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
 iVar2 = (*__addr)(x);
 munmap(__addr,__len);
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_memory_protection @ 001017bf */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 int *__addr;
 
 __len = (size_t)sysconf(0x1e);
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
 munmap(__addr,__len);
 iVar1 = -3;
 }
 }
 else {
 munmap(__addr,__len);
 iVar1 = -2;
 }
 }
 return iVar1;
}



/* Function: param_clobber_importance @ 00101878 */

int param_clobber_importance(int a,int b)

{
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 0010188c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001018f7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 
 __printf_chk(1,&DAT_00102298);
 iVar1 = call_asm_basic();
 __printf_chk(1,&DAT_00102117,iVar1);
 iVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00102133,iVar1);
 iVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0010214f,iVar1);
 iVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0010216b,iVar1);
 iVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00102187,iVar1);
 iVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_001021a3,iVar1);
 return;
}



/* Function: main @ 001019e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 50 */
