/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_clang_O2_no_g
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
    uVar1 = *(undefined4 *)(&DAT_00103280 + (long)(int)param_1 * 4);
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

undefined8 loop_break(undefined4 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 10:
    break;
  default:
    return 0xffffffff;
  case 0x14:
    return 1;
  case 0x1e:
    return 2;
  case 0x28:
    return 3;
  case 0x32:
    uVar1 = 4;
  }
  return uVar1;
}



/* Function: loop_continue @ 001013b0 */

/* WARNING: Removing unreachable block (ram,0x0010151b) */

int loop_continue(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if ((int)param_1 < 1) {
    return 0;
  }
  if (param_1 < 8) {
    iVar2 = 0;
    uVar3 = 1;
    goto LAB_001014eb;
  }
  uVar3 = param_1 & 0xfffffff8;
  uVar1 = (uVar3 - 8 >> 3) + 1;
  if (uVar3 - 8 == 0) {
    iVar2 = 0;
    iVar5 = 0;
    uVar10 = 1;
    uVar11 = 3;
    iVar7 = 0;
    iVar9 = 0;
LAB_00101496:
    uVar1 = -(uint)((uVar10 & 1) == 0);
    uVar4 = -(uint)((uVar11 & 1) == 0);
    iVar2 = iVar2 + (~uVar1 & uVar10);
    iVar5 = iVar5 + (~uVar4 & uVar11);
    iVar7 = iVar7 + (~uVar1 & uVar10 + 4);
    iVar9 = iVar9 + (~uVar4 & uVar11 + 4);
  }
  else {
    uVar4 = uVar1 & 0xfffffffe;
    uVar10 = 1;
    uVar11 = 3;
    iVar2 = 0;
    iVar5 = 0;
    iVar7 = 0;
    iVar9 = 0;
    do {
      uVar6 = -(uint)((uVar10 & 1) == 0);
      uVar8 = -(uint)((uVar11 & 1) == 0);
      iVar2 = (~uVar6 & uVar10 + 8) + (~uVar6 & uVar10) + iVar2;
      iVar5 = (~uVar8 & uVar11 + 8) + (~uVar8 & uVar11) + iVar5;
      iVar7 = (~uVar6 & uVar10 + 0xc) + (~uVar6 & uVar10 + 4) + iVar7;
      iVar9 = (~uVar8 & uVar11 + 0xc) + (~uVar8 & uVar11 + 4) + iVar9;
      uVar10 = uVar10 + 0x10;
      uVar11 = uVar11 + 0x10;
      uVar4 = uVar4 - 2;
    } while (uVar4 != 0);
    if ((uVar1 & 1) != 0) goto LAB_00101496;
  }
  iVar2 = iVar5 + iVar9 + iVar2 + iVar7;
  if (uVar3 == param_1) {
    return iVar2;
  }
  uVar3 = uVar3 | 1;
LAB_001014eb:
  do {
    iVar2 = iVar2 + (-(uVar3 & 1) & uVar3);
    uVar3 = uVar3 + 1;
  } while (param_1 + 1 != uVar3);
  return iVar2;
}



/* Function: goto_forward @ 00101520 */

int goto_forward(int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (0 < param_1) {
    iVar1 = param_1;
  }
  return iVar1 * param_1 * 2;
}



