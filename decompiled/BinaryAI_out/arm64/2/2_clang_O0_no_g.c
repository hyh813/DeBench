// Decompiled by BinaryAI
// SHA256: 1c44cea08173101e284ad8a1b129288ad24926140563fc0cb84991940b7173e1

// Function: _init @ 0x100660
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100680 @ 0x100680
void FUN_00100680(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x1006a0
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1006b0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1006c0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::memset @ 0x1006d0
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1006e0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1006f0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::printf @ 0x100700
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100740
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100774
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100790
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1007c0
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001007fc @ 0x1007fc
void FUN_001007fc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100800
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: process_char @ 0x100854
byte process_char(byte param_1)
{
  byte local_1;
  local_1 = param_1;
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    local_1 = param_1 + 0x20;
  }
  return local_1;
}

// Function: process_short @ 0x1008a4
int process_short(short param_1,short param_2)
{
  return (int)param_1 + (int)param_2;
}

// Function: process_int @ 0x1008c4
int process_int(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: process_long @ 0x1008e0
long process_long(long param_1)
{
  return param_1 << 1;
}

// Function: process_ll @ 0x1008f8
long process_ll(long param_1)
{
  return param_1 * param_1;
}

// Function: process_float @ 0x100914
undefined4 process_float(undefined4 param_1)
{
  undefined4 uVar1;
  uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
  return uVar1;
}

// Function: process_double @ 0x100934
double process_double(double param_1)
{
  return param_1 / 2.0 + 0.1;
}

// Function: process_ld @ 0x10095c
void process_ld(undefined8 param_1)
{
  undefined8 uVar1;
  uVar1 = __multf3(param_1);
  __addtf3(uVar1,0);
  return;
}

// Function: process_bool @ 0x10098c
bool process_bool(int param_1)
{
  bool bVar1;
  bVar1 = false;
  if (0 < param_1) {
    bVar1 = param_1 % 2 == 0;
  }
  return bVar1;
}

// Function: const_param @ 0x1009e0
int const_param(int *param_1)
{
  return *param_1 + 10;
}

// Function: volatile_access @ 0x1009fc
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100a30
int test_data_types_l1(void)
{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_18;
  undefined4 local_14;
  printf(&DAT_00103758);
  uVar2 = process_char(0x41);
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uVar2 & 0xff));
  uVar2 = process_char(0x62);
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uVar2 & 0xff));
  sVar1 = process_short(100,200);
  printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar1);
  uVar4 = process_int();
  printf("DT-L1-03 (process_int): %d\n",uVar4 & 0xffffffff);
  uVar5 = process_long();
  printf("DT-L1-04 (process_long): %ld\n",uVar5);
  uVar5 = process_ll(100);
  iVar3 = printf("DT-L1-05 (process_ll): %lld\n",uVar5);
  fVar6 = (float)process_float(0x40000000,iVar3);
  iVar3 = printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
  process_double(0x4010000000000000,iVar3);
  iVar3 = printf("DT-L1-07 (process_double): %.2f\n");
  process_ld(0,iVar3);
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  uVar2 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(uVar2 & 1));
  uVar2 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(uVar2 & 1));
  uVar2 = process_bool(0xfffffffe);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(uVar2 & 1));
  local_14 = 5;
  uVar4 = const_param(&local_14);
  printf("DT-L1-10 (const_param): %d\n",uVar4 & 0xffffffff);
  local_18 = 10;
  uVar4 = volatile_access(&local_18);
  iVar3 = printf("DT-L1-11 (volatile_access): %d\n",uVar4 & 0xffffffff);
  return iVar3;
}

// Function: array_1d_stack @ 0x100bc4
int array_1d_stack(long param_1,int param_2)
{
  int local_14;
  int local_10;
  local_10 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
  }
  return local_10;
}

// Function: array_string @ 0x100c28
int array_string(long param_1)
{
  int local_c;
  for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
  }
  return local_c;
}

// Function: array_2d_stack @ 0x100c68
int array_2d_stack(long param_1)
{
  int local_10;
  int local_c;
  local_c = 0;
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    local_c = local_c + *(int *)(param_1 + (long)local_10 * 0x28 + (long)local_10 * 4);
  }
  return local_c;
}

// Function: array_3d @ 0x100cd4
int array_3d(long param_1)
{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  local_c = 0;
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
        local_c = local_c + *(int *)(param_1 + (long)local_10 * 100 + (long)local_14 * 0x14 +
                                    (long)local_18 * 4);
      }
    }
  }
  return local_c;
}

// Function: array_vla @ 0x100da8
int array_vla(int param_1,long param_2)
{
  int local_18;
  int local_14;
  local_14 = 0;
  for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
    local_14 = local_14 + *(int *)(param_2 + (long)local_18 * 4);
  }
  return local_14;
}

// Function: array_pointer @ 0x100e0c
int array_pointer(long param_1,int param_2)
{
  int local_14;
  int local_10;
  local_10 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 0x28);
  }
  return local_10;
}

// Function: pointer_array @ 0x100e78
int pointer_array(long param_1,int param_2)
{
  int local_1c;
  int local_18;
  int local_10;
  local_10 = 0;
  local_1c = param_2;
  if (9 < param_2) {
    local_1c = 10;
  }
  for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
    if (*(long *)(param_1 + (long)local_18 * 8) != 0) {
      local_10 = local_10 + **(int **)(param_1 + (long)local_18 * 8);
    }
  }
  return local_10;
}

// Function: array_complex_index @ 0x100f28
undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 local_4;
  if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
    local_4 = 0xffffffff;
  }
  else {
    local_4 = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
  }
  return local_4;
}

// Function: array_oob @ 0x100fbc
int array_oob(long param_1,int param_2)
{
  int local_14;
  int local_10;
  local_10 = 0;
  for (local_14 = 0; local_14 <= param_2; local_14 = local_14 + 1) {
    local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
  }
  return local_10;
}

