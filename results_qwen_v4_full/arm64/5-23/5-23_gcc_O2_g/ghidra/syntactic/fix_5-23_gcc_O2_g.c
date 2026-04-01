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
typedef unsigned char byte;
typedef unsigned long undefined8;
typedef unsigned int undefined4;
typedef unsigned long undefined;
typedef void (*code)(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */

/* Definition for stack canary */
unsigned long __stack_chk_guard = 0;

/* Definition for atomic feature flag */
char __aarch64_have_lse_atomics = 0;

/* External declarations for format strings */
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

/* Definitions for format strings */
char DAT_00101550[] = "=== Preprocessing Features Test ===\n";
char DAT_00101578[] = "param_macro_constants: %d\n";
char DAT_00101598[] = "call_macro_constants: %d\n";
char DAT_001015b8[] = "param_macro_functions: %d\n";
char DAT_001015d8[] = "call_macro_functions: %d\n";
char DAT_001015f8[] = "param_conditional_compile: %d\n";
char DAT_00101618[] = "call_conditional_compile: %d\n";
char DAT_00101648[] = "param_multi_branch_compile: %d\n";
char DAT_00101668[] = "call_multi_branch_compile: %d\n";
char DAT_00101688[] = "param_macro_recursion: %d\n";
char DAT_001016a8[] = "call_macro_recursion: %d\n";
char DAT_001016c8[] = "param_stringize: %d\n";
char DAT_001016f8[] = "call_stringize: %d\n";
char DAT_00101728[] = "param_token_paste: %d\n";
char DAT_00101748[] = "call_token_paste: %d\n";
char DAT_00101768[] = "param_variadic_macro: %d\n";
char DAT_00101788[] = "call_variadic_macro: %d\n";
char DAT_001017a8[] = "param_macro_override: %d\n";
char DAT_001017c8[] = "call_macro_override: %d\n";

/* External declarations for global variables */
int global_var = 0;

/* External declarations for C++ runtime */
extern void __cxa_finalize(void *);
extern void deregister_tm_clones(void);

/* Stub implementation for deregister_tm_clones */
void deregister_tm_clones(void) { }

/* Forward declarations for functions */
void test_preprocessing_features(void);
void test_asm_features(void);
unsigned long __getauxval(unsigned long type);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
undefined8 call_include_guard(void);

/* Declarations for standard library functions */
void *memcpy(void *dest, const void *src, size_t n);
int __printf_chk(int flag, const char *format, ...);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);

/* Stub implementations for standard library functions */
void *memcpy(void *dest, const void *src, size_t n) {
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;
    while (n--) *d++ = *s++;
    return dest;
}

int __printf_chk(int flag, const char *format, ...) {
    return 0;
}

long sysconf(int name) {
    return 4096;
}

void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset) {
    return (void *)0x10000000;
}

int munmap(void *addr, size_t length) {
    return 0;
}

int mprotect(void *addr, size_t len, int prot) {
    return 0;
}

/* External declarations for stack protection */
extern void __stack_chk_fail(void);

/* Stub implementation for stack protection */
void __stack_chk_fail(void) { }

/* External declarations for ARM atomic operations */
extern int ExclusiveMonitorPass(void *addr, int size);
extern char ExclusiveMonitorsStatus(void);
extern void LOAcquire(void);
extern void LORelease(void);

/* Stub implementations for ARM atomic operations */
int ExclusiveMonitorPass(void *addr, int size) { return 1; }
char ExclusiveMonitorsStatus(void) { return 0; }
void LOAcquire(void) { }
void LORelease(void) { }

/* Stub implementations for missing symbols */
unsigned long __getauxval(unsigned long type) { return 0; }
void __cxa_finalize(void *dso) { }
void *__dso_handle = 0;
char completed_0 = 0;


/* Function: FUN_00100810 @ 00100810 */

void FUN_00100810(void)

{
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
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}



/* Function: init_have_lse_atomics @ 00100920 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */

/* Entry point _start - weak to avoid conflict with CRT */
__attribute__((weak))
void _start(void) {
    int result = main();
    (void)result;
    while(1);
}





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
 ,0x117,"Jan 15 2026","03:01:29");
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
 ,0x117,"Jan 15 2026","03:01:29");
 return 0x17e;
}



/* Function: FUN_00100cdc @ 00100cdc */

void FUN_00100cdc(void)

{
 __printf_chk(1,DAT_00101550);
 __printf_chk(1,DAT_00101578,0x40);
 __printf_chk(1,DAT_00101598,0x1e);
 __printf_chk(1,DAT_001015b8,0x20);
 __printf_chk(1,DAT_001015d8,0xdf22);
 __printf_chk(1,DAT_001015f8,0x74);
 __printf_chk(1,DAT_00101618,0x13);
 __printf_chk(1,DAT_00101648,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_00101668,0x3c);
 __printf_chk(1,DAT_00101688,0x10);
 __printf_chk(1,DAT_001016a8,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 __printf_chk(1,DAT_001016c8,0x17e);
 return;
}



/* Function: test_preprocessing_features @ 00100ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 __printf_chk(1,DAT_00101550);
 __printf_chk(1,DAT_00101578,0x40);
 __printf_chk(1,DAT_00101598,0x1e);
 __printf_chk(1,DAT_001015b8,0x20);
 __printf_chk(1,DAT_001015d8,0xdf22);
 __printf_chk(1,DAT_001015f8,0x74);
 __printf_chk(1,DAT_00101618,0x13);
 __printf_chk(1,DAT_00101648,0x3c);
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_00101668,0x3c);
 __printf_chk(1,DAT_00101688,0x10);
 __printf_chk(1,DAT_001016a8,500);
 /* Unresolved local var: char * file@[???]
 Unresolved local var: int line@[???]
 Unresolved local var: char * func@[???]
 Unresolved local var: char * date@[???]
 Unresolved local var: char * time@[???]
 Unresolved local var: int counter1@[???]
 Unresolved local var: int counter2@[???]
 Unresolved local var: int counter3@[???] */
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 __printf_chk(1,DAT_001016c8,0x17e);
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
 int iVar2;
 long lVar3;
 
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 if (0 < n) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 piVar1 = arr + lVar3;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *piVar1;
 } while ((int)lVar3 < n);
 return iVar2;
 }
 return 0;
}