/* Function: goto_backward @ 00101530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong goto_backward(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  int iVar21;
  undefined1 auVar17 [16];
  int iVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  int iVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar7 [16];
  undefined1 auVar18 [16];
  int iVar23;
  undefined1 auVar26 [16];
  int iVar27;
  uint uVar29;
  int iVar30;
  undefined1 auVar34 [16];
  int iVar35;
  
  if ((int)param_1 < 1) {
    return 1;
  }
  uVar3 = 1;
  uVar2 = 1;
  if (7 < param_1) {
    uVar3 = param_1 & 0xfffffff8;
    uVar4 = (uVar3 - 8 >> 3) + 1;
    uVar1 = uVar4 & 3;
    auVar5 = _DAT_00103140;
    auVar7 = _DAT_00103160;
    auVar18 = _DAT_00103160;
    if (0x17 < uVar3 - 8) {
      uVar4 = uVar4 & 0xfffffffc;
      do {
        iVar23 = auVar5._0_4_;
        auVar24._0_4_ = iVar23 + 4;
        iVar27 = auVar5._4_4_;
        auVar24._4_4_ = iVar27 + 4;
        uVar29 = auVar5._8_4_;
        iVar30 = auVar5._12_4_;
        auVar24._8_4_ = uVar29 + 4;
        auVar24._12_4_ = iVar30 + 4;
        iVar10 = auVar7._4_4_;
        auVar36._4_4_ = iVar27;
        auVar36._0_4_ = iVar27;
        auVar36._8_4_ = iVar30;
        auVar36._12_4_ = iVar30;
        iVar21 = auVar18._4_4_;
        auVar11._4_4_ = auVar24._4_4_;
        auVar11._0_4_ = auVar24._4_4_;
        auVar11._8_4_ = auVar24._12_4_;
        auVar11._12_4_ = auVar24._12_4_;
        auVar17._4_4_ = iVar27 + 8;
        auVar17._12_4_ = iVar30 + 8;
        auVar31._4_4_ = iVar27 + 0xc;
        auVar31._12_4_ = iVar30 + 0xc;
        auVar17._0_4_ = auVar17._4_4_;
        auVar17._8_4_ = auVar17._12_4_;
        auVar31._0_4_ = auVar31._4_4_;
        auVar31._8_4_ = auVar31._12_4_;
        auVar12._0_4_ = iVar23 + 0x10;
        auVar12._4_4_ = iVar27 + 0x10;
        auVar12._8_4_ = uVar29 + 0x10;
        auVar12._12_4_ = iVar30 + 0x10;
        auVar37._0_4_ = iVar23 + 0x14;
        auVar37._4_4_ = iVar27 + 0x14;
        auVar37._8_4_ = uVar29 + 0x14;
        auVar37._12_4_ = iVar30 + 0x14;
        auVar16._4_4_ = auVar12._4_4_;
        auVar16._0_4_ = auVar12._4_4_;
        auVar16._8_4_ = auVar12._12_4_;
        auVar16._12_4_ = auVar12._12_4_;
        iVar22 = iVar27 + 0x18;
        iVar28 = iVar27 + 0x1c;
        iVar35 = auVar12._0_4_ * auVar7._0_4_ * iVar23 * (iVar23 + 8) * (iVar23 + 0x18);
        uVar15 = (undefined4)
                 (((auVar12._8_8_ & 0xffffffff) *
                   (((auVar7._8_8_ & 0xffffffff) * (ulong)uVar29 & 0xffffffff) * (ulong)(uVar29 + 8)
                   & 0xffffffff) & 0xffffffff) * (ulong)(uVar29 + 0x18));
        auVar8._4_4_ = uVar15;
        auVar8._0_4_ = iVar35;
        auVar13._4_4_ = iVar22;
        auVar13._0_4_ = iVar22;
        auVar13._8_4_ = iVar30 + 0x18;
        auVar13._12_4_ = iVar30 + 0x18;
        auVar8._8_4_ = uVar15;
        auVar8._12_4_ =
             (int)((auVar13._8_8_ & 0xffffffff) *
                  ((auVar16._8_8_ & 0xffffffff) *
                   ((auVar17._8_8_ & 0xffffffff) *
                    ((auVar36._8_8_ & 0xffffffff) * (ulong)auVar7._12_4_ & 0xffffffff) & 0xffffffff)
                  & 0xffffffff));
        auVar7._8_8_ = auVar8._8_8_;
        auVar7._4_4_ = iVar22 * auVar12._4_4_ * auVar17._4_4_ * iVar27 * iVar10;
        auVar7._0_4_ = iVar35;
        iVar10 = auVar37._0_4_ * auVar24._0_4_ * auVar18._0_4_ * (iVar23 + 0xc) * (iVar23 + 0x1c);
        uVar15 = (undefined4)
                 (((auVar37._8_8_ & 0xffffffff) *
                   (((auVar24._8_8_ & 0xffffffff) * (ulong)auVar18._8_4_ & 0xffffffff) *
                    (ulong)(uVar29 + 0xc) & 0xffffffff) & 0xffffffff) * (ulong)(uVar29 + 0x1c));
        auVar19._4_4_ = uVar15;
        auVar19._0_4_ = iVar10;
        auVar14._4_4_ = iVar28;
        auVar14._0_4_ = iVar28;
        auVar14._8_4_ = iVar30 + 0x1c;
        auVar14._12_4_ = iVar30 + 0x1c;
        auVar19._8_4_ = uVar15;
        auVar19._12_4_ =
             (int)((auVar14._8_8_ & 0xffffffff) *
                  ((ulong)auVar37._12_4_ *
                   ((auVar31._8_8_ & 0xffffffff) *
                    ((auVar11._8_8_ & 0xffffffff) * (ulong)auVar18._12_4_ & 0xffffffff) & 0xffffffff
                   ) & 0xffffffff));
        auVar18._8_8_ = auVar19._8_8_;
        auVar18._4_4_ = iVar28 * auVar37._4_4_ * auVar31._4_4_ * auVar24._4_4_ * iVar21;
        auVar18._0_4_ = iVar10;
        auVar5._0_4_ = iVar23 + 0x20;
        auVar5._4_4_ = iVar27 + 0x20;
        auVar5._8_4_ = uVar29 + 0x20;
        auVar5._12_4_ = iVar30 + 0x20;
        uVar4 = uVar4 - 4;
      } while (uVar4 != 0);
    }
    while( true ) {
      auVar20._4_4_ = auVar18._4_4_;
      auVar20._12_4_ = auVar18._12_4_;
      if (uVar1 == 0) break;
      iVar10 = auVar5._0_4_;
      auVar32._0_4_ = iVar10 + 4;
      iVar35 = auVar5._4_4_;
      auVar32._4_4_ = iVar35 + 4;
      iVar21 = auVar5._12_4_;
      auVar32._8_4_ = auVar5._8_4_ + 4;
      auVar32._12_4_ = iVar21 + 4;
      auVar25._0_4_ = iVar10 * auVar7._0_4_;
      auVar26._8_4_ = (undefined4)((auVar5._8_8_ & 0xffffffff) * (ulong)auVar7._8_4_);
      auVar26._4_4_ = auVar26._8_4_;
      auVar26._0_4_ = auVar25._0_4_;
      auVar38._4_4_ = iVar35;
      auVar38._0_4_ = iVar35;
      auVar38._8_4_ = iVar21;
      auVar38._12_4_ = iVar21;
      auVar26._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (ulong)auVar7._12_4_);
      auVar25._8_8_ = auVar26._8_8_;
      auVar25._4_4_ = iVar35 * auVar7._4_4_;
      auVar33._0_4_ = auVar32._0_4_ * auVar18._0_4_;
      auVar34._8_4_ = (undefined4)((auVar32._8_8_ & 0xffffffff) * (ulong)auVar18._8_4_);
      auVar34._4_4_ = auVar34._8_4_;
      auVar34._0_4_ = auVar33._0_4_;
      auVar20._0_4_ = auVar20._4_4_;
      auVar20._8_4_ = auVar20._12_4_;
      auVar34._12_4_ = (int)((auVar20._8_8_ & 0xffffffff) * (ulong)auVar32._12_4_);
      auVar33._8_8_ = auVar34._8_8_;
      auVar33._4_4_ = auVar20._4_4_ * auVar32._4_4_;
      auVar6._0_4_ = iVar10 + 8;
      auVar6._4_4_ = iVar35 + 8;
      auVar6._8_4_ = auVar5._8_4_ + 8;
      auVar6._12_4_ = iVar21 + 8;
      uVar1 = uVar1 - 1;
      auVar5 = auVar6;
      auVar7 = auVar25;
      auVar18 = auVar33;
    }
    auVar9._4_4_ = auVar20._4_4_;
    auVar9._0_4_ = auVar20._4_4_;
    auVar9._8_4_ = auVar20._12_4_;
    auVar9._12_4_ = auVar20._12_4_;
    uVar2 = (((auVar9._8_8_ & 0xffffffff) * (ulong)auVar7._12_4_ & 0xffffffff) *
             ((ulong)auVar20._4_4_ * (ulong)auVar7._4_4_ & 0xffffffff) & 0xffffffff) *
            (((auVar18._8_8_ & 0xffffffff) * (ulong)auVar7._8_4_ & 0xffffffff) *
             ((ulong)auVar18._0_4_ * (ulong)auVar7._0_4_ & 0xffffffff) & 0xffffffff) & 0xffffffff;
    if (uVar3 == param_1) {
      return uVar2;
    }
    uVar3 = uVar3 | 1;
  }
  do {
    uVar2 = (ulong)((int)uVar2 * uVar3);
    uVar3 = uVar3 + 1;
  } while (param_1 + 1 != uVar3);
  return uVar2;
}



/* Function: ternary_op @ 00101790 */

