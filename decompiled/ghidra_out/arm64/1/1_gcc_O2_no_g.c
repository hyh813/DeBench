/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/1/1_gcc_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100928 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100940 @ 00100940 */

void FUN_00100940(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100a00 */

undefined8 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _start @ 00100a40 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100a74 */

/* WARNING: Removing unreachable block (ram,0x00100a84) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100a90 */

/* WARNING: Removing unreachable block (ram,0x00100aa8) */
/* WARNING: Removing unreachable block (ram,0x00100ab4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100ac0 */

/* WARNING: Removing unreachable block (ram,0x00100ae4) */
/* WARNING: Removing unreachable block (ram,0x00100af0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100afc @ 00100afc */

void FUN_00100afc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100b00 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: recursion_factorial @ 00100b60 */

int recursion_factorial(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (1 < param_1) {
    do {
      iVar1 = param_1 + -1;
      iVar2 = iVar2 * param_1;
      param_1 = iVar1;
    } while (iVar1 != 1);
  }
  return iVar2;
}



/* Function: double_value @ 00100b90 */

int double_value(int param_1)

{
  return param_1 << 1;
}



/* Function: triple_value @ 00100ba0 */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: op_add @ 00100bb0 */

int op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: op_sub @ 00100bc0 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 00100bd0 */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 00100be0 */

int op_div(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_2 != 0) && (iVar1 = 0, param_2 != 0)) {
    iVar1 = param_1 / param_2;
  }
  return iVar1;
}



/* Function: op_mod @ 00100bf4 */

int op_mod(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = 0;
    if (param_2 != 0) {
      iVar1 = param_1 / param_2;
    }
    iVar1 = param_1 - iVar1 * param_2;
  }
  return iVar1;
}



/* Function: op_and @ 00100c10 */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 00100c20 */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 00100c30 */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 00100c40 */

int op_shl(int param_1,uint param_2)

{
  return param_1 << (ulong)(param_2 & 0x1f);
}



/* Function: op_shr @ 00100c50 */

int op_shr(int param_1,uint param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00100c60 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 00100c70 */

ulong state_processing(ulong param_1)

{
  uint uVar1;
  
  if ((int)param_1 != 2) {
    uVar1 = 3;
    if ((int)param_1 != 99) {
      uVar1 = 1;
    }
    param_1 = (ulong)uVar1;
  }
  return param_1;
}



/* Function: state_done @ 00100c90 */

undefined8 state_done(void)

{
  return 2;
}



/* Function: state_error @ 00100ca0 */

undefined4 state_error(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Function: sequential_ops @ 00100cb0 */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00100cc0 */

int single_if(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 << 1;
  if (param_1 < 1) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Function: if_else @ 00100cd0 */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 00100ce0 */

int nested_if_2(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = param_1 + param_2;
    if (param_2 < 1) {
      iVar1 = param_1;
    }
    return iVar1;
  }
  return 0;
}



/* Function: nested_if_deep @ 00100d00 */

char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  if (param_1 < 1) {
    return '\0';
  }
  cVar1 = '\x01';
  if (0 < param_2) {
    if (param_3 < 1) {
      return '\x02';
    }
    if (param_4 < 1) {
      return '\x03';
    }
    cVar1 = (0 < param_5) + '\x04';
  }
  return cVar1;
}



/* Function: if_elseif_chain @ 00100d50 */

undefined4 if_elseif_chain(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 10;
  }
  if (param_1 != 1) {
    uVar1 = 0x1e;
    if (param_1 != 2) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 0x14;
}



/* Function: if_elseif_long @ 00100d80 */

undefined4 if_elseif_long(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 100;
  }
  if (param_1 == 1) {
    return 200;
  }
  if (param_1 == 2) {
    return 300;
  }
  if (param_1 != 3) {
    uVar1 = 500;
    if (param_1 != 4) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  return 400;
}



/* Function: switch_small @ 00100dd0 */

undefined4 switch_small(uint param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&CSWTCH_55 + (ulong)param_1 * 4);
  }
  return 0xffffffff;
}



/* Function: switch_large @ 00100df0 */

