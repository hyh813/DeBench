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

/* Forward declarations */
extern int main(void);
void deregister_tm_clones(void);

/* Data definitions */
char DAT_0001108f[] = "param_macro_constants: %d\n";
char DAT_000110aa[] = "param_macro_functions: %d\n";
char DAT_000110c5[] = "param_multi_branch_compile: %d\n";
char DAT_000110e0[] = "call_multi_branch_compile: %d\n";
char DAT_000110ff[] = "param_macro_recursion: %d\n";
char DAT_0001111b[] = "param_stringize: %d\n";
char DAT_00011145[] = "param_token_paste: %d\n";
char DAT_00011160[] = "param_variadic_macro: %d\n";
char DAT_0001117b[] = "param_macro_override: %d\n";
char DAT_00011196[] = "param_include_guard: %d\n";
char DAT_000111b2[] = "call_builtin_macros: %d\n";
char DAT_00011283[] = "=== Testing Preprocessing Features ===";
char DAT_000112aa[] = "=== Testing ASM Features ===";
char DAT_000111db[] = "call_asm_basic: %d\n";
char DAT_000111f7[] = "param_asm_basic: %d\n";
char DAT_00011213[] = "call_asm_multi_insn: %d\n";
char DAT_0001122f[] = "param_asm_simd: %d\n";
char DAT_0001124b[] = "call_asm_atomic: %d\n";
char DAT_00011267[] = "call_asm_privileged: %d\n";
char completed_0 = 0;
extern void *__dso_handle;
int global_var = 10;

/* Stack reference */
extern unsigned long stack0x00000004;

// Decompiled by BinaryAI
// SHA256: 40864288b2f1bd7fd704bf76f6f382d162754635fb3908b923cee4af08a134ff



// Function: <EXTERNAL>::__libc_start_main @ 0x10500
int __libc_start_main(int (*main)(void), int argc, char **argv, 
                      int (*init)(void), void (*fini)(void), void *rtld_fini) {
  return 0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1050c
void __cxa_finalize(void *);

// Function: <EXTERNAL>::printf @ 0x10518
int printf(char *__format,...);

// Function: <EXTERNAL>::mprotect @ 0x10524
int mprotect(void *__addr,size_t __len,int __prot);

// Function: <EXTERNAL>::memcpy @ 0x10530
void * memcpy(void *__dest,void *__src,size_t __n);

// Function: <EXTERNAL>::__atomic_fetch_add_4 @ 0x1053c
int __atomic_fetch_add_4(void *ptr, int val, int memorder);

// Function: <EXTERNAL>::sysconf @ 0x10548
long sysconf(int __name);

// Function: <EXTERNAL>::puts @ 0x10554
int puts(char *__s);

// Function: <EXTERNAL>::mmap @ 0x1056c
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset);

// Function: <EXTERNAL>::munmap @ 0x10578
int munmap(void *__addr,size_t __len);

// Function: <EXTERNAL>::abort @ 0x10584
void abort(void);

