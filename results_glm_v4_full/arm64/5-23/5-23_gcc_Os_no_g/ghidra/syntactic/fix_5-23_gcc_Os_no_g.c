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
typedef long off_t;
#define bool _Bool
#define true 1
#define false 0

/* Ghidra decompiler type aliases */
typedef unsigned char byte;
typedef uint32_t undefined4;
typedef uint64_t undefined8;

/* External stack protection variables */
extern unsigned long __stack_chk_guard;

/* C runtime and system function declarations */
extern unsigned long __getauxval(unsigned long type);
extern void __cxa_finalize(void *dso_handle);
extern void deregister_tm_clones(void);
extern void *__dso_handle;

/* Global variables */
extern char completed_0;
extern int global_var;

/* Stack protection guard */
unsigned long ___stack_chk_guard;

/* Data symbol declarations for string constants */
extern const char DAT_001012ae[];
extern const char DAT_001012d6[];
extern const char DAT_001012f1[];
extern const char DAT_0010130c[];
extern const char DAT_00101327[];
extern const char DAT_00101346[];
extern const char DAT_00101362[];
extern const char DAT_0010138c[];
extern const char DAT_001013a7[];
extern const char DAT_001013c2[];
extern const char DAT_001013dd[];
extern const char DAT_001013f9[];
extern const char DAT_0010142c[];
extern const char DAT_00101457[];
extern const char DAT_00101473[];
extern const char DAT_0010148f[];
extern const char DAT_001014ab[];
extern const char DAT_001014c7[];
extern const char DAT_001014e3[];

/* Function declarations */
extern int __printf_chk(int flag, const char *format, ...);
extern void __stack_chk_fail(void);
int ExclusiveMonitorPass(void *addr, size_t size);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
int __aarch64_ldadd4_acq_rel(int *param_1, int param_2);
void param_asm_multi_insn(void *param_1, void *param_2, int param_3);
extern long sysconf(int name);
extern void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
extern int munmap(void *addr, size_t length);
extern int mprotect(void *addr, size_t len, int prot);
extern char *strncpy(char *dest, const char *src, size_t n);

/* Ghidra decompiler types */
typedef void (*code)(void);
typedef void undefined;

/* ARM LSE atomics support flag */
char __aarch64_have_lse_atomics;

/* Global variable definitions */
char completed_0 = '\0';
int global_var = 0;

/* Forward declarations */
void test_preprocessing_features(void);
void test_asm_features(void);

/* String constant definitions */
const char DAT_001012ae[] = "Test: param_macro_constants = %d\n";
const char DAT_001012d6[] = "Test: call_macro_constants = %d\n";
const char DAT_001012f1[] = "Test: call_macro_functions = %d\n";
const char DAT_0010130c[] = "Test: call_conditional_compile = %d\n";
const char DAT_00101327[] = "Test: call_multi_branch_compile = %d\n";
const char DAT_00101346[] = "Test: call_macro_recursion = %d\n";
const char DAT_00101362[] = "Test: call_stringize = %d\n";
const char DAT_0010138c[] = "Test: call_token_paste = %d\n";
const char DAT_001013a7[] = "Test: call_variadic_macro = %d\n";
const char DAT_001013c2[] = "Test: call_macro_override = %d\n";
const char DAT_001013dd[] = "Test: call_include_guard = %d\n";
const char DAT_001013f9[] = "Test: call_builtin_macros = %d\n";
const char DAT_0010142c[] = "Testing ASM features:\n";
const char DAT_00101457[] = "  call_asm_basic: %d\n";
const char DAT_00101473[] = "  call_asm_clobber: %d\n";
const char DAT_0010148f[] = "  call_asm_multi_insn: %d\n";
const char DAT_001014ab[] = "  call_asm_simd: %d\n";
const char DAT_001014c7[] = "  call_asm_atomic: %d\n";
const char DAT_001014e3[] = "  call_asm_privileged: %d\n";

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_gcc_Os_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00100810 @ 00100810 */

