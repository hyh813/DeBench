/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00101090 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010c0 */

/* WARNING: Removing unreachable block (ram,0x001010d3) */
/* WARNING: Removing unreachable block (ram,0x001010df) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001010f0 */

/* WARNING: Removing unreachable block (ram,0x00101114) */
/* WARNING: Removing unreachable block (ram,0x00101120) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101130 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: sequential_ops @ 00101180 */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 001011b0 */

int single_if(int param_1)

{
  undefined4 local_c;
  
  local_c = param_1;
  if (0 < param_1) {
    local_c = param_1 << 1;
  }
  return local_c;
}



/* Function: if_else @ 001011d0 */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 00101200 */

int nested_if_2(int param_1,int param_2)

{
  int local_c;
  
  if (param_1 < 1) {
    local_c = 0;
  }
  else {
    local_c = param_1;
    if (0 < param_2) {
      local_c = param_1 + param_2;
    }
  }
  return local_c;
}



/* Function: nested_if_deep @ 00101250 */

undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 local_c;
  
  if (param_1 < 1) {
    local_c = 0;
  }
  else if (param_2 < 1) {
    local_c = 1;
  }
  else if (param_3 < 1) {
    local_c = 2;
  }
  else if (param_4 < 1) {
    local_c = 3;
  }
  else if (param_5 < 1) {
    local_c = 4;
  }
  else {
    local_c = 5;
  }
  return local_c;
}



/* Function: if_elseif_chain @ 001012e0 */

