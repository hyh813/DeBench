/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/7/7_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100848 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100980 */

undefined8 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 001009c0 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 001009f4 */

/* WARNING: Removing unreachable block (ram,0x00100a04) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100a10 */

/* WARNING: Removing unreachable block (ram,0x00100a28) */
/* WARNING: Removing unreachable block (ram,0x00100a34) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100a40 */

/* WARNING: Removing unreachable block (ram,0x00100a64) */
/* WARNING: Removing unreachable block (ram,0x00100a70) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100a80 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: div_zero_handler @ 00100ae0 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 00100b00 */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer);
}



/* Function: param_division_by_zero.constprop.0 @ 00100b20 */

undefined8 param_division_by_zero_constprop_0(void)

{
  code *pcVar1;
  int iVar2;
  
  signal(8,div_zero_handler);
  iVar2 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1000,0x100b50);
    (*pcVar1)();
  }
  return 0xffffffff;
}



/* Function: FUN_00100b5c @ 00100b5c */

undefined4 FUN_00100b5c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  uVar2 = 2;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_division_by_zero.constprop.1 @ 00100b60 */

undefined4 param_division_by_zero_constprop_1(void)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  uVar2 = 2;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: param_fake_branch @ 00100ba0 */

void param_fake_branch(void)

{
  return;
}



/* Function: call_fake_branch @ 00100ba4 */

undefined8 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00100bb0 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  iVar2 = iVar1;
  iVar3 = param_1;
  if (iVar1 != 0) {
    do {
      iVar4 = iVar2;
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar3 / iVar4;
      }
      iVar2 = iVar3 - iVar2 * iVar4;
      iVar3 = iVar4;
    } while (iVar2 != 0);
    if (param_1 * 2 + param_1 * param_1 + 1 == iVar1 * iVar1 && iVar4 == 1) {
      return param_1 * 2 + 10;
    }
  }
  return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00100c10 */

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



/* Function: param_instruction_substitution @ 00100c40 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100c64 */

undefined8 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: FUN_00100c6c @ 00100c6c */

byte * FUN_00100c6c(char *param_1,char *param_2,size_t param_3,byte param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)strncpy(param_2,param_1,param_3);
  pbVar2[param_3 - 1] = 0;
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
  while (bVar1 != 0) {
    *pbVar3 = param_4 ^ bVar1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  return pbVar2;
}



/* Function: decrypt_string @ 00100c70 */

byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)strncpy(param_2,param_1,param_3);
  pbVar2[param_3 - 1] = 0;
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
  while (bVar1 != 0) {
    *pbVar3 = param_4 ^ bVar1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  return pbVar2;
}



/* Function: param_string_encryption @ 00100cd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_string_encryption(void)

{
  byte bVar1;
  byte *__s;
  byte *pbVar2;
  size_t sVar3;
  byte local_28 [31];
  undefined1 local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (byte *)strncpy((char *)local_28,&encrypted_0,0x1f);
  local_9 = 0;
  pbVar2 = __s;
  bVar1 = local_28[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  sVar3 = strlen((char *)__s);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((uint)local_28[0] + (int)sVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard)
  ;
}



/* Function: FUN_00100d6c @ 00100d6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00100d6c(void)

{
  byte bVar1;
  byte *__s;
  byte *pbVar2;
  size_t sVar3;
  byte abStack_28 [31];
  undefined1 uStack_9;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  __s = (byte *)strncpy((char *)abStack_28,&encrypted_0,0x1f);
  uStack_9 = 0;
  pbVar2 = __s;
  bVar1 = abStack_28[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  sVar3 = strlen((char *)__s);
  if (lStack_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((uint)abStack_28[0] + (int)sVar3,&__stack_chk_guard,0,
                   lStack_8 - ___stack_chk_guard);
}



/* Function: call_string_encryption @ 00100d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_string_encryption(void)

{
  byte bVar1;
  byte *__s;
  byte *pbVar2;
  size_t sVar3;
  byte local_28 [31];
  undefined1 local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  __s = (byte *)strncpy((char *)local_28,&encrypted_0,0x1f);
  local_9 = 0;
  pbVar2 = __s;
  bVar1 = local_28[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  sVar3 = strlen((char *)__s);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((uint)local_28[0] + (int)sVar3,&__stack_chk_guard,0,local_8 - ___stack_chk_guard)
  ;
}



/* Function: param_tail_call_optimized @ 00100e10 */

