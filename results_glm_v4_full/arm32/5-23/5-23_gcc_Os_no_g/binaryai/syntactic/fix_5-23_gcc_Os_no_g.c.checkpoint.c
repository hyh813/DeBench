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
typedef unsigned long long ulonglong;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;
typedef _Bool bool;
typedef long __off_t;
#define NULL ((void*)0)

// Decompiled by BinaryAI
// SHA256: 972ef86a639f7d731c6140f145d9091b0d4021d529ddc71104a656f821ac50b7

// External function declarations
int SUB_ffff0fc0(int oldval, int newval, int *ptr);
void SUB_ffff0fa0(void);

// Stub implementations
void SUB_ffff0fa0(void)
{
 __sync_synchronize();
 return;
}

int SUB_ffff0fc0(int oldval, int newval, int *ptr)
{
 if (*ptr == oldval) {
 *ptr = newval;
 return 0;
 }
 return 1;
}
void param_asm_multi_insn(unsigned int *param_1,void *param_2,int param_3);
int call_asm_clobber(void);
unsigned int call_asm_multi_insn(void);

// Function: call_asm_clobber
int call_asm_clobber(void)
{
 int result = 0;
 __asm__ __volatile__("nop" : : : "memory");
 return result;
}

// Function: param_asm_multi_insn
void param_asm_multi_insn(unsigned int *param_1, void *param_2, int param_3)
{
 char *src = (char *)param_2;
 char *dst = (char *)param_1;
 if (param_3 > 0 && src != NULL && dst != NULL) {
  dst[0] = src[0];
  ((char *)dst + 8)[0] = src[3];
 }
 return;
}

unsigned int call_asm_simd(void);
unsigned long long call_asm_atomic(unsigned int param_1,unsigned int param_2,unsigned int param_3);
int call_asm_privileged(void);
void __gmon_start__(void);

// Global variable declarations
char completed_0 = 0;
extern char DAT_00011cfa[];
extern char DAT_[];
extern char DAT_00011d22[];
extern char DAT_00011d3d[];
extern char DAT_00011d58[];
extern char DAT_00011d73[];
extern char DAT_00011d92[];
extern char DAT_00011dae[];
extern char DAT_00011dd8[];
extern char DAT_00011df3[];
extern char DAT_00011e0e[];
extern char DAT_00011e29[];
extern char DAT_00011e45[];
extern char DAT_00011e78[];
extern char DAT_00011ea3[];
extern char DAT_00011ebf[];
extern char DAT_00011edb[];
extern char DAT_00011ef7[];
extern char DAT_00011f13[];
extern char DAT_00011f2f[];
int global_var = 0;



// Function: <EXTERNAL>::__libc_start_main @ 0x10470
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **ubp_av,
                       void (*init)(void), void (*fini)(void), void (*rtld_fini)(void),
                       void *stack_end)
{
 // Stub for system __libc_start_main
 return;
}

