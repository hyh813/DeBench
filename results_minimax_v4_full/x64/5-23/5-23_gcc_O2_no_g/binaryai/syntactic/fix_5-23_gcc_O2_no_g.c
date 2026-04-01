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
typedef long __off64_t;

// Global variables expected by runtime
char completed_0 = 0;
void *__dso_handle = 0;
int global_var = 0;

// External function declarations
void __stack_chk_fail(void);
int __cxa_finalize(void *);
void *mmap(void *, size_t, int, int, int, __off_t);
int munmap(void *, size_t);
int mprotect(void *, size_t, int);
long sysconf(int);
int __printf_chk(int, const char *, ...) __attribute__((format(printf, 2, 3)));
void __gmon_start__(void);
void __libc_start_main(int (*)(int, char**, char**), int, char**, void (*)(void), void (*)(void), void (*)(void), void *);
void *memcpy(void *, const void *, size_t);
void *memset(void *, int, size_t);

// Lock/Unlock macros for atomic operations
#define LOCK()   __asm__ __volatile__("lock")
#define UNLOCK() __asm__ __volatile__("")

// Data constants (format strings)
char DAT_001021f0[] = "Testing preprocessing features:\n";
char DAT_0010203d[] = "param_macro_constants: %d\n";
char DAT_00102058[] = "call_macro_constants: %d\n";
char DAT_00102073[] = "call_conditional_compile: %d\n";
char DAT_00102218[] = "param_multi_branch_compile: %d\n";
char DAT_0010208e[] = "param_macro_recursion: %d\n";
char DAT_00102238[] = "param_stringize: %llu\n";
char DAT_001020aa[] = "call_token_paste: %d\n";
char DAT_001020c5[] = "call_variadic_macro: %d\n";
char DAT_001020e0[] = "call_macro_override: %d\n";
char DAT_001020fb[] = "call_include_guard: %d\n";
char DAT_00102268[] = "call_builtin_macros: %d\n";
char DAT_00102298[] = "Testing asm features:\n";
char DAT_00102117[] = "call_asm_basic: %d\n";
char DAT_00102133[] = "call_asm_clobber: %d\n";
char DAT_0010214f[] = "call_asm_multi_insn: %llu\n";
char DAT_0010216b[] = "call_asm_simd: %u\n";
char DAT_00102187[] = "call_asm_atomic: %u\n";
char DAT_001021a3[] = "All asm tests passed!\n";

// Decompiled by BinaryAI
// SHA256: 8d1df0f44faa1c1847dd16ac549ffced611bfeff69faa4159c21f5a1e79f341e

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 // Empty stub - was calling null pointer
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101090
// Stub - actual implementation is linked from libc
int __cxa_finalize(void *param);

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1010a0
void __stack_chk_fail(void)
{
 // Empty stub - actual implementation is linked from libc
}

// Function: <EXTERNAL>::mmap @ 0x1010b0
// Stub - actual implementation is linked from libc
void *mmap(void *__addr, size_t __len, int __prot, int __flags, int __fd, __off_t __offset);

// Function: <EXTERNAL>::munmap @ 0x1010c0
// Stub - actual implementation is linked from libc
int munmap(void *__addr,size_t __len);

// Function: <EXTERNAL>::__printf_chk @ 0x1010d0
int __printf_chk(int __flag, const char *__fmt, ...)
{
 // Stub - actual implementation is linked from libc
 return 0;
}

// Function: <EXTERNAL>::mprotect @ 0x1010e0
// Stub - actual implementation is linked from libc
int mprotect(void *__addr, size_t __len, int __prot);

// Function: <EXTERNAL>::sysconf @ 0x1010f0
// Stub - actual implementation is linked from libc
long sysconf(int __name);

// Function: main @ 0x101100
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: _start @ 0x101120
void _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 (void)__libc_start_main(main,param_2,&auStack_8,0,0,param_1,auStack_8);
 for (;;) { }
}

// Function: deregister_tm_clones @ 0x101150
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101180
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011c0
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: param_macro_constants @ 0x101210
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x101230
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x101240
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return param_1 * param_1 + iVar1;
}

// Function: call_macro_functions @ 0x101260
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x101270
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x101280
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x101290
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1012a0
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x1012b0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x1012c0
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x1012d0
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x1012e0
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x1012f0
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x101300
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x101310
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x101320
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x101350
unsigned long long call_variadic_macro(void)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x101390
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x1013a0
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x1013b0
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x1013c0
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x1013d0
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x101420
unsigned long long call_builtin_macros(void)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:32");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x101470
void test_preprocessing_features(void)
{
 __printf_chk(1,&DAT_001021f0);
 __printf_chk(1,&DAT_0010203d,0x40);
 __printf_chk(1,&DAT_00102058,0x1e);
 __printf_chk(1,&DAT_00102073,0x20);
 __printf_chk(1,&DAT_00102218,0xdf22);
 __printf_chk(1,&DAT_0010208e,0x74);
 __printf_chk(1,&DAT_00102238,0x13);
 __printf_chk(1,&DAT_001020aa,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,&DAT_001020c5,0x3c);
 __printf_chk(1,&DAT_001020e0,0x10);
 __printf_chk(1,&DAT_001020fb,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:00:32");
 __printf_chk(1,&DAT_00102268,0x17e);
 return;
}

// Function: param_asm_basic @ 0x101600
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x101610
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x101630
int param_asm_clobber(long param_1,int param_2)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < param_2; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x101650
int call_asm_clobber(void)
{
 int iVar1;
 unsigned long uVar2;
 long in_FS_OFFSET;
 int local_28 [6];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = 0;
 for (uVar2 = 0; (int)uVar2 < 5; uVar2 = (unsigned long)((int)uVar2 + 1)) {
 iVar1 = iVar1 + local_28[uVar2];
 }
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1;
 }
 __stack_chk_fail();
}

