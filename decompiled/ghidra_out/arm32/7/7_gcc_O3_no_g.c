/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/7/7_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000104e4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 000105ac */

undefined4 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 000105bc */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010600 */

/* WARNING: Removing unreachable block (ram,0x00010614) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010624 */

/* WARNING: Removing unreachable block (ram,0x00010634) */
/* WARNING: Removing unreachable block (ram,0x0001063c) */
/* WARNING: Removing unreachable block (ram,0x00010640) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010650 */

/* WARNING: Removing unreachable block (ram,0x0001066c) */
/* WARNING: Removing unreachable block (ram,0x00010674) */
/* WARNING: Removing unreachable block (ram,0x00010678) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010688 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: div_zero_handler @ 000106b4 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 000106cc */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer);
}



/* Function: param_division_by_zero.constprop.0 @ 000106e8 */

undefined4 param_division_by_zero_constprop_0(void)

{
  code *pcVar1;
  int iVar2;
  
  signal(8,div_zero_handler);
  iVar2 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x10708);
    (*pcVar1)();
  }
  return 0xffffffff;
}



/* Function: param_division_by_zero.constprop.1 @ 0001071c */

undefined4 param_division_by_zero_constprop_1(void)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_fake_branch @ 0001074c */

void param_fake_branch(void)

{
  return;
}



/* Function: call_fake_branch @ 00010750 */

undefined4 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00010758 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  
  iVar3 = param_1 + 1;
  iVar2 = param_1;
  iVar1 = iVar3;
  if (iVar3 != 0) {
    do {
      iVar4 = iVar1;
      __aeabi_idivmod(iVar2);
      iVar2 = iVar4;
      iVar1 = extraout_r1;
    } while (extraout_r1 != 0);
    if (iVar4 == 1 && param_1 * param_1 + param_1 * 2 + 1 == iVar3 * iVar3) {
      return param_1 * 2 + 10;
    }
  }
  return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 000107c8 */

undefined4 call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  
  iVar2 = 5;
  iVar1 = 6;
  do {
    iVar4 = iVar1;
    __aeabi_idivmod(iVar2);
    iVar2 = iVar4;
    iVar1 = extraout_r1;
  } while (extraout_r1 != 0);
  if (iVar4 == 1) {
    uVar3 = 0x14;
  }
  else {
    uVar3 = 0x23;
  }
  return uVar3;
}



/* Function: param_instruction_substitution @ 000107f8 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00010818 */

undefined4 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00010820 */

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
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  return param_2;
}



/* Function: param_string_encryption @ 00010874 */

void param_string_encryption(void)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte local_2c [31];
  undefined1 local_d;
  int local_c;
  
  local_c = 0;
  strncpy((char *)local_2c,&encrypted_0,0x1f);
  local_d = 0;
  uVar4 = 0;
  if (local_2c[0] != 0) {
    pbVar2 = local_2c;
    bVar3 = local_2c[0];
    do {
      *pbVar2 = bVar3 ^ 0x5a;
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
    } while (bVar3 != 0);
    uVar4 = (uint)local_2c[0];
  }
  sVar1 = strlen((char *)local_2c);
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 + sVar1);
}



/* Function: call_string_encryption @ 00010904 */

void call_string_encryption(void)

{
  size_t sVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte local_2c [31];
  undefined1 local_d;
  int local_c;
  
  local_c = 0;
  strncpy((char *)local_2c,&encrypted_0,0x1f);
  local_d = 0;
  uVar4 = 0;
  if (local_2c[0] != 0) {
    pbVar2 = local_2c;
    bVar3 = local_2c[0];
    do {
      *pbVar2 = bVar3 ^ 0x5a;
      pbVar2 = pbVar2 + 1;
      bVar3 = *pbVar2;
    } while (bVar3 != 0);
    uVar4 = (uint)local_2c[0];
  }
  sVar1 = strlen((char *)local_2c);
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 + sVar1);
}



/* Function: param_tail_call_optimized @ 00010994 */

int param_tail_call_optimized(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 < 1) {
    return param_2;
  }
  do {
    iVar1 = param_1 + -1;
    param_2 = param_2 + param_1;
    param_1 = iVar1;
  } while (iVar1 != 0);
  return param_2;
}



/* Function: call_tail_call_optimized @ 000109b4 */

undefined4 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000109c0 */

int param_non_tail_call(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (param_1 < 1) {
    return 0;
  }
  do {
    iVar2 = param_1 + -1;
    iVar1 = iVar1 + param_1;
    param_1 = iVar2;
  } while (iVar2 != 0);
  return iVar1;
}



/* Function: call_non_tail_call @ 000109e0 */

