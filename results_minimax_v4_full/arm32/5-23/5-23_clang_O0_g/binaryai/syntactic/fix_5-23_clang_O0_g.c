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
typedef int bool;
#define true 1
#define false 0

// Global variables typically provided by linker
char completed_0 = 0;
void *__dso_handle = 0;
void *stack0x00000004 = 0;
int global_var = 0;

// External function declarations
extern int main(void);

// String literals from .rodata section
const char DAT_00011551[] = "Testing preprocessing features:\n";
const char DAT_00011579[] = "Macro constants: %u\n";
const char DAT_00011594[] = "Macro functions: %u\n";
const char DAT_000115af[] = "Conditional compile: %u\n";
const char DAT_000115ca[] = "Multi-branch compile: %u\n";
const char DAT_000115e9[] = "Macro recursion: %u\n";
const char DAT_00011605[] = "Stringize: %u\n";
const char DAT_0001162f[] = "Token paste: %u\n";
const char DAT_0001164a[] = "Variadic macro: %u\n";
const char DAT_00011665[] = "Macro override: %u\n";
const char DAT_00011680[] = "Include guard: %u\n";
const char DAT_0001169c[] = "Builtin macros: %u\n";
const char DAT_000116cf[] = "\nTesting asm features:\n";
const char DAT_000116fa[] = "Asm basic: %u\n";
const char DAT_00011716[] = "Asm clobber: %u\n";
const char DAT_00011732[] = "Asm multi insn: %u\n";
const char DAT_0001174e[] = "Asm SIMD: %u\n";
const char DAT_0001176a[] = "Asm atomic: %u\n";
const char DAT_00011786[] = "Asm privileged: %u\n";

// External function declarations for weak symbols
extern void __gmon_start__(void);
extern void call_weak_fn(void);

// Decompiled by BinaryAI
// SHA256: 5f0b33b1c2e68c01bebf4851856685b611312236fefbcf10912a34fc3c4afe46

