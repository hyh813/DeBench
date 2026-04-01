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

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdarg.h>
#include <stdbool.h>

/* External function declarations */
extern int puts(const char *s);
extern void *mmap(void *addr, size_t len, int prot, int flags, int fd, long offset);
extern int munmap(void *addr, size_t len);
extern int mprotect(void *addr, size_t len, int prot);
extern long sysconf(int name);
extern void __cxa_finalize(void *dso);
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void *memset(void *s, int c, size_t n);

/* Global variables */
char completed_0 = 0;
void *__dso_handle = 0;
int global_var = 0;

/* ASM helper macros */
#define LOCK() __asm__ __volatile__("lock")
#define UNLOCK() __asm__ __volatile__("")
#define ZEXT816(x) ((unsigned long long)(x) | ((unsigned long long)(x) << 32))
#define CONCAT22(a,b) (((a) << 16) | (b))
#define byte unsigned char
typedef unsigned int uint;

/* Forward declarations */
static void FUN_00101020(void);
static void deregister_tm_clones(void);
static void register_tm_clones(void);
static void __do_global_dtors_aux(void);
static unsigned long long param_macro_constants(int);
static unsigned long long call_macro_constants(void);
static int param_macro_functions(int,int);
static unsigned long long call_macro_functions(void);
static int param_conditional_compile(int);
static unsigned long long call_conditional_compile(void);
static int param_multi_branch_compile(int);
static unsigned long long call_multi_branch_compile(void);
static int param_macro_recursion(int);
static unsigned long long call_macro_recursion(void);
static unsigned long long param_stringize(void);
static unsigned long long call_stringize(void);
static int my_func(int);
static int param_token_paste(int);
static unsigned long long call_token_paste(void);
static int param_variadic_macro(uint,unsigned long,unsigned long);
static unsigned long long call_variadic_macro(void);
static int param_macro_override(int);
static unsigned long long call_macro_override(void);
static unsigned long long param_include_guard(void);
static unsigned long long call_include_guard(void);
static int param_builtin_macros(int);
static unsigned long long call_builtin_macros(void);
static unsigned long long test_preprocessing_features(void);
static int param_asm_basic(int);
static unsigned long long call_asm_basic(void);
static int param_asm_clobber(long,int);
static int call_asm_clobber(void);
static void param_asm_multi_insn(char *,char *,long);
static unsigned long long call_asm_multi_insn(void);
static unsigned long long param_asm_simd(int *,int *,char (*)[16]);
static unsigned long long param_simd_intrinsics(int *,int *,int *);
static unsigned int call_asm_simd(void);
static int param_asm_atomic(int *,int);
static int param_atomic_c11(int *,int);
static unsigned int call_asm_atomic(void);
static unsigned int param_dynamic_code(unsigned int);
static unsigned int param_memory_protection(void);
static int param_clobber_importance(int,int);
static uint call_asm_privileged(void);
static int param_memory_clobber_demo(void);
static void test_asm_features(void);
/* String data references */
static const char DAT_0010227d[] = "Preprocessing Test";
static const char DAT_0010207f[] = "Macro constants: %d\n";
static const char DAT_0010209a[] = "Macro functions: %d\n";
static const char DAT_001020b5[] = "Conditional compile: %d\n";
static const char DAT_001020d0[] = "Multi-branch: %d\n";
static const char DAT_001020ef[] = "Recursion: %d\n";
static const char DAT_0010210b[] = "Stringize: %d\n";
static const char DAT_00102135[] = "Token paste: %d\n";
static const char DAT_00102150[] = "Variadic macro: %d\n";
static const char DAT_0010216b[] = "Macro override: %d\n";
static const char DAT_00102186[] = "Include guard: %d\n";
static const char DAT_001021a2[] = "Builtin macros: %d\n";
static const char DAT_001022a4[] = "ASM Test";
static const char DAT_001021d5[] = "Basic asm: %d\n";
static const char DAT_001021f1[] = "Clobber: %u\n";
static const char DAT_0010220d[] = "Multi insn: %llu\n";
static const char DAT_00102229[] = "SIMD: %d\n";
static const char DAT_00102245[] = "Atomic: %d\n";
static const char DAT_00102261[] = "Privileged: %u\n";

// Decompiled by BinaryAI
// SHA256: 5f9576fdd3f58f7690cda8d3c3320e4aa12601c06c3d65d86b87ec8255341c97

// Function: FUN_00101020 @ 0x101020
static void FUN_00101020(void)
{
 // Null function pointer call - likely placeholder
 return;
}

// Function: <EXTERNAL>::puts @ 0x101030
// Already declared as extern above

// Function: <EXTERNAL>::mmap @ 0x101040
// Already declared as extern above

// Function: <EXTERNAL>::printf @ 0x101050
extern int printf(const char *__format, ...);

// Function: <EXTERNAL>::munmap @ 0x101060
// Already declared as extern above

// Function: <EXTERNAL>::mprotect @ 0x101070
// Already declared as extern above

// Function: <EXTERNAL>::sysconf @ 0x101080
// Already declared as extern above

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
// Already declared as extern above

