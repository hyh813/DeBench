/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_clang_Os_no_g
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



/* Function: sequential_ops @ 0010116c */

int sequential_ops(int param_1,int param_2,int param_3)

{
  return (param_1 + param_2) * 2 - param_3;
}



/* Function: single_if @ 00101174 */

int single_if(int param_1)

{
  return param_1 << (0 < param_1);
}



/* Function: if_else @ 0010117e */

bool if_else(int param_1)

{
  return 0 < param_1;
}



/* Function: nested_if_2 @ 00101186 */

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



/* Function: nested_if_deep @ 00101196 */

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



/* Function: if_elseif_chain @ 001011c7 */

int if_elseif_chain(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 3) {
    iVar1 = param_1 * 10 + 10;
  }
  return iVar1;
}



/* Function: if_elseif_long @ 001011da */

int if_elseif_long(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 5) {
    iVar1 = param_1 * 100 + 100;
  }
  return iVar1;
}



/* Function: switch_small @ 001011ec */

undefined4 switch_small(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(&DAT_00102090 + (long)(int)param_1 * 4);
  }
  return uVar1;
}



/* Function: switch_large @ 00101204 */

int switch_large(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 10) {
    iVar1 = param_1 * 10;
  }
  return iVar1;
}



/* Function: switch_default @ 00101216 */

int switch_default(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 - 1U < 3) {
    iVar1 = (param_1 - 1U) * 100 + 100;
  }
  return iVar1;
}



/* Function: switch_fallthrough @ 00101227 */

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



/* Function: loop_for_fixed @ 00101248 */

int loop_for_fixed(int param_1)

{
  if (0 < param_1) {
    return (int)((ulong)(param_1 - 2) * (ulong)(param_1 - 1) >> 1) + param_1 + -1;
  }
  return 0;
}



/* Function: loop_while @ 00101262 */

int loop_while(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      uVar2 = param_1 + 9;
      param_1 = param_1 / 10;
    } while (0x12 < uVar2);
    return iVar1;
  }
  return 1;
}



/* Function: loop_dowhile @ 00101290 */

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



/* Function: loop_nested @ 001012b4 */

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



/* Function: loop_break @ 001012c4 */

long loop_break(int param_1)

