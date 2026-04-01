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
extern void __gmon_start__(void);
extern void call_weak_fn(void);
extern void *stack0x00000004;
extern void *__dso_handle;

/* Data variable declarations */
extern char DAT_0001122f;
extern char DAT_0001103b;
extern char DAT_00011056;
extern char DAT_00011071;
extern char DAT_0001108c;
extern char DAT_000110ab;
extern char DAT_000110c7;
extern char DAT_000110f1;
extern char DAT_0001110c;
extern char DAT_00011127;
extern char DAT_00011142;
extern char DAT_0001115e;
extern char DAT_00011256;
extern char DAT_00011187;
extern char DAT_000111a3;
extern char DAT_000111bf;
extern char DAT_000111db;
extern char DAT_000111f7;
extern char DAT_00011213;

/* Variable definitions */
char completed_0 = 0;
int global_var = 0;
int DAT_00011290[4] = {1, 2, 3, 4};
int DAT_00011280[4] = {5, 6, 7, 8};

// Decompiled by BinaryAI
// SHA256: 8105207365e8972aee2869e512c0443a6cb5aa6dcffc588c6d0d5441f550c084

// Function: _init @ 0x104e0
static int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10500
int __libc_start_main(int (*main)(),int argc,char **argv,void (*init)(),void (*fini)(),void (*rtld_fini)())
{
 return __libc_start_main(main,argc,argv,init,fini,rtld_fini);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1050c
void __cxa_finalize(void *dso_handle)
{
 __cxa_finalize(dso_handle);
 return;
}

// Function: <EXTERNAL>::printf @ 0x10518
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
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
int __atomic_fetch_add_4(void *ptr,int val,int memorder)
{
 return __atomic_fetch_add_4(ptr,val,memorder);
}

// Function: <EXTERNAL>::sysconf @ 0x10548
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::puts @ 0x10554
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::mmap @ 0x1056c
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
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
}

// Function: _start @ 0x10590
static void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x105d4
void call_weak_fn(void)
{
 __gmon_start__;
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
 "Jan 15 2026","03:01:15");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x10894
unsigned int call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:15");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x10900
void test_preprocessing_features(void)
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
 "Jan 15 2026","03:01:15");
 printf(&DAT_0001115e,0x17e);
 return;
}

// Function: param_asm_basic @ 0x10a74
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x10a7c
unsigned int call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x10a84
int param_asm_clobber(int *param_1,int param_2)
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
unsigned int call_asm_clobber(void)
{
 return 0xf;
}

// Function: param_asm_multi_insn @ 0x10ab8
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x10ac8
unsigned int call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x10ad0
unsigned int param_asm_simd(int param_1,int param_2,int param_3)
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
unsigned int param_simd_intrinsics(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = 0;
 do {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}

// Function: call_asm_simd @ 0x10b30
int call_asm_simd(void)
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
int param_asm_atomic(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x10bac
int param_atomic_c11(unsigned int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __atomic_fetch_add_4(param_1,param_2,5);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x10bc8
int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 local_c = 10;
 iVar1 = __atomic_fetch_add_4(&local_c,5,5);
 return iVar1 + local_c + 5;
}

// Function: param_dynamic_code @ 0x10c00
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

// Function: param_memory_protection @ 0x10c60
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

// Function: param_clobber_importance @ 0x10d0c
int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x10d18
unsigned int call_asm_privileged(void)
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
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10da4
void test_asm_features(void)
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

// Function: _fini @ 0x10f24
static void _fini(void)
{
 return;
}

