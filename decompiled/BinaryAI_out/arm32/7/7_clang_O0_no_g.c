// Decompiled by BinaryAI
// SHA256: 07596595d42ea94ba2feb3ac24210dcc289086fdf50834bb7b282b5432513cd0

// Function: _init @ 0x104ac
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::raise @ 0x104cc
int raise(int __sig)
{
  int iVar1;
  iVar1 = raise(__sig);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x104d8
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x104e4
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::printf @ 0x104f0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x104fc
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x10508
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x10514
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::signal @ 0x10520
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x1052c
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10544
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x10550
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::abort @ 0x1055c
void abort(void)
{
  abort();
}

// Function: _start @ 0x10568
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x105ac
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x105d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10614
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10664
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}

// Function: param_fake_branch @ 0x106d0
int param_fake_branch(int param_1)
{
  int iVar1;
  int local_10;
  iVar1 = param_1 * param_1;
  local_10 = param_1;
  if (iVar1 == -1 || iVar1 + 1 < 0 != SCARRY4(iVar1,1)) {
    local_10 = param_1 * 2 + -0x21524111;
  }
  strlen("test");
  return local_10;
}

// Function: call_fake_branch @ 0x10758
void call_fake_branch(void)
{
  param_fake_branch(10);
  return;
}

// Function: param_opaque_predicate @ 0x10770
int param_opaque_predicate(int param_1)
{
  int extraout_r1;
  int local_1c;
  int local_18;
  int local_c;
  local_1c = param_1 + 1;
  local_18 = param_1;
  while (local_1c != 0) {
    __aeabi_idivmod(local_18,local_1c);
    local_18 = local_1c;
    local_1c = extraout_r1;
  }
  if (((param_1 * param_1 + param_1 * 2) - (param_1 + 1) * (param_1 + 1) == -1) && (local_18 == 1))
  {
    local_c = param_1 * 2 + 10;
  }
  else {
    local_c = param_1 * 3 + 0x14;
  }
  return local_c;
}

// Function: call_opaque_predicate @ 0x10878
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x10890
int param_instruction_substitution(uint param_1)
{
  return param_1 * 6 + (param_1 >> 1) + (param_1 & 0xf) + param_1 * 0xf;
}

// Function: call_instruction_substitution @ 0x10900
void call_instruction_substitution(void)
{
  param_instruction_substitution(10);
  return;
}

// Function: decrypt_string @ 0x10918
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte *local_1c;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_1c = param_2; *local_1c != 0; local_1c = local_1c + 1) {
    *local_1c = *local_1c ^ param_4;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x109ac
int param_string_encryption(void)
{
  size_t sVar1;
  byte local_28 [32];
  decrypt_string(&param_string_encryption_encrypted,local_28,0x20,0x5a);
  sVar1 = strlen((char *)local_28);
  return sVar1 + local_28[0];
}

// Function: call_string_encryption @ 0x109f4
void call_string_encryption(void)
{
  param_string_encryption();
  return;
}

// Function: param_tail_call_optimized @ 0x10a08
int param_tail_call_optimized(int param_1,int param_2)
{
  int local_c;
  local_c = param_2;
  if (0 < param_1) {
    local_c = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return local_c;
}

// Function: call_tail_call_optimized @ 0x10a64
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
}

// Function: param_non_tail_call @ 0x10a80
int param_non_tail_call(int param_1)
{
  int local_c;
  if (param_1 < 1) {
    local_c = 0;
  }
  else {
    local_c = param_non_tail_call(param_1 + -1);
    local_c = param_1 + local_c;
  }
  return local_c;
}

// Function: call_non_tail_call @ 0x10ae0
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x10af8
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
  int local_1c;
  int local_18;
  int local_14;
  for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
    *(int *)(param_3 + local_14 * 4) =
         *(int *)(param_1 + local_14 * 4) + *(int *)(param_2 + local_14 * 4);
  }
  local_18 = 0;
  for (local_1c = 0; local_1c < param_4; local_1c = local_1c + 1) {
    local_18 = local_18 + *(int *)(param_3 + local_1c * 4);
  }
  return local_18;
}

// Function: call_vectorized_loop @ 0x10bbc
void call_vectorized_loop(void)
{
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  local_30 = 1;
  uStack_2c = 2;
  uStack_28 = 3;
  uStack_24 = 4;
  local_20 = 5;
  uStack_1c = 6;
  uStack_18 = 7;
  uStack_14 = 8;
  local_50 = 8;
  uStack_4c = 7;
  uStack_48 = 6;
  uStack_44 = 5;
  local_40 = 4;
  uStack_3c = 3;
  uStack_38 = 2;
  uStack_34 = 1;
  local_54 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_68 = 0;
  local_6c = 0;
  local_70 = 0;
  param_vectorized_loop(&local_30,&local_50,&local_70,8);
  return;
}