// Function: test_array_types @ 0x101020
int test_array_types(void)
{
  int iVar1;
  ulong uVar2;
  undefined8 *local_588;
  int local_57c;
  int local_56c;
  int aiStack_568 [20];
  undefined4 *local_518;
  undefined4 *local_510;
  undefined4 *local_508;
  undefined8 local_500;
  undefined8 local_4f8 [6];
  undefined8 local_4c8;
  undefined4 local_4c0;
  int local_4bc;
  int aiStack_4b8 [50];
  undefined8 local_3f0;
  undefined4 local_3e8;
  int local_3e0;
  int local_3dc;
  int local_3d8;
  undefined4 auStack_3d4 [125];
  int local_1e0;
  int local_1dc;
  int aiStack_1d8 [100];
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  printf(&DAT_001038c4);
  uStack_38 = 0x400000003;
  local_40 = 0x200000001;
  local_30 = 5;
  uVar2 = array_1d_stack(&local_40,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",uVar2 & 0xffffffff);
  local_48._0_1_ = 'h';
  local_48._1_1_ = 'e';
  local_48._2_1_ = 'l';
  local_48._3_1_ = 'l';
  local_44._0_1_ = 'o';
  local_44._1_1_ = '\0';
  uVar2 = array_string(&local_48);
  printf("ARR-L1-02 (array_string): %d\n",uVar2 & 0xffffffff);
  for (local_1dc = 0; local_1dc < 10; local_1dc = local_1dc + 1) {
    for (local_1e0 = 0; local_1e0 < 10; local_1e0 = local_1e0 + 1) {
      if (local_1dc == local_1e0) {
        local_57c = local_1dc;
      }
      else {
        local_57c = 0;
      }
      aiStack_1d8[(long)local_1dc * 10 + (long)local_1e0] = local_57c;
    }
  }
  uVar2 = array_2d_stack(aiStack_1d8);
  printf("ARR-L1-03 (array_2d_stack): %d\n",uVar2 & 0xffffffff);
  for (local_3d8 = 0; local_3d8 < 5; local_3d8 = local_3d8 + 1) {
    for (local_3dc = 0; local_3dc < 5; local_3dc = local_3dc + 1) {
      for (local_3e0 = 0; local_3e0 < 5; local_3e0 = local_3e0 + 1) {
        auStack_3d4[(long)local_3d8 * 0x19 + (long)local_3dc * 5 + (long)local_3e0] = 1;
      }
    }
  }
  uVar2 = array_3d(auStack_3d4);
  printf("ARR-L1-04 (array_3d): %d\n",uVar2 & 0xffffffff);
  local_3f0 = 0x140000000a;
  local_3e8 = 0x1e;
  uVar2 = array_vla(3,&local_3f0);
  printf("ARR-L2-01 (array_vla): %d\n",uVar2 & 0xffffffff);
  for (local_4bc = 0; local_4bc < 5; local_4bc = local_4bc + 1) {
    aiStack_4b8[(long)local_4bc * 10] = local_4bc * 10;
  }
  uVar2 = array_pointer(aiStack_4b8,5);
  printf("ARR-L2-02 (array_pointer): %d\n",uVar2 & 0xffffffff);
  local_518 = &local_4c0;
  local_4c0 = 10;
  local_510 = (undefined4 *)((long)&local_4c8 + 4);
  local_4c8._4_4_ = 0x14;
  local_508 = (undefined4 *)&local_4c8;
  local_4c8._0_4_ = 0x1e;
  local_500 = 0;
  local_588 = local_4f8;
  do {
    *local_588 = 0;
    local_588 = local_588 + 1;
  } while (local_588 != &local_4c8);
  uVar2 = pointer_array(&local_518,3);
  printf("ARR-L2-03 (pointer_array): %d\n",uVar2 & 0xffffffff);
  for (local_56c = 0; local_56c < 0x14; local_56c = local_56c + 1) {
    aiStack_568[local_56c] = local_56c;
  }
  uVar2 = array_complex_index(aiStack_568,5,4,2,3);
  iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",uVar2 & 0xffffffff);
  return iVar1;
}

// Function: ptr_single @ 0x1013d0
int ptr_single(int *param_1)
{
  return *param_1 + 10;
}

// Function: ptr_double @ 0x1013ec
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x10140c
int ptr_triple(undefined8 *param_1)
{
  return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x101430
int ptr_increment(int *param_1,int param_2)
{
  int local_14;
  int local_10;
  int *local_8;
  local_10 = 0;
  local_8 = param_1;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = local_10 + *local_8;
    local_8 = local_8 + 1;
  }
  return local_10;
}

// Function: ptr_offset @ 0x10149c
undefined4 ptr_offset(long param_1,int param_2)
{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1014bc
ulong ptr_diff(long param_1,long param_2)
{
  return (param_1 - param_2) / 4 & 0xffffffff;
}

// Function: ptr_void @ 0x1014e8
uint ptr_void(uint *param_1,int param_2)
{
  uint local_4;
  if (param_2 == 0) {
    local_4 = *param_1;
  }
  else if (param_2 == 1) {
    local_4 = (uint)*(byte *)param_1;
  }
  else {
    local_4 = 0xffffffff;
  }
  return local_4;
}

// Function: ptr_const @ 0x10154c
int ptr_const(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: ptr_const_ptr @ 0x101570
int ptr_const_ptr(int *param_1)
{
  *param_1 = *param_1 + 5;
  return *param_1;
}

// Function: ptr_func_simple @ 0x10159c
void ptr_func_simple(code *param_1,undefined4 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: ptr_func_complex @ 0x1015c8
void ptr_func_complex(code *param_1,undefined8 param_2)
{
  undefined *local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  code *local_18;
  uStack_28 = 0;
  local_30 = &DAT_001039dc;
  local_20 = param_2;
  local_18 = param_1;
  (*param_1)(param_2,&local_30);
  return;
}

// Function: ptr_cast @ 0x101608
undefined4 ptr_cast(undefined4 *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x101638
long opaque_handle_create(int param_1)
{
  return (long)param_1;
}

// Function: opaque_handle_op @ 0x10164c
int opaque_handle_op(int param_1)
{
  return param_1 << 1;
}

// Function: test_pointer_types @ 0x101664
int test_pointer_types(void)
{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined local_a5;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 ***local_48;
  undefined4 **local_40;
  undefined4 *local_38;
  undefined4 local_2c;
  undefined4 **local_28;
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 local_14;
  printf(&DAT_001039e1);
  local_14 = 5;
  uVar2 = ptr_single(&local_14);
  printf("PTR-L2-01 (ptr_single): %d\n",uVar2 & 0xffffffff);
  local_20 = &local_18;
  local_18 = 10;
  local_28 = &local_20;
  uVar2 = ptr_double(local_28);
  printf("PTR-L2-02 (ptr_double): %d\n",uVar2 & 0xffffffff);
  local_38 = &local_2c;
  local_2c = 5;
  local_40 = &local_38;
  local_48 = &local_40;
  uVar2 = ptr_triple(local_48);
  printf("PTR-L2-03 (ptr_triple): %d\n",uVar2 & 0xffffffff);
  uStack_58 = 0x400000003;
  local_60 = 0x200000001;
  local_50 = 5;
  uVar2 = ptr_increment(&local_60,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",uVar2 & 0xffffffff);
  uStack_78 = 0x280000001e;
  local_80 = 0x140000000a;
  local_70 = 0x32;
  uVar2 = ptr_offset(&local_80,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",uVar2 & 0xffffffff);
  uStack_98 = 0x1e00000014;
  local_a0 = 0xa00000000;
  local_90[0] = 0x28;
  uVar2 = ptr_diff(local_90);
  printf("PTR-L2-06 (ptr_diff): %d\n",uVar2 & 0xffffffff);
  local_a4 = 0x2a;
  local_a5 = 0x41;
  uVar2 = ptr_void(&local_a4,0);
  printf("PTR-L2-07 (ptr_void): %d\n",uVar2 & 0xffffffff);
  uVar2 = ptr_void(&local_a5,1);
  printf("PTR-L2-07 (ptr_void): %d\n",uVar2 & 0xffffffff);
  local_ac = 10;
  uVar2 = ptr_const(&local_ac);
  printf("PTR-L2-08 (ptr_const): %d\n",uVar2 & 0xffffffff);
  local_b0 = 10;
  uVar2 = ptr_const_ptr(&local_b0);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar2 & 0xffffffff);
  uVar2 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar2 & 0xffffffff);
  local_b4 = 5;
  uVar2 = ptr_func_complex(complex_callback,&local_b4);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar2 & 0xffffffff);
  local_b8 = 0x12345678;
  uVar2 = ptr_cast(&local_b8);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar2 & 0xffffffff);
  uVar3 = opaque_handle_create(10);
  uVar2 = opaque_handle_op(uVar3);
  iVar1 = printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar2 & 0xffffffff);
  return iVar1;
}

// Function: double_value @ 0x1018d4
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: complex_callback @ 0x1018ec
bool complex_callback(int *param_1,long *param_2)
{
  *param_1 = *param_1 + 10;
  return *param_2 != 0;
}

// Function: struct_simple @ 0x101928
int struct_simple(int *param_1)
{
  return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101958
int struct_array(long param_1,int param_2)
{
  int local_14;
  int local_10;
  local_10 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = local_10 +
               *(int *)(param_1 + (long)local_14 * 0xc) +
               *(int *)(param_1 + (long)local_14 * 0xc + 4) +
               *(int *)(param_1 + (long)local_14 * 0xc + 8);
  }
  return local_10;
}

// Function: struct_nested @ 0x1019f4
int struct_nested(int *param_1)
{
  return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101a18
int struct_deep(long param_1)
{
  return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101a3c
int struct_with_ptr(int *param_1)
{
  int local_10;
  if (*(long *)(param_1 + 2) == 0) {
    local_10 = 0;
  }
  else {
    local_10 = **(int **)(param_1 + 2);
  }
  return *param_1 + local_10;
}

// Function: struct_bitfields @ 0x101a94
short struct_bitfields(ushort *param_1)
{
  return (*param_1 >> 1 & 3) + (*param_1 & 1) + (*param_1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x101aec
float union_type(float *param_1,int param_2)
{
  float local_4;
  if (param_2 == 0) {
    local_4 = *param_1;
  }
  else if (param_2 == 1) {
    local_4 = (float)(int)*param_1;
  }
  else {
    local_4 = (float)(uint)*(byte *)param_1;
  }
  return local_4;
}

// Function: union_array @ 0x101b54
int union_array(long param_1,int param_2)
{
  int local_14;
  int local_10;
  local_10 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
  }
  return local_10;
}

// Function: enum_type @ 0x101bb8
int enum_type(int param_1)
{
  return param_1 * 10;
}

// Function: enum_switch @ 0x101bd4
undefined4 enum_switch(undefined4 param_1)
{
  undefined4 local_4;
  switch(param_1) {
  case 0:
    local_4 = 0;
    break;
  case 1:
    local_4 = 100;
    break;
  case 2:
    local_4 = 0x32;
    break;
  case 3:
    local_4 = 0xffffffff;
    break;
  default:
    local_4 = 0xffffff9d;
  }
  return local_4;
}

// Function: struct_func_ptr @ 0x101c50
void struct_func_ptr(undefined4 *param_1)
{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}

// Function: linked_list @ 0x101c80
int linked_list(int *param_1)
{
  int *local_18;
  int local_c;
  local_c = 0;
  for (local_18 = param_1; local_18 != (int *)0x0; local_18 = *(int **)(local_18 + 2)) {
    local_c = local_c + *local_18;
  }
  return local_c;
}

// Function: doubly_linked_list @ 0x101cd4
int doubly_linked_list(int *param_1)
{
  int *local_18;
  int local_c;
  local_c = 0;
  for (local_18 = param_1; local_18 != (int *)0x0; local_18 = *(int **)(local_18 + 2)) {
    local_c = local_c + *local_18;
  }
  return local_c;
}

// Function: binary_tree_sum @ 0x101d28
int binary_tree_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  int local_14;
  if (param_1 == (int *)0x0) {
    local_14 = 0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
    local_14 = binary_tree_sum(*(undefined8 *)(param_1 + 4));
    local_14 = iVar1 + iVar2 + local_14;
  }
  return local_14;
}

// Function: binary_tree @ 0x101d9c
void binary_tree(undefined8 param_1)
{
  binary_tree_sum(param_1);
  return;
}

// Function: graph_traverse @ 0x101dc0
int graph_traverse(long param_1)
{
  int *local_18;
  int local_10;
  int local_c;
  local_c = 0;
  for (local_10 = 0; local_10 < *(int *)(param_1 + 0x50); local_10 = local_10 + 1) {
    for (local_18 = *(int **)(param_1 + (long)local_10 * 8); local_18 != (int *)0x0;
        local_18 = *(int **)(local_18 + 2)) {
      local_c = local_c + *local_18;
    }
  }
  return local_c;
}

// Function: test_composite_types @ 0x101e50
int test_composite_types(void)
{
  int iVar1;
  ulong uVar2;
  undefined8 *local_1d8 [10];
  undefined4 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined4 local_150 [2];
  undefined4 *local_148;
  undefined8 local_140;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined4 *local_128;
  undefined4 local_120;
  undefined4 *local_118;
  undefined4 local_110 [2];
  undefined4 *local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  undefined8 local_f0;
  code *pcStack_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined auStack_a0 [48];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined4 local_28;
  printf(&DAT_00103b7b);
  local_30 = 0x200000001;
  local_28 = 3;
  uVar2 = struct_simple(&local_30);
  printf("CMP-L2-01 (struct_simple): %d\n",uVar2 & 0xffffffff);
  uStack_48 = 0x200000001;
  local_50 = 0x100000001;
  local_40 = 0x200000002;
  uVar2 = struct_array(&local_50);
  printf("CMP-L2-02 (struct_array): %d\n",uVar2 & 0xffffffff);
  uStack_68 = 0x6400000000;
  local_70 = 0xa00000005;
  local_60 = 200;
  uVar2 = struct_nested(&local_70);
  printf("CMP-L2-03 (struct_nested): %d\n",uVar2 & 0xffffffff);
  memcpy(auStack_a0,&DAT_00103704,0x30);
  uVar2 = struct_deep(auStack_a0);
  printf("CMP-L2-04 (struct_deep): %d\n",uVar2 & 0xffffffff);
  local_b8 = &local_b0;
  uStack_a8 = 0;
  local_b0 = 0x14;
  local_c0[0] = 10;
  uVar2 = struct_with_ptr(local_c0);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar2 & 0xffffffff);
  local_c8 = 0x191d;
  uVar2 = struct_bitfields(&local_c8);
  printf("CMP-L2-06 (struct_bitfields): %d\n",uVar2 & 0xffffffff);
  local_cc = 0x12345678;
  uVar2 = union_type(&local_cc);
  printf("CMP-L2-07 (union_type): %d\n",uVar2 & 0xffffffff);
  local_d8 = 0x140000000a;
  local_d0 = 0x1e;
  uVar2 = union_array(&local_d8,3);
  printf("CMP-L2-08 (union_array): %d\n",uVar2 & 0xffffffff);
  uVar2 = enum_type(1);
  printf("CMP-L2-09 (enum_type): %d\n",uVar2 & 0xffffffff);
  uVar2 = enum_switch(2);
  printf("CMP-L2-10 (enum_switch): %d\n",uVar2 & 0xffffffff);
  pcStack_e8 = process_int;
  local_f0 = 10;
  uVar2 = struct_func_ptr(&local_f0);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar2 & 0xffffffff);
  local_120 = 10;
  local_118 = local_110;
  local_110[0] = 0x14;
  local_108 = local_100;
  local_100[0] = 0x1e;
  local_f8 = 0;
  uVar2 = linked_list();
  printf("CMP-L2-12 (linked_list): %d\n",uVar2 & 0xffffffff);
  local_128 = local_150;
  local_150[0] = 10;
  local_140 = 0;
  local_138[0] = 0x14;
  local_130 = 0;
  local_148 = local_138;
  uVar2 = doubly_linked_list();
  printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar2 & 0xffffffff);
  uStack_168 = 0;
  local_170 = 100;
  local_160 = 0;
  uVar2 = binary_tree(&local_170);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar2 & 0xffffffff);
  local_1d8[0] = &local_180;
  uStack_178 = 0;
  local_180 = 1;
  memset(local_1d8,0,0x58);
  local_188 = 2;
  uVar2 = graph_traverse(local_1d8);
  iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",uVar2 & 0xffffffff);
  return iVar1;
}

