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
typedef unsigned char byte;
typedef unsigned char bool;

// Global variables for stack protection
static unsigned long ___stack_chk_guard;
static unsigned long __stack_chk_guard;

// Additional global variables
static byte __aarch64_have_lse_atomics;
static byte completed_0;
static void *__dso_handle;
static int global_var;
static int tmp_ldWn;
static int tmp_stWn;

// Format string constants
char DAT_00101320[] = "Testing preprocessing features:\n";
char DAT_00101348[] = "call_macro_constants: %llu\n";
char DAT_00101368[] = "call_macro_functions: %llu\n";
char DAT_00101388[] = "call_conditional_compile: %llu\n";
char DAT_001013a8[] = "call_multi_branch_compile: %llu\n";
char DAT_001013c8[] = "call_macro_recursion: %llu\n";
char DAT_001013e8[] = "call_stringize: %llu\n";
char DAT_00101418[] = "call_token_paste: %llu\n";
char DAT_00101438[] = "call_variadic_macro: %u\n";
char DAT_00101458[] = "call_macro_override: %llu\n";
char DAT_00101478[] = "call_include_guard: %llu\n";
char DAT_00101498[] = "call_builtin_macros: %u\n";
char DAT_001014d8[] = "Testing ASM features:\n";
char DAT_00101508[] = "call_asm_basic: %llu\n";
char DAT_00101528[] = "call_asm_clobber: %u\n";
char DAT_00101548[] = "call_asm_multi_insn: %u\n";
char DAT_00101568[] = "call_asm_simd: %u\n";
char DAT_00101588[] = "call_asm_atomic: %u\n";
char DAT_001015a8[] = "call_asm_privileged: %d\n";

// Forward declarations
void call_weak_fn(void);
unsigned long long main(void);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
static int ExclusiveMonitorPass(int *param_1, int param_2);
static char ExclusiveMonitorsStatus(void);
static void LOAcquire(void);
static void LORelease(void);
unsigned long __getauxval(unsigned long type);
int __libc_start_main(unsigned long long (*main)(void), int argc, void **argv, void (*init)(void), void (*fini)(void), void *stack_end);
void __cxa_finalize(void *dso_handle);
int __printf_chk(int flag, const char *format, ...);
void __stack_chk_fail(unsigned int result, unsigned long *guard, int flag, long diff);
void *memcpy(void *dest, const void *src, size_t n);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);

// Stub implementations for missing functions
static void LOAcquire(void)
{
 return;
}

static void LORelease(void)
{
 return;
}

static int ExclusiveMonitorPass(int *param_1, int param_2)
{
 (void)param_1;
 (void)param_2;
 return 1;
}

static char ExclusiveMonitorsStatus(void)
{
 return 0;
}

// Decompiled by BinaryAI
// SHA256: a0c2acc488d9a0f4b0285671e66b5859f49cbabce37f60031a2ef3c08ac18555

// Function: _init @ 0x1007f0
static int _init(void *ctx)
{
 (void)ctx;
 call_weak_fn();
 return 0;
}

// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
 return;
}

























// Function: init_have_lse_atomics @ 0x100900
void init_have_lse_atomics(void)
{
 unsigned long result;
 result = __getauxval(0x10);
 __aarch64_have_lse_atomics = (byte)(result & 1);
 return;
}

// Function: _start @ 0x100940
static void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 (void)param_1;
 (void)param_9;
 return;
}

// Function: call_weak_fn @ 0x100974
void call_weak_fn(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x100990
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1009c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001009fc @ 0x1009fc
void FUN_001009fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_macro_constants @ 0x100a54
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x100a68
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x100a70
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100a80
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x100a88
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100a94
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x100a9c
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100aac
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x100ab4
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100abc
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x100ac4
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x100acc
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x100ad4
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100ae0
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100af0
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x100af8
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100b34
unsigned int call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return 0;
}

