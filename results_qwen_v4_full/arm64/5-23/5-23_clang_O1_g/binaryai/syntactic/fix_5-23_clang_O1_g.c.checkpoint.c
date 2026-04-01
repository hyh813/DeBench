/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef _Bool bool;

// Standard library includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/auxv.h>

// External function declarations
void __cxa_finalize(void *dso_handle) __attribute__((weak));
unsigned long getauxval(unsigned long type) __attribute__((weak));

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char __aarch64_have_lse_atomics;
int global_var;
int tmp_ldWn;
int tmp_stWn;
void *stack0x00000008;
char DAT_00101417[] = "Testing preprocessing features:\n";
char DAT_00101223[] = "param_macro_constants returned: %llu\n";
char DAT_0010123e[] = "call_macro_functions returned: %llu\n";
char DAT_00101259[] = "call_conditional_compile returned: %llu\n";
char DAT_00101274[] = "call_multi_branch_compile returned: %llu\n";
char DAT_00101293[] = "call_macro_recursion returned: %llu\n";
char DAT_001012af[] = "call_stringize returned: %llu\n";
char DAT_001012d9[] = "call_token_paste returned: %llu\n";
char DAT_001012f4[] = "call_macro_override returned: %llu\n";
char DAT_0010130f[] = "call_include_guard returned: %llu\n";
char DAT_0010132a[] = "call_builtin_macros returned: %llu\n";
char DAT_00101346[] = "param_builtin_macros returned: %llu\n";
char DAT_0010143e[] = "Testing assembly features:\n";
char DAT_0010136f[] = "call_asm_basic returned: %llu\n";
char DAT_0010138b[] = "call_asm_clobber returned: %llu\n";
char DAT_001013a7[] = "call_asm_multi_insn returned: %llu\n";
char DAT_001013c3[] = "call_asm_simd returned: %lu\n";
char DAT_001013df[] = "call_asm_atomic returned: %lu\n";
char DAT_001013fb[] = "call_asm_privileged returned: %lu\n";
char DAT_00101478[] = {1, 2, 3, 4};
char DAT_00101468[] = {5, 6, 7, 8};

// Forward declarations
int main(void);
static void FUN_001007a0(void);
static int __aarch64_ldadd4_acq_rel_impl(int param_1, int *param_2);
static int ExclusiveMonitorPass(void *addr, int size);
static char ExclusiveMonitorsStatus(void);
static void LOAcquire(void);
static void LORelease(void);
static int test_preprocessing_features(void);
static int test_asm_features(void);
static unsigned int param_memory_protection(void);
static unsigned int call_asm_privileged(void);
static int param_asm_basic(int param_1);
static unsigned long long call_asm_basic(void);
static int param_asm_clobber(int *param_1, uint param_2);
static unsigned long long call_asm_clobber(void);
static void param_asm_multi_insn(void *param_1, void *param_2, size_t param_3);
static unsigned long long call_asm_multi_insn(void);
static unsigned long long param_asm_simd(long param_1, long param_2, long param_3);
static unsigned long long call_asm_simd(void);
static int param_asm_atomic(unsigned long long param_1, int param_2);
static int param_atomic_c11(unsigned long long param_1, int param_2);
static unsigned long long call_asm_atomic(void);
static int param_dynamic_code(int param_1);
static int param_clobber_importance(int param_1, int param_2);
static int param_memory_clobber_demo(void);
static unsigned int param_macro_constants(int param_1);
static unsigned long long call_macro_constants(void);
static int param_macro_functions(int param_1, int param_2);
static unsigned long long call_macro_functions(void);
static int param_conditional_compile(int param_1);
static unsigned long long call_conditional_compile(void);
static int param_multi_branch_compile(int param_1);
static unsigned long long call_multi_branch_compile(void);
static int param_macro_recursion(int param_1);
static unsigned long long call_macro_recursion(void);
static unsigned long long param_stringize(void);
static unsigned long long call_stringize(void);
static int my_func(int param_1);
static int param_token_paste(int param_1);
static unsigned long long call_token_paste(void);
static int param_variadic_macro(uint param_1, unsigned long param_2, unsigned long param_3);
static unsigned long long call_variadic_macro(void);
static int param_macro_override(int param_1);
static unsigned long long call_macro_override(void);
static unsigned long long param_include_guard(void);
static unsigned long long call_include_guard(void);
static int param_builtin_macros(int param_1);
static unsigned long long call_builtin_macros(void);

// Stub implementations for ARM atomic/locking functions
static int ExclusiveMonitorPass(void *addr, int size)
{
 return 1;
}

static char ExclusiveMonitorsStatus(void)
{
 return '\x01';
}

static void LOAcquire(void)
{
 return;
}

static void LORelease(void)
{
 return;
}

// Stub implementation for ARM atomic function
static int __aarch64_ldadd4_acq_rel_impl(int param_1, int *param_2)
{
 int old_value = *param_2;
 *param_2 = old_value + param_1;
 return old_value;
}

