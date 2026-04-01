#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>
/* Auto-injected type definitions by preprocessor */
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned long ulong;
typedef void (*code)(void);
typedef unsigned char undefined;

/* Global variables */
byte __aarch64_have_lse_atomics;
int global_var = 0;
void *__dso_handle = NULL;
int DAT_00101478[4] = {1, 2, 3, 4};
int DAT_00101468[4] = {5, 6, 7, 8};
byte completed_0;
char *DAT_00101417 = "=== Preprocessing Features Test ===";
char *DAT_00101223 = "param_macro_constants: %d\n";
char *DAT_0010123e = "call_macro_constants: %d\n";
char *DAT_00101259 = "param_macro_functions: %d\n";
char *DAT_00101274 = "call_macro_functions: %d\n";
char *DAT_00101293 = "param_conditional_compile: %d\n";
char *DAT_001012af = "call_conditional_compile: %d\n";
char *DAT_001012d9 = "param_multi_branch_compile: %d\n";
char *DAT_001012f4 = "call_multi_branch_compile: %d\n";
char *DAT_0010130f = "param_macro_recursion: %d\n";
char *DAT_0010132a = "call_macro_recursion: %d\n";
char *DAT_00101346 = "call_builtin_macros: %d\n";
char *DAT_0010143e = "=== ASM Features Test ===";
char *DAT_0010136f = "param_asm_basic: %d\n";
char *DAT_0010138b = "call_asm_basic: %d\n";
char *DAT_001013a7 = "call_asm_multi_insn: %d\n";
char *DAT_001013c3 = "call_asm_simd: %d\n";
char *DAT_001013df = "call_asm_atomic: %d\n";
char *DAT_001013fb = "call_asm_privileged: %d\n";

/* Function declarations */
unsigned long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int ExclusiveMonitorPass(int *param_1,int param_2);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
void init_have_lse_atomics(void);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);
int puts(const char *s);
int printf(const char *format, ...);
void *memcpy(void *dest, const void *src, size_t n);

/* Stub implementations for undefined functions */
unsigned long __getauxval(unsigned long type) { return 0; }
void __cxa_finalize(void *dso_handle) { }
void deregister_tm_clones(void) { }
int ExclusiveMonitorPass(int *param_1,int param_2) { return 1; }
char ExclusiveMonitorsStatus(void) { return 0; }
void LOAcquire(void) { }
void LORelease(void) { }
long sysconf(int name) { return 4096; }
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset) { return (void*)0x10000; }
int munmap(void *addr, size_t length) { return 0; }
int mprotect(void *addr, size_t len, int prot) { return 0; }
int puts(const char *s) { printf("%s", s); return 0; }
int printf(const char *format, ...) { return 0; }
void *memcpy(void *dest, const void *src, size_t n) { return dest; }

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */

void FUN_001007a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 unsigned long auxval;
 
 auxval = __getauxval(0x10);
 __aarch64_have_lse_atomics = (byte)(auxval & 1);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010097c @ 0010097c */

void FUN_0010097c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001009d4 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x40;
 if (size < 0x401) {
 iVar1 = 0x200;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 001009e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 001009f0 */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x;
 if (x <= y) {
 iVar1 = y;
 }
 return iVar1 + x * x;
}



/* Function: call_macro_functions @ 00100a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100a08 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_reg0(x0)] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100a14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100a1c */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100a34 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100a3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100a44 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00100a4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100a54 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00100a60 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: int temp__LINE__@[???] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00100a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100a78 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 printf("LOG: Values: %d, %d, %d\n",(ulong)(uint)x,(ulong)(uint)y,(ulong)(uint)z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00100ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100adc */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100af8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100b00 */

int param_builtin_macros(int x)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter3@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter1@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00100b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 puts(DAT_00101417);
 printf(DAT_00101223,0x40);
 printf(DAT_0010123e,0x1e);
 printf(DAT_00101259,0x20);
 printf(DAT_00101274,0xdf22);
 printf(DAT_00101293,0x74);
 printf(DAT_001012af,0x13);
 printf(DAT_001012d9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_001012f4,0x3c);
 printf(DAT_0010130f,0x10);
 printf(DAT_0010132a,500);
 /* Unresolved local var: int line@[???]
 Unresolved local var: char * file@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???] */
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 printf(DAT_00101346,0x17e);
 return;
}



