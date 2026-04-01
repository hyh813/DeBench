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
typedef unsigned char byte;
typedef long __off_t;
#define NULL ((void *)0)

/* Global variables */
extern void *__dso_handle;
byte __aarch64_have_lse_atomics;
byte completed_0;
void *stack0x00000008;
int global_var;
extern char DAT_001012e7[];
extern char DAT_001010f3[];
extern char DAT_0010110e[];
extern char DAT_00101129[];
extern char DAT_00101144[];
extern char DAT_00101163[];
extern char DAT_0010117f[];
extern char DAT_001011a9[];
extern char DAT_001011c4[];
extern char DAT_001011df[];
extern char DAT_001011fa[];
extern char DAT_00101216[];
extern char DAT_0010123f[];
extern char DAT_0010125b[];
extern char DAT_00101277[];
extern char DAT_00101293[];
extern char DAT_001012af[];
extern char DAT_001012cb[];
extern char DAT_0010130e[];

/* Forward declarations */
int call_weak_fn(int ctx);
unsigned long long main(void);
int __aarch64_ldadd4_acq_rel(int param_1,unsigned long long param_2);
bool ExclusiveMonitorPass(void *,int);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
unsigned long long call_asm_simd(void);
void _init(void);
void _fini(void);

// Decompiled by BinaryAI
// SHA256: 9be7e04ce5a7015cddff2edfc0fe26eaa385e7b81f0a97f51a1c71262ee4532f

// Function: _init @ 0x100780
void _init(void)
{
 call_weak_fn(0);
 return;
}

// Function: FUN_001007a0 @ 0x1007a0
void FUN_001007a0(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1007c0
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1007d0
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end)
{
 __libc_start_main(main, argc, ubp_av, init, fini, rtld_fini, stack_end);
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1007e0
void __cxa_finalize(void *d)
{
 __cxa_finalize(d);
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007f0
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::__getauxval @ 0x100800
unsigned long __getauxval(unsigned long type)
{
 return __getauxval(type);
}

// Function: <EXTERNAL>::abort @ 0x100810
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::puts @ 0x100820
int puts(const char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::mmap @ 0x100830
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x100840
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x100850
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::printf @ 0x100860
int printf(const char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x100870
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x100880
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x1008c0
void _start(unsigned long long param_1)
{
 __libc_start_main((int (*)(int, char **, char **))main, 0, NULL, _init, _fini, NULL, (void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1008f4
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
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
 "Jan 15 2026","03:01:49");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100b50
unsigned long long call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:49");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x100b94
int test_preprocessing_features(void)
{
 int iVar1;
 puts((const char *)&DAT_001012e7);
 printf((const char *)&DAT_001010f3,0x40);
 printf((const char *)&DAT_0010110e,0x1e);
 printf((const char *)&DAT_00101129,0x20);
 printf((const char *)&DAT_00101144,0xdf22);
 printf((const char *)&DAT_00101163,0x74);
 printf((const char *)&DAT_0010117f,0x13);
 printf((const char *)&DAT_001011a9,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf((const char *)&DAT_001011c4,0x3c);
 printf((const char *)&DAT_001011df,0x10);
 printf((const char *)&DAT_001011fa,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:49");
 iVar1 = printf((const char *)&DAT_00101216,0x17e);
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

// Function: call_asm_clobber @ 0x100ce4
unsigned long long call_asm_clobber(void)
{
 return 0xf;
}

// Function: call_asm_multi_insn @ 0x100cf0
unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100cf8
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

// Function: param_simd_intrinsics @ 0x100d20
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

// Function: call_asm_simd @ 0x100d48
unsigned long long call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x100d50
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int)*(int *)param_1);
 *(int *)param_1 = iVar1 + param_2;
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100d7c
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int)*(int *)param_1);
 *(int *)param_1 = iVar1 + param_2;
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100da8
int call_asm_atomic(void)
{
 int iVar1;
 int local_14;
 local_14 = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,(unsigned long long)&local_14);
 return iVar1 + local_14 + 5;
}

// Function: param_dynamic_code @ 0x100de0
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

// Function: param_memory_protection @ 0x100e48
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

// Function: param_clobber_importance @ 0x100ef8
int param_clobber_importance(int param_1,int param_2)
{
 return (param_2 + param_1) * 2;
}

// Function: call_asm_privileged @ 0x100f04
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar2 = param_dynamic_code(10);
 iVar3 = param_memory_protection();
 iVar1 = 0x4d;
 if (iVar3 != 0x2a || iVar2 != 0xf) {
 iVar1 = iVar2;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x100f3c
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x100f4c
int test_asm_features(void)
{
 uint uVar1;
 int iVar2;
 uint uVar3;
 unsigned long uVar4;
 int local_4;
 puts((const char *)&DAT_0010130e);
 printf((const char *)&DAT_0010123f,0xf);
 printf((const char *)&DAT_0010125b,0xf);
 iVar2 = printf((const char *)&DAT_00101277,0x2a);
 uVar4 = call_asm_simd();
 printf((const char *)&DAT_00101293,uVar4 & 0xffffffff);
 local_4 = 10;
 iVar2 = __aarch64_ldadd4_acq_rel(5,(unsigned long long)&local_4);
 printf((const char *)&DAT_001012af,(unsigned long)(iVar2 + local_4 + 5));
 uVar3 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 uVar1 = 0x4d;
 if (iVar2 != 0x2a || uVar3 != 0xf) {
 uVar1 = uVar3;
 }
 iVar2 = printf((const char *)&DAT_001012cb,(unsigned long)uVar1);
 return iVar2;
}

// Function: main @ 0x10100c
unsigned long long main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101030
int __aarch64_ldadd4_acq_rel(int param_1,unsigned long long param_2)
{
 int iVar1;
 char cVar2;
 bool bVar3;
 int tmp_ldWn;
 int tmp_stWn;
 int *ptr = (int *)param_2;
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar1 = *ptr;
 cVar2 = '\x01';
 bVar3 = (bool)ExclusiveMonitorPass(ptr,0x10);
 if (bVar3) {
 *ptr = iVar1 + param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *ptr;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + param_1;
 iVar1 = tmp_stWn;
 *ptr = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}

// Function: _fini @ 0x101060
void _fini(void)
{
 return;
}