int switch_large(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 10;
  if (9 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_default @ 00100e04 */

int switch_default(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 100;
  if (2 < param_1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00100e20 */

int switch_fallthrough(int param_1)

{
  int iVar1;
  
  if (param_1 == 2) {
    iVar1 = 0;
  }
  else {
    if (param_1 != 3) {
      iVar1 = 1;
      if (param_1 != 1) {
        iVar1 = -1;
      }
      return iVar1;
    }
    iVar1 = 0xc;
  }
  return iVar1 + param_1 * 3;
}



/* Function: loop_for_fixed @ 00100e60 */

int loop_for_fixed(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + iVar2;
      iVar2 = iVar2 + 1;
    } while (param_1 != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: loop_while @ 00100e94 */

int loop_while(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      param_1 = param_1 / 10;
    } while (param_1 != 0);
    return iVar1;
  }
  return 1;
}



/* Function: loop_dowhile @ 00100ed0 */

int loop_dowhile(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    param_1 = param_1 / 10;
  } while (param_1 != 0);
  return iVar1;
}



/* Function: loop_nested @ 00100f00 */

int loop_nested(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = iVar2;
  if (0 < param_1) {
    do {
      iVar3 = iVar3 + 1;
      iVar2 = param_2 + iVar1;
      if (param_2 < 1) {
        iVar2 = iVar1;
      }
      iVar1 = iVar2;
    } while (param_1 != iVar3);
  }
  return iVar2;
}



/* Function: loop_break @ 00100f34 */

/* WARNING: Removing unreachable block (ram,0x00100fb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_break(int param_1)

{
  int iVar1;
  int *piVar2;
  int local_20 [6];
  undefined8 local_8;
  
  piVar2 = local_20;
  local_8 = ___stack_chk_guard;
  iVar1 = 0;
  local_20[0] = 10;
  local_20[1] = 0x14;
  local_20[2] = 0x1e;
  local_20[3] = 0x28;
  local_20[4] = 0x32;
  do {
    if (*piVar2 == param_1) {
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 5);
  return;
}



/* Function: loop_continue @ 00100fc0 */

int loop_continue(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (0 < param_1) {
    uVar4 = 1;
    iVar3 = 0;
    do {
      uVar2 = uVar4 & 1;
      iVar1 = iVar3 + uVar4;
      uVar4 = uVar4 + 1;
      if (uVar2 == 0) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
    } while (uVar4 != param_1 + 1U);
    return iVar1;
  }
  return 0;
}



/* Function: goto_forward @ 00101000 */

int goto_forward(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * param_1;
  if (param_1 < 1) {
    iVar1 = param_1;
  }
  return iVar1 << 1;
}



/* Function: goto_backward @ 00101014 */

int goto_backward(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1) {
    iVar1 = 1;
    iVar2 = 1;
    do {
      iVar1 = iVar1 * iVar2;
      iVar2 = iVar2 + 1;
    } while (param_1 + 1 != iVar2);
    return iVar1;
  }
  return 1;
}



/* Function: ternary_op @ 00101044 */

int ternary_op(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: test_control_flow_l1 @ 00101050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l1(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_20 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar2 = local_20;
  puts(&DAT_00101f20);
  __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n");
  __printf_chk(1,"CF-L1-03 (if_else): %d\n",0);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0xf);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",10);
  __printf_chk(1,"CF-L1-04 (nested_if_2): %d\n",0);
  __printf_chk(1,"CF-L1-05 (nested_if_deep): %d\n",5);
  __printf_chk(1,"CF-L1-06 (if_elseif_chain): %d\n",0x14);
  __printf_chk(1,"CF-L1-07 (if_elseif_long): %d\n",400);
  __printf_chk(1,"CF-L1-08 (switch_small): %d\n",0x32);
  __printf_chk(1,"CF-L1-09 (switch_large): %d\n",0x46);
  __printf_chk(1,"CF-L1-10 (switch_default): %d\n",0);
  __printf_chk(1,"CF-L1-11 (switch_fallthrough): %d\n",0x15);
  __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",0x2d);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",5);
  __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",0xc);
  iVar3 = 0;
  local_20[0] = 10;
  local_20[1] = 0x14;
  local_20[2] = 0x1e;
  local_20[3] = 0x28;
  local_20[4] = 0x32;
  piVar1 = piVar2;
  do {
    if (*piVar1 == 0x1e) goto LAB_0010123c;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 != 5);
  iVar3 = -1;
LAB_0010123c:
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar3);
  iVar3 = 0;
  local_20[0] = 10;
  local_20[1] = 0x14;
  local_20[2] = 0x1e;
  local_20[3] = 0x28;
  local_20[4] = 0x32;
  do {
    if (*piVar2 == 99) goto LAB_00101288;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 5);
  iVar3 = -1;
