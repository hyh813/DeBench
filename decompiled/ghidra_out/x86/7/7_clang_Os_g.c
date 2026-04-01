/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_clang_Os_g
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

int param_fake_branch(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char * str@[???] */
  return x;
}



/* Function: call_fake_branch @ 00011249 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 0001124f */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p2@[???] */
  iVar4 = x + 1;
  iVar1 = x;
  iVar2 = iVar4;
  if (iVar4 == 0) {
    iVar3 = -1;
  }
  else {
    do {
      iVar3 = iVar2;
                    /* Unresolved local var: int temp@[DW_OP_reg3(EBX)] */
      iVar2 = iVar1 % iVar3;
      iVar1 = iVar3;
    } while (iVar2 != 0);
  }
  iVar1 = x * 3 + 0x14;
  if (iVar3 == 1 && iVar4 * iVar4 == (x * 2 | 1U) + x * x) {
    iVar1 = x * 2 + 10;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 00011298 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 5;
  iVar3 = 6;
  do {
    iVar2 = iVar3;
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[DW_OP_reg1(ECX)] */
    iVar3 = iVar1 % iVar2;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  iVar1 = 0x23;
  if (iVar2 == 1) {
    iVar1 = 0x14;
  }
  return iVar1;
}



/* Function: param_instruction_substitution @ 000112be */

int param_instruction_substitution(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: uint ux@[???]
                       Unresolved local var: int div2@[???]
                       Unresolved local var: int mod16@[???]
                       Unresolved local var: int mul15@[???] */
  return x * 0x15 + (x & 0xfU) + ((uint)x >> 1);
}



/* Function: call_instruction_substitution @ 000112d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 000112da */

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



/* Function: param_string_encryption @ 00011326 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  int iVar4;
  byte local_2c [31];
  undefined1 local_d;
  
                    /* Unresolved local var: char[32] decrypted@[???] */
  pbVar3 = local_2c;
                    /* Unresolved local var: char * p@[???] */
  strncpy((char *)local_2c,param_string_encryption::encrypted,0x20);
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 000113a2 */

int param_tail_call_optimized(int n,int acc)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < n) {
    uVar1 = n - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(n - 2);
    acc = (acc + n + uVar1 * uVar1) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 000113cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000113d2 */

int param_non_tail_call(int n)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  
  if (n < 1) {
    iVar3 = 0;
  }
  else {
    uVar1 = n - 1;
    lVar2 = (ulonglong)uVar1 * (ulonglong)(n - 2);
    iVar3 = (uVar1 * uVar1 + n) - ((int)((ulonglong)lVar2 >> 0x20) << 0x1f | (uint)lVar2 >> 1);
  }
  return iVar3;
}



/* Function: call_non_tail_call @ 000113f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 000113fe */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar2 = 0;
    do {
      c[iVar2] = b[iVar2] + a[iVar2];
      iVar2 = iVar2 + 1;
    } while (n != iVar2);
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + c[iVar1];
        iVar1 = iVar1 + 1;
      } while (n != iVar1);
      return iVar2;
    }
  }
  return 0;
}



/* Function: call_vectorized_loop @ 0001143d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_24 [8];
  
                    /* Unresolved local var: int[8] c@[???]
                       Unresolved local var: int[8] a@[???]
                       Unresolved local var: int[8] b@[???] */
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
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[DW_OP_reg0(EAX)] */
    local_24[iVar1] = *piVar2 + *piVar4;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 != 8);
  iVar3 = 0;
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg1(ECX)] */
    iVar1 = iVar1 + local_24[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return iVar1;
}



/* Function: param_link_time_optimization @ 0001149f */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 000114a9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: div_zero_handler @ 000114af */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 000114d8 */

int param_division_by_zero(int x)

{
  int iVar1;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[???] */
    iVar1 = (int)(10 / (longlong)x);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_division_by_zero @ 00011526 */

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



/* Function: segv_handler @ 0001156f */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011598 */

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



/* Function: call_null_pointer_deref @ 000115e1 */

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
  return iVar2 + iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011630 */

int param_buffer_overflow_stack(int x)

{
                    /* Unresolved local var: int canary@[???]
                       Unresolved local var: char[8] buffer@[???] */
  return x;
}



/* Function: param_buffer_overflow_heap @ 00011635 */

int param_buffer_overflow_heap(int x)

{
                    /* Unresolved local var: char * heap_buffer@[???] */
  return x;
}



/* Function: call_buffer_overflow @ 0001163a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x1e;
}



/* Function: param_integer_overflow @ 00011640 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: uint ua@[???]
                       Unresolved local var: uint ub@[???]
                       Unresolved local var: uint unsigned_sum@[???]
                       Unresolved local var: int signed_sum@[???] */
  iVar1 = b + a;
  if (((a < 1) || (b < 1)) || (-1 < iVar1)) {
    iVar2 = -2;
    if (iVar1 < 1) {
      iVar2 = iVar1;
    }
    if (-1 < (b & a)) {
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}



/* Function: call_integer_overflow @ 0001166e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00011674 */

int param_undefined_behavior(int i)

{
                    /* Unresolved local var: int local@[???] */
  return i * 2;
}



/* Function: call_undefined_behavior @ 0001167b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
                    /* Unresolved local var: int result@[???] */
  return 10;
}



/* Function: param_implementation_defined @ 00011681 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: char c@[???]
                       Unresolved local var: int s@[???]
                       Unresolved local var: anon_struct_4_3_4e909822 bitfield@[???] */
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011687 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  return 0x2b;
}



/* Function: test_obf_opt_edge @ 0001168d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
                    /* Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int p1@[???]
                       Unresolved local var: int p3@[???]
                       Unresolved local var: int temp@[DW_OP_reg1(ECX)] */
    iVar5 = iVar1 % iVar4;
    iVar1 = iVar4;
  } while (iVar5 != 0);
  uVar2 = 0x23;
  if (iVar4 == 1) {
    uVar2 = 0x14;
  }
  printf(&DAT_00012064,uVar2);
  printf(&DAT_00012080,0xe1);
  iVar1 = param_string_encryption();
  printf(&DAT_0001209d,iVar1);
  printf(&DAT_000120b9,0x7a314);
  printf(&DAT_000120e3,0x13ba);
  iVar1 = 0;
                    /* Unresolved local var: int[8] c@[???] */
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
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[DW_OP_reg0(EAX)] */
    local_28[iVar1] = *piVar3 + *piVar6;
    iVar1 = iVar1 + 1;
    piVar3 = piVar3 + 1;
    piVar6 = piVar6 + 1;
  } while (iVar1 != 8);
  iVar5 = 0;
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg1(ECX)] */
    iVar1 = iVar1 + local_28[iVar5];
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  printf(&DAT_00012108,iVar1);
  printf(&DAT_0001212e,0x14);
  iVar1 = call_division_by_zero();
  printf(&DAT_0001214e,iVar1);
  iVar1 = call_null_pointer_deref();
  printf(&DAT_0001216a,iVar1);
  printf(&DAT_00012187,0x1e);
  printf(&DAT_000121a4,2000000000);
  printf(&DAT_000121d5,10);
  printf(&DAT_000121f2,0x2b);
  return;
}



/* Function: main @ 00011856 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