int param_tail_call_optimized(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = param_2;
  if (0 < (int)param_1) {
    uVar1 = param_1;
    if (8 < (int)param_1) {
      iVar6 = 0;
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      uVar1 = 0;
      uVar2 = param_1;
      iVar3 = param_1 - 1;
      iVar4 = param_1 - 2;
      iVar5 = param_1 - 3;
      do {
        uVar1 = uVar1 + 1;
        iVar6 = iVar6 + uVar2;
        iVar7 = iVar7 + iVar3;
        iVar8 = iVar8 + iVar4;
        iVar9 = iVar9 + iVar5;
        uVar2 = uVar2 - 4;
        iVar3 = iVar3 + -4;
        iVar4 = iVar4 + -4;
        iVar5 = iVar5 + -4;
      } while (param_1 >> 2 != uVar1);
      uVar1 = param_1 - (param_1 & 0xfffffffc);
      param_2 = param_2 + iVar6 + iVar7 + iVar8 + iVar9;
      if (param_1 == (param_1 & 0xfffffffc)) {
        return param_2;
      }
    }
    iVar3 = param_2 + uVar1;
    if (uVar1 - 1 != 0) {
      iVar3 = param_2 + uVar1 + (uVar1 - 1);
      if (uVar1 - 2 != 0) {
        iVar3 = iVar3 + (uVar1 - 2);
        if (uVar1 - 3 != 0) {
          iVar3 = iVar3 + (uVar1 - 3);
          if (uVar1 - 4 != 0) {
            iVar3 = iVar3 + (uVar1 - 4);
            if (uVar1 - 5 != 0) {
              iVar4 = iVar3 + (uVar1 - 5);
              iVar3 = (uVar1 - 7) + (uVar1 - 6) + iVar4;
              if (uVar1 - 6 == 0) {
                iVar3 = iVar4;
              }
            }
          }
        }
      }
    }
  }
  return iVar3;
}



/* Function: call_tail_call_optimized @ 00100ee0 */

undefined8 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 00100ef0 */

int param_non_tail_call(uint param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar9 = 0;
  if (0 < (int)param_1) {
    if ((int)param_1 < 9) {
      iVar4 = 0;
    }
    else {
      iVar3 = 0;
      iVar5 = 0;
      iVar6 = 0;
      iVar7 = 0;
      uVar2 = 0;
      uVar8 = param_1;
      iVar9 = param_1 - 1;
      iVar4 = param_1 - 2;
      iVar10 = param_1 - 3;
      do {
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + uVar8;
        iVar5 = iVar5 + iVar9;
        iVar6 = iVar6 + iVar4;
        iVar7 = iVar7 + iVar10;
        uVar8 = uVar8 - 4;
        iVar9 = iVar9 + -4;
        iVar4 = iVar4 + -4;
        iVar10 = iVar10 + -4;
      } while (param_1 >> 2 != uVar2);
      iVar4 = iVar3 + iVar5 + iVar6 + iVar7;
      bVar1 = param_1 == (param_1 & 0xfffffffc);
      param_1 = param_1 - (param_1 & 0xfffffffc);
      if (bVar1) {
        return iVar4;
      }
    }
    iVar9 = iVar4 + param_1;
    if (param_1 - 1 != 0) {
      iVar9 = iVar4 + param_1 + (param_1 - 1);
      if (param_1 - 2 != 0) {
        iVar9 = iVar9 + (param_1 - 2);
        if (param_1 - 3 != 0) {
          iVar9 = iVar9 + (param_1 - 3);
          if (param_1 - 4 != 0) {
            iVar9 = iVar9 + (param_1 - 4);
            if (param_1 - 5 != 0) {
              iVar4 = iVar9 + (param_1 - 5);
              iVar9 = (param_1 - 7) + (param_1 - 6) + iVar4;
              if (param_1 - 6 == 0) {
                iVar9 = iVar4;
              }
            }
          }
        }
      }
    }
  }
  return iVar9;
}



/* Function: call_non_tail_call @ 00100fc0 */

undefined8 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100fd0 */

