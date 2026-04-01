/* Auto-injected type definitions by preprocessor */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <stdint.h>
typedef unsigned int undefined4;
typedef unsigned long undefined8;
typedef unsigned long ulong;
typedef unsigned char byte;
typedef unsigned int uint;
typedef unsigned int undefined;
typedef void (*code)(void);

/* Standard library function declarations */
extern int printf(const char *format, ...);
extern size_t strlen(const char *s);
extern char *strncpy(char *dest, const char *src, size_t n);
extern void *memcpy(void *dest, const void *src, size_t n);

/* Global variables */
byte __aarch64_have_lse_atomics = 0;
byte completed_0 = 0;
int global_var = 0;

/* External data declarations */
const char DAT_00101719[];
const char DAT_00101741[];
const char DAT_0010175c[];
const char DAT_00101777[];
const char DAT_00101792[];
const char DAT_001017b1[];
const char DAT_001017cd[];
const char DAT_001017f7[];
const char DAT_00101812[];
const char DAT_0010182d[];
const char DAT_00101848[];
const char DAT_00101864[];
const char DAT_00101897[];
const char DAT_001018c2[];
const char DAT_001018de[];
const char DAT_001018fa[];
const char DAT_00101916[];
const char DAT_00101932[];
const char DAT_0010194e[];

/* String data definitions */
const char DAT_00101719[] = "Testing preprocessing features...\n";
const char DAT_00101741[] = "Macro constants result: %d\n";
const char DAT_0010175c[] = "Macro functions result: %d\n";
const char DAT_00101777[] = "Conditional compile result: %d\n";
const char DAT_00101792[] = "Multi branch compile result: %d\n";
const char DAT_001017b1[] = "Macro recursion result: %d\n";
const char DAT_001017cd[] = "Stringize result: %lu\n";
const char DAT_001017f7[] = "Token paste result: %d\n";
const char DAT_00101812[] = "Variadic macro result: %d\n";
const char DAT_0010182d[] = "Macro override result: %d\n";
const char DAT_00101848[] = "Include guard result: %d\n";
const char DAT_00101864[] = "Builtin macros result: %d\n";
const char DAT_00101897[] = "Testing ASM features...\n";
const char DAT_001018c2[] = "ASM basic result: %d\n";
const char DAT_001018de[] = "ASM clobber result: %d\n";
const char DAT_001018fa[] = "ASM multi insn result: %d\n";
const char DAT_00101916[] = "ASM SIMD result: %d\n";
const char DAT_00101932[] = "ASM atomic result: %d\n";
const char DAT_0010194e[] = "ASM privileged result: %d\n";

/* External function declarations */
unsigned long __getauxval(unsigned long);
void __cxa_finalize(void *);
void deregister_tm_clones(void);
char ExclusiveMonitorPass(int *, long);
char ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
long sysconf(int);
void *mmap(void *, size_t, int, int, int, long);
int munmap(void *, size_t);
int mprotect(void *, size_t, int);
char *builtin_strncpy(char *, const char *, size_t);
int __aarch64_ldadd4_acq_rel(int param_1,int *param_2);

/* Forward declarations for internal functions */
int header_func(int);

/* Stub implementations for missing external functions */
char ExclusiveMonitorPass(int *param_1, long param_2)
{
 return 1;
}

char ExclusiveMonitorsStatus(void)
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

unsigned long __getauxval(unsigned long type)
{
 return 0;
}

void __cxa_finalize(void *d)
{
 return;
}

extern void *__dso_handle;
void *__dso_handle = 0;

void deregister_tm_clones(void)
{
 return;
}

long sysconf(int name)
{
 return 4096;
}

void *mmap(void *addr, size_t length, int prot, int flags, int fd, long offset)
{
 return (void *)0x1000000;
}

int munmap(void *addr, size_t length)
{
 return 0;
}

int mprotect(void *addr, size_t len, int prot)
{
 return 0;
}

