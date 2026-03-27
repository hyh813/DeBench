/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_gcc_O2_g
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



/* Function: main @ 00101180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: _start @ 001011a0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001011d0 */

/* WARNING: Removing unreachable block (ram,0x001011e3) */
/* WARNING: Removing unreachable block (ram,0x001011ef) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101200 */

/* WARNING: Removing unreachable block (ram,0x00101224) */
/* WARNING: Removing unreachable block (ram,0x00101230) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101240 */

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



/* Function: div_zero_handler @ 00101290 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 001012c0 */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 001012f0 */

int param_fake_branch(int x)

{
  return x;
}



/* Function: call_fake_branch @ 00101300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 00101310 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = x + 1;
  iVar4 = iVar2;
  iVar1 = x;
  if (iVar2 != 0) {
    do {
                    /* Unresolved local var: int temp@[???] */
      iVar3 = iVar4;
      iVar4 = iVar1 % iVar3;
      iVar1 = iVar3;
    } while (iVar4 != 0);
    if ((iVar3 == 1) && (x * 2 + 1 + x * x == iVar2 * iVar2)) {
      return x * 2 + 10;
    }
  }
  return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 00101360 */

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
  iVar3 = 6;
  iVar1 = 5;
  do {
                    /* Unresolved local var: int temp@[???] */
    iVar2 = iVar3;
    iVar3 = iVar1 % iVar2;
    iVar1 = iVar2;
  } while (iVar3 != 0);
  iVar3 = 0x14;
  if (iVar2 != 1) {
    iVar3 = 0x23;
  }
  return iVar3;
}



/* Function: param_instruction_substitution @ 00101390 */

int param_instruction_substitution(int x)

{
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 001013b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 001013c0 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)strncpy(buffer,encrypted,len);
  pbVar3[len - 1] = 0;
  bVar1 = *pbVar3;
  pbVar2 = pbVar3;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ key;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return (char *)pbVar3;
}



/* Function: param_string_encryption @ 00101410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  byte *__s;
  size_t sVar4;
  long in_FS_OFFSET;
  char decrypted [32];
  
                    /* Unresolved local var: char * p@[???] */
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (byte *)strncpy(decrypted,param_string_encryption::encrypted,0x1f);
  decrypted[0x1f] = '\0';
  pbVar3 = __s;
  bVar1 = decrypted[0];
  while (bVar1 != 0) {
    *pbVar3 = bVar1 ^ 0x5a;
    bVar1 = pbVar3[1];
    pbVar3 = pbVar3 + 1;
  }
  sVar4 = strlen((char *)__s);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)sVar4 + (int)decrypted[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_string_encryption @ 00101490 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 001014a0 */

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



/* Function: call_tail_call_optimized @ 001014c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 001014d0 */

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



/* Function: call_non_tail_call @ 001014f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  return 0x13ba;
}



/* Function: param_vectorized_loop @ 00101500 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar3 = 0;
    do {
      c[uVar3] = b[uVar3] + a[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar3 != (uint)n);
    piVar1 = c + (ulong)(n - 1) + 1;
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



/* Function: call_vectorized_loop @ 00101550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int a [8];
  int b [8];
  int c [8];
  int local_18 [2];
  long local_10;
  
  iVar3 = 8;
  iVar4 = 1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = c;
  c[0] = 0;
  c[1] = 0;
  c[2] = 0;
  c[3] = 0;
  c[4] = 0;
  c[5] = 0;
  c[6] = 0;
  c[7] = 0;
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
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  lVar1 = 0;
  while( true ) {
    *(int *)((long)piVar2 + lVar1) = iVar4 + iVar3;
    if (lVar1 + 4 == 0x20) break;
    iVar4 = *(int *)((long)a + lVar1 + 4);
    iVar3 = *(int *)((long)b + lVar1 + 4);
    lVar1 = lVar1 + 4;
  }
  iVar4 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar4 = iVar4 + *piVar2;
    piVar2 = piVar2 + 1;
  } while (local_18 != piVar2);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_link_time_optimization @ 00101660 */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 00101680 */

int param_division_by_zero(int x)

{
  int iVar1;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
                    /* Unresolved local var: int y@[???] */
    iVar1 = (int)(10 / (long)x);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_division_by_zero @ 001016d0 */

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



/* Function: param_null_pointer_deref @ 00101710 */

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



/* Function: call_null_pointer_deref @ 00101760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  int valid;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  valid = 0x2a;
  iVar1 = param_null_pointer_deref(&valid);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1 + iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_buffer_overflow_stack @ 001017d0 */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 001017e0 */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  
  __ptr = malloc(0x10);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return x;
  }
  return -2;
}



/* Function: call_buffer_overflow @ 00101810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  void *__ptr;
  
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



/* Function: param_integer_overflow @ 00101840 */

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



/* Function: call_integer_overflow @ 00101870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 00101880 */

int param_undefined_behavior(int i)

{
  return i * 2;
}



/* Function: call_undefined_behavior @ 00101890 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 001018a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
  return 0x2f;
}



/* Function: call_implementation_defined @ 001018b0 */

undefined8 call_implementation_defined(void)

{
  return 0x2f;
}



/* Function: test_obf_opt_edge @ 001018c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  void *__ptr;
  ulong uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int valid;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00102008);
  __printf_chk(1,&DAT_00102137,10);
                    /* Unresolved local var: int p1@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int p2@[???]
                       Unresolved local var: int p3@[???] */
  uVar4 = 6;
  iVar2 = 5;
  do {
                    /* Unresolved local var: int temp@[???] */
    iVar3 = (int)uVar4;
    lVar1 = (long)iVar2;
    uVar4 = lVar1 % (long)iVar3 & 0xffffffff;
    iVar2 = iVar3;
  } while ((int)(lVar1 % (long)iVar3) != 0);
  uVar5 = 0x14;
  if (iVar3 != 1) {
    uVar5 = 0x23;
  }
  __printf_chk(1,&DAT_00102153,uVar5);
  __printf_chk(1,&DAT_0010216f,0xe1);
  iVar2 = param_string_encryption();
  __printf_chk(1,&DAT_0010218c,iVar2);
  __printf_chk(1,&DAT_00102038,0x7a314);
  __printf_chk(1,&DAT_00102068,0x13ba);
  iVar2 = call_vectorized_loop();
  __printf_chk(1,&DAT_00102090,iVar2);
  __printf_chk(1,&DAT_001020b8,0x14);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar2 = param_division_by_zero(5);
  iVar3 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_001021a8,iVar2 + iVar3);
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  valid = 0x2a;
  iVar2 = param_null_pointer_deref(&valid);
  iVar3 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  __printf_chk(1,&DAT_001021c4,iVar2 + iVar3);
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
  __printf_chk(1,&DAT_001021e1,uVar5);
  __printf_chk(1,&DAT_001020d8,2000000000);
  __printf_chk(1,&DAT_001021fe,10);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,&DAT_00102110,0x2f);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 00101ae8 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
