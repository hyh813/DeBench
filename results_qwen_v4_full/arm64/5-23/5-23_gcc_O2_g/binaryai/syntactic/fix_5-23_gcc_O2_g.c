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
typedef unsigned char byte;
typedef long __off_t;
typedef int bool;

// Global variables
extern long ___stack_chk_guard;
extern long __stack_chk_guard;
extern byte __aarch64_have_lse_atomics;
int global_var = 0;
byte completed_0 = 0;
extern void *__dso_handle;
int tmp_ldWn = 0;
int tmp_stWn = 0;
extern char DAT_00101550[];
extern char DAT_00101578[];
extern char DAT_00101598[];
extern char DAT_001015b8[];
extern char DAT_001015d8[];
extern char DAT_001015f8[];
extern char DAT_00101618[];
extern char DAT_00101648[];
extern char DAT_00101668[];
extern char DAT_00101688[];
extern char DAT_001016a8[];
extern char DAT_001016c8[];
extern char DAT_001016f8[];
extern char DAT_00101728[];
extern char DAT_00101748[];
extern char DAT_00101768[];
extern char DAT_00101788[];
extern char DAT_001017a8[];
extern char DAT_001017c8[];


// Forward declarations
int call_weak_fn(int ctx);
void test_preprocessing_features(void);
void test_asm_features(void);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);
int ExclusiveMonitorPass(int *param_1,int param_2);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
unsigned long __getauxval(unsigned long int __type);
void __cxa_finalize(void *);

// Helper function definitions
int ExclusiveMonitorsStatus(void)
{
 return 0;
}

void LOAcquire(void)
{
 return;
}

void LORelease(void)
{
 return;
}

int ExclusiveMonitorPass(int *param_1,int param_2)
{
 return 1;
}

// Decompiled by BinaryAI
// SHA256: df8832462c244e333d3771b7574efa085dc7c2f66f98298708ccf449211bc3e3

// Function: _init @ 0x1007f0
static int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
 ((void (*)(void))0x0)();
 return;
}



