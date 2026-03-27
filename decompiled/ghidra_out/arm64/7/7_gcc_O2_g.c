/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/7/7_gcc_O2_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100848 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100860 @ 00100860 */

void FUN_00100860(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 001009c0 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 001009f4 */

/* WARNING: Removing unreachable block (ram,0x00100a04) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100a10 */

/* WARNING: Removing unreachable block (ram,0x00100a28) */
/* WARNING: Removing unreachable block (ram,0x00100a34) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100a40 */

/* WARNING: Removing unreachable block (ram,0x00100a64) */
/* WARNING: Removing unreachable block (ram,0x00100a70) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100a7c @ 00100a7c */

void FUN_00100a7c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100a80 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: div_zero_handler @ 00100ae0 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer);
}



/* Function: segv_handler @ 00100b00 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer);
}



/* Function: param_fake_branch @ 00100b20 */

int param_fake_branch(int x)

{
                    /* Unresolved local var: int result@[DW_OP_reg0(x0)]
                       Unresolved local var: char * str@[???] */
  return x;
}



/* Function: call_fake_branch @ 00100b24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00100b30 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p2@[???]
                       Unresolved local var: int p3@[???] */
  iVar1 = x + 1;
  iVar2 = iVar1;
  iVar3 = x;
  if (iVar1 != 0) {
    do {
      iVar4 = iVar2;
                    /* Unresolved local var: int temp@[???] */
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = iVar3 / iVar4;
      }
      iVar2 = iVar3 - iVar2 * iVar4;
      iVar3 = iVar4;
    } while (iVar2 != 0);
    if (x * 2 + x * x + 1 == iVar1 * iVar1 && iVar4 == 1) {
      return x * 2 + 10;
    }
  }
  return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00100b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p2@[???]
                       Unresolved local var: int p3@[???] */
  iVar2 = 6;
  iVar3 = 5;
  do {
    iVar1 = iVar2;
                    /* Unresolved local var: int temp@[???] */
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    iVar2 = iVar3 - iVar2 * iVar1;
    iVar3 = iVar1;
  } while (iVar2 != 0);
  iVar2 = 0x14;
  if (iVar1 != 1) {
    iVar2 = 0x23;
  }
  return iVar2;
}



/* Function: param_instruction_substitution @ 00100bc0 */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[DW_OP_breg0(x0): 0; DW_OP_lit3; DW_OP_shl;
                       DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_minus; DW_OP_stack_value]
                       Unresolved local var: uint ux@[DW_OP_reg0(x0)]
                       Unresolved local var: int div2@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shr;
                       DW_OP_stack_value]
                       Unresolved local var: int mod16@[DW_OP_breg0(x0): 0; DW_OP_lit15; DW_OP_and;
                       DW_OP_stack_value]
                       Unresolved local var: int mul15@[DW_OP_breg0(x0): 0; DW_OP_lit4; DW_OP_shl;
                       DW_OP_breg0(x0): 0; DW_OP_minus; DW_OP_stack_value] */
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00100be4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: FUN_00100bec @ 00100bec */

byte * FUN_00100bec(char *param_1,char *param_2,size_t param_3,byte param_4)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)strncpy(param_2,param_1,param_3);
  pbVar2[param_3 - 1] = 0;
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
  while (bVar1 != 0) {
    *pbVar3 = param_4 ^ bVar1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  return pbVar2;
}



/* Function: decrypt_string @ 00100bf0 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
                    /* Unresolved local var: char * p@[???] */
  pbVar2 = (byte *)strncpy(buffer,encrypted,len);
  pbVar2[len - 1] = 0;
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
  while (bVar1 != 0) {
    *pbVar3 = key ^ bVar1;
    pbVar3 = pbVar3 + 1;
    bVar1 = *pbVar3;
  }
  return (char *)pbVar2;
}



