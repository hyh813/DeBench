/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/7/7_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000104e4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 000105b8 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000105fc */

/* WARNING: Removing unreachable block (ram,0x00010610) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010620 */

/* WARNING: Removing unreachable block (ram,0x00010630) */
/* WARNING: Removing unreachable block (ram,0x00010638) */
/* WARNING: Removing unreachable block (ram,0x0001063c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001064c */

/* WARNING: Removing unreachable block (ram,0x00010668) */
/* WARNING: Removing unreachable block (ram,0x00010670) */
/* WARNING: Removing unreachable block (ram,0x00010674) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010684 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: param_fake_branch @ 000106b0 */

int param_fake_branch(int x)

{
  int x_local;
  int result;
  char *str;
  
  return x;
}



/* Function: call_fake_branch @ 000106e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fake_branch(void)

{
  int iVar1;
  
  iVar1 = param_fake_branch(10);
  return iVar1;
}



/* Function: param_opaque_predicate @ 00010704 */

int param_opaque_predicate(int x)

{
  int extraout_r1;
  int iVar1;
  int x_local;
  int a;
  int b;
  int p1;
  int p2;
  int p3;
  int temp;
  
  b = x + 1;
  a = x;
  while (b != 0) {
    __aeabi_idivmod(a,b);
    a = b;
    b = extraout_r1;
  }
  if ((x * x + x * 2 + 1 == (x + 1) * (x + 1)) && (a == 1)) {
    iVar1 = (x + 5) * 2;
  }
  else {
    iVar1 = x * 3 + 0x14;
  }
  return iVar1;
}



/* Function: call_opaque_predicate @ 00010814 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_opaque_predicate(void)

{
  int iVar1;
  
  iVar1 = param_opaque_predicate(5);
  return iVar1;
}



/* Function: param_instruction_substitution @ 00010830 */

int param_instruction_substitution(int x)

{
  int x_local;
  int result;
  uint ux;
  int div2;
  int mod16;
  int mul15;
  
  return x * 0x15 + ((uint)x >> 1) + (x & 0xfU);
}



/* Function: call_instruction_substitution @ 000108c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_instruction_substitution(void)

{
  int iVar1;
  
  iVar1 = param_instruction_substitution(10);
  return iVar1;
}



/* Function: decrypt_string @ 000108dc */

char * decrypt_string(char *encrypted,char *buffer,size_t len,char key)

{
  char key_local;
  size_t len_local;
  char *buffer_local;
  char *encrypted_local;
  char *p;
  
  strncpy(buffer,encrypted,len);
  buffer[len - 1] = '\0';
  for (p = buffer; *p != '\0'; p = p + 1) {
    *p = key ^ *p;
  }
  return buffer;
}



/* Function: param_string_encryption @ 00010974 */

/* WARNING: Removing unreachable block (ram,0x000109d4) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_string_encryption(void)

{
  size_t sVar1;
  char decrypted [32];
  
  decrypt_string(param_string_encryption::encrypted,decrypted,0x20,'Z');
  sVar1 = strlen(decrypted);
  return sVar1 + (byte)decrypted[0];
}



/* Function: call_string_encryption @ 000109ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_encryption(void)

{
  int iVar1;
  
  iVar1 = param_string_encryption();
  return iVar1;
}



/* Function: param_tail_call_optimized @ 00010a04 */

int param_tail_call_optimized(int n,int acc)

{
  int acc_local;
  int n_local;
  
  if (0 < n) {
    acc = param_tail_call_optimized(n + -1,acc + n);
  }
  return acc;
}



/* Function: call_tail_call_optimized @ 00010a58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_tail_call_optimized(void)

{
  int iVar1;
  
  iVar1 = param_tail_call_optimized(1000,0);
  return iVar1;
}



/* Function: param_non_tail_call @ 00010a78 */

int param_non_tail_call(int n)

{
  int iVar1;
  int n_local;
  
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_non_tail_call(n + -1);
    iVar1 = iVar1 + n;
  }
  return iVar1;
}



/* Function: call_non_tail_call @ 00010ac4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_non_tail_call(void)

{
  int iVar1;
  
  iVar1 = param_non_tail_call(100);
  return iVar1;
}



/* Function: param_vectorized_loop @ 00010ae0 */

int param_vectorized_loop(int *a,int *b,int *c,int n)

{
  int n_local;
  int *c_local;
  int *b_local;
  int *a_local;
  int i;
  int sum;
  int i_1;
  
  for (i = 0; i < n; i = i + 1) {
    c[i] = a[i] + b[i];
  }
  sum = 0;
  for (i_1 = 0; i_1 < n; i_1 = i_1 + 1) {
    sum = sum + c[i_1];
  }
  return sum;
}



/* Function: call_vectorized_loop @ 00010bc8 */

/* WARNING: Removing unreachable block (ram,0x00010c60) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorized_loop(void)

{
  int iVar1;
  int a [8];
  int b [8];
  int c [8];
  
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



/* Function: lto_target_func @ 00010c7c */

int lto_target_func(int x)

{
  int x_local;
  
  return (x + 5) * 2;
}



/* Function: param_link_time_optimization @ 00010ca8 */

int param_link_time_optimization(int x)

{
  int iVar1;
  int x_local;
  
  iVar1 = lto_target_func(x);
  return iVar1;
}



/* Function: call_link_time_optimization @ 00010cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_link_time_optimization(void)

{
  int iVar1;
  
  iVar1 = param_link_time_optimization(5);
  return iVar1;
}



/* Function: div_zero_handler @ 00010cec */

void div_zero_handler(int sig)

