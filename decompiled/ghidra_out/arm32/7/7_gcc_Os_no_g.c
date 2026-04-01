/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/7/7_gcc_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010508 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 000105dc */

undefined4 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 000105ec */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010630 */

/* WARNING: Removing unreachable block (ram,0x00010644) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010654 */

/* WARNING: Removing unreachable block (ram,0x00010664) */
/* WARNING: Removing unreachable block (ram,0x0001066c) */
/* WARNING: Removing unreachable block (ram,0x00010670) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010680 */

/* WARNING: Removing unreachable block (ram,0x0001069c) */
/* WARNING: Removing unreachable block (ram,0x000106a4) */
/* WARNING: Removing unreachable block (ram,0x000106a8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000106b8 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: div_zero_handler @ 000106e4 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106fc */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk();
}



/* Function: param_fake_branch @ 00010718 */

void param_fake_branch(void)

{
  return;
}



/* Function: call_fake_branch @ 0001071c */

undefined4 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00010724 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int extraout_r1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + 1;
  iVar2 = iVar3 * iVar3;
  iVar1 = param_1;
  while (iVar3 != 0) {
    __aeabi_idivmod(iVar1,iVar3);
    iVar1 = iVar3;
    iVar3 = extraout_r1;
  }
  if (iVar1 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar2) {
    iVar1 = param_1 * 2 + 10;
  }
  else {
    iVar1 = param_1 * 3 + 0x14;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 0001078c */

void call_opaque_predicate(void)

{
  param_opaque_predicate(5);
  return;
}



/* Function: param_instruction_substitution @ 00010794 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000107b4 */

undefined4 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 000107bc */

char * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)

{
  byte *pbVar1;
  
  strncpy(param_2,param_1,param_3);
  param_2[param_3 - 1] = '\0';
  pbVar1 = (byte *)(param_2 + -1);
  while( true ) {
    pbVar1 = pbVar1 + 1;
    if (*pbVar1 == 0) break;
    *pbVar1 = *pbVar1 ^ param_4;
  }
  return param_2;
}



/* Function: param_string_encryption @ 00010808 */

void param_string_encryption(void)

{
  size_t sVar1;
  byte local_2c [32];
  int local_c;
  
  local_c = 0;
  decrypt_string(&encrypted_0,local_2c,0x20,0x5a);
  sVar1 = strlen((char *)local_2c);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2c[0] + sVar1);
  }
  return;
}



/* Function: param_tail_call_optimized @ 00010874 */

int param_tail_call_optimized(int param_1,int param_2)

{
  for (; 0 < param_1; param_1 = param_1 + -1) {
    param_2 = param_2 + param_1;
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 00010890 */

undefined4 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 0001089c */

int param_non_tail_call(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 000108b8 */

void call_non_tail_call(void)

{
  param_non_tail_call(100);
  return;
}



/* Function: param_vectorized_loop @ 000108c0 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_4 < 1) {
    iVar1 = 0;
    for (iVar2 = iVar1; iVar2 < param_4; iVar2 = iVar2 + 1) {
      iVar1 = iVar1 + *(int *)(param_3 + iVar2 * 4);
    }
    return iVar1;
  }
  do {
    *(int *)(param_3 + iVar2 * 4) = *(int *)(param_1 + iVar2 * 4) + *(int *)(param_2 + iVar2 * 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < param_4);
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: call_vectorized_loop @ 0001092c */

void call_vectorized_loop(void)

{
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [32];
  int local_c;
  
  local_c = 0;
  local_6c = 1;
  uStack_68 = 2;
  uStack_64 = 3;
  uStack_60 = 4;
  local_5c = 5;
  uStack_58 = 6;
  uStack_54 = 7;
  uStack_50 = 8;
  local_4c = 8;
  uStack_48 = 7;
  uStack_44 = 6;
  uStack_40 = 5;
  local_3c = 4;
  uStack_38 = 3;
  uStack_34 = 2;
  uStack_30 = 1;
  memset(auStack_2c,0,0x20);
  param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_link_time_optimization @ 000109c4 */

int param_link_time_optimization(int param_1)

{
  return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 000109d0 */

undefined4 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 000109d8 */

undefined4 param_division_by_zero(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = __aeabi_idiv(10,param_1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_division_by_zero @ 00010a1c */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010a4c */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_null_pointer_deref @ 00010a88 */

void call_null_pointer_deref(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  local_14 = 0;
  local_18 = 0x2a;
  uStack_10 = param_3;
  iVar1 = param_null_pointer_deref(&local_18);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 + iVar2);
  }
  return;
}



/* Function: param_buffer_overflow_stack @ 00010af4 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 00010af8 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  void *__ptr;
  
  __ptr = malloc(0x10);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return param_1;
  }
  return 0xfffffffe;
}



/* Function: call_buffer_overflow @ 00010b24 */

int call_buffer_overflow(void)

{
  int iVar1;
  
  iVar1 = param_buffer_overflow_heap(0x14);
  return iVar1 + 10;
}



/* Function: param_integer_overflow @ 00010b38 */

uint param_integer_overflow(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1;
  if (0 < (int)param_1) {
    uVar1 = param_2;
  }
  uVar2 = param_1 + param_2;
  if ((int)uVar1 < 1) {
    if (((uint)(0 < (int)uVar2) & (param_1 & param_2) >> 0x1f) != 0) {
      uVar2 = 0xfffffffe;
    }
    return uVar2;
  }
  return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010b70 */

undefined4 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00010b7c */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010b84 */

undefined4 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00010b8c */

undefined4 param_implementation_defined(void)

{
  return 0x2c;
}



/* Function: call_implementation_defined @ 00010b94 */

undefined4 call_implementation_defined(void)

{
  return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010b9c */

void test_obf_opt_edge(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00010fd8);
  __printf_chk(1,&DAT_00011005,10);
  uVar1 = call_opaque_predicate();
  __printf_chk(1,&DAT_00011021,uVar1);
  __printf_chk(1,&DAT_0001103d,0xe1);
  uVar1 = param_string_encryption();
  __printf_chk(1,&DAT_0001105a,uVar1);
  uVar1 = call_tail_call_optimized();
  __printf_chk(1,&DAT_00011076,uVar1);
  uVar1 = call_non_tail_call();
  __printf_chk(1,&DAT_000110a0,uVar1);
  uVar1 = call_vectorized_loop();
  __printf_chk(1,&DAT_000110c5,uVar1);
  __printf_chk(1,&DAT_000110eb,0x14);
  uVar1 = call_division_by_zero();
  __printf_chk(1,&DAT_0001110b,uVar1);
  uVar1 = call_null_pointer_deref();
  __printf_chk(1,&DAT_00011127,uVar1);
  uVar1 = call_buffer_overflow();
  __printf_chk(1,&DAT_00011144,uVar1);
  __printf_chk(1,&DAT_00011161,2000000000);
  __printf_chk(1,&DAT_00011192,10);
  __printf_chk(1,&DAT_000111af,0x2c);
  return;
}



/* Function: __aeabi_idiv @ 00010cec */

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
                    /* WARNING: Could not recover jumptable at 0x00010d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10d3c))();
  return uVar1;
}



/* Function: .divsi3_skip_div0_test @ 00010cf4 */

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
                    /* WARNING: Could not recover jumptable at 0x00010d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10d3c))();
  return uVar1;
}



/* Function: __aeabi_idivmod @ 00010f0c */

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



/* Function: __aeabi_idiv0 @ 00010f2c */

void __aeabi_idiv0(void)

{
  raise(8);
  return;
}



/* Function: _fini @ 00010f3c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 44 */
