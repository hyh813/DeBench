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

// External declarations
// Note: Made static to avoid multiple definition linker errors
static char completed_0 = 0;
// Note: __dso_handle MUST be global (not static) - used by dynamic linker
void *__dso_handle __attribute__((visibility("default"))) = 0;
// Note: stack0x00000004 is actually a function parameter, not a global
static int global_var = 0;
// Data symbols - defined as string constants
// Note: Made static to avoid multiple definition linker errors
static char DAT_0001103b[] = "macro param_1=%d\n";
static char DAT_00011056[] = "macro param_1=%d\n";
static char DAT_00011071[] = "call_macro_constants=%d\n";
static char DAT_0001108c[] = "call_multi_branch_compile=%d\n";
static char DAT_000110ab[] = "call_macro_recursion=%d\n";
static char DAT_000110c7[] = "call_stringize=%d\n";
static char DAT_000110f1[] = "call_token_paste=%d\n";
static char DAT_0001110c[] = "param_variadic_macro result=%d\n";
static char DAT_00011127[] = "call_macro_override=%d\n";
static char DAT_00011142[] = "call_include_guard=%d\n";
static char DAT_0001115e[] = "call_builtin_macros=%d\n";
static char DAT_00011187[] = "call_asm_basic=%d\n";
static char DAT_000111a3[] = "call_asm_clobber=%d\n";
static char DAT_000111bf[] = "call_asm_multi_insn=%d\n";
static char DAT_000111db[] = "call_asm_simd=%d\n";
static char DAT_000111f7[] = "call_asm_atomic=%d\n";
static char DAT_00011213[] = "call_asm_privileged=%d\n";
static char DAT_0001122f[] = "Testing preprocessing features:\n";
static char DAT_00011256[] = "Testing asm features:\n";
static int DAT_00011280[] = {1, 2, 3, 4};
static int DAT_00011290[] = {5, 6, 7, 8};

// Decompiled by BinaryAI
// SHA256: bc5d32bcc6243d3ec01ee0292fd00dc01422f2db3d4ec9a5377174e7f610dd0d



// Function: <EXTERNAL>::__libc_start_main @ 0x10500
// Note: These are libc functions - declarations only
extern void __libc_start_main(void *main, void *stack, void *dl, void *rtld, void *stack_end, int argc, ...);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1050c
extern void __cxa_finalize(void *);

// Function: <EXTERNAL>::printf @ 0x10518
extern int printf(char *format, ...);

// Function: <EXTERNAL>::mprotect @ 0x10524
extern int mprotect(void *__addr,size_t __len,int __prot);

// Function: <EXTERNAL>::memcpy @ 0x10530
extern void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x1053c
extern int __atomic_fetch_add_4(void *, int, int);

// Function: <EXTERNAL>::sysconf @ 0x10548
extern long sysconf(int __name);

// Function: <EXTERNAL>::puts @ 0x10554
extern int puts(char *__s);

// Function: <EXTERNAL>::mmap @ 0x1056c
extern void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset);

// Function: <EXTERNAL>::munmap @ 0x10578
extern int munmap(void *__addr,size_t __len);

// Function: <EXTERNAL>::abort @ 0x10584
extern void abort(void);



