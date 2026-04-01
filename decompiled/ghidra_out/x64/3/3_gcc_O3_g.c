/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_gcc_O3_g
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



/* Function: main @ 00101220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: _start @ 00101250 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101280 */

/* WARNING: Removing unreachable block (ram,0x00101293) */
/* WARNING: Removing unreachable block (ram,0x0010129f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001012b0 */

/* WARNING: Removing unreachable block (ram,0x001012d4) */
/* WARNING: Removing unreachable block (ram,0x001012e0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001012f0 */

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



/* Function: double_value @ 00101340 */

int double_value(int x)

{
  return x * 2;
}



/* Function: alloca_usage @ 00101350 */

int alloca_usage(int n)

{
                    /* Unresolved local var: int * arr@[???] */
  return 0xf;
}



/* Function: local_vars @ 00101360 */

int local_vars(int x)

{
  return x * 2 + 10;
}



/* Function: local_array @ 00101370 */

int local_array(int n)

{
                    /* Unresolved local var: int i@[???] */
  return n * 5;
}



/* Function: local_struct @ 001013a0 */

int local_struct(int x)

{
  return x * 3;
}



/* Function: address_of_local @ 001013b0 */

int address_of_local(int *out)

{
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 001013c0 */

int address_of_array(int *arr)

{
  return *arr * 2;
}



/* Function: large_stack_frame @ 001013d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  char *pcVar21;
  char *pcVar22;
  long in_FS_OFFSET;
  int iVar23;
  int iVar37;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  int iVar50;
  undefined2 uVar51;
  undefined2 uVar52;
  int iVar53;
  undefined2 uVar54;
  int iVar55;
  undefined1 auVar57 [16];
  char large_buf [2048];
  char local_18 [8];
  long local_10;
  undefined1 auVar24 [12];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar27 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [16];
  undefined1 auVar28 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar43 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  undefined1 auVar41 [16];
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  int iVar56;
  int iVar58;
  int iVar59;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar21 = large_buf;
  auVar25 = _DAT_00103720;
  do {
    pcVar22 = pcVar21 + 0x10;
    iVar56 = auVar25._0_4_;
    auVar57._0_4_ = iVar56 + 0x10;
    iVar37 = auVar25._4_4_;
    auVar57._4_4_ = iVar37 + 0x10;
    iVar58 = auVar25._8_4_;
    iVar59 = auVar25._12_4_;
    auVar57._8_4_ = iVar58 + 0x10;
    auVar57._12_4_ = iVar59 + 0x10;
                    /* Unresolved local var: int i@[???] */
    auVar41._0_12_ = auVar25._0_12_;
    auVar41._12_2_ = auVar25._6_2_;
    auVar41._14_2_ = (short)((uint)(iVar37 + 4) >> 0x10);
    auVar40._12_4_ = auVar41._12_4_;
    auVar40._0_10_ = auVar25._0_10_;
    uVar52 = (undefined2)(iVar37 + 4);
    auVar40._10_2_ = uVar52;
    auVar39._10_6_ = auVar40._10_6_;
    auVar39._0_8_ = auVar25._0_8_;
    auVar39._8_2_ = auVar25._4_2_;
    uVar51 = (undefined2)((uint)(iVar56 + 4) >> 0x10);
    auVar17._2_8_ = auVar39._8_8_;
    auVar17._0_2_ = uVar51;
    auVar17._10_6_ = 0;
    auVar49._0_2_ = auVar25._0_2_;
    auVar38._12_4_ = 0;
    auVar38._0_12_ = SUB1612(auVar17 << 0x30,4);
    auVar38 = auVar38 << 0x20;
    uVar54 = (undefined2)(iVar58 + 4);
    auVar45._0_12_ = auVar38._0_12_;
    auVar45._12_2_ = uVar51;
    auVar45._14_2_ = (short)((uint)(iVar58 + 4) >> 0x10);
    auVar44._12_4_ = auVar45._12_4_;
    auVar44._0_10_ = auVar38._0_10_;
    auVar44._10_2_ = auVar25._10_2_;
    auVar43._10_6_ = auVar44._10_6_;
    auVar43._0_8_ = auVar38._0_8_;
    auVar43._8_2_ = auVar25._2_2_;
    auVar18._2_8_ = auVar43._8_8_;
    auVar18._0_2_ = uVar54;
    auVar18._10_6_ = 0;
    auVar42._12_4_ = 0;
    auVar42._0_12_ = SUB1612(auVar18 << 0x30,4);
    auVar42 = auVar42 << 0x20;
    iVar50 = iVar56 + (int)DAT_00103760;
    iVar53 = iVar37 + DAT_00103760._4_4_;
    iVar55 = iVar58 + DAT_00103760._8_4_;
    iVar23 = iVar56 + (int)DAT_00103750;
    iVar37 = iVar37 + DAT_00103750._4_4_;
    auVar24._0_8_ = CONCAT44(iVar37,iVar23);
    auVar24._8_4_ = iVar58 + DAT_00103750._8_4_;
    auVar48._0_12_ = auVar42._0_12_;
    auVar48._12_2_ = uVar54;
    auVar48._14_2_ = (short)(iVar59 + 4);
    auVar47._12_4_ = auVar48._12_4_;
    auVar47._0_10_ = auVar42._0_10_;
    auVar47._10_2_ = uVar52;
    auVar46._10_6_ = auVar47._10_6_;
    auVar46._0_8_ = auVar42._0_8_;
    auVar46._8_2_ = (short)(iVar56 + 4);
    auVar49._8_8_ = auVar46._8_8_;
    auVar49._6_2_ = auVar25._12_2_;
    auVar49._4_2_ = auVar25._8_2_;
    auVar49._2_2_ = auVar25._4_2_;
    auVar28._12_2_ = (short)((uint)iVar37 >> 0x10);
    auVar28._0_12_ = auVar24;
    auVar28._14_2_ = (short)((uint)iVar53 >> 0x10);
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._0_10_ = auVar24._0_10_;
    uVar52 = (undefined2)iVar53;
    auVar27._10_2_ = uVar52;
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._8_2_ = (short)iVar37;
    auVar26._0_8_ = auVar24._0_8_;
    uVar51 = (undefined2)((uint)iVar50 >> 0x10);
    auVar19._2_8_ = auVar26._8_8_;
    auVar19._0_2_ = uVar51;
    auVar19._10_6_ = 0;
    auVar36._0_2_ = (undefined2)iVar23;
    auVar25._12_4_ = 0;
    auVar25._0_12_ = SUB1612(auVar19 << 0x30,4);
    auVar25 = auVar25 << 0x20;
    auVar49 = auVar49 & _DAT_00103770;
    uVar54 = (undefined2)iVar55;
    auVar32._0_12_ = auVar25._0_12_;
    auVar32._12_2_ = uVar51;
    auVar32._14_2_ = (short)((uint)iVar55 >> 0x10);
    auVar31._12_4_ = auVar32._12_4_;
    auVar31._0_10_ = auVar25._0_10_;
    auVar31._10_2_ = (short)((uint)auVar24._8_4_ >> 0x10);
    auVar30._10_6_ = auVar31._10_6_;
    auVar30._0_8_ = auVar25._0_8_;
    auVar30._8_2_ = (short)((uint)iVar23 >> 0x10);
    auVar20._2_8_ = auVar30._8_8_;
    auVar20._0_2_ = uVar54;
    auVar20._10_6_ = 0;
    auVar29._12_4_ = 0;
    auVar29._0_12_ = SUB1612(auVar20 << 0x30,4);
    auVar29 = auVar29 << 0x20;
    auVar35._0_12_ = auVar29._0_12_;
    auVar35._12_2_ = uVar54;
    auVar35._14_2_ = (short)(iVar59 + DAT_00103760._12_4_);
    auVar34._12_4_ = auVar35._12_4_;
    auVar34._0_10_ = auVar29._0_10_;
    auVar34._10_2_ = uVar52;
    auVar33._10_6_ = auVar34._10_6_;
    auVar33._0_8_ = auVar29._0_8_;
    auVar33._8_2_ = (short)iVar50;
    auVar36._8_8_ = auVar33._8_8_;
    auVar36._6_2_ = (short)(iVar59 + DAT_00103750._12_4_);
    auVar36._4_2_ = (short)auVar24._8_4_;
    auVar36._2_2_ = (short)iVar37;
    auVar36 = auVar36 & _DAT_00103770;
    sVar1 = auVar49._0_2_;
    sVar2 = auVar49._2_2_;
    sVar3 = auVar49._4_2_;
    sVar4 = auVar49._6_2_;
    sVar5 = auVar49._8_2_;
    sVar6 = auVar49._10_2_;
    sVar7 = auVar49._12_2_;
    sVar8 = auVar49._14_2_;
    sVar9 = auVar36._0_2_;
    sVar10 = auVar36._2_2_;
    sVar11 = auVar36._4_2_;
    sVar12 = auVar36._6_2_;
    sVar13 = auVar36._8_2_;
    sVar14 = auVar36._10_2_;
    sVar15 = auVar36._12_2_;
    sVar16 = auVar36._14_2_;
    *pcVar21 = (0 < sVar1) * (sVar1 < 0x100) * auVar49[0] - (0xff < sVar1);
    pcVar21[1] = (0 < sVar2) * (sVar2 < 0x100) * auVar49[2] - (0xff < sVar2);
    pcVar21[2] = (0 < sVar3) * (sVar3 < 0x100) * auVar49[4] - (0xff < sVar3);
    pcVar21[3] = (0 < sVar4) * (sVar4 < 0x100) * auVar49[6] - (0xff < sVar4);
    pcVar21[4] = (0 < sVar5) * (sVar5 < 0x100) * auVar49[8] - (0xff < sVar5);
    pcVar21[5] = (0 < sVar6) * (sVar6 < 0x100) * auVar49[10] - (0xff < sVar6);
    pcVar21[6] = (0 < sVar7) * (sVar7 < 0x100) * auVar49[0xc] - (0xff < sVar7);
    pcVar21[7] = (0 < sVar8) * (sVar8 < 0x100) * auVar49[0xe] - (0xff < sVar8);
    pcVar21[8] = (0 < sVar9) * (sVar9 < 0x100) * auVar36[0] - (0xff < sVar9);
    pcVar21[9] = (0 < sVar10) * (sVar10 < 0x100) * auVar36[2] - (0xff < sVar10);
    pcVar21[10] = (0 < sVar11) * (sVar11 < 0x100) * auVar36[4] - (0xff < sVar11);
    pcVar21[0xb] = (0 < sVar12) * (sVar12 < 0x100) * auVar36[6] - (0xff < sVar12);
    pcVar21[0xc] = (0 < sVar13) * (sVar13 < 0x100) * auVar36[8] - (0xff < sVar13);
    pcVar21[0xd] = (0 < sVar14) * (sVar14 < 0x100) * auVar36[10] - (0xff < sVar14);
    pcVar21[0xe] = (0 < sVar15) * (sVar15 < 0x100) * auVar36[0xc] - (0xff < sVar15);
    pcVar21[0xf] = (0 < sVar16) * (sVar16 < 0x100) * auVar36[0xe] - (0xff < sVar16);
    pcVar21 = pcVar22;
    auVar25 = auVar57;
  } while (local_18 != pcVar22);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)large_buf[0x400];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: vla_stack @ 001014d0 */

