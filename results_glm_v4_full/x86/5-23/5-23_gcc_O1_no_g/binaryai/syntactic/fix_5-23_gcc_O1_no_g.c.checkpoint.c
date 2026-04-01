// Decompiled by BinaryAI
// SHA256: d6c0003c44dbddd35631705e0e93adc2e6795586a5426e509b3bb1b6c01c53dc

#include <stdint.h>

// Type definitions
typedef unsigned int uint;
typedef unsigned int uint32_t;

// External data references
extern char DAT_000121f4[];
extern char DAT_00012041[];
extern char DAT_0001205c[];
extern char DAT_00012077[];
extern char DAT_0001221c[];
extern char DAT_00012092[];
extern char DAT_0001223c[];
extern char DAT_000120ae[];
extern char DAT_000120c9[];
extern char DAT_000120e4[];
extern char DAT_000120ff[];
extern char DAT_00012268[];
extern char DAT_00012294[];
extern char DAT_0001211b[];
extern char DAT_00012137[];
extern char DAT_00012153[];
extern char DAT_0001216f[];
extern char DAT_0001218b[];
extern char DAT_000121a7[];

// Global variable
int global_var = 0;





// Forward declarations
unsigned int main(unsigned int param_1, unsigned int param_2);

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(unsigned int param)
{
 int unaff_EBX;
 (*(void (**)(void))(*(void **)(unaff_EBX + 0x2c)))();
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void *func, unsigned int param2, void *param3, int param4, int param5, unsigned int param6, void *param7)
{
 ((void (*)(void *, unsigned int, void *, int, int, unsigned int, void *))func)(func, param2, param3, param4, param5, param6, param7);
 return;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(void *param1, unsigned int param2, int param3)
{
 return 0;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void)
{
 __stack_chk_fail();
 return;
}

// Function: FUN_000110f0 @ 0x110f0
unsigned int FUN_000110f0(unsigned int param1)
{
 return param1;
}

// Function: FUN_00011100 @ 0x11100
void *FUN_00011100(int param1, unsigned int param2, int param3, int param4, unsigned int param5, int param6)
{
 return (void *)0xffffffff;
}

// Function: FUN_00011110 @ 0x11110
int FUN_00011110(int param1, const char *param2, ...)
{
 return 0;
}

// Function: FUN_00011120 @ 0x11120
int FUN_00011120(void *param1, unsigned int param2)
{
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x1115c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11160
void __x86_get_pc_thunk_bx(void)
{
 return;
}



// Function: register_tm_clones @ 0x111b0
void register_tm_clones(void)
{
 return;
}



// Function: __x86.get_pc_thunk.dx @ 0x11299
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1129d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_macro_constants @ 0x112a1
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// Function: call_macro_constants @ 0x112bb
unsigned int call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x112c5
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1 * param_1;
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return iVar1 + param_1;
}

// Function: call_macro_functions @ 0x112de
unsigned int call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x112e8
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x112f5
unsigned int call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x112ff
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x1130f
unsigned int call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x11319
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11325
unsigned int call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x1132f
unsigned int param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x11339
unsigned int call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x11343
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x11351
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x11361
unsigned int call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x1136b
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 FUN_00011110(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x113a3
void call_variadic_macro(void)
{
 param_variadic_macro(10,0x14,0x1e);
 return;
}

// Function: param_macro_override @ 0x113b9
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x113c6
unsigned int call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x113d0
unsigned int param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x113da
unsigned int call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x113e4
int param_builtin_macros(int param_1)
{
 FUN_00011110(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:50");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x11434
void call_builtin_macros(void)
{
 param_builtin_macros(100);
 return;
}

// Function: test_preprocessing_features @ 0x11446
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 FUN_00011110(1,&DAT_000121f4);
 FUN_00011110(1,&DAT_00012041,0x40);
 FUN_00011110(1,&DAT_0001205c,0x1e);
 FUN_00011110(1,&DAT_00012077,0x20);
 FUN_00011110(1,&DAT_0001221c,0xdf22);
 FUN_00011110(1,&DAT_00012092,0x74);
 FUN_00011110(1,&DAT_0001223c,0x13);
 FUN_00011110(1,&DAT_000120ae,0x3c);
 call_variadic_macro();
 uVar1 = 0x4a;
 FUN_00011110(1,&DAT_000120c9,uVar1);
 FUN_00011110(1,&DAT_000120e4,0x10);
 FUN_00011110(1,&DAT_000120ff,500);
 call_builtin_macros();
 uVar1 = 0x21a;
 FUN_00011110(1,&DAT_00012268,uVar1);
 return;
}

// Function: param_asm_basic @ 0x1154b
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1155d
void call_asm_basic(void)
{
 param_asm_basic(5);
 return;
}

// Function: param_asm_clobber @ 0x1156c
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

// Function: call_asm_clobber @ 0x1158d
void call_asm_clobber(void)
{
 int in_GS_OFFSET;
 char local_24 [20];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 param_asm_clobber(local_24,5);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: param_asm_multi_insn @ 0x115c5
void param_asm_multi_insn(char *param_1,char *param_2,int param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x115e7
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_3a;
 unsigned int local_36;
 unsigned short local_32;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_3a = 0x6c6c6548;
 local_36 = 0x5341206f;
 local_32 = 0x4d;
 local_30 = 0;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 param_asm_multi_insn(&local_30,&local_3a,9);
 if ((char)local_30 == 'H') {
 uVar1 = 0xffffffff;
 if ((char)local_2c == 'o') {
 uVar1 = 0x2a;
 }
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_asm_simd @ 0x1169b
unsigned int param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 union {
  char bytes[16];
  uint32_t words[4];
 } auVar1;
 auVar1.words[1] = param_1[1] + param_2[1];
 auVar1.words[0] = *param_1 + *param_2;
 auVar1.words[2] = param_1[2] + param_2[2];
 auVar1.words[3] = param_1[3] + param_2[3];
 *param_3[0] = auVar1.bytes[0];
 return 0;
}

// Function: param_simd_intrinsics @ 0x116be
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

// Function: call_asm_simd @ 0x116df
int call_asm_simd(void)
{
 int in_GS_OFFSET;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 int local_1c;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_40 = 1;
 local_3c = 2;
 local_38 = 3;
 local_34 = 4;
 local_30 = 5;
 local_2c = 6;
 local_28 = 7;
 local_24 = 8;
 param_asm_simd(&local_40,&local_30,&local_20);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_1c + local_20 + local_18 + local_14;
 }
 __stack_chk_fail_local();
}

// Function: param_asm_atomic @ 0x1176f
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 /* LOCK(); */
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 /* UNLOCK(); */
 return param_2 + iVar1;
}

// Function: param_atomic_c11 @ 0x11784
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 /* LOCK(); */
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 /* UNLOCK(); */
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11799
unsigned int call_asm_atomic(void)
{
 int in_GS_OFFSET;
 /* LOCK(); */
 /* UNLOCK(); */
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x1e;
 }
 __stack_chk_fail_local();
 return 0;
}

// Function: param_dynamic_code @ 0x117df
int param_dynamic_code(int param_1)
{
 unsigned int uVar1;
 int iVar2;
 uVar1 = FUN_000110f0(0x1e);
 iVar2 = FUN_00011100(0,uVar1,7,0x22,0xffffffff,0);
 if (iVar2 == -1) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 FUN_00011120(iVar2,uVar1);
 }
 return param_1;
}

// Function: param_memory_protection @ 0x11839
unsigned int param_memory_protection(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int uVar4;
 uVar1 = FUN_000110f0(0x1e);
 puVar2 = (unsigned int *)FUN_00011100(0,uVar1,3,0x22,0xffffffff,0);
 if (puVar2 == (unsigned int *)0xffffffff) {
 uVar4 = 0xffffffff;
 }
 else {
 *puVar2 = 0x2a;
 iVar3 = FUN_000110d0(puVar2,uVar1,1);
 if (iVar3 == 0) {
 uVar4 = *puVar2;
 iVar3 = FUN_000110d0(puVar2,uVar1,3);
 if (iVar3 == 0) {
 *puVar2 = 100;
 FUN_00011120(puVar2,uVar1);
 }
 else {
 FUN_00011120(puVar2,uVar1);
 uVar4 = 0xfffffffd;
 }
 }
 else {
 FUN_00011120(puVar2,uVar1);
 uVar4 = 0xfffffffe;
 }
 }
 return uVar4;
}

// Function: param_clobber_importance @ 0x118ef
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x1190f
int call_asm_privileged(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = param_dynamic_code(10);
 iVar2 = param_memory_protection();
 iVar3 = param_clobber_importance(3,7);
 if ((iVar1 == 0xf && iVar2 == 0x2a) && (iVar3 == 0x14)) {
 iVar1 = 0x4d;
 }
 return iVar1;
}

// Function: param_memory_clobber_demo @ 0x1195a
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x1197b
void test_asm_features(void)
{
 unsigned int uVar1;
 FUN_00011110(1,&DAT_00012294);
 call_asm_basic();
 uVar1 = 0;
 FUN_00011110(1,&DAT_0001211b,uVar1);
 call_asm_clobber();
 uVar1 = 0;
 FUN_00011110(1,&DAT_00012137,uVar1);
 uVar1 = call_asm_multi_insn();
 FUN_00011110(1,&DAT_00012153,uVar1);
 uVar1 = call_asm_simd();
 FUN_00011110(1,&DAT_0001216f,uVar1);
 uVar1 = call_asm_atomic();
 FUN_00011110(1,&DAT_0001218b,uVar1);
 uVar1 = call_asm_privileged();
 FUN_00011110(1,&DAT_000121a7,uVar1);
 return;
}

// Function: main @ 0x11a2b
unsigned int main(unsigned int param_1, unsigned int param_2)
{
 (void)param_1;
 (void)param_2;
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __x86.get_pc_thunk.cx @ 0x11a46
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11a50
void __stack_chk_fail_local(void)
{
 FUN_000110e0();
 return;
}





