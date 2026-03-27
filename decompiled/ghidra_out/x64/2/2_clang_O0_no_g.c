/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00101070 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010a0 */

/* WARNING: Removing unreachable block (ram,0x001010b3) */
/* WARNING: Removing unreachable block (ram,0x001010bf) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001010d0 */

/* WARNING: Removing unreachable block (ram,0x001010f4) */
/* WARNING: Removing unreachable block (ram,0x00101100) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101110 */

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



/* Function: process_char @ 00101160 */

int process_char(char param_1)

{
  char local_9;
  
  local_9 = param_1;
  if (('@' < param_1) && (param_1 < '[')) {
    local_9 = param_1 + ' ';
  }
  return (int)local_9;
}



/* Function: process_short @ 001011a0 */

int process_short(short param_1,short param_2)

{
  return (int)(short)(param_1 + param_2);
}



/* Function: process_int @ 001011c0 */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: process_long @ 001011e0 */

long process_long(long param_1)

{
  return param_1 << 1;
}



/* Function: process_ll @ 00101200 */

long process_ll(long param_1)

{
  return param_1 * param_1;
}



/* Function: process_float @ 00101220 */

float process_float(float param_1)

{
  return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00101250 */

double process_double(double param_1)

{
  return param_1 / 2.0 + 0.1;
}



/* Function: process_ld @ 00101280 */

void process_ld(void)

{
  return;
}



/* Function: process_bool @ 001012a0 */

bool process_bool(int param_1)

{
  bool local_d;
  
  local_d = 0 < param_1 && param_1 % 2 == 0;
  return local_d;
}



/* Function: const_param @ 001012e0 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 00101300 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00101330 */

void test_data_types_l1(void)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 local_10;
  undefined4 local_c;
  
  printf(&DAT_00103150);
  cVar1 = process_char(0x41);
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
  cVar1 = process_char(0x62);
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
  sVar3 = process_short(100,200);
  printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar3);
  uVar4 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n",(ulong)uVar4);
  uVar5 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n",uVar5);
  uVar5 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n",uVar5);
  fVar6 = (float)process_float(0x40000000);
  printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
  process_double(0x4010000000000000);
  printf("DT-L1-07 (process_double): %.2f\n");
  process_ld();
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  bVar2 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(bVar2 & 1));
  bVar2 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(bVar2 & 1));
  bVar2 = process_bool(0xfffffffe);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)(bVar2 & 1));
  local_c = 5;
  uVar4 = const_param(&local_c);
  printf("DT-L1-10 (const_param): %d\n",(ulong)uVar4);
  local_10 = 10;
  uVar4 = volatile_access(&local_10);
  printf("DT-L1-11 (volatile_access): %d\n",(ulong)uVar4);
  return;
}



/* Function: array_1d_stack @ 001014f0 */

int array_1d_stack(long param_1,int param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = *(int *)(param_1 + (long)local_1c * 4) + local_18;
  }
  return local_18;
}



/* Function: array_string @ 00101540 */

int array_string(long param_1)

{
  undefined4 local_14;
  
  for (local_14 = 0; *(char *)(param_1 + local_14) != '\0'; local_14 = local_14 + 1) {
  }
  return local_14;
}



/* Function: array_2d_stack @ 00101580 */

int array_2d_stack(long param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    local_14 = *(int *)(param_1 + (long)local_18 * 0x28 + (long)local_18 * 4) + local_14;
  }
  return local_14;
}



/* Function: array_3d @ 001015d0 */

int array_3d(long param_1)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
    for (local_1c = 0; local_1c < 5; local_1c = local_1c + 1) {
      for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
        local_14 = *(int *)(param_1 + (long)local_18 * 100 + (long)local_1c * 0x14 +
                           (long)local_20 * 4) + local_14;
      }
    }
  }
  return local_14;
}



/* Function: array_vla @ 00101680 */

int array_vla(int param_1,long param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = 0;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    local_1c = *(int *)(param_2 + (long)local_20 * 4) + local_1c;
  }
  return local_1c;
}



/* Function: array_pointer @ 001016d0 */

int array_pointer(long param_1,int param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = *(int *)(param_1 + (long)local_1c * 0x28) + local_18;
  }
  return local_18;
}



