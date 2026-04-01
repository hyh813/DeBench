/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_clang_O0_no_g
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



/* Function: _start @ 00011100 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011140 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001115b) */
/* WARNING: Removing unreachable block (ram,0x00011165) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111ae) */
/* WARNING: Removing unreachable block (ram,0x000111b8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111d0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001122c) */
/* WARNING: Removing unreachable block (ram,0x00011230) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_fake_branch @ 00011280 */

/* WARNING: Removing unreachable block (ram,0x000112de) */

int param_fake_branch(int param_1)

{
  int local_c;
  
  local_c = param_1;
  if (param_1 * param_1 < 0) {
    local_c = param_1 * 2 + -0x21524111;
  }
  strlen("test");
  return local_c;
}



/* Function: call_fake_branch @ 00011300 */

void call_fake_branch(void)

{
  param_fake_branch(10);
  return;
}



/* Function: param_opaque_predicate @ 00011330 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  local_10 = param_1;
  local_14 = param_1 + 1;
  while (local_14 != 0) {
    iVar1 = local_14;
    local_14 = local_10 % local_14;
    local_10 = iVar1;
  }
  if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_10 == 1)) {
    local_8 = param_1 * 2 + 10;
  }
  else {
    local_8 = param_1 * 3 + 0x14;
  }
  return local_8;
}



/* Function: call_opaque_predicate @ 00011410 */

void call_opaque_predicate(void)

{
  param_opaque_predicate(5);
  return;
}



/* Function: param_instruction_substitution @ 00011440 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 000114a0 */

void call_instruction_substitution(void)

{
  param_instruction_substitution(10);
  return;
}



/* Function: decrypt_string @ 000114d0 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
  byte *local_c;
  
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
    *local_c = *local_c ^ param_4;
  }
  return param_2;
}



/* Function: param_string_encryption @ 00011550 */

int param_string_encryption(void)

{
  size_t sVar1;
  char local_28 [32];
  
  decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a,&_GLOBAL_OFFSET_TABLE_);
  sVar1 = strlen(local_28);
  return sVar1 + (int)local_28[0];
}



/* Function: call_string_encryption @ 000115b0 */

void call_string_encryption(void)

{
  param_string_encryption();
  return;
}



/* Function: param_tail_call_optimized @ 000115d0 */

int param_tail_call_optimized(int param_1,int param_2)

{
  undefined4 local_c;
  
  if (param_1 < 1) {
    local_c = param_2;
  }
  else {
    local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return local_c;
}



/* Function: call_tail_call_optimized @ 00011630 */

void call_tail_call_optimized(void)

{
  param_tail_call_optimized(1000,0);
  return;
}



/* Function: param_non_tail_call @ 00011660 */

int param_non_tail_call(int param_1)

{
  undefined4 local_c;
  
  if (param_1 < 1) {
    local_c = 0;
  }
  else {
    local_c = param_non_tail_call(param_1 + -1);
    local_c = param_1 + local_c;
  }
  return local_c;
}



/* Function: call_non_tail_call @ 000116c0 */

void call_non_tail_call(void)

{
  param_non_tail_call(100);
  return;
}



/* Function: param_vectorized_loop @ 000116f0 */

int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  for (local_8 = 0; local_8 < param_4; local_8 = local_8 + 1) {
    *(int *)(param_3 + local_8 * 4) =
         *(int *)(param_1 + local_8 * 4) + *(int *)(param_2 + local_8 * 4);
  }
  local_c = 0;
  for (local_10 = 0; local_10 < param_4; local_10 = local_10 + 1) {
    local_c = *(int *)(param_3 + local_10 * 4) + local_c;
  }
  return local_c;
}



/* Function: call_vectorized_loop @ 00011780 */

void call_vectorized_loop(void)

{
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined1 local_28 [32];
  
  memcpy(local_28,&DAT_0001320c,0x20);
  memcpy(local_48,&DAT_0001322c,0x20);
  memset(local_68,0,0x20);
  param_vectorized_loop(local_28,local_48,local_68,8);
  return;
}



/* Function: param_link_time_optimization @ 00011820 */

void param_link_time_optimization(undefined4 param_1)

{
  lto_target_func(param_1);
  return;
}



/* Function: lto_target_func @ 00011850 */

int lto_target_func(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011870 */

void call_link_time_optimization(void)

{
  param_link_time_optimization(5);
  return;
}



/* Function: div_zero_handler @ 000118a0 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000118e0 */

undefined4 param_division_by_zero(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    local_c = (undefined4)(10 / (longlong)param_1);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: call_division_by_zero @ 00011950 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: segv_handler @ 000119b0 */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 000119f0 */

undefined4 param_null_pointer_deref(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_c;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
    local_c = *param_1;
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: call_null_pointer_deref @ 00011a60 */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  
  local_c = 0x2a;
  iVar1 = param_null_pointer_deref(&local_c);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00011ad0 */

/* WARNING: Removing unreachable block (ram,0x00011b1f) */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  int local_14;
  undefined1 auStack_c [8];
  
  for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
    auStack_c[local_14] = 0x41;
  }
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011b40 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  void *__ptr;
  undefined4 local_14;
  undefined4 local_c;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    local_c = 0xfffffffe;
  }
  else {
    for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
      *(undefined1 *)((int)__ptr + local_14) = 0x42;
    }
    free(__ptr);
    local_c = param_1;
  }
  return local_c;
}



/* Function: call_buffer_overflow @ 00011bd0 */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00011c20 */

int param_integer_overflow(int param_1,int param_2)

{
  int local_8;
  
  local_8 = param_1 + param_2;
  if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
    if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
      local_8 = -2;
    }
  }
  else {
    local_8 = -1;
  }
  return local_8;
}



/* Function: call_integer_overflow @ 00011cb0 */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_integer_overflow(1000000000,1000000000,&_GLOBAL_OFFSET_TABLE_);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011d10 */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00011d30 */

undefined4 call_undefined_behavior(void)

{
  undefined4 uVar1;
  
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}



/* Function: param_implementation_defined @ 00011d60 */

undefined4 param_implementation_defined(void)

{
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011e00 */

void call_implementation_defined(void)

{
  param_implementation_defined();
  return;
}



/* Function: test_obf_opt_edge @ 00011e20 */

void test_obf_opt_edge(void)

{
  undefined4 uVar1;
  
  printf(&DAT_0001300d);
  uVar1 = call_fake_branch();
  printf(&DAT_0001303b,uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_00013057,uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_00013073,uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_00013090,uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_000130ac,uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_000130d6,uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_000130fb,uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_00013121,uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_00013141,uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_0001315d,uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_0001317a,uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_00013197,uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_000131c8,uVar1);
  uVar1 = call_implementation_defined();
  printf(&DAT_000131e5,uVar1);
  return;
}



/* Function: main @ 00011fe0 */

undefined4 main(void)

{
  test_obf_opt_edge(0);
  return 0;
}



/* Function: __do_global_ctors_aux @ 00012010 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001202a) */
/* WARNING: Removing unreachable block (ram,0x00012040) */
/* WARNING: Removing unreachable block (ram,0x0001204d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001205c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 47 */