void FUN_00100810(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: main @ 00100900 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: FUN_0010091c @ 0010091c */

void FUN_0010091c(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}



/* Function: init_have_lse_atomics @ 00100920 */

__attribute__((constructor))
void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones */
void deregister_tm_clones(void)
{
  return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00100a3c @ 00100a3c */

void FUN_00100a3c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 00100a94 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}



/* Function: call_macro_constants @ 00100aa8 */

undefined8 call_macro_constants(void)

{
 return 0x40;
}



/* Function: param_macro_functions @ 00100ab0 */

int param_macro_functions(int param_1,int param_2)

{
 int iVar1;
 
 iVar1 = param_1;
 if (param_1 < param_2) {
 iVar1 = param_2;
 }
 return iVar1 + param_1 * param_1;
}



/* Function: call_macro_functions @ 00100ac0 */

undefined8 call_macro_functions(void)

{
 return 0x1e;
}



/* Function: param_conditional_compile @ 00100ac8 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad4 */

undefined8 call_conditional_compile(void)

{
 return 0x20;
}



/* Function: param_multi_branch_compile @ 00100adc */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100aec */

undefined8 call_multi_branch_compile(void)

{
 return 0xdf22;
}



/* Function: param_macro_recursion @ 00100af4 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100afc */

undefined8 call_macro_recursion(void)

{
 return 0x74;
}



/* Function: param_stringize @ 00100b04 */

undefined8 param_stringize(void)

{
 return 0x13;
}



/* Function: call_stringize @ 00100b0c */

undefined8 call_stringize(void)

{
 return 0x13;
}



/* Function: my_func @ 00100b14 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100b20 */

int param_token_paste(int param_1)

{
 return param_1 * 0xb + 5;
}



/* Function: call_token_paste @ 00100b30 */

undefined8 call_token_paste(void)

{
 return 0x3c;
}



/* Function: param_variadic_macro @ 00100b38 */

int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)

{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100b74 */

undefined4 call_variadic_macro(void)

{
 param_variadic_macro(10,0x14,0x1e);
 return 0x3c;
}



/* Function: param_macro_override @ 00100b84 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100b90 */

undefined8 call_macro_override(void)

{
 return 0x10;
}



/* Function: param_include_guard @ 00100b98 */

undefined8 param_include_guard(void)

{
 return 500;
}



/* Function: call_include_guard @ 00100ba0 */

undefined8 call_include_guard(void)

{
 return 500;
}



/* Function: param_builtin_macros @ 00100ba8 */

int param_builtin_macros(int param_1)

{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:35");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100bfc */

undefined4 call_builtin_macros(void)

{
 param_builtin_macros(100);
 return 0x11a;
}



/* Function: test_preprocessing_features @ 00100c04 */

void test_preprocessing_features(void)

{
 undefined4 uVar1;
 
 __printf_chk(1,DAT_001012ae);
 __printf_chk(1,DAT_001012d6,0x40);
 __printf_chk(1,DAT_001012f1,0x1e);
 __printf_chk(1,DAT_0010130c,0x20);
 __printf_chk(1,DAT_00101327,0xdf22);
 __printf_chk(1,DAT_00101346,0x74);
 __printf_chk(1,DAT_00101362,0x13);
 __printf_chk(1,DAT_0010138c,0x3c);
 uVar1 = call_variadic_macro();
 __printf_chk(1,DAT_001013a7,uVar1);
 __printf_chk(1,DAT_001013c2,0x10);
 __printf_chk(1,DAT_001013dd,500);
 uVar1 = call_builtin_macros();
 __printf_chk(1,DAT_001013f9,uVar1);
 return;
}



/* Function: param_asm_basic @ 00100d04 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100d0c */

undefined8 call_asm_basic(void)

{
 return 0xf;
}



/* Function: param_asm_clobber @ 00100d14 */

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



/* Function: call_asm_clobber @ 00100d3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_clobber(void)

{
 undefined8 uVar1;
 undefined8 local_20;
 undefined8 uStack_18;
 undefined4 local_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_20 = 0x200000001;
 uStack_18 = 0x400000003;
 local_10 = 5;
 uVar1 = param_asm_clobber(&local_20,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return uVar1;
}



/* Function: call_asm_multi_insn @ 00100da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_multi_insn(void)

{
 undefined4 uVar1;
 char local_38 [16];
 undefined8 local_28;
 undefined8 uStack_20;
 undefined8 local_18;
 undefined8 uStack_10;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_28 = 0;
 uStack_20 = 0;
 strncpy(local_38,"Hello ASM",10);
 local_18 = 0;
 uStack_10 = 0;
 param_asm_multi_insn(&local_28,local_38,9);
 if ((char)local_28 == 'H') {
 uVar1 = 0x2a;
 if (*((char *)&local_28 + 4) != 'o') {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_8 - ___stack_chk_guard == 0) {
 return uVar1;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: param_asm_multi_insn @ internal */

void param_asm_multi_insn(void *param_1, void *param_2, int param_3)

{
 int i;
 
 for (i = 0; i < param_3; i++) {
 *(char *)((long)param_1 + i) = *(char *)((long)param_2 + i);
 }
}



/* Function: param_asm_simd @ 00100e40 */

undefined8 param_asm_simd(void *param_1,void *param_2,void *param_3)

{
 long lVar1;
 
 lVar1 = 0;
 do {
 *(int *)((long)param_3 + lVar1) = *(int *)((long)param_1 + lVar1) + *(int *)((long)param_2 + lVar1);
 lVar1 = lVar1 + 4;
 } while (lVar1 != 0x10);
 return 0;
}



/* Function: call_asm_simd @ 00100e6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_simd(void)

{
 undefined8 local_38;
 undefined8 local_30;
 undefined8 local_28;
 undefined8 local_20;
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
 param_asm_simd(&local_38,&local_28,&local_18);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return 0;
}



/* Function: param_asm_atomic @ 00100f08 */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_1,param_2);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00100f34 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_1,param_2);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 00100f60 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int call_asm_atomic(void)

