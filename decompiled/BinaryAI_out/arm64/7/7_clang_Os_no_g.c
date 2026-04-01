// Decompiled by BinaryAI
// SHA256: 9dc9f3744f8e337703dce5751c78e24397a8f0ce509d88efe9d3b55fa76da6d7

// Function: _init @ 0x100710
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100730 @ 0x100730
void FUN_00100730(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x100750
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::_setjmp @ 0x100760
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100770
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100780
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::signal @ 0x100790
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007a0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1007b0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1007c0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x1007d0
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::strncpy @ 0x1007e0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::printf @ 0x1007f0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100800
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100834
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100850
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100880
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001008bc @ 0x1008bc
void FUN_001008bc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x1008c0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: param_fake_branch @ 0x100914
void param_fake_branch(void)
{
  return;
}

// Function: call_fake_branch @ 0x100918
undefined8 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x100920
int param_opaque_predicate(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = param_1 + 1;
  iVar2 = iVar1;
  iVar4 = param_1;
  if (param_1 == -1) {
    iVar3 = -1;
  }
  else {
    do {
      iVar3 = iVar2;
      iVar2 = 0;
      if (iVar3 != 0) {
        iVar2 = iVar4 / iVar3;
      }
      iVar2 = iVar4 - iVar2 * iVar3;
      iVar4 = iVar3;
    } while (iVar2 != 0);
  }
  iVar2 = param_1 * 2 + 10;
  if (iVar3 != 1 || (param_1 * 2 | 1U) + param_1 * param_1 != iVar1 * iVar1) {
    iVar2 = param_1 * 3 + 0x14;
  }
  return iVar2;
}

// Function: call_opaque_predicate @ 0x100978
undefined4 call_opaque_predicate(void)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  iVar1 = 6;
  iVar4 = 5;
  do {
    iVar2 = iVar1;
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = iVar4 / iVar2;
    }
    iVar1 = iVar4 - iVar1 * iVar2;
    iVar4 = iVar2;
  } while (iVar1 != 0);
  uVar3 = 0x14;
  if (iVar2 != 1) {
    uVar3 = 0x23;
  }
  return uVar3;
}

// Function: param_instruction_substitution @ 0x1009a8
int param_instruction_substitution(uint param_1)
{
  return (param_1 & 0xf) + (param_1 >> 1) + param_1 * 0x15;
}

// Function: call_instruction_substitution @ 0x1009bc
undefined8 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x1009c4
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  bVar2 = *param_2;
  if (bVar2 != 0) {
    pbVar3 = param_2 + 1;
    do {
      bVar1 = bVar2 ^ param_4;
      bVar2 = *pbVar3;
      pbVar3[-1] = bVar1;
      pbVar3 = pbVar3 + 1;
    } while (bVar2 != 0);
  }
  return param_2;
}

// Function: param_string_encryption @ 0x100a2c
int param_string_encryption(void)
{
  byte bVar1;
  size_t sVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  byte local_40 [31];
  undefined local_21;
  strncpy((char *)local_40,&param_string_encryption_encrypted,0x20);
  local_21 = 0;
  if (local_40[0] == 0) {
    uVar5 = 0;
  }
  else {
    pbVar4 = (byte *)((ulong)local_40 | 1);
    bVar3 = local_40[0];
    do {
      bVar1 = bVar3 ^ 0x5a;
      bVar3 = *pbVar4;
      pbVar4[-1] = bVar1;
      pbVar4 = pbVar4 + 1;
    } while (bVar3 != 0);
    uVar5 = (uint)local_40[0];
  }
  sVar2 = strlen((char *)local_40);
  return (int)sVar2 + uVar5;
}

