/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/1/1_gcc_Os_no_g
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



/* Function: main @ 00011110 */

undefined4 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _start @ 00011130 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001115c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011160 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011170 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001118b) */
/* WARNING: Removing unreachable block (ram,0x00011195) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000111b0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111de) */
/* WARNING: Removing unreachable block (ram,0x000111e8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011200 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001125c) */
/* WARNING: Removing unreachable block (ram,0x00011260) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011299 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001129d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: recursion_factorial @ 000112a1 */

int recursion_factorial(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  for (; 1 < param_1; param_1 = param_1 + -1) {
    iVar1 = iVar1 * param_1;
  }
  return iVar1;
}



/* Function: double_value @ 000112bd */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: triple_value @ 000112cb */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: op_add @ 000112d8 */

int op_add(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: op_sub @ 000112e7 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 000112f6 */

int op_mul(int param_1,int param_2)

{
  return param_2 * param_1;
}



/* Function: op_div @ 00011306 */

int op_div(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 / param_2;
  }
  return iVar1;
}



/* Function: op_mod @ 00011320 */

int op_mod(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_1 % param_2;
  }
  return iVar1;
}



/* Function: op_and @ 0001133a */

uint op_and(uint param_1,uint param_2)

{
  return param_2 & param_1;
}



/* Function: op_or @ 00011349 */

uint op_or(uint param_1,uint param_2)

{
  return param_2 | param_1;
}



/* Function: op_xor @ 00011358 */

uint op_xor(uint param_1,uint param_2)

{
  return param_2 ^ param_1;
}



/* Function: op_shl @ 00011367 */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00011378 */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: state_idle @ 00011389 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 0001139b */

int state_processing(int param_1)

{
  if (param_1 != 2) {
    if (param_1 == 99) {
      param_1 = 3;
    }
    else {
      param_1 = 1;
    }
  }
  return param_1;
}



/* Function: state_done @ 000113bd */

undefined4 state_done(void)

{
  return 2;
}



/* Function: state_error @ 000113c7 */

undefined4 state_error(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Function: sequential_ops @ 000113dc */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_2 + param_1) * 2 - param_3;
}



/* Function: single_if @ 000113f0 */

int single_if(int param_1)

{
  if (0 < param_1) {
    param_1 = param_1 * 2;
  }
  return param_1;
}



/* Function: if_else @ 00011402 */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 00011414 */

int nested_if_2(int param_1,int param_2)

{
  if (param_1 < 1) {
    param_1 = 0;
  }
  else if (0 < param_2) {
    param_1 = param_1 + param_2;
  }
  return param_1;
}



/* Function: nested_if_deep @ 00011431 */

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



/* Function: if_elseif_chain @ 0001146f */

