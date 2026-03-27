// Decompiled by BinaryAI
// SHA256: 6e4227d925b17667c1a23cc1432419333481cb3d73df01c19f4f5cc2490d413b

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::printf @ 0x11050
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::longjmp @ 0x11060
void longjmp(__jmp_buf_tag *__env,int __val)
{
  longjmp(__env,__val);
}

// Function: <EXTERNAL>::_setjmp @ 0x11070
int _setjmp(__jmp_buf_tag *__env)
{
  int iVar1;
  iVar1 = _setjmp(__env);
  return iVar1;
}

// Function: <EXTERNAL>::signal @ 0x11080
__sighandler_t signal(int __sig,__sighandler_t __handler)
{
  __sighandler_t p_Var1;
  p_Var1 = signal(__sig,__handler);
  return p_Var1;
}

// Function: <EXTERNAL>::puts @ 0x11090
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x110a0
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x110b0
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x10))();
  return;
}

// Function: _start @ 0x110d0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x110fc
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11100
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11110
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11150
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x111a0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2e8f) == '\0') {
    if (*(int *)(unaff_EDI + 0x2e43) != 0) {
      FUN_000110c0(*(undefined4 *)(unaff_EDI + 0x2e83));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2e93);
    while (uVar1 < ((unaff_EDI + 0x2d6b) - (unaff_EDI + 0x2d67) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2e93) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2d67 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2e93);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2e8f) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11239
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1123d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_fake_branch @ 0x11250
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x11260
undefined4 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x11270
int param_opaque_predicate(uint param_1)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uVar5 = param_1 + 1;
  uVar3 = uVar5;
  uVar2 = param_1;
  while (uVar1 = uVar3, uVar1 != 0) {
    uVar3 = (int)uVar2 % (int)uVar1;
    uVar2 = uVar1;
  }
  iVar4 = param_1 * 3 + 0x14;
  if ((uVar2 ^ 1 | uVar5 * uVar5 ^ (param_1 * 2 | 1) + param_1 * param_1) == 0) {
    iVar4 = param_1 * 2 + 10;
  }
  return iVar4;
}

// Function: call_opaque_predicate @ 0x112d0
undefined4 call_opaque_predicate(void)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  iVar1 = 5;
  iVar4 = 6;
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

// Function: param_instruction_substitution @ 0x11300
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 & 0xf) + (param_1 >> 1);
}

// Function: call_instruction_substitution @ 0x11320
undefined4 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x11330
byte * decrypt_string(char *param_1,byte *param_2,size_t param_3,byte param_4)
{
  byte bVar1;
  byte *pbVar2;
  strncpy((char *)param_2,param_1,param_3);
  param_2[param_3 - 1] = 0;
  bVar1 = *param_2;
  pbVar2 = param_2;
  while (bVar1 != 0) {
    *pbVar2 = bVar1 ^ param_4;
    bVar1 = pbVar2[1];
    pbVar2 = pbVar2 + 1;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x11390
int param_string_encryption(void)
{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  byte local_28 [31];
  undefined local_9;
  strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
  local_9 = 0;
  if (local_28[0] != 0) {
    pbVar3 = local_28;
    bVar1 = local_28[0];
    do {
      pbVar3 = pbVar3 + 1;
      pbVar3[-1] = bVar1 ^ 0x5a;
      bVar1 = *pbVar3;
    } while (bVar1 != 0);
  }
  sVar2 = strlen((char *)local_28);
  return sVar2 + (int)(char)local_28[0];
}

// Function: call_string_encryption @ 0x11400
int call_string_encryption(void)
{
  byte bVar1;
  size_t sVar2;
  byte *pbVar3;
  byte local_28 [31];
  undefined local_9;
  strncpy((char *)local_28,(char *)&param_string_encryption_encrypted,0x20);
  local_9 = 0;
  if (local_28[0] != 0) {
    pbVar3 = local_28;
    bVar1 = local_28[0];
    do {
      pbVar3 = pbVar3 + 1;
      pbVar3[-1] = bVar1 ^ 0x5a;
      bVar1 = *pbVar3;
    } while (bVar1 != 0);
  }
  sVar2 = strlen((char *)local_28);
  return sVar2 + (int)(char)local_28[0];
}

// Function: param_tail_call_optimized @ 0x11470
void param_tail_call_optimized(int param_1,int param_2)
{
  if (0 < param_1) {
    param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return;
}

// Function: call_tail_call_optimized @ 0x114b0
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
}

// Function: param_non_tail_call @ 0x114e0
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

// Function: call_non_tail_call @ 0x11510
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x11540
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  int iVar2;
  if (0 < param_4) {
    iVar2 = 0;
    do {
      *(int *)(param_3 + iVar2 * 4) = *(int *)(param_2 + iVar2 * 4) + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_4 != iVar2);
  }
  if (param_4 < 1) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (param_4 != iVar1);
  }
  return iVar2;
}