// Function: param_tail_call_optimized @ 0x100aa8
int param_tail_call_optimized(int param_1,int param_2)
{
  uint uVar1;
  uVar1 = param_1 - 1;
  if (0 < param_1) {
    param_2 = (param_2 + param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x100ad0
undefined8 call_tail_call_optimized(void)
{
  return 0x7a314;
}

// Function: param_non_tail_call @ 0x100adc
int param_non_tail_call(int param_1)
{
  uint uVar1;
  uVar1 = param_1 - 1;
  if (0 < param_1) {
    return (param_1 + uVar1 * uVar1) - (int)((ulong)uVar1 * (ulong)(param_1 - 2) >> 1);
  }
  return 0;
}

// Function: call_non_tail_call @ 0x100b04
undefined8 call_non_tail_call(void)
{
  return 0x13ba;
}

// Function: param_vectorized_loop @ 0x100b0c
int param_vectorized_loop(int *param_1,int *param_2,int *param_3,uint param_4)
{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    uVar3 = uVar2;
    piVar4 = param_3;
    do {
      uVar3 = uVar3 - 1;
      *piVar4 = *param_2 + *param_1;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 != 0);
    if (0 < (int)param_4) {
      iVar1 = 0;
      do {
        uVar2 = uVar2 - 1;
        iVar1 = *param_3 + iVar1;
        param_3 = param_3 + 1;
      } while (uVar2 != 0);
      return iVar1;
    }
  }
  return 0;
}

// Function: call_vectorized_loop @ 0x100b60
int call_vectorized_loop(void)
{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20 [4];
  lVar1 = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  do {
    uVar2 = *(undefined8 *)(&DAT_00100f10 + lVar1);
    uVar3 = *(undefined8 *)(&DAT_00100f30 + lVar1);
    *(ulong *)((long)local_20 + lVar1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(&UNK_00100f38 + lVar1) >> 0x20) +
                  (int)((ulong)*(undefined8 *)(&UNK_00100f18 + lVar1) >> 0x20),
                  (int)*(undefined8 *)(&UNK_00100f38 + lVar1) +
                  (int)*(undefined8 *)(&UNK_00100f18 + lVar1));
    *(ulong *)((long)local_20 + lVar1) =
         CONCAT44((int)((ulong)uVar3 >> 0x20) + (int)((ulong)uVar2 >> 0x20),(int)uVar3 + (int)uVar2)
    ;
    lVar1 = lVar1 + 0x10;
  } while (lVar1 != 0x20);
  return (int)local_20[2] + (int)local_20[0] +
         (int)((ulong)local_20[2] >> 0x20) + (int)((ulong)local_20[0] >> 0x20) +
         (int)local_20[3] + (int)local_20[1] +
         (int)((ulong)local_20[3] >> 0x20) + (int)((ulong)local_20[1] >> 0x20);
}

// Function: param_link_time_optimization @ 0x100bb4
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x100bc0
undefined8 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: div_zero_handler @ 0x100bc8
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x100bec
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

// Function: call_division_by_zero @ 0x100c38
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: segv_handler @ 0x100c78
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x100c9c
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

// Function: call_null_pointer_deref @ 0x100ce4
int call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_24;
  local_24 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_24);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x100d34
void param_buffer_overflow_stack(void)
{
  return;
}

// Function: param_buffer_overflow_heap @ 0x100d38
void param_buffer_overflow_heap(void)
{
  return;
}

// Function: call_buffer_overflow @ 0x100d3c
undefined8 call_buffer_overflow(void)
{
  return 0x1e;
}

// Function: param_integer_overflow @ 0x100d44
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = param_2 + param_1;
  if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
    return -1;
  }
  iVar2 = -2;
  if (iVar1 < 1 || -1 < (int)(param_2 & param_1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// Function: call_integer_overflow @ 0x100d7c
undefined8 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x100d88
int param_undefined_behavior(int param_1)
{
  return param_1 << 1;
}

// Function: call_undefined_behavior @ 0x100d90
undefined8 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x100d98
undefined8 param_implementation_defined(void)
{
  return 0x30;
}

// Function: call_implementation_defined @ 0x100da0
undefined8 call_implementation_defined(void)
{
  return 0x30;
}

// Function: test_obf_opt_edge @ 0x100da8
int test_obf_opt_edge(void)
{
  int iVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  puts(&DAT_00101121);
  printf(&DAT_00100f50,10);
  iVar1 = 6;
  iVar5 = 5;
  do {
    iVar3 = iVar1;
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = iVar5 / iVar3;
    }
    iVar1 = iVar5 - iVar1 * iVar3;
    iVar5 = iVar3;
  } while (iVar1 != 0);
  uVar4 = 0x14;
  if (iVar3 != 1) {
    uVar4 = 0x23;
  }
  printf(&DAT_00100f6c,(ulong)uVar4);
  iVar1 = printf(&DAT_00100f88,0xe1);
  uVar2 = param_string_encryption(iVar1);
  printf(&DAT_00100fa5,uVar2 & 0xffffffff);
  printf(&DAT_00100fc1,0x7a314);
  iVar1 = printf(&DAT_00100feb,0x13ba);
  uVar2 = call_vectorized_loop(iVar1);
  printf(&DAT_00101010,uVar2 & 0xffffffff);
  iVar1 = printf(&DAT_00101036,0x14);
  uVar2 = call_division_by_zero(iVar1);
  iVar1 = printf(&DAT_00101056,uVar2 & 0xffffffff);
  uVar2 = call_null_pointer_deref(iVar1);
  printf(&DAT_00101072,uVar2 & 0xffffffff);
  printf(&DAT_0010108f,0x1e);
  printf(&DAT_001010ac,2000000000);
  printf(&DAT_001010dd,10);
  iVar1 = printf(&DAT_001010fa,0x30);
  return iVar1;
}

// Function: main @ 0x100ee0
undefined8 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _fini @ 0x100ef8
void _fini(void)
{
  return;
}