{
  long lVar1;
  int *piVar2;
  
  piVar2 = &DAT_001020d0;
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



/* Function: loop_continue @ 001012e4 */

int loop_continue(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if (0 < param_1) {
    uVar8 = 1;
    uVar9 = 3;
    iVar1 = 4;
    uVar5 = 0;
    uVar7 = 0;
    do {
      uVar6 = uVar7;
      uVar4 = uVar5;
      uVar5 = ((int)(uVar8 << 0x1f) >> 0x1f & uVar8) + uVar4;
      uVar7 = ((int)(uVar9 << 0x1f) >> 0x1f & uVar9) + uVar6;
      uVar8 = uVar8 + 4;
      uVar9 = uVar9 + 4;
      iVar2 = iVar1 + -4;
      iVar3 = iVar1 + (param_1 + 3U & 0xfffffffc);
      iVar1 = iVar2;
    } while (iVar3 != 8);
    uVar8 = -iVar2;
    uVar9 = -(uint)((int)(param_1 - 1U ^ 0x80000000) < (int)(uVar8 ^ 0x80000000));
    uVar8 = -(uint)((int)(param_1 - 1U ^ 0x80000000) < (int)((uVar8 | 2) ^ 0x80000000));
    return (~uVar8 & uVar7 | uVar6 & uVar8) + (~uVar9 & uVar5 | uVar4 & uVar9);
  }
  return 0;
}



/* Function: goto_forward @ 00101390 */

int goto_forward(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  return iVar1 * param_1 * 2;
}



/* Function: goto_backward @ 001013a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int goto_backward(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar17;
  uint uVar18;
  
  if (0 < param_1) {
    uVar5 = param_1 - 1;
    auVar13 = _DAT_00102010;
    iVar1 = 4;
    uVar7 = 1;
    uVar17 = 1;
    uVar10 = 1;
    uVar18 = 1;
    do {
      uVar11 = uVar18;
      uVar9 = uVar10;
      uVar8 = uVar17;
      uVar6 = uVar7;
      uVar7 = auVar13._0_4_ * uVar6;
      uVar10 = (uint)((auVar13._8_8_ & 0xffffffff) * (ulong)uVar9);
      uVar17 = auVar13._4_4_ * uVar8;
      uVar18 = auVar13._12_4_ * uVar11;
      auVar14._0_4_ = auVar13._0_4_ + 4;
      auVar14._4_4_ = auVar13._4_4_ + 4;
      auVar14._8_4_ = auVar13._8_4_ + 4;
      auVar14._12_4_ = auVar13._12_4_ + 4;
      iVar2 = iVar1 + -4;
      iVar4 = iVar1 + (param_1 + 3U & 0xfffffffc);
      auVar13 = auVar14;
      iVar1 = iVar2;
    } while (iVar4 != 8);
    uVar3 = -iVar2;
    uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
    uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
    uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
    uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
    return (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
           (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
  }
  return 1;
}



/* Function: ternary_op @ 0010146a */

int ternary_op(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: test_control_flow_l1 @ 00101472 */

void test_control_flow_l1(void)

{
  puts(&DAT_00102675);
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



/* Function: loop_multi_exit @ 0010166e */

int loop_multi_exit(int param_1)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  
  puVar3 = &DAT_001020f0;
  iVar2 = 0;
  lVar4 = 0;
  do {
    lVar1 = 0;
    do {
      if (puVar3[lVar1] == param_1) {
        return (int)lVar1 - iVar2;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 != 4);
    lVar4 = lVar4 + 1;
    iVar2 = iVar2 + -10;
    puVar3 = puVar3 + 4;
  } while (lVar4 != 3);
  return -1;
}



/* Function: infinite_loop @ 001016a3 */

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



/* Function: multi_return @ 001016c1 */

int multi_return(uint param_1)

{
  int iVar1;
  
  if (-1 < (int)param_1) {
    iVar1 = -2;
    if (param_1 < 0x33) {
      iVar1 = param_1 + 1;
      if ((param_1 & 1) == 0) {
        iVar1 = param_1 * 2;
      }
    }
    return iVar1;
  }
  return -1;
}



/* Function: conditional_return @ 001016e4 */

int conditional_return(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (0 < param_1) {
    iVar1 = param_1 * 2;
  }
  return iVar1;
}



/* Function: duffs_device @ 001016f1 */

uint duffs_device(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0xffffffff;
  if (0 < (int)param_3) {
    uVar2 = param_3 + 7 >> 3;
    uVar3 = uVar2;
    switch(param_3 & 7) {
    case 1:
      goto switchD_00101717_caseD_1;
    case 2:
      goto switchD_00101717_caseD_2;
    case 3:
      goto switchD_00101717_caseD_3;
    case 4:
      goto switchD_00101717_caseD_4;
    case 5:
      goto switchD_00101717_caseD_5;
    case 6:
      goto switchD_00101717_caseD_6;
    case 7:
      goto switchD_00101717_caseD_7;
    }
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      uVar3 = uVar2;
switchD_00101717_caseD_7:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101717_caseD_6:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101717_caseD_5:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101717_caseD_4:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101717_caseD_3:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101717_caseD_2:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101717_caseD_1:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      uVar2 = uVar3 - 1;
      uVar4 = param_3;
    } while (1 < (int)uVar3);
  }
  return uVar4;
}



/* Function: loop_complex_cond @ 00101786 */

int loop_complex_cond(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if ((int)param_1 < 1) {
    iVar1 = 0;
    uVar2 = 0;
  }
  else {
    iVar1 = 0;
    uVar4 = param_1;
    uVar3 = 0;
    do {
      iVar1 = iVar1 + 2;
      param_1 = uVar4 - 1;
      uVar2 = uVar3 + 1;
      if ((uVar4 < 2) || ((int)param_1 <= iVar1)) break;
      bVar5 = uVar3 < 9;
      uVar4 = param_1;
      uVar3 = uVar2;
    } while (bVar5);
  }
  return iVar1 + param_1 + uVar2;
}



/* Function: loop_modify_var @ 001017b4 */

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



/* Function: loop_external_state @ 001017d3 */

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



/* Function: recursion_factorial @ 001017e7 */

int recursion_factorial(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar17;
  uint uVar18;
  
  iVar1 = 1;
  if (1 < (int)param_1) {
    uVar5 = param_1 - 2;
    if (param_1 < 2) {
      uVar5 = 0;
    }
    auVar13._4_4_ = param_1 - 1;
    auVar13._0_4_ = param_1;
    auVar13._8_4_ = param_1 - 2;
    auVar13._12_4_ = param_1 - 3;
    iVar1 = 4;
    uVar7 = 1;
    uVar17 = 1;
    uVar10 = 1;
    uVar18 = 1;
    do {
      uVar11 = uVar18;
      uVar9 = uVar10;
      uVar8 = uVar17;
      uVar6 = uVar7;
      uVar7 = auVar13._0_4_ * uVar6;
      uVar10 = (uint)((auVar13._8_8_ & 0xffffffff) * (ulong)uVar9);
      uVar17 = auVar13._4_4_ * uVar8;
      uVar18 = auVar13._12_4_ * uVar11;
      auVar14._0_4_ = auVar13._0_4_ + -4;
      auVar14._4_4_ = auVar13._4_4_ + -4;
      auVar14._8_4_ = auVar13._8_4_ + -4;
      auVar14._12_4_ = auVar13._12_4_ + -4;
      iVar2 = iVar1 + -4;
      iVar4 = iVar1 + (uVar5 + 4 & 0xfffffffc);
      auVar13 = auVar14;
      iVar1 = iVar2;
    } while (iVar4 != 8);
    uVar3 = -iVar2;
    uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
    uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
    uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
    uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
    iVar1 = (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
            (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
  }
  return iVar1;
}



/* Function: tail_recursion @ 001018c0 */

uint tail_recursion(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  
  if (1 < (int)param_1) {
    uVar6 = param_1 - 2;
    if (param_1 < 2) {
      uVar6 = 0;
    }
    iVar12 = param_1 - 1;
    iVar14 = param_1 - 2;
    iVar16 = param_1 - 3;
    uVar17 = 1;
    uVar1 = 1;
    uVar18 = 1;
    iVar2 = 4;
    do {
      uVar10 = uVar18;
      uVar9 = uVar1;
      uVar8 = uVar17;
      uVar7 = param_2;
      param_2 = uVar7 * param_1;
      uVar1 = uVar9 * iVar14;
      uVar17 = uVar8 * iVar12;
      uVar18 = uVar10 * iVar16;
      param_1 = param_1 - 4;
      iVar12 = iVar12 + -4;
      iVar14 = iVar14 + -4;
      iVar16 = iVar16 + -4;
      iVar3 = iVar2 + -4;
      iVar5 = iVar2 + (uVar6 + 4 & 0xfffffffc);
      iVar2 = iVar3;
    } while (iVar5 != 8);
    uVar4 = -iVar3;
    uVar11 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)(uVar4 ^ 0x80000000));
    uVar13 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 1) ^ 0x80000000));
    uVar15 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 2) ^ 0x80000000));
    uVar6 = -(uint)((int)(uVar6 ^ 0x80000000) < (int)((uVar4 | 3) ^ 0x80000000));
    param_2 = (~uVar15 & uVar1 | uVar9 & uVar15) * (~uVar11 & param_2 | uVar7 & uVar11) *
              (~uVar13 & uVar17 | uVar8 & uVar13) * (~uVar6 & uVar18 | uVar10 & uVar6);
  }
  return param_2;
}



