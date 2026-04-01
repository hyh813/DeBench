// Decompiled by BinaryAI
// SHA256: 8a4a9cb4dafe39442c5254e738ee1f73a63307bcf2e1b9b624adb9e2932376d4

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

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x2c))();
  return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_000110d0 @ 0x110d0
void FUN_000110d0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_000110e0 @ 0x110e0
void FUN_000110e0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_000110f0 @ 0x110f0
void FUN_000110f0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: FUN_00011100 @ 0x11100
void FUN_00011100(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x1c))();
  return;
}

// Function: FUN_00011110 @ 0x11110
void FUN_00011110(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: FUN_00011120 @ 0x11120
void FUN_00011120(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x24))();
  return;
}

// Function: main @ 0x11130
undefined4 main(void)
{
  test_preprocessing_features();
  test_asm_features();
  return 0;
}

// Function: _start @ 0x11150
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_000110c0(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1117c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11180
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11190
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x111d0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11220
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2ddf) == '\0') {
    if (*(int *)(unaff_EDI + 0x2dc3) != 0) {
      FUN_000110b0(*(undefined4 *)(unaff_EDI + 0x2dd7));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2de3);
    while (uVar1 < ((unaff_EDI + 0x2cbb) - (unaff_EDI + 0x2cb7) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2de3) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2cb7 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2de3);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2ddf) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x112b9
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x112bd
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: param_macro_constants @ 0x112c1
undefined4 param_macro_constants(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0x200;
  if (0x400 < param_1) {
    uVar1 = 0x40;
  }
  return uVar1;
}

// Function: call_macro_constants @ 0x112de
undefined4 call_macro_constants(void)
{
  return 0x40;
}

// Function: param_macro_functions @ 0x112e8
int param_macro_functions(int param_1,int param_2)
{
  int iVar1;
  iVar1 = param_1 * param_1;
  if (param_1 < param_2) {
    param_1 = param_2;
  }
  return iVar1 + param_1;
}

// Function: call_macro_functions @ 0x11303
undefined4 call_macro_functions(void)
{
  return 0x1e;
}

// Function: param_conditional_compile @ 0x1130d
int param_conditional_compile(int param_1)
{
  return param_1 * 3 + 2;
}

// Function: call_conditional_compile @ 0x1131d
undefined4 call_conditional_compile(void)
{
  return 0x20;
}

// Function: param_multi_branch_compile @ 0x11327
int param_multi_branch_compile(int param_1)
{
  return param_1 * 5 + 0xdef0;
}

// Function: call_multi_branch_compile @ 0x11339
undefined4 call_multi_branch_compile(void)
{
  return 0xdf22;
}

// Function: param_macro_recursion @ 0x11343
int param_macro_recursion(int param_1)
{
  return param_1 + 0x10;
}

// Function: call_macro_recursion @ 0x11352
undefined4 call_macro_recursion(void)
{
  return 0x74;
}

// Function: param_stringize @ 0x1135c
undefined4 param_stringize(void)
{
  return 0x13;
}

// Function: call_stringize @ 0x11366
undefined4 call_stringize(void)
{
  return 0x13;
}

// Function: my_func @ 0x11370
int my_func(int param_1)
{
  return param_1 * 10;
}

// Function: param_token_paste @ 0x1137d
int param_token_paste(int param_1)
{
  return param_1 * 0xb + 5;
}

// Function: call_token_paste @ 0x1138d
undefined4 call_token_paste(void)
{
  return 0x3c;
}

// Function: param_variadic_macro @ 0x11397
int param_variadic_macro(int param_1,undefined4 param_2,undefined4 param_3)
{
  FUN_00011110(1,"LOG: Values: %d, %d, %d\n",param_1,param_2,param_3);
  return param_1 + 0x32;
}

// Function: call_variadic_macro @ 0x113d0
void call_variadic_macro(void)
{
  param_variadic_macro(10,0x14,0x1e);
  return;
}

// Function: param_macro_override @ 0x113e7
int param_macro_override(int param_1)
{
  return param_1 * 3 + 1;
}

// Function: call_macro_override @ 0x113fa
undefined4 call_macro_override(void)
{
  return 0x10;
}