// Function: deregister_tm_clones
void deregister_tm_clones(void) {
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
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1070c
unsigned int call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x10714
int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x10728
unsigned int call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x10730
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1073c
unsigned int call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x10744
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x10754
unsigned int call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x10760
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10768
unsigned int call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x10770
unsigned int param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x10778
unsigned int call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x10780
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x1078c
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1079c
unsigned int call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x107a4
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x107d4
unsigned int call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x10800
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1080c
unsigned int call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x10814
unsigned int param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x1081c
unsigned int call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x10824
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:22");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x10894
unsigned int call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:22");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x10900
void test_preprocessing_features(void)
{
 puts(&DAT_00011283);
 printf(&DAT_0001108f,0x40);
 printf(&DAT_000110aa,0x1e);
 printf(&DAT_000110c5,0x20);
 printf(&DAT_000110e0,0xdf22);
 printf(&DAT_000110ff,0x74);
 printf(&DAT_0001111b,0x13);
 printf(&DAT_00011145,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_00011160,0x3c);
 printf(&DAT_0001117b,0x10);
 printf(&DAT_00011196,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:22");
 printf(&DAT_000111b2,0x17e);
 return;
}

// Function: param_asm_basic @ 0x10a70
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x10a78
unsigned int call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x10a80
int param_asm_clobber(int *param_1,int param_2)
{
 int iVar1;
 if (0 < param_2) {
 iVar1 = 0;
 do {
 param_2 = param_2 + -1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (param_2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_asm_clobber @ 0x10aac
unsigned int call_asm_clobber(void)
{
 return 0xf;
}

// Function: call_asm_multi_insn @ 0x10ab8
unsigned int call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x10ac0
unsigned int param_asm_simd(int *param_1,int *param_2,int *param_3)
{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}

// Function: param_simd_intrinsics @ 0x10b08
unsigned int param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}

// Function: call_asm_simd @ 0x10b50
unsigned int call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x10b58
int param_asm_atomic(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x10b74
int param_atomic_c11(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x10b90
int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 return iVar1 + local_c + 5;
}

// Function: param_dynamic_code @ 0x10bc8
int param_dynamic_code(int param_1)
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

// Function: param_memory_protection @ 0x10c28
unsigned int param_memory_protection(void)
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

// Function: param_clobber_importance @ 0x10cd4
int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x10ce0
unsigned int call_asm_privileged(void)
{
 size_t sVar1;
 void *__addr;
 int *__addr_00;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 unsigned int uVar5;
 int iVar6;
 sVar1 = sysconf(0x1e);
 iVar4 = -1;
 __addr = mmap((void *)0x0,sVar1,7,0x22,-1,0);
 uVar5 = 0xffffffff;
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,sVar1);
 uVar5 = 0xf;
 }
 sVar1 = sysconf(0x1e);
 __addr_00 = (int *)mmap((void *)0x0,sVar1,3,0x22,-1,0);
 if (__addr_00 != (int *)0xffffffff) {
 *__addr_00 = 0x2a;
 iVar2 = mprotect(__addr_00,sVar1,1);
 iVar4 = -2;
 if (iVar2 == 0) {
 iVar6 = *__addr_00;
 iVar2 = mprotect(__addr_00,sVar1,3);
 iVar4 = -3;
 if (iVar2 == 0) {
 *__addr_00 = 100;
 iVar4 = iVar6;
 }
 }
 munmap(__addr_00,sVar1);
 }
 uVar3 = uVar5;
 if (iVar4 == 0x2a) {
 uVar3 = 0x4d;
 }
 if (__addr == (void *)0xffffffff) {
 uVar3 = uVar5;
 }
 return uVar3;
}

// Function: param_memory_clobber_demo @ 0x10ddc
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10df0
void test_asm_features(void)
{
 int iVar1;
 unsigned int uVar2;
 int local_c;
 puts(&DAT_000112aa);
 printf(&DAT_000111db,0xf);
 printf(&DAT_000111f7,0xf);
 printf(&DAT_00011213,0x2a);
 printf(&DAT_0001122f,0x24);
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 printf(&DAT_0001124b,iVar1 + local_c + 5);
 uVar2 = call_asm_privileged();
 printf(&DAT_00011267,uVar2);
 return;
}

// Function: main @ 0x10eb0
int main(void)
{
 int iVar1;
 unsigned int uVar2;
 int local_c;
 test_preprocessing_features();
 puts(&DAT_000112aa);
 printf(&DAT_000111db,0xf);
 printf(&DAT_000111f7,0xf);
 printf(&DAT_00011213,0x2a);
 printf(&DAT_0001122f,0x24);
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 printf(&DAT_0001124b,iVar1 + local_c + 5);
 uVar2 = call_asm_privileged();
 printf(&DAT_00011267,uVar2);
 return 0;
}



