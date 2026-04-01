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
typedef long off_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra type definitions */
typedef int undefined4;
typedef unsigned long long undefined8;
typedef unsigned char undefined;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef int (*code)(int);
typedef unsigned int uint;
typedef unsigned long ulong;

/* Macro definitions for decompiled code */
#define LOCK()
#define UNLOCK()
#define CONCAT44(high, low) (((unsigned long long)(high) << 32) | (unsigned int)(low))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/x64/5-23/5-23_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */


/* CRT stub function _init removed by preprocessor */

/* Library function declarations */
size_t strlen(const char *);
int printf(const char *, ...);
void *mmap(void *, size_t, int, int, int, off_t);
int munmap(void *, size_t);
int mprotect(void *, size_t, int);
long sysconf(int);
void *memset(void *, int, size_t);
char *builtin_strncpy(char *, const char *, size_t);

/* Forward declarations */
int header_func(int param_1);
long param_stringize(int param_1);

/* External data declarations */
extern char DAT_00102095[];
extern char DAT_001020bd[];
extern char DAT_001020d8[];
extern char DAT_001020f3[];
extern char DAT_0010210e[];
extern char DAT_0010212d[];
extern char DAT_00102149[];
extern char DAT_00102173[];
extern char DAT_0010218e[];
extern char DAT_001021a9[];
extern char DAT_001021c4[];
extern char DAT_001021e0[];
extern char DAT_00102213[];
extern char DAT_0010223e[];
extern char DAT_0010225a[];
extern char DAT_00102276[];
extern char DAT_00102292[];
extern char DAT_001022ae[];
extern char DAT_001022ca[];
extern int global_var;

/* Define the DAT_ arrays (format strings for printf) */
char DAT_00102095[] = "=== Preprocessing Features Test ===\n";
char DAT_001020bd[] = "Macro constants result: %u\n";
char DAT_001020d8[] = "Macro functions result: %u\n";
char DAT_001020f3[] = "Conditional compile result: %u\n";
char DAT_0010210e[] = "Multi branch compile result: %u\n";
char DAT_0010212d[] = "Macro recursion result: %u\n";
char DAT_00102149[] = "Stringize result: %u\n";
char DAT_00102173[] = "Token paste result: %u\n";
char DAT_0010218e[] = "Variadic macro result: %u\n";
char DAT_001021a9[] = "Macro override result: %u\n";
char DAT_001021c4[] = "Include guard result: %u\n";
char DAT_001021e0[] = "Builtin macros result: %u\n";
char DAT_00102213[] = "=== ASM Features Test ===\n";
char DAT_0010223e[] = "ASM basic result: %u\n";
char DAT_0010225a[] = "ASM clobber result: %u\n";
char DAT_00102276[] = "ASM multi insn result: %u\n";
char DAT_00102292[] = "ASM SIMD result: %u\n";
char DAT_001022ae[] = "ASM atomic result: %u\n";
char DAT_001022ca[] = "ASM privileged result: %u\n";
int global_var = 0;

/* Helper function to replace builtin_strncpy */
char *builtin_strncpy(char *dest, const char *src, size_t n)
{
    size_t i;
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for (; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
 (*(code *)(undefined *)0x0)(0);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001011a0 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 local_c;
 
 if (param_1 < 0x401) {
 local_c = 0x200;
 }
 else {
 local_c = 0x40;
 }
 return local_c;
}



/* Function: call_macro_constants @ 001011d0 */

undefined4 call_macro_constants(void)

{
 return param_macro_constants(0x800);
}



/* Function: param_macro_functions @ 001011e0 */

int param_macro_functions(int param_1,int param_2)

{
 int local_18;
 
 local_18 = param_2;
 if (param_2 < param_1) {
 local_18 = param_1;
 }
 return param_1 * param_1 + local_18;
}



/* Function: call_macro_functions @ 00101220 */

undefined4 call_macro_functions(void)

{
 return param_macro_functions(5,3);
}



/* Function: param_conditional_compile @ 00101240 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00101260 */

undefined4 call_conditional_compile(void)

{
 return param_conditional_compile(10);
}



/* Function: param_multi_branch_compile @ 00101270 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00101290 */

undefined4 call_multi_branch_compile(void)

{
 return param_multi_branch_compile(10);
}



/* Function: param_macro_recursion @ 001012a0 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 001012e0 */

undefined4 call_macro_recursion(void)

{
 return param_macro_recursion(100);
}



/* Function: param_stringize @ 001012f0 */

long param_stringize(int param_1)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3;
}



/* Function: call_stringize @ 00101360 */

undefined4 call_stringize(void)

{
 return param_stringize(0);
}



/* Function: my_func @ 00101370 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00101380 */

int param_token_paste(int param_1)

{
 int iVar1;
 
 iVar1 = my_func(param_1);
 return param_1 + 5 + iVar1;
}



/* Function: call_token_paste @ 001013c0 */

undefined4 call_token_paste(void)

{
 return param_token_paste(5);
}



/* Function: param_variadic_macro @ 001013d0 */

int param_variadic_macro(uint param_1,uint param_2,uint param_3)

