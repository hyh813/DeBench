/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef uint8_t
typedef unsigned char uint8_t;
#endif
#ifndef uint16_t
typedef unsigned short uint16_t;
#endif
#ifndef uint32_t
typedef unsigned int uint32_t;
#endif
#ifndef uint64_t
typedef unsigned long long uint64_t;
#endif
#ifndef int8_t
typedef signed char int8_t;
#endif
#ifndef int16_t
typedef short int16_t;
#endif
#ifndef int32_t
typedef int int32_t;
#endif
// int64_t is already defined in standard headers
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned char byte;
typedef unsigned int uint;
typedef long __off_t;

// String constants referenced in the code - define them here
char DAT_001014d0[] = "Testing preprocessing features:\n";
char DAT_001014f8[] = "Macro constants: %d\n";
char DAT_00101518[] = "Macro functions: %d\n";
char DAT_00101538[] = "Conditional compile: %d\n";
char DAT_00101558[] = "Multi-branch compile: %d\n";
char DAT_00101578[] = "Macro recursion: %d\n";
char DAT_00101598[] = "Stringize: %d\n";
char DAT_001015c8[] = "Token paste: %d\n";
char DAT_001015e8[] = "Variadic macro: %d\n";
char DAT_00101608[] = "Macro override: %d\n";
char DAT_00101628[] = "Include guard: %d\n";
char DAT_00101648[] = "Builtin macros: %d\n";
char DAT_00101678[] = "ASM basic: %d\n";
char DAT_001016a8[] = "ASM clobber: %d\n";
char DAT_001016c8[] = "ASM multi-insn: %d\n";
char DAT_001016e8[] = "Memory protection: %d\n";
char DAT_00101708[] = "ASM SIMD: %d\n";
char DAT_00101728[] = "ASM atomic: %d\n";
char DAT_00101748[] = "Test complete.\n";

// Global variables needed for C runtime and features
unsigned long __stack_chk_guard;
char __aarch64_have_lse_atomics;
char completed_0;
void *__dso_handle;
int global_var;
unsigned long stack0x00000008;

// Forward declarations for functions defined later in the file
int call_weak_fn(void *ctx);
void test_preprocessing_features(void);
void test_asm_features(void);
unsigned int param_memory_protection(int param_1);
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);

// ARM64 exclusive monitor functions - stub implementations
// In real code, these would be inline assembly
int ExclusiveMonitorPass(int *addr, int val)
{
    // Stub: return 1 to indicate exclusive access was gained
    (void)addr;
    (void)val;
    return 1;
}

char ExclusiveMonitorsStatus(void)
{
    // Stub: return 0 to indicate exclusive monitors are not active
    return 0;
}

void LOAcquire(void)
{
    // Stub: memory barrier for acquire semantics
    __asm__ __volatile__("dmb ishld" ::: "memory");
}

void LORelease(void)
{
    // Stub: memory barrier for release semantics
    __asm__ __volatile__("dmb ishst" ::: "memory");
}

// Macro for concatenating 32-bit values into 64-bit
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

// Decompiled by BinaryAI
// SHA256: 13505cd75570e16dd3b0d38d7008189ba1549851ed880a4fac9f77c69532843f

// Function: _init @ 0x1007f0
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn(ctx);
 return iVar1;
}

// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
 // Null function pointer call - replace with no-op or proper implementation
 return;
}

// Forward declaration for helper function
void * __memcpy(void *dest, void *src, size_t n);

// Function: <EXTERNAL>::memcpy @ 0x100830
void * memcpy(void *__dest,void *__src,size_t __n)
{
 return __memcpy(__dest,__src,__n);
}