LAB_00101288:
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",iVar3);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",0x19);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: loop_multi_exit @ 00101340 */

/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void loop_multi_exit(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar2 = &local_38;
  local_8 = ___stack_chk_guard;
  iVar3 = 0;
  uStack_30 = 0x400000003;
  local_38 = 0x200000001;
  uStack_20 = 0x800000007;
  uStack_28 = 0x600000005;
  uStack_10 = 0xc0000000b;
  local_18 = 0xa00000009;
  do {
    lVar1 = 0;
    do {
      if (*(int *)((long)puVar2 + lVar1 * 4) == param_1) {
        return;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 3);
  return;
}



/* Function: infinite_loop @ 001013e4 */

int infinite_loop(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 == 1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  *param_1 = 1;
  return 0x3e9;
}



/* Function: multi_return @ 00101420 */

int multi_return(uint param_1)

{
  int iVar1;
  
  if ((int)param_1 < 0) {
    return -1;
  }
  iVar1 = param_1 * 2;
  if (iVar1 < 0x65) {
    if ((param_1 & 1) != 0) {
      iVar1 = param_1 + 1;
    }
    return iVar1;
  }
  return -2;
}



/* Function: conditional_return @ 00101450 */

int conditional_return(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = -param_1;
  }
  if (0 < param_1) {
    iVar1 = param_1 << 1;
  }
  return iVar1;
}



/* Function: duffs_device @ 00101464 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if ((int)param_3 < 1) {
    param_3 = 0xffffffff;
  }
  else {
    uVar1 = param_3 & 7;
    iVar6 = (int)(param_3 + 7) >> 3;
    puVar3 = param_2;
    puVar5 = param_1;
    if (uVar1 == 4) goto LAB_001014e0;
    if (uVar1 < 5) {
      if (uVar1 == 2) goto LAB_001014a0;
      if (uVar1 != 3) {
        if (uVar1 != 1) goto LAB_001014c0;
        iVar6 = iVar6 + -1;
        *param_1 = *param_2;
        if (iVar6 != 0) goto LAB_001014b8;
        return param_3;
      }
    }
    else {
      puVar2 = param_2;
      puVar4 = param_1;
      if (uVar1 == 6) goto LAB_001014d0;
      if (uVar1 == 7) {
        puVar2 = param_2 + 1;
        puVar4 = param_1 + 1;
        *param_1 = *param_2;
        goto LAB_001014d0;
      }
      if (uVar1 != 5) goto LAB_001014c0;
      puVar3 = param_2 + 1;
      puVar5 = param_1 + 1;
      *param_1 = *param_2;
      param_2 = param_2 + 2;
      param_1 = param_1 + 2;
      *puVar5 = *puVar3;
    }
    while( true ) {
      puVar3 = param_2 + 1;
      puVar5 = param_1 + 1;
      *param_1 = *param_2;
LAB_001014a0:
      param_2 = puVar3 + 1;
      iVar6 = iVar6 + -1;
      param_1 = puVar5 + 1;
      *puVar5 = *puVar3;
      *param_1 = *param_2;
      if (iVar6 == 0) break;
LAB_001014b8:
      param_2 = param_2 + 1;
      param_1 = param_1 + 1;
LAB_001014c0:
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      puVar2 = param_2 + 2;
      puVar4 = param_1 + 2;
LAB_001014d0:
      *puVar4 = *puVar2;
      puVar3 = puVar2 + 2;
      puVar5 = puVar4 + 2;
      puVar4[1] = puVar2[1];
LAB_001014e0:
      param_2 = puVar3 + 1;
      param_1 = puVar5 + 1;
      *puVar5 = *puVar3;
    }
  }
  return param_3;
}



/* Function: loop_complex_cond @ 00101550 */

ulong loop_complex_cond(ulong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (0 < (int)param_1) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 2;
      uVar1 = (int)param_1 - 1;
      param_1 = (ulong)uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar2 < (int)uVar1 && iVar3 < 10);
    param_1 = (ulong)(iVar2 + uVar1 + iVar3);
  }
  return param_1;
}



/* Function: loop_modify_var @ 00101584 */

