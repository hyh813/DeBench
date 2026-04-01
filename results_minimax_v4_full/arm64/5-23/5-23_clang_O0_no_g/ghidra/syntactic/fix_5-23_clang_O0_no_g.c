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

typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef void (*code)(void);

/* Global variables */
static char __aarch64_have_lse_atomics;
static char completed_0;
static void *__dso_handle;
static int global_var;

/* External function declarations */
int printf(const char *format, ...);
long sysconf(int name);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, long offset);
typedef long off_t;
char *strncpy(char *dest, const char *src, size_t n);
int mprotect(void *addr, size_t len, int prot);
int munmap(void *addr, size_t len);
void *__cxa_finalize(void *dso);
void deregister_tm_clones(void);
unsigned long __getauxval(unsigned long type);
size_t strlen(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);
int ExclusiveMonitorPass(void *addr, int val);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);

/* Stub implementations for exclusive monitor functions - used when LSE atomics not available */
int ExclusiveMonitorPass(void *addr, int val) {
    return 0;
}

char ExclusiveMonitorsStatus(void) {
    return '\0';
}

void LOAcquire(void) {
    __sync_synchronize();
}

void LORelease(void) {
    __sync_synchronize();
}

/* Stub implementation for CRT function */
void deregister_tm_clones(void) {
}

/* External variables */
extern int global_var;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int uint;

/* Required includes */
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdbool.h>

/* Forward declarations */
int header_func(int param_1);

/* DAT_ string variables (format strings) */
const char DAT_00101719[] = "Testing preprocessing features...\n";
const char DAT_00101741[] = "param_macro_constants(1024) = %d\n";
const char DAT_0010175c[] = "param_macro_functions(5,3) = %d\n";
const char DAT_00101777[] = "param_conditional_compile(10) = %d\n";
const char DAT_00101792[] = "param_multi_branch_compile(10) = %d\n";
const char DAT_001017b1[] = "param_macro_recursion(100) = %d\n";
const char DAT_001017cd[] = "param_stringize() = %lu\n";
const char DAT_001017f7[] = "param_token_paste(5) = %d\n";
const char DAT_00101812[] = "param_variadic_macro() = %d\n";
const char DAT_0010182d[] = "param_macro_override(5) = %d\n";
const char DAT_00101848[] = "call_include_guard() completed\n";
const char DAT_00101864[] = "param_builtin_macros(100) = %d\n";
const char DAT_00101897[] = "Testing asm features...\n";
const char DAT_001018c2[] = "call_asm_basic(5) = %lu\n";
const char DAT_001018de[] = "call_asm_clobber() = %lu\n";
const char DAT_001018fa[] = "call_asm_multi_insn() = %lu\n";
const char DAT_00101916[] = "call_asm_simd() = %lu\n";
const char DAT_00101932[] = "call_asm_atomic() = %lu\n";
const char DAT_0010194e[] = "call_asm_privileged() = %lu\n";

/* Function declarations */
unsigned long __getauxval(unsigned long);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* CRT stub function FUN_001007a0 removed - was calling NULL */



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
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

undefined4 param_macro_constants(int param_1)

{
 undefined4 local_4;
 
 if (param_1 < 0x401) {
 local_4 = 0x200;
 }
 else {
 local_4 = 0x40;
 }
 return local_4;
}



/* Function: call_macro_constants @ 00100a10 */

void call_macro_constants(void)

{
 param_macro_constants(0x800);
 return;
}



/* Function: param_macro_functions @ 00100a28 */

int param_macro_functions(int param_1,int param_2)

{
 int local_10;
 
 local_10 = param_2;
 if (param_2 < param_1) {
 local_10 = param_1;
 }
 return param_1 * param_1 + local_10;
}



/* Function: call_macro_functions @ 00100a84 */

void call_macro_functions(void)

{
 param_macro_functions(5,3);
 return;
}



/* Function: param_conditional_compile @ 00100aa0 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad0 */

void call_conditional_compile(void)

{
 param_conditional_compile(10);
 return;
}



/* Function: param_multi_branch_compile @ 00100ae8 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b0c */

void call_multi_branch_compile(void)

{
 param_multi_branch_compile(10);
 return;
}



/* Function: param_macro_recursion @ 00100b24 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100b78 */

void call_macro_recursion(void)

{
 param_macro_recursion(100);
 return;
}



/* Function: param_stringize @ 00100b90 */

ulong param_stringize(void)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3 & 0xffffffff;
}



/* Function: call_stringize @ 00100c08 */

void call_stringize(void)

{
 param_stringize();
 return;
}



/* Function: my_func @ 00100c20 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100c3c */

int param_token_paste(int param_1)

