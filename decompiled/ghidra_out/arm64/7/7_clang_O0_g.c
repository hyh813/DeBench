/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/7/7_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100748 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100760 @ 00100760 */

void FUN_00100760(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100840 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100874 */

/* WARNING: Removing unreachable block (ram,0x00100884) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100890 */

/* WARNING: Removing unreachable block (ram,0x001008a8) */
/* WARNING: Removing unreachable block (ram,0x001008b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001008c0 */

/* WARNING: Removing unreachable block (ram,0x001008e4) */
/* WARNING: Removing unreachable block (ram,0x001008f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001008fc @ 001008fc */

void FUN_001008fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100900 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: param_fake_branch @ 00100954 */

/* WARNING: Removing unreachable block (ram,0x001009b8) */

int param_fake_branch(int x)

{
  int local_18;
  
                    /* Unresolved local var: int result@[DW_OP_breg31(sp): +8]
                       Unresolved local var: char * str@[DW_OP_breg31(sp): 0] */
  local_18 = x;
  if (x * x < 0) {
    local_18 = x * 2 + -0x21524111;
  }
  strlen("test");
  return local_18;
}



/* Function: call_fake_branch @ 001009dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  int iVar1;
  
  iVar1 = param_fake_branch(10);
  return iVar1;
}



/* Function: param_opaque_predicate @ 001009f4 */

int param_opaque_predicate(int x)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_4;
  
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p2@[???]
                       Unresolved local var: int p3@[???] */
  local_14 = x + 1;
  local_10 = x;
  while (local_14 != 0) {
                    /* Unresolved local var: int temp@[???] */
    iVar1 = 0;
    if (local_14 != 0) {
      iVar1 = local_10 / local_14;
    }
    iVar1 = local_10 - iVar1 * local_14;
    local_10 = local_14;
    local_14 = iVar1;
  }
  if ((x * x + x * 2 + 1 == (x + 1) * (x + 1)) && (local_10 == 1)) {
    local_4 = x * 2 + 10;
  }
  else {
    local_4 = x * 3 + 0x14;
  }
  return local_4;
}



/* Function: call_opaque_predicate @ 00100b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  
  iVar1 = param_opaque_predicate(5);
  return iVar1;
}



/* Function: param_instruction_substitution @ 00100b38 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: uint ux@[???]
                       Unresolved local var: int div2@[???]
                       Unresolved local var: int mod16@[???]
                       Unresolved local var: int mul15@[???] */
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00100bb4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  int iVar1;
  
  iVar1 = param_instruction_substitution(10);
  return iVar1;
}



/* Function: decrypt_string @ 00100bcc */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte *local_38;
  
                    /* Unresolved local var: char * p@[DW_OP_breg31(sp): +8] */
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  for (local_38 = (byte *)buffer; *local_38 != 0; local_38 = local_38 + 1) {
    *local_38 = *local_38 ^ key;
  }
  return buffer;
}



/* Function: param_string_encryption @ 00100c5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  size_t sVar1;
  byte local_30 [32];
  
                    /* Unresolved local var: char[32] decrypted@[DW_OP_breg31(sp): +16] */
  decrypt_string(param_string_encryption::encrypted,(char *)local_30,0x20,'Z');
  sVar1 = strlen((char *)local_30);
  return (int)sVar1 + (uint)local_30[0];
}



/* Function: call_string_encryption @ 00100ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 00100cb8 */

int param_tail_call_optimized(int n,int acc)

{
  undefined4 local_14;
  
  local_14 = acc;
  if (0 < n) {
    local_14 = param_tail_call_optimized(n + -1,acc + n);
  }
  return local_14;
}



/* Function: call_tail_call_optimized @ 00100d18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  int iVar1;
  
  iVar1 = param_tail_call_optimized(1000,0);
  return iVar1;
}



/* Function: param_non_tail_call @ 00100d34 */

int param_non_tail_call(int n)

{
  undefined4 local_14;
  
  if (n < 1) {
    local_14 = 0;
  }
  else {
    local_14 = param_non_tail_call(n + -1);
    local_14 = n + local_14;
  }
  return local_14;
}



