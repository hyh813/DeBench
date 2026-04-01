/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/7/7_clang_O1_g
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



/* Function: _start @ 001010b0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010e0 */

/* WARNING: Removing unreachable block (ram,0x001010f3) */
/* WARNING: Removing unreachable block (ram,0x001010ff) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101110 */

/* WARNING: Removing unreachable block (ram,0x00101134) */
/* WARNING: Removing unreachable block (ram,0x00101140) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101150 */

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



/* Function: param_fake_branch @ 001011a0 */

int param_fake_branch(int x)

{
                    /* Unresolved local var: int result@[DW_OP_reg5(RDI)]
                       Unresolved local var: char * str@[???] */
  return x;
}



/* Function: call_fake_branch @ 001011b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 001011c0 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p2@[???] */
  iVar4 = x + 1;
  iVar3 = iVar4;
  iVar2 = x;
  while (iVar1 = iVar3, iVar1 != 0) {
                    /* Unresolved local var: int temp@[DW_OP_reg2(RCX)] */
    iVar3 = iVar2 % iVar1;
    iVar2 = iVar1;
  }
  iVar3 = x * 3 + 0x14;
  if (iVar2 == 1 && iVar4 * iVar4 == (x * 2 | 1U) + x * x) {
    iVar3 = x * 2 + 10;
  }
  return iVar3;
}



/* Function: call_opaque_predicate @ 00101210 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 6;
  iVar1 = 5;
  do {
    iVar2 = iVar3;
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[???] */
    iVar3 = iVar1 % iVar2;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  iVar3 = 0x23;
  if (iVar2 == 1) {
    iVar3 = 0x14;
  }
  return iVar3;
}



/* Function: param_instruction_substitution @ 00101240 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg5(RDI): 0; DW_OP_constu:
                       4294967295; DW_OP_and; DW_OP_lit6; DW_OP_mul; DW_OP_stack_value]
                       Unresolved local var: uint ux@[DW_OP_reg5(RDI)]
                       Unresolved local var: int div2@[???]
                       Unresolved local var: int mod16@[???]
                       Unresolved local var: int mul15@[???] */
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 00101270 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte bVar1;
  byte *pbVar2;
  
                    /* Unresolved local var: char * p@[???] */
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  bVar1 = *buffer;
  pbVar2 = (byte *)buffer;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ key;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return buffer;
}



/* Function: param_string_encryption @ 001012c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte local_28 [31];
  undefined1 local_9;
  
                    /* Unresolved local var: char[32] decrypted@[???] */
                    /* Unresolved local var: char * p@[???] */
  strncpy((char *)local_28,param_string_encryption::encrypted,0x20);
  local_9 = 0;
  bVar1 = local_28[0];
  pbVar2 = local_28;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar3 = strlen((char *)local_28);
  return (int)sVar3 + (int)(char)local_28[0];
}



/* Function: call_string_encryption @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte local_28 [31];
  undefined1 local_9;
  
                    /* Unresolved local var: char[32] decrypted@[???]
                       Unresolved local var: char * p@[???] */
  strncpy((char *)local_28,param_string_encryption::encrypted,0x20);
  local_9 = 0;
  bVar1 = local_28[0];
  pbVar2 = local_28;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar3 = strlen((char *)local_28);
  return (int)sVar3 + (int)(char)local_28[0];
}



/* Function: param_tail_call_optimized @ 00101380 */

int param_tail_call_optimized(int n,int acc)

{
  if (0 < n) {
    acc = param_tail_call_optimized(n + -1,acc + n);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 001013a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  int iVar1;
  
  iVar1 = param_tail_call_optimized(1000,0);
  return iVar1;
}



/* Function: param_non_tail_call @ 001013b0 */

int param_non_tail_call(int n)

{
  int iVar1;
  
  if (0 < n) {
    iVar1 = param_non_tail_call(n + -1);
    return iVar1 + n;
  }
  return 0;
}



/* Function: call_non_tail_call @ 001013d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 001013e0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int iVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 0;
    do {
      c[uVar2] = b[uVar2] + a[uVar2];
      uVar2 = uVar2 + 1;
    } while ((uint)n != uVar2);
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + c[uVar2];
      uVar2 = uVar2 + 1;
    } while ((uint)n != uVar2);
    return iVar1;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00101420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  long lVar2;
  int local_28 [10];
  
                    /* Unresolved local var: int[8] c@[???]
                       Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[???] */
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  lVar2 = 0;
  do {
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
    *(int *)((long)local_28 + lVar2) =
         *(int *)((long)&DAT_00102030 + lVar2) + *(int *)((long)&DAT_00102010 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  lVar2 = 0;
  iVar1 = 0;
                    /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
  do {
    iVar1 = iVar1 + local_28[lVar2];
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  return iVar1;
}



/* Function: param_link_time_optimization @ 00101470 */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 00101490 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 001014b0 */

int param_division_by_zero(int x)

{
  int iVar1;
  int iVar2;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[???] */
    iVar2 = (int)(10 / (long)x);
  }
  return iVar2;
}



/* Function: call_division_by_zero @ 001014f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00101520 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00101540 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int iVar2;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  iVar2 = -1;
  if (iVar1 == 0) {
                    /* Unresolved local var: int val@[???] */
    iVar2 = *p;
  }
  return iVar2;
}