// Decompiled by BinaryAI
// SHA256: 6752218e12841b837185410ed2c7fc39a715423873f81602e0e092c9cbe4be5c



// Function: FUN_001007a0 @ 0x1007a0
static void FUN_001007a0(void)
{
 return;
}



// Function: init_have_lse_atomics @ 0x100880
static void init_have_lse_atomics(void)
{
 unsigned long extraout_var;
 extraout_var = getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}





// Function: deregister_tm_clones @ 0x100910
static void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100940
static void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x100980
static void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_macro_constants @ 0x1009d4
static unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x40;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1009e8
static unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x1009f0
static int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 <= param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100a00
static unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x100a08
static int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100a14
static unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x100a1c
static int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100a2c
static unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x100a34
static int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100a3c
static unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x100a44
static unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x100a4c
static unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x100a54
static int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100a60
static int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100a70
static unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x100a78
static int param_variadic_macro(uint param_1,unsigned long param_2,unsigned long param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100ab0
static unsigned long long call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x100adc
static int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100ae8
static unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x100af0
static unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x100af8
static unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x100b00
static int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100b50
static unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x100b94
static int test_preprocessing_features(void)
{
 int iVar1;
 puts(&DAT_00101417);
 printf(&DAT_00101223,0x40);
 printf(&DAT_0010123e,0x1e);
 printf(&DAT_00101259,0x20);
 printf(&DAT_00101274,0xdf22);
 printf(&DAT_00101293,0x74);
 printf(&DAT_001012af,0x13);
 printf(&DAT_001012d9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_001012f4,0x3c);
 printf(&DAT_0010130f,0x10);
 printf(&DAT_0010132a,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 iVar1 = printf(&DAT_00101346,0x17e);
 return iVar1;
}

// Function: param_asm_basic @ 0x100ca8
static int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100cb0
static unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100cb8
static int param_asm_clobber(int *param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_asm_clobber @ 0x100ce8
static unsigned long long call_asm_clobber(void)
{
 return 0xf;
}

// Function: param_asm_multi_insn @ 0x100cf0
static void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x100d04
static unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100d0c
static unsigned long long param_asm_simd(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: call_asm_simd @ 0x100d5c
static unsigned long long call_asm_simd(void)
{
 long lVar1;
 int local_10 [4];
 lVar1 = 0;
 do {
 *(int *)((long)local_10 + lVar1) =
 *(int *)((long)&DAT_00101478 + lVar1) + *(int *)((long)&DAT_00101468 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return (unsigned long long)(local_10[1] + local_10[0] + local_10[2] + local_10[3]);
}

// Function: param_asm_atomic @ 0x100db0
static int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel_impl(param_2,(int*)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100ddc
static int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel_impl(param_2,(int*)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100e08
static unsigned long long call_asm_atomic(void)
{
 int iVar1;
 int local_14;
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel_impl(5,&local_14);
 return (unsigned long long)(iVar1 + local_14 + 5);
}

// Function: param_dynamic_code @ 0x100e40
static int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 int iVar1;
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 iVar1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}

// Function: param_memory_protection @ 0x100ea8
static unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar2;
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
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

// Function: param_clobber_importance @ 0x100f58
static int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x100f64
static unsigned int call_asm_privileged(void)
{
 unsigned int uVar1;
 uint uVar2;
 int iVar3;
 size_t __len;
 void *__addr;
 unsigned int uVar5;
 void *pvVar4;
 __len = sysconf(0x1e);
 uVar5 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar2 = munmap(__addr,__len);
 pvVar4 = (void *)(unsigned long)uVar2;
 uVar5 = 0xf;
 }
 iVar3 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar3 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar5;
 }
 return uVar1;
}

// Function: param_memory_clobber_demo @ 0x100fe4
static int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x100ff4
static int test_asm_features(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 size_t __len;
 void *__addr;
 long lVar5;
 int local_40 [4];
 void *pvVar4;
 puts(&DAT_0010143e);
 printf(&DAT_0010136f,0xf);
 printf(&DAT_0010138b,0xf);
 printf(&DAT_001013a7,0x2a);
 lVar5 = 0;
 do {
 *(int *)((long)local_40 + lVar5) =
 *(int *)((long)&DAT_00101478 + lVar5) + *(int *)((long)&DAT_00101468 + lVar5);
 lVar5 = lVar5 + 4;
 } while (lVar5 != 0x10);
 printf(&DAT_001013c3,(unsigned long)(uint)(local_40[1] + local_40[0] + local_40[2] + local_40[3]));
 local_40[0] = 10;
 iVar2 = __aarch64_ldadd4_acq_rel_impl(5,local_40);
 printf(&DAT_001013df,(unsigned long)(iVar2 + local_40[0] + 5));
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar3 = munmap(__addr,__len);
 pvVar4 = (void *)(unsigned long)uVar3;
 uVar3 = 0xf;
 }
 iVar2 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar3;
 }
 iVar2 = printf(&DAT_001013fb,(unsigned long)uVar1);
 return iVar2;
}

// Function: main @ 0x101144
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}