undefined4 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 000109ec */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0 < param_4) {
    piVar5 = (int *)(param_3 + -4);
    piVar1 = (int *)(param_1 + -4);
    piVar3 = (int *)(param_2 + -4);
    piVar6 = piVar1 + param_4;
    piVar4 = piVar5;
    do {
      piVar1 = piVar1 + 1;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
      *piVar4 = *piVar1 + *piVar3;
    } while (piVar1 != piVar6);
    iVar2 = 0;
    piVar4 = piVar5 + param_4;
    do {
      piVar5 = piVar5 + 1;
      iVar2 = iVar2 + *piVar5;
    } while (piVar4 != piVar5);
    return iVar2;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00010a50 */

undefined4 call_vectorized_loop(void)

{
  return 0x48;
}



/* Function: param_link_time_optimization @ 00010a58 */

int param_link_time_optimization(int param_1)

{
  return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00010a64 */

undefined4 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00010a6c */

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



/* Function: call_division_by_zero @ 00010abc */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero_constprop_1();
  iVar2 = param_division_by_zero_constprop_0();
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00010ae4 */

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



/* Function: call_null_pointer_deref @ 00010b28 */

void call_null_pointer_deref(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  local_18 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_18,param_2,0);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_14 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + iVar2);
}



/* Function: param_buffer_overflow_stack @ 00010b98 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 00010b9c */

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



/* Function: call_buffer_overflow @ 00010bc8 */

undefined4 call_buffer_overflow(void)

{
  void *__ptr;
  
  __ptr = malloc(0x10);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return 0x1e;
  }
  return 8;
}



/* Function: param_integer_overflow @ 00010bf0 */

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
    if (((uint)(0 < (int)uVar2) & (param_2 & param_1) >> 0x1f) != 0) {
      uVar2 = 0xfffffffe;
    }
    return uVar2;
  }
  return uVar2 | (int)uVar2 >> 0x1f;
}



/* Function: call_integer_overflow @ 00010c28 */

undefined4 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00010c34 */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00010c3c */

undefined4 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00010c44 */

undefined4 param_implementation_defined(void)

{
  return 0x2c;
}



/* Function: call_implementation_defined @ 00010c4c */

undefined4 call_implementation_defined(void)

{
  return 0x2c;
}



/* Function: test_obf_opt_edge @ 00010c54 */

void test_obf_opt_edge(void)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  int extraout_r1;
  undefined4 uVar4;
  byte *pbVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_38;
  byte local_34 [31];
  undefined1 local_15;
  int local_14;
  
  local_14 = 0;
  puts(&DAT_00011188);
  __printf_chk(1,&DAT_000111b8,10);
  iVar2 = 5;
  iVar3 = 6;
  do {
    iVar8 = iVar3;
    __aeabi_idivmod(iVar2,iVar8);
    iVar2 = iVar8;
    iVar3 = extraout_r1;
  } while (extraout_r1 != 0);
  if (iVar8 == 1) {
    uVar4 = 0x14;
  }
  else {
    uVar4 = 0x23;
  }
  __printf_chk(1,&DAT_000111d4,uVar4);
  __printf_chk(1,&DAT_000111f0,0xe1);
  strncpy((char *)local_34,&encrypted_0,0x1f);
  local_15 = 0;
  uVar7 = 0;
  if (local_34[0] != 0) {
    pbVar5 = local_34;
    bVar6 = local_34[0];
    do {
      *pbVar5 = bVar6 ^ 0x5a;
      pbVar5 = pbVar5 + 1;
      bVar6 = *pbVar5;
    } while (bVar6 != 0);
    uVar7 = (uint)local_34[0];
  }
  sVar1 = strlen((char *)local_34);
  __printf_chk(1,&DAT_00011210,uVar7 + sVar1);
  __printf_chk(1,&DAT_0001122c,0x7a314);
  __printf_chk(1,&DAT_00011258,0x13ba);
  uVar4 = call_vectorized_loop();
  __printf_chk(1,&DAT_00011280,uVar4);
  __printf_chk(1,&DAT_000112a8,0x14);
  iVar2 = param_division_by_zero_constprop_1();
  iVar3 = param_division_by_zero_constprop_0();
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_000112c8,iVar2 + iVar3);
  local_38 = 0x2a;
  iVar2 = param_null_pointer_deref(&local_38);
  iVar3 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_000112e4,iVar2 + iVar3);
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar4 = 8;
  }
  else {
    free(__ptr);
    uVar4 = 0x1e;
  }
  __printf_chk(1,&DAT_00011304,uVar4);
  __printf_chk(1,&DAT_00011324,2000000000);
  __printf_chk(1,&DAT_00011358,10);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  __printf_chk(1,&DAT_00011378,0x2c);
  return;
}



/* Function: __aeabi_idiv @ 00010e9c */

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
                    /* WARNING: Could not recover jumptable at 0x00010ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10eec))();
  return uVar1;
}



/* Function: .divsi3_skip_div0_test @ 00010ea4 */

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
                    /* WARNING: Could not recover jumptable at 0x00010ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x10eec))();
  return uVar1;
}



/* Function: __aeabi_idivmod @ 000110bc */

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



/* Function: __aeabi_idiv0 @ 000110dc */

void __aeabi_idiv0(void)

{
  raise(8);
  return;
}



/* Function: _fini @ 000110ec */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 47 */
