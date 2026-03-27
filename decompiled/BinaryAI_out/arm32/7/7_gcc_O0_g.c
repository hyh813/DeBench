// Decompiled by BinaryAI
// SHA256: 57cbc9019ffea6ab37d59d4971848cf479c599a5b84e95e8c791205968392ed2

// Function: _init @ 0x104e4
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x10504
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10510
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::printf @ 0x1051c
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x10528
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x10534
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x10540
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::signal @ 0x1054c
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10558
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10564
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10570
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10588
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::memset @ 0x10594
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x105a0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::abort @ 0x105ac
void abort(void)
{
  abort();
}

// Function: _start @ 0x105b8
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x105fc
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x10620
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1064c
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10684
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: param_fake_branch @ 0x106b0
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x106e8
undefined4 call_fake_branch(void)
{
  undefined4 uVar1;
  uVar1 = param_fake_branch(10);
  return uVar1;
}

// Function: param_opaque_predicate @ 0x10704
int param_opaque_predicate(int param_1)
{
  int extraout_r1;
  int iVar1;
  int local_20;
  int local_1c;
  local_1c = param_1 + 1;
  local_20 = param_1;
  while (local_1c != 0) {
    __aeabi_idivmod(local_20,local_1c);
    local_20 = local_1c;
    local_1c = extraout_r1;
  }
  if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_20 == 1)) {
    iVar1 = (param_1 + 5) * 2;
  }
  else {
    iVar1 = param_1 * 3 + 0x14;
  }
  return iVar1;
}

// Function: call_opaque_predicate @ 0x10814
undefined4 call_opaque_predicate(void)
{
  undefined4 uVar1;
  uVar1 = param_opaque_predicate(5);
  return uVar1;
}

// Function: param_instruction_substitution @ 0x10830
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x108c0
undefined4 call_instruction_substitution(void)
{
  undefined4 uVar1;
  uVar1 = param_instruction_substitution(10);
  return uVar1;
}

// Function: decrypt_string @ 0x108dc
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte *local_c;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_c = param_2; *local_c != 0; local_c = local_c + 1) {
    *local_c = param_4 ^ *local_c;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x10974
int param_string_encryption(void)
{
  size_t sVar1;
  byte local_2c [32];
  int local_c;
  local_c = 0;
  decrypt_string(&encrypted_0,local_2c,0x20,0x5a);
  sVar1 = strlen((char *)local_2c);
  if (local_c != 0) {
    __stack_chk_fail(sVar1,local_c,0);
  }
  return sVar1 + local_2c[0];
}

// Function: call_string_encryption @ 0x109ec
undefined4 call_string_encryption(void)
{
  undefined4 uVar1;
  uVar1 = param_string_encryption();
  return uVar1;
}

// Function: param_tail_call_optimized @ 0x10a04
int param_tail_call_optimized(int param_1,int param_2)
{
  if (0 < param_1) {
    param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x10a58
undefined4 call_tail_call_optimized(void)
{
  undefined4 uVar1;
  uVar1 = param_tail_call_optimized(1000,0);
  return uVar1;
}

// Function: param_non_tail_call @ 0x10a78
int param_non_tail_call(int param_1)
{
  int iVar1;
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_non_tail_call(param_1 + -1);
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}

// Function: call_non_tail_call @ 0x10ac4
undefined4 call_non_tail_call(void)
{
  undefined4 uVar1;
  uVar1 = param_non_tail_call(100);
  return uVar1;
}

// Function: param_vectorized_loop @ 0x10ae0
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
  int local_14;
  int local_10;
  int local_c;
  for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
    *(int *)(param_3 + local_14 * 4) =
         *(int *)(param_1 + local_14 * 4) + *(int *)(param_2 + local_14 * 4);
  }
  local_10 = 0;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    local_10 = local_10 + *(int *)(param_3 + local_c * 4);
  }
  return local_10;
}

