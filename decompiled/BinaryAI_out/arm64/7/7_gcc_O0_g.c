// Decompiled by BinaryAI
// SHA256: 238f4466455a889333ef6e9e0077b3a428c826147d2da0af03eb360e19188c11

// Function: _init @ 0x100840
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100860 @ 0x100860
void FUN_00100860(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x100880
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x100890
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1008a0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1008b0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::signal @ 0x1008c0
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x1008d0
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008e0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1008f0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100900
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100910
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x100920
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::longjmp @ 0x100930
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::strncpy @ 0x100940
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x100950
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100980
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1009b4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x1009d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100a00
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00100a3c @ 0x100a3c
void FUN_00100a3c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100a40
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: param_fake_branch @ 0x100a94
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x100abc
void call_fake_branch(void)
{
  param_fake_branch(10);
  return;
}

// Function: param_opaque_predicate @ 0x100ad4
int param_opaque_predicate(int param_1)
{
  int iVar1;
  int local_18;
  int local_14;
  local_18 = param_1;
  local_14 = param_1 + 1;
  while (local_14 != 0) {
    iVar1 = 0;
    if (local_14 != 0) {
      iVar1 = local_18 / local_14;
    }
    iVar1 = local_18 - iVar1 * local_14;
    local_18 = local_14;
    local_14 = iVar1;
  }
  if ((param_1 * param_1 + param_1 * 2 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_18 == 1)) {
    iVar1 = (param_1 + 5) * 2;
  }
  else {
    iVar1 = param_1 * 3 + 0x14;
  }
  return iVar1;
}

// Function: call_opaque_predicate @ 0x100bd4
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x100bec
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100c6c
void call_instruction_substitution(void)
{
  param_instruction_substitution(10);
  return;
}

// Function: decrypt_string @ 0x100c84
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte *local_8;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_8 = param_2; *local_8 != 0; local_8 = local_8 + 1) {
    *local_8 = *local_8 ^ param_4;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x100d10
int param_string_encryption(void)
{
  int iVar1;
  size_t sVar2;
  byte local_28 [32];
  long local_8;
  local_8 = ___stack_chk_guard;
  decrypt_string(&encrypted_0,local_28,0x20,0x5a);
  sVar2 = strlen((char *)local_28);
  iVar1 = (int)sVar2 + (uint)local_28[0];
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: call_string_encryption @ 0x100d8c
void call_string_encryption(void)
{
  param_string_encryption();
  return;
}

// Function: param_tail_call_optimized @ 0x100da0
ulong param_tail_call_optimized(int param_1,uint param_2)
{
  ulong uVar1;
  if (param_1 < 1) {
    uVar1 = (ulong)param_2;
  }
  else {
    uVar1 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return uVar1;
}

// Function: call_tail_call_optimized @ 0x100dec
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
}

// Function: param_non_tail_call @ 0x100e08
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

// Function: call_non_tail_call @ 0x100e48
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x100e60
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
  int local_c;
  int local_8;
  int local_4;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    *(int *)(param_3 + (long)local_c * 4) =
         *(int *)(param_1 + (long)local_c * 4) + *(int *)(param_2 + (long)local_c * 4);
  }
  local_8 = 0;
  for (local_4 = 0; local_4 < param_4; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_3 + (long)local_4 * 4);
  }
  return local_8;
}

// Function: call_vectorized_loop @ 0x100f2c
undefined4 call_vectorized_loop(void)
{
  undefined4 uVar1;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  uStack_60 = 0x400000003;
  local_68 = 0x200000001;
  uStack_50 = 0x800000007;
  uStack_58 = 0x600000005;
  uStack_40 = 0x500000006;
  local_48 = 0x700000008;
  uStack_30 = 0x100000002;
  uStack_38 = 0x300000004;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  uVar1 = param_vectorized_loop(&local_68,&local_48,&local_28,8);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: lto_target_func @ 0x100fbc
int lto_target_func(int param_1)
{
  return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x100fd8
void param_link_time_optimization(undefined4 param_1)
{
  lto_target_func(param_1);
  return;
}

// Function: call_link_time_optimization @ 0x100ff4
void call_link_time_optimization(void)
{
  param_link_time_optimization(5);
  return;
}

// Function: div_zero_handler @ 0x10100c
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)&jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x101038
int param_division_by_zero(int param_1)
{
  int iVar1;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)&jmp_buffer);
  if (iVar1 == 0) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = 10 / param_1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_division_by_zero @ 0x10108c
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}

