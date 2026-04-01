// Decompiled by BinaryAI
// SHA256: a69ceaec7906dc2c8b01df61a5e1e24fbad94c7807cd17d067001ab2364fdca0

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

// Function: _start @ 0x111b0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011100(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2d93) == '\0') {
    if (*(int *)(unaff_EDI + 0x2d63) != 0) {
      FUN_000110f0(*(undefined4 *)(unaff_EDI + 0x2d77));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2d97);
    while (uVar1 < ((unaff_EDI + 0x2c4b) - (unaff_EDI + 0x2c47) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2d97) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2c47 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2d97);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2d93) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_fake_branch @ 0x11321
undefined4 param_fake_branch(undefined4 param_1)
{
  return param_1;
}

// Function: call_fake_branch @ 0x11349
void call_fake_branch(void)
{
  param_fake_branch(10);
  return;
}

// Function: param_opaque_predicate @ 0x11366
int param_opaque_predicate(int param_1)
{
  int iVar1;
  int local_1c;
  int local_18;
  local_1c = param_1;
  local_18 = param_1 + 1;
  while (local_18 != 0) {
    iVar1 = local_1c % local_18;
    local_1c = local_18;
    local_18 = iVar1;
  }
  if ((param_1 * 2 + param_1 * param_1 + 1 == (param_1 + 1) * (param_1 + 1)) && (local_1c == 1)) {
    iVar1 = (param_1 + 5) * 2;
  }
  else {
    iVar1 = param_1 * 3 + 0x14;
  }
  return iVar1;
}

// Function: call_opaque_predicate @ 0x11411
void call_opaque_predicate(void)
{
  param_opaque_predicate(5);
  return;
}

// Function: param_instruction_substitution @ 0x1142e
int param_instruction_substitution(uint param_1)
{
  return param_1 * 0x15 + (param_1 >> 1) + (param_1 & 0xf);
}

// Function: call_instruction_substitution @ 0x11496
void call_instruction_substitution(void)
{
  param_instruction_substitution(10);
  return;
}

// Function: decrypt_string @ 0x114b3
byte * decrypt_string(undefined4 param_1,byte *param_2,int param_3,byte param_4)
{
  byte *local_10;
  FUN_000111a0(param_2,param_1,param_3,0x114c3);
  param_2[param_3 + -1] = 0;
  for (local_10 = param_2; *local_10 != 0; local_10 = local_10 + 1) {
    *local_10 = *local_10 ^ param_4;
  }
  return param_2;
}

