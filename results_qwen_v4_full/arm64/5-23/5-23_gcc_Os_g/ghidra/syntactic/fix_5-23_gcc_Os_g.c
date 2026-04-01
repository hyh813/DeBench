/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
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
typedef unsigned int undefined;
typedef void (*code)(void);

/* Global variables */
__attribute__((weak)) long __stack_chk_guard = 0;
__attribute__((weak)) byte __aarch64_have_lse_atomics = 0;
int global_var;
byte completed_0;
__attribute__((weak)) void *__dso_handle = 0;
char DAT_001012ae[] = "Preprocessing Features Test\n";
char DAT_001012d6[] = "Macro Constants: %d\n";
char DAT_001012f1[] = "Macro Functions: %d\n";
char DAT_0010130c[] = "Conditional Compile: %d\n";
char DAT_00101327[] = "Multi Branch: %d\n";
char DAT_00101346[] = "Macro Recursion: %d\n";
char DAT_00101362[] = "Stringize: %d\n";
char DAT_0010138c[] = "Token Paste: %d\n";
char DAT_001013a7[] = "Variadic Macro: %d\n";
char DAT_001013c2[] = "Macro Override: %d\n";
char DAT_001013dd[] = "Include Guard: %d\n";
char DAT_001013f9[] = "Builtin Macros: %d\n";
char DAT_0010142c[] = "ASM Features Test\n";
char DAT_00101457[] = "ASM Basic: %d\n";
char DAT_00101473[] = "ASM Clobber: %d\n";
char DAT_0010148f[] = "ASM Multi Insn: %d\n";
char DAT_001014ab[] = "ASM SIMD: %d\n";
char DAT_001014c7[] = "ASM Atomic: %d\n";
char DAT_001014e3[] = "ASM Privileged: %d\n";

/* Function forward declarations */
__attribute__((visibility("default"))) void FUN_00100810(void);
void FUN_0010091c(void);
void FUN_00100a3c(void);
void init_have_lse_atomics(void);
void test_preprocessing_features(void);
void test_asm_features(void);
long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
__attribute__((visibility("default"))) void deregister_tm_clones(void);
void __stack_chk_fail(void) __attribute__((noreturn));
void *memcpy(void *dest, const void *src, size_t n);
void builtin_strncpy(char *dest, const char *src, size_t n);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int ExclusiveMonitorPass(int *addr, int size);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int param_atomic_c11(int *counter, int increment);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);
int __printf_chk(int flag, const char *format, ...);
int param_asm_clobber(int *arr, int n);
void param_asm_multi_insn(void *dst, void *src, size_t n);
int param_asm_simd(int *a, int *b, int *result);
int param_asm_atomic(int *counter, int increment);
int param_dynamic_code(int x);
int param_memory_protection(void);
int param_clobber_importance(int a, int b);
int param_memory_clobber_demo(void);
int param_macro_constants(int size);
int call_macro_constants(void);
int param_macro_functions(int x, int y);
int call_macro_functions(void);
int param_conditional_compile(int x);
int call_conditional_compile(void);
int param_multi_branch_compile(int x);
int call_multi_branch_compile(void);
int param_macro_recursion(int x);
int call_macro_recursion(void);
int param_stringize(int value);
int call_stringize(void);
int my_func(int x);
int param_token_paste(int x);
int call_token_paste(void);
int param_variadic_macro(int x, int y, int z);
int call_variadic_macro(void);
int param_macro_override(int x);
int call_macro_override(void);
int param_include_guard(void);
int call_include_guard(void);
int param_builtin_macros(int x);
int call_builtin_macros(void);
int param_asm_basic(int x);
int call_asm_basic(void);
int call_asm_clobber(void);
int call_asm_multi_insn(void);
int call_asm_simd(void);
int call_asm_atomic(void);
int call_asm_privileged(void);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Stub function: FUN_00100810 */

__attribute__((visibility("default")))
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




/* Function: param_macro_constants @ 00100a94 */

int param_macro_constants(int size)

{
 int iVar1;
 
 iVar1 = 0x200;
 if (0x400 < size) {
 iVar1 = 0x40;
 }
 return iVar1;
}



/* Function: call_macro_constants @ 00100aa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00100ab0 */

