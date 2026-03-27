/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_gcc_Os_g
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



/* Function: _start @ 00101190 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001011c0 */

/* WARNING: Removing unreachable block (ram,0x001011d3) */
/* WARNING: Removing unreachable block (ram,0x001011df) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001011f0 */

/* WARNING: Removing unreachable block (ram,0x00101214) */
/* WARNING: Removing unreachable block (ram,0x00101220) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101230 */

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



/* Function: div_zero_handler @ 00101279 */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(jmp_buffer,1);
}



/* Function: segv_handler @ 0010129b */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  __longjmp_chk(segv_buffer,1);
}



/* Function: param_fake_branch @ 001012bd */

int param_fake_branch(int x)

{
  return x;
}



/* Function: call_fake_branch @ 001012c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  return 10;
}



/* Function: param_opaque_predicate @ 001012ce */

int param_opaque_predicate(int x)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = x + 1;
  iVar1 = iVar3;
  iVar2 = x;
  while (iVar4 = iVar1, iVar4 != 0) {
                    /* Unresolved local var: int temp@[???] */
    iVar1 = iVar2 % iVar4;
    iVar2 = iVar4;
  }
  if ((iVar2 == 1) && (x * 2 + 1 + x * x == iVar3 * iVar3)) {
    return x * 2 + 10;
  }
  return x * 3 + 0x14;
}



/* Function: call_opaque_predicate @ 0010130f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  
  iVar1 = param_opaque_predicate(5);
  return iVar1;
}



/* Function: param_instruction_substitution @ 0010131a */

int param_instruction_substitution(int x)

{
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101334 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  return 0xe1;
}



/* Function: decrypt_string @ 0010133e */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)strncpy(buffer,encrypted,len);
  pbVar1[len - 1] = 0;
  for (pbVar2 = pbVar1; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    *pbVar2 = *pbVar2 ^ key;
  }
  return (char *)pbVar1;
}



/* Function: param_string_encryption @ 0010137b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  long lVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char decrypted [32];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  decrypt_string(param_string_encryption::encrypted,decrypted,0x20,'Z');
  sVar2 = strlen(decrypted);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)decrypted[0] + (int)sVar2;
}



/* Function: call_string_encryption @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 001013e8 */

int param_tail_call_optimized(int n,int acc)

{
  for (; 0 < n; n = n + -1) {
    acc = acc + n;
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 001013f9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  return 0x7a314;
}



/* Function: param_non_tail_call @ 00101403 */

int param_non_tail_call(int n)

{
  int iVar1;
  
  iVar1 = 0;
  for (; 0 < n; n = n + -1) {
    iVar1 = iVar1 + n;
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 00101414 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 0010141f */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  long lVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    c[lVar1] = b[lVar1] + a[lVar1];
  }
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + c[lVar1];
  }
  return iVar2;
}



/* Function: call_vectorized_loop @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  int a [8];
  int b [8];
  int c [8];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
  piVar4 = c;
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  iVar2 = param_vectorized_loop(a,b,c,8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_link_time_optimization @ 0010151b */

int param_link_time_optimization(int x)

{
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101524 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  return 0x14;
}



/* Function: param_division_by_zero @ 0010152e */

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



/* Function: call_division_by_zero @ 00101575 */

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



/* Function: param_null_pointer_deref @ 001015a4 */

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



/* Function: call_null_pointer_deref @ 001015e9 */

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
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 0010164b */

undefined4 param_buffer_overflow_stack(undefined4 param_1)

{
  return param_1;
}



/* Function: param_buffer_overflow_heap @ 00101652 */

int param_buffer_overflow_heap(int x)

{
  int iVar1;
  void *__ptr;
  
  __ptr = malloc(0x10);
  iVar1 = -2;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    iVar1 = x;
  }
  return iVar1;
}



/* Function: call_buffer_overflow @ 00101679 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  
  iVar1 = param_buffer_overflow_heap(0x14);
  return iVar1 + 10;
}



/* Function: param_integer_overflow @ 0010168d */

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



/* Function: call_integer_overflow @ 001016b6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  return 2000000000;
}



/* Function: param_undefined_behavior @ 001016c0 */

int param_undefined_behavior(int i)

{
  return i * 2;
}



/* Function: call_undefined_behavior @ 001016c8 */

undefined8 call_undefined_behavior(void)

{
  return 10;
}



/* Function: param_implementation_defined @ 001016d2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
  return 0x2f;
}



/* Function: call_implementation_defined @ 001016dc */

undefined8 call_implementation_defined(void)

{
  return 0x2f;
}



/* Function: test_obf_opt_edge @ 001016e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  int iVar1;
  undefined8 in_RAX;
  
  puts(&DAT_00102004);
  __printf_chk(1,&DAT_00102031,10);
  iVar1 = call_opaque_predicate();
  __printf_chk(1,&DAT_0010204d,iVar1);
  __printf_chk(1,&DAT_00102069,0xe1);
  iVar1 = param_string_encryption();
  __printf_chk(1,&DAT_00102086,iVar1);
  call_tail_call_optimized();
  __printf_chk();
  call_non_tail_call();
  __printf_chk(1);
  iVar1 = call_vectorized_loop();
  __printf_chk(1,&DAT_001020f1,iVar1);
  __printf_chk(1,&DAT_00102117,0x14);
  iVar1 = call_division_by_zero();
  __printf_chk(1,&DAT_00102137,iVar1);
  iVar1 = call_null_pointer_deref();
  __printf_chk(1,&DAT_00102153,iVar1);
  iVar1 = call_buffer_overflow();
  __printf_chk(1,&DAT_00102170,iVar1);
  __printf_chk(1,&DAT_0010218d,2000000000);
  __printf_chk(1,&DAT_001021be,10);
  __printf_chk(1,&DAT_001021db,0x2f,in_RAX);
  return;
}



/* Function: _fini @ 00101868 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 41 */