// Function: param_string_encryption @ 0x11520
int param_string_encryption(void)
{
  int iVar1;
  int in_GS_OFFSET;
  char local_30 [32];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  decrypt_string(&encrypted_0,local_30,0x20,0x5a);
  iVar1 = FUN_00011190(local_30);
  iVar1 = local_30[0] + iVar1;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: call_string_encryption @ 0x11588
void call_string_encryption(void)
{
  param_string_encryption();
  return;
}

// Function: param_tail_call_optimized @ 0x115a3
int param_tail_call_optimized(int param_1,int param_2)
{
  if (0 < param_1) {
    param_2 = param_tail_call_optimized(param_1 + -1,param_2 + param_1);
  }
  return param_2;
}

// Function: call_tail_call_optimized @ 0x115df
void call_tail_call_optimized(void)
{
  param_tail_call_optimized(1000,0);
  return;
}

// Function: param_non_tail_call @ 0x11607
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

// Function: call_non_tail_call @ 0x11641
void call_non_tail_call(void)
{
  param_non_tail_call(100);
  return;
}

// Function: param_vectorized_loop @ 0x11664
int param_vectorized_loop(int param_1,int param_2,int param_3,int param_4)
{
  int local_14;
  int local_10;
  int local_c;
  for (local_14 = 0; local_14 < param_4; local_14 = local_14 + 1) {
    *(int *)(param_3 + local_14 * 4) =
         *(int *)(param_2 + local_14 * 4) + *(int *)(param_1 + local_14 * 4);
  }
  local_10 = 0;
  for (local_c = 0; local_c < param_4; local_c = local_c + 1) {
    local_10 = local_10 + *(int *)(param_3 + local_c * 4);
  }
  return local_10;
}

// Function: call_vectorized_loop @ 0x116fb
void call_vectorized_loop(void)
{
  uint uVar1;
  int in_GS_OFFSET;
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
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30 [8];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_70 = 1;
  local_6c = 2;
  local_68 = 3;
  local_64 = 4;
  local_60 = 5;
  local_5c = 6;
  local_58 = 7;
  local_54 = 8;
  local_50 = 8;
  local_4c = 7;
  local_48 = 6;
  local_44 = 5;
  local_40 = 4;
  local_3c = 3;
  local_38 = 2;
  local_34 = 1;
  uVar1 = 0;
  do {
    *(undefined4 *)((int)local_30 + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  param_vectorized_loop(&local_70,&local_50,local_30,8);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: lto_target_func @ 0x117d2
int lto_target_func(int param_1)
{
  return (param_1 + 5) * 2;
}

// Function: param_link_time_optimization @ 0x117e9
void param_link_time_optimization(undefined4 param_1)
{
  lto_target_func(param_1);
  return;
}

// Function: call_link_time_optimization @ 0x11807
void call_link_time_optimization(void)
{
  param_link_time_optimization(5);
  return;
}

// Function: div_zero_handler @ 0x11824
undefined4 div_zero_handler(void)
{
  int iVar1;
  undefined4 uVar2;
  div_zero_caught = 1;
  FUN_00011120(jmp_buffer);
  FUN_00011150(8,div_zero_handler);
  iVar1 = FUN_00011130(jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = 10;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_division_by_zero @ 0x11856
undefined4 param_division_by_zero(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  FUN_00011150(8,div_zero_handler);
  iVar1 = FUN_00011130(jmp_buffer);
  if (iVar1 == 0) {
    uVar2 = (undefined4)(10 / (longlong)param_1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_division_by_zero @ 0x118b5
int call_division_by_zero(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_division_by_zero(5);
  iVar2 = param_division_by_zero(0);
  FUN_00011150(8,0);
  return iVar2 + iVar1;
}

// Function: segv_handler @ 0x11907
undefined4 segv_handler(void)
{
  int iVar1;
  undefined4 uVar2;
  segv_caught = 1;
  FUN_00011120(segv_buffer);
  FUN_00011150(0xb,segv_handler);
  iVar1 = FUN_00011130(segv_buffer);
  uVar2 = uRam00000001;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: param_null_pointer_deref @ 0x11939
undefined4 param_null_pointer_deref(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  FUN_00011150(0xb,segv_handler);
  iVar1 = FUN_00011130(segv_buffer);
  if (iVar1 == 0) {
    uVar2 = *param_1;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

// Function: call_null_pointer_deref @ 0x11994
int call_null_pointer_deref(void)
{
  int iVar1;
  int in_GS_OFFSET;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_1c = 0x2a;
  local_18 = param_null_pointer_deref(&local_1c);
  local_14 = param_null_pointer_deref(0);
  FUN_00011150(0xb,0);
  iVar1 = local_14 + local_18;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: param_buffer_overflow_stack @ 0x11a0b
undefined4 param_buffer_overflow_stack(undefined4 param_1)
{
  int in_GS_OFFSET;
  int local_20;
  undefined local_18 [8];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_20 = 0; local_20 < 0x11; local_20 = local_20 + 1) {
    local_18[local_20] = 0x41;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    param_1 = __stack_chk_fail_local();
  }
  return param_1;
}

// Function: param_buffer_overflow_heap @ 0x11a75
undefined4 param_buffer_overflow_heap(undefined4 param_1)
{
  int iVar1;
  int local_14;
  iVar1 = FUN_00011170(0x10);
  if (iVar1 == 0) {
    param_1 = 0xfffffffe;
  }
  else {
    for (local_14 = 0; local_14 < 0x21; local_14 = local_14 + 1) {
      *(undefined *)(iVar1 + local_14) = 0x42;
    }
    FUN_00011140(iVar1);
  }
  return param_1;
}

// Function: call_buffer_overflow @ 0x11adc
int call_buffer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_buffer_overflow_stack(10);
  iVar2 = param_buffer_overflow_heap(0x14);
  return iVar2 + iVar1;
}

// Function: param_integer_overflow @ 0x11b1a
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

// Function: call_integer_overflow @ 0x11b87
int call_integer_overflow(void)
{
  int iVar1;
  int iVar2;
  iVar1 = param_integer_overflow(1000000000,1000000000);
  iVar2 = param_integer_overflow(0xffffffff,1);
  return iVar2 + iVar1;
}

// Function: param_undefined_behavior @ 0x11bc9
int param_undefined_behavior(int param_1)
{
  return param_1 * 2;
}

// Function: call_undefined_behavior @ 0x11beb
undefined4 call_undefined_behavior(void)
{
  undefined4 uVar1;
  uVar1 = param_undefined_behavior(5);
  return uVar1;
}

// Function: param_implementation_defined @ 0x11c11
undefined4 param_implementation_defined(void)
{
  return 0x2b;
}

// Function: call_implementation_defined @ 0x11c9d
void call_implementation_defined(void)
{
  param_implementation_defined();
  return;
}

// Function: test_obf_opt_edge @ 0x11cb5
void test_obf_opt_edge(void)
{
  undefined4 uVar1;
  FUN_00011180(&DAT_00012010);
  uVar1 = call_fake_branch();
  FUN_00011110(&DAT_0001203d,uVar1);
  uVar1 = call_opaque_predicate();
  FUN_00011110(&DAT_00012059,uVar1);
  uVar1 = call_instruction_substitution();
  FUN_00011110(&DAT_00012075,uVar1);
  uVar1 = call_string_encryption();
  FUN_00011110(&DAT_00012092,uVar1);
  uVar1 = call_tail_call_optimized();
  FUN_00011110(&DAT_000120b0,uVar1);
  uVar1 = call_non_tail_call();
  FUN_00011110(&DAT_000120dc,uVar1);
  uVar1 = call_vectorized_loop();
  FUN_00011110(&DAT_00012104,uVar1);
  uVar1 = call_link_time_optimization();
  FUN_00011110(&DAT_0001212c,uVar1);
  uVar1 = call_division_by_zero();
  FUN_00011110(&DAT_0001214c,uVar1);
  uVar1 = call_null_pointer_deref();
  FUN_00011110(&DAT_00012168,uVar1);
  uVar1 = call_buffer_overflow();
  FUN_00011110(&DAT_00012185,uVar1);
  uVar1 = call_integer_overflow();
  FUN_00011110(&DAT_000121a4,uVar1);
  uVar1 = call_undefined_behavior();
  FUN_00011110(&DAT_000121d5,uVar1);
  uVar1 = call_implementation_defined();
  FUN_00011110(&DAT_000121f4,uVar1);
  return;
}

// Function: main @ 0x11e33
undefined4 main(void)
{
  test_obf_opt_edge();
  return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x11e53
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x11e60
void __stack_chk_fail_local(void)
{
  FUN_00011160();
  return;
}

// Function: __do_global_ctors_aux @ 0x11e80
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11ecc
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

