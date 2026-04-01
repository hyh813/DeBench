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
typedef unsigned int uint;
typedef long __off_t;
#define NULL ((void*)0)

// Global variables for runtime support
void *__dso_handle;
char completed_0;
char __aarch64_have_lse_atomics;
uintptr_t ___stack_chk_guard;
uintptr_t __stack_chk_guard;
int tmp_ldWn;
int tmp_stWn;
void *stack0x00000008;
const char DAT_00101840[] = "Preprocessing Tests:";
const char DAT_00101868[] = "Macro Constants: %llu\n";
const char DAT_00101888[] = "Macro Functions: %llu\n";
const char DAT_001018a8[] = "Conditional Compile: %llu\n";
const char DAT_001018c8[] = "Multi-branch: %llu\n";
const char DAT_001018e8[] = "Macro Recursion: %llu\n";
const char DAT_00101908[] = "Stringize: %llu\n";
const char DAT_00101938[] = "Token Paste: %llu\n";
const char DAT_00101958[] = "Variadic Macro: %llu\n";
const char DAT_00101978[] = "Macro Override: %llu\n";
const char DAT_00101998[] = "Include Guard: %llu\n";
const char DAT_001019b8[] = "Builtin Macros: %llu\n";
const char DAT_00101a10[] = "Assembly Tests:";
const char DAT_00101a40[] = "ASM Basic: %llu\n";
const char DAT_00101a60[] = "ASM Clobber: %llu\n";
const char DAT_00101a80[] = "ASM MultiInsn: %llu\n";
const char DAT_00101aa0[] = "ASM SIMD: %llu\n";
const char DAT_00101ac0[] = "ASM Atomic: %llu\n";
const char DAT_00101ae0[] = "ASM Privileged: %llu\n";

// Forward declarations
int call_weak_fn(void);
int main(void);

// Runtime support functions for atomic operations
int __aarch64_ldadd4_acq_rel(int value, int *ptr);
int ExclusiveMonitorPass(void *addr, int val);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);

// External libc functions
extern void *memcpy(void *dest, const void *src, size_t n);
extern size_t strlen(const char *s);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern int __libc_start_main(int (*main)(void), void *stack, void *init, void *fini, void *rtld_fini, void *stack_end);
extern void __cxa_finalize(void *dso);
extern void __stack_chk_fail(void);
extern void __gmon_start__(void);
extern unsigned long __getauxval(unsigned long type);
extern void abort(void);
extern void *mmap(void *addr, size_t len, int prot, int flags, int fd, long offset);
extern int munmap(void *addr, size_t len);
extern long sysconf(int name);
extern int mprotect(void *addr, size_t len, int prot);

// Global variable
int global_var;

// Decompiled by BinaryAI
// SHA256: 14873cc56cc409af5535f8180d46a2e09bb3ed5d3448767a3bc61b759e36db64

// Function: _init @ 0x100860
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: FUN_00100880 @ 0x100880
// Empty function - was calling NULL pointer
void FUN_00100880(void)
{
 return;
}

// Function: <EXTERNAL>::memcpy @ 0x1008a0
// Already declared as extern above

// Function: <EXTERNAL>::strlen @ 0x1008b0
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::__libc_start_main @ 0x1008c0
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008d0
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008e0
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::__gmon_start__ @ 0x1008f0
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::__getauxval @ 0x100900
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::abort @ 0x100910
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::puts @ 0x100920
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::mmap @ 0x100930
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::munmap @ 0x100940
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::sysconf @ 0x100950
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::printf @ 0x100960
// Already declared as extern above - no definition needed

// Function: <EXTERNAL>::mprotect @ 0x100970
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: init_have_lse_atomics @ 0x100980
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}

