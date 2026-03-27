// Decompiled by BinaryAI
// SHA256: fcc6118ff161b88026a3dab56cdceb9f2341bf38e999a848588367c9217136f0

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

// Function: <EXTERNAL>::_setjmp @ 0x101130
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x101140
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::malloc @ 0x101150
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101160
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x101170
void __longjmp_chk(void)
{
  __longjmp_chk();
}

// Function: main @ 0x101180
undefined  [16] main(void)
{
  undefined auVar1 [16];
  ulong in_RAX;
  test_obf_opt_edge();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_RAX;
  return auVar1 << 0x40;
}

// Function: _start @ 0x101190
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1011c0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1011f0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101230
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

// Function: div_zero_handler @ 0x101279
void div_zero_handler(void)
{
  div_zero_caught = 1;
  __longjmp_chk(jmp_buffer,1);
}

// Function: segv_handler @ 0x10129b
void segv_handler(void)
{
  segv_caught = 1;
  __longjmp_chk(segv_buffer,1);
}

// Function: param_fake_branch @ 0x1012bd
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x1012c4
undefined8 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x1012ce
int param_opaque_predicate(uint param_1)
{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uVar1 = param_1 + 1;
  uVar3 = (ulong)param_1;
  uVar4 = (ulong)uVar1;
  while( true ) {
    iVar2 = (int)uVar3;
    if ((int)uVar4 == 0) break;
    uVar3 = uVar4;
    uVar4 = (long)iVar2 % (long)(int)uVar4 & 0xffffffff;
  }
  if ((iVar2 == 1) && (param_1 * 2 + 1 + param_1 * param_1 == uVar1 * uVar1)) {
    return param_1 * 2 + 10;
  }
  return param_1 * 3 + 0x14;
}

// Function: call_opaque_predicate @ 0x10130f
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x10131a
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101334
undefined8 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x10133e
undefined  [16]
decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4,undefined8 param_5)
{
  byte *pbVar1;
  undefined auVar2 [16];
  auVar2._0_8_ = (byte *)strncpy(param_2,param_1,param_3);
  auVar2._0_8_[param_3 - 1] = 0;
  for (pbVar1 = auVar2._0_8_; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
    *pbVar1 = *pbVar1 ^ param_4;
  }
  auVar2._8_8_ = param_5;
  return auVar2;
}

// Function: param_string_encryption @ 0x10137b
int param_string_encryption(void)
{
  size_t sVar1;
  long in_FS_OFFSET;
  char local_30 [32];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  decrypt_string(&encrypted_0,local_30,0x20,0x5a);
  sVar1 = strlen(local_30);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return (int)local_30[0] + (int)sVar1;
}

// Function: call_string_encryption @ 0x1013e0
void call_string_encryption(void)
{
  param_string_encryption();
  return;
}

// Function: param_tail_call_optimized @ 0x1013e8
int param_tail_call_optimized(int param_1,int param_2)
{
  for (; 0 < param_1; param_1 = param_1 + -1) {
    param_2 = param_2 + param_1;
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x1013f9
undefined8 call_tail_call_optimized(void)
{
  return 0x7a314;
}

// Function: param_non_tail_call @ 0x101403
int param_non_tail_call(int param_1)
{
  int iVar1;
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}

// Function: call_non_tail_call @ 0x101414
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x10141f
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
  long lVar1;
  int iVar2;
  for (lVar1 = 0; (int)lVar1 < param_4; lVar1 = lVar1 + 1) {
    *(int *)(param_3 + lVar1 * 4) = *(int *)(param_2 + lVar1 * 4) + *(int *)(param_1 + lVar1 * 4);
  }
  iVar2 = 0;
  for (lVar1 = 0; (int)lVar1 < param_4; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_3 + lVar1 * 4);
  }
  return iVar2;
}