// Helper function for memcpy - uses simple byte copy
void * __memcpy(void *dest, void *src, size_t n) {
    char *d = (char *)dest;
    char *s = (char *)src;
    while (n--) {
        *d++ = *s++;
    }
    return dest;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100840
// Standard signature: int main(int argc, char *argv[])
int __libc_start_main(int (*main)(int, char **), void *init, void *fini, void *rtld_fini, void *stack_end, void *ctx)
{
 // Call the actual main function - ctx is passed as first argv element
 char *argv[] = { (char *)ctx, NULL };
 return main(1, argv);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100850
// Empty implementation - actual cleanup handled by C runtime
void __cxa_finalize(void *arg)
{
 (void)arg;
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100860
int __printf_chk(int __flag, const char *__fmt, ...)
{
 int iVar1;
 va_list __va;
 va_start(__va,__fmt);
 iVar1 = vprintf(__fmt,__va);
 va_end(__va);
 return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100870
// Stub implementation - called when stack smashing is detected
void __stack_chk_fail(void)
{
 // In a real implementation, this would abort the program
 // For now, just exit
 exit(1);
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100880
// Stub implementation - profiling not needed
void __gmon_start__(void)
{
 return;
}

// Function: <EXTERNAL>::__getauxval @ 0x100890
// Stub implementation - returns 0 for unknown aux types
unsigned long __getauxval(unsigned long __type)
{
 (void)__type;
 return 0;
}

// Function: <EXTERNAL>::abort @ 0x1008a0
// External declaration - provided by libc
extern void abort(void);

// Function: exit
// Standard library function - provide proper definition
void exit(int status)
{
    // Stub: in a real implementation, this would perform cleanup
    // For embedded/stub code, just return
    (void)status;
    return;
}

// Function: <EXTERNAL>::mmap @ 0x1008b0
// External declaration - provided by libc
extern void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset);

// Function: <EXTERNAL>::munmap @ 0x1008c0
// External declaration - provided by libc
extern int munmap(void *__addr,size_t __len);

// Function: <EXTERNAL>::sysconf @ 0x1008d0
// External declaration - provided by libc
extern long sysconf(int __name);

// Function: <EXTERNAL>::mprotect @ 0x1008e0
// External declaration - provided by libc
extern int mprotect(void *__addr,size_t __len,int __prot);

// Function: main @ 0x100900
// Standard main function signature
int main(int argc, char *argv[])
{
 (void)argc;
 (void)argv;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: FUN_0010091c @ 0x10091c
void FUN_0010091c(void)
{
 byte extraout_var;
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: init_have_lse_atomics @ 0x100920
void init_have_lse_atomics(void)
{
 __getauxval(0x10);
 __aarch64_have_lse_atomics = 0;
 return;
}

// Function: _start @ 0x100980
// ARM64 Linux startup: param_1 is argc, argv is at param_1 + 8
void _start(unsigned long long param_1)
{
 // On ARM64, the initial stack layout is:
 // [sp + 0] = argc
 // [sp + 8] = argv[0]
 // [sp + 16] = argv[1]
 // ...
 // After argv: envp pointers, then auxv, then strings
 int argc = (int)param_1;
 char **argv = (char **)(&param_1 + 1);
 unsigned long sp;
 
 // Get current stack pointer for stack_end parameter
 __asm__ __volatile__ ("mov %0, sp" : "=r" (sp));
 
 __libc_start_main(main, &stack0x00000008, 0, 0, 0, (void *)sp);
}

// Function: call_weak_fn @ 0x1009b4
int call_weak_fn(void *ctx)
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
 ,0x117,"Jan 15 2026","03:01:33");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100c94
unsigned long long call_builtin_macros(void)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:33");
 return 0x17e;
}

// Function: FUN_00100cdc @ 0x100cdc
void FUN_00100cdc(void)
{
 __printf_chk(1,DAT_001014d0);
 __printf_chk(1,DAT_001014f8,0x40);
 __printf_chk(1,DAT_00101518,0x1e);
 __printf_chk(1,DAT_00101538,0x20);
 __printf_chk(1,DAT_00101558,0xdf22);
 __printf_chk(1,DAT_00101578,0x74);
 __printf_chk(1,DAT_00101598,0x13);
 __printf_chk(1,DAT_001015c8,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_001015e8,0x3c);
 __printf_chk(1,DAT_00101608,0x10);
 __printf_chk(1,DAT_00101628,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:33");
 __printf_chk(1,DAT_00101648,0x17e);
 return;
}

// Function: test_preprocessing_features @ 0x100ce0
void test_preprocessing_features(void)
{
 __printf_chk(1,DAT_001014d0);
 __printf_chk(1,DAT_001014f8,0x40);
 __printf_chk(1,DAT_00101518,0x1e);
 __printf_chk(1,DAT_00101538,0x20);
 __printf_chk(1,DAT_00101558,0xdf22);
 __printf_chk(1,DAT_00101578,0x74);
 __printf_chk(1,DAT_00101598,0x13);
 __printf_chk(1,DAT_001015c8,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,DAT_001015e8,0x3c);
 __printf_chk(1,DAT_00101608,0x10);
 __printf_chk(1,DAT_00101628,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:33");
 __printf_chk(1,DAT_00101648,0x17e);
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
int param_asm_clobber(unsigned long long *param_1,uint param_2)
{
 unsigned long long *puVar1;
 unsigned long uVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 unsigned long long *puVar2;
 if ((int)param_2 < 1) {
 return 0;
 }
 if (param_2 - 1 < 3) {
 uVar3 = 0;
 iVar4 = 0;
 }
 else {
 iVar4 = 0;
 iVar5 = 0;
 iVar6 = 0;
 iVar7 = 0;
 puVar1 = param_1;
 do {
 puVar2 = puVar1 + 2;
 iVar4 = iVar4 + (int)*puVar1;
 iVar5 = iVar5 + (int)((unsigned long)*puVar1 >> 0x20);
 iVar6 = iVar6 + (int)puVar1[1];
 iVar7 = iVar7 + (int)((unsigned long)puVar1[1] >> 0x20);
 puVar1 = puVar2;
 } while (puVar2 != param_1 + (unsigned long)((param_2 >> 2) - 1) * 2 + 2);
 iVar4 = iVar4 + iVar5 + iVar6 + iVar7;
 uVar3 = (unsigned long)(param_2 & 0xfffffffc);
 if ((param_2 & 3) == 0) {
 return iVar4;
 }
 }
 iVar5 = (int)uVar3;
 uVar3 = -(uVar3 >> 0x1f) & 0xfffffffc00000000 | uVar3 << 2;
 iVar4 = iVar4 + *(int *)((long)param_1 + (long)iVar5 * 4);
 if (iVar5 + 1 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 4);
 if (iVar5 + 2 < (int)param_2) {
 iVar4 = iVar4 + *(int *)((long)param_1 + uVar3 + 8);
 }
 }
 return iVar4;
}

// Function: call_asm_clobber @ 0x100ef4
unsigned long long call_asm_clobber(void)
{
 return 0xf;
}

// Function: call_asm_multi_insn @ 0x100f04
unsigned long long call_asm_multi_insn(void)
{
 return 0x2a;
}

// Function: param_asm_simd @ 0x100f10
unsigned long long param_asm_simd(unsigned long long *param_1,unsigned long long *param_2,unsigned long long *param_3)
{
 bool bVar1;
 unsigned long uVar2;
 unsigned long long uVar3;
 unsigned long long uVar4;
 uVar2 = (long)param_3 - (long)((long)param_2 + 4);
 bVar1 = (unsigned long)((long)param_3 - (long)((long)param_1 + 4)) < 9;
 if ((!bVar1 && 7 < uVar2) && (bVar1 || uVar2 != 8)) {
 uVar3 = *param_1;
 uVar4 = *param_2;
 param_3[1] = CONCAT44((int)((unsigned long)param_1[1] >> 0x20) + (int)((unsigned long)param_2[1] >> 0x20),
 (int)param_1[1] + (int)param_2[1]);
 *param_3 = CONCAT44((int)((unsigned long)uVar3 >> 0x20) + (int)((unsigned long)uVar4 >> 0x20),
 (int)uVar3 + (int)uVar4);
 return 0;
 }
 *(int *)param_3 = *(int *)param_1 + *(int *)param_2;
 *(int *)((long)param_3 + 4) = *(int *)((long)param_1 + 4) + *(int *)((long)param_2 + 4);
 *(int *)(param_3 + 1) = *(int *)(param_1 + 1) + *(int *)(param_2 + 1);
 *(int *)((long)param_3 + 0xc) = *(int *)((long)param_1 + 0xc) + *(int *)((long)param_2 + 0xc);
 return 0;
}

// Function: param_simd_intrinsics @ 0x100f90
unsigned long long param_simd_intrinsics(unsigned long long *param_1,unsigned long long *param_2,unsigned long long *param_3)
{
 bool bVar1;
 unsigned long uVar2;
 unsigned long long uVar3;
 unsigned long long uVar4;
 uVar2 = (long)param_3 - (long)((long)param_2 + 4);
 bVar1 = (unsigned long)((long)param_3 - (long)((long)param_1 + 4)) < 9;
 if ((!bVar1 && 7 < uVar2) && (bVar1 || uVar2 != 8)) {
 uVar3 = *param_1;
 uVar4 = *param_2;
 param_3[1] = CONCAT44((int)((unsigned long)param_1[1] >> 0x20) + (int)((unsigned long)param_2[1] >> 0x20),
 (int)param_1[1] + (int)param_2[1]);
 *param_3 = CONCAT44((int)((unsigned long)uVar3 >> 0x20) + (int)((unsigned long)uVar4 >> 0x20),
 (int)uVar3 + (int)uVar4);
 return 0;
 }
 *(int *)param_3 = *(int *)param_1 + *(int *)param_2;
 *(int *)((long)param_3 + 4) = *(int *)((long)param_1 + 4) + *(int *)((long)param_2 + 4);
 *(int *)(param_3 + 1) = *(int *)(param_1 + 1) + *(int *)(param_2 + 1);
 *(int *)((long)param_3 + 0xc) = *(int *)((long)param_1 + 0xc) + *(int *)((long)param_2 + 0xc);
 return 0;
}

// Function: call_asm_simd @ 0x101010
unsigned long long call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x101020
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: FUN_0010104c @ 0x10104c
int FUN_0010104c(int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101050
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}

// Function: FUN_0010107c @ 0x10107c
void FUN_0010107c(void)
{
 int iVar1;
 int iStack_c;
 long lStack_8;
 lStack_8 = __stack_chk_guard;
 iStack_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&iStack_c);
 if (lStack_8 - __stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: call_asm_atomic @ 0x101080
void call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 long local_8;
 local_8 = __stack_chk_guard;
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 if (local_8 - __stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
}

// Function: param_dynamic_code @ 0x1010e4
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

// Function: param_memory_protection @ 0x101150
unsigned int param_memory_protection(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 unsigned int *addr;
 __len = sysconf(0x1e);
 addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (addr == (unsigned int *)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *addr = 0x2a;
 iVar1 = mprotect(addr,__len,1);
 if (iVar1 == 0) {
 uVar2 = *addr;
 iVar1 = mprotect(addr,__len,3);
 if (iVar1 == 0) {
 *addr = 100;
 munmap(addr,__len);
 }
 else {
 uVar2 = 0xfffffffd;
 munmap(addr,__len);
 }
 }
 else {
 uVar2 = 0xfffffffe;
 munmap(addr,__len);
 }
 }
 return uVar2;
}

// Function: param_clobber_importance @ 0x101220
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: FUN_0010122c @ 0x10122c
unsigned int FUN_0010122c(void)
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

// Function: call_asm_privileged @ 0x101230
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

// Function: param_memory_clobber_demo @ 0x1012a4
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x1012b4
void test_asm_features(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 void *__addr;
 int local_c;
 long local_8;
 local_8 = __stack_chk_guard;
 __printf_chk(1,DAT_00101678,0);
 __printf_chk(1,DAT_001016a8,0xf);
 __printf_chk(1,DAT_001016c8,0xf);
 __printf_chk(1,DAT_001016e8,0x2a);
 __printf_chk(1,DAT_00101708,0x24);
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 __printf_chk(1,DAT_00101728,iVar1 + 5 + local_c);
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
 if (local_8 - __stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,DAT_00101748);
 return;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101400
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

// Function: _fini @ 0x101430
void _fini(void)
{
 return;
}

