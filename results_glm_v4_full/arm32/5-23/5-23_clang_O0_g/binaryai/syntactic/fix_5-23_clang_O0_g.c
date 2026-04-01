#include <stdbool.h>

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

// Decompiled by BinaryAI
// SHA256: 5f0b33b1c2e68c01bebf4851856685b611312236fefbcf10912a34fc3c4afe46

// Forward declarations
int main(void);

// Global variables
extern int global_var;

// String constant definitions
static char DAT_00011551[] = "call_macro_constants: %u\n";
static char DAT_00011579[] = "call_macro_functions: %u\n";
static char DAT_00011594[] = "call_conditional_compile: %u\n";
static char DAT_000115af[] = "call_multi_branch_compile: %u\n";
static char DAT_000115ca[] = "call_macro_recursion: %u\n";
static char DAT_000115e9[] = "call_stringize: %u\n";
static char DAT_00011605[] = "call_token_paste: %u\n";
static char DAT_0001162f[] = "call_variadic_macro: %u\n";
static char DAT_0001164a[] = "call_macro_override: %u\n";
static char DAT_00011665[] = "call_macro_override: %u\n";
static char DAT_00011680[] = "call_include_guard: %u\n";
static char DAT_0001169c[] = "call_builtin_macros: %u\n";
static char DAT_000116cf[] = "Testing ASM features:\n";
static char DAT_000116fa[] = "call_asm_basic: %u\n";
static char DAT_00011716[] = "call_asm_clobber: %u\n";
static char DAT_00011732[] = "call_asm_multi_insn: %u\n";
static char DAT_0001174e[] = "call_asm_simd: %u\n";
static char DAT_0001176a[] = "call_asm_atomic: %u\n";
static char DAT_00011786[] = "call_asm_privileged: %u\n";

int global_var = 0;



// Function: <EXTERNAL>::__libc_start_main @ 0x10500
extern void __libc_start_main(int (*main)(), int argc, char **argv, void (*init)(), void (*fini)(), void (*rtld_fini)());

// Function: <EXTERNAL>::__cxa_finalize @ 0x1050c
extern void __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::printf @ 0x10518
extern int printf(const char *__format, ...);

// Function: <EXTERNAL>::mprotect @ 0x10524
extern int mprotect(void *__addr, size_t __len, int __prot);

// Function: <EXTERNAL>::memcpy @ 0x10530
extern void *memcpy(void *__dest, const void *__src, size_t __n);

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x1053c
extern int __atomic_fetch_add_4(unsigned int *ptr, int val, int memorder);

// Function: <EXTERNAL>::sysconf @ 0x10548
extern long sysconf(int __name);

// Function: <EXTERNAL>::strlen @ 0x10560
extern size_t strlen(const char *__s);

// Function: <EXTERNAL>::mmap @ 0x1056c
extern void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);

// Function: <EXTERNAL>::munmap @ 0x10578
extern int munmap(void *__addr, size_t __len);

// Function: <EXTERNAL>::abort @ 0x10584
extern void abort(void);











// Function: param_macro_constants @ 0x106f8
unsigned int param_macro_constants(int param_1)
{
 unsigned int local_4;
 if (param_1 < 0x401) {
 local_4 = 0x200;
 }
 else {
 local_4 = 0x40;
 }
 return local_4;
}

// Function: call_macro_constants @ 0x10734
unsigned int call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x1074c
int param_macro_functions(int param_1,int param_2)
{
 int local_10;
 local_10 = param_2;
 if (param_2 < param_1) {
 local_10 = param_1;
 }
 return param_1 * param_1 + local_10;
}

// Function: call_macro_functions @ 0x107a0
unsigned int call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x107bc
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x107e8
unsigned int call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x10800
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x10824
unsigned int call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x1083c
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10854
unsigned int call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x1086c
int param_stringize(void)
{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3;
}

// Function: call_stringize @ 0x108f0
unsigned int call_stringize(void)
{
 return param_stringize();
}

// Function: my_func @ 0x10908
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x10924
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}

// Function: call_token_paste @ 0x1096c
unsigned int call_token_paste(void)
{
 return param_token_paste(5);
}

// Function: param_variadic_macro @ 0x10984
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x109dc
unsigned int call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x109fc
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x10a30
unsigned int call_macro_override(void)
{
 return param_macro_override(5);
}

// Function: param_include_guard @ 0x10a48
int param_include_guard(void)
{
 header_func(5);
 return 0;
}

// Function: header_func @ 0x10a60
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: call_include_guard @ 0x10a7c
unsigned int call_include_guard(void)
{
 return (unsigned int)param_include_guard();
}