// Function: call_vectorized_loop @ 0x101450
void call_vectorized_loop(void)
{
  long lVar1;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30 [8];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0x200000001;
  local_68 = 0x400000003;
  local_60 = 0x600000005;
  local_58 = 0x800000007;
  local_50 = 0x700000008;
  local_48 = 0x500000006;
  local_40 = 0x300000004;
  local_38 = 0x100000002;
  puVar2 = local_30;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_vectorized_loop(&local_70,&local_50,local_30,8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: param_link_time_optimization @ 0x10151b
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101524
undefined8 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: param_division_by_zero @ 0x10152e
ulong param_division_by_zero(int param_1)
{
  int iVar1;
  ulong uVar2;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 10 / (long)param_1 & 0xffffffff;
  }
  return uVar2;
}

// Function: call_division_by_zero @ 0x101575
undefined  [16] call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  undefined8 in_RAX;
  undefined auVar3 [16];
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  auVar3._0_4_ = iVar1 + iVar2;
  auVar3._4_4_ = 0;
  auVar3._8_8_ = in_RAX;
  return auVar3;
}

// Function: param_null_pointer_deref @ 0x1015a4
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  signal(0xb,segv_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)segv_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  return uVar2;
}

// Function: call_null_pointer_deref @ 0x1015e9
int call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_24);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return iVar1 + iVar2;
}

// Function: param_buffer_overflow_stack @ 0x10164b
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x101652
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  undefined4 uVar1;
  void *__ptr;
  __ptr = malloc(0x10);
  uVar1 = 0xfffffffe;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    uVar1 = param_1;
  }
  return uVar1;
}

// Function: call_buffer_overflow @ 0x101679
undefined  [16] call_buffer_overflow(void)
{
  int iVar1;
  undefined8 in_RAX;
  undefined auVar2 [16];
  iVar1 = param_buffer_overflow_heap(0x14);
  auVar2._0_4_ = iVar1 + 10;
  auVar2._4_4_ = 0;
  auVar2._8_8_ = in_RAX;
  return auVar2;
}

// Function: param_integer_overflow @ 0x10168d
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  iVar1 = param_1 + param_2;
  if ((0 < (int)param_1) && (0 < (int)param_2)) {
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
  if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
    iVar1 = -2;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x1016b6
undefined8 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x1016c0
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x1016c8
undefined8 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x1016d2
undefined8 param_implementation_defined(void)
{
  return 0x2f;
}

// Function: call_implementation_defined @ 0x1016dc
undefined8 call_implementation_defined(void)
{
  return 0x2f;
}

// Function: test_obf_opt_edge @ 0x1016e6
void test_obf_opt_edge(void)
{
  undefined4 uVar1;
  undefined8 in_RAX;
  puts(&DAT_00102004);
  __printf_chk(1,&DAT_00102031,10);
  uVar1 = call_opaque_predicate();
  __printf_chk(1,&DAT_0010204d,uVar1);
  __printf_chk(1,&DAT_00102069,0xe1);
  uVar1 = param_string_encryption();
  __printf_chk(1,&DAT_00102086,uVar1);
  call_tail_call_optimized(1,&DAT_001020a2);
  __printf_chk();
  call_non_tail_call();
  __printf_chk(1);
  uVar1 = call_vectorized_loop();
  __printf_chk(1,&DAT_001020f1,uVar1);
  __printf_chk(1,&DAT_00102117,0x14);
  uVar1 = call_division_by_zero();
  __printf_chk(1,&DAT_00102137,uVar1);
  uVar1 = call_null_pointer_deref();
  __printf_chk(1,&DAT_00102153,uVar1);
  uVar1 = call_buffer_overflow();
  __printf_chk(1,&DAT_00102170,uVar1);
  __printf_chk(1,&DAT_0010218d,2000000000);
  __printf_chk(1,&DAT_001021be,10);
  __printf_chk(1,&DAT_001021db,0x2f,in_RAX);
  return;
}

// Function: _fini @ 0x101868
void _fini(void)
{
  return;
}

