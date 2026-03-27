/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_clang_O1_no_g
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



/* Function: _start @ 00101080 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010b0 */

/* WARNING: Removing unreachable block (ram,0x001010c3) */
/* WARNING: Removing unreachable block (ram,0x001010cf) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001010e0 */

/* WARNING: Removing unreachable block (ram,0x00101104) */
/* WARNING: Removing unreachable block (ram,0x00101110) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101120 */

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



/* Function: sequential_ops @ 00101170 */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00101180 */

int single_if(int param_1)

{
  return param_1 << (0 < param_1);
}



/* Function: if_else @ 00101190 */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 001011a0 */

int nested_if_2(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  param_2 = param_2 + param_1;
  if (param_1 < 1) {
    param_2 = 0;
  }
  return param_2;
}



/* Function: nested_if_deep @ 001011b0 */

byte nested_if_deep(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if (param_1 < 1) {
    return 0;
  }
  if (param_2 < 1) {
    return 1;
  }
  if (param_3 < 1) {
    return 2;
  }
  if (0 < param_4) {
    return 0 < param_5 | 4;
  }
  return 3;
}



/* Function: if_elseif_chain @ 001011f0 */

int if_elseif_chain(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 3) {
    iVar1 = param_1 * 10 + 10;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 00101210 */

int if_elseif_long(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 5) {
    iVar1 = param_1 * 100 + 100;
  }
  return iVar1;
}



/* Function: switch_small @ 00101230 */

undefined4 switch_small(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(&DAT_00103654 + (long)(int)param_1 * 4);
  }
  return uVar1;
}



/* Function: switch_large @ 00101250 */

int switch_large(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 10) {
    iVar1 = param_1 * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 00101270 */

int switch_default(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 1U < 3) {
    iVar1 = (param_1 - 1U) * 100 + 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00101290 */

int switch_fallthrough(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 1) {
    if (param_1 != 2) {
      if (param_1 != 3) {
        return -1;
      }
      iVar1 = 0xc;
    }
    iVar1 = iVar1 + param_1 * 2;
  }
  return iVar1 + param_1;
}



/* Function: loop_for_fixed @ 001012c0 */

int loop_for_fixed(int param_1)

{
  if (0 < param_1) {
    return (int)((ulong)(param_1 - 2) * (ulong)(param_1 - 1) >> 1) + param_1 + -1;
  }
  return 0;
}



/* Function: loop_while @ 001012e0 */

int loop_while(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != 0) {
    do {
      iVar3 = iVar3 + 1;
      uVar1 = param_1 + 9;
      param_1 = param_1 / 10;
    } while (0x12 < uVar1);
  }
  iVar2 = 1;
  if (iVar3 != 0) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Function: loop_dowhile @ 00101320 */

int loop_dowhile(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    uVar2 = param_1 + 9;
    param_1 = param_1 / 10;
  } while (0x12 < uVar2);
  return iVar1;
}



/* Function: loop_nested @ 00101360 */

int loop_nested(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    param_2 = 0;
  }
  iVar1 = 0;
  if (0 < param_1) {
    iVar1 = param_2 * param_1;
  }
  return iVar1;
}



/* Function: loop_break @ 00101370 */

long loop_break(int param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = &DAT_00103040;
  lVar1 = 0;
  do {
    if (*piVar2 == param_1) {
      return lVar1;
    }
    lVar1 = lVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 5);
  return 0xffffffff;
}



/* Function: loop_continue @ 001013a0 */

int loop_continue(uint param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  if (0 < (int)param_1) {
    iVar1 = 0;
    uVar2 = 1;
    do {
      iVar1 = iVar1 + (-(uVar2 & 1) & uVar2);
      bVar3 = uVar2 != param_1;
      uVar2 = uVar2 + 1;
    } while (bVar3);
    return iVar1;
  }
  return 0;
}



/* Function: goto_forward @ 001013d0 */

int goto_forward(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  return iVar1 * param_1 * 2;
}



/* Function: goto_backward @ 001013e0 */

