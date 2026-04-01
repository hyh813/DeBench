/* Auto-injected type definitions by preprocessor */
#include <stdint.h>
#include <inttypes.h>

typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long off_t;

/* Ghidra types */
typedef uint64_t undefined8;
typedef uint32_t undefined4;
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned long ulong;
typedef unsigned char undefined;
typedef void (*code)();

/* Global variables */
char completed_0 = 0;
char __aarch64_have_lse_atomics = 0;
int global_var = 0;
void *__dso_handle;

/* Data constants */
static int DAT_00101468[4] = {1, 2, 3, 4};
static int DAT_00101478[4] = {5, 6, 7, 8};
static char DAT_00101417[] = "Testing preprocessing features:\n";
static char DAT_00101223[] = "param_macro_constants(64) = %d\n";
static char DAT_0010123e[] = "call_macro_constants() = %d\n";
static char DAT_00101259[] = "param_macro_functions(3, 5) = %d\n";
static char DAT_00101274[] = "call_macro_functions() = %d\n";
static char DAT_00101293[] = "param_macro_recursion(100) = %d\n";
static char DAT_001012af[] = "call_stringize() = %d\n";
static char DAT_001012d9[] = "call_token_paste() = %d\n";
static char DAT_001012f4[] = "call_variadic_macro() = %d\n";
static char DAT_0010130f[] = "call_macro_override() = %d\n";
static char DAT_0010132a[] = "call_include_guard() = %d\n";
static char DAT_00101346[] = "call_builtin_macros() = %d\n";
static char DAT_0010136f[] = "param_asm_basic(5) = %d\n";
static char DAT_0010138b[] = "call_asm_basic() = %d\n";
static char DAT_001013a7[] = "param_asm_clobber() = %d\n";
static char DAT_001013c3[] = "call_asm_simd() = %d\n";
static char DAT_001013df[] = "call_asm_atomic() = %d\n";
static char DAT_001013fb[] = "test_asm_features() = %d\n";
static char DAT_0010143e[] = "Testing asm features:\n";

#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/auxv.h>
#include <elf.h>

/* Function prototypes */
int printf(const char *format, ...);
int puts(const char *s);
unsigned long __getauxval(unsigned long type);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t len);
int mprotect(void *addr, size_t len, int prot);
int __aarch64_ldadd4_acq_rel(int *ptr, int value);
long sysconf(int name);
int ExclusiveMonitorPass(void *ptr, int val);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
void deregister_tm_clones(void);
void __cxa_finalize(void *ptr);
void *memcpy(void *dest, const void *src, size_t n);
void *memset(void *s, int c, size_t n);

