// Decompiled by BinaryAI
// SHA256: 9a2d61f84af6cb42a6769848c904743664c016233c4c6651293a1614371efca5

// Function: _init @ 0x100848
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

// Function: <EXTERNAL>::__printf_chk @ 0x1008e0
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1008f0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100900
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100910
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100920
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x100930
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::__longjmp_chk @ 0x100940
void __longjmp_chk(void)
{
  __longjmp_chk();
}

// Function: <EXTERNAL>::strncpy @ 0x100950
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: main @ 0x100980
undefined8 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _start @ 0x1009c0
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1009f4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100a10
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100a40
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00100a7c @ 0x100a7c
void FUN_00100a7c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100a80
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: div_zero_handler @ 0x100ad4
void div_zero_handler(void)
{
  div_zero_caught = 1;
  __longjmp_chk(jmp_buffer);
}

// Function: segv_handler @ 0x100af4
void segv_handler(void)
{
  segv_caught = 1;
  __longjmp_chk();
}

// Function: param_fake_branch @ 0x100b14
void param_fake_branch(void)
{
  return;
}

// Function: call_fake_branch @ 0x100b18
undefined8 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x100b20
int param_opaque_predicate(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = param_1 + 1;
  iVar2 = iVar1;
  iVar4 = param_1;
  while (iVar3 = iVar2, iVar3 != 0) {
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = iVar4 / iVar3;
    }
    iVar2 = iVar4 - iVar2 * iVar3;
    iVar4 = iVar3;
  }
  iVar2 = param_1 * 3 + 0x14;
  if (param_1 * param_1 + param_1 * 2 + 1 == iVar1 * iVar1 && iVar4 == 1) {
    iVar2 = param_1 * 2 + 10;
  }
  return iVar2;
}

// Function: call_opaque_predicate @ 0x100b78
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x100b80
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x100ba4
undefined8 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x100bac
byte * decrypt_string(char *param_1,char *param_2,size_t param_3,byte param_4)
{
  byte *pbVar1;
  byte *pbVar2;
  pbVar1 = (byte *)strncpy(param_2,param_1,param_3);
  pbVar1[param_3 - 1] = 0;
  for (pbVar2 = pbVar1; *pbVar2 != 0; pbVar2 = pbVar2 + 1) {
    *pbVar2 = *pbVar2 ^ param_4;
  }
  return pbVar1;
}

