/* Auto-injected type definitions by preprocessor */
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdbool.h>

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
typedef unsigned char byte;
typedef void (*code)(void);
typedef unsigned char undefined;

/* External declarations for runtime symbols */
extern unsigned long __aarch64_have_lse_atomics;
extern int __aarch64_ldadd4_acq_rel(int, volatile int *);
extern char *strncpy(char *dest, const char *src, size_t n);
extern void __stack_chk_fail(void);
extern char *builtin_strncpy(char *dest, const char *src, size_t n);
extern int __printf_chk(int flag, const char *format, ...);
extern int ExclusiveMonitorPass(void *, int) __attribute__((weak));
extern char ExclusiveMonitorsStatus(void) __attribute__((weak));
extern void LOAcquire(void) __attribute__((weak));
extern void LORelease(void) __attribute__((weak));
extern unsigned long __getauxval(unsigned long);
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);
extern void register_tm_clones(void);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *mmap(void *addr, size_t len, int prot, int flags, int fd, off_t offset);
extern int munmap(void *addr, size_t len);
extern int mprotect(void *addr, size_t len, int prot);
extern long sysconf(int name);

/* Required C runtime symbols */
void *__dso_handle __attribute__((weak)) = 0;

/* Weak symbol definitions - must be defined, not just declared */
uintptr_t __stack_chk_guard __attribute__((weak)) = 0;
unsigned long __aarch64_have_lse_atomics __attribute__((weak)) = 0;

/* Weak stub for ExclusiveMonitorPass - used for atomic operations fallback */
int ExclusiveMonitorPass(void *addr, int val) __attribute__((weak));
int ExclusiveMonitorPass(void *addr, int val) {
    return 0;
}

/* Weak stub for ExclusiveMonitorsStatus - used for atomic operations fallback */
char ExclusiveMonitorsStatus(void) __attribute__((weak));
char ExclusiveMonitorsStatus(void) {
    return '\0';
}

/* Weak stub for LOAcquire - used for atomic operations fallback */
void LOAcquire(void) __attribute__((weak));
void LOAcquire(void) {
    /* Minimal stub - does nothing */
}

/* Weak stub for LORelease - used for atomic operations fallback */
void LORelease(void) __attribute__((weak));
void LORelease(void) {
    /* Minimal stub - does nothing */
}

/* Stack protector failure function - weak definition */
void __stack_chk_fail(void) __attribute__((weak));
void __stack_chk_fail(void) {
    /* Minimal stub - in real code this would abort */
    while(1) { }
}

/* CRT stub function definitions - weak stubs */
void __cxa_finalize(void *dso) __attribute__((weak));
void __cxa_finalize(void *dso) {
    /* Minimal stub - does nothing */
}

void deregister_tm_clones(void) __attribute__((weak));
void deregister_tm_clones(void) {
    /* Minimal stub - does nothing */
}

void register_tm_clones(void) __attribute__((weak));
void register_tm_clones(void) {
    /* Minimal stub - does nothing */
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */







/* Builtin function definition */
char *builtin_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
        if (src[i] == '\0') break;
    }
    if (i == n && n > 0) {
        dest[n-1] = '\0';
    }
    return dest;
}








/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */


/* Data definitions */
int global_var = 0;
char completed_0 = 0;

/* Data in .rodata section - format strings */
const char DAT_00101320[] = "\n=== Testing Preprocessing Features ===\n";
const char DAT_00101348[] = "param_macro_constants(0x400) = %d\n";
const char DAT_00101368[] = "call_macro_constants() = %d\n";
const char DAT_00101388[] = "param_macro_functions(3,5) = %d\n";
const char DAT_001013a8[] = "param_multi_branch_compile(5) = %d\n";
const char DAT_001013c8[] = "param_macro_recursion(10) = %d\n";
const char DAT_001013e8[] = "param_stringize(10) = %d\n";
const char DAT_00101418[] = "param_token_paste(5) = %d\n";
const char DAT_00101438[] = "call_variadic_macro() = %d\n";
const char DAT_00101458[] = "param_macro_override(5) = %d\n";
const char DAT_00101478[] = "call_include_guard() = %d\n";
const char DAT_00101498[] = "call_builtin_macros() = %d\n";
const char DAT_001014d8[] = "\n=== Testing ASM Features ===\n";
const char DAT_00101508[] = "call_asm_basic() = %d\n";
const char DAT_00101528[] = "call_asm_clobber() = %d\n";
const char DAT_00101548[] = "call_asm_multi_insn() = %d\n";
const char DAT_00101568[] = "call_asm_simd() = %d\n";
const char DAT_00101588[] = "call_asm_atomic() = %d\n";
const char DAT_001015a8[] = "call_asm_privileged() = %d\n";


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

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 00100a68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00100a70 */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x;
 if (x < y) {
 iVar1 = y;
 }
 return iVar1 + x * x;
}



