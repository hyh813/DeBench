/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_clang_O2_no_g
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



/* Function: _start @ 001010b0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010e0 */

/* WARNING: Removing unreachable block (ram,0x001010f3) */
/* WARNING: Removing unreachable block (ram,0x001010ff) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101110 */

/* WARNING: Removing unreachable block (ram,0x00101134) */
/* WARNING: Removing unreachable block (ram,0x00101140) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101150 */

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



/* Function: param_fake_branch @ 001011a0 */

undefined4 param_fake_branch(undefined4 param_1)

{
  return param_1;
}



/* Function: call_fake_branch @ 001011b0 */

undefined8 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 001011c0 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 + 1;
  iVar4 = iVar5;
  iVar1 = param_1;
  iVar3 = -1;
  while (iVar2 = iVar4, iVar2 != 0) {
    iVar4 = iVar1 % iVar2;
    iVar1 = iVar2;
    iVar3 = iVar2;
  }
  iVar1 = param_1 * 3 + 0x14;
  if (iVar3 == 1 && iVar5 * iVar5 == (param_1 * 2 | 1U) + param_1 * param_1) {
    iVar1 = param_1 * 2 + 10;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 00101220 */

undefined8 call_opaque_predicate(void)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 6;
  iVar1 = 5;
  do {
    iVar3 = iVar4;
    iVar4 = iVar1 % iVar3;
    iVar1 = iVar3;
  } while (iVar4 != 0);
  uVar2 = 0x23;
  if (iVar3 == 1) {
    uVar2 = 0x14;
  }
  return uVar2;
}



/* Function: param_instruction_substitution @ 00101250 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101270 */

undefined8 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00101280 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
  byte bVar1;
  byte *pbVar2;
  
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  bVar1 = *param_2;
  pbVar2 = param_2;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ param_4;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return param_2;
}



/* Function: param_string_encryption @ 001012d0 */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [31];
  undefined1 local_9;
  
  pbVar4 = local_28;
  strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
  local_9 = 0;
  bVar1 = local_28[0];
  if (local_28[0] == 0) {
    iVar3 = 0;
  }
  else {
    do {
      *pbVar4 = bVar1 ^ 0x5a;
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    iVar3 = (int)(char)local_28[0];
  }
  sVar2 = strlen((char *)local_28);
  return (int)sVar2 + iVar3;
}



/* Function: call_string_encryption @ 00101330 */

int call_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [31];
  undefined1 local_9;
  
  pbVar4 = local_28;
  strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
  local_9 = 0;
  bVar1 = local_28[0];
  if (local_28[0] == 0) {
    iVar3 = 0;
  }
  else {
    do {
      *pbVar4 = bVar1 ^ 0x5a;
      bVar1 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    iVar3 = (int)(char)local_28[0];
  }
  sVar2 = strlen((char *)local_28);
  return (int)sVar2 + iVar3;
}



/* Function: param_tail_call_optimized @ 00101390 */

int param_tail_call_optimized(int param_1,int param_2)