// Function: param_link_time_optimization @ 0x10c4c
void param_link_time_optimization(undefined4 param_1)
{
  lto_target_func(param_1);
  return;
}

// Function: lto_target_func @ 0x10c70
int lto_target_func(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x10c8c
void call_link_time_optimization(void)
{
  param_link_time_optimization(5);
  return;
}

// Function: div_zero_handler @ 0x10ca4
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10cd8
undefined4 param_division_by_zero(undefined4 param_1)
{
  int iVar1;
  undefined4 local_c;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    local_c = __divsi3(10,param_1);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: call_division_by_zero @ 0x10d50
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero();
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}

// Function: segv_handler @ 0x10d9c
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x10dd0
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 local_c;
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  if (iVar1 == 0) {
    local_c = *param_1;
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}

// Function: call_null_pointer_deref @ 0x10e44
int call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  local_c = 0x2a;
  iVar1 = param_null_pointer_deref(&local_c);
  iVar2 = param_null_pointer_deref();
  signal(0xb,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x10e98
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  int local_14;
  undefined auStack_c [8];
  undefined4 local_4;
  local_4 = param_1;
  for (local_14 = 0; local_14 < 0x11; local_14 = local_14 + 1) {
    auStack_c[local_14] = 0x41;
  }
  return local_4;
}

// Function: param_buffer_overflow_heap @ 0x10f24
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  void *__ptr;
  int local_18;
  undefined4 local_c;
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    local_c = 0xfffffffe;
  }
  else {
    for (local_18 = 0; local_18 < 0x21; local_18 = local_18 + 1) {
      *(undefined *)((int)__ptr + local_18) = 0x42;
    }
    free(__ptr);
    local_c = param_1;
  }
  return local_c;
}

// Function: call_buffer_overflow @ 0x10fc0
int call_buffer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x10ffc
int param_integer_overflow(int param_1,int param_2)
{
  int iVar1;
  int local_4;
  iVar1 = param_1 + param_2;
  local_4 = param_1 + param_2;
  if (((param_1 < 1) || (param_2 < 1)) || (iVar1 != -1 && iVar1 + 1 < 0 == SCARRY4(iVar1,1))) {
    if (((param_1 == -1 || param_1 + 1 < 0 != SCARRY4(param_1,1)) &&
        (param_2 == -1 || param_2 + 1 < 0 != SCARRY4(param_2,1))) && (0 < iVar1)) {
      local_4 = -2;
    }
  }
  else {
    local_4 = -1;
  }
  return local_4;
}

// Function: call_integer_overflow @ 0x110c8
int call_integer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_integer_overflow(1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x11110
int param_undefined_behavior(int param_1)
{
  return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x11130
undefined4 call_undefined_behavior(void)
{
  undefined4 uVar1;
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}

// Function: param_implementation_defined @ 0x11158
undefined4 param_implementation_defined(void)
{
  return 0x2c;
}

// Function: call_implementation_defined @ 0x11204
void call_implementation_defined(void)
{
  param_implementation_defined();
  return;
}

// Function: test_obf_opt_edge @ 0x11218
void test_obf_opt_edge(void)
{
  undefined4 uVar1;
  printf(&DAT_000116a5);
  uVar1 = call_fake_branch();
  printf(&DAT_000116d3,uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_000116ef,uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_0001170b,uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_00011728,uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_00011744,uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_0001176e,uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_00011793,uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_000117b9,uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_000117d9,uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_000117f5,uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_00011812,uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_0001182f,uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_00011860,uVar1);
  uVar1 = call_implementation_defined();
  printf(&DAT_0001187d,uVar1);
  return;
}

// Function: main @ 0x11388
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: __divsi3 @ 0x113b4
uint __divsi3(uint param_1,uint param_2)
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
    uVar1 = __aeabi_ldiv0(param_1);
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
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11404))();
  return uVar1;
}

// Function: .divsi3_skip_div0_test @ 0x113bc
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
  uVar1 = (*(code *)(iVar2 * 0xc + 0x11404))();
  return uVar1;
}

// Function: __aeabi_idivmod @ 0x115d4
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
  __aeabi_ldiv0(param_1);
  return;
}

// Function: __aeabi_ldiv0 @ 0x115f4
void __aeabi_ldiv0(void)
{
  raise(8);
  return;
}

// Function: _fini @ 0x11604
void _fini(void)
{
  return;
}