{
  int sig_local;
  
  div_zero_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}



/* Function: param_division_by_zero @ 00010d1c */

int param_division_by_zero(int x)

{
  int iVar1;
  int x_local;
  int y;
  
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    iVar1 = __aeabi_idiv(10,x);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_division_by_zero @ 00010d80 */

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
  return iVar1 + iVar2;
}



/* Function: segv_handler @ 00010dc8 */

void segv_handler(int sig)

{
  int sig_local;
  
  segv_caught = 1;
                    /* WARNING: Subroutine does not return */
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}



/* Function: param_null_pointer_deref @ 00010df8 */

int param_null_pointer_deref(int *p)

{
  int iVar1;
  int *p_local;
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



/* Function: call_null_pointer_deref @ 00010e54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_null_pointer_deref(void)

{
  __sighandler_t p_Var1;
  int valid;
  int r1;
  int r2;
  int local_c;
  
  local_c = 0;
  valid = 0x2a;
  r1 = param_null_pointer_deref(&valid);
  r2 = param_null_pointer_deref((int *)0x0);
  p_Var1 = signal(0xb,(__sighandler_t)0x0);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(p_Var1,local_c,0);
  }
  return r1 + r2;
}



/* Function: param_buffer_overflow_stack @ 00010ed8 */

/* WARNING: Removing unreachable block (ram,0x00010f50) */
/* WARNING: Removing unreachable block (ram,0x00010f6c) */

int param_buffer_overflow_stack(int x)

{
  int x_local;
  int i;
  int canary;
  char buffer [8];
  
  for (i = 0; i < 0x11; i = i + 1) {
    buffer[i] = 'A';
  }
  return x;
}



/* Function: param_buffer_overflow_heap @ 00010f84 */

int param_buffer_overflow_heap(int x)

{
  void *__ptr;
  int x_local;
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



/* Function: call_buffer_overflow @ 00011008 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_buffer_overflow(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}



/* Function: param_integer_overflow @ 00011044 */

int param_integer_overflow(int a,int b)

{
  int iVar1;
  int b_local;
  int a_local;
  int signed_sum;
  uint ua;
  uint ub;
  uint unsigned_sum;
  
  iVar1 = a + b;
  if (((a < 1) || (b < 1)) || (-1 < a + b)) {
    if (((a < 0) && (b < 0)) && (0 < a + b)) {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_integer_overflow @ 000110f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_integer_overflow(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(-1,1);
  return iVar1 + iVar2;
}



/* Function: param_undefined_behavior @ 0001113c */

int param_undefined_behavior(int i)

{
  int i_local;
  int local;
  
  return i << 1;
}



/* Function: call_undefined_behavior @ 0001116c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_undefined_behavior(void)

{
  int iVar1;
  int result;
  
  iVar1 = param_undefined_behavior(5);
  return iVar1;
}



/* Function: param_implementation_defined @ 00011194 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int param_implementation_defined(void)

{
  char c;
  anon_struct_4_3_4e909822 bitfield;
  int result;
  int s;
  
  return 0x2c;
}



/* Function: call_implementation_defined @ 0001125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_implementation_defined(void)

{
  int iVar1;
  
  iVar1 = param_implementation_defined();
  return iVar1;
}



/* Function: test_obf_opt_edge @ 00011274 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_obf_opt_edge(void)

{
  int iVar1;
  
  puts(&DAT_0001172c);
  iVar1 = call_fake_branch();
  printf(&DAT_0001175c,iVar1);
  iVar1 = call_opaque_predicate();
  printf(&DAT_00011778,iVar1);
  iVar1 = call_instruction_substitution();
  printf(&DAT_00011794,iVar1);
  iVar1 = call_string_encryption();
  printf(&DAT_000117b4,iVar1);
  iVar1 = call_tail_call_optimized();
  printf(&DAT_000117d0,iVar1);
  iVar1 = call_non_tail_call();
  printf(&DAT_000117fc,iVar1);
  iVar1 = call_vectorized_loop();
  printf(&DAT_00011824,iVar1);
  iVar1 = call_link_time_optimization();
  printf(&DAT_0001184c,iVar1);
  iVar1 = call_division_by_zero();
  printf(&DAT_0001186c,iVar1);
  iVar1 = call_null_pointer_deref();
  printf(&DAT_00011888,iVar1);
  iVar1 = call_buffer_overflow();
  printf(&DAT_000118a8,iVar1);
  iVar1 = call_integer_overflow();
  printf(&DAT_000118c8,iVar1);
  iVar1 = call_undefined_behavior();
  printf(&DAT_000118fc,iVar1);
  iVar1 = call_implementation_defined();
  printf(&DAT_0001191c,iVar1);
  return;
}



/* Function: main @ 000113e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_obf_opt_edge();
  return 0;
}



/* Function: __aeabi_idiv @ 000113f8 */

uint __aeabi_idiv(uint param_1,uint param_2)

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
    uVar1 = __aeabi_idiv0(param_1);
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
                    /* WARNING: Could not recover jumptable at 0x00011440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11448))();
  return uVar1;
}



/* Function: .divsi3_skip_div0_test @ 00011400 */

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
                    /* WARNING: Could not recover jumptable at 0x00011440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11448))();
  return uVar1;
}



/* Function: __aeabi_idivmod @ 00011618 */

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
  __aeabi_idiv0(param_1);
  return;
}



/* Function: __aeabi_idiv0 @ 00011638 */

void __aeabi_idiv0(void)

{
  raise(8);
  return;
}



/* Function: _fini @ 00011648 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 46 */
