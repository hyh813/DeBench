/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/7/7_clang_O2_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100710 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100730 @ 00100730 */

void FUN_00100730(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100800 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100834 */

/* WARNING: Removing unreachable block (ram,0x00100844) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100850 */

/* WARNING: Removing unreachable block (ram,0x00100868) */
/* WARNING: Removing unreachable block (ram,0x00100874) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100880 */

/* WARNING: Removing unreachable block (ram,0x001008a4) */
/* WARNING: Removing unreachable block (ram,0x001008b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001008c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: param_fake_branch @ 00100914 */

void param_fake_branch(void)

{
  return;
}



/* Function: call_fake_branch @ 00100918 */

undefined8 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00100920 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  iVar3 = param_1;
  iVar2 = iVar1;
  if (param_1 == -1) {
    iVar4 = -1;
  }
  else {
    do {
      iVar4 = iVar2;
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar3 / iVar4;
      }
      iVar2 = iVar3 - iVar2 * iVar4;
      iVar3 = iVar4;
    } while (iVar2 != 0);
  }
  iVar2 = param_1 * 2 + 10;
  if (iVar4 != 1 || (param_1 * 2 | 1U) + param_1 * param_1 != iVar1 * iVar1) {
    iVar2 = param_1 * 3 + 0x14;
  }
  return iVar2;
}



/* Function: call_opaque_predicate @ 00100978 */

undefined4 call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = 6;
  iVar4 = 5;
  do {
    iVar2 = iVar1;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar4 / iVar2;
    }
    iVar1 = iVar4 - iVar1 * iVar2;
    iVar4 = iVar2;
  } while (iVar1 != 0);
  uVar3 = 0x14;
  if (iVar2 != 1) {
    uVar3 = 0x23;
  }
  return uVar3;
}



/* Function: param_instruction_substitution @ 001009a8 */

int param_instruction_substitution(uint param_1)

{
  return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}



/* Function: call_instruction_substitution @ 001009bc */

undefined8 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 001009c4 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  bVar1 = *param_2;
  pbVar3 = param_2;
  while (bVar1 != 0) {
    bVar2 = bVar1 ^ param_4;
    bVar1 = pbVar3[1];
    *pbVar3 = bVar2;
    pbVar3 = pbVar3 + 1;
  }
  return param_2;
}



/* Function: param_string_encryption @ 00100a2c */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_40 [31];
  undefined1 local_21;
  
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  local_21 = 0;
  if (local_40[0] == 0) {
    uVar5 = 0;
  }
  else {
    pbVar4 = (byte *)((ulong)local_40 | 1);
    bVar3 = local_40[0];
    do {
      bVar1 = bVar3 ^ 0x5a;
      bVar3 = *pbVar4;
      pbVar4[-1] = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 != 0);
    uVar5 = (uint)local_40[0];
  }
  sVar2 = strlen((char *)local_40);
  return (int)sVar2 + uVar5;
}



/* Function: call_string_encryption @ 00100aa4 */

int call_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_40 [31];
  undefined1 local_21;
  
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  local_21 = 0;
  if (local_40[0] == 0) {
    uVar5 = 0;
  }
  else {
    pbVar4 = (byte *)((ulong)local_40 | 1);
    bVar3 = local_40[0];
    do {
      bVar1 = bVar3 ^ 0x5a;
      bVar3 = *pbVar4;
      pbVar4[-1] = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 != 0);
    uVar5 = (uint)local_40[0];
  }
  sVar2 = strlen((char *)local_40);
  return (int)sVar2 + uVar5;
}



/* Function: param_tail_call_optimized @ 00100b1c */