// Function: _init @ 0x104e0
void _init(void *ctx)
{
 call_weak_fn();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10500
int __libc_start_main(void *main_func, void *argc_ptr, void *stack, void *init, void *fini, void *rtld_fini)
{
 int iVar1;
 iVar1 = __libc_start_main(main_func, argc_ptr, stack, init, fini, rtld_fini);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1050c
void __cxa_finalize(void *param_1)
{
 __cxa_finalize(param_1);
 return;
}

// Function: <EXTERNAL>::printf @ 0x10518
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::mprotect @ 0x10524
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x10530
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x1053c
int __atomic_fetch_add_4(int *__ptr, int __val, int __order)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(__ptr,__val,__order);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x10548
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10560
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::mmap @ 0x1056c
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,long __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x10578
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x10584
void abort(void)
{
 abort();
 return;
}

// Function: _start @ 0x10590
void _start(unsigned int param_1,unsigned int param_2)
{
 (void)__libc_start_main(main,(void *)(int)param_2,(void *)&stack0x00000004,(void *)0,(void *)0,(void *)(int)param_1);
 abort();
}

// Function: call_weak_fn @ 0x105d4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x105f8
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1063c
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1068c
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

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
void call_macro_constants(void)
{
 param_macro_constants(0x800);
 return;
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
void call_macro_functions(void)
{
 param_macro_functions(5,3);
 return;
}

// Function: param_conditional_compile @ 0x107bc
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x107e8
void call_conditional_compile(void)
{
 param_conditional_compile(10);
 return;
}

// Function: param_multi_branch_compile @ 0x10800
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x10824
void call_multi_branch_compile(void)
{
 param_multi_branch_compile(10);
 return;
}

// Function: param_macro_recursion @ 0x1083c
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10854
void call_macro_recursion(void)
{
 param_macro_recursion(100);
 return;
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
void call_stringize(void)
{
 param_stringize();
 return;
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
void call_token_paste(void)
{
 param_token_paste(5);
 return;
}

// Function: param_variadic_macro @ 0x10984
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x109dc
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x109fc
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x10a30
void call_macro_override(void)
{
 param_macro_override(5);
 return;
}

// Function: param_include_guard @ 0x10a48
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: header_func @ 0x10a60
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: call_include_guard @ 0x10a7c
void call_include_guard(void)
{
 param_include_guard();
 return;
}

// Function: param_builtin_macros @ 0x10a90
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:13");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x10b64
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x10b7c
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 printf(&DAT_00011551);
 call_macro_constants();
 uVar1 = param_macro_constants(0x800);
 printf(&DAT_00011579,uVar1);
 call_macro_functions();
 uVar1 = param_macro_functions(5,3);
 printf(&DAT_00011594,uVar1);
 call_conditional_compile();
 uVar1 = param_conditional_compile(10);
 printf(&DAT_000115af,uVar1);
 call_multi_branch_compile();
 uVar1 = param_multi_branch_compile(10);
 printf(&DAT_000115ca,uVar1);
 call_macro_recursion();
 uVar1 = param_macro_recursion(100);
 printf(&DAT_000115e9,uVar1);
 call_stringize();
 uVar1 = param_stringize();
 printf(&DAT_00011605,uVar1);
 call_token_paste();
 uVar1 = param_token_paste(5);
 printf(&DAT_0001162f,uVar1);
 call_variadic_macro();
 uVar1 = param_variadic_macro(10,0x14,0x1e);
 printf(&DAT_0001164a,uVar1);
 call_macro_override();
 uVar1 = param_macro_override(5);
 printf(&DAT_00011665,uVar1);
 call_include_guard();
 uVar1 = header_func(5);
 printf(&DAT_00011680,uVar1);
 call_builtin_macros();
 uVar1 = param_builtin_macros(100);
 printf(&DAT_0001169c,uVar1);
 return;
}

// Function: param_asm_basic @ 0x10ca4
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x10cc4
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x10cdc
int param_asm_clobber(int *param_1, int param_2)
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
 int local_24;
 int uStack_20;
 int uStack_1c;
 int uStack_18;
 int uStack_14;
 local_24 = 1;
 uStack_20 = 2;
 uStack_1c = 3;
 uStack_18 = 4;
 uStack_14 = 5;
 return param_asm_clobber(&local_24,5);
}

// Function: param_asm_multi_insn @ 0x10d80
unsigned int param_asm_multi_insn(int *param_1, int *param_2, size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return 0;
}

// Function: call_asm_multi_insn @ 0x10db4
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 bool bVar2;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
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
unsigned int param_asm_simd(int *param_1, int *param_2, int *param_3)
{
 int local_10;
 for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
 param_3[local_10] = param_1[local_10] + param_2[local_10];
 }
 return (unsigned int)(param_3[0] + param_3[1] + param_3[2] + param_3[3]);
}

// Function: param_simd_intrinsics @ 0x10ed0
unsigned int param_simd_intrinsics(int param_1,int param_2,int param_3)
{
 int local_10;
 for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
 *(int *)(param_3 + local_10 * 4) =
 *(int *)(param_1 + local_10 * 4) + *(int *)(param_2 + local_10 * 4);
 }
 return 0;
}

// Function: call_asm_simd @ 0x10f3c
unsigned int call_asm_simd(void)
{
 unsigned int uVar1;
 int local_38;
 int local_34;
 int local_30;
 int local_2c;
 int local_28;
 int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 local_18 = 1;
 local_14 = 2;
 local_10 = 3;
 local_c = 4;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 local_28 = 5;
 local_38 = 0;
 local_34 = 0;
 local_30 = 0;
 local_2c = 0;
 uVar1 = param_asm_simd(&local_18,&local_28,&local_38);
 return (unsigned int)(local_38 + local_34 + local_30 + local_2c);
}

// Function: param_asm_atomic @ 0x10fe8
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x11038
int param_atomic_c11(unsigned int param_1,int param_2)
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
unsigned int call_asm_privileged(void)
{
 unsigned int uVar1;
 unsigned int uVar2;
 unsigned int local_c;
 local_c = param_dynamic_code(10);
 uVar1 = param_memory_protection();
 uVar2 = param_clobber_importance(3,7);
 if (((local_c == 0xf) && (uVar1 == 0x2a)) && (uVar2 == 0x14)) {
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

// Function: _fini @ 0x11424
void _fini(void)
{
 return;
}