// Function: _start @ 0x1009c0
void _start(unsigned long long param_1)
{
 void *param_9;
 __libc_start_main(main,param_9,&stack0x00000008,NULL,NULL,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x1009f4
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x100a10
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100a40
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100a7c @ 0x100a7c
void FUN_00100a7c(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(NULL);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100a80
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(NULL);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: param_macro_constants @ 0x100ad4
unsigned long long param_macro_constants(int param_1)
{
 unsigned long long uVar1;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 else {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x100afc
int call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x100b14
int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x100b48
int call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x100b64
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100b98
int call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x100bb0
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100bd8
int call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x100bf0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100c08
void call_macro_recursion(void)
{
 param_macro_recursion(100);
 return;
}

// Function: param_stringize @ 0x100c20
int param_stringize(void)
{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return (int)sVar1 + (int)sVar2 + (int)sVar3;
}

// Function: call_stringize @ 0x100c84
void call_stringize(void)
{
 param_stringize();
 return;
}

// Function: my_func @ 0x100c9c
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100cc0
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}

// Function: call_token_paste @ 0x100d00
void call_token_paste(void)
{
 param_token_paste(5);
 return;
}

// Function: param_variadic_macro @ 0x100d18
int param_variadic_macro(uint param_1,uint param_2,uint param_3)
{
 long lVar1;
 lVar1 = ___stack_chk_guard;
 printf("LOG: Values: %d, %d, %d\n",(unsigned long)param_1,(unsigned long)param_2,(unsigned long)param_3);
 if (lVar1 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100db0
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x100dd0
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100e04
void call_macro_override(void)
{
 param_macro_override(5);
 return;
}

// Function: header_func @ 0x100e1c
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: param_include_guard @ 0x100e38
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: call_include_guard @ 0x100e50
void call_include_guard(void)
{
 param_include_guard();
 return;
}

// Function: param_builtin_macros @ 0x100e64
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:25");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100f08
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x100f20
int test_preprocessing_features(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00101840);
 uVar2 = call_macro_constants();
 iVar1 = printf(DAT_00101868,uVar2);
 call_macro_functions();
 uVar2 = 0;
 iVar1 = printf(DAT_00101888,uVar2);
 call_conditional_compile();
 iVar1 = printf(DAT_001018a8,0ULL);
 call_multi_branch_compile();
 uVar2 = 0;
 iVar1 = printf(DAT_001018c8,uVar2);
 call_macro_recursion();
 uVar2 = 0;
 iVar1 = printf(DAT_001018e8,uVar2);
 call_stringize();
 uVar2 = 0;
 iVar1 = printf(DAT_00101908,uVar2);
 call_token_paste();
 uVar2 = 0;
 iVar1 = printf(DAT_00101938,uVar2);
 call_variadic_macro();
 uVar2 = 0;
 iVar1 = printf(DAT_00101958,uVar2);
 call_macro_override();
 uVar2 = 0;
 iVar1 = printf(DAT_00101978,uVar2);
 call_include_guard();
 uVar2 = 0;
 iVar1 = printf(DAT_00101998,uVar2);
 call_builtin_macros();
 uVar2 = 0;
 iVar1 = printf(DAT_001019b8,uVar2);
 return iVar1;
}

// Function: param_asm_basic @ 0x10101c
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x10103c
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x101054
int param_asm_clobber(long param_1,int param_2)
{
 int local_8;
 int local_4;
 local_8 = 0;
 for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
 local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
 }
 return local_8;
}

// Function: call_asm_clobber @ 0x1010b4
unsigned int call_asm_clobber(void)
{
 unsigned int uVar1;
 unsigned long long local_20;
 unsigned long long uStack_18;
 unsigned int local_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = param_asm_clobber((long)&local_20,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_asm_multi_insn @ 0x10112c
void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)
{
 memcpy(param_1,param_2,param_3);
 return;
}

// Function: call_asm_multi_insn @ 0x10115c
unsigned long long call_asm_multi_insn(void)
{
 unsigned long long uVar1;
 unsigned char local_38[8];  // Changed to byte array for char access
 unsigned char local_30[2]; // Changed to byte array for char access
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
 param_asm_multi_insn(&local_28,&local_38,9);
 if (((char)local_28 == 'H') && ((local_28 >> 32) & 0xFF == 'o')) {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x101200
unsigned long long param_asm_simd(long param_1,long param_2,long param_3)
{
 int local_4;
 for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
 *(int *)(param_3 + (long)local_4 * 4) =
 *(int *)(param_1 + (long)local_4 * 4) + *(int *)(param_2 + (long)local_4 * 4);
 }
 return 0;
}

// Function: param_simd_intrinsics @ 0x10127c
unsigned long long param_simd_intrinsics(long param_1,long param_2,long param_3)
{
 int local_4;
 for (local_4 = 0; local_4 < 4; local_4 = local_4 + 1) {
 *(int *)(param_3 + (long)local_4 * 4) =
 *(int *)(param_1 + (long)local_4 * 4) + *(int *)(param_2 + (long)local_4 * 4);
 }
 return 0;
}

// Function: call_asm_simd @ 0x1012f8
int call_asm_simd(void)
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
 local_c = local_18 + local_14 + local_10 + local_c;
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_c;
}

// Function: param_asm_atomic @ 0x1013b0
int param_asm_atomic(int *param_1, int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2, param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x1013e4
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x101414
int call_asm_atomic(void)
{
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_10 = 10;
 local_c = param_asm_atomic(&local_10,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return local_10 + local_c;
}

// Function: param_dynamic_code @ 0x101484
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

// Function: param_memory_protection @ 0x1014f4
unsigned int param_memory_protection(void)
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

// Function: param_clobber_importance @ 0x1015d8
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x1015fc
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x101660
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x101690
int test_asm_features(void)
{
 int iVar1;
 unsigned long uVar2;
 iVar1 = puts(DAT_00101a10);
 uVar2 = call_asm_basic();
 iVar1 = printf(DAT_00101a40,uVar2 & 0xffffffff);
 uVar2 = call_asm_clobber();
 iVar1 = printf(DAT_00101a60,uVar2 & 0xffffffff);
 uVar2 = call_asm_multi_insn();
 iVar1 = printf(DAT_00101a80,uVar2 & 0xffffffff);
 uVar2 = call_asm_simd();
 iVar1 = printf(DAT_00101aa0,uVar2 & 0xffffffff);
 uVar2 = call_asm_atomic();
 iVar1 = printf(DAT_00101ac0,uVar2 & 0xffffffff);
 uVar2 = call_asm_privileged();
 iVar1 = printf(DAT_00101ae0,uVar2 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x101728
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101750
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

// Function: _fini @ 0x101780
void _fini(void)
{
 return;
}