int param_tail_call_optimized(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (0 < param_1) {
    param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 00100b44 */

undefined8 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 00100b50 */

int param_non_tail_call(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 1;
  if (0 < param_1) {
    return (param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
  }
  return 0;
}



/* Function: call_non_tail_call @ 00100b78 */

undefined8 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100b80 */

int param_vectorized_loop(ulong param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int *piVar8;
  undefined8 *puVar9;
  int *piVar10;
  undefined8 *puVar11;
  long lVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar3 = (ulong)param_4;
  if (param_4 < 8) {
    uVar4 = 0;
  }
  else {
    lVar5 = uVar3 * 4;
    uVar4 = 0;
    if ((param_1 + lVar5 <= param_3 || param_3 + lVar5 <= param_1) &&
       (param_2 + lVar5 <= param_3 || param_3 + lVar5 <= param_2)) {
      uVar4 = uVar3 & 0xfffffff8;
      puVar7 = (undefined8 *)(param_1 + 0x10);
      puVar9 = (undefined8 *)(param_2 + 0x10);
      puVar11 = (undefined8 *)(param_3 + 0x10);
      uVar6 = uVar4;
      do {
        puVar1 = puVar7 + -1;
        uVar15 = puVar7[-2];
        uVar23 = puVar7[1];
        uVar20 = *puVar7;
        puVar7 = puVar7 + 4;
        uVar6 = uVar6 - 8;
        puVar2 = puVar9 + -1;
        uVar25 = puVar9[-2];
        uVar27 = puVar9[1];
        uVar26 = *puVar9;
        puVar9 = puVar9 + 4;
        puVar11[-1] = CONCAT44((int)((ulong)*puVar2 >> 0x20) + (int)((ulong)*puVar1 >> 0x20),
                               (int)*puVar2 + (int)*puVar1);
        puVar11[-2] = CONCAT44((int)((ulong)uVar25 >> 0x20) + (int)((ulong)uVar15 >> 0x20),
                               (int)uVar25 + (int)uVar15);
        puVar11[1] = CONCAT44((int)((ulong)uVar27 >> 0x20) + (int)((ulong)uVar23 >> 0x20),
                              (int)uVar27 + (int)uVar23);
        *puVar11 = CONCAT44((int)((ulong)uVar26 >> 0x20) + (int)((ulong)uVar20 >> 0x20),
                            (int)uVar26 + (int)uVar20);
        puVar11 = puVar11 + 4;
      } while (uVar6 != 0);
      if (uVar4 == uVar3) goto LAB_00100c50;
    }
  }
  lVar12 = uVar4 * 4;
  lVar5 = uVar3 - uVar4;
  piVar8 = (int *)(param_3 + lVar12);
  piVar10 = (int *)(param_2 + lVar12);
  piVar13 = (int *)(param_1 + lVar12);
  do {
    lVar5 = lVar5 + -1;
    *piVar8 = *piVar10 + *piVar13;
    piVar8 = piVar8 + 1;
    piVar10 = piVar10 + 1;
    piVar13 = piVar13 + 1;
  } while (lVar5 != 0);
LAB_00100c50:
  if ((int)param_4 < 1) {
    return 0;
  }
  if (param_4 < 8) {
    uVar6 = 0;
    iVar14 = 0;
  }
  else {
    uVar6 = uVar3 & 0xfffffff8;
    puVar7 = (undefined8 *)(param_3 + 0x10);
    iVar14 = 0;
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar21 = 0;
    iVar22 = 0;
    iVar24 = 0;
    uVar4 = uVar6;
    do {
      puVar9 = puVar7 + -2;
      puVar11 = puVar7 + -1;
      puVar1 = puVar7 + 1;
      uVar15 = *puVar7;
      puVar7 = puVar7 + 4;
      uVar4 = uVar4 - 8;
      iVar14 = (int)*puVar9 + iVar14;
      iVar16 = (int)((ulong)*puVar9 >> 0x20) + iVar16;
      iVar17 = (int)*puVar11 + iVar17;
      iVar18 = (int)((ulong)*puVar11 >> 0x20) + iVar18;
      iVar19 = (int)uVar15 + iVar19;
      iVar21 = (int)((ulong)uVar15 >> 0x20) + iVar21;
      iVar22 = (int)*puVar1 + iVar22;
      iVar24 = (int)((ulong)*puVar1 >> 0x20) + iVar24;
    } while (uVar4 != 0);
    iVar14 = iVar19 + iVar14 + iVar21 + iVar16 + iVar22 + iVar17 + iVar24 + iVar18;
    if (uVar6 == uVar3) {
      return iVar14;
    }
  }
  lVar5 = uVar3 - uVar6;
  piVar8 = (int *)(param_3 + uVar6 * 4);
  do {
    lVar5 = lVar5 + -1;
    iVar14 = *piVar8 + iVar14;
    piVar8 = piVar8 + 1;
  } while (lVar5 != 0);
  return iVar14;
}



/* Function: call_vectorized_loop @ 00100cd0 */

undefined8 call_vectorized_loop(void)

{
  return 0x48;
}



/* Function: param_link_time_optimization @ 00100cd8 */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100ce4 */

undefined8 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 00100cec */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100d10 */

int param_division_by_zero(int param_1)

{
  int iVar1;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = 10 / param_1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_division_by_zero @ 00100d5c */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00100d9c */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100dc0 */

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



/* Function: call_null_pointer_deref @ 00100e08 */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  
  local_24 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_24);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00100e58 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 00100e5c */

void param_buffer_overflow_heap(void)

{
  return;
}



/* Function: call_buffer_overflow @ 00100e60 */

undefined8 call_buffer_overflow(void)

{
  return 0x1e;
}



/* Function: param_integer_overflow @ 00100e68 */

int param_integer_overflow(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1;
  if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
    return -1;
  }
  iVar2 = -2;
  if (iVar1 < 1 || -1 < (int)(param_2 & param_1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Function: call_integer_overflow @ 00100ea0 */

undefined8 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00100eac */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100eb4 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00100ebc */

undefined8 param_implementation_defined(void)

{
  return 0x30;
}



/* Function: call_implementation_defined @ 00100ec4 */

undefined8 call_implementation_defined(void)

{
  return 0x30;
}



/* Function: test_obf_opt_edge @ 00100ecc */

int test_obf_opt_edge(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  uint local_40 [7];
  undefined1 local_21;
  
  puts(&DAT_001012ad);
  printf(&DAT_001010dc,10);
  iVar2 = 6;
  iVar3 = 5;
  do {
    iVar5 = iVar2;
    iVar2 = 0;
    if (iVar5 != 0) {
      iVar2 = iVar3 / iVar5;
    }
    iVar2 = iVar3 - iVar2 * iVar5;
    iVar3 = iVar5;
  } while (iVar2 != 0);
  uVar6 = 0x14;
  if (iVar5 != 1) {
    uVar6 = 0x23;
  }
  printf(&DAT_001010f8,(ulong)uVar6);
  printf(&DAT_00101114,0xe1);
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  uVar6 = local_40[0] & 0xff;
  local_21 = 0;
  if ((char)local_40[0] == '\0') {
    uVar6 = 0;
  }
  else {
    pbVar7 = (byte *)((ulong)local_40 | 1);
    do {
      bVar1 = (byte)uVar6;
      uVar6 = (uint)*pbVar7;
      pbVar7[-1] = bVar1 ^ 0x5a;
      pbVar7 = pbVar7 + 1;
    } while (uVar6 != 0);
    uVar6 = local_40[0] & 0xff;
  }
  sVar4 = strlen((char *)local_40);
  printf(&DAT_00101131,(ulong)((int)sVar4 + uVar6));
  printf(&DAT_0010114d,0x7a314);
  printf(&DAT_00101177,0x13ba);
  printf(&DAT_0010119c,0x48);
  printf(&DAT_001011c2,0x14);
  iVar2 = param_division_by_zero(5);
  iVar3 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_001011e2,(ulong)(uint)(iVar3 + iVar2));
  local_40[0] = 0x2a;
  iVar2 = param_null_pointer_deref(local_40);
  iVar3 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_001011fe,(ulong)(uint)(iVar3 + iVar2));
  printf(&DAT_0010121b,0x1e);
  printf(&DAT_00101238,2000000000);
  printf(&DAT_00101269,10);
  iVar2 = printf(&DAT_00101286,0x30);
  return iVar2;
}



/* Function: main @ 001010ac */

undefined8 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 001010c4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 43 */