{
 int iVar1;
 int local_c;
 long local_8;
 
 local_8 = ___stack_chk_guard;
 local_c = 10;
 iVar1 = param_asm_atomic(&local_c,5);
 if (local_8 - ___stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
 }
 return iVar1;
}



/* Function: param_dynamic_code @ 00100fc0 */

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



/* Function: param_memory_protection @ 0010102c */

undefined4 param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 uVar2;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffffffffffff) {
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



/* Function: param_clobber_importance @ 001010f8 */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 00101104 */

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



/* Function: param_memory_clobber_demo @ 0010113c */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 0010114c */

void test_asm_features(void)

{
 undefined4 uVar1;
 
 __printf_chk(1,DAT_0010142c);
 __printf_chk(1,DAT_00101457,0xf);
 uVar1 = call_asm_clobber();
 __printf_chk(1,DAT_00101473,uVar1);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,DAT_0010148f,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,DAT_001014ab,uVar1);
 uVar1 = call_asm_atomic();
 __printf_chk(1,DAT_001014c7,uVar1);
 uVar1 = call_asm_privileged();
 __printf_chk(1,DAT_001014e3,uVar1);
 return;
}



/* Function: ExclusiveMonitorPass @ internal */

int ExclusiveMonitorPass(void *addr, size_t size)

{
 int result;
 __asm__ __volatile__ ("ldxr %w0, [%1]" : "=r"(result) : "r"(addr) : "memory");
 return result;
}



/* Function: ExclusiveMonitorsStatus @ internal */

char ExclusiveMonitorsStatus(void)

{
 return 0;
}



/* Function: LOAcquire @ internal */

void LOAcquire(void)

{
 __asm__ __volatile__ ("dsb ish" ::: "memory");
}



/* Function: LORelease @ internal */

void LORelease(void)

{
 __asm__ __volatile__ ("dmb ish" ::: "memory");
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101200 */

int __aarch64_ldadd4_acq_rel(int *param_1, int param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_1;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
 if (bVar2) {
 *param_1 = iVar3 + param_2;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_1;
 *param_1 = iVar3 + param_2;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 53 */