// Function: param_macro_constants @ 0x106f8
// Note: Made static to avoid multiple definition linker errors
static unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1070c
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x10714
// Note: Made static to avoid multiple definition linker errors
static int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x10728
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x10730
// Note: Made static to avoid multiple definition linker errors
static int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1073c
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x10744
// Note: Made static to avoid multiple definition linker errors
static int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x10754
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x10760
// Note: Made static to avoid multiple definition linker errors
static int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10768
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x10770
// Note: Made static to avoid multiple definition linker errors
static unsigned int param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x10778
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x10780
// Note: Made static to avoid multiple definition linker errors
static int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x1078c
// Note: Made static to avoid multiple definition linker errors
static int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1079c
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x107a4
// Note: Made static to avoid multiple definition linker errors
static int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x107d4
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x10800
// Note: Made static to avoid multiple definition linker errors
static int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1080c
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x10814
// Note: Made static to avoid multiple definition linker errors
static unsigned int param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x1081c
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x10824
// Note: Made static to avoid multiple definition linker errors
static int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:16");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x10894
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:16");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x10900
// Note: Made static to avoid multiple definition linker errors
static void test_preprocessing_features(void)
{
 puts(&DAT_0001122f);
 printf(&DAT_0001103b,0x40);
 printf(&DAT_00011056,0x1e);
 printf(&DAT_00011071,0x20);
 printf(&DAT_0001108c,0xdf22);
 printf(&DAT_000110ab,0x74);
 printf(&DAT_000110c7,0x13);
 printf(&DAT_000110f1,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_0001110c,0x3c);
 printf(&DAT_00011127,0x10);
 printf(&DAT_00011142,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:16");
 printf(&DAT_0001115e,0x17e);
 return;
}

// Function: param_asm_basic @ 0x10a74
// Note: Made static to avoid multiple definition linker errors
static int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x10a7c
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x10a84
// Note: Made static to avoid multiple definition linker errors
static int param_asm_clobber(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 iVar1 = *param_1 + iVar1;
 param_2 = param_2 + -1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_asm_clobber @ 0x10ab0
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_asm_clobber(void)
{
 return 0xf;
}

// Function: param_asm_multi_insn @ 0x10ab8
// Note: Made static to avoid multiple definition linker errors
static void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x10ac8
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x10ad0
// Note: This is the actual implementation - marked static to avoid multiple definition
static unsigned int param_asm_simd(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = 0;
 do {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}

// Function: param_simd_intrinsics @ 0x10b00
// Note: Wrapper that calls param_asm_simd - static to avoid multiple definition
static unsigned int param_simd_intrinsics(int param_1,int param_2,int param_3)
{
 return param_asm_simd(param_1, param_2, param_3);
}

// Function: call_asm_simd @ 0x10b30
// Note: static to avoid multiple definition
static unsigned int call_asm_simd(void)
{
 int iVar1;
 int local_18 [4];
 iVar1 = 0;
 do {
 local_18[iVar1] = DAT_00011290[iVar1] + DAT_00011280[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return local_18[1] + local_18[0] + local_18[2] + local_18[3];
}

// Function: param_asm_atomic @ 0x10b90
// Note: Implementation of atomic fetch-and-add - static to avoid linker issues
static int param_asm_atomic(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4((void *)param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x10bc8
// Note: This is an external function that wraps param_asm_atomic
static int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 return iVar1 + local_c + 5;
}

// Function: param_dynamic_code @ 0x10c00
// Note: Made static to avoid multiple definition linker errors
static int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 int iVar1;
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 iVar1 = param_1 + 5;
 }
 return iVar1;
}

// Function: param_memory_protection @ 0x10c60
// Note: Made static to avoid multiple definition linker errors
static unsigned int param_memory_protection(void)
{
 size_t __len;
 unsigned int *__addr;
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 uVar2 = 0xfffffffe;
 if (iVar1 == 0) {
 uVar3 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 uVar2 = 0xfffffffd;
 if (iVar1 == 0) {
 *__addr = 100;
 uVar2 = uVar3;
 }
 }
 munmap(__addr,__len);
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x10d0c
// Note: Made static to avoid multiple definition linker errors
static int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x10d18
// Note: Made static to avoid multiple definition linker errors
static unsigned int call_asm_privileged(void)
{
 size_t __len;
 void *__addr;
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 uVar3 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = uVar3;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: param_memory_clobber_demo @ 0x10d90
// Note: Made static to avoid multiple definition linker errors
static int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10da4
// Note: Made static to avoid multiple definition linker errors
static void test_asm_features(void)
{
 int iVar1;
 size_t __len;
 void *__addr;
 unsigned int uVar2;
 unsigned int uVar3;
 int local_20 [4];
 puts(&DAT_00011256);
 printf(&DAT_00011187,0xf);
 printf(&DAT_000111a3,0xf);
 printf(&DAT_000111bf,0x2a);
 iVar1 = 0;
 do {
 local_20[iVar1] = DAT_00011290[iVar1] + DAT_00011280[iVar1];
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 printf(&DAT_000111db,local_20[1] + local_20[0] + local_20[2] + local_20[3]);
 local_20[0] = 10;
 iVar1 = __atomic_fetch_add_4(local_20,5,5);
 printf(&DAT_000111f7,iVar1 + local_20[0] + 5);
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 uVar3 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = uVar3;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar3;
 }
 printf(&DAT_00011213,uVar2);
 return;
}

// Function: main @ 0x10f0c
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



