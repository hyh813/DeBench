// Decompiled by BinaryAI
// SHA256: 66e9113f5ae3cba3d156bd5b0c0666e24b8ce9ca5d20f5f266ccdd2881b7bf37

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010d0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::free @ 0x1010e0
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x1010f0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::puts @ 0x101100
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x101110
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101120
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::printf @ 0x101130
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x101140
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x101150
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x101160
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x101170
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: _start @ 0x101180
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1011b0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1011e0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101220
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

// Function: param_fake_branch @ 0x101269
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x10128a
void call_fake_branch(void)
{
  param_fake_branch(10);
  return;
}

// Function: param_opaque_predicate @ 0x10129e
int param_opaque_predicate(int param_1)
{
  int iVar1;
  int local_20;
  int local_1c;
  local_20 = param_1;
  local_1c = param_1 + 1;
  while (local_1c != 0) {
    iVar1 = local_20 % local_1c;
    local_20 = local_1c;
    local_1c = iVar1;
  }
  if ((param_1 * 2 + param_1 * param_1 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_20 == 1)) {
    iVar1 = (param_1 + 5) * 2;
  }
  else {
    iVar1 = param_1 * 3 + 0x14;
  }
  return iVar1;
}

// Function: call_opaque_predicate @ 0x101340
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x101354
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x1013b3
void call_instruction_substitution(void)
{
  param_instruction_substitution(10);
  return;
}

// Function: decrypt_string @ 0x1013c7
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte *local_10;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  for (local_10 = param_2; *local_10 != 0; local_10 = local_10 + 1) {
    *local_10 = *local_10 ^ param_4;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x10143f
int param_string_encryption(void)
{
  size_t sVar1;
  long in_FS_OFFSET;
  char local_38 [40];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  decrypt_string(&encrypted_0,local_38,0x20,0x5a);
  sVar1 = strlen(local_38);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return (int)local_38[0] + (int)sVar1;
}

// Function: call_string_encryption @ 0x1014a7
void call_string_encryption(void)
{
  param_string_encryption();
  return;
}

// Function: param_tail_call_optimized @ 0x1014bb
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

// Function: call_tail_call_optimized @ 0x1014f1
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
}

// Function: param_non_tail_call @ 0x10150a
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

// Function: call_non_tail_call @ 0x10153a
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x10154e
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
  int local_14;
  int local_10;
  int local_c;
  for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
    *(int *)(param_3 + (long)local_14 * 4) =
         *(int *)(param_2 + (long)local_14 * 4) + *(int *)(param_1 + (long)local_14 * 4);
  }
  local_10 = 0;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    local_10 = local_10 + *(int *)(param_3 + (long)local_c * 4);
  }
  return local_10;
}

// Function: call_vectorized_loop @ 0x1015f8
void call_vectorized_loop(void)
{
  long in_FS_OFFSET;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 1;
  local_74 = 2;
  local_70 = 3;
  local_6c = 4;
  local_68 = 5;
  local_64 = 6;
  local_60 = 7;
  local_5c = 8;
  local_58 = 8;
  local_54 = 7;
  local_50 = 6;
  local_4c = 5;
  local_48 = 4;
  local_44 = 3;
  local_40 = 2;
  local_3c = 1;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  param_vectorized_loop(&local_78,&local_58,&local_38,8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: lto_target_func @ 0x1016d2
int lto_target_func(int param_1)
{
  return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x1016e3
void param_link_time_optimization(undefined4 param_1)
{
  lto_target_func(param_1);
  return;
}

// Function: call_link_time_optimization @ 0x1016fe
void call_link_time_optimization(void)
{
  param_link_time_optimization(5);
  return;
}

// Function: div_zero_handler @ 0x101712
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x10173f
ulong param_division_by_zero(int param_1)
{
  int iVar1;
  ulong uVar2;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = 10 / (long)param_1 & 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_division_by_zero @ 0x101791
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: segv_handler @ 0x1017d0
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x1017fd
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

// Function: call_null_pointer_deref @ 0x10184d
int call_null_pointer_deref(void)
{
  long in_FS_OFFSET;
  undefined4 local_1c;
  int local_18;
  int local_14;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 0x2a;
  local_18 = param_null_pointer_deref(&local_1c);
  local_14 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return local_14 + local_18;
}

// Function: param_buffer_overflow_stack @ 0x1018b8
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  long in_FS_OFFSET;
  int local_20;
  undefined auStack_18 [8];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
    auStack_18[local_20] = 0x41;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
  __stack_chk_fail();
}

// Function: param_buffer_overflow_heap @ 0x101923
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  void *__ptr;
  int local_14;
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    param_1 = 0xfffffffe;
  }
  else {
    for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
      *(undefined *)((long)__ptr + (long)local_14) = 0x42;
    }
    free(__ptr);
  }
  return param_1;
}

// Function: call_buffer_overflow @ 0x101982
int call_buffer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar2 + iVar1;
}

// Function: param_integer_overflow @ 0x1019b2
int param_integer_overflow(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_2 + param_1;
  if (((param_1 < 1) || (param_2 < 1)) || (-1 < param_2 + param_1)) {
    if (((param_1 < 0) && (param_2 < 0)) && (0 < param_2 + param_1)) {
      iVar1 = -2;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x101a19
int call_integer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar2 + iVar1;
}

// Function: param_undefined_behavior @ 0x101a53
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101a6c
undefined4 call_undefined_behavior(void)
{
  undefined4 uVar1;
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}

// Function: param_implementation_defined @ 0x101a8a
undefined4 param_implementation_defined(void)
{
  return 0x2f;
}

// Function: call_implementation_defined @ 0x101b0a
void call_implementation_defined(void)
{
  param_implementation_defined();
  return;
}

// Function: test_obf_opt_edge @ 0x101b1e
void test_obf_opt_edge(void)
{
  uint uVar1;
  puts(&DAT_00102010);
  uVar1 = call_fake_branch();
  printf(&DAT_0010203d,(ulong)uVar1);
  uVar1 = call_opaque_predicate();
  printf(&DAT_00102059,(ulong)uVar1);
  uVar1 = call_instruction_substitution();
  printf(&DAT_00102075,(ulong)uVar1);
  uVar1 = call_string_encryption();
  printf(&DAT_00102092,(ulong)uVar1);
  uVar1 = call_tail_call_optimized();
  printf(&DAT_001020b0,(ulong)uVar1);
  uVar1 = call_non_tail_call();
  printf(&DAT_001020e0,(ulong)uVar1);
  uVar1 = call_vectorized_loop();
  printf(&DAT_00102108,(ulong)uVar1);
  uVar1 = call_link_time_optimization();
  printf(&DAT_00102130,(ulong)uVar1);
  uVar1 = call_division_by_zero();
  printf(&DAT_00102150,(ulong)uVar1);
  uVar1 = call_null_pointer_deref();
  printf(&DAT_0010216c,(ulong)uVar1);
  uVar1 = call_buffer_overflow();
  printf(&DAT_00102189,(ulong)uVar1);
  uVar1 = call_integer_overflow();
  printf(&DAT_001021a8,(ulong)uVar1);
  uVar1 = call_undefined_behavior();
  printf(&DAT_001021d9,(ulong)uVar1);
  uVar1 = call_implementation_defined();
  printf(&DAT_001021f8,(ulong)uVar1);
  return;
}

// Function: main @ 0x101cf8
undefined8 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _fini @ 0x101d14
void _fini(void)
{
  return;
}