// Function: main @ 0x102194
undefined4 main(void)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}

// Function: FUN_001021cc @ 0x1021cc
ulong FUN_001021cc(ulong param_1,ulong param_2)
{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong in_register_00005008;
  ulong in_register_00005028;
  uVar10 = fpcr;
  uVar1 = (in_register_00005008 & 0xffffffffffff) << 3;
  lVar14 = -((long)in_register_00005008 >> 0x3f);
  lVar7 = -((long)in_register_00005028 >> 0x3f);
  uVar13 = in_register_00005028 << 3;
  uVar2 = uVar13 & 0x7fffffffffff8;
  uVar21 = uVar1 | param_1 >> 0x3d;
  uVar17 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar15 = in_register_00005028 >> 0x30 & 0x7fff;
  uVar12 = uVar2 | param_2 >> 0x3d;
  uVar18 = param_1 * 8;
  uVar20 = param_2 * 8;
  uVar19 = uVar18;
  uVar9 = uVar21;
  if ((long)in_register_00005028 >> 0x3f == (long)in_register_00005008 >> 0x3f) {
    uVar6 = (int)uVar17 - (int)uVar15;
    uVar8 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      if (uVar6 == 0) {
        uVar11 = uVar17 + 1;
        if ((uVar11 & 0x7ffe) == 0) {
          uVar11 = uVar21 | uVar18;
          if (uVar17 != 0) {
            uVar6 = 0;
            if (uVar17 == 0x7fff) {
              if (uVar11 == 0) {
                if (uVar15 != 0x7fff) goto LAB_00102ac0;
                if ((uVar12 | uVar20) == 0) {
                  return 0;
                }
              }
              else {
                uVar8 = uVar1 >> 0x32 ^ 1;
                uVar6 = (uint)uVar8;
                if (uVar15 != 0x7fff) goto LAB_00102c68;
                if ((uVar12 | uVar20) == 0) goto LAB_00102d00;
              }
LAB_00102d2c:
              if ((uVar13 & 0x4000000000000) == 0) {
                uVar6 = 1;
              }
              uVar8 = (ulong)uVar6;
              if (uVar11 != 0) {
LAB_00102c70:
                uVar19 = in_register_00005008 & 0xffffffffffff;
                if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
                  uVar19 = uVar2 >> 3;
                  param_1 = param_2;
                }
                goto LAB_001026b4;
              }
LAB_00102ac0:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            else {
              if (uVar15 == 0x7fff) {
                if ((uVar12 | uVar20) != 0) goto LAB_00102d2c;
                if (uVar11 == 0) {
                  return 0;
                }
              }
              else {
                if (uVar11 == 0) goto LAB_00102ac0;
LAB_00102c68:
                if ((uVar12 | uVar20) != 0) goto LAB_00102c70;
              }
LAB_00102d00:
              uVar19 = in_register_00005008 & 0xffffffffffff;
            }
            goto LAB_001026b4;
          }
          if (uVar11 == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if ((uVar12 | uVar20) == 0) {
              param_1 = 0;
              goto LAB_00102368;
            }
            goto LAB_00102a38;
          }
          if ((uVar12 | uVar20) == 0) goto LAB_00102a38;
          uVar19 = uVar18 + uVar20;
          uVar9 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          if ((uVar9 >> 0x33 & 1) != 0) {
            uVar9 = uVar9 & 0xfff7ffffffffffff;
            uVar12 = 0;
            bVar3 = false;
            uVar11 = 1;
            goto LAB_0010231c;
          }
LAB_00102308:
          lVar7 = lVar14;
          uVar18 = uVar19 | uVar9;
          goto joined_r0x0010245c;
        }
        if (uVar11 != 0x7fff) {
          uVar19 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          bVar3 = false;
          uVar12 = uVar18 + uVar20 >> 1 & 7;
          uVar9 = uVar19 >> 1;
          uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
          goto LAB_0010231c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) goto LAB_00102a64;
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102d10;
        if (uVar19 != 0x800000) goto LAB_001029d4;
        if (lVar14 == 0) goto LAB_00102cac;
LAB_00102b78:
        uVar8 = 0x14;
      }
      else {
        uVar17 = uVar15;
        if (uVar17 == 0) {
          if ((uVar21 | uVar18) == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            lVar7 = lVar14;
            if (uVar15 == 0x7fff) {
              if ((uVar12 | uVar20) != 0) {
                uVar8 = uVar2 >> 0x32 ^ 1;
                goto LAB_001024f0;
              }
              goto LAB_001027a4;
            }
            goto LAB_0010244c;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar18 = uVar18 + uVar20;
            uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
            goto LAB_00102608;
          }
        }
        else {
          uVar6 = -uVar6;
          uVar21 = uVar21 | 0x8000000000000;
        }
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            return 0;
          }
          uVar8 = uVar2 >> 0x32 ^ 1;
          uVar19 = uVar2 >> 3;
          param_1 = param_2;
          goto LAB_001026b4;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar19 = uVar21 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar18 >> ((ulong)uVar6 & 0x3f) |
                     (ulong)(uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
            uVar12 = uVar12 + (uVar21 >> ((ulong)uVar6 & 0x3f));
          }
          else {
            uVar19 = uVar18 | uVar21 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 - 0x40 == 0) {
              uVar19 = uVar18;
            }
            uVar19 = (ulong)(uVar19 != 0) | uVar21 >> ((ulong)(uVar6 - 0x40) & 0x3f);
          }
        }
        else {
          uVar19 = (ulong)((uVar21 | uVar18) != 0);
        }
        uVar18 = uVar19 + uVar20;
        if (CARRY8(uVar19,uVar20)) {
          uVar12 = uVar12 + 1;
        }
LAB_00102608:
        uVar15 = uVar17;
        uVar19 = uVar18;
        uVar9 = uVar12;
        lVar7 = lVar14;
        if ((uVar12 >> 0x33 & 1) == 0) goto LAB_0010244c;
        uVar11 = uVar17 + 1;
        if (uVar11 != 0x7fff) {
          bVar3 = false;
          uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
          uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
          uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
          goto LAB_0010231c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) {
LAB_00102a64:
          uVar8 = 0x14;
          goto LAB_0010255c;
        }
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102d10:
          uVar8 = 0x14;
          goto LAB_0010255c;
        }
        if (uVar19 == 0x800000) {
          if (lVar14 != 0) goto LAB_00102b78;
LAB_00102cac:
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto LAB_0010234c;
        }
LAB_001029d4:
        uVar6 = 0x14;
        if ((uVar10 & 0xc00000) == 0x400000) {
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          bVar3 = false;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto joined_r0x001029f4;
        }
LAB_00102518:
        uVar10 = uVar10 & 0xc00000;
        if (uVar10 != 0) {
          if (uVar10 == 0x400000) {
            if (lVar14 != 0) goto LAB_00102534;
          }
          else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00102534:
            param_1 = 0xffffffffffffffff;
            uVar8 = (ulong)(uVar6 | 0x14);
            goto LAB_00102368;
          }
        }
        uVar8 = (ulong)(uVar6 | 0x14);
      }
LAB_0010255c:
      param_1 = 0;
      goto LAB_00102570;
    }
    if (uVar15 == 0) {
      if ((uVar12 | uVar20) != 0) {
        uVar8 = (ulong)(uVar6 - 1);
        if (uVar6 - 1 == 0) {
          uVar18 = uVar18 + uVar20;
          uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          goto LAB_00102608;
        }
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) == 0) {
            return 0;
          }
          goto LAB_001024e4;
        }
        goto LAB_001023e0;
      }
      uVar15 = uVar17;
      lVar7 = lVar14;
      if (uVar17 != 0x7fff) goto LAB_0010244c;
      if ((uVar21 | uVar18) == 0) goto LAB_001027a4;
      uVar8 = (ulong)((uint)(uVar1 >> 0x32) ^ 1);
      uVar20 = uVar18;
      uVar12 = uVar21;
