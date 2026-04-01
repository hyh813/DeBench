/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/7/7_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000104ac */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010568 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000105ac */

/* WARNING: Removing unreachable block (ram,0x000105c0) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000105d0 */

/* WARNING: Removing unreachable block (ram,0x000105f0) */
/* WARNING: Removing unreachable block (ram,0x000105fc) */
/* WARNING: Removing unreachable block (ram,0x00010600) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010614 */

/* WARNING: Removing unreachable block (ram,0x00010640) */
/* WARNING: Removing unreachable block (ram,0x0001064c) */
/* WARNING: Removing unreachable block (ram,0x00010650) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010664 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: param_fake_branch @ 000106d0 */

/* WARNING: Removing unreachable block (ram,0x0001072c) */

int param_fake_branch(int x)

{
  int local_10;
  
                    /* Unresolved local var: int result@[DW_OP_breg13(sp): +8]
                       Unresolved local var: char * str@[DW_OP_breg13(sp): +4] */
  local_10 = x;
  if (0x7fffffff < (uint)(x * x)) {
    local_10 = x * 2 + -0x21524111;
  }
  strlen("test");
  return local_10;
}



/* Function: call_fake_branch @ 00010758 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  int iVar1;
  
  iVar1 = param_fake_branch(10);
  return iVar1;
}



/* Function: param_opaque_predicate @ 00010770 */

int param_opaque_predicate(int x)

{
  int extraout_r1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_c;
  
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[DW_OP_breg13(sp): +16]
                       Unresolved local var: int b@[DW_OP_breg13(sp): +12]
                       Unresolved local var: int p2@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int p3@[DW_OP_breg13(sp): 0] */
  local_1c = x + 1;
  local_18 = x;
  while (local_1c != 0) {
                    /* Unresolved local var: int temp@[DW_OP_breg13(sp): +8] */
    __aeabi_idivmod(local_18,local_1c);
    local_18 = local_1c;
    local_1c = extraout_r1;
  }
  if (((x * x + x * 2) - (x + 1) * (x + 1) == -1) && (local_18 == 1)) {
    local_c = x * 2 + 10;
  }
  else {
    local_c = x * 3 + 0x14;
  }
  return local_c;
}



/* Function: call_opaque_predicate @ 00010878 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  
  iVar1 = param_opaque_predicate(5);
  return iVar1;
}



/* Function: param_instruction_substitution @ 00010890 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg13(sp): +16]
                       Unresolved local var: uint ux@[DW_OP_breg13(sp): +12]
                       Unresolved local var: int div2@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int mod16@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int mul15@[DW_OP_breg13(sp): 0] */
  return x * 6 + ((uint)x >> 1) + (x & 0xfU) + x * 0xf;
}



/* Function: call_instruction_substitution @ 00010900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  int iVar1;
  
  iVar1 = param_instruction_substitution(10);
  return iVar1;
}



/* Function: decrypt_string @ 00010918 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte *local_1c;
  
                    /* Unresolved local var: char * p@[DW_OP_breg13(sp): +4] */
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  for (local_1c = (byte *)buffer; *local_1c != 0; local_1c = local_1c + 1) {
    *local_1c = *local_1c ^ key;
  }
  return buffer;
}



/* Function: param_string_encryption @ 000109ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  size_t sVar1;
  byte local_28 [32];
  
                    /* Unresolved local var: char[32] decrypted@[DW_OP_breg13(sp): +8] */
  decrypt_string(param_string_encryption::encrypted,(char *)local_28,0x20,'Z');
  sVar1 = strlen((char *)local_28);
  return sVar1 + local_28[0];
}



/* Function: call_string_encryption @ 000109f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 00010a08 */

int param_tail_call_optimized(int n,int acc)

{
  undefined4 local_c;
  
  local_c = acc;
  if (0 < n) {
    local_c = param_tail_call_optimized(n + -1,acc + n);
  }
  return local_c;
}