undefined4 if_elseif_chain(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 0) {
    local_c = 10;
  }
  else if (param_1 == 1) {
    local_c = 0x14;
  }
  else if (param_1 == 2) {
    local_c = 0x1e;
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: if_elseif_long @ 00101340 */

undefined4 if_elseif_long(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 0) {
    local_c = 100;
  }
  else if (param_1 == 1) {
    local_c = 200;
  }
  else if (param_1 == 2) {
    local_c = 300;
  }
  else if (param_1 == 3) {
    local_c = 400;
  }
  else if (param_1 == 4) {
    local_c = 500;
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: switch_small @ 001013d0 */

undefined4 switch_small(undefined4 param_1)

{
  undefined4 local_c;
  
  switch(param_1) {
  case 0:
    local_c = 0xf;
    break;
  case 1:
    local_c = 5;
    break;
  case 2:
    local_c = 0x32;
    break;
  case 3:
    local_c = 2;
    break;
  default:
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: switch_large @ 00101450 */

undefined4 switch_large(undefined4 param_1)

{
  undefined4 local_c;
  
  switch(param_1) {
  case 0:
    local_c = 0;
    break;
  case 1:
    local_c = 10;
    break;
  case 2:
    local_c = 0x14;
    break;
  case 3:
    local_c = 0x1e;
    break;
  case 4:
    local_c = 0x28;
    break;
  case 5:
    local_c = 0x32;
    break;
  case 6:
    local_c = 0x3c;
    break;
  case 7:
    local_c = 0x46;
    break;
  case 8:
    local_c = 0x50;
    break;
  case 9:
    local_c = 0x5a;
    break;
  default:
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: switch_default @ 00101500 */

undefined4 switch_default(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 1) {
    local_c = 100;
  }
  else if (param_1 == 2) {
    local_c = 200;
  }
  else if (param_1 == 3) {
    local_c = 300;
  }
  else {
    local_c = 0;
  }
  return local_c;
}



/* Function: switch_fallthrough @ 00101570 */

int switch_fallthrough(int param_1)

{
  int local_10;
  
  local_10 = 0;
  if (param_1 != 1) {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return -1;
      }
      local_10 = 0xc;
    }
    local_10 = param_1 * 2 + local_10;
  }
  return param_1 + local_10;
}



/* Function: loop_for_fixed @ 001015f0 */

int loop_for_fixed(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
    local_10 = local_14 + local_10;
  }
  return local_10;
}



/* Function: loop_while @ 00101630 */

int loop_while(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  for (local_c = param_1; local_c != 0; local_c = local_c / 10) {
    local_10 = local_10 + 1;
  }
  if (local_10 < 1) {
    local_14 = 1;
  }
  else {
    local_14 = local_10;
  }
  return local_14;
}



/* Function: loop_dowhile @ 00101690 */

int loop_dowhile(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  local_c = param_1;
  do {
    local_c = local_c / 10;
    local_10 = local_10 + 1;
  } while (local_c != 0);
  return local_10;
}



/* Function: loop_nested @ 001016d0 */

int loop_nested(int param_1,int param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}



/* Function: loop_break @ 00101740 */

int loop_break(int param_1)

{
  int local_30;
  int local_28 [6];
  int local_10;
  
  local_10 = param_1;
  local_28[0] = 10;
  local_28[1] = 0x14;
  local_28[2] = 0x1e;
  local_28[3] = 0x28;
  local_28[4] = 0x32;
  local_30 = 0;
  while( true ) {
    if (4 < local_30) {
      return -1;
    }
    if (local_28[local_30] == param_1) break;
    local_30 = local_30 + 1;
  }
  return local_30;
}



/* Function: loop_continue @ 001017c0 */

int loop_continue(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  for (local_14 = 1; local_14 <= param_1; local_14 = local_14 + 1) {
    if (local_14 % 2 != 0) {
      local_10 = local_14 + local_10;
    }
  }
  return local_10;
}



/* Function: goto_forward @ 00101820 */

int goto_forward(int param_1)

{
  int local_10;
  
  local_10 = param_1;
  if (0 < param_1) {
    local_10 = param_1 * param_1;
  }
  return local_10 << 1;
}



/* Function: goto_backward @ 00101860 */

int goto_backward(int param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_c;
  
  if (param_1 < 1) {
    local_c = 1;
  }
  else {
    local_14 = 1;
    for (local_18 = 1; local_18 <= param_1; local_18 = local_18 + 1) {
      local_14 = local_18 * local_14;
    }
    local_c = local_14;
  }
  return local_c;
}



/* Function: ternary_op @ 001018c0 */

int ternary_op(int param_1,int param_2)

{
  int local_14;
  
  local_14 = param_2;
  if (param_2 < param_1) {
    local_14 = param_1;
  }
  return local_14;
}



/* Function: test_control_flow_l1 @ 001018f0 */

void test_control_flow_l1(void)

{
  uint uVar1;
  
  printf(&DAT_001030e4);
  uVar1 = sequential_ops(5,7,3);
  printf("CF-L1-01 (sequential_ops): %d\n",(ulong)uVar1);
  uVar1 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n",(ulong)uVar1);
  uVar1 = single_if(0xfffffffb);
  printf("CF-L1-02 (single_if): %d\n",(ulong)uVar1);
  uVar1 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n",(ulong)uVar1);
  uVar1 = if_else(0xfffffffd);
  printf("CF-L1-03 (if_else): %d\n",(ulong)uVar1);
  uVar1 = nested_if_2(10,5);
  printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
  uVar1 = nested_if_2(10,0xfffffffb);
  printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
  uVar1 = nested_if_2(0xfffffff6,5);
  printf("CF-L1-04 (nested_if_2): %d\n",(ulong)uVar1);
  uVar1 = nested_if_deep(1,1,1,1);
  printf("CF-L1-05 (nested_if_deep): %d\n",(ulong)uVar1);
  uVar1 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n",(ulong)uVar1);
  uVar1 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n",(ulong)uVar1);
  uVar1 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n",(ulong)uVar1);
  uVar1 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n",(ulong)uVar1);
  uVar1 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n",(ulong)uVar1);
  uVar1 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n",(ulong)uVar1);
  uVar1 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n",(ulong)uVar1);
  uVar1 = loop_while(0x3039);
  printf("CF-L1-13 (loop_while): %d\n",(ulong)uVar1);
  uVar1 = loop_dowhile(0x2694);
  printf("CF-L1-14 (loop_dowhile): %d\n",(ulong)uVar1);
  uVar1 = loop_nested(3,4);
  printf("CF-L1-15 (loop_nested): %d\n",(ulong)uVar1);
  uVar1 = loop_break(0x1e);
  printf("CF-L1-16 (loop_break): %d\n",(ulong)uVar1);
  uVar1 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n",(ulong)uVar1);
  uVar1 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n",(ulong)uVar1);
  uVar1 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n",(ulong)uVar1);
  uVar1 = goto_forward(0xfffffffd);
  printf("CF-L1-18 (goto_forward): %d\n",(ulong)uVar1);
  uVar1 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n",(ulong)uVar1);
  uVar1 = ternary_op(10,5);
  printf("CF-L1-20 (ternary_op): %d\n",(ulong)uVar1);
  uVar1 = ternary_op(3,8);
  printf("CF-L1-20 (ternary_op): %d\n",(ulong)uVar1);
  return;
}



/* Function: loop_multi_exit @ 00101c00 */

int loop_multi_exit(int param_1)

{
  int local_50;
  int local_4c;
  int local_48 [14];
  int local_10;
  
  local_10 = param_1;
  memcpy(local_48,&DAT_001030a0,0x30);
  local_4c = 0;
  do {
    if (2 < local_4c) {
      return -1;
    }
    for (local_50 = 0; local_50 < 4; local_50 = local_50 + 1) {
      if (local_48[(long)local_4c * 4 + (long)local_50] == local_10) {
        return local_4c * 10 + local_50;
      }
    }
    local_4c = local_4c + 1;
  } while( true );
}



/* Function: infinite_loop @ 00101cb0 */

int infinite_loop(int *param_1)

{
  int local_14;
  
  local_14 = 0;
  do {
    if (*param_1 == 1) {
      return local_14;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 0x3e9);
  *param_1 = 1;
  return local_14;
}



/* Function: multi_return @ 00101d10 */

int multi_return(int param_1)

{
  undefined4 local_c;
  
  if (param_1 < 0) {
    local_c = -1;
  }
  else {
    local_c = param_1 << 1;
    if (local_c < 0x65) {
      if (param_1 % 2 != 0) {
        local_c = param_1 + 1;
      }
    }
    else {
      local_c = -2;
    }
  }
  return local_c;
}



/* Function: conditional_return @ 00101d80 */

int conditional_return(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_1 < 1) {
    if (param_1 < 0) {
      local_14 = -param_1;
    }
    else {
      local_14 = 0;
    }
    local_10 = local_14;
  }
  else {
    local_10 = param_1 << 1;
  }
  return local_10;
}



/* Function: duffs_device @ 00101dd0 */

int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int local_28;
  undefined4 *local_20;
  undefined4 *local_18;
  int local_c;
  
  if (param_3 < 1) {
    local_c = -1;
  }
  else {
    local_28 = param_3 + 7;
    if (param_3 + 7 < 0) {
      local_28 = param_3 + 0xe;
    }
    local_28 = local_28 >> 3;
    local_20 = param_2;
    local_18 = param_1;
    local_c = param_3;
    switch(param_3 % 8) {
    case 0:
      local_20 = param_2;
      local_18 = param_1;
      do {
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_7:
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_6:
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_5:
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_4:
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_3:
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_2:
        *local_18 = *local_20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
switchD_00101e40_caseD_1:
        *local_18 = *local_20;
        local_28 = local_28 + -1;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      } while (0 < local_28);
      break;
    case 1:
      goto switchD_00101e40_caseD_1;
    case 2:
      goto switchD_00101e40_caseD_2;
    case 3:
      goto switchD_00101e40_caseD_3;
    case 4:
      goto switchD_00101e40_caseD_4;
    case 5:
      goto switchD_00101e40_caseD_5;
    case 6:
      goto switchD_00101e40_caseD_6;
    case 7:
      goto switchD_00101e40_caseD_7;
    }
  }
  return local_c;
}



/* Function: loop_complex_cond @ 00101f80 */

int loop_complex_cond(int param_1)

{
  bool bVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_14 = param_1;
  while( true ) {
    bVar1 = false;
    if ((local_10 < local_14) && (bVar1 = false, local_18 < 10)) {
      bVar1 = 0 < local_14;
    }
    if (!bVar1) break;
    local_10 = local_10 + 2;
    local_14 = local_14 + -1;
    local_18 = local_18 + 1;
  }
  return local_10 + local_14 + local_18;
}



/* Function: loop_modify_var @ 00102000 */

int loop_modify_var(int param_1)

{
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
    local_10 = local_14 + local_10;
    if (5 < local_14) {
      local_14 = local_14 + 2;
    }
  }
  return local_10;
}



