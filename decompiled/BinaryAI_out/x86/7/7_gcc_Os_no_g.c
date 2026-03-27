// Decompiled by BinaryAI
// SHA256: 51438d6a16ff60151759a5e5f282cd7d787a08630620c71205cc0be23441d78d

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

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x3c))();
  return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x1c))();
  return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x24))();
  return;
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x28))();
  return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x2c))();
  return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x30))();
  return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x34))();
  return;
}

// Function: main @ 0x111b0
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: _start @ 0x111d0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011100(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111fc
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11200
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11210
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11250
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x112a0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2d73) == '\0') {
    if (*(int *)(unaff_EDI + 0x2d43) != 0) {
      FUN_000110f0(*(undefined4 *)(unaff_EDI + 0x2d57));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2d77);
    while (uVar1 < ((unaff_EDI + 0x2c2b) - (unaff_EDI + 0x2c27) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2d77) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2c27 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2d77);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2d73) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11339
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1133d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: div_zero_handler @ 0x11341
undefined4 div_zero_handler(void)
{
  div_zero_caught = 1;
  FUN_000111a0();
  segv_caught = 1;
  FUN_000111a0(segv_buffer);
  return 1;
}

// Function: segv_handler @ 0x1136f
undefined4 segv_handler(void)
{
  segv_caught = 1;
  FUN_000111a0(segv_buffer);
  return 1;
}

// Function: param_fake_branch @ 0x1139d
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x113a9
undefined4 call_fake_branch(void)
{
  return 10;
}

// Function: param_opaque_predicate @ 0x113b3
int param_opaque_predicate(int param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  iVar1 = param_1 + 1;
  iVar2 = param_1;
  iVar4 = iVar1;
  while (iVar4 != 0) {
    iVar3 = iVar2 % iVar4;
    iVar2 = iVar4;
    iVar4 = iVar3;
  }
  if ((iVar2 != 1) ||
     (iVar2 = param_1 * 2 + 10, param_1 * 2 + 1 + param_1 * param_1 != iVar1 * iVar1)) {
    iVar2 = param_1 * 3 + 0x14;
  }
  return iVar2;
}

// Function: call_opaque_predicate @ 0x113fd
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x11413
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11434
undefined4 call_instruction_substitution(void)
{
  return 0xe1;
}

// Function: decrypt_string @ 0x1143e
byte * decrypt_string(undefined4 param_1,byte *param_2,int param_3,byte param_4)
{
  byte *pbVar1;
  FUN_00011180(param_2,param_1,param_3);
  param_2[param_3 + -1] = 0;
  for (pbVar1 = param_2; *pbVar1 != 0; pbVar1 = pbVar1 + 1) {
    *pbVar1 = *pbVar1 ^ param_4;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x11491
int param_string_encryption(void)
{
  int iVar1;
  int in_GS_OFFSET;
  char local_30 [32];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  decrypt_string(&encrypted_0,local_30,0x20,0x5a);
  iVar1 = FUN_00011170(local_30);
  iVar1 = iVar1 + local_30[0];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: param_tail_call_optimized @ 0x114f6
int param_tail_call_optimized(int param_1,int param_2)
{
  for (; 0 < param_1; param_1 = param_1 + -1) {
    param_2 = param_2 + param_1;
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x1150e
undefined4 call_tail_call_optimized(void)
{
  return 0x7a314;
}

// Function: param_non_tail_call @ 0x11518
int param_non_tail_call(int param_1)
{
  int iVar1;
  iVar1 = 0;
  for (; 0 < param_1; param_1 = param_1 + -1) {
    iVar1 = iVar1 + param_1;
  }
  return iVar1;
}

// Function: call_non_tail_call @ 0x11531
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x11547
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
  int iVar1;
  int iVar2;
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    *(int *)(param_3 + iVar1 * 4) = *(int *)(param_2 + iVar1 * 4) + *(int *)(param_1 + iVar1 * 4);
  }
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_4; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_3 + iVar1 * 4);
  }
  return iVar2;
}

// Function: call_vectorized_loop @ 0x11584
void call_vectorized_loop(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  undefined4 local_70 [8];
  undefined4 local_50 [8];
  undefined4 local_30 [8];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puVar2 = &DAT_00012020;
  puVar3 = local_70;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_00012040;
  puVar3 = local_50;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_30;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_vectorized_loop(local_70,local_50,local_30,8);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_link_time_optimization @ 0x115fd
int param_link_time_optimization(int param_1)
{
  return (param_1 + 5) * 2;
}

// Function: call_link_time_optimization @ 0x1160e
undefined4 call_link_time_optimization(void)
{
  return 0x14;
}

// Function: param_division_by_zero @ 0x11618
undefined4 param_division_by_zero(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  FUN_00011130(8,div_zero_handler);
  iVar1 = FUN_00011110(jmp_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = (undefined4)(10 / (longlong)param_1);
  }
  return uVar2;
}

// Function: call_division_by_zero @ 0x11668
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  FUN_00011130(8,0);
  return iVar1 + iVar2;
}

// Function: param_null_pointer_deref @ 0x116ad
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  FUN_00011130(0xb,segv_handler);
  iVar1 = FUN_00011110(segv_buffer);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  return uVar2;
}

