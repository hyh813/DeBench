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

/* Ghidra-specific type definitions */
typedef unsigned char byte;
typedef unsigned long ulong;
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t undefined;
typedef void (*code)();
typedef unsigned int uint;

/* CONCAT44 macro for combining 32-bit values into 64-bit */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

/* Global variables needed by the code */
unsigned long __aarch64_have_lse_atomics = 0;
unsigned long __stack_chk_guard = 0x1234567890abcdefUL;

/* __dso_handle - handle for the dynamic shared object */
void *__dso_handle = &__dso_handle;
int global_var;
char completed_0;

/* Stub implementations for missing CRT functions */

/* __stack_chk_fail - called when stack buffer overflow is detected */
void __stack_chk_fail(void)
{
 /* Stub: in production this would abort the program */
 while(1) { }
}

/* sysconf - get system configuration */
long sysconf(int name)
{
    (void)name;
    return 4096;  /* typical page size */
}

/* mmap - map memory */
void *mmap(void *addr, size_t len, int prot, int flags, int fd, long offset)
{
    (void)addr;
    (void)len;
    (void)prot;
    (void)flags;
    (void)fd;
    (void)offset;
    return (void *)-1;  /* MAP_FAILED */
}

/* munmap - unmap memory */
int munmap(void *addr, size_t len)
{
    (void)addr;
    (void)len;
    return 0;
}

/* mprotect - set memory protection */
int mprotect(void *addr, size_t len, int prot)
{
    (void)addr;
    (void)len;
    (void)prot;
    return 0;
}

/* memcpy - copy memory area */
void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

/* deregister_tm_clones - stub for C++ ABI (called from __cxa_finalize) */
void deregister_tm_clones(void)
{
 /* No thread-local objects to deregister in this simple program */
}

/* __cxa_finalize - called at program exit to run destructor functions */
void __cxa_finalize(void *dso_handle)
{
    (void)dso_handle;
    /* Stub: in a full implementation, this would call registered destructors */
    return;
}

/* Function prototypes for implicit declarations */
void test_preprocessing_features(void);
void test_asm_features(void);
unsigned long __getauxval(unsigned long);
void __cxa_finalize(void *);
void __stack_chk_fail(void) __attribute__((noreturn));
void *memcpy(void *, const void *, size_t);
int __aarch64_ldadd4_acq_rel(int, int *);
int __printf_chk(int, const char *, ...);
long sysconf(int);
void *mmap(void *, size_t, int, int, int, long);
int munmap(void *, size_t);
int mprotect(void *, size_t, int);
int ExclusiveMonitorPass(void *, int);
void LOAcquire(void);
void LORelease(void);
int ExclusiveMonitorsStatus(void);
int param_simd_intrinsics(int *param_1, int *param_2, int *param_3);
int param_asm_simd(int *a, int *b, int *result);
int param_memory_protection(void);
int param_atomic_c11(int *counter, int increment);
int call_atomic_c11(void);
int param_asm_atomic(int *counter, int increment);
int my_func(int x);

int call_asm_atomic(void);

/* call_asm_atomic_inlined - inlined version of atomic add */
/* This is implemented as a static inline that gets inlined at call sites */
static inline int call_asm_atomic_inlined(void)
{
    int counter = 10;
    int old_val = __aarch64_ldadd4_acq_rel(5, &counter);
    return old_val + 5 + counter;
}

/* Note: call_asm_atomic is defined below */
char DAT_001014d0[] = "Testing macro constants:\n";
char DAT_001014f8[] = "  MACRO_CONSTANT = %d\n";
char DAT_00101518[] = "  MACRO_FUNCTION(3, 2) = %d\n";
char DAT_00101538[] = "  conditional_compile(10) = %d\n";
char DAT_00101558[] = "  multi_branch_compile(1234) = %d\n";
char DAT_00101578[] = "  macro_recursion(100) = %d\n";
char DAT_00101598[] = "  stringize(test) = %d\n";
char DAT_001015c8[] = "  token_paste(test, 5) = %d\n";
char DAT_001015e8[] = "  variadic_macro(10, 20, 30) = %d\n";
char DAT_00101608[] = "  macro_override(5) = %d\n";
char DAT_00101628[] = "  include_guard() = %d\n";
char DAT_00101648[] = "  builtin_macros(100) = %d\n";
char DAT_00101678[] = "Testing asm features:\n";
char DAT_001016a8[] = "  asm_basic() = %d\n";
char DAT_001016c8[] = "  asm_clobber(arr, 5) = %d\n";
char DAT_001016e8[] = "  memory_protection() = %d\n";
char DAT_00101708[] = "  asm_simd() = %d\n";
char DAT_00101728[] = "  asm_atomic(counter, 5) = %d\n";
char DAT_00101748[] = "All tests completed.\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O3_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* __getauxval - stub for getting auxiliary vector values */
unsigned long __getauxval(unsigned long type)
{
    (void)type;
    return 0;
}



