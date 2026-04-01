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
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>

/* External declarations */
void __libc_start_main(int (*)(void), unsigned long, void *, void (*)(void), void (*)(void), unsigned long, void *);
extern void *__dso_handle;
extern void *stack0x00000008;
extern int global_var;

/* Global variable definitions */
int completed_0_value = 0;

/* Forward declarations */
int header_func(int param_1);
int main(void);

/* DAT_ constants (format strings) */
char DAT_00102095[] = "Testing preprocessing features:\n";
char DAT_001020bd[] = "  call_macro_constants() = %u\n";
char DAT_001020d8[] = "  call_macro_functions() = %u\n";
char DAT_001020f3[] = "  call_conditional_compile() = %u\n";
char DAT_0010210e[] = "  call_multi_branch_compile() = %u\n";
char DAT_0010212d[] = "  call_macro_recursion() = %u\n";
char DAT_00102149[] = "  call_stringize() = %lu\n";
char DAT_00102173[] = "  call_token_paste() = %u\n";
char DAT_0010218e[] = "  call_variadic_macro() = %u\n";
char DAT_001021a9[] = "  call_macro_override() = %u\n";
char DAT_001021c4[] = "  call_include_guard() = %u\n";
char DAT_001021e0[] = "  call_builtin_macros() = %u\n";
char DAT_00102213[] = "Testing ASM features:\n";
char DAT_0010223e[] = "  call_asm_basic() = %u\n";
char DAT_0010225a[] = "  call_asm_clobber() = %u\n";
char DAT_00102276[] = "  call_asm_multi_insn() = %llu\n";
char DAT_00102292[] = "  call_asm_simd() = %u\n";
char DAT_001022ae[] = "  call_asm_atomic() = %d\n";
char DAT_001022ca[] = "  call_asm_privileged() = %u\n";

/* Lock macros */
#define LOCK() ((void)0)
#define UNLOCK() ((void)0)

// Decompiled by BinaryAI
// SHA256: e518460cdefb5b7fdf749d8c330dad66f1bc44fd0618fb8d6efaf8a59b47878c



// Function: param_macro_constants @ 0x1011a0
unsigned int param_macro_constants(int param_1)
{
 unsigned int local_c;
 if (param_1 < 0x401) {
 local_c = 0x200;
 }
 else {
 local_c = 0x40;
 }
 return local_c;
}

// Function: call_macro_constants @ 0x1011d0
unsigned int call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x1011e0
int param_macro_functions(int param_1,int param_2)
{
 int local_18;
 local_18 = param_2;
 if (param_2 < param_1) {
 local_18 = param_1;
 }
 return param_1 * param_1 + local_18;
}

// Function: call_macro_functions @ 0x101220
unsigned int call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x101240
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101260
unsigned int call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x101270
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x101290
unsigned int call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x1012a0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1012e0
unsigned int call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x1012f0
unsigned long param_stringize(void)
{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3;
}

// Function: call_stringize @ 0x101360
unsigned long call_stringize(void)
{
 return param_stringize();
}

// Function: my_func @ 0x101370
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x101380
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return param_1 + 5 + iVar1;
}

// Function: call_token_paste @ 0x1013c0
unsigned int call_token_paste(void)
{
 return param_token_paste(5);
}

