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
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

// External variables for stack protection and atomics
// __stack_chk_guard is declared as weak below (provided by libc)
char __aarch64_have_lse_atomics;

// Additional external declarations
char completed_0;
void *__dso_handle;
int call_weak_fn(int arg);
int main(int argc, char **argv, char **envp);
void abort(void);

// libc start main - proper declaration
void __libc_start_main(int (*main)(int, char**, char**), void *init, void *stack, void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// getauxval declaration
unsigned long __getauxval(unsigned long type);
void __gmon_start__(void);
// External/global variables
unsigned int global_var = 0;

// Stack guard - provided by libc, declare as weak
// Use a default value if not provided by libc
unsigned long long __stack_chk_guard __attribute__((weak)) = 0;

unsigned long long get_stack_chk_guard(void) {
    return __stack_chk_guard ? __stack_chk_guard : 0;
}

// ARM LSE atomic and exclusive monitor functions
int __aarch64_ldadd4_acq_rel(int value, int *ptr);
int ExclusiveMonitorPass(int *ptr, int val);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// Data section - format strings
static const char DAT_00101320[] = "Testing preprocessing features\n";
static const char DAT_00101348[] = "param_macro_constants: %u\n";
static const char DAT_00101368[] = "call_macro_constants: %u\n";
static const char DAT_00101388[] = "param_macro_functions: %u\n";
static const char DAT_001013a8[] = "call_macro_functions: %u\n";
static const char DAT_001013c8[] = "param_conditional_compile: %u\n";
static const char DAT_001013e8[] = "call_conditional_compile: %u\n";
static const char DAT_00101418[] = "param_token_paste: %u\n";
static const char DAT_00101438[] = "call_variadic_macro: %u\n";
static const char DAT_00101458[] = "param_macro_override: %u\n";
static const char DAT_00101478[] = "param_include_guard: %u\n";
static const char DAT_00101498[] = "call_builtin_macros: %u\n";
static const char DAT_001014d8[] = "Testing asm features\n";
static const char DAT_00101508[] = "param_dynamic_code: %u\n";
static const char DAT_00101528[] = "call_asm_clobber: %u\n";
static const char DAT_00101548[] = "call_asm_multi_insn: %u\n";
static const char DAT_00101568[] = "call_asm_simd: %u\n";
static const char DAT_00101588[] = "call_asm_atomic: %u\n";
static const char DAT_001015a8[] = "call_asm_privileged: %u\n";
// SHA256: cf6754f075358bd58a7a0c1bee69f3f7fc92551eca1b6c79e492dbaf4573ccee

// Function: _init @ 0x1007f0
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)(uintptr_t)ctx);
 return iVar1;
}

// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
 // Null function pointer call - removed as it's unreachable
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x100830
// Properly declared at line 48

// Function: <EXTERNAL>::__libc_start_main @ 0x100840
// Properly declared at line 40