/* Function: FUN_00100810 @ 00100810 */
/* This appears to be a CRT stub that was partially removed - safe to make no-op */

void FUN_00100810(void)

{
 /* This was originally calling a function pointer at address 0x0
    which was likely a CRT _init hook that was removed by preprocessor */
 return;
}



/* Function: main @ 00100900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: FUN_0010091c @ 0010091c */

void FUN_0010091c(void)

{
 __aarch64_have_lse_atomics = __getauxval(0x10) & 1;
 return;
}



/* Function: init_have_lse_atomics @ 00100920 */

void init_have_lse_atomics(void)

{
 __aarch64_have_lse_atomics = __getauxval(0x10) & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00100aa0 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 00100ab4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00100ac0 */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x;
 if (x < y) {
 iVar1 = y;
 }
 return iVar1 + x * x;
}



/* Function: call_macro_functions @ 00100ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100ae0 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit3; DW_OP_mul;
 DW_OP_plus_uconst: 2; DW_OP_stack_value] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100b00 */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100b20 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100b30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100b40 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00100b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100b60 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00100b70 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit11; DW_OP_mul;
 DW_OP_plus_uconst: 5; DW_OP_stack_value]
 Unresolved local var: int temp__LINE__@[DW_OP_breg0(x0): +5;
 DW_OP_stack_value] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00100b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100b90 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: FUN_00100bcc @ 00100bcc */

undefined8 FUN_00100bcc(void)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: call_variadic_macro @ 00100bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100c00 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[DW_OP_breg0(x0): +1; DW_OP_stack_value]
 Unresolved local var: int r2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100c20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100c30 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100c40 */

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
 ,0x117,"Jan 15 2026","03:01:31");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

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
 ,0x117,"Jan 15 2026","03:01:31");
 return 0x17e;
}



/* Function: FUN_00100cdc @ 00100cdc */

void FUN_00100cdc(void)

{
 __printf_chk(1,DAT_001014d0);
 __printf_chk(1,DAT_001014f8,0x40);
 __printf_chk(1,DAT_00101518,0x1e);
 __printf_chk(1,DAT_00101538,0x20);
 __printf_chk(1,DAT_00101558,0xdf22);
 __printf_chk(1,DAT_00101578,0x74);
 __printf_chk(1,DAT_00101598,0x13);
 __printf_chk(1,DAT_001015c8,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_001015e8,0x3c);
 __printf_chk(1,DAT_00101608,0x10);
 __printf_chk(1,DAT_00101628,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:31");
 __printf_chk(1,DAT_00101648,0x17e);
 return;
}



/* Function: test_preprocessing_features @ 00100ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 __printf_chk(1,DAT_001014d0);
 __printf_chk(1,DAT_001014f8,0x40);
 __printf_chk(1,DAT_00101518,0x1e);
 __printf_chk(1,DAT_00101538,0x20);
 __printf_chk(1,DAT_00101558,0xdf22);
 __printf_chk(1,DAT_00101578,0x74);
 __printf_chk(1,DAT_00101598,0x13);
 __printf_chk(1,DAT_001015c8,0x3c);
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_001015e8,0x3c);
 __printf_chk(1,DAT_00101608,0x10);
 __printf_chk(1,DAT_00101628,500);
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:31");
 __printf_chk(1,DAT_00101648,0x17e);
 return;
}



/* Function: param_asm_basic @ 00100e30 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): +10; DW_OP_stack_value] */
 return x + 10;
}



/* Function: call_asm_basic @ 00100e40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100e50 */

int param_asm_clobber(int *arr,int n)

{
 int *piVar1;
 ulong uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 int *piVar2;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (n < 1) {
 return 0;
 }
 if (n - 1U < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 piVar1 = arr;
 do {
 piVar2 = piVar1 + 4;
 iVar4 = iVar4 + (int)*(undefined8 *)piVar1;
 iVar5 = iVar5 + (int)((ulong)*(undefined8 *)piVar1 >> 0x20);
 iVar6 = iVar6 + (int)*(undefined8 *)(piVar1 + 2);
 iVar7 = iVar7 + (int)((ulong)*(undefined8 *)(piVar1 + 2) >> 0x20);
 piVar1 = piVar2;
 } while (piVar2 != arr + (ulong)(((uint)n >> 2) - 1) * 4 + 4);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (ulong)(n & 0xfffffffc);
 if ((n & 3U) == 0) {
 return iVar4;
 }
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + arr[iVar5];
 if (iVar5 + 1 < n) {
 iVar4 = iVar4 + *(int *)((long)arr + uVar3 + 4);
 if (iVar5 + 2 < n) {
 iVar4 = iVar4 + *(int *)((long)arr + uVar3 + 8);
 }
 }
 return iVar4;
}



/* Function: call_asm_clobber @ 00100ef4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 /* Unresolved local var: int[5] arr@[???] */
 return 0xf;
}



