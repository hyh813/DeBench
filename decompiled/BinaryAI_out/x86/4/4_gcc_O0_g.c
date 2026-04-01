// Decompiled by BinaryAI
// SHA256: ed41ead92aed2a375823533513b31cb096366490abdc8d651162fcc8b702f719

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

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x24))();
  return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x1c))();
  return;
}

// Function: _start @ 0x110f0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_000110a0(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1111c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11120
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11130
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11170
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x111c0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x4e4b) == '\0') {
    if (*(int *)(unaff_EDI + 0x4e23) != 0) {
      FUN_00011090(*(undefined4 *)(unaff_EDI + 0x4e37));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x4e4f);
    while (uVar1 < ((unaff_EDI + 0x4d23) - (unaff_EDI + 0x4d1f) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x4e4f) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x4d1f + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x4e4f);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x4e4b) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11259
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1125d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: cdecl_func @ 0x11261
int cdecl_func(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_cdecl @ 0x1127c
void call_cdecl(void)
{
  cdecl_func(5,10);
  return;
}

// Function: stdcall_func @ 0x1129b
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x112b7
void call_stdcall(void)
{
  stdcall_func(5,10);
  return;
}

// Function: fastcall_func @ 0x112d3
int __regparm3 fastcall_func(undefined4 param_1_00,int param_2,int param_3,int param_1)
{
  return param_1 + param_3 + param_2;
}

// Function: call_fastcall @ 0x112fe
void call_fastcall(void)
{
  fastcall_func(3);
  return;
}

// Function: call_thiscall @ 0x11322
undefined4 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x1133a
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_5 + param_1 + param_2 + param_3 + param_4;
}

// Function: call_arm_aapcs @ 0x11364
void call_arm_aapcs(void)
{
  arm_aapcs_func(1,2,3,4,5);
  return;
}

// Function: mips_func @ 0x11389
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_4 + param_1 + param_2 + param_3;
}

// Function: call_mips @ 0x113ae
void call_mips(void)
{
  mips_func(10,0x14,0x1e,0x28);
  return;
}

// Function: amd64_sysv_func @ 0x113d1
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_6 + param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_amd64_sysv @ 0x11400
void call_amd64_sysv(void)
{
  amd64_sysv_func(1,2,3,4,5,6);
  return;
}

// Function: ms_x64_func @ 0x11427
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_5 + param_1 + param_2 + param_3 + param_4;
}

// Function: call_ms_x64 @ 0x11451
void call_ms_x64(void)
{
  ms_x64_func(1,2,3,4,5);
  return;
}

// Function: vectorcall_func @ 0x11476
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_4 + param_1 + param_2 + param_3;
}

// Function: call_vectorcall @ 0x1149b
void call_vectorcall(void)
{
  vectorcall_func(1,2,3,4);
  return;
}

// Function: mixed_conventions_test @ 0x114be
int mixed_conventions_test(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = cdecl_func(1,2);
  iVar2 = stdcall_func(3,4);
  iVar3 = fastcall_func(7);
  return iVar1 + iVar2 + iVar3;
}

// Function: varargs_func @ 0x1150d
int varargs_func(int param_1)
{
  int in_GS_OFFSET;
  int *local_1c;
  int local_18;
  int local_14;
  local_18 = 0;
  local_1c = (int *)&stack0x00000008;
  for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
    local_18 = local_18 + *local_1c;
    local_1c = local_1c + 1;
  }
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    local_18 = __stack_chk_fail_local();
  }
  return local_18;
}

// Function: func_no_args @ 0x11572
undefined4 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x1158a
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_8 + param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7;
}

// Function: func_mixed_args @ 0x115c3
int func_mixed_args(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                   ,undefined4 param_6)
{
  int iVar1;
  if (param_2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_000110e0(param_2);
  }
  return (int)ROUND((double)CONCAT44(param_6,param_5) +
                    (double)(iVar1 + param_1) + (double)CONCAT44(param_4,param_3));
}

