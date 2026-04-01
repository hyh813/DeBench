/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/7/7_gcc_O2_no_g
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



/* Function: param_fake_branch @ 00100b20 */

void param_fake_branch(void)

{
  return;
}



/* Function: call_fake_branch @ 00100b24 */

undefined8 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00100b30 */

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



/* Function: call_opaque_predicate @ 00100b90 */

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



/* Function: param_instruction_substitution @ 00100bc0 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00100be4 */

undefined8 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: FUN_00100bec @ 00100bec */

byte * FUN_00100bec(char *param_1,char *param_2,size_t param_3,byte param_4)

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



/* Function: decrypt_string @ 00100bf0 */

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



/* Function: param_string_encryption @ 00100c50 */

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



/* Function: param_tail_call_optimized @ 00100cf4 */

int param_tail_call_optimized(int param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_1) {
    do {
      iVar1 = param_1 + -1;
      param_2 = param_2 + param_1;
      param_1 = iVar1;
    } while (iVar1 != 0);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 00100d20 */

undefined8 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 00100d30 */

int param_non_tail_call(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = param_1 + -1;
      iVar2 = iVar2 + param_1;
      param_1 = iVar1;
    } while (iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_non_tail_call @ 00100d54 */

undefined8 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100d60 */

int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (0 < param_4) {
    lVar3 = 0;
    do {
      *(int *)(param_3 + lVar3 * 4) = *(int *)(param_1 + lVar3 * 4) + *(int *)(param_2 + lVar3 * 4);
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < param_4);
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = lVar3 * 4;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + *(int *)(param_3 + lVar1);
    } while ((int)lVar3 < param_4);
    return iVar2;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00100dc0 */

/* WARNING: Removing unreachable block (ram,0x00100e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void call_vectorized_loop(void)

{
  long lVar1;
  long lVar2;
  int aiStack_6c [27];
  
  aiStack_6c[0x11] = 0;
  aiStack_6c[0x12] = 0;
  aiStack_6c[0x13] = 0;
  aiStack_6c[0x14] = 0;
  aiStack_6c[0x15] = 0;
  aiStack_6c[0x16] = 0;
  aiStack_6c[0x17] = 0;
  aiStack_6c[0x18] = 0;
  aiStack_6c[3] = 3;
  aiStack_6c[4] = 4;
  aiStack_6c[1] = 1;
  aiStack_6c[2] = 2;
  aiStack_6c[7] = 7;
  aiStack_6c[8] = 8;
  aiStack_6c[5] = 5;
  aiStack_6c[6] = 6;
  aiStack_6c[0xb] = 6;
  aiStack_6c[0xc] = 5;
  aiStack_6c[9] = 8;
  aiStack_6c[10] = 7;
  aiStack_6c[0xf] = 2;
  aiStack_6c[0x10] = 1;
  aiStack_6c[0xd] = 4;
  aiStack_6c[0xe] = 3;
  lVar2 = 1;
  do {
    lVar1 = lVar2 + 1;
    aiStack_6c[lVar2 + 0x10] = aiStack_6c[lVar2] + aiStack_6c[lVar2 + 8];
    lVar2 = lVar1;
  } while (lVar1 != 9);
  lVar2 = 1;
  do {
    lVar2 = lVar2 + 1;
  } while (lVar2 != 9);
  return;
}



/* Function: param_link_time_optimization @ 00100e90 */

int param_link_time_optimization(int param_1)

{
  return (param_1 + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100ea0 */

undefined8 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00100eb0 */

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



/* Function: FUN_00100efc @ 00100efc */

int FUN_00100efc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: call_division_by_zero @ 00100f00 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100f40 */

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



/* Function: call_null_pointer_deref @ 00100f90 */

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



/* Function: param_buffer_overflow_stack @ 00101010 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 00101014 */

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



/* Function: FUN_0010104c @ 0010104c */

undefined8 FUN_0010104c(void)

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



/* Function: call_buffer_overflow @ 00101050 */

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



/* Function: param_integer_overflow @ 00101080 */

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



/* Function: call_integer_overflow @ 001010b4 */

undefined8 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 001010c0 */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 001010d0 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 001010e0 */

undefined8 param_implementation_defined(void)

{
  return 0x30;
}



/* Function: call_implementation_defined @ 001010f0 */

undefined8 call_implementation_defined(void)

{
  return 0x30;
}



/* Function: test_obf_opt_edge @ 00101100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_obf_opt_edge(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  undefined8 uVar5;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101328);
  __printf_chk(1,&DAT_00101358,10);
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
  __printf_chk(1,&DAT_00101378,uVar2);
  __printf_chk(1,&DAT_00101398,0xe1);
  uVar2 = param_string_encryption();
  __printf_chk(1,&DAT_001013b8,uVar2);
  __printf_chk(1,&DAT_001013d8,0x7a314);
  __printf_chk(1,&DAT_00101408,0x13ba);
  uVar2 = call_vectorized_loop();
  __printf_chk(1,&DAT_00101430,uVar2);
  __printf_chk(1,&DAT_00101458,0x14);
  iVar3 = param_division_by_zero(5);
  iVar4 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_00101478,iVar3 + iVar4);
  local_c = 0x2a;
  iVar3 = param_null_pointer_deref(&local_c);
  iVar4 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_00101498,iVar3 + iVar4);
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar5 = 8;
  }
  else {
    free(__ptr);
    uVar5 = 0x1e;
  }
  __printf_chk(1,&DAT_001014b8,uVar5);
  __printf_chk(1,&DAT_001014d8,2000000000);
  __printf_chk(1,&DAT_00101510,10);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,&DAT_00101530,0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: _fini @ 0010130c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 45 */
