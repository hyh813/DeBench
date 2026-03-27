/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_Os_no_g
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



/* Function: main @ 001010e0 */

undefined1  [16] main(void)

{
  undefined1 auVar1 [16];
  ulong in_RAX;
  
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_RAX;
  return auVar1 << 0x40;
}



/* Function: _start @ 00101100 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101130 */

/* WARNING: Removing unreachable block (ram,0x00101143) */
/* WARNING: Removing unreachable block (ram,0x0010114f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101160 */

/* WARNING: Removing unreachable block (ram,0x00101184) */
/* WARNING: Removing unreachable block (ram,0x00101190) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011a0 */

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



/* Function: recursion_factorial @ 001011e9 */

int recursion_factorial(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  for (; 1 < param_1; param_1 = param_1 + -1) {
    iVar1 = iVar1 * param_1;
  }
  return iVar1;
}



/* Function: double_value @ 001011ff */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: triple_value @ 00101207 */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: op_add @ 0010120f */

int op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: op_sub @ 00101217 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 00101220 */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 0010122a */

int op_div(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 / param_2;
  }
  return iVar1;
}



/* Function: op_mod @ 00101241 */

int op_mod(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 % param_2;
  }
  return iVar1;
}



/* Function: op_and @ 00101253 */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 0010125c */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 00101265 */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 0010126e */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00101279 */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00101284 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 00101290 */

int state_processing(int param_1)

{
  if (param_1 != 2) {
    if (param_1 == 99) {
      return 3;
    }
    param_1 = 1;
  }
  return param_1;
}



/* Function: state_done @ 001012ac */

undefined8 state_done(void)

{
  return 2;
}



/* Function: state_error @ 001012b6 */

undefined4 state_error(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Function: sequential_ops @ 001012c6 */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 001012d2 */

int single_if(int param_1)

{
  if (0 < param_1) {
    param_1 = param_1 * 2;
  }
  return param_1;
}



/* Function: if_else @ 001012df */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 001012eb */

int nested_if_2(int param_1,int param_2)

{
  if (param_1 < 1) {
    param_1 = 0;
  }
  else if (0 < param_2) {
    return param_1 + param_2;
  }
  return param_1;
}



/* Function: nested_if_deep @ 001012ff */

char nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((((0 < param_1) && (cVar1 = '\x01', 0 < param_2)) && (cVar1 = '\x02', 0 < param_3)) &&
     (cVar1 = '\x03', 0 < param_4)) {
    cVar1 = (0 < param_5) + '\x04';
  }
  return cVar1;
}



/* Function: if_elseif_chain @ 00101330 */

undefined8 if_elseif_chain(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 10;
  if (((param_1 != 0) && (uVar1 = 0x14, param_1 != 1)) && (uVar1 = 0x1e, param_1 != 2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: if_elseif_long @ 00101358 */

int if_elseif_long(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 5) {
    iVar1 = (param_1 + 1) * 100;
  }
  return iVar1;
}



/* Function: switch_small @ 0010136a */

int switch_small(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 4) {
    iVar1 = (int)*(char *)((long)&CSWTCH_55 + (ulong)param_1);
  }
  return iVar1;
}



/* Function: switch_large @ 00101384 */

int switch_large(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 10) {
    iVar1 = param_1 * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 00101394 */

int switch_default(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 1U < 3) {
    iVar1 = param_1 * 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 001013a6 */

int switch_fallthrough(int param_1)

{
  int iVar1;
  
  if (param_1 == 2) {
    iVar1 = 0;
  }
  else {
    if (param_1 != 3) {
      if (param_1 != 1) {
        return -1;
      }
      iVar1 = 0;
      goto LAB_001013cd;
    }
    iVar1 = 0xc;
  }
  iVar1 = iVar1 + param_1 * 2;
LAB_001013cd:
  return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 001013d0 */

int loop_for_fixed(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + iVar1;
  }
  return iVar2;
}



/* Function: loop_while @ 001013e8 */

int loop_while(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != 0; param_1 = param_1 / 10) {
    iVar2 = iVar2 + 1;
  }
  iVar1 = 1;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Function: loop_dowhile @ 0010140b */

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



/* Function: loop_nested @ 00101427 */

int loop_nested(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_2 < 0) {
    param_2 = 0;
    iVar2 = 0;
  }
  for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + param_2;
  }
  return iVar1;
}



/* Function: loop_break @ 00101441 */

ulong loop_break(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_24 [5];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_24[4] = 0x32;
  local_24[0] = 10;
  local_24[1] = 0x14;
  local_24[2] = 0x1e;
  local_24[3] = 0x28;
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xffffffff;
    if (local_24[uVar1] == param_1) goto LAB_00101499;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 5);
  uVar2 = 0xffffffff;
LAB_00101499:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: loop_continue @ 001014b6 */

int loop_continue(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = 1; (int)uVar1 <= param_1; uVar1 = uVar1 + 1) {
    if ((uVar1 & 1) != 0) {
      iVar2 = iVar2 + uVar1;
    }
  }
  return iVar2;
}



