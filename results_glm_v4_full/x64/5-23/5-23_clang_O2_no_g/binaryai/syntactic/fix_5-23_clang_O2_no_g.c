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
typedef unsigned int uint;
typedef unsigned char byte;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

/* External functions */
void __gmon_start__(void);
void __libc_start_main(int (*main)(int, char **), int argc, char **argv, 
                       void (*init)(void), void (*fini)(void), 
                       void (*rtld_fini)(void), void *stack_end);
void __cxa_finalize(void *dso_handle);

/* Forward declaration */
int main(int argc, char **argv);

/* Global variables */
char completed_0 = 0;
extern void *__dso_handle;
int global_var = 0;

/* Data strings */

/* Data string definitions */
char DAT_00102186[] = "%d\n";
char DAT_00102135[] = "%lld\n";
char DAT_001022a4[] = "=== ASM Features Test ===\n";
char DAT_001021f1[] = "Sum: %d\n";
char DAT_0010209a[] = "Macro fn: %d\n";
char DAT_00102150[] = "Token paste: %d\n";
char DAT_0010216b[] = "Macro override: %d\n";
char DAT_0010220d[] = "Multi-insn: %llu\n";
char DAT_00102261[] = "Privileged: %lu\n";
char DAT_001020ef[] = "Builtin macro: %d\n";
char DAT_001020b5[] = "Conditional: %d\n";
char DAT_001020d0[] = "Multi-branch: %d\n";
char DAT_0010210b[] = "Stringize: %d\n";
char DAT_00102245[] = "Atomic: %d\n";
char DAT_00102229[] = "SIMD: %d\n";
char DAT_0010227d[] = "=== Preprocessing Features Test ===\n";
char DAT_0010207f[] = "%d\n";
char DAT_001021a2[] = "%d\n";
char DAT_001021d5[] = "Basic: %d\n";

/* Helper macros/functions */
#define LOCK()   do {} while(0)
#define UNLOCK() do {} while(0)
#define ZEXT816(x) 0
#define CONCAT22(x, y) 0

// Decompiled by BinaryAI
// SHA256: 81267b295c5bea76ff63bad71a6612609402d39efd480af50ebb8697558d43b4



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 /* Function pointer call - not executed for safety */
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030
// Wrapper for puts - using library function directly

// Function: <EXTERNAL>::mmap @ 0x101040
// Wrapper for mmap - using library function directly

// Function: <EXTERNAL>::printf @ 0x101050
// Wrapper for printf - using library function directly

// Function: <EXTERNAL>::munmap @ 0x101060
// Wrapper for munmap - using library function directly

// Function: <EXTERNAL>::mprotect @ 0x101070
// Wrapper for mprotect - using library function directly

// Function: <EXTERNAL>::sysconf @ 0x101080
// Wrapper for sysconf - using library function directly

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
// Wrapper for __cxa_finalize - using library function directly





// Function: param_macro_constants @ 0x101190
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1011b0
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x1011c0
int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x1011d0
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x1011e0
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1011f0
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x101200
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101210
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x101220
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101230
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x101240
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x101250
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x101260
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x101270
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x101280
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x101290
int param_variadic_macro(uint param_1,unsigned long param_2,unsigned long param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x1012b0
unsigned long long call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x1012e0
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1012f0
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x101300
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x101310
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x101320
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:52");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101360
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:52");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x1013a0
void test_preprocessing_features(void)
{
 puts(&DAT_0010227d);
 printf(&DAT_0010207f,0x40);
 printf(&DAT_0010209a,0x1e);
 printf(&DAT_001020b5,0x20);
 printf(&DAT_001020d0,0xdf22);
 printf(&DAT_001020ef,0x74);
 printf(&DAT_0010210b,0x13);
 printf(&DAT_00102135,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_00102150,0x3c);
 printf(&DAT_0010216b,0x10);
 printf(&DAT_00102186,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:52");
 printf(&DAT_001021a2,0x17e);
 return;
}

// Function: param_asm_basic @ 0x1014d0
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1014e0
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x1014f0
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

// Function: call_asm_clobber @ 0x101510
int call_asm_clobber(void)
{
 int iVar1;
 unsigned long uVar2;
 int local_18 [4];
 unsigned int local_8;
 local_8 = 5;
 local_18[0] = 1;
 local_18[1] = 2;
 local_18[2] = 3;
 local_18[3] = 4;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + local_18[uVar2];
 }
 return iVar1;
}

// Function: param_asm_multi_insn @ 0x101550
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101570
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 char *puVar2;
 unsigned long long *puVar3;
 long lVar4;
 unsigned long long local_38;
 unsigned short local_30;
 char local_28 [16];
 char local_18 [16];
 local_38 = 0x5341206f6c6c6548;
 local_30 = 0x4d;
 memset(local_18, 0, sizeof(local_18));
 memset(local_28, 0, sizeof(local_28));
 puVar2 = local_28;
 puVar3 = &local_38;
 for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
 *puVar2 = *(char *)puVar3;
 puVar2 = puVar2 + 1;
 puVar3 = (unsigned long long *)((long)puVar3 + 1);
 }
 uVar1 = 0xffffffff;
 if ((byte)(local_28[4] ^ 0x6f | local_28[0] ^ 0x48) == 0) {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1015e0
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 int *auVar1 = (int *)(*param_3);
 auVar1[1] = param_1[1] + param_2[1];
 auVar1[0] = *param_1 + *param_2;
 auVar1[2] = param_1[2] + param_2[2];
 auVar1[3] = param_1[3] + param_2[3];
 return 0;
}