int vla_stack(int n)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar10;
  long in_FS_OFFSET;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar9;
  
  puVar10 = auStack_18;
  puVar8 = auStack_18;
  puVar9 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (999 < n - 1U) {
    iVar4 = -1;
    goto LAB_001015ce;
  }
  uVar7 = (long)n * 4 + 0xf;
  puVar2 = auStack_18;
  while (puVar9 != auStack_18 + -(uVar7 & 0xfffffffffffff000)) {
    puVar8 = puVar2 + -0x1000;
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar9 = puVar2 + -0x1000;
    puVar2 = puVar2 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar1 = -uVar7;
  puVar10 = puVar8 + lVar1;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
  }
                    /* Unresolved local var: int i@[???] */
  if (n - 1U < 3) {
    uVar3 = 0;
LAB_0010159c:
    iVar4 = uVar3 * 2;
    piVar5 = (int *)(puVar8 + (long)(int)uVar3 * 4 + lVar1);
    *piVar5 = iVar4;
    if (((int)(uVar3 + 1) < n) && (piVar5[1] = iVar4 + 2, (int)(uVar3 + 2) < n)) {
      piVar5[2] = iVar4 + 4;
    }
  }
  else {
    piVar5 = (int *)(puVar8 + lVar1);
    iVar4 = 0;
    iVar11 = 1;
    iVar12 = 2;
    iVar13 = 3;
    do {
      piVar6 = piVar5 + 4;
      *piVar5 = iVar4 << 1;
      piVar5[1] = iVar11 << 1;
      piVar5[2] = iVar12 << 1;
      piVar5[3] = iVar13 << 1;
      piVar5 = piVar6;
      iVar4 = iVar4 + 4;
      iVar11 = iVar11 + 4;
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 4;
    } while (piVar6 != (int *)(puVar8 + (ulong)((uint)n >> 2) * 0x10 + lVar1));
    uVar3 = n & 0xfffffffc;
    if ((n & 3U) != 0) goto LAB_0010159c;
  }
  iVar4 = *(int *)(puVar8 + (long)(n >> 1) * 4 + lVar1);