// Function: <EXTERNAL>::mprotect @ 0x1047c
int mprotect(void *__addr,size_t __len,int __prot)
{
 int iVar1;
 iVar1 = mprotect(__addr,__len,__prot);
 return iVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x10488
void * memcpy(void *__dest,void *__src,size_t __n)
{
 void *pvVar1;
 pvVar1 = memcpy(__dest,__src,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10494
void __stack_chk_fail(void)
{
 while(1);
}

// Function: <EXTERNAL>::sysconf @ 0x104a0
long sysconf(int __name)
{
 long lVar1;
 lVar1 = sysconf(__name);
 return lVar1;
}

// Function: <EXTERNAL>::mmap @ 0x104b8
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 void *pvVar1;
 pvVar1 = mmap(__addr,__len,__prot,__flags,__fd,__offset);
 return pvVar1;
}

// Function: <EXTERNAL>::memset @ 0x104c4
void * memset(void *__s,int __c,size_t __n)
{
 void *pvVar1;
 pvVar1 = memset(__s,__c,__n);
 return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x104d0
int __printf_chk(int __flag, const char *__fmt, ...)
{
 return 0;
}

// Function: <EXTERNAL>::munmap @ 0x104dc
int munmap(void *__addr,size_t __len)
{
 int iVar1;
 iVar1 = munmap(__addr,__len);
 return iVar1;
}

// Function: <EXTERNAL>::abort @ 0x104e8
void abort(void)
{
 abort();
}

// Function: main @ 0x104f4
unsigned int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}









// Function: __do_global_dtors_aux @ 0x105d4
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 completed_0 = 1;
 return;
}

// Function: param_macro_constants @ 0x10600
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 if (param_1 < 0x401) {
 uVar1 = 0x200;
 }
 else {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x10610
unsigned int call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x10618
int param_macro_functions(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_1 * param_1 + param_2;
}

// Function: call_macro_functions @ 0x10630
unsigned int call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x10638
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x10644
unsigned int call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x1064c
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1065c
unsigned int call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x10668
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x10670
unsigned int call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x10678
unsigned int param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x10680
unsigned int call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x10688
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x10694
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x106a4
unsigned int call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x106ac
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 __printf_chk(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3,param_2);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x106dc
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x106ec
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x106f8
unsigned int call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x10700
unsigned int param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x10708
unsigned int call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x10710
int param_builtin_macros(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)
{
 __printf_chk(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","03:01:11",param_4);
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x1076c
void call_builtin_macros(void)
{
 param_builtin_macros(100,0,0,0);
 return;
}

// Function: test_preprocessing_features @ 0x10774
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,&DAT_00011cfa);
 __printf_chk(1,&DAT_00011d22,0x40);
 __printf_chk(1,&DAT_00011d3d,0x1e);
 __printf_chk(1,&DAT_00011d58,0x20);
 __printf_chk(1,&DAT_00011d73,0xdf22);
 __printf_chk(1,&DAT_00011d92,0x74);
 __printf_chk(1,&DAT_00011dae,0x13);
 __printf_chk(1,&DAT_00011dd8,0x3c);
 call_variadic_macro();
 __printf_chk(1,&DAT_00011df3);
 __printf_chk(1,&DAT_00011e0e,0x10);
 __printf_chk(1,&DAT_00011e29,500);
 call_builtin_macros();
 __printf_chk(1,&DAT_00011e45);
 return;
}

// Function: param_asm_basic @ 0x10874
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1087c
unsigned int call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x10884
int param_asm_clobber(int param_1,int param_2)
{
 int iVar1;
 int iVar2;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
 }
 return iVar1;
}



// Function: call_asm_multi_insn @ 0x10910
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 char auStack_38 [12];
 unsigned int local_2c;
 char local_28 [28];
 int local_c;
 local_c = 0;
 memcpy(auStack_38,"Hello ASM",10);
 local_2c = 0;
 memset(local_28,0,0x1c);
 param_asm_multi_insn(&local_2c,auStack_38,9);
 if ((char)local_2c == 'H') {
 if (local_28[0] == 'o') {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_c == 0) {
 return uVar1;
 }
 __stack_chk_fail();
}

// Function: param_asm_simd @ 0x109a8
unsigned int param_asm_simd(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = 0;
 do {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_1 + iVar1 * 4) + *(int *)(param_2 + iVar1 * 4);
 iVar1 = iVar1 + 1;
 } while (iVar1 != 4);
 return 0;
}

