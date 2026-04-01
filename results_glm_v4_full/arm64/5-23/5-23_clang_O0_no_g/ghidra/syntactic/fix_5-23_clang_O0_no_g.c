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
typedef long long off_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
#include <string.h>

/* Additional type definitions for decompiled code */
typedef void undefined;
typedef void (*code)(void);
#include <stdbool.h>



/* Function prototypes */
unsigned long __getauxval(unsigned long type);
void __cxa_finalize(void *dso_handle);
void deregister_tm_clones(void);
int header_func(int param_1);
long sysconf(int name);
void *mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset);
int munmap(void *addr, size_t length);
int mprotect(void *addr, size_t len, int prot);
int printf(const char *format, ...);
bool ExclusiveMonitorPass(void *addr, size_t size);
int ExclusiveMonitorsStatus(void);
void LOAcquire(void);
void LORelease(void);
static int __aarch64_ldadd4_acq_rel(int param_1, int *param_2);
char *builtin_strncpy(char *dest, const char *src, size_t n);

/* Global variables */
char __aarch64_have_lse_atomics = 0;
char completed_0 = 0;
void *__dso_handle = (void *)0;
int global_var = 0;
const char *DAT_00101719 = "call_macro_constants: %d\n";
const char *DAT_00101741 = "call_macro_functions: %lu\n";
const char *DAT_0010175c = "call_conditional_compile: %lu\n";
const char *DAT_00101777 = "call_multi_branch_compile: %lu\n";
const char *DAT_00101792 = "call_macro_recursion: %lu\n";
const char *DAT_001017b1 = "call_stringize: %lu\n";
const char *DAT_001017cd = "call_token_paste: %lu\n";
const char *DAT_001017f7 = "call_variadic_macro: %lu\n";
const char *DAT_00101812 = "call_macro_override: %lu\n";
const char *DAT_0010182d = "call_include_guard: %lu\n";
const char *DAT_00101848 = "call_builtin_macros: %lu\n";
const char *DAT_00101864 = "test_preprocessing_features: %d\n";
const char *DAT_00101897 = "call_asm_basic: %d\n";
const char *DAT_001018c2 = "call_asm_clobber: %lu\n";
const char *DAT_001018de = "call_asm_multi_insn: %lu\n";
const char *DAT_001018fa = "call_asm_simd: %lu\n";
const char *DAT_00101916 = "call_asm_atomic: %lu\n";
const char *DAT_00101932 = "call_asm_privileged: %lu\n";
const char *DAT_0010194e = "test_asm_features: %d\n";

/* Ghidra decompiler type definitions */
typedef uint32_t undefined4;
typedef uint64_t undefined8;
typedef uint8_t byte;
typedef uint32_t uint;
typedef unsigned long ulong;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-23/5-23_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001007a0 @ 001007a0 */

void FUN_001007a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: init_have_lse_atomics @ 00100880 */

void init_have_lse_atomics(void)