/* Function: goto_forward @ 001014d5 */

int goto_forward(int param_1)

{
  if (0 < param_1) {
    param_1 = param_1 * param_1;
  }
  return param_1 * 2;
}



/* Function: goto_backward @ 001014e4 */

int goto_backward(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (0 < param_1) {
    iVar1 = 1;
    do {
      iVar2 = iVar2 * iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 <= param_1);
  }
  return iVar2;
}



/* Function: ternary_op @ 00101505 */

int ternary_op(int param_1,int param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: test_control_flow_l1 @ 00101511 */

void test_control_flow_l1(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103004);
  __printf_chk(1,"CF-L1-01 (sequential_ops): %d\n",0x15);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0x14);
  __printf_chk(1,"CF-L1-02 (single_if): %d\n",0xfffffffb);
  __printf_chk(1,"CF-L1-03 (if_else): %d\n",1);
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
  loop_for_fixed(10,"CF-L1-12 (loop_for_fixed): %d\n");
  __printf_chk(1);
  uVar1 = loop_while(0x3039);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
  loop_dowhile(0x2694,"CF-L1-14 (loop_dowhile): %d\n");
  __printf_chk(1);
  uVar1 = loop_nested(3,4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
  uVar1 = loop_break(0x1e);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_break(99);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
  loop_continue(10,"CF-L1-17 (loop_continue): %d\n");
  __printf_chk(1);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 001017ce */

int loop_multi_exit(int param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined4 local_48 [14];
  long local_10;
  
  puVar3 = local_48;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = 0;
  puVar4 = &DAT_001035e0;
  puVar5 = local_48;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  do {
    lVar2 = 0;
    do {
      if (*(int *)((long)puVar3 + lVar2 * 4) == param_1) {
        iVar1 = iVar1 * 10 + (int)lVar2;
        goto LAB_00101823;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    iVar1 = iVar1 + 1;
    puVar3 = (undefined4 *)((long)puVar3 + 0x10);
  } while (iVar1 != 3);
  iVar1 = -1;
LAB_00101823:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: infinite_loop @ 0010183d */

void infinite_loop(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 == 1) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  *param_1 = 1;
  return;
}



/* Function: multi_return @ 00101859 */

int multi_return(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (-1 < (int)param_1) {
    iVar1 = param_1 * 2;
    if (iVar1 < 0x65) {
      if ((param_1 & 1) != 0) {
        return param_1 + 1;
      }
    }
    else {
      iVar1 = -2;
    }
  }
  return iVar1;
}



/* Function: conditional_return @ 0010187c */

int conditional_return(int param_1)

{
  int iVar1;
  
  if (0 < param_1) {
    return param_1 * 2;
  }
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = -param_1;
  }
  return iVar1;
}



/* Function: duffs_device @ 0010188e */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if ((int)param_3 < 1) {
    param_3 = 0xffffffff;
  }
  else {
    iVar4 = (int)(param_3 + 7) >> 3;
    puVar2 = param_1;
    puVar3 = param_1;
    switch(param_3 & 7) {
    case 1:
      while( true ) {
        *param_1 = *param_2;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) break;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
switchD_001018c1_default:
        uVar1 = *param_2;
        puVar2 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
switchD_001018c1_caseD_7:
        uVar1 = *param_2;
        puVar3 = puVar2 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
switchD_001018c1_caseD_6:
        uVar1 = *param_2;
        param_1 = puVar3 + 1;
        param_2 = param_2 + 1;
        *puVar3 = uVar1;
switchD_001018c1_caseD_5:
        uVar1 = *param_2;
        puVar2 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
switchD_001018c1_caseD_4:
        uVar1 = *param_2;
        param_1 = puVar2 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
switchD_001018c1_caseD_3:
        uVar1 = *param_2;
        puVar2 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
switchD_001018c1_caseD_2:
        uVar1 = *param_2;
        param_1 = puVar2 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
      }
      break;
    case 2:
      goto switchD_001018c1_caseD_2;
    case 3:
      goto switchD_001018c1_caseD_3;
    case 4:
      goto switchD_001018c1_caseD_4;
    case 5:
      goto switchD_001018c1_caseD_5;
    case 6:
      goto switchD_001018c1_caseD_6;
    case 7:
      goto switchD_001018c1_caseD_7;
    default:
      goto switchD_001018c1_default;
    }
  }
  return param_3;
}