/* Function: pointer_array @ 00101720 */

int pointer_array(long param_1,int param_2)

{
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  
  local_18 = 0;
  local_24 = param_2;
  if (9 < param_2) {
    local_24 = 10;
  }
  for (local_20 = 0; local_20 < local_24; local_20 = local_20 + 1) {
    if (*(long *)(param_1 + (long)local_20 * 8) != 0) {
      local_18 = **(int **)(param_1 + (long)local_20 * 8) + local_18;
    }
  }
  return local_18;
}



/* Function: array_complex_index @ 001017b0 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 local_c;
  
  if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
    local_c = 0xffffffff;
  }
  else {
    local_c = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
  }
  return local_c;
}



/* Function: array_oob @ 00101820 */

int array_oob(long param_1,int param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c <= param_2; local_1c = local_1c + 1) {
    local_18 = *(int *)(param_1 + (long)local_1c * 4) + local_18;
  }
  return local_18;
}



/* Function: test_array_types @ 00101870 */

/* WARNING: Type propagation algorithm not settling */

void test_array_types(void)

{
  uint uVar1;
  undefined8 in_R9;
  undefined8 *local_568;
  int local_560;
  int local_55c;
  int local_558 [20];
  undefined4 *local_508;
  undefined4 *local_500;
  undefined4 *local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8 [6];
  undefined8 local_4b8;
  undefined4 local_4b0;
  int local_4ac;
  int local_4a8 [50];
  undefined8 local_3e0;
  undefined4 local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  undefined4 local_3c8 [126];
  int local_1d0;
  int local_1cc;
  int local_1c8 [102];
  undefined4 local_2e;
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
  printf(&DAT_001032bc);
  local_28 = 0x200000001;
  local_20 = 0x400000003;
  local_18 = 5;
  uVar1 = array_1d_stack(&local_28,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",(ulong)uVar1);
  local_2e = 0x6c6c6568;
  local_2a = 0x6f;
  uVar1 = array_string(&local_2e);
  printf("ARR-L1-02 (array_string): %d\n",(ulong)uVar1);
  for (local_1cc = 0; local_1cc < 10; local_1cc = local_1cc + 1) {
    for (local_1d0 = 0; local_1d0 < 10; local_1d0 = local_1d0 + 1) {
      if (local_1cc == local_1d0) {
        local_560 = local_1cc;
      }
      else {
        local_560 = 0;
      }
      local_1c8[(long)local_1cc * 10 + (long)local_1d0] = local_560;
    }
  }
  uVar1 = array_2d_stack(local_1c8);
  printf("ARR-L1-03 (array_2d_stack): %d\n",(ulong)uVar1);
  for (local_3cc = 0; local_3cc < 5; local_3cc = local_3cc + 1) {
    for (local_3d0 = 0; local_3d0 < 5; local_3d0 = local_3d0 + 1) {
      for (local_3d4 = 0; local_3d4 < 5; local_3d4 = local_3d4 + 1) {
        local_3c8[(long)local_3cc * 0x19 + (long)local_3d0 * 5 + (long)local_3d4] = 1;
      }
    }
  }
  uVar1 = array_3d(local_3c8);
  printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
  local_3e0 = 0x140000000a;
  local_3d8 = 0x1e;
  uVar1 = array_vla(3,&local_3e0);
  printf("ARR-L2-01 (array_vla): %d\n",(ulong)uVar1);
  for (local_4ac = 0; local_4ac < 5; local_4ac = local_4ac + 1) {
    local_4a8[(long)local_4ac * 10] = local_4ac * 10;
  }
  uVar1 = array_pointer(local_4a8,5);
  printf("ARR-L2-02 (array_pointer): %d\n",(ulong)uVar1);
  local_4b0 = 10;
  local_4b8._4_4_ = 0x14;
  local_4b8._0_4_ = 0x1e;
  local_508 = &local_4b0;
  local_500 = (undefined4 *)((long)&local_4b8 + 4);
  local_4f8 = (undefined4 *)&local_4b8;
  local_4f0 = 0;
  local_568 = local_4e8;
  do {
    *local_568 = 0;
    local_568 = local_568 + 1;
  } while (local_568 != &local_4b8);
  uVar1 = pointer_array(&local_508,3);
  printf("ARR-L2-03 (pointer_array): %d\n",(ulong)uVar1);
  for (local_55c = 0; local_55c < 0x14; local_55c = local_55c + 1) {
    local_558[local_55c] = local_55c;
  }
  uVar1 = array_complex_index(local_558,5,4,2,3,in_R9,local_568);
  printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)uVar1);
  return;
}