/* Additional function prototypes needed for linking - these are defined in the code */
int param_asm_multi_insn(void *dest, void *src, size_t n);
int call_asm_multi_insn(void);
int param_simd_intrinsics(long param_1, long param_2, long param_3);
int call_asm_simd(void);
int param_asm_basic(int param_1);
int call_asm_basic(void);
int param_asm_clobber(int *param_1, uint param_2);
int call_asm_clobber(void);
int param_asm_atomic(int *param_1, int param_2);
int call_asm_atomic(void);
int param_dynamic_code(int param_1);
int param_memory_protection(void);
int param_clobber_importance(int param_1, int param_2);
uint call_asm_privileged(void);
int param_memory_clobber_demo(void);
int test_preprocessing_features(void);
int test_asm_features(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */
/* Empty stub - original code was calling NULL function pointer */
void FUN_001007a0(void)

{
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 unsigned long extraout_var;
 
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

int param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x40;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 001009e8 */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 001009f0 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 <= param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00100a00 */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100a08 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100a14 */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100a1c */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100a2c */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100a34 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100a3c */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100a44 */

int param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00100a4c */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100a54 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100a60 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00100a70 */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100a78 */

int param_variadic_macro(uint param_1,ulong param_2,ulong param_3)

{
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100ab0 */

int call_variadic_macro(void)

{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100adc */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100ae8 */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100af0 */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100af8 */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100b00 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:40");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100b50 */

int call_builtin_macros(void)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:40");
 return 0x17e;
}



/* Function: test_preprocessing_features @ 00100b94 */

int test_preprocessing_features(void)

{
 int iVar1;
 
 puts((const char *)DAT_00101417);
 printf((const char *)DAT_00101223,0x40);
 printf((const char *)DAT_0010123e,0x1e);
 printf((const char *)DAT_00101259,0x20);
 printf((const char *)DAT_00101274,0xdf22);
 printf((const char *)DAT_00101293,0x74);
 printf((const char *)DAT_001012af,0x13);
 printf((const char *)DAT_001012d9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf((const char *)DAT_001012f4,0x3c);
 printf((const char *)DAT_0010130f,0x10);
 printf((const char *)DAT_0010132a,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:40");
 iVar1 = printf((const char *)DAT_00101346,0x17e);
 return iVar1;
}



/* Function: param_asm_basic @ 00100ca8 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100cb0 */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100cb8 */

int param_asm_clobber(int *param_1,uint param_2)

{
 int iVar1;
 ulong uVar2;
 
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (ulong)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00100ce8 */

int call_asm_clobber(void)

{
 return 0xf;
}



/* Function: param_asm_multi_insn @ 00100cf0 */

int param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return 0;
}



/* Function: call_asm_multi_insn @ 00100d04 */

int call_asm_multi_insn(void)

{
 return 0x2a;
}



/* Function: param_asm_simd @ 00100d0c */

int param_asm_simd(long param_1,long param_2,long param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: param_simd_intrinsics @ 00100d34 */

int param_simd_intrinsics(long param_1,long param_2,long param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: call_asm_simd @ 00100d5c */

int call_asm_simd(void)

{
 long lVar1;
 int local_10 [4];
 
 lVar1 = 0;
 do {
 *(int *)((long)local_10 + lVar1) =
 *(int *)((long)&DAT_00101478 + lVar1) + *(int *)((long)&DAT_00101468 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return local_10[1] + local_10[0] + local_10[2] + local_10[3];
}



/* Function: param_asm_atomic @ 00100db0 */

int param_asm_atomic(int *param_1, int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_1, param_2);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00100ddc */

int param_atomic_c11(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel((int *)param_1, param_2);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00100e08 */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(&local_14, 5);
 return local_14 + 5;
}



/* Function: param_dynamic_code @ 00100e40 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)-1) {
 iVar1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}



/* Function: param_memory_protection @ 00100ea8 */

int param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 int *__addr;
 int uVar2;
 
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 uVar2 = 0xfffffffe;
 }
 munmap(__addr,__len);
 }
 return uVar2;
}



/* Function: param_clobber_importance @ 00100f58 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_2 + param_1) * 2;
}



/* Function: call_asm_privileged @ 00100f64 */

uint call_asm_privileged(void)

{
 undefined4 uVar1;
 uint uVar2;
 int iVar3;
 size_t __len;
 void *__addr;
 undefined4 uVar5;
 void *pvVar4;
 
 __len = sysconf(0x1e);
 uVar5 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar2 = munmap(__addr,__len);
 pvVar4 = (void *)(ulong)uVar2;
 uVar5 = 0xf;
 }
 iVar3 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar3 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar5;
 }
 return uVar1;
}



/* Function: param_memory_clobber_demo @ 00100fe4 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00100ff4 */

int test_asm_features(void)

{
 uint uVar1;
 int iVar2;
 uint uVar3;
 size_t __len;
 void *__addr;
 long lVar5;
 int local_40 [4];
 void *pvVar4;
 
 puts((const char *)DAT_0010143e);
 printf((const char *)DAT_0010136f,0xf);
 printf((const char *)DAT_0010138b,0xf);
 printf((const char *)DAT_001013a7,0x2a);
 lVar5 = 0;
 do {
 *(int *)((long)local_40 + lVar5) =
 *(int *)((long)&DAT_00101478 + lVar5) + *(int *)((long)&DAT_00101468 + lVar5);
 lVar5 = lVar5 + 4;
 } while (lVar5 != 0x10);
 printf((const char *)DAT_001013c3,(ulong)(uint)(local_40[1] + local_40[0] + local_40[2] + local_40[3]));
 local_40[0] = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(local_40, 5);
 printf((const char *)DAT_001013df,(ulong)(iVar2 + local_40[0] + 5));
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar3 = munmap(__addr,__len);
 pvVar4 = (void *)(ulong)uVar3;
 uVar3 = 0xf;
 }
 iVar2 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar3;
 }
 iVar2 = printf((const char *)DAT_001013fb,(ulong)uVar1);
 return iVar2;
}



/* Function: main @ 00101144 */

int main(void)

{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101160 */

int __aarch64_ldadd4_acq_rel(int *param_1, int param_2)
{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_1;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
 if (bVar2) {
 *param_1 = iVar3 + param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_1;
 *param_1 = iVar3 + param_2;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Missing CRT stub functions - provide empty implementations */
void deregister_tm_clones(void) {}
void __cxa_finalize(void *ptr) {}

/* Missing atomic operation stubs - provide empty implementations */
int ExclusiveMonitorPass(void *ptr, int val) { return 0; }
char ExclusiveMonitorsStatus(void) { return 0; }
void LOAcquire(void) {}
void LORelease(void) {}

/* Missing memset implementation */
void *memset(void *s, int c, size_t n) {
    unsigned char *p = (unsigned char *)s;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return s;
}

/* Missing memcpy implementation */
void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}


/* Total functions decompiled: 54 */
