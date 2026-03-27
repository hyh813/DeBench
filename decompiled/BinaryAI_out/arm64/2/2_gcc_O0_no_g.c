// Decompiled by BinaryAI
// SHA256: 4350419d4defd678c805ea0b7175da76ba9882436c3dcf61aedd457b3783d613

// Function: _init @ 0x1006b0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1006f0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100700
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100710
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100720
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100730
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100740
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x100750
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100780
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1007b4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x1007d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100800
void register_tm_clones(void)
{
  return;
}

// Function: FUN_0010083c @ 0x10083c
void FUN_0010083c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100840
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: double_value @ 0x100894
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: process_char @ 0x1008ac
byte process_char(byte param_1)
{
  if ((0x40 < param_1) && (param_1 < 0x5b)) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}

// Function: process_short @ 0x1008e8
int process_short(short param_1,short param_2)
{
  return (int)(short)(param_1 + param_2);
}

// Function: process_int @ 0x100910
int process_int(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: process_long @ 0x10092c
long process_long(long param_1)
{
  return param_1 << 1;
}

// Function: process_ll @ 0x100944
long process_ll(long param_1)
{
  return param_1 * param_1;
}

// Function: process_float @ 0x10095c
float process_float(float param_1)
{
  return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x100980
double process_double(double param_1)
{
  return param_1 / 2.0 + 0.1;
}

// Function: process_ld @ 0x1009a8
void process_ld(undefined8 param_1)
{
  undefined8 uVar1;
  uVar1 = __multf3(param_1,param_1);
  __addtf3(uVar1,0);
  return;
}

// Function: process_bool @ 0x1009d8
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

// Function: const_param @ 0x100a18
int const_param(int *param_1)
{
  return *param_1 + 10;
}

// Function: volatile_access @ 0x100a34
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100a68
void test_data_types_l1(void)
{
  short sVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103660);
  uVar2 = process_char(0x41);
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uVar2 & 0xff));
  uVar2 = process_char(0x62);
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uVar2 & 0xff));
  sVar1 = process_short(100,200);
  printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar1);
  uVar4 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n",uVar4 & 0xffffffff);
  uVar5 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n",uVar5);
  uVar5 = process_ll(100);
  iVar3 = printf("DT-L1-05 (process_ll): %lld\n",uVar5);
  fVar6 = (float)process_float(0x40000000,iVar3);
  iVar3 = printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
  process_double(0x4010000000000000,iVar3);
  printf("DT-L1-07 (process_double): %.2f\n");
  process_ld(0);
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  uVar2 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(uVar2 & 0xff));
  uVar2 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(uVar2 & 0xff));
  uVar2 = process_bool(0xfffffffe);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(uVar2 & 0xff));
  local_10 = 5;
  uVar4 = const_param(&local_10);
  printf("DT-L1-10 (const_param): %d\n",uVar4 & 0xffffffff);
  local_c = 10;
  uVar4 = volatile_access(&local_c);
  printf("DT-L1-11 (volatile_access): %d\n",uVar4 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: array_1d_stack @ 0x100c38
int array_1d_stack(long param_1,int param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
  }
  return local_8;
}

// Function: array_string @ 0x100c98
int array_string(long param_1)
{
  int local_4;
  for (local_4 = 0; *(char *)(param_1 + local_4) != '\0'; local_4 = local_4 + 1) {
  }
  return local_4;
}

// Function: array_2d_stack @ 0x100cd8
int array_2d_stack(long param_1)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < 10; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 0x28 + (long)local_4 * 4);
  }
  return local_8;
}

// Function: array_3d @ 0x100d44
int array_3d(long param_1)
{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  local_10 = 0;
  for (local_c = 0; local_c < 5; local_c = local_c + 1) {
    for (local_8 = 0; local_8 < 5; local_8 = local_8 + 1) {
      for (local_4 = 0; local_4 < 5; local_4 = local_4 + 1) {
        local_10 = local_10 +
                   *(int *)(param_1 + (long)local_c * 100 + ((long)local_8 * 5 + (long)local_4) * 4)
        ;
      }
    }
  }
  return local_10;
}

// Function: array_vla @ 0x100e0c
int array_vla(int param_1,long param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_1; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_2 + (long)local_4 * 4);
  }
  return local_8;
}

// Function: array_pointer @ 0x100e6c
int array_pointer(long param_1,int param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 0x28);
  }
  return local_8;
}

// Function: pointer_array @ 0x100edc
int pointer_array(long param_1,int param_2)
{
  int local_c;
  int local_8;
  local_c = 0;
  if (10 < param_2) {
    param_2 = 10;
  }
  for (local_8 = 0; local_8 < param_2; local_8 = local_8 + 1) {
    if (*(long *)(param_1 + (long)local_8 * 8) != 0) {
      local_c = local_c + **(int **)(param_1 + (long)local_8 * 8);
    }
  }
  return local_c;
}

// Function: array_complex_index @ 0x100f74
undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
  }
  return uVar1;
}

// Function: array_oob @ 0x100ffc
int array_oob(long param_1,int param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 <= param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
  }
  return local_8;
}