// Function: deregister_tm_clones @ 0x1010d0
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101100
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101140
static void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_macro_constants @ 0x101190
static unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1011b0
static unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x1011c0
static int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x1011d0
static unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x1011e0
static int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1011f0
static unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x101200
static int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101210
static unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x101220
static int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101230
static unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x101240
static unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x101250
static unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x101260
static int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x101270
static int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x101280
static unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x101290
static int param_variadic_macro(uint param_1,unsigned long param_2,unsigned long param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x1012b0
static unsigned long long call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x1012e0
static int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1012f0
static unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x101300
static unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x101310
static unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x101320
static int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:46");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101360
static unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:46");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x1013a0
static unsigned long long test_preprocessing_features(void)
{
 unsigned long long in_RAX;
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
 "Jan 15 2026","03:00:46");
 printf(&DAT_001021a2,0x17e);
 return in_RAX;
}

// Function: param_asm_basic @ 0x1014d0
static int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1014e0
static unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x1014f0
static int param_asm_clobber(long param_1,int param_2)
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
static int call_asm_clobber(void)
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
static void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101570
static unsigned long long call_asm_multi_insn(void)
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
static unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 int *auVar1 = (int *)param_3;
 auVar1[1] = param_1[1] + param_2[1];
 auVar1[0] = *param_1 + *param_2;
 auVar1[2] = param_1[2] + param_2[2];
 auVar1[3] = param_1[3] + param_2[3];
 return 0;
}

// Function: param_simd_intrinsics @ 0x1015f0
static unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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
static unsigned int call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x101650
static int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101660
static int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101670
static unsigned int call_asm_atomic(void)
{
 LOCK();
 UNLOCK();
 return 0x1e;
}

// Function: param_dynamic_code @ 0x101690
static unsigned int param_dynamic_code(unsigned int param_1)
{
 unsigned int uVar1;
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 uVar1 = 0xffffffff;
 __addr = mmap(NULL,__len,7,0x22,-1,0);
 if (__addr != (void *)-1) {
 // This attempts dynamic code execution which is not directly supported in standard C
 // Returning the param as a placeholder
 uVar1 = param_1;
 munmap(__addr,__len);
 }
 return uVar1;
}

// Function: param_memory_protection @ 0x101700
static unsigned int param_memory_protection(void)
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

// Function: param_clobber_importance @ 0x1017a0
static int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x1017b0
static uint call_asm_privileged(void)
{
 uint uVar1;
 uint uVar2;
 uint uVar3;
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 uVar1 = 0xffffffff;
 __addr = mmap(NULL,__len,7,0x22,-1,0);
 if (__addr != (void *)-1) {
 // Dynamic code execution placeholder
 uVar1 = 10;
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
static int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101880
static void test_asm_features(void)
{
 uint uVar1;
 unsigned long uVar2;
 long lVar3;
 unsigned long long *puVar4;
 char *puVar5;
 unsigned long long uVar6;
 unsigned long long local_58;
 unsigned int uStack_50;
 unsigned int uStack_4c;
 unsigned long long local_48;
 unsigned long long local_38;
 unsigned long long local_28;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 puVar5 = (char *)&local_58;
 puts(&DAT_001022a4);
 printf(&DAT_001021d5,0xf);
 local_48 = ZEXT816(5);
 uStack_50 = 3;
 local_58 = ZEXT816(1) | 0x20000000000ULL;
 uStack_4c = 4;
 uVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 uVar1 = uVar1 + *(int *)((char *)&local_58 + uVar2 * 4);
 }
 printf(&DAT_001021f1,(unsigned long)uVar1);
 local_28 = 0x5341206f6c6c6548;
 uStack_20 = CONCAT22(uStack_20,0x4d);
 local_48 = ZEXT816(0);
 local_58 = ZEXT816(0);
 puVar4 = &local_28;
 for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
 *puVar5 = *(char *)puVar4;
 puVar5 = puVar5 + 1;
 puVar4 = (unsigned long long *)((long)puVar4 + 1);
 }
 uVar6 = 0xffffffff;
 if ((byte)(((char *)&local_58)[4] ^ 0x6f | ((char *)&local_58)[0] ^ 0x48) == 0) {
 uVar6 = 0x2a;
 }
 printf(&DAT_0010220d,uVar6);
 uStack_50 = 3;
 local_58 = ZEXT816(1) | 0x20000000000ULL;
 uStack_4c = 4;
 local_28 = 0x600000005;
 uStack_20 = 7;
 uStack_1c = 8;
 local_38 = ZEXT816(10) | (0xcULL << 48) | (6ULL << 32);
 printf(&DAT_00102229,0x24);
 LOCK();
 local_58 = (local_58 & 0xFFFFFFFF00000000ULL) | 0xf;
 UNLOCK();
 printf(&DAT_00102245,0x1e);
 uVar1 = call_asm_privileged();
 printf(&DAT_00102261,(unsigned long)uVar1);
 return;
}

// Function: _start @ 0x1010a0
// Entry point - uses standard C runtime via __libc_start_main
// The actual implementation is provided by libc startup code

// Function: main @ 0x1019f0
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