LAB_001015ce:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_001015fb;
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: alloca_usage @ 00101600 */

int alloca_usage(int n)

{
  long lVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *puVar10;
  int *piVar11;
  long in_FS_OFFSET;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar9;
  
  puVar10 = auStack_18;
  puVar8 = auStack_18;
  puVar9 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 1) {
    iVar4 = -1;
    goto LAB_0010170b;
  }
  uVar7 = (long)n * 4 + 0x17;
  puVar2 = auStack_18;
  while (puVar9 != auStack_18 + -(uVar7 & 0xfffffffffffff000)) {
    puVar8 = puVar2 + -0x1000;
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar9 = puVar2 + -0x1000;
    puVar2 = puVar2 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar1 = -uVar7;
  puVar10 = puVar8 + lVar1;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar8 + -8) = *(undefined8 *)(puVar8 + -8);
  }
  piVar11 = (int *)((ulong)(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0);
                    /* Unresolved local var: int i@[???] */
  if (n - 1U < 3) {
    uVar3 = 0;
LAB_001016d4:
    iVar4 = uVar3 * 3;
    piVar11[(int)uVar3] = iVar4;
    if (((int)(uVar3 + 1) < n) && (piVar11[(long)(int)uVar3 + 1] = iVar4 + 3, (int)(uVar3 + 2) < n))
    {
      piVar11[(long)(int)uVar3 + 2] = iVar4 + 6;
    }
  }
  else {
    piVar5 = piVar11;
    iVar4 = 0;
    iVar12 = 1;
    iVar13 = 2;
    iVar14 = 3;
    do {
      piVar6 = piVar5 + 4;
      *piVar5 = iVar4 * 3;
      piVar5[1] = iVar12 * 3;
      piVar5[2] = iVar13 * 3;
      piVar5[3] = iVar14 * 3;
      piVar5 = piVar6;
      iVar4 = iVar4 + 4;
      iVar12 = iVar12 + 4;
      iVar13 = iVar13 + 4;
      iVar14 = iVar14 + 4;
    } while (piVar6 != piVar11 + (ulong)((uint)n >> 2) * 4);
    uVar3 = n & 0xfffffffc;
    if ((n & 3U) != 0) goto LAB_001016d4;
  }
  iVar4 = piVar11[n >> 1];
LAB_0010170b:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar10 + -8) = &UNK_0010173b;
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: stack_alias @ 00101740 */

