// Decompiled by BinaryAI
// SHA256: ee6ac3fb1a6de19e9119373e0875798f8f64289746bcd451d0adeb183c06682f

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

// Function: <EXTERNAL>::strncpy @ 0x101030
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::puts @ 0x101040
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x101050
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::printf @ 0x101060
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x101070
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x101080
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::longjmp @ 0x101090
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1010a0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x1010b0
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1010e0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101110
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101150
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

// Function: param_fake_branch @ 0x1011a0
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x1011b0
undefined8 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x1011c0
int param_opaque_predicate(uint param_1)
{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uVar5 = param_1 + 1;
  uVar4 = uVar5;
  uVar3 = param_1;
  while (uVar2 = uVar4, uVar2 != 0) {
    uVar4 = (int)uVar3 % (int)uVar2;
    uVar3 = uVar2;
  }
  iVar1 = param_1 * 3 + 0x14;
  if ((uVar3 ^ 1 | uVar5 * uVar5 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
    iVar1 = param_1 * 2 + 10;
  }
  return iVar1;
}

// Function: call_opaque_predicate @ 0x101210
undefined8 call_opaque_predicate(void)
{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  iVar4 = 6;
  iVar1 = 5;
  do {
    iVar3 = iVar4;
    iVar4 = iVar1 % iVar3;
    iVar1 = iVar3;
  } while (iVar4 != 0);
  uVar2 = 0x23;
  if (iVar3 == 1) {
    uVar2 = 0x14;
  }
  return uVar2;
}

// Function: param_instruction_substitution @ 0x101240
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x101260
undefined8 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x101270
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte bVar1;
  byte *pbVar2;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  bVar1 = *param_2;
  if (bVar1 != 0) {
    pbVar2 = param_2 + 1;
    do {
      pbVar2[-1] = bVar1 ^ param_4;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return param_2;
}

// Function: param_string_encryption @ 0x1012c0
int param_string_encryption(void)
{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte local_28 [31];
  undefined local_9;
  strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
  local_9 = 0;
  bVar1 = local_28[0];
  pbVar2 = local_28;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar3 = strlen((char *)local_28);
  return (int)sVar3 + (int)(char)local_28[0];
}

// Function: call_string_encryption @ 0x101320
int call_string_encryption(void)
{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  byte local_28 [31];
  undefined local_9;
  strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
  local_9 = 0;
  bVar1 = local_28[0];
  pbVar2 = local_28;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar3 = strlen((char *)local_28);
  return (int)sVar3 + (int)(char)local_28[0];
}

// Function: param_tail_call_optimized @ 0x101380
void param_tail_call_optimized(int param_1,int param_2)
{
  if (0 < param_1) {
    param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return;
}

// Function: call_tail_call_optimized @ 0x1013a0
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
}

// Function: param_non_tail_call @ 0x1013b0
int param_non_tail_call(int param_1)
{
  int iVar1;
  if (0 < param_1) {
    iVar1 = param_non_tail_call(param_1 + -1);
    return iVar1 + param_1;
  }
  return 0;
}

// Function: call_non_tail_call @ 0x1013d0
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x1013e0
int param_vectorized_loop(long param_1,long param_2,long param_3,uint param_4)
{
  int iVar1;
  ulong uVar2;
  if (0 < (int)param_4) {
    uVar2 = 0;
    do {
      *(int *)(param_3 + uVar2 * 4) = *(int *)(param_2 + uVar2 * 4) + *(int *)(param_1 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  if (0 < (int)param_4) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_3 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
    return iVar1;
  }
  return 0;
}

// Function: call_vectorized_loop @ 0x101420
int call_vectorized_loop(void)
{
  int iVar1;
  long lVar2;
  undefined local_28 [16];
  undefined local_18 [16];
  local_18 = ZEXT816(0);
  local_28 = ZEXT816(0);
  lVar2 = 0;
  do {
    *(int *)(local_28 + lVar2) =
         *(int *)((long)&DAT_00102030 + lVar2) + *(int *)((long)&DAT_00102010 + lVar2);
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0x20);
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)(local_28 + lVar2 * 4);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  return iVar1;
}

// Function: param_link_time_optimization @ 0x101470
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x101480
undefined8 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: div_zero_handler @ 0x101490
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x1014b0
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

// Function: call_division_by_zero @ 0x1014f0
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: segv_handler @ 0x101520
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x101540
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

// Function: call_null_pointer_deref @ 0x101570
int call_null_pointer_deref(void)
{
  undefined4 in_EAX;
  int iVar1;
  int iVar2;
  undefined8 uStack_18;
  uStack_18 = CONCAT44(0x2a,in_EAX);
  iVar1 = param_null_pointer_deref((long)&uStack_18 + 4);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x1015b0
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1015c0
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  return param_1;
}

// Function: call_buffer_overflow @ 0x1015d0
undefined8 call_buffer_overflow(void)
{
  return 0x1e;
}

// Function: param_integer_overflow @ 0x1015e0
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  int iVar2;
  iVar2 = param_2 + param_1;
  if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar2 < 0)) {
    return -1;
  }
  iVar1 = -2;
  if (iVar2 < 1) {
    iVar1 = iVar2;
  }
  if (-1 < (int)(param_2 & param_1)) {
    iVar1 = iVar2;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x101610
undefined8 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x101620
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x101630
undefined8 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x101640
undefined8 param_implementation_defined(void)
{
  return 0x2f;
}

// Function: call_implementation_defined @ 0x101650
undefined8 call_implementation_defined(void)
{
  return 0x2f;
}

// Function: test_obf_opt_edge @ 0x101660
void test_obf_opt_edge(void)
{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined local_38 [16];
  undefined local_28 [16];
  puts(&DAT_00102221);
  printf(&DAT_00102050,10);
  uVar7 = 6;
  iVar4 = 5;
  do {
    iVar5 = (int)uVar7;
    uVar7 = (long)iVar4 % (long)iVar5 & 0xffffffff;
    iVar4 = iVar5;
  } while ((int)uVar7 != 0);
  uVar9 = 0x23;
  if (iVar5 == 1) {
    uVar9 = 0x14;
  }
  printf(&DAT_0010206c,uVar9);
  printf(&DAT_00102088,0xe1);
  strncpy(local_38,(char *)&param_string_encryption_encrypted,0x20);
  local_28[15] = 0;
  bVar1 = local_38[0];
  pbVar2 = local_38;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ 0x5a;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  sVar6 = strlen(local_38);
  lVar8 = 0;
  printf(&DAT_001020a5,(ulong)(uint)((int)(char)local_38[0] + (int)sVar6));
  uVar3 = param_tail_call_optimized(1000,0);
  printf(&DAT_001020c1,(ulong)uVar3);
  uVar3 = param_non_tail_call(100);
  printf(&DAT_001020eb,(ulong)uVar3);
  local_28 = ZEXT816(0);
  local_38 = ZEXT816(0);
  do {
    *(int *)(local_38 + lVar8) =
         *(int *)((long)&DAT_00102030 + lVar8) + *(int *)((long)&DAT_00102010 + lVar8);
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x20);
  lVar8 = 0;
  uVar7 = 0;
  do {
    uVar7 = (ulong)(uint)((int)uVar7 + *(int *)(local_38 + lVar8 * 4));
    lVar8 = lVar8 + 1;
  } while (lVar8 != 8);
  printf(&DAT_00102110,uVar7);
  printf(&DAT_00102136);
  param_division_by_zero(5);
  param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_00102156);
  local_38._0_4_ = 0x2a;
  iVar4 = param_null_pointer_deref(local_38);
  iVar5 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_00102172,(ulong)(uint)(iVar5 + iVar4));
  printf(&DAT_0010218f,0x1e);
  printf(&DAT_001021ac,2000000000);
  printf(&DAT_001021dd,10);
  printf(&DAT_001021fa,0x2f);
  return;
}

// Function: main @ 0x101890
undefined8 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _fini @ 0x10189c
void _fini(void)
{
  return;
}