/* Function: param_asm_multi_insn @ 00100f00 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00100f04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 return 0x2a;
}



/* Function: param_asm_simd @ 00100f10 */

int param_asm_simd(int *a,int *b,int *result)

{
 undefined8 uVar1;
 undefined8 uVar2;
 
 /* Unresolved local var: int i@[???] */
 if (8 < (ulong)((long)result - (long)(a + 1)) && 8 < (ulong)((long)result - (long)(b + 1))) {
 uVar1 = *(undefined8 *)a;
 uVar2 = *(undefined8 *)b;
 *(ulong *)(result + 2) =
 CONCAT44((int)((ulong)*(undefined8 *)(a + 2) >> 0x20) +
 (int)((ulong)*(undefined8 *)(b + 2) >> 0x20),
 (int)*(undefined8 *)(a + 2) + (int)*(undefined8 *)(b + 2));
 *(ulong *)result =
 CONCAT44((int)((ulong)uVar1 >> 0x20) + (int)((ulong)uVar2 >> 0x20),(int)uVar1 + (int)uVar2)
 ;
 return 0;
 }
 *result = *a + *b;
 result[1] = a[1] + b[1];
 result[2] = a[2] + b[2];
 result[3] = a[3] + b[3];
 return 0;
}


/* param_simd_intrinsics is an alias for param_asm_simd - defined below */
int param_simd_intrinsics(int *param_1, int *param_2, int *param_3)
{
    /* Alias for param_asm_simd - just forward the call */
    return param_asm_simd(param_1, param_2, param_3);
}

/* Function: call_asm_simd @ 00101010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 int a[4] = {1, 2, 3, 4};
 int b[4] = {5, 6, 7, 8};
 int result[4];
 
 param_asm_simd(a, b, result);
 return result[0] + result[1] + result[2] + result[3];
}

/* param_asm_atomic - atomic add using assembly */
/* This function uses the atomic intrinsic directly */
int param_asm_atomic(int *counter, int increment)
{
    /* Use the atomic intrinsic with the provided parameters */
    int old_value = __aarch64_ldadd4_acq_rel(increment, counter);
    return old_value + increment;
}



/* Function: param_atomic_c11 @ 00101050 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_atomic_c11 @ 00101054 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_atomic_c11(void)

{
 int counter;
 int increment;
 
 counter = 10;
 increment = 5;
 return param_atomic_c11(&counter, increment);
}



/* Function: call_asm_atomic @ 00101080 */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int counter;
 long local_8;
 
 /* Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 local_8 = __stack_chk_guard;
 counter = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&counter);
 iVar1 = iVar1 + 5 + counter;
 if (local_8 - __stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 return iVar1;  /* unreachable but needed for compile */
}



/* Function: param_dynamic_code @ 001010e4 */

int param_dynamic_code(int x)

{
 int iVar1;
 size_t __len;
 void *__addr;
 
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



/* Function: param_memory_protection @ 00101150 */

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



/* Function: param_clobber_importance @ 00101220 */

int param_clobber_importance(int a,int b)

{
 return (a + b) * 2;
}



/* Function: FUN_0010122c @ 0010122c */

undefined4 FUN_0010122c(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection();
 uVar2 = 0xffffffff;
 }
 else {
 munmap(__addr,__len);
 iVar1 = param_memory_protection();
 uVar2 = 0xf;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 return uVar2;
}



/* Function: call_asm_privileged @ 00101230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 void *__addr;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 iVar2 = param_memory_protection();
 iVar2 = -1;
 }
 else {
 munmap(__addr,__len);
 iVar1 = param_memory_protection();
 iVar2 = 0xf;
 if (iVar1 == 0x2a) {
 iVar2 = 0x4d;
 }
 }
 return iVar2;
}



/* Function: param_memory_clobber_demo @ 001012a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001012b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 undefined4 uVar2;
 size_t __len;
 void *__addr;
 int counter;
 long local_8;
 
 local_8 = __stack_chk_guard;
 __printf_chk(1,DAT_00101678);
 __printf_chk(1,DAT_001016a8,0xf);
 __printf_chk(1,DAT_001016c8,0xf);
 __printf_chk(1,DAT_001016e8,0x2a);
 __printf_chk(1,DAT_00101708,0x24);
 __printf_chk(1,DAT_00101728,call_asm_atomic());
 __printf_chk(1,DAT_00101748);
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101400 */
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2)

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



/* Stub implementations for atomic operations */

/* ExclusiveMonitorPass - returns non-zero on success */
int ExclusiveMonitorPass(void *addr, int flags)
{
 (void)addr;
 (void)flags;
 return 1;
}

/* ExclusiveMonitorsStatus - returns status of exclusive monitors */
int ExclusiveMonitorsStatus(void)
{
 return 0;
}

/* LOAcquire - acquire lock for LSE atomics */
void LOAcquire(void)
{
}

/* LORelease - release lock for LSE atomics */
void LORelease(void)
{
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 60 */
