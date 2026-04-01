/* Auto-injected type definitions by preprocessor */
#ifndef __uint8_t_defined
typedef unsigned char uint8_t;
#endif
#ifndef __uint16_t_defined
typedef unsigned short uint16_t;
#endif
#ifndef __uint32_t_defined
typedef unsigned int uint32_t;
#endif
#ifndef __int8_t_defined
typedef signed char int8_t;
#endif
#ifndef __int16_t_defined
typedef short int16_t;
#endif
#ifndef __int32_t_defined
typedef int int32_t;
#endif
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/auxv.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdint.h>
#include <stdbool.h>

/* Forward declarations */
extern int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
bool ExclusiveMonitorPass(void *address, int size);
bool ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Stub implementations for C runtime functions */

void __cxa_finalize(void *dso_handle)
{
    /* C++ runtime cleanup - stub implementation */
}

void deregister_tm_clones(void)
{
    /* Thread-local storage cleanup - stub implementation */
}

void __stack_chk_fail(void)
{
    /* Stack protector failure - stub implementation */
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Global variables */
static unsigned long __stack_chk_guard;
static void *__dso_handle = 0;
char __aarch64_have_lse_atomics = 0;
char completed_0 = 0;
int global_var = 0;

/* Data string constants */
static const char DAT_00101840[] = "Testing preprocessing features:\n";
static const char DAT_00101868[] = "macro_constants = %u\n";
static const char DAT_00101888[] = "macro_functions = %u\n";
static const char DAT_001018a8[] = "conditional_compile = %u\n";
static const char DAT_001018c8[] = "multi_branch_compile = %u\n";
static const char DAT_001018e8[] = "macro_recursion = %u\n";
static const char DAT_00101908[] = "stringize = %u\n";
static const char DAT_00101938[] = "token_paste = %u\n";
static const char DAT_00101958[] = "variadic_macro = %u\n";
static const char DAT_00101978[] = "macro_override = %u\n";
static const char DAT_00101998[] = "include_guard = %u\n";
static const char DAT_001019b8[] = "builtin_macros = %u\n";
static const char DAT_00101a10[] = "Testing asm features:\n";
static const char DAT_00101a40[] = "asm_basic = %u\n";
static const char DAT_00101a60[] = "asm_clobber = %u\n";
static const char DAT_00101a80[] = "asm_multi_insn = %u\n";
static const char DAT_00101aa0[] = "asm_simd = %u\n";
static const char DAT_00101ac0[] = "asm_atomic = %u\n";
static const char DAT_00101ae0[] = "asm_privileged = %u\n";


/* Function: FUN_00100880 @ 00100880 - Removed null pointer call artifact */



/* Function: init_have_lse_atomics @ 00100980 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00100ad4 */

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



/* Function: call_macro_constants @ 00100afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 int iVar1;
 
 iVar1 = param_macro_constants(0x800);
 return iVar1;
}



/* Function: param_macro_functions @ 00100b14 */

int param_macro_functions(int x,int y)

{
 int y_local;
 int x_local;
 
 if (y < x) {
 y = x;
 }
 return x * x + y;
}



/* Function: call_macro_functions @ 00100b48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 int iVar1;
 
 iVar1 = param_macro_functions(5,3);
 return iVar1;
}



/* Function: param_conditional_compile @ 00100b64 */

int param_conditional_compile(int x)

{
 int x_local;
 int result;
 
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100b98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 int iVar1;
 
 iVar1 = param_conditional_compile(10);
 return iVar1;
}



/* Function: param_multi_branch_compile @ 00100bb0 */

int param_multi_branch_compile(int x)

{
 int x_local;
 
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 int iVar1;
 
 iVar1 = param_multi_branch_compile(10);
 return iVar1;
}



/* Function: param_macro_recursion @ 00100bf0 */

int param_macro_recursion(int x)

{
 int x_local;
 
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100c08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 int iVar1;
 
 iVar1 = param_macro_recursion(100);
 return iVar1;
}



/* Function: param_stringize @ 00100c20 */

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
 return (int)sVar1 + (int)sVar2 + (int)sVar3;
}