int param_vectorized_loop(long param_1,long param_2,undefined8 *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar5;
  long lVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar4;
  
  if ((int)param_4 < 1) {
    return 0;
  }
  uVar5 = (long)param_3 - (param_2 + 4);
  uVar2 = param_4 - 1;
  bVar1 = (ulong)((long)param_3 - (param_1 + 4)) < 9;
  if (((bVar1 || uVar5 < 9) || uVar2 < 3) ||
      ((!bVar1 && 7 < uVar5) && (bVar1 || uVar5 != 8)) && uVar2 == 3) {
    lVar6 = 0;
    do {
      *(int *)((long)param_3 + lVar6 * 4) =
           *(int *)(param_1 + lVar6 * 4) + *(int *)(param_2 + lVar6 * 4);
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)param_4);
    if (uVar2 < 3) {
      uVar5 = 0;
      iVar7 = 0;
      goto LAB_001010cc;
    }
  }
  else {
    lVar6 = 0;
    do {
      uVar11 = ((undefined8 *)(param_1 + lVar6))[1];
      uVar8 = *(undefined8 *)(param_1 + lVar6);
      uVar14 = ((undefined8 *)(param_2 + lVar6))[1];
      uVar13 = *(undefined8 *)(param_2 + lVar6);
      ((undefined8 *)((long)param_3 + lVar6))[1] =
           CONCAT44((int)((ulong)uVar11 >> 0x20) + (int)((ulong)uVar14 >> 0x20),
                    (int)uVar11 + (int)uVar14);
      *(undefined8 *)((long)param_3 + lVar6) =
           CONCAT44((int)((ulong)uVar8 >> 0x20) + (int)((ulong)uVar13 >> 0x20),
                    (int)uVar8 + (int)uVar13);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 != (ulong)(param_4 >> 2) * 0x10);
    uVar2 = param_4 & 0xfffffffc;
    if ((param_4 & 3) != 0) {
      uVar5 = (ulong)uVar2;
      *(int *)((long)param_3 + uVar5 * 4) =
           *(int *)(param_2 + uVar5 * 4) + *(int *)(param_1 + uVar5 * 4);
      if ((int)(uVar2 + 1) < (int)param_4) {
        lVar6 = uVar5 * 4 + 4;
        *(int *)((long)param_3 + lVar6) = *(int *)(param_1 + lVar6) + *(int *)(param_2 + lVar6);
        if ((int)(uVar2 + 2) < (int)param_4) {
          lVar6 = uVar5 * 4 + 8;
          *(int *)((long)param_3 + lVar6) = *(int *)(param_1 + lVar6) + *(int *)(param_2 + lVar6);
        }
      }
    }
  }
  iVar7 = 0;
  iVar9 = 0;
  iVar10 = 0;
  iVar12 = 0;
  puVar3 = param_3;
  do {
    puVar4 = puVar3 + 2;
    iVar7 = iVar7 + (int)*puVar3;
    iVar9 = iVar9 + (int)((ulong)*puVar3 >> 0x20);
    iVar10 = iVar10 + (int)puVar3[1];
    iVar12 = iVar12 + (int)((ulong)puVar3[1] >> 0x20);
    puVar3 = puVar4;
  } while (puVar4 != param_3 + (ulong)((param_4 >> 2) - 1) * 2 + 2);
  iVar7 = iVar7 + iVar9 + iVar10 + iVar12;
  uVar5 = (ulong)(param_4 & 0xfffffffc);
  if ((param_4 & 0xfffffffc) == param_4) {
    return iVar7;
  }
LAB_001010cc:
  iVar9 = (int)uVar5;
  uVar5 = -(uVar5 >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2;
  iVar7 = iVar7 + *(int *)((long)param_3 + (long)iVar9 * 4);
  if ((iVar9 + 1 < (int)param_4) &&
     (iVar7 = iVar7 + *(int *)((long)param_3 + uVar5 + 4), iVar9 + 2 < (int)param_4)) {
    iVar7 = iVar7 + *(int *)((long)param_3 + uVar5 + 8);
  }
  return iVar7;
}



/* Function: call_vectorized_loop @ 00101154 */

undefined8 call_vectorized_loop(void)

{
  return 0x48;
}



/* Function: param_link_time_optimization @ 00101160 */

int param_link_time_optimization(int param_1)

