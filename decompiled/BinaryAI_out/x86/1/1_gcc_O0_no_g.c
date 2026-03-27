// Decompiled by BinaryAI
// SHA256: 8d1d154792d9d949d59da5d5483f275229050734d78d90706d639c74a4634a91

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

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x28))();
  return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x1c))();
  return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: _start @ 0x11110
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_000110b0(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1113c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11140
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11150
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11190
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x111e0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x4e33) == '\0') {
    if (*(int *)(unaff_EDI + 0x4e03) != 0) {
      FUN_000110a0(*(undefined4 *)(unaff_EDI + 0x4e17));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x4e37);
    while (uVar1 < ((unaff_EDI + 0x4cff) - (unaff_EDI + 0x4cfb) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x4e37) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x4cfb + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x4e37);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x4e33) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11279
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1127d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: sequential_ops @ 0x11281
int sequential_ops(int param_1,int param_2,int param_3)
{
  return (param_2 + param_1) * 2 - param_3;
}

// Function: single_if @ 0x112b6
int single_if(int param_1)
{
  if (0 < param_1) {
    param_1 = param_1 << 1;
  }
  return param_1;
}

// Function: if_else @ 0x112d5
bool if_else(int param_1)
{
  return 0 < param_1;
}

// Function: nested_if_2 @ 0x112fa
int nested_if_2(int param_1,int param_2)
{
  if (param_1 < 1) {
    param_1 = 0;
  }
  else if (0 < param_2) {
    param_1 = param_2 + param_1;
  }
  return param_1;
}

// Function: nested_if_deep @ 0x1132d
undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else if (param_2 < 1) {
    uVar1 = 1;
  }
  else if (param_3 < 1) {
    uVar1 = 2;
  }
  else if (param_4 < 1) {
    uVar1 = 3;
  }
  else if (param_5 < 1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}

// Function: if_elseif_chain @ 0x11386
undefined4 if_elseif_chain(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 10;
  }
  else if (param_1 == 1) {
    uVar1 = 0x14;
  }
  else if (param_1 == 2) {
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: if_elseif_long @ 0x113c5
undefined4 if_elseif_long(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 100;
  }
  else if (param_1 == 1) {
    uVar1 = 200;
  }
  else if (param_1 == 2) {
    uVar1 = 300;
  }
  else if (param_1 == 3) {
    uVar1 = 400;
  }
  else if (param_1 == 4) {
    uVar1 = 500;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: switch_small @ 0x1141e
undefined4 switch_small(int param_1)
{
  if (param_1 == 3) {
    return 2;
  }
  if (param_1 < 4) {
    if (param_1 == 2) {
      return 0x32;
    }
    if (param_1 < 3) {
      if (param_1 == 0) {
        return 0xf;
      }
      if (param_1 == 1) {
        return 5;
      }
    }
  }
  return 0xffffffff;
}

// Function: switch_large @ 0x11491
undefined4 switch_large(undefined4 param_1)
{
  undefined4 uVar1;
  switch(param_1) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 10;
    break;
  case 2:
    uVar1 = 0x14;
    break;
  case 3:
    uVar1 = 0x1e;
    break;
  case 4:
    uVar1 = 0x28;
    break;
  case 5:
    uVar1 = 0x32;
    break;
  case 6:
    uVar1 = 0x3c;
    break;
  case 7:
    uVar1 = 0x46;
    break;
  case 8:
    uVar1 = 0x50;
    break;
  case 9:
    uVar1 = 0x5a;
    break;
  default:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: switch_default @ 0x11507
undefined4 switch_default(int param_1)
{
  if (param_1 == 3) {
    return 300;
  }
  if (param_1 < 4) {
    if (param_1 == 1) {
      return 100;
    }
    if (param_1 == 2) {
      return 200;
    }
  }
  return 0;
}

// Function: switch_fallthrough @ 0x1154e
int switch_fallthrough(int param_1)
{
  int local_8;
  local_8 = 0;
  if (param_1 == 3) {
    local_8 = 0xc;
LAB_0001158c:
    local_8 = local_8 + param_1 * 2;
LAB_00011594:
    local_8 = local_8 + param_1;
  }
  else {
    if (param_1 < 4) {
      if (param_1 == 1) goto LAB_00011594;
      if (param_1 == 2) goto LAB_0001158c;
    }
    local_8 = -1;
  }
  return local_8;
}

// Function: loop_for_fixed @ 0x115a8
int loop_for_fixed(int param_1)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + local_8;
  }
  return local_c;
}

// Function: loop_while @ 0x115e3
int loop_while(int param_1)
{
  int local_8;
  local_8 = 0;
  for (; param_1 != 0; param_1 = param_1 / 10) {
    local_8 = local_8 + 1;
  }
  if (local_8 < 1) {
    local_8 = 1;
  }
  return local_8;
}

// Function: loop_dowhile @ 0x11634
int loop_dowhile(int param_1)
{
  int local_8;
  local_8 = 0;
  do {
    param_1 = param_1 / 10;
    local_8 = local_8 + 1;
  } while (param_1 != 0);
  return local_8;
}

// Function: loop_nested @ 0x11679
int loop_nested(int param_1,int param_2)
{
  int local_10;
  int local_c;
  int local_8;
  local_10 = 0;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}

// Function: loop_break @ 0x116c7
int loop_break(int param_1)
{
  int in_GS_OFFSET;
  int local_2c;
  int local_24 [4];
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_24[0] = 10;
  local_24[1] = 0x14;
  local_24[2] = 0x1e;
  local_24[3] = 0x28;
  local_14 = 0x32;
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    if (param_1 == local_24[local_2c]) goto LAB_0001173b;
  }
  local_2c = -1;
LAB_0001173b:
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    local_2c = __stack_chk_fail_local();
  }
  return local_2c;
}