int stack_alias(int *p1,int *p2)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00101750 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  
  puts(&DAT_00103004);
  __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
  __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
  iVar1 = large_stack_frame();
  __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
  __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
  alloca_usage(1);
  __printf_chk();
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00101850 */

int heap_basic(int n)

{
  uint uVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  __ptr = malloc((long)n << 2);
  if (__ptr == (int *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if (n - 1U < 3) {
      uVar1 = 0;
    }
    else {
      piVar2 = __ptr;
      iVar4 = 0;
      iVar5 = 1;
      iVar6 = 2;
      iVar7 = 3;
      do {
        piVar3 = piVar2 + 4;
        *piVar2 = iVar4 << 1;
        piVar2[1] = iVar5 << 1;
        piVar2[2] = iVar6 << 1;
        piVar2[3] = iVar7 << 1;
        piVar2 = piVar3;
        iVar4 = iVar4 + 4;
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + 4;
        iVar7 = iVar7 + 4;
      } while (piVar3 != __ptr + (ulong)((uint)n >> 2) * 4);
      uVar1 = n & 0xfffffffc;
      if (((long)n & 3U) == 0) goto LAB_001018f9;
    }
    iVar4 = uVar1 * 2;
    __ptr[(int)uVar1] = iVar4;
    if (((int)(uVar1 + 1) < n) && (__ptr[(long)(int)uVar1 + 1] = iVar4 + 2, (int)(uVar1 + 2) < n)) {
      __ptr[(long)(int)uVar1 + 2] = iVar4 + 4;
    }
  }
LAB_001018f9:
  iVar4 = __ptr[n / 2];
  free(__ptr);
  return iVar4;
}



/* Function: heap_calloc @ 00101930 */

int heap_calloc(int n)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *__ptr;
  int *piVar6;
  size_t __nmemb;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  __nmemb = (size_t)n;
  __ptr = calloc(__nmemb,4);
  if (__ptr == (int *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar7 = 0;
  }
  else {
    if (n - 1U < 3) {
      uVar5 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      piVar6 = __ptr;
      do {
        iVar1 = *piVar6;
        piVar2 = piVar6 + 1;
        piVar3 = piVar6 + 2;
        piVar4 = piVar6 + 3;
        piVar6 = piVar6 + 4;
        iVar7 = iVar7 + iVar1;
        iVar8 = iVar8 + *piVar2;
        iVar9 = iVar9 + *piVar3;
        iVar10 = iVar10 + *piVar4;
      } while (piVar6 != __ptr + (__nmemb >> 2 & 0x3fffffff) * 4);
      uVar5 = n & 0xfffffffc;
      iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
      if ((__nmemb & 3) == 0) goto LAB_001019e1;
    }
    iVar7 = iVar7 + __ptr[(int)uVar5];
    if (((int)(uVar5 + 1) < n) &&
       (iVar7 = iVar7 + __ptr[(long)(int)uVar5 + 1], (int)(uVar5 + 2) < n)) {
      iVar7 = iVar7 + __ptr[(long)(int)uVar5 + 2];
    }
  }
LAB_001019e1:
  free(__ptr);
  return iVar7;
}



/* Function: heap_realloc @ 00101a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  undefined8 *__ptr;
  void *__ptr_00;
  int iVar1;
  
  __ptr = malloc(0x14);
  if (__ptr == (undefined8 *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    *(undefined4 *)(__ptr + 2) = 5;
    *__ptr = 0x200000001;
    __ptr[1] = 0x400000003;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      iVar1 = -2;
      free(__ptr);
    }
    else {
                    /* Unresolved local var: int i@[???] */
      *(undefined8 *)((long)__ptr_00 + 0x14) = 0x3c00000032;
      *(undefined8 *)((long)__ptr_00 + 0x1c) = 0x5000000046;
      iVar1 = 0x32;
      if (*(int *)((long)__ptr_00 + 8) != 3) {
        iVar1 = -3;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 00101aa0 */

int heap_array(int n)

{
  uint uVar1;
  int *__ptr;
  int *piVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = (ulong)n;
  __ptr = malloc(uVar4 << 2);
  if (__ptr == (int *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if (n - 1U < 3) {
      uVar1 = 0;
    }
    else {
      piVar2 = __ptr;
      iVar5 = 0;
      iVar6 = 1;
      iVar7 = 2;
      iVar8 = 3;
      do {
        piVar3 = piVar2 + 4;
        *piVar2 = iVar5 * 3;
        piVar2[1] = iVar6 * 3;
        piVar2[2] = iVar7 * 3;
        piVar2[3] = iVar8 * 3;
        piVar2 = piVar3;
        iVar5 = iVar5 + 4;
        iVar6 = iVar6 + 4;
        iVar7 = iVar7 + 4;
        iVar8 = iVar8 + 4;
      } while (piVar3 != __ptr + (uVar4 >> 2 & 0x3fffffff) * 4);
      uVar1 = n & 0xfffffffc;
      if ((uVar4 & 3) == 0) goto LAB_00101b59;
    }
    iVar5 = uVar1 * 3;
    __ptr[(int)uVar1] = iVar5;
    if (((int)(uVar1 + 1) < n) && (__ptr[(long)(int)uVar1 + 1] = iVar5 + 3, (int)(uVar1 + 2) < n)) {
      __ptr[(long)(int)uVar1 + 2] = iVar5 + 6;
    }
  }
LAB_00101b59:
  iVar5 = __ptr[(int)(((uint)(uVar4 >> 0x1f) & 1) + n) >> 1];
  free(__ptr);
  return iVar5;
}



/* Function: heap_struct @ 00101b90 */

int heap_struct(int x)

{
  void *__ptr;
  int iVar1;
  
  __ptr = malloc(8);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = x * 3;
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_nested @ 00101bd0 */

int heap_nested(Node **head)

{
  int iVar1;
  Node *__ptr;
  Node *pNVar2;
  
  __ptr = malloc(0x10);
  *head = __ptr;
  if (__ptr == (Node *)0x0) {
    iVar1 = -1;
  }
  else {
    __ptr->data = 10;
    pNVar2 = malloc(0x10);
    __ptr->next = pNVar2;
    if (pNVar2 == (Node *)0x0) {
      free(__ptr);
      iVar1 = -2;
    }
    else {
      pNVar2->data = 0x14;
      pNVar2->next = (Node *)0x0;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* Function: linked_list_heap @ 00101c40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *__ptr;
  int iVar4;
  
                    /* Unresolved local var: int i@[???] */
                    /* Unresolved local var: Node * new_node@[???] */
  iVar4 = 0;
  __ptr = (int *)0x0;
  piVar2 = malloc(0x10);
  piVar3 = (int *)0x0;
  while( true ) {
    piVar1 = piVar2;
    if (piVar1 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[???] */
        piVar3 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar3;
      }
      return -1;
    }
    *piVar1 = iVar4;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar2 = piVar1;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar3 + 2) = piVar1;
      piVar2 = __ptr;
    }
    __ptr = piVar2;
    if (iVar4 == 0x28) break;
    iVar4 = iVar4 + 10;
    piVar2 = malloc(0x10);
    piVar3 = piVar1;
  }
  iVar4 = 0;
  piVar3 = __ptr;
  do {
    iVar4 = iVar4 + *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
  } while (piVar3 != (int *)0x0);
  do {
                    /* Unresolved local var: Node * temp@[???] */
    piVar3 = *(int **)(__ptr + 2);
    free(__ptr);
    __ptr = piVar3;
  } while (piVar3 != (int *)0x0);
  return iVar4;
}



/* Function: create_tree_node @ 00101cf0 */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
  pTVar1 = malloc(0x18);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 00101d20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  int iVar1;
  void *__ptr;
  void *pvVar2;
  void *__ptr_00;
  
                    /* Unresolved local var: TreeNode * node@[???] */
  __ptr = malloc(0x18);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: TreeNode * node@[???] */
    pvVar2 = malloc(0x18);
                    /* Unresolved local var: TreeNode * node@[???] */
    if (pvVar2 == (void *)0x0) {
      pvVar2 = malloc(0x18);
      if (pvVar2 != (void *)0x0) {
        free(pvVar2);
      }
    }
    else {
      __ptr_00 = malloc(0x18);
      if (__ptr_00 != (void *)0x0) {
        free(pvVar2);
        free(__ptr_00);
        free(__ptr);
        return 0x3c;
      }
      free(pvVar2);
    }
    free(__ptr);
    iVar1 = -2;
  }
  return iVar1;
}



/* Function: memory_leak @ 00101dc0 */

int memory_leak(int n)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar5 = (ulong)n;
  piVar2 = malloc(uVar5 << 2);
  if (piVar2 == (int *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if (n - 1U < 3) {
      uVar1 = 0;
    }
    else {
      piVar3 = piVar2;
      iVar6 = 0;
      iVar7 = 1;
      iVar8 = 2;
      iVar9 = 3;
      do {
        piVar4 = piVar3 + 4;
        *piVar3 = iVar6;
        piVar3[1] = iVar7;
        piVar3[2] = iVar8;
        piVar3[3] = iVar9;
        piVar3 = piVar4;
        iVar6 = iVar6 + 4;
        iVar7 = iVar7 + 4;
        iVar8 = iVar8 + 4;
        iVar9 = iVar9 + 4;
      } while (piVar4 != piVar2 + (uVar5 >> 2 & 0x3fffffff) * 4);
      uVar1 = n & 0xfffffffc;
      if ((uVar5 & 3) == 0) goto LAB_00101e53;
    }
    piVar2[(int)uVar1] = uVar1;
    if ((int)(uVar1 + 1) < n) {
      piVar2[(long)(int)uVar1 + 1] = uVar1 + 1;
      if ((int)(uVar1 + 2) < n) {
        piVar2[(long)(int)uVar1 + 2] = uVar1 + 2;
      }
    }
  }
LAB_00101e53:
  return piVar2[(int)(((uint)(uVar5 >> 0x1f) & 1) + n) >> 1];
}



/* Function: dangling_pointer @ 00101e70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  
  __ptr = malloc(4);
  if (__ptr != (int *)0x0) {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return -1;
}



/* Function: double_free @ 00101eb0 */

int double_free(int *p)

{
  void *__ptr;
  
  if (p != (int *)0x0) {
    return *p;
  }
                    /* Unresolved local var: int * temp@[???] */
  __ptr = malloc(4);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return -2;
  }
  return -1;
}