{
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = param_1 - 1;
    param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((ulong)(param_1 - 2) * (ulong)uVar1 >> 1);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 001013b0 */

undefined8 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 001013c0 */

int param_non_tail_call(int param_1)

{
  uint uVar1;
  
  if (0 < param_1) {
    uVar1 = param_1 - 1;
    return (uVar1 * uVar1 + param_1) - (int)((ulong)(param_1 - 2) * (ulong)uVar1 >> 1);
  }
  return 0;
}



/* Function: call_non_tail_call @ 001013e0 */

undefined8 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 001013f0 */

/* WARNING: Removing unreachable block (ram,0x001016bb) */

int param_vectorized_loop(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar18 = (ulong)param_4;
  if (param_4 < 8) {
    uVar15 = 0;
  }
  else {
    uVar19 = param_3 + uVar18 * 4;
    uVar15 = 0;
    if ((param_1 + uVar18 * 4 <= param_3 || uVar19 <= param_1) &&
       (param_2 + uVar18 * 4 <= param_3 || uVar19 <= param_2)) {
      uVar15 = (ulong)(param_4 & 0xfffffff8);
      uVar19 = (uVar15 - 8 >> 3) + 1;
      if (uVar15 - 8 == 0) {
        lVar16 = 0;
LAB_00101561:
        piVar7 = (int *)(param_1 + lVar16 * 4);
        iVar14 = piVar7[1];
        iVar21 = piVar7[2];
        iVar22 = piVar7[3];
        piVar1 = (int *)(param_1 + 0x10 + lVar16 * 4);
        iVar23 = *piVar1;
        iVar24 = piVar1[1];
        iVar25 = piVar1[2];
        iVar26 = piVar1[3];
        piVar1 = (int *)(param_2 + lVar16 * 4);
        iVar27 = piVar1[1];
        iVar8 = piVar1[2];
        iVar9 = piVar1[3];
        piVar2 = (int *)(param_2 + 0x10 + lVar16 * 4);
        iVar10 = *piVar2;
        iVar11 = piVar2[1];
        iVar12 = piVar2[2];
        iVar13 = piVar2[3];
        piVar2 = (int *)(param_3 + lVar16 * 4);
        *piVar2 = *piVar1 + *piVar7;
        piVar2[1] = iVar27 + iVar14;
        piVar2[2] = iVar8 + iVar21;
        piVar2[3] = iVar9 + iVar22;
        piVar7 = (int *)(param_3 + 0x10 + lVar16 * 4);
        *piVar7 = iVar10 + iVar23;
        piVar7[1] = iVar11 + iVar24;
        piVar7[2] = iVar12 + iVar25;
        piVar7[3] = iVar13 + iVar26;
      }
      else {
        uVar20 = uVar19 & 0x3ffffffffffffffe;
        lVar16 = 0;
        do {
          piVar7 = (int *)(param_1 + lVar16 * 4);
          iVar14 = piVar7[1];
          iVar21 = piVar7[2];
          iVar22 = piVar7[3];
          piVar1 = (int *)(param_1 + 0x10 + lVar16 * 4);
          iVar23 = *piVar1;
          iVar24 = piVar1[1];
          iVar25 = piVar1[2];
          iVar26 = piVar1[3];
          piVar1 = (int *)(param_2 + lVar16 * 4);
          iVar27 = piVar1[1];
          iVar8 = piVar1[2];
          iVar9 = piVar1[3];
          piVar2 = (int *)(param_2 + 0x10 + lVar16 * 4);
          iVar10 = *piVar2;
          iVar11 = piVar2[1];
          iVar12 = piVar2[2];
          iVar13 = piVar2[3];
          piVar2 = (int *)(param_3 + lVar16 * 4);
          *piVar2 = *piVar1 + *piVar7;
          piVar2[1] = iVar27 + iVar14;
          piVar2[2] = iVar8 + iVar21;
          piVar2[3] = iVar9 + iVar22;
          piVar7 = (int *)(param_3 + 0x10 + lVar16 * 4);
          *piVar7 = iVar10 + iVar23;
          piVar7[1] = iVar11 + iVar24;
          piVar7[2] = iVar12 + iVar25;
          piVar7[3] = iVar13 + iVar26;
          piVar7 = (int *)(param_1 + 0x20 + lVar16 * 4);
          iVar14 = piVar7[1];
          iVar21 = piVar7[2];
          iVar22 = piVar7[3];
          piVar1 = (int *)(param_1 + 0x30 + lVar16 * 4);
          iVar23 = *piVar1;
          iVar24 = piVar1[1];
          iVar25 = piVar1[2];
          iVar26 = piVar1[3];
          piVar1 = (int *)(param_2 + 0x20 + lVar16 * 4);
          iVar27 = piVar1[1];
          iVar8 = piVar1[2];
          iVar9 = piVar1[3];
          piVar2 = (int *)(param_2 + 0x30 + lVar16 * 4);
          iVar10 = *piVar2;
          iVar11 = piVar2[1];
          iVar12 = piVar2[2];
          iVar13 = piVar2[3];
          piVar2 = (int *)(param_3 + 0x20 + lVar16 * 4);
          *piVar2 = *piVar1 + *piVar7;
          piVar2[1] = iVar27 + iVar14;
          piVar2[2] = iVar8 + iVar21;
          piVar2[3] = iVar9 + iVar22;
          piVar7 = (int *)(param_3 + 0x30 + lVar16 * 4);
          *piVar7 = iVar10 + iVar23;
          piVar7[1] = iVar11 + iVar24;
          piVar7[2] = iVar12 + iVar25;
          piVar7[3] = iVar13 + iVar26;
          lVar16 = lVar16 + 0x10;
          uVar20 = uVar20 - 2;
        } while (uVar20 != 0);
        if ((uVar19 & 1) != 0) goto LAB_00101561;
      }
      if (uVar15 == uVar18) goto LAB_00101599;
    }
  }
  uVar19 = ~uVar15;
  uVar20 = uVar18 & 3;
  if ((param_4 & 3) != 0) {
    do {
      *(int *)(param_3 + uVar15 * 4) =
           *(int *)(param_2 + uVar15 * 4) + *(int *)(param_1 + uVar15 * 4);
      uVar15 = uVar15 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (2 < uVar19 + uVar18) {
    do {
      *(int *)(param_3 + uVar15 * 4) =
           *(int *)(param_2 + uVar15 * 4) + *(int *)(param_1 + uVar15 * 4);
      *(int *)(param_3 + 4 + uVar15 * 4) =
           *(int *)(param_2 + 4 + uVar15 * 4) + *(int *)(param_1 + 4 + uVar15 * 4);
      *(int *)(param_3 + 8 + uVar15 * 4) =
           *(int *)(param_2 + 8 + uVar15 * 4) + *(int *)(param_1 + 8 + uVar15 * 4);
      *(int *)(param_3 + 0xc + uVar15 * 4) =
           *(int *)(param_2 + 0xc + uVar15 * 4) + *(int *)(param_1 + 0xc + uVar15 * 4);
      uVar15 = uVar15 + 4;
    } while (uVar18 != uVar15);
  }
LAB_00101599:
  if ((int)param_4 < 1) {
    return 0;
  }
  if (param_4 < 8) {
    uVar15 = 0;
    iVar14 = 0;
  }
  else {
    uVar15 = (ulong)(param_4 & 0xfffffff8);
    uVar20 = (uVar15 - 8 >> 3) + 1;
    uVar19 = (ulong)((uint)uVar20 & 3);
    if (uVar15 - 8 < 0x18) {
      iVar14 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      lVar16 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
    }
    else {
      uVar20 = uVar20 & 0xfffffffffffffffc;
      iVar14 = 0;
      iVar21 = 0;
      iVar22 = 0;
      iVar23 = 0;
      lVar16 = 0;
      iVar24 = 0;
      iVar25 = 0;
      iVar26 = 0;
      iVar27 = 0;
      do {
        piVar7 = (int *)(param_3 + lVar16 * 4);
        piVar1 = (int *)(param_3 + 0x10 + lVar16 * 4);
        piVar2 = (int *)(param_3 + 0x20 + lVar16 * 4);
        piVar3 = (int *)(param_3 + 0x30 + lVar16 * 4);
        piVar4 = (int *)(param_3 + 0x40 + lVar16 * 4);
        piVar5 = (int *)(param_3 + 0x50 + lVar16 * 4);
        piVar6 = (int *)(param_3 + 0x60 + lVar16 * 4);
        iVar14 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar14;
        iVar21 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar21;
        iVar22 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar22;
        iVar23 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar23;
        piVar7 = (int *)(param_3 + 0x70 + lVar16 * 4);
        iVar24 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar24;
        iVar25 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar25;
        iVar26 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar26;
        iVar27 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar27;
        lVar16 = lVar16 + 0x20;
        uVar20 = uVar20 - 4;
      } while (uVar20 != 0);
    }
    if (uVar19 != 0) {
      lVar16 = param_3 + lVar16 * 4;
      lVar17 = 0;
      do {
        piVar7 = (int *)(lVar16 + lVar17);
        iVar14 = iVar14 + *piVar7;
        iVar21 = iVar21 + piVar7[1];
        iVar22 = iVar22 + piVar7[2];
        iVar23 = iVar23 + piVar7[3];
        piVar7 = (int *)(lVar16 + 0x10 + lVar17);
        iVar24 = iVar24 + *piVar7;
        iVar25 = iVar25 + piVar7[1];
        iVar26 = iVar26 + piVar7[2];
        iVar27 = iVar27 + piVar7[3];
        lVar17 = lVar17 + 0x20;
      } while (uVar19 << 5 != lVar17);
    }
    iVar14 = iVar23 + iVar27 + iVar21 + iVar25 + iVar22 + iVar26 + iVar14 + iVar24;
    if (uVar15 == uVar18) {
      return iVar14;
    }
  }
  do {
    iVar14 = iVar14 + *(int *)(param_3 + uVar15 * 4);
    uVar15 = uVar15 + 1;
  } while (uVar18 != uVar15);
  return iVar14;
}



/* Function: call_vectorized_loop @ 001016c0 */

undefined8 call_vectorized_loop(void)

{
  return 0x48;
}



/* Function: param_link_time_optimization @ 001016d0 */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 001016e0 */

undefined8 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 001016f0 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00101710 */

ulong param_division_by_zero(int param_1)

{
  int iVar1;
  ulong uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 10 / (long)param_1 & 0xffffffff;
  }
  return uVar2;
}



/* Function: call_division_by_zero @ 00101750 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00101780 */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001017a0 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  return uVar2;
}



/* Function: call_null_pointer_deref @ 001017d0 */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  undefined1 local_14 [4];
  
  iVar1 = param_null_pointer_deref(local_14);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00101810 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00101820 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  return param_1;
}



