/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/7/7_clang_O1_no_g
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
  iVar4 = param_1;
  iVar2 = iVar1;
  if (param_1 != -1) {
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



/* Function: call_opaque_predicate @ 00100974 */

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



/* Function: param_instruction_substitution @ 001009a4 */

int param_instruction_substitution(uint param_1)

{
  return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}



/* Function: call_instruction_substitution @ 001009b8 */

undefined8 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 001009c0 */

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



/* Function: param_string_encryption @ 00100a28 */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte bVar3;
  byte *pbVar4;
  byte local_40 [31];
  undefined1 local_21;
  
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  local_21 = 0;
  if (local_40[0] != 0) {
    pbVar4 = (byte *)((ulong)local_40 | 1);
    bVar3 = local_40[0];
    do {
      bVar1 = bVar3 ^ 0x5a;
      bVar3 = *pbVar4;
      pbVar4[-1] = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 != 0);
  }
  sVar2 = strlen((char *)local_40);
  return (int)sVar2 + (uint)local_40[0];
}



/* Function: call_string_encryption @ 00100a98 */

int call_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte bVar3;
  byte *pbVar4;
  byte local_40 [31];
  undefined1 local_21;
  
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  local_21 = 0;
  if (local_40[0] != 0) {
    pbVar4 = (byte *)((ulong)local_40 | 1);
    bVar3 = local_40[0];
    do {
      bVar1 = bVar3 ^ 0x5a;
      bVar3 = *pbVar4;
      pbVar4[-1] = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 != 0);
  }
  sVar2 = strlen((char *)local_40);
  return (int)sVar2 + (uint)local_40[0];
}



/* Function: param_tail_call_optimized @ 00100b08 */

int param_tail_call_optimized(int param_1,int param_2)

{
  if (0 < param_1) {
    param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 00100b34 */

void call_tail_call_optimized(void)

{
  param_tail_call_optimized(1000,0);
  return;
}



/* Function: param_non_tail_call @ 00100b50 */

int param_non_tail_call(int param_1)

{
  int iVar1;
  
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_non_tail_call(param_1 + -1);
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 00100b84 */

void call_non_tail_call(void)

{
  param_non_tail_call(100);
  return;
}



/* Function: param_vectorized_loop @ 00100b9c */

int param_vectorized_loop(int *param_1,int *param_2,int *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    piVar3 = param_3;
    do {
      uVar2 = uVar2 - 1;
      *piVar3 = *param_2 + *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 != 0);
  }
  if (0 < (int)param_4) {
    iVar1 = 0;
    uVar2 = (ulong)param_4;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_3 + iVar1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00100bf0 */

int call_vectorized_loop(void)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int local_20 [8];
  
  lVar3 = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[6] = 0;
  local_20[7] = 0;
  local_20[4] = 0;
  local_20[5] = 0;
  do {
    *(int *)((long)local_20 + lVar3) =
         *(int *)((long)&DAT_001010d8 + lVar3) + *(int *)((long)&DAT_001010b8 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x20);
  lVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = (int *)((long)local_20 + lVar3);
    lVar3 = lVar3 + 4;
    iVar2 = *piVar1 + iVar2;
  } while (lVar3 != 0x20);
  return iVar2;
}



/* Function: param_link_time_optimization @ 00100c58 */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100c64 */

undefined8 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 00100c6c */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100c90 */

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



/* Function: call_division_by_zero @ 00100cdc */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00100d1c */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00100d40 */

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



/* Function: call_null_pointer_deref @ 00100d88 */

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



/* Function: param_buffer_overflow_stack @ 00100dd8 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 00100ddc */

void param_buffer_overflow_heap(void)

{
  return;
}



/* Function: call_buffer_overflow @ 00100de0 */

undefined8 call_buffer_overflow(void)

{
  return 0x1e;
}



/* Function: param_integer_overflow @ 00100de8 */

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



/* Function: call_integer_overflow @ 00100e20 */

undefined8 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00100e2c */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00100e34 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00100e3c */

undefined8 param_implementation_defined(void)

{
  return 0x30;
}



/* Function: call_implementation_defined @ 00100e44 */

undefined8 call_implementation_defined(void)

{
  return 0x30;
}



/* Function: test_obf_opt_edge @ 00100e4c */

int test_obf_opt_edge(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  ulong uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  int local_40 [6];
  ulong uStack_28;
  
  puts(&DAT_001012c9);
  printf(&DAT_001010f8,10);
  iVar3 = 6;
  iVar4 = 5;
  do {
    iVar8 = iVar3;
    iVar3 = 0;
    if (iVar8 != 0) {
      iVar3 = iVar4 / iVar8;
    }
    iVar3 = iVar4 - iVar3 * iVar8;
    iVar4 = iVar8;
  } while (iVar3 != 0);
  uVar9 = 0x14;
  if (iVar8 != 1) {
    uVar9 = 0x23;
  }
  printf(&DAT_00101114,(ulong)uVar9);
  printf(&DAT_00101130,0xe1);
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  uStack_28 = uStack_28 & 0xffffffffffffff;
  if ((byte)local_40[0] != 0) {
    pbVar11 = (byte *)((ulong)local_40 | 1);
    bVar7 = (byte)local_40[0];
    do {
      bVar2 = bVar7 ^ 0x5a;
      bVar7 = *pbVar11;
      pbVar11[-1] = bVar2;
      pbVar11 = pbVar11 + 1;
    } while (bVar7 != 0);
  }
  sVar5 = strlen((char *)local_40);
  printf(&DAT_0010114d,(ulong)((int)sVar5 + (uint)(byte)local_40[0]));
  uVar6 = param_tail_call_optimized(1000,0);
  printf(&DAT_00101169,uVar6 & 0xffffffff);
  uVar6 = param_non_tail_call(100);
  printf(&DAT_00101193,uVar6 & 0xffffffff);
  lVar10 = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  uStack_28 = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  do {
    *(int *)((long)local_40 + lVar10) =
         *(int *)((long)&DAT_001010d8 + lVar10) + *(int *)((long)&DAT_001010b8 + lVar10);
    lVar10 = lVar10 + 4;
  } while (lVar10 != 0x20);
  lVar10 = 0;
  uVar6 = 0;
  do {
    piVar1 = (int *)((long)local_40 + lVar10);
    lVar10 = lVar10 + 4;
    uVar6 = (ulong)(uint)(*piVar1 + (int)uVar6);
  } while (lVar10 != 0x20);
  printf(&DAT_001011b8,uVar6);
  printf(&DAT_001011de,0x14);
  iVar3 = param_division_by_zero(5);
  iVar4 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_001011fe,(ulong)(uint)(iVar4 + iVar3));
  local_40[0] = 0x2a;
  iVar3 = param_null_pointer_deref(local_40);
  iVar4 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_0010121a,(ulong)(uint)(iVar4 + iVar3));
  printf(&DAT_00101237,0x1e);
  printf(&DAT_00101254,2000000000);
  printf(&DAT_00101285,10);
  iVar3 = printf(&DAT_001012a2,0x30);
  return iVar3;
}



/* Function: main @ 00101088 */

undefined8 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 001010a0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 43 */