int loop_modify_var(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    while( true ) {
      iVar1 = iVar2 + 1;
      if (param_1 <= iVar1) break;
      iVar3 = iVar3 + iVar1;
      iVar2 = iVar2 + 3;
      if (iVar1 < 6) {
        iVar2 = iVar1;
      }
    }
  }
  return iVar3;
}



/* Function: loop_external_state @ 001015c0 */

int loop_external_state(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return 0x65;
}



/* Function: tail_recursion @ 001015e4 */

int tail_recursion(int param_1,int param_2)

{
  int iVar1;
  
  if (1 < param_1) {
    do {
      iVar1 = param_1 + -1;
      param_2 = param_2 * param_1;
      param_1 = iVar1;
    } while (iVar1 != 1);
  }
  return param_2;
}



/* Function: indirect_recursion_a @ 00101610 */

ulong indirect_recursion_a(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2;
  if (0 < param_2) {
    do {
      iVar3 = iVar3 + -2;
      if ((param_1 & 1) == 0) {
        uVar1 = (int)param_1 / 2;
        if (param_2 == 1) {
          return (ulong)uVar1;
        }
        uVar1 = uVar1 + 1;
      }
      else {
        iVar2 = (int)param_1 * 3;
        if (param_2 == 1) {
          return (ulong)(iVar2 + 1);
        }
        uVar1 = iVar2 + 2;
      }
      param_1 = (ulong)uVar1;
      param_2 = param_2 + -2;
    } while (iVar3 != 0);
  }
  return param_1;
}



/* Function: call_func_ptr @ 00101670 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00101678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: FUN_0010167c @ 0010167c */

/* WARNING: Removing unreachable block (ram,0x0010171c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0010167c(uint param_1)

{
  undefined8 uVar1;
  undefined *apuStack_20 [4];
  
  apuStack_20[3] = (undefined *)___stack_chk_guard;
  apuStack_20[0] = PTR_double_value_00114010;
  apuStack_20[1] = PTR_triple_value_00114018;
  apuStack_20[2] = PTR_recursion_factorial_00114020;
  if (param_1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x001016f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)apuStack_20[(int)param_1])();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: call_func_ptr_array @ 00101680 */

/* WARNING: Removing unreachable block (ram,0x0010171c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 call_func_ptr_array(uint param_1)

{
  undefined8 uVar1;
  undefined *local_20 [4];
  
  local_20[3] = (undefined *)___stack_chk_guard;
  local_20[0] = PTR_double_value_00114010;
  local_20[1] = PTR_triple_value_00114018;
  local_20[2] = PTR_recursion_factorial_00114020;
  if (param_1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x001016f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)local_20[(int)param_1])();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: call_virtual_func @ 00101720 */

int call_virtual_func(undefined8 param_1,int param_2)

{
  return param_2 << 1;
}



/* Function: process_with_callback @ 00101730 */

int process_with_callback(undefined4 *param_1,int param_2,code *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar4;
  undefined4 *puVar3;
  
  if (0 < param_2) {
    iVar4 = 0;
    puVar2 = param_1;
    do {
      puVar3 = puVar2 + 1;
      iVar1 = (*param_3)(*puVar2);
      iVar4 = iVar4 + iVar1;
      puVar2 = puVar3;
    } while (puVar3 != param_1 + (ulong)(param_2 - 1) + 1);
    return iVar4;
  }
  return 0;
}