/* Function: param_asm_basic @ 00100ca8 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[???] */
 return x + 10;
}



/* Function: call_asm_basic @ 00100cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100cb8 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 ulong uVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 iVar1 = 0;
 uVar2 = (ulong)(uint)n;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *arr + iVar1;
 arr = arr + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00100ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 /* Unresolved local var: int[5] arr@[???] */
 return 0xf;
}



/* Function: param_asm_multi_insn @ 00100cf0 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00100d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 return 0x2a;
}



/* Function: param_asm_simd @ 00100d0c */

int param_asm_simd(int *a,int *b,int *result)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((long)result + lVar1) = *(int *)((long)b + lVar1) + *(int *)((long)a + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: param_simd_intrinsics @ 00100d34 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((long)result + lVar1) = *(int *)((long)b + lVar1) + *(int *)((long)a + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: call_asm_simd @ 00100d5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 long lVar1;
 int local_10 [4];
 
 /* Unresolved local var: int[4] result@[???]
 Unresolved local var: int[4] a@[???]
 Unresolved local var: int[4] b@[???] */
 lVar1 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 *(int *)((long)local_10 + lVar1) =
 *(int *)((long)&DAT_00101478 + lVar1) + *(int *)((long)&DAT_00101468 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return local_10[1] + local_10[0] + local_10[2] + local_10[3];
}



/* Function: param_asm_atomic @ 00100db0 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00100ddc */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00100e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 return iVar1 + local_14 + 5;
}



/* Function: param_dynamic_code @ 00100e40 */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 iVar1 = x + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00100ea8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_protection(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 int *__addr;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * mem@[???]
 Unresolved local var: int * data@[???]
 Unresolved local var: int value@[???] */
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 iVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 if (iVar2 == 0) {
 *__addr = 100;
 }
 else {
 iVar1 = -3;
 }
 }
 else {
 iVar1 = -2;
 }
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_clobber_importance @ 00100f58 */

int param_clobber_importance(int a,int b)

{
 return (b + a) * 2;
}



/* Function: call_asm_privileged @ 00100f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 void *__addr;
 int iVar3;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 iVar3 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 munmap(__addr,__len);
 iVar3 = 0xf;
 }
 iVar2 = param_memory_protection();
 iVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 iVar1 = iVar3;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00100fe4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00100ff4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 uint uVar1;
 int iVar2;
 size_t __len;
 void *__addr;
 long lVar3;
 uint uVar4;
 int local_40 [4];
 
 puts(DAT_0010143e);
 printf(DAT_0010136f,0xf);
 printf(DAT_0010138b,0xf);
 printf(DAT_001013a7,0x2a);
 lVar3 = 0;
 do {
 /* Unresolved local var: int[4] result@[DW_OP_breg31(sp): 0]
 Unresolved local var: int i@[???] */
 *(int *)((long)local_40 + lVar3) =
 *(int *)((long)&DAT_00101478 + lVar3) + *(int *)((long)&DAT_00101468 + lVar3);
 lVar3 = lVar3 + 4;
 } while (lVar3 != 0x10);
 printf(DAT_001013c3,(ulong)(uint)(local_40[1] + local_40[0] + local_40[2] + local_40[3]));
 /* Unresolved local var: int counter@[???]
 Unresolved local var: int old_value@[???] */
 local_40[0] = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(5,local_40);
 printf(DAT_001013df,(ulong)(iVar2 + local_40[0] + 5));
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 uVar4 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 munmap(__addr,__len);
 uVar4 = 0xf;
 }
 iVar2 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar4;
 }
 printf(DAT_001013fb,(ulong)uVar1);
 return;
}



/* Function: main @ 00101144 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101160 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (int)ExclusiveMonitorPass(param_2,0x10);
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




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 54 */