LAB_001024f0:
      uVar11 = 0x7fff;
      goto LAB_001024f8;
    }
    uVar12 = uVar12 | 0x8000000000000;
    if (uVar17 != 0x7fff) {
LAB_001023e0:
      iVar5 = (int)uVar8;
      if (iVar5 < 0x75) {
        if (iVar5 < 0x40) {
          uVar19 = uVar12 << ((ulong)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
                   (ulong)(uVar20 << ((ulong)(0x40 - iVar5) & 0x3f) != 0);
          uVar12 = uVar21 + (uVar12 >> (uVar8 & 0x3f));
        }
        else {
          uVar19 = uVar20 | uVar12 << ((ulong)(0x80 - iVar5) & 0x3f);
          if (iVar5 - 0x40U == 0) {
            uVar19 = uVar20;
          }
          uVar19 = (ulong)(uVar19 != 0) | uVar12 >> ((ulong)(iVar5 - 0x40U) & 0x3f);
          uVar12 = uVar21;
        }
      }
      else {
        uVar19 = (ulong)((uVar12 | uVar20) != 0);
        uVar12 = uVar21;
      }
      uVar18 = uVar19 + uVar18;
      if (CARRY8(uVar19,uVar18)) {
        uVar12 = uVar12 + 1;
      }
      goto LAB_00102608;
    }
LAB_00102694:
    if ((uVar21 | uVar18) == 0) {
      return 0;
    }
    uVar8 = uVar1 >> 0x32 ^ 1;
    uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_001026b4:
    if ((uVar19 | param_1) == 0) {
      param_1 = 0;
    }
  }
  else {
    uVar6 = (int)uVar17 - (int)uVar15;
    uVar8 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      if (uVar6 != 0) {
        if (uVar17 == 0) {
          if ((uVar21 | uVar18) == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if (uVar15 == 0x7fff) {
              if ((uVar12 | uVar20) != 0) {
                uVar8 = uVar2 >> 0x32 ^ 1;
                goto LAB_001024f0;
              }
              goto LAB_001027a4;
            }
            goto LAB_0010244c;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar19 = uVar20 + param_1 * -8;
            uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
            goto LAB_0010229c;
          }
        }
        else {
          uVar6 = -uVar6;
          uVar21 = uVar21 | 0x8000000000000;
        }
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            return 0;
          }
          uVar8 = uVar2 >> 0x32 ^ 1;
          uVar19 = uVar2 >> 3;
          param_1 = param_2;
          goto LAB_001026b4;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar18 = uVar21 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar18 >> ((ulong)uVar6 & 0x3f) |
                     (ulong)(uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
            uVar12 = uVar12 - (uVar21 >> ((ulong)uVar6 & 0x3f));
          }
          else {
            uVar19 = uVar18 | uVar21 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 - 0x40 == 0) {
              uVar19 = uVar18;
            }
            uVar18 = (ulong)(uVar19 != 0) | uVar21 >> ((ulong)(uVar6 - 0x40) & 0x3f);
          }
        }
        else {
          uVar18 = (ulong)((uVar21 | uVar18) != 0);
        }
        uVar19 = uVar20 - uVar18;
        uVar9 = uVar12 - (uVar20 < uVar18);
        goto LAB_0010229c;
      }
      if ((uVar17 + 1 & 0x7ffe) != 0) {
        uVar19 = uVar18 + param_2 * -8;
        uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar13 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar13) == 0) {
            param_1 = 0;
            goto LAB_00102368;
          }
        }
        else {
          uVar19 = uVar20 + param_1 * -8;
          uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
          lVar14 = lVar7;
        }
        goto LAB_001022a4;
      }
      uVar16 = uVar21 | uVar18;
      uVar11 = uVar12 | uVar20;
      if (uVar17 != 0) {
        if (uVar17 == 0x7fff) {
          if (uVar16 == 0) {
            if (uVar15 != 0x7fff) goto LAB_00102978;
          }
          else {
            uVar8 = uVar1 >> 0x32 ^ 1;
            if (uVar15 != 0x7fff) goto LAB_00102948;
          }
LAB_00102bc0:
          if (uVar11 != 0) {
            uVar6 = (uint)uVar8;
            if ((uVar13 & 0x4000000000000) == 0) {
              uVar6 = 1;
            }
            uVar8 = (ulong)uVar6;
            if (uVar16 == 0) {
LAB_00102c3c:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
              goto LAB_001026b4;
            }
LAB_00102bd8:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            goto LAB_001026b4;
          }
          if (uVar16 != 0) goto LAB_00102948;
        }
        else {
          if (uVar15 == 0x7fff) goto LAB_00102bc0;
          if (uVar16 != 0) {
LAB_00102948:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if (uVar11 == 0) goto LAB_001026b4;
            goto LAB_00102bd8;
          }
LAB_00102978:
          if (uVar11 != 0) goto LAB_00102c3c;
        }
        param_1 = 0xffffffffffffffff;
        uVar8 = 1;
        goto LAB_00102368;
      }
      if (uVar16 != 0) {
        if (uVar11 == 0) goto LAB_00102a38;
        uVar19 = uVar18 + param_2 * -8;
        uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar9 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar9) != 0) {
            uVar12 = 0;
            bVar3 = true;
            uVar11 = uVar17;
            goto LAB_0010231c;
          }
          goto LAB_00102b10;
        }
        uVar19 = uVar20 + param_1 * -8;
        uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
        uVar18 = uVar19 | uVar9;
        goto joined_r0x0010245c;
      }
      uVar19 = uVar20;
      uVar9 = uVar12;
      lVar14 = lVar7;
      if (uVar11 == 0) {
LAB_00102b10:
        param_1 = 0;
        goto LAB_00102368;
      }
LAB_00102a38:
      uVar18 = 0;
      uVar11 = 0;
LAB_00102a40:
      uVar8 = 0;
      if (((uint)uVar10 >> 0xb & 1) != 0) {
        uVar8 = 8;
      }
LAB_00102348:
      uVar20 = uVar19;
      uVar12 = uVar9;
      if (uVar18 == 0) {
LAB_001024f8:
        param_1 = uVar20 >> 3 | uVar12 << 0x3d;
        uVar19 = uVar12 >> 3;
        if (uVar11 == 0x7fff) goto LAB_001026b4;
      }
      else {
LAB_0010234c:
        uVar6 = (uint)uVar8;
        if (uVar11 == 0x7ffe) goto LAB_00102518;
        param_1 = uVar19 >> 3 | uVar9 << 0x3d;
      }
    }
    else {
      if (uVar15 == 0) {
        if ((uVar12 | uVar20) != 0) {
          uVar8 = (ulong)(uVar6 - 1);
          if (uVar6 - 1 == 0) {
            uVar19 = uVar18 + param_2 * -8;
            uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
            uVar15 = uVar17;
            lVar7 = lVar14;
            goto LAB_0010229c;
          }
          goto LAB_00102248;
        }
        uVar15 = uVar17;
        lVar7 = lVar14;
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) != 0) {
LAB_001024e4:
            uVar8 = uVar1 >> 0x32 ^ 1;
            uVar20 = uVar18;
            uVar12 = uVar21;
            goto LAB_001024f0;
          }
LAB_001027a4:
          uVar8 = 0;
          uVar19 = 0;
          param_1 = 0;
          goto LAB_001026b4;
        }
      }
      else {
        uVar12 = uVar12 | 0x8000000000000;
LAB_00102248:
        if (uVar17 == 0x7fff) goto LAB_00102694;
        iVar5 = (int)uVar8;
        if (iVar5 < 0x75) {
          if (iVar5 < 0x40) {
            uVar9 = uVar12 << ((ulong)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
                    (ulong)(uVar20 << ((ulong)(0x40 - iVar5) & 0x3f) != 0);
            uVar21 = uVar21 - (uVar12 >> (uVar8 & 0x3f));
          }
          else {
            uVar19 = uVar20 | uVar12 << ((ulong)(0x80 - iVar5) & 0x3f);
            if (iVar5 - 0x40U == 0) {
              uVar19 = uVar20;
            }
            uVar9 = (ulong)(uVar19 != 0) | uVar12 >> ((ulong)(iVar5 - 0x40U) & 0x3f);
          }
        }
        else {
          uVar9 = (ulong)((uVar12 | uVar20) != 0);
        }
        uVar19 = uVar18 - uVar9;
        uVar9 = uVar21 - (uVar18 < uVar9);
        uVar15 = uVar17;
        lVar7 = lVar14;
LAB_0010229c:
        uVar13 = uVar9 & 0x7ffffffffffff;
        uVar17 = uVar15;
        lVar14 = lVar7;
        if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001022a4:
          if (uVar13 == 0) {
            uVar12 = uVar19 | uVar19 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
            uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
            uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
            lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
            iVar5 = -((int)((ulong)lVar7 >> 0x20) + (int)lVar7);
            uVar6 = iVar5 + 0x74;
            if ((int)uVar6 < 0x40) goto LAB_001022b0;
            uVar18 = uVar19 << ((ulong)(iVar5 + 0x34) & 0x3f);
            uVar12 = 0;
          }
          else {
            uVar12 = uVar13 | uVar13 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
            uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
            uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
            lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
            uVar6 = 0x34 - ((int)((ulong)lVar7 >> 0x20) + (int)lVar7);
LAB_001022b0:
            uVar12 = uVar19 << ((ulong)uVar6 & 0x3f);
            uVar18 = uVar19 >> ((ulong)-uVar6 & 0x3f) | uVar13 << ((ulong)uVar6 & 0x3f);
          }
          lVar7 = lVar14;
          if ((long)uVar17 <= (long)(int)uVar6) {
            iVar5 = uVar6 - (int)uVar17;
            uVar6 = iVar5 + 1;
            if ((int)uVar6 < 0x40) {
              uVar9 = uVar18 >> ((ulong)uVar6 & 0x3f);
              uVar19 = uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar12 >> ((ulong)uVar6 & 0x3f) |
                       (ulong)(uVar12 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
              goto LAB_00102308;
            }
            uVar19 = uVar12 | uVar18 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 == 0x40) {
              uVar19 = uVar12;
            }
            uVar9 = 0;
            uVar19 = (ulong)(uVar19 != 0) | uVar18 >> ((ulong)(iVar5 - 0x3f) & 0x3f);
            uVar18 = uVar19;
            goto joined_r0x0010245c;
          }
          uVar15 = uVar17 - (long)(int)uVar6;
          uVar19 = uVar12;
          uVar9 = uVar18 & 0xfff7ffffffffffff;
        }
      }