/* Function: loop_external_state @ 00102060 */

int loop_external_state(int *param_1)

{
  int local_14;
  
  local_14 = 0;
  do {
    if (*param_1 != 0) {
      return local_14;
    }
    local_14 = local_14 + 1;
  } while (local_14 < 0x65);
  return local_14;
}



/* Function: recursion_factorial @ 001020a0 */

int recursion_factorial(int param_1)

{
  undefined4 local_c;
  
  if (param_1 < 2) {
    local_c = 1;
  }
  else {
    local_c = recursion_factorial(param_1 + -1);
    local_c = param_1 * local_c;
  }
  return local_c;
}



/* Function: tail_recursion @ 001020f0 */

int tail_recursion(int param_1,int param_2)

{
  undefined4 local_c;
  
  local_c = param_2;
  if (1 < param_1) {
    local_c = tail_recursion(param_1 + -1,param_1 * param_2);
  }
  return local_c;
}



/* Function: indirect_recursion_a @ 00102140 */

int indirect_recursion_a(int param_1,int param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  if (0 < param_2) {
    if (param_1 % 2 == 0) {
      local_c = indirect_recursion_b
                          ((long)param_1 / 2 & 0xffffffff,param_2 + -1,
                           (long)param_1 % 2 & 0xffffffff);
    }
    else {
      local_c = indirect_recursion_b(param_1 * 3 + 1,param_2 + -1);
    }
  }
  return local_c;
}