undefined4 if_elseif_chain(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 10;
  if (((param_1 != 0) && (uVar1 = 0x14, param_1 != 1)) && (uVar1 = 0x1e, param_1 != 2)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: if_elseif_long @ 0001149e */

int if_elseif_long(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 5) {
    iVar1 = (param_1 + 1) * 100;
  }
  return iVar1;
}



/* Function: switch_small @ 000114b8 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int switch_small(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 4) {
    iVar1 = (int)*(char *)((int)&CSWTCH_56 + param_1);
  }
  return iVar1;
}



/* Function: switch_large @ 000114df */

int switch_large(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 10;
  if (9 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: switch_default @ 000114f6 */

int switch_default(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 100;
  if (2 < param_1 - 1U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 0001150f */

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
      goto LAB_0001153d;
    }
    iVar1 = 0xc;
  }
  iVar1 = param_1 * 2 + iVar1;
LAB_0001153d:
  return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 00011541 */

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



/* Function: loop_while @ 0001155a */

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



/* Function: loop_dowhile @ 00011583 */

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



/* Function: loop_nested @ 000115a2 */

int loop_nested(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (param_2 < 0) {
    param_2 = 0;
  }
  for (; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + param_2;
  }
  return iVar2;
}



/* Function: loop_break @ 000115c7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_break(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_GS_OFFSET;
  int local_24 [5];
  int local_10;
  
  iVar1 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  piVar3 = &DAT_00013020;
  piVar4 = local_24;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  do {
    if (local_24[iVar1] == param_1) goto LAB_0001160f;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 5);
  iVar1 = -1;
LAB_0001160f:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: loop_continue @ 00011627 */

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



/* Function: goto_forward @ 00011647 */

int goto_forward(int param_1)

{
  if (0 < param_1) {
    param_1 = param_1 * param_1;
  }
  return param_1 * 2;
}



/* Function: goto_backward @ 0001165c */

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



/* Function: ternary_op @ 00011680 */

int ternary_op(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: test_control_flow_l1 @ 00011694 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l1(void)

{
  undefined4 uVar1;
  
  puts(&DAT_000130e8);
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



/* Function: loop_multi_exit @ 000118e7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int loop_multi_exit(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  undefined4 local_40 [12];
  int local_10;
  
  iVar1 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puVar3 = &DAT_00013040;
  puVar4 = local_40;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = local_40;
  do {
    iVar2 = 0;
    do {
      if (puVar3[iVar2] == param_1) {
        iVar2 = iVar1 * 10 + iVar2;
        goto LAB_00011941;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 4;
  } while (iVar1 != 3);
  iVar2 = -1;
LAB_00011941:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: infinite_loop @ 00011959 */

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



/* Function: multi_return @ 0001197a */

int multi_return(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (-1 < (int)param_1) {
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



/* Function: conditional_return @ 000119a4 */

int conditional_return(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = -param_1;
    }
  }
  else {
    iVar1 = param_1 * 2;
  }
  return iVar1;
}



/* Function: duffs_device @ 000119bc */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */

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
switchD_000119f6_default:
        uVar1 = *param_2;
        puVar2 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
_L194:
        uVar1 = *param_2;
        puVar3 = puVar2 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
_L196:
        uVar1 = *param_2;
        param_1 = puVar3 + 1;
        param_2 = param_2 + 1;
        *puVar3 = uVar1;
_L197:
        uVar1 = *param_2;
        puVar2 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
_L198:
        uVar1 = *param_2;
        param_1 = puVar2 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
_L199:
        uVar1 = *param_2;
        puVar2 = param_1 + 1;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
_L200:
        uVar1 = *param_2;
        param_1 = puVar2 + 1;
        param_2 = param_2 + 1;
        *puVar2 = uVar1;
      }
      break;
    case 2:
      goto _L200;
    case 3:
      goto _L199;
    case 4:
      goto _L198;
    case 5:
      goto _L197;
    case 6:
      goto _L196;
    case 7:
      goto _L194;
    default:
      goto switchD_000119f6_default;
    }
  }
  return param_3;
}



/* Function: loop_complex_cond @ 00011a5f */

int loop_complex_cond(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; (iVar1 * 2 < param_1 - iVar1 && (iVar1 < 10)); iVar1 = iVar1 + 1) {
  }
  return iVar1 * 3 + (param_1 - iVar1);
}



/* Function: loop_modify_var @ 00011a82 */

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



/* Function: loop_external_state @ 00011aa3 */

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



/* Function: tail_recursion @ 00011abd */

int tail_recursion(int param_1,int param_2)

{
  for (; 1 < param_1; param_1 = param_1 + -1) {
    param_2 = param_2 * param_1;
  }
  return param_2;
}



/* Function: indirect_recursion_a @ 00011ad7 */

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



/* Function: call_func_ptr @ 00011b13 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00011b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: call_func_ptr_array @ 00011b26 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_func_ptr_array(uint param_1)

{
  undefined4 uVar1;
  int in_GS_OFFSET;
  code *local_1c [3];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c[0] = double_value;
  local_1c[1] = triple_value;
  local_1c[2] = recursion_factorial;
  if (param_1 < 3) {
    if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x00011b85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*local_1c[param_1])();
      return uVar1;
    }
  }
  else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return 0xffffffff;
  }
  __stack_chk_fail_local();
  return 0xffffffff;
}



/* Function: call_virtual_func @ 00011ba1 */

int call_virtual_func(undefined4 param_1,int param_2)

{
  return param_2 * 2;
}



/* Function: process_with_callback @ 00011baf */

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



