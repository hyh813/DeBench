/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/7/7_gcc_O0_g
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



/* Function: _start @ 000111b0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000111dc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000111e0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000111f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001120b) */
/* WARNING: Removing unreachable block (ram,0x00011215) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011230 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001125e) */
/* WARNING: Removing unreachable block (ram,0x00011268) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011280 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000112dc) */
/* WARNING: Removing unreachable block (ram,0x000112e0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011319 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001131d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: param_fake_branch @ 00011321 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_fake_branch(int x)

{
  int result;
  char *str;
  
  return x;
}



/* Function: call_fake_branch @ 00011349 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  int iVar1;
  
  iVar1 = param_fake_branch(10);
  return iVar1;
}



/* Function: param_opaque_predicate @ 00011366 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_opaque_predicate(int x)

{
  int iVar1;
  int a;
  int b;
  int p1;
  int p2;
  int p3;
  int temp;
  
  a = x;
  b = x + 1;
  while (b != 0) {
    iVar1 = a % b;
    a = b;
    b = iVar1;
  }
  if ((x * 2 + x * x + 1 == (x + 1) * (x + 1)) && (a == 1)) {
    iVar1 = (x + 5) * 2;
  }
  else {
    iVar1 = x * 3 + 0x14;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 00011411 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  
  iVar1 = param_opaque_predicate(5);
  return iVar1;
}



/* Function: param_instruction_substitution @ 0001142e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_instruction_substitution(int x)

{
  int result;
  uint ux;
  int div2;
  int mod16;
  int mul15;
  
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00011496 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  int iVar1;
  
  iVar1 = param_instruction_substitution(10);
  return iVar1;
}



/* Function: decrypt_string @ 000114b3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  char key_local;
  char *p;
  
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  for (p = buffer; *p != '\0'; p = p + 1) {
    *p = *p ^ key;
  }
  return buffer;
}



/* Function: param_string_encryption @ 00011520 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  int in_GS_OFFSET;
  char decrypted [32];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  decrypt_string(param_string_encryption::encrypted,decrypted,0x20,'Z');
  sVar2 = strlen(decrypted);
  iVar3 = (int)decrypted[0] + sVar2;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar3 = __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: call_string_encryption @ 00011588 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 000115a3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_tail_call_optimized(int n,int acc)

{
  if (0 < n) {
    acc = param_tail_call_optimized(n + -1,acc + n);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 000115df */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  int iVar1;
  
  iVar1 = param_tail_call_optimized(1000,0);
  return iVar1;
}



/* Function: param_non_tail_call @ 00011607 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_non_tail_call(int n)

{
  int iVar1;
  
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_non_tail_call(n + -1);
    iVar1 = iVar1 + n;
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 00011641 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 00011664 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int i;
  int sum;
  int i_1;
  
  for (i = 0; i < n; i = i + 1) {
    c[i] = b[i] + a[i];
  }
  sum = 0;
  for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
    sum = sum + c[i_1];
  }
  return sum;
}



/* Function: call_vectorized_loop @ 000116fb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_GS_OFFSET;
  int a [8];
  int b [8];
  int c [8];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  uVar2 = 0;
  do {
    *(undefined4 *)((int)c + uVar2) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  iVar3 = param_vectorized_loop(a,b,c,8);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar3 = __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: lto_target_func @ 000117d2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int lto_target_func(int x)

{
  return (x + 5) * 2;
}



/* Function: param_link_time_optimization @ 000117e9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_link_time_optimization(int x)

{
  int iVar1;
  
  iVar1 = lto_target_func(x);
  return iVar1;
}



/* Function: call_link_time_optimization @ 00011807 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  int iVar1;
  
  iVar1 = param_link_time_optimization(5);
  return iVar1;
}



/* Function: div_zero_handler @ 00011824 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void div_zero_handler(int sig)

{
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00011856 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_division_by_zero(int x)

{
  int iVar1;
  int y;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    iVar1 = (int)(10 / (longlong)x);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_division_by_zero @ 000118b5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}



/* Function: segv_handler @ 00011907 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void segv_handler(int sig)

{
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00011939 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int val;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
    iVar1 = *p;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_null_pointer_deref @ 00011994 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int valid;
  int r1;
  int r2;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  valid = 0x2a;
  r1 = param_null_pointer_deref(&valid);
  r2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  iVar1 = r2 + r1;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_buffer_overflow_stack @ 00011a0b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Removing unreachable block (ram,0x00011a5d) */