/* Function: indirect_recursion_a @ 00101998 */

ulong indirect_recursion_a(uint param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = (ulong)param_1;
  if (0 < param_2) {
    param_2 = param_2 + 2;
    do {
      if ((uVar2 & 1) == 0) {
        uVar3 = (int)(uVar2 >> 0x1f) + (int)uVar2 >> 1;
        if (param_2 == 3) {
          return (ulong)uVar3;
        }
        uVar3 = uVar3 + 1;
      }
      else {
        iVar1 = (int)uVar2 * 3;
        if (param_2 == 3) {
          return (ulong)(iVar1 + 1);
        }
        uVar3 = iVar1 + 2;
      }
      uVar2 = (ulong)uVar3;
      param_2 = param_2 + -2;
    } while (2 < param_2);
  }
  return uVar2;
}



/* Function: call_func_ptr @ 001019d3 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001019d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: call_func_ptr_array @ 001019da */

int call_func_ptr_array(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  uint uVar17;
  uint uVar18;
  
  switch(param_1) {
  case 0:
    return param_2 * 2;
  case 1:
    return param_2 * 3;
  case 2:
    break;
  default:
    return -1;
  }
  iVar1 = 1;
  if (1 < (int)param_2) {
    uVar5 = param_2 - 2;
    if (param_2 < 2) {
      uVar5 = 0;
    }
    auVar13._4_4_ = param_2 - 1;
    auVar13._0_4_ = param_2;
    auVar13._8_4_ = param_2 - 2;
    auVar13._12_4_ = param_2 - 3;
    iVar1 = 4;
    uVar7 = 1;
    uVar17 = 1;
    uVar10 = 1;
    uVar18 = 1;
    do {
      uVar11 = uVar18;
      uVar9 = uVar10;
      uVar8 = uVar17;
      uVar6 = uVar7;
      uVar7 = auVar13._0_4_ * uVar6;
      uVar10 = (uint)((auVar13._8_8_ & 0xffffffff) * (ulong)uVar9);
      uVar17 = auVar13._4_4_ * uVar8;
      uVar18 = auVar13._12_4_ * uVar11;
      auVar14._0_4_ = auVar13._0_4_ + -4;
      auVar14._4_4_ = auVar13._4_4_ + -4;
      auVar14._8_4_ = auVar13._8_4_ + -4;
      auVar14._12_4_ = auVar13._12_4_ + -4;
      iVar2 = iVar1 + -4;
      iVar4 = iVar1 + (uVar5 + 4 & 0xfffffffc);
      auVar13 = auVar14;
      iVar1 = iVar2;
    } while (iVar4 != 8);
    uVar3 = -iVar2;
    uVar12 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)(uVar3 ^ 0x80000000));
    uVar15 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 1) ^ 0x80000000));
    uVar16 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 2) ^ 0x80000000));
    uVar5 = -(uint)((int)(uVar5 ^ 0x80000000) < (int)((uVar3 | 3) ^ 0x80000000));
    iVar1 = (~uVar16 & uVar10 | uVar9 & uVar16) * (~uVar12 & uVar7 | uVar6 & uVar12) *
            (~uVar15 & uVar17 | uVar8 & uVar15) * (~uVar5 & uVar18 | uVar11 & uVar5);
  }
  return iVar1;
}