// Function: test_array_types @ 0x10105c
void test_array_types(void)
{
  ulong uVar1;
  int iVar2;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_548;
  int local_544;
  int local_540;
  int local_53c;
  int local_538;
  int local_534;
  int local_530;
  int local_52c;
  undefined8 local_528;
  undefined4 local_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined4 local_508;
  undefined4 *local_500;
  undefined4 *puStack_4f8;
  undefined4 *local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  int aiStack_4b0 [20];
  int aiStack_460 [50];
  int aiStack_398 [100];
  undefined4 auStack_208 [126];
  undefined4 local_10;
  undefined2 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_001037f0);
  local_518 = 0x200000001;
  uStack_510 = 0x400000003;
  local_508 = 5;
  uVar1 = array_1d_stack(&local_518,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1 & 0xffffffff);
  local_10._0_1_ = 'h';
  local_10._1_1_ = 'e';
  local_10._2_1_ = 'l';
  local_10._3_1_ = 'l';
  local_c._0_1_ = 'o';
  local_c._1_1_ = '\0';
  uVar1 = array_string(&local_10);
  printf("ARR-L1-02 (array_string): %d\n",uVar1 & 0xffffffff);
  for (local_544 = 0; local_544 < 10; local_544 = local_544 + 1) {
    for (local_540 = 0; local_540 < 10; local_540 = local_540 + 1) {
      iVar2 = local_544;
      if (local_544 != local_540) {
        iVar2 = 0;
      }
      aiStack_398[(long)local_544 * 10 + (long)local_540] = iVar2;
    }
  }
  uVar1 = array_2d_stack(aiStack_398);
  printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1 & 0xffffffff);
  for (local_53c = 0; local_53c < 5; local_53c = local_53c + 1) {
    for (local_538 = 0; local_538 < 5; local_538 = local_538 + 1) {
      for (local_534 = 0; local_534 < 5; local_534 = local_534 + 1) {
        auStack_208[(long)local_53c * 0x19 + (long)local_538 * 5 + (long)local_534] = 1;
      }
    }
  }
  uVar1 = array_3d(auStack_208);
  printf("ARR-L1-04 (array_3d): %d\n",uVar1 & 0xffffffff);
  local_528 = 0x140000000a;
  local_520 = 0x1e;
  uVar1 = array_vla(3,&local_528);
  printf("ARR-L2-01 (array_vla): %d\n",uVar1 & 0xffffffff);
  for (local_530 = 0; local_530 < 5; local_530 = local_530 + 1) {
    aiStack_460[(long)local_530 * 10] = local_530 * 10;
  }
  uVar1 = array_pointer(aiStack_460,5);
  printf("ARR-L2-02 (array_pointer): %d\n",uVar1 & 0xffffffff);
  local_550 = 10;
  local_54c = 0x14;
  local_548 = 0x1e;
  uStack_4e8 = 0;
  uStack_4d8 = 0;
  local_4e0 = 0;
  uStack_4c8 = 0;
  uStack_4d0 = 0;
  uStack_4b8 = 0;
  local_4c0 = 0;
  local_500 = &local_550;
  puStack_4f8 = &local_54c;
  local_4f0 = &local_548;
  uVar1 = pointer_array(&local_500,3);
  printf("ARR-L2-03 (pointer_array): %d\n",uVar1 & 0xffffffff);
  for (local_52c = 0; local_52c < 0x14; local_52c = local_52c + 1) {
    aiStack_4b0[local_52c] = local_52c;
  }
  uVar1 = array_complex_index(aiStack_4b0,5,4,2,3);
  printf("ARR-L2-04 (array_complex_index): %d\n",uVar1 & 0xffffffff);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ptr_single @ 0x1013e8
int ptr_single(int *param_1)
{
  return *param_1 + 10;
}

// Function: ptr_double @ 0x101404
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x101424
int ptr_triple(undefined8 *param_1)
{
  return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x101448
int ptr_increment(int *param_1,int param_2)
{
  int *local_18;
  int local_8;
  int local_4;
  local_8 = 0;
  local_18 = param_1;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + *local_18;
    local_18 = local_18 + 1;
  }
  return local_8;
}