/* Function: test_control_flow_l2 @ 00011bde */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l2(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  byte bVar5;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74 [5];
  undefined4 local_60 [8];
  undefined4 local_40 [8];
  int local_20;
  undefined4 uStack_14;
  
  bVar5 = 0;
  uStack_14 = 0x11bf0;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013355);
  uVar1 = loop_multi_exit(7);
  __printf_chk(1,"CF-L2-01 (loop_multi_exit): %d\n",uVar1);
  local_7c = 0;
  uVar1 = infinite_loop(&local_7c);
  __printf_chk(1,"CF-L2-02 (infinite_loop): %d\n",uVar1);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xffffffff);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",0xfffffffe);
  __printf_chk(1,"CF-L2-03 (multi_return): %d\n",4);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",10);
  __printf_chk(1,"CF-L2-04 (conditional_return): %d\n",5);
  puVar3 = &DAT_000130a0;
  puVar4 = local_60;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  puVar3 = local_40;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = duffs_device(local_40,local_60,8);
  __printf_chk(1,"CF-L2-05 (duffs_device): %d\n",uVar1);
  uVar1 = loop_complex_cond(10);
  __printf_chk(1,"CF-L2-06 (loop_complex_cond): %d\n",uVar1);
  uVar1 = loop_modify_var(10);
  __printf_chk(1,"CF-L2-07 (loop_modify_var): %d\n",uVar1);
  local_78 = 0;
  uVar1 = loop_external_state(&local_78);
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
  puVar3 = &DAT_000130c0;
  puVar4 = local_74;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = process_with_callback(local_74,5,double_value);
  __printf_chk(1,"CF-L2-15 (process_with_callback): %d\n",uVar1);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: non_local_jump @ 00011e36 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int non_local_jump(int param_1)

{
  int iVar1;
  int extraout_EDX;
  undefined4 uVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  if (iVar1 != 0) {
    return -1;
  }
  if (param_1 < 0) {
    uVar2 = 1;
    iVar1 = extraout_EDX;
  }
  else {
    iVar1 = param_1 * 2;
    if (param_1 < 0x65) {
      return iVar1;
    }
    uVar2 = 2;
  }
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jump_buffer,uVar2,iVar1,iVar1);
}



/* Function: cpp_exception @ 00011e9d */

int cpp_exception(int param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if ((-1 < param_1) && (iVar1 = param_1 * 2, 100 < param_1)) {
    iVar1 = -2;
  }
  return iVar1;
}



/* Function: large_jump_table @ 00011ebe */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 large_jump_table(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  undefined4 local_48 [10];
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  ppuVar3 = &PTR_op_add_00016020;
  puVar4 = local_48;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_1 < 10) {
    if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x00011f1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)local_48[param_1])();
      return uVar1;
    }
  }
  else if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return 0xffffffff;
  }
  __stack_chk_fail_local();
  return 0xffffffff;
}



/* Function: conditional_func_ptr @ 00011f3b */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void conditional_func_ptr(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = double_value;
  if ((param_1 != 0) && (UNRECOVERED_JUMPTABLE = triple_value, param_1 != 1)) {
    UNRECOVERED_JUMPTABLE = recursion_factorial;
  }
                    /* WARNING: Could not recover jumptable at 0x00011f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: state_machine @ 00011f74 */

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
LAB_00011fbd:
      if (!bVar2) {
        return param_2;
      }
      return uVar1;
    }
  }
  else if (param_2 == 3) {
    bVar2 = param_1 == 0;
    uVar1 = 0;
    goto LAB_00011fbd;
  }
  return 3;
}



/* Function: fsm_func_table @ 00011fc9 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 fsm_func_table(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  undefined4 local_20 [4];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ppuVar3 = &PTR_state_idle_00016048;
  puVar4 = local_20;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_2 < 4) {
    if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Could not recover jumptable at 0x00012020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)local_20[param_2])();
      return uVar1;
    }
  }
  else if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return 3;
  }
  __stack_chk_fail_local();
  return 3;
}



/* Function: computed_goto @ 0001203f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 computed_goto(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  undefined4 local_20 [4];
  int local_10;
  
  uVar1 = 0xffffffff;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ppuVar3 = &PTR_DAT_00016058;
  puVar4 = local_20;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x0001207c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)local_20[param_2])();
    return uVar1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}



/* Function: obfuscated_cf @ 000120bf */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 000120cd */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 000120db */

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



/* Function: test_control_flow_l3 @ 000120f9 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_control_flow_l3(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  byte bVar5;
  undefined4 local_30 [4];
  int local_20;
  undefined4 uStack_14;
  
  bVar5 = 0;
  uStack_14 = 0x1210b;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013548);
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
  puVar3 = &DAT_000130d4;
  puVar4 = local_30;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = computed_goto(local_30,2);
  __printf_chk(1,"CF-L3-07 (computed_goto): %d\n",uVar1);
  __printf_chk(1,"CF-L3-08 (obfuscated_cf): %d\n",10);
  __printf_chk(1,"CF-L3-09 (opaque_predicate): %d\n",10);
  __printf_chk(1,"CF-L3-10 (overlapped_code): %d\n",0x10);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 0001226f */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012273 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.si @ 00012277 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00012280 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 000122a0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000122ba) */
/* WARNING: Removing unreachable block (ram,0x000122d0) */
/* WARNING: Removing unreachable block (ram,0x000122dd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000122ec */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 81 */
