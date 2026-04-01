/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <emmintrin.h>
#include <stdatomic.h>

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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void * code;
typedef int (*func_t)(int);
typedef unsigned char uchar;
typedef char undefined;
typedef char undefined1;
typedef short undefined2;
typedef int undefined4;
typedef long long undefined8;
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
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void * code;
typedef int (*func_t)(int);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */




/* String constants from binary */
char DAT_00102090[] = "Testing Preprocessing Features:\n";
char DAT_001020b7[] = "macro_constants: %d\n";
char DAT_001020d2[] = "macro_functions: %d\n";
char DAT_001020ed[] = "conditional_compile: %d\n";
char DAT_00102108[] = "multi_branch_compile: %d\n";
char DAT_00102127[] = "macro_recursion: %d\n";
char DAT_00102148[] = "stringize: %d\n";
char DAT_00102172[] = "token_paste: %d\n";
char DAT_0010218d[] = "variadic_macro: %d\n";
char DAT_001021a8[] = "macro_override: %d\n";
char DAT_001021c3[] = "include_guard: %d\n";
char DAT_001021e0[] = "builtin_macros: %d\n";
char DAT_00102210[] = "Testing ASM Features:\n";
char DAT_0010223a[] = "asm_basic: %d\n";
char DAT_00102256[] = "asm_clobber: %d\n";
char DAT_00102272[] = "asm_multi_insn: %d\n";
char DAT_0010228e[] = "asm_simd: %d\n";
char DAT_001022aa[] = "asm_atomic: %d\n";
char DAT_001022c6[] = "asm_privileged: %d\n";

/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00101229 */

int param_macro_constants(int size)

{
 int iVar1;
 int size_local;
 
 if (size < 0x401) {
 iVar1 = 0x200;
 }
 else {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 0010124b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 int iVar1;
 
 iVar1 = param_macro_constants(0x800);
 return iVar1;
}



/* Function: param_macro_functions @ 0010125f */

int param_macro_functions(int x,int y)

{
 int iVar1;
 int y_local;
 int x_local;
 
 iVar1 = x * x;
 if (x <= y) {
 x = y;
 }
 return x + iVar1;
}



/* Function: call_macro_functions @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 int iVar1;
 
 iVar1 = param_macro_functions(5,3);
 return iVar1;
}



/* Function: param_conditional_compile @ 0010129d */

int param_conditional_compile(int x)

{
 int x_local;
 int result;
 
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 001012c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 int iVar1;
 
 iVar1 = param_conditional_compile(10);
 return iVar1;
}



/* Function: param_multi_branch_compile @ 001012d6 */

int param_multi_branch_compile(int x)

{
 int x_local;
 
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 001012f2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 int iVar1;
 
 iVar1 = param_multi_branch_compile(10);
 return iVar1;
}



/* Function: param_macro_recursion @ 00101306 */

int param_macro_recursion(int x)

{
 int x_local;
 
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00101319 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 int iVar1;
 
 iVar1 = param_macro_recursion(100);
 return iVar1;
}



/* Function: param_stringize @ 0010132d */

int param_stringize(int value)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 int value_local;
 char *str1;
 char *str2;
 char *str3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return (int)sVar3 + (int)sVar1 + (int)sVar2;
}



/* Function: call_stringize @ 0010138e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 int iVar1;
 
 iVar1 = param_stringize(0);
 return iVar1;
}



/* Function: my_func @ 001013a2 */

int my_func(int x)

{
 int x_local;
 
 return x * 10;
}



/* Function: param_token_paste @ 001013bb */

int param_token_paste(int x)

{
 int iVar1;
 int x_local;
 int result;
 int temp__LINE__;
 
 iVar1 = my_func(x);
 return iVar1 + x + 5;
}



/* Function: call_token_paste @ 001013eb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 int iVar1;
 
 iVar1 = param_token_paste(5);
 return iVar1;
}



/* Function: param_variadic_macro @ 001013ff */

int param_variadic_macro(int x,int y,int z)

{
 long lVar1;
 long in_FS_OFFSET = 0;
 int z_local;
 int y_local;
 int x_local;
 int count;
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 printf("LOG: Values: %d, %d, %d\n",(ulong)(uint)x,(ulong)(uint)y,(ulong)(uint)z);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00101472 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 00101490 */

int param_macro_override(int x)

{
 int x_local;
 int r1;
 int r2;
 
 return x * 3 + 1;
}



/* Function: call_macro_override @ 001014b6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 int iVar1;
 
 iVar1 = param_macro_override(5);
 return iVar1;
}



/* Function: header_func @ 001014ca */

int header_func(int x)

{
 int x_local;
 
 return x * 100;
}



/* Function: param_include_guard @ 001014dd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 int iVar1;
 
 iVar1 = header_func(5);
 return iVar1;
}



/* Function: call_include_guard @ 001014f1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 int iVar1;
 
 iVar1 = param_include_guard();
 return iVar1;
}



/* Function: param_builtin_macros @ 00101505 */

int param_builtin_macros(int x)

{
 int x_local;
 int line;
 int counter1;
 int counter2;
 int counter3;
 char *file;
 char *func;
 char *date;
 char *time;
 
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:23");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 001015a5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 001015b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 uint uVar1;
 
 puts(&DAT_00102090);
 uVar1 = call_macro_constants();
 printf(&DAT_001020b7,(ulong)uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_001020d2,(ulong)uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_001020ed,(ulong)uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_00102108,(ulong)uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_00102127,(ulong)uVar1);
 uVar1 = call_stringize();
 printf(&DAT_00102148,(ulong)uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00102172,(ulong)uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_0010218d,(ulong)uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_001021a8,(ulong)uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_001021c3,(ulong)uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_001021e0,(ulong)uVar1);
 return;
}



/* Function: param_asm_basic @ 00101733 */

int param_asm_basic(int x)

{
 int x_local;
 int result;
 
 return x + 10;
}



/* Function: call_asm_basic @ 00101750 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 int iVar1;
 
 iVar1 = param_asm_basic(5);
 return iVar1;
}



/* Function: param_asm_clobber @ 00101764 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 int n_local;
 int *arr_local;
 int sum;
 
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < n; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + arr[uVar2];
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 0010179a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 long lVar1;
 int iVar2;
 long in_FS_OFFSET;
 int arr [5];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar2 = param_asm_clobber(arr,5);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_asm_multi_insn @ 001017ff */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 size_t n_local;
 void *src_local;
 void *dst_local;
 
 for (; n != 0; n = n - 1) {
 *(undefined1 *)dst = *(undefined1 *)src;
 dst = (void *)((long)dst + 1);
 src = (void *)((long)src + 1);
 }
 return;
}



