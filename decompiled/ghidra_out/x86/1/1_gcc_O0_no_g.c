/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/1/1_gcc_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00011110 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001113c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011140 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001116b) */
/* WARNING: Removing unreachable block (ram,0x00011175) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011190 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111be) */
/* WARNING: Removing unreachable block (ram,0x000111c8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111e0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001123c) */
/* WARNING: Removing unreachable block (ram,0x00011240) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011279 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001127d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: sequential_ops @ 00011281 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 000112b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int single_if(int param_1)

{
  if (0 < param_1) {
    param_1 = param_1 << 1;
  }
  return param_1;
}



/* Function: if_else @ 000112d5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 000112fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: nested_if_deep @ 0001132d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: if_elseif_chain @ 00011386 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: if_elseif_long @ 000113c5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: switch_small @ 0001141e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: switch_large @ 00011491 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: switch_default @ 00011507 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: switch_fallthrough @ 0001154e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int switch_fallthrough(int param_1)

{
  undefined4 local_8;
  
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



/* Function: loop_for_fixed @ 000115a8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_for_fixed(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + local_8;
  }
  return local_c;
}



/* Function: loop_while @ 000115e3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_while(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  for (; param_1 != 0; param_1 = param_1 / 10) {
    local_8 = local_8 + 1;
  }
  if (local_8 < 1) {
    local_8 = 1;
  }
  return local_8;
}



/* Function: loop_dowhile @ 00011634 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_dowhile(int param_1)

{
  undefined4 local_8;
  
  local_8 = 0;
  do {
    param_1 = param_1 / 10;
    local_8 = local_8 + 1;
  } while (param_1 != 0);
  return local_8;
}



/* Function: loop_nested @ 00011679 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_nested(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
      local_10 = local_10 + 1;
    }
  }
  return local_10;
}



/* Function: loop_break @ 000116c7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_break(int param_1)

{
  int in_GS_OFFSET;
  int local_2c;
  int local_24 [8];
  
  local_24[5] = *(int *)(in_GS_OFFSET + 0x14);
  local_24[0] = 10;
  local_24[1] = 0x14;
  local_24[2] = 0x1e;
  local_24[3] = 0x28;
  local_24[4] = 0x32;
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



/* Function: loop_continue @ 0001174e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_continue(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 1; (int)local_8 <= param_1; local_8 = local_8 + 1) {
    if ((local_8 & 1) != 0) {
      local_c = local_c + local_8;
    }
  }
  return local_c;
}



/* Function: goto_forward @ 00011796 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int goto_forward(int param_1)

{
  undefined4 local_8;
  
  if (param_1 < 1) {
    local_8 = param_1;
  }
  else {
    local_8 = param_1 * param_1;
  }
  return local_8 << 1;
}



/* Function: goto_backward @ 000117c9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int goto_backward(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
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



/* Function: ternary_op @ 00011816 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ternary_op(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: test_control_flow_l1 @ 00011834 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l1(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00013030);
  uVar1 = sequential_ops(5,7,3);
  printf("CF-L1-01 (sequential_ops): %d\n",uVar1);
  uVar1 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n",uVar1);
  uVar1 = single_if(0xfffffffb);
  printf("CF-L1-02 (single_if): %d\n",uVar1);
  uVar1 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n",uVar1);
  uVar1 = if_else(0xfffffffd);
  printf("CF-L1-03 (if_else): %d\n",uVar1);
  uVar1 = nested_if_2(10,5);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_2(10,0xfffffffb);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_2(0xfffffff6,5);
  printf("CF-L1-04 (nested_if_2): %d\n",uVar1);
  uVar1 = nested_if_deep(1,1,1,1,1);
  printf("CF-L1-05 (nested_if_deep): %d\n",uVar1);
  uVar1 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n",uVar1);
  uVar1 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n",uVar1);
  uVar1 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n",uVar1);
  uVar1 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n",uVar1);
  uVar1 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n",uVar1);
  uVar1 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n",uVar1);
  uVar1 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n",uVar1);
  uVar1 = loop_while(0x3039);
  printf("CF-L1-13 (loop_while): %d\n",uVar1);
  uVar1 = loop_dowhile(0x2694);
  printf("CF-L1-14 (loop_dowhile): %d\n",uVar1);
  uVar1 = loop_nested(3,4);
  printf("CF-L1-15 (loop_nested): %d\n",uVar1);
  uVar1 = loop_break(0x1e);
  printf("CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n",uVar1);
  uVar1 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n",uVar1);
  uVar1 = goto_forward(0xfffffffd);
  printf("CF-L1-18 (goto_forward): %d\n",uVar1);
  uVar1 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n",uVar1);
  uVar1 = ternary_op(10,5);
  printf("CF-L1-20 (ternary_op): %d\n",uVar1);
  uVar1 = ternary_op(3,8);
  printf("CF-L1-20 (ternary_op): %d\n",uVar1);
  return;
}



/* Function: loop_multi_exit @ 00011be0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_multi_exit(int param_1)

{
  int in_GS_OFFSET;
  int local_48;
  int local_44;
  int local_40 [15];
  
  local_40[0xc] = *(int *)(in_GS_OFFSET + 0x14);
  local_40[0] = 1;
  local_40[1] = 2;
  local_40[2] = 3;
  local_40[3] = 4;
  local_40[4] = 5;
  local_40[5] = 6;
  local_40[6] = 7;
  local_40[7] = 8;
  local_40[8] = 9;
  local_40[9] = 10;
  local_40[10] = 0xb;
  local_40[0xb] = 0xc;
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



/* Function: infinite_loop @ 00011cbe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: multi_return @ 00011d01 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: conditional_return @ 00011d4e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: duffs_device @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

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



/* Function: loop_complex_cond @ 00011ea7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_complex_cond(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 0;
  local_8 = 0;
  for (local_c = param_1; ((local_10 < local_c && (local_8 < 10)) && (0 < local_c));
      local_c = local_c + -1) {
    local_10 = local_10 + 2;
    local_8 = local_8 + 1;
  }
  return local_8 + local_10 + local_c;
}



/* Function: loop_modify_var @ 00011f00 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_modify_var(int param_1)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + local_8;
    if (5 < local_8) {
      local_8 = local_8 + 2;
    }
  }
  return local_c;
}



/* Function: loop_external_state @ 00011f45 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: recursion_factorial @ 00011f7d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: tail_recursion @ 00011fb6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int tail_recursion(int param_1,int param_2)

{
  if (1 < param_1) {
    param_2 = tail_recursion(param_1 + -1,param_1 * param_2);
  }
  return param_2;
}



/* Function: indirect_recursion_a @ 00011ff1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: indirect_recursion_b @ 0001205c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int indirect_recursion_b(int param_1,int param_2)

{
  if (0 < param_2) {
    param_1 = indirect_recursion_a(param_1 + 1,param_2 + -1);
  }
  return param_1;
}



/* Function: call_func_ptr @ 00012096 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_func_ptr(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: double_value @ 000120ba */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: triple_value @ 000120d2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: call_func_ptr_array @ 000120ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: call_virtual_func @ 00012161 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_virtual_func(undefined4 param_1,int param_2)