// Function: param_include_guard @ 0x11404
undefined4 param_include_guard(void)
{
  return 500;
}

// Function: call_include_guard @ 0x1140e
undefined4 call_include_guard(void)
{
  return 500;
}

// Function: param_builtin_macros @ 0x11418
int param_builtin_macros(int param_1)
{
  FUN_00011110(1,"file=%s, func=%s, line=%d, date=%s, time=%s\n","src/5-23.c","param_builtin_macros"
               ,0x117,"Jan 15 2026","03:00:00");
  return param_1 + 0x11a;
}

// Function: call_builtin_macros @ 0x1146a
void call_builtin_macros(void)
{
  param_builtin_macros(100);
  return;
}

// Function: test_preprocessing_features @ 0x1147d
void test_preprocessing_features(void)
{
  undefined4 uVar1;
  FUN_00011110(1,&DAT_0001206e);
  FUN_00011110(1,&DAT_00012096,0x40);
  FUN_00011110(1,&DAT_000120b1,0x1e);
  FUN_00011110(1,&DAT_000120cc,0x20);
  FUN_00011110(1,&DAT_000120e7,0xdf22);
  FUN_00011110(1,&DAT_00012106,0x74);
  FUN_00011110(1,&DAT_00012122,0x13);
  FUN_00011110(1,&DAT_0001214c,0x3c);
  uVar1 = call_variadic_macro();
  FUN_00011110(1,&DAT_00012167,uVar1);
  FUN_00011110(1,&DAT_00012182,0x10);
  FUN_00011110(1,&DAT_0001219d,500);
  uVar1 = call_builtin_macros();
  FUN_00011110(1,&DAT_000121b9,uVar1);
  return;
}

// Function: param_asm_basic @ 0x11588
int param_asm_basic(int param_1)
{
  return param_1 + 10;
}

// Function: call_asm_basic @ 0x1159d
void call_asm_basic(void)
{
  param_asm_basic(5);
  return;
}

// Function: param_asm_clobber @ 0x115b0
int param_asm_clobber(int param_1,int param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
  }
  return iVar1;
}