/* Function: ptr_single @ 00101c90 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00101cb0 */

int ptr_double(undefined8 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101cd0 */

int ptr_triple(undefined8 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00101cf0 */

int ptr_increment(int *param_1,int param_2)

{
  int local_1c;
  int local_18;
  int *local_10;
  
  local_18 = 0;
  local_10 = param_1;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = *local_10 + local_18;
    local_10 = local_10 + 1;
  }
  return local_18;
}



/* Function: ptr_offset @ 00101d40 */

undefined4 ptr_offset(long param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101d60 */

long ptr_diff(long param_1,long param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00101d80 */

int ptr_void(int *param_1,int param_2)

{
  undefined4 local_c;
  
  if (param_2 == 0) {
    local_c = *param_1;
  }
  else if (param_2 == 1) {
    local_c = (int)(char)*param_1;
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: ptr_const @ 00101dd0 */

int ptr_const(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: ptr_const_ptr @ 00101df0 */

int ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return *param_1;
}



/* Function: ptr_func_simple @ 00101e10 */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: ptr_func_complex @ 00101e30 */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  code *local_10;
  
  local_28 = &DAT_001033d4;
  local_20 = 0;
  local_18 = param_2;
  local_10 = param_1;
  (*param_1)(param_2,&local_28);
  return;
}



/* Function: ptr_cast @ 00101e70 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00101ea0 */

long opaque_handle_create(int param_1)

{
  return (long)param_1;
}



/* Function: opaque_handle_op @ 00101eb0 */

int opaque_handle_op(int param_1)

{
  return param_1 << 1;
}



/* Function: test_pointer_types @ 00101ed0 */

void test_pointer_types(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 **local_40;
  undefined4 **local_38;
  undefined4 *local_30;
  undefined4 local_24;
  undefined4 **local_20;
  undefined4 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  printf(&DAT_001033d9);
  local_c = 5;
  uVar1 = ptr_single(&local_c);
  printf("PTR-L2-01 (ptr_single): %d\n",(ulong)uVar1);
  local_10 = 10;
  local_18 = &local_10;
  local_20 = &local_18;
  uVar1 = ptr_double(local_20);
  printf("PTR-L2-02 (ptr_double): %d\n",(ulong)uVar1);
  local_24 = 5;
  local_30 = &local_24;
  local_38 = &local_30;
  local_40 = &local_38;
  uVar1 = ptr_triple(local_40);
  printf("PTR-L2-03 (ptr_triple): %d\n",(ulong)uVar1);
  local_58 = 0x200000001;
  local_50 = 0x400000003;
  local_48 = 5;
  uVar1 = ptr_increment(&local_58,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",(ulong)uVar1);
  local_78 = 0x140000000a;
  local_70 = 0x280000001e;
  local_68 = 0x32;
  uVar1 = ptr_offset(&local_78,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",(ulong)uVar1);
  local_98 = 0xa00000000;
  local_90 = 0x1e00000014;
  local_88[0] = 0x28;
  uVar1 = ptr_diff(local_88,&local_98);
  printf("PTR-L2-06 (ptr_diff): %d\n",(ulong)uVar1);
  local_9c = 0x2a;
  local_9d = 0x41;
  uVar1 = ptr_void(&local_9c,0);
  printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
  uVar1 = ptr_void(&local_9d,1);
  printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
  local_a4 = 10;
  uVar1 = ptr_const(&local_a4);
  printf("PTR-L2-08 (ptr_const): %d\n",(ulong)uVar1);
  local_a8 = 10;
  uVar1 = ptr_const_ptr(&local_a8);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",(ulong)uVar1);
  uVar1 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",(ulong)uVar1);
  local_ac = 5;
  uVar1 = ptr_func_complex(complex_callback,&local_ac);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",(ulong)uVar1);
  local_b0 = 0x12345678;
  uVar1 = ptr_cast(&local_b0);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",(ulong)uVar1);
  uVar2 = opaque_handle_create(10);
  uVar1 = opaque_handle_op(uVar2);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",(ulong)uVar1);
  return;
}



/* Function: double_value @ 00102180 */

int double_value(int param_1)

{
  return param_1 << 1;
}



/* Function: complex_callback @ 00102190 */

bool complex_callback(int *param_1,long *param_2)

{
  *param_1 = *param_1 + 10;
  return *param_2 != 0;
}



/* Function: struct_simple @ 001021d0 */

int struct_simple(int *param_1)

{
  return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 001021f0 */

int struct_array(long param_1,int param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = *(int *)(param_1 + (long)local_1c * 0xc) +
               *(int *)(param_1 + (long)local_1c * 0xc + 4) +
               *(int *)(param_1 + (long)local_1c * 0xc + 8) + local_18;
  }
  return local_18;
}



/* Function: struct_nested @ 00102270 */

int struct_nested(int *param_1)

{
  return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00102290 */

int struct_deep(long param_1)

{
  return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 001022b0 */

int struct_with_ptr(int *param_1)

{
  int local_18;
  
  if (*(long *)(param_1 + 2) == 0) {
    local_18 = 0;
  }
  else {
    local_18 = **(int **)(param_1 + 2);
  }
  return *param_1 + local_18;
}



/* Function: struct_bitfields @ 00102300 */

short struct_bitfields(ushort *param_1)

{
  return (*param_1 & 1) + (*param_1 >> 1 & 3) + (*param_1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00102350 */

float union_type(float *param_1,int param_2)

{
  undefined4 local_c;
  
  if (param_2 == 0) {
    local_c = *param_1;
  }
  else if (param_2 == 1) {
    local_c = (float)(int)*param_1;
  }
  else {
    local_c = (float)(int)*(char *)param_1;
  }
  return local_c;
}



/* Function: union_array @ 001023a0 */

int union_array(long param_1,int param_2)

{
  undefined4 local_1c;
  undefined4 local_18;
  
  local_18 = 0;
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    local_18 = *(int *)(param_1 + (long)local_1c * 4) + local_18;
  }
  return local_18;
}



/* Function: enum_type @ 001023f0 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 00102400 */

undefined4 enum_switch(undefined4 param_1)

{
  undefined4 local_c;
  
  switch(param_1) {
  case 0:
    local_c = 0;
    break;
  case 1:
    local_c = 100;
    break;
  case 2:
    local_c = 0x32;
    break;
  case 3:
    local_c = 0xffffffff;
    break;
  default:
    local_c = 0xffffff9d;
  }
  return local_c;
}



/* Function: struct_func_ptr @ 00102470 */

void struct_func_ptr(undefined4 *param_1)

{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}



/* Function: linked_list @ 001024a0 */

int linked_list(int *param_1)

{
  int *local_20;
  int local_14;
  
  local_14 = 0;
  for (local_20 = param_1; local_20 != (int *)0x0; local_20 = *(int **)(local_20 + 2)) {
    local_14 = *local_20 + local_14;
  }
  return local_14;
}



/* Function: doubly_linked_list @ 001024f0 */

int doubly_linked_list(int *param_1)

{
  int *local_20;
  int local_14;
  
  local_14 = 0;
  for (local_20 = param_1; local_20 != (int *)0x0; local_20 = *(int **)(local_20 + 2)) {
    local_14 = *local_20 + local_14;
  }
  return local_14;
}



/* Function: binary_tree_sum @ 00102540 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    local_c = 0;
  }
  else {
    iVar1 = *param_1;
    iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
    local_c = binary_tree_sum(*(undefined8 *)(param_1 + 4));
    local_c = iVar1 + iVar2 + local_c;
  }
  return local_c;
}



/* Function: binary_tree @ 001025b0 */

void binary_tree(undefined8 param_1)

{
  binary_tree_sum(param_1);
  return;
}



/* Function: graph_traverse @ 001025d0 */

int graph_traverse(long param_1)

{
  int *local_20;
  int local_18;
  int local_14;
  
  local_14 = 0;
  for (local_18 = 0; local_18 < *(int *)(param_1 + 0x50); local_18 = local_18 + 1) {
    for (local_20 = *(int **)(param_1 + (long)local_18 * 8); local_20 != (int *)0x0;
        local_20 = *(int **)(local_20 + 2)) {
      local_14 = *local_20 + local_14;
    }
  }
  return local_14;
}



/* Function: test_composite_types @ 00102650 */

void test_composite_types(void)

{
  uint uVar1;
  undefined8 *local_1b8 [10];
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138 [2];
  undefined4 *local_130;
  undefined8 local_128;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined4 *local_110;
  undefined4 local_108 [2];
  undefined4 *local_100;
  undefined4 local_f8 [2];
  undefined4 *local_f0;
  undefined4 local_e8 [2];
  undefined8 local_e0;
  undefined8 local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined4 local_a0 [2];
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80 [48];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_18;
  undefined4 local_10;
  
  printf(&DAT_00103573);
  local_18 = 0x200000001;
  local_10 = 3;
  uVar1 = struct_simple(&local_18);
  printf("CMP-L2-01 (struct_simple): %d\n",(ulong)uVar1);
  local_38 = 0x100000001;
  local_30 = 0x200000001;
  local_28 = 0x200000002;
  uVar1 = struct_array(&local_38,2);
  printf("CMP-L2-02 (struct_array): %d\n",(ulong)uVar1);
  local_50 = 0xa00000005;
  local_48 = 0x6400000000;
  local_40 = 200;
  uVar1 = struct_nested(&local_50);
  printf("CMP-L2-03 (struct_nested): %d\n",(ulong)uVar1);
  memcpy(local_80,&DAT_001030fc,0x30);
  uVar1 = struct_deep(local_80);
  printf("CMP-L2-04 (struct_deep): %d\n",(ulong)uVar1);
  local_90 = 0x14;
  local_88 = 0;
  local_a0[0] = 10;
  local_98 = &local_90;
  uVar1 = struct_with_ptr(local_a0);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",(ulong)uVar1);
  local_a8 = 0x191d;
  uVar1 = struct_bitfields(&local_a8);
  printf("CMP-L2-06 (struct_bitfields): %d\n",(ulong)uVar1);
  local_b0[0] = 0x12345678;
  uVar1 = union_type(local_b0,0);
  printf("CMP-L2-07 (union_type): %d\n",(ulong)uVar1);
  local_c0 = 0x140000000a;
  local_b8 = 0x1e;
  uVar1 = union_array(&local_c0,3);
  printf("CMP-L2-08 (union_array): %d\n",(ulong)uVar1);
  uVar1 = enum_type(1);
  printf("CMP-L2-09 (enum_type): %d\n",(ulong)uVar1);
  uVar1 = enum_switch(2);
  printf("CMP-L2-10 (enum_switch): %d\n",(ulong)uVar1);
  local_d0 = 10;
  local_c8 = process_int;
  uVar1 = struct_func_ptr(&local_d0);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",(ulong)uVar1);
  local_108[0] = 10;
  local_100 = local_f8;
  local_f8[0] = 0x14;
  local_f0 = local_e8;
  local_e8[0] = 0x1e;
  local_e0 = 0;
  uVar1 = linked_list(local_108);
  printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar1);
  local_138[0] = 10;
  local_128 = 0;
  local_120[0] = 0x14;
  local_118 = 0;
  local_110 = local_138;
  local_130 = local_120;
  uVar1 = doubly_linked_list(local_138);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar1);
  local_150 = 100;
  local_148 = 0;
  local_140 = 0;
  binary_tree(&local_150);
  printf("CMP-L2-14 (binary_tree): %d\n");
  local_160 = 1;
  local_158 = 0;
  memset(local_1b8,0,0x58);
  local_168 = 2;
  local_1b8[0] = &local_160;
  uVar1 = graph_traverse(local_1b8);
  printf("CMP-L2-15 (graph_traverse): %d\n",(ulong)uVar1);
  return;
}



/* Function: main @ 00102a30 */

undefined8 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _fini @ 00102a5c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 64 */
