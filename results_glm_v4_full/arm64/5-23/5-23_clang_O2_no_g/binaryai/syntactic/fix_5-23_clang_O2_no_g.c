#include <sys/types.h>
#include <sys/mman.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef uint8_t byte;

// Decompiled by BinaryAI
// SHA256: ef64833dc589b1b501c5c5a6fda0fe58ef4ffccc043c2ed52b1dd37512ab4424

/* Global variables */
char __aarch64_have_lse_atomics = 0;
char completed_0 = 0;
void *__dso_handle;
int global_var = 0;
int tmp_ldWn;
int tmp_stWn;

/* Forward declarations */
void call_weak_fn(void);
void _init(void);
void _fini(void);
void init_have_lse_atomics(void);
int __aarch64_ldadd4_acq_rel(int *param_1, int param_2);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);
/* Use proper function pointer types to match libc's __libc_start_main */
typedef int (*main_fn_t)(int, char **, char **);
/* __libc_start_main from glibc has this signature:
   int __libc_start_main(int (*main)(int, char **, char **),
                        int argc, char ** argv,
                        void (*init)(void), void (*fini)(void),
                        void (*rtld_fini)(void), void *stack_end);
*/
int __libc_start_main(main_fn_t main, int argc, char **argv, 
                      void (*init)(void), void (*fini)(void),
                      void (*rtld_fini)(void), void *stack_end);
int printf(const char *format, ...);
int puts(const char *s);

static inline bool ExclusiveMonitorPass(void *addr, unsigned long long size) {
    int result;
    __asm__ volatile("ldxr %w0, [%1]" : "=r"(result) : "r"(addr) : "memory");
    return (result != 0);
}

static inline char ExclusiveMonitorsStatus(void) {
    int result;
    int tmp;
    __asm__ volatile("ldxr %w0, [%1]" : "=r"(result) : "r"(&tmp) : "memory");
    __asm__ volatile("stxr %w0, %w1, [%2]" : "=r"(result) : "r"(result), "r"(&tmp) : "memory");
    return (char)result;
}

static inline void LOAcquire(void) {
    __asm__ volatile("" ::: "memory");
}

static inline void LORelease(void) {
    __asm__ volatile("dmb ish" ::: "memory");
}

static inline unsigned long __getauxval(unsigned long type) {
    unsigned long result;
    __asm__ volatile("mrs %0, cntfrq_el0" : "=r"(result));
    return result;
}

void __attribute__((weak)) __gmon_start__(void) {
    /* Weak stub for profiling initialization - typically unused */
}

void __attribute__((weak)) __cxa_finalize(void *dso_handle) {
    /* Weak stub for cleanup - typically provided by libc */
}


char DAT_00101407[28] = "Testing preprocessing features\0";
char DAT_00101213[22] = "Macro constant: %u\n\0";
char DAT_0010122e[20] = "Macro function: %u\n\0";
char DAT_00101249[28] = "Conditional compile: %u\n\0";
char DAT_00101264[27] = "Multi-branch compile: %u\n\0";
char DAT_00101283[22] = "Macro recursion: %u\n\0";
char DAT_0010129f[17] = "Stringize: %u\n\0";
char DAT_001012c9[20] = "Token paste: %u\n\0";
char DAT_001012e4[22] = "Variadic macro: %u\n\0";
char DAT_001012ff[22] = "Macro override: %u\n\0";
char DAT_0010131a[26] = "Include guard: %u\n\0";
char DAT_00101336[27] = "Builtin macros: %u\n\0";
char DAT_0010142e[25] = "Testing ASM features\0";
char DAT_0010135f[19] = "ASM basic: %u\n\0";
char DAT_0010137b[20] = "ASM clobber: %u\n\0";
char DAT_00101397[24] = "ASM multi-insn: %u\n\0";
char DAT_001013b3[20] = "ASM SIMD: %u\n\0";
char DAT_001013cf[25] = "ASM atomic: %u\n\0";
char DAT_001013eb[29] = "ASM privileged: %u\n\0";

// Function: _init @ 0x100780
void _init(void)
{
 call_weak_fn();
}

// Function: FUN_001007a0 @ 0x1007a0
void FUN_001007a0(void)
{
 return;
}



// Function: init_have_lse_atomics @ 0x100880
void init_have_lse_atomics(void)
{
 unsigned long auxval;
 auxval = __getauxval(0x10);
 __aarch64_have_lse_atomics = (char)(auxval & 1);
 return;
}



// Function: call_weak_fn @ 0x1008f4
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100910
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100940
void register_tm_clones(void)
{
 return;
}

// Function: FUN_0010097c @ 0x10097c
void FUN_0010097c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100980
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
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
 "Jan 15 2026","03:01:43");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100b50
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:43");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x100b94
int test_preprocessing_features(void)
{
 int iVar1;
 puts(DAT_00101407);
 printf(DAT_00101213,0x40);
 printf(DAT_0010122e,0x1e);
 printf(DAT_00101249,0x20);
 printf(DAT_00101264,0xdf22);
 printf(DAT_00101283,0x74);
 printf(DAT_0010129f,0x13);
 printf(DAT_001012c9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(DAT_001012e4,0x3c);
 printf(DAT_001012ff,0x10);
 printf(DAT_0010131a,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:43");
 iVar1 = printf(DAT_00101336,0x17e);
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

// Function: param_asm_multi_insn @ 0x100d50
int param_asm_multi_insn(int param_1,int param_2)
{
 return param_1 + param_2;
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
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel((int *)param_1,param_2);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100e14
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel((int *)param_1,param_2);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100e40
int call_asm_atomic(void)
{
 int iVar1;
 int local_14;
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(&local_14,5);
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
unsigned int param_memory_protection(void *param_1)
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

// Function: param_memory_clobber_demo @ 0x10101c
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10102c
int test_asm_features(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 size_t __len;
 void *__addr;
 int local_14;
 void *pvVar4;
 puts(DAT_0010142e);
 printf(DAT_0010135f,0xf);
 printf(DAT_0010137b,0xf);
 printf(DAT_00101397,0x2a);
 printf(DAT_001013b3,0x24);
 local_14 = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(&local_14,5);
 printf(DAT_001013cf,(unsigned long)(iVar2 + local_14 + 5));
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
 iVar2 = printf(DAT_001013eb,(unsigned long)uVar1);
 return iVar2;
}

// Function: _start @ 0x1008c0
void __attribute__((noreturn)) _start(void)
{
    /* Entry point - __libc_start_main will extract argc, argv, envp from stack */
    __libc_start_main(main, 0, NULL, _init, _fini, NULL, NULL);
    __builtin_unreachable();
}

// Function: main @ 0x101130
int main(int argc, char **argv, char **envp)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101150
int __aarch64_ldadd4_acq_rel(int *param_1,int param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar1 = *param_1;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
 if (bVar3) {
 *param_1 = iVar1 + param_2;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_1;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_2;
 iVar1 = tmp_stWn;
 *param_1 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}

// Function: _fini @ 0x101180
void _fini(void)
{
 return;
}

