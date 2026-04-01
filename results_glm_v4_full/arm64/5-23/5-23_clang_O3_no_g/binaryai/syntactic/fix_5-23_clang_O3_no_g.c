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
typedef long __off_t;
typedef unsigned char byte;
#define bool _Bool

/* Global variable declarations */
extern void *__dso_handle;
byte __aarch64_have_lse_atomics;
byte completed_0;
int global_var;
extern void *stack0x00000008;

/* Forward declarations */
int main(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
int ExclusiveMonitorPass(void *addr, int size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
extern const char *DAT_001014c7;
extern const char *DAT_001012d3;
extern const char *DAT_001012ee;
extern const char *DAT_00101309;
extern const char *DAT_00101324;
extern const char *DAT_00101343;
extern const char *DAT_0010135f;
extern const char *DAT_00101389;
extern const char *DAT_001013a4;
extern const char *DAT_001013bf;
extern const char *DAT_001013da;
extern const char *DAT_001013f6;
extern const char *DAT_0010141f;
extern const char *DAT_0010143b;
extern const char *DAT_00101457;
extern const char *DAT_00101473;
extern const char *DAT_0010148f;
extern const char *DAT_001014ab;
extern const char *DAT_001014ee;

/* String constant definitions */
const char *DAT_001012d3 = "%d\n";
const char *DAT_001012ee = "%llu\n";
const char *DAT_00101309 = "%d\n";
const char *DAT_00101324 = "%llu\n";
const char *DAT_00101343 = "%llu\n";
const char *DAT_0010135f = "%llu\n";
const char *DAT_00101389 = "%llu\n";
const char *DAT_001013a4 = "%llu\n";
const char *DAT_001013bf = "%llu\n";
const char *DAT_001013da = "%llu\n";
const char *DAT_001013f6 = "%llu\n";
const char *DAT_0010141f = "%d\n";
const char *DAT_0010143b = "%d\n";
const char *DAT_00101457 = "%d\n";
const char *DAT_00101473 = "%d\n";
const char *DAT_0010148f = "%lu\n";
const char *DAT_001014ab = "%lu\n";
const char *DAT_001014ee = "\n";
const char *DAT_001014c7 = "\n";

// Decompiled by BinaryAI
// SHA256: 06fede41d67a2aff0b27c302e9386e7e39432e6e9acc68bf463cd957680e4117



// Function: <EXTERNAL>::memcpy @ 0x1007c0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 extern void *memcpy_real(void *, void *, size_t);
 return memcpy_real(__dest,__src,__n);
}



// Function: <EXTERNAL>::__cxa_finalize @ 0x1007e0
void __cxa_finalize(void *dso_handle)
{
 extern void __cxa_finalize_real(void *);
 __cxa_finalize_real(dso_handle);
 return;
}



// Function: <EXTERNAL>::__getauxval @ 0x100800
unsigned long __getauxval(unsigned long type)
{
 extern unsigned long __getauxval_real(unsigned long);
 return __getauxval_real(type);
}

// Function: <EXTERNAL>::abort @ 0x100810
void abort(void)
{
 extern void abort_real(void);
 abort_real();
}

// Function: <EXTERNAL>::puts @ 0x100820
int puts(const char *__s)
{
 extern int puts_real(const char *);
 return puts_real(__s);
}

// Function: <EXTERNAL>::mmap @ 0x100830
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 extern void *mmap_real(void *, size_t, int, int, int, __off_t);
 return mmap_real(__addr,__len,__prot,__flags,__fd,__offset);
}

// Function: <EXTERNAL>::munmap @ 0x100840
int munmap(void *__addr,size_t __len)
{
 extern int munmap_real(void *, size_t);
 return munmap_real(__addr,__len);
}

// Function: <EXTERNAL>::sysconf @ 0x100850
long sysconf(int __name)
{
 extern long sysconf_real(int);
 return sysconf_real(__name);
}

// Function: <EXTERNAL>::printf @ 0x100860
int printf(const char *__format,...)
{
 extern int printf_real(const char *, ...);
 return printf_real(__format);
}