// Function: param_builtin_macros @ 0x10a90
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:13");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x10b64
unsigned int call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x10b7c
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00011551);
 uVar1 = call_macro_constants();
 printf(&DAT_00011579,uVar1);
 uVar1 = call_macro_functions();
 printf(&DAT_00011594,uVar1);
 uVar1 = call_conditional_compile();
 printf(&DAT_000115af,uVar1);
 uVar1 = call_multi_branch_compile();
 printf(&DAT_000115ca,uVar1);
 uVar1 = call_macro_recursion();
 printf(&DAT_000115e9,uVar1);
 uVar1 = call_stringize();
 printf(&DAT_00011605,uVar1);
 uVar1 = call_token_paste();
 printf(&DAT_0001162f,uVar1);
 uVar1 = call_variadic_macro();
 printf(&DAT_0001164a,uVar1);
 uVar1 = call_macro_override();
 printf(&DAT_00011665,uVar1);
 uVar1 = call_include_guard();
 printf(&DAT_00011680,uVar1);
 uVar1 = call_builtin_macros();
 printf(&DAT_0001169c,uVar1);
 return;
}

// Function: param_asm_basic @ 0x10ca4
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x10cc4
unsigned int call_asm_basic(void)
{
 param_asm_basic(5);
 return 0;
}

// Function: param_asm_clobber @ 0x10cdc
int param_asm_clobber(int param_1,int param_2)
{
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_1 + local_10 * 4);
 }
 return local_c;
}

// Function: call_asm_clobber @ 0x10d44
unsigned int call_asm_clobber(void)
{
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 unsigned unsigned uStack_14;
 local_24 = 1;
 uStack_20 = 2;
 uStack_1c = 3;
 uStack_18 = 4;
 uStack_14 = 5;
 param_asm_clobber(&local_24,5);
 return 0;
}

// Function: param_asm_multi_insn @ 0x10d80
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x10db4
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 bool bVar2;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned short local_c;
 local_c = 0x4d;
 local_10 = 0x5341206f;
 local_14 = 0x6c6c6548;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30 = 0;
 local_34 = 0;
 param_asm_multi_insn(&local_34,&local_14,9);
 bVar2 = false;
 if ((char)local_34 == 'H') {
 bVar2 = (char)local_30 == 'o';
 }
 uVar1 = 0xffffffff;
 if (bVar2) {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x10e64
void param_asm_simd(int *param_1,int *param_2,int *param_3)
{
 int local_10;
 for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
 *(int *)(param_3 + local_10 * 4) =
 *(int *)(param_1 + local_10 * 4) + *(int *)(param_2 + local_10 * 4);
 }
 return;
}

// Function: param_simd_intrinsics @ 0x10ed0
void param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 int local_10;
 for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
 *(int *)(param_3 + local_10 * 4) =
 *(int *)(param_1 + local_10 * 4) + *(int *)(param_2 + local_10 * 4);
 }
 return;
}

// Function: call_asm_simd @ 0x10f3c
int call_asm_simd(void)
{
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 local_18 = 1;
 local_14 = 2;
 local_10 = 3;
 local_c = 4;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 local_28 = 5;
 param_asm_simd(&local_18,&local_28,&local_38);
 return local_38 + local_34 + local_30 + local_2c;
}

// Function: param_asm_atomic @ 0x10fe8
int param_asm_atomic(unsigned int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x11038
int param_atomic_c11(unsigned int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11080
int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 return local_c + iVar1;
}

// Function: param_dynamic_code @ 0x110bc
int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 int local_c;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 local_c = -1;
 }
 else {
 local_c = param_1 + 5;
 munmap(__addr,__len);
 }
 return local_c;
}

// Function: param_memory_protection @ 0x11150
unsigned int param_memory_protection(void)
{
 size_t __len;
 unsigned int *__addr;
 int iVar1;
 unsigned int local_c;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffff) {
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

// Function: param_clobber_importance @ 0x11268
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x1128c
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

// Function: param_memory_clobber_demo @ 0x11314
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x11344
void test_asm_features(void)
{
 unsigned int uVar1;
 printf(&DAT_000116cf);
 uVar1 = call_asm_basic();
 printf(&DAT_000116fa,uVar1);
 uVar1 = call_asm_clobber();
 printf(&DAT_00011716,uVar1);
 uVar1 = call_asm_multi_insn();
 printf(&DAT_00011732,uVar1);
 uVar1 = call_asm_simd();
 printf(&DAT_0001174e,uVar1);
 uVar1 = call_asm_atomic();
 printf(&DAT_0001176a,uVar1);
 uVar1 = call_asm_privileged();
 printf(&DAT_00011786,uVar1);
 return;
}

// Function: main @ 0x113f4
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