// Function: param_asm_multi_insn @ 0x1016a0
void param_asm_multi_insn(char *param_1,char *param_2,long param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x1016c0
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 unsigned long long *puVar2;
 char *puVar3;
 long lVar4;
 long in_FS_OFFSET;
 unsigned long long local_42;
 unsigned short local_3a;
 char local_38 [16];
 char local_28 [16];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puVar3 = local_38;
 memset(local_38, 0, 16);
 puVar2 = &local_42;
 memset(local_28, 0, 16);
 local_42 = 0x5341206f6c6c6548;
 local_3a = 0x4d;
 for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
 *puVar3 = *(char *)((char *)puVar2);
 puVar3 = puVar3 + 1;
 puVar2 = (unsigned long long *)((char *)puVar2 + 1);
 }
 if (local_38[0] == 'H') {
 uVar1 = 0xffffffff;
 if (local_38[4] == 'o') {
 uVar1 = 0x2a;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: param_asm_simd @ 0x101760
unsigned long long param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 int auVar1 [4];
 auVar1[1] = param_1[1] + param_2[1];
 auVar1[0] = *param_1 + *param_2;
 auVar1[2] = param_1[2] + param_2[2];
 auVar1[3] = param_1[3] + param_2[3];
 memcpy(*param_3, auVar1, 16);
 return 0;
}

// Function: param_simd_intrinsics @ 0x101780
unsigned long long param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 iVar1 = param_2[1];
 iVar2 = param_2[2];
 iVar3 = param_2[3];
 iVar4 = param_1[1];
 iVar5 = param_1[2];
 iVar6 = param_1[3];
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar1 + iVar4;
 param_3[2] = iVar2 + iVar5;
 param_3[3] = iVar3 + iVar6;
 return 0;
}

// Function: call_asm_simd @ 0x1017a0
unsigned int call_asm_simd(void)
{
 long in_FS_OFFSET;
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0x24;
 }
 __stack_chk_fail();
}

// Function: param_asm_atomic @ 0x101840
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x101850
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101860
unsigned int call_asm_atomic(void)
{
 long in_FS_OFFSET;
 LOCK();
 UNLOCK();
 if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
 return 0x1e;
 }
 __stack_chk_fail();
}

// Function: param_dynamic_code @ 0x1018b0
unsigned int param_dynamic_code(unsigned int param_1)
{
 long lVar1;
 unsigned int uVar2;
 size_t __len;
 void *__addr;
 long in_FS_OFFSET;
 lVar1 = *(long *)(in_FS_OFFSET + 0x28);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 uVar2 = 0xffffffff;
 }
 else {
 *(unsigned int *)__addr = 0xc083f889;
 *(unsigned short *)((unsigned int *)__addr + 1) = 0xc305;
 uVar2 = ((unsigned int (*)(unsigned int))__addr)(param_1);
 munmap(__addr,__len);
 }
 if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
 return uVar2;
 }
 __stack_chk_fail();
}

// Function: param_memory_protection @ 0x101950
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

// Function: param_clobber_importance @ 0x101a20
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x101a40
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if ((iVar1 == 0xf) && (iVar2 == 0x2a)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101aa0
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101ac0
void test_asm_features(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned long uVar3;
 long in_FS_OFFSET;
 int local_28 [6];
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 __printf_chk(1,&DAT_00102298);
 __printf_chk(1,&DAT_00102117,0xf);
 iVar1 = 0;
 for (uVar3 = 0; (int)uVar3 < 5; uVar3 = (unsigned long)((int)uVar3 + 1)) {
 iVar1 = iVar1 + local_28[uVar3];
 }
 __printf_chk(1,&DAT_00102133,iVar1);
 uVar2 = call_asm_multi_insn();
 __printf_chk(1,&DAT_0010214f,uVar2);
 uVar2 = call_asm_simd();
 __printf_chk(1,&DAT_0010216b,uVar2);
 LOCK();
 UNLOCK();
 __printf_chk(1,&DAT_00102187,0x1e);
 call_asm_privileged();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_001021a3);
 return;
 }
 __stack_chk_fail();
}

// Function: _fini @ 0x101bcc
void _fini(void)
{
 return;
}