// Function: call_vectorized_loop @ 0x10bc8
undefined4 call_vectorized_loop(void)
{
  undefined4 uVar1;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined auStack_2c [32];
  int local_c;
  local_c = 0;
  local_6c = 1;
  uStack_68 = 2;
  uStack_64 = 3;
  uStack_60 = 4;
  local_5c = 5;
  uStack_58 = 6;
  uStack_54 = 7;
  uStack_50 = 8;
  local_4c = 8;
  uStack_48 = 7;
  uStack_44 = 6;
  uStack_40 = 5;
  local_3c = 4;
  uStack_38 = 3;
  uStack_34 = 2;
  uStack_30 = 1;
  memset(auStack_2c,0,0x20);
  uVar1 = param_vectorized_loop(&local_6c,&local_4c,auStack_2c,8);
  if (local_c != 0) {
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}

// Function: lto_target_func @ 0x10c7c
int lto_target_func(int param_1)
{
  return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x10ca8
undefined4 param_link_time_optimization(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = lto_target_func(param_1);
  return uVar1;
}

// Function: call_link_time_optimization @ 0x10cd0
undefined4 call_link_time_optimization(void)
{
  undefined4 uVar1;
  uVar1 = param_link_time_optimization(5);
  return uVar1;
}

// Function: div_zero_handler @ 0x10cec
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10d1c
undefined4 param_division_by_zero(undefined4 param_1)
{
  int iVar1;
  undefined4 uVar2;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)&jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = __aeabi_idiv(10,param_1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_division_by_zero @ 0x10d80
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}

// Function: segv_handler @ 0x10dc8
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10df8
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_null_pointer_deref @ 0x10e54
int call_null_pointer_deref(void)
{
  __sighandler_t p_Var1;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  local_c = 0;
  local_18 = 0x2a;
  local_14 = param_null_pointer_deref(&local_18);
  local_10 = param_null_pointer_deref(0);
  p_Var1 = signal(0xb,(__sighandler_t)0x0);
  if (local_c != 0) {
    __stack_chk_fail(p_Var1,local_c,0);
  }
  return local_14 + local_10;
}

// Function: param_buffer_overflow_stack @ 0x10ed8
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  int local_1c;
  undefined auStack_14 [8];
  int local_c;
  local_c = 0;
  for (local_1c = 0; local_1c < 0x11; local_1c = local_1c + 1) {
    auStack_14[local_1c] = 0x41;
  }
  if (local_c == 0) {
    return param_1;
  }
  __stack_chk_fail(param_1,local_c,0);
}

// Function: param_buffer_overflow_heap @ 0x10f84
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  void *__ptr;
  int local_10;
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    param_1 = 0xfffffffe;
  }
  else {
    for (local_10 = 0; local_10 < 0x21; local_10 = local_10 + 1) {
      *(undefined *)((int)__ptr + local_10) = 0x42;
    }
    free(__ptr);
  }
  return param_1;
}

// Function: call_buffer_overflow @ 0x11008
int call_buffer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x11044
int param_integer_overflow(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_1 + param_2;
  if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_1 + param_2)) {
    if (((param_1 < 0) && (param_2 < 0)) && (0 < param_1 + param_2)) {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x110f4
int call_integer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x1113c
int param_undefined_behavior(int param_1)
{
  return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x1116c
undefined4 call_undefined_behavior(void)
{
  undefined4 uVar1;
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}

// Function: param_implementation_defined @ 0x11194
undefined4 param_implementation_defined(void)
{
  return 0x2c;
}

// Function: call_implementation_defined @ 0x1125c
undefined4 call_implementation_defined(void)
{
  undefined4 uVar1;
  uVar1 = param_implementation_defined();
  return uVar1;
}

// Function: test_obf_opt_edge @ 0x11274
int test_obf_opt_edge(void)
{
  undefined4 uVar1;
  int iVar2;
  puts(&DAT_0001172c);
  uVar1 = call_fake_branch();
  printf(&DAT_0001175c,uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_00011778,uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_00011794,uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_000117b4,uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_000117d0,uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_000117fc,uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_00011824,uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_0001184c,uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_0001186c,uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_00011888,uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_000118a8,uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_000118c8,uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_000118fc,uVar1);
  uVar1 = call_implementation_defined();
  iVar2 = printf(&DAT_0001191c,uVar1);
  return iVar2;
}

// Function: main @ 0x113e0
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: __aeabi_idiv @ 0x113f8
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
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11448))();
  return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x11400
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
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11448))();
  return uVar1;
}

// Function: __aeabi_idivmod @ 0x11618
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

// Function: __aeabi_idiv0 @ 0x11638
void __aeabi_idiv0(void)
{
  raise(8);
  return;
}

// Function: _fini @ 0x11648
void _fini(void)
{
  return;
}