int goto_backward(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (0 < param_1) {
    iVar1 = 1;
    iVar2 = 1;
    do {
      iVar1 = iVar1 * iVar2;
      bVar3 = iVar2 != param_1;
      iVar2 = iVar2 + 1;
    } while (bVar3);
    return iVar1;
  }
  return 1;
}



/* Function: ternary_op @ 00101410 */

int ternary_op(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: test_control_flow_l1 @ 00101420 */

void test_control_flow_l1(void)

{
  puts(&DAT_001035e5);
  printf("CF-L1-01 (sequential_ops): %d\n",0x15);
  printf("CF-L1-02 (single_if): %d\n",0x14);
  printf("CF-L1-02 (single_if): %d\n",0xfffffffb);
  printf("CF-L1-03 (if_else): %d\n",1);
  printf("CF-L1-03 (if_else): %d\n",0);
  printf("CF-L1-04 (nested_if_2): %d\n",0xf);
  printf("CF-L1-04 (nested_if_2): %d\n",10);
  printf("CF-L1-04 (nested_if_2): %d\n",0);
  printf("CF-L1-05 (nested_if_deep): %d\n",5);
  printf("CF-L1-06 (if_elseif_chain): %d\n",0x14);
  printf("CF-L1-07 (if_elseif_long): %d\n",400);
  printf("CF-L1-08 (switch_small): %d\n",0x32);
  printf("CF-L1-09 (switch_large): %d\n",0x46);
  printf("CF-L1-10 (switch_default): %d\n",0);
  printf("CF-L1-11 (switch_fallthrough): %d\n",0x15);
  printf("CF-L1-12 (loop_for_fixed): %d\n",0x2d);
  printf("CF-L1-13 (loop_while): %d\n",5);
  printf("CF-L1-14 (loop_dowhile): %d\n",4);
  printf("CF-L1-15 (loop_nested): %d\n",0xc);
  printf("CF-L1-16 (loop_break): %d\n",2);
  printf("CF-L1-16 (loop_break): %d\n",0xffffffff);
  printf("CF-L1-17 (loop_continue): %d\n",0x19);
  printf("CF-L1-18 (goto_forward): %d\n",0x32);
  printf("CF-L1-18 (goto_forward): %d\n",0xfffffffa);
  printf("CF-L1-19 (goto_backward): %d\n",0x78);
  printf("CF-L1-20 (ternary_op): %d\n",10);
  printf("CF-L1-20 (ternary_op): %d\n",8);
  return;
}



/* Function: loop_multi_exit @ 00101620 */

int loop_multi_exit(int param_1)

{
  int in_EAX;
  undefined4 *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  bool bVar6;
  
  puVar1 = &DAT_00103064;
  lVar5 = 0;
  do {
    if ((&DAT_00103060)[lVar5 * 4] == param_1) {
      bVar6 = true;
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if (uVar4 == 3) goto LAB_001016be;
        uVar2 = uVar4 + 1;
      } while (puVar1[uVar4] != param_1);
      bVar6 = uVar4 < 3;
    }
    in_EAX = (int)uVar2 + (int)lVar5 * 10;
    iVar3 = 1;
    if (bVar6) goto LAB_001016d5;
LAB_001016be:
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 4;
  } while (lVar5 != 3);
  iVar3 = 2;
LAB_001016d5:
  if (iVar3 == 2) {
    in_EAX = -1;
  }
  return in_EAX;
}



/* Function: infinite_loop @ 001016f0 */

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



/* Function: multi_return @ 00101720 */

int multi_return(uint param_1)

{
  int iVar1;
  
  if (-1 < (int)param_1) {
    iVar1 = -2;
    if ((int)param_1 < 0x33) {
      iVar1 = param_1 + 1;
      if ((param_1 & 1) == 0) {
        iVar1 = param_1 * 2;
      }
    }
    return iVar1;
  }
  return -1;
}



/* Function: conditional_return @ 00101750 */

