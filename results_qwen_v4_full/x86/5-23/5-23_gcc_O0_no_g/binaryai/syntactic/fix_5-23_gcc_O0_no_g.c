// Decompiled by BinaryAI
// SHA256: 743cf25fb02e82412d0da35175f54e78c4604fcf7e02e1d6429a60b9efa2c11f

typedef unsigned int uint;

// Macro definitions
#define LOCK()
#define UNLOCK()

// External data declarations
char DAT_0001201a[32];
char DAT_00012088[32];
char DAT_000120af[32];
char DAT_000120ca[32];
char DAT_000120e5[32];
char DAT_00012100[32];
char DAT_0001211f[32];
char DAT_0001213c[32];
char DAT_00012166[32];
char DAT_00012181[32];
char DAT_0001219c[32];
char DAT_000121b7[32];
char DAT_000121d4[32];
char DAT_00012200[32];
char DAT_0001222a[32];
char DAT_00012246[32];
char DAT_00012262[32];
char DAT_0001227e[32];
char DAT_0001229a[32];
char DAT_000122b6[32];
int global_var = 0;
extern int __x86_get_pc_thunk_di(void);
extern unsigned int main(void);



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(unsigned int val)
{
 return;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void *a, unsigned int b, void *c, int d, int e, unsigned int f, char *g)
{
 return;
}

