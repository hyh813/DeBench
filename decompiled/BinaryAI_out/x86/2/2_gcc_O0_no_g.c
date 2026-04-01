// Decompiled by BinaryAI
// SHA256: e251042f7f8be8ea495ed060ef7e25aaf219d6690d0004277bff46308cd26fc2

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

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: _start @ 0x110d0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011090(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
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
  if (*(char *)(unaff_EDI + 0x4e5b) == '\0') {
    if (*(int *)(unaff_EDI + 0x4e43) != 0) {
      FUN_00011080(*(undefined4 *)(unaff_EDI + 0x4e57));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x4e5f);
    while (uVar1 < ((unaff_EDI + 0x4d47) - (unaff_EDI + 0x4d43) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x4e5f) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x4d43 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x4e5f);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x4e5b) = 1;
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

// Function: double_value @ 0x11241
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: process_char @ 0x11259
uint process_char(byte param_1)
{
  uint uVar1;
  if (((char)param_1 < 'A') || ('Z' < (char)param_1)) {
    uVar1 = (uint)param_1;
  }
  else {
    uVar1 = param_1 + 0x20;
  }
  return uVar1;
}

// Function: process_short @ 0x1128e
int process_short(ushort param_1,ushort param_2)
{
  return (uint)param_2 + (uint)param_1;
}

// Function: process_int @ 0x112bc
int process_int(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: process_long @ 0x112d7
int process_long(int param_1)
{
  return param_1 * 2;
}

// Function: process_ll @ 0x112ef
undefined8 process_ll(uint param_1,int param_2)
{
  return CONCAT44(param_2 * param_1 + param_2 * param_1 +
                  (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}

// Function: process_float @ 0x1132e
longdouble process_float(float param_1)
{
  return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}

// Function: process_double @ 0x11354
longdouble process_double(undefined4 param_1,undefined4 param_2)
{
  return (longdouble)0.1 + (longdouble)(double)CONCAT44(param_2,param_1) / (longdouble)2.0;
}

// Function: process_ld @ 0x11389
undefined ** process_ld(void)
{
  return &_GLOBAL_OFFSET_TABLE_;
}

// Function: process_bool @ 0x113a7
undefined4 process_bool(uint param_1)
{
  undefined4 uVar1;
  if (((int)param_1 < 1) || ((param_1 & 1) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// Function: const_param @ 0x113d9
int const_param(int *param_1)
{
  return *param_1 + 10;
}

// Function: volatile_access @ 0x113f4
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x11422
void test_data_types_l1(void)
{
  char cVar1;
  undefined uVar2;
  short sVar3;
  undefined4 uVar4;
  int in_GS_OFFSET;
  longdouble lVar5;
  unkbyte10 Var6;
  undefined6 uVar7;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_000110c0(&DAT_00013010);
  cVar1 = process_char(0x41);
  FUN_000110a0("DT-L1-01 (process_char): %c\n",(int)cVar1);
  cVar1 = process_char(0x62);
  FUN_000110a0("DT-L1-01 (process_char): %c\n",(int)cVar1);
  sVar3 = process_short(100,200);
  FUN_000110a0("DT-L1-02 (process_short): %d\n",(int)sVar3);
  uVar4 = process_int(5);
  FUN_000110a0("DT-L1-03 (process_int): %d\n",uVar4);
  uVar4 = process_long(100);
  FUN_000110a0("DT-L1-04 (process_long): %ld\n",uVar4);
  uVar7 = process_ll(100,0);
  FUN_000110a0("DT-L1-05 (process_ll): %lld\n",uVar7);
  lVar5 = (longdouble)process_float(0x40000000);
  FUN_000110a0("DT-L1-06 (process_float): %.2f\n",SUB84((double)lVar5,0),
               (short)((ulonglong)(double)lVar5 >> 0x20));
  lVar5 = (longdouble)process_double(0,0x40100000);
  FUN_000110a0("DT-L1-07 (process_double): %.2f\n",SUB84((double)lVar5,0),
               (short)((ulonglong)(double)lVar5 >> 0x20));
  Var6 = process_ld((int)_DAT_00013660,(int)((unkuint10)_DAT_00013660 >> 0x20),
                    (short)((unkuint10)_DAT_00013660 >> 0x40));
  FUN_000110a0("DT-L1-08 (process_ld): %.2Lf\n",(int)Var6,(short)((unkuint10)Var6 >> 0x20),
               (short)((unkuint10)Var6 >> 0x40));
  uVar2 = process_bool(4);
  FUN_000110a0("DT-L1-09 (process_bool): %d\n",uVar2);
  uVar2 = process_bool(3);
  FUN_000110a0("DT-L1-09 (process_bool): %d\n",uVar2);
  uVar2 = process_bool(0xfffffffe);
  FUN_000110a0("DT-L1-09 (process_bool): %d\n",uVar2);
  local_18 = 5;
  uVar4 = const_param(&local_18);
  FUN_000110a0("DT-L1-10 (const_param): %d\n",uVar4);
  local_14 = 10;
  uVar4 = volatile_access(&local_14);
  FUN_000110a0("DT-L1-11 (volatile_access): %d\n",uVar4);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: array_1d_stack @ 0x11686
int array_1d_stack(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(param_1 + local_8 * 4);
  }
  return local_c;
}

// Function: array_string @ 0x116cf
int array_string(int param_1)
{
  int local_8;
  for (local_8 = 0; *(char *)(param_1 + local_8) != '\0'; local_8 = local_8 + 1) {
  }
  return local_8;
}

// Function: array_2d_stack @ 0x11704
int array_2d_stack(int param_1)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < 10; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(local_8 * 0x2c + param_1);
  }
  return local_c;
}

// Function: array_3d @ 0x11754
int array_3d(int param_1)
{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  local_14 = 0;
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    for (local_c = 0; local_c < 5; local_c = local_c + 1) {
      for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
        local_14 = local_14 + *(int *)(local_10 * 100 + param_1 + (local_c * 5 + local_8) * 4);
      }
    }
  }
  return local_14;
}

// Function: array_vla @ 0x117ce
int array_vla(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(param_2 + local_8 * 4);
  }
  return local_c;
}

// Function: array_pointer @ 0x11817
int array_pointer(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(param_1 + local_8 * 0x28);
  }
  return local_c;
}

// Function: pointer_array @ 0x11865
int pointer_array(int param_1,int param_2)
{
  int local_10;
  int local_c;
  local_10 = 0;
  if (10 < param_2) {
    param_2 = 10;
  }
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    if (*(int *)(param_1 + local_c * 4) != 0) {
      local_10 = local_10 + **(int **)(param_1 + local_c * 4);
    }
  }
  return local_10;
}

