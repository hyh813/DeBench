/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/7/7_gcc_O2_no_g
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



/* Function: main @ 00101180 */

undefined8 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 001011a0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001011d0 */

/* WARNING: Removing unreachable block (ram,0x001011e3) */
/* WARNING: Removing unreachable block (ram,0x001011ef) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101200 */

/* WARNING: Removing unreachable block (ram,0x00101224) */
/* WARNING: Removing unreachable block (ram,0x00101230) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101240 */

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



/* Function: div_zero_handler @ 00101290 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 001012c0 */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 001012f0 */

undefined4 param_fake_branch(undefined4 param_1)

{
  return param_1;
}



/* Function: call_fake_branch @ 00101300 */

undefined8 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00101310 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1 + 1;
  iVar4 = iVar2;
  iVar1 = param_1;
  if (iVar2 != 0) {
    do {
      iVar3 = iVar4;
      iVar4 = iVar1 % iVar3;
      iVar1 = iVar3;
    } while (iVar4 != 0);
    if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar2 * iVar2)) {
      return param_1 * 2 + 10;
    }
  }
  return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00101360 */

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
  uVar2 = 0x14;
  if (iVar3 != 1) {
    uVar2 = 0x23;
  }
  return uVar2;
}



/* Function: param_instruction_substitution @ 00101390 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 001013b0 */

undefined8 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 001013c0 */

byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)strncpy(param_2,param_1,param_3);
  pbVar3[param_3 - 1] = 0;
  bVar1 = *pbVar3;
  pbVar2 = pbVar3;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ param_4;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return pbVar3;
}



/* Function: param_string_encryption @ 00101410 */

int param_string_encryption(void)

{
  byte bVar1;
  byte *pbVar2;
  byte *__s;
  size_t sVar3;
  long in_FS_OFFSET;
  byte local_38 [31];
  undefined1 local_19;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (byte *)strncpy((char *)local_38,(char *)&encrypted_0,0x1f);
  local_19 = 0;
  pbVar2 = __s;
  bVar1 = local_38[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar3 = strlen((char *)__s);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)sVar3 + (int)(char)local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_string_encryption @ 00101490 */

void call_string_encryption(void)

{
  param_string_encryption();
  return;
}



/* Function: param_tail_call_optimized @ 001014a0 */

int param_tail_call_optimized(int param_1,int param_2)

{
  if (0 < param_1) {
    do {
      param_2 = param_2 + param_1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 001014c0 */

undefined8 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 001014d0 */

int param_non_tail_call(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 + param_1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 001014f0 */

undefined8 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00101500 */

int param_vectorized_loop(long param_1,long param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = 0;
    do {
      param_3[uVar3] = *(int *)(param_2 + uVar3 * 4) + *(int *)(param_1 + uVar3 * 4);
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_4);
    piVar1 = param_3 + (ulong)(param_4 - 1) + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_3;
      param_3 = param_3 + 1;
    } while (piVar1 != param_3);
    return iVar2;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00101550 */

int call_vectorized_loop(void)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  int local_18 [2];
  long local_10;
  
  iVar3 = 8;
  iVar4 = 1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = (int *)local_38;
  local_38 = (undefined1  [16])0x0;
  local_28 = (undefined1  [16])0x0;
  local_78 = 0x200000001;
  local_70 = 0x400000003;
  local_68 = 0x600000005;
  local_60 = 0x800000007;
  local_58 = 0x700000008;
  local_50 = 0x500000006;
  local_48 = 0x300000004;
  local_40 = 0x100000002;
  lVar1 = 0;
  while( true ) {
    *(int *)((long)piVar2 + lVar1) = iVar4 + iVar3;
    if (lVar1 + 4 == 0x20) break;
    iVar4 = *(int *)((long)&local_78 + lVar1 + 4);
    iVar3 = *(int *)((long)&local_58 + lVar1 + 4);
    lVar1 = lVar1 + 4;
  }
  iVar4 = 0;
  do {
    iVar4 = iVar4 + *piVar2;
    piVar2 = piVar2 + 1;
  } while (local_18 != piVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 00101660 */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101670 */

undefined8 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00101680 */

ulong param_division_by_zero(int param_1)

{
  int iVar1;
  ulong uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = 10 / (long)param_1 & 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_division_by_zero @ 001016d0 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00101710 */

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



/* Function: call_null_pointer_deref @ 00101760 */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_24);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 001017d0 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 001017e0 */

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



/* Function: call_buffer_overflow @ 00101810 */

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



/* Function: param_integer_overflow @ 00101840 */

int param_integer_overflow(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = param_1 + param_2;
  if ((0 < (int)param_1) && (0 < (int)param_2)) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
    iVar1 = -2;
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
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  void *__ptr;
  ulong uVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00102008);
  __printf_chk(1,&DAT_00102137,10);
  uVar5 = 6;
  iVar3 = 5;
  do {
    iVar4 = (int)uVar5;
    lVar1 = (long)iVar3;
    uVar5 = lVar1 % (long)iVar4 & 0xffffffff;
    iVar3 = iVar4;
  } while ((int)(lVar1 % (long)iVar4) != 0);
  uVar6 = 0x14;
  if (iVar4 != 1) {
    uVar6 = 0x23;
  }
  __printf_chk(1,&DAT_00102153,uVar6);
  __printf_chk(1,&DAT_0010216f,0xe1);
  uVar2 = param_string_encryption();
  __printf_chk(1,&DAT_0010218c,uVar2);
  __printf_chk(1,&DAT_00102038,0x7a314);
  __printf_chk(1,&DAT_00102068,0x13ba);
  uVar2 = call_vectorized_loop();
  __printf_chk(1,&DAT_00102090,uVar2);
  __printf_chk(1,&DAT_001020b8,0x14);
  iVar3 = param_division_by_zero(5);
  iVar4 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_001021a8,iVar3 + iVar4);
  local_24 = 0x2a;
  iVar3 = param_null_pointer_deref(&local_24);
  iVar4 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_001021c4,iVar3 + iVar4);
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar6 = 8;
  }
  else {
    free(__ptr);
    uVar6 = 0x1e;
  }
  __printf_chk(1,&DAT_001021e1,uVar6);
  __printf_chk(1,&DAT_001020d8,2000000000);
  __printf_chk(1,&DAT_001021fe,10);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_00102110,0x2f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 00101ae8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