/* Function: heap_overflow @ 00101ef0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int iVar1;
  void *__ptr;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    free(__ptr);
    iVar1 = 0;
  }
  return iVar1;
}



/* Function: test_heap_memory @ 00101f20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  int *piVar1;
  __pid_t __pid;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  int status;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001030e6);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  pvVar2 = malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    uVar10 = 0xffffffff;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    *(undefined8 *)((long)pvVar2 + 0x10) = 0xa00000008;
    *(undefined8 *)((long)pvVar2 + 0x18) = 0xe0000000c;
    *(undefined8 *)((long)pvVar2 + 0x20) = 0x1200000010;
    free(pvVar2);
    uVar10 = 10;
  }
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar10);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  piVar3 = calloc(5,4);
  if (piVar3 == (int *)0x0) {
    iVar8 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    iVar8 = piVar3[2] + *piVar3 + piVar3[3] + piVar3[1] + piVar3[4];
    free(piVar3);
  }
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar8);
  iVar8 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar8);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  pvVar2 = malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    uVar10 = 0xffffffff;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    *(undefined8 *)((long)pvVar2 + 0x10) = 0xf0000000c;
    *(undefined8 *)((long)pvVar2 + 0x18) = 0x1500000012;
    *(undefined8 *)((long)pvVar2 + 0x20) = 0x1b00000018;
    free(pvVar2);
    uVar10 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar10);
                    /* Unresolved local var: Point * p@[???]
                       Unresolved local var: int result@[???] */
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
    uVar10 = 0xffffffff;
  }
  else {
    free(pvVar2);
    uVar10 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar10);
  pvVar2 = malloc(0x10);
  if (pvVar2 == (void *)0x0) {
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    puVar4 = malloc(0x10);
    *(undefined4 **)((long)pvVar2 + 8) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      free(pvVar2);
      uVar10 = 0xfffffffe;
    }
    else {
      *puVar4 = 0x14;
      uVar10 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
    }
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar10);
    free(*(void **)((long)pvVar2 + 8));
    free(pvVar2);
  }
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * current@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: Node * temp@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
  iVar8 = 0;
  piVar3 = (int *)0x0;
  piVar5 = malloc(0x10);
  piVar7 = (int *)0x0;
  do {
    piVar1 = piVar5;
    if (piVar1 == (int *)0x0) {
      while (piVar3 != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[???] */
        piVar7 = *(int **)(piVar3 + 2);
        free(piVar3);
        piVar3 = piVar7;
      }
      iVar8 = -1;
LAB_00102160:
      __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar8);
      iVar8 = tree_heap_traversal();
      __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar8);
                    /* Unresolved local var: int * leak@[???] */
      puVar6 = malloc(0x14);
      if (puVar6 == (undefined8 *)0x0) {
        uVar10 = 0xffffffff;
      }
      else {
                    /* Unresolved local var: int i@[???] */
        *(undefined4 *)(puVar6 + 2) = 4;
        uVar10 = 2;
        *puVar6 = 0x100000000;
        puVar6[1] = 0x300000002;
      }
      __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar10);
      __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
      __pid = fork();
      if (__pid == 0) {
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
        puVar4 = malloc(4);
        if (puVar4 == (undefined4 *)0x0) {
          uVar9 = 0xffffffff;
        }
        else {
          __printf_chk(1,"value before free: %d\n",0x2a);
          free(puVar4);
          uVar9 = *puVar4;
        }
        __printf_chk(1,&DAT_00103198,uVar9);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (__pid < 1) {
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          perror(&DAT_001031a8);
          return;
        }
      }
      else {
        waitpid(__pid,&status,0);
        if ((status & 0x7fU) == 0) {
          __printf_chk(1,&DAT_001033c8,(uint)status >> 8 & 0xff);
        }
        else if ('\x01' < (char)((char)(status & 0x7fU) + '\x01')) {
          __printf_chk(1,&DAT_001033f0);
        }
        if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *piVar1 = iVar8;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar5 = piVar1;
    if (piVar3 != (int *)0x0) {
      *(int **)(piVar7 + 2) = piVar1;
      piVar5 = piVar3;
    }
    piVar3 = piVar5;
    if (iVar8 == 0x28) {
      iVar8 = 0;
      piVar7 = piVar3;
      do {
        iVar8 = iVar8 + *piVar7;
        piVar7 = *(int **)(piVar7 + 2);
      } while (piVar7 != (int *)0x0);
      do {
                    /* Unresolved local var: Node * temp@[???] */
        piVar7 = *(int **)(piVar3 + 2);
        free(piVar3);
        piVar3 = piVar7;
      } while (piVar7 != (int *)0x0);
      goto LAB_00102160;
    }
    iVar8 = iVar8 + 10;
    piVar5 = malloc(0x10);
    piVar7 = piVar1;
  } while( true );
}



