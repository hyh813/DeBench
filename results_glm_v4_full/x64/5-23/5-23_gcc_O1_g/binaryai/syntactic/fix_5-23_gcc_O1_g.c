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

/* External function declarations */
void __libc_start_main(int (*)(void), unsigned long long, void *, int (*)(void), void (*)(void), unsigned long long, void *);
int __printf_chk(int flag, const char *format, ...);
void __cxa_finalize(void *dso_handle);
void __stack_chk_fail(void);
void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);
int munmap(void *__addr, size_t __len);
int mprotect(void *__addr, size_t __len, int __prot);
long sysconf(int __name);
void __stack_chk_fail(void);
void *__builtin_memcpy(void *dest, const void *src, size_t n);

/* Forward declarations */
unsigned long long main(void);

/* Global variables */
extern char completed_0;
extern void *__dso_handle;
int global_var = 0;

/* Data string literals */
static char DAT_001021f0[] = "Testing preprocessing features...\n";
static char DAT_0010203d[] = "macro_constants: %llu\n";
static char DAT_00102058[] = "macro_functions: %llu\n";
static char DAT_00102073[] = "conditional_compile: %llu\n";
static char DAT_00102218[] = "multi_branch_compile: %llu\n";
static char DAT_0010208e[] = "macro_recursion: %llu\n";
static char DAT_00102238[] = "stringize: %llu\n";
static char DAT_001020aa[] = "token_paste: %llu\n";
static char DAT_001020e0[] = "macro_override: %llu\n";
static char DAT_001020fb[] = "include_guard: %llu\n";
static char DAT_00102298[] = "Testing ASM features...\n";
static char DAT_00102117[] = "asm_basic: %u\n";
static char DAT_00102133[] = "asm_clobber: %u\n";
static char DAT_0010214f[] = "asm_multi_insn: %llu\n";
static char DAT_0010216b[] = "asm_simd: %u\n";
static char DAT_00102187[] = "asm_atomic: %u\n";
static char DAT_001021a3[] = "asm_privileged: %u\n";

/* Lock/unlock macros */
#define LOCK() do {} while(0)
#define UNLOCK() do {} while(0)



// Decompiled by BinaryAI
// SHA256: e57f37468ed80ca5d4b313e22dcaba4c2721a5b1be4c537a783defc2430ff220



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 /* Invalid function call at address 0x0 - removed */
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
void __cxa_finalize_wrapper(void)
{
 __cxa_finalize(__dso_handle);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail_wrapper(void)
{
 __stack_chk_fail();
 return;
}

// Function: <EXTERNAL>::mmap @ 0x1010b0
void * mmap_wrapper(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x1010c0
int munmap_wrapper(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1010d0
int __printf_chk_wrapper(int flag, const char *format, ...)
{
 va_list args;
 int result;
 va_start(args, format);
 result = vprintf(format, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::mprotect @ 0x1010e0
int mprotect_wrapper(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x1010f0
long sysconf_wrapper(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
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
unsigned long long call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
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
 ,0x117,"Jan 15 2026","03:00:26");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101356
unsigned long long call_builtin_macros(void)
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
 call_variadic_macro();
 call_variadic_macro();
 __printf_chk(1,&DAT_001020e0,0x10);
 __printf_chk(1,&DAT_001020fb,500);
 call_builtin_macros();
 call_builtin_macros();
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
int call_asm_clobber(void)
{
 long in_FS_OFFSET;
 char auStack_28 [24];
 long local_10;
 int iVar1;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = param_asm_clobber(auStack_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
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
 if ((char)((local_38 >> 32) & 0xFF) == 'o') {
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
 *(int *)(auVar1 + 4) = param_1[1] + param_2[1];
 *(int *)auVar1 = *param_1 + *param_2;
 *(int *)(auVar1 + 8) = param_1[2] + param_2[2];
 *(int *)(auVar1 + 12) = param_1[3] + param_2[3];
 __builtin_memcpy(*param_3, auVar1, 16);
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
 uVar2 = ((unsigned int (*)(unsigned int))__addr)(param_1);
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