// Function: call_null_pointer_deref @ 0x116f9
int call_null_pointer_deref(void)
{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  undefined4 local_24;
  int local_20;
  undefined4 uStack_14;
  uStack_14 = 0x11708;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  local_24 = 0x2a;
  iVar1 = param_null_pointer_deref(&local_24);
  iVar2 = param_null_pointer_deref(0);
  FUN_00011130(0xb,0);
  iVar1 = iVar1 + iVar2;
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11763
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x1176f
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = FUN_00011150(0x10);
  uVar2 = 0xfffffffe;
  if (iVar1 != 0) {
    FUN_00011120(iVar1);
    uVar2 = param_1;
  }
  return uVar2;
}

// Function: call_buffer_overflow @ 0x117ae
int call_buffer_overflow(void)
{
  int iVar1;
  iVar1 = param_buffer_overflow_heap(0x14);
  return iVar1 + 10;
}

// Function: param_integer_overflow @ 0x117c4
int param_integer_overflow(uint param_1,uint param_2)
{
  int iVar1;
  iVar1 = param_1 + param_2;
  if (((int)param_1 < 1) || ((int)param_2 < 1)) {
    if (((int)(param_1 & param_2) < 0) && (0 < iVar1)) {
      iVar1 = -2;
    }
  }
  else if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_integer_overflow @ 0x117f8
undefined4 call_integer_overflow(void)
{
  return 2000000000;
}

// Function: param_undefined_behavior @ 0x11802
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11810
undefined4 call_undefined_behavior(void)
{
  return 10;
}

// Function: param_implementation_defined @ 0x1181a
undefined4 param_implementation_defined(void)
{
  return 0x2b;
}

// Function: call_implementation_defined @ 0x11824
undefined4 call_implementation_defined(void)
{
  return 0x2b;
}

// Function: test_obf_opt_edge @ 0x1182e
void test_obf_opt_edge(void)
{
  undefined4 uVar1;
  FUN_00011160(&DAT_00012060);
  FUN_00011190(1,&DAT_0001208d,10);
  uVar1 = call_opaque_predicate();
  FUN_00011190(1,&DAT_000120a9,uVar1);
  FUN_00011190(1,&DAT_000120c5,0xe1);
  uVar1 = param_string_encryption();
  FUN_00011190(1,&DAT_000120e2,uVar1);
  uVar1 = call_tail_call_optimized();
  FUN_00011190(1,&DAT_000120fe,uVar1);
  uVar1 = call_non_tail_call();
  FUN_00011190(1,&DAT_00012128,uVar1);
  uVar1 = call_vectorized_loop();
  FUN_00011190(1,&DAT_0001214d,uVar1);
  FUN_00011190(1,&DAT_00012173,0x14);
  uVar1 = call_division_by_zero();
  FUN_00011190(1,&DAT_00012193,uVar1);
  uVar1 = call_null_pointer_deref();
  FUN_00011190(1,&DAT_000121af,uVar1);
  uVar1 = call_buffer_overflow();
  FUN_00011190(1,&DAT_000121cc,uVar1);
  FUN_00011190(1,&DAT_000121e9,2000000000);
  FUN_00011190(1,&DAT_0001221a,10);
  FUN_00011190(1,&DAT_00012237,0x2b);
  return;
}

// Function: __stack_chk_fail_local @ 0x11990
void __stack_chk_fail_local(void)
{
  FUN_00011140();
  return;
}

// Function: __do_global_ctors_aux @ 0x119b0
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x119fc
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

