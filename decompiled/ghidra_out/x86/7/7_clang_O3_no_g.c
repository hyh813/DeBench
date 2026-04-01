/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_clang_O3_no_g
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



/* Function: param_fake_branch @ 00011250 */

undefined4 param_fake_branch(undefined4 param_1)

{
  return param_1;
}



/* Function: call_fake_branch @ 00011260 */

undefined4 call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00011270 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1 + 1;
  iVar1 = -1;
  iVar3 = iVar5;
  iVar4 = param_1;
  while (iVar2 = iVar3, iVar2 != 0) {
    iVar1 = iVar2;
    iVar3 = iVar4 % iVar2;
    iVar4 = iVar2;
  }
  iVar4 = param_1 * 3 + 0x14;
  if (iVar1 == 1 && iVar5 * iVar5 == (param_1 * 2 | 1U) + param_1 * param_1) {
    iVar4 = param_1 * 2 + 10;
  }
  return iVar4;
}



/* Function: call_opaque_predicate @ 000112d0 */

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



/* Function: param_instruction_substitution @ 00011300 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}



/* Function: call_instruction_substitution @ 00011320 */

undefined4 call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00011330 */

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



/* Function: param_string_encryption @ 00011390 */

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



/* Function: call_string_encryption @ 00011400 */

int call_string_encryption(void)

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



/* Function: param_tail_call_optimized @ 00011470 */

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



/* Function: call_tail_call_optimized @ 000114a0 */

undefined4 call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000114b0 */

int param_non_tail_call(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < param_1) {
    uVar1 = param_1 - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(param_1 - 2);
    return (uVar1 * uVar1 + param_1) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
  }
  return 0;
}



/* Function: call_non_tail_call @ 000114e0 */

undefined4 call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 000114f0 */

int param_vectorized_loop(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (0 < (int)param_4) {
    uVar2 = 0;
    if (2 < param_4 - 1) {
      uVar2 = 0;
      do {
        *(int *)(param_3 + uVar2 * 4) =
             *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
        *(int *)(param_3 + 4 + uVar2 * 4) =
             *(int *)(param_2 + 4 + uVar2 * 4) + *(int *)(param_1 + 4 + uVar2 * 4);
        *(int *)(param_3 + 8 + uVar2 * 4) =
             *(int *)(param_2 + 8 + uVar2 * 4) + *(int *)(param_1 + 8 + uVar2 * 4);
        *(int *)(param_3 + 0xc + uVar2 * 4) =
             *(int *)(param_2 + 0xc + uVar2 * 4) + *(int *)(param_1 + 0xc + uVar2 * 4);
        uVar2 = uVar2 + 4;
      } while ((param_4 & 0xfffffffc) != uVar2);
    }
    if ((param_4 & 3) != 0) {
      uVar3 = 0;
      do {
        *(int *)(param_3 + uVar2 * 4 + uVar3 * 4) =
             *(int *)(param_2 + uVar2 * 4 + uVar3 * 4) + *(int *)(param_1 + uVar2 * 4 + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while ((param_4 & 3) != uVar3);
    }
    if (0 < (int)param_4) {
      if (param_4 - 1 < 7) {
        uVar2 = 0;
        iVar1 = 0;
      }
      else {
        uVar2 = 0;
        iVar1 = 0;
        do {
          iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4) + *(int *)(param_3 + 4 + uVar2 * 4) +
                  *(int *)(param_3 + 8 + uVar2 * 4) + *(int *)(param_3 + 0xc + uVar2 * 4) +
                  *(int *)(param_3 + 0x10 + uVar2 * 4) + *(int *)(param_3 + 0x14 + uVar2 * 4) +
                  *(int *)(param_3 + 0x18 + uVar2 * 4) + *(int *)(param_3 + 0x1c + uVar2 * 4);
          uVar2 = uVar2 + 8;
        } while ((param_4 & 0xfffffff8) != uVar2);
      }
      if ((param_4 & 7) == 0) {
        return iVar1;
      }
      uVar3 = 0;
      do {
        iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4 + uVar3 * 4);
        uVar3 = uVar3 + 1;
      } while ((param_4 & 7) != uVar3);
      return iVar1;
    }
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00011610 */

undefined4 call_vectorized_loop(void)

{
  return 0x48;
}



/* Function: param_link_time_optimization @ 00011620 */

int param_link_time_optimization(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011630 */

undefined4 call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 00011640 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00011670 */

undefined4 param_division_by_zero(int param_1)

{
  int iVar1;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return (int)(10 / (longlong)param_1);
}



/* Function: call_division_by_zero @ 000116d0 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00011720 */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011750 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
  int iVar1;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return *param_1;
}



/* Function: call_null_pointer_deref @ 000117b0 */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_10);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011810 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011820 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  return param_1;
}