int conditional_return(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (0 < param_1) {
    iVar1 = param_1 * 2;
  }
  return iVar1;
}



/* Function: duffs_device @ 00101760 */

int duffs_device(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = -1;
  if (0 < param_3) {
    iVar2 = param_3 + 0xe;
    if (-1 < param_3 + 7) {
      iVar2 = param_3 + 7;
    }
    iVar2 = iVar2 >> 3;
    iVar3 = iVar2;
    iVar4 = param_3;
    switch(param_3 % 8) {
    case 0:
      do {
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
        iVar3 = iVar2;
switchD_0010179d_caseD_7:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
switchD_0010179d_caseD_6:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
switchD_0010179d_caseD_5:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
switchD_0010179d_caseD_4:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
switchD_0010179d_caseD_3:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
switchD_0010179d_caseD_2:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
switchD_0010179d_caseD_1:
        uVar1 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar1;
        param_1 = param_1 + 1;
        iVar2 = iVar3 + -1;
      } while (1 < iVar3);
      break;
    case 1:
      goto switchD_0010179d_caseD_1;
    case 2:
      goto switchD_0010179d_caseD_2;
    case 3:
      goto switchD_0010179d_caseD_3;
    case 4:
      goto switchD_0010179d_caseD_4;
    case 5:
      goto switchD_0010179d_caseD_5;
    case 6:
      goto switchD_0010179d_caseD_6;
    case 7:
      goto switchD_0010179d_caseD_7;
    }
  }
  return iVar4;
}



/* Function: loop_complex_cond @ 00101810 */

int loop_complex_cond(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (param_1 < 1) {
    iVar1 = 0;
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar4 = param_1;
    uVar3 = 0;
    do {
      iVar1 = iVar1 + 2;
      param_1 = iVar4 + -1;
      uVar2 = uVar3 + 1;
      if ((iVar4 < 2) || (param_1 <= iVar1)) break;
      bVar5 = uVar3 < 9;
      iVar4 = param_1;
      uVar3 = uVar2;
    } while (bVar5);
  }
  return iVar1 + param_1 + uVar2;
}



/* Function: loop_modify_var @ 00101850 */

int loop_modify_var(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_1) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + iVar2;
      iVar3 = iVar2 + 2;
      if (iVar2 < 6) {
        iVar3 = iVar2;
      }
      iVar2 = iVar3 + 1;
    } while (iVar2 < param_1);
    return iVar1;
  }
  return 0;
}



/* Function: loop_external_state @ 00101880 */

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



/* Function: recursion_factorial @ 001018b0 */

int recursion_factorial(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (1 < param_1) {
    iVar1 = recursion_factorial(param_1 + -1);
    iVar1 = iVar1 * param_1;
  }
  return iVar1;
}



/* Function: tail_recursion @ 001018d0 */

void tail_recursion(int param_1,int param_2)

{
  if (1 < param_1) {
    tail_recursion(param_1 + -1,param_2 * param_1);
  }
  return;
}



/* Function: indirect_recursion_a @ 001018f0 */

ulong indirect_recursion_a(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_1 & 0xffffffff;
  if (0 < param_2) {
    iVar2 = (int)param_1;
    if ((param_1 & 1) == 0) {
      uVar1 = (int)(((uint)(param_1 >> 0x1f) & 1) + iVar2) >> 1;
      if (param_2 < 2) {
        return (ulong)uVar1;
      }
      iVar2 = uVar1 + 1;
    }
    else {
      if (param_2 < 2) {
        return (ulong)(iVar2 * 3 + 1);
      }
      iVar2 = iVar2 * 3 + 2;
    }
    uVar3 = indirect_recursion_a(iVar2,param_2 + -2);
  }
  return uVar3;
}



/* Function: call_func_ptr @ 00101940 */

