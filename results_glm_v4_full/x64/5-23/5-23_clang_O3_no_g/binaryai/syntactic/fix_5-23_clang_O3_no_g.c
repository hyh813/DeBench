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

#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>

// Decompiled by BinaryAI
// SHA256: 60427485d9636ec15473939aa3eade1e9255e9cd2643cebf9bdf386f17f3e2bd

// Global variables

// String data constants
static const char DAT_001022a4[] = "Testing ASM features";
static const char DAT_001021d5[] = "asm_basic: %d\n";
static const char DAT_001021f1[] = "asm_clobber: %d\n";
static const char DAT_0010220d[] = "asm_multi_insn: %d\n";
static const char DAT_00102229[] = "asm_simd: %d\n";
static const char DAT_00102245[] = "asm_atomic: %d\n";
static const char DAT_00102261[] = "asm_privileged: %d\n";
static const char DAT_0010227d[] = "Testing Preprocessing Features\n";
static const char DAT_0010207f[] = "macro_constants: %d\n";
static const char DAT_0010209a[] = "macro_functions: %d\n";
static const char DAT_001020b5[] = "conditional_compile: %d\n";
static const char DAT_001020d0[] = "multi_branch_compile: %d\n";
static const char DAT_001020ef[] = "macro_recursion: %d\n";
static const char DAT_0010210b[] = "stringize: %d\n";
static const char DAT_00102135[] = "token_paste: %d\n";
static const char DAT_00102150[] = "variadic_macro: %d\n";
static const char DAT_0010216b[] = "macro_override: %d\n";
static const char DAT_00102186[] = "include_guard: %d\n";
static const char DAT_001021a2[] = "builtin_macros: %d\n";







// Function declarations









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
 "Jan 15 2026","03:00:56");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101360
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:56");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x1013a0
void test_preprocessing_features(void)
{
 puts(DAT_0010227d);
 printf(DAT_0010207f,0x40);
 printf(DAT_0010209a,0x1e);
 printf(DAT_001020b5,0x20);
 printf(DAT_001020d0,0xdf22);
 printf(DAT_001020ef,0x74);
 printf(DAT_0010210b,0x13);
 printf(DAT_00102135,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_00102150,0x3c);
 printf(DAT_0010216b,0x10);
 printf(DAT_00102186,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:56");
 printf(DAT_001021a2,0x17e);
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
 iVar1 = iVar1 + *(int *)(param_1 + (long)(uVar2 * 4));
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
 for (uVar2 = 0; (int)uVar2 < 4; uVar2 = (unsigned long)((int)uVar2 + 1)) {
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

// Helper macros/functions
#define ZEXT816(x) ((unsigned long long)(x) & 0xFFFF)

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
 __builtin_memset(local_18, 0, sizeof(local_18));
 __builtin_memset(local_28, 0, sizeof(local_28));
 puVar2 = local_28;
 puVar3 = &local_38;
 for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
 *puVar2 = *(char *)puVar3;
 puVar2 = puVar2 + 1;
 puVar3 = (unsigned long long *)((long)puVar3 + 1);
 }
 uVar1 = 0xffffffff;
 if (((unsigned char)(local_28[4] ^ 0x6f | local_28[0] ^ 0x48)) == 0) {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Union for accessing 16-byte array as 4 integers
typedef union {
    char bytes[16];
    struct {
        int _0_4_;
        int _4_4_;
        int _8_4_;
        int _12_4_;
    } i;
} int16x4_t;

// Function: param_asm_simd @ 0x1015e0
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 int16x4_t auVar1;
 auVar1.i._4_4_ = param_1[1] + param_2[1];
 auVar1.i._0_4_ = *param_1 + *param_2;
 auVar1.i._8_4_ = param_1[2] + param_2[2];
 auVar1.i._12_4_ = param_1[3] + param_2[3];
 __builtin_memcpy(*param_3, auVar1.bytes, 16);
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

// Lock/unlock macros (placeholder for atomic operations)
#define LOCK() do { } while(0)
#define UNLOCK() do { } while(0)

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
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *(unsigned short *)(__addr + 1) = 0xc305;
 *__addr = 0xc083f889;
 uVar1 = (*(unsigned int (**)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 return uVar1;
 }
 return 0xffffffff;
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

// Function: call_asm_privileged @ 0x1017c0
uint call_asm_privileged(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 size_t sVar4;
 unsigned int *__addr;
 uint *__addr_00;
 uint uVar5;
 sVar4 = sysconf(0x1e);
 uVar5 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,sVar4,7,0x22,-1,0);
 uVar1 = 0xffffffff;
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *(unsigned short *)(__addr + 1) = 0xc305;
 *__addr = 0xc083f889;
 uVar1 = (*(unsigned int (**)(unsigned int))__addr)(10);
 munmap(__addr,sVar4);
 }
 sVar4 = sysconf(0x1e);
 __addr_00 = (uint *)mmap((void *)0x0,sVar4,3,0x22,-1,0);
 if (__addr_00 != (uint *)0xffffffffffffffff) {
 *__addr_00 = 0x2a;
 iVar2 = mprotect(__addr_00,sVar4,1);
 uVar5 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar3 = *__addr_00;
 iVar2 = mprotect(__addr_00,sVar4,3);
 uVar5 = 0xfffffffd;
 if (iVar2 == 0) {
 *__addr_00 = 100;
 uVar5 = uVar3;
 }
 }
 munmap(__addr_00,sVar4);
 }
 uVar3 = 0x4d;
 if ((uVar5 ^ 0x2a | uVar1 ^ 0xf) != 0) {
 uVar3 = uVar1;
 }
 return uVar3;
}

// Helper macro
#define CONCAT22(x, y) (((unsigned int)(x) << 16) | ((unsigned int)(y) & 0xFFFF))

// Function: test_asm_features @ 0x101920
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
 puts(DAT_001022a4);
 printf(DAT_001021d5,0xf);
 __builtin_memset(local_48, 0, sizeof(local_48));
 *(unsigned int*)(local_48) = 5;
 uStack_50 = 3;
 *(unsigned long long*)(local_58) = 0x200000001;
 uStack_4c = 4;
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 uVar1 = uVar1 + *(int *)(local_58 + uVar2 * 4);
 }
 printf(DAT_001021f1,(unsigned long)uVar1);
 local_38 = 0x5341206f6c6c6548;
 uStack_30 = CONCAT22(0, 0x4d);
 __builtin_memset(local_48, 0, sizeof(local_48));
 __builtin_memset(local_58, 0, sizeof(local_58));
 puVar4 = &local_38;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *puVar5 = *(char *)puVar4;
 puVar5 = puVar5 + 1;
 puVar4 = (unsigned long long *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if (((unsigned char)(local_58[4] ^ 0x6f | local_58[0] ^ 0x48)) == 0) {
 uVar6 = 0x2a;
 }
 printf(DAT_0010220d,uVar6);
 uStack_50 = 3;
 *(unsigned long long*)(local_58) = 0x200000001;
 uStack_4c = 4;
 local_38 = 0x600000005;
 uStack_30 = 7;
 uStack_2c = 8;
 local_28 = 6;
 uStack_24 = 8;
 uStack_20 = 10;
 uStack_1c = 0xc;
 printf(DAT_00102229,0x24);
 LOCK();
 *(unsigned int*)(local_58) = 0xf;
 UNLOCK();
 printf(DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(DAT_00102261,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x101a90
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