char *builtin_strncpy(char *dest, const char *src, size_t n)
{
 return strncpy(dest, src, n);
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */








/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 extraout_var = __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010097c @ 0010097c */

void FUN_0010097c(void)

{
 if (completed_0 == 0) {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001009d4 */

undefined4 param_macro_constants(int param_1)

{
 undefined4 local_4;
 
 if (param_1 < 0x401) {
 local_4 = 0x200;
 }
 else {
 local_4 = 0x40;
 }
 return local_4;
}



/* Function: call_macro_constants @ 00100a10 */

undefined4 call_macro_constants(void)

{
 return param_macro_constants(0x800);
}



/* Function: param_macro_functions @ 00100a28 */

int param_macro_functions(int param_1,int param_2)

{
 int local_10;
 
 local_10 = param_2;
 if (param_2 < param_1) {
 local_10 = param_1;
 }
 return param_1 * param_1 + local_10;
}



/* Function: call_macro_functions @ 00100a84 */

int call_macro_functions(void)

{
 return param_macro_functions(5,3);
}



/* Function: param_conditional_compile @ 00100aa0 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad0 */

int call_conditional_compile(void)

{
 return param_conditional_compile(10);
}



/* Function: param_multi_branch_compile @ 00100ae8 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b0c */

int call_multi_branch_compile(void)

{
 return param_multi_branch_compile(10);
}



/* Function: param_macro_recursion @ 00100b24 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100b78 */

int call_macro_recursion(void)

{
 return param_macro_recursion(100);
}



/* Function: param_stringize @ 00100b90 */

ulong param_stringize(void)

{
 size_t sVar1;
 size_t sVar2;
 size_t sVar3;
 
 sVar1 = strlen("Hello World");
 sVar2 = strlen("1.2.3");
 sVar3 = strlen("155");
 return sVar1 + sVar2 + sVar3 & 0xffffffff;
}



/* Function: call_stringize @ 00100c08 */

ulong call_stringize(void)

{
 return param_stringize();
}



/* Function: my_func @ 00100c20 */

int my_func(int param_1)

{
 return param_1 * 10;
}



/* Function: param_token_paste @ 00100c3c */

int param_token_paste(int param_1)

{
 int iVar1;
 
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}



/* Function: call_token_paste @ 00100c84 */

int call_token_paste(void)

{
 return param_token_paste(5);
}



/* Function: param_variadic_macro @ 00100c9c */

int param_variadic_macro(uint param_1,uint param_2,uint param_3)

{
 printf("LOG: Values: %d, %d, %d\n",(ulong)param_1,(ulong)param_2,(ulong)param_3);
 return param_1 + 0x32;
}



/* Function: call_variadic_macro @ 00100cf4 */

int call_variadic_macro(void)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 00100d14 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100d48 */

int call_macro_override(void)

{
 return param_macro_override(5);
}



/* Function: param_include_guard @ 00100d60 */

void param_include_guard(void)

{
 header_func(5);
 return;
}



/* Function: header_func @ 00100d78 */

int header_func(int param_1)

{
 return param_1 * 100;
}



/* Function: call_include_guard @ 00100d94 */

void call_include_guard(void)

{
 param_include_guard();
}



/* Function: param_builtin_macros @ 00100da8 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:38");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100e54 */

int call_builtin_macros(void)

{
 return param_builtin_macros(100);
}



/* Function: test_preprocessing_features @ 00100e6c */

int test_preprocessing_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00101719);
 uVar2 = (ulong)call_macro_constants();
 iVar1 = printf(DAT_00101741,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_macro_functions();
 iVar1 = printf(DAT_0010175c,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_conditional_compile();
 iVar1 = printf(DAT_00101777,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_multi_branch_compile();
 iVar1 = printf(DAT_00101792,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_macro_recursion();
 iVar1 = printf(DAT_001017b1,(uint)(uVar2 & 0xffffffff));
 uVar2 = call_stringize();
 iVar1 = printf(DAT_001017cd,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_token_paste();
 iVar1 = printf(DAT_001017f7,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_variadic_macro();
 iVar1 = printf(DAT_00101812,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_macro_override();
 iVar1 = printf(DAT_0010182d,(uint)(uVar2 & 0xffffffff));
 call_include_guard();
 iVar1 = printf(DAT_00101848,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_builtin_macros();
 iVar1 = printf(DAT_00101864,(uint)(uVar2 & 0xffffffff));
 return iVar1;
}



/* Function: param_asm_basic @ 00100f64 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100f84 */

int call_asm_basic(void)

{
 return param_asm_basic(5);
}



/* Function: param_asm_clobber @ 00100f9c */

int param_asm_clobber(long param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
 }
 return local_10;
}



/* Function: call_asm_clobber @ 00101000 */

int call_asm_clobber(void)

{
 undefined8 local_30;
 undefined8 uStack_28;
 undefined4 local_20;
 
 uStack_28 = 0x400000003;
 local_30 = 0x200000001;
 local_20 = 5;
 return param_asm_clobber((long)&local_30,5);
}



/* Function: param_asm_multi_insn @ 0010103c */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return;
}



/* Function: call_asm_multi_insn @ 00101070 */

undefined4 call_asm_multi_insn(void)

{
 bool bVar1;
 undefined4 uVar2;
 undefined8 local_40;
 undefined8 uStack_38;
 undefined8 local_30;
 undefined8 uStack_28;
 char local_20 [16];
 
 builtin_strncpy(local_20,"Hello ASM",10);
 uStack_38 = 0;
 local_40 = 0;
 uStack_28 = 0;
 local_30 = 0;
 param_asm_multi_insn(&local_40,local_20,9);
 bVar1 = false;
 if ((char)local_40 == 'H') {
 bVar1 = ((char*)&local_40)[4] == 'o';
 }
 uVar2 = 0x2a;
 if (!bVar1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_asm_simd @ 001010f8 */

undefined8 param_asm_simd(long param_1,long param_2,long param_3)

{
 undefined4 local_1c;
 
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 *(int *)(param_3 + (long)local_1c * 4) =
 *(int *)(param_1 + (long)local_1c * 4) + *(int *)(param_2 + (long)local_1c * 4);
 }
 return 0;
}



/* Function: param_simd_intrinsics @ 00101168 */

undefined8 param_simd_intrinsics(long param_1,long param_2,long param_3)

{
 undefined4 local_1c;
 
 for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
 *(int *)(param_3 + (long)local_1c * 4) =
 *(int *)(param_1 + (long)local_1c * 4) + *(int *)(param_2 + (long)local_1c * 4);
 }
 return 0;
}



/* Function: call_asm_simd @ 001011d8 */

int call_asm_simd(void)

{
 int local_40;
 int local_3c;
 int local_38;
 int local_34;
 undefined8 local_30;
 undefined8 uStack_28;
 undefined8 local_20;
 undefined8 uStack_18;
 
 uStack_18 = 0x400000003;
 local_20 = 0x200000001;
 uStack_28 = 0x800000007;
 local_30 = 0x600000005;
 param_asm_simd((long)&local_20,(long)&local_30,(long)&local_40);
 local_3c = 0;
 local_38 = 0;
 local_34 = 0;
 return local_40 + local_3c + local_38 + local_34;
}



/* Function: param_asm_atomic @ 0010123c */

int param_asm_atomic(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)(long)param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101288 */

int param_atomic_c11(undefined8 param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,(int *)(long)param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 001012cc */

int call_asm_atomic(void)

{
 int iVar1;
 int local_14;
 
 local_14 = 10;
 iVar1 = param_asm_atomic((undefined8)(long)&local_14,5);
 return local_14 + iVar1;
}



/* Function: param_dynamic_code @ 00101308 */

int param_dynamic_code(int param_1)

{
 size_t __len;
 void *__addr;
 undefined4 local_14;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffffffffffff) {
 local_14 = -1;
 }
 else {
 local_14 = param_1 + 5;
 munmap(__addr,__len);
 }
 return local_14;
}



/* Function: param_memory_protection @ 00101394 */

undefined4 param_memory_protection(void)

{
 int iVar1;
 size_t __len;
 undefined4 *__addr;
 undefined4 local_14;
 
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (undefined4 *)0xffffffffffffffff) {
 local_14 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar1 = mprotect(__addr,__len,1);
 if (iVar1 == 0) {
 local_14 = *__addr;
 iVar1 = mprotect(__addr,__len,3);
 if (iVar1 == 0) {
 *__addr = 100;
 munmap(__addr,__len);
 }
 else {
 munmap(__addr,__len);
 local_14 = 0xfffffffd;
 }
 }
 else {
 munmap(__addr,__len);
 local_14 = 0xfffffffe;
 }
 }
 return local_14;
}



/* Function: param_clobber_importance @ 0010149c */

int param_clobber_importance(int param_1,int param_2)

{
 return (param_1 + param_2) * 2;
}



/* Function: call_asm_privileged @ 001014c0 */

int call_asm_privileged(void)

{
 int iVar1;
 int iVar2;
 int local_14;
 
 local_14 = param_dynamic_code(10);
 iVar1 = param_memory_protection();
 iVar2 = param_clobber_importance(3,7);
 if (((local_14 == 0xf) && (iVar1 == 0x2a)) && (iVar2 == 0x14)) {
 local_14 = 0x4d;
 }
 return local_14;
}



/* Function: param_memory_clobber_demo @ 00101548 */

int param_memory_clobber_demo(void)

{
 return global_var + 0x32;
}



/* Function: test_asm_features @ 00101574 */

int test_asm_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00101897);
 uVar2 = (ulong)call_asm_basic();
 iVar1 = printf(DAT_001018c2,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_asm_clobber();
 iVar1 = printf(DAT_001018de,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_asm_multi_insn();
 iVar1 = printf(DAT_001018fa,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_asm_simd();
 iVar1 = printf(DAT_00101916,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_asm_atomic();
 iVar1 = printf(DAT_00101932,(uint)(uVar2 & 0xffffffff));
 uVar2 = (ulong)call_asm_privileged();
 iVar1 = printf(DAT_0010194e,(uint)(uVar2 & 0xffffffff));
 return iVar1;
}



/* Function: main @ 00101608 */

undefined4 main(void)

{
 init_have_lse_atomics();
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101640 */

int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

{
 char cVar1;
 bool bVar2;
 int iVar3;
 
 if (__aarch64_have_lse_atomics == '\0') {
 do {
 iVar3 = *param_2;
 cVar1 = '\x01';
 bVar2 = (bool)ExclusiveMonitorPass(param_2,0x10);
 if (bVar2) {
 *param_2 = iVar3 + param_1;
 cVar1 = ExclusiveMonitorsStatus();
 }
 } while (cVar1 != '\0');
 return iVar3;
 }
 LOAcquire();
 iVar3 = *param_2;
 *param_2 = iVar3 + param_1;
 LORelease();
 return iVar3;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 55 */