int ternary_op(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: test_control_flow_l1 @ 001017a0 */

void test_control_flow_l1(void)

{
  puts(&DAT_001037e5);
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



/* Function: loop_multi_exit @ 001019a0 */

int loop_multi_exit(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 - 1;
  iVar1 = -1;
  if (uVar2 < 0xc) {
    iVar1 = *(int *)(&DAT_00103108 + (long)(int)uVar2 * 4) +
            *(int *)(&DAT_001030d8 + (long)(int)uVar2 * 4);
  }
  return iVar1;
}



/* Function: infinite_loop @ 001019d0 */

int infinite_loop(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (*param_1 == 1) {
      return iVar1;
    }
    if (iVar1 == 1000) {
      *param_1 = 1;
      return 0x3e9;
    }
    if (*param_1 == 1) {
      return iVar1 + 1;
    }
    if (*param_1 == 1) break;
    if (*param_1 == 1) {
      return iVar1 + 3;
    }
    iVar1 = iVar1 + 4;
  }
  return iVar1 + 2;
}



/* Function: multi_return @ 00101a20 */

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



/* Function: conditional_return @ 00101a50 */

int conditional_return(int param_1)

{
  int iVar1;
  
  iVar1 = -param_1;
  if (0 < param_1) {
    iVar1 = param_1 * 2;
  }
  return iVar1;
}



/* Function: duffs_device @ 00101a60 */

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
      goto switchD_00101a86_caseD_1;
    case 2:
      goto switchD_00101a86_caseD_2;
    case 3:
      goto switchD_00101a86_caseD_3;
    case 4:
      goto switchD_00101a86_caseD_4;
    case 5:
      goto switchD_00101a86_caseD_5;
    case 6:
      goto switchD_00101a86_caseD_6;
    case 7:
      goto switchD_00101a86_caseD_7;
    }
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      uVar3 = uVar2;
switchD_00101a86_caseD_7:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101a86_caseD_6:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101a86_caseD_5:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101a86_caseD_4:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101a86_caseD_3:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101a86_caseD_2:
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
switchD_00101a86_caseD_1:
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



/* Function: loop_complex_cond @ 00101b00 */

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



/* Function: loop_modify_var @ 00101b40 */

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



/* Function: loop_external_state @ 00101b70 */

int loop_external_state(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 != 0) {
      return iVar2;
    }
    if (iVar2 == 100) {
      return 0x65;
    }
    if (*param_1 != 0) {
      return iVar2 + 1;
    }
    if (*param_1 != 0) break;
    if (*param_1 != 0) {
      return iVar2 + 3;
    }
    iVar2 = iVar2 + 4;
    iVar1 = *param_1;
  }
  return iVar2 + 2;
}



