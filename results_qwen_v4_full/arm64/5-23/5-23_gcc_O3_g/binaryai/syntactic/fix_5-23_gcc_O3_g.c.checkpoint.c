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
typedef int bool;
typedef unsigned int uint;
typedef long __off_t;

// Macro definitions
#define CONCAT44(hi, lo) (((unsigned long long)(unsigned int)(hi) << 32) | (unsigned int)(lo))

// Global variables
long ___stack_chk_guard;
void *__dso_handle;
char completed_0;
char __aarch64_have_lse_atomics;
int tmp_ldWn;
int tmp_stWn;
int global_var;

// External data references
extern char DAT_001014d0[];
extern char DAT_001014f8[];
extern char DAT_00101518[];
extern char DAT_00101538[];
extern char DAT_00101558[];
extern char DAT_00101578[];
extern char DAT_00101598[];
extern char DAT_001015c8[];
extern char DAT_001015e8[];
extern char DAT_00101608[];
extern char DAT_00101628[];
extern char DAT_00101648[];
extern char DAT_00101678[];
extern char DAT_001016a8[];
extern char DAT_001016c8[];
extern char DAT_001016e8[];
extern char DAT_00101708[];
extern char DAT_00101728[];
extern char DAT_00101748[];

// Data definitions for format strings
char DAT_001014d0[] = "Preprocessing Features Test\n";
char DAT_001014f8[] = "call_macro_constants: %llu\n";
char DAT_00101518[] = "call_macro_functions: %llu\n";
char DAT_00101538[] = "call_conditional_compile: %llu\n";
char DAT_00101558[] = "call_multi_branch_compile: %llu\n";
char DAT_00101578[] = "call_macro_recursion: %llu\n";
char DAT_00101598[] = "call_stringize: %llu\n";
char DAT_001015c8[] = "call_token_paste: %llu\n";
char DAT_001015e8[] = "call_variadic_macro: %llu\n";
char DAT_00101608[] = "call_macro_override: %llu\n";
char DAT_00101628[] = "call_include_guard: %llu\n";
char DAT_00101648[] = "call_builtin_macros: %llu\n";
char DAT_00101678[] = "ASM Features Test\n";
char DAT_001016a8[] = "call_asm_basic: %llu\n";
char DAT_001016c8[] = "call_asm_clobber: %llu\n";
char DAT_001016e8[] = "call_asm_multi_insn: %llu\n";
char DAT_00101708[] = "call_asm_simd: %llu\n";
char DAT_00101728[] = "call_asm_atomic: %d\n";
char DAT_00101748[] = "ASM Features Test Complete\n";

// External function declarations
void __getauxval(int param);
void __libc_start_main(void *main, unsigned long long argc, void *argv, void *init, void *fini, void *rtld_fini, void *stack_end);
void __cxa_finalize(void *dso_handle);
void __printf_chk(int flag, const char *format, ...);
void __stack_chk_fail(void);
void abort(void);
void *mmap(void *addr, size_t len, int prot, int flags, int fd, __off_t offset);
int munmap(void *addr, size_t len);
long sysconf(int name);
int mprotect(void *addr, size_t len, int prot);
void test_preprocessing_features(void);
void test_asm_features(void);
void init_have_lse_atomics(void);
int __aarch64_ldadd4_acq_rel(unsigned long long param_1, int *param_2);

// Stub function definitions for exclusive monitor operations
static int ExclusiveMonitorPass(void *addr, int size) { return 1; }
static char ExclusiveMonitorsStatus(void) { return 0; }
static void LOAcquire(void) { }
static void LORelease(void) { }

// Decompiled by BinaryAI
// SHA256: a00635cf4ebc3ad469c46543d64a360c32316e8fb159234a18604d8df9634eba





























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
 ,0x117,"Jan 15 2026","03:01:31");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x100c94
unsigned long long call_builtin_macros(void)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:31");
 return 0x17e;
}



// Function: test_preprocessing_features @ 0x100ce0
void test_preprocessing_features(void)
{
 __printf_chk(1,(const char *)DAT_001014d0);
 __printf_chk(1,(const char *)DAT_001014f8,0x40);
 __printf_chk(1,(const char *)DAT_00101518,0x1e);
 __printf_chk(1,(const char *)DAT_00101538,0x20);
 __printf_chk(1,(const char *)DAT_00101558,0xdf22);
 __printf_chk(1,(const char *)DAT_00101578,0x74);
 __printf_chk(1,(const char *)DAT_00101598,0x13);
 __printf_chk(1,(const char *)DAT_001015c8,0x3c);
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 __printf_chk(1,(const char *)DAT_001015e8,0x3c);
 __printf_chk(1,(const char *)DAT_00101608,0x10);
 __printf_chk(1,(const char *)DAT_00101628,500);
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:31");
 __printf_chk(1,(const char *)DAT_00101648,0x17e);
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



// Function: call_asm_simd @ 0x101010
unsigned long long call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x101020
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 iVar1 = __aarch64_ldadd4_acq_rel((unsigned long long)param_2,param_1);
 return iVar1 + param_2;
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

// Function: param_clobber_importance @ 0x101220
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
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
 local_8 = ___stack_chk_guard;
 __printf_chk(1,(const char *)DAT_00101678);
 __printf_chk(1,(const char *)DAT_001016a8,0xf);
 __printf_chk(1,(const char *)DAT_001016c8,0xf);
 __printf_chk(1,(const char *)DAT_001016e8,0x2a);
 __printf_chk(1,(const char *)DAT_00101708,0x24);
 local_c = 10;
 iVar1 = __aarch64_ldadd4_acq_rel(5,&local_c);
 __printf_chk(1,(const char *)DAT_00101728,iVar1 + 5 + local_c);
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
 if (local_8 - ___stack_chk_guard != 0) {
 __stack_chk_fail();
 }
 __printf_chk(1,(const char *)DAT_00101748);
 return;
}

// Function: __aarch64_ldadd4_acq_rel @ 0x101400
int __aarch64_ldadd4_acq_rel(unsigned long long param_1,int *param_2)
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
 *param_2 = iVar1 + (int)param_1;
 cVar2 = ExclusiveMonitorsStatus();
 }
 } while (cVar2 != '\0');
 return iVar1;
 }
 LOAcquire();
 tmp_ldWn = *param_2;
 iVar1 = tmp_ldWn;
 tmp_stWn = iVar1 + (int)param_1;
 iVar1 = tmp_stWn;
 *param_2 = iVar1;
 iVar1 = tmp_ldWn;
 LORelease();
 return iVar1;
}