{
  return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00101170 */

undefined8 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00101180 */

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



/* Function: FUN_001011cc @ 001011cc */

int FUN_001011cc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero_constprop_1();
  iVar2 = param_division_by_zero_constprop_0();
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: call_division_by_zero @ 001011d0 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero_constprop_1();
  iVar2 = param_division_by_zero_constprop_0();
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00101210 */

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



/* Function: call_null_pointer_deref @ 00101260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_c = 0x2a;
  iVar1 = param_null_pointer_deref(&local_c,&__stack_chk_guard,0x2a,0);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_buffer_overflow_stack @ 001012e0 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 001012e4 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  void *__ptr;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    param_1 = 0xfffffffe;
  }
  else {
    free(__ptr);
  }
  return param_1;
}



/* Function: FUN_0010131c @ 0010131c */

undefined8 FUN_0010131c(void)

{
  void *__ptr;
  undefined8 uVar1;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar1 = 8;
  }
  else {
    free(__ptr);
    uVar1 = 0x1e;
  }
  return uVar1;
}



/* Function: call_buffer_overflow @ 00101320 */

undefined8 call_buffer_overflow(void)

{
  void *__ptr;
  undefined8 uVar1;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar1 = 8;
  }
  else {
    free(__ptr);
    uVar1 = 0x1e;
  }
  return uVar1;
}



/* Function: param_integer_overflow @ 00101350 */

int param_integer_overflow(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  if (0 < (int)param_1 && 0 < (int)param_2) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  if ((int)(param_1 & param_2) < 0 && 0 < iVar1) {
    iVar1 = -2;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00101384 */

undefined8 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00101390 */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 001013a0 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 001013b0 */

undefined8 param_implementation_defined(void)

{
  return 0x30;
}



/* Function: call_implementation_defined @ 001013c0 */

undefined8 call_implementation_defined(void)

{
  return 0x30;
}



/* Function: test_obf_opt_edge @ 001013d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_obf_opt_edge(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  void *__ptr;
  undefined8 uVar7;
  uint uVar8;
  undefined4 local_2c;
  byte local_28 [31];
  undefined1 local_9;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101638);
  __printf_chk(1,&DAT_00101668,10);
  iVar3 = 6;
  iVar4 = 5;
  do {
    iVar1 = iVar3;
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = iVar4 / iVar1;
    }
    iVar3 = iVar4 - iVar3 * iVar1;
    iVar4 = iVar1;
  } while (iVar3 != 0);
  uVar2 = 0x14;
  if (iVar1 != 1) {
    uVar2 = 0x23;
  }
  __printf_chk(1,&DAT_00101688,uVar2);
  __printf_chk(1,&DAT_001016a8,0xe1);
  strncpy((char *)local_28,&encrypted_0,0x1f);
  uVar8 = (uint)local_28[0];
  local_9 = 0;
  pbVar5 = local_28;
  if (local_28[0] != 0) {
    do {
      *pbVar5 = (byte)uVar8 ^ 0x5a;
      uVar8 = (uint)pbVar5[1];
      pbVar5 = pbVar5 + 1;
    } while (uVar8 != 0);
    uVar8 = (uint)local_28[0];
  }
  sVar6 = strlen((char *)local_28);
  __printf_chk(1,&DAT_001016c8,uVar8 + (int)sVar6);
  __printf_chk(1,&DAT_001016e8,0x7a314);
  __printf_chk(1,&DAT_00101718,0x13ba);
  __printf_chk(1,&DAT_00101740,0x48);
  __printf_chk(1,&DAT_00101768,0x14);
  iVar3 = param_division_by_zero_constprop_1();
  iVar4 = param_division_by_zero_constprop_0();
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_00101788,iVar3 + iVar4);
  local_2c = 0x2a;
  iVar3 = param_null_pointer_deref(&local_2c);
  iVar4 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_001017a8,iVar3 + iVar4);
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar7 = 8;
  }
  else {
    free(__ptr);
    uVar7 = 0x1e;
  }
  __printf_chk(1,&DAT_001017c8,uVar7);
  __printf_chk(1,&DAT_001017e8,2000000000);
  __printf_chk(1,&DAT_00101820,10);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  __printf_chk(1,&DAT_00101840,0x30);
  return;
}



/* Function: _fini @ 00101618 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 50 */