/* Function: call_macro_functions @ 00100a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100a88 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit3; DW_OP_mul;
 DW_OP_plus_uconst: 2; DW_OP_stack_value] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100a94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100a9c */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100aac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100ab4 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100abc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100ac4 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00100acc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100ad4 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00100ae0 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit11; DW_OP_mul;
 DW_OP_plus_uconst: 5; DW_OP_stack_value]
 Unresolved local var: int temp__LINE__@[DW_OP_breg0(x0): +5;
 DW_OP_stack_value] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00100af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100af8 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00100b34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 00100b54 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[DW_OP_breg0(x0): +1; DW_OP_stack_value]
 Unresolved local var: int r2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100b60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100b68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100b70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100b78 */

int param_builtin_macros(int x)

{
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:27");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100bcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 00100be4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 int iVar1;
 
 __printf_chk(1,DAT_00101320);
 __printf_chk(1,DAT_00101348,0x40);
 __printf_chk(1,DAT_00101368,0x1e);
 __printf_chk(1,DAT_00101388,0x20);
 __printf_chk(1,DAT_001013a8,0xdf22);
 __printf_chk(1,DAT_001013c8,0x74);
 __printf_chk(1,DAT_001013e8,0x13);
 __printf_chk(1,DAT_00101418,0x3c);
 iVar1 = call_variadic_macro();
 __printf_chk(1,DAT_00101438,iVar1);
 __printf_chk(1,DAT_00101458,0x10);
 __printf_chk(1,DAT_00101478,500);
 iVar1 = call_builtin_macros();
 __printf_chk(1,DAT_00101498,iVar1);
 return;
}



/* Function: param_asm_basic @ 00100ce8 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): +10; DW_OP_stack_value] */
 return x + 10;
}



/* Function: call_asm_basic @ 00100cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100cf8 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 long lVar2;
 
 /* Unresolved local var: int sum@[???] */
 /* Unresolved local var: int i@[???] */
 if (n < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + arr[lVar2];
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < n);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00100d2c */

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
 if (lVar1 != __stack_chk_guard) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}


/* Function: param_asm_multi_insn @ 00100d94 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00100da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 uintptr_t uVar1;
 int iVar2;
 char src [10];
 char dst [32];
 
 uVar1 = __stack_chk_guard;
 builtin_strncpy(src,"Hello ASM",10);
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
 iVar2 = 0x2a;
 if (dst[4] != 'o') {
 iVar2 = -1;
 }
 }
 else {
 iVar2 = -1;
 }
 if (uVar1 != __stack_chk_guard) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar2;
}



/* Function: param_asm_simd @ 00100e40 */

int param_asm_simd(int *a,int *b,int *result)

{
 long lVar1;
 
 /* Unresolved local var: int i@[???] */
 lVar1 = 0;
 do {
 *(int *)((long)result + lVar1) = *(int *)((long)a + lVar1) + *(int *)((long)b + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: param_simd_intrinsics @ 00100e68 */

int param_simd_intrinsics(int *a,int *b,int *result)

{
 long lVar1;
 
 /* Unresolved local var: int i@[???] */
 lVar1 = 0;
 do {
 *(int *)((long)result + lVar1) = *(int *)((long)a + lVar1) + *(int *)((long)b + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: call_asm_simd @ 00100e90 */

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
 if (lVar2 - __stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_atomic @ 00100f40 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00100f6c */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00100f98 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int counter;
 long local_8;
 
 /* Unresolved local var: int new_val@[???] */
 local_8 = __stack_chk_guard;
 counter = 10;
 iVar1 = param_asm_atomic(&counter,5);
 if (local_8 - __stack_chk_guard == 0) {
 return iVar1 + counter;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 00100ff8 */

int param_dynamic_code(int x)

{
 size_t __len;
 void *__addr;
 int iVar1;
 
 /* Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
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



/* Function: param_memory_protection @ 0010105c */

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



/* Function: param_clobber_importance @ 0010112c */

int param_clobber_importance(int a,int b)

{
 return (a + b) * 2;
}



/* Function: call_asm_privileged @ 00101138 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar2 == 0x2a && iVar1 == 0xf) {
 iVar1 = 0x4d;
 }
 return iVar1;
}



/* Function: param_memory_clobber_demo @ 00101170 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 
 __printf_chk(1,DAT_001014d8);
 __printf_chk(1,DAT_00101508,0xf);
 iVar1 = call_asm_clobber();
 __printf_chk(1,DAT_00101528,iVar1);
 iVar1 = call_asm_multi_insn();
 __printf_chk(1,DAT_00101548,iVar1);
 iVar1 = call_asm_simd();
 __printf_chk(1,DAT_00101568,iVar1);
 iVar1 = call_asm_atomic();
 __printf_chk(1,DAT_00101588,iVar1);
 iVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001015a8,iVar1);
 return;
}



/* Function: main @ 0010122c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101250 */

int __aarch64_ldadd4_acq_rel(int param_1,volatile int *param_2)

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




/* Total functions decompiled: 54 */
