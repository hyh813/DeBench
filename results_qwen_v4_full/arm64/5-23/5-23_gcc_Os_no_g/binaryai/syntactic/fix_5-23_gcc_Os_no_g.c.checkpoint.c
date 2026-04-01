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

// Global variables for stack protection (extern to avoid multiple definition)
extern unsigned long ___stack_chk_guard;
extern unsigned long __stack_chk_guard;

// Additional global variables
byte __aarch64_have_lse_atomics;
char completed_0;
extern void *__dso_handle;
unsigned long long stack0x00000008;
char DAT_001012ae[] = "Testing preprocessing features:\n";
char DAT_001012d6[] = "  param_macro_constants: %d\n";
char DAT_001012f1[] = "  call_macro_functions: %d\n";
char DAT_0010130c[] = "  call_conditional_compile: %d\n";
char DAT_00101327[] = "  call_multi_branch_compile: %d\n";
char DAT_00101346[] = "  call_macro_recursion: %d\n";
char DAT_00101362[] = "  call_stringize: %d\n";
char DAT_0010138c[] = "  call_token_paste: %d\n";
char DAT_001013a7[] = "  call_variadic_macro: %d\n";
char DAT_001013c2[] = "  call_macro_override: %d\n";
char DAT_001013dd[] = "  call_include_guard: %d\n";
char DAT_001013f9[] = "  call_builtin_macros: %d\n";
char DAT_0010142c[] = "Testing asm features:\n";
char DAT_00101457[] = "  call_asm_basic: %d\n";
char DAT_00101473[] = "  call_asm_clobber: %d\n";
char DAT_0010148f[] = "  call_asm_multi_insn: %d\n";
char DAT_001014ab[] = "  call_asm_simd: %d\n";
char DAT_001014c7[] = "  call_asm_atomic: %d\n";
char DAT_001014e3[] = "  call_asm_privileged: %d\n";

// Function declarations
void call_weak_fn(void);
void test_preprocessing_features(void);
void test_asm_features(void);
int param_asm_multi_insn(void *param_1, void *param_2, int param_3);
bool ExclusiveMonitorPass(int *param_1, int param_2);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int tmp_ldWn;
int tmp_stWn;
int global_var;
int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);

// Stub implementations for undefined functions
void call_weak_fn(void) {
 return;
}

void LOAcquire(void) {
 return;
}

void LORelease(void) {
 return;
}

bool ExclusiveMonitorPass(int *param_1, int param_2) {
 return 1;
}

char ExclusiveMonitorsStatus(void) {
 return 0;
}

int param_asm_multi_insn(void *param_1, void *param_2, int param_3) {
 int i;
 for (i = 0; i < param_3; i++) {
  ((char*)param_1)[i] = ((char*)param_2)[i];
 }
 return 0;
}

// Decompiled by BinaryAI
// SHA256: 86bb7252acc36acdbebf863dfe149a59652273106cf818b24098d6b2d71f7754

// Function: _init @ 0x1007f0
static int _init_impl(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_00100810 @ 0x100810
void FUN_00100810(void)
{
 return;
}

// External function declarations
extern void * memcpy(void *__dest,void *__src,size_t __n);
extern void __libc_start_main(void *main_fn, unsigned long long argc, void **argv, void *init, void *fini, void *rtld_fini);
extern void __cxa_finalize(void *param_1);
extern int __printf_chk(int __flag, const char *__format, ...);
extern void __stack_chk_fail(void);
extern void __gmon_start__(void);
extern unsigned long __getauxval(unsigned long param_1);
extern void abort(void);
extern void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset);
extern int munmap(void *__addr,size_t __len);
extern long sysconf(int __name);
extern int mprotect(void *__addr,size_t __len,int __prot);

// Function: main @ 0x100900
unsigned long long main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: init_have_lse_atomics @ 0x100920
void init_have_lse_atomics(void)
{
 byte extraout_var;
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}