// Function: <EXTERNAL>::__libc_start_main @ 0x100840
void __libc_start_main(void *main_func,unsigned long long param_9,void *stack,void *a,void *b,unsigned long long param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100850
void __cxa_finalize(void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100860
int __printf_chk(int __flag, const char *__format, ...)
{
 return 0;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100870
void __stack_chk_fail(void)
{
 return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100880
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::__getauxval @ 0x100890
unsigned long __getauxval(unsigned long int __type)
{
 unsigned long lVar1;
 lVar1 = __getauxval(__type);
 return lVar1;
}

// Function: <EXTERNAL>::abort @ 0x1008a0
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::mmap @ 0x1008b0
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x1008c0
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x1008d0
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::mprotect @ 0x1008e0
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: main @ 0x100900
unsigned long long main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: FUN_0010091c @ 0x10091c
void FUN_0010091c(void)
{
 byte extraout_var;
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: init_have_lse_atomics @ 0x100920
void init_have_lse_atomics(void)
{
 byte extraout_var;
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x100980
static void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&param_9,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x1009b4
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x1009d0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a00
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100a3c @ 0x100a3c
void FUN_00100a3c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a40
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_macro_constants @ 0x100aa0
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x100ab4
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x100ac0
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100ad0
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x100ae0
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100af0
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x100b00
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100b10
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x100b20
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100b30
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x100b40
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x100b50
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x100b60
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100b70
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100b80
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x100b90
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: FUN_00100bcc @ 0x100bcc
unsigned long long FUN_00100bcc(void)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: call_variadic_macro @ 0x100bd0
unsigned long long call_variadic_macro(void)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x100c00
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100c10
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x100c20
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x100c30
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x100c40
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100c94
unsigned long long call_builtin_macros(void)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 return 0x17e;
}

// Function: FUN_00100cdc @ 0x100cdc
void FUN_00100cdc(void)
{
 __printf_chk(1,DAT_00101550);
 __printf_chk(1,DAT_00101578,0x40);
 __printf_chk(1,DAT_00101598,0x1e);
 __printf_chk(1,DAT_001015b8,0x20);
 __printf_chk(1,DAT_001015d8,0xdf22);
 __printf_chk(1,DAT_001015f8,0x74);
 __printf_chk(1,DAT_00101618,0x13);
 __printf_chk(1,DAT_00101648,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_00101668,0x3c);
 __printf_chk(1,DAT_00101688,0x10);
 __printf_chk(1,DAT_001016a8,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 __printf_chk(1,DAT_001016c8,0x17e);
 return;
}

// Function: test_preprocessing_features @ 0x100ce0
void test_preprocessing_features(void)
{
 __printf_chk(1,DAT_00101550);
 __printf_chk(1,DAT_00101578,0x40);
 __printf_chk(1,DAT_00101598,0x1e);
 __printf_chk(1,DAT_001015b8,0x20);
 __printf_chk(1,DAT_001015d8,0xdf22);
 __printf_chk(1,DAT_001015f8,0x74);
 __printf_chk(1,DAT_00101618,0x13);
 __printf_chk(1,DAT_00101648,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_00101668,0x3c);
 __printf_chk(1,DAT_00101688,0x10);
 __printf_chk(1,DAT_001016a8,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:29");
 __printf_chk(1,DAT_001016c8,0x17e);
 return;
}

// Function: param_asm_basic @ 0x100e30
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100e40
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100e50
int param_asm_clobber(long param_1,int param_2)
{
 long lVar1;
 int iVar2;
 long lVar3;
 if (0 < param_2) {
 lVar3 = 0;
 iVar2 = 0;
 do {
 lVar1 = lVar3 * 4;
 lVar3 = lVar3 + 1;
 iVar2 = iVar2 + *(int *)(param_1 + lVar1);
 } while ((int)lVar3 < param_2);
 return iVar2;
 }
 return 0;
}

// Function: call_asm_clobber @ 0x100e90
void call_asm_clobber(void)
{
 long lVar1;
 lVar1 = 1;
 do {
 lVar1 = lVar1 + 1;
 } while (lVar1 != 6);
 return;
}

// Function: call_asm_multi_insn @ 0x100f14
unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100f20
unsigned long long param_asm_simd(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: param_simd_intrinsics @ 0x100f50
unsigned long long param_simd_intrinsics(long param_1,long param_2,long param_3)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_3 + lVar1) = *(int *)(param_1 + lVar1) + *(int *)(param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}

// Function: call_asm_simd @ 0x100f80
void call_asm_simd(void)
{
 long lVar1;
 long lVar2;
 int aiStack_3c [3];
 unsigned long long uStack_30;
 int iStack_24;
 unsigned long long uStack_20;
 int local_14 [5];
 uStack_20 = 0x800000007;
 uStack_30 = 0x400000003;
 lVar2 = 8;
 do {
 lVar1 = lVar2 + 4;
 *(int *)((long)&uStack_20 + lVar2 + 4) =
 *(int *)((long)aiStack_3c + lVar2) + *(int *)((long)&uStack_30 + lVar2 + 4);
 lVar2 = lVar1;
 } while (lVar1 != 0x14);
 return;
}

// Function: FUN_0010105c @ 0x10105c
int FUN_0010105c(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_asm_atomic @ 0x101060
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: FUN_0010108c @ 0x10108c
int FUN_0010108c(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101090
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: FUN_001010bc @ 0x1010bc
void FUN_001010bc(void)
{
 int iVar1;
 int iStack_c;
 long lStack_8;
 lStack_8 = ___stack_chk_guard;
 iStack_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&iStack_c);
 if (lStack_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_asm_atomic @ 0x1010c0
void call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_dynamic_code @ 0x101124
int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}

// Function: param_memory_protection @ 0x101190
unsigned int param_memory_protection(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *__addr;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 uVar2 = 0xfffffffd;
 munmap(__addr,__len);
 }
 }
 else {
 uVar2 = 0xfffffffe;
 munmap(__addr,__len);
 }
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x101260
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: FUN_0010126c @ 0x10126c
unsigned int FUN_0010126c(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection(0);
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = munmap(__addr,__len);
 iVar1 = param_memory_protection(iVar1);
 uVar2 = 0xf;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 return uVar2;
}

// Function: call_asm_privileged @ 0x101270
unsigned int call_asm_privileged(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection(0);
 uVar2 = 0xffffffff;
 }
 else {
 iVar1 = munmap(__addr,__len);
 iVar1 = param_memory_protection(iVar1);
 uVar2 = 0xf;
 if (iVar1 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 return uVar2;
}

// Function: param_memory_clobber_demo @ 0x1012e4
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x1012f4
void test_asm_features(void)
{
 long lVar1;
 unsigned int uVar2;
 int iVar3;
 long lVar4;
 size_t __len;
 void *__addr;
 int local_24;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 __printf_chk(1,DAT_001016f8);
 __printf_chk(1,DAT_00101728,0xf);
 iVar3 = 0;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 lVar4 = 1;
 do {
 lVar1 = lVar4 + 1;
 iVar3 = iVar3 + (&local_24)[lVar4];
 lVar4 = lVar1;
 } while (lVar1 != 6);
 __printf_chk(1,DAT_00101748,iVar3);
 __printf_chk(1,DAT_00101768,0x2a);
 call_asm_simd();
 __printf_chk(1,DAT_00101788,0x2a);
 local_24 = 10;
 iVar3 = __aarch64_ldadd4_acq_rel(5,&local_24);
 __printf_chk(1,DAT_001017a8,iVar3 + 5 + local_24);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 param_memory_protection(0);
 uVar2 = 0xffffffff;
 }
 else {
 iVar3 = munmap(__addr,__len);
 iVar3 = param_memory_protection(iVar3);
 uVar2 = 0xf;
 if (iVar3 == 0x2a) {
 uVar2 = 0x4d;
 }
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_001017c8);
 return;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101480
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)
{
 int iVar1;
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

// Function: _fini @ 0x1014b0
static void _fini(void)
{
 return;
}