/* Function: call_buffer_overflow @ 00101830 */

undefined8 call_buffer_overflow(void)

{
  return 0x1e;
}



/* Function: param_integer_overflow @ 00101840 */

int param_integer_overflow(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2 + param_1;
  if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar2 < 0)) {
    return -1;
  }
  iVar1 = -2;
  if (iVar2 < 1) {
    iVar1 = iVar2;
  }
  if (-1 < (int)(param_2 & param_1)) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00101870 */

undefined8 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00101880 */

int param_undefined_behavior(int param_1)

{
  return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00101890 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 001018a0 */

undefined8 param_implementation_defined(void)

{
  return 0x2f;
}



/* Function: call_implementation_defined @ 001018b0 */

undefined8 call_implementation_defined(void)

{
  return 0x2f;
}



/* Function: test_obf_opt_edge @ 001018c0 */

void test_obf_opt_edge(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte local_38 [31];
  undefined1 local_19;
  
  pbVar7 = local_38;
  puts(&DAT_001021d5);
  printf(&DAT_00102004,10);
  uVar5 = 6;
  iVar6 = 5;
  do {
    iVar3 = (int)uVar5;
    lVar1 = (long)iVar6;
    uVar5 = lVar1 % (long)iVar3 & 0xffffffff;
    iVar6 = iVar3;
  } while ((int)(lVar1 % (long)iVar3) != 0);
  uVar8 = 0x23;
  if (iVar3 == 1) {
    uVar8 = 0x14;
  }
  iVar6 = 0;
  printf(&DAT_00102020,uVar8);
  printf(&DAT_0010203c,0xe1);
  strncpy((char *)local_38,(char *)&param_string_encryption_encrypted,0x20);
  local_19 = 0;
  bVar2 = local_38[0];
  if (local_38[0] != 0) {
    do {
      *pbVar7 = bVar2 ^ 0x5a;
      bVar2 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
    iVar6 = (int)(char)local_38[0];
  }
  sVar4 = strlen((char *)local_38);
  printf(&DAT_00102059,(ulong)(uint)(iVar6 + (int)sVar4));
  printf(&DAT_00102075,0x7a314);
  printf(&DAT_0010209f,0x13ba);
  printf(&DAT_001020c4,0x48);
  printf(&DAT_001020ea);
  param_division_by_zero(5);
  param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_0010210a);
  local_38[0] = 0x2a;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  iVar6 = param_null_pointer_deref(local_38);
  iVar3 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_00102126,(ulong)(uint)(iVar3 + iVar6));
  printf(&DAT_00102143,0x1e);
  printf(&DAT_00102160,2000000000);
  printf(&DAT_00102191,10);
  printf(&DAT_001021ae,0x2f);
  return;
}



/* Function: main @ 00101aa0 */

undefined8 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 00101aac */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