/* Function: call_stringize @ 00100c84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 int iVar1;
 
 iVar1 = param_stringize(0);
 return iVar1;
}



/* Function: my_func @ 00100c9c */

int my_func(int x)

{
 int x_local;
 
 return x * 10;
}



/* Function: param_token_paste @ 00100cc0 */

int param_token_paste(int x)

{
 int iVar1;
 int x_local;
 int result;
 int temp__LINE__;
 
 iVar1 = my_func(x);
 return iVar1 + x + 5;
}



/* Function: call_token_paste @ 00100d00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 int iVar1;
 
 iVar1 = param_token_paste(5);
 return iVar1;
}



/* Function: param_variadic_macro @ 00100d18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_variadic_macro(int x,int y,int z)

{
 long lVar1;
 int z_local;
 int y_local;
 int x_local;
 int count;
 
 lVar1 = __stack_chk_guard;
 printf("LOG: Values: %d, %d, %d\n",(ulong)(uint)x,(ulong)(uint)y,(ulong)(uint)z);
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00100db0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 00100dd0 */

int param_macro_override(int x)

{
 int x_local;
 int r1;
 int r2;
 
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 int iVar1;
 
 iVar1 = param_macro_override(5);
 return iVar1;
}



/* Function: header_func @ 00100e1c */

int header_func(int x)

{
 int x_local;
 
 return x * 100;
}



/* Function: param_include_guard @ 00100e38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 int iVar1;
 
 iVar1 = header_func(5);
 return iVar1;
}



/* Function: call_include_guard @ 00100e50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 int iVar1;
 
 iVar1 = param_include_guard();
 return iVar1;
}



/* Function: param_builtin_macros @ 00100e64 */

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
 "Jan 15 2026","03:01:25");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100f08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 00100f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 uint uVar1;

 puts(DAT_00101840);
 uVar1 = call_macro_constants();
 printf(DAT_00101868,(ulong)uVar1);
 uVar1 = call_macro_functions();
 printf(DAT_00101888,(ulong)uVar1);
 uVar1 = call_conditional_compile();
 printf(DAT_001018a8,(ulong)uVar1);
 uVar1 = call_multi_branch_compile();
 printf(DAT_001018c8,(ulong)uVar1);
 uVar1 = call_macro_recursion();
 printf(DAT_001018e8,(ulong)uVar1);
 uVar1 = call_stringize();
 printf(DAT_00101908,(ulong)uVar1);
 uVar1 = call_token_paste();
 printf(DAT_00101938,(ulong)uVar1);
 uVar1 = call_variadic_macro();
 printf(DAT_00101958,(ulong)uVar1);
 uVar1 = call_macro_override();
 printf(DAT_00101978,(ulong)uVar1);
 uVar1 = call_include_guard();
 printf(DAT_00101998,(ulong)uVar1);
 uVar1 = call_builtin_macros();
 printf(DAT_001019b8,(ulong)uVar1);
 return;
}



/* Function: param_asm_basic @ 0010101c */

int param_asm_basic(int x)

{
 int x_local;
 int result;
 
 return x + 10;
}



/* Function: call_asm_basic @ 0010103c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 int iVar1;
 
 iVar1 = param_asm_basic(5);
 return iVar1;
}



/* Function: param_asm_clobber @ 00101054 */

int param_asm_clobber(int *arr,int n)

{
 int n_local;
 int *arr_local;
 int sum;
 int i;
 
 sum = 0;
 for (i = 0; i < n; i = i + 1) {
 sum = sum + arr[i];
 }
 return sum;
}