/* Function: FUN_0010179c @ 0010179c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010179c(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int aiStack_64 [7];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  puts(&DAT_001021c8);
  uVar3 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar3);
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x3e9);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  uStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_40 = 0x400000003;
  uStack_48 = 0x200000001;
  uStack_30 = 0x800000007;
  uStack_38 = 0x600000005;
  uVar3 = duffs_device(&uStack_28,&uStack_48,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar3);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
  iVar6 = 0;
  iVar4 = 0;
  while (iVar1 = iVar4 + 1, iVar1 < 10) {
    iVar4 = iVar4 + 3;
    if (iVar1 < 6) {
      iVar4 = iVar1;
    }
    iVar6 = iVar6 + iVar1;
  }
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
  iVar6 = 0;
  aiStack_64[0] = 0;
  do {
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x65);
  __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
  __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
  iVar6 = 0;
  aiStack_64[5] = 5;
  aiStack_64[1] = 1;
  aiStack_64[2] = 2;
  aiStack_64[3] = 3;
  aiStack_64[4] = 4;
  lVar5 = 1;
  do {
    lVar2 = lVar5 + 1;
    iVar6 = iVar6 + aiStack_64[lVar5] * 2;
    lVar5 = lVar2;
  } while (lVar2 != 6);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar6);
  if (lStack_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: test_control_flow_l2 @ 001017a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l2(void)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int local_64 [7];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_001021c8);
  uVar3 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar3);
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x3e9);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n");
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uStack_40 = 0x400000003;
  local_48 = 0x200000001;
  uStack_30 = 0x800000007;
  uStack_38 = 0x600000005;
  uVar3 = duffs_device(&local_28,&local_48,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar3);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",0x12);
  iVar6 = 0;
  iVar4 = 0;
  while (iVar1 = iVar4 + 1, iVar1 < 10) {
    iVar4 = iVar4 + 3;
    if (iVar1 < 6) {
      iVar4 = iVar1;
    }
    iVar6 = iVar6 + iVar1;
  }
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",iVar6);
  iVar6 = 0;
  local_64[0] = 0;
  do {
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x65);
  __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n");
  __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",0x78);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",3);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",10);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",0x78);
  iVar6 = 0;
  local_64[5] = 5;
  local_64[1] = 1;
  local_64[2] = 2;
  local_64[3] = 3;
  local_64[4] = 4;
  lVar5 = 1;
  do {
    lVar2 = lVar5 + 1;
    iVar6 = iVar6 + local_64[lVar5] * 2;
    lVar5 = lVar2;
  } while (lVar2 != 6);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",iVar6);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: non_local_jump @ 00101a30 */

int non_local_jump(int param_1)