// Function: FUN_000110f0 @ 0x110f0
int FUN_000110f0(void *ptr, unsigned int size, int prot, unsigned int addr)
{
 return 0;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(const char *fmt, ...)
{
 return;
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(void)
{
 return;
}

// Function: FUN_00011120 @ 0x11120
unsigned int FUN_00011120(unsigned int size)
{
 return 0;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(const char *str)
{
 return;
}

// Function: FUN_00011140 @ 0x11140
void *FUN_00011140(void *addr, unsigned int length, int prot, int flags, int fd, unsigned int offset)
{
 return (void *)0;
}

// Function: FUN_00011150 @ 0x11150
int FUN_00011150(const char *str)
{
 return 0;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void *ptr, unsigned int size)
{
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x1119c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111a0
void __x86_get_pc_thunk_bx(void)
{
 return;
}







// Function: __x86.get_pc_thunk.dx @ 0x112d9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x112dd
int __x86_get_pc_thunk_di(void)
{
 return 0;
}

// Function: param_macro_constants @ 0x112e1
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

// Function: call_macro_constants @ 0x11309
unsigned int call_macro_constants(void)
{
 return param_macro_constants(0x800);
}

// Function: param_macro_functions @ 0x11329
int param_macro_functions(int param_1,int param_2)
{
 int iVar1;
 iVar1 = param_1 * param_1;
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1 + iVar1;
}

// Function: call_macro_functions @ 0x11351
int call_macro_functions(void)
{
 return param_macro_functions(5,3);
}

// Function: param_conditional_compile @ 0x11370
int param_conditional_compile(int param_1)
{
 return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1139e
int call_conditional_compile(void)
{
 return param_conditional_compile(10);
}

// Function: param_multi_branch_compile @ 0x113bb
int param_multi_branch_compile(int param_1)
{
 return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x113dd
int call_multi_branch_compile(void)
{
 return param_multi_branch_compile(10);
}

// Function: param_macro_recursion @ 0x113fa
int param_macro_recursion(int param_1)
{
 return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11413
int call_macro_recursion(void)
{
 return param_macro_recursion(100);
}

// Function: param_stringize @ 0x11430
int param_stringize(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 iVar1 = FUN_00011150("Hello World");
 iVar2 = FUN_00011150("1.2.3");
 iVar3 = FUN_00011150(&DAT_0001201a);
 return iVar3 + iVar1 + iVar2;
}

// Function: call_stringize @ 0x11499
int call_stringize(void)
{
 return param_stringize();
}

// Function: my_func @ 0x114bc
int my_func(int param_1)
{
 return param_1 * 10;
}

// Function: param_token_paste @ 0x114db
int param_token_paste(int param_1)
{
 int iVar1;
 iVar1 = my_func(param_1);
 return iVar1 + param_1 + 5;
}

// Function: call_token_paste @ 0x11511
int call_token_paste(void)
{
 return param_token_paste(5);
}

// Function: param_variadic_macro @ 0x1152e
int param_variadic_macro(int param_1,unsigned int param_2,unsigned int param_3)
{
 int iVar1;
 int in_GS_OFFSET;
 iVar1 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011100("LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
 param_1 = param_1 + 0x32;
 if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
 param_1 = __stack_chk_fail_local();
 }
 return param_1;
}

// Function: call_variadic_macro @ 0x11599
int call_variadic_macro(void)
{
 return param_variadic_macro(10,0x14,0x1e);
}

// Function: param_macro_override @ 0x115c0
int param_macro_override(int param_1)
{
 return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x115ef
int call_macro_override(void)
{
 return param_macro_override(5);
}

// Function: header_func @ 0x1160c
int header_func(int param_1)
{
 return param_1 * 100;
}

// Function: param_include_guard @ 0x11625
void param_include_guard(void)
{
 header_func(5);
 return;
}

// Function: call_include_guard @ 0x11642
void call_include_guard(void)
{
 param_include_guard();
}

// Function: param_builtin_macros @ 0x1165a
int param_builtin_macros(int param_1)
{
 FUN_00011100("file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros",
 0x117,"Jan 15 2026","02:59:46");
 return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x116ee
int call_builtin_macros(void)
{
 return param_builtin_macros(100);
}

// Function: test_preprocessing_features @ 0x11711
void test_preprocessing_features(void)
{
 unsigned int uVar1;
 FUN_00011130(&DAT_00012088);
 uVar1 = call_macro_constants();
 FUN_00011100(&DAT_000120af,uVar1);
 uVar1 = call_macro_functions();
 FUN_00011100(&DAT_000120ca,uVar1);
 uVar1 = call_conditional_compile();
 FUN_00011100(&DAT_000120e5,uVar1);
 uVar1 = call_multi_branch_compile();
 FUN_00011100(&DAT_00012100,uVar1);
 uVar1 = call_macro_recursion();
 FUN_00011100(&DAT_0001211f,uVar1);
 uVar1 = call_stringize();
 FUN_00011100(&DAT_0001213c,uVar1);
 uVar1 = call_token_paste();
 FUN_00011100(&DAT_00012166,uVar1);
 uVar1 = call_variadic_macro();
 FUN_00011100(&DAT_00012181,uVar1);
 uVar1 = call_macro_override();
 FUN_00011100(&DAT_0001219c,uVar1);
 call_include_guard();
 FUN_00011100(&DAT_000121b7,0);
 uVar1 = call_builtin_macros();
 FUN_00011100(&DAT_000121d4,uVar1);
 return;
}

// Function: param_asm_basic @ 0x11847
int param_asm_basic(int param_1)
{
 return param_1 + 10;
}

// Function: call_asm_basic @ 0x1186d
int call_asm_basic(void)
{
 return param_asm_basic(5);
}

// Function: param_asm_clobber @ 0x1188a
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

// Function: call_asm_clobber @ 0x118c7
int call_asm_clobber(void)
{
 int in_GS_OFFSET;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 int result;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 1;
 local_20 = 2;
 local_1c = 3;
 local_18 = 4;
 local_14 = 5;
 result = param_asm_clobber(&local_24,5);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return result;
}

// Function: param_asm_multi_insn @ 0x1192a
void param_asm_multi_insn(char *param_1,char *param_2,int param_3)
{
 for (; param_3 != 0; param_3 = param_3 + -1) {
 *param_1 = *param_2;
 param_1 = param_1 + 1;
 param_2 = param_2 + 1;
 }
 return;
}

// Function: call_asm_multi_insn @ 0x11969
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
 param_asm_multi_insn((char *)&local_30,(char *)&local_3a,9);
 if (((char)local_30 == 'H') && ((char)local_2c == 'o')) {
 uVar1 = 0x2a;
 }
 else {
 uVar1 = 0xffffffff;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return uVar1;
}

// Function: param_asm_simd @ 0x11a15
unsigned int param_asm_simd(int *param_1,int *param_2,char (*param_3) [16])
{
 int auVar1 [4];
 auVar1[1] = param_1[1] + param_2[1];
 auVar1[0] = *param_1 + *param_2;
 auVar1[2] = param_1[2] + param_2[2];
 auVar1[3] = param_1[3] + param_2[3];
 (*param_3)[0] = auVar1[0];
 (*param_3)[1] = auVar1[1];
 (*param_3)[2] = auVar1[2];
 (*param_3)[3] = auVar1[3];
 return 0;
}

// Function: param_simd_intrinsics @ 0x11a43
unsigned int param_simd_intrinsics(int *param_1,int *param_2,int *param_3)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 int iVar6;
 iVar1 = param_1[1];
 iVar2 = param_1[2];
 iVar3 = param_1[3];
 iVar4 = param_2[1];
 iVar5 = param_2[2];
 iVar6 = param_2[3];
 *param_3 = *param_2 + *param_1;
 param_3[1] = iVar4 + iVar1;
 param_3[2] = iVar5 + iVar2;
 param_3[3] = iVar6 + iVar3;
 return 0;
}

// Function: call_asm_simd @ 0x11abf
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
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 param_asm_simd((int *)&local_40,(int *)&local_30,(char (*)[16])&local_20);
 local_14 = local_14 + local_20 + local_1c + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return local_14;
}

// Function: param_asm_atomic @ 0x11b4f
int param_asm_atomic(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}

// Function: param_atomic_c11 @ 0x11b7a
int param_atomic_c11(int *param_1,int param_2)
{
 int iVar1;
 LOCK();
 iVar1 = *param_1;
 *param_1 = *param_1 + param_2;
 UNLOCK();
 return param_2 + iVar1;
}

// Function: call_asm_atomic @ 0x11b9c
int call_asm_atomic(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 10;
 local_14 = param_asm_atomic(&local_18,5);
 iVar1 = local_14 + local_18;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_dynamic_code @ 0x11bee
int param_dynamic_code(int param_1)
{
 unsigned int uVar1;
 int iVar2;
 uVar1 = FUN_00011120(0x1e);
 iVar2 = FUN_00011140(0,uVar1,7,0x22,0xffffffff,0);
 if (iVar2 == -1) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 + 5;
 FUN_00011160(iVar2,uVar1);
 }
 return param_1;
}

// Function: param_memory_protection @ 0x11c5e
unsigned int param_memory_protection(void)
{
 unsigned int uVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 int iVar4;
 unsigned int uVar5;
 uVar5 = 0x11c6e;
 uVar1 = FUN_00011120(0x1e);
 puVar2 = (unsigned int *)FUN_00011140(0,uVar1,3,0x22,0xffffffff,0);
 if (puVar2 == (unsigned int *)0xffffffff) {
 uVar3 = 0xffffffff;
 }
 else {
 *puVar2 = 0x2a;
 iVar4 = FUN_000110f0(puVar2,uVar1,1,uVar5);
 if (iVar4 == 0) {
 uVar3 = *puVar2;
 iVar4 = FUN_000110f0(puVar2,uVar1,3,uVar5);
 if (iVar4 == 0) {
 *puVar2 = 100;
 FUN_00011160(puVar2,uVar1);
 }
 else {
 FUN_00011160(puVar2,uVar1);
 uVar3 = 0xfffffffd;
 }
 }
 else {
 FUN_00011160(puVar2,uVar1);
 uVar3 = 0xfffffffe;
 }
 }
 return uVar3;
}

// Function: param_clobber_importance @ 0x11d46
int param_clobber_importance(int param_1,int param_2)
{
 return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11d82
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

// Function: param_memory_clobber_demo @ 0x11dde
int param_memory_clobber_demo(void)
{
 return global_var + 0x32;
}

// Function: test_asm_features @ 0x11e0f
void test_asm_features(void)
{
 unsigned int uVar1;
 FUN_00011130(&DAT_00012200);
 uVar1 = call_asm_basic();
 FUN_00011100(&DAT_0001222a,uVar1);
 uVar1 = call_asm_clobber();
 FUN_00011100(&DAT_00012246,uVar1);
 uVar1 = call_asm_multi_insn();
 FUN_00011100(&DAT_00012262,uVar1);
 uVar1 = call_asm_simd();
 FUN_00011100(&DAT_0001227e,uVar1);
 uVar1 = call_asm_atomic();
 FUN_00011100(&DAT_0001229a,uVar1);
 uVar1 = call_asm_privileged();
 FUN_00011100(&DAT_000122b6,uVar1);
 return;
}

// Function: main @ 0x11ecd
unsigned int main(void)
{
 test_preprocessing_features();
 test_asm_features();
 return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x11ef2
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x11ef6
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11f00
void __stack_chk_fail_local(void)
{
 FUN_00011110();
 return;
}

// Function: __do_global_ctors_aux @ 0x11f20
void __do_global_ctors_aux(void)
{
 return;
}