// Function: ptr_offset @ 0x1014a8
undefined4 ptr_offset(long param_1,int param_2)
{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1014d0
long ptr_diff(long param_1,long param_2)
{
  return param_1 - param_2 >> 2;
}

// Function: ptr_void @ 0x1014f4
uint ptr_void(uint *param_1,int param_2)
{
  uint uVar1;
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else if (param_2 == 1) {
    uVar1 = (uint)*(byte *)param_1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: ptr_const @ 0x10153c
int ptr_const(int *param_1)
{
  return *param_1 << 1;
}

// Function: ptr_const_ptr @ 0x101558
int ptr_const_ptr(int *param_1)
{
  *param_1 = *param_1 + 5;
  return *param_1;
}

// Function: ptr_func_simple @ 0x101584
void ptr_func_simple(code *param_1,undefined4 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: ptr_func_complex @ 0x1015a8
undefined4 ptr_func_complex(code *param_1,undefined8 param_2)
{
  undefined4 uVar1;
  undefined *local_18;
  undefined8 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_18 = &DAT_00103948;
  local_10 = 0;
  uVar1 = (*param_1)(param_2,&local_18);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: ptr_cast @ 0x101620
undefined4 ptr_cast(undefined4 *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x101650
long opaque_handle_create(int param_1)
{
  return (long)param_1;
}

// Function: opaque_handle_op @ 0x101664
int opaque_handle_op(int param_1)
{
  return param_1 << 1;
}

// Function: complex_callback @ 0x10167c
bool complex_callback(int *param_1,long *param_2)
{
  *param_1 = *param_1 + 10;
  return *param_2 != 0;
}

// Function: test_pointer_types @ 0x1016b8
void test_pointer_types(void)
{
  ulong uVar1;
  undefined local_a1;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 *local_78;
  undefined4 **local_70;
  undefined4 **local_68;
  undefined4 ***local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined4 local_10 [2];
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103950);
  local_a0 = 5;
  uVar1 = ptr_single(&local_a0);
  printf("PTR-L2-01 (ptr_single): %d\n",uVar1 & 0xffffffff);
  local_9c = 10;
  local_80 = &local_9c;
  local_68 = &local_80;
  uVar1 = ptr_double(local_68);
  printf("PTR-L2-02 (ptr_double): %d\n",uVar1 & 0xffffffff);
  local_98 = 5;
  local_78 = &local_98;
  local_70 = &local_78;
  local_60 = &local_70;
  uVar1 = ptr_triple(local_60);
  printf("PTR-L2-03 (ptr_triple): %d\n",uVar1 & 0xffffffff);
  local_50 = 0x200000001;
  uStack_48 = 0x400000003;
  local_40 = 5;
  uVar1 = ptr_increment(&local_50,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",uVar1 & 0xffffffff);
  local_38 = 0x140000000a;
  uStack_30 = 0x280000001e;
  local_28 = 0x32;
  uVar1 = ptr_offset(&local_38,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",uVar1 & 0xffffffff);
  local_20 = 0xa00000000;
  uStack_18 = 0x1e00000014;
  local_10[0] = 0x28;
  uVar1 = ptr_diff(local_10,&local_20);
  printf("PTR-L2-06 (ptr_diff): %d\n",uVar1 & 0xffffffff);
  local_94 = 0x2a;
  local_a1 = 0x41;
  uVar1 = ptr_void(&local_94,0);
  printf("PTR-L2-07 (ptr_void): %d\n",uVar1 & 0xffffffff);
  uVar1 = ptr_void(&local_a1,1);
  printf("PTR-L2-07 (ptr_void): %d\n",uVar1 & 0xffffffff);
  local_90 = 10;
  uVar1 = ptr_const(&local_90);
  printf("PTR-L2-08 (ptr_const): %d\n",uVar1 & 0xffffffff);
  local_8c = 10;
  uVar1 = ptr_const_ptr(&local_8c);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1 & 0xffffffff);
  uVar1 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar1 & 0xffffffff);
  local_88 = 5;
  uVar1 = ptr_func_complex(complex_callback,&local_88);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1 & 0xffffffff);
  local_84 = 0x12345678;
  uVar1 = ptr_cast(&local_84);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1 & 0xffffffff);
  local_58 = opaque_handle_create(10);
  uVar1 = opaque_handle_op(local_58);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: struct_simple @ 0x101968
int struct_simple(int *param_1)
{
  return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101998
int struct_array(long param_1,int param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 0xc) +
                        *(int *)(param_1 + (long)local_4 * 0xc + 4) +
                        *(int *)(param_1 + (long)local_4 * 0xc + 8);
  }
  return local_8;
}

// Function: struct_nested @ 0x101a58
int struct_nested(int *param_1)
{
  return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101a7c
int struct_deep(long param_1)
{
  return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101aa0
int struct_with_ptr(int *param_1)
{
  int iVar1;
  if (*(long *)(param_1 + 2) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 2);
  }
  return iVar1 + *param_1;
}

// Function: struct_bitfields @ 0x101ae0
int struct_bitfields(uint *param_1)
{
  return (*param_1 & 1) + (*param_1 >> 1 & 3) + (*param_1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}

// Function: union_type @ 0x101b40
float union_type(float *param_1,int param_2)
{
  float fVar1;
  if (param_2 == 0) {
    fVar1 = *param_1;
  }
  else if (param_2 == 1) {
    fVar1 = (float)(int)*param_1;
  }
  else {
    fVar1 = (float)(uint)*(byte *)param_1;
  }
  return fVar1;
}

// Function: union_array @ 0x101b98
int union_array(long param_1,int param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + *(int *)(param_1 + (long)local_4 * 4);
  }
  return local_8;
}

// Function: enum_type @ 0x101bf8
int enum_type(int param_1)
{
  return param_1 * 10;
}

// Function: enum_switch @ 0x101c1c
undefined8 enum_switch(uint param_1)
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

// Function: struct_func_ptr @ 0x101c9c
void struct_func_ptr(undefined4 *param_1)
{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}

// Function: linked_list @ 0x101cc4
int linked_list(int *param_1)
{
  int local_c;
  int *local_8;
  local_c = 0;
  for (local_8 = param_1; local_8 != (int *)0x0; local_8 = *(int **)(local_8 + 2)) {
    local_c = local_c + *local_8;
  }
  return local_c;
}

// Function: doubly_linked_list @ 0x101d14
int doubly_linked_list(int *param_1)
{
  int local_c;
  int *local_8;
  local_c = 0;
  for (local_8 = param_1; local_8 != (int *)0x0; local_8 = *(int **)(local_8 + 2)) {
    local_c = local_c + *local_8;
  }
  return local_c;
}

// Function: binary_tree_sum @ 0x101d64
int binary_tree_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
    iVar3 = binary_tree_sum(*(undefined8 *)(param_1 + 4));
    iVar3 = iVar1 + iVar2 + iVar3;
  }
  return iVar3;
}

// Function: binary_tree @ 0x101dbc
void binary_tree(undefined8 param_1)
{
  binary_tree_sum(param_1);
  return;
}

// Function: graph_traverse @ 0x101dd8
int graph_traverse(long param_1)
{
  int local_10;
  int local_c;
  int *local_8;
  local_10 = 0;
  for (local_c = 0; local_c < *(int *)(param_1 + 0x50); local_c = local_c + 1) {
    for (local_8 = *(int **)(param_1 + (long)local_c * 8); local_8 != (int *)0x0;
        local_8 = *(int **)(local_8 + 2)) {
      local_10 = local_10 + *local_8;
    }
  }
  return local_10;
}

// Function: test_composite_types @ 0x101e58
void test_composite_types(void)
{
  ulong uVar1;
  ulong local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_190 [2];
  undefined8 local_188;
  undefined4 local_180 [2];
  undefined4 *local_178;
  undefined4 local_170 [2];
  code *local_168;
  undefined4 local_160 [2];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0 [2];
  undefined4 *local_b8;
  undefined4 local_b0 [2];
  undefined4 *local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90 [2];
  undefined4 *local_88;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 *local_68;
  undefined4 *local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103b58);
  local_1a0 = 0x200000001;
  local_198 = 3;
  uVar1 = struct_simple(&local_1a0);
  printf("CMP-L2-01 (struct_simple): %d\n",uVar1 & 0xffffffff);
  local_d8 = 0x100000001;
  uStack_d0 = 0x200000001;
  local_c8 = 0x200000002;
  uVar1 = struct_array(&local_d8,2);
  printf("CMP-L2-02 (struct_array): %d\n",uVar1 & 0xffffffff);
  local_150 = 0xa00000005;
  uStack_148 = 0x6400000000;
  local_140 = 200;
  uVar1 = struct_nested(&local_150);
  printf("CMP-L2-03 (struct_nested): %d\n",uVar1 & 0xffffffff);
  uStack_118 = 0xa00000003;
  local_120 = 0x200000001;
  uStack_108 = 0;
  uStack_110 = 0xff00000014;
  uStack_f8 = 0x2a000000ff;
  local_100 = 0;
  uVar1 = struct_deep(&local_120);
  printf("CMP-L2-04 (struct_deep): %d\n",uVar1 & 0xffffffff);
  local_190[0] = 0x14;
  local_188 = 0;
  local_180[0] = 10;
  local_178 = local_190;
  uVar1 = struct_with_ptr(local_180);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1 & 0xffffffff);
  local_1a8 = local_1a8 & 0xfff00000ffff0000 | 0x191d;
  uVar1 = struct_bitfields(&local_1a8);
  printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1 & 0xffffffff);
  local_f0[0] = 0x12345678;
  uVar1 = union_type(local_f0,0);
  printf("CMP-L2-07 (union_type): %d\n",uVar1 & 0xffffffff);
  local_e8 = 0x140000000a;
  local_e0 = 0x1e;
  uVar1 = union_array(&local_e8,3);
  printf("CMP-L2-08 (union_array): %d\n",uVar1 & 0xffffffff);
  uVar1 = enum_type(1);
  printf("CMP-L2-09 (enum_type): %d\n",uVar1 & 0xffffffff);
  uVar1 = enum_switch(2);
  printf("CMP-L2-10 (enum_switch): %d\n",uVar1 & 0xffffffff);
  local_170[0] = 10;
  local_168 = process_int;
  uVar1 = struct_func_ptr(local_170);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",uVar1 & 0xffffffff);
  local_c0[0] = 10;
  local_b8 = local_b0;
  local_b0[0] = 0x14;
  local_a8 = local_a0;
  local_a0[0] = 0x1e;
  local_98 = 0;
  uVar1 = linked_list(local_c0);
  printf("CMP-L2-12 (linked_list): %d\n",uVar1 & 0xffffffff);
  local_90[0] = 10;
  local_80 = 0;
  local_78[0] = 0x14;
  local_70 = 0;
  local_68 = local_90;
  local_88 = local_78;
  uVar1 = doubly_linked_list(local_90);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar1 & 0xffffffff);
  local_138[0] = 100;
  local_130 = 0;
  local_128 = 0;
  uVar1 = binary_tree(local_138);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar1 & 0xffffffff);
  local_160[0] = 1;
  local_158 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_18 = 0;
  local_20 = 0;
  local_10 = 2;
  local_60 = local_160;
  uVar1 = graph_traverse(&local_60);
  printf("CMP-L2-15 (graph_traverse): %d\n",uVar1 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: main @ 0x1021f4
undefined8 main(void)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}