/* Function: indirect_recursion_b @ 001021c0 */

int indirect_recursion_b(int param_1,int param_2)

{
  undefined4 local_c;
  
  local_c = param_1;
  if (0 < param_2) {
    local_c = indirect_recursion_a(param_1 + 1,param_2 + -1);
  }
  return local_c;
}



/* Function: call_func_ptr @ 00102200 */

void call_func_ptr(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: call_func_ptr_array @ 00102220 */

undefined4 call_func_ptr_array(int param_1,undefined4 param_2)

{
  code *local_38 [4];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_14 = param_2;
  local_38[0] = double_value;
  local_38[1] = triple_value;
  local_38[2] = recursion_factorial;
  if ((param_1 < 0) || (2 < param_1)) {
    local_c = 0xffffffff;
  }
  else {
    local_c = (*local_38[param_1])(param_2);
  }
  return local_c;
}



/* Function: double_value @ 00102290 */

int double_value(int param_1)

{
  return param_1 << 1;
}



/* Function: triple_value @ 001022a0 */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: call_virtual_func @ 001022b0 */

int call_virtual_func(undefined8 param_1,int param_2)

{
  return param_2 << 1;
}



/* Function: process_with_callback @ 001022d0 */

int process_with_callback(long param_1,int param_2,code *param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = 0;
  for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + (long)local_28 * 4));
    local_24 = iVar1 + local_24;
  }
  return local_24;
}