/* Function: call_tail_call_optimized @ 00010a64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  int iVar1;
  
  iVar1 = param_tail_call_optimized(1000,0);
  return iVar1;
}



/* Function: param_non_tail_call @ 00010a80 */

int param_non_tail_call(int n)

{
  undefined4 local_c;
  
  if (n < 1) {
    local_c = 0;
  }
  else {
    local_c = param_non_tail_call(n + -1);
    local_c = n + local_c;
  }
  return local_c;
}



/* Function: call_non_tail_call @ 00010ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 00010af8 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int local_1c;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): +8] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    c[local_14] = a[local_14] + b[local_14];
  }
  local_18 = 0;
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
  for (local_1c = 0; local_1c < n; local_1c = local_1c + 1) {
    local_18 = local_18 + c[local_1c];
  }
  return local_18;
}



/* Function: call_vectorized_loop @ 00010bbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  int local_70 [9];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
                    /* Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[DW_OP_breg13(sp): +32]
                       Unresolved local var: int[8] c@[DW_OP_breg13(sp): 0] */
  local_30 = 1;
  uStack_2c = 2;
  uStack_28 = 3;
  uStack_24 = 4;
  local_20 = 5;
  uStack_1c = 6;
  uStack_18 = 7;
  uStack_14 = 8;
  local_70[8] = 8;
  uStack_4c = 7;
  uStack_48 = 6;
  uStack_44 = 5;
  local_40 = 4;
  uStack_3c = 3;
  uStack_38 = 2;
  uStack_34 = 1;
  local_70[7] = 0;
  local_70[6] = 0;
  local_70[5] = 0;
  local_70[4] = 0;
  local_70[3] = 0;
  local_70[2] = 0;
  local_70[1] = 0;
  local_70[0] = 0;
  iVar1 = param_vectorized_loop(&local_30,local_70 + 8,local_70,8);
  return iVar1;
}



/* Function: param_link_time_optimization @ 00010c4c */

int param_link_time_optimization(int x)

{
  int iVar1;
  
  iVar1 = lto_target_func(x);
  return iVar1;
}



/* Function: lto_target_func @ 00010c70 */

int lto_target_func(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00010c8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  int iVar1;
  
  iVar1 = param_link_time_optimization(5);
  return iVar1;
}



/* Function: div_zero_handler @ 00010ca4 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010cd8 */

int param_division_by_zero(int x)

{
  int iVar1;
  int local_c;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[DW_OP_breg13(sp): +4] */
    local_c = __divsi3(10,x);
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_division_by_zero @ 00010d50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[DW_OP_breg13(sp): +8] */
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010d9c */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010dd0 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int local_c;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int val@[DW_OP_breg13(sp): +4] */
    local_c = *p;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_null_pointer_deref @ 00010e44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int local_c;
  
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int r2@[DW_OP_breg13(sp): +4] */
  local_c = 0x2a;
  iVar1 = param_null_pointer_deref(&local_c);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00010e98 */

/* WARNING: Removing unreachable block (ram,0x00010f08) */

int param_buffer_overflow_stack(int x)

{
  int local_14;
  undefined1 auStack_c [8];
  int local_4;
  
  local_4 = x;
                    /* Unresolved local var: char[8] buffer@[DW_OP_breg13(sp): +12]
                       Unresolved local var: int canary@[DW_OP_breg13(sp): +8] */
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
  for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
    auStack_c[local_14] = 0x41;
  }
  return local_4;
}



/* Function: param_buffer_overflow_heap @ 00010f24 */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  undefined4 local_18;
  undefined4 local_c;
  
                    /* Unresolved local var: char * heap_buffer@[DW_OP_breg13(sp): +4] */
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    local_c = -2;
  }
  else {
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
    for (local_18 = 0; local_18 < 0x21; local_18 = local_18 + 1) {
      *(undefined1 *)((int)__ptr + local_18) = 0x42;
    }
    free(__ptr);
    local_c = x;
  }
  return local_c;
}