/* Function: recursion_factorial @ 00101bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong recursion_factorial(uint param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar17;
  undefined1 auVar16 [16];
  int iVar18;
  undefined4 uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  int iVar28;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar33;
  uint uVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar25 [16];
  undefined1 auVar31 [16];
  
  uVar4 = 1;
  if (1 < (int)param_1) {
    iVar5 = param_1 - 2;
    if (param_1 < 2) {
      iVar5 = 0;
    }
    uVar6 = iVar5 + 1;
    uVar4 = 1;
    if (7 < uVar6) {
      uVar8 = uVar6 & 0xfffffff8;
      iVar5 = param_1 - 1;
      uVar34 = param_1 - 2;
      iVar35 = param_1 - 3;
      uVar7 = (uVar8 - 8 >> 3) + 1;
      uVar3 = uVar7 & 3;
      auVar15 = _DAT_00103160;
      auVar25 = _DAT_00103160;
      uVar33 = param_1;
      if (0x17 < uVar8 - 8) {
        uVar7 = uVar7 & 0xfffffffc;
        do {
          auVar9._0_4_ = uVar33 - 4;
          auVar9._4_4_ = iVar5 + -4;
          auVar9._8_4_ = uVar34 - 4;
          auVar9._12_4_ = iVar35 + -4;
          iVar17 = auVar15._4_4_;
          auVar36._4_4_ = iVar5;
          auVar36._0_4_ = iVar5;
          auVar36._8_4_ = iVar35;
          auVar36._12_4_ = iVar35;
          iVar28 = auVar25._4_4_;
          auVar19._4_4_ = auVar9._4_4_;
          auVar19._0_4_ = auVar9._4_4_;
          auVar19._8_4_ = auVar9._12_4_;
          auVar19._12_4_ = auVar9._12_4_;
          auVar24._4_4_ = iVar5 + -8;
          auVar24._12_4_ = iVar35 + -8;
          auVar29._4_4_ = iVar5 + -0xc;
          auVar29._12_4_ = iVar35 + -0xc;
          auVar24._0_4_ = auVar24._4_4_;
          auVar24._8_4_ = auVar24._12_4_;
          auVar29._0_4_ = auVar29._4_4_;
          auVar29._8_4_ = auVar29._12_4_;
          auVar20._0_4_ = uVar33 - 0x10;
          auVar20._4_4_ = iVar5 + -0x10;
          auVar20._8_4_ = uVar34 - 0x10;
          auVar20._12_4_ = iVar35 + -0x10;
          auVar37._0_4_ = uVar33 - 0x14;
          auVar37._4_4_ = iVar5 + -0x14;
          auVar37._8_4_ = uVar34 - 0x14;
          auVar37._12_4_ = iVar35 - 0x14;
          auVar23._4_4_ = auVar20._4_4_;
          auVar23._0_4_ = auVar20._4_4_;
          auVar23._8_4_ = auVar20._12_4_;
          auVar23._12_4_ = auVar20._12_4_;
          auVar10._4_4_ = iVar5 + -0x18;
          auVar10._12_4_ = iVar35 + -0x18;
          iVar32 = iVar5 + -0x1c;
          iVar18 = auVar20._0_4_ * auVar15._0_4_ * uVar33 * (uVar33 - 8) * (uVar33 - 0x18);
          uVar22 = (undefined4)
                   (((auVar20._8_8_ & 0xffffffff) *
                     (((auVar15._8_8_ & 0xffffffff) * (ulong)uVar34 & 0xffffffff) *
                      (ulong)(uVar34 - 8) & 0xffffffff) & 0xffffffff) * (ulong)(uVar34 - 0x18));
          auVar16._4_4_ = uVar22;
          auVar16._0_4_ = iVar18;
          auVar10._0_4_ = auVar10._4_4_;
          auVar10._8_4_ = auVar10._12_4_;
          auVar16._8_4_ = uVar22;
          auVar16._12_4_ =
               (int)((auVar10._8_8_ & 0xffffffff) *
                    ((auVar23._8_8_ & 0xffffffff) *
                     ((auVar24._8_8_ & 0xffffffff) *
                      ((auVar36._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_ & 0xffffffff) &
                     0xffffffff) & 0xffffffff));
          auVar15._8_8_ = auVar16._8_8_;
          auVar15._4_4_ = auVar10._4_4_ * auVar20._4_4_ * auVar24._4_4_ * iVar5 * iVar17;
          auVar15._0_4_ = iVar18;
          iVar17 = auVar37._0_4_ * auVar9._0_4_ * auVar25._0_4_ * (uVar33 - 0xc) * (uVar33 - 0x1c);
          uVar22 = (undefined4)
                   (((auVar37._8_8_ & 0xffffffff) *
                     (((auVar9._8_8_ & 0xffffffff) * (ulong)auVar25._8_4_ & 0xffffffff) *
                      (ulong)(uVar34 - 0xc) & 0xffffffff) & 0xffffffff) * (ulong)(uVar34 - 0x1c));
          auVar26._4_4_ = uVar22;
          auVar26._0_4_ = iVar17;
          auVar11._4_4_ = iVar32;
          auVar11._0_4_ = iVar32;
          auVar11._8_4_ = iVar35 + -0x1c;
          auVar11._12_4_ = iVar35 + -0x1c;
          auVar26._8_4_ = uVar22;
          auVar26._12_4_ =
               (int)((auVar11._8_8_ & 0xffffffff) *
                    ((ulong)auVar37._12_4_ *
                     ((auVar29._8_8_ & 0xffffffff) *
                      ((auVar19._8_8_ & 0xffffffff) * (ulong)auVar25._12_4_ & 0xffffffff) &
                     0xffffffff) & 0xffffffff));
          auVar25._8_8_ = auVar26._8_8_;
          auVar25._4_4_ = iVar32 * auVar37._4_4_ * auVar29._4_4_ * auVar9._4_4_ * iVar28;
          auVar25._0_4_ = iVar17;
          uVar33 = uVar33 - 0x20;
          iVar5 = iVar5 + -0x20;
          uVar34 = uVar34 - 0x20;
          iVar35 = iVar35 + -0x20;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
      while( true ) {
        auVar27._4_4_ = auVar25._4_4_;
        auVar27._12_4_ = auVar25._12_4_;
        if (uVar3 == 0) break;
        auVar12._0_4_ = uVar33 - 4;
        auVar12._4_4_ = iVar5 + -4;
        auVar12._8_4_ = uVar34 - 4;
        auVar12._12_4_ = iVar35 - 4;
        auVar2._4_4_ = iVar5;
        auVar2._0_4_ = uVar33;
        auVar2._8_4_ = uVar34;
        auVar2._12_4_ = iVar35;
        auVar30._0_4_ = uVar33 * auVar15._0_4_;
        auVar31._8_4_ = (undefined4)((auVar2._8_8_ & 0xffffffff) * (ulong)auVar15._8_4_);
        auVar31._4_4_ = auVar31._8_4_;
        auVar31._0_4_ = auVar30._0_4_;
        auVar38._4_4_ = iVar5;
        auVar38._0_4_ = iVar5;
        auVar38._8_4_ = iVar35;
        auVar38._12_4_ = iVar35;
        auVar31._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_);
        auVar30._8_8_ = auVar31._8_8_;
        auVar30._4_4_ = iVar5 * auVar15._4_4_;
        auVar13._0_4_ = auVar12._0_4_ * auVar25._0_4_;
        auVar14._8_4_ = (undefined4)((auVar12._8_8_ & 0xffffffff) * (ulong)auVar25._8_4_);
        auVar14._4_4_ = auVar14._8_4_;
        auVar14._0_4_ = auVar13._0_4_;
        auVar27._0_4_ = auVar27._4_4_;
        auVar27._8_4_ = auVar27._12_4_;
        auVar14._12_4_ = (int)((auVar27._8_8_ & 0xffffffff) * (ulong)auVar12._12_4_);
        auVar13._8_8_ = auVar14._8_8_;
        auVar13._4_4_ = auVar27._4_4_ * auVar12._4_4_;
        iVar5 = iVar5 + -8;
        uVar34 = uVar34 - 8;
        iVar35 = iVar35 + -8;
        uVar3 = uVar3 - 1;
        auVar15 = auVar30;
        auVar25 = auVar13;
        uVar33 = uVar33 - 8;
      }
      auVar21._4_4_ = auVar27._4_4_;
      auVar21._0_4_ = auVar27._4_4_;
      auVar21._8_4_ = auVar27._12_4_;
      auVar21._12_4_ = auVar27._12_4_;
      uVar4 = (((auVar21._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_ & 0xffffffff) *
               ((ulong)auVar27._4_4_ * (ulong)auVar15._4_4_ & 0xffffffff) & 0xffffffff) *
              (((auVar25._8_8_ & 0xffffffff) * (ulong)auVar15._8_4_ & 0xffffffff) *
               ((ulong)auVar25._0_4_ * (ulong)auVar15._0_4_ & 0xffffffff) & 0xffffffff) & 0xffffffff
      ;
      if (uVar6 == uVar8) {
        return uVar4;
      }
      param_1 = param_1 - uVar8;
    }
    do {
      uVar4 = (ulong)((int)uVar4 * param_1);
      bVar1 = 2 < param_1;
      param_1 = param_1 - 1;
    } while (bVar1);
  }
  return uVar4;
}



/* Function: tail_recursion @ 00101e20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong tail_recursion(uint param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar19;
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  uint uVar20;
  undefined1 auVar17 [16];
  int iVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint uVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  uint uVar28;
  int iVar29;
  uint uVar30;
  int iVar31;
  int iVar34;
  undefined4 uVar35;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  
  uVar3 = (ulong)param_2;
  if (1 < (int)param_1) {
    iVar4 = param_1 - 2;
    if (param_1 < 2) {
      iVar4 = 0;
    }
    uVar5 = iVar4 + 1;
    if (7 < uVar5) {
      uVar7 = uVar5 & 0xfffffff8;
      uVar8 = 1;
      uVar27 = 1;
      uVar13 = 1;
      iVar4 = param_1 - 1;
      iVar29 = param_1 - 2;
      uVar30 = param_1 - 3;
      uVar6 = (uVar7 - 8 >> 3) + 1;
      uVar2 = uVar6 & 3;
      auVar15 = _DAT_00103160;
      uVar28 = param_1;
      if (0x17 < uVar7 - 8) {
        uVar6 = uVar6 & 0xfffffffc;
        do {
          auVar9._0_4_ = uVar28 - 4;
          auVar9._4_4_ = iVar4 + -4;
          auVar9._8_4_ = iVar29 + -4;
          auVar9._12_4_ = uVar30 - 4;
          auVar21._4_4_ = uVar8;
          auVar21._0_4_ = uVar8;
          auVar21._8_4_ = uVar13;
          auVar21._12_4_ = uVar13;
          iVar19 = auVar15._4_4_;
          auVar25._4_4_ = auVar9._4_4_;
          auVar25._0_4_ = auVar9._4_4_;
          auVar25._8_4_ = auVar9._12_4_;
          auVar25._12_4_ = auVar9._12_4_;
          auVar14._4_4_ = iVar4 + -8;
          auVar14._12_4_ = uVar30 - 8;
          iVar34 = iVar4 + -0xc;
          auVar14._0_4_ = auVar14._4_4_;
          auVar14._8_4_ = auVar14._12_4_;
          auVar22._4_4_ = iVar34;
          auVar22._0_4_ = iVar34;
          auVar22._8_4_ = uVar30 - 0xc;
          auVar22._12_4_ = uVar30 - 0xc;
          auVar26._0_4_ = uVar28 - 0x10;
          auVar26._4_4_ = iVar4 + -0x10;
          auVar26._8_4_ = iVar29 + -0x10;
          auVar26._12_4_ = uVar30 - 0x10;
          auVar32._0_4_ = uVar28 - 0x14;
          auVar32._4_4_ = iVar4 + -0x14;
          auVar32._8_4_ = iVar29 + -0x14;
          auVar32._12_4_ = uVar30 - 0x14;
          auVar10._4_4_ = iVar4 + -0x18;
          auVar10._12_4_ = uVar30 - 0x18;
          iVar24 = iVar4 + -0x1c;
          param_2 = auVar26._0_4_ * param_2 * uVar28 * (uVar28 - 8) * (uVar28 - 0x18);
          uVar27 = (uint)(((auVar26._8_8_ & 0xffffffff) *
                           ((ulong)(uVar27 * iVar29) * (ulong)(iVar29 - 8) & 0xffffffff) &
                          0xffffffff) * (ulong)(iVar29 - 0x18));
          auVar10._0_4_ = auVar10._4_4_;
          auVar10._8_4_ = auVar10._12_4_;
          uVar8 = auVar10._4_4_ * auVar26._4_4_ * auVar14._4_4_ * uVar8 * iVar4;
          uVar13 = (uint)((auVar10._8_8_ & 0xffffffff) *
                         ((ulong)auVar26._12_4_ *
                          ((auVar14._8_8_ & 0xffffffff) *
                           ((auVar21._8_8_ & 0xffffffff) * (ulong)uVar30 & 0xffffffff) & 0xffffffff)
                         & 0xffffffff));
          iVar31 = auVar32._0_4_ * auVar9._0_4_ * auVar15._0_4_ * (uVar28 - 0xc) * (uVar28 - 0x1c);
          uVar35 = (undefined4)
                   (((auVar32._8_8_ & 0xffffffff) *
                     (((auVar9._8_8_ & 0xffffffff) * (ulong)auVar15._8_4_ & 0xffffffff) *
                      (ulong)(iVar29 - 0xc) & 0xffffffff) & 0xffffffff) * (ulong)(iVar29 - 0x1c));
          auVar16._4_4_ = uVar35;
          auVar16._0_4_ = iVar31;
          auVar11._4_4_ = iVar24;
          auVar11._0_4_ = iVar24;
          auVar11._8_4_ = uVar30 - 0x1c;
          auVar11._12_4_ = uVar30 - 0x1c;
          auVar16._8_4_ = uVar35;
          auVar16._12_4_ =
               (int)((auVar11._8_8_ & 0xffffffff) *
                    ((ulong)auVar32._12_4_ *
                     ((auVar22._8_8_ & 0xffffffff) *
                      ((auVar25._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_ & 0xffffffff) &
                     0xffffffff) & 0xffffffff));
          auVar15._8_8_ = auVar16._8_8_;
          auVar15._4_4_ = iVar24 * auVar32._4_4_ * iVar34 * auVar9._4_4_ * iVar19;
          auVar15._0_4_ = iVar31;
          uVar28 = uVar28 - 0x20;
          iVar4 = iVar4 + -0x20;
          iVar29 = iVar29 + -0x20;
          uVar30 = uVar30 - 0x20;
          uVar6 = uVar6 - 4;
        } while (uVar6 != 0);
      }
      while( true ) {
        uVar6 = auVar15._4_4_;
        uVar20 = auVar15._12_4_;
        if (uVar2 == 0) break;
        auVar12._4_4_ = iVar4 + -4;
        auVar12._12_4_ = uVar30 - 4;
        param_2 = param_2 * uVar28;
        uVar27 = uVar27 * iVar29;
        auVar33._4_4_ = iVar4;
        auVar33._0_4_ = iVar4;
        auVar33._8_4_ = uVar30;
        auVar33._12_4_ = uVar30;
        uVar8 = iVar4 * uVar8;
        uVar13 = (uint)((auVar33._8_8_ & 0xffffffff) * (ulong)uVar13);
        auVar17._0_4_ = auVar15._0_4_ * (uVar28 - 4);
        auVar18._8_4_ = (undefined4)((auVar15._8_8_ & 0xffffffff) * (ulong)(iVar29 - 4));
        auVar18._4_4_ = auVar18._8_4_;
        auVar18._0_4_ = auVar17._0_4_;
        auVar12._0_4_ = auVar12._4_4_;
        auVar12._8_4_ = auVar12._12_4_;
        auVar18._12_4_ = (int)((auVar12._8_8_ & 0xffffffff) * (ulong)uVar20);
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._4_4_ = auVar12._4_4_ * uVar6;
        iVar4 = iVar4 + -8;
        iVar29 = iVar29 + -8;
        uVar30 = uVar30 - 8;
        uVar2 = uVar2 - 1;
        auVar15 = auVar17;
        uVar28 = uVar28 - 8;
      }
      auVar23._4_4_ = uVar6;
      auVar23._0_4_ = uVar6;
      auVar23._8_4_ = uVar20;
      auVar23._12_4_ = uVar20;
      uVar3 = (((auVar23._8_8_ & 0xffffffff) * (ulong)uVar13 & 0xffffffff) *
               ((ulong)uVar6 * (ulong)uVar8 & 0xffffffff) & 0xffffffff) *
              (((auVar15._8_8_ & 0xffffffff) * (ulong)uVar27 & 0xffffffff) *
               ((ulong)auVar15._0_4_ * (ulong)param_2 & 0xffffffff) & 0xffffffff) & 0xffffffff;
      if (uVar5 == uVar7) {
        return uVar3;
      }
      param_1 = param_1 - uVar7;
    }
    do {
      uVar3 = (ulong)((int)uVar3 * param_1);
      bVar1 = 2 < param_1;
      param_1 = param_1 - 1;
    } while (bVar1);
  }
  return uVar3;
}



/* Function: indirect_recursion_a @ 00102080 */

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