// Function: param_string_encryption @ 0x100c04
void param_string_encryption(void)
{
  size_t sVar1;
  byte local_28 [32];
  long local_8;
  local_8 = ___stack_chk_guard;
  decrypt_string(&encrypted_0,local_28,0x20,0x5a);
  sVar1 = strlen((char *)local_28);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail((uint)local_28[0] + (int)sVar1,&__stack_chk_guard,0,
                     local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_tail_call_optimized @ 0x100c80
int param_tail_call_optimized(int param_1,int param_2)
{
  for (; 0 < param_1; param_1 = param_1 + -1) {
    param_2 = param_2 + param_1;
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x100ca0
undefined8 call_tail_call_optimized(void)
{
  return 0x7a314;
}

// Function: param_non_tail_call @ 0x100cac
int param_non_tail_call(int param_1)
{
  int iVar1;
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}

// Function: call_non_tail_call @ 0x100ccc
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x100cd4
int param_vectorized_loop(long param_1,long param_2,long param_3,int param_4)
{
  int iVar1;
  long lVar2;
  for (lVar2 = 0; (int)lVar2 < param_4; lVar2 = lVar2 + 1) {
    *(int *)(param_3 + lVar2 * 4) = *(int *)(param_1 + lVar2 * 4) + *(int *)(param_2 + lVar2 * 4);
  }
  iVar1 = 0;
  for (lVar2 = 0; (int)lVar2 < param_4; lVar2 = lVar2 + 1) {
    iVar1 = iVar1 + *(int *)(param_3 + lVar2 * 4);
  }
  return iVar1;
}

// Function: call_vectorized_loop @ 0x100d1c
void call_vectorized_loop(void)
{
  undefined8 uVar1;
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
  local_28 = 0;
  uStack_20 = 0;
  uStack_60 = 0x400000003;
  local_68 = 0x200000001;
  uStack_50 = 0x800000007;
  uStack_58 = 0x600000005;
  local_18 = 0;
  uStack_10 = 0;
  uStack_40 = 0x500000006;
  local_48 = 0x700000008;
  uStack_30 = 0x100000002;
  uStack_38 = 0x300000004;
  uVar1 = param_vectorized_loop(&local_68,&local_48,&local_28,8);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_link_time_optimization @ 0x100d94
int param_link_time_optimization(int param_1)
{
  return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x100da0
undefined8 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: param_division_by_zero @ 0x100da8
int param_division_by_zero(int param_1)
{
  int iVar1;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
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

// Function: call_division_by_zero @ 0x100df4
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x100e34
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

// Function: call_null_pointer_deref @ 0x100e7c
void call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_c = 0x2a;
  iVar1 = param_null_pointer_deref(&local_c,0);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(iVar1 + iVar2,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_buffer_overflow_stack @ 0x100ef8
void param_buffer_overflow_stack(void)
{
  return;
}

// Function: param_buffer_overflow_heap @ 0x100efc
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  void *__ptr;
  __ptr = malloc(0x10);
  if (__ptr == (void *)0x0) {
    param_1 = 0xfffffffe;
  }
  else {
    free(__ptr);
  }
  return param_1;
}

// Function: call_buffer_overflow @ 0x100f34
int call_buffer_overflow(void)
{
  int iVar1;
  iVar1 = param_buffer_overflow_heap(0x14);
  return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x100f50
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  iVar1 = param_1 + param_2;
  if (((int)param_1 < 1 || param_2 == 0) || 0 < (int)param_1 && (int)param_2 < 0) {
    if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
      iVar1 = -2;
    }
  }
  else if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x100f88
undefined8 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x100f94
int param_undefined_behavior(int param_1)
{
  return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100f9c
undefined8 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x100fa4
undefined8 param_implementation_defined(void)
{
  return 0x30;
}

// Function: call_implementation_defined @ 0x100fac
undefined8 call_implementation_defined(void)
{
  return 0x30;
}

// Function: test_obf_opt_edge @ 0x100fb4
void test_obf_opt_edge(void)
{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  puts(&DAT_00101120);
  __printf_chk(1,&DAT_0010114d,10);
  uVar1 = call_opaque_predicate();
  __printf_chk(1,&DAT_00101169,uVar1);
  __printf_chk(1,&DAT_00101185,0xe1);
  uVar1 = param_string_encryption();
  uVar2 = __printf_chk(1,&DAT_001011a2,uVar1);
  auVar3 = call_tail_call_optimized(uVar2,&DAT_001011be);
  __printf_chk(1,auVar3._8_8_,auVar3._0_8_ & 0xffffffff);
  uVar1 = call_non_tail_call();
  __printf_chk(1,&DAT_001011e8,uVar1);
  uVar1 = call_vectorized_loop();
  __printf_chk(1,&DAT_0010120d,uVar1);
  __printf_chk(1,&DAT_00101233,0x14);
  uVar1 = call_division_by_zero();
  __printf_chk(1,&DAT_00101253,uVar1);
  uVar1 = call_null_pointer_deref();
  __printf_chk(1,&DAT_0010126f,uVar1);
  uVar1 = call_buffer_overflow();
  __printf_chk(1,&DAT_0010128c,uVar1);
  __printf_chk(1,&DAT_001012a9,2000000000);
  __printf_chk(1,&DAT_001012da,10);
  __printf_chk(1,&DAT_001012f7,0x30);
  return;
}

// Function: _fini @ 0x101108
void _fini(void)
{
  return;
}