// Function: __addtf3 @ 0x102220
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
                if (uVar15 != 0x7fff) goto LAB_00102b10;
                if ((uVar12 | uVar20) == 0) {
                  return 0;
                }
              }
              else {
                uVar8 = uVar1 >> 0x32 ^ 1;
                uVar6 = (uint)uVar8;
                if (uVar15 != 0x7fff) goto LAB_00102cb8;
                if ((uVar12 | uVar20) == 0) goto LAB_00102d50;
              }
LAB_00102d7c:
              if ((uVar13 & 0x4000000000000) == 0) {
                uVar6 = 1;
              }
              uVar8 = (ulong)uVar6;
              if (uVar11 != 0) {
LAB_00102cc0:
                uVar19 = in_register_00005008 & 0xffffffffffff;
                if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
                  uVar19 = uVar2 >> 3;
                  param_1 = param_2;
                }
                goto LAB_00102704;
              }
LAB_00102b10:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            else {
              if (uVar15 == 0x7fff) {
                if ((uVar12 | uVar20) != 0) goto LAB_00102d7c;
                if (uVar11 == 0) {
                  return 0;
                }
              }
              else {
                if (uVar11 == 0) goto LAB_00102b10;
LAB_00102cb8:
                if ((uVar12 | uVar20) != 0) goto LAB_00102cc0;
              }
LAB_00102d50:
              uVar19 = in_register_00005008 & 0xffffffffffff;
            }
            goto LAB_00102704;
          }
          if (uVar11 == 0) {
            uVar19 = uVar20;
            uVar9 = uVar12;
            if ((uVar12 | uVar20) == 0) {
              param_1 = 0;
              goto LAB_001023b8;
            }
            goto LAB_00102a88;
          }
          if ((uVar12 | uVar20) == 0) goto LAB_00102a88;
          uVar19 = uVar18 + uVar20;
          uVar9 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          if ((uVar9 >> 0x33 & 1) != 0) {
            uVar9 = uVar9 & 0xfff7ffffffffffff;
            uVar12 = 0;
            bVar3 = false;
            uVar11 = 1;
            goto LAB_0010236c;
          }