// Function: array_complex_index @ 0x118d5
undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + (param_4 + param_5 * param_2) * 4);
  }
  return uVar1;
}

// Function: array_oob @ 0x11927
int array_oob(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 <= param_2; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(param_1 + local_8 * 4);
  }
  return local_c;
}

// Function: test_array_types @ 0x11970
void test_array_types(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 **ppuVar3;
  int in_GS_OFFSET;
  byte bVar4;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  int local_518;
  int local_514;
  int local_510;
  int local_50c;
  int local_508;
  int local_504;
  int local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e4;
  undefined4 local_4e0;
  undefined4 *local_4dc;
  undefined4 *local_4d8;
  undefined4 *local_4d4;
  int local_4b4 [20];
  int local_464 [50];
  int local_39c [100];
  undefined4 local_20c [125];
  undefined4 local_16;
  undefined2 local_12;
  int local_10;
  bVar4 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_000110c0(&DAT_0001317c);
  local_4f0 = 1;
  local_4ec = 2;
  local_4e8 = 3;
  local_4e4 = 4;
  local_4e0 = 5;
  uVar1 = array_1d_stack(&local_4f0,5);
  FUN_000110a0("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
  local_16 = 0x6c6c6568;
  local_12 = 0x6f;
  uVar1 = array_string(&local_16);
  FUN_000110a0("ARR-L1-02 (array_string): %d\n",uVar1);
  for (local_518 = 0; local_518 < 10; local_518 = local_518 + 1) {
    for (local_514 = 0; local_514 < 10; local_514 = local_514 + 1) {
      iVar2 = local_518;
      if (local_518 != local_514) {
        iVar2 = 0;
      }
      local_39c[local_518 * 10 + local_514] = iVar2;
    }
  }
  uVar1 = array_2d_stack(local_39c);
  FUN_000110a0("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
  for (local_510 = 0; local_510 < 5; local_510 = local_510 + 1) {
    for (local_50c = 0; local_50c < 5; local_50c = local_50c + 1) {
      for (local_508 = 0; local_508 < 5; local_508 = local_508 + 1) {
        local_20c[local_508 + local_50c * 5 + local_510 * 0x19] = 1;
      }
    }
  }
  uVar1 = array_3d(local_20c);
  FUN_000110a0("ARR-L1-04 (array_3d): %d\n",uVar1);
  local_4fc = 10;
  local_4f8 = 0x14;
  local_4f4 = 0x1e;
  uVar1 = array_vla(3,&local_4fc);
  FUN_000110a0("ARR-L2-01 (array_vla): %d\n",uVar1);
  for (local_504 = 0; local_504 < 5; local_504 = local_504 + 1) {
    local_464[local_504 * 10] = local_504 * 10;
  }
  uVar1 = array_pointer(local_464,5);
  FUN_000110a0("ARR-L2-02 (array_pointer): %d\n",uVar1);
  local_524 = 10;
  local_520 = 0x14;
  local_51c = 0x1e;
  ppuVar3 = &local_4dc;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar3 = (undefined4 *)0x0;
    ppuVar3 = ppuVar3 + (uint)bVar4 * -2 + 1;
  }
  local_4dc = &local_524;
  local_4d8 = &local_520;
  local_4d4 = &local_51c;
  uVar1 = pointer_array(&local_4dc,3);
  FUN_000110a0("ARR-L2-03 (pointer_array): %d\n",uVar1);
  for (local_500 = 0; local_500 < 0x14; local_500 = local_500 + 1) {
    local_4b4[local_500] = local_500;
  }
  uVar1 = array_complex_index(local_4b4,5,4,2,3);
  FUN_000110a0("ARR-L2-04 (array_complex_index): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: ptr_single @ 0x11d1d
int ptr_single(int *param_1)
{
  return *param_1 + 10;
}

// Function: ptr_double @ 0x11d38
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x11d55
int ptr_triple(undefined4 *param_1)
{
  return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x11d74
int ptr_increment(int *param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    local_c = local_c + *param_1;
    param_1 = param_1 + 1;
  }
  return local_c;
}

// Function: ptr_offset @ 0x11db5
undefined4 ptr_offset(int param_1,int param_2)
{
  return *(undefined4 *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11dd9
int ptr_diff(int param_1,int param_2)
{
  return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x11df5
int ptr_void(int *param_1,int param_2)
{
  int iVar1;
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else if (param_2 == 1) {
    iVar1 = (int)*(char *)param_1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: ptr_const @ 0x11e2b
int ptr_const(int *param_1)
{
  return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x11e45
int ptr_const_ptr(int *param_1)
{
  *param_1 = *param_1 + 5;
  return *param_1;
}

// Function: ptr_func_simple @ 0x11e6a
void ptr_func_simple(code *param_1,undefined4 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: ptr_func_complex @ 0x11e8e
void ptr_func_complex(code *param_1,undefined4 param_2)
{
  int in_GS_OFFSET;
  undefined *local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_18 = &DAT_00013295;
  local_14 = 0;
  (*param_1)(param_2,&local_18);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: ptr_cast @ 0x11eef
undefined4 ptr_cast(undefined4 *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x11f1c
undefined4 opaque_handle_create(undefined4 param_1)
{
  return param_1;
}

// Function: opaque_handle_op @ 0x11f32
int opaque_handle_op(int param_1)
{
  return param_1 * 2;
}

// Function: complex_callback @ 0x11f4a
bool complex_callback(int *param_1,int *param_2)
{
  *param_1 = *param_1 + 10;
  return *param_2 != 0;
}

// Function: test_pointer_types @ 0x11f77
void test_pointer_types(void)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  undefined4 **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 **local_58;
  undefined4 ***local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_000110c0(&DAT_0001329a);
  local_84 = 5;
  uVar1 = ptr_single(&local_84);
  FUN_000110a0("PTR-L2-01 (ptr_single): %d\n",uVar1);
  local_80 = 10;
  local_7c = &local_80;
  local_58 = &local_7c;
  uVar1 = ptr_double(local_58);
  FUN_000110a0("PTR-L2-02 (ptr_double): %d\n",uVar1);
  local_78 = 5;
  local_74 = &local_78;
  local_70 = &local_74;
  local_54 = &local_70;
  uVar1 = ptr_triple(local_54);
  FUN_000110a0("PTR-L2-03 (ptr_triple): %d\n",uVar1);
  local_4c = 1;
  local_48 = 2;
  local_44 = 3;
  local_40 = 4;
  local_3c = 5;
  uVar1 = ptr_increment(&local_4c,5);
  FUN_000110a0("PTR-L2-04 (ptr_increment): %d\n",uVar1);
  local_38 = 10;
  local_34 = 0x14;
  local_30 = 0x1e;
  local_2c = 0x28;
  local_28 = 0x32;
  uVar1 = ptr_offset(&local_38,2);
  FUN_000110a0("PTR-L2-05 (ptr_offset): %d\n",uVar1);
  local_24 = 0;
  local_20 = 10;
  local_1c = 0x14;
  local_18 = 0x1e;
  local_14 = 0x28;
  uVar1 = ptr_diff(&local_14,&local_24);
  FUN_000110a0("PTR-L2-06 (ptr_diff): %d\n",uVar1);
  local_6c = 0x2a;
  local_85 = 0x41;
  uVar1 = ptr_void(&local_6c,0);
  FUN_000110a0("PTR-L2-07 (ptr_void): %d\n",uVar1);
  uVar1 = ptr_void(&local_85,1);
  FUN_000110a0("PTR-L2-07 (ptr_void): %d\n",uVar1);
  local_68 = 10;
  uVar1 = ptr_const(&local_68);
  FUN_000110a0("PTR-L2-08 (ptr_const): %d\n",uVar1);
  local_64 = 10;
  uVar1 = ptr_const_ptr(&local_64);
  FUN_000110a0("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1);
  uVar1 = ptr_func_simple(double_value,5);
  FUN_000110a0("PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
  local_60 = 5;
  uVar1 = ptr_func_complex(complex_callback,&local_60);
  FUN_000110a0("PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
  local_5c = 0x12345678;
  uVar1 = ptr_cast(&local_5c);
  FUN_000110a0("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1);
  local_50 = opaque_handle_create(10);
  uVar1 = opaque_handle_op(local_50);
  FUN_000110a0("PTR-L2-13 (opaque_handle_op): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: struct_simple @ 0x12291
int struct_simple(int *param_1)
{
  return param_1[2] + *param_1 + param_1[1];
}

// Function: struct_array @ 0x122b9
int struct_array(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(param_1 + local_8 * 0xc + 8) +
                        *(int *)(param_1 + local_8 * 0xc) + *(int *)(param_1 + local_8 * 0xc + 4);
  }
  return local_c;
}

// Function: struct_nested @ 0x12336
int struct_nested(int *param_1)
{
  return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x12356
int struct_deep(int param_1)
{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x12377
int struct_with_ptr(int *param_1)
{
  int iVar1;
  if (param_1[1] == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)param_1[1];
  }
  return iVar1 + *param_1;
}

// Function: struct_bitfields @ 0x123aa
short struct_bitfields(ushort *param_1)
{
  return (*param_1 >> 6) +
         (ushort)(*(byte *)param_1 & 1) + (ushort)(*(byte *)param_1 >> 1 & 3) +
         (ushort)(*(byte *)param_1 >> 3 & 7);
}

// Function: union_type @ 0x123f9
float union_type(float *param_1,int param_2)
{
  float fVar1;
  if (param_2 == 0) {
    fVar1 = *param_1;
  }
  else if (param_2 == 1) {
    fVar1 = (float)(int)ROUND(*param_1);
  }
  else {
    fVar1 = (float)(int)*(char *)param_1;
  }
  return fVar1;
}

// Function: union_array @ 0x1244c
int union_array(int param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    local_c = local_c + *(int *)(param_1 + local_8 * 4);
  }
  return local_c;
}

// Function: enum_type @ 0x12495
int enum_type(int param_1)
{
  return param_1 * 10;
}

// Function: enum_switch @ 0x124b4
undefined4 enum_switch(uint param_1)
{
  if (param_1 == 3) {
    return 0xffffffff;
  }
  if (param_1 < 4) {
    if (param_1 == 2) {
      return 0x32;
    }
    if (param_1 < 3) {
      if (param_1 == 0) {
        return 0;
      }
      if (param_1 == 1) {
        return 100;
      }
    }
  }
  return 0xffffff9d;
}

// Function: struct_func_ptr @ 0x1250e
void struct_func_ptr(undefined4 *param_1)
{
  (*(code *)param_1[1])(*param_1);
  return;
}

// Function: linked_list @ 0x12538
int linked_list(int *param_1)
{
  int local_c;
  int *local_8;
  local_c = 0;
  for (local_8 = param_1; local_8 != (int *)0x0; local_8 = (int *)local_8[1]) {
    local_c = local_c + *local_8;
  }
  return local_c;
}

// Function: doubly_linked_list @ 0x12577
int doubly_linked_list(int *param_1)
{
  int local_c;
  int *local_8;
  local_c = 0;
  for (local_8 = param_1; local_8 != (int *)0x0; local_8 = (int *)local_8[1]) {
    local_c = local_c + *local_8;
  }
  return local_c;
}

// Function: binary_tree_sum @ 0x125b6
int binary_tree_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  if (param_1 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar1 = *param_1;
    iVar3 = binary_tree_sum(param_1[1]);
    iVar2 = binary_tree_sum(param_1[2]);
    iVar2 = iVar2 + iVar1 + iVar3;
  }
  return iVar2;
}

// Function: binary_tree @ 0x1260a
void binary_tree(undefined4 param_1)
{
  binary_tree_sum(param_1);
  return;
}

// Function: graph_traverse @ 0x1262e
int graph_traverse(int param_1)
{
  int local_10;
  int local_c;
  int *local_8;
  local_10 = 0;
  for (local_c = 0; local_c < *(int *)(param_1 + 0x28); local_c = local_c + 1) {
    for (local_8 = *(int **)(param_1 + local_c * 4); local_8 != (int *)0x0;
        local_8 = (int *)local_8[1]) {
      local_10 = local_10 + *local_8;
    }
  }
  return local_10;
}

// Function: test_composite_types @ 0x1268b
void test_composite_types(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 **ppuVar3;
  int in_GS_OFFSET;
  byte bVar4;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 *local_10c;
  undefined2 local_108 [2];
  uint local_104;
  undefined4 local_100;
  code *local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_3c [10];
  undefined4 local_14;
  int local_10;
  bVar4 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_000110c0(&DAT_0001343e);
  local_f0 = 1;
  local_ec = 2;
  local_e8 = 3;
  uVar1 = struct_simple(&local_f0);
  FUN_000110a0("CMP-L2-01 (struct_simple): %d\n",uVar1);
  local_84 = 1;
  local_80 = 1;
  local_7c = 1;
  local_78 = 2;
  local_74 = 2;
  local_70 = 2;
  uVar1 = struct_array(&local_84,2);
  FUN_000110a0("CMP-L2-02 (struct_array): %d\n",uVar1);
  local_d8 = 5;
  local_d4 = 10;
  local_d0 = 0;
  local_cc = 100;
  local_c8 = 200;
  uVar1 = struct_nested(&local_d8);
  FUN_000110a0("CMP-L2-03 (struct_nested): %d\n",uVar1);
  local_c4 = 1;
  local_c0 = 2;
  local_bc = 3;
  local_b8 = 10;
  local_b4 = 0x14;
  local_b0 = 0xff;
  local_ac = 0;
  local_a8 = 0;
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0xff;
  local_98 = 0x2a;
  uVar1 = struct_deep(&local_c4);
  FUN_000110a0("CMP-L2-04 (struct_deep): %d\n",uVar1);
  local_118 = 0x14;
  local_114 = 0;
  local_110 = 10;
  local_10c = &local_118;
  uVar1 = struct_with_ptr(&local_110);
  FUN_000110a0("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
  local_108[0] = 0x191d;
  local_104 = local_104 & 0xfff00000;
  uVar1 = struct_bitfields(local_108);
  FUN_000110a0("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
  local_94 = 0x12345678;
  uVar1 = union_type(&local_94,0);
  FUN_000110a0("CMP-L2-07 (union_type): %d\n",uVar1);
  local_90 = 10;
  local_8c = 0x14;
  local_88 = 0x1e;
  uVar1 = union_array(&local_90,3);
  FUN_000110a0("CMP-L2-08 (union_array): %d\n",uVar1);
  uVar1 = enum_type(1);
  FUN_000110a0("CMP-L2-09 (enum_type): %d\n",uVar1);
  uVar1 = enum_switch(2);
  FUN_000110a0("CMP-L2-10 (enum_switch): %d\n",uVar1);
  local_100 = 10;
  local_fc = process_int;
  uVar1 = struct_func_ptr(&local_100);
  FUN_000110a0("CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
  local_6c = 10;
  local_68 = &local_64;
  local_64 = 0x14;
  local_60 = &local_5c;
  local_5c = 0x1e;
  local_58 = 0;
  uVar1 = linked_list(&local_6c);
  FUN_000110a0("CMP-L2-12 (linked_list): %d\n",uVar1);
  local_54 = 10;
  local_4c = 0;
  local_48 = 0x14;
  local_44 = 0;
  local_40 = &local_54;
  local_50 = &local_48;
  uVar1 = doubly_linked_list(&local_54);
  FUN_000110a0("CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
  local_e4 = 100;
  local_e0 = 0;
  local_dc = 0;
  uVar1 = binary_tree(&local_e4);
  FUN_000110a0("CMP-L2-14 (binary_tree): %d\n",uVar1);
  local_f8 = 1;
  local_f4 = 0;
  ppuVar3 = local_3c;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar3 = (undefined4 *)0x0;
    ppuVar3 = ppuVar3 + (uint)bVar4 * -2 + 1;
  }
  local_14 = 2;
  local_3c[0] = &local_f8;
  uVar1 = graph_traverse(local_3c);
  FUN_000110a0("CMP-L2-15 (graph_traverse): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: main @ 0x12b69
undefined4 main(void)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x12b98
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: __stack_chk_fail_local @ 0x12ba0
void __stack_chk_fail_local(void)
{
  FUN_000110b0();
  return;
}

// Function: __do_global_ctors_aux @ 0x12bc0
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x12c0c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

