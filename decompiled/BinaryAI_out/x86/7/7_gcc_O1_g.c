// Decompiled by BinaryAI
// SHA256: 5e9ef022931fe78c037634cf39f165c81c33362e700cb54f45d040a14c0c001b

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x3c))();
  return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x1c))();
  return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x24))();
  return;
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x28))();
  return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x2c))();
  return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x30))();
  return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x34))();
  return;
}

// Function: _start @ 0x111b0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011100(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
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
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2d93) == '\0') {
    if (*(int *)(unaff_EDI + 0x2d63) != 0) {
      FUN_000110f0(*(undefined4 *)(unaff_EDI + 0x2d77));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2d97);
    while (uVar1 < ((unaff_EDI + 0x2c4b) - (unaff_EDI + 0x2c47) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2d97) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2c47 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2d97);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2d93) = 1;
  }
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
undefined4 div_zero_handler(void)
{
  div_zero_caught = 1;
  FUN_000111a0(jmp_buffer,1);
  segv_caught = 1;
  FUN_000111a0(segv_buffer);
  return 1;
}

// Function: segv_handler @ 0x1134c
undefined4 segv_handler(void)
{
  segv_caught = 1;
  FUN_000111a0(segv_buffer);
  return 1;
}

// Function: param_fake_branch @ 0x11377
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x11380
undefined4 call_fake_branch(void)
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
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x113ec
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1140e
undefined4 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x11418
byte * decrypt_string(undefined4 param_1,byte *param_2,int param_3,byte param_4)
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
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
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
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
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
void call_vectorized_loop(void)
{
  uint uVar1;
  int in_GS_OFFSET;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [8];
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
    *(undefined4 *)((int)local_30 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  param_vectorized_loop(&local_70,&local_50,local_30,8);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
  __stack_chk_fail_local();
}

// Function: param_link_time_optimization @ 0x11684
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11691
undefined4 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: param_division_by_zero @ 0x1169b
undefined4 param_division_by_zero(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  FUN_00011130(8,div_zero_handler);
  iVar1 = FUN_00011110(jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(10 / (longlong)param_1);
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
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
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
  undefined4 local_14;
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
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x117f0
undefined4 param_buffer_overflow_heap(undefined4 param_1)
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
undefined4 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x1189a
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x118a5
undefined4 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x118af
undefined4 param_implementation_defined(void)
{
  return 0x2b;
}

// Function: call_implementation_defined @ 0x118b9
undefined4 call_implementation_defined(void)
{
  return 0x2b;
}

// Function: test_obf_opt_edge @ 0x118c3
void test_obf_opt_edge(void)
{
  undefined4 uVar1;
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
undefined4 main(void)
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

// Function: _fini @ 0x11a9c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