LAB_00102358:
          lVar7 = lVar14;
          uVar18 = uVar19 | uVar9;
          goto joined_r0x001024ac;
        }
        if (uVar11 != 0x7fff) {
          uVar19 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          bVar3 = false;
          uVar12 = uVar18 + uVar20 >> 1 & 7;
          uVar9 = uVar19 >> 1;
          uVar19 = uVar18 + uVar20 >> 1 | uVar19 << 0x3f;
          goto LAB_0010236c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) goto LAB_00102ab4;
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) goto LAB_00102d60;
        if (uVar19 != 0x800000) goto LAB_00102a24;
        if (lVar14 == 0) goto LAB_00102cfc;
LAB_00102bc8:
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
                goto LAB_00102540;
              }
              goto LAB_001027f4;
            }
            goto LAB_0010249c;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar18 = uVar18 + uVar20;
            uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
            goto LAB_00102658;
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
          goto LAB_00102704;
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
LAB_00102658:
        uVar15 = uVar17;
        uVar19 = uVar18;
        uVar9 = uVar12;
        lVar7 = lVar14;
        if ((uVar12 >> 0x33 & 1) == 0) goto LAB_0010249c;
        uVar11 = uVar17 + 1;
        if (uVar11 != 0x7fff) {
          bVar3 = false;
          uVar19 = uVar18 & 1 | uVar18 >> 1 | uVar12 << 0x3f;
          uVar9 = (uVar12 & 0xfff7ffffffffffff) >> 1;
          uVar12 = uVar18 & 1 | uVar18 >> 1 & 7;
          goto LAB_0010236c;
        }
        uVar19 = uVar10 & 0xc00000;
        if (uVar19 == 0) {
LAB_00102ab4:
          uVar8 = 0x14;
          goto LAB_001025ac;
        }
        if (((uint)(uVar19 == 0x400000) & ((uint)lVar14 ^ 1)) != 0) {
LAB_00102d60:
          uVar8 = 0x14;
          goto LAB_001025ac;
        }
        if (uVar19 == 0x800000) {
          if (lVar14 != 0) goto LAB_00102bc8;
LAB_00102cfc:
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto LAB_0010239c;
        }
LAB_00102a24:
        uVar6 = 0x14;
        if ((uVar10 & 0xc00000) == 0x400000) {
          uVar19 = 0xffffffffffffffff;
          uVar11 = 0x7ffe;
          bVar3 = false;
          uVar8 = 0x14;
          uVar9 = uVar19;
          goto joined_r0x00102a44;
        }