/* Function: loop_complex_cond @ 00101939 */

int loop_complex_cond(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 * 2 < param_1 - iVar1 && (iVar1 < 10)); iVar1 = iVar1 + 1) {
  }
  return iVar1 * 3 + (param_1 - iVar1);
}



/* Function: loop_modify_var @ 00101958 */

int loop_modify_var(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + iVar1;
    if (5 < iVar1) {
      iVar1 = iVar1 + 2;
    }
  }
  return iVar2;
}



/* Function: loop_external_state @ 00101978 */

void loop_external_state(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      return;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  return;
}



/* Function: tail_recursion @ 0010198c */

int tail_recursion(int param_1,int param_2)

{
  for (; 1 < param_1; param_1 = param_1 + -1) {
    param_2 = param_2 * param_1;
  }
  return param_2;
}



/* Function: indirect_recursion_a @ 0010199f */

undefined1  [16] indirect_recursion_a(uint param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  for (; uVar2 = (ulong)param_1, 0 < param_2; param_2 = param_2 + -2) {
    if ((param_1 & 1) == 0) {
      uVar1 = (long)(int)param_1 / 2;
      uVar2 = uVar1 & 0xffffffff;
      param_3 = (long)(int)param_1 % 2 & 0xffffffff;
      if (param_2 == 1) break;
      param_1 = (int)uVar1 + 1;
    }
    else {
      if (param_2 == 1) {
        auVar3._0_4_ = param_1 * 3 + 1;
        auVar3._4_4_ = 0;
        auVar3._8_8_ = param_3;
        return auVar3;
      }
      param_1 = param_1 * 3 + 2;
    }
  }
  auVar4._8_8_ = param_3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Function: call_func_ptr @ 001019d2 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001019db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: call_func_ptr_array @ 001019dd */

undefined8 call_func_ptr_array(uint param_1,undefined4 param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  code *local_28 [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28[0] = double_value;
  local_28[1] = triple_value;
  local_28[2] = recursion_factorial;
  if (param_1 < 3) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101a3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*local_28[(int)param_1])(param_2);
      return uVar1;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_virtual_func @ 00101a59 */

int call_virtual_func(undefined8 param_1,int param_2)

{
  return param_2 * 2;
}



/* Function: process_with_callback @ 00101a61 */

int process_with_callback(long param_1,int param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  iVar3 = 0;
  for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + lVar2 * 4));
    iVar3 = iVar3 + iVar1;
  }
  return iVar3;
}



/* Function: test_control_flow_l2 @ 00101a9a */

