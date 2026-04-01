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

/* Additional type definitions */
typedef unsigned char byte;
typedef unsigned int uint;
typedef long __off_t;

/* Global variable declarations */
extern unsigned char __aarch64_have_lse_atomics;
extern char completed_0;
extern void *__dso_handle;

/* Data arrays */
static int DAT_00101478[4] = {4, 5, 6, 7};
static int DAT_00101468[4] = {1, 2, 3, 4};

/* Global variables */
int global_var;

/* Stack pointer for _start */
static unsigned long long stack0x00000008;

/* String constants */
static char DAT_00101417[] = "Testing Preprocessing Features";
static char DAT_00101223[] = "macro_constants: %d\n";
static char DAT_0010123e[] = "macro_functions: %d\n";
static char DAT_00101259[] = "conditional_compile: %d\n";
static char DAT_00101274[] = "multi_branch_compile: %d\n";
static char DAT_00101293[] = "macro_recursion: %d\n";
static char DAT_001012af[] = "stringize: %d\n";
static char DAT_001012d9[] = "token_paste: %d\n";
static char DAT_001012f4[] = "variadic_macro: %d\n";
static char DAT_0010130f[] = "macro_override: %d\n";
static char DAT_0010132a[] = "include_guard: %d\n";
static char DAT_00101346[] = "builtin_macros: %d\n";
static char DAT_0010143e[] = "Testing ASM Features";
static char DAT_0010136f[] = "asm_basic: %d\n";
static char DAT_0010138b[] = "asm_clobber: %d\n";
static char DAT_001013a7[] = "asm_multi_insn: %d\n";
static char DAT_001013c3[] = "asm_simd: %lu\n";
static char DAT_001013df[] = "asm_atomic: %lu\n";
static char DAT_001013fb[] = "asm_privileged: %lu\n";

// Decompiled by BinaryAI
// SHA256: 6752218e12841b837185410ed2c7fc39a715423873f81602e0e092c9cbe4be5c

/* Forward declarations */
void call_weak_fn(void);
int main(void);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
bool ExclusiveMonitorPass(int *param_1,int param_2);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);



