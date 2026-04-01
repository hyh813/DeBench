// Decompiled by BinaryAI
// SHA256: 23baec51ffb9130c87ede95785702840ffc3457b9e7f673e5ac156c54c813473

typedef unsigned int uint;
typedef unsigned char byte;

// Global variables
int jmp_buffer[10];
int segv_buffer[10];
int div_zero_caught;
int segv_caught;

// Forward declarations
int main(void);
void FUN_000111a0(int *param_1, int param_2);
int div_zero_caught;
int segv_caught;
byte encrypted_0[32];
int DAT_00012008;
int DAT_0001212f;
int DAT_0001214b;
int DAT_00012167;
int DAT_00012184;
int DAT_00012038;
int DAT_00012064;
int DAT_0001208c;
int DAT_000120b4;
int DAT_000121a0;
int DAT_000121bc;
int DAT_000121d9;
int DAT_000120d4;
int DAT_000121f6;
int DAT_00012108;



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(int param_1)
{
 return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6, int param_7)
{
 return;
}

// Function: FUN_00011110 @ 0x11110
int FUN_00011110(int *param_1)
{
 return 0;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(int param_1)
{
 return;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(int param_1, void *param_2)
{
 return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void)
{
 return;
}

// Function: FUN_00011150 @ 0x11150
int FUN_00011150(int param_1)
{
 return 0;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(int *param_1)
{
 return;
}

// Function: FUN_00011170 @ 0x11170
int FUN_00011170(char *param_1)
{
 return 0;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(byte *param_1, unsigned int param_2, int param_3)
{
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(int param_1, int *param_2, unsigned int param_3)
{
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(int *param_1, int param_2)
{
 return;
}



// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: div_zero_handler @ 0x11321
unsigned int div_zero_handler(void)
{
 div_zero_caught = 1;
 FUN_000111a0(jmp_buffer,1);
 segv_caught = 1;
 FUN_000111a0(segv_buffer,1);
 return 1;
}

// Function: segv_handler @ 0x1134c
unsigned int segv_handler(void)
{
 segv_caught = 1;
 FUN_000111a0(segv_buffer,1);
 return 1;
}

// Function: param_fake_branch @ 0x11377
unsigned int param_fake_branch(unsigned int param_1)
{
 return param_1;
}

// Function: call_fake_branch @ 0x11380
unsigned int call_fake_branch(void)
{
 return 10;
}

// Function: param_opaque_predicate @ 0x1138a
int param_opaque_predicate(int param_1)
{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 iVar1 = param_1 + 1;
 iVar2 = param_1;
 iVar4 = iVar1;
 if (iVar1 != 0) {
 do {
 iVar3 = iVar4;
 iVar4 = iVar2 % iVar3;
 iVar2 = iVar3;
 } while (iVar4 != 0);
 if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar1 * iVar1)) {
 return param_1 * 2 + 10;
 }
 }
 return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x113dd
unsigned int call_opaque_predicate(void)
{
 return param_opaque_predicate(5);
}

// Function: param_instruction_substitution @ 0x113ec
int param_instruction_substitution(uint param_1)
{
 return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1140e
unsigned int call_instruction_substitution(void)
{
 return 0xe1;
}

// Function: decrypt_string @ 0x11418
byte * decrypt_string(unsigned int param_1,byte *param_2,int param_3,byte param_4)
{
 byte bVar1;
 byte *pbVar2;
 FUN_00011180(param_2,param_1,param_3);
 param_2[param_3 + -1] = 0;
 bVar1 = *param_2;
 pbVar2 = param_2;
 while (bVar1 != 0) {
 *pbVar2 = bVar1 ^ param_4;
 pbVar2 = pbVar2 + 1;
 bVar1 = *pbVar2;
 }
 return param_2;
}

// Function: param_string_encryption @ 0x1146f
int param_string_encryption(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char local_30 [32];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 decrypt_string(&encrypted_0,local_30,0x20,0x5a);
 iVar1 = FUN_00011170(local_30);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_30[0] + iVar1;
 }
 __stack_chk_fail_local();
}

// Function: call_string_encryption @ 0x114d0
void call_string_encryption(void)
{
 param_string_encryption();
 return;
}

// Function: param_tail_call_optimized @ 0x114e0
int param_tail_call_optimized(int param_1,int param_2)
{
 if (0 < param_1) {
 param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
 }
 return param_2;
}

// Function: call_tail_call_optimized @ 0x1150b
unsigned int call_tail_call_optimized(void)
{
 return param_tail_call_optimized(1000,0);
}

// Function: param_non_tail_call @ 0x11522
int param_non_tail_call(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (0 < param_1) {
 iVar1 = param_non_tail_call(param_1 + -1);
 iVar1 = iVar1 + param_1;
 }
 return iVar1;
}

// Function: call_non_tail_call @ 0x1154d
unsigned int call_non_tail_call(void)
{
 return param_non_tail_call(100);
}

// Function: param_vectorized_loop @ 0x1155f
int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)
{
 int *piVar1;
 int iVar2;
 if (param_4 < 1) {
 iVar2 = 0;
 }
 else {
 iVar2 = 0;
 do {
 param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
 iVar2 = iVar2 + 1;
 } while (param_4 != iVar2);
 piVar1 = param_3 + iVar2;
 iVar2 = 0;
 do {
 iVar2 = iVar2 + *param_3;
 param_3 = param_3 + 1;
 } while (param_3 != piVar1);
 }
 return iVar2;
}

// Function: call_vectorized_loop @ 0x115ad
unsigned int call_vectorized_loop(void)
{
 uint uVar1;
 int in_GS_OFFSET;
 unsigned int local_70;
 unsigned int local_6c;
 unsigned int local_68;
 unsigned int local_64;
 unsigned int local_60;
 unsigned int local_5c;
 unsigned int local_58;
 unsigned int local_54;
 unsigned int local_50;
 unsigned int local_4c;
 unsigned int local_48;
 unsigned int local_44;
 unsigned int local_40;
 unsigned int local_3c;
 unsigned int local_38;
 unsigned int local_34;
 unsigned int local_30 [8];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 uVar1 = 0;
 local_70 = 1;
 local_6c = 2;
 local_68 = 3;
 local_64 = 4;
 local_60 = 5;
 local_5c = 6;
 local_58 = 7;
 local_54 = 8;
 local_50 = 8;
 local_4c = 7;
 local_48 = 6;
 local_44 = 5;
 local_40 = 4;
 local_3c = 3;
 local_38 = 2;
 local_34 = 1;
 do {
 *(unsigned int *)((int)local_30 + uVar1) = 0;
 uVar1 = uVar1 + 4;
 } while (uVar1 < 0x20);
 uVar1 = param_vectorized_loop(&local_70,&local_50,local_30,8);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar1;
 }
 __stack_chk_fail_local();
}

// Function: param_link_time_optimization @ 0x11684
int param_link_time_optimization(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11691
unsigned int call_link_time_optimization(void)
{
 return 0x14;
}

// Function: param_division_by_zero @ 0x1169b
unsigned int param_division_by_zero(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(8,(void *)div_zero_handler);
 iVar1 = FUN_00011110(jmp_buffer);
 if (iVar1 == 0) {
 uVar2 = (unsigned int)(10 / (long long)param_1);
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_division_by_zero @ 0x116eb
int call_division_by_zero(void)
{
 int iVar1;
 int iVar2;
 iVar1 = param_division_by_zero(5);
 iVar2 = param_division_by_zero(0);
 FUN_00011130(8,0);
 return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x1172d
unsigned int param_null_pointer_deref(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 FUN_00011130(0xb,segv_handler);
 iVar1 = FUN_00011110(segv_buffer);
 if (iVar1 == 0) {
 uVar2 = *param_1;
 }
 else {
 uVar2 = 0xffffffff;
 }
 return uVar2;
}

// Function: call_null_pointer_deref @ 0x11779
int call_null_pointer_deref(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 0x2a;
 iVar1 = param_null_pointer_deref(&local_14);
 iVar2 = param_null_pointer_deref(0);
 FUN_00011130(0xb,0);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + iVar2;
 }
 __stack_chk_fail_local();
}

// Function: param_buffer_overflow_stack @ 0x117e7
unsigned int param_buffer_overflow_stack(unsigned int param_1)
{
 return param_1;
}

// Function: param_buffer_overflow_heap @ 0x117f0
unsigned int param_buffer_overflow_heap(unsigned int param_1)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011150(0x10);
 if (iVar1 == 0) {
 param_1 = 0xfffffffe;
 }
 else {
 iVar2 = 0x21;
 do {
 iVar2 = iVar2 + -1;
 } while (iVar2 != 0);
 FUN_00011120(iVar1);
 }
 return param_1;
}

// Function: call_buffer_overflow @ 0x1183a
int call_buffer_overflow(void)
{
 int iVar1;
 iVar1 = param_buffer_overflow_heap(0x14);
 return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x1184f
int param_integer_overflow(uint param_1,uint param_2)
{
 int iVar1;
 iVar1 = param_1 + param_2;
 if (((int)param_1 < 1 || (int)param_2 < 1) || (-1 < iVar1)) {
 if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
 iVar1 = -2;
 }
 }
 else {
 iVar1 = -1;
 }
 return iVar1;
}

// Function: call_integer_overflow @ 0x11890
unsigned int call_integer_overflow(void)
{
 return 2000000000;
}

// Function: param_undefined_behavior @ 0x1189a
int param_undefined_behavior(int param_1)
{
 return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x118a5
unsigned int call_undefined_behavior(void)
{
 return 10;
}

// Function: param_implementation_defined @ 0x118af
unsigned int param_implementation_defined(void)
{
 return 0x2b;
}

// Function: call_implementation_defined @ 0x118b9
unsigned int call_implementation_defined(void)
{
 return 0x2b;
}

// Function: test_obf_opt_edge @ 0x118c3
void test_obf_opt_edge(void)
{
 unsigned int uVar1;
 FUN_00011160(&DAT_00012008);
 FUN_00011190(1,&DAT_0001212f,10);
 uVar1 = call_opaque_predicate();
 FUN_00011190(1,&DAT_0001214b,uVar1);
 FUN_00011190(1,&DAT_00012167,0xe1);
 uVar1 = param_string_encryption();
 FUN_00011190(1,&DAT_00012184,uVar1);
 uVar1 = call_tail_call_optimized();
 FUN_00011190(1,&DAT_00012038,uVar1);
 uVar1 = call_non_tail_call();
 FUN_00011190(1,&DAT_00012064,uVar1);
 uVar1 = call_vectorized_loop();
 FUN_00011190(1,&DAT_0001208c,uVar1);
 FUN_00011190(1,&DAT_000120b4,0x14);
 uVar1 = call_division_by_zero();
 FUN_00011190(1,&DAT_000121a0,uVar1);
 uVar1 = call_null_pointer_deref();
 FUN_00011190(1,&DAT_000121bc,uVar1);
 uVar1 = call_buffer_overflow();
 FUN_00011190(1,&DAT_000121d9,uVar1);
 FUN_00011190(1,&DAT_000120d4,2000000000);
 FUN_00011190(1,&DAT_000121f6,10);
 FUN_00011190(1,&DAT_00012108,0x2b);
 return;
}

// Function: main @ 0x11a17
int main(void)
{
 test_obf_opt_edge();
 return 0;
}

// Function: __stack_chk_fail_local @ 0x11a30
void __stack_chk_fail_local(void)
{
 FUN_00011140();
 return;
}

// Function: __do_global_ctors_aux @ 0x11a50
void __do_global_ctors_aux(void)
{
 return;
}



