/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_gcc_O0_no_g
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



/* Function: _start @ 000111b0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000111f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001120b) */
/* WARNING: Removing unreachable block (ram,0x00011215) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011230 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001125e) */
/* WARNING: Removing unreachable block (ram,0x00011268) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011280 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000112dc) */
/* WARNING: Removing unreachable block (ram,0x000112e0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_fake_branch @ 00011321 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 param_fake_branch(undefined4 param_1)

{
  return param_1;
}



/* Function: call_fake_branch @ 00011349 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_fake_branch(void)

{
  param_fake_branch(10);
  return;
}



/* Function: param_opaque_predicate @ 00011366 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = param_1;
  local_18 = param_1 + 1;
  while (local_18 != 0) {
    iVar1 = local_1c % local_18;
    local_1c = local_18;
    local_18 = iVar1;
  }
  if ((param_1 * 2 + param_1 * param_1 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_1c == 1)) {
    iVar1 = (param_1 + 5) * 2;
  }
  else {
    iVar1 = param_1 * 3 + 0x14;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 00011411 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_opaque_predicate(void)

{
  param_opaque_predicate(5);
  return;
}



/* Function: param_instruction_substitution @ 0001142e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00011496 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_instruction_substitution(void)

{
  param_instruction_substitution(10);
  return;
}



/* Function: decrypt_string @ 000114b3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
  byte *local_10;
  
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_10 = param_2; *local_10 != 0; local_10 = local_10 + 1) {
    *local_10 = *local_10 ^ param_4;
  }
  return param_2;
}



/* Function: param_string_encryption @ 00011520 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int param_string_encryption(void)

{
  size_t sVar1;
  int iVar2;
  int in_GS_OFFSET;
  char local_30 [32];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  decrypt_string(&encrypted_0,local_30,0x20,0x5a);
  sVar1 = strlen(local_30);
  iVar2 = (int)local_30[0] + sVar1;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_string_encryption @ 00011588 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_string_encryption(void)

{
  param_string_encryption();
  return;
}



/* Function: param_tail_call_optimized @ 000115a3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_tail_call_optimized(int param_1,int param_2)

{
  if (0 < param_1) {
    param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return param_2;
}



/* Function: call_tail_call_optimized @ 000115df */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_tail_call_optimized(void)

{
  param_tail_call_optimized(1000,0);
  return;
}



/* Function: param_non_tail_call @ 00011607 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

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



/* Function: call_non_tail_call @ 00011641 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_non_tail_call(void)

{
  param_non_tail_call(100);
  return;
}



/* Function: param_vectorized_loop @ 00011664 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
    *(int *)(param_3 + local_14 * 4) =
         *(int *)(param_2 + local_14 * 4) + *(int *)(param_1 + local_14 * 4);
  }
  local_10 = 0;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    local_10 = local_10 + *(int *)(param_3 + local_c * 4);
  }
  return local_10;
}



/* Function: call_vectorized_loop @ 000116fb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_vectorized_loop(void)

{
  uint uVar1;
  int in_GS_OFFSET;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [8];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_70 = 1;
  local_6c = 2;
  local_68 = 3;
  local_64 = 4;
  local_60 = 5;
  local_5c = 6;
  local_58 = 7;
  local_54 = 8;
  local_50 = 8;
  local_4c = 7;
  local_48 = 6;
  local_44 = 5;
  local_40 = 4;
  local_3c = 3;
  local_38 = 2;
  local_34 = 1;
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_30 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  param_vectorized_loop(&local_70,&local_50,local_30,8);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: lto_target_func @ 000117d2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int lto_target_func(int param_1)

{
  return (param_1 + 5) * 2;
}



/* Function: param_link_time_optimization @ 000117e9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void param_link_time_optimization(undefined4 param_1)

{
  lto_target_func(param_1);
  return;
}



/* Function: call_link_time_optimization @ 00011807 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_link_time_optimization(void)

{
  param_link_time_optimization(5);
  return;
}



/* Function: div_zero_handler @ 00011824 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00011856 */

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



/* Function: call_division_by_zero @ 000118b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00011907 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011939 */

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



/* Function: call_null_pointer_deref @ 00011994 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int call_null_pointer_deref(void)

{
  int iVar1;
  int in_GS_OFFSET;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = 0x2a;
  local_18 = param_null_pointer_deref(&local_1c);
  local_14 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  iVar1 = local_14 + local_18;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011a0b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Removing unreachable block (ram,0x00011a5d) */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  int in_GS_OFFSET;
  int local_20;
  undefined1 local_18 [8];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
    local_18[local_20] = 0x41;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    param_1 = __stack_chk_fail_local();
  }
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011a75 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  void *__ptr;
  undefined4 local_14;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    param_1 = 0xfffffffe;
  }
  else {
    for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
      *(undefined1 *)((int)__ptr + local_14) = 0x42;
    }
    free(__ptr);
  }
  return param_1;
}



/* Function: call_buffer_overflow @ 00011adc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar2 + iVar1;
}



/* Function: param_integer_overflow @ 00011b1a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_integer_overflow(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + param_1;
  if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_2 + param_1)) {
    if (((param_1 < 0) && (param_2 < 0)) && (0 < param_2 + param_1)) {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00011b87 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar2 + iVar1;
}



/* Function: param_undefined_behavior @ 00011bc9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int param_undefined_behavior(int param_1)

{
  return param_1 * 2;
}



/* Function: call_undefined_behavior @ 00011beb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_undefined_behavior(void)

{
  undefined4 uVar1;
  
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}



/* Function: param_implementation_defined @ 00011c11 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Removing unreachable block (ram,0x00011c3d) */

undefined4 param_implementation_defined(void)

{
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011c9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_implementation_defined(void)

{
  param_implementation_defined();
  return;
}



/* Function: test_obf_opt_edge @ 00011cb5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_obf_opt_edge(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00012010);
  uVar1 = call_fake_branch();
  printf(&DAT_0001203d,uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_00012059,uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_00012075,uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_00012092,uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_000120b0,uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_000120dc,uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_00012104,uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_0001212c,uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_0001214c,uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_00012168,uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_00012185,uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_000121a4,uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_000121d5,uVar1);
  uVar1 = call_implementation_defined();
  printf(&DAT_000121f4,uVar1);
  return;
}



/* Function: main @ 00011e33 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00011e53 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00011e60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011e9a) */
/* WARNING: Removing unreachable block (ram,0x00011eb0) */
/* WARNING: Removing unreachable block (ram,0x00011ebd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011ecc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 49 */