/* Function: param_string_encryption @ 00100c50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  byte *__s;
  byte *pbVar4;
  size_t sVar5;
  char decrypted [32];
  
  lVar3 = ___stack_chk_guard;
                    /* Unresolved local var: char * p@[???] */
  __s = (byte *)strncpy(decrypted,param_string_encryption::encrypted,0x1f);
  decrypted[0x1f] = '\0';
  pbVar4 = __s;
  bVar2 = decrypted[0];
  while (bVar2 != 0) {
    *pbVar4 = bVar2 ^ 0x5a;
    pbVar4 = pbVar4 + 1;
    bVar2 = *pbVar4;
  }
  sVar5 = strlen((char *)__s);
  iVar1 = (uint)(byte)decrypted[0] + (int)sVar5;
  if (lVar3 - ___stack_chk_guard == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1,&__stack_chk_guard,0,lVar3 - ___stack_chk_guard);
}



/* Function: call_string_encryption @ 00100cf0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  byte bVar2;
  byte *__s;
  byte *pbVar3;
  size_t sVar4;
  byte abStack_28 [31];
  undefined1 uStack_9;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  __s = (byte *)strncpy((char *)abStack_28,param_string_encryption::encrypted,0x1f);
  uStack_9 = 0;
  pbVar3 = __s;
  bVar2 = abStack_28[0];
  while (bVar2 != 0) {
    *pbVar3 = bVar2 ^ 0x5a;
    pbVar3 = pbVar3 + 1;
    bVar2 = *pbVar3;
  }
  sVar4 = strlen((char *)__s);
  iVar1 = (uint)abStack_28[0] + (int)sVar4;
  if (lStack_8 - ___stack_chk_guard == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1,&__stack_chk_guard,0,lStack_8 - ___stack_chk_guard);
}



/* Function: param_tail_call_optimized @ 00100cf4 */

int param_tail_call_optimized(int n,int acc)

{
  int iVar1;
  
  if (0 < n) {
    do {
      iVar1 = n + -1;
      acc = acc + n;
      n = iVar1;
    } while (iVar1 != 0);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 00100d20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 00100d30 */

int param_non_tail_call(int n)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < n) {
    do {
      iVar1 = n + -1;
      iVar2 = iVar2 + n;
      n = iVar1;
    } while (iVar1 != 0);
  }
  return iVar2;
}



/* Function: call_non_tail_call @ 00100d54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00100d60 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar3 = 0;
    do {
      c[lVar3] = a[lVar3] + b[lVar3];
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < n);
    lVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = c + lVar3;
                    /* Unresolved local var: int i@[???] */
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + *piVar1;
    } while ((int)lVar3 < n);
    return iVar2;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00100dc0 */

/* WARNING: Removing unreachable block (ram,0x00100e84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int a [8];
  int b [8];
  int c [8];
  
  a[2] = 3;
  a[3] = 4;
  a[0] = 1;
  a[1] = 2;
  a[6] = 7;
  a[7] = 8;
  a[4] = 5;
  a[5] = 6;
  b[2] = 6;
  b[3] = 5;
  b[0] = 8;
  b[1] = 7;
  b[6] = 2;
  b[7] = 1;
  b[4] = 4;
  b[5] = 3;
  lVar3 = 1;
  do {
    lVar1 = lVar3 + 1;
    b[lVar3 + 7] = a[lVar3 + -1] + a[lVar3 + 7];
    lVar3 = lVar1;
  } while (lVar1 != 9);
  iVar2 = 0;
  lVar3 = 1;
  do {
                    /* Unresolved local var: int i@[???] */
    lVar1 = lVar3 + 1;
    iVar2 = iVar2 + b[lVar3 + 7];
    lVar3 = lVar1;
  } while (lVar1 != 9);
  return iVar2;
}



/* Function: param_link_time_optimization @ 00100e90 */

int param_link_time_optimization(int x)

{
  return (x + 5) * 2;
}



/* Function: call_link_time_optimization @ 00100ea0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00100eb0 */

