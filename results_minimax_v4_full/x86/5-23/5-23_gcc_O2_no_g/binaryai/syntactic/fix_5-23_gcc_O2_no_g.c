// Decompiled by BinaryAI
// SHA256: 9ed65c23d0c8436685e68f760a55c4cc5cb9f3d6373b4247651908747aa4b9e4

// External data declarations
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

// Function declarations with correct signatures
extern void test_preprocessing_features(void);
extern void test_asm_features(void);
extern unsigned int FUN_000110f0(unsigned int);
extern int FUN_00011100(void *, unsigned int, int, int, int, int);
extern void FUN_00011110(int, char *, ...);
extern void FUN_00011120(void *, unsigned int, ...);
extern int FUN_000110d0(void *, unsigned int, int, ...);
extern void FUN_000110b0(void *);
extern void FUN_000110c0(void *, unsigned int, void *, unsigned int, unsigned int, unsigned int);
extern void (*FUN_00011030_ptr)(void);
extern void (*FUN_000110b0_ptr)(void);
extern void (*FUN_000110c0_ptr)(void);
extern void (*FUN_000110e0_ptr)(void);
extern unsigned int (*FUN_000110f0_ptr)(void);
extern void (*FUN_00011100_ptr)(void);
extern void (*FUN_00011120_ptr)(void);

// Global variable definition
int global_var = 0;


// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void *param1)
{
 void (**func_ptr)(void);
 func_ptr = *(void ***)(param1 + 0x2c);
 (*func_ptr)();
 return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void *param1, unsigned int param2, void *param3, unsigned int param4, unsigned int param5, unsigned int param6)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(0 + 0xc)))();
 return;
}

// Function: FUN_000110d0 @ 0x110d0
int FUN_000110d0(void *param1, unsigned int param2, int param3, ...)
{
 return 0;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(0 + 0x14)))();
 return;
}

// Function: FUN_000110f0 @ 0x110f0
unsigned int FUN_000110f0(unsigned int param)
{
 int unaff_EBX;
 return (*(unsigned int (*)(void))(*(void **)(0 + 0x18)))();
}

// Function: FUN_00011100 @ 0x11100
int FUN_00011100(void *param_1, unsigned int param_2, int param_3, int param_4, int param_5, int param_6)
{
 return 0;
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(int param1, char *param2, ...)
{
 return;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(void *param1, unsigned int param2, ...)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(0 + 0x24)))();
 return;
}