void test_control_flow_l2(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  byte bVar4;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50 [8];
  long local_30;
  
  bVar4 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103271);
  uVar1 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_8c = 0;
  infinite_loop(&local_8c,"CF-L2-02 (infinite_loop): %d\n");
  __printf_chk(1);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  local_60 = 0x600000005;
  local_58 = 0x800000007;
  puVar3 = local_50;
  for (lVar2 = 8; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (ulong)bVar4 * -2 + 1;
  }
  local_70 = 0x200000001;
  local_68 = 0x400000003;
  uVar1 = duffs_device(local_50,&local_70,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
  loop_complex_cond(10,"CF-L2-06 (loop_complex_cond): %d\n");
  __printf_chk(1);
  loop_modify_var(10,"CF-L2-07 (loop_modify_var): %d\n");
  __printf_chk(1);
  local_88 = 0;
  loop_external_state(&local_88,"CF-L2-08 (loop_external_state): %d\n");
  __printf_chk(1);
  recursion_factorial(5,"CF-L2-09 (recursion_factorial): %d\n");
  __printf_chk(1);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
  uVar1 = indirect_recursion_a(6,1);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
  uVar1 = call_func_ptr(double_value,5);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
  uVar1 = call_func_ptr_array(0,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  uVar1 = call_func_ptr_array(2,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  local_84 = 0x200000001;
  local_7c = 0x400000003;
  local_74 = 5;
  uVar1 = process_with_callback(&local_84,5,double_value);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: non_local_jump @ 00101d73 */

int non_local_jump(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 != 0) {
    return -1;
  }
  uVar2 = 1;
  if (-1 < param_1) {
    if (param_1 < 0x65) {
      return param_1 * 2;
    }
    uVar2 = 2;
  }
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jump_buffer,uVar2);
}



/* Function: cpp_exception @ 00101dc5 */

int cpp_exception(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if ((-1 < param_1) && (iVar1 = -2, param_1 < 0x65)) {
    iVar1 = param_1 * 2;
  }
  return iVar1;
}



/* Function: large_jump_table @ 00101dde */

undefined8 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_60 [10];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0;
  puVar4 = &DAT_00106020;
  puVar5 = local_60;
  for (lVar2 = 0x14; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined4 *)puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = (undefined8 *)((long)puVar5 + 4);
  }
  if (param_1 < 10) {
    lVar3 = local_10 - *(long *)(in_FS_OFFSET + 0x28);
    if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00101e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)local_60[(int)param_1])(param_2,param_3);
      return uVar1;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar5,puVar4,lVar3);
}



/* Function: conditional_func_ptr @ 00101e55 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = double_value;
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = triple_value;
    if (param_1 != 1) {
      UNRECOVERED_JUMPTABLE = recursion_factorial;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00101e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: state_machine @ 00101e7e */

uint state_machine(int param_1,uint param_2)

{
  uint uVar1;
  bool bVar2;
  
  if (param_2 == 2) {
    return 2;
  }
  if ((int)param_2 < 3) {
    if (param_2 == 0) {
      return (uint)(param_1 == 1);
    }
    if (param_2 == 1) {
      if (param_1 == 2) {
        return 2;
      }
      bVar2 = param_1 == 99;
      uVar1 = 3;
LAB_00101ebc:
      if (bVar2) {
        param_2 = uVar1;
      }
      return param_2;
    }
  }
  else if (param_2 == 3) {
    uVar1 = 0;
    bVar2 = param_1 == 0;
    goto LAB_00101ebc;
  }
  return 3;
}



/* Function: fsm_func_table @ 00101ec6 */

undefined8 fsm_func_table(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  code *local_30 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = state_idle;
  local_30[1] = state_processing;
  local_30[2] = state_done;
  local_30[3] = state_error;
  if (param_2 < 4) {
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*local_30[(int)param_2])();
      return uVar1;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: computed_goto @ 00101f4e */

undefined8 computed_goto(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined1 *local_30 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = &DAT_00101fa3;
  local_30[1] = &LAB_00101fab;
  local_30[2] = &LAB_00101fb6;
  local_30[3] = &LAB_00101fc1;
  if (param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00101f9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)local_30[(int)param_2])();
    return uVar1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0xffffffff;
}



/* Function: obfuscated_cf @ 00101fe4 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00101fec */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00101ff4 */

undefined1  [16] overlapped_code(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if ((param_1 & 1) != 0) {
    auVar1._0_4_ = param_1 * 3 + 1;
    auVar1._4_4_ = 0;
    auVar1._8_8_ = param_3;
    return auVar1;
  }
  auVar2._0_8_ = (long)(int)param_1 / 2 & 0xffffffff;
  auVar2._8_8_ = (long)(int)param_1 % 2 & 0xffffffff;
  return auVar2;
}



/* Function: test_control_flow_l3 @ 0010200d */

void test_control_flow_l3(void)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103464);
  uVar1 = non_local_jump(5);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  __printf_chk(1,"CF-L3-01 (non_local_jump): %d\n",uVar1);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",10);
  __printf_chk(1,"CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  uVar1 = large_jump_table(0,10,5);
  __printf_chk(1,"CF-L3-03 (large_jump_table): %d\n",uVar1);
  uVar1 = conditional_func_ptr(0,5);
  __printf_chk(1,"CF-L3-04 (conditional_func_ptr): %d\n",uVar1);
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n",1);
  uVar1 = fsm_func_table(2,1);
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
  local_20 = 0x100000000;
  local_18 = 0x300000002;
  uVar1 = computed_goto(&local_20,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: _fini @ 001021c4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