/* Function: call_buffer_overflow @ 00011830 */

undefined4 call_buffer_overflow(void)

{
  return 0x1e;
}



/* Function: param_integer_overflow @ 00011840 */

int param_integer_overflow(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + param_1;
  if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
    return -1;
  }
  iVar2 = -2;
  if (iVar1 < 1) {
    iVar2 = iVar1;
  }
  if (-1 < (int)(param_2 & param_1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Function: call_integer_overflow @ 00011870 */

undefined4 call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00011880 */

int param_undefined_behavior(int param_1)

{
  return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00011890 */

undefined4 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 000118a0 */

undefined4 param_implementation_defined(void)

{
  return 0x2b;
}



/* Function: call_implementation_defined @ 000118b0 */

undefined4 call_implementation_defined(void)

{
  return 0x2b;
}



/* Function: test_obf_opt_edge @ 000118c0 */

void test_obf_opt_edge(void)

{
  byte bVar1;
  size_t sVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte local_30 [31];
  undefined1 local_11;
  
  puts(&DAT_000121d9);
  printf(&DAT_00012008,10);
  iVar7 = 5;
  iVar6 = 6;
  do {
    iVar5 = iVar6;
    iVar6 = iVar7 % iVar5;
    iVar7 = iVar5;
  } while (iVar6 != 0);
  uVar3 = 0x23;
  if (iVar5 == 1) {
    uVar3 = 0x14;
  }
  printf(&DAT_00012024,uVar3);
  printf(&DAT_00012040,0xe1);
  strncpy((char *)local_30,(char *)&param_string_encryption_encrypted,0x20);
  local_11 = 0;
  if (local_30[0] == 0) {
    iVar7 = 0;
  }
  else {
    pbVar4 = local_30;
    bVar1 = local_30[0];
    do {
      pbVar4 = pbVar4 + 1;
      pbVar4[-1] = bVar1 ^ 0x5a;
      bVar1 = *pbVar4;
    } while (bVar1 != 0);
    iVar7 = (int)(char)local_30[0];
  }
  sVar2 = strlen((char *)local_30);
  printf(&DAT_0001205d,sVar2 + iVar7);
  printf(&DAT_00012079,0x7a314);
  printf(&DAT_000120a3,0x13ba);
  printf(&DAT_000120c8,0x48);
  printf(&DAT_000120ee,0x14);
  iVar7 = param_division_by_zero(5);
  iVar6 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_0001210e,iVar6 + iVar7);
  local_30[0] = 0x2a;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  iVar7 = param_null_pointer_deref(local_30);
  iVar6 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_0001212a,iVar6 + iVar7);
  printf(&DAT_00012147,0x1e);
  printf(&DAT_00012164,2000000000);
  printf(&DAT_00012195,10);
  printf(&DAT_000121b2,0x2b);
  return;
}



/* Function: main @ 00011b10 */

undefined4 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011b30 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011b4a) */
/* WARNING: Removing unreachable block (ram,0x00011b60) */
/* WARNING: Removing unreachable block (ram,0x00011b6d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011b7c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 46 */