/* Function: call_asm_multi_insn @ 0010184d */

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
 if ((dst[0] == 'H') && (dst[4] == 'o')) {
 iVar2 = 0x2a;
 }
 else {
 iVar2 = -1;
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_asm_simd @ 001018e6 */

int param_asm_simd(int *a,int *b,int *result)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int *result_local;
 int *b_local;
 int *a_local;
 
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



/* Function: param_simd_intrinsics @ 0010191a */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int *result_local;
 int *b_local;
 int *a_local;
 __m128i vec_a;
 __m128i vec_b;
 __m128i vec_sum;
 int local_28;
 int iStack_24;
 int iStack_20;
 int iStack_1c;
 int local_18;
 int iStack_14;
 int iStack_10;
 int iStack_c;
 
 local_28 = (int)*(undefined8 *)a;
 iStack_24 = (int)((ulong)*(undefined8 *)a >> 0x20);
 iStack_20 = (int)*(undefined8 *)(a + 2);
 iStack_1c = (int)((ulong)*(undefined8 *)(a + 2) >> 0x20);
 local_18 = (int)*(undefined8 *)b;
 iStack_14 = (int)((ulong)*(undefined8 *)b >> 0x20);
 iStack_10 = (int)*(undefined8 *)(b + 2);
 iStack_c = (int)((ulong)*(undefined8 *)(b + 2) >> 0x20);
 *(ulong *)result = CONCAT44(iStack_14 + iStack_24,local_18 + local_28);
 *(ulong *)(result + 2) = CONCAT44(iStack_c + iStack_1c,iStack_10 + iStack_20);
 return 0;
}



/* Function: call_asm_simd @ 001019b5 */

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
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return result[3] + result[0] + result[1] + result[2];
}



#include <stdatomic.h>
static atomic_flag _lock = ATOMIC_FLAG_INIT;
#define LOCK()   atomic_flag_test_and_set_explicit(&_lock, memory_order_acquire)
#define UNLOCK() atomic_flag_clear_explicit(&_lock, memory_order_release)

/* Function: param_asm_atomic @ 00101a47 */

int param_asm_atomic(int *counter, int increment)

{
 int old_value;
 int increment_val = increment;
 
 __asm__ __volatile__(
 "lock; xaddl %0, %1"
 : "=r" (old_value), "+m" (*counter)
 : "0" (increment_val)
 : "memory"
 );
 return old_value + increment;
}


/* Function: param_atomic_c11 @ 00101a6e */

int param_atomic_c11(int *counter,int increment)

{
 int old_value;
 
 old_value = atomic_fetch_add_explicit(counter, increment, memory_order_acq_rel);
 return old_value + increment;
}


/* Function: call_asm_atomic @ 00101a8f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 long in_FS_OFFSET;
 int counter;
 int new_val;
 long local_10;
 
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 counter = 10;
 new_val = param_asm_atomic(&counter,5);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return new_val + counter;
}


/* Function: param_dynamic_code @ 00101ae3 */

int param_dynamic_code(int x)
{
 long lVar1;
 int iVar2;
 size_t __len;
 code *__addr;
 long in_FS_OFFSET;
 int x_local;
 int result;
 size_t page_size;
 void *exec_mem;
 func_t dynamic_func;
 uchar code [6];
 
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(_SC_PAGESIZE);
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
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_memory_protection @ 00101ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 int *__addr;
 int value;
 size_t page_size;
 void *mem;
 int *data;
 
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



/* Function: param_clobber_importance @ 00101ca7 */

int param_clobber_importance(int a,int b)

{
 int b_local;
 int a_local;
 int result1;
 int result2;
 
 return a * 2 + b * 2;
}



/* Function: call_asm_privileged @ 00101cdd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int r1;
 int r2;
 int r3;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber @ 00101d33 */

int param_memory_clobber(void)

{
 int result;
 int global_var;
 
 global_var = 0;
 result = global_var + 0x32;
 return result;
}



/* Function: test_asm_features @ 00101d57 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 uint uVar1;
 
 puts(&DAT_00102210);
 uVar1 = call_asm_basic();
 printf(&DAT_0010223a,(ulong)uVar1);
 uVar1 = call_asm_clobber();
 printf(&DAT_00102256,(ulong)uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00102272,(ulong)uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_0010228e,(ulong)uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_001022aa,(ulong)uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_001022c6,(ulong)uVar1);
 return;
}



/* Function: main @ 00101e31 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 51 */