/* Function: call_buffer_overflow @ 00010fc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int r2@[DW_OP_breg13(sp): 0] */
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00010ffc */

int param_integer_overflow(int a,int b)

{
  int local_4;
  
                    /* Unresolved local var: int signed_sum@[DW_OP_breg13(sp): +12]
                       Unresolved local var: uint ua@[DW_OP_breg13(sp): +8]
                       Unresolved local var: uint ub@[DW_OP_breg13(sp): +4]
                       Unresolved local var: uint unsigned_sum@[DW_OP_breg13(sp): 0] */
  local_4 = a + b;
  if (((a < 1) || (b < 1)) || ((uint)(a + b) < 0x80000000)) {
    if (((0x7fffffff < (uint)a) && (0x7fffffff < (uint)b)) && (0 < a + b)) {
      local_4 = -2;
    }
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



/* Function: call_integer_overflow @ 000110c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int r2@[DW_OP_breg13(sp): 0] */
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(-1,1);
  return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00011110 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[DW_OP_breg13(sp): 0] */
  return i << 1;
}



/* Function: call_undefined_behavior @ 00011130 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
  int iVar1;
  
                    /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
  iVar1 = param_undefined_behavior(5);
  return iVar1;
}



/* Function: param_implementation_defined @ 00011158 */

/* WARNING: Removing unreachable block (ram,0x00011178) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[DW_OP_breg13(sp): +12]
                       Unresolved local var: char c@[DW_OP_breg13(sp): +11]
                       Unresolved local var: int s@[DW_OP_breg13(sp): +4]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[DW_OP_breg13(sp): 0]
                        */
  return 0x2c;
}



/* Function: call_implementation_defined @ 00011204 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  int iVar1;
  
  iVar1 = param_implementation_defined();
  return iVar1;
}



/* Function: test_obf_opt_edge @ 00011218 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  int iVar1;
  
  printf(&DAT_000116a5);
  iVar1 = call_fake_branch();
  printf(&DAT_000116d3,iVar1);
  iVar1 = call_opaque_predicate();
  printf(&DAT_000116ef,iVar1);
  iVar1 = call_instruction_substitution();
  printf(&DAT_0001170b,iVar1);
  iVar1 = call_string_encryption();
  printf(&DAT_00011728,iVar1);
  iVar1 = call_tail_call_optimized();
  printf(&DAT_00011744,iVar1);
  iVar1 = call_non_tail_call();
  printf(&DAT_0001176e,iVar1);
  iVar1 = call_vectorized_loop();
  printf(&DAT_00011793,iVar1);
  iVar1 = call_link_time_optimization();
  printf(&DAT_000117b9,iVar1);
  iVar1 = call_division_by_zero();
  printf(&DAT_000117d9,iVar1);
  iVar1 = call_null_pointer_deref();
  printf(&DAT_000117f5,iVar1);
  iVar1 = call_buffer_overflow();
  printf(&DAT_00011812,iVar1);
  iVar1 = call_integer_overflow();
  printf(&DAT_0001182f,iVar1);
  iVar1 = call_undefined_behavior();
  printf(&DAT_00011860,iVar1);
  iVar1 = call_implementation_defined();
  printf(&DAT_0001187d,iVar1);
  return;
}



/* Function: main @ 00011388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __divsi3 @ 000113b4 */

uint __divsi3(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  
  if (param_2 == 0) {
    bVar5 = (int)param_1 < 0;
    if (0 < (int)param_1) {
      param_1 = 0x7fffffff;
    }
    if (bVar5) {
      param_1 = 0x80000000;
    }
    uVar1 = __aeabi_ldiv0(param_1);
    return uVar1;
  }
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if ((int)param_2 < 0) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000113fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11404))();
  return uVar1;
}



/* Function: .divsi3_skip_div0_test @ 000113bc */