// Function: <EXTERNAL>::__cxa_finalize @ 0x100850
void __cxa_finalize(void *arg)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100860
int __printf_chk(int __flag, const char *__format, ...)
{
 int iVar1;
 va_list __va;
 va_start(__va,__format);
 iVar1 = vprintf(__format,__va);
 va_end(__va);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100870
void __stack_chk_fail(void)
{
 // Empty stub - actual implementation in libc
 while(1) { }
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100880
// Properly declared earlier

// Function: <EXTERNAL>::__getauxval @ 0x100890
// Properly declared at line 43

// Function: <EXTERNAL>::abort @ 0x1008a0
// Properly declared - see line 46

// Function: <EXTERNAL>::mmap @ 0x1008b0
extern void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset);

// Function: <EXTERNAL>::munmap @ 0x1008c0
extern int munmap(void *__addr,size_t __len);

// Function: <EXTERNAL>::sysconf @ 0x1008d0
extern long sysconf(int __name);

// Function: <EXTERNAL>::mprotect @ 0x1008e0
extern int mprotect(void *__addr,size_t __len,int __prot);

// Function: init_have_lse_atomics @ 0x100900
void init_have_lse_atomics(void)
{
 unsigned long extraout_var;
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = (char)(extraout_var & 1);
 return;
}

// Function: _start @ 0x100940
void _start(unsigned long long param_1)
{
 // __libc_start_main(main, init, stack_end, fini, rtld_fini, auxv)
 // param_1 is the auxv pointer from the kernel
 // Stack pointer is in x0 (which becomes param_1 when passed to a C function)
 __libc_start_main(main,(void *)0,(void *)param_1,(void *)0,(void *)0,(void *)param_1);
 // __libc_start_main never returns, but we need a fallback in case it does
 abort();
}

// Function: call_weak_fn @ 0x100974
int call_weak_fn(int arg)
{
 // Handle weak function - __gmon_start__ may not be defined
 // Just return arg - the actual __gmon_start__ if needed is handled by the dynamic linker
 return arg;
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
 __cxa_finalize((void *)0);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a00
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize((void *)0);
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
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
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
 ,0x117,"Jan 15 2026","03:01:28");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100bcc
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
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
 call_variadic_macro();
 __printf_chk(1,DAT_00101438,50);
 __printf_chk(1,DAT_00101458,0x10);
 __printf_chk(1,DAT_00101478,500);
 call_builtin_macros();
 __printf_chk(1,DAT_00101498,0x11a);
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
int param_asm_clobber(long param_1,int param_2)
{
 int iVar1;
 long lVar2;
 if (param_2 < 1) {
 iVar1 = 0;
 }
 else {
 lVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
 lVar2 = lVar2 + 1;
 } while ((int)lVar2 < param_2);
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x100d2c
void call_asm_clobber(void)
{
 unsigned long long uVar1;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = get_stack_chk_guard();
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = param_asm_clobber((long)&local_20,5);
 if (local_8 - get_stack_chk_guard() == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_asm_multi_insn @ 0x100d94
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x100da8
void call_asm_multi_insn(void)
{
 unsigned int uVar1;
 unsigned long long local_38;
 unsigned short local_30;
 unsigned long long local_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = get_stack_chk_guard();
 local_38 = 0x5341656c6c6f48ULL;
 local_30 = 0x4d;  // 'M' with null terminator
 local_28 = 0;
 uStack_20 = 0;
 local_18 = 0;
 uStack_10 = 0;
 param_asm_multi_insn(&local_28,&local_38,9);
 if ((char)local_28 == 'H') {
 uVar1 = 0x2a;
 if (((local_28 >> 32) & 0xff) != 'o') {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - get_stack_chk_guard() != 0) {
 __stack_chk_fail();
 }
 return;
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
void call_asm_simd(void)
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
 local_8 = get_stack_chk_guard();
 local_38 = 1;
 local_34 = 2;
 local_30 = 3;
 local_2c = 4;
 local_28 = 5;
 local_24 = 6;
 local_20 = 7;
 local_1c = 8;
 param_asm_simd((long)&local_38,(long)&local_28,(long)&local_18);
 if (local_8 - get_stack_chk_guard() == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_asm_atomic @ 0x100f40
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)(uintptr_t)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100f6c
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)(uintptr_t)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100f98
void call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 long local_8;
 local_8 = get_stack_chk_guard();
 local_c = 10;
 iVar1 = param_asm_atomic((unsigned long long)&local_c,5);
 if (local_8 - get_stack_chk_guard() == 0) {
 return;
 }
 __stack_chk_fail();
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
 call_asm_clobber();
 uVar1 = 5;
 __printf_chk(1,DAT_00101528,uVar1);
 call_asm_multi_insn();
 uVar1 = 0x2a;
 __printf_chk(1,DAT_00101548,uVar1);
 call_asm_simd();
 uVar1 = 0;
 __printf_chk(1,DAT_00101568,uVar1);
 call_asm_atomic();
 uVar1 = 0;
 __printf_chk(1,DAT_00101588,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001015a8,uVar1);
 return;
}

// Function: main @ 0x10122c
int main(int argc, char **argv, char **envp)
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

// Function: _fini @ 0x101280
void _fini(void)
{
 return;
}

