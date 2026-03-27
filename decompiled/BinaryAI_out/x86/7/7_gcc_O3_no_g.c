// Decompiled by BinaryAI
// SHA256: 1486ddea413dfcd150cd7002d1cb20455964244cc4876cbaa19393a12c409fb8

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

// Function: main @ 0x111b0
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _start @ 0x111d0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011100(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
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
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2d73) == '\0') {
    if (*(int *)(unaff_EDI + 0x2d43) != 0) {
      FUN_000110f0(*(undefined4 *)(unaff_EDI + 0x2d57));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2d77);
    while (uVar1 < ((unaff_EDI + 0x2c2b) - (unaff_EDI + 0x2c27) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2d77) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2c27 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2d77);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2d73) = 1;
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

// Function: div_zero_handler @ 0x11350
undefined4 div_zero_handler(void)
{
  int iVar1;
  div_zero_caught = 1;
  FUN_000111a0(jmp_buffer,1);
  segv_caught = 1;
  FUN_000111a0(segv_buffer,1);
  FUN_00011130(8,div_zero_handler);
  iVar1 = FUN_00011110(jmp_buffer);
  if (iVar1 == 0) {
    do {
      invalidInstructionException();
    } while( true );
  }
  return 0xffffffff;
}

// Function: segv_handler @ 0x11380
undefined4 segv_handler(void)
{
  int iVar1;
  segv_caught = 1;
  FUN_000111a0(segv_buffer,1);
  FUN_00011130(8,div_zero_handler);
  iVar1 = FUN_00011110(jmp_buffer);
  if (iVar1 == 0) {
    do {
      invalidInstructionException();
    } while( true );
  }
  return 0xffffffff;
}

// Function: param_division_by_zero.constprop.0 @ 0x113b0
undefined4 param_division_by_zero_constprop_0(void)
{
  int iVar1;
  FUN_00011130(8,div_zero_handler);
  iVar1 = FUN_00011110(jmp_buffer);
  if (iVar1 == 0) {
    do {
      invalidInstructionException();
    } while( true );
  }
  return 0xffffffff;
}

// Function: param_division_by_zero.constprop.1 @ 0x11400
int param_division_by_zero_constprop_1(void)
{
  int iVar1;
  FUN_00011130(8,div_zero_handler);
  iVar1 = FUN_00011110(jmp_buffer);
  return (-(uint)(iVar1 == 0) & 3) - 1;
}

// Function: param_fake_branch @ 0x11440
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x11450
undefined4 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x11460
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

// Function: call_opaque_predicate @ 0x114c0
undefined4 call_opaque_predicate(void)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  iVar1 = 5;
  iVar4 = 6;
  do {
    iVar3 = iVar4;
    iVar4 = iVar1 % iVar3;
    iVar1 = iVar3;
  } while (iVar4 != 0);
  uVar2 = 0x14;
  if (iVar3 != 1) {
    uVar2 = 0x23;
  }
  return uVar2;
}

// Function: param_instruction_substitution @ 0x114f0
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11520
undefined4 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x11530
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
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x11590
int param_string_encryption(void)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_GS_OFFSET;
  byte local_30 [31];
  undefined local_11;
  int local_10;
  undefined4 uStack_c;
  uStack_c = 0x1159b;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011180(local_30,&encrypted_0,0x1f);
  local_11 = 0;
  pbVar2 = local_30;
  bVar1 = local_30[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  iVar3 = FUN_00011170(local_30);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3 + (char)local_30[0];
  }
  __stack_chk_fail_local();
}

// Function: call_string_encryption @ 0x11630
int call_string_encryption(void)
{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_GS_OFFSET;
  byte local_30 [31];
  undefined local_11;
  int local_10;
  undefined4 uStack_c;
  uStack_c = 0x1163b;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011180(local_30,&encrypted_0,0x1f);
  local_11 = 0;
  pbVar2 = local_30;
  bVar1 = local_30[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  iVar3 = FUN_00011170(local_30);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3 + (char)local_30[0];
  }
  __stack_chk_fail_local();
}