int param_macro_functions(int x,int y)

{
 int iVar1;
 
 iVar1 = x;
 if (x < y) {
 iVar1 = y;
 }
 return iVar1 + x * x;
}



/* Function: call_macro_functions @ 00100ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100ac8 */

int param_conditional_compile(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit3; DW_OP_mul;
 DW_OP_plus_uconst: 2; DW_OP_stack_value] */
 return x * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100adc */

int param_multi_branch_compile(int x)

{
 return x * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100aec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100af4 */

int param_macro_recursion(int x)

{
 return x + 0x10;
}



/* Function: call_macro_recursion @ 00100afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100b04 */

int param_stringize(int value)

{
 /* Unresolved local var: char * str1@[???]
 Unresolved local var: char * str2@[???]
 Unresolved local var: char * str3@[???] */
 return 0x13;
}



/* Function: call_stringize @ 00100b0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100b14 */

int my_func(int x)

{
 return x * 10;
}



/* Function: param_token_paste @ 00100b20 */

int param_token_paste(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit11; DW_OP_mul;
 DW_OP_plus_uconst: 5; DW_OP_stack_value]
 Unresolved local var: int temp__LINE__@[DW_OP_breg0(x0): +5;
 DW_OP_stack_value] */
 return x * 0xb + 5;
}



/* Function: call_token_paste @ 00100b30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100b38 */

int param_variadic_macro(int x,int y,int z)

{
 /* Unresolved local var: int count@[???] */
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",x,y,z);
 return x + 0x32;
}



/* Function: call_variadic_macro @ 00100b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_variadic_macro(void)

{
 int iVar1;
 
 iVar1 = param_variadic_macro(10,0x14,0x1e);
 return iVar1;
}



/* Function: param_macro_override @ 00100b84 */

int param_macro_override(int x)

{
 /* Unresolved local var: int r1@[DW_OP_breg0(x0): +1; DW_OP_stack_value]
 Unresolved local var: int r2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
 DW_OP_stack_value] */
 return x * 3 + 1;
}



/* Function: call_macro_override @ 00100b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100b98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100ba0 */

int call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100ba8 */

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
 ,0x117,"Jan 15 2026","03:01:34");
 return x + 0x11a;
}



/* Function: call_builtin_macros @ 00100bfc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_builtin_macros(void)

{
 int iVar1;
 
 iVar1 = param_builtin_macros(100);
 return iVar1;
}



/* Function: test_preprocessing_features @ 00100c04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_preprocessing_features(void)

{
 int iVar1;
 
 __printf_chk(1,DAT_001012ae);
 __printf_chk(1,DAT_001012d6,0x40);
 __printf_chk(1,DAT_001012f1,0x1e);
 __printf_chk(1,DAT_0010130c,0x20);
 __printf_chk(1,DAT_00101327,0xdf22);
 __printf_chk(1,DAT_00101346,0x74);
 __printf_chk(1,DAT_00101362,0x13);
 __printf_chk(1,DAT_0010138c,0x3c);
 iVar1 = call_variadic_macro();
 __printf_chk(1,DAT_001013a7,iVar1);
 __printf_chk(1,DAT_001013c2,0x10);
 __printf_chk(1,DAT_001013dd,500);
 iVar1 = call_builtin_macros();
 __printf_chk(1,DAT_001013f9,iVar1);
 return;
}



/* Function: param_asm_basic @ 00100d04 */

int param_asm_basic(int x)

{
 /* Unresolved local var: int result@[DW_OP_breg0(x0): +10; DW_OP_stack_value] */
 return x + 10;
}



/* Function: call_asm_basic @ 00100d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100d14 */

int param_asm_clobber(int *arr,int n)