void call_func_ptr(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: call_func_ptr_array @ 00101950 */

void call_func_ptr_array(uint param_1,undefined4 param_2)

{
  if (param_1 < 3) {
    (*(code *)(&PTR_double_value_00105d40)[(int)param_1])(param_2);
  }
  return;
}



/* Function: double_value @ 00101970 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: triple_value @ 00101980 */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: call_virtual_func @ 00101990 */

int call_virtual_func(undefined8 param_1,int param_2)

{
  return param_2 * 2;
}



/* Function: process_with_callback @ 001019a0 */

int process_with_callback(long param_1,uint param_2,code *param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  
  if ((int)param_2 < 1) {
    iVar3 = 0;
  }
  else {
    uVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = (*param_3)(*(undefined4 *)(param_1 + uVar2 * 4));
      iVar3 = iVar3 + iVar1;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  return iVar3;
}



/* Function: test_control_flow_l2 @ 001019f0 */

void test_control_flow_l2(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  
  puts(&DAT_00103609);
  puVar2 = &DAT_00103064;
  iVar5 = 0;
  lVar4 = 0;
  do {
    uVar1 = 0;
    do {
      uVar9 = uVar1;
      if (uVar9 == 3) goto LAB_00101a5c;
      uVar1 = uVar9 + 1;
    } while (puVar2[uVar9] != 7);
    iVar8 = 1;
    param_2 = (ulong)(uint)((int)(uVar9 + 1) - iVar5);
    if (uVar9 < 3) goto LAB_00101a73;
LAB_00101a5c:
    lVar4 = lVar4 + 1;
    iVar5 = iVar5 + -10;
    puVar2 = puVar2 + 4;
  } while (lVar4 != 3);
  iVar8 = 2;
LAB_00101a73:
  param_2 = param_2 & 0xffffffff;
  if (iVar8 == 2) {
    param_2 = 0xffffffff;
  }
  iVar5 = 0;
  printf("CF-L2-01 (loop_multi_exit): %d\n",param_2);
  do {
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x3e9);
  printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
  uVar7 = 0xffffffff;
  printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
  printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
  printf("CF-L2-03 (multi_return): %d\n",4);
  uVar6 = 10;
  printf("CF-L2-04 (conditional_return): %d\n",10);
  printf("CF-L2-04 (conditional_return): %d\n",5);
  printf("CF-L2-05 (duffs_device): %d\n",8);
  iVar5 = 0xb;
  do {
    uVar3 = uVar6 - 8;
    uVar6 = uVar6 + 2;
    if (iVar5 - 2U <= uVar3) break;
    uVar7 = uVar7 + 1;
    iVar5 = iVar5 + -1;
  } while (uVar7 < 9);
  iVar5 = 0;
  printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar6);
  printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
  do {
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x65);
  printf("CF-L2-08 (loop_external_state): %d\n",0x65);
  uVar6 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n",(ulong)uVar6);
  uVar6 = tail_recursion(5,1);
  printf("CF-L2-10 (tail_recursion): %d\n",(ulong)uVar6);
  uVar6 = indirect_recursion_a(10,3);
  printf("CF-L2-11 (indirect_recursion): %d\n",(ulong)uVar6);
  printf("CF-L2-12 (call_func_ptr): %d\n",10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
  uVar6 = recursion_factorial(5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",(ulong)uVar6);
  printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
  return;
}



/* Function: non_local_jump @ 00101c80 */

int non_local_jump(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,1);
    }
    if (100 < param_1) {
                    /* WARNING: Subroutine does not return */
      longjmp((__jmp_buf_tag *)jump_buffer,2);
    }
    iVar2 = param_1 * 2;
  }
  return iVar2;
}



/* Function: cpp_exception @ 00101cd0 */