// Function: param_tail_call_optimized @ 0x116d0
int param_tail_call_optimized(int param_1,int param_2)
{
  if (0 < param_1) {
    do {
      param_2 = param_2 + param_1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x116f0
undefined4 call_tail_call_optimized(void)
{
  return 0x7a314;
}

// Function: param_non_tail_call @ 0x11700
int param_non_tail_call(int param_1)
{
  int iVar1;
  iVar1 = 0;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 + param_1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return iVar1;
}

// Function: call_non_tail_call @ 0x11720
undefined4 call_non_tail_call(void)
{
  return 0x13ba;
}

// Function: param_vectorized_loop @ 0x11730
int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)
{
  int *piVar1;
  int iVar2;
  if (0 < param_4) {
    iVar2 = 0;
    do {
      param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_4 != iVar2);
    piVar1 = param_3 + param_4;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_3;
      param_3 = param_3 + 1;
    } while (piVar1 != param_3);
    return iVar2;
  }
  return 0;
}

// Function: call_vectorized_loop @ 0x11790
undefined4 call_vectorized_loop(void)
{
  return 0x48;
}

// Function: param_link_time_optimization @ 0x117a0
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x117b0
undefined4 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: param_division_by_zero @ 0x117c0
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

// Function: call_division_by_zero @ 0x11820
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero_constprop_1();
  iVar2 = param_division_by_zero_constprop_0();
  FUN_00011130(8,0);
  return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x11860
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

// Function: call_null_pointer_deref @ 0x118b0
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

// Function: param_buffer_overflow_stack @ 0x11920
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11930
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  int iVar1;
  iVar1 = FUN_00011150(0x10);
  if (iVar1 == 0) {
    param_1 = 0xfffffffe;
  }
  else {
    FUN_00011120(iVar1);
  }
  return param_1;
}

// Function: call_buffer_overflow @ 0x11970
undefined4 call_buffer_overflow(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = FUN_00011150(0x10);
  if (iVar1 == 0) {
    uVar2 = 8;
  }
  else {
    FUN_00011120(iVar1);
    uVar2 = 0x1e;
  }
  return uVar2;
}

// Function: param_integer_overflow @ 0x119b0
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  iVar1 = param_1 + param_2;
  if ((0 < (int)param_1) && (0 < (int)param_2)) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
    iVar1 = -2;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x119f0
undefined4 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x11a00
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11a10
undefined4 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x11a20
undefined4 param_implementation_defined(void)
{
  return 0x2b;
}

// Function: call_implementation_defined @ 0x11a30
undefined4 call_implementation_defined(void)
{
  return 0x2b;
}

// Function: test_obf_opt_edge @ 0x11a40
void test_obf_opt_edge(void)
{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_GS_OFFSET;
  undefined4 local_34;
  byte local_30 [31];
  undefined local_11;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011160(&DAT_00012008);
  FUN_00011190(1,&DAT_0001212f,10);
  iVar4 = 5;
  iVar6 = 6;
  do {
    iVar5 = iVar6;
    iVar6 = iVar4 % iVar5;
    iVar4 = iVar5;
  } while (iVar6 != 0);
  uVar3 = 0x14;
  if (iVar5 != 1) {
    uVar3 = 0x23;
  }
  FUN_00011190(1,&DAT_0001214b,uVar3);
  FUN_00011190(1,&DAT_00012167,0xe1);
  FUN_00011180(local_30,&encrypted_0,0x1f);
  local_11 = 0;
  pbVar2 = local_30;
  bVar1 = local_30[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  iVar4 = FUN_00011170(local_30);
  FUN_00011190(1,&DAT_00012184,(char)local_30[0] + iVar4);
  FUN_00011190(1,&DAT_00012038,0x7a314);
  FUN_00011190(1,&DAT_00012064,0x13ba);
  uVar3 = call_vectorized_loop();
  FUN_00011190(1,&DAT_0001208c,uVar3);
  FUN_00011190(1,&DAT_000120b4,0x14);
  iVar4 = param_division_by_zero_constprop_1();
  iVar6 = param_division_by_zero_constprop_0();
  FUN_00011130(8,0);
  FUN_00011190(1,&DAT_000121a0,iVar4 + iVar6);
  local_34 = 0x2a;
  iVar4 = param_null_pointer_deref(&local_34);
  iVar6 = param_null_pointer_deref(0);
  FUN_00011130(0xb,0);
  FUN_00011190(1,&DAT_000121bc,iVar4 + iVar6);
  iVar4 = FUN_00011150(0x10);
  if (iVar4 == 0) {
    uVar3 = 8;
  }
  else {
    FUN_00011120(iVar4);
    uVar3 = 0x1e;
  }
  FUN_00011190(1,&DAT_000121d9,uVar3);
  FUN_00011190(1,&DAT_000120d4,2000000000);
  FUN_00011190(1,&DAT_000121f6,10);
  FUN_00011190(1,&DAT_00012108,0x2b);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
  __stack_chk_fail_local();
}

// Function: __stack_chk_fail_local @ 0x11ca0
void __stack_chk_fail_local(void)
{
  FUN_00011140();
  return;
}

// Function: __do_global_ctors_aux @ 0x11cc0
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11d0c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

