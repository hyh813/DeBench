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
typedef long __off_t;
typedef unsigned int uint;

// Standard headers
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

// Decompiled by BinaryAI
// SHA256: 5f9576fdd3f58f7690cda8d3c3320e4aa12601c06c3d65d86b87ec8255341c97

// External declarations
extern int __gmon_start__(void);
extern void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (*stack_end));
extern void *_dso_handle;

// Global variables
static int completed_0 = 0;
static int global_var = 0;

// Data sections
static const char DAT_0010227d[] = "Testing preprocessing features";
static const char DAT_0010207f[] = "param_macro_constants result: %llu\n";
static const char DAT_0010209a[] = "call_macro_functions result: %llu\n";
static const char DAT_001020b5[] = "call_conditional_compile result: %llu\n";
static const char DAT_001020d0[] = "call_multi_branch_compile result: %llu\n";
static const char DAT_001020ef[] = "call_macro_recursion result: %llu\n";
static const char DAT_0010210b[] = "call_stringize result: %llu\n";
static const char DAT_00102135[] = "call_token_paste result: %llu\n";
static const char DAT_00102150[] = "call_macro_override result: %llu\n";
static const char DAT_0010216b[] = "call_include_guard result: %llu\n";
static const char DAT_00102186[] = "call_builtin_macros result: %llu\n";
static const char DAT_001021a2[] = "call_builtin_macros result: %llu\n";
static const char DAT_001022a4[] = "Testing assembly features";
static const char DAT_001021d5[] = "call_asm_basic result: %llu\n";
static const char DAT_001021f1[] = "call_asm_clobber result: %lu\n";
static const char DAT_0010220d[] = "call_asm_multi_insn result: %llu\n";
static const char DAT_00102229[] = "call_asm_simd result: %u\n";
static const char DAT_00102245[] = "call_asm_atomic result: %u\n";
static const char DAT_00102261[] = "call_asm_privileged result: %lu\n";

// Macros
#define LOCK()
#define UNLOCK()
#define ZEXT816(x) (x)
#define CONCAT22(hi, lo) ((hi) | ((lo) << 16))

// Function: _init @ 0x101000
static int _init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// External functions are already declared via headers

// Function: _start @ 0x1010a0
static void _start(unsigned long long param_1,unsigned long long param_2)
{
 (void)param_1;
 (void)param_2;
 // Entry point - in real code would call __libc_start_main
}

// Function: deregister_tm_clones @ 0x1010d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101100
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101140
void __do_global_dtors_aux(void)
{
 if (completed_0 != 0) {
 return;
 }
 // __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

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
 "Jan 15 2026","03:00:46");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101360
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:46");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x1013a0
unsigned long long test_preprocessing_features(void)
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
 "Jan 15 2026","03:00:46");
 printf(DAT_001021a2,0x17e);
 return 0;
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
 if ((unsigned char)(local_28[4] ^ 0x6f | local_28[0] ^ 0x48) == 0) {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1015e0
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 *(int *)(auVar1 + 0) = *param_1 + *param_2;
 *(int *)(auVar1 + 4) = param_1[1] + param_2[1];
 *(int *)(auVar1 + 8) = param_1[2] + param_2[2];
 *(int *)(auVar1 + 12) = param_1[3] + param_2[3];
 memcpy(*param_3, auVar1, 16);
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

// Function: param_asm_atomic @ 0x101650
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101660
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101670
unsigned int call_asm_atomic(void)
{
 LOCK();
 UNLOCK();
 return 0x1e;
}

// Function: param_dynamic_code @ 0x101690
unsigned int param_dynamic_code(unsigned int param_1)
{
 unsigned int uVar1;
 size_t __len;
 unsigned int *__addr;
 __len = (size_t)sysconf(_SC_PAGESIZE);
 uVar1 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,PROT_READ|PROT_WRITE|PROT_EXEC,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
 if (__addr != (unsigned int *)MAP_FAILED) {
 *(unsigned short *)(__addr + 1) = 0xc305;
 *__addr = 0xc083f889;
 uVar1 = ((unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 return uVar1;
}

// Function: param_memory_protection @ 0x101700
unsigned int param_memory_protection(void)
{
 unsigned int uVar1;
 int iVar2;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar3;
 __len = (size_t)sysconf(_SC_PAGESIZE);
 uVar3 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
 if (__addr != (unsigned int *)MAP_FAILED) {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,PROT_READ);
 uVar3 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,PROT_READ|PROT_WRITE);
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

// Function: param_clobber_importance @ 0x1017a0
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x1017b0
uint call_asm_privileged(void)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 size_t __len;
 unsigned int *__addr;
 __len = (size_t)sysconf(_SC_PAGESIZE);
 uVar1 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,PROT_READ|PROT_WRITE|PROT_EXEC,MAP_PRIVATE|MAP_ANONYMOUS,-1,0);
 if (__addr != (unsigned int *)MAP_FAILED) {
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

// Function: param_memory_clobber_demo @ 0x101860
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101880
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
 char local_38 [16];
 unsigned long long local_28;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 int local_58_int[2];
 puVar5 = local_58;
 puts(DAT_001022a4);
 printf(DAT_001021d5,0xf);
 memset(local_48, 0, sizeof(local_48));
 local_48[0] = 5;
 uStack_50 = 3;
 local_58_int[0] = 1;
 local_58_int[1] = 0x20000000;
 uStack_4c = 4;
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 uVar1 = uVar1 + ((int *)local_58_int)[uVar2];
 }
 printf(DAT_001021f1,(unsigned long)uVar1);
 local_28 = 0x5341206f6c6c6548;
 uStack_20 = 0x4d;
 memset(local_48, 0, sizeof(local_48));
 memset(local_58, 0, sizeof(local_58));
 puVar4 = &local_28;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *puVar5 = *(char *)puVar4;
 puVar5 = puVar5 + 1;
 puVar4 = (unsigned long long *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if ((unsigned char)(local_58[4] ^ 0x6f | local_58[0] ^ 0x48) == 0) {
 uVar6 = 0x2a;
 }
 printf(DAT_0010220d,uVar6);
 uStack_50 = 3;
 local_58_int[0] = 1;
 local_58_int[1] = 0x20000000;
 uStack_4c = 4;
 local_28 = 0x600000005;
 uStack_20 = 7;
 uStack_1c = 8;
 memset(local_38, 0, sizeof(local_38));
 local_38[0] = 6;
 local_38[8] = 10;
 local_38[12] = 0xc;
 printf(DAT_00102229,0x24);
 LOCK();
 ((int *)local_58)[0] = 0xf;
 UNLOCK();
 printf(DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(DAT_00102261,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x1019f0
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: _fini @ 0x101a00
static void _fini(void)
{
 return;
}