/* Function: call_asm_clobber @ 001010b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 long lVar1;
 int iVar2;
 int arr [5];
 
 lVar1 = __stack_chk_guard;
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 iVar2 = param_asm_clobber(arr,5);
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_asm_multi_insn @ 0010112c */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 size_t n_local;
 void *src_local;
 void *dst_local;
 
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 0010115c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 long lVar1;
 int iVar2;
 char src [10];
 char dst [32];
 
 lVar1 = __stack_chk_guard;
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
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_asm_simd @ 00101200 */

int param_asm_simd(int *a,int *b,int *result)

{
 int *result_local;
 int *b_local;
 int *a_local;
 int i;
 
 for (i = 0; i < 4; i = i + 1) {
 result[i] = a[i] + b[i];
 }
 return 0;
}



/* Function: param_simd_intrinsics @ 0010127c */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 int *result_local;
 int *b_local;
 int *a_local;
 int i;
 
 for (i = 0; i < 4; i = i + 1) {
 result[i] = a[i] + b[i];
 }
 return 0;
}



/* Function: call_asm_simd @ 001012f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int iVar1;
 long lVar2;
 int a [4];
 int b [4];
 int result [4];
 
 lVar2 = __stack_chk_guard;
 a[0] = 1;
 a[1] = 2;
 a[2] = 3;
 a[3] = 4;
 b[0] = 5;
 b[1] = 6;
 b[2] = 7;
 b[3] = 8;
 param_asm_simd(a,b,result);
 iVar1 = result[0] + result[1] + result[2] + result[3];
 if (lVar2 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_asm_atomic @ 001013b0 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 int increment_local;
 int *counter_local;
 int old_value;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 001013e4 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 int increment_local;
 int *counter_local;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00101414 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int counter;
 int new_val;
 long local_8;
 
 local_8 = __stack_chk_guard;
 counter = 10;
 new_val = param_asm_atomic(&counter,5);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return counter + new_val;
}



/* Function: param_dynamic_code @ 00101484 */

int param_dynamic_code(int x)

{
 int iVar1;
 size_t __len;
 void *__addr;
 int x_local;
 int result;
 size_t page_size;
 void *exec_mem;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 iVar1 = -1;
 }
 else {
 iVar1 = x + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 001014f4 */

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



/* Function: param_clobber_importance @ 001015d8 */

int param_clobber_importance(int a,int b)

{
 int b_local;
 int a_local;
 
 return (a + b) * 2;
}



/* Function: call_asm_privileged @ 001015fc */

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



/* Function: param_memory_clobber_demo @ 00101660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 int local;
 int result;
 
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 uint uVar1;

 puts(DAT_00101a10);
 uVar1 = call_asm_basic();
 printf(DAT_00101a40,(ulong)uVar1);
 uVar1 = call_asm_clobber();
 printf(DAT_00101a60,(ulong)uVar1);
 uVar1 = call_asm_multi_insn();
 printf(DAT_00101a80,(ulong)uVar1);
 uVar1 = call_asm_simd();
 printf(DAT_00101aa0,(ulong)uVar1);
 uVar1 = call_asm_atomic();
 printf(DAT_00101ac0,(ulong)uVar1);
 uVar1 = call_asm_privileged();
 printf(DAT_00101ae0,(ulong)uVar1);
 return;
}



/* Function: main @ 00101728 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101750 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = ExclusiveMonitorPass(param_2,0x10);
 if (bVar2) {
 *param_2 = iVar3 + param_1;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_2;
 *param_2 = iVar3 + param_1;
 LORelease();
 return iVar3;
}

/* Stub implementations for ARM64 atomic intrinsics */

bool ExclusiveMonitorPass(void *address, int size)
{
    unsigned int result;
    __asm__ volatile("ldxr %w0, [%1]" : "=r"(result) : "r"(address));
    return true;
}

bool ExclusiveMonitorsStatus(void)
{
    unsigned int result;
    __asm__ volatile("clrex" ::: "memory");
    return false;
}

void LOAcquire(void)
{
    __asm__ volatile("" ::: "memory");
}

void LORelease(void)
{
    __asm__ volatile("" ::: "memory");
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 55 */