LAB_0010244c:
      uVar12 = uVar19 & 7;
      bVar3 = false;
      uVar11 = uVar15;
      lVar14 = lVar7;
      uVar18 = uVar19 | uVar9;
      if (uVar15 != 0) {
LAB_0010231c:
        if (uVar12 == 0) {
          uVar18 = uVar9 & 0x8000000000000;
          uVar8 = 0;
          if (bVar3) goto LAB_00102a40;
        }
        else {
          uVar12 = uVar10 & 0xc00000;
          if (uVar12 == 0x400000) {
            uVar8 = 0x10;
joined_r0x001029f4:
            if (lVar14 == 0) {
LAB_00102644:
              bVar4 = 0xfffffffffffffff7 < uVar19;
              uVar19 = uVar19 + 8;
              if (bVar4) {
                uVar9 = uVar9 + 1;
              }
            }
          }
          else if (uVar12 == 0x800000) {
            uVar8 = 0x10;
            if (lVar14 != 0) goto LAB_00102644;
          }
          else {
            if (uVar12 != 0) {
              uVar18 = uVar9 & 0x8000000000000;
              uVar8 = 0x10;
              if (bVar3) {
                uVar8 = 0x18;
              }
              goto LAB_00102348;
            }
            uVar8 = 0x10;
            if (((uVar19 & 0xf) != 4) &&
               (bVar4 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar4)) {
              uVar9 = uVar9 + 1;
            }
          }
          uVar18 = uVar9 & 0x8000000000000;
          if (bVar3) {
            uVar8 = (ulong)((uint)uVar8 | 8);
          }
        }
        goto LAB_00102348;
      }
joined_r0x0010245c:
      if (uVar18 != 0) {
        uVar12 = uVar19 & 7;
        bVar3 = true;
        uVar11 = 0;
        lVar14 = lVar7;
        goto LAB_0010231c;
      }
      param_1 = 0;
      uVar8 = 0;
    }
  }
LAB_00102368:
  if ((int)uVar8 == 0) {
    return param_1;
  }
LAB_00102570:
  __sfp_handle_exceptions(uVar8);
  return param_1;
}

// Function: __addtf3 @ 0x1021d0
ulong __addtf3(ulong param_1,ulong param_2)
{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong in_register_00005008;
  ulong in_register_00005028;
  uVar10 = fpcr;
  uVar1 = (in_register_00005008 & 0xffffffffffff) << 3;
  lVar14 = -((long)in_register_00005008 >> 0x3f);
  lVar7 = -((long)in_register_00005028 >> 0x3f);
  uVar13 = in_register_00005028 << 3;
  uVar2 = uVar13 & 0x7fffffffffff8;
  uVar21 = uVar1 | param_1 >> 0x3d;
  uVar17 = in_register_00005008 >> 0x30 & 0x7fff;
  uVar15 = in_register_00005028 >> 0x30 & 0x7fff;
  uVar12 = uVar2 | param_2 >> 0x3d;
  uVar18 = param_1 * 8;
  uVar20 = param_2 * 8;
  uVar19 = uVar18;
  uVar9 = uVar21;
  if ((long)in_register_00005028 >> 0x3f == (long)in_register_00005008 >> 0x3f) {
    uVar6 = (int)uVar17 - (int)uVar15;
    uVar8 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      if (uVar6 == 0) {
        uVar11 = uVar17 + 1;
        if ((uVar11 & 0x7ffe) == 0) {
          uVar11 = uVar21 | uVar18;
          if (uVar17 != 0) {
            uVar6 = 0;
            if (uVar17 == 0x7fff) {
              if (uVar11 == 0) {
                if (uVar15 != 0x7fff) goto LAB_00102ac0;
                if ((uVar12 | uVar20) == 0) {
                  return 0;
                }
              }
              else {
                uVar8 = uVar1 >> 0x32 ^ 1;
                uVar6 = (uint)uVar8;
                if (uVar15 != 0x7fff) goto LAB_00102c68;
                if ((uVar12 | uVar20) == 0) goto LAB_00102d00;
              }
LAB_00102d2c:
              if ((uVar13 & 0x4000000000000) == 0) {
                uVar6 = 1;
              }
              uVar8 = (ulong)uVar6;
              if (uVar11 != 0) {
LAB_00102c70:
                uVar19 = in_register_00005008 & 0xffffffffffff;
                if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
                  uVar19 = uVar2 >> 3;
                  param_1 = param_2;
                }
                goto LAB_001026b4;
              }
LAB_00102ac0:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            else {
              if (uVar15 == 0x7fff) {
                if ((uVar12 | uVar20) != 0) goto LAB_00102d2c;
                if (uVar11 == 0) {
                  return 0;
                }
              }
              else {
                if (uVar11 == 0) goto LAB_00102ac0;
LAB_00102c68:
                if ((uVar12 | uVar20) != 0) goto LAB_00102c70;
              }
LAB_00102d00:
              uVar19 = in_register_00005008 & 0xffffffffffff;
            }
            goto LAB_001026b4;
          }
          if (uVar11 == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if ((uVar12 | uVar20) == 0) {
              param_1 = 0;
              goto LAB_00102368;
            }
            goto LAB_00102a38;
          }
          if ((uVar12 | uVar20) == 0) goto LAB_00102a38;
          uVar19 = uVar18 + uVar20;
          uVar9 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          if ((uVar9 >> 0x33 & 1) != 0) {
            uVar9 = uVar9 & 0xfff7ffffffffffff;
            uVar12 = 0;
            bVar3 = false;
            uVar11 = 1;
            goto LAB_0010231c;
          }
LAB_00102308:
          lVar7 = lVar14;
          uVar18 = uVar19 | uVar9;
          goto joined_r0x0010245c;
        }
        if (uVar11 != 0x7fff) {
          uVar19 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          bVar3 = false;
          uVar12 = uVar18 + uVar20 >> 1 & 7;
          uVar9 = uVar19 >> 1;
          uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
          goto LAB_0010231c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) goto LAB_00102a64;
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102d10;
        if (uVar19 != 0x800000) goto LAB_001029d4;
        if (lVar14 == 0) goto LAB_00102cac;
LAB_00102b78:
        uVar8 = 0x14;
      }
      else {
        uVar17 = uVar15;
        if (uVar17 == 0) {
          if ((uVar21 | uVar18) == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            lVar7 = lVar14;
            if (uVar15 == 0x7fff) {
              if ((uVar12 | uVar20) != 0) {
                uVar8 = uVar2 >> 0x32 ^ 1;
                goto LAB_001024f0;
              }
              goto LAB_001027a4;
            }
            goto LAB_0010244c;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar18 = uVar18 + uVar20;
            uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
            goto LAB_00102608;
          }
        }
        else {
          uVar6 = -uVar6;
          uVar21 = uVar21 | 0x8000000000000;
        }
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            return 0;
          }
          uVar8 = uVar2 >> 0x32 ^ 1;
          uVar19 = uVar2 >> 3;
          param_1 = param_2;
          goto LAB_001026b4;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar19 = uVar21 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar18 >> ((ulong)uVar6 & 0x3f) |
                     (ulong)(uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
            uVar12 = uVar12 + (uVar21 >> ((ulong)uVar6 & 0x3f));
          }
          else {
            uVar19 = uVar18 | uVar21 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 - 0x40 == 0) {
              uVar19 = uVar18;
            }
            uVar19 = (ulong)(uVar19 != 0) | uVar21 >> ((ulong)(uVar6 - 0x40) & 0x3f);
          }
        }
        else {
          uVar19 = (ulong)((uVar21 | uVar18) != 0);
        }
        uVar18 = uVar19 + uVar20;
        if (CARRY8(uVar19,uVar20)) {
          uVar12 = uVar12 + 1;
        }
LAB_00102608:
        uVar15 = uVar17;
        uVar19 = uVar18;
        uVar9 = uVar12;
        lVar7 = lVar14;
        if ((uVar12 >> 0x33 & 1) == 0) goto LAB_0010244c;
        uVar11 = uVar17 + 1;
        if (uVar11 != 0x7fff) {
          bVar3 = false;
          uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
          uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
          uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
          goto LAB_0010231c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) {
LAB_00102a64:
          uVar8 = 0x14;
          goto LAB_0010255c;
        }
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102d10:
          uVar8 = 0x14;
          goto LAB_0010255c;
        }
        if (uVar19 == 0x800000) {
          if (lVar14 != 0) goto LAB_00102b78;
LAB_00102cac:
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto LAB_0010234c;
        }
LAB_001029d4:
        uVar6 = 0x14;
        if ((uVar10 & 0xc00000) == 0x400000) {
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          bVar3 = false;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto joined_r0x001029f4;
        }
LAB_00102518:
        uVar10 = uVar10 & 0xc00000;
        if (uVar10 != 0) {
          if (uVar10 == 0x400000) {
            if (lVar14 != 0) goto LAB_00102534;
          }
          else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00102534:
            param_1 = 0xffffffffffffffff;
            uVar8 = (ulong)(uVar6 | 0x14);
            goto LAB_00102368;
          }
        }
        uVar8 = (ulong)(uVar6 | 0x14);
      }
LAB_0010255c:
      param_1 = 0;
      goto LAB_00102570;
    }
    if (uVar15 == 0) {
      if ((uVar12 | uVar20) != 0) {
        uVar8 = (ulong)(uVar6 - 1);
        if (uVar6 - 1 == 0) {
          uVar18 = uVar18 + uVar20;
          uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          goto LAB_00102608;
        }
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) == 0) {
            return 0;
          }
          goto LAB_001024e4;
        }
        goto LAB_001023e0;
      }
      uVar15 = uVar17;
      lVar7 = lVar14;
      if (uVar17 != 0x7fff) goto LAB_0010244c;
      if ((uVar21 | uVar18) == 0) goto LAB_001027a4;
      uVar8 = (ulong)((uint)(uVar1 >> 0x32) ^ 1);
      uVar20 = uVar18;
      uVar12 = uVar21;