// Function: param_macro_constants @ 0x100a94
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x100aa8
unsigned long long call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x100ab0
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x100ac0
unsigned long long call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x100ac8
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x100ad4
unsigned long long call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x100adc
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x100aec
unsigned long long call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x100af4
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x100afc
unsigned long long call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x100b04
unsigned long long param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x100b0c
unsigned long long call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x100b14
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x100b20
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x100b30
unsigned long long call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x100b38
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x100b74
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x100b84
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x100b90
unsigned long long call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x100b98
unsigned long long param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x100ba0
unsigned long long call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x100ba8
int param_builtin_macros(int param_1)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:35");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100bfc
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x100c04
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,DAT_001012ae);
 __printf_chk(1,DAT_001012d6,0x40);
 __printf_chk(1,DAT_001012f1,0x1e);
 __printf_chk(1,DAT_0010130c,0x20);
 __printf_chk(1,DAT_00101327,0xdf22);
 __printf_chk(1,DAT_00101346,0x74);
 __printf_chk(1,DAT_00101362,0x13);
 __printf_chk(1,DAT_0010138c,0x3c);
 call_variadic_macro();
 __printf_chk(1,DAT_001013a7,1);
 __printf_chk(1,DAT_001013c2,0x10);
 __printf_chk(1,DAT_001013dd,500);
 call_builtin_macros();
 __printf_chk(1,DAT_001013f9,1);
 return;
}

// Function: param_asm_basic @ 0x100d04
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x100d0c
unsigned long long call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x100d14
int param_asm_clobber(void *param_1,int param_2)
{
 int iVar1;
 long lVar2;
 iVar1 = 0;
 for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
 iVar1 = iVar1 + *(int *)((long)param_1 + lVar2 * 4);
 }
 return iVar1;
}

// Function: call_asm_clobber @ 0x100d3c
void call_asm_clobber(void)
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
 uVar1 = param_asm_clobber(&local_20,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: call_asm_multi_insn @ 0x100da8
void call_asm_multi_insn(void)
{
 unsigned int uVar1;
 unsigned char local_38[8];
 unsigned short local_30;
 unsigned long long local_28;
 unsigned long long uStack_20;
 unsigned long long local_18;
 unsigned long long uStack_10;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_28 = 0;
 uStack_20 = 0;
 local_38[0] = 'H';
 local_38[1] = 'e';
 local_38[2] = 'l';
 local_38[3] = 'l';
 local_38[4] = 'o';
 local_38[5] = ' ';
 local_38[6] = 'A';
 local_38[7] = 'S';
 local_30 = 'M';
 local_18 = 0;
 uStack_10 = 0;
 param_asm_multi_insn(&local_28,local_38,9);
 if ((char)local_28 == 'H') {
 uVar1 = 0x2a;
 if (((char*)(&local_28))[4] != 'o') {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return;
 }
 __stack_chk_fail();
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

// Function: call_asm_simd @ 0x100e6c
void call_asm_simd(void)
{
 unsigned long long local_38;
 unsigned long long local_30;
 unsigned long long local_28;
 unsigned long long local_20;
 int local_18;
 int iStack_14;
 int local_10;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_38 = 0x200000001;
 local_30 = 0x400000003;
 local_28 = 0x600000005;
 local_20 = 0x800000007;
 param_asm_simd((long)&local_38, (long)&local_28, (long)&local_18);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_asm_atomic @ 0x100f08
int param_asm_atomic(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x100f34
int param_atomic_c11(unsigned long long param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)param_1);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x100f60
void call_asm_atomic(void)
{
 int iVar1;
 int local_c;
 long local_8;
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = param_asm_atomic((unsigned long long)&local_c,5);
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 return;
}

// Function: param_dynamic_code @ 0x100fc0
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

// Function: param_memory_protection @ 0x10102c
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

// Function: param_clobber_importance @ 0x1010f8
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x101104
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

// Function: param_memory_clobber_demo @ 0x10113c
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10114c
void test_asm_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,DAT_0010142c);
 __printf_chk(1,DAT_00101457,0xf);
 call_asm_clobber();
 __printf_chk(1,DAT_00101473,1);
 call_asm_multi_insn();
 __printf_chk(1,DAT_0010148f,1);
 call_asm_simd();
 __printf_chk(1,DAT_001014ab,1);
 call_asm_atomic();
 __printf_chk(1,DAT_001014c7,1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001014e3,uVar1);
 return;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101200
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

// Function: _fini @ 0x101230
static void _fini_impl(void)
{
 return;
}