/* Function: global_var_access @ 001023a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 001023c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 001023d0 */

int global_array_access(int idx)

{
  if ((uint)idx < 10) {
    return global_array[idx];
  }
  return -1;
}



/* Function: static_local @ 00102400 */

int static_local(int reset)

{
  int iVar1;
  
  iVar1 = 0;
  if (reset == 0) {
    iVar1 = counter_1 + 1;
  }
  counter_1 = iVar1;
  return iVar1;
}



/* Function: call_static_func @ 00102420 */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 00102430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00102440 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00102450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00102470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00102480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00102490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 001024a0 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 001024b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 001024c0 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 001024d0 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001024e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 001024f0 */

int global_heap_store(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 00102510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00102520 */

int tls_access(int val)

{
  return val * 2;
}



/* Function: init_order_test @ 00102530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 00102540 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  
  puts(&DAT_00103438);
  global_counter = global_counter + 1;
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n");
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  iVar1 = extern_function(5);
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",const_string[4] + 0x2a);
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: memop_memset @ 00102750 */

int memop_memset(void *buf,size_t size,int fill_value)

{
  byte *pbVar1;
  
  if ((buf != (void *)0x0) && (size != 0)) {
    pbVar1 = memset(buf,fill_value,size);
    return (int)*pbVar1;
  }
  return -1;
}



/* Function: memop_memcpy @ 00102790 */

int memop_memcpy(void *dst,void *src,size_t n)

{
  void *pvVar1;
  
  if ((src != (void *)0x0 && n != 0) && (dst != (void *)0x0)) {
    pvVar1 = memcpy(dst,src,n);
    return *(int *)((long)pvVar1 + ((n & 0xfffffffffffffffc) - 4));
  }
  return -1;
}



/* Function: memop_memmove @ 001027d0 */

int memop_memmove(void *buf,size_t n)

{
  if ((buf != (void *)0x0) && (1 < n)) {
    memmove((void *)((long)buf + 1),buf,n - 1);
    return (int)*(char *)((long)buf + 1);
  }
  return -1;
}



/* Function: memop_memcmp @ 00102810 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  if ((p2 != (void *)0x0 && n != 0) && (p1 != (void *)0x0)) {
                    /* Unresolved local var: int result@[???] */
    iVar1 = memcmp(p1,p2,n);
    iVar2 = -(uint)(iVar1 != 0);
    if (0 < iVar1) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 0;
}