LAB_001024f0:
      uVar11 = 0x7fff;
      goto LAB_001024f8;
    }
    uVar12 = uVar12 | 0x8000000000000;
    if (uVar17 != 0x7fff) {
LAB_001023e0:
      iVar5 = (int)uVar8;
      if (iVar5 < 0x75) {
        if (iVar5 < 0x40) {
          uVar19 = uVar12 << ((ulong)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
                   (ulong)(uVar20 << ((ulong)(0x40 - iVar5) & 0x3f) != 0);
          uVar12 = uVar21 + (uVar12 >> (uVar8 & 0x3f));
        }
        else {
          uVar19 = uVar20 | uVar12 << ((ulong)(0x80 - iVar5) & 0x3f);
          if (iVar5 - 0x40U == 0) {
            uVar19 = uVar20;
          }
          uVar19 = (ulong)(uVar19 != 0) | uVar12 >> ((ulong)(iVar5 - 0x40U) & 0x3f);
          uVar12 = uVar21;
        }
      }
      else {
        uVar19 = (ulong)((uVar12 | uVar20) != 0);
        uVar12 = uVar21;
      }
      uVar18 = uVar19 + uVar18;
      if (CARRY8(uVar19,uVar18)) {
        uVar12 = uVar12 + 1;
      }
      goto LAB_00102608;
    }
LAB_00102694:
    if ((uVar21 | uVar18) == 0) {
      return 0;
    }
    uVar8 = uVar1 >> 0x32 ^ 1;
    uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_001026b4:
    if ((uVar19 | param_1) == 0) {
      param_1 = 0;
    }
  }
  else {
    uVar6 = (int)uVar17 - (int)uVar15;
    uVar8 = (ulong)uVar6;
    if ((int)uVar6 < 1) {
      if (uVar6 != 0) {
        if (uVar17 == 0) {
          if ((uVar21 | uVar18) == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if (uVar15 == 0x7fff) {
              if ((uVar12 | uVar20) != 0) {
                uVar8 = uVar2 >> 0x32 ^ 1;
                goto LAB_001024f0;
              }
              goto LAB_001027a4;
            }
            goto LAB_0010244c;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar19 = uVar20 + param_1 * -8;
            uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
            goto LAB_0010229c;
          }
        }
        else {
          uVar6 = -uVar6;
          uVar21 = uVar21 | 0x8000000000000;
        }
        if (uVar15 == 0x7fff) {
          if ((uVar12 | uVar20) == 0) {
            return 0;
          }
          uVar8 = uVar2 >> 0x32 ^ 1;
          uVar19 = uVar2 >> 3;
          param_1 = param_2;
          goto LAB_001026b4;
        }
        if ((int)uVar6 < 0x75) {
          if ((int)uVar6 < 0x40) {
            uVar18 = uVar21 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar18 >> ((ulong)uVar6 & 0x3f) |
                     (ulong)(uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
            uVar12 = uVar12 - (uVar21 >> ((ulong)uVar6 & 0x3f));
          }
          else {
            uVar19 = uVar18 | uVar21 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 - 0x40 == 0) {
              uVar19 = uVar18;
            }
            uVar18 = (ulong)(uVar19 != 0) | uVar21 >> ((ulong)(uVar6 - 0x40) & 0x3f);
          }
        }
        else {
          uVar18 = (ulong)((uVar21 | uVar18) != 0);
        }
        uVar19 = uVar20 - uVar18;
        uVar9 = uVar12 - (uVar20 < uVar18);
        goto LAB_0010229c;
      }
      if ((uVar17 + 1 & 0x7ffe) != 0) {
        uVar19 = uVar18 + param_2 * -8;
        uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar13 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar13) == 0) {
            param_1 = 0;
            goto LAB_00102368;
          }
        }
        else {
          uVar19 = uVar20 + param_1 * -8;
          uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
          lVar14 = lVar7;
        }
        goto LAB_001022a4;
      }
      uVar16 = uVar21 | uVar18;
      uVar11 = uVar12 | uVar20;
      if (uVar17 != 0) {
        if (uVar17 == 0x7fff) {
          if (uVar16 == 0) {
            if (uVar15 != 0x7fff) goto LAB_00102978;
          }
          else {
            uVar8 = uVar1 >> 0x32 ^ 1;
            if (uVar15 != 0x7fff) goto LAB_00102948;
          }
LAB_00102bc0:
          if (uVar11 != 0) {
            uVar6 = (uint)uVar8;
            if ((uVar13 & 0x4000000000000) == 0) {
              uVar6 = 1;
            }
            uVar8 = (ulong)uVar6;
            if (uVar16 == 0) {
LAB_00102c3c:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
              goto LAB_001026b4;
            }
LAB_00102bd8:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            goto LAB_001026b4;
          }
          if (uVar16 != 0) goto LAB_00102948;
        }
        else {
          if (uVar15 == 0x7fff) goto LAB_00102bc0;
          if (uVar16 != 0) {
LAB_00102948:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if (uVar11 == 0) goto LAB_001026b4;
            goto LAB_00102bd8;
          }
LAB_00102978:
          if (uVar11 != 0) goto LAB_00102c3c;
        }
        param_1 = 0xffffffffffffffff;
        uVar8 = 1;
        goto LAB_00102368;
      }
      if (uVar16 != 0) {
        if (uVar11 == 0) goto LAB_00102a38;
        uVar19 = uVar18 + param_2 * -8;
        uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar9 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar9) != 0) {
            uVar12 = 0;
            bVar3 = true;
            uVar11 = uVar17;
            goto LAB_0010231c;
          }
          goto LAB_00102b10;
        }
        uVar19 = uVar20 + param_1 * -8;
        uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
        uVar18 = uVar19 | uVar9;
        goto joined_r0x0010245c;
      }
      uVar19 = uVar20;
      uVar9 = uVar12;
      lVar14 = lVar7;
      if (uVar11 == 0) {
LAB_00102b10:
        param_1 = 0;
        goto LAB_00102368;
      }
LAB_00102a38:
      uVar18 = 0;
      uVar11 = 0;
LAB_00102a40:
      uVar8 = 0;
      if (((uint)uVar10 >> 0xb & 1) != 0) {
        uVar8 = 8;
      }
LAB_00102348:
      uVar20 = uVar19;
      uVar12 = uVar9;
      if (uVar18 == 0) {
LAB_001024f8:
        param_1 = uVar20 >> 3 | uVar12 << 0x3d;
        uVar19 = uVar12 >> 3;
        if (uVar11 == 0x7fff) goto LAB_001026b4;
      }
      else {
LAB_0010234c:
        uVar6 = (uint)uVar8;
        if (uVar11 == 0x7ffe) goto LAB_00102518;
        param_1 = uVar19 >> 3 | uVar9 << 0x3d;
      }
    }
    else {
      if (uVar15 == 0) {
        if ((uVar12 | uVar20) != 0) {
          uVar8 = (ulong)(uVar6 - 1);
          if (uVar6 - 1 == 0) {
            uVar19 = uVar18 + param_2 * -8;
            uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
            uVar15 = uVar17;
            lVar7 = lVar14;
            goto LAB_0010229c;
          }
          goto LAB_00102248;
        }
        uVar15 = uVar17;
        lVar7 = lVar14;
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) != 0) {
LAB_001024e4:
            uVar8 = uVar1 >> 0x32 ^ 1;
            uVar20 = uVar18;
            uVar12 = uVar21;
            goto LAB_001024f0;
          }
LAB_001027a4:
          uVar8 = 0;
          uVar19 = 0;
          param_1 = 0;
          goto LAB_001026b4;
        }
      }
      else {
        uVar12 = uVar12 | 0x8000000000000;
LAB_00102248:
        if (uVar17 == 0x7fff) goto LAB_00102694;
        iVar5 = (int)uVar8;
        if (iVar5 < 0x75) {
          if (iVar5 < 0x40) {
            uVar9 = uVar12 << ((ulong)(0x40 - iVar5) & 0x3f) | uVar20 >> (uVar8 & 0x3f) |
                    (ulong)(uVar20 << ((ulong)(0x40 - iVar5) & 0x3f) != 0);
            uVar21 = uVar21 - (uVar12 >> (uVar8 & 0x3f));
          }
          else {
            uVar19 = uVar20 | uVar12 << ((ulong)(0x80 - iVar5) & 0x3f);
            if (iVar5 - 0x40U == 0) {
              uVar19 = uVar20;
            }
            uVar9 = (ulong)(uVar19 != 0) | uVar12 >> ((ulong)(iVar5 - 0x40U) & 0x3f);
          }
        }
        else {
          uVar9 = (ulong)((uVar12 | uVar20) != 0);
        }
        uVar19 = uVar18 - uVar9;
        uVar9 = uVar21 - (uVar18 < uVar9);
        uVar15 = uVar17;
        lVar7 = lVar14;
LAB_0010229c:
        uVar13 = uVar9 & 0x7ffffffffffff;
        uVar17 = uVar15;
        lVar14 = lVar7;
        if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001022a4:
          if (uVar13 == 0) {
            uVar12 = uVar19 | uVar19 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
            uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
            uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
            lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
            iVar5 = -((int)((ulong)lVar7 >> 0x20) + (int)lVar7);
            uVar6 = iVar5 + 0x74;
            if ((int)uVar6 < 0x40) goto LAB_001022b0;
            uVar18 = uVar19 << ((ulong)(iVar5 + 0x34) & 0x3f);
            uVar12 = 0;
          }
          else {
            uVar12 = uVar13 | uVar13 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            uVar12 = uVar12 | uVar12 >> 0x20;
            uVar12 = ((uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar12 & 0x5555555555555555);
            uVar12 = ((uVar12 & 0xcccccccccccccccc) >> 2) + (uVar12 & 0x3333333333333333);
            uVar12 = ((uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar12 & 0xf0f0f0f0f0f0f0f);
            uVar12 = ((uVar12 & 0xff00ff00ff00ff00) >> 8) + (uVar12 & 0xff00ff00ff00ff);
            lVar7 = ((uVar12 & 0xffff0000ffff0000) >> 0x10) + (uVar12 & 0xffff0000ffff);
            uVar6 = 0x34 - ((int)((ulong)lVar7 >> 0x20) + (int)lVar7);
LAB_001022b0:
            uVar12 = uVar19 << ((ulong)uVar6 & 0x3f);
            uVar18 = uVar19 >> ((ulong)-uVar6 & 0x3f) | uVar13 << ((ulong)uVar6 & 0x3f);
          }
          lVar7 = lVar14;
          if ((long)uVar17 <= (long)(int)uVar6) {
            iVar5 = uVar6 - (int)uVar17;
            uVar6 = iVar5 + 1;
            if ((int)uVar6 < 0x40) {
              uVar9 = uVar18 >> ((ulong)uVar6 & 0x3f);
              uVar19 = uVar18 << ((ulong)(0x40 - uVar6) & 0x3f) | uVar12 >> ((ulong)uVar6 & 0x3f) |
                       (ulong)(uVar12 << ((ulong)(0x40 - uVar6) & 0x3f) != 0);
              goto LAB_00102308;
            }
            uVar19 = uVar12 | uVar18 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 == 0x40) {
              uVar19 = uVar12;
            }
            uVar9 = 0;
            uVar19 = (ulong)(uVar19 != 0) | uVar18 >> ((ulong)(iVar5 - 0x3f) & 0x3f);
            uVar18 = uVar19;
            goto joined_r0x0010245c;
          }
          uVar15 = uVar17 - (long)(int)uVar6;
          uVar19 = uVar12;
          uVar9 = uVar18 & 0xfff7ffffffffffff;
        }
      }