{
 byte extraout_var;
 
 __getauxval(0x10);
 __aarch64_have_lse_atomics = extraout_var & 1;
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





void deregister_tm_clones(void)
{
    return;
}





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_0010097c @ 0010097c */

void FUN_0010097c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: param_macro_constants @ 001009d4 */

int param_macro_constants(int param_1)

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

int call_macro_constants(int param_1)

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

int call_macro_functions(int param_1)

{
 return param_macro_functions(5,3);
}



/* Function: param_conditional_compile @ 00100aa0 */

int param_conditional_compile(int param_1)

{
 return param_1 * 3 + 2;
}



/* Function: call_conditional_compile @ 00100ad0 */

int call_conditional_compile(int param_1)

{
 return param_conditional_compile(10);
}



/* Function: param_multi_branch_compile @ 00100ae8 */

int param_multi_branch_compile(int param_1)

{
 return param_1 * 5 + 0xdef0;
}



/* Function: call_multi_branch_compile @ 00100b0c */

int call_multi_branch_compile(int param_1)

{
 return param_multi_branch_compile(10);
}



/* Function: param_macro_recursion @ 00100b24 */

int param_macro_recursion(int param_1)

{
 return param_1 + 0x10;
}



/* Function: call_macro_recursion @ 00100b78 */

int call_macro_recursion(int param_1)

{
 return param_macro_recursion(100);
}



/* Function: param_stringize @ 00100b90 */

ulong param_stringize(int param_1)

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

ulong call_stringize(int param_1)

{
 return param_stringize(param_1);
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

int call_token_paste(int param_1)

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

int call_variadic_macro(int param_1)

{
 return param_variadic_macro(10,0x14,0x1e);
}



/* Function: param_macro_override @ 00100d14 */

int param_macro_override(int param_1)

{
 return param_1 * 3 + 1;
}



/* Function: call_macro_override @ 00100d48 */

int call_macro_override(int param_1)

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

int call_include_guard(int param_1)

{
 param_include_guard();
 return 0;
}



/* Function: param_builtin_macros @ 00100da8 */

int param_builtin_macros(int param_1)

{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:01:38");
 return param_1 + 0x11a;
}



/* Function: call_builtin_macros @ 00100e54 */

int call_builtin_macros(int param_1)

{
 return param_builtin_macros(100);
}



/* Function: test_preprocessing_features @ 00100e6c */

int test_preprocessing_features(void)

{
 int iVar1;
 ulong uVar2;
 
 iVar1 = printf(DAT_00101719);
 uVar2 = call_macro_constants(iVar1);
 iVar1 = printf(DAT_00101741,uVar2 & 0xffffffff);
 uVar2 = call_macro_functions(iVar1);
 iVar1 = printf(DAT_0010175c,uVar2 & 0xffffffff);
 uVar2 = call_conditional_compile(iVar1);
 iVar1 = printf(DAT_00101777,uVar2 & 0xffffffff);
 uVar2 = call_multi_branch_compile(iVar1);
 iVar1 = printf(DAT_00101792,uVar2 & 0xffffffff);
 uVar2 = call_macro_recursion(iVar1);
 iVar1 = printf(DAT_001017b1,uVar2 & 0xffffffff);
 uVar2 = call_stringize(iVar1);
 iVar1 = printf(DAT_001017cd,uVar2 & 0xffffffff);
 uVar2 = call_token_paste(iVar1);
 iVar1 = printf(DAT_001017f7,uVar2 & 0xffffffff);
 uVar2 = call_variadic_macro(iVar1);
 iVar1 = printf(DAT_00101812,uVar2 & 0xffffffff);
 uVar2 = call_macro_override(iVar1);
 iVar1 = printf(DAT_0010182d,uVar2 & 0xffffffff);
 uVar2 = call_include_guard(iVar1);
 iVar1 = printf(DAT_00101848,uVar2 & 0xffffffff);
 uVar2 = call_builtin_macros(iVar1);
 iVar1 = printf(DAT_00101864,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: param_asm_basic @ 00100f64 */

int param_asm_basic(int param_1)

{
 return param_1 + 10;
}



/* Function: call_asm_basic @ 00100f84 */

int call_asm_basic(int param_1)

{
 return param_asm_basic(5);
}



/* Function: param_asm_clobber @ 00100f9c */

int param_asm_clobber(int *param_1,int param_2)

{
 undefined4 local_14;
 undefined4 local_10;
 
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + param_1[local_14];
 }
 return local_10;
}



/* Function: call_asm_clobber @ 00101000 */

int call_asm_clobber(int param_1)

{
 int local_30[2];
 int uStack_28[2];
 int local_20;
 
 uStack_28[0] = 3;
 uStack_28[1] = 1;
 local_30[0] = 1;
 local_30[1] = 2;
 local_20 = 5;
 return param_asm_clobber(local_30,5);
}



/* Function: param_asm_multi_insn @ 0010103c */

void param_asm_multi_insn(void *param_1,void *param_2,size_t param_3)

{
 memcpy(param_1,param_2,param_3);
 return;
}



/* Function: call_asm_multi_insn @ 00101070 */

int call_asm_multi_insn(void)

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
 bVar1 = ((char *)&local_40)[1] == 'o';
 }
 uVar2 = 0x2a;
 if (!bVar1) {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}



/* Function: param_asm_simd @ 001010f8 */

uint64_t param_asm_simd(int *param_1,int *param_2,int *param_3)

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
 int local_40[4];
 int local_30[4];
 int local_20[4];
 
 local_20[0] = 1;
 local_20[1] = 2;
 local_20[2] = 0;
 local_20[3] = 0;
 local_30[0] = 5;
 local_30[1] = 6;
 local_30[2] = 0;
 local_30[3] = 0;
 param_asm_simd(local_20,local_30,local_40);
 return local_40[0] + local_40[1] + local_40[2] + local_40[3];
}



/* Function: param_asm_atomic @ 0010123c */

int param_asm_atomic(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: param_atomic_c11 @ 00101288 */

int param_atomic_c11(int *param_1,int param_2)

{
 int iVar1;
 
 iVar1 = __aarch64_ldadd4_acq_rel(param_2,param_1);
 return iVar1 + param_2;
}



/* Function: call_asm_atomic @ 001012cc */

int call_asm_atomic(int param_1)

{
 int iVar1;
 int local_14;
 
 local_14 = 10;
 iVar1 = param_asm_atomic(&local_14,5);
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

int param_memory_protection(void)

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

int call_asm_privileged(int param_1)

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
 uVar2 = call_asm_basic(iVar1);
 iVar1 = printf(DAT_001018c2,uVar2 & 0xffffffff);
 uVar2 = call_asm_clobber(iVar1);
 iVar1 = printf(DAT_001018de,uVar2 & 0xffffffff);
 uVar2 = call_asm_multi_insn();
 iVar1 = printf(DAT_001018fa,uVar2 & 0xffffffff);
 uVar2 = call_asm_simd();
 iVar1 = printf(DAT_00101916,uVar2 & 0xffffffff);
 uVar2 = call_asm_atomic(iVar1);
 iVar1 = printf(DAT_00101932,uVar2 & 0xffffffff);
 uVar2 = call_asm_privileged(iVar1);
 iVar1 = printf(DAT_0010194e,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00101608 */

int main(void)

{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



/* Function: __aarch64_ldadd4_acq_rel @ 00101640 */

static int __aarch64_ldadd4_acq_rel(int param_1,int *param_2)

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



/* Function: ExclusiveMonitorPass @ 001016d8 */

bool ExclusiveMonitorPass(void *addr, size_t size)

{
    /* For simplicity, assume exclusive monitor passes */
    /* In a real ARM implementation, this would check hardware exclusive monitors */
    return true;
}


/* Function: ExclusiveMonitorsStatus @ 001016e0 */

int ExclusiveMonitorsStatus(void)

{
 return 0;
}



/* Function: LOAcquire @ 001016e8 */

void LOAcquire(void)

{
 return;
}



/* Function: LORelease @ 001016f0 */

void LORelease(void)

{
	return;
}



/* Function: builtin_strncpy @ 001016f8 */

char *builtin_strncpy(char *dest, const char *src, size_t n)

{
    size_t i;
    
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    for ( ; i < n; i++) {
        dest[i] = '\0';
    }
    return dest;
}

/* Function: memcpy @ 00101718 */

void *memcpy(void *dest, const void *src, size_t n)

{
    char *d = (char *)dest;
    const char *s = (const char *)src;
    size_t i;
    
    for (i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}


