/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/7/7_gcc_O2_g
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



/* Function: main @ 000111b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 000111d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000111fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011200 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011210 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001122b) */
/* WARNING: Removing unreachable block (ram,0x00011235) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011250 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001127e) */
/* WARNING: Removing unreachable block (ram,0x00011288) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000112a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000112fc) */
/* WARNING: Removing unreachable block (ram,0x00011300) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011339 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001133d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: div_zero_handler @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 00011380 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 000113b0 */

/* WARNING: Unknown calling convention */

int param_fake_branch(int x)

{
  return x;
}



/* Function: call_fake_branch @ 000113c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 000113d0 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = x + 1;
  iVar2 = x;
  iVar4 = iVar1;
  if (iVar1 != 0) {
    do {
                    /* Unresolved local var: int temp@[???] */
      iVar3 = iVar4;
      iVar4 = iVar2 % iVar3;
      iVar2 = iVar3;
    } while (iVar4 != 0);
    if ((iVar3 == 1) && (x * 2 + 1 + x * x == iVar1 * iVar1)) {
      return x * 2 + 10;
    }
  }
  return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00011430 */

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
  iVar1 = 5;
  iVar3 = 6;
  do {
                    /* Unresolved local var: int temp@[???] */
    iVar2 = iVar3;
    iVar3 = iVar1 % iVar2;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  iVar1 = 0x14;
  if (iVar2 != 1) {
    iVar1 = 0x23;
  }
  return iVar1;
}



/* Function: param_instruction_substitution @ 00011460 */

/* WARNING: Unknown calling convention */

int param_instruction_substitution(int x)

{
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00011490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 000114a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte bVar1;
  byte *pbVar2;
  
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



/* Function: param_string_encryption @ 00011500 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  size_t sVar4;
  int in_GS_OFFSET;
  char decrypted [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: char * p@[???] */
  strncpy(decrypted,param_string_encryption::encrypted,0x1f);
  decrypted[0x1f] = '\0';
  pbVar3 = (byte *)decrypted;
  bVar2 = decrypted[0];
  while (bVar2 != 0) {
    *pbVar3 = bVar2 ^ 0x5a;
    bVar2 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
  }
  sVar4 = strlen(decrypted);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return sVar4 + (int)decrypted[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_string_encryption @ 000115a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 000115b0 */

/* WARNING: Unknown calling convention */

int param_tail_call_optimized(int n,int acc)

{
  if (0 < n) {
    do {
      acc = acc + n;
      n = n + -1;
    } while (n != 0);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 000115d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 000115e0 */

/* WARNING: Unknown calling convention */

int param_non_tail_call(int n)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < n) {
    do {
      iVar1 = iVar1 + n;
      n = n + -1;
    } while (n != 0);
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00011610 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar2 = 0;
    do {
      c[iVar2] = b[iVar2] + a[iVar2];
      iVar2 = iVar2 + 1;
    } while (n != iVar2);
    piVar1 = c + n;
    iVar2 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      iVar2 = iVar2 + *c;
      c = c + 1;
    } while (piVar1 != c);
    return iVar2;
  }
  return 0;
}



/* Function: call_vectorized_loop @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_GS_OFFSET;
  int a [8];
  int b [8];
  int c [8];
  int local_10 [3];
  
  local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
  uVar1 = 0;
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;
  a[5] = 6;
  a[6] = 7;
  a[7] = 8;
  b[0] = 8;
  b[1] = 7;
  b[2] = 6;
  b[3] = 5;
  b[4] = 4;
  b[5] = 3;
  b[6] = 2;
  b[7] = 1;
  do {
    *(undefined4 *)((int)c + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar5 = 8;
  iVar4 = 1;
  piVar3 = c;
  iVar2 = 0;
  while( true ) {
    piVar3[iVar2] = iVar4 + iVar5;
    iVar2 = iVar2 + 1;
    if (iVar2 == 8) break;
    iVar4 = a[iVar2];
    iVar5 = b[iVar2];
  }
  iVar4 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar4 = iVar4 + *piVar3;
    piVar3 = piVar3 + 1;
  } while (local_10 != piVar3);
  if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_link_time_optimization @ 00011770 */

/* WARNING: Unknown calling convention */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00011790 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: call_division_by_zero @ 000117f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_null_pointer_deref @ 00011840 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: call_null_pointer_deref @ 00011890 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int valid;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  valid = 0x2a;
  iVar1 = param_null_pointer_deref(&valid);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar1 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_buffer_overflow_stack @ 00011900 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00011910 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    x = -2;
  }
  else {
    free(__ptr);
  }
  return x;
}



/* Function: call_buffer_overflow @ 00011950 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  void *__ptr;
  int iVar1;
  
                    /* Unresolved local var: char * heap_buffer@[???] */
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



/* Function: param_integer_overflow @ 00011990 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  
  iVar1 = a + b;
  if ((0 < a) && (0 < b)) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  if (((a & b) < 0) && (0 < iVar1)) {
    iVar1 = -2;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 000119d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 000119e0 */

/* WARNING: Unknown calling convention */

int param_undefined_behavior(int i)

{
  return i * 2;
}



/* Function: call_undefined_behavior @ 000119f0 */

undefined4 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 00011a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011a10 */

undefined4 call_implementation_defined(void)

{
  return 0x2b;
}



/* Function: test_obf_opt_edge @ 00011a20 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  undefined4 uVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  int iVar4;
  int in_GS_OFFSET;
  int valid;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00012008);
  __printf_chk(1,&DAT_0001212f,10);
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p2@[???]
                       Unresolved local var: int p3@[???] */
  iVar2 = 5;
  iVar4 = 6;
  do {
                    /* Unresolved local var: int temp@[???] */
    iVar3 = iVar4;
    iVar4 = iVar2 % iVar3;
    iVar2 = iVar3;
  } while (iVar4 != 0);
  uVar1 = 0x14;
  if (iVar3 != 1) {
    uVar1 = 0x23;
  }
  __printf_chk(1,&DAT_0001214b,uVar1);
  __printf_chk(1,&DAT_00012167,0xe1);
  iVar2 = param_string_encryption();
  __printf_chk(1,&DAT_00012184,iVar2);
  __printf_chk(1,&DAT_00012038,0x7a314);
  __printf_chk(1,&DAT_00012064,0x13ba);
  iVar2 = call_vectorized_loop();
  __printf_chk(1,&DAT_0001208c,iVar2);
  __printf_chk(1,&DAT_000120b4,0x14);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar2 = param_division_by_zero(5);
  iVar4 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_000121a0,iVar2 + iVar4);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  valid = 0x2a;
  iVar2 = param_null_pointer_deref(&valid);
  iVar4 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_000121bc,iVar2 + iVar4);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???]
                       Unresolved local var: char * heap_buffer@[???] */
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    uVar1 = 8;
  }
  else {
    free(__ptr);
    uVar1 = 0x1e;
  }
  __printf_chk(1,&DAT_000121d9,uVar1);
  __printf_chk(1,&DAT_000120d4,2000000000);
  __printf_chk(1,&DAT_000121f6,10);
  __printf_chk(1,&DAT_00012108,0x2b);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __stack_chk_fail_local @ 00011c40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011c7a) */
/* WARNING: Removing unreachable block (ram,0x00011c90) */
/* WARNING: Removing unreachable block (ram,0x00011c9d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011cac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 47 */