/* Function: call_func_ptr @ 001020e0 */

void call_func_ptr(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001020e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: call_func_ptr_array @ 001020f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong call_func_ptr_array(undefined4 param_1,uint param_2)

{
  bool bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar17;
  undefined1 auVar16 [16];
  int iVar18;
  undefined4 uVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  int iVar28;
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int iVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar33;
  uint uVar34;
  int iVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar25 [16];
  undefined1 auVar31 [16];
  
  switch(param_1) {
  case 0:
    return (ulong)(param_2 * 2);
  case 1:
    return (ulong)(param_2 * 3);
  case 2:
    break;
  default:
    return 0xffffffff;
  }
  uVar4 = 1;
  if (1 < (int)param_2) {
    iVar5 = param_2 - 2;
    if (param_2 < 2) {
      iVar5 = 0;
    }
    uVar6 = iVar5 + 1;
    uVar4 = 1;
    if (7 < uVar6) {
      uVar8 = uVar6 & 0xfffffff8;
      iVar5 = param_2 - 1;
      uVar34 = param_2 - 2;
      iVar35 = param_2 - 3;
      uVar7 = (uVar8 - 8 >> 3) + 1;
      uVar3 = uVar7 & 3;
      auVar15 = _DAT_00103160;
      auVar25 = _DAT_00103160;
      uVar33 = param_2;
      if (0x17 < uVar8 - 8) {
        uVar7 = uVar7 & 0xfffffffc;
        do {
          auVar9._0_4_ = uVar33 - 4;
          auVar9._4_4_ = iVar5 + -4;
          auVar9._8_4_ = uVar34 - 4;
          auVar9._12_4_ = iVar35 + -4;
          iVar17 = auVar15._4_4_;
          auVar36._4_4_ = iVar5;
          auVar36._0_4_ = iVar5;
          auVar36._8_4_ = iVar35;
          auVar36._12_4_ = iVar35;
          iVar28 = auVar25._4_4_;
          auVar19._4_4_ = auVar9._4_4_;
          auVar19._0_4_ = auVar9._4_4_;
          auVar19._8_4_ = auVar9._12_4_;
          auVar19._12_4_ = auVar9._12_4_;
          auVar24._4_4_ = iVar5 + -8;
          auVar24._12_4_ = iVar35 + -8;
          auVar29._4_4_ = iVar5 + -0xc;
          auVar29._12_4_ = iVar35 + -0xc;
          auVar24._0_4_ = auVar24._4_4_;
          auVar24._8_4_ = auVar24._12_4_;
          auVar29._0_4_ = auVar29._4_4_;
          auVar29._8_4_ = auVar29._12_4_;
          auVar20._0_4_ = uVar33 - 0x10;
          auVar20._4_4_ = iVar5 + -0x10;
          auVar20._8_4_ = uVar34 - 0x10;
          auVar20._12_4_ = iVar35 + -0x10;
          auVar37._0_4_ = uVar33 - 0x14;
          auVar37._4_4_ = iVar5 + -0x14;
          auVar37._8_4_ = uVar34 - 0x14;
          auVar37._12_4_ = iVar35 - 0x14;
          auVar23._4_4_ = auVar20._4_4_;
          auVar23._0_4_ = auVar20._4_4_;
          auVar23._8_4_ = auVar20._12_4_;
          auVar23._12_4_ = auVar20._12_4_;
          auVar10._4_4_ = iVar5 + -0x18;
          auVar10._12_4_ = iVar35 + -0x18;
          iVar32 = iVar5 + -0x1c;
          iVar18 = auVar20._0_4_ * auVar15._0_4_ * uVar33 * (uVar33 - 8) * (uVar33 - 0x18);
          uVar22 = (undefined4)
                   (((auVar20._8_8_ & 0xffffffff) *
                     (((auVar15._8_8_ & 0xffffffff) * (ulong)uVar34 & 0xffffffff) *
                      (ulong)(uVar34 - 8) & 0xffffffff) & 0xffffffff) * (ulong)(uVar34 - 0x18));
          auVar16._4_4_ = uVar22;
          auVar16._0_4_ = iVar18;
          auVar10._0_4_ = auVar10._4_4_;
          auVar10._8_4_ = auVar10._12_4_;
          auVar16._8_4_ = uVar22;
          auVar16._12_4_ =
               (int)((auVar10._8_8_ & 0xffffffff) *
                    ((auVar23._8_8_ & 0xffffffff) *
                     ((auVar24._8_8_ & 0xffffffff) *
                      ((auVar36._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_ & 0xffffffff) &
                     0xffffffff) & 0xffffffff));
          auVar15._8_8_ = auVar16._8_8_;
          auVar15._4_4_ = auVar10._4_4_ * auVar20._4_4_ * auVar24._4_4_ * iVar5 * iVar17;
          auVar15._0_4_ = iVar18;
          iVar17 = auVar37._0_4_ * auVar9._0_4_ * auVar25._0_4_ * (uVar33 - 0xc) * (uVar33 - 0x1c);
          uVar22 = (undefined4)
                   (((auVar37._8_8_ & 0xffffffff) *
                     (((auVar9._8_8_ & 0xffffffff) * (ulong)auVar25._8_4_ & 0xffffffff) *
                      (ulong)(uVar34 - 0xc) & 0xffffffff) & 0xffffffff) * (ulong)(uVar34 - 0x1c));
          auVar26._4_4_ = uVar22;
          auVar26._0_4_ = iVar17;
          auVar11._4_4_ = iVar32;
          auVar11._0_4_ = iVar32;
          auVar11._8_4_ = iVar35 + -0x1c;
          auVar11._12_4_ = iVar35 + -0x1c;
          auVar26._8_4_ = uVar22;
          auVar26._12_4_ =
               (int)((auVar11._8_8_ & 0xffffffff) *
                    ((ulong)auVar37._12_4_ *
                     ((auVar29._8_8_ & 0xffffffff) *
                      ((auVar19._8_8_ & 0xffffffff) * (ulong)auVar25._12_4_ & 0xffffffff) &
                     0xffffffff) & 0xffffffff));
          auVar25._8_8_ = auVar26._8_8_;
          auVar25._4_4_ = iVar32 * auVar37._4_4_ * auVar29._4_4_ * auVar9._4_4_ * iVar28;
          auVar25._0_4_ = iVar17;
          uVar33 = uVar33 - 0x20;
          iVar5 = iVar5 + -0x20;
          uVar34 = uVar34 - 0x20;
          iVar35 = iVar35 + -0x20;
          uVar7 = uVar7 - 4;
        } while (uVar7 != 0);
      }
      while( true ) {
        auVar27._4_4_ = auVar25._4_4_;
        auVar27._12_4_ = auVar25._12_4_;
        if (uVar3 == 0) break;
        auVar12._0_4_ = uVar33 - 4;
        auVar12._4_4_ = iVar5 + -4;
        auVar12._8_4_ = uVar34 - 4;
        auVar12._12_4_ = iVar35 - 4;
        auVar2._4_4_ = iVar5;
        auVar2._0_4_ = uVar33;
        auVar2._8_4_ = uVar34;
        auVar2._12_4_ = iVar35;
        auVar30._0_4_ = uVar33 * auVar15._0_4_;
        auVar31._8_4_ = (undefined4)((auVar2._8_8_ & 0xffffffff) * (ulong)auVar15._8_4_);
        auVar31._4_4_ = auVar31._8_4_;
        auVar31._0_4_ = auVar30._0_4_;
        auVar38._4_4_ = iVar5;
        auVar38._0_4_ = iVar5;
        auVar38._8_4_ = iVar35;
        auVar38._12_4_ = iVar35;
        auVar31._12_4_ = (int)((auVar38._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_);
        auVar30._8_8_ = auVar31._8_8_;
        auVar30._4_4_ = iVar5 * auVar15._4_4_;
        auVar13._0_4_ = auVar12._0_4_ * auVar25._0_4_;
        auVar14._8_4_ = (undefined4)((auVar12._8_8_ & 0xffffffff) * (ulong)auVar25._8_4_);
        auVar14._4_4_ = auVar14._8_4_;
        auVar14._0_4_ = auVar13._0_4_;
        auVar27._0_4_ = auVar27._4_4_;
        auVar27._8_4_ = auVar27._12_4_;
        auVar14._12_4_ = (int)((auVar27._8_8_ & 0xffffffff) * (ulong)auVar12._12_4_);
        auVar13._8_8_ = auVar14._8_8_;
        auVar13._4_4_ = auVar27._4_4_ * auVar12._4_4_;
        iVar5 = iVar5 + -8;
        uVar34 = uVar34 - 8;
        iVar35 = iVar35 + -8;
        uVar3 = uVar3 - 1;
        auVar15 = auVar30;
        auVar25 = auVar13;
        uVar33 = uVar33 - 8;
      }
      auVar21._4_4_ = auVar27._4_4_;
      auVar21._0_4_ = auVar27._4_4_;
      auVar21._8_4_ = auVar27._12_4_;
      auVar21._12_4_ = auVar27._12_4_;
      uVar4 = (((auVar21._8_8_ & 0xffffffff) * (ulong)auVar15._12_4_ & 0xffffffff) *
               ((ulong)auVar27._4_4_ * (ulong)auVar15._4_4_ & 0xffffffff) & 0xffffffff) *
              (((auVar25._8_8_ & 0xffffffff) * (ulong)auVar15._8_4_ & 0xffffffff) *
               ((ulong)auVar25._0_4_ * (ulong)auVar15._0_4_ & 0xffffffff) & 0xffffffff) & 0xffffffff
      ;
      if (uVar6 == uVar8) {
        return uVar4;
      }
      param_2 = param_2 - uVar8;
    }
    do {
      uVar4 = (ulong)((int)uVar4 * param_2);
      bVar1 = 2 < param_2;
      param_2 = param_2 - 1;
    } while (bVar1);
  }
  return uVar4;
}



/* Function: double_value @ 00102110 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: triple_value @ 00102120 */

int triple_value(int param_1)

{
  return param_1 * 3;
}



/* Function: call_virtual_func @ 00102130 */

int call_virtual_func(undefined8 param_1,int param_2)

{
  return param_2 * 2;
}



/* Function: process_with_callback @ 00102140 */

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



/* Function: test_control_flow_l2 @ 00102190 */

/* WARNING: Removing unreachable block (ram,0x00102332) */
/* WARNING: Removing unreachable block (ram,0x00102324) */
/* WARNING: Removing unreachable block (ram,0x0010221a) */
/* WARNING: Removing unreachable block (ram,0x00102215) */
/* WARNING: Removing unreachable block (ram,0x00102210) */
/* WARNING: Removing unreachable block (ram,0x00102337) */
/* WARNING: Removing unreachable block (ram,0x0010232d) */

void test_control_flow_l2(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puts(&DAT_00103809);
  printf("CF-L2-01 (loop_multi_exit): %d\n",0xc);
  for (iVar2 = 0; iVar2 != 1000; iVar2 = iVar2 + 4) {
  }
  printf("CF-L2-02 (infinite_loop): %d\n",0x3e9);
  uVar4 = 0xffffffff;
  printf("CF-L2-03 (multi_return): %d\n",0xffffffff);
  printf("CF-L2-03 (multi_return): %d\n",0xfffffffe);
  printf("CF-L2-03 (multi_return): %d\n",4);
  uVar3 = 10;
  printf("CF-L2-04 (conditional_return): %d\n",10);
  printf("CF-L2-04 (conditional_return): %d\n",5);
  printf("CF-L2-05 (duffs_device): %d\n",8);
  iVar2 = 0xb;
  do {
    uVar1 = uVar3 - 8;
    uVar3 = uVar3 + 2;
    if (iVar2 - 2U <= uVar1) break;
    uVar4 = uVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (uVar4 < 9);
  printf("CF-L2-06 (loop_complex_cond): %d\n",(ulong)uVar3);
  printf("CF-L2-07 (loop_modify_var): %d\n",0x1e);
  for (iVar2 = 0; iVar2 != 100; iVar2 = iVar2 + 4) {
  }
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



/* Function: non_local_jump @ 001023e0 */

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



/* Function: cpp_exception @ 00102430 */

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



/* Function: large_jump_table @ 00102450 */

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



/* Function: op_add @ 00102470 */

int op_add(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: op_sub @ 00102480 */

int op_sub(int param_1,int param_2)

{
  return param_1 - param_2;
}



/* Function: op_mul @ 00102490 */

int op_mul(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: op_div @ 001024a0 */

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



/* Function: op_mod @ 001024b0 */

ulong op_mod(int param_1,int param_2)

{
  if (param_2 != 0) {
    return (long)param_1 % (long)param_2 & 0xffffffff;
  }
  return 0;
}



/* Function: op_and @ 001024c0 */

uint op_and(uint param_1,uint param_2)

{
  return param_1 & param_2;
}



/* Function: op_or @ 001024d0 */

uint op_or(uint param_1,uint param_2)

{
  return param_1 | param_2;
}



/* Function: op_xor @ 001024e0 */

uint op_xor(uint param_1,uint param_2)

{
  return param_1 ^ param_2;
}



/* Function: op_shl @ 001024f0 */

int op_shl(int param_1,byte param_2)

{
  return param_1 << (param_2 & 0x1f);
}



/* Function: op_shr @ 00102500 */

int op_shr(int param_1,byte param_2)

{
  return param_1 >> (param_2 & 0x1f);
}



/* Function: conditional_func_ptr @ 00102510 */

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
                    /* WARNING: Could not recover jumptable at 0x00102534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: state_machine @ 00102540 */

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



/* Function: fsm_func_table @ 00102590 */

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



/* Function: state_idle @ 001025b0 */

bool state_idle(int param_1)

{
  return param_1 == 1;
}



/* Function: state_processing @ 001025c0 */

char state_processing(int param_1)

{
  char cVar1;
  
  cVar1 = (param_1 == 99) * '\x02' + '\x01';
  if (param_1 == 2) {
    cVar1 = '\x02';
  }
  return cVar1;
}



/* Function: state_done @ 001025e0 */

undefined8 state_done(void)

{
  return 2;
}



/* Function: state_error @ 001025f0 */

char state_error(int param_1)

{
  return (param_1 != 0) * '\x03';
}



/* Function: computed_goto @ 00102600 */

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



/* Function: obfuscated_cf @ 00102630 */

int obfuscated_cf(int param_1)

{
  return param_1 * 2;
}



/* Function: opaque_predicate @ 00102640 */

int opaque_predicate(int param_1)

{
  return param_1 * 2;
}



/* Function: overlapped_code @ 00102650 */

int overlapped_code(uint param_1)

{
  if ((param_1 & 1) == 0) {
    return (int)param_1 / 2;
  }
  return param_1 * 3 + 1;
}



/* Function: test_control_flow_l3 @ 00102670 */

void test_control_flow_l3(void)

{
  uint uVar1;
  
  puts(&DAT_0010382d);
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



/* Function: main @ 00102780 */

undefined8 main(void)

{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}



/* Function: _fini @ 00102794 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 72 */
