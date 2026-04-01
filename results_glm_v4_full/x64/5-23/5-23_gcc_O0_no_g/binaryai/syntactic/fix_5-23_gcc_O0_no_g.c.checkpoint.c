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
typedef long __off_t;
typedef __off_t off_t;
#define NULL ((void*)0)
#define true 1
#define false 0

// Decompiled by BinaryAI
// SHA256: 8d5ed107be7739ef1591229365c356f22ca0054419f252eff2fde0298cdd440f

// Lock/Unlock macros for atomic operations
#define LOCK() __asm__ __volatile__ ("" ::: "memory")
#define UNLOCK() __asm__ __volatile__ ("" ::: "memory")

// Global variables
unsigned long long stack0x00000008 = 8;
char DAT_00102090[] = "=== Testing Preprocessing Features ===";
char DAT_001020b7[] = "macro_constants: %lu\n";
char DAT_001020d2[] = "macro_functions: %lu\n";
char DAT_001020ed[] = "conditional_compile: %lu\n";
char DAT_00102108[] = "multi_branch_compile: %lu\n";
char DAT_00102127[] = "macro_recursion: %lu\n";
char DAT_00102148[] = "stringize: %lu\n";
char DAT_00102172[] = "token_paste: %lu\n";
char DAT_0010218d[] = "variadic_macro: %lu\n";
char DAT_001021a8[] = "macro_override: %lu\n";
char DAT_001021c3[] = "include_guard: %lu\n";
char DAT_001021e0[] = "builtin_macros: %lu\n";
char DAT_00102210[] = "=== Testing ASM Features ===";
char DAT_0010223a[] = "asm_basic: %lu\n";
char DAT_00102256[] = "asm_clobber: %lu\n";
char DAT_00102272[] = "asm_multi_insn: %lu\n";
char DAT_0010228e[] = "asm_simd: %lu\n";
char DAT_001022aa[] = "asm_atomic: %lu\n";
char DAT_001022c6[] = "asm_privileged: %lu\n";
int global_var = 0;



// Function: FUN_00101020 @ 0x101020
typedef void (*void_func_t)(void);
void FUN_00101020(void)
{
 ((void_func_t)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010b0
void __cxa_finalize(void *d);

// Forward declarations
int main(void);

// Standard library function declarations
int printf(const char *format, ...);
int puts(const char *s);
size_t strlen(const char *s);
void *memcpy(void *dest, const void *src, size_t n);
void __stack_chk_fail(void);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);
long sysconf(int name);

























// Function: param_macro_constants @ 0x101229
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 else {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x10124b
unsigned long long call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x10125f
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 <= param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x101284
unsigned long long call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x10129d
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1012c2
unsigned long long call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x1012d6
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1012f2
unsigned long long call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x101306
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101319
unsigned long long call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x10132d
int param_stringize(void)
{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return (int)sVar3 + (int)sVar1 + (int)sVar2;
}

// Function: call_stringize @ 0x10138e
unsigned long long call_stringize(void)
{
 return param_stringize();
}

// Function: my_func @ 0x1013a2
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x1013bb
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}

// Function: call_token_paste @ 0x1013eb
unsigned long long call_token_paste(void)
{
 return param_token_paste(5);
}

// Function: param_variadic_macro @ 0x1013ff
int param_variadic_macro(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 long lVar1;
 long in_FS_OFFSET;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,(unsigned long)param_2,(unsigned long)param_3);
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x101472
unsigned long long call_variadic_macro(void)
{
 return param_variadic_macro(10,20,30);
}

// Function: param_macro_override @ 0x101490
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1014b6
unsigned long long call_macro_override(void)
{
 return param_macro_override(5);
}

// Function: header_func @ 0x1014ca
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: param_include_guard @ 0x1014dd
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: call_include_guard @ 0x1014f1
unsigned long long call_include_guard(void)
{
 param_include_guard();
 return 0;
}

// Function: param_builtin_macros @ 0x101505
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:25");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x1015a5
unsigned long long call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x1015b9
void test_preprocessing_features(void)
{
 uint uVar1;
 puts(&DAT_00102090);
 uVar1 = call_macro_constants();
 printf(&DAT_001020b7,(unsigned long)uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_001020d2,(unsigned long)uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_001020ed,(unsigned long)uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_00102108,(unsigned long)uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_00102127,(unsigned long)uVar1);
 uVar1 = call_stringize();
 printf(&DAT_00102148,(unsigned long)uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00102172,(unsigned long)uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_0010218d,(unsigned long)uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_001021a8,(unsigned long)uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_001021c3,(unsigned long)uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_001021e0,(unsigned long)uVar1);
 return;
}

// Function: param_asm_basic @ 0x101733
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x101750
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x101764
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

// Function: call_asm_clobber @ 0x10179a
void call_asm_clobber(void)
{
 long in_FS_OFFSET;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_28 = 1;
 local_24 = 2;
 local_20 = 3;
 local_1c = 4;
 local_18 = 5;
 param_asm_clobber(&local_28,5);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_asm_multi_insn @ 0x1017ff
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x10184d
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
 if (((char)local_38 == 'H') && (((char *)(&local_38))[4] == 'o')) {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1018e6
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 typedef struct {
   unsigned int _0_4_;
   unsigned int _4_4_;
   unsigned int _8_4_;
   unsigned int _12_4_;
 } simd_t;
 simd_t auVar1;
 auVar1._4_4_ = param_1[1] + param_2[1];
 auVar1._0_4_ = *param_1 + *param_2;
 auVar1._8_4_ = param_1[2] + param_2[2];
 auVar1._12_4_ = param_1[3] + param_2[3];
 memcpy(*param_3, &auVar1, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x10191a
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 iVar1 = param_1[1];
 iVar2 = param_1[2];
 iVar3 = param_1[3];
 iVar4 = param_2[1];
 iVar5 = param_2[2];
 iVar6 = param_2[3];
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar4 + iVar1;
 param_3[2] = iVar5 + iVar2;
 param_3[3] = iVar6 + iVar3;
 return 0;
}

// Function: call_asm_simd @ 0x1019b5
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
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: param_asm_atomic @ 0x101a47
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}

// Function: param_atomic_c11 @ 0x101a6e
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}

// Function: call_asm_atomic @ 0x101a8f
int call_asm_atomic(void)
{
 long in_FS_OFFSET;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_18 = 10;
 local_14 = param_asm_atomic(&local_18,5);
 if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return local_14 + local_18;
}

// Function: param_dynamic_code @ 0x101ae3
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
 typedef unsigned int (*uint_func_t)(unsigned int);
 uVar2 = ((uint_func_t)__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
 __stack_chk_fail();
 }
 return uVar2;
}

// Function: param_memory_protection @ 0x101ba8
unsigned int param_memory_protection(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *__addr;
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

// Function: param_clobber_importance @ 0x101ca7
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101cdd
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101d33
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101d57
void test_asm_features(void)
{
 uint uVar1;
 puts(&DAT_00102210);
 call_asm_basic();
 uVar1 = 0;
 printf(&DAT_0010223a,(unsigned long)uVar1);
 call_asm_clobber();
 uVar1 = 0;
 printf(&DAT_00102256,(unsigned long)uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00102272,(unsigned long)uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_0010228e,(unsigned long)uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_001022aa,(unsigned long)uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_001022c6,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x101e31
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