// Function: <EXTERNAL>::mprotect @ 0x100870
int mprotect(void *__addr,size_t __len,int __prot)
{
 extern int mprotect_real(void *, size_t, int);
 return mprotect_real(__addr,__len,__prot);
}

/* Missing function definitions */
int ExclusiveMonitorPass(void *addr, int size)
{
    return 1;
}

int ExclusiveMonitorsStatus(void)
{
    return 0;
}

void LOAcquire(void)
{
}

void LORelease(void)
{
}

int mprotect_real(void *__addr, size_t __len, int __prot)
{
    return 0;
}

void *memcpy_real(void *__dest, void *__src, size_t __n)
{
    return __dest;
}

void __cxa_finalize_real(void *dso_handle)
{
}

unsigned long __getauxval_real(unsigned long type)
{
    return 0;
}

void abort_real(void)
{
}

int puts_real(const char *__s)
{
    return 0;
}

void *mmap_real(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset)
{
    return (void *)0;
}

int munmap_real(void *__addr, size_t __len)
{
    return 0;
}

long sysconf_real(int __name)
{
    return 0;
}

int printf_real(const char *__format, ...)
{
    return 0;
}

// Function: init_have_lse_atomics @ 0x100880
void init_have_lse_atomics(void)
{
 __aarch64_have_lse_atomics = __getauxval(0x10) & 1;
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
 "Jan 15 2026","03:01:46");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100b50
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:46");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x100b94
int test_preprocessing_features(void)
{
 int iVar1;
 puts(DAT_001014c7);
 printf(DAT_001012d3,0x40);
 printf(DAT_001012ee,0x1e);
 printf(DAT_00101309,0x20);
 printf(DAT_00101324,0xdf22);
 printf(DAT_00101343,0x74);
 printf(DAT_0010135f,0x13);
 printf(DAT_00101389,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_001013a4,0x3c);
 printf(DAT_001013bf,0x10);
 printf(DAT_001013da,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:46");
 iVar1 = printf(DAT_001013f6,0x17e);
 return iVar1;
}

// Function: param_asm_basic @ 0x100ca4
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100cac
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100cb4
int param_asm_clobber(long param_1,uint param_2)
{
 unsigned long long *puVar1;
 unsigned long long *puVar2;
 unsigned long long *puVar3;
 unsigned long long *puVar4;
 unsigned long uVar5;
 long lVar6;
 unsigned long uVar7;
 unsigned long uVar8;
 int *piVar9;
 int iVar10;
 int iVar11;
 int iVar12;
 int iVar13;
 int iVar14;
 int iVar15;
 int iVar16;
 int iVar17;
 unsigned long long uVar18;
 if ((int)param_2 < 1) {
 return 0;
 }
 uVar5 = (unsigned long)param_2;
 if (param_2 < 8) {
 uVar7 = 0;
 iVar10 = 0;
 }
 else {
 uVar7 = uVar5 & 0xfffffff8;
 puVar4 = (unsigned long long *)(param_1 + 0x10);
 iVar10 = 0;
 iVar11 = 0;
 iVar12 = 0;
 iVar13 = 0;
 iVar14 = 0;
 iVar15 = 0;
 iVar16 = 0;
 iVar17 = 0;
 uVar8 = uVar7;
 do {
 puVar1 = puVar4 + -2;
 puVar2 = puVar4 + -1;
 puVar3 = puVar4 + 1;
 uVar18 = *puVar4;
 puVar4 = puVar4 + 4;
 uVar8 = uVar8 - 8;
 iVar10 = (int)*puVar1 + iVar10;
 iVar11 = (int)((unsigned long)*puVar1 >> 0x20) + iVar11;
 iVar12 = (int)*puVar2 + iVar12;
 iVar13 = (int)((unsigned long)*puVar2 >> 0x20) + iVar13;
 iVar14 = (int)uVar18 + iVar14;
 iVar15 = (int)((unsigned long)uVar18 >> 0x20) + iVar15;
 iVar16 = (int)*puVar3 + iVar16;
 iVar17 = (int)((unsigned long)*puVar3 >> 0x20) + iVar17;
 } while (uVar8 != 0);
 iVar10 = iVar14 + iVar10 + iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13;
 if (uVar7 == uVar5) {
 return iVar10;
 }
 }
 lVar6 = uVar5 - uVar7;
 piVar9 = (int *)(param_1 + uVar7 * 4);
 do {
 lVar6 = lVar6 + -1;
 iVar10 = *piVar9 + iVar10;
 piVar9 = piVar9 + 1;
 } while (lVar6 != 0);
 return iVar10;
}

// Function: call_asm_clobber @ 0x100d3c
unsigned long long call_asm_clobber(void)
{
 return 0xf;
}

// Function: call_asm_multi_insn @ 0x100d48
unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100d50
unsigned long long param_asm_simd(int *param_1,int *param_2,int *param_3)
{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}

// Function: param_simd_intrinsics @ 0x100d98
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 *param_3 = *param_2 + *param_1;
 param_3[1] = param_2[1] + param_1[1];
 param_3[2] = param_2[2] + param_1[2];
 param_3[3] = param_2[3] + param_1[3];
 return 0;
}