// Function: param_macro_override @ 0x100b54
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100b60
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x100b68
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x100b70
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x100b78
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:27");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100bcc
unsigned int call_builtin_macros(void)
{
 param_builtin_macros(100);
 return 0;
}

// Function: test_preprocessing_features @ 0x100be4
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,DAT_00101320);
 __printf_chk(1,DAT_00101348,0x40);
 __printf_chk(1,DAT_00101368,0x1e);
 __printf_chk(1,DAT_00101388,0x20);
 __printf_chk(1,DAT_001013a8,0xdf22);
 __printf_chk(1,DAT_001013c8,0x74);
 __printf_chk(1,DAT_001013e8,0x13);
 __printf_chk(1,DAT_00101418,0x3c);
 uVar1 = call_variadic_macro();
 __printf_chk(1,DAT_00101438,uVar1);
 __printf_chk(1,DAT_00101458,0x10);
 __printf_chk(1,DAT_00101478,500);
 uVar1 = call_builtin_macros();
 __printf_chk(1,DAT_00101498,uVar1);
 return;
}

// Function: param_asm_basic @ 0x100ce8
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100cf0
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100cf8
int param_asm_clobber(int *param_1,int param_2)
{
 int iVar1;
 int local_10;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 local_10 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + param_1[local_10];
 local_10 = local_10 + 1;
 } while (local_10 < param_2);
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x100d2c
unsigned int call_asm_clobber(void)
{
 unsigned long long uVar1;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = param_asm_clobber((int *)&local_20,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 return 0;
}

// Function: param_asm_multi_insn @ 0x100d94
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x100da8
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 unsigned char local_38[8];
 unsigned char local_30[2];
 unsigned long long local_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38[0] = 'H';
 local_38[1] = 'e';
 local_38[2] = 'l';
 local_38[3] = 'l';
 local_38[4] = 'o';
 local_38[5] = ' ';
 local_38[6] = 'A';
 local_38[7] = 'S';
 local_30[0] = 'M';
 local_30[1] = '\0';
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 param_asm_multi_insn(&local_28,local_38,9);
 if ((char)local_28 == 'H') {
 uVar1 = 0x2a;
 if (((char *)&local_28)[4] != 'o') {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x100e40
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

// Function: param_simd_intrinsics @ 0x100e68
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

// Function: call_asm_simd @ 0x100e90
unsigned int call_asm_simd(void)
{
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 local_2c = 4;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 param_asm_simd((long)&local_38,(long)&local_28,(long)&local_18);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail(local_18 + local_14 + local_10 + local_c,&__stack_chk_guard,0,
 local_8 - ___stack_chk_guard);
 return 0;
}

// Function: param_asm_atomic @ 0x100f40
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100f6c
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100f98
unsigned int call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = param_asm_atomic((unsigned long long)&local_c,5);
 if (local_8 - ___stack_chk_guard == 0) {
 return 0;
 }
 __stack_chk_fail(iVar1 + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
 return 0;
}

// Function: param_dynamic_code @ 0x100ff8
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

// Function: param_memory_protection @ 0x10105c
unsigned int param_memory_protection(void)
{
 int iVar1;
 size_t __len;
 unsigned int *__addr;
 unsigned int uVar2;
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
 munmap(__addr,__len);
 uVar2 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 uVar2 = 0xfffffffe;
 }
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x10112c
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x101138
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar2 == 0x2a && iVar1 == 0xf) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101170
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101180
void test_asm_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,DAT_001014d8);
 __printf_chk(1,DAT_00101508,0xf);
 uVar1 = call_asm_clobber();
 __printf_chk(1,DAT_00101528,uVar1);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,DAT_00101548,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,DAT_00101568,uVar1);
 uVar1 = call_asm_atomic();
 __printf_chk(1,DAT_00101588,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001015a8,uVar1);
 return;
}

// Function: main @ 0x10122c
unsigned long long main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101250
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

// Function: _fini @ 0x101280
static void _fini(void)
{
 return;
}