int cpp_exception(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -2;
  if (param_1 < 0x65) {
    iVar2 = param_1 * 2;
  }
  iVar1 = -1;
  if (-1 < param_1) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Function: large_jump_table @ 00101cf0 */

void large_jump_table(uint param_1,undefined4 param_2,undefined4 param_3)

{
  if (param_1 < 10) {
    (*(code *)(&PTR_op_add_00105d60)[(int)param_1])(param_2,param_3);
  }
  return;
}



/* Function: op_add @ 00101d20 */

int op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: op_sub @ 00101d30 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 00101d40 */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 00101d50 */

undefined1  [16] op_div(int param_1,int param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  if (param_2 != 0) {
    auVar2._0_8_ = (long)param_1 / (long)param_2 & 0xffffffff;
    auVar2._8_8_ = (long)param_1 % (long)param_2 & 0xffffffff;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



/* Function: op_mod @ 00101d60 */

ulong op_mod(int param_1,int param_2)

{
  if (param_2 != 0) {
    return (long)param_1 % (long)param_2 & 0xffffffff;
  }
  return 0;
}



/* Function: op_and @ 00101d70 */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 00101d80 */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 00101d90 */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 00101da0 */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00101db0 */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00101dc0 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar2 = recursion_factorial;
  if (param_1 == 1) {
    pcVar2 = triple_value;
  }
  pcVar1 = double_value;
  if (param_1 != 0) {
    pcVar1 = pcVar2;
  }
  (*pcVar1)(param_2);
  return;
}



/* Function: state_machine @ 00101df0 */

uint state_machine(int param_1,uint param_2)

{
  uint uVar1;
  
  switch(param_2) {
  case 0:
    return (uint)(param_1 == 1);
  case 1:
    uVar1 = (uint)(param_1 == 99) * 2 + 1;
    if (param_1 == 2) {
      uVar1 = 2;
    }
    return uVar1;
  case 2:
    break;
  case 3:
    return (uint)(param_1 != 0) * 3;
  default:
    param_2 = 3;
  }
  return param_2;
}



/* Function: fsm_func_table @ 00101e40 */

void fsm_func_table(undefined8 param_1,uint param_2)

{
  if (param_2 < 4) {
    (*(code *)(&PTR_state_idle_00105db0)[(int)param_2])();
  }
  return;
}



/* Function: state_idle @ 00101e60 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 00101e70 */

char state_processing(int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 99) * '\x02' + '\x01';
  if (param_1 == 2) {
    cVar1 = '\x02';
  }
  return cVar1;
}



/* Function: state_done @ 00101e90 */

undefined8 state_done(void)

{
  return 2;
}



/* Function: state_error @ 00101ea0 */

char state_error(int param_1)

{
  return (param_1 != 0) * '\x03';
}



/* Function: computed_goto @ 00101eb0 */

undefined8 computed_goto(undefined8 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    return 0;
  case 1:
    return 10;
  case 2:
    return 0x14;
  case 3:
    return 0x1e;
  default:
    return 0xffffffff;
  }
}



/* Function: obfuscated_cf @ 00101ee0 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00101ef0 */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00101f00 */

int overlapped_code(uint param_1)

{
  if ((param_1 & 1) == 0) {
    return (int)param_1 / 2;
  }
  return param_1 * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00101f20 */

void test_control_flow_l3(void)

{
  uint uVar1;
  
  puts(&DAT_0010362d);
  uVar1 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
  uVar1 = non_local_jump(0xfffffffb);
  printf("CF-L3-01 (non_local_jump): %d\n",(ulong)uVar1);
  printf("CF-L3-02 (cpp_exception): %d\n",10);
  printf("CF-L3-02 (cpp_exception): %d\n",0xffffffff);
  printf("CF-L3-03 (large_jump_table): %d\n",0xf);
  printf("CF-L3-04 (conditional_func_ptr): %d\n",10);
  printf("CF-L3-05 (state_machine): %d\n",1);
  printf("CF-L3-06 (fsm_func_table): %d\n",2);
  uVar1 = computed_goto();
  printf("CF-L3-07 (computed_goto): %d\n",(ulong)uVar1);
  printf("CF-L3-08 (obfuscated_cf): %d\n",10);
  printf("CF-L3-09 (opaque_predicate): %d\n",10);
  printf("CF-L3-10 (overlapped_code): %d\n",0x10);
  return;
}



/* Function: main @ 00102030 */

undefined8 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00102044 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
