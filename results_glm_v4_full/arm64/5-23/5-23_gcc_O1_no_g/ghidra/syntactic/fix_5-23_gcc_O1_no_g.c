#include <stdbool.h>

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

/* Ghidra decompiler types */
typedef unsigned char byte;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef void undefined;

/* Standard type definitions */

/* Stack protector globals */
extern unsigned long __stack_chk_guard;
extern unsigned long ___stack_chk_guard;

/* Additional globals */
extern unsigned long __getauxval(unsigned long);
extern byte __aarch64_have_lse_atomics;
extern int __printf_chk(int, const char *, ...);
extern char completed_0;
extern int global_var;

extern char *strncpy(char *, const char *, size_t);
extern void *mmap(void *, size_t, int, int, int, long);
extern int munmap(void *, size_t);
extern int mprotect(void *, size_t, int);

/* Wrapper for strncpy */
char *builtin_strncpy(char *dest, const char *src, size_t n)
{
 return strncpy(dest, src, n);
}

/* Standard library function declarations */
extern void __stack_chk_fail(void);
extern void *memcpy(void *, const void *, size_t);
extern char *strncpy(char *, const char *, size_t);
extern long sysconf(int);
extern int __aarch64_ldadd4_acq_rel(int, int *);

/* ARM atomic intrinsics */
extern bool ExclusiveMonitorPass(void *, size_t);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);

/* C++ runtime and CRT symbols */
extern void __cxa_finalize(void *);
extern void *__dso_handle;

/* Stub for deregister_tm_clones */
void deregister_tm_clones(void)
{
}

/* Data symbols */
unsigned long __stack_chk_guard;
unsigned long ___stack_chk_guard;
char completed_0 = '\0';
int global_var = 0;

char DAT_00101320[] = "Testing preprocessing features...\n";
char DAT_00101348[] = "Macro constants: %d\n";
char DAT_00101368[] = "Macro functions: %d\n";
char DAT_00101388[] = "Conditional compile: %d\n";
char DAT_001013a8[] = "Multi-branch compile: %d\n";
char DAT_001013c8[] = "Macro recursion: %d\n";
char DAT_001013e8[] = "Stringize: %d\n";
char DAT_00101418[] = "Token paste: %d\n";
char DAT_00101438[] = "Variadic macro return: %d\n";
char DAT_00101458[] = "Macro override: %d\n";
char DAT_00101478[] = "Include guard: %d\n";
char DAT_00101498[] = "Built-in macros result: %d\n";
char DAT_001014d8[] = "Testing ASM features...\n";
char DAT_00101508[] = "ASM basic: %d\n";
char DAT_00101528[] = "ASM clobber: %d\n";
char DAT_00101548[] = "ASM multi-insn: %d\n";
char DAT_00101568[] = "ASM SIMD: %d\n";
char DAT_00101588[] = "ASM atomic: %d\n";
char DAT_001015a8[] = "ASM privileged: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100810 @ 00100810 */

void FUN_00100810(void)

{
 (*(void (*)(void))0)();
 return;
}



/* Function: init_have_lse_atomics @ 00100900 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001009fc @ 001009fc */

void FUN_001009fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00100a54 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00100a68 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00100a70 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00100a80 */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100a88 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100a94 */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100a9c */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100aac */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100ab4 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100abc */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100ac4 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00100acc */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100ad4 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100ae0 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00100af0 */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100af8 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100b34 */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

/* Function: call_variadic_macro_ret @ 00100b34_ret */

undefined4 call_variadic_macro_ret(void)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 00100b54 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100b60 */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100b68 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100b70 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100b78 */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:28");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100bcc */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* Function: test_preprocessing_features @ 00100be4 */

void test_preprocessing_features(void)

{
 undefined4 uVar1;

 __printf_chk(1,DAT_00101320);
 __printf_chk(1,DAT_00101348,0x40);
 __printf_chk(1,DAT_00101368,0x1e);
 __printf_chk(1,DAT_00101388,0x20);
 __printf_chk(1,DAT_001013a8,0xdf22);
 __printf_chk(1,DAT_001013c8,0x74);
 __printf_chk(1,DAT_001013e8,0x13);
 __printf_chk(1,DAT_00101418,0x3c);
 uVar1 = call_variadic_macro_ret();
 __printf_chk(1,DAT_00101438,uVar1);
 __printf_chk(1,DAT_00101458,0x10);
 __printf_chk(1,DAT_00101478,500);
 call_builtin_macros();
 uVar1 = param_builtin_macros(100);
 __printf_chk(1,DAT_00101498,uVar1);
 return;
}



/* Function: param_asm_basic @ 00100ce8 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100cf0 */

undefined8 call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100cf8 */

int param_asm_clobber(long param_1,int param_2)

{
 int iVar1;
 long lVar2;
 
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00100d2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_clobber(void)

{
 undefined8 uVar1;
 undefined8 local_20;
 undefined8 uStack_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = param_asm_clobber((long)&local_20,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ 00100d94 */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return;
}



/* Function: call_asm_multi_insn @ 00100da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_multi_insn(void)

{
 undefined4 uVar1;
 char local_38 [16];
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 builtin_strncpy(local_38,"Hello ASM",10);
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 param_asm_multi_insn(&local_28,local_38,9);
 if ((char)local_28 == 'H') {
 uVar1 = 0x2a;
 if (((char *)&local_28)[4] != 'o') {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: param_asm_simd @ 00100e40 */

undefined8 param_asm_simd(long param_1,long param_2,long param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: param_simd_intrinsics @ 00100e68 */

undefined8 param_simd_intrinsics(long param_1,long param_2,long param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: call_asm_simd @ 00100e90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_simd(void)

{
 undefined4 local_38;
 undefined4 local_34;
 undefined4 local_30;
 undefined4 local_2c;
 undefined4 local_28;
 undefined4 local_24;
 undefined4 local_20;
 undefined4 local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 local_2c = 4;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 param_asm_simd((long)&local_38,(long)&local_28,(long)&local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_atomic @ 00100f40 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00100f6c */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00100f98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 00100ff8 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}



/* Function: param_memory_protection @ 0010105c */

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



/* Function: param_clobber_importance @ 0010112c */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 00101138 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar2 == 0x2a && iVar1 == 0xf) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00101170 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101180 */

void test_asm_features(void)

{
 undefined4 uVar1;

 __printf_chk(1,DAT_001014d8);
 __printf_chk(1,DAT_00101508,0xf);
 call_asm_clobber();
 uVar1 = 0x14a;
 __printf_chk(1,DAT_00101528,uVar1);
 call_asm_multi_insn();
 uVar1 = 0x2a;
 __printf_chk(1,DAT_00101548,uVar1);
 call_asm_simd();
 uVar1 = 0x2a;
 __printf_chk(1,DAT_00101568,uVar1);
 call_asm_atomic();
 uVar1 = 0xf;
 __printf_chk(1,DAT_00101588,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001015a8,uVar1);
 return;
}



/* Function: main @ 0010122c */

undefined8 main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101250 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
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




/* ARM atomic intrinsic implementations */

bool ExclusiveMonitorPass(void *addr, size_t size)
{
 /* Minimal implementation - in real ARM hardware this checks exclusive monitor */
 return true;
}

char ExclusiveMonitorsStatus(void)
{
 /* Return success status - no exclusive monitor conflict */
 return '\x00';
}

void LOAcquire(void)
{
 /* Acquire LSE atomic lock - minimal implementation */
}

void LORelease(void)
{
 /* Release LSE atomic lock - minimal implementation */
}

/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 54 */