{
  return param_2 * 2;
}



/* Function: process_with_callback @ 00012179 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int process_with_callback(int param_1,int param_2,code *param_3)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + local_10 * 4));
    local_14 = local_14 + iVar1;
  }
  return local_14;
}



/* Function: test_control_flow_l2 @ 000121ce */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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
  puts(&DAT_000132c8);
  uVar1 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_6c = 0;
  uVar1 = infinite_loop(&local_6c);
  printf("CF-L2-02 (infinite_loop): %d\n",uVar1);
  uVar1 = multi_return(0xfffffffb);
  printf("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n",uVar1);
  uVar1 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n",uVar1);
  uVar1 = conditional_return(0xfffffffb);
  printf("CF-L2-04 (conditional_return): %d\n",uVar1);
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
  printf("CF-L2-05 (duffs_device): %d\n",uVar1);
  uVar1 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n",uVar1);
  uVar1 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n",uVar1);
  local_68 = 0;
  uVar1 = loop_external_state(&local_68);
  printf("CF-L2-08 (loop_external_state): %d\n",uVar1);
  uVar1 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",uVar1);
  uVar1 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",uVar1);
  uVar1 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",uVar1);
  uVar1 = call_func_ptr(double_value,5);
  printf("CF-L2-12 (call_func_ptr): %d\n",uVar1);
  uVar1 = call_func_ptr_array(0,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  uVar1 = call_func_ptr_array(2,5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  local_64 = 1;
  local_60 = 2;
  local_5c = 3;
  local_58 = 4;
  local_54 = 5;
  uVar1 = process_with_callback(&local_64,5,double_value);
  printf("CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: non_local_jump @ 00012506 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int non_local_jump(int param_1)

{
  int iVar1;
  
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
    param_1 = param_1 * 2;
  }
  else {
    param_1 = -1;
  }
  return param_1;
}



/* Function: cpp_exception @ 00012581 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: op_add @ 000125b3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int op_add(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: op_sub @ 000125ce */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 000125e7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 00012601 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: op_mod @ 00012628 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: op_and @ 00012651 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 0001266a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 00012683 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 0001269c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 000126bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: large_jump_table @ 000126da */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: conditional_func_ptr @ 0001278f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: state_machine @ 000127de */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: state_idle @ 0001286c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 00012889 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: state_done @ 000128bb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 state_done(void)

{
  return 2;
}



/* Function: state_error @ 000128d3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: fsm_func_table @ 000128f8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: computed_goto @ 00012974 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 computed_goto(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined1 *local_20 [4];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_20[0] = &DAT_000129db;
  local_20[1] = &LAB_000129e6;
  local_20[2] = &LAB_000129f1;
  local_20[3] = &LAB_000129fc;
  if ((-1 < param_2) && (param_2 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x000129d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)local_20[param_2])();
    return uVar1;
  }
  uVar1 = 0xffffffff;
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: obfuscated_cf @ 00012a18 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int obfuscated_cf(int param_1)

{
  undefined4 local_8;
  
  local_8 = param_1;
  if (param_1 * param_1 < -1) {
    local_8 = param_1 * 2 + 1;
  }
  return local_8 << 1;
}



/* Function: opaque_predicate @ 00012a50 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Removing unreachable block (ram,0x00012a78) */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00012a83 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: test_control_flow_l3 @ 00012aba */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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
  puts(&DAT_000134c4);
  uVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  printf("CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
  uVar1 = cpp_exception(0xfffffffb);
  printf("CF-L3-02 (cpp_exception): %d\n",uVar1);
  uVar1 = large_jump_table(0,10,5);
  printf("CF-L3-03 (large_jump_table): %d\n",uVar1);
  uVar1 = conditional_func_ptr(0,5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
  uVar1 = state_machine(1,0);
  printf("CF-L3-05 (state_machine): %d\n",uVar1);
  uVar1 = fsm_func_table(2,1);
  printf("CF-L3-06 (fsm_func_table): %d\n",uVar1);
  local_20 = 0;
  local_1c = 1;
  local_18 = 2;
  local_14 = 3;
  uVar1 = computed_goto(&local_20,2);
  printf("CF-L3-07 (computed_goto): %d\n",uVar1);
  uVar1 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n",uVar1);
  uVar1 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n",uVar1);
  uVar1 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: main @ 00012cae */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012cd8 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012d00 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00012d1a) */
/* WARNING: Removing unreachable block (ram,0x00012d30) */
/* WARNING: Removing unreachable block (ram,0x00012d3d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00012d4c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 80 */