LAB_0010244c:
      uVar12 = uVar19 & 7;
      bVar3 = false;
      uVar11 = uVar15;
      lVar14 = lVar7;
      uVar18 = uVar19 | uVar9;
      if (uVar15 != 0) {
LAB_0010231c:
        if (uVar12 == 0) {
          uVar18 = uVar9 & 0x8000000000000;
          uVar8 = 0;
          if (bVar3) goto LAB_00102a40;
        }
        else {
          uVar12 = uVar10 & 0xc00000;
          if (uVar12 == 0x400000) {
            uVar8 = 0x10;
joined_r0x001029f4:
            if (lVar14 == 0) {
LAB_00102644:
              bVar4 = 0xfffffffffffffff7 < uVar19;
              uVar19 = uVar19 + 8;
              if (bVar4) {
                uVar9 = uVar9 + 1;
              }
            }
          }
          else if (uVar12 == 0x800000) {
            uVar8 = 0x10;
            if (lVar14 != 0) goto LAB_00102644;
          }
          else {
            if (uVar12 != 0) {
              uVar18 = uVar9 & 0x8000000000000;
              uVar8 = 0x10;
              if (bVar3) {
                uVar8 = 0x18;
              }
              goto LAB_00102348;
            }
            uVar8 = 0x10;
            if (((uVar19 & 0xf) != 4) &&
               (bVar4 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar4)) {
              uVar9 = uVar9 + 1;
            }
          }
          uVar18 = uVar9 & 0x8000000000000;
          if (bVar3) {
            uVar8 = (ulong)((uint)uVar8 | 8);
          }
        }
        goto LAB_00102348;
      }
joined_r0x0010245c:
      if (uVar18 != 0) {
        uVar12 = uVar19 & 7;
        bVar3 = true;
        uVar11 = 0;
        lVar14 = lVar7;
        goto LAB_0010231c;
      }
      param_1 = 0;
      uVar8 = 0;
    }
  }
LAB_00102368:
  if ((int)uVar8 == 0) {
    return param_1;
  }
LAB_00102570:
  __sfp_handle_exceptions(uVar8);
  return param_1;
}