// Function: func_struct_byval @ 0x11645
int func_struct_byval(void)
{
  int local_10;
  int local_c;
  local_c = 0;
  for (local_10 = 0; local_10 < 0x10; local_10 = local_10 + 1) {
    local_c = local_c + *(int *)(&stack0x00000004 + local_10 * 8);
  }
  return local_c;
}

// Function: func_struct_byptr @ 0x11690
int func_struct_byptr(int *param_1)
{
  int iVar1;
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1[1] * *param_1;
  }
  return iVar1;
}

// Function: test_calling_conventions @ 0x116be
void test_calling_conventions(void)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int in_GS_OFFSET;
  byte bVar4;
  int aiStack_14c [23];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *puStack_e8;
  undefined8 local_e4;
  char *pcStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0 [36];
  bVar4 = 0;
  uStack_d0 = 0x116d3;
  local_a0[32] = *(int *)(in_GS_OFFSET + 0x14);
  pcStack_dc = &DAT_00013008;
  local_e4 = CONCAT44(0x116f3,(undefined4)local_e4);
  FUN_000110d0();
  uStack_d0 = 0x116fb;
  uStack_d8 = call_cdecl();
  pcStack_dc = "CALL-L1-01: %d\n";
  local_e4 = CONCAT44(0x1170b,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x11713;
  uStack_d8 = call_stdcall();
  pcStack_dc = "CALL-L1-02: %d\n";
  local_e4 = CONCAT44(0x11723,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x1172b;
  uStack_d8 = call_fastcall();
  pcStack_dc = "CALL-L1-03: %d\n";
  local_e4 = CONCAT44(0x1173b,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x11743;
  uStack_d8 = call_thiscall();
  pcStack_dc = "CALL-L1-04: %d\n";
  local_e4 = CONCAT44(0x11753,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x1175b;
  uStack_d8 = call_arm_aapcs();
  pcStack_dc = "CALL-L1-05: %d\n";
  local_e4 = CONCAT44(0x1176b,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x11773;
  uStack_d8 = call_mips();
  pcStack_dc = "CALL-L1-06: %d\n";
  local_e4 = CONCAT44(0x11783,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x1178b;
  uStack_d8 = call_amd64_sysv();
  pcStack_dc = "CALL-L1-07: %d\n";
  local_e4 = CONCAT44(0x1179b,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x117a3;
  uStack_d8 = call_ms_x64();
  pcStack_dc = "CALL-L1-08: %d\n";
  local_e4 = CONCAT44(0x117b3,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x117bb;
  uStack_d8 = call_vectorcall();
  pcStack_dc = "CALL-L1-09: %d\n";
  local_e4 = CONCAT44(0x117cb,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d0 = 0x117d3;
  uStack_d8 = mixed_conventions_test();
  pcStack_dc = "CALL-L1-10: %d\n";
  local_e4 = CONCAT44(0x117e3,(undefined4)local_e4);
  FUN_000110b0();
  uStack_d8 = 5;
  pcStack_dc = (char *)0x4;
  local_e4 = 0x300000002;
  puStack_e8 = (undefined *)0x1;
  uStack_ec = 5;
  uStack_f0 = 0x117fa;
  uStack_d8 = varargs_func();
  pcStack_dc = &DAT_000130cc;
  local_e4 = CONCAT44(0x11818,(undefined4)local_e4);
  local_c4 = uStack_d8;
  FUN_000110b0();
  uStack_d0 = 0x11820;
  uStack_d8 = func_no_args();
  pcStack_dc = &DAT_000130f4;
  local_e4 = CONCAT44(0x1183b,(undefined4)local_e4);
  local_c0 = uStack_d8;
  FUN_000110b0();
  uStack_d0 = 8;
  uStack_d4 = 7;
  uStack_d8 = 6;
  pcStack_dc = (char *)0x5;
  local_e4 = 0x400000003;
  puStack_e8 = (undefined *)0x2;
  uStack_ec = 1;
  uStack_f0 = 0x11853;
  uStack_d8 = func_many_args();
  pcStack_dc = &DAT_00013118;
  local_e4 = CONCAT44(0x11871,(undefined4)local_e4);
  local_bc = uStack_d8;
  FUN_000110b0();
  puStack_e8 = &DAT_0001313f;
  uStack_d8 = 0;
  pcStack_dc = (char *)0x64;
  local_e4 = 0x40091eb851eb851f;
  uStack_ec = 10;
  uStack_f0 = 0x118a1;
  local_b8 = puStack_e8;
  uStack_d8 = func_mixed_args();
  pcStack_dc = &DAT_00013144;
  local_e4 = CONCAT44(0x118bf,(undefined4)local_e4);
  local_b4 = uStack_d8;
  FUN_000110b0();
  for (local_c8 = 0; local_c8 < 0x10; local_c8 = local_c8 + 1) {
    local_a0[local_c8 * 2] = local_c8 + 1;
    local_a0[local_c8 * 2 + 1] = local_c8 + 1 >> 0x1f;
  }
  piVar2 = local_a0;
  piVar3 = aiStack_14c;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  uStack_d8 = func_struct_byval();
  pcStack_dc = &DAT_0001316c;
  local_e4 = CONCAT44(0x11937,(undefined4)local_e4);
  local_b0 = uStack_d8;
  FUN_000110b0();
  local_a8 = 5;
  local_a4 = 10;
  pcStack_dc = (char *)&local_a8;
  local_e4 = CONCAT44(0x1195d,(undefined4)local_e4);
  uStack_d8 = func_struct_byptr();
  pcStack_dc = &DAT_00013198;
  local_e4 = CONCAT44(0x1197b,(undefined4)local_e4);
  local_ac = uStack_d8;
  FUN_000110b0();
  if (local_a0[32] != *(int *)(in_GS_OFFSET + 0x14)) {
    uStack_d0 = 0x11990;
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_by_value_int @ 0x11998
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x119b1
int call_by_value_int(void)
{
  int iVar1;
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x119e4
undefined param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 * 2;
  return 1;
}

// Function: call_by_value_ptr @ 0x11a15
int call_by_value_ptr(void)
{
  int iVar1;
  int in_GS_OFFSET;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = 5;
  local_18 = &local_1c;
  local_14 = param_by_value_ptr(local_18);
  iVar1 = local_14 + local_1c;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: param_array_decay @ 0x11a6a
undefined4 param_array_decay(void)
{
  return 4;
}

// Function: call_array_decay @ 0x11a82
void call_array_decay(void)
{
  int iVar1;
  undefined4 *puVar2;
  int in_GS_OFFSET;
  undefined4 local_38 [10];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puVar2 = local_38;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_array_decay(local_38,10);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_string @ 0x11ad7
int param_string(char *param_1)
{
  return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x11b01
void call_string_param(void)
{
  param_string("Hello");
  return;
}

// Function: param_ptr_array @ 0x11b23
int param_ptr_array(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    local_c = local_c + **(char **)(param_1 + local_8 * 4);
  }
  return local_c;
}

// Function: call_ptr_array @ 0x11b72
void call_ptr_array(void)
{
  int in_GS_OFFSET;
  undefined *local_1c;
  undefined *local_18;
  undefined *local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = &DAT_000131cb;
  local_18 = &DAT_000131cf;
  local_14 = &DAT_000131d3;
  param_ptr_array(&local_1c,3);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_varargs @ 0x11bce
int param_varargs(int param_1)
{
  int in_GS_OFFSET;
  int *local_1c;
  int local_18;
  int local_14;
  local_18 = 0;
  local_1c = (int *)&stack0x00000008;
  for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
    local_18 = local_18 + *local_1c;
    local_1c = local_1c + 1;
  }
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    local_18 = __stack_chk_fail_local();
  }
  return local_18;
}

// Function: call_varargs_param @ 0x11c33
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x11c5e
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: callback_func @ 0x11c85
int callback_func(int param_1)
{
  return param_1 * 2;
}

// Function: call_func_ptr_param @ 0x11c9d
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: param_double_ptr @ 0x11cc7
undefined4 param_double_ptr(int *param_1,undefined4 param_2)
{
  undefined4 uVar1;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// Function: call_double_ptr @ 0x11d08
int call_double_ptr(void)
{
  int iVar1;
  int in_GS_OFFSET;
  int local_1c;
  int *local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = 10;
  local_18 = &local_1c;
  local_14 = param_double_ptr(&local_18,0x14);
  iVar1 = local_1c + (uint)(local_18 == (int *)0x0);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: param_complex_cast @ 0x11d68
int param_complex_cast(int *param_1,int param_2)
{
  int iVar1;
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else if (param_2 == 1) {
    iVar1 = param_1[1] + *param_1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_complex_cast @ 0x11dbd
void call_complex_cast(void)
{
  int in_GS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = 0x12345678;
  local_18 = 100;
  local_14 = 200;
  param_complex_cast(&local_18,1);
  param_complex_cast(&local_1c,0);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_struct_byval @ 0x11e20
int param_struct_byval(int param_1)
{
  int param_11;
  return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11e3b
void call_struct_byval(void)
{
  int in_GS_OFFSET;
  int local_54;
  int local_50 [16];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
    local_50[local_54] = local_54;
  }
  param_struct_byval(local_50[0],local_50[1],local_50[2],local_50[3],local_50[4],local_50[5],
                     local_50[6],local_50[7],local_50[8],local_50[9],local_50[10],local_50[11],
                     local_50[12],local_50[13],local_50[14],local_50[15]);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_order_dep @ 0x11ec2
int param_order_dep(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_order_dep @ 0x11edd
void call_order_dep(void)
{
  param_order_dep(2,2);
  return;
}

// Function: test_parameter_passing @ 0x11f10
void test_parameter_passing(void)
{
  undefined4 uVar1;
  FUN_000110d0(&DAT_000131d8);
  uVar1 = call_by_value_int();
  FUN_000110b0("PARAM-L1-01: %d\n",uVar1);
  uVar1 = call_by_value_ptr();
  FUN_000110b0("PARAM-L1-02: %d\n",uVar1);
  uVar1 = call_array_decay();
  FUN_000110b0("PARAM-L2-01: %d\n",uVar1);
  uVar1 = call_string_param();
  FUN_000110b0("PARAM-L2-02: %d\n",uVar1);
  uVar1 = call_ptr_array();
  FUN_000110b0("PARAM-L2-03: %d\n",uVar1);
  uVar1 = call_varargs_param();
  FUN_000110b0("PARAM-L2-04: %d\n",uVar1);
  uVar1 = call_func_ptr_param();
  FUN_000110b0("PARAM-L3-01: %d\n",uVar1);
  uVar1 = call_double_ptr();
  FUN_000110b0("PARAM-L3-02: %d\n",uVar1);
  uVar1 = call_complex_cast();
  FUN_000110b0("PARAM-L3-03: %d\n",uVar1);
  uVar1 = call_struct_byval();
  FUN_000110b0("PARAM-L3-04: %d\n",uVar1);
  uVar1 = call_order_dep();
  FUN_000110b0("PARAM-L3-05: %d\n",uVar1);
  return;
}

// Function: ret_basic_type @ 0x12046
int ret_basic_type(int param_1)
{
  return param_1 * 2;
}

// Function: call_ret_basic @ 0x1205e
undefined4 call_ret_basic(void)
{
  undefined4 uVar1;
  uVar1 = ret_basic_type(0x15);
  return uVar1;
}

// Function: ret_pointer @ 0x1208c
int ret_pointer(int param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x120a5
undefined4 call_ret_pointer(void)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_GS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = 10;
  local_18 = 0x14;
  local_14 = 0x1e;
  puVar1 = (undefined4 *)ret_pointer(&local_1c);
  uVar2 = *puVar1;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}

// Function: ret_small_struct @ 0x12100
undefined4 * ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}

// Function: call_ret_small_struct @ 0x12135
int call_ret_small_struct(void)
{
  int in_GS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ret_small_struct(&local_18,3,4);
  local_14 = local_14 + local_18;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_14 = __stack_chk_fail_local();
  }
  return local_14;
}

// Function: ret_large_struct @ 0x1217f
int * ret_large_struct(int *param_1,int param_2)
{
  int in_GS_OFFSET;
  int local_54;
  int local_50 [16];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
    local_50[local_54] = param_2 + local_54;
  }
  *param_1 = local_50[0];
  param_1[1] = local_50[1];
  param_1[2] = local_50[2];
  param_1[3] = local_50[3];
  param_1[4] = local_50[4];
  param_1[5] = local_50[5];
  param_1[6] = local_50[6];
  param_1[7] = local_50[7];
  param_1[8] = local_50[8];
  param_1[9] = local_50[9];
  param_1[10] = local_50[10];
  param_1[0xb] = local_50[11];
  param_1[0xc] = local_50[12];
  param_1[0xd] = local_50[13];
  param_1[0xe] = local_50[14];
  param_1[0xf] = local_50[15];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return param_1;
}

// Function: call_ret_large_struct @ 0x12240
int call_ret_large_struct(void)
{
  int in_GS_OFFSET;
  undefined4 uVar1;
  int local_50 [15];
  int local_14;
  int local_10;
  uVar1 = 0x1224f;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ret_large_struct(local_50,100);
  local_14 = local_14 + local_50[0];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_14 = __stack_chk_fail_local(uVar1);
  }
  return local_14;
}

// Function: func_a @ 0x1228b
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x122a4
int func_b(int param_1)
{
  return param_1 * 2;
}

// Function: ret_func_ptr @ 0x122bc
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  else {
    pcVar1 = func_b;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x122e3
void call_ret_func_ptr(void)
{
  code *pcVar1;
  pcVar1 = (code *)ret_func_ptr(1);
  (*pcVar1)(5);
  return;
}

// Function: ret_opaque_handle @ 0x12313
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  if (param_1 == 0) {
    puVar1 = (undefined8 *)&handle1_1;
  }
  else {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x1233a
undefined4 call_ret_opaque(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)ret_opaque_handle(0);
  return *puVar1;
}

// Function: ret_complex_expr @ 0x12362
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  if (param_2 < param_1) {
    param_3 = param_3 * 2;
  }
  else {
    param_3 = param_3 + 10;
  }
  return param_3;
}

// Function: call_ret_complex_expr @ 0x1238a
int call_ret_complex_expr(void)
{
  int iVar1;
  int iVar2;
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar2 + iVar1;
}

// Function: ret_multi_branch @ 0x123ca
undefined4 ret_multi_branch(int param_1)
{
  if (param_1 == 2) {
    return 0x1e;
  }
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 10;
    }
    if (param_1 == 1) {
      return 0x14;
    }
  }
  return 0xffffffff;
}

// Function: call_ret_multi_branch @ 0x12411
int call_ret_multi_branch(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}

// Function: ret_void @ 0x12458
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x1247a
undefined4 call_ret_void(void)
{
  int in_GS_OFFSET;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ret_void(7,&local_14);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_14 = __stack_chk_fail_local();
  }
  return local_14;
}

// Function: test_return_values @ 0x124bd
void test_return_values(void)
{
  undefined4 uVar1;
  FUN_000110d0(&DAT_000132b4);
  uVar1 = call_ret_basic();
  FUN_000110b0(&DAT_000132d2,uVar1);
  uVar1 = call_ret_pointer();
  FUN_000110b0(&DAT_000132ee,uVar1);
  uVar1 = call_ret_small_struct();
  FUN_000110b0(&DAT_0001330a,uVar1);
  uVar1 = call_ret_large_struct();
  FUN_000110b0(&DAT_00013325,uVar1);
  uVar1 = call_ret_func_ptr();
  FUN_000110b0(&DAT_00013342,uVar1);
  uVar1 = call_ret_opaque();
  FUN_000110b0(&DAT_0001335e,uVar1);
  uVar1 = call_ret_complex_expr();
  FUN_000110b0(&DAT_0001337b,uVar1);
  uVar1 = call_ret_multi_branch();
  FUN_000110b0(&DAT_00013397,uVar1);
  uVar1 = call_ret_void();
  FUN_000110b0(&DAT_000133b3,uVar1);
  return;
}

// Function: main @ 0x125c3
undefined4 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x125ed
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x12600
void __stack_chk_fail_local(void)
{
  FUN_000110c0();
  return;
}

// Function: __do_global_ctors_aux @ 0x12620
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x1266c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