{
 int iVar1;
 
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 00100c84 */

void call_token_paste(void)

{
 param_token_paste(5);
 return;
}



/* Function: param_variadic_macro @ 00100c9c */

int param_variadic_macro(uint param_1,uint param_2,uint param_3)

{
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,(ulong)param_2,(ulong)param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100cf4 */

void call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return;
}



/* Function: param_macro_override @ 00100d14 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100d48 */

void call_macro_override(void)

{
 param_macro_override(5);
 return;
}



/* Function: param_include_guard @ 00100d60 */

void param_include_guard(void)

{
 header_func(5);
 return;
}



/* Function: header_func @ 00100d78 */

int header_func(int param_1)

{
 return param_1 * 100;
}



/* Function: call_include_guard @ 00100d94 */

void call_include_guard(void)

{
 param_include_guard();
 return;
}



/* Function: param_builtin_macros @ 00100da8 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:38");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100e54 */

void call_builtin_macros(void)

{
 param_builtin_macros(100);
 return;
}



/* Function: test_preprocessing_features @ 00100e6c */

int test_preprocessing_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00101719);
 call_macro_constants();
 iVar1 = printf(DAT_00101741,iVar1);
 call_macro_functions();
 iVar1 = printf(DAT_0010175c,iVar1);
 call_conditional_compile();
 iVar1 = printf(DAT_00101777,iVar1);
 call_multi_branch_compile();
 iVar1 = printf(DAT_00101792,iVar1);
 call_macro_recursion();
 iVar1 = printf(DAT_001017b1,iVar1);
 call_stringize();
 iVar1 = printf(DAT_001017cd,iVar1);
 call_token_paste();
 iVar1 = printf(DAT_001017f7,iVar1);
 call_variadic_macro();
 iVar1 = printf(DAT_00101812,iVar1);
 call_macro_override();
 iVar1 = printf(DAT_0010182d,iVar1);
 call_include_guard();
 iVar1 = printf(DAT_00101848,iVar1);
 call_builtin_macros();
 iVar1 = printf(DAT_00101864,iVar1);
 return iVar1;
}



/* Function: param_asm_basic @ 00100f64 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100f84 */

void call_asm_basic(void)

{
 param_asm_basic(5);
 return;
}



/* Function: param_asm_clobber @ 00100f9c */

int param_asm_clobber(void *param_1, int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
 }
 return local_10;
}



/* Function: call_asm_clobber @ 00101000 */

void call_asm_clobber(void)

{
 undefined8 local_30;
 undefined8 uStack_28;
 undefined4 local_20;
 
 uStack_28 = 0x400000003;
 local_30 = 0x200000001;
 local_20 = 5;
 param_asm_clobber((void *)&local_30,5);
 return;
}



/* Function: param_asm_multi_insn @ 0010103c */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return;
}



/* Function: call_asm_multi_insn @ 00101070 */

undefined4 call_asm_multi_insn(void)

{
 bool bVar1;
 undefined4 uVar2;
 undefined8 local_40;
 undefined8 uStack_38;
 undefined8 local_30;
 undefined8 uStack_28;
 char local_20 [16];
 
 strncpy(local_20,"Hello ASM",10);
 uStack_38 = 0;
 local_40 = 0;
 uStack_28 = 0;
 local_30 = 0;
 param_asm_multi_insn(&local_40,local_20,9);
 bVar1 = false;
 if ((char)local_40 == 'H') {
 bVar1 = ((char *)&local_40)[4] == 'o';
 }
 uVar2 = 0x2a;
 if (!bVar1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_asm_simd @ 001010f8 */

undefined8 param_asm_simd(long param_1,long param_2,long param_3)

{
 undefined4 local_1c;
 
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 *(int *)(param_3 + (long)local_1c * 4) =
 *(int *)(param_1 + (long)local_1c * 4) + *(int *)(param_2 + (long)local_1c * 4);
 }
 return 0;
}



/* Function: param_simd_intrinsics @ 00101168 */

undefined8 param_simd_intrinsics(long param_1,long param_2,long param_3)

{
 undefined4 local_1c;
 
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 *(int *)(param_3 + (long)local_1c * 4) =
 *(int *)(param_1 + (long)local_1c * 4) + *(int *)(param_2 + (long)local_1c * 4);
 }
 return 0;
}



/* Function: call_asm_simd @ 001011d8 */

int call_asm_simd(void)

{
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 undefined8 local_30;
 undefined8 uStack_28;
 undefined8 local_20;
 undefined8 uStack_18;
 
 uStack_18 = 0x400000003;
 local_20 = 0x200000001;
 uStack_28 = 0x800000007;
 local_30 = 0x600000005;
 param_asm_simd((long)&local_20,(long)&local_30,(long)&local_40);
 return local_40 + local_3c + local_38 + local_34;
}



/* Function: param_asm_atomic @ 0010123c */

int param_asm_atomic(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101288 */

int param_atomic_c11(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 001012cc */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 local_14 = 10;
 iVar1 = param_asm_atomic((undefined8)&local_14,5);
 return local_14 + iVar1;
}



/* Function: param_dynamic_code @ 00101308 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 undefined4 local_14;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 local_14 = -1;
 }
 else {
 local_14 = param_1 + 5;
 munmap(__addr,__len);
 }
 return local_14;
}



/* Function: param_memory_protection @ 00101394 */

undefined4 param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 local_14;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffffffffffff) {
 local_14 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 local_14 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 local_14 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 local_14 = 0xfffffffe;
 }
 }
 return local_14;
}



/* Function: param_clobber_importance @ 0010149c */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 001014c0 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 local_14 = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_14 == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_14 = 0x4d;
 }
 return local_14;
}



/* Function: param_memory_clobber_demo @ 00101548 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101574 */

int test_asm_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00101897);
 call_asm_basic();
 iVar1 = printf(DAT_001018c2,iVar1);
 call_asm_clobber();
 iVar1 = printf(DAT_001018de,iVar1);
 uVar2 = call_asm_multi_insn();
 iVar1 = printf(DAT_001018fa,uVar2 & 0xffffffff);
 uVar2 = call_asm_simd();
 iVar1 = printf(DAT_00101916,uVar2 & 0xffffffff);
 uVar2 = call_asm_atomic();
 iVar1 = printf(DAT_00101932,uVar2 & 0xffffffff);
 uVar2 = call_asm_privileged();
 iVar1 = printf(DAT_0010194e,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00101608 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101640 */

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




/* CRT stub function _fini removed by preprocessor */









/* Total functions decompiled: 55 */