/* Function: memop_bzero @ 00102860 */

int memop_bzero(void *buf,size_t n)

{
  byte *pbVar1;
  
  if (buf != (void *)0x0) {
    pbVar1 = memset(buf,0,n);
    return (int)*pbVar1;
  }
  return -1;
}



/* Function: memop_bcopy @ 00102890 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  byte *pbVar1;
  
  if ((dst != (void *)0x0 && n != 0) && (src != (void *)0x0)) {
    pbVar1 = memmove(dst,src,n);
    return (int)*pbVar1;
  }
  return -1;
}



/* Function: memop_unaligned_access @ 001028d0 */

int memop_unaligned_access(char *buf)

{
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 001028f0 */

int memop_memory_barrier(int *flag)

{
  if (flag != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00102910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int flag;
  int cmp_a [3];
  int cmp_b [3];
  char zero_buf [10];
  char move_buf [11];
  char buffer [256];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103688);
  __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
  __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  builtin_strncpy(move_buf,"HelloWorld",0xb);
  memmove(move_buf + 1,move_buf,9);
  __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
                    /* Unresolved local var: int result@[???] */
  cmp_a[2] = 3;
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_b[2] = 4;
  iVar3 = memcmp(cmp_a,cmp_b,0xc);
  iVar2 = -(uint)(iVar3 != 0);
  if (0 < iVar3) {
    iVar2 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
  __printf_chk(1,"MEMOP-L2-05: %d\n",0);
  __printf_chk(1,"MEMOP-L2-06: %d\n",1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  LOCK();
  UNLOCK();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,"MEMOP-L3-02: %d\n",10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: extern_function @ 00102ad0 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 00102ad8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 64 */