// Function: call_asm_simd @ 0x100de0
unsigned long long call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x100de8
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100e14
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100e40
int call_asm_atomic(void)
{
 int iVar1;
 int local_14;
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 return iVar1 + local_14 + 5;
}

// Function: param_dynamic_code @ 0x100e78
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

// Function: param_memory_protection @ 0x100ee0
unsigned int param_memory_protection(void)
{
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

// Function: param_clobber_importance @ 0x100f90
int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x100f9c
unsigned int call_asm_privileged(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 size_t sVar4;
 void *__addr;
 int *__addr_00;
 unsigned int uVar5;
 sVar4 = sysconf(0x1e);
 uVar5 = 0xffffffff;
 __addr = mmap((void *)0x0,sVar4,7,0x22,-1,0);
 if (__addr != (void *)0xffffffffffffffff) {
 munmap(__addr,sVar4);
 uVar5 = 0xf;
 }
 sVar4 = sysconf(0x1e);
 iVar2 = -1;
 __addr_00 = (int *)mmap((void *)0x0,sVar4,3,0x22,-1,0);
 if (__addr_00 != (int *)0xffffffffffffffff) {
 *__addr_00 = 0x2a;
 iVar2 = mprotect(__addr_00,sVar4,1);
 if (iVar2 == 0) {
 iVar2 = *__addr_00;
 iVar3 = mprotect(__addr_00,sVar4,3);
 if (iVar3 == 0) {
 *__addr_00 = 100;
 }
 else {
 iVar2 = -3;
 }
 }
 else {
 iVar2 = -2;
 }
 munmap(__addr_00,sVar4);
 }
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || __addr == (void *)0xffffffffffffffff) {
 uVar1 = uVar5;
 }
 return uVar1;
}

// Function: param_memory_clobber_demo @ 0x1010ac
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x1010bc
int test_asm_features(void)
{
 int iVar1;
 unsigned long uVar2;
 int local_14;
 puts(DAT_001014ee);
 printf(DAT_0010141f,0xf);
 printf(DAT_0010143b,0xf);
 printf(DAT_00101457,0x2a);
 printf(DAT_00101473,0x24);
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 iVar1 = printf(DAT_0010148f,(unsigned long)(iVar1 + local_14 + 5));
 uVar2 = call_asm_privileged();
 iVar1 = printf(DAT_001014ab,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x101160
int main(void)
{
 int iVar1;
 unsigned long uVar2;
 int local_14;
 test_preprocessing_features();
 puts(DAT_001014ee);
 printf(DAT_0010141f,0xf);
 printf(DAT_0010143b,0xf);
 printf(DAT_00101457,0x2a);
 printf(DAT_00101473,0x24);
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_14);
 iVar1 = printf(DAT_0010148f,(unsigned long)(iVar1 + local_14 + 5));
 uVar2 = call_asm_privileged();
 printf(DAT_001014ab,uVar2 & 0xffffffff);
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101210
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
 int tmp_ldWn;
 int tmp_stWn;
 char cVar2;
 bool bVar3;
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



