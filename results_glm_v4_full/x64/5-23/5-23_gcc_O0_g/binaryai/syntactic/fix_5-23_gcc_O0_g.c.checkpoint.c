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
typedef long off_t;

// Decompiled by BinaryAI
// SHA256: a3ee5dbfbac33d1d5dc0a927b3cc017c4f226b994768374a470c82983d1b3fdc

/* Global variable declarations */
char completed_0 = 0;
int global_var = 0;
extern void *__dso_handle;

/* Lock/Unlock macros for atomic operations */
#define LOCK() /* no-op for decompiled code */
#define UNLOCK() /* no-op for decompiled code */

/* Function prototypes */
unsigned long long main(void);

/* String data declarations */
const char DAT_00102090[] = "Testing preprocessing features:\n";
const char DAT_001020b7[] = "  Macro constants: %d\n";
const char DAT_001020d2[] = "  Macro functions: %d\n";
const char DAT_001020ed[] = "  Conditional compile: %d\n";
const char DAT_00102108[] = "  Multi-branch compile: %d\n";
const char DAT_00102127[] = "  Macro recursion: %d\n";
const char DAT_00102148[] = "  Stringize: %d\n";
const char DAT_00102172[] = "  Token paste: %d\n";
const char DAT_0010218d[] = "  Variadic macro: %d\n";
const char DAT_001021a8[] = "  Macro override: %d\n";
const char DAT_001021c3[] = "  Include guard: %d\n";
const char DAT_001021e0[] = "  Builtin macros: %d\n";
const char DAT_00102210[] = "Testing asm features:\n";
const char DAT_0010223a[] = "  Asm basic: %d\n";
const char DAT_00102256[] = "  Asm clobber: %d\n";
const char DAT_00102272[] = "  Asm multi-insn: %llu\n";
const char DAT_0010228e[] = "  Asm SIMD: %d\n";
const char DAT_001022aa[] = "  Asm atomic: %d\n";
const char DAT_001022c6[] = "  Asm privileged: %d\n";



// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010b0
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x1010c0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x1010d0
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010e0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::mmap @ 0x1010f0
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x101100
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::munmap @ 0x101110
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x101120
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x101130
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}





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
uint call_macro_constants(void)
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
uint call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x10129d
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1012c2
uint call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x1012d6
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1012f2
uint call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x101306
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101319
uint call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x10132d
int param_stringize(int unused_param)
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
uint call_stringize(void)
{
 return param_stringize(0);
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
uint call_token_paste(void)
{
 return param_token_paste(5);
}

// Function: param_variadic_macro @ 0x1013ff
int param_variadic_macro(uint32_t param_1,uint32_t param_2,uint32_t param_3)
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
uint call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x101490
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1014b6
uint call_macro_override(void)
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
uint call_include_guard(void)
{
 param_include_guard();
 return header_func(5);
}

// Function: param_builtin_macros @ 0x101505
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:23");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x1015a5
uint call_builtin_macros(void)
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
uint call_asm_basic(void)
{
 return param_asm_basic(5);
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
uint call_asm_clobber(void)
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
 return 15;
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
 if (((char)local_38 == 'H') && (((char)(&local_38)[4]) == 'o')) {
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
 char auVar1 [16];
 *(int *)(auVar1 + 4) = param_1[1] + param_2[1];
 *(int *)(auVar1 + 0) = *param_1 + *param_2;
 *(int *)(auVar1 + 8) = param_1[2] + param_2[2];
 *(int *)(auVar1 + 12) = param_1[3] + param_2[3];
 __builtin_memcpy(*param_3, auVar1, 16);
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
 return local_1c + local_28 + local_24 + local_20;
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
 typedef unsigned int (*func_t)(unsigned int);
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
 uVar2 = ((func_t)__addr)(param_1);
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
 uVar1 = call_asm_basic();
 printf(&DAT_0010223a,(unsigned long)uVar1);
 uVar1 = call_asm_clobber();
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
unsigned long long main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