LAB_00102568:
        uVar10 = uVar10 & 0xc00000;
        if (uVar10 != 0) {
          if (uVar10 == 0x400000) {
            if (lVar14 != 0) goto LAB_00102584;
          }
          else if (((uint)(uVar10 == 0x800000) & (uint)lVar14) == 0) {
LAB_00102584:
            param_1 = 0xffffffffffffffff;
            uVar8 = (ulong)(uVar6 | 0x14);
            goto LAB_001023b8;
          }
        }
        uVar8 = (ulong)(uVar6 | 0x14);
      }
LAB_001025ac:
      param_1 = 0;
      goto LAB_001025c0;
    }
    if (uVar15 == 0) {
      if ((uVar12 | uVar20) != 0) {
        uVar8 = (ulong)(uVar6 - 1);
        if (uVar6 - 1 == 0) {
          uVar18 = uVar18 + uVar20;
          uVar12 = uVar12 + uVar21 + (ulong)CARRY8(uVar18,uVar20);
          goto LAB_00102658;
        }
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) == 0) {
            return 0;
          }
          goto LAB_00102534;
        }
        goto LAB_00102430;
      }
      uVar15 = uVar17;
      lVar7 = lVar14;
      if (uVar17 != 0x7fff) goto LAB_0010249c;
      if ((uVar21 | uVar18) == 0) goto LAB_001027f4;
      uVar8 = (ulong)((uint)(uVar1 >> 0x32) ^ 1);
      uVar20 = uVar18;
      uVar12 = uVar21;
LAB_00102540:
      uVar11 = 0x7fff;
      goto LAB_00102548;
    }
    uVar12 = uVar12 | 0x8000000000000;
    if (uVar17 != 0x7fff) {
LAB_00102430:
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
      goto LAB_00102658;
    }
LAB_001026e4:
    if ((uVar21 | uVar18) == 0) {
      return 0;
    }
    uVar8 = uVar1 >> 0x32 ^ 1;
    uVar19 = in_register_00005008 & 0xffffffffffff;
LAB_00102704:
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
                goto LAB_00102540;
              }
              goto LAB_001027f4;
            }
            goto LAB_0010249c;
          }
          uVar6 = ~uVar6;
          if (uVar6 == 0) {
            uVar19 = uVar20 + param_1 * -8;
            uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
            goto LAB_001022ec;
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
          goto LAB_00102704;
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
        goto LAB_001022ec;
      }
      if ((uVar17 + 1 & 0x7ffe) != 0) {
        uVar19 = uVar18 + param_2 * -8;
        uVar13 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar13 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar13) == 0) {
            param_1 = 0;
            goto LAB_001023b8;
          }
        }
        else {
          uVar19 = uVar20 + param_1 * -8;
          uVar13 = uVar12 - (uVar21 + (uVar20 < uVar18));
          lVar14 = lVar7;
        }
        goto LAB_001022f4;
      }
      uVar16 = uVar21 | uVar18;
      uVar11 = uVar12 | uVar20;
      if (uVar17 != 0) {
        if (uVar17 == 0x7fff) {
          if (uVar16 == 0) {
            if (uVar15 != 0x7fff) goto LAB_001029c8;
          }
          else {
            uVar8 = uVar1 >> 0x32 ^ 1;
            if (uVar15 != 0x7fff) goto LAB_00102998;
          }
LAB_00102c10:
          if (uVar11 != 0) {
            uVar6 = (uint)uVar8;
            if ((uVar13 & 0x4000000000000) == 0) {
              uVar6 = 1;
            }
            uVar8 = (ulong)uVar6;
            if (uVar16 == 0) {
LAB_00102c8c:
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
              goto LAB_00102704;
            }
LAB_00102c28:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if ((uVar1 >> 0x32 != 0) && (uVar2 >> 0x32 == 0)) {
              uVar19 = uVar2 >> 3;
              param_1 = param_2;
            }
            goto LAB_00102704;
          }
          if (uVar16 != 0) goto LAB_00102998;
        }
        else {
          if (uVar15 == 0x7fff) goto LAB_00102c10;
          if (uVar16 != 0) {
LAB_00102998:
            uVar19 = in_register_00005008 & 0xffffffffffff;
            if (uVar11 == 0) goto LAB_00102704;
            goto LAB_00102c28;
          }
LAB_001029c8:
          if (uVar11 != 0) goto LAB_00102c8c;
        }
        param_1 = 0xffffffffffffffff;
        uVar8 = 1;
        goto LAB_001023b8;
      }
      if (uVar16 != 0) {
        if (uVar11 == 0) goto LAB_00102a88;
        uVar19 = uVar18 + param_2 * -8;
        uVar9 = uVar21 - (uVar12 + (uVar18 < uVar20));
        if ((uVar9 >> 0x33 & 1) == 0) {
          if ((uVar19 | uVar9) != 0) {
            uVar12 = 0;
            bVar3 = true;
            uVar11 = uVar17;
            goto LAB_0010236c;
          }
          goto LAB_00102b60;
        }
        uVar19 = uVar20 + param_1 * -8;
        uVar9 = uVar12 - (uVar21 + (uVar20 < uVar18));
        uVar18 = uVar19 | uVar9;
        goto joined_r0x001024ac;
      }
      uVar19 = uVar20;
      uVar9 = uVar12;
      lVar14 = lVar7;
      if (uVar11 == 0) {
LAB_00102b60:
        param_1 = 0;
        goto LAB_001023b8;
      }