// Function: param_simd_intrinsics @ 0x1015f0
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

// Function: call_asm_simd @ 0x101600
unsigned int call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x101660
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101670
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101680
unsigned int call_asm_atomic(void)
{
 LOCK();
 UNLOCK();
 return 0x1e;
}

// Function: param_dynamic_code @ 0x1016a0
unsigned int param_dynamic_code(unsigned int param_1)
{
 unsigned int uVar1;
 size_t __len;
 unsigned int *__addr;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 uVar1 = 0xffffffff;
 }
 else {
 *(unsigned short *)(__addr + 1) = 0xc305;
 *__addr = 0xc083f889;
 uVar1 = ((unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 return uVar1;
}

// Function: param_memory_protection @ 0x101710
unsigned int param_memory_protection(void)
{
 unsigned int uVar1;
 int iVar2;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar3;
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 uVar3 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 uVar3 = 0xfffffffd;
 if (iVar2 == 0) {
 *__addr = 100;
 uVar3 = uVar1;
 }
 }
 munmap(__addr,__len);
 }
 return uVar3;
}

// Function: param_clobber_importance @ 0x1017b0
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x1017c0
uint call_asm_privileged(void)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 size_t __len;
 unsigned int *__addr;
 __len = sysconf(0x1e);
 uVar1 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *(unsigned short *)(__addr + 1) = 0xc305;
 *__addr = 0xc083f889;
 uVar1 = ((unsigned int (*)(unsigned int))__addr)(10);
 munmap(__addr,__len);
 }
 uVar2 = param_memory_protection();
 uVar3 = 0x4d;
 if ((uVar2 ^ 0x2a | uVar1 ^ 0xf) != 0) {
 uVar3 = uVar1;
 }
 return uVar3;
}

// Function: param_memory_clobber_demo @ 0x101870
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101890
void test_asm_features(void)
{
 uint uVar1;
 unsigned long uVar2;
 long lVar3;
 unsigned long long *puVar4;
 char *puVar5;
 unsigned long long uVar6;
 char local_58 [8];
 unsigned int uStack_50;
 unsigned int uStack_4c;
 char local_48 [16];
 unsigned long long local_38;
 unsigned int uStack_30;
 unsigned int uStack_2c;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 puVar5 = local_58;
 puts(&DAT_001022a4);
 printf(&DAT_001021d5,0xf);
 memset(local_48, 0, sizeof(local_48));
 ((int *)local_48)[0] = 5;
 uStack_50 = 3;
 memset(local_58, 0, sizeof(local_58));
 ((unsigned long long *)local_58)[0] = 0x200000001;
 uStack_4c = 4;
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 uVar1 = uVar1 + *(int *)(local_58 + uVar2 * 4);
 }
 printf(&DAT_001021f1,(unsigned long)uVar1);
 local_38 = 0x5341206f6c6c6548;
 uStack_30 = 0x4d;
 memset(local_48, 0, sizeof(local_48));
 memset(local_58, 0, sizeof(local_58));
 puVar4 = &local_38;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *puVar5 = *(char *)puVar4;
 puVar5 = puVar5 + 1;
 puVar4 = (unsigned long long *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if ((unsigned char)(local_58[4] ^ 0x6f | local_58[0] ^ 0x48) == 0) {
 uVar6 = 0x2a;
 }
 printf(&DAT_0010220d,uVar6);
 uStack_50 = 3;
 memset(local_58, 0, sizeof(local_58));
 ((unsigned long long *)local_58)[0] = 0x200000001;
 uStack_4c = 4;
 local_38 = 0x600000005;
 uStack_30 = 7;
 uStack_2c = 8;
 local_28 = 6;
 uStack_24 = 8;
 uStack_20 = 10;
 uStack_1c = 0xc;
 printf(&DAT_00102229,0x24);
 LOCK();
 ((int *)local_58)[0] = 0xf;
 UNLOCK();
 printf(&DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(&DAT_00102261,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x101a00
int main(int argc, char **argv)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



