/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_clang_O0_no_g
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



/* Function: _start @ 001010d0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101100 */

/* WARNING: Removing unreachable block (ram,0x00101113) */
/* WARNING: Removing unreachable block (ram,0x0010111f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101130 */

/* WARNING: Removing unreachable block (ram,0x00101154) */
/* WARNING: Removing unreachable block (ram,0x00101160) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101170 */

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



/* Function: param_fake_branch @ 001011c0 */

/* WARNING: Removing unreachable block (ram,0x0010120d) */

int param_fake_branch(int param_1)

{
  int local_10;
  
  local_10 = param_1;
  if (param_1 * param_1 < 0) {
    local_10 = param_1 * 2 + -0x21524111;
  }
  strlen("test");
  return local_10;
}



/* Function: call_fake_branch @ 00101230 */

void call_fake_branch(void)

{
  param_fake_branch(10);
  return;
}



/* Function: param_opaque_predicate @ 00101240 */

int param_opaque_predicate(int param_1)

{
  int iVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  
  local_1c = param_1 + 1;
  local_18 = param_1;
  while (local_1c != 0) {
    iVar1 = local_18 % local_1c;
    local_18 = local_1c;
    local_1c = iVar1;
  }
  if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_18 == 1)) {
    local_c = param_1 * 2 + 10;
  }
  else {
    local_c = param_1 * 3 + 0x14;
  }
  return local_c;
}



/* Function: call_opaque_predicate @ 00101320 */

void call_opaque_predicate(void)

{
  param_opaque_predicate(5);
  return;
}



/* Function: param_instruction_substitution @ 00101330 */

int param_instruction_substitution(uint param_1)

{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}



/* Function: call_instruction_substitution @ 00101380 */

void call_instruction_substitution(void)

{
  param_instruction_substitution(10);
  return;
}



/* Function: decrypt_string @ 00101390 */

byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)

{
  byte *local_30;
  
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_30 = param_2; *local_30 != 0; local_30 = local_30 + 1) {
    *local_30 = *local_30 ^ param_4;
  }
  return param_2;
}



/* Function: param_string_encryption @ 00101410 */

long param_string_encryption(void)

{
  size_t sVar1;
  char local_28 [32];
  
  decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
  sVar1 = strlen(local_28);
  return sVar1 + (long)local_28[0];
}



/* Function: call_string_encryption @ 00101450 */

void call_string_encryption(void)

{
  param_string_encryption();
  return;
}



/* Function: param_tail_call_optimized @ 00101460 */

int param_tail_call_optimized(int param_1,int param_2)

{
  undefined4 local_c;
  
  local_c = param_2;
  if (0 < param_1) {
    local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return local_c;
}



/* Function: call_tail_call_optimized @ 001014a0 */

void call_tail_call_optimized(void)

{
  param_tail_call_optimized(1000,0);
  return;
}



/* Function: param_non_tail_call @ 001014c0 */

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



/* Function: call_non_tail_call @ 00101510 */

void call_non_tail_call(void)

{
  param_non_tail_call(100);
  return;
}



/* Function: param_vectorized_loop @ 00101520 */

int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  for (local_28 = 0; local_28 < param_4; local_28 = local_28 + 1) {
    *(int *)(param_3 + (long)local_28 * 4) =
         *(int *)(param_1 + (long)local_28 * 4) + *(int *)(param_2 + (long)local_28 * 4);
  }
  local_2c = 0;
  for (local_30 = 0; local_30 < param_4; local_30 = local_30 + 1) {
    local_2c = *(int *)(param_3 + (long)local_30 * 4) + local_2c;
  }
  return local_2c;
}



/* Function: call_vectorized_loop @ 001015c0 */

void call_vectorized_loop(void)

{
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0x200000001;
  local_20 = 0x400000003;
  local_18 = 0x600000005;
  local_10 = 0x800000007;
  local_48 = 0x700000008;
  local_40 = 0x500000006;
  local_38 = 0x300000004;
  local_30 = 0x100000002;
  memset(local_68,0,0x20);
  param_vectorized_loop(&local_28,&local_48,local_68,8);
  return;
}



/* Function: param_link_time_optimization @ 00101650 */

void param_link_time_optimization(undefined4 param_1)

{
  lto_target_func(param_1);
  return;
}



/* Function: lto_target_func @ 00101670 */

int lto_target_func(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101690 */

void call_link_time_optimization(void)

{
  param_link_time_optimization(5);
  return;
}



/* Function: div_zero_handler @ 001016a0 */

void div_zero_handler(void)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 001016d0 */

undefined4 param_division_by_zero(int param_1)

{
  int iVar1;
  undefined4 local_c;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    local_c = (undefined4)(10 / (long)param_1);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: call_division_by_zero @ 00101730 */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: segv_handler @ 00101770 */

void segv_handler(void)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001017a0 */

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



/* Function: call_null_pointer_deref @ 00101800 */

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



/* Function: param_buffer_overflow_stack @ 00101850 */

/* WARNING: Removing unreachable block (ram,0x0010189e) */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  int local_1c;
  undefined1 auStack_14 [8];
  undefined4 local_c;
  
  local_c = param_1;
  for (local_1c = 0; local_1c < 0x11; local_1c = local_1c + 1) {
    auStack_14[local_1c] = 0x41;
  }
  return local_c;
}



/* Function: param_buffer_overflow_heap @ 001018b0 */

undefined4 param_buffer_overflow_heap(undefined4 param_1)

{
  void *__ptr;
  undefined4 local_1c;
  undefined4 local_c;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    local_c = 0xfffffffe;
  }
  else {
    for (local_1c = 0; local_1c < 0x21; local_1c = local_1c + 1) {
      *(undefined1 *)((long)__ptr + (long)local_1c) = 0x42;
    }
    free(__ptr);
    local_c = param_1;
  }
  return local_c;
}



/* Function: call_buffer_overflow @ 00101930 */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101960 */

int param_integer_overflow(int param_1,int param_2)

{
  int local_c;
  
  local_c = param_1 + param_2;
  if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
    if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
      local_c = -2;
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_integer_overflow @ 001019f0 */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_integer_overflow(1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101a30 */

int param_undefined_behavior(int param_1)

{
  return param_1 << 1;
}



/* Function: call_undefined_behavior @ 00101a50 */

undefined4 call_undefined_behavior(void)

{
  undefined4 uVar1;
  
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}



/* Function: param_implementation_defined @ 00101a70 */

undefined4 param_implementation_defined(void)

{
  return 0x2f;
}



/* Function: call_implementation_defined @ 00101b00 */

void call_implementation_defined(void)

{
  param_implementation_defined();
  return;
}



/* Function: test_obf_opt_edge @ 00101b10 */

void test_obf_opt_edge(void)

{
  uint uVar1;
  
  printf(&DAT_00102009);
  uVar1 = call_fake_branch();
  printf(&DAT_00102037,(ulong)uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_00102053,(ulong)uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_0010206f,(ulong)uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_0010208c,(ulong)uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_001020a8,(ulong)uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_001020d2,(ulong)uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_001020f7,(ulong)uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_0010211d,(ulong)uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_0010213d,(ulong)uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_00102159,(ulong)uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_00102176,(ulong)uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_00102193,(ulong)uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_001021c4,(ulong)uVar1);
  uVar1 = call_implementation_defined();
  printf(&DAT_001021e1,(ulong)uVar1);
  return;
}



/* Function: main @ 00101c50 */

undefined8 main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 00101c6c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 42 */