int param_division_by_zero(int x)

{
  int iVar1;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[???] */
    iVar1 = 0;
    if (x != 0) {
      iVar1 = 10 / x;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: FUN_00100efc @ 00100efc */

int FUN_00100efc(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: call_division_by_zero @ 00100f00 */

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
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00100f40 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int val@[???] */
    iVar1 = *p;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_null_pointer_deref @ 00100f90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int valid;
  long local_8;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  local_8 = ___stack_chk_guard;
  valid = 0x2a;
  iVar1 = param_null_pointer_deref(&valid);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar1 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_buffer_overflow_stack @ 00101010 */

void param_buffer_overflow_stack(void)

{
  return;
}



/* Function: param_buffer_overflow_heap @ 00101014 */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  
                    /* Unresolved local var: char * heap_buffer@[???] */
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    x = -2;
  }
  else {
    free(__ptr);
  }
  return x;
}



/* Function: FUN_0010104c @ 0010104c */

undefined8 FUN_0010104c(void)

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



/* Function: call_buffer_overflow @ 00101050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  void *__ptr;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: char * heap_buffer@[???] */
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    iVar1 = 8;
  }
  else {
    free(__ptr);
    iVar1 = 0x1e;
  }
  return iVar1;
}



/* Function: param_integer_overflow @ 00101080 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  
                    /* Unresolved local var: int signed_sum@[???]
                       Unresolved local var: uint ua@[???]
                       Unresolved local var: uint ub@[???]
                       Unresolved local var: uint unsigned_sum@[???] */
  iVar1 = a + b;
  if (0 < a && 0 < b) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  if ((a & b) < 0 && 0 < iVar1) {
    iVar1 = -2;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 001010b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 2000000000;
}



/* Function: param_undefined_behavior @ 001010c0 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i << 1;
}



/* Function: call_undefined_behavior @ 001010d0 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 001010e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x30;
}



/* Function: call_implementation_defined @ 001010f0 */

undefined8 call_implementation_defined(void)

{
  return 0x30;
}



/* Function: test_obf_opt_edge @ 00101100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  undefined4 uVar4;
  undefined8 uVar5;
  int valid;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101328);
  __printf_chk(1,&DAT_00101358,10);
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p2@[???]
                       Unresolved local var: int p3@[???] */
  iVar2 = 6;
  iVar3 = 5;
  do {
    iVar1 = iVar2;
                    /* Unresolved local var: int temp@[???] */
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = iVar3 / iVar1;
    }
    iVar2 = iVar3 - iVar2 * iVar1;
    iVar3 = iVar1;
  } while (iVar2 != 0);
  uVar4 = 0x14;
  if (iVar1 != 1) {
    uVar4 = 0x23;
  }
  __printf_chk(1,&DAT_00101378,uVar4);
  __printf_chk(1,&DAT_00101398,0xe1);
  iVar2 = param_string_encryption();
  __printf_chk(1,&DAT_001013b8,iVar2);
  __printf_chk(1,&DAT_001013d8,0x7a314);
  __printf_chk(1,&DAT_00101408,0x13ba);
  iVar2 = call_vectorized_loop();
  __printf_chk(1,&DAT_00101430,iVar2);
  __printf_chk(1,&DAT_00101458,0x14);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar2 = param_division_by_zero(5);
  iVar3 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_00101478,iVar2 + iVar3);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  valid = 0x2a;
  iVar2 = param_null_pointer_deref(&valid);
  iVar3 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_00101498,iVar2 + iVar3);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: char * heap_buffer@[???] */
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar5 = 8;
  }
  else {
    free(__ptr);
    uVar5 = 0x1e;
  }
  __printf_chk(1,&DAT_001014b8,uVar5);
  __printf_chk(1,&DAT_001014d8,2000000000);
  __printf_chk(1,&DAT_00101510,10);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,&DAT_00101530,0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: _fini @ 0010130c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 46 */