{
  int iVar1;
  
  iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
  if (iVar1 == 0) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(&jump_buffer,1);
    }
    iVar1 = param_1 << 1;
    if (100 < param_1) {
                    /* WARNING: Subroutine does not return */
      __longjmp_chk(&jump_buffer,2);
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: cpp_exception @ 00101a94 */

int cpp_exception(int param_1)

{
  if (param_1 < 0) {
    return -1;
  }
  if (param_1 < 0x65) {
    return param_1 << 1;
  }
  return -2;
}



/* Function: large_jump_table @ 00101ac0 */

/* WARNING: Removing unreachable block (ram,0x00101b6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 large_jump_table(uint param_1)

{
  undefined8 uVar1;
  undefined *local_58 [10];
  undefined8 local_8;
  
  local_8 = ___stack_chk_guard;
  local_58[1] = PTR_op_sub_00114030;
  local_58[0] = PTR_op_add_00114028;
  local_58[3] = PTR_op_div_00114040;
  local_58[2] = PTR_op_mul_00114038;
  local_58[5] = PTR_op_and_00114050;
  local_58[4] = PTR_op_mod_00114048;
  local_58[7] = PTR_op_xor_00114060;
  local_58[6] = PTR_op_or_00114058;
  local_58[9] = PTR_op_shr_00114070;
  local_58[8] = PTR_op_shl_00114068;
  if (param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x00101b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)local_58[(int)param_1])();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: conditional_func_ptr @ 00101b70 */

ulong conditional_func_ptr(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  
  if (param_1 == 0) {
    return (ulong)(uint)(param_2 << 1);
  }
  UNRECOVERED_JUMPTABLE = triple_value;
  if (param_1 != 1) {
    UNRECOVERED_JUMPTABLE = recursion_factorial;
  }
                    /* WARNING: Could not recover jumptable at 0x00101b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



/* Function: state_machine @ 00101bb0 */

ulong state_machine(ulong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 2) {
    return 2;
  }
  iVar1 = (int)param_1;
  if (2 < (int)param_2) {
    uVar2 = param_2;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    if (param_2 != 3) {
      uVar2 = 3;
    }
    return (ulong)uVar2;
  }
  if (param_2 == 0) {
    return (ulong)(iVar1 == 1);
  }
  if (param_2 == 1) {
    if (iVar1 != 2) {
      uVar2 = 3;
      if (iVar1 != 99) {
        uVar2 = 1;
      }
      param_1 = (ulong)uVar2;
    }
    return param_1;
  }
  return 3;
}



/* Function: fsm_func_table @ 00101c14 */

/* WARNING: Removing unreachable block (ram,0x00101ca4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fsm_func_table(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined8 local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = DAT_00114078;
  uStack_27 = DAT_00114079;
  uStack_26 = DAT_0011407a;
  uStack_25 = DAT_0011407b;
  uStack_24 = DAT_0011407c;
  uStack_23 = DAT_0011407d;
  uStack_22 = DAT_0011407e;
  uStack_21 = DAT_0011407f;
  uStack_20 = DAT_00114080;
  uStack_1f = DAT_00114081;
  uStack_1e = DAT_00114082;
  uStack_1d = DAT_00114083;
  uStack_1c = DAT_00114084;
  uStack_1b = DAT_00114085;
  uStack_1a = DAT_00114086;
  uStack_19 = DAT_00114087;
  uStack_18 = DAT_00114088;
  uStack_17 = DAT_00114089;
  uStack_16 = DAT_0011408a;
  uStack_15 = DAT_0011408b;
  uStack_14 = DAT_0011408c;
  uStack_13 = DAT_0011408d;
  uStack_12 = DAT_0011408e;
  uStack_11 = DAT_0011408f;
  uStack_10 = DAT_00114090;
  uStack_f = DAT_00114091;
  uStack_e = DAT_00114092;
  uStack_d = DAT_00114093;
  uStack_c = DAT_00114094;
  uStack_b = DAT_00114095;
  uStack_a = DAT_00114096;
  uStack_9 = DAT_00114097;
  if (param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00101c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(&local_28 + (long)(int)param_2 * 8))();
    return uVar1;
  }
  return 3;
}



/* Function: computed_goto @ 00101cb0 */

/* WARNING: Removing unreachable block (ram,0x00101d3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void computed_goto(undefined8 param_1,uint param_2)

{
  undefined1 local_28;
  undefined1 uStack_27;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined1 uStack_24;
  undefined1 uStack_23;
  undefined1 uStack_22;
  undefined1 uStack_21;
  undefined1 uStack_20;
  undefined1 uStack_1f;
  undefined1 uStack_1e;
  undefined1 uStack_1d;
  undefined1 uStack_1c;
  undefined1 uStack_1b;
  undefined1 uStack_1a;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined8 local_8;
  
  local_8 = ___stack_chk_guard;
  local_28 = DAT_00114098;
  uStack_27 = DAT_00114099;
  uStack_26 = DAT_0011409a;
  uStack_25 = DAT_0011409b;
  uStack_24 = DAT_0011409c;
  uStack_23 = DAT_0011409d;
  uStack_22 = DAT_0011409e;
  uStack_21 = DAT_0011409f;
  uStack_20 = DAT_001140a0;
  uStack_1f = DAT_001140a1;
  uStack_1e = DAT_001140a2;
  uStack_1d = DAT_001140a3;
  uStack_1c = DAT_001140a4;
  uStack_1b = DAT_001140a5;
  uStack_1a = DAT_001140a6;
  uStack_19 = DAT_001140a7;
  uStack_18 = DAT_001140a8;
  uStack_17 = DAT_001140a9;
  uStack_16 = DAT_001140aa;
  uStack_15 = DAT_001140ab;
  uStack_14 = DAT_001140ac;
  uStack_13 = DAT_001140ad;
  uStack_12 = DAT_001140ae;
  uStack_11 = DAT_001140af;
  uStack_10 = DAT_001140b0;
  uStack_f = DAT_001140b1;
  uStack_e = DAT_001140b2;
  uStack_d = DAT_001140b3;
  uStack_c = DAT_001140b4;
  uStack_b = DAT_001140b5;
  uStack_a = DAT_001140b6;
  uStack_9 = DAT_001140b7;
  if (3 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00101cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&local_28 + (long)(int)param_2 * 8))();
  return;
}



/* Function: obfuscated_cf @ 00101d40 */

int obfuscated_cf(int param_1)

{
  return param_1 << 1;
}



/* Function: opaque_predicate @ 00101d50 */

int opaque_predicate(int param_1)

{
  return param_1 << 1;
}



/* Function: overlapped_code @ 00101d60 */

int overlapped_code(uint param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1 / 2;
  if ((param_1 & 1) != 0) {
    iVar1 = param_1 * 3 + 1;
  }
  return iVar1;
}



/* Function: test_control_flow_l3 @ 00101d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_control_flow_l3(void)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_001023e8);
  uVar1 = non_local_jump(5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  uVar1 = op_add(10,5);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",10);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",2);
  local_18 = 0x100000000;
  uStack_10 = 0x300000002;
  uVar1 = computed_goto(&local_18,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: _fini @ 00101f00 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 76 */
