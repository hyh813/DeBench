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
typedef unsigned int uint;
#include <stdbool.h>

// Forward declarations
int main(void);
void __x86_get_pc_thunk_di(void);
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void LOCK(void);
void UNLOCK(void);

// Inline definitions for LOCK/UNLOCK
inline void LOCK(void) { }
inline void UNLOCK(void) { }

// External data declarations
extern char DAT_000122c9[];
extern char DAT_000120cb[];
extern char DAT_000120e6[];
extern char DAT_00012101[];
extern char DAT_0001211c[];
extern char DAT_0001213b[];
extern char DAT_00012157[];
extern char DAT_00012181[];
extern char DAT_0001219c[];
extern char DAT_000121b7[];
extern char DAT_000121d2[];
extern char DAT_000121ee[];
extern char DAT_000122f0[];
extern char DAT_00012221[];
extern char DAT_0001223d[];
extern char DAT_00012259[];
extern char DAT_00012275[];
extern char DAT_00012291[];
extern char DAT_000122ad[];

// Decompiled by BinaryAI
// SHA256: a98387eed82c32ab93c15164c3f3a5d8437b88906b0a939442b1727f20372667



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 ((void (*)(void))(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(int (*main_func)(void),unsigned int param_2,void *param_3,void *param_4,void *param_5,unsigned int param_6,void *param_7)
{
 return;
}

// Function: <EXTERNAL>::mprotect @ 0x11050
int mprotect(void *__addr,size_t __len,int __prot)
{
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x11060
int printf(char *__format,...)
{
 return 0;
}

// Function: <EXTERNAL>::sysconf @ 0x11070
long sysconf(int __name)
{
 return 0;
}

// Function: <EXTERNAL>::puts @ 0x11080
int puts(char *__s)
{
 return 0;
}

// Function: <EXTERNAL>::mmap @ 0x11090
void * mmap(void *__addr,size_t __len,int __prot,int __flags,int __fd,__off_t __offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::munmap @ 0x110a0
int munmap(void *__addr,size_t __len)
{
 return 0;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(unsigned int param_1)
{
 ((void (*)(void))**(unsigned int **)(param_1 + -0x10))();
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x110ec
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110f0
void __x86_get_pc_thunk_bx(void)
{
 return;
}







// Function: __x86.get_pc_thunk.dx @ 0x11229
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1122d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_macro_constants @ 0x11240
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x11260
unsigned int call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x11270
int param_macro_functions(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2 + param_1 * param_1;
}

// Function: call_macro_functions @ 0x11290
unsigned int call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x112a0
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x112b0
unsigned int call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x112c0
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x112d0
unsigned int call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x112e0
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x112f0
unsigned int call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x11300
unsigned int param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x11310
unsigned int call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x11320
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x11330
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x11340
unsigned int call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x11350
int param_variadic_macro(unsigned int param_1_00,int param_1,unsigned int param_2,unsigned int param_3)
{
 printf("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3,param_1_00);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x11390
unsigned int call_variadic_macro(void)
{
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x113c0
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x113d0
unsigned int call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x113e0
unsigned int param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x113f0
unsigned int call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x11400
int param_builtin_macros(int param_1)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:11");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x11450
unsigned int call_builtin_macros(void)
{
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:11");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x114a0
void test_preprocessing_features(void)
{
 puts(&DAT_000122c9);
 printf(&DAT_000120cb,0x40);
 printf(&DAT_000120e6,0x1e);
 printf(&DAT_00012101,0x20);
 printf(&DAT_0001211c,0xdf22);
 printf(&DAT_0001213b,0x74);
 printf(&DAT_00012157,0x13);
 printf(&DAT_00012181,0x3c);
 printf("LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 printf(&DAT_0001219c,0x3c);
 printf(&DAT_000121b7,0x10);
 printf(&DAT_000121d2,500);
 printf("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",0x117,
 "Jan 15 2026","03:00:11");
 printf(&DAT_000121ee,0x17e);
 return;
}

// Function: param_asm_basic @ 0x115d0
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x115e0
unsigned int call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x115f0
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

// Function: call_asm_clobber @ 0x11610
int call_asm_clobber(void)
{
 int iVar1;
 int iVar2;
 int local_1c [6];
 local_1c[4] = 5;
 local_1c[0] = 1;
 local_1c[1] = 2;
 local_1c[2] = 3;
 local_1c[3] = 4;
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + local_1c[iVar2];
 }
 return iVar1;
}

// Function: param_asm_multi_insn @ 0x11660
void param_asm_multi_insn(char *param_1,char *param_2,int param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x11680
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 char *puVar2;
 unsigned int *puVar3;
 int iVar4;
 unsigned int local_38;
 unsigned int local_34;
 unsigned short local_30;
 char local_2c [16];
 char local_1c [16];
 local_30 = 0x4d;
 local_34 = 0x5341206f;
 local_38 = 0x6c6c6548;
 for(int i=0;i<16;i++) local_1c[i] = 0;
 for(int i=0;i<16;i++) local_2c[i] = 0;
 puVar2 = local_2c;
 puVar3 = &local_38;
 for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
 *puVar2 = *(char *)puVar3;
 puVar2 = puVar2 + 1;
 puVar3 = (unsigned int *)((int)puVar3 + 1);
 }
 uVar1 = 0xffffffff;
 if ((unsigned char)(local_2c[4] ^ 0x6f | local_2c[0] ^ 0x48) == 0) {
 uVar1 = 0x2a;
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x116f0
unsigned int param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 char auVar1 [16];
 *(int *)&auVar1[0] = *param_1 + *param_2;
 *(int *)&auVar1[4] = param_1[1] + param_2[1];
 *(int *)&auVar1[8] = param_1[2] + param_2[2];
 *(int *)&auVar1[12] = param_1[3] + param_2[3];
 for(int i=0;i<16;i++) (*param_3)[i] = auVar1[i];
 return 0;
}

// Function: param_simd_intrinsics @ 0x11710
unsigned int param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
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

// Function: call_asm_simd @ 0x11730
unsigned int call_asm_simd(void)
{
 return 0x24;
}

// Function: param_asm_atomic @ 0x11790
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: param_atomic_c11 @ 0x117b0
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x117d0
unsigned int call_asm_atomic(void)
{
 LOCK();
 UNLOCK();
 return 0x1e;
}

// Function: param_dynamic_code @ 0x117f0
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

// Function: param_memory_protection @ 0x11860
unsigned int param_memory_protection(void)
{
 unsigned int uVar1;
 size_t __len;
 unsigned int *__addr;
 int iVar2;
 unsigned int uVar3;
 __len = sysconf(0x1e);
 __addr = (unsigned int *)mmap((void *)0x0,__len,3,0x22,-1,0);
 if (__addr == (unsigned int *)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 *__addr = 0x2a;
 iVar2 = mprotect(__addr,__len,1);
 uVar3 = 0xfffffffe;
 if (iVar2 == 0) {
 uVar1 = *__addr;
 iVar2 = mprotect(__addr,__len,3);
 uVar3 = 0xfffffffd;
 if (iVar2 == 0) {
 *__addr = 100;
 uVar3 = uVar1;
 }
 }
 munmap(__addr,__len);
 }
 return uVar3;
}

// Function: param_clobber_importance @ 0x11920
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11940
unsigned int call_asm_privileged(void)
{
 size_t __len;
 void *__addr;
 int iVar1;
 unsigned int uVar2;
 unsigned int uVar3;
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr == (void *)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 munmap(__addr,__len);
 uVar3 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = 0x4d;
 if (iVar1 != 0x2a) {
 uVar2 = uVar3;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar3;
 }
 return uVar2;
}

// Function: FUN_000119e5 @ 0x119e5
int FUN_000119e5(void)
{
 return 0x32;
}

// Function: test_asm_features @ 0x11a00
void test_asm_features(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t __len;
 void *__addr;
 int iVar3;
 char *puVar4;
 unsigned int *puVar5;
 unsigned int uVar6;
 unsigned int local_5c;
 unsigned int uStack_58;
 unsigned int uStack_54;
 unsigned int uStack_50;
 char local_4c [8];
 unsigned int uStack_44;
 unsigned int uStack_40;
 char local_3c [16];
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 puts(&DAT_000122f0);
 printf(&DAT_00012221,0xf);
 *(unsigned int *)&local_3c[0] = 5;
 uStack_44 = 3;
 *(unsigned int *)&local_4c[0] = 0x200000001;
 uStack_40 = 4;
 puVar4 = local_4c;
 iVar1 = 0;
 for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
 iVar1 = iVar1 + *(int *)(puVar4 + iVar3 * 4);
 }
 printf(&DAT_0001223d,iVar1);
 uStack_54 = (uStack_54 & 0xFFFF0000) | 0x4d;
 uStack_58 = 0x5341206f;
 local_5c = 0x6c6c6548;
 for(int i=0;i<16;i++) local_3c[i] = 0;
 for(int i=0;i<8;i++) local_4c[i] = 0;
 puVar5 = &local_5c;
 for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar4 = *(char *)puVar5;
 puVar4 = puVar4 + 1;
 puVar5 = (unsigned int *)((int)puVar5 + 1);
 }
 uVar2 = 0x2a;
 uVar6 = 0xffffffff;
 if ((unsigned char)(local_4c[4] ^ 0x6f | local_4c[0] ^ 0x48) != 0) {
 uVar2 = 0xffffffff;
 }
 printf(&DAT_00012259,uVar2);
 uStack_44 = 3;
 *(unsigned int *)&local_4c[0] = 0x200000001;
 uStack_40 = 4;
 local_5c = 5;
 uStack_58 = 6;
 uStack_54 = 7;
 uStack_50 = 8;
 local_2c = 6;
 uStack_28 = 8;
 uStack_24 = 10;
 uStack_20 = 0xc;
 printf(&DAT_00012275,0x24);
 LOCK();
 *(unsigned int *)&local_4c[0] = 0xf;
 UNLOCK();
 printf(&DAT_00012291,0x1e);
 __len = sysconf(0x1e);
 __addr = mmap((void *)0x0,__len,7,0x22,-1,0);
 if (__addr != (void *)0xffffffff) {
 munmap(__addr,__len);
 uVar6 = 0xf;
 }
 iVar1 = param_memory_protection();
 uVar2 = 0x4d;
 if (iVar1 != 0x2a) {
 uVar2 = uVar6;
 }
 if (__addr == (void *)0xffffffff) {
 uVar2 = uVar6;
 }
 printf(&DAT_000122ad,uVar2);
 return;
}

// Function: main @ 0x11c10
int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __do_global_ctors_aux @ 0x11c40
void __do_global_ctors_aux(void)
{
 return;
}