/* Function: call_null_pointer_deref @ 00101570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int local_14;
  
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar1 = param_null_pointer_deref(&local_14);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 001015b0 */

int param_buffer_overflow_stack(int x)

{
                    /* Unresolved local var: int canary@[???]
                       Unresolved local var: char[8] buffer@[???] */
  return x;
}



/* Function: param_buffer_overflow_heap @ 001015c0 */

int param_buffer_overflow_heap(int x)

{
                    /* Unresolved local var: char * heap_buffer@[???] */
  return x;
}



/* Function: call_buffer_overflow @ 001015d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x1e;
}



/* Function: param_integer_overflow @ 001015e0 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int signed_sum@[???]
                       Unresolved local var: uint unsigned_sum@[???]
                       Unresolved local var: uint ua@[???]
                       Unresolved local var: uint ub@[???] */
  iVar2 = b + a;
  if (((0 < a) && (0 < b)) && (iVar2 < 0)) {
    return -1;
  }
  iVar1 = -2;
  if (iVar2 < 1) {
    iVar1 = iVar2;
  }
  if (-1 < (b & a)) {
    iVar1 = iVar2;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00101610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00101620 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i * 2;
}



/* Function: call_undefined_behavior @ 00101630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
                    /* Unresolved local var: int result@[???] */
  return 10;
}



/* Function: param_implementation_defined @ 00101640 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x2f;
}



/* Function: call_implementation_defined @ 00101650 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  return 0x2f;
}



/* Function: test_obf_opt_edge @ 00101660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined8 local_28;
  ulong uStack_20;
  
  puts(&DAT_00102221);
  printf(&DAT_00102050,10);
  uVar5 = 6;
  iVar3 = 5;
  do {
    iVar4 = (int)uVar5;
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[???] */
    lVar6 = (long)iVar3;
    uVar5 = lVar6 % (long)iVar4 & 0xffffffff;
    iVar3 = iVar4;
  } while ((int)(lVar6 % (long)iVar4) != 0);
  uVar7 = 0x23;
  if (iVar4 == 1) {
    uVar7 = 0x14;
  }
  printf(&DAT_0010206c,uVar7);
  printf(&DAT_00102088,0xe1);
                    /* Unresolved local var: char[32] decrypted@[???]
                       Unresolved local var: char * p@[???] */
  strncpy((char *)&local_38,param_string_encryption::encrypted,0x20);
  uStack_20 = uStack_20 & 0xffffffffffffff;
  pbVar1 = (byte *)&local_38;
  while ((byte)local_38 != 0) {
    *pbVar1 = (byte)local_38 ^ 0x5a;
    local_38._0_1_ = pbVar1[1];
    pbVar1 = pbVar1 + 1;
  }
  strlen((char *)&local_38);
  lVar6 = 0;
  printf(&DAT_001020a5);
  uVar2 = param_tail_call_optimized(1000,0);
  printf(&DAT_001020c1,(ulong)uVar2);
  uVar2 = param_non_tail_call(100);
  printf(&DAT_001020eb,(ulong)uVar2);
                    /* Unresolved local var: int[8] c@[???] */
  local_28 = 0;
  uStack_20 = 0;
  _local_38 = 0;
  uStack_30 = 0;
  do {
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
    *(int *)((long)&local_38 + lVar6) =
         *(int *)((long)&DAT_00102030 + lVar6) + *(int *)((long)&DAT_00102010 + lVar6);
    lVar6 = lVar6 + 4;
  } while (lVar6 != 0x20);
  lVar6 = 0;
  uVar5 = 0;
                    /* Unresolved local var: int i@[DW_OP_reg0(RAX)] */
  do {
    uVar5 = (ulong)(uint)((int)uVar5 + (&local_38)[lVar6]);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 8);
  printf(&DAT_00102110,uVar5);
  printf(&DAT_00102136);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  param_division_by_zero(5);
  param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_00102156);
                    /* Unresolved local var: int valid@[???]
                       Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  _local_38 = CONCAT44(uStack_34,0x2a);
  iVar3 = param_null_pointer_deref(&local_38);
  iVar4 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_00102172,(ulong)(uint)(iVar4 + iVar3));
  printf(&DAT_0010218f,0x1e);
  printf(&DAT_001021ac,2000000000);
  printf(&DAT_001021dd,10);
  printf(&DAT_001021fa,0x2f);
  return;
}



/* Function: main @ 00101890 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _fini @ 0010189c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
