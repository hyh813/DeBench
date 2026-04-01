/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/cdefs.h>

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
typedef long __off_t;

// Decompiled by BinaryAI
// SHA256: 760196cb5767f3aa8f54b8aa5eed6d33e0db3fbe374c1a0532cc60d99caf7ca9

/* Global variable declarations */
int global_var = 0;
extern void * __dso_handle;
char completed_0 = 0;

/* Forward declarations */
void deregister_tm_clones(void);
extern void __cxa_finalize(void *dso_handle);
extern int __printf_chk(int flag, const char *fmt, ...);
extern void __stack_chk_fail(void);

/* Atomic operation macros */
#define LOCK()   __asm__ __volatile__ ("")
#define UNLOCK() __asm__ __volatile__ ("")

/* Type for 16-byte SIMD data (4 x 32-bit) */
typedef unsigned int __attribute__((vector_size(16))) simd_int4_t;

/* Data string declarations */
const char DAT_001021f0[] = "=== Preprocessing Features Test ===\n";
const char DAT_0010203d[] = "Macro Constants (param): %llx\n";
const char DAT_00102058[] = "Macro Functions (param): %llx\n";
const char DAT_00102073[] = "Conditional Compile (param): %llx\n";
const char DAT_00102218[] = "Multi-branch Compile (param): %llx\n";
const char DAT_0010208e[] = "Macro Recursion (param): %llx\n";
const char DAT_00102238[] = "Stringize (param): %llx\n";
const char DAT_001020aa[] = "Token Paste (param): %llx\n";
const char DAT_001020c5[] = "Variadic Macro result: %x\n";
const char DAT_001020e0[] = "Macro Override (param): %llx\n";
const char DAT_001020fb[] = "Include Guard (param): %llx\n";
const char DAT_00102268[] = "Builtin Macros result: %x\n";
const char DAT_00102298[] = "=== ASM Features Test ===\n";
const char DAT_00102117[] = "Basic ASM: %x\n";
const char DAT_00102133[] = "ASM Clobber: %x\n";
const char DAT_0010214f[] = "ASM Multi-insn: %x\n";
const char DAT_0010216b[] = "ASM SIMD: %x\n";
const char DAT_00102187[] = "ASM Atomic: %x\n";
const char DAT_001021a3[] = "ASM Privileged: %x\n";



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}









// Function: deregister_tm_clones @ 0x101180
void deregister_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011a0
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_macro_constants @ 0x1011e9
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x101201
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x10120b
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return param_1 * param_1 + iVar1;
}

// Function: call_macro_functions @ 0x10121c
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x101226
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x10122f
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x101239
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101245
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x10124f
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101257
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x101261
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x10126b
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x101275
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x10127f
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x10128b
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x101295
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x1012be
int call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x1012df
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1012e8
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x1012f2
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x1012fc
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x101306
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:28");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101356
int call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x10136d
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,&DAT_001021f0);
 __printf_chk(1,&DAT_0010203d,0x40);
 __printf_chk(1,&DAT_00102058,0x1e);
 __printf_chk(1,&DAT_00102073,0x20);
 __printf_chk(1,&DAT_00102218,0xdf22);
 __printf_chk(1,&DAT_0010208e,0x74);
 __printf_chk(1,&DAT_00102238,0x13);
 __printf_chk(1,&DAT_001020aa,0x3c);
 uVar1 = call_variadic_macro();
 __printf_chk(1,&DAT_001020c5,uVar1);
 __printf_chk(1,&DAT_001020e0,0x10);
 __printf_chk(1,&DAT_001020fb,500);
 uVar1 = call_builtin_macros();
 __printf_chk(1,&DAT_00102268,uVar1);
 return;
}

// Function: param_asm_basic @ 0x1014c7
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1014d5
int call_asm_basic(void)
{
 return param_asm_basic(5);
}

// Function: param_asm_clobber @ 0x1014e4
int param_asm_clobber(long param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x1014fc
unsigned int call_asm_clobber(void)
{
 long in_FS_OFFSET;
 char auStack_28 [24];
 long local_10;
 unsigned int uVar1;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 uVar1 = param_asm_clobber(auStack_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: param_asm_multi_insn @ 0x10153b
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101556
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long local_42;
 unsigned short local_3a;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_42 = 0x5341206f6c6c6548;
 local_3a = 0x4d;
 local_38 = 0;
 local_30 = 0;
 local_28 = 0;
 local_20 = 0;
 param_asm_multi_insn(&local_38,&local_42,9);
 if ((char)local_38 == 'H') {
 uVar1 = 0xffffffff;
 if (((char *)&local_38)[4] == 'o') {
 uVar1 = 0x2a;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: param_asm_simd @ 0x1015f6
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 int *pVar = (int *)auVar1;
 pVar[0] = *param_1 + *param_2;
 pVar[1] = param_1[1] + param_2[1];
 pVar[2] = param_1[2] + param_2[2];
 pVar[3] = param_1[3] + param_2[3];
 __builtin_memcpy(param_3, auVar1, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x10160d
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 iVar1 = param_2[1];
 iVar2 = param_2[2];
 iVar3 = param_2[3];
 iVar4 = param_1[1];
 iVar5 = param_1[2];
 iVar6 = param_1[3];
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}

// Function: call_asm_simd @ 0x101622
int call_asm_simd(void)
{
 long in_FS_OFFSET;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_48 = 1;
 local_44 = 2;
 local_40 = 3;
 local_3c = 4;
 local_38 = 5;
 local_34 = 6;
 local_30 = 7;
 local_2c = 8;
 param_asm_simd(&local_48,&local_38,&local_28);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return local_24 + local_28 + local_20 + local_1c;
 }
 __stack_chk_fail();
}

// Function: param_asm_atomic @ 0x1016b5
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x1016c2
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x1016cf
unsigned int call_asm_atomic(void)
{
 long in_FS_OFFSET;
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0x1e;
 }
 __stack_chk_fail();
}

// Function: param_dynamic_code @ 0x10171f
unsigned int param_dynamic_code(unsigned int param_1)
{
 long lVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *__addr;
 long in_FS_OFFSET;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *__addr = 0xc083f889;
 *(unsigned short *)(__addr + 1) = 0xc305;
 uVar2 = (*(unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_memory_protection @ 0x1017bf
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar2;
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

// Function: param_clobber_importance @ 0x101878
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x10188c
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if ((iVar1 == 0xf && iVar2 == 0x2a) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x1018e1
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x1018f7
void test_asm_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,&DAT_00102298);
 uVar1 = call_asm_basic();
 __printf_chk(1,&DAT_00102117,uVar1);
 uVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00102133,uVar1);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0010214f,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0010216b,uVar1);
 uVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00102187,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_001021a3,uVar1);
 return;
}

// Function: main @ 0x1019e6
unsigned long long main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