// Function: main @ 0x11130
unsigned int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x1117c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11180
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11190
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x111d0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11220
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2ddf) == '\0') {
 if (*(int *)(unaff_EDI + 0x2dc3) != 0) {
 FUN_000110b0(*(unsigned int *)(unaff_EDI + 0x2dd7));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2de3);
 while (uVar1 < ((unaff_EDI + 0x2cbb) - (unaff_EDI + 0x2cb7) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x2de3) = uVar1 + 1;
 (*(void (**)(void))(unaff_EDI + 0x2cb7 + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x2de3);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2ddf) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x112b9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x112bd
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: param_macro_constants @ 0x112d0
unsigned int param_macro_constants(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0x200;
 if (0x400 < param_1) {
 uVar1 = 0x40;
 }
 return uVar1;
}

// External variables
extern int global_var;

// Missing definitions for atomic operations
// LOCK/UNLOCK are x86 assembly prefixes for atomic operations
// Define them as empty macros for linking
#define LOCK()
#define UNLOCK()

// Function: call_macro_constants @ 0x112f0
unsigned int call_macro_constants(void)
{
 return 0x40;
}

// Function: param_macro_functions @ 0x11300
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1 * param_1;
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return iVar1 + param_1;
}

// Function: call_macro_functions @ 0x11320
unsigned int call_macro_functions(void)
{
 return 0x1e;
}

// Function: param_conditional_compile @ 0x11330
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x11340
unsigned int call_conditional_compile(void)
{
 return 0x20;
}

// Function: param_multi_branch_compile @ 0x11350
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x11360
unsigned int call_multi_branch_compile(void)
{
 return 0xdf22;
}

// Function: param_macro_recursion @ 0x11370
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11380
unsigned int call_macro_recursion(void)
{
 return 0x74;
}

// Function: param_stringize @ 0x11390
unsigned int param_stringize(void)
{
 return 0x13;
}

// Function: call_stringize @ 0x113a0
unsigned int call_stringize(void)
{
 return 0x13;
}

// Function: my_func @ 0x113b0
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x113c0
int param_token_paste(int param_1)
{
 return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x113d0
unsigned int call_token_paste(void)
{
 return 0x3c;
}

// Function: param_variadic_macro @ 0x113e0
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 FUN_00011110(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x11420
unsigned int call_variadic_macro(void)
{
 FUN_00011110(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 return 0x3c;
}

// Function: param_macro_override @ 0x11460
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x11470
unsigned int call_macro_override(void)
{
 return 0x10;
}

// Function: param_include_guard @ 0x11480
unsigned int param_include_guard(void)
{
 return 500;
}

// Function: call_include_guard @ 0x11490
unsigned int call_include_guard(void)
{
 return 500;
}

// Function: param_builtin_macros @ 0x114a0
int param_builtin_macros(int param_1)
{
 FUN_00011110(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:54");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x114f0
unsigned int call_builtin_macros(void)
{
 FUN_00011110(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:54");
 return 0x17e;
}

// Function: test_preprocessing_features @ 0x11540
void test_preprocessing_features(void)
{
 FUN_00011110(1,&DAT_000121f4);
 FUN_00011110(1,&DAT_00012041,0x40);
 FUN_00011110(1,&DAT_0001205c,0x1e);
 FUN_00011110(1,&DAT_00012077,0x20);
 FUN_00011110(1,&DAT_0001221c,0xdf22);
 FUN_00011110(1,&DAT_00012092,0x74);
 FUN_00011110(1,&DAT_0001223c,0x13);
 FUN_00011110(1,&DAT_000120ae,0x3c);
 FUN_00011110(1,"LOG: Values: %d, %d, %d\n",10,0x14,0x1e);
 FUN_00011110(1,&DAT_000120c9,0x3c);
 FUN_00011110(1,&DAT_000120e4,0x10);
 FUN_00011110(1,&DAT_000120ff,500);
 FUN_00011110(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
 ,0x117,"Jan 15 2026","02:59:54");
 FUN_00011110(1,&DAT_00012268,0x17e);
 return;
}

// Function: param_asm_basic @ 0x11690
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x116b0
unsigned int call_asm_basic(void)
{
 return 0xf;
}

// Function: param_asm_clobber @ 0x116d0
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

// Function: call_asm_clobber @ 0x11700
int call_asm_clobber(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
 iVar1 = iVar1 + local_24[iVar2];
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_asm_multi_insn @ 0x11750
void param_asm_multi_insn(char *param_1,char *param_2,int param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x11780
unsigned int call_asm_multi_insn(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 int iVar4;
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
 puVar3 = &local_30;
 local_36 = 0x5341206f;
 puVar2 = &local_3a;
 local_32 = 0x4d;
 local_30 = 0;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
 *(char *)puVar3 = *(char *)puVar2;
 puVar3 = (unsigned int *)((int)puVar3 + 1);
 puVar2 = (unsigned int *)((int)puVar2 + 1);
 }
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

// Function: param_asm_simd @ 0x11850
unsigned int param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 typedef struct { int _0_4; int _4_4; int _8_4; int _12_4; } simd_vec;
 simd_vec auVar1;
 auVar1._4_4 = param_1[1] + param_2[1];
 auVar1._0_4 = *param_1 + *param_2;
 auVar1._8_4 = param_1[2] + param_2[2];
 auVar1._12_4 = param_1[3] + param_2[3];
 *(simd_vec*)*param_3 = auVar1;
 return 0;
}

// Function: param_simd_intrinsics @ 0x11870
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

// Function: call_asm_simd @ 0x11890
unsigned int call_asm_simd(void)
{
 int in_GS_OFFSET;
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x24;
 }
 __stack_chk_fail_local();
}

// Function: param_asm_atomic @ 0x11930
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}

// Function: param_atomic_c11 @ 0x11950
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11970
unsigned int call_asm_atomic(void)
{
 int in_GS_OFFSET;
 LOCK();
 UNLOCK();
 if (*(int *)(in_GS_OFFSET + 0x14) == *(int *)(in_GS_OFFSET + 0x14)) {
 return 0x1e;
 }
 __stack_chk_fail_local();
}

// Function: param_dynamic_code @ 0x119c0
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

// Function: param_memory_protection @ 0x11a20
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
 uVar4 = 0xfffffffd;
 FUN_00011120(puVar2,uVar1);
 }
 }
 else {
 uVar4 = 0xfffffffe;
 FUN_00011120(puVar2,uVar1);
 }
 }
 return uVar4;
}

// Function: param_clobber_importance @ 0x11af0
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11b10
unsigned int call_asm_privileged(void)
{
 unsigned int uVar1;
 int iVar2;
 int iVar3;
 unsigned int uVar4;
 uVar1 = FUN_000110f0(0x1e);
 iVar2 = FUN_00011100(0,uVar1,7,0x22,0xffffffff,0);
 if (iVar2 == -1) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar4 = 0xf;
 FUN_00011120(iVar2,uVar1);
 }
 iVar3 = param_memory_protection();
 if ((iVar3 == 0x2a) && (iVar2 != -1)) {
 uVar4 = 0x4d;
 }
 return uVar4;
}

// Function: param_memory_clobber_demo @ 0x11bc0
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x11bf0
void test_asm_features(void)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 int in_GS_OFFSET;
 int local_24 [5];
 int local_10;
 unsigned int uStack_c;
 uStack_c = 0x11c00;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011110(1,&DAT_00012294);
 FUN_00011110(1,&DAT_0001211b,0xf);
 iVar1 = 0;
 for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
 iVar1 = iVar1 + local_24[iVar3];
 }
 FUN_00011110(1,&DAT_00012137,iVar1);
 uVar2 = call_asm_multi_insn();
 FUN_00011110(1,&DAT_00012153,uVar2);
 uVar2 = call_asm_simd();
 FUN_00011110(1,&DAT_0001216f,uVar2);
 LOCK();
 UNLOCK();
 FUN_00011110(1,&DAT_0001218b,0x1e);
 uVar2 = call_asm_privileged();
 FUN_00011110(1,&DAT_000121a7,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.cx @ 0x11cec
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11cf0
void __stack_chk_fail_local(void)
{
 FUN_000110e0();
 return;
}

// Function: __do_global_ctors_aux @ 0x11d10
void __do_global_ctors_aux(void)
{
 return;
}