// Function: call_asm_clobber @ 0x115d3
void call_asm_clobber(void)
{
  int in_GS_OFFSET;
  undefined local_24 [20];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  param_asm_clobber(local_24,5);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: param_asm_multi_insn @ 0x11606
void param_asm_multi_insn(undefined *param_1,undefined *param_2,int param_3)
{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

// Function: call_asm_multi_insn @ 0x11629
undefined4 call_asm_multi_insn(void)
{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int in_GS_OFFSET;
  char local_3a [10];
  undefined4 local_30;
  char local_2c;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_30 = 0;
  pcVar3 = "Hello ASM";
  pcVar4 = local_3a;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pcVar4 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
  }
  puVar5 = (undefined4 *)&local_2c;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  param_asm_multi_insn(&local_30,local_3a,9);
  uVar1 = 0xffffffff;
  if (((char)local_30 == 'H') && (local_2c == 'o')) {
    uVar1 = 0x2a;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: param_asm_simd @ 0x116ad
undefined4 param_asm_simd(int *param_1,int *param_2,undefined (*param_3) [16])
{
  undefined auVar1 [16];
  auVar1._4_4_ = param_1[1] + param_2[1];
  auVar1._0_4_ = *param_1 + *param_2;
  auVar1._8_4_ = param_1[2] + param_2[2];
  auVar1._12_4_ = param_1[3] + param_2[3];
  *param_3 = auVar1;
  return 0;
}

// Function: param_simd_intrinsics @ 0x116ce
undefined4 param_simd_intrinsics(int *param_1,int *param_2,undefined (*param_3) [16])
{
  undefined auVar1 [16];
  auVar1._4_4_ = param_2[1] + param_1[1];
  auVar1._0_4_ = *param_2 + *param_1;
  auVar1._8_4_ = param_2[2] + param_1[2];
  auVar1._12_4_ = param_2[3] + param_1[3];
  *param_3 = auVar1;
  return 0;
}

// Function: call_asm_simd @ 0x116ec
int call_asm_simd(void)
{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  undefined4 local_40 [4];
  undefined4 local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puVar2 = &DAT_000122c0;
  puVar3 = local_40;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &DAT_000122d0;
  puVar3 = local_30;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_asm_simd(local_40,local_30,&local_20);
  local_14 = local_1c + local_20 + local_18 + local_14;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_14 = __stack_chk_fail_local();
  }
  return local_14;
}

// Function: param_asm_atomic @ 0x11763
int param_asm_atomic(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return param_2 + iVar1;
}

// Function: param_atomic_c11 @ 0x1177a
int param_atomic_c11(int *param_1,int param_2)
{
  int iVar1;
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return iVar1 + param_2;
}

// Function: call_asm_atomic @ 0x11791
undefined4 call_asm_atomic(void)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  LOCK();
  UNLOCK();
  uVar1 = 0x1e;
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: param_dynamic_code @ 0x117d3
int param_dynamic_code(int param_1)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uVar1 = FUN_000110f0(0x1e);
  iVar3 = -1;
  iVar2 = FUN_00011100(0,uVar1,7,0x22,0xffffffff,0);
  if (iVar2 != -1) {
    iVar3 = param_1 + 5;
    FUN_00011120(iVar2,uVar1,param_1,param_1);
  }
  return iVar3;
}

// Function: param_memory_protection @ 0x1182d
undefined4 param_memory_protection(void)
{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 uVar4;
  uVar1 = FUN_000110f0(0x1e);
  puVar2 = (undefined4 *)FUN_00011100(0,uVar1,3,0x22,0xffffffff,0);
  uVar4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0xffffffff) {
    *puVar2 = 0x2a;
    iVar3 = FUN_000110d0(puVar2,uVar1,1,puVar2);
    if (iVar3 == 0) {
      uVar4 = *puVar2;
      iVar3 = FUN_000110d0(puVar2,uVar1,3,extraout_ECX);
      if (iVar3 == 0) {
        *puVar2 = 100;
        FUN_00011120(puVar2,uVar1,0,0);
      }
      else {
        FUN_00011120(puVar2,uVar1,uVar4,uVar4);
        uVar4 = 0xfffffffd;
      }
    }
    else {
      FUN_00011120(puVar2,uVar1,iVar3,iVar3);
      uVar4 = 0xfffffffe;
    }
  }
  return uVar4;
}

// Function: param_clobber_importance @ 0x118e5
int param_clobber_importance(int param_1,int param_2)
{
  return param_1 * 2 + param_2 * 2;
}

// Function: call_asm_privileged @ 0x11907
int call_asm_privileged(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = param_dynamic_code(10);
  iVar2 = param_memory_protection();
  iVar3 = param_clobber_importance(3,7);
  if (((iVar1 == 0xf) && (iVar2 == 0x2a)) && (iVar3 == 0x14)) {
    iVar1 = 0x4d;
  }
  return iVar1;
}

// Function: param_memory_clobber_demo @ 0x1194f
int param_memory_clobber_demo(void)
{
  return global_var + 0x32;
}

// Function: test_asm_features @ 0x11970
void test_asm_features(void)
{
  undefined4 uVar1;
  FUN_00011110(1,&DAT_000121ec);
  uVar1 = call_asm_basic();
  FUN_00011110(1,&DAT_00012217,uVar1);
  uVar1 = call_asm_clobber();
  FUN_00011110(1,&DAT_00012233,uVar1);
  uVar1 = call_asm_multi_insn();
  FUN_00011110(1,&DAT_0001224f,uVar1);
  uVar1 = call_asm_simd();
  FUN_00011110(1,&DAT_0001226b,uVar1);
  uVar1 = call_asm_atomic();
  FUN_00011110(1,&DAT_00012287,uVar1);
  uVar1 = call_asm_privileged();
  FUN_00011110(1,&DAT_000122a3,uVar1);
  return;
}

// Function: __x86.get_pc_thunk.ax @ 0x11a26
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x11a2a
void __x86_get_pc_thunk_cx(void)
{
  return;
}

// Function: __stack_chk_fail_local @ 0x11a30
void __stack_chk_fail_local(void)
{
  FUN_000110e0();
  return;
}

// Function: __do_global_ctors_aux @ 0x11a50
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11a9c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

