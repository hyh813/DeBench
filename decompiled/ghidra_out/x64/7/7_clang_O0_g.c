/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/7/7_clang_O0_g
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

int param_fake_branch(int x)

{
  char *str;
  int result;
  int x_local;
  
  result = x;
  if (x * x < 0) {
    result = x * 2 + -0x21524111;
  }
  strlen("test");
  return result;
}



/* Function: call_fake_branch @ 00101230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  int iVar1;
  
  iVar1 = param_fake_branch(10);
  return iVar1;
}



/* Function: param_opaque_predicate @ 00101240 */

int param_opaque_predicate(int x)

{
  int iVar1;
  int p3;
  int p2;
  int temp;
  int b;
  int a;
  int p1;
  int x_local;
  undefined4 local_c;
  
  b = x + 1;
  a = x;
  while (b != 0) {
    iVar1 = a % b;
    a = b;
    b = iVar1;
  }
  if ((x * x + x * 2 + 1 == (x + 1) * (x + 1)) && (a == 1)) {
    local_c = x * 2 + 10;
  }
  else {
    local_c = x * 3 + 0x14;
  }
  return local_c;
}



/* Function: call_opaque_predicate @ 00101320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  
  iVar1 = param_opaque_predicate(5);
  return iVar1;
}



/* Function: param_instruction_substitution @ 00101330 */

int param_instruction_substitution(int x)

{
  int mul15;
  int mod16;
  int div2;
  uint ux;
  int result;
  int x_local;
  
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 00101380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  int iVar1;
  
  iVar1 = param_instruction_substitution(10);
  return iVar1;
}



/* Function: decrypt_string @ 00101390 */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  char *p;
  char key_local;
  size_t len_local;
  char *buffer_local;
  char *encrypted_local;
  
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  for (p = buffer; *p != '\0'; p = p + 1) {
    *p = *p ^ key;
  }
  return buffer;
}



/* Function: param_string_encryption @ 00101410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  size_t sVar1;
  char decrypted [32];
  
  decrypt_string(param_string_encryption::encrypted,decrypted,0x20,'Z');
  sVar1 = strlen(decrypted);
  return (int)sVar1 + (int)decrypted[0];
}



/* Function: call_string_encryption @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 00101460 */

int param_tail_call_optimized(int n,int acc)

{
  int acc_local;
  int n_local;
  undefined4 local_c;
  
  local_c = acc;
  if (0 < n) {
    local_c = param_tail_call_optimized(n + -1,acc + n);
  }
  return local_c;
}



/* Function: call_tail_call_optimized @ 001014a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  int iVar1;
  
  iVar1 = param_tail_call_optimized(1000,0);
  return iVar1;
}



/* Function: param_non_tail_call @ 001014c0 */

int param_non_tail_call(int n)

{
  int n_local;
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



/* Function: call_non_tail_call @ 00101510 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 00101520 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int i_1;
  int sum;
  int i;
  int n_local;
  int *c_local;
  int *b_local;
  int *a_local;
  
  for (i = 0; i < n; i = i + 1) {
    c[i] = a[i] + b[i];
  }
  sum = 0;
  for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
    sum = c[i_1] + sum;
  }
  return sum;
}



/* Function: call_vectorized_loop @ 001015c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  int c [8];
  int b [8];
  int a [8];
  
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
  memset(c,0,0x20);
  iVar1 = param_vectorized_loop(a,b,c,8);
  return iVar1;
}



/* Function: param_link_time_optimization @ 00101650 */

int param_link_time_optimization(int x)

{
  int iVar1;
  int x_local;
  
  iVar1 = lto_target_func(x);
  return iVar1;
}



/* Function: lto_target_func @ 00101670 */

int lto_target_func(int x)

{
  int x_local;
  
  return x * 2 + 10;
}



/* Function: call_link_time_optimization @ 00101690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  int iVar1;
  
  iVar1 = param_link_time_optimization(5);
  return iVar1;
}



/* Function: div_zero_handler @ 001016a0 */

void div_zero_handler(int sig)

{
  int sig_local;
  
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 001016d0 */

int param_division_by_zero(int x)

{
  int iVar1;
  int y;
  int x_local;
  int local_c;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    local_c = (int)(10 / (long)x);
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_division_by_zero @ 00101730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_division_by_zero(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: segv_handler @ 00101770 */

void segv_handler(int sig)

{
  int sig_local;
  
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 001017a0 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int val;
  int *p_local;
  int local_c;
  
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
    local_c = *p;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_null_pointer_deref @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  int valid;
  
  valid = 0x2a;
  iVar1 = param_null_pointer_deref(&valid);
  iVar2 = param_null_pointer_deref((int *)0x0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}



/* Function: param_buffer_overflow_stack @ 00101850 */

/* WARNING: Removing unreachable block (ram,0x0010189e) */

int param_buffer_overflow_stack(int x)

{
  int i;
  int canary;
  char buffer [8];
  int x_local;
  
  for (i = 0; i < 0x11; i = i + 1) {
    buffer[i] = 'A';
  }
  return x;
}



/* Function: param_buffer_overflow_heap @ 001018b0 */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  int i;
  char *heap_buffer;
  int x_local;
  undefined4 local_c;
  
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    local_c = -2;
  }
  else {
    for (i = 0; i < 0x21; i = i + 1) {
      *(undefined1 *)((long)__ptr + (long)i) = 0x42;
    }
    free(__ptr);
    local_c = x;
  }
  return local_c;
}



/* Function: call_buffer_overflow @ 00101930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00101960 */

int param_integer_overflow(int a,int b)

{
  uint unsigned_sum;
  uint ub;
  uint ua;
  int signed_sum;
  int b_local;
  int a_local;
  int local_c;
  
  local_c = a + b;
  if (((a < 1) || (b < 1)) || (-1 < a + b)) {
    if (((a < 0) && (b < 0)) && (0 < a + b)) {
      local_c = -2;
    }
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: call_integer_overflow @ 001019f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(-1,1);
  return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 00101a30 */

int param_undefined_behavior(int i)

{
  int local;
  int i_local;
  
  return i << 1;
}



/* Function: call_undefined_behavior @ 00101a50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
  int iVar1;
  int result;
  
  iVar1 = param_undefined_behavior(5);
  return iVar1;
}



/* Function: param_implementation_defined @ 00101a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
  anon_struct_4_3_4e909822 bitfield;
  int s;
  char c;
  int result;
  
  return 0x2f;
}



/* Function: call_implementation_defined @ 00101b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  int iVar1;
  
  iVar1 = param_implementation_defined();
  return iVar1;
}



/* Function: test_obf_opt_edge @ 00101b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