// Function: segv_handler @ 0x1010cc
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1010f8
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

// Function: call_null_pointer_deref @ 0x101148
int call_null_pointer_deref(void)
{
  undefined4 local_14;
  int local_10;
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_14 = 0x2a;
  local_10 = param_null_pointer_deref(&local_14,0);
  local_c = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,local_10 + local_c,0,local_8 - ___stack_chk_guard);
  }
  return local_10 + local_c;
}

// Function: param_buffer_overflow_stack @ 0x1011cc
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  int local_18;
  undefined auStack_10 [8];
  long local_8;
  local_8 = ___stack_chk_guard;
  for (local_18 = 0; local_18 < 0x11; local_18 = local_18 + 1) {
    auStack_10[local_18] = 0x41;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return param_1;
  }
  __stack_chk_fail(&__stack_chk_guard,param_1,0,local_8 - ___stack_chk_guard);
}

// Function: param_buffer_overflow_heap @ 0x101278
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  void *__ptr;
  int local_c;
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    param_1 = 0xfffffffe;
  }
  else {
    for (local_c = 0; local_c < 0x21; local_c = local_c + 1) {
      *(undefined *)((long)__ptr + (long)local_c) = 0x42;
    }
    free(__ptr);
  }
  return param_1;
}

// Function: call_buffer_overflow @ 0x1012ec
int call_buffer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar1 + iVar2;
}

// Function: param_integer_overflow @ 0x101320
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

// Function: call_integer_overflow @ 0x1013c0
int call_integer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar1 + iVar2;
}

// Function: param_undefined_behavior @ 0x101404
int param_undefined_behavior(int param_1)
{
  return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x101424
undefined4 call_undefined_behavior(void)
{
  undefined4 uVar1;
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}

// Function: param_implementation_defined @ 0x101444
undefined4 param_implementation_defined(void)
{
  return 0x30;
}

// Function: call_implementation_defined @ 0x1014ec
void call_implementation_defined(void)
{
  param_implementation_defined();
  return;
}

// Function: test_obf_opt_edge @ 0x101500
int test_obf_opt_edge(void)
{
  int iVar1;
  ulong uVar2;
  iVar1 = puts(&DAT_001016b8);
  uVar2 = call_fake_branch(iVar1);
  iVar1 = printf(&DAT_001016e8,uVar2 & 0xffffffff);
  uVar2 = call_opaque_predicate(iVar1);
  iVar1 = printf(&DAT_00101708,uVar2 & 0xffffffff);
  uVar2 = call_instruction_substitution(iVar1);
  iVar1 = printf(&DAT_00101728,uVar2 & 0xffffffff);
  uVar2 = call_string_encryption(iVar1);
  iVar1 = printf(&DAT_00101748,uVar2 & 0xffffffff);
  uVar2 = call_tail_call_optimized(iVar1);
  iVar1 = printf(&DAT_00101768,uVar2 & 0xffffffff);
  uVar2 = call_non_tail_call(iVar1);
  iVar1 = printf(&DAT_00101798,uVar2 & 0xffffffff);
  uVar2 = call_vectorized_loop(iVar1);
  iVar1 = printf(&DAT_001017c0,uVar2 & 0xffffffff);
  uVar2 = call_link_time_optimization(iVar1);
  iVar1 = printf(&DAT_001017e8,uVar2 & 0xffffffff);
  uVar2 = call_division_by_zero(iVar1);
  iVar1 = printf(&DAT_00101808,uVar2 & 0xffffffff);
  uVar2 = call_null_pointer_deref(iVar1);
  iVar1 = printf(&DAT_00101828,uVar2 & 0xffffffff);
  uVar2 = call_buffer_overflow(iVar1);
  iVar1 = printf(&DAT_00101848,uVar2 & 0xffffffff);
  uVar2 = call_integer_overflow(iVar1);
  iVar1 = printf(&DAT_00101868,uVar2 & 0xffffffff);
  uVar2 = call_undefined_behavior(iVar1);
  iVar1 = printf(&DAT_001018a0,uVar2 & 0xffffffff);
  uVar2 = call_implementation_defined(iVar1);
  iVar1 = printf(&DAT_001018c0,uVar2 & 0xffffffff);
  return iVar1;
}

// Function: main @ 0x101638
undefined8 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _fini @ 0x101650
void _fini(void)
{
  return;
}

