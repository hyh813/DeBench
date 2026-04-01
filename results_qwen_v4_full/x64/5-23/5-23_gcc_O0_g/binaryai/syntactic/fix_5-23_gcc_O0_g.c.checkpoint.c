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
typedef unsigned int uint;
typedef long __off_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Vector type for SIMD operations
typedef union {
    char bytes[16];
    int ints[4];
} vec16_t;

// Forward declarations

// Macro definitions
#define true 1
#define LOCK()
#define UNLOCK()

// Decompiled by BinaryAI
// SHA256: a3ee5dbfbac33d1d5dc0a927b3cc017c4f226b994768374a470c82983d1b3fdc



// Function: FUN_00101020 @ 0x101020
static void FUN_00101020(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010b0
extern void __cxa_finalize(void);

// Function: <EXTERNAL>::puts @ 0x1010c0
extern int puts(char *__s);

// Function: <EXTERNAL>::strlen @ 0x1010d0
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010e0
extern void __stack_chk_fail(void);

// Function: <EXTERNAL>::mmap @ 0x1010f0
extern void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset);

// Function: <EXTERNAL>::printf @ 0x101100
extern int printf(char *__format,...);

// Function: <EXTERNAL>::munmap @ 0x101110
extern int munmap(void *__addr,size_t __len);

// Function: <EXTERNAL>::mprotect @ 0x101120
extern int mprotect(void *__addr,size_t __len,int __prot);

// Function: <EXTERNAL>::sysconf @ 0x101130
extern long sysconf(int __name);



// Global variables
static int completed_0 = 0;
extern void *__dso_handle;
char DAT_00102090[] = "Testing Preprocessing Features";
char DAT_001020b7[] = "call_macro_constants result: %lu\n";
char DAT_001020d2[] = "call_macro_functions result: %lu\n";
char DAT_001020ed[] = "call_conditional_compile result: %lu\n";
char DAT_00102108[] = "call_multi_branch_compile result: %lu\n";
char DAT_00102127[] = "call_macro_recursion result: %lu\n";
char DAT_00102148[] = "call_stringize result: %lu\n";
char DAT_00102172[] = "call_token_paste result: %lu\n";
char DAT_0010218d[] = "call_variadic_macro result: %lu\n";
char DAT_001021a8[] = "call_macro_override result: %lu\n";
char DAT_001021c3[] = "call_include_guard result: %lu\n";
char DAT_001021e0[] = "call_builtin_macros result: %lu\n";
char DAT_00102210[] = "Testing ASM Features";
char DAT_0010223a[] = "call_asm_basic result: %lu\n";
char DAT_00102256[] = "call_asm_clobber result: %lu\n";
char DAT_00102272[] = "call_asm_multi_insn result: %lu\n";
char DAT_0010228e[] = "call_asm_simd result: %lu\n";
char DAT_001022aa[] = "call_asm_atomic result: %lu\n";
char DAT_001022c6[] = "call_asm_privileged result: %lu\n";
int global_var = 0;

// Function: deregister_tm_clones @ 0x101170
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011a0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011e0
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = 1;
 return;
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
void call_macro_constants(void)
{
 param_macro_constants(0x800);
 return;
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
void call_macro_functions(void)
{
 param_macro_functions(5,3);
 return;
}

// Function: param_conditional_compile @ 0x10129d
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1012c2
void call_conditional_compile(void)
{
 param_conditional_compile(10);
 return;
}

// Function: param_multi_branch_compile @ 0x1012d6
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1012f2
void call_multi_branch_compile(void)
{
 param_multi_branch_compile(10);
 return;
}

// Function: param_macro_recursion @ 0x101306
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x101319
void call_macro_recursion(void)
{
 param_macro_recursion(100);
 return;
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
void call_stringize(void)
{
 param_stringize();
 return;
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
void call_token_paste(void)
{
 param_token_paste(5);
 return;
}

// Function: param_variadic_macro @ 0x1013ff
int param_variadic_macro(uint param_1,uint param_2,uint param_3)
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
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x101490
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1014b6
void call_macro_override(void)
{
 param_macro_override(5);
 return;
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
void call_include_guard(void)
{
 param_include_guard();
 return;
}

// Function: param_builtin_macros @ 0x101505
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:23");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x1015a5
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x1015b9
void test_preprocessing_features(void)
{
 puts(&DAT_00102090);
 call_macro_constants();
 printf(&DAT_001020b7,0);
 call_macro_functions();
 printf(&DAT_001020d2,0);
 call_conditional_compile();
 printf(&DAT_001020ed,0);
 call_multi_branch_compile();
 printf(&DAT_00102108,0);
 call_macro_recursion();
 printf(&DAT_00102127,0);
 call_stringize();
 printf(&DAT_00102148,0);
 call_token_paste();
 printf(&DAT_00102172,0);
 call_variadic_macro();
 printf(&DAT_0010218d,0);
 call_macro_override();
 printf(&DAT_001021a8,0);
 call_include_guard();
 printf(&DAT_001021c3,0);
 call_builtin_macros();
 printf(&DAT_001021e0,0);
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
 if (((char)local_38 == 'H') && (((char*)&local_38)[4] == 'o')) {
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
 vec16_t auVar1;
 auVar1.ints[1] = param_1[1] + param_2[1];
 auVar1.ints[0] = *param_1 + *param_2;
 auVar1.ints[2] = param_1[2] + param_2[2];
 auVar1.ints[3] = param_1[3] + param_2[3];
 for (int i = 0; i < 16; i++) {
  (*param_3)[i] = auVar1.bytes[i];
 }
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
 puts(&DAT_00102210);
 call_asm_basic();
 printf(&DAT_0010223a,0);
 call_asm_clobber();
 printf(&DAT_00102256,0);
 call_asm_multi_insn();
 printf(&DAT_00102272,0);
 call_asm_simd();
 printf(&DAT_0010228e,0);
 call_asm_atomic();
 printf(&DAT_001022aa,0);
 call_asm_privileged();
 printf(&DAT_001022c6,0);
 return;
}

// Function: main @ 0x101e31
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}





