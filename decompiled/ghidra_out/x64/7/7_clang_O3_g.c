/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_clang_O3_g
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

int param_fake_branch(int x)

{
                    /* Unresolved local var: int result@[DW_OP_reg5(RDI)]
                       Unresolved local var: char * str@[???] */
  return x;
}



/* Function: call_fake_branch @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 001011c0 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p2@[???] */
  iVar5 = x + 1;
  iVar3 = iVar5;
  iVar4 = x;
  iVar2 = -1;
  while (iVar1 = iVar3, iVar1 != 0) {
                    /* Unresolved local var: int temp@[DW_OP_reg2(RCX)] */
    iVar3 = iVar4 % iVar1;
    iVar4 = iVar1;
    iVar2 = iVar1;
  }
  iVar4 = x * 3 + 0x14;
  if (iVar2 == 1 && iVar5 * iVar5 == (x * 2 | 1U) + x * x) {
    iVar4 = x * 2 + 10;
  }
  return iVar4;
}



/* Function: call_opaque_predicate @ 00101220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 6;
  iVar1 = 5;
  do {
    iVar2 = iVar3;
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[???] */
    iVar3 = iVar1 % iVar2;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  iVar3 = 0x23;
  if (iVar2 == 1) {
    iVar3 = 0x14;
  }
  return iVar3;
}



/* Function: param_instruction_substitution @ 00101250 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg5(RDI): 0; DW_OP_constu:
                       4294967295; DW_OP_and; DW_OP_lit6; DW_OP_mul; DW_OP_stack_value]
                       Unresolved local var: uint ux@[DW_OP_reg5(RDI)]
                       Unresolved local var: int div2@[???]
                       Unresolved local var: int mod16@[???]
                       Unresolved local var: int mul15@[???] */
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00101280 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte bVar1;
  byte *pbVar2;
  
                    /* Unresolved local var: char * p@[???] */
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  bVar1 = *buffer;
  pbVar2 = (byte *)buffer;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ key;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return buffer;
}



/* Function: param_string_encryption @ 001012d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [31];
  undefined1 local_9;
  
                    /* Unresolved local var: char[32] decrypted@[???]
                       Unresolved local var: char * p@[???] */
  pbVar4 = local_28;
  strncpy((char *)local_28,param_string_encryption::encrypted,0x20);
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  byte *pbVar4;
  byte local_28 [31];
  undefined1 local_9;
  
                    /* Unresolved local var: char[32] decrypted@[???]
                       Unresolved local var: char * p@[???] */
  pbVar4 = local_28;
  strncpy((char *)local_28,param_string_encryption::encrypted,0x20);
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

int param_tail_call_optimized(int n,int acc)

