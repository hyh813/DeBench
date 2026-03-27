/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/7/7_clang_Os_no_g
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



/* Function: _start @ 000110d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011110 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112b) */
/* WARNING: Removing unreachable block (ram,0x00011135) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001117e) */
/* WARNING: Removing unreachable block (ram,0x00011188) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111fc) */
/* WARNING: Removing unreachable block (ram,0x00011200) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_fake_branch @ 00011244 */

undefined4 param_fake_branch(undefined4 param_1)

{
  return param_1;
}



/* Function: call_fake_branch @ 00011249 */

undefined4 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 0001124f */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 + 1;
  iVar1 = param_1;
  iVar2 = iVar4;
  if (iVar4 == 0) {
    iVar3 = -1;
  }
  else {
    do {
      iVar3 = iVar2;
      iVar2 = iVar1 % iVar3;
      iVar1 = iVar3;
    } while (iVar2 != 0);
  }
  iVar1 = param_1 * 3 + 0x14;
  if (iVar3 == 1 && iVar4 * iVar4 == (param_1 * 2 | 1U) + param_1 * param_1) {
    iVar1 = param_1 * 2 + 10;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 00011298 */

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
  uVar2 = 0x23;
  if (iVar3 == 1) {
    uVar2 = 0x14;
  }
  return uVar2;
}



/* Function: param_instruction_substitution @ 000112be */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 000112d4 */

undefined4 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 000112da */

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



/* Function: param_string_encryption @ 00011326 */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  int iVar4;
  byte local_2c [31];
  undefined1 local_d;
  
  pbVar3 = local_2c;
  strncpy((char *)local_2c,(char *)&param_string_encryption_encrypted,0x20);
  local_d = 0;
  bVar1 = local_2c[0];
  if (local_2c[0] == 0) {
    iVar4 = 0;
  }
  else {
    do {
      *pbVar3 = bVar1 ^ 0x5a;
      bVar1 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    } while (bVar1 != 0);
    iVar4 = (int)(char)local_2c[0];
  }
  sVar2 = strlen((char *)local_2c);
  return sVar2 + iVar4;
}



/* Function: call_string_encryption @ 00011388 */

void call_string_encryption(void)

{
  param_string_encryption();
  return;
}



/* Function: param_tail_call_optimized @ 000113a2 */

int param_tail_call_optimized(int param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < param_1) {
    uVar1 = param_1 - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(param_1 - 2);
    param_2 = (param_2 + param_1 + uVar1 * uVar1) -
              ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 000113cc */

undefined4 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000113d2 */

int param_non_tail_call(int param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_1 < 1) {
    iVar3 = 0;
  }
  else {
    uVar1 = param_1 - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(param_1 - 2);
    iVar3 = (uVar1 * uVar1 + param_1) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1)
    ;
  }
  return iVar3;
}



/* Function: call_non_tail_call @ 000113f8 */

undefined4 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 000113fe */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_4) {
    iVar2 = 0;
    do {
      *(int *)(param_3 + iVar2 * 4) = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_4 != iVar2);
    if (0 < param_4) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (param_4 != iVar1);
      return iVar2;
    }
  }
  return 0;
}



/* Function: call_vectorized_loop @ 0001143d */

int call_vectorized_loop(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_24 [8];
  
  iVar1 = 0;
  local_24[7] = 0;
  local_24[6] = 0;
  local_24[5] = 0;
  local_24[4] = 0;
  local_24[3] = 0;
  local_24[2] = 0;
  local_24[1] = 0;
  local_24[0] = 0;
  piVar2 = &DAT_00012028;
  piVar4 = &DAT_00012008;
  do {
    local_24[iVar1] = *piVar2 + *piVar4;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 != 8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + local_24[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return iVar1;
}



/* Function: param_link_time_optimization @ 0001149f */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 000114a9 */

undefined4 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 000114af */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000114d8 */

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



/* Function: call_division_by_zero @ 00011526 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 0001156f */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011598 */

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



/* Function: call_null_pointer_deref @ 000115e1 */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_14;
  
  local_14 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011630 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011635 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  return param_1;
}



/* Function: call_buffer_overflow @ 0001163a */

undefined4 call_buffer_overflow(void)

{
  return 0x1e;
}



/* Function: param_integer_overflow @ 00011640 */

int param_integer_overflow(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1;
  if ((((int)param_1 < 1) || ((int)param_2 < 1)) || (-1 < iVar1)) {
    iVar2 = -2;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    if (-1 < (int)(param_2 & param_1)) {
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: call_integer_overflow @ 0001166e */

undefined4 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00011674 */

int param_undefined_behavior(int param_1)

{
  return param_1 * 2;
}



/* Function: call_undefined_behavior @ 0001167b */

undefined4 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00011681 */

undefined4 param_implementation_defined(void)

{
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011687 */

undefined4 call_implementation_defined(void)

{
  return 0x2b;
}



/* Function: test_obf_opt_edge @ 0001168d */

void test_obf_opt_edge(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_28 [8];
  
  puts(&DAT_00012219);
  printf(&DAT_00012048,10);
  iVar1 = 5;
  iVar5 = 6;
  do {
    iVar4 = iVar5;
    iVar5 = iVar1 % iVar4;
    iVar1 = iVar4;
  } while (iVar5 != 0);
  uVar2 = 0x23;
  if (iVar4 == 1) {
    uVar2 = 0x14;
  }
  printf(&DAT_00012064,uVar2);
  printf(&DAT_00012080,0xe1);
  uVar2 = param_string_encryption();
  printf(&DAT_0001209d,uVar2);
  printf(&DAT_000120b9,0x7a314);
  printf(&DAT_000120e3,0x13ba);
  iVar1 = 0;
  local_28[7] = 0;
  local_28[6] = 0;
  local_28[5] = 0;
  local_28[4] = 0;
  local_28[3] = 0;
  local_28[2] = 0;
  local_28[1] = 0;
  local_28[0] = 0;
  piVar3 = &DAT_00012028;
  piVar6 = &DAT_00012008;
  do {
    local_28[iVar1] = *piVar3 + *piVar6;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar1 != 8);
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + local_28[iVar5];
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  printf(&DAT_00012108,iVar1);
  printf(&DAT_0001212e,0x14);
  uVar2 = call_division_by_zero();
  printf(&DAT_0001214e,uVar2);
  uVar2 = call_null_pointer_deref();
  printf(&DAT_0001216a,uVar2);
  printf(&DAT_00012187,0x1e);
  printf(&DAT_000121a4,2000000000);
  printf(&DAT_000121d5,10);
  printf(&DAT_000121f2,0x2b);
  return;
}



/* Function: main @ 00011856 */

undefined4 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011880 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001189a) */
/* WARNING: Removing unreachable block (ram,0x000118b0) */
/* WARNING: Removing unreachable block (ram,0x000118bd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000118cc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 46 */