// Function: param_variadic_macro @ 0x1013d0
int param_variadic_macro(uint param_1,uint param_2,uint param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,(unsigned long)param_2,(unsigned long)param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x101410
unsigned int call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x101430
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x101460
unsigned int call_macro_override(void)
{
 return param_macro_override(5);
}

// Function: param_include_guard @ 0x101470
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: header_func @ 0x101480
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: call_include_guard @ 0x101490
unsigned int call_include_guard(void)
{
 return header_func(5);
}

// Function: param_builtin_macros @ 0x1014a0
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:44");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101530
unsigned int call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x101540
void test_preprocessing_features(void)
{
 uint uVar1;
 printf(&DAT_00102095);
 uVar1 = call_macro_constants();
 printf(&DAT_001020bd,(unsigned long)uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_001020d8,(unsigned long)uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_001020f3,(unsigned long)uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_0010210e,(unsigned long)uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_0010212d,(unsigned long)uVar1);
 uVar1 = call_stringize();
 printf(&DAT_00102149,(unsigned long)uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00102173,(unsigned long)uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_0010218e,(unsigned long)uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_001021a9,(unsigned long)uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_001021c4,(unsigned long)uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_001021e0,(unsigned long)uVar1);
 return;
}

// Function: param_asm_basic @ 0x101640
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x101660
unsigned int call_asm_basic(void)
{
 return param_asm_basic(5);
}

// Function: param_asm_clobber @ 0x101670
int param_asm_clobber(long *param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x1016b0
unsigned int call_asm_clobber(void)
{
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned int local_18;
 local_28 = 0x200000001;
 local_20 = 0x400000003;
 local_18 = 5;
 return param_asm_clobber(&local_28,5);
}

// Function: param_asm_multi_insn @ 0x1016f0
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x101740
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 char local_38 [4];
 char local_34;
 char local_12[8];
 unsigned short local_a;
 local_12[0] = 'H';
 local_12[1] = 'e';
 local_12[2] = 'l';
 local_12[3] = 'l';
 local_12[4] = 'o';
 local_12[5] = ' ';
 local_12[6] = 'A';
 local_12[7] = 'S';
 local_a = 0x4d;
 memset(local_38,0,0x20);
 param_asm_multi_insn(local_38,local_12,9);
 uVar1 = 0xffffffff;
 if (local_38[0] == 'H' && local_34 == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x1017c0
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 int *auVar1;
 auVar1 = (int *)(*param_3);
 auVar1[0] = *param_1 + *param_2;
 auVar1[1] = param_1[1] + param_2[1];
 auVar1[2] = param_1[2] + param_2[2];
 auVar1[3] = param_1[3] + param_2[3];
 return 0;
}

// Function: param_simd_intrinsics @ 0x1017f0
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
 *param_3 = *param_1 + *param_2;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}

// Function: call_asm_simd @ 0x101890
unsigned int call_asm_simd(void)
{
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned long long local_28;
 unsigned long long local_20;
 unsigned long long local_18;
 unsigned long long local_10;
 local_18 = 0x200000001;
 local_10 = 0x400000003;
 local_28 = 0x600000005;
 local_20 = 0x800000007;
 param_asm_simd((int *)&local_18,(int *)&local_28,(char (*)[16])&local_38);
 return local_38 + local_34 + local_30 + local_2c;
}

// Function: param_asm_atomic @ 0x1018f0
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101920
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101950
int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x101980
unsigned int param_dynamic_code(unsigned int param_1)
{
 size_t __len;
 unsigned int *__addr;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 local_c = 0xffffffff;
 }
 else {
 *__addr = 0xc083f889;
 *(unsigned short *)(__addr + 1) = 0xc305;
 local_c = (*(unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 return local_c;
}

// Function: param_memory_protection @ 0x101a30
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 local_c = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 local_c = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 local_c = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 local_c = 0xfffffffe;
 }
 }
 return local_c;
}

// Function: param_clobber_importance @ 0x101b40
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101b80
unsigned int call_asm_privileged(void)
{
 unsigned int iVar1;
 unsigned int iVar2;
 unsigned int local_c;
 local_c = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_c == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_c = 0x4d;
 }
 return local_c;
}

// Function: param_memory_clobber_demo @ 0x101bf0
int param_memory_clobber_demo(void)
{
 return 0x32;
}

// Function: test_asm_features @ 0x101c20
void test_asm_features(void)
{
 uint uVar1;
 printf(&DAT_00102213);
 uVar1 = call_asm_basic();
 printf(&DAT_0010223e,(unsigned long)uVar1);
 uVar1 = call_asm_clobber();
 printf(&DAT_0010225a,(unsigned long)uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00102276,(unsigned long)uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_00102292,(unsigned long)uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_001022ae,(unsigned long)uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_001022ca,(unsigned long)uVar1);
 return;
}

// Function: main @ 0x101cc0
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