/* Function: double_value @ 001019f3 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: triple_value @ 001019f7 */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: call_virtual_func @ 001019fb */

int call_virtual_func(undefined8 param_1,int param_2)

{
  return param_2 * 2;
}



/* Function: process_with_callback @ 001019ff */

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



/* Function: test_control_flow_l2 @ 00101a38 */

void test_control_flow_l2(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 local_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  
  puts(&DAT_00102699);
  puVar3 = &DAT_001020f0;
  iVar1 = 0;
  lVar4 = 0;
  do {
    lVar7 = 0;
    do {
      if (puVar3[lVar7] == 7) {
        uVar8 = (ulong)(uint)((int)lVar7 - iVar1);
        goto LAB_00101a82;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 4);
    lVar4 = lVar4 + 1;
    iVar1 = iVar1 + -10;
    puVar3 = puVar3 + 4;
  } while (lVar4 != 3);
  uVar8 = 0xffffffff;
LAB_00101a82:
  iVar1 = 0;
  printf("CF-L2-01 (loop_multi_exit): %d\n",uVar8);
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x3e9);
  printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
  uVar6 = 0xffffffff;
  printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
  printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
  printf("CF-L2-03 (multi_return): %d\n",4);
  uVar5 = 10;
  printf("CF-L2-04 (conditional_return): %d\n",10);
  printf("CF-L2-04 (conditional_return): %d\n",5);
  local_28 = 0x600000005;
  uStack_20 = 0x800000007;
  local_38 = 1;
  uStack_34 = 2;
  uStack_30 = 3;
  uStack_2c = 4;
  uVar2 = duffs_device(local_58,&local_38,8);
  printf("CF-L2-05 (duffs_device): %d\n",(ulong)uVar2);
  iVar1 = 0xb;
  do {
    uVar2 = uVar5 - 8;
    uVar5 = uVar5 + 2;
    if (iVar1 - 2U <= uVar2) break;
    uVar6 = uVar6 + 1;
    iVar1 = iVar1 + -1;
  } while (uVar6 < 9);
  iVar1 = 0;
  printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar5);
  printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x65);
  printf("CF-L2-08 (loop_external_state): %d\n",0x65);
  printf("CF-L2-09 (recursion_factorial): %d\n",0x78);
  printf("CF-L2-10 (tail_recursion): %d\n",0x78);
  printf("CF-L2-11 (indirect_recursion): %d\n",3);
  printf("CF-L2-12 (call_func_ptr): %d\n",10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",10);
  printf("CF-L2-13 (call_func_ptr_array): %d\n",0x78);
  printf("CF-L2-15 (process_with_callback): %d\n",0x1e);
  return;
}



/* Function: non_local_jump @ 00101c5d */