{
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,(ulong)param_2,(ulong)param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00101410 */

undefined4 call_variadic_macro(void)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 00101430 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00101460 */

undefined4 call_macro_override(void)

{
 return param_macro_override(5);
}



/* Function: param_include_guard @ 00101470 */

void param_include_guard(void)

{
 header_func(5);
 return;
}



/* Function: header_func @ 00101480 */

int header_func(int param_1)

{
 return param_1 * 100;
}



/* Function: call_include_guard @ 00101490 */

undefined4 call_include_guard(void)

{
 return header_func(5);
}



/* Function: param_builtin_macros @ 001014a0 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:44");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00101530 */

undefined4 call_builtin_macros(void)

{
 return param_builtin_macros(100);
}



/* Function: test_preprocessing_features @ 00101540 */

void test_preprocessing_features(void)

{
 uint uVar1;
 
 printf(&DAT_00102095);
 uVar1 = call_macro_constants();
 printf(&DAT_001020bd,(ulong)uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_001020d8,(ulong)uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_001020f3,(ulong)uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_0010210e,(ulong)uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_0010212d,(ulong)uVar1);
 uVar1 = call_stringize();
 printf(&DAT_00102149,(ulong)uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_00102173,(ulong)uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_0010218e,(ulong)uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_001021a9,(ulong)uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_001021c4,(ulong)uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_001021e0,(ulong)uVar1);
 return;
}



/* Function: param_asm_basic @ 00101640 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00101660 */

undefined4 call_asm_basic(void)

{
 return param_asm_basic(5);
}



/* Function: param_asm_clobber @ 00101670 */

int param_asm_clobber(long param_1,int param_2)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (ulong)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}



/* Function: call_asm_clobber @ 001016b0 */

undefined4 call_asm_clobber(void)

{
 undefined8 local_28;
 undefined8 local_20;
 undefined4 local_18;
 
 local_28 = 0x200000001;
 local_20 = 0x400000003;
 local_18 = 5;
 return param_asm_clobber((long)&local_28,5);
}



/* Function: param_asm_multi_insn @ 001016f0 */

void param_asm_multi_insn(undefined1 *param_1,undefined1 *param_2,long param_3)

{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}



/* Function: call_asm_multi_insn @ 00101740 */

uint call_asm_multi_insn(void)

{
 uint uVar1;
 char local_38 [4];
 char local_34;
 char local_12 [10];
 
 builtin_strncpy(local_12,"Hello ASM",10);
 memset(local_38,0,0x20);
 param_asm_multi_insn(local_38,local_12,9);
 uVar1 = 0xffffffff;
 if (local_38[0] == 'H' && local_34 == 'o') {
 uVar1 = 0x2a;
 }
 return uVar1;
}



/* Function: param_asm_simd @ 001017c0 */

undefined8 param_asm_simd(int *param_1,int *param_2,int *param_3)

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



/* Function: param_simd_intrinsics @ 001017f0 */

undefined8 param_simd_intrinsics(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
 int local_48;
 int iStack_44;
 int iStack_40;
 int iStack_3c;
 int local_38;
 int iStack_34;
 int iStack_30;
 int iStack_2c;
 
 local_38 = (int)*param_1;
 iStack_34 = (int)((ulong)*param_1 >> 0x20);
 iStack_30 = (int)param_1[1];
 iStack_2c = (int)((ulong)param_1[1] >> 0x20);
 local_48 = (int)*param_2;
 iStack_44 = (int)((ulong)*param_2 >> 0x20);
 iStack_40 = (int)param_2[1];
 iStack_3c = (int)((ulong)param_2[1] >> 0x20);
 *param_3 = CONCAT44(iStack_34 + iStack_44,local_38 + local_48);
 param_3[1] = CONCAT44(iStack_2c + iStack_3c,iStack_30 + iStack_40);
 return 0;
}



/* Function: call_asm_simd @ 00101890 */

int call_asm_simd(void)

{
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 undefined8 local_28;
 undefined8 local_20;
 undefined8 local_18;
 undefined8 local_10;
 
 local_18 = 0x200000001;
 local_10 = 0x400000003;
 local_28 = 0x600000005;
 local_20 = 0x800000007;
 param_asm_simd(&local_18,&local_28,&local_38);
 return local_38 + local_34 + local_30 + local_2c;
}



/* Function: param_asm_atomic @ 001018f0 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101920 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00101950 */

int call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}



/* Function: param_dynamic_code @ 00101980 */

undefined4 param_dynamic_code(undefined4 param_1)

{
 size_t __len;
 code *__addr;
 undefined4 local_c;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (code *)0xffffffffffffffff) {
 local_c = 0xffffffff;
 }
 else {
 *(undefined4 *)__addr = 0xc083f889;
 *(undefined2 *)(__addr + 4) = 0xc305;
 local_c = (*__addr)(param_1);
 munmap(__addr,__len);
 }
 return local_c;
}



/* Function: param_memory_protection @ 00101a30 */

undefined4 param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 local_c;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffffffffffff) {
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



/* Function: param_clobber_importance @ 00101b40 */

int param_clobber_importance(int param_1,int param_2)

{
 return param_1 * 2 + param_2 * 2;
}



/* Function: call_asm_privileged @ 00101b80 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int local_c;
 
 local_c = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_c == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_c = 0x4d;
 }
 return local_c;
}



/* Function: param_memory_clobber_demo @ 00101bf0 */

int param_memory_clobber_demo(int param_1)

{
 return param_1 + 0x32;
}



/* Function: test_asm_features @ 00101c20 */

void test_asm_features(void)

{
 uint uVar1;
 
 printf(&DAT_00102213);
 uVar1 = call_asm_basic();
 printf(&DAT_0010223e,(ulong)uVar1);
 uVar1 = call_asm_clobber();
 printf(&DAT_0010225a,(ulong)uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00102276,(ulong)uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_00102292,(ulong)uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_001022ae,(ulong)uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_001022ca,(ulong)uVar1);
 return;
}



/* Function: main @ 00101cc0 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 51 */