uint _divsi3_skip_div0_test(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool in_NG;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  
  uVar4 = param_1 ^ param_2;
  uVar1 = param_2;
  if (in_NG) {
    uVar1 = -param_2;
  }
  if (uVar1 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return param_1;
  }
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  if (uVar3 <= uVar1) {
    if (uVar3 < uVar1) {
      param_1 = 0;
    }
    if (uVar3 == uVar1) {
      param_1 = (int)uVar4 >> 0x1f | 1;
    }
    return param_1;
  }
  if ((uVar1 & uVar1 - 1) == 0) {
    uVar3 = uVar3 >> (0x1fU - LZCOUNT(uVar1) & 0xff);
    if ((int)uVar4 < 0) {
      uVar3 = -uVar3;
    }
    return uVar3;
  }
  iVar2 = 0x1f - (LZCOUNT(uVar1) - LZCOUNT(uVar3));
  if (iVar2 == 0) {
    bVar5 = uVar1 << 0x1f <= uVar3;
    if (bVar5) {
      uVar3 = uVar3 + uVar1 * -0x80000000;
    }
    bVar6 = uVar1 << 0x1e <= uVar3;
    if (bVar6) {
      uVar3 = uVar3 + uVar1 * -0x40000000;
    }
    bVar7 = uVar1 << 0x1d <= uVar3;
    if (bVar7) {
      uVar3 = uVar3 + uVar1 * -0x20000000;
    }
    bVar8 = uVar1 << 0x1c <= uVar3;
    if (bVar8) {
      uVar3 = uVar3 + uVar1 * -0x10000000;
    }
    bVar9 = uVar1 << 0x1b <= uVar3;
    if (bVar9) {
      uVar3 = uVar3 + uVar1 * -0x8000000;
    }
    bVar10 = uVar1 << 0x1a <= uVar3;
    if (bVar10) {
      uVar3 = uVar3 + uVar1 * -0x4000000;
    }
    bVar11 = uVar1 << 0x19 <= uVar3;
    if (bVar11) {
      uVar3 = uVar3 + uVar1 * -0x2000000;
    }
    bVar12 = uVar1 << 0x18 <= uVar3;
    if (bVar12) {
      uVar3 = uVar3 + uVar1 * -0x1000000;
    }
    bVar13 = uVar1 << 0x17 <= uVar3;
    if (bVar13) {
      uVar3 = uVar3 + uVar1 * -0x800000;
    }
    bVar14 = uVar1 << 0x16 <= uVar3;
    if (bVar14) {
      uVar3 = uVar3 + uVar1 * -0x400000;
    }
    bVar15 = uVar1 << 0x15 <= uVar3;
    if (bVar15) {
      uVar3 = uVar3 + uVar1 * -0x200000;
    }
    bVar16 = uVar1 << 0x14 <= uVar3;
    if (bVar16) {
      uVar3 = uVar3 + uVar1 * -0x100000;
    }
    bVar17 = uVar1 << 0x13 <= uVar3;
    if (bVar17) {
      uVar3 = uVar3 + uVar1 * -0x80000;
    }
    bVar18 = uVar1 << 0x12 <= uVar3;
    if (bVar18) {
      uVar3 = uVar3 + uVar1 * -0x40000;
    }
    bVar19 = uVar1 << 0x11 <= uVar3;
    if (bVar19) {
      uVar3 = uVar3 + uVar1 * -0x20000;
    }
    bVar20 = uVar1 << 0x10 <= uVar3;
    if (bVar20) {
      uVar3 = uVar3 + uVar1 * -0x10000;
    }
    bVar21 = uVar1 << 0xf <= uVar3;
    if (bVar21) {
      uVar3 = uVar3 + uVar1 * -0x8000;
    }
    bVar22 = uVar1 << 0xe <= uVar3;
    if (bVar22) {
      uVar3 = uVar3 + uVar1 * -0x4000;
    }
    bVar23 = uVar1 << 0xd <= uVar3;
    if (bVar23) {
      uVar3 = uVar3 + uVar1 * -0x2000;
    }
    bVar24 = uVar1 << 0xc <= uVar3;
    if (bVar24) {
      uVar3 = uVar3 + uVar1 * -0x1000;
    }
    bVar25 = uVar1 << 0xb <= uVar3;
    if (bVar25) {
      uVar3 = uVar3 + uVar1 * -0x800;
    }
    bVar26 = uVar1 << 10 <= uVar3;
    if (bVar26) {
      uVar3 = uVar3 + uVar1 * -0x400;
    }
    bVar27 = uVar1 << 9 <= uVar3;
    if (bVar27) {
      uVar3 = uVar3 + uVar1 * -0x200;
    }
    bVar28 = uVar1 << 8 <= uVar3;
    if (bVar28) {
      uVar3 = uVar3 + uVar1 * -0x100;
    }
    bVar29 = uVar1 << 7 <= uVar3;
    if (bVar29) {
      uVar3 = uVar3 + uVar1 * -0x80;
    }
    bVar30 = uVar1 << 6 <= uVar3;
    if (bVar30) {
      uVar3 = uVar3 + uVar1 * -0x40;
    }
    bVar31 = uVar1 << 5 <= uVar3;
    if (bVar31) {
      uVar3 = uVar3 + uVar1 * -0x20;
    }
    bVar32 = uVar1 << 4 <= uVar3;
    if (bVar32) {
      uVar3 = uVar3 + uVar1 * -0x10;
    }
    bVar33 = uVar1 << 3 <= uVar3;
    if (bVar33) {
      uVar3 = uVar3 + uVar1 * -8;
    }
    bVar34 = uVar1 << 2 <= uVar3;
    if (bVar34) {
      uVar3 = uVar3 + uVar1 * -4;
    }
    bVar35 = uVar1 << 1 <= uVar3;
    if (bVar35) {
      uVar3 = uVar3 + uVar1 * -2;
    }
    uVar1 = (((((((((((((((((((((((((((((((uint)bVar5 * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                                       (uint)bVar8) * 2 + (uint)bVar9) * 2 + (uint)bVar10) * 2 +
                                    (uint)bVar11) * 2 + (uint)bVar12) * 2 + (uint)bVar13) * 2 +
                                 (uint)bVar14) * 2 + (uint)bVar15) * 2 + (uint)bVar16) * 2 +
                              (uint)bVar17) * 2 + (uint)bVar18) * 2 + (uint)bVar19) * 2 +
                           (uint)bVar20) * 2 + (uint)bVar21) * 2 + (uint)bVar22) * 2 + (uint)bVar23)
                        * 2 + (uint)bVar24) * 2 + (uint)bVar25) * 2 + (uint)bVar26) * 2 +
                    (uint)bVar27) * 2 + (uint)bVar28) * 2 + (uint)bVar29) * 2 + (uint)bVar30) * 2 +
                (uint)bVar31) * 2 + (uint)bVar32) * 2 + (uint)bVar33) * 2 + (uint)bVar34) * 2 +
            (uint)bVar35) * 2 + (uint)(uVar1 <= uVar3);
    if ((int)uVar4 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x000113fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11404))();
  return uVar1;
}



/* Function: __aeabi_idivmod @ 000115d4 */

void __aeabi_idivmod(int param_1,int param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    _divsi3_skip_div0_test();
    return;
  }
  bVar1 = param_1 < 0;
  if (0 < param_1) {
    param_1 = 0x7fffffff;
  }
  if (bVar1) {
    param_1 = -0x80000000;
  }
  __aeabi_ldiv0(param_1);
  return;
}



/* Function: __aeabi_ldiv0 @ 000115f4 */

void __aeabi_ldiv0(void)

{
  raise(8);
  return;
}



/* Function: _fini @ 00011604 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 46 */