// Function: __multf3 @ 0x102d70
ulong __multf3(ulong param_1,ulong param_2)
{
  ulong uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong in_register_00005008;
  ulong in_register_00005028;
  uVar17 = fpcr;
  uVar19 = in_register_00005008 & 0xffffffffffff;
  uVar11 = in_register_00005008 >> 0x30 & 0x7fff;
  iVar10 = (int)uVar11;
  if (iVar10 == 0) {
    if ((param_1 | uVar19) == 0) {
      uVar19 = 0;
      uVar6 = 4;
      lVar14 = 0;
      lVar22 = 1;
      uVar5 = 0;
      uVar11 = 0;
    }
    else {
      if (uVar19 == 0) {
        uVar11 = param_1 | param_1 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10;
        uVar11 = uVar11 | uVar11 >> 0x20;
        uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
        uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
        uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
        uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
        lVar14 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
        lVar22 = lVar14 + 0x71;
        lVar14 = lVar14 + 0x80;
        if (lVar22 < 0x3d) goto LAB_001031c8;
        uVar11 = 0;
        uVar19 = param_1 << ((ulong)((int)lVar22 - 0x3d) & 0x3f);
      }
      else {
        uVar11 = uVar19 | uVar19 >> 1;
        uVar11 = uVar11 | uVar11 >> 2;
        uVar11 = uVar11 | uVar11 >> 4;
        uVar11 = uVar11 | uVar11 >> 8;
        uVar11 = uVar11 | uVar11 >> 0x10 | uVar11 >> 0x20;
        uVar11 = ((uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar11 & 0x5555555555555555);
        uVar11 = ((uVar11 & 0xcccccccccccccccc) >> 2) + (uVar11 & 0x3333333333333333);
        uVar11 = ((uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar11 & 0xf0f0f0f0f0f0f0f);
        uVar11 = ((uVar11 & 0xff00ff00ff00ff00) >> 8) + (uVar11 & 0xff00ff00ff00ff);
        uVar11 = ((uVar11 & 0xffff0000ffff0000) >> 0x10) + (uVar11 & 0xffff0000ffff);
        lVar22 = -((uVar11 >> 0x20) + (uVar11 & 0xffffffff));
        lVar14 = lVar22 + 0x40;
        lVar22 = lVar22 + 0x31;
LAB_001031c8:
        uVar11 = (ulong)((int)lVar22 + 3);
        uVar19 = param_1 >> ((ulong)(0x3d - (int)lVar22) & 0x3f) | uVar19 << (uVar11 & 0x3f);
        uVar11 = param_1 << (uVar11 & 0x3f);
      }
      uVar6 = 0;
      lVar14 = -0x3fef - lVar14;
      lVar22 = 0;
      uVar5 = 0;
    }
  }
  else if (iVar10 == 0x7fff) {
    if ((param_1 | uVar19) == 0) {
      uVar19 = 0;
      uVar6 = 8;
      lVar14 = 0x7fff;
      lVar22 = 2;
      uVar5 = 0;
      uVar11 = 0;
    }
    else {
      uVar5 = uVar19 >> 0x2f ^ 1;
      uVar6 = 0xc;
      lVar14 = 0x7fff;
      lVar22 = 3;
      uVar11 = param_1;
    }
  }
  else {
    uVar19 = param_1 >> 0x3d | uVar19 << 3 | 0x8000000000000;
    lVar14 = uVar11 - 0x3fff;
    lVar22 = 0;
    uVar6 = 0;
    uVar5 = 0;
    uVar11 = param_1 << 3;
  }
  uVar15 = in_register_00005028 >> 0x3f;
  uVar13 = in_register_00005028 & 0xffffffffffff;
  uVar21 = in_register_00005028 >> 0x30 & 0x7fff;
  iVar10 = (int)uVar21;
  uVar4 = (uint)(in_register_00005008 >> 0x20);
  uVar2 = (uint)(in_register_00005028 >> 0x20);
  if (iVar10 == 0) {
    if ((param_2 | uVar13) == 0) {
      uVar6 = uVar6 | 1;
      lVar8 = lVar14 + 1;
      uVar21 = 0;
      param_2 = 0;
      lVar12 = 1;
      lVar20 = lVar14;
    }
    else {
      if (uVar13 == 0) {
        uVar21 = param_2 | param_2 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10;
        uVar21 = uVar21 | uVar21 >> 0x20;
        uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
        uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
        uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
        uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
        uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
        lVar12 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
        lVar8 = lVar12 + 0x71;
        lVar12 = lVar12 + 0x80;
        if (lVar8 < 0x3d) goto LAB_0010316c;
        uVar21 = param_2 << ((ulong)((int)lVar8 - 0x3d) & 0x3f);
        param_2 = 0;
      }
      else {
        uVar21 = uVar13 | uVar13 >> 1;
        uVar21 = uVar21 | uVar21 >> 2;
        uVar21 = uVar21 | uVar21 >> 4;
        uVar21 = uVar21 | uVar21 >> 8;
        uVar21 = uVar21 | uVar21 >> 0x10 | uVar21 >> 0x20;
        uVar21 = ((uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar21 & 0x5555555555555555);
        uVar21 = ((uVar21 & 0xcccccccccccccccc) >> 2) + (uVar21 & 0x3333333333333333);
        uVar21 = ((uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar21 & 0xf0f0f0f0f0f0f0f);
        uVar21 = ((uVar21 & 0xff00ff00ff00ff00) >> 8) + (uVar21 & 0xff00ff00ff00ff);
        uVar21 = ((uVar21 & 0xffff0000ffff0000) >> 0x10) + (uVar21 & 0xffff0000ffff);
        lVar8 = -((uVar21 >> 0x20) + (uVar21 & 0xffffffff));
        lVar12 = lVar8 + 0x40;
        lVar8 = lVar8 + 0x31;
LAB_0010316c:
        uVar7 = (ulong)((int)lVar8 + 3);
        uVar21 = param_2 >> ((ulong)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
        param_2 = param_2 << (uVar7 & 0x3f);
      }
      lVar20 = (lVar14 - lVar12) + -0x3fef;
      lVar8 = (lVar14 - lVar12) + -0x3fee;
      lVar12 = 0;
    }
    uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
    if (uVar6 < 0xb) goto LAB_00102e7c;
LAB_00102e30:
    if (uVar6 != 0xb) {
LAB_00102e38:
      uVar18 = uVar11;
      uVar21 = uVar19;
      uVar23 = in_register_00005008 >> 0x3f;
      lVar9 = lVar22;
      goto LAB_00102f3c;
    }
LAB_00102f58:
    uVar11 = param_2;
    uVar7 = uVar15;
    if (lVar12 != 3) {
LAB_00102e98:
      lVar20 = lVar8;
      if (lVar12 == 1) {
        uVar11 = 0;
      }
      else {
LAB_001030fc:
        lVar14 = lVar20 + 0x3fff;
        uVar4 = (uint)uVar5;
        if (lVar14 < 1) {
          uVar19 = 1 - lVar14;
          if (0x74 < (long)uVar19) {
            uVar11 = param_2 | uVar21;
            if ((param_2 | uVar21) != 0) {
              uVar4 = uVar4 | 0x10;
              uVar11 = 1 - uVar7;
              if (((uVar17 & 0xc00000) != 0x400000) &&
                 (uVar11 = uVar7, (uVar17 & 0xc00000) != 0x800000)) {
                uVar11 = 0;
              }
            }
            uVar5 = (ulong)(uVar4 | 8);
            goto LAB_00103364;
          }
          iVar10 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(param_2 << ((ulong)(0x40 - iVar10) & 0x3f) != 0);
            uVar6 = uVar21 << ((ulong)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
            uVar21 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar6 | uVar11;
            if ((uVar6 & 7 | uVar11) != 0) goto LAB_001032e4;
            if ((uVar21 >> 0x33 & 1) == 0) goto LAB_0010342c;
          }
          else {
            uVar11 = param_2 | uVar21 << ((ulong)(0x80 - iVar10) & 0x3f);
            if (uVar19 == 0x40) {
              uVar11 = param_2;
            }
            uVar21 = uVar21 >> ((ulong)(iVar10 - 0x40) & 0x3f);
            uVar19 = uVar11 != 0 | uVar21;
            uVar21 = (ulong)(uVar11 != 0) | uVar21 & 7;
            if (uVar21 == 0) {
LAB_0010342c:
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              if (((uint)uVar17 >> 0xb & 1) != 0) {
                uVar5 = (ulong)(uVar4 | 8);
                goto LAB_00103364;
              }
              goto LAB_00102eac;
            }
            uVar21 = 0;
LAB_001032e4:
            uVar17 = uVar17 & 0xc00000;
            if (uVar17 == 0x400000) {
              if (uVar7 == 0) {
LAB_0010348c:
                bVar3 = 0xfffffffffffffff7 < uVar19;
                uVar19 = uVar19 + 8;
                if (bVar3) {
                  uVar21 = uVar21 + 1;
                }
              }
            }
            else if (uVar17 == 0x800000) {
              if (uVar7 != 0) goto LAB_0010348c;
            }
            else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
                    (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
              uVar21 = uVar21 + 1;
            }
            if ((uVar21 >> 0x33 & 1) == 0) {
              uVar5 = (ulong)(uVar4 | 0x18);
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              goto LAB_00103364;
            }
          }
          uVar5 = (ulong)(uVar4 | 0x18);
          uVar11 = 0;
          goto LAB_00103364;
        }
        if ((param_2 & 7) != 0) {
          uVar19 = uVar17 & 0xc00000;
          uVar5 = (ulong)(uVar4 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar7 == 0) {
LAB_0010347c:
              bVar3 = 0xfffffffffffffff7 < param_2;
              param_2 = param_2 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar7 != 0) goto LAB_0010347c;
          }
          else if (((uVar19 == 0) && ((param_2 & 0xf) != 4)) &&
                  (bVar3 = 0xfffffffffffffffb < param_2, param_2 = param_2 + 4, bVar3)) {
            uVar21 = uVar21 + 1;
          }
        }
        if ((uVar21 >> 0x34 & 1) != 0) {
          uVar21 = uVar21 & 0xffefffffffffffff;
          lVar14 = lVar20 + 0x4000;
        }
        if (0x7ffe < lVar14) {
          uVar11 = uVar17 & 0xc00000;
          if (uVar11 == 0x400000) {
            uVar11 = -(ulong)(uVar7 != 0);
          }
          else if (uVar11 == 0x800000) {
            uVar11 = -(ulong)(uVar7 == 0);
          }
          else if (uVar11 != 0) {
            uVar11 = 0xffffffffffffffff;
          }
          uVar5 = (ulong)((uint)uVar5 | 0x14);
          goto LAB_00103364;
        }
        uVar11 = param_2 >> 3 | uVar21 << 0x3d;
      }
    }
  }
  else if (iVar10 == 0x7fff) {
    lVar20 = lVar14 + 0x7fff;
    if ((param_2 | uVar13) == 0) {
      uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
      uVar6 = uVar6 | 2;
      lVar8 = lVar14 + 0x8000;
      param_2 = 0;
      if (uVar6 < 0xb) {
        uVar21 = 0;
        lVar12 = 2;
        goto LAB_00102e7c;
      }
      lVar9 = 2;
      uVar13 = 0;
    }
    else {
      uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
      uVar6 = uVar6 | 3;
      lVar8 = lVar14 + 0x8000;
      uVar4 = (uint)uVar5;
      if ((in_register_00005028 & 0x800000000000) == 0) {
        uVar4 = 1;
      }
      uVar5 = (ulong)uVar4;
      lVar12 = 3;
      if (uVar6 < 0xb) goto LAB_00102ef8;
      lVar9 = 3;
    }
    lVar8 = lVar14 + 0x8000;
    if (uVar6 != 0xf) {
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      if (uVar6 != 0xb) goto LAB_00102e38;
      goto LAB_00102f3c;
    }
    if (((uVar19 >> 0x2f & 1) != 0) && (uVar13 >> 0x2f == 0)) {
      uVar11 = param_2;
    }
  }
  else {
    lVar20 = (uVar21 - 0x3fff) + lVar14;
    uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
    uVar21 = param_2 >> 0x3d | uVar13 << 3 | 0x8000000000000;
    param_2 = param_2 << 3;
    lVar8 = lVar20 + 1;
    lVar12 = 0;
    if (10 < uVar6) goto LAB_00102e30;
LAB_00102e7c:
    uVar13 = uVar21;
    if (uVar6 < 3) {
      if (uVar6 - 1 < 2) {
        if (lVar12 == 2) goto LAB_00102f8c;
        goto LAB_00102e98;
      }
LAB_00102f9c:
      uVar27 = param_2 & 0xffffffff;
      uVar23 = uVar11 >> 0x20;
      uVar21 = uVar13 & 0xffffffff;
      uVar11 = uVar11 & 0xffffffff;
      param_2 = param_2 >> 0x20;
      uVar13 = uVar13 >> 0x20;
      uVar24 = uVar23 * uVar27;
      uVar26 = uVar19 >> 0x20;
      uVar18 = uVar23 * uVar21;
      uVar19 = uVar19 & 0xffffffff;
      uVar6 = uVar24 + param_2 * uVar11 + (uVar27 * uVar11 >> 0x20);
      uVar15 = uVar18 + uVar13 * uVar11 + (uVar11 * uVar21 >> 0x20);
      uVar25 = uVar26 * uVar27;
      uVar28 = uVar26 * uVar21;
      lVar14 = uVar23 * param_2 + 0x100000000;
      if (uVar24 < uVar6 || uVar24 - uVar6 == 0) {
        lVar14 = uVar23 * param_2;
      }
      uVar24 = (uVar11 * uVar21 & 0xffffffff) + (uVar15 << 0x20);
      uVar1 = uVar25 + param_2 * uVar19 + (uVar27 * uVar19 >> 0x20);
      uVar16 = uVar28 + uVar13 * uVar19 + (uVar19 * uVar21 >> 0x20);
      lVar22 = uVar23 * uVar13 + 0x100000000;
      if (uVar18 < uVar15 || uVar18 - uVar15 == 0) {
        lVar22 = uVar23 * uVar13;
      }
      uVar18 = uVar24 + (uVar6 >> 0x20) + lVar14;
      lVar14 = param_2 * uVar26 + 0x100000000;
      if (uVar25 < uVar1 || uVar25 - uVar1 == 0) {
        lVar14 = param_2 * uVar26;
      }
      uVar15 = lVar22 + (uVar15 >> 0x20);
      uVar21 = (uVar19 * uVar21 & 0xffffffff) + (uVar16 << 0x20);
      lVar22 = uVar13 * uVar26 + 0x100000000;
      if (uVar28 < uVar16 || uVar28 - uVar16 == 0) {
        lVar22 = uVar13 * uVar26;
      }
      uVar13 = uVar21 + uVar15;
      uVar25 = (ulong)(uVar18 < uVar24);
      uVar19 = (uVar27 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
      uVar23 = uVar13 + uVar25;
      uVar16 = uVar16 >> 0x20;
      uVar24 = lVar14 + (uVar1 >> 0x20);
      if (CARRY8(uVar21,uVar15) != false || CARRY8(uVar13,uVar25) != false) {
        uVar16 = uVar16 + 1;
      }
      uVar13 = uVar18 + uVar19;
      uVar21 = (ulong)CARRY8(uVar18,uVar19);
      uVar19 = uVar23 + uVar24;
      uVar15 = uVar19 + uVar21;
      if (CARRY8(uVar23,uVar24) != false || CARRY8(uVar19,uVar21) != false) {
        lVar22 = lVar22 + 1;
      }
      uVar19 = (ulong)(((uVar27 * uVar11 & 0xffffffff) + (uVar6 << 0x20) | uVar13 * 0x2000) != 0);
      uVar13 = uVar13 >> 0x33;
      param_2 = uVar19 | uVar13 | uVar15 * 0x2000;
      uVar15 = uVar15 >> 0x33;
      uVar21 = uVar15 | (lVar22 + uVar16) * 0x2000;
      if ((lVar22 + uVar16 >> 0x27 & 1) != 0) {
        param_2 = uVar19 | uVar13 & 1 | param_2 >> 1 | uVar15 << 0x3f;
        uVar21 = uVar21 >> 1;
        lVar20 = lVar8;
      }
      goto LAB_001030fc;
    }
LAB_00102ef8:
    uVar6 = 1L << uVar6;
    uVar18 = uVar11;
    uVar21 = uVar19;
    uVar23 = uVar7;
    lVar9 = lVar22;
    if ((uVar6 & 0x530) == 0) {
      if ((uVar6 & 0x240) != 0) {
        uVar5 = 1;
        uVar11 = 0xffffffffffffffff;
        goto LAB_00102eac;
      }
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      lVar9 = lVar12;
      if ((uVar6 & 0x88) == 0) goto LAB_00102f9c;
    }
LAB_00102f3c:
    lVar12 = lVar9;
    uVar15 = uVar23;
    param_2 = uVar18;
    if (lVar12 != 2) goto LAB_00102f58;
LAB_00102f8c:
    uVar11 = 0;
  }
LAB_00102eac:
  if ((int)uVar5 == 0) {
    return uVar11;
  }
LAB_00103364:
  __sfp_handle_exceptions(uVar5);
  return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x103570
undefined  [16] __sfp_handle_exceptions(ulong param_1,undefined8 param_2)
{
  uint uVar1;
  undefined auVar2 [16];
  uVar1 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    param_2 = fpsr;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}

// Function: _fini @ 0x1035e0
void _fini(void)
{
  return;
}

