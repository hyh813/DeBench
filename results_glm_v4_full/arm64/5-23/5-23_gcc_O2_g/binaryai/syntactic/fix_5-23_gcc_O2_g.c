#include <stdint.h>
#include <stdbool.h>

/* Auto-injected type definitions by preprocessor */
/* Note: uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t, int64_t,
          intptr_t, uintptr_t, intmax_t, uintmax_t are provided by <stdint.h> */
/* Note: size_t, ssize_t, ptrdiff_t are provided by <stddef.h> included by other headers */

/* Additional type definitions */
typedef unsigned char byte;
typedef long __off_t;

/* NULL definition */
#define NULL ((void *)0)

/* Global variable definitions */
unsigned long ___stack_chk_guard;
unsigned char __aarch64_have_lse_atomics;
unsigned char completed_0;
extern void *__dso_handle;

/* Data section variables */
extern char DAT_00101550[];
extern char DAT_00101578[];
extern char DAT_00101598[];
extern char DAT_001015b8[];
extern char DAT_001015d8[];
extern char DAT_001015f8[];
extern char DAT_00101618[];
extern char DAT_00101648[];
extern char DAT_00101668[];
extern char DAT_00101688[];
extern char DAT_001016a8[];
extern char DAT_001016c8[];
extern char DAT_001016f8[];
extern char DAT_00101728[];
extern char DAT_00101748[];
extern char DAT_00101768[];
extern char DAT_00101788[];
extern char DAT_001017a8[];
extern char DAT_001017c8[];
int global_var;

/* Stack variable for _start - argv array pointer */
char *stack0x00000008[] = {NULL};

/* LSE atomics helper functions */
int ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

/* Implementation of LSE atomics helper functions */
int ExclusiveMonitorPass(void *addr, int size)
{
    int result;
    __asm__ volatile(
        "ldxr %w0, [%1]"
        : "=r" (result)
        : "r" (addr)
        : "memory"
    );
    return 1;
}

int ExclusiveMonitorsStatus(void)
{
    int result;
    __asm__ volatile(
        "clrex"
        :
        :
        : "memory"
    );
    return 0;
}

void LOAcquire(void)
{
    __asm__ volatile(
        "dmb ish"
        :
        :
        : "memory"
    );
}

void LORelease(void)
{
    __asm__ volatile(
        "dmb ish"
        :
        :
        : "memory"
    );
}

/* Temporary variables for atomic operations */
int tmp_ldWn;
int tmp_stWn;

// Decompiled by BinaryAI
// SHA256: df8832462c244e333d3771b7574efa085dc7c2f66f98298708ccf449211bc3e3



// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
 return;
}

/* Include standard headers for external function declarations */
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdlib.h>

/* External functions declared in system headers */
extern void __libc_start_main(int (*main)(int, char **), int argc, char **argv, void (*init)(void), void (*fini)(void), void *stack_end);
extern void __cxa_finalize(void *d);
extern int __printf_chk(int __flag, const char *__fmt, ...);
extern void __stack_chk_fail(void);
extern unsigned long __getauxval(unsigned long type);

/* Forward declarations */
void test_preprocessing_features(void);
void test_asm_features(void);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);

// Function: main @ 0x100900
int main(int argc, char **argv)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: init_have_lse_atomics @ 0x100920
void init_have_lse_atomics(void)
{
 byte extraout_var;
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}



// Function: param_macro_constants @ 0x100aa0
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x100ab4
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x100ac0
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100ad0
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x100ae0
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100af0
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x100b00
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100b10
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x100b20
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100b30
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x100b40
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x100b50
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x100b60
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100b70
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100b80
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x100b90
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100bd0
unsigned long long call_variadic_macro(void)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x100c00
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100c10
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x100c20
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x100c30
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x100c40
int param_builtin_macros(int param_1)
{
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100c94
unsigned long long call_builtin_macros(void)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x100ce0
void test_preprocessing_features(void)
{
 return;
}

// Function: param_asm_basic @ 0x100e30
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100e40
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100e50
int param_asm_clobber(long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_2) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_1 + lVar1);
 } while ((int)lVar3 < param_2);
 return iVar2;
 }
 return 0;
}

// Function: call_asm_clobber @ 0x100e90
void call_asm_clobber(void)
{
 long lVar1;
 lVar1 = 1;
 do {
 lVar1 = lVar1 + 1;
 } while (lVar1 != 6);
 return;
}

// Function: call_asm_multi_insn @ 0x100f14
unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100f20
unsigned long long param_asm_simd(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: param_simd_intrinsics @ 0x100f50
unsigned long long param_simd_intrinsics(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: call_asm_simd @ 0x100f80
unsigned long long call_asm_simd(void)
{
 long lVar1;
 long lVar2;
 int aiStack_3c [3];
 unsigned long long uStack_30;
 int iStack_24;
 unsigned long long uStack_20;
 int local_14 [5];
 uStack_20 = 0x800000007;
 uStack_30 = 0x400000003;
 lVar2 = 8;
 do {
 lVar1 = lVar2 + 4;
 *(int *)((long)&uStack_20 + lVar2 + 4) =
 *(int *)((long)aiStack_3c + lVar2) + *(int *)((long)&uStack_30 + lVar2 + 4);
 lVar2 = lVar1;
 } while (lVar1 != 0x14);
 return 0xf;
}

// Function: param_asm_atomic @ 0x101060
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101090
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x1010c0
void call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_dynamic_code @ 0x101124
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

// Function: param_memory_protection @ 0x101190
unsigned int param_memory_protection(int unused)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *__addr;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
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
 uVar2 = 0xfffffffd;
 munmap(__addr,__len);
 }
 }
 else {
 uVar2 = 0xfffffffe;
 munmap(__addr,__len);
 }
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x101260
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x101270
unsigned int call_asm_privileged(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection(0);
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = munmap(__addr,__len);
 iVar1 = param_memory_protection(iVar1);
 uVar2 = 0xf;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 return uVar2;
}

// Function: param_memory_clobber_demo @ 0x1012e4
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x1012f4
void test_asm_features(void)
{
 long lVar1;
 unsigned int uVar2;
 int iVar3;
 long lVar4;
 size_t __len;
 void *__addr;
 int local_24;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 iVar3 = 0;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 lVar4 = 1;
 do {
 lVar1 = lVar4 + 1;
 iVar3 = iVar3 + (&local_24)[lVar4];
 lVar4 = lVar1;
 } while (lVar1 != 6);
 uVar2 = call_asm_simd();
 local_24 = 10;
 iVar3 = __aarch64_ldadd4_acq_rel(5,&local_24);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection(0);
 uVar2 = 0xffffffff;
 }
 else {
 iVar3 = munmap(__addr,__len);
 iVar3 = param_memory_protection(iVar3);
 uVar2 = 0xf;
 if (iVar3 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101480
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar1 = *param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar3) {
 *param_2 = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_2;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_1;
 iVar1 = tmp_stWn;
 *param_2 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}