LAB_00102a88:
      uVar18 = 0;
      uVar11 = 0;
LAB_00102a90:
      uVar8 = 0;
      if (((uint)uVar10 >> 0xb & 1) != 0) {
        uVar8 = 8;
      }
LAB_00102398:
      uVar20 = uVar19;
      uVar12 = uVar9;
      if (uVar18 == 0) {
LAB_00102548:
        param_1 = uVar20 >> 3 | uVar12 << 0x3d;
        uVar19 = uVar12 >> 3;
        if (uVar11 == 0x7fff) goto LAB_00102704;
      }
      else {
LAB_0010239c:
        uVar6 = (uint)uVar8;
        if (uVar11 == 0x7ffe) goto LAB_00102568;
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
            goto LAB_001022ec;
          }
          goto LAB_00102298;
        }
        uVar15 = uVar17;
        lVar7 = lVar14;
        if (uVar17 == 0x7fff) {
          if ((uVar21 | uVar18) != 0) {
LAB_00102534:
            uVar8 = uVar1 >> 0x32 ^ 1;
            uVar20 = uVar18;
            uVar12 = uVar21;
            goto LAB_00102540;
          }
LAB_001027f4:
          uVar8 = 0;
          uVar19 = 0;
          param_1 = 0;
          goto LAB_00102704;
        }
      }
      else {
        uVar12 = uVar12 | 0x8000000000000;
LAB_00102298:
        if (uVar17 == 0x7fff) goto LAB_001026e4;
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
LAB_001022ec:
        uVar13 = uVar9 & 0x7ffffffffffff;
        uVar17 = uVar15;
        lVar14 = lVar7;
        if ((uVar9 >> 0x33 & 1) != 0) {
LAB_001022f4:
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
            if ((int)uVar6 < 0x40) goto LAB_00102300;
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
LAB_00102300:
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
              goto LAB_00102358;
            }
            uVar19 = uVar12 | uVar18 << ((ulong)(0x80 - uVar6) & 0x3f);
            if (uVar6 == 0x40) {
              uVar19 = uVar12;
            }
            uVar9 = 0;
            uVar19 = (ulong)(uVar19 != 0) | uVar18 >> ((ulong)(iVar5 - 0x3f) & 0x3f);
            uVar18 = uVar19;
            goto joined_r0x001024ac;
          }
          uVar15 = uVar17 - (long)(int)uVar6;
          uVar19 = uVar12;
          uVar9 = uVar18 & 0xfff7ffffffffffff;
        }
      }
LAB_0010249c:
      uVar12 = uVar19 & 7;
      bVar3 = false;
      uVar11 = uVar15;
      lVar14 = lVar7;
      uVar18 = uVar19 | uVar9;
      if (uVar15 != 0) {
LAB_0010236c:
        if (uVar12 == 0) {
          uVar18 = uVar9 & 0x8000000000000;
          uVar8 = 0;
          if (bVar3) goto LAB_00102a90;
        }
        else {
          uVar12 = uVar10 & 0xc00000;
          if (uVar12 == 0x400000) {
            uVar8 = 0x10;
joined_r0x00102a44:
            if (lVar14 == 0) {
LAB_00102694:
              bVar4 = 0xfffffffffffffff7 < uVar19;
              uVar19 = uVar19 + 8;
              if (bVar4) {
                uVar9 = uVar9 + 1;
              }
            }
          }
          else if (uVar12 == 0x800000) {
            uVar8 = 0x10;
            if (lVar14 != 0) goto LAB_00102694;
          }
          else {
            if (uVar12 != 0) {
              uVar18 = uVar9 & 0x8000000000000;
              uVar8 = 0x10;
              if (bVar3) {
                uVar8 = 0x18;
              }
              goto LAB_00102398;
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
        goto LAB_00102398;
      }
joined_r0x001024ac:
      if (uVar18 != 0) {
        uVar12 = uVar19 & 7;
        bVar3 = true;
        uVar11 = 0;
        lVar14 = lVar7;
        goto LAB_0010236c;
      }
      param_1 = 0;
      uVar8 = 0;
    }
  }
LAB_001023b8:
  if ((int)uVar8 == 0) {
    return param_1;
  }
LAB_001025c0:
  __sfp_handle_exceptions(uVar8);
  return param_1;
}

// Function: __multf3 @ 0x102dc0
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
        if (lVar22 < 0x3d) goto LAB_00103218;
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
LAB_00103218:
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
        if (lVar8 < 0x3d) goto LAB_001031bc;
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
LAB_001031bc:
        uVar7 = (ulong)((int)lVar8 + 3);
        uVar21 = param_2 >> ((ulong)(0x3d - (int)lVar8) & 0x3f) | uVar13 << (uVar7 & 0x3f);
        param_2 = param_2 << (uVar7 & 0x3f);
      }
      lVar20 = (lVar14 - lVar12) + -0x3fef;
      lVar8 = (lVar14 - lVar12) + -0x3fee;
      lVar12 = 0;
    }
    uVar7 = (ulong)((uVar4 ^ uVar2) >> 0x1f);
    if (uVar6 < 0xb) goto LAB_00102ecc;