int non_local_jump(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _setjmp((__jmp_buf_tag *)jump_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
    if ((int)param_1 < 0) {
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



/* Function: cpp_exception @ 00101ca8 */

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



/* Function: large_jump_table @ 00101cc1 */

undefined1  [16] large_jump_table(undefined4 param_1,uint param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  uVar3 = (uint)param_3;
  switch(param_1) {
  case 0:
    auVar5._0_4_ = param_2 + uVar3;
    auVar5._4_4_ = 0;
    auVar5._8_8_ = param_3;
    return auVar5;
  case 1:
    auVar6._0_4_ = param_2 - uVar3;
    auVar6._4_4_ = 0;
    auVar6._8_8_ = param_3;
    return auVar6;
  case 2:
    auVar7._0_4_ = param_2 * uVar3;
    auVar7._4_4_ = 0;
    auVar7._8_8_ = param_3;
    return auVar7;
  case 3:
    break;
  case 4:
    if (uVar3 == 0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = param_3;
      return auVar2 << 0x40;
    }
    auVar9._8_8_ = (long)(int)param_2 % (long)(int)uVar3 & 0xffffffff;
    auVar9._0_8_ = auVar9._8_8_;
    return auVar9;
  case 5:
    auVar10._0_4_ = param_2 & uVar3;
    auVar10._4_4_ = 0;
    auVar10._8_8_ = param_3;
    return auVar10;
  case 6:
    auVar11._0_4_ = param_2 | uVar3;
    auVar11._4_4_ = 0;
    auVar11._8_8_ = param_3;
    return auVar11;
  case 7:
    auVar12._0_4_ = param_2 ^ uVar3;
    auVar12._4_4_ = 0;
    auVar12._8_8_ = param_3;
    return auVar12;
  case 8:
    auVar13._0_4_ = param_2 << ((byte)param_3 & 0x1f);
    auVar13._4_4_ = 0;
    auVar13._8_8_ = param_3;
    return auVar13;
  case 9:
    auVar14._0_4_ = (int)param_2 >> ((byte)param_3 & 0x1f);
    auVar14._4_4_ = 0;
    auVar14._8_8_ = param_3;
    return auVar14;
  default:
    auVar4._8_8_ = param_3;
    auVar4._0_8_ = 0xffffffff;
    return auVar4;
  }
  if (uVar3 == 0) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  auVar8._0_8_ = (long)(int)param_2 / (long)(int)uVar3 & 0xffffffff;
  auVar8._8_8_ = (long)(int)param_2 % (long)(int)uVar3 & 0xffffffff;
  return auVar8;
}



/* Function: op_add @ 00101cdc */

int op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: op_sub @ 00101ce0 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 00101ce5 */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 00101ceb */

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



/* Function: op_mod @ 00101cf8 */

ulong op_mod(int param_1,int param_2)

{
  if (param_2 != 0) {
    return (long)param_1 % (long)param_2 & 0xffffffff;
  }
  return 0;
}



/* Function: op_and @ 00101d07 */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 00101d0c */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 00101d11 */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 00101d16 */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00101d1d */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00101d24 */

void conditional_func_ptr(int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar1;
  
  pcVar1 = recursion_factorial;
  if (param_1 == 1) {
    pcVar1 = triple_value;
  }
  UNRECOVERED_JUMPTABLE = double_value;
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = pcVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00101d48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: state_machine @ 00101d4a */

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



/* Function: fsm_func_table @ 00101d90 */

undefined1 fsm_func_table(int param_1,undefined4 param_2)

{
  char cVar1;
  
  switch(param_2) {
  case 0:
    return param_1 == 1;
  case 1:
    break;
  case 2:
    return 2;
  case 3:
    return (param_1 != 0) * '\x03';
  default:
    return 3;
  }
  cVar1 = (param_1 == 99) * '\x02' + '\x01';
  if (param_1 == 2) {
    cVar1 = '\x02';
  }
  return cVar1;
}



/* Function: state_idle @ 00101da7 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 00101db0 */

char state_processing(int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 99) * '\x02' + '\x01';
  if (param_1 == 2) {
    cVar1 = '\x02';
  }
  return cVar1;
}



/* Function: state_done @ 00101dc3 */

undefined8 state_done(void)

{
  return 2;
}



/* Function: state_error @ 00101dc9 */

char state_error(int param_1)

{
  return (param_1 != 0) * '\x03';
}



/* Function: computed_goto @ 00101dd4 */

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



/* Function: obfuscated_cf @ 00101e00 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00101e04 */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00101e08 */

int overlapped_code(uint param_1)

{
  if ((param_1 & 1) == 0) {
    return (int)param_1 / 2;
  }
  return param_1 * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00101e1e */

void test_control_flow_l3(void)

{
  uint uVar1;
  
  puts(&DAT_001026bd);
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



/* Function: main @ 00101f23 */

undefined8 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00101f38 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
