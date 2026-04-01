// Decompiled by BinaryAI
// SHA256: 45c9d55a1817b6fa227282a19d0ca18de7ff83e3a0830d7100ca7bf216848d4a

typedef unsigned int uint;
typedef unsigned char byte;

int div_zero_caught;
int segv_caught;
char segv_buffer[256];
int jmp_buffer;
byte encrypted_0[32];
unsigned int DAT_00012020[8];
unsigned int DAT_00012040[8];
byte DAT_00012060[32];
byte DAT_0001208d[32];
byte DAT_000120a9[32];
byte DAT_000120c5[32];
byte DAT_000120e2[32];
byte DAT_000120fe[32];
byte DAT_00012128[32];
byte DAT_0001214d[32];
byte DAT_00012173[32];
byte DAT_00012193[32];
byte DAT_000121af[32];
byte DAT_000121cc[32];
byte DAT_000121e9[32];
byte DAT_0001221a[32];
byte DAT_00012237[32];



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(unsigned int param_1)
{
 return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void *param_1,unsigned int param_2,void *param_3,int param_4,int param_5,unsigned int param_6,char *param_7)
{
 return;
}

// Function: FUN_00011110 @ 0x11110
int FUN_00011110(void *param_1)
{
 return 0;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(void *param_1)
{
 return;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(int param_1,void *param_2)
{
 return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void)
{
 return;
}

// Function: FUN_00011150 @ 0x11150
void *FUN_00011150(unsigned int param_1)
{
 return 0;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void *param_1)
{
 return;
}

// Function: FUN_00011170 @ 0x11170
int FUN_00011170(char *param_1)
{
 return 0;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(byte *param_1,unsigned int param_2,int param_3)
{
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(int param_1,byte *param_2,unsigned int param_3)
{
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(char *param_1)
{
 return;
}

// Function: main @ 0x111b0
unsigned int main(void)
{
 test_obf_opt_edge();
 return 0;
}



// Function: __i686.get_pc_thunk.bx @ 0x111fc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11200
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11210
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11250
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x112a0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI = 0;
 if (*(char *)(unaff_EDI + 0x2d73) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d43) != 0) {
 FUN_000110f0(*(unsigned int *)(unaff_EDI + 0x2d57));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2d77);
 while (uVar1 < ((unaff_EDI + 0x2c2b) - (unaff_EDI + 0x2c27) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2d77) = uVar1 + 1;
 ((void (*)(void))*(unsigned int *)(unaff_EDI + 0x2c27 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2d77);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2d73) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11339
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1133d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: div_zero_handler @ 0x11341
unsigned int div_zero_handler(void)
{
 div_zero_caught = 1;
 FUN_000111a0(segv_buffer);
 segv_caught = 1;
 FUN_000111a0(segv_buffer);
 return 1;
}

// Function: segv_handler @ 0x1136f
unsigned int segv_handler(void)
{
 segv_caught = 1;
 FUN_000111a0(segv_buffer);
 return 1;
}

// Function: param_fake_branch @ 0x1139d
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x113a9
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x113b3
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = param_1;
 iVar4 = iVar1;
 while (iVar4 != 0) {
 iVar3 = iVar2 % iVar4;
 iVar2 = iVar4;
 iVar4 = iVar3;
 }
 if ((iVar2 != 1) ||
 (iVar2 = param_1 * 2 + 10, param_1 * 2 + 1 + param_1 * param_1 != iVar1 * iVar1)) {
 iVar2 = param_1 * 3 + 0x14;
 }
 return iVar2;
}

// Function: call_opaque_predicate @ 0x113fd
int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x11413
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11434
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x1143e
byte * decrypt_string(unsigned int param_1,byte *param_2,int param_3,byte param_4)
{
 byte *pbVar1;
 FUN_00011180(param_2,param_1,param_3);
 param_2[param_3 + -1] = 0;
 for (pbVar1 = param_2; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
 *pbVar1 = *pbVar1 ^ param_4;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x11491
int param_string_encryption(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string(&encrypted_0,local_30,0x20,0x5a);
 iVar1 = FUN_00011170(local_30);
 iVar1 = iVar1 + local_30[0];
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_tail_call_optimized @ 0x114f6
int param_tail_call_optimized(int param_1,int param_2)
{
 for (; 0 < param_1; param_1 = param_1 + -1) {
 param_2 = param_2 + param_1;
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1150e
unsigned int call_tail_call_optimized(void)
{
 return 0x7a314;
}

// Function: param_non_tail_call @ 0x11518
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 for (; 0 < param_1; param_1 = param_1 + -1) {
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x11531
void call_non_tail_call(void)
{
 param_non_tail_call(100);
 return;
}

// Function: param_vectorized_loop @ 0x11547
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
 int iVar1;
 int iVar2;
 for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
 *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
 }
 iVar2 = 0;
 for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
 iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
 }
 return iVar2;
}

// Function: call_vectorized_loop @ 0x11584
void call_vectorized_loop(void)
{
 int iVar1;
 unsigned int *puVar2;
 unsigned int *puVar3;
 int in_GS_OFFSET;
 unsigned int local_70 [8];
 unsigned int local_50 [8];
 unsigned int local_30 [8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 puVar2 = &DAT_00012020;
 puVar3 = local_70;
 for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 puVar2 = &DAT_00012040;
 puVar3 = local_50;
 for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar3 = *puVar2;
 puVar2 = puVar2 + 1;
 puVar3 = puVar3 + 1;
 }
 puVar2 = local_30;
 for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
 *puVar2 = 0;
 puVar2 = puVar2 + 1;
 }
 param_vectorized_loop(local_70,local_50,local_30,8);
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return;
}

// Function: param_link_time_optimization @ 0x115fd
int param_link_time_optimization(int param_1)
{
 return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x1160e
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x11618
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(8,div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = (unsigned int)(10 / (long long)param_1);
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x11668
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 FUN_00011130(8,0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x116ad
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(0xb,segv_handler);
 iVar1 = FUN_00011110(segv_buffer);
 uVar2 = 0xffffffff;
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x116f9
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_24;
 int local_20;
 unsigned int uStack_14;
 uStack_14 = 0x11708;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_24 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_24);
 iVar2 = param_null_pointer_deref(0);
 FUN_00011130(0xb,0);
 iVar1 = iVar1 + iVar2;
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11763
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1176f
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 int iVar1;
 unsigned int uVar2;
 iVar1 = FUN_00011150(0x10);
 uVar2 = 0xfffffffe;
 if (iVar1 != 0) {
 FUN_00011120(iVar1);
 uVar2 = param_1;
 }
 return uVar2;
}

// Function: call_buffer_overflow @ 0x117ae
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x117c4
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1) || ((int)param_2 < 1)) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else if (iVar1 < 0) {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x117f8
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x11802
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11810
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x1181a
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x11824
unsigned int call_implementation_defined(void)
{
 return 0x2b;
}

// Function: test_obf_opt_edge @ 0x1182e
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 FUN_00011160(&DAT_00012060);
 FUN_00011190(1,&DAT_0001208d,10);
 uVar1 = call_opaque_predicate();
 FUN_00011190(1,&DAT_000120a9,uVar1);
 FUN_00011190(1,&DAT_000120c5,0xe1);
 uVar1 = param_string_encryption();
 FUN_00011190(1,&DAT_000120e2,uVar1);
 uVar1 = call_tail_call_optimized();
 FUN_00011190(1,&DAT_000120fe,uVar1);
 call_non_tail_call();
 FUN_00011190(1,&DAT_00012128,0);
 call_vectorized_loop();
 FUN_00011190(1,&DAT_0001214d,uVar1);
 FUN_00011190(1,&DAT_00012173,0x14);
 uVar1 = call_division_by_zero();
 FUN_00011190(1,&DAT_00012193,uVar1);
 uVar1 = call_null_pointer_deref();
 FUN_00011190(1,&DAT_000121af,uVar1);
 uVar1 = call_buffer_overflow();
 FUN_00011190(1,&DAT_000121cc,uVar1);
 FUN_00011190(1,&DAT_000121e9,2000000000);
 FUN_00011190(1,&DAT_0001221a,10);
 FUN_00011190(1,&DAT_00012237,0x2b);
 return;
}

// Function: __stack_chk_fail_local @ 0x11990
void __stack_chk_fail_local(void)
{
 FUN_00011140();
 return;
}

// Function: __do_global_ctors_aux @ 0x119b0
void __do_global_ctors_aux(void)
{
 return;
}



