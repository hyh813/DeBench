/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 000111b0 */

undefined4 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 000111d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000111fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011200 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011210 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001122b) */
/* WARNING: Removing unreachable block (ram,0x00011235) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011250 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001127e) */
/* WARNING: Removing unreachable block (ram,0x00011288) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000112a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000112fc) */
/* WARNING: Removing unreachable block (ram,0x00011300) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011339 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001133d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: div_zero_handler @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 00011380 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 000113b0 */

undefined4 param_fake_branch(undefined4 param_1)

{
  return param_1;
}



/* Function: call_fake_branch @ 000113c0 */

undefined4 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 000113d0 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1 + 1;
  iVar2 = param_1;
  iVar4 = iVar1;
  if (iVar1 != 0) {
    do {
      iVar3 = iVar4;
      iVar4 = iVar2 % iVar3;
      iVar2 = iVar3;
    } while (iVar4 != 0);
    if ((iVar3 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == iVar1 * iVar1)) {
      return param_1 * 2 + 10;
    }
  }
  return param_1 * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00011430 */

undefined4 call_opaque_predicate(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = 5;
  iVar4 = 6;
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



/* Function: param_instruction_substitution @ 00011460 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00011490 */

undefined4 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 000114a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: param_string_encryption @ 00011500 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_string_encryption(void)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  int in_GS_OFFSET;
  byte local_30 [31];
  undefined1 local_11;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x1150b;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  strncpy((char *)local_30,(char *)&encrypted_0,0x1f);
  local_11 = 0;
  pbVar2 = local_30;
  bVar1 = local_30[0];
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar3 = strlen((char *)local_30);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return sVar3 + (int)(char)local_30[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_tail_call_optimized @ 000115b0 */

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



/* Function: call_tail_call_optimized @ 000115d0 */

undefined4 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000115e0 */

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



/* Function: call_non_tail_call @ 00011600 */

undefined4 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00011610 */

int param_vectorized_loop(int param_1,int param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_4) {
    iVar2 = 0;
    do {
      param_3[iVar2] = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_4 != iVar2);
    piVar1 = param_3 + param_4;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_3;
      param_3 = param_3 + 1;
    } while (piVar1 != param_3);
    return iVar2;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00011670 */

int call_vectorized_loop(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int in_GS_OFFSET;
  int local_70 [24];
  int local_10 [3];
  
  local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
  uVar1 = 0;
  local_70[0] = 1;
  local_70[1] = 2;
  local_70[2] = 3;
  local_70[3] = 4;
  local_70[4] = 5;
  local_70[5] = 6;
  local_70[6] = 7;
  local_70[7] = 8;
  local_70[8] = 8;
  local_70[9] = 7;
  local_70[10] = 6;
  local_70[0xb] = 5;
  local_70[0xc] = 4;
  local_70[0xd] = 3;
  local_70[0xe] = 2;
  local_70[0xf] = 1;
  do {
    *(undefined4 *)((int)local_70 + uVar1 + 0x40) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  iVar6 = 8;
  iVar5 = 1;
  piVar4 = local_70 + 0x10;
  iVar2 = 0;
  while( true ) {
    piVar4[iVar2] = iVar5 + iVar6;
    iVar3 = iVar2 + 1;
    if (iVar3 == 8) break;
    iVar5 = local_70[iVar3];
    iVar6 = local_70[iVar2 + 9];
    iVar2 = iVar3;
  }
  iVar5 = 0;
  do {
    iVar5 = iVar5 + *piVar4;
    piVar4 = piVar4 + 1;
  } while (local_10 != piVar4);
  if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_link_time_optimization @ 00011770 */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011780 */

undefined4 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00011790 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_division_by_zero(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(10 / (longlong)param_1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Function: call_division_by_zero @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00011840 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: call_null_pointer_deref @ 00011890 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_buffer_overflow_stack @ 00011900 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011910 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: call_buffer_overflow @ 00011950 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 call_buffer_overflow(void)

{
  void *__ptr;
  undefined4 uVar1;
  
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



/* Function: param_integer_overflow @ 00011990 */

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



/* Function: call_integer_overflow @ 000119d0 */

undefined4 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 000119e0 */

int param_undefined_behavior(int param_1)

{
  return param_1 * 2;
}



/* Function: call_undefined_behavior @ 000119f0 */

undefined4 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00011a00 */

undefined4 param_implementation_defined(void)

{
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011a10 */

undefined4 call_implementation_defined(void)

{
  return 0x2b;
}



/* Function: test_obf_opt_edge @ 00011a20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_obf_opt_edge(void)

{
  undefined4 uVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  int iVar4;
  int in_GS_OFFSET;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00012008);
  __printf_chk(1,&DAT_0001212f,10);
  iVar2 = 5;
  iVar4 = 6;
  do {
    iVar3 = iVar4;
    iVar4 = iVar2 % iVar3;
    iVar2 = iVar3;
  } while (iVar4 != 0);
  uVar1 = 0x14;
  if (iVar3 != 1) {
    uVar1 = 0x23;
  }
  __printf_chk(1,&DAT_0001214b,uVar1);
  __printf_chk(1,&DAT_00012167,0xe1);
  uVar1 = param_string_encryption();
  __printf_chk(1,&DAT_00012184,uVar1);
  __printf_chk(1,&DAT_00012038,0x7a314);
  __printf_chk(1,&DAT_00012064,0x13ba);
  uVar1 = call_vectorized_loop();
  __printf_chk(1,&DAT_0001208c,uVar1);
  __printf_chk(1,&DAT_000120b4,0x14);
  iVar2 = param_division_by_zero(5);
  iVar4 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_000121a0,iVar2 + iVar4);
  local_14 = 0x2a;
  iVar2 = param_null_pointer_deref(&local_14);
  iVar4 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_000121bc,iVar2 + iVar4);
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar1 = 8;
  }
  else {
    free(__ptr);
    uVar1 = 0x1e;
  }
  __printf_chk(1,&DAT_000121d9,uVar1);
  __printf_chk(1,&DAT_000120d4,2000000000);
  __printf_chk(1,&DAT_000121f6,10);
  __printf_chk(1,&DAT_00012108,0x2b);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __stack_chk_fail_local @ 00011c40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011c7a) */
/* WARNING: Removing unreachable block (ram,0x00011c90) */
/* WARNING: Removing unreachable block (ram,0x00011c9d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011cac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 46 */
