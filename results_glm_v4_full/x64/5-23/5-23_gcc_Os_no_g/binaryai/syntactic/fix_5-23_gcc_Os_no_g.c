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
#include <stdarg.h>
#define true 1

// Decompiled by BinaryAI
// SHA256: 2f6dcb6f2bbc9118ca83246d5ee2129ada7da927f125e81a4aad86c71795944c

/* Global declarations */
extern void *__dso_handle;
char completed_0 = 0;

/* Lock/Unlock macros for atomic operations */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)
extern const char DAT_0010206a[];
extern const char DAT_00102092[];
extern const char DAT_001020ad[];
extern const char DAT_001020e3[];
extern const char DAT_00102102[];
extern const char DAT_0010211e[];
extern const char DAT_00102148[];
extern const char DAT_00102163[];
extern const char DAT_0010217e[];
extern const char DAT_001021de[];
extern const char DAT_00102225[];
extern const char DAT_0010225d[];
extern const char DAT_00102279[];
extern const char DAT_00102295[];
const char DAT_0010206a[] = "Testing preprocessing features:\n";
const char DAT_00102092[] = "%d\n";
const char DAT_001020ad[] = "%d\n";
const char DAT_001020c8[] = "%d\n";
const char DAT_001020e3[] = "%d\n";
const char DAT_00102102[] = "%d\n";
const char DAT_0010211e[] = "%d\n";
const char DAT_00102148[] = "%d\n";
const char DAT_00102163[] = "%d\n";
const char DAT_0010217e[] = "%d\n";
const char DAT_00102199[] = "%d\n";
const char DAT_001021b5[] = "%d %llx\n";
const char DAT_001021de[] = "Testing assembly features:\n";
const char DAT_00102225[] = "%d\n";
const char DAT_00102241[] = "%d\n";
const char DAT_0010225d[] = "%d\n";
const char DAT_00102279[] = "%d\n";
const char DAT_00102295[] = "%d %llx\n";
int global_var = 0;

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
void __cxa_finalize(void *dso_handle)
{
 __cxa_finalize(dso_handle);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::mmap @ 0x1010b0
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x1010c0
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1010d0
int __printf_chk(int __flag, const char *__format, ...)
{
 va_list args;
 va_start(args, __format);
 int ret = vprintf(__format, args);
 va_end(args);
 return ret;
}

// Function: <EXTERNAL>::mprotect @ 0x1010e0
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x1010f0
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: main @ 0x101100
int main(void)
{
 char auVar1 [16];
 unsigned long in_RAX;
 test_preprocessing_features();
 test_asm_features();
 *(unsigned long long *)(auVar1 + 8) = 0;
 *(unsigned long long *)(auVar1 + 0) = in_RAX;
 return *(unsigned long long *)auVar1 << 0x40;
}

// Function: param_macro_constants @ 0x101209
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x101221
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x10122b
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return param_1 * param_1 + iVar1;
}

// Function: call_macro_functions @ 0x10123c
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x101246
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101251
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x10125b
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101268
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x101272
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10127a
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x101284
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x10128e
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x101298
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x1012a0
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1012ab
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x1012b5
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x1012db
int call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x1012f0
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1012fc
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x101306
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x101310
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x10131a
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101362
int call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x10136d
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 __printf_chk(1,&DAT_0010206a);
 __printf_chk(1,&DAT_00102092,0x40);
 __printf_chk(1,&DAT_001020ad,0x1e);
 __printf_chk(1,&DAT_001020c8,0x20);
 __printf_chk(1,&DAT_001020e3,0xdf22);
 __printf_chk(1,&DAT_00102102,0x74);
 __printf_chk(1,&DAT_0010211e,0x13);
 __printf_chk(1,&DAT_00102148,0x3c);
 uVar1 = call_variadic_macro();
 __printf_chk(1,&DAT_00102163,uVar1);
 __printf_chk(1,&DAT_0010217e,0x10);
 __printf_chk(1,&DAT_00102199,500);
 uVar1 = call_builtin_macros();
 __printf_chk(1,&DAT_001021b5,uVar1,in_RAX);
 return;
}

// Function: param_asm_basic @ 0x101496
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1014a6
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x1014b1
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

// Function: call_asm_clobber @ 0x1014cb
int call_asm_clobber(void)
{
 long in_FS_OFFSET;
 char local_24 [20];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return param_asm_clobber(local_24,5);
}

// Function: param_asm_multi_insn @ 0x101508
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101523
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 long in_FS_OFFSET;
 unsigned long long local_3a;
 unsigned short local_32;
 char local_30 [16];
 char local_20 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_32 = 0x4d;
 __builtin_memset(local_30, 0, sizeof(local_30));
 __builtin_memset(local_20, 0, sizeof(local_20));
 local_3a = 0x5341206f6c6c6548;
 param_asm_multi_insn(local_30,&local_3a,9);
 uVar1 = 0xffffffff;
 if ((local_30[0] == 'H') && (uVar1 = 0xffffffff, local_30[4] == 'o')) {
 uVar1 = 0x2a;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1015a1
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 *(int *)(auVar1 + 4) = param_1[1] + param_2[1];
 *(int *)(auVar1 + 0) = *param_1 + *param_2;
 *(int *)(auVar1 + 8) = param_1[2] + param_2[2];
 *(int *)(auVar1 + 12) = param_1[3] + param_2[3];
 __builtin_memcpy(param_3, auVar1, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x1015b5
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 *(int *)(auVar1 + 4) = param_2[1] + param_1[1];
 *(int *)(auVar1 + 0) = *param_2 + *param_1;
 *(int *)(auVar1 + 8) = param_2[2] + param_1[2];
 *(int *)(auVar1 + 12) = param_2[3] + param_1[3];
 __builtin_memcpy(param_3, auVar1, 16);
 return 0;
}

// Function: call_asm_simd @ 0x1015c6
int call_asm_simd(void)
{
 long in_FS_OFFSET;
 unsigned long long local_40;
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_40 = 0x200000001;
 local_38 = 0x400000003;
 local_30 = 0x600000005;
 local_28 = 0x800000007;
 param_asm_simd(&local_40,&local_30,&local_20);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_1c + local_20 + local_18 + local_14;
}

// Function: param_asm_atomic @ 0x101656
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101663
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
 long in_FS_OFFSET;
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0x1e;
}

// Function: param_dynamic_code @ 0x1016c0
unsigned int param_dynamic_code(unsigned int param_1)
{
 long lVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *__addr;
 long in_FS_OFFSET;
 uVar2 = 0xffffffff;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *__addr = 0xc083f889;
 *(unsigned short *)(__addr + 1) = 0xc305;
 uVar2 = ((unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_memory_protection @ 0x10175a
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar2;
 uVar2 = 0xffffffff;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
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
 uVar2 = 0xfffffffd;
 munmap(__addr,__len);
 }
 }
 else {
 uVar2 = 0xfffffffe;
 munmap(__addr,__len);
 }
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x101812
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101826
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar1 = 0xf, iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101870
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10188a
void test_asm_features(void)
{
 unsigned int uVar1;
 unsigned long long in_RAX;
 __printf_chk(1,&DAT_001021de);
 call_asm_basic();
 __printf_chk(1,"%s","");
 uVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00102225,uVar1);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_00102241,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,&DAT_0010225d,uVar1);
 uVar1 = call_asm_atomic();
 __printf_chk(1,&DAT_00102279,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,&DAT_00102295,uVar1,in_RAX);
 return;
}