// Function: FUN_001007a0 @ 0x1007a0
void FUN_001007a0(void)
{
 (*(void (**)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1007c0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return __dest;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1007d0
int __libc_start_main(int (*main)(void), unsigned long long, unsigned long long *, void (*)(), void (*)(), void *);

// Function: <EXTERNAL>::__cxa_finalize @ 0x1007e0
void __cxa_finalize(void *dso_handle);

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007f0
void __gmon_start__(void);

// Function: <EXTERNAL>::__getauxval @ 0x100800
unsigned long __getauxval(unsigned long type);

// Function: <EXTERNAL>::abort @ 0x100810
void abort(void);

// Function: <EXTERNAL>::puts @ 0x100820
int puts(const char *s);

// Function: <EXTERNAL>::mmap @ 0x100830
void *mmap(void *addr, size_t length, int prot, int flags, int fd, __off_t offset);

// Function: <EXTERNAL>::munmap @ 0x100840
int munmap(void *addr, size_t length);

// Function: <EXTERNAL>::sysconf @ 0x100850
long sysconf(int name);

// Function: <EXTERNAL>::printf @ 0x100860
int printf(const char *format, ...);

// Function: <EXTERNAL>::mprotect @ 0x100870
int mprotect(void *addr, size_t len, int prot);

// Function: init_have_lse_atomics @ 0x100880
void init_have_lse_atomics(void)
{
 unsigned long auxval;
 auxval = __getauxval(0x10);
 __aarch64_have_lse_atomics = auxval & 1;
 return;
}













// Function: param_macro_constants @ 0x1009d4
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x40;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x1009e8
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x1009f0
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 <= param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100a00
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x100a08
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100a14
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x100a1c
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100a2c
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x100a34
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100a3c
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x100a44
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x100a4c
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x100a54
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100a60
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100a70
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x100a78
int param_variadic_macro(uint param_1,unsigned long param_2,unsigned long param_3)
{
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,param_2 & 0xffffffff,param_3 & 0xffffffff);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100ab0
unsigned long long call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x100adc
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100ae8
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x100af0
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x100af8
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x100b00
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100b50
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x100b94
int test_preprocessing_features(void)
{
 int iVar1;
 puts(DAT_00101417);
 printf(DAT_00101223,0x40);
 printf(DAT_0010123e,0x1e);
 printf(DAT_00101259,0x20);
 printf(DAT_00101274,0xdf22);
 printf(DAT_00101293,0x74);
 printf(DAT_001012af,0x13);
 printf(DAT_001012d9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_001012f4,0x3c);
 printf(DAT_0010130f,0x10);
 printf(DAT_0010132a,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:39");
 iVar1 = printf(DAT_00101346,0x17e);
 return iVar1;
}

// Function: param_asm_basic @ 0x100ca8
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100cb0
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100cb8
int param_asm_clobber(int *param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 iVar1 = 0;
 uVar2 = (unsigned long)param_2;
 do {
 uVar2 = uVar2 - 1;
 iVar1 = *param_1 + iVar1;
 param_1 = param_1 + 1;
 } while (uVar2 != 0);
 return iVar1;
 }
 return 0;
}

// Function: call_asm_clobber @ 0x100ce8
unsigned long long call_asm_clobber(void)
{
 return 0xf;
}

// Function: param_asm_multi_insn @ 0x100cf0
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x100d04
unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100d0c
unsigned long long param_asm_simd(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: param_simd_intrinsics @ 0x100d34
unsigned long long param_simd_intrinsics(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_1 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: call_asm_simd @ 0x100d5c
int call_asm_simd(void)
{
 long lVar1;
 int local_10 [4];
 lVar1 = 0;
 do {
 *(int *)((long)local_10 + lVar1) =
 *(int *)((long)&DAT_00101478 + lVar1) + *(int *)((long)&DAT_00101468 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return local_10[1] + local_10[0] + local_10[2] + local_10[3];
}

// Function: param_asm_atomic @ 0x100db0
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100ddc
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100e08
int call_asm_atomic(void)
{
 int iVar1;
 int local_14;
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 return iVar1 + local_14 + 5;
}

// Function: param_dynamic_code @ 0x100e40
int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 int iVar1;
 __len = sysconf(0x1e);
 iVar1 = -1;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 iVar1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return iVar1;
}

// Function: param_memory_protection @ 0x100ea8
unsigned int param_memory_protection(void *unused)
{
 (void)unused;
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar2;
 __len = sysconf(0x1e);
 uVar2 = 0xffffffff;
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr != (unsigned int *)0xffffffffffffffff) {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 }
 else {
 uVar2 = 0xfffffffd;
 }
 }
 else {
 uVar2 = 0xfffffffe;
 }
 munmap(__addr,__len);
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x100f58
int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x100f64
unsigned int call_asm_privileged(void)
{
 unsigned int uVar1;
 uint uVar2;
 int iVar3;
 size_t __len;
 void *__addr;
 unsigned int uVar5;
 void *pvVar4;
 __len = sysconf(0x1e);
 uVar5 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar2 = munmap(__addr,__len);
 pvVar4 = (void *)(unsigned long)uVar2;
 uVar5 = 0xf;
 }
 iVar3 = param_memory_protection(pvVar4);
 uVar1 = 0x4d;
 if (iVar3 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar5;
 }
 return uVar1;
}

// Function: param_memory_clobber_demo @ 0x100fe4
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x100ff4
int test_asm_features(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 size_t __len;
 void *__addr;
 long lVar5;
 int local_40 [4];
 void *pvVar4;
 puts(DAT_0010143e);
 printf(DAT_0010136f,0xf);
 printf(DAT_0010138b,0xf);
 printf(DAT_001013a7,0x2a);
 lVar5 = 0;
 do {
 *(int *)((long)local_40 + lVar5) =
 *(int *)((long)&DAT_00101478 + lVar5) + *(int *)((long)&DAT_00101468 + lVar5);
 lVar5 = lVar5 + 4;
 } while (lVar5 != 0x10);
 printf(DAT_001013c3,(unsigned long)(uint)(local_40[1] + local_40[0] + local_40[2] + local_40[3]));
 local_40[0] = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(5,&local_40[0]);
 printf(DAT_001013df,(unsigned long)(iVar2 + local_40[0] + 5));
 __len = sysconf(0x1e);
 uVar3 = 0xffffffff;
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 pvVar4 = __addr;
 if (__addr != (void *)0xffffffffffffffff) {
 uVar3 = munmap(__addr,__len);
 pvVar4 = (void *)(unsigned long)uVar3;
 uVar3 = 0xf;
 }
 iVar2 = param_memory_protection(pvVar4);
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar3;
 }
 iVar2 = printf(DAT_001013fb,(unsigned long)uVar1);
 return iVar2;
}

// Function: main @ 0x101144
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101160
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 int tmp_ldWn;
 int tmp_stWn;
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar1 = *param_2;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar3) {
 *param_2 = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_2;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_1;
 iVar1 = tmp_stWn;
 *param_2 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}



// Function: ExclusiveMonitorPass @ 0x101194
bool ExclusiveMonitorPass(int *param_1,int param_2)
{
 return true;
}

// Function: ExclusiveMonitorsStatus @ 0x101198
int ExclusiveMonitorsStatus(void)
{
 return 0;
}

// Function: LOAcquire @ 0x10119c
void LOAcquire(void)
{
 __asm__ volatile("" ::: "memory");
 return;
}

// Function: LORelease @ 0x1011a0
void LORelease(void)
{
 __asm__ volatile("" ::: "memory");
 return;
}