LAB_00102e80:
    if (uVar6 != 0xb) {
LAB_00102e88:
      uVar18 = uVar11;
      uVar21 = uVar19;
      uVar23 = in_register_00005008 >> 0x3f;
      lVar9 = lVar22;
      goto LAB_00102f8c;
    }
LAB_00102fa8:
    uVar11 = param_2;
    uVar7 = uVar15;
    if (lVar12 != 3) {
LAB_00102ee8:
      lVar20 = lVar8;
      if (lVar12 == 1) {
        uVar11 = 0;
      }
      else {
LAB_0010314c:
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
            goto LAB_001033b4;
          }
          iVar10 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(param_2 << ((ulong)(0x40 - iVar10) & 0x3f) != 0);
            uVar6 = uVar21 << ((ulong)(0x40 - iVar10) & 0x3f) | param_2 >> (uVar19 & 0x3f);
            uVar21 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar6 | uVar11;
            if ((uVar6 & 7 | uVar11) != 0) goto LAB_00103334;
            if ((uVar21 >> 0x33 & 1) == 0) goto LAB_0010347c;
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
LAB_0010347c:
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              if (((uint)uVar17 >> 0xb & 1) != 0) {
                uVar5 = (ulong)(uVar4 | 8);
                goto LAB_001033b4;
              }
              goto LAB_00102efc;
            }
            uVar21 = 0;
LAB_00103334:
            uVar17 = uVar17 & 0xc00000;
            if (uVar17 == 0x400000) {
              if (uVar7 == 0) {
LAB_001034dc:
                bVar3 = 0xfffffffffffffff7 < uVar19;
                uVar19 = uVar19 + 8;
                if (bVar3) {
                  uVar21 = uVar21 + 1;
                }
              }
            }
            else if (uVar17 == 0x800000) {
              if (uVar7 != 0) goto LAB_001034dc;
            }
            else if (((uVar17 == 0) && ((uVar19 & 0xf) != 4)) &&
                    (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
              uVar21 = uVar21 + 1;
            }
            if ((uVar21 >> 0x33 & 1) == 0) {
              uVar5 = (ulong)(uVar4 | 0x18);
              uVar11 = uVar19 >> 3 | uVar21 << 0x3d;
              goto LAB_001033b4;
            }
          }
          uVar5 = (ulong)(uVar4 | 0x18);
          uVar11 = 0;
          goto LAB_001033b4;
        }
        if ((param_2 & 7) != 0) {
          uVar19 = uVar17 & 0xc00000;
          uVar5 = (ulong)(uVar4 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar7 == 0) {
LAB_001034cc:
              bVar3 = 0xfffffffffffffff7 < param_2;
              param_2 = param_2 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar7 != 0) goto LAB_001034cc;
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
          goto LAB_001033b4;
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
        goto LAB_00102ecc;
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
      if (uVar6 < 0xb) goto LAB_00102f48;
      lVar9 = 3;
    }
    lVar8 = lVar14 + 0x8000;
    if (uVar6 != 0xf) {
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      if (uVar6 != 0xb) goto LAB_00102e88;
      goto LAB_00102f8c;
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
    if (10 < uVar6) goto LAB_00102e80;
LAB_00102ecc:
    uVar13 = uVar21;
    if (uVar6 < 3) {
      if (uVar6 - 1 < 2) {
        if (lVar12 == 2) goto LAB_00102fdc;
        goto LAB_00102ee8;
      }
LAB_00102fec:
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
      goto LAB_0010314c;
    }
LAB_00102f48:
    uVar6 = 1L << uVar6;
    uVar18 = uVar11;
    uVar21 = uVar19;
    uVar23 = uVar7;
    lVar9 = lVar22;
    if ((uVar6 & 0x530) == 0) {
      if ((uVar6 & 0x240) != 0) {
        uVar5 = 1;
        uVar11 = 0xffffffffffffffff;
        goto LAB_00102efc;
      }
      uVar18 = param_2;
      uVar21 = uVar13;
      uVar23 = uVar15;
      lVar9 = lVar12;
      if ((uVar6 & 0x88) == 0) goto LAB_00102fec;
    }
LAB_00102f8c:
    lVar12 = lVar9;
    uVar15 = uVar23;
    param_2 = uVar18;
    if (lVar12 != 2) goto LAB_00102fa8;
LAB_00102fdc:
    uVar11 = 0;
  }
LAB_00102efc:
  if ((int)uVar5 == 0) {
    return uVar11;
  }
LAB_001033b4:
  __sfp_handle_exceptions(uVar5);
  return uVar11;
}

// Function: __sfp_handle_exceptions @ 0x1035c0
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

// Function: _fini @ 0x103630
void _fini(void)
{
  return;
}