/* Function: test_control_flow_l2 @ 00102330 */

void test_control_flow_l2(void)

{
  uint uVar1;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_5c;
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_c;
  
  printf(&DAT_00103352);
  uVar1 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n",(ulong)uVar1);
  local_c = 0;
  uVar1 = infinite_loop(&local_c);
  printf("CF-L2-02 (infinite_loop): %d\n",(ulong)uVar1);
  uVar1 = multi_return(0xfffffffb);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
  uVar1 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
  uVar1 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n",(ulong)uVar1);
  uVar1 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n",(ulong)uVar1);
  conditional_return(0xfffffffb);
  printf("CF-L2-04 (conditional_return): %d\n");
  local_38 = 0x200000001;
  local_30 = 0x400000003;
  local_28 = 0x600000005;
  local_20 = 0x800000007;
  memset(local_58,0,0x20);
  uVar1 = duffs_device(local_58,&local_38,8);
  printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar1);
  uVar1 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar1);
  uVar1 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n",(ulong)uVar1);
  local_5c = 0;
  uVar1 = loop_external_state(&local_5c);
  printf("CF-L2-08 (loop_external_state): %d\n",(ulong)uVar1);
  uVar1 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar1);
  uVar1 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar1);
  uVar1 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr(double_value,5);
  printf("CF-L2-12 (call_func_ptr): %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr_array(0,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr_array(2,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar1);
  local_78 = 0x200000001;
  local_70 = 0x400000003;
  local_68 = 5;
  uVar1 = process_with_callback(&local_78,5,double_value);
  printf("CF-L2-15 (process_with_callback): %d\n",(ulong)uVar1);
  return;
}



/* Function: non_local_jump @ 001025c0 */

int non_local_jump(int param_1)

{
  int iVar1;
  int local_c;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 == 0) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,1);
    }
    if (100 < param_1) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,2);
    }
    local_c = param_1 << 1;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: cpp_exception @ 00102640 */

int cpp_exception(int param_1)

{
  undefined4 local_c;
  
  if (param_1 < 0) {
    local_c = -1;
  }
  else if (param_1 < 0x65) {
    local_c = param_1 << 1;
  }
  else {
    local_c = -2;
  }
  return local_c;
}



/* Function: large_jump_table @ 00102690 */

undefined4 large_jump_table(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 local_68 [10];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_18 = param_3;
  local_14 = param_2;
  local_10 = param_1;
  memcpy(local_68,&PTR_op_add_00105d60,0x50);
  if ((local_10 < 0) || (9 < local_10)) {
    local_c = 0xffffffff;
  }
  else {
    local_c = (*(code *)local_68[local_10])(local_14,local_18);
  }
  return local_c;
}



/* Function: op_add @ 00102700 */

int op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: op_sub @ 00102720 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 00102740 */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 00102760 */

int op_div(int param_1,int param_2)

{
  undefined4 local_14;
  
  if (param_2 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = param_1 / param_2;
  }
  return local_14;
}



/* Function: op_mod @ 001027a0 */

int op_mod(int param_1,int param_2)

{
  undefined4 local_14;
  
  if (param_2 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = param_1 % param_2;
  }
  return local_14;
}



/* Function: op_and @ 001027e0 */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 00102800 */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 00102820 */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 00102840 */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00102860 */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00102880 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
  code *local_18;
  
  if (param_1 == 0) {
    local_18 = double_value;
  }
  else if (param_1 == 1) {
    local_18 = triple_value;
  }
  else {
    local_18 = recursion_factorial;
  }
  (*local_18)(param_2);
  return;
}



/* Function: state_machine @ 001028f0 */

undefined4 state_machine(int param_1,undefined4 param_2)