// Function: loop_continue @ 0x1174e
int loop_continue(int param_1)
{
  int local_c;
  uint local_8;
  local_c = 0;
  for (local_8 = 1; (int)local_8 <= param_1; local_8 = local_8 + 1) {
    if ((local_8 & 1) != 0) {
      local_c = local_c + local_8;
    }
  }
  return local_c;
}

// Function: goto_forward @ 0x11796
int goto_forward(int param_1)
{
  int local_8;
  if (param_1 < 1) {
    local_8 = param_1;
  }
  else {
    local_8 = param_1 * param_1;
  }
  return local_8 << 1;
}

// Function: goto_backward @ 0x117c9
int goto_backward(int param_1)
{
  int local_c;
  int local_8;
  if (param_1 < 1) {
    local_c = 1;
  }
  else {
    local_c = 1;
    for (local_8 = 1; local_8 <= param_1; local_8 = local_8 + 1) {
      local_c = local_c * local_8;
    }
  }
  return local_c;
}

// Function: ternary_op @ 0x11816
int ternary_op(int param_1,int param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: test_control_flow_l1 @ 0x11834
void test_control_flow_l1(void)
{
  undefined4 uVar1;
  FUN_00011100(&DAT_00013030);
  uVar1 = sequential_ops(5,7,3);
  FUN_000110c0("CF-L1-01 (sequential_ops): %d\n",uVar1);
  uVar1 = single_if(10);
  FUN_000110c0("CF-L1-02 (single_if): %d\n",uVar1);
  uVar1 = single_if(0xfffffffb);
  FUN_000110c0("CF-L1-02 (single_if): %d\n",uVar1);
  uVar1 = if_else(5);
  FUN_000110c0("CF-L1-03 (if_else): %d\n",uVar1);
  uVar1 = if_else(0xfffffffd);
  FUN_000110c0("CF-L1-03 (if_else): %d\n",uVar1);
  uVar1 = nested_if_2(10,5);
  FUN_000110c0("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_2(10,0xfffffffb);
  FUN_000110c0("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_2(0xfffffff6,5);
  FUN_000110c0("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_deep(1,1,1,1,1);
  FUN_000110c0("CF-L1-05 (nested_if_deep): %d\n",uVar1);
  uVar1 = if_elseif_chain(1);
  FUN_000110c0("CF-L1-06 (if_elseif_chain): %d\n",uVar1);
  uVar1 = if_elseif_long(3);
  FUN_000110c0("CF-L1-07 (if_elseif_long): %d\n",uVar1);
  uVar1 = switch_small(2);
  FUN_000110c0("CF-L1-08 (switch_small): %d\n",uVar1);
  uVar1 = switch_large(7);
  FUN_000110c0("CF-L1-09 (switch_large): %d\n",uVar1);
  uVar1 = switch_default(5);
  FUN_000110c0("CF-L1-10 (switch_default): %d\n",uVar1);
  uVar1 = switch_fallthrough(3);
  FUN_000110c0("CF-L1-11 (switch_fallthrough): %d\n",uVar1);
  uVar1 = loop_for_fixed(10);
  FUN_000110c0("CF-L1-12 (loop_for_fixed): %d\n",uVar1);
  uVar1 = loop_while(0x3039);
  FUN_000110c0("CF-L1-13 (loop_while): %d\n",uVar1);
  uVar1 = loop_dowhile(0x2694);
  FUN_000110c0("CF-L1-14 (loop_dowhile): %d\n",uVar1);
  uVar1 = loop_nested(3,4);
  FUN_000110c0("CF-L1-15 (loop_nested): %d\n",uVar1);
  uVar1 = loop_break(0x1e);
  FUN_000110c0("CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_break(99);
  FUN_000110c0("CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_continue(10);
  FUN_000110c0("CF-L1-17 (loop_continue): %d\n",uVar1);
  uVar1 = goto_forward(5);
  FUN_000110c0("CF-L1-18 (goto_forward): %d\n",uVar1);
  uVar1 = goto_forward(0xfffffffd);
  FUN_000110c0("CF-L1-18 (goto_forward): %d\n",uVar1);
  uVar1 = goto_backward(5);
  FUN_000110c0("CF-L1-19 (goto_backward): %d\n",uVar1);
  uVar1 = ternary_op(10,5);
  FUN_000110c0("CF-L1-20 (ternary_op): %d\n",uVar1);
  uVar1 = ternary_op(3,8);
  FUN_000110c0("CF-L1-20 (ternary_op): %d\n",uVar1);
  return;
}

// Function: loop_multi_exit @ 0x11be0
int loop_multi_exit(int param_1)
{
  int in_GS_OFFSET;
  int local_48;
  int local_44;
  int local_40 [4];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_40[0] = 1;
  local_40[1] = 2;
  local_40[2] = 3;
  local_40[3] = 4;
  local_30 = 5;
  local_2c = 6;
  local_28 = 7;
  local_24 = 8;
  local_20 = 9;
  local_1c = 10;
  local_18 = 0xb;
  local_14 = 0xc;
  local_48 = 0;
  do {
    if (2 < local_48) {
      local_44 = -1;
LAB_00011cab:
      if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
        local_44 = __stack_chk_fail_local();
      }
      return local_44;
    }
    for (local_44 = 0; local_44 < 4; local_44 = local_44 + 1) {
      if (param_1 == local_40[local_44 + local_48 * 4]) {
        local_44 = local_44 + local_48 * 10;
        goto LAB_00011cab;
      }
    }
    local_48 = local_48 + 1;
  } while( true );
}

// Function: infinite_loop @ 0x11cbe
int infinite_loop(int *param_1)
{
  int local_8;
  local_8 = 0;
  do {
    if (*param_1 == 1) {
      return local_8;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x3e9);
  *param_1 = 1;
  return local_8;
}

// Function: multi_return @ 0x11d01
int multi_return(uint param_1)
{
  int iVar1;
  if ((int)param_1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1 * 2;
    if (iVar1 < 0x65) {
      if ((param_1 & 1) != 0) {
        iVar1 = param_1 + 1;
      }
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}

// Function: conditional_return @ 0x11d4e
int conditional_return(int param_1)
{
  if (param_1 < 1) {
    if (param_1 < 0) {
      param_1 = -param_1;
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_1 = param_1 * 2;
  }
  return param_1;
}

// Function: duffs_device @ 0x11d80
int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3)
{
  int local_8;
  if (param_3 < 1) {
    param_3 = -1;
  }
  else {
    local_8 = param_3 + 7;
    if (param_3 + 7 < 0) {
      local_8 = param_3 + 0xe;
    }
    local_8 = local_8 >> 3;
    switch(param_3 % 8) {
    case 0:
      do {
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L143:
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L145:
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L146:
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L147:
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L148:
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L149:
        *param_1 = *param_2;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
_L150:
        *param_1 = *param_2;
        local_8 = local_8 + -1;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
      } while (0 < local_8);
      break;
    case 1:
      goto _L150;
    case 2:
      goto _L149;
    case 3:
      goto _L148;
    case 4:
      goto _L147;
    case 5:
      goto _L146;
    case 6:
      goto _L145;
    case 7:
      goto _L143;
    }
  }
  return param_3;
}

// Function: loop_complex_cond @ 0x11ea7
int loop_complex_cond(int param_1)
{
  int local_10;
  int local_c;
  int local_8;
  local_10 = 0;
  local_8 = 0;
  for (local_c = param_1; ((local_10 < local_c && (local_8 < 10)) && (0 < local_c));
      local_c = local_c + -1) {
    local_10 = local_10 + 2;
    local_8 = local_8 + 1;
  }
  return local_8 + local_10 + local_c;
}

// Function: loop_modify_var @ 0x11f00
int loop_modify_var(int param_1)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + local_8;
    if (5 < local_8) {
      local_8 = local_8 + 2;
    }
  }
  return local_c;
}

// Function: loop_external_state @ 0x11f45
int loop_external_state(int *param_1)
{
  int local_8;
  local_8 = 0;
  do {
    if (*param_1 != 0) {
      return local_8;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 0x65);
  return local_8;
}

// Function: recursion_factorial @ 0x11f7d
int recursion_factorial(int param_1)
{
  int iVar1;
  if (param_1 < 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = recursion_factorial(param_1 + -1);
    iVar1 = iVar1 * param_1;
  }
  return iVar1;
}

// Function: tail_recursion @ 0x11fb6
int tail_recursion(int param_1,int param_2)
{
  if (1 < param_1) {
    param_2 = tail_recursion(param_1 + -1,param_1 * param_2);
  }
  return param_2;
}

// Function: indirect_recursion_a @ 0x11ff1
uint indirect_recursion_a(uint param_1,int param_2)
{
  if (0 < param_2) {
    if ((param_1 & 1) == 0) {
      param_1 = indirect_recursion_b((int)param_1 / 2,param_2 + -1);
    }
    else {
      param_1 = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
    }
  }
  return param_1;
}

// Function: indirect_recursion_b @ 0x1205c
int indirect_recursion_b(int param_1,int param_2)
{
  if (0 < param_2) {
    param_1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
  }
  return param_1;
}

// Function: call_func_ptr @ 0x12096
void call_func_ptr(code *param_1,undefined4 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: double_value @ 0x120ba
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: triple_value @ 0x120d2
int triple_value(int param_1)
{
  return param_1 * 3;
}

// Function: call_func_ptr_array @ 0x120ee
undefined4 call_func_ptr_array(int param_1,undefined4 param_2)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  code *local_1c [3];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c[0] = double_value;
  local_1c[1] = triple_value;
  local_1c[2] = recursion_factorial;
  if ((param_1 < 0) || (2 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*local_1c[param_1])(param_2);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: call_virtual_func @ 0x12161
int call_virtual_func(undefined4 param_1,int param_2)
{
  return param_2 * 2;
}

// Function: process_with_callback @ 0x12179
int process_with_callback(int param_1,int param_2,code *param_3)
{
  int iVar1;
  int local_14;
  int local_10;
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + local_10 * 4));
    local_14 = local_14 + iVar1;
  }
  return local_14;
}

// Function: test_control_flow_l2 @ 0x121ce
void test_control_flow_l2(void)
{
  undefined4 uVar1;
  uint uVar2;
  int in_GS_OFFSET;
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
  FUN_00011100(&DAT_000132c8);
  uVar1 = loop_multi_exit(7);
  FUN_000110c0("CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_6c = 0;
  uVar1 = infinite_loop(&local_6c);
  FUN_000110c0("CF-L2-02 (infinite_loop): %d\n",uVar1);
  uVar1 = multi_return(0xfffffffb);
  FUN_000110c0("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = multi_return(100);
  FUN_000110c0("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = multi_return(3);
  FUN_000110c0("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = conditional_return(5);
  FUN_000110c0("CF-L2-04 (conditional_return): %d\n",uVar1);
  uVar1 = conditional_return(0xfffffffb);
  FUN_000110c0("CF-L2-04 (conditional_return): %d\n",uVar1);
  local_50 = 1;
  local_4c = 2;
  local_48 = 3;
  local_44 = 4;
  local_40 = 5;
  local_3c = 6;
  local_38 = 7;
  local_34 = 8;
  uVar2 = 0;
  do {
    *(undefined4 *)((int)local_30 + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  uVar1 = duffs_device(local_30,&local_50,8);
  FUN_000110c0("CF-L2-05 (duffs_device): %d\n",uVar1);
  uVar1 = loop_complex_cond(10);
  FUN_000110c0("CF-L2-06 (loop_complex_cond): %d\n",uVar1);
  uVar1 = loop_modify_var(10);
  FUN_000110c0("CF-L2-07 (loop_modify_var): %d\n",uVar1);
  local_68 = 0;
  uVar1 = loop_external_state(&local_68);
  FUN_000110c0("CF-L2-08 (loop_external_state): %d\n",uVar1);
  uVar1 = recursion_factorial(5);
  FUN_000110c0("CF-L2-09 (recursion_factorial): %d\n",uVar1);
  uVar1 = tail_recursion(5,1);
  FUN_000110c0("CF-L2-10 (tail_recursion): %d\n",uVar1);
  uVar1 = indirect_recursion_a(10,3);
  FUN_000110c0("CF-L2-11 (indirect_recursion): %d\n",uVar1);
  uVar1 = call_func_ptr(double_value,5);
  FUN_000110c0("CF-L2-12 (call_func_ptr): %d\n",uVar1);
  uVar1 = call_func_ptr_array(0,5);
  FUN_000110c0("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  uVar1 = call_func_ptr_array(2,5);
  FUN_000110c0("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  local_64 = 1;
  local_60 = 2;
  local_5c = 3;
  local_58 = 4;
  local_54 = 5;
  uVar1 = process_with_callback(&local_64,5,double_value);
  FUN_000110c0("CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: non_local_jump @ 0x12506
int non_local_jump(int param_1)
{
  int iVar1;
  undefined ***pppuVar2;
  undefined **ppuStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  undefined auStack_1c [12];
  undefined **local_10;
  pppuVar2 = (undefined ***)auStack_1c;
  uStack_20 = 0x12516;
  local_10 = &_GLOBAL_OFFSET_TABLE_;
  ppuStack_2c = (undefined **)jump_buffer;
  iVar1 = FUN_000110e0();
  if (iVar1 == 0) {
    if (param_1 < 0) {
      uStack_28 = 1;
      ppuStack_2c = local_10 + 0x1e;
      pppuVar2 = &ppuStack_2c;
      FUN_000110d0();
    }
    if (100 < param_1) {
      *(undefined4 *)((int)pppuVar2 + -0xc) = 2;
      *(undefined ***)((int)pppuVar2 + -0x10) = local_10 + 0x1e;
      *(undefined4 *)((int)pppuVar2 + -0x14) = 0x12570;
      FUN_000110d0();
    }
    param_1 = param_1 * 2;
  }
  else {
    param_1 = -1;
  }
  return param_1;
}

// Function: cpp_exception @ 0x12581
int cpp_exception(int param_1)
{
  if (param_1 < 0) {
    param_1 = -1;
  }
  else if (param_1 < 0x65) {
    param_1 = param_1 * 2;
  }
  else {
    param_1 = -2;
  }
  return param_1;
}

// Function: op_add @ 0x125b3
int op_add(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: op_sub @ 0x125ce
int op_sub(int param_1,int param_2)
{
  return param_1 - param_2;
}

// Function: op_mul @ 0x125e7
int op_mul(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: op_div @ 0x12601
int op_div(int param_1,int param_2)
{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 / param_2;
  }
  return param_1;
}

// Function: op_mod @ 0x12628
int op_mod(int param_1,int param_2)
{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 % param_2;
  }
  return param_1;
}

// Function: op_and @ 0x12651
uint op_and(uint param_1,uint param_2)
{
  return param_1 & param_2;
}

// Function: op_or @ 0x1266a
uint op_or(uint param_1,uint param_2)
{
  return param_1 | param_2;
}

// Function: op_xor @ 0x12683
uint op_xor(uint param_1,uint param_2)
{
  return param_1 ^ param_2;
}

// Function: op_shl @ 0x1269c
int op_shl(int param_1,byte param_2)
{
  return param_1 << (param_2 & 0x1f);
}

// Function: op_shr @ 0x126bb
int op_shr(int param_1,byte param_2)
{
  return param_1 >> (param_2 & 0x1f);
}

// Function: large_jump_table @ 0x126da
undefined4 large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  code *local_38 [4];
  code *local_28;
  code *local_24;
  code *local_20;
  code *local_1c;
  code *local_18;
  code *local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_38[0] = op_add;
  local_38[1] = op_sub;
  local_38[2] = op_mul;
  local_38[3] = op_div;
  local_28 = op_mod;
  local_24 = op_and;
  local_20 = op_or;
  local_1c = op_xor;
  local_18 = op_shl;
  local_14 = op_shr;
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*local_38[param_1])(param_2,param_3);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: conditional_func_ptr @ 0x1278f
void conditional_func_ptr(int param_1,undefined4 param_2)
{
  code *local_10;
  if (param_1 == 0) {
    local_10 = double_value;
  }
  else if (param_1 == 1) {
    local_10 = triple_value;
  }
  else {
    local_10 = recursion_factorial;
  }
  (*local_10)(param_2);
  return;
}

// Function: state_machine @ 0x127de
undefined4 state_machine(int param_1,int param_2)
{
  if (param_2 == 3) {
    if (param_1 == 0) {
      return 0;
    }
    return 3;
  }
  if (param_2 < 4) {
    if (param_2 == 2) {
      return 2;
    }
    if (param_2 < 3) {
      if (param_2 == 0) {
        if (param_1 == 1) {
          return 1;
        }
        return 0;
      }
      if (param_2 == 1) {
        if (param_1 == 2) {
          return 2;
        }
        if (param_1 == 99) {
          return 3;
        }
        return 1;
      }
    }
  }
  return 3;
}

// Function: state_idle @ 0x1286c
bool state_idle(int param_1)
{
  return param_1 == 1;
}

// Function: state_processing @ 0x12889
undefined4 state_processing(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 2) {
    uVar1 = 2;
  }
  else if (param_1 == 99) {
    uVar1 = 3;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// Function: state_done @ 0x128bb
undefined4 state_done(void)
{
  return 2;
}

// Function: state_error @ 0x128d3
undefined4 state_error(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

// Function: fsm_func_table @ 0x128f8
undefined4 fsm_func_table(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  code *local_20 [4];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_20[0] = state_idle;
  local_20[1] = state_processing;
  local_20[2] = state_done;
  local_20[3] = state_error;
  if ((param_2 < 0) || (3 < param_2)) {
    uVar1 = 3;
  }
  else {
    uVar1 = (*local_20[param_2])(param_1);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: computed_goto @ 0x12974
undefined4 computed_goto(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  code *local_20 [4];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_20[0] = (code *)&DAT_000129db;
  local_20[1] = (code *)&DAT_000129e6;
  local_20[2] = (code *)&DAT_000129f1;
  local_20[3] = (code *)&DAT_000129fc;
  if ((-1 < param_2) && (param_2 < 4)) {
    uVar1 = (*local_20[param_2])();
    return uVar1;
  }
  uVar1 = 0xffffffff;
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: obfuscated_cf @ 0x12a18
int obfuscated_cf(int param_1)
{
  int local_8;
  local_8 = param_1;
  if (param_1 * param_1 < -1) {
    local_8 = param_1 * 2 + 1;
  }
  return local_8 << 1;
}

// Function: opaque_predicate @ 0x12a50
int opaque_predicate(int param_1)
{
  return param_1 * 2;
}

// Function: overlapped_code @ 0x12a83
int overlapped_code(uint param_1)
{
  int iVar1;
  if ((param_1 & 1) == 0) {
    iVar1 = (int)param_1 / 2;
  }
  else {
    iVar1 = param_1 * 3 + 1;
  }
  return iVar1;
}

// Function: test_control_flow_l3 @ 0x12aba
void test_control_flow_l3(void)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011100(&DAT_000134c4);
  uVar1 = non_local_jump(5);
  FUN_000110c0("CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  FUN_000110c0("CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = cpp_exception(5);
  FUN_000110c0("CF-L3-02 (cpp_exception): %d\n",uVar1);
  uVar1 = cpp_exception(0xfffffffb);
  FUN_000110c0("CF-L3-02 (cpp_exception): %d\n",uVar1);
  uVar1 = large_jump_table(0,10,5);
  FUN_000110c0("CF-L3-03 (large_jump_table): %d\n",uVar1);
  uVar1 = conditional_func_ptr(0,5);
  FUN_000110c0("CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
  uVar1 = state_machine(1,0);
  FUN_000110c0("CF-L3-05 (state_machine): %d\n",uVar1);
  uVar1 = fsm_func_table(2,1);
  FUN_000110c0("CF-L3-06 (fsm_func_table): %d\n",uVar1);
  local_20 = 0;
  local_1c = 1;
  local_18 = 2;
  local_14 = 3;
  uVar1 = computed_goto(&local_20,2);
  FUN_000110c0("CF-L3-07 (computed_goto): %d\n",uVar1);
  uVar1 = obfuscated_cf(5);
  FUN_000110c0("CF-L3-08 (obfuscated_cf): %d\n",uVar1);
  uVar1 = opaque_predicate(5);
  FUN_000110c0("CF-L3-09 (opaque_predicate): %d\n",uVar1);
  uVar1 = overlapped_code(5);
  FUN_000110c0("CF-L3-10 (overlapped_code): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: main @ 0x12cae
undefined4 main(void)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x12cd8
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x12ce0
void __stack_chk_fail_local(void)
{
  FUN_000110f0();
  return;
}

// Function: __do_global_ctors_aux @ 0x12d00
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x12d4c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