{
 int iVar1;
 long lVar2;
 
 iVar1 = 0;
 /* Unresolved local var: int sum@[???]
 Unresolved local var: int i@[???] */
 for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + arr[lVar2];
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 00100d3c */

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



/* Function: param_asm_multi_insn @ 00100da4 */

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
 long lVar1;
 int iVar2;
 char src [10];
 char dst [32];
 
 lVar1 = __stack_chk_guard;
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
 builtin_strncpy(src,"Hello ASM",10);
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
 if (lVar1 - __stack_chk_guard == 0) {
 return iVar2;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
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



/* Function: call_asm_simd @ 00100e6c */

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



/* Function: param_asm_atomic @ 00100f08 */

int param_asm_atomic(int *counter,int increment)

{
 int iVar1;
 
 /* Unresolved local var: int old_value@[???] */
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: param_atomic_c11 @ 00100f34 */

int param_atomic_c11(int *counter,int increment)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(increment,counter);
 return iVar1 + increment;
}



/* Function: call_asm_atomic @ 00100f60 */

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
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1 + counter;
}



/* Function: param_dynamic_code @ 00100fc0 */

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



/* Function: param_memory_protection @ 0010102c */

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



/* Function: param_clobber_importance @ 001010f8 */

int param_clobber_importance(int a,int b)

{
 return (a + b) * 2;
}



/* Function: call_asm_privileged @ 00101104 */

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



/* Function: param_memory_clobber_demo @ 0010113c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_memory_clobber_demo(void)

{
 /* Unresolved local var: int local@[???]
 Unresolved local var: int result@[???] */
 return global_var + 0x32;
}



/* Function: test_asm_features @ 0010114c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_asm_features(void)

{
 int iVar1;
 
 __printf_chk(1,DAT_0010142c);
 __printf_chk(1,DAT_00101457,0xf);
 iVar1 = call_asm_clobber();
 __printf_chk(1,DAT_00101473,iVar1);
 iVar1 = call_asm_multi_insn();
 __printf_chk(1,DAT_0010148f,iVar1);
 iVar1 = call_asm_simd();
 __printf_chk(1,DAT_001014ab,iVar1);
 iVar1 = call_asm_atomic();
 __printf_chk(1,DAT_001014c7,iVar1);
 iVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001014e3,iVar1);
 return;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101200 */

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



/* Stub function: __stack_chk_fail */

__attribute__((noreturn))
void __stack_chk_fail(void)

{
 /* Stack smashing detected - abort */
 while(1);
}



/* Stub function: deregister_tm_clones */

__attribute__((visibility("default")))
void deregister_tm_clones(void)

{
 return;
}



/* Stub function: builtin_strncpy */

void builtin_strncpy(char *dest, const char *src, size_t n)

{
 size_t i;
 for (i = 0; i < n && src[i] != '\0'; i++) {
  dest[i] = src[i];
 }
 for (; i < n; i++) {
  dest[i] = '\0';
 }
 return;
}



/* Stub function: ExclusiveMonitorPass */

int ExclusiveMonitorPass(int *addr, int size)

{
 return 1;
}



/* Stub function: ExclusiveMonitorsStatus */

char ExclusiveMonitorsStatus(void)

{
 return 0;
}



/* Stub function: LOAcquire */

void LOAcquire(void)

{
 return;
}



/* Stub function: LORelease */

void LORelease(void)

{
 return;
}



/* Stub function: __getauxval */

long __getauxval(unsigned long type)

{
 return 0;
}



/* Stub function: __cxa_finalize */

__attribute__((weak))
void __cxa_finalize(void *dso_handle)

{
 return;
}



/* Stub function: __cxa_atexit */

int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)

{
 return 0;
}



/* Stub function: memcpy */

void *memcpy(void *dest, const void *src, size_t n)

{
 size_t i;
 for (i = 0; i < n; i++) {
  ((char *)dest)[i] = ((const char *)src)[i];
 }
 return dest;
}



/* Stub function: sysconf */

__attribute__((weak))
long sysconf(int name)

{
 return 4096;
}



/* Stub function: mmap */

__attribute__((weak))
void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset)

{
 return (void *)0x100000;
}



/* Stub function: munmap */

__attribute__((weak))
int munmap(void *addr, size_t length)

{
 return 0;
}



/* Stub function: mprotect */

__attribute__((weak))
int mprotect(void *addr, size_t len, int prot)

{
 return 0;
}



/* Stub function: __printf_chk */

__attribute__((weak))
int __printf_chk(int flag, const char *format, ...)

{
 va_list args;
 (void)flag;
 (void)format;
 va_start(args, format);
 va_end(args);
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 54 */