/* WARNING: Unknown calling convention */

int param_buffer_overflow_stack(int x)

{
  int iVar1;
  int in_GS_OFFSET;
  int i;
  int canary;
  char buffer [8];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  for (i = 0; i < 0x11; i = i + 1) {
    buffer[i] = 'A';
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    x = __stack_chk_fail_local();
  }
  return x;
}



/* Function: param_buffer_overflow_heap @ 00011a75 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  int i;
  char *heap_buffer;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    x = -2;
  }
  else {
    for (i = 0; i < 0x21; i = i + 1) {
      *(undefined1 *)((int)__ptr + i) = 0x42;
    }
    free(__ptr);
  }
  return x;
}



/* Function: call_buffer_overflow @ 00011adc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar2 + iVar1;
}



/* Function: param_integer_overflow @ 00011b1a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int signed_sum;
  uint ua;
  uint ub;
  uint unsigned_sum;
  
  iVar1 = b + a;
  if (((a < 1) || (b < 1)) || (-1 < b + a)) {
    if (((a < 0) && (b < 0)) && (0 < b + a)) {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 00011b87 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(-1,1);
  return iVar2 + iVar1;
}



/* Function: param_undefined_behavior @ 00011bc9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_undefined_behavior(int i)

{
  int local;
  
  return i * 2;
}



/* Function: call_undefined_behavior @ 00011beb */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
  int iVar1;
  int result;
  
  iVar1 = param_undefined_behavior(5);
  return iVar1;
}



/* Function: param_implementation_defined @ 00011c11 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Removing unreachable block (ram,0x00011c3d) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
  char c;
  anon_struct_4_3_4e909822 bitfield;
  int result;
  int s;
  
  return 0x2b;
}



/* Function: call_implementation_defined @ 00011c9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  int iVar1;
  
  iVar1 = param_implementation_defined();
  return iVar1;
}



/* Function: test_obf_opt_edge @ 00011cb5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  int iVar1;
  
  puts(&DAT_00012010);
  iVar1 = call_fake_branch();
  printf(&DAT_0001203d,iVar1);
  iVar1 = call_opaque_predicate();
  printf(&DAT_00012059,iVar1);
  iVar1 = call_instruction_substitution();
  printf(&DAT_00012075,iVar1);
  iVar1 = call_string_encryption();
  printf(&DAT_00012092,iVar1);
  iVar1 = call_tail_call_optimized();
  printf(&DAT_000120b0,iVar1);
  iVar1 = call_non_tail_call();
  printf(&DAT_000120dc,iVar1);
  iVar1 = call_vectorized_loop();
  printf(&DAT_00012104,iVar1);
  iVar1 = call_link_time_optimization();
  printf(&DAT_0001212c,iVar1);
  iVar1 = call_division_by_zero();
  printf(&DAT_0001214c,iVar1);
  iVar1 = call_null_pointer_deref();
  printf(&DAT_00012168,iVar1);
  iVar1 = call_buffer_overflow();
  printf(&DAT_00012185,iVar1);
  iVar1 = call_integer_overflow();
  printf(&DAT_000121a4,iVar1);
  iVar1 = call_undefined_behavior();
  printf(&DAT_000121d5,iVar1);
  iVar1 = call_implementation_defined();
  printf(&DAT_000121f4,iVar1);
  return;
}



/* Function: main @ 00011e33 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00011e53 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00011e60 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011e80 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011e9a) */
/* WARNING: Removing unreachable block (ram,0x00011eb0) */
/* WARNING: Removing unreachable block (ram,0x00011ebd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011ecc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 49 */