{
  undefined4 local_c;
  
  switch(param_2) {
  case 0:
    if (param_1 == 1) {
      local_c = 1;
    }
    else {
      local_c = 0;
    }
    break;
  case 1:
    if (param_1 == 2) {
      local_c = 2;
    }
    else if (param_1 == 99) {
      local_c = 3;
    }
    else {
      local_c = 1;
    }
    break;
  case 2:
    local_c = 2;
    break;
  case 3:
    if (param_1 == 0) {
      local_c = 0;
    }
    else {
      local_c = 3;
    }
    break;
  default:
    local_c = 3;
  }
  return local_c;
}



/* Function: fsm_func_table @ 001029c0 */

undefined4 fsm_func_table(undefined4 param_1,int param_2)

{
  code *local_38 [4];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = param_1;
  local_14 = param_2;
  local_38[0] = state_idle;
  local_38[1] = state_processing;
  local_38[2] = state_done;
  local_38[3] = state_error;
  if ((param_2 < 0) || (3 < param_2)) {
    local_c = 3;
  }
  else {
    local_c = (*local_38[param_2])(param_1);
  }
  return local_c;
}



/* Function: state_idle @ 00102a40 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 00102a60 */

undefined4 state_processing(int param_1)

{
  undefined4 local_c;
  
  if (param_1 == 2) {
    local_c = 2;
  }
  else if (param_1 == 99) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  return local_c;
}



/* Function: state_done @ 00102aa0 */

undefined8 state_done(void)

{
  return 2;
}



/* Function: state_error @ 00102ab0 */

undefined8 state_error(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: computed_goto @ 00102ad0 */

undefined8 computed_goto(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined *local_48 [5];
  int local_1c;
  undefined8 local_18;
  
  local_18 = param_1;
  local_1c = param_2;
  local_48[0] = &DAT_00102b39;
  local_48[1] = &DAT_00102b45;
  local_48[2] = &DAT_00102b51;
  local_48[3] = &DAT_00102b5d;
  if ((-1 < param_2) && (param_2 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x00102b6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)local_48[param_2])();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: obfuscated_cf @ 00102b70 */

int obfuscated_cf(int param_1)

{
  undefined4 local_10;
  
  local_10 = param_1;
  if (param_1 * param_1 + 1 < 0) {
    local_10 = param_1 * 2 + 1;
  }
  return local_10 << 1;
}



/* Function: opaque_predicate @ 00102bb0 */

/* WARNING: Removing unreachable block (ram,0x00102bdf) */

int opaque_predicate(int param_1)

{
  return param_1 << 1;
}



/* Function: overlapped_code @ 00102bf0 */

int overlapped_code(uint param_1)

{
  undefined4 local_c;
  
  if ((param_1 & 1) == 0) {
    local_c = (int)param_1 / 2;
  }
  else {
    local_c = param_1 * 3 + 1;
  }
  return local_c;
}



/* Function: test_control_flow_l3 @ 00102c30 */

void test_control_flow_l3(void)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  printf(&DAT_00103546);
  uVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
  uVar1 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar1);
  uVar1 = cpp_exception(0xfffffffb);
  printf("CF-L3-02 (cpp_exception): %d\n",(ulong)uVar1);
  uVar1 = large_jump_table(0,10,5);
  printf("CF-L3-03 (large_jump_table): %d\n",(ulong)uVar1);
  uVar1 = conditional_func_ptr(0,5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",(ulong)uVar1);
  uVar1 = state_machine(1,0);
  printf("CF-L3-05 (state_machine): %d\n",(ulong)uVar1);
  uVar1 = fsm_func_table(2,1);
  printf("CF-L3-06 (fsm_func_table): %d\n",(ulong)uVar1);
  local_18 = 0x100000000;
  local_10 = 0x300000002;
  uVar1 = computed_goto(&local_18,2);
  printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
  uVar1 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n",(ulong)uVar1);
  uVar1 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n",(ulong)uVar1);
  uVar1 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n",(ulong)uVar1);
  return;
}



/* Function: main @ 00102db0 */

undefined8 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00102dd8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 73 */