// Function: call_vectorized_loop @ 0x115a0
int call_vectorized_loop(void)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int local_24 [8];
  local_24[7] = 0;
  local_24[6] = 0;
  local_24[5] = 0;
  local_24[4] = 0;
  local_24[3] = 0;
  local_24[2] = 0;
  local_24[1] = 0;
  local_24[0] = 0;
  iVar1 = 0;
  piVar2 = &DAT_00012028;
  piVar4 = &DAT_00012008;
  do {
    local_24[iVar1] = *piVar2 + *piVar4;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar1 != 8);
  iVar3 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + local_24[iVar3];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 8);
  return iVar1;
}

// Function: param_link_time_optimization @ 0x11630
int param_link_time_optimization(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: call_link_time_optimization @ 0x11640
undefined4 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: div_zero_handler @ 0x11650
void div_zero_handler(void)
{
  div_zero_caught = 1;
  longjmp((__jmp_buf_tag *)jmp_buffer,1);
}

// Function: param_division_by_zero @ 0x11680
undefined4 param_division_by_zero(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  signal(8,div_zero_handler);
  iVar1 = _setjmp((__jmp_buf_tag *)jmp_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = (undefined4)(10 / (longlong)param_1);
  }
  return uVar2;
}

// Function: call_division_by_zero @ 0x116e0
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: segv_handler @ 0x11730
void segv_handler(void)
{
  segv_caught = 1;
  longjmp((__jmp_buf_tag *)segv_buffer,1);
}

// Function: param_null_pointer_deref @ 0x11760
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

// Function: call_null_pointer_deref @ 0x117b0
int call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  local_10 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_10);
  iVar2 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  return iVar2 + iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11810
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11820
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  return param_1;
}

// Function: call_buffer_overflow @ 0x11830
undefined4 call_buffer_overflow(void)
{
  return 0x1e;
}

// Function: param_integer_overflow @ 0x11840
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = param_2 + param_1;
  if (((0 < (int)param_1) && (0 < (int)param_2)) && (iVar1 < 0)) {
    return -1;
  }
  iVar2 = -2;
  if (iVar1 < 1) {
    iVar2 = iVar1;
  }
  if (-1 < (int)(param_2 & param_1)) {
    iVar2 = iVar1;
  }
  return iVar2;
}

// Function: call_integer_overflow @ 0x11870
undefined4 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x11880
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11890
undefined4 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x118a0
undefined4 param_implementation_defined(void)
{
  return 0x2b;
}

// Function: call_implementation_defined @ 0x118b0
undefined4 call_implementation_defined(void)
{
  return 0x2b;
}

// Function: test_obf_opt_edge @ 0x118c0
void test_obf_opt_edge(void)
{
  byte bVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  puts(&DAT_00012219);
  printf(&DAT_00012048,10);
  iVar3 = 5;
  iVar8 = 6;
  do {
    iVar7 = iVar8;
    iVar8 = iVar3 % iVar7;
    iVar3 = iVar7;
  } while (iVar8 != 0);
  uVar4 = 0x23;
  if (iVar7 == 1) {
    uVar4 = 0x14;
  }
  printf(&DAT_00012064,uVar4);
  printf(&DAT_00012080,0xe1);
  strncpy((char *)&local_30,(char *)&param_string_encryption_encrypted,0x20);
  local_14 = local_14 & 0xffffff;
  if ((byte)local_30 != 0) {
    pbVar5 = (byte *)((int)&local_30 + 1);
    bVar1 = (byte)local_30;
    do {
      pbVar5[-1] = bVar1 ^ 0x5a;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  sVar2 = strlen((char *)&local_30);
  printf(&DAT_0001209d,(int)(char)(byte)local_30 + sVar2);
  uVar4 = param_tail_call_optimized(1000,0);
  printf(&DAT_000120b9,uVar4);
  uVar4 = param_non_tail_call(100);
  printf(&DAT_000120e3,uVar4);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  iVar3 = 0;
  piVar6 = &DAT_00012028;
  piVar9 = &DAT_00012008;
  do {
    (&local_30)[iVar3] = *piVar6 + *piVar9;
    iVar3 = iVar3 + 1;
    piVar6 = piVar6 + 1;
    piVar9 = piVar9 + 1;
  } while (iVar3 != 8);
  iVar8 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + (&local_30)[iVar8];
    iVar8 = iVar8 + 1;
  } while (iVar8 != 8);
  printf(&DAT_00012108,iVar3);
  printf(&DAT_0001212e,0x14);
  iVar3 = param_division_by_zero(5);
  iVar8 = param_division_by_zero(0);
  signal(8,(__sighandler_t)0x0);
  printf(&DAT_0001214e,iVar8 + iVar3);
  local_30 = 0x2a;
  iVar3 = param_null_pointer_deref(&local_30);
  iVar8 = param_null_pointer_deref(0);
  signal(0xb,(__sighandler_t)0x0);
  printf(&DAT_0001216a,iVar8 + iVar3);
  printf(&DAT_00012187,0x1e);
  printf(&DAT_000121a4,2000000000);
  printf(&DAT_000121d5,10);
  printf(&DAT_000121f2,0x2b);
  return;
}

// Function: main @ 0x11ba0
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: __do_global_ctors_aux @ 0x11bc0
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11c0c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

