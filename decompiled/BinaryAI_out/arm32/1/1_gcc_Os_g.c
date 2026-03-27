// Decompiled by BinaryAI
// SHA256: 257798b6a0ac4f8efabafc9993872c3ca80fe31b60d705f4664f36ef236f05c5

// Function: _init @ 0x10448
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x10468
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10474
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::_setjmp @ 0x10480
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1048c
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10498
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x104b0
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x104bc
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x104c8
void __longjmp_chk(void)
{
  __longjmp_chk();
}

// Function: <EXTERNAL>::abort @ 0x104d4
void abort(void)
{
  abort();
}

// Function: main @ 0x104e0
undefined4 main(void)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}

// Function: _start @ 0x104f8
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1053c
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x10560
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1058c
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x105c4
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: recursion_factorial @ 0x105f0
int recursion_factorial(int param_1)
{
  int iVar1;
  iVar1 = 1;
  for (; 1 < param_1; param_1 = param_1 + -1) {
    iVar1 = param_1 * iVar1;
  }
  return iVar1;
}

// Function: double_value @ 0x1060c
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: triple_value @ 0x10614
int triple_value(int param_1)
{
  return param_1 * 3;
}

// Function: op_add @ 0x1061c
int op_add(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: op_sub @ 0x10624
int op_sub(int param_1,int param_2)
{
  return param_1 - param_2;
}

// Function: op_mul @ 0x1062c
int op_mul(int param_1,int param_2)
{
  return param_2 * param_1;
}

// Function: op_div @ 0x10634
undefined4 op_div(undefined4 param_1,int param_2)
{
  undefined4 uVar1;
  if (param_2 != 0) {
    uVar1 = __aeabi_idiv();
    return uVar1;
  }
  return 0;
}

// Function: op_mod @ 0x10650
undefined4 op_mod(undefined4 param_1,int param_2)
{
  undefined4 extraout_r1;
  if (param_2 != 0) {
    __aeabi_idivmod();
    return extraout_r1;
  }
  return 0;
}

// Function: op_and @ 0x10670
uint op_and(uint param_1,uint param_2)
{
  return param_1 & param_2;
}

// Function: op_or @ 0x10678
uint op_or(uint param_1,uint param_2)
{
  return param_1 | param_2;
}

// Function: op_xor @ 0x10680
uint op_xor(uint param_1,uint param_2)
{
  return param_1 ^ param_2;
}

// Function: op_shl @ 0x10688
int op_shl(int param_1,uint param_2)
{
  return param_1 << (param_2 & 0xff);
}

// Function: op_shr @ 0x10690
int op_shr(int param_1,uint param_2)
{
  return param_1 >> (param_2 & 0xff);
}

// Function: state_idle @ 0x10698
bool state_idle(int param_1)
{
  return param_1 == 1;
}

// Function: state_processing @ 0x106a8
undefined4 state_processing(int param_1)
{
  undefined4 uVar1;
  if (param_1 != 2) {
    if (param_1 == 99) {
      uVar1 = 3;
    }
    else {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 2;
}

// Function: state_done @ 0x106c0
undefined4 state_done(void)
{
  return 2;
}

// Function: state_error @ 0x106c8
int state_error(int param_1)
{
  if (param_1 != 0) {
    param_1 = 3;
  }
  return param_1;
}

// Function: sequential_ops @ 0x106d4
int sequential_ops(int param_1,int param_2,int param_3)
{
  return (param_1 + param_2) * 2 - param_3;
}

// Function: single_if @ 0x106e0
int single_if(int param_1)
{
  if (0 < param_1) {
    param_1 = param_1 << 1;
  }
  return param_1;
}

// Function: if_else @ 0x106ec
bool if_else(int param_1)
{
  return 0 < param_1;
}

// Function: nested_if_2 @ 0x106fc
int nested_if_2(int param_1,int param_2)
{
  if (0 < param_1) {
    if (0 < param_2) {
      param_1 = param_1 + param_2;
    }
    return param_1;
  }
  return 0;
}

// Function: nested_if_deep @ 0x10718
undefined4 nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  if (param_1 < 1) {
    return 0;
  }
  if (param_2 < 1) {
    return 1;
  }
  if (param_3 < 1) {
    return 2;
  }
  if (param_4 < 1) {
    return 3;
  }
  if (param_5 < 1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}

// Function: if_elseif_chain @ 0x1076c
undefined4 if_elseif_chain(int param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    return 10;
  }
  if (param_1 == 1) {
    return 0x14;
  }
  if (param_1 == 2) {
    uVar1 = 0x1e;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: if_elseif_long @ 0x1079c
int if_elseif_long(uint param_1)
{
  int iVar1;
  if (param_1 < 5) {
    iVar1 = param_1 * 100 + 100;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: switch_small @ 0x107b0
int switch_small(uint param_1)
{
  int iVar1;
  if (param_1 < 4) {
    iVar1 = (int)(char)(&CSWTCH_56)[param_1];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: switch_large @ 0x107c8
int switch_large(uint param_1)
{
  int iVar1;
  if (param_1 < 10) {
    iVar1 = param_1 * 10;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: switch_default @ 0x107dc
int switch_default(int param_1)
{
  if (param_1 - 1U < 3) {
    param_1 = param_1 * 100;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}

// Function: switch_fallthrough @ 0x107f4
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
      goto LAB_0001081c;
    }
    iVar1 = 0xc;
  }
  iVar1 = iVar1 + param_1 * 2;
LAB_0001081c:
  return iVar1 + param_1;
}

// Function: loop_for_fixed @ 0x10834
int loop_for_fixed(int param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + iVar2;
  }
  return iVar1;
}

// Function: loop_while @ 0x10854
int loop_while(int param_1)
{
  int iVar1;
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 / 10) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  return iVar1;
}

// Function: loop_dowhile @ 0x1088c
int loop_dowhile(int param_1)
{
  int iVar1;
  iVar1 = 0;
  do {
    param_1 = param_1 / 10;
    iVar1 = iVar1 + 1;
  } while (param_1 != 0);
  return iVar1;
}

// Function: loop_nested @ 0x108b4
int loop_nested(int param_1,uint param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + (param_2 & ~((int)param_2 >> 0x1f));
  }
  return iVar1;
}

// Function: loop_break @ 0x108d8
void loop_break(int param_1)
{
  int iVar1;
  int *piVar2;
  int local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  local_c = 0;
  local_20[0] = 10;
  local_20[1] = 0x14;
  local_20[2] = 0x1e;
  local_20[3] = 0x28;
  iVar1 = 0;
  local_10 = 0x32;
  piVar2 = local_20;
  do {
    if (*piVar2 == param_1) {
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 5);
  return;
}

// Function: loop_continue @ 0x1095c
int loop_continue(int param_1)
{
  int iVar1;
  uint uVar2;
  iVar1 = 0;
  for (uVar2 = 1; (int)uVar2 <= param_1; uVar2 = uVar2 + 1) {
    if ((uVar2 & 1) != 0) {
      iVar1 = iVar1 + uVar2;
    }
  }
  return iVar1;
}

// Function: goto_forward @ 0x10980
int goto_forward(int param_1)
{
  if (0 < param_1) {
    param_1 = param_1 * param_1;
  }
  return param_1 << 1;
}

// Function: goto_backward @ 0x10994
int goto_backward(int param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = 1;
  if (param_1 < 1) {
    return iVar1;
  }
  iVar2 = 1;
  do {
    iVar1 = iVar2 * iVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 <= param_1);
  return iVar1;
}

// Function: ternary_op @ 0x109b8
int ternary_op(int param_1,int param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: test_control_flow_l1 @ 0x109c4
void test_control_flow_l1(void)
{
  undefined4 uVar1;
  puts(&DAT_000119c0);
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
  uVar1 = loop_for_fixed(10);
  __printf_chk(1,"CF-L1-12 (loop_for_fixed): %d\n",uVar1);
  uVar1 = loop_while(0x3039);
  __printf_chk(1,"CF-L1-13 (loop_while): %d\n",uVar1);
  uVar1 = loop_dowhile(0x2694);
  __printf_chk(1,"CF-L1-14 (loop_dowhile): %d\n",uVar1);
  uVar1 = loop_nested(3,4);
  __printf_chk(1,"CF-L1-15 (loop_nested): %d\n",uVar1);
  uVar1 = loop_break(0x1e);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_break(99);
  __printf_chk(1,"CF-L1-16 (loop_break): %d\n",uVar1);
  uVar1 = loop_continue(10);
  __printf_chk(1,"CF-L1-17 (loop_continue): %d\n",uVar1);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0x32);
  __printf_chk(1,"CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  __printf_chk(1,"CF-L1-19 (goto_backward): %d\n",0x78);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",10);
  __printf_chk(1,"CF-L1-20 (ternary_op): %d\n",8);
  return;
}

// Function: loop_multi_exit @ 0x10c34
void loop_multi_exit(int param_1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  local_c = 0;
  local_3c = 1;
  uStack_38 = 2;
  uStack_34 = 3;
  uStack_30 = 4;
  local_2c = 5;
  uStack_28 = 6;
  uStack_24 = 7;
  uStack_20 = 8;
  local_1c = 9;
  uStack_18 = 10;
  uStack_14 = 0xb;
  uStack_10 = 0xc;
  iVar3 = 0;
  piVar2 = &local_3c;
  do {
    iVar4 = 0;
    piVar1 = piVar2;
    do {
      if (*piVar1 == param_1) {
        return;
      }
      iVar4 = iVar4 + 1;
      piVar1 = piVar1 + 1;
    } while (iVar4 != 4);
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 4;
  } while (iVar3 != 3);
  return;
}

// Function: infinite_loop @ 0x10ce4
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

// Function: multi_return @ 0x10d18
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

// Function: conditional_return @ 0x10d48
int conditional_return(int param_1)
{
  if (0 < param_1) {
    return param_1 << 1;
  }
  if (param_1 != 0) {
    param_1 = -param_1;
  }
  return param_1;
}

// Function: duffs_device @ 0x10d60
uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  if ((int)param_3 < 1) {
    return 0xffffffff;
  }
  iVar3 = (int)(param_3 + 7) >> 3;
  puVar2 = param_2;
  puVar1 = param_2;
  puVar5 = param_1;
  puVar4 = param_1;
  switch(param_3 & 7) {
  case 1:
    break;
  case 2:
    goto switchD_00010d80_caseD_2;
  case 3:
    goto switchD_00010d80_caseD_3;
  case 4:
    goto switchD_00010d80_caseD_4;
  case 5:
    goto switchD_00010d80_caseD_5;
  case 6:
    goto switchD_00010d80_caseD_6;
  case 7:
    goto switchD_00010d80_caseD_7;
  default:
    goto switchD_00010d80_caseD_7;
  }
switchD_00010d80_caseD_1:
  iVar3 = iVar3 + -1;
  *param_1 = *param_2;
  if (iVar3 == 0) {
    return param_3;
  }
  param_2 = param_2 + 1;
  param_1 = param_1 + 1;
switchD_00010d80_caseD_7:
  puVar1 = param_2 + 1;
  puVar4 = param_1 + 1;
  *param_1 = *param_2;
switchD_00010d80_caseD_7:
  puVar2 = puVar1 + 1;
  puVar5 = puVar4 + 1;
  *puVar4 = *puVar1;
switchD_00010d80_caseD_6:
  param_2 = puVar2 + 1;
  param_1 = puVar5 + 1;
  *puVar5 = *puVar2;
switchD_00010d80_caseD_5:
  puVar2 = param_2 + 1;
  puVar5 = param_1 + 1;
  *param_1 = *param_2;
switchD_00010d80_caseD_4:
  param_2 = puVar2 + 1;
  param_1 = puVar5 + 1;
  *puVar5 = *puVar2;
switchD_00010d80_caseD_3:
  puVar2 = param_2 + 1;
  puVar5 = param_1 + 1;
  *param_1 = *param_2;
switchD_00010d80_caseD_2:
  param_2 = puVar2 + 1;
  param_1 = puVar5 + 1;
  *puVar5 = *puVar2;
  goto switchD_00010d80_caseD_1;
}

// Function: loop_complex_cond @ 0x10e00
int loop_complex_cond(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  iVar3 = 0;
  while( true ) {
    iVar2 = param_1 - iVar3;
    bVar4 = SBORROW4(iVar3,9);
    iVar1 = iVar3 + -9;
    if (iVar3 < 10) {
      bVar4 = SBORROW4(iVar3 * 2,iVar2);
      iVar1 = iVar3 * 2 - iVar2;
    }
    if (iVar1 < 0 == bVar4) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3 * 3 + iVar2;
}

// Function: loop_modify_var @ 0x10e2c
int loop_modify_var(int param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + iVar2;
    if (5 < iVar2) {
      iVar2 = iVar2 + 2;
    }
  }
  return iVar1;
}

// Function: loop_external_state @ 0x10e54
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

// Function: tail_recursion @ 0x10e78
int tail_recursion(int param_1,int param_2)
{
  for (; 1 < param_1; param_1 = param_1 + -1) {
    param_2 = param_1 * param_2;
  }
  return param_2;
}

// Function: indirect_recursion_a @ 0x10e94
uint indirect_recursion_a(uint param_1,int param_2)
{
  do {
    if (param_2 < 1) {
      return param_1;
    }
    if ((param_1 & 1) == 0) {
      if (param_2 == 1) {
        return (int)param_1 / 2;
      }
      param_1 = (int)param_1 / 2 + 1;
    }
    else {
      if (param_2 == 1) {
        return param_1 * 3 + 1;
      }
      param_1 = param_1 * 3 + 2;
    }
    param_2 = param_2 + -2;
  } while( true );
}

// Function: call_func_ptr @ 0x10edc
void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)
{
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}

// Function: call_func_ptr_array @ 0x10ee8
undefined4 call_func_ptr_array(uint param_1,undefined4 param_2)
{
  undefined4 uVar1;
  code *apcStack_18 [4];
  apcStack_18[3] = (code *)0x0;
  apcStack_18[0] = double_value;
  apcStack_18[1] = triple_value;
  apcStack_18[2] = recursion_factorial;
  if (param_1 < 3) {
    uVar1 = (*apcStack_18[param_1])(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

// Function: call_virtual_func @ 0x10f80
int call_virtual_func(undefined4 param_1,int param_2)
{
  return param_2 << 1;
}

// Function: process_with_callback @ 0x10f88
int process_with_callback(int param_1,int param_2,code *param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar3 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    iVar1 = (*param_3)(*(undefined4 *)(param_1 + iVar2 * 4));
    iVar3 = iVar3 + iVar1;
  }
  return iVar3;
}

// Function: test_control_flow_l2 @ 0x10fc4
void test_control_flow_l2(void)
{
  undefined4 uVar1;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined auStack_34 [32];
  int local_14;
  local_14 = 0;
  puts(&DAT_00011c2d);
  uVar1 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_70 = 0;
  uVar1 = infinite_loop(&local_70);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  local_54 = 1;
  uStack_50 = 2;
  uStack_4c = 3;
  uStack_48 = 4;
  local_44 = 5;
  uStack_40 = 6;
  uStack_3c = 7;
  uStack_38 = 8;
  memset(auStack_34,0,0x20);
  uVar1 = duffs_device(auStack_34,&local_54,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
  uVar1 = loop_complex_cond(10);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
  uVar1 = loop_modify_var(10);
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
  local_6c = 0;
  uVar1 = loop_external_state(&local_6c);
  __printf_chk(1,"CF-L2-08 (loop_external_state): %d\n",uVar1);
  uVar1 = recursion_factorial(5);
  __printf_chk(1,"CF-L2-09 (recursion_factorial): %d\n",uVar1);
  __printf_chk(1,"CF-L2-10 (tail_recursion): %d\n",0x78);
  uVar1 = indirect_recursion_a(6,1);
  __printf_chk(1,"CF-L2-11 (indirect_recursion): %d\n",uVar1);
  uVar1 = call_func_ptr(double_value,5);
  __printf_chk(1,"CF-L2-12 (call_func_ptr): %d\n",uVar1);
  uVar1 = call_func_ptr_array(0,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  uVar1 = call_func_ptr_array(2,5);
  __printf_chk(1,"CF-L2-13 (call_func_ptr_array): %d\n",uVar1);
  local_68 = 1;
  uStack_64 = 2;
  uStack_60 = 3;
  uStack_5c = 4;
  local_58 = 5;
  uVar1 = process_with_callback(&local_68,5,double_value);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_14 != 0) {
    __stack_chk_fail();
  }
  return;
}

// Function: non_local_jump @ 0x1123c
int non_local_jump(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = _setjmp((__jmp_buf_tag *)&jump_buffer);
  if (iVar1 != 0) {
    return -1;
  }
  if (param_1 < 0) {
    uVar2 = 1;
  }
  else {
    if (param_1 < 0x65) {
      return param_1 << 1;
    }
    uVar2 = 2;
  }
  __longjmp_chk(&jump_buffer,uVar2);
}

// Function: cpp_exception @ 0x11294
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

// Function: large_jump_table @ 0x112bc
undefined4 large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)
{
  undefined4 uVar1;
  code *apcStack_3c [10];
  undefined4 local_14;
  local_14 = 0;
  apcStack_3c[0] = op_add;
  apcStack_3c[1] = op_sub;
  apcStack_3c[2] = op_mul;
  apcStack_3c[3] = op_div;
  apcStack_3c[4] = op_mod;
  apcStack_3c[5] = op_and;
  apcStack_3c[6] = op_or;
  apcStack_3c[7] = op_xor;
  apcStack_3c[8] = op_shl;
  apcStack_3c[9] = op_shr;
  if (param_1 < 10) {
    uVar1 = (*apcStack_3c[param_1])(param_2,param_3);
    return uVar1;
  }
  return 0xffffffff;
}

// Function: conditional_func_ptr @ 0x1136c
void conditional_func_ptr(int param_1,undefined4 param_2)
{
  code *UNRECOVERED_JUMPTABLE;
  if (param_1 == 0) {
    UNRECOVERED_JUMPTABLE = double_value;
  }
  else {
    UNRECOVERED_JUMPTABLE = triple_value;
    if (param_1 != 1) {
      UNRECOVERED_JUMPTABLE = recursion_factorial;
    }
  }
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}

// Function: state_machine @ 0x113a0
uint state_machine(int param_1,uint param_2)
{
  switch(param_2) {
  case 0:
    return (uint)(param_1 == 1);
  case 1:
    if (param_1 != 2) {
      if (param_1 == 99) {
        param_2 = 3;
      }
      return param_2;
    }
    param_2 = 2;
switchD_000113ac_caseD_2:
    return param_2;
  case 2:
    goto switchD_000113ac_caseD_2;
  case 3:
    if (param_1 == 0) {
      param_2 = 0;
    }
    return param_2;
  default:
    return 3;
  }
}

// Function: fsm_func_table @ 0x11404
undefined4 fsm_func_table(undefined4 param_1,uint param_2)
{
  undefined4 uVar1;
  code *apcStack_1c [4];
  undefined4 local_c;
  local_c = 0;
  apcStack_1c[0] = state_idle;
  apcStack_1c[1] = state_processing;
  apcStack_1c[2] = state_done;
  apcStack_1c[3] = state_error;
  if (param_2 < 4) {
    uVar1 = (*apcStack_1c[param_2])(param_1);
    return uVar1;
  }
  return 3;
}

// Function: computed_goto @ 0x1149c
void computed_goto(undefined4 param_1,uint param_2)
{
  code *apcStack_1c [3];
  apcStack_1c[0] = (code *)&DAT_000114dc;
  apcStack_1c[1] = (code *)&DAT_000114fc;
  apcStack_1c[2] = (code *)&DAT_00011504;
  if (3 < param_2) {
    return;
  }
  (*apcStack_1c[param_2])();
  return;
}

// Function: obfuscated_cf @ 0x11524
int obfuscated_cf(int param_1)
{
  return param_1 << 1;
}

// Function: opaque_predicate @ 0x1152c
int opaque_predicate(int param_1)
{
  return param_1 << 1;
}

// Function: overlapped_code @ 0x11534
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

// Function: test_control_flow_l3 @ 0x1154c
void test_control_flow_l3
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  iVar2 = 0;
  local_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  puts(&DAT_00011e20);
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
  __printf_chk(1,"CF-L3-05 (state_machine): %d\n");
  uVar1 = fsm_func_table(2,1);
  __printf_chk(1,"CF-L3-06 (fsm_func_table): %d\n",uVar1);
  local_1c = 0;
  uStack_18 = 1;
  uStack_14 = 2;
  uVar1 = computed_goto(&local_1c,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (iVar2 != 0) {
    __stack_chk_fail();
  }
  return;
}

// Function: __aeabi_idiv @ 0x116d4
uint __aeabi_idiv(uint param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  if (param_2 == 0) {
    bVar5 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar5) {
      param_1 = 0x80000000;
    }
    uVar1 = __aeabi_idiv0(param_1);
    return uVar1;
  }
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11724))();
  return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x116dc
uint _divsi3_skip_div0_test(uint param_1,uint param_2)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool in_NG;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if (in_NG) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11724))();
  return uVar1;
}

// Function: __aeabi_idivmod @ 0x118f4
void __aeabi_idivmod(int param_1,int param_2)
{
  bool bVar1;
  if (param_2 != 0) {
    _divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_idiv0(param_1);
  return;
}

// Function: __aeabi_idiv0 @ 0x11914
void __aeabi_idiv0(void)
{
  raise(8);
  return;
}

// Function: _fini @ 0x11924
void _fini(void)
{
  return;
}