// Function: call_asm_simd @ 0x109d8
unsigned int call_asm_simd(void)
{
 unsigned int extraout_r1;
 unsigned int local_3c;
 unsigned int uStack_38;
 unsigned int uStack_34;
 unsigned int uStack_30;
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 local_c = 0;
 local_3c = 1;
 uStack_38 = 2;
 uStack_34 = 3;
 uStack_30 = 4;
 local_2c = 5;
 uStack_28 = 6;
 uStack_24 = 7;
 uStack_20 = 8;
 param_asm_simd(&local_3c,&local_2c,&local_1c);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: param_asm_atomic @ 0x10a68
int param_asm_atomic(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_fetch_and_add_4((int *)param_1, param_2);
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x10a7c
int param_atomic_c11(unsigned int param_1,int param_2)
{
 int iVar1;
 iVar1 = __sync_fetch_and_add_4((int *)param_1, param_2);
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x10a90
unsigned long long call_asm_atomic(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 unsigned long long uVar1;
 int local_10;
 int local_c;
 unsigned int uStack_8;
 local_c = 0;
 local_10 = 10;
 uStack_8 = param_3;
 uVar1 = param_asm_atomic(&local_10,5);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return uVar1;
}

// Function: param_dynamic_code @ 0x10ae8
int param_dynamic_code(int param_1)
{
 size_t __len;
 void *__addr;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 munmap(__addr,__len);
 }
 return param_1;
}

// Function: param_memory_protection @ 0x10b40
unsigned int param_memory_protection(void)
{
 size_t __len;
 unsigned int *__addr;
 int iVar1;
 unsigned int uVar2;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffff) {
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

// Function: param_clobber_importance @ 0x10c00
int param_clobber_importance(int param_1,int param_2)
{
 return (param_1 + param_2) * 2;
}

// Function: call_asm_privileged @ 0x10c0c
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 if (iVar1 == 0xf && iVar2 == 0x2a) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x10c34
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x10c48
void test_asm_features(void)
{
 unsigned int uVar1;
 __printf_chk(1,&DAT_00011e78);
 __printf_chk(1,&DAT_00011ea3,0xf);
 uVar1 = call_asm_clobber();
 __printf_chk(1,&DAT_00011ebf,uVar1);
 uVar1 = call_asm_multi_insn();
 __printf_chk(1,&DAT_00011edb,uVar1);
 uVar1 = call_asm_simd();
 __printf_chk(1,&DAT_00011ef7,uVar1);
 uVar1 = call_asm_atomic(0,0,0);
 __printf_chk(1,&DAT_00011f13,uVar1);
 uVar1 = call_asm_privileged();
 call_asm_atomic(0,0,0);
 __printf_chk(1,&DAT_00011f2f,uVar1);
 return;
}

// Function: __sync_fetch_and_add_4 @ 0x10cec
int __sync_fetch_and_add_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 + param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_sub_4 @ 0x10d24
int __sync_fetch_and_sub_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1;
 iVar1 = SUB_ffff0fc0(iVar2,iVar2 - param_2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_fetch_and_or_4 @ 0x10d5c
uint __sync_fetch_and_or_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0((int)uVar2,(int)(uVar2 | param_2),(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_and_4 @ 0x10d94
uint __sync_fetch_and_and_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0((int)uVar2,(int)(uVar2 & param_2),(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_xor_4 @ 0x10dcc
uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0((int)uVar2,(int)(uVar2 ^ param_2),(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_nand_4 @ 0x10e04
uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0((int)uVar2,(int)~(uVar2 & param_2),(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_fetch_and_add_2 @ 0x10e40
int __sync_fetch_and_add_2(uintptr_t param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
	iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_sub_2 @ 0x10ea0
int __sync_fetch_and_sub_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
	iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_or_2 @ 0x10f00
int __sync_fetch_and_or_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_and_2 @ 0x10f60
int __sync_fetch_and_and_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_xor_2 @ 0x10fc0
int __sync_fetch_and_xor_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_nand_2 @ 0x11020
int __sync_fetch_and_nand_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)uVar1;
}

// Function: __sync_fetch_and_add_1 @ 0x11084
int __sync_fetch_and_add_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_sub_1 @ 0x110e0
int __sync_fetch_and_sub_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_or_1 @ 0x1113c
int __sync_fetch_and_or_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_and_1 @ 0x11198
int __sync_fetch_and_and_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_xor_1 @ 0x111f4
int __sync_fetch_and_xor_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_fetch_and_nand_1 @ 0x11250
int __sync_fetch_and_nand_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)uVar1;
}

// Function: __sync_add_and_fetch_4 @ 0x112b0
int __sync_add_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 + param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_sub_and_fetch_4 @ 0x112e8
int __sync_sub_and_fetch_4(int *param_1,int param_2)
{
 int iVar1;
 int iVar2;
 do {
 iVar2 = *param_1 - param_2;
 iVar1 = SUB_ffff0fc0(*param_1,iVar2,param_1);
 } while (iVar1 != 0);
 return iVar2;
}

// Function: __sync_or_and_fetch_4 @ 0x11320
uint __sync_or_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 | param_2;
 iVar1 = SUB_ffff0fc0((int)*param_1,(int)uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_and_and_fetch_4 @ 0x11358
uint __sync_and_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 & param_2;
 iVar1 = SUB_ffff0fc0((int)*param_1,(int)uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_xor_and_fetch_4 @ 0x11390
uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = *param_1 ^ param_2;
 iVar1 = SUB_ffff0fc0((int)*param_1,(int)uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_nand_and_fetch_4 @ 0x113c8
uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)
{
 int iVar1;
 uint uVar2;
 do {
 uVar2 = ~(*param_1 & param_2);
 iVar1 = SUB_ffff0fc0((int)*param_1,(int)uVar2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_add_and_fetch_2 @ 0x1141c
int __sync_add_and_fetch_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_2 @ 0x1146c
int __sync_sub_and_fetch_2(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_2 @ 0x114d4
int __sync_or_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_2 @ 0x1153c
int __sync_and_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_2 @ 0x115a4
int __sync_xor_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_2 @ 0x1160c
int __sync_nand_and_fetch_2(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xffff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(short)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_add_and_fetch_1 @ 0x11678
int __sync_add_and_fetch_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_sub_and_fetch_1 @ 0x116dc
int __sync_sub_and_fetch_1(uint param_1,int param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_or_and_fetch_1 @ 0x11740
int __sync_or_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_and_and_fetch_1 @ 0x117a4
int __sync_and_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_xor_and_fetch_1 @ 0x11808
int __sync_xor_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_nand_and_fetch_1 @ 0x1186c
int __sync_nand_and_fetch_1(uint param_1,uint param_2)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 uint uVar4;
 int iVar5;
 iVar5 = (param_1 & 3) << 3;
 uVar1 = 0xff << iVar5;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
 iVar3 = SUB_ffff0fc0((int)uVar2,(int)uVar4,(int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return (int)(char)((uVar1 & uVar4) >> iVar5);
}

// Function: __sync_val_compare_and_swap_4 @ 0x118d4
int __sync_val_compare_and_swap_4(int *param_1,int param_2,unsigned int param_3)
{
 int iVar1;
 do {
 if (*param_1 != param_2) {
 return *param_1;
 }
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 } while (iVar1 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_2 @ 0x11924
uint __sync_val_compare_and_swap_2(uintptr_t param_1,uint param_2,int param_3)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xffff)) {
 return (int)(short)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_val_compare_and_swap_1 @ 0x1199c
uint __sync_val_compare_and_swap_1(uintptr_t param_1,uint param_2,int param_3)
{
 uint uVar1;
 uint uVar2;
 int iVar3;
 int iVar4;
 iVar4 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
 if (uVar1 != (param_2 & 0xff)) {
 return (int)(char)uVar1;
 }
 iVar3 = SUB_ffff0fc0
 ((int)uVar2,(int)((param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2),
 (int *)(param_1 & 0xfffffffc));
 } while (iVar3 != 0);
 return param_2;
}

// Function: __sync_bool_compare_and_swap_4 @ 0x11a10
bool __sync_bool_compare_and_swap_4(unsigned int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 iVar1 = SUB_ffff0fc0(param_2,param_3,param_1);
 return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x11a3c
bool __sync_bool_compare_and_swap_2(uintptr_t param_1,uint param_2,int param_3)
{
 uint iVar1;
 iVar1 = __sync_val_compare_and_swap_2(param_1,param_2,param_3);
 return (bool)(param_2 == iVar1);
}

// Function: __sync_bool_compare_and_swap_1 @ 0x11a58
bool __sync_bool_compare_and_swap_1(uintptr_t param_1,uint param_2,int param_3)
{
 uint iVar1;
 iVar1 = __sync_val_compare_and_swap_1(param_1,param_2,param_3);
 return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x11a80
unsigned int __sync_lock_test_and_set_4(unsigned int *param_1,unsigned int param_2)
{
 int iVar1;
 unsigned int uVar2;
 do {
 uVar2 = *param_1;
 iVar1 = SUB_ffff0fc0((int)uVar2,(int)param_2,(int *)param_1);
 } while (iVar1 != 0);
 return uVar2;
}

// Function: __sync_lock_test_and_set_2 @ 0x11ab8
int __sync_lock_test_and_set_2(uintptr_t param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 ((int)uVar2,(int)(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_test_and_set_1 @ 0x11b18
int __sync_lock_test_and_set_1(uintptr_t param_1,int param_2)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 iVar3 = (param_1 & 3) << 3;
 do {
 uVar2 = *(uint *)(param_1 & 0xfffffffc);
 iVar1 = SUB_ffff0fc0
 ((int)uVar2,(int)(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
 (int *)(param_1 & 0xfffffffc));
 } while (iVar1 != 0);
 return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}

// Function: __sync_lock_release_8 @ 0x11b74
void __sync_lock_release_8(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 param_1[1] = 0;
 return;
}

// Function: __sync_lock_release_4 @ 0x11b98
void __sync_lock_release_4(unsigned int *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_2 @ 0x11bb8
void __sync_lock_release_2(unsigned short *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}

// Function: __sync_lock_release_1 @ 0x11bd8
void __sync_lock_release_1(char *param_1)
{
 SUB_ffff0fa0();
 *param_1 = 0;
 return;
}