/* Function: call_non_tail_call @ 00100d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 00100da8 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int local_28;
  int local_24;
  int local_20;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  for (local_20 = 0; local_20 < n; local_20 = local_20 + 1) {
    c[local_20] = a[local_20] + b[local_20];
  }
  local_24 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_28 = 0; local_28 < n; local_28 = local_28 + 1) {
    local_24 = local_24 + c[local_28];
  }
  return local_24;
}



/* Function: call_vectorized_loop @ 00100e6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  int local_70 [24];
  
                    /* Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[DW_OP_breg31(sp): +32]
                       Unresolved local var: int[8] c@[DW_OP_breg31(sp): 0] */
  local_70[0x12] = 3;
  local_70[0x13] = 4;
  local_70[0x10] = 1;
  local_70[0x11] = 2;
  local_70[0x16] = 7;
  local_70[0x17] = 8;
  local_70[0x14] = 5;
  local_70[0x15] = 6;
  local_70[10] = 6;
  local_70[0xb] = 5;
  local_70[8] = 8;
  local_70[9] = 7;
  local_70[0xe] = 2;
  local_70[0xf] = 1;
  local_70[0xc] = 4;
  local_70[0xd] = 3;
  local_70[2] = 0;
  local_70[3] = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  local_70[6] = 0;
  local_70[7] = 0;
  local_70[4] = 0;
  local_70[5] = 0;
  iVar1 = param_vectorized_loop(local_70 + 0x10,local_70 + 8,local_70,8);
  return iVar1;
}



/* Function: param_link_time_optimization @ 00100ed4 */

int param_link_time_optimization(int x)

{
  int iVar1;
  
  iVar1 = lto_target_func(x);
  return iVar1;
}



/* Function: lto_target_func @ 00100ef8 */

int lto_target_func(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00100f14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  int iVar1;
  
  iVar1 = param_link_time_optimization(5);
  return iVar1;
}



/* Function: div_zero_handler @ 00100f2c */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00100f54 */

int param_division_by_zero(int x)

{
  int iVar1;
  int local_14;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[DW_OP_breg31(sp): +4] */
    local_14 = 0;
    if (x != 0) {
      local_14 = 10 / x;
    }
  }
  else {
    local_14 = -1;
  }
  return local_14;
}



/* Function: call_division_by_zero @ 00100fc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[DW_OP_breg31(sp): +8] */
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: segv_handler @ 00101008 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101030 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int local_14;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int val@[DW_OP_breg31(sp): +12] */
    local_14 = *p;
  }
  else {
    local_14 = -1;
  }
  return local_14;
}



/* Function: call_null_pointer_deref @ 00101098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int local_14;
  
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  local_14 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 001010ec */

/* WARNING: Removing unreachable block (ram,0x00101164) */

int param_buffer_overflow_stack(int x)

{
  int local_14;
  undefined1 auStack_c [8];
  int local_4;
  
  local_4 = x;
                    /* Unresolved local var: char[8] buffer@[???]
                       Unresolved local var: int canary@[???] */
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
    auStack_c[local_14] = 0x41;
  }
  return local_4;
}



/* Function: param_buffer_overflow_heap @ 0010117c */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  undefined4 local_24;
  undefined4 local_14;
  
                    /* Unresolved local var: char * heap_buffer@[DW_OP_breg31(sp): +16] */
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    local_14 = -2;
  }
  else {
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +12] */
    for (local_24 = 0; local_24 < 0x21; local_24 = local_24 + 1) {
      *(undefined1 *)((long)__ptr + (long)local_24) = 0x42;
    }
    free(__ptr);
    local_14 = x;
  }
  return local_14;
}



/* Function: call_buffer_overflow @ 00101214 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[DW_OP_breg31(sp): +8] */
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101250 */

int param_integer_overflow(int a,int b)

{
  int local_4;
  
                    /* Unresolved local var: int signed_sum@[???]
                       Unresolved local var: uint ua@[???]
                       Unresolved local var: uint ub@[???]
                       Unresolved local var: uint unsigned_sum@[???] */
  local_4 = a + b;
  if (((a < 1) || (b < 1)) || (-1 < a + b)) {
    if (((a < 0) && (b < 0)) && (0 < a + b)) {
      local_4 = -2;
    }
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



/* Function: call_integer_overflow @ 0010131c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[DW_OP_breg31(sp): +8] */
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(-1,1);
  return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101364 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i << 1;
}



/* Function: call_undefined_behavior @ 00101384 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = param_undefined_behavior(5);
  return iVar1;
}



/* Function: param_implementation_defined @ 001013ac */

/* WARNING: Removing unreachable block (ram,0x001013c8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x30;
}



/* Function: call_implementation_defined @ 00101460 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  int iVar1;
  
  iVar1 = param_implementation_defined();
  return iVar1;
}



/* Function: test_obf_opt_edge @ 00101474 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  uint uVar1;
  
  printf(&DAT_001015f1);
  uVar1 = call_fake_branch();
  printf(&DAT_0010161f,(ulong)uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_0010163b,(ulong)uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_00101657,(ulong)uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_00101674,(ulong)uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_00101690,(ulong)uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_001016ba,(ulong)uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_001016df,(ulong)uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_00101705,(ulong)uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_00101725,(ulong)uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_00101741,(ulong)uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_0010175e,(ulong)uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_0010177b,(ulong)uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_001017ac,(ulong)uVar1);
  uVar1 = call_implementation_defined();
  printf(&DAT_001017c9,(ulong)uVar1);
  return;
}



/* Function: main @ 001015a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 001015d4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 44 */