{
  uint uVar1;
  
  if (0 < n) {
    uVar1 = n - 1;
    acc = (acc + n + uVar1 * uVar1) - (int)((ulong)(n - 2) * (ulong)uVar1 >> 1);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 001013b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 001013c0 */

int param_non_tail_call(int n)

{
  uint uVar1;
  
  if (0 < n) {
    uVar1 = n - 1;
    return (uVar1 * uVar1 + n) - (int)((ulong)(n - 2) * (ulong)uVar1 >> 1);
  }
  return 0;
}



/* Function: call_non_tail_call @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 001013f0 */

/* WARNING: Removing unreachable block (ram,0x001016bb) */

int param_vectorized_loop(int *a,int *b,int *c,int n)

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
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (n < 1) {
    return 0;
  }
  uVar18 = (ulong)(uint)n;
  if ((uint)n < 8) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0;
    if ((a + uVar18 <= c || c + uVar18 <= a) && (b + uVar18 <= c || c + uVar18 <= b)) {
      uVar15 = (ulong)(n & 0xfffffff8);
      uVar19 = (uVar15 - 8 >> 3) + 1;
      if (uVar15 - 8 == 0) {
        lVar16 = 0;
LAB_00101561:
        piVar7 = a + lVar16;
        iVar14 = piVar7[1];
        iVar21 = piVar7[2];
        iVar22 = piVar7[3];
        piVar1 = a + lVar16 + 4;
        iVar23 = *piVar1;
        iVar24 = piVar1[1];
        iVar25 = piVar1[2];
        iVar26 = piVar1[3];
        piVar1 = b + lVar16;
        iVar27 = piVar1[1];
        iVar8 = piVar1[2];
        iVar9 = piVar1[3];
        piVar2 = b + lVar16 + 4;
        iVar10 = *piVar2;
        iVar11 = piVar2[1];
        iVar12 = piVar2[2];
        iVar13 = piVar2[3];
        piVar2 = c + lVar16;
        *piVar2 = *piVar1 + *piVar7;
        piVar2[1] = iVar27 + iVar14;
        piVar2[2] = iVar8 + iVar21;
        piVar2[3] = iVar9 + iVar22;
        piVar7 = c + lVar16 + 4;
        *piVar7 = iVar10 + iVar23;
        piVar7[1] = iVar11 + iVar24;
        piVar7[2] = iVar12 + iVar25;
        piVar7[3] = iVar13 + iVar26;
      }
      else {
        uVar20 = uVar19 & 0x3ffffffffffffffe;
        lVar16 = 0;
        do {
          piVar7 = a + lVar16;
          iVar14 = piVar7[1];
          iVar21 = piVar7[2];
          iVar22 = piVar7[3];
          piVar1 = a + lVar16 + 4;
          iVar23 = *piVar1;
          iVar24 = piVar1[1];
          iVar25 = piVar1[2];
          iVar26 = piVar1[3];
          piVar1 = b + lVar16;
          iVar27 = piVar1[1];
          iVar8 = piVar1[2];
          iVar9 = piVar1[3];
          piVar2 = b + lVar16 + 4;
          iVar10 = *piVar2;
          iVar11 = piVar2[1];
          iVar12 = piVar2[2];
          iVar13 = piVar2[3];
          piVar2 = c + lVar16;
          *piVar2 = *piVar1 + *piVar7;
          piVar2[1] = iVar27 + iVar14;
          piVar2[2] = iVar8 + iVar21;
          piVar2[3] = iVar9 + iVar22;
          piVar7 = c + lVar16 + 4;
          *piVar7 = iVar10 + iVar23;
          piVar7[1] = iVar11 + iVar24;
          piVar7[2] = iVar12 + iVar25;
          piVar7[3] = iVar13 + iVar26;
          piVar7 = a + lVar16 + 8;
          iVar14 = piVar7[1];
          iVar21 = piVar7[2];
          iVar22 = piVar7[3];
          piVar1 = a + lVar16 + 0xc;
          iVar23 = *piVar1;
          iVar24 = piVar1[1];
          iVar25 = piVar1[2];
          iVar26 = piVar1[3];
          piVar1 = b + lVar16 + 8;
          iVar27 = piVar1[1];
          iVar8 = piVar1[2];
          iVar9 = piVar1[3];
          piVar2 = b + lVar16 + 0xc;
          iVar10 = *piVar2;
          iVar11 = piVar2[1];
          iVar12 = piVar2[2];
          iVar13 = piVar2[3];
          piVar2 = c + lVar16 + 8;
          *piVar2 = *piVar1 + *piVar7;
          piVar2[1] = iVar27 + iVar14;
          piVar2[2] = iVar8 + iVar21;
          piVar2[3] = iVar9 + iVar22;
          piVar7 = c + lVar16 + 0xc;
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
  if ((n & 3U) != 0) {
    do {
      c[uVar15] = b[uVar15] + a[uVar15];
      uVar15 = uVar15 + 1;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
  if (2 < uVar19 + uVar18) {
    do {
      c[uVar15] = b[uVar15] + a[uVar15];
      c[uVar15 + 1] = b[uVar15 + 1] + a[uVar15 + 1];
      c[uVar15 + 2] = b[uVar15 + 2] + a[uVar15 + 2];
      c[uVar15 + 3] = b[uVar15 + 3] + a[uVar15 + 3];
      uVar15 = uVar15 + 4;
    } while (uVar18 != uVar15);
  }
LAB_00101599:
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    return 0;
  }
  if ((uint)n < 8) {
    uVar19 = 0;
    iVar14 = 0;
  }
  else {
    uVar19 = (ulong)(n & 0xfffffff8);
    uVar20 = (uVar19 - 8 >> 3) + 1;
    uVar15 = (ulong)((uint)uVar20 & 3);
    if (uVar19 - 8 < 0x18) {
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
        piVar7 = c + lVar16;
        piVar1 = c + lVar16 + 4;
        piVar2 = c + lVar16 + 8;
        piVar3 = c + lVar16 + 0xc;
        piVar4 = c + lVar16 + 0x10;
        piVar5 = c + lVar16 + 0x14;
        piVar6 = c + lVar16 + 0x18;
        iVar14 = *piVar6 + *piVar4 + *piVar2 + *piVar7 + iVar14;
        iVar21 = piVar6[1] + piVar4[1] + piVar2[1] + piVar7[1] + iVar21;
        iVar22 = piVar6[2] + piVar4[2] + piVar2[2] + piVar7[2] + iVar22;
        iVar23 = piVar6[3] + piVar4[3] + piVar2[3] + piVar7[3] + iVar23;
        piVar7 = c + lVar16 + 0x1c;
        iVar24 = *piVar7 + *piVar5 + *piVar3 + *piVar1 + iVar24;
        iVar25 = piVar7[1] + piVar5[1] + piVar3[1] + piVar1[1] + iVar25;
        iVar26 = piVar7[2] + piVar5[2] + piVar3[2] + piVar1[2] + iVar26;
        iVar27 = piVar7[3] + piVar5[3] + piVar3[3] + piVar1[3] + iVar27;
        lVar16 = lVar16 + 0x20;
        uVar20 = uVar20 - 4;
      } while (uVar20 != 0);
    }
    if (uVar15 != 0) {
      lVar17 = 0;
      do {
        piVar7 = (int *)((long)c + lVar17 + lVar16 * 4);
        iVar14 = iVar14 + *piVar7;
        iVar21 = iVar21 + piVar7[1];
        iVar22 = iVar22 + piVar7[2];
        iVar23 = iVar23 + piVar7[3];
        piVar7 = (int *)((long)c + lVar17 + lVar16 * 4 + 0x10);
        iVar24 = iVar24 + *piVar7;
        iVar25 = iVar25 + piVar7[1];
        iVar26 = iVar26 + piVar7[2];
        iVar27 = iVar27 + piVar7[3];
        lVar17 = lVar17 + 0x20;
      } while (uVar15 << 5 != lVar17);
    }
    iVar14 = iVar23 + iVar27 + iVar21 + iVar25 + iVar22 + iVar26 + iVar14 + iVar24;
    if (uVar19 == uVar18) {
      return iVar14;
    }
  }
  do {
    iVar14 = iVar14 + c[uVar19];
    uVar19 = uVar19 + 1;
  } while (uVar18 != uVar19);
  return iVar14;
}



/* Function: call_vectorized_loop @ 001016c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
                    /* Unresolved local var: int[8] c@[???]
                       Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[???] */
  return 0x48;
}



/* Function: param_link_time_optimization @ 001016d0 */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 001016e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 001016f0 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00101710 */

int param_division_by_zero(int x)

{
  int iVar1;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 != 0) {
    return -1;
  }
                    /* Unresolved local var: int y@[???] */
  return (int)(10 / (long)x);
}



/* Function: call_division_by_zero @ 00101750 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00101780 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001017a0 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 != 0) {
    return -1;
  }
                    /* Unresolved local var: int val@[???] */
  return *p;
}



/* Function: call_null_pointer_deref @ 001017e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int local_14;
  
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00101820 */

int param_buffer_overflow_stack(int x)

{
                    /* Unresolved local var: int canary@[???]
                       Unresolved local var: char[8] buffer@[???] */
  return x;
}



/* Function: param_buffer_overflow_heap @ 00101830 */

int param_buffer_overflow_heap(int x)

{
                    /* Unresolved local var: char * heap_buffer@[???] */
  return x;
}



/* Function: call_buffer_overflow @ 00101840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x1e;
}



/* Function: param_integer_overflow @ 00101850 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int signed_sum@[???]
                       Unresolved local var: uint unsigned_sum@[???]
                       Unresolved local var: uint ua@[???]
                       Unresolved local var: uint ub@[???] */
  iVar2 = b + a;
  if (((0 < a) && (0 < b)) && (iVar2 < 0)) {
    return -1;
  }
  iVar1 = -2;
  if (iVar2 < 1) {
    iVar1 = iVar2;
  }
  if (-1 < (b & a)) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00101880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00101890 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i * 2;
}



/* Function: call_undefined_behavior @ 001018a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
                    /* Unresolved local var: int result@[???] */
  return 10;
}



/* Function: param_implementation_defined @ 001018b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x2f;
}



/* Function: call_implementation_defined @ 001018c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  return 0x2f;
}



/* Function: test_obf_opt_edge @ 001018d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[???] */
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
                    /* Unresolved local var: char[32] decrypted@[???]
                       Unresolved local var: char * p@[???] */
  strncpy((char *)local_38,param_string_encryption::encrypted,0x20);
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
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  param_division_by_zero(5);
  param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_0010210a);
  local_38[0] = 0x2a;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar6 = param_null_pointer_deref((int *)local_38);
  iVar3 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_00102126,(ulong)(uint)(iVar3 + iVar6));
  printf(&DAT_00102143,0x1e);
  printf(&DAT_00102160,2000000000);
  printf(&DAT_00102191,10);
  printf(&DAT_001021ae,0x2f);
  return;
}



/* Function: main @ 00101ab0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 00101abc */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