/* Function: call_asm_clobber @ 00100e90 */

/* WARNING: Removing unreachable block (ram,0x00100f0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_clobber(void)

{
 long lVar1;
 int iVar2;
 long lVar3;
 int arr [5];
 
 lVar3 = 1;
 /* Unresolved local var: int sum@[???] */
 iVar2 = 0;
 do {
 /* Unresolved local var: int i@[???] */
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
  iVar2 = iVar2 + arr[lVar3 - 1];
 } while (lVar3 != 6);
 return iVar2;
}



/* Function: param_asm_multi_insn @ 00100f10 */

void param_asm_multi_insn(void *dst,void *src,size_t n)

{
 memcpy(dst,src,n);
 return;
}



/* Function: call_asm_multi_insn @ 00100f14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_multi_insn(void)

{
 /* Unresolved local var: char[10] src@[???]
 Unresolved local var: char[32] dst@[???] */
 return 0x2a;
}



/* Function: param_asm_simd @ 00100f20 */

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



/* Function: param_simd_intrinsics @ 00100f50 */

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



/* Function: call_asm_simd @ 00100f80 */

/* WARNING: Removing unreachable block (ram,0x00101058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_simd(void)

{
 long lVar1;
 long lVar2;
 int iStack_3c;
 int a [4];
 int b [4];
 int result [4];
 
 b[2] = 7;
 b[3] = 8;
 /* Unresolved local var: int i@[???] */
 a[2] = 3;
 a[3] = 4;
 lVar2 = 8;
 do {
 lVar1 = lVar2 + 4;
 *(int *)((long)b + lVar2 + 0xc) =
 *(int *)((long)&iStack_3c + lVar2) + *(int *)((long)a + lVar2 + 0xc);
 lVar2 = lVar1;
 } while (lVar1 != 0x14);
 return result[1] + 6 + result[2] + result[3];
}



/* Function: FUN_0010105c @ 0010105c */

int FUN_0010105c(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: param_asm_atomic @ 00101060 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: FUN_0010108c @ 0010108c */

int FUN_0010108c(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101090 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: FUN_001010bc @ 001010bc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001010bc(void)

{
 int iVar1;
 int iStack_c;
 long lStack_8;
 
 lStack_8 = ___stack_chk_guard;
 iStack_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&iStack_c);
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: call_asm_atomic @ 001010c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_atomic(void)

{
 int iVar1;
 int counter;
 long local_8;
 
 /* Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 local_8 = ___stack_chk_guard;
 counter = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&counter);
 iVar1 = iVar1 + 5 + counter;
 if (local_8 - ___stack_chk_guard == 0) {
 return iVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_dynamic_code @ 00101124 */

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



/* Function: param_memory_protection @ 00101190 */

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



/* Function: param_clobber_importance @ 00101260 */

int param_clobber_importance(int a,int b)

{
 return (a + b) * 2;
}



/* Function: FUN_0010126c @ 0010126c */

undefined4 FUN_0010126c(void)

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



/* Function: call_asm_privileged @ 00101270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 size_t __len;
 void *__addr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection();
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



/* Function: param_memory_clobber_demo @ 001012e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 001012f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 long lVar1;
 long lVar2;
 int iVar3;
 undefined4 uVar4;
 long lVar5;
 size_t __len;
 void *__addr;
 int counter;
 int arr [5];
 
 lVar2 = ___stack_chk_guard;
 __printf_chk(1,DAT_001016f8);
 __printf_chk(1,DAT_00101728,0xf);
 /* Unresolved local var: int sum@[???] */
 iVar3 = 0;
 arr[0] = 1;
 arr[1] = 2;
 arr[2] = 3;
 arr[3] = 4;
 arr[4] = 5;
 lVar5 = 1;
 do {
 lVar1 = lVar5 + 1;
 iVar3 = iVar3 + arr[lVar5 + -1];
 lVar5 = lVar1;
 } while (lVar1 != 6);
 __printf_chk(1,DAT_00101748,iVar3);
 __printf_chk(1,DAT_00101768,0x2a);
 iVar3 = call_asm_simd();
 __printf_chk(1,DAT_00101788,iVar3);
 /* Unresolved local var: int new_val@[???] */
 /* Unresolved local var: int old_value@[???] */
 counter = 10;
 iVar3 = __aarch64_ldadd4_acq_rel(5,&counter);
 __printf_chk(1,DAT_001017a8,iVar3 + 5 + counter);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: size_t page_size@[???]
 Unresolved local var: void * exec_mem@[???]
 Unresolved local var: int result@[???] */
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection();
 uVar4 = 0xffffffff;
 }
 else {
 munmap(__addr,__len);
 iVar3 = param_memory_protection();
 uVar4 = 0xf;
 if (iVar3 == 0x2a) {
 uVar4 = 0x4d;
 }
 }
 if (lVar2 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_001017c8);
 return;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101480 */

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




/* Total functions decompiled: 61 */
