// Decompiled by BinaryAI
// SHA256: 58efa327bd58658646c8be974ba8d149856197d9ece9cf8dd156481b7160b964

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::puts @ 0x101030
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x101040
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101050
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x101060
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x101090
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1010c0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x101100
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

// Function: process_char @ 0x10114c
uint process_char(uint param_1)
{
  uint uVar1;
  uVar1 = param_1 + 0x20 & 0xff;
  if (0x19 < (byte)((char)param_1 + 0xbfU)) {
    uVar1 = param_1;
  }
  return uVar1;
}

// Function: process_short @ 0x10115b
int process_short(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: process_int @ 0x10115f
int process_int(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: process_long @ 0x101165
long process_long(long param_1)
{
  return param_1 * 2;
}

// Function: process_ll @ 0x10116a
long process_ll(long param_1)
{
  return param_1 * param_1;
}

// Function: process_float @ 0x101172
float process_float(float param_1)
{
  return param_1 * 1.5 + 0.5;
}

// Function: process_double @ 0x101183
double process_double(double param_1)
{
  return param_1 * 0.5 + 0.1;
}

// Function: process_ld @ 0x101194
void process_ld(void)
{
  return;
}

// Function: process_bool @ 0x10119f
bool process_bool(uint param_1)
{
  return (param_1 & 1) == 0 && 0 < (int)param_1;
}

// Function: const_param @ 0x1011ae
int const_param(int *param_1)
{
  return *param_1 + 10;
}

// Function: volatile_access @ 0x1011b4
int volatile_access(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x1011b9
void test_data_types_l1(void)
{
  puts(&DAT_0010266f);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n",10000);
  printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
  printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
  printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}

// Function: array_1d_stack @ 0x1012e2
int array_1d_stack(long param_1,uint param_2)
{
  int iVar1;
  ulong uVar2;
  if (0 < (int)param_2) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    return iVar1;
  }
  return 0;
}

// Function: array_string @ 0x1012fb
int array_string(char *param_1)
{
  char cVar1;
  int iVar2;
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return iVar2;
}

// Function: array_2d_stack @ 0x10130c
int array_2d_stack(long param_1)
{
  int iVar1;
  long lVar2;
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x2c;
  } while (lVar2 != 0x1b8);
  return iVar1;
}

// Function: array_3d @ 0x101321
int array_3d(long param_1)
{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  lVar5 = 0;
  iVar1 = 0;
  do {
    lVar4 = 0;
    lVar3 = param_1;
    do {
      lVar2 = 0;
      do {
        iVar1 = iVar1 + *(int *)(lVar3 + lVar2 * 4);
        lVar2 = lVar2 + 1;
      } while (lVar2 != 5);
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x14;
    } while (lVar4 != 5);
    lVar5 = lVar5 + 1;
    param_1 = param_1 + 100;
  } while (lVar5 != 5);
  return iVar1;
}

// Function: array_vla @ 0x101354
int array_vla(uint param_1,long param_2)
{
  int iVar1;
  ulong uVar2;
  if (0 < (int)param_1) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_2 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_1 != uVar2);
    return iVar1;
  }
  return 0;
}

// Function: array_pointer @ 0x10136d
int array_pointer(long param_1,uint param_2)
{
  int iVar1;
  long lVar2;
  if (0 < (int)param_2) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + lVar2);
      lVar2 = lVar2 + 0x28;
    } while ((ulong)param_2 * 0x28 != lVar2);
    return iVar1;
  }
  return 0;
}

// Function: pointer_array @ 0x10138f
int pointer_array(long param_1,uint param_2)
{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  if (0 < (int)param_2) {
    uVar3 = 10;
    if (param_2 < 10) {
      uVar3 = (ulong)param_2;
    }
    uVar4 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + uVar4 * 8);
      if (piVar1 != (int *)0x0) {
        iVar2 = iVar2 + *piVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    return iVar2;
  }
  return 0;
}

// Function: array_complex_index @ 0x1013b9
undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
  undefined4 uVar1;
  uVar1 = 0xffffffff;
  if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
    uVar1 = *(undefined4 *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
  }
  return uVar1;
}

// Function: array_oob @ 0x1013de
int array_oob(long param_1,int param_2)
{
  int iVar1;
  ulong uVar2;
  if (-1 < param_2) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_2 + 1 != uVar2);
    return iVar1;
  }
  return 0;
}

// Function: test_array_types @ 0x1013f7
void test_array_types(void)
{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined auVar9 [16];
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_514;
  int local_510;
  int local_50c;
  int *local_508;
  int *local_500 [2];
  undefined local_4f0 [16];
  undefined local_4e0 [16];
  undefined local_4d0 [16];
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 local_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  int aiStack_468 [53];
  undefined local_394 [396];
  undefined local_208 [512];
  puts(&DAT_00102690);
  lVar5 = 0;
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
  puVar1 = local_394;
  do {
    lVar4 = 0;
    auVar9 = _DAT_00102030;
    do {
      iVar10 = SUB164(auVar9 ^ _DAT_00102040,4);
      iVar11 = SUB164(_DAT_00102050,4);
      bVar12 = iVar10 == iVar11 && SUB164(auVar9 ^ _DAT_00102040,0) < SUB164(_DAT_00102050,0);
      if (iVar10 < iVar11 || bVar12) {
        uVar6 = 0;
        if (lVar5 == lVar4) {
          uVar6 = (int)lVar5;
        }
        *(undefined4 *)(puVar1 + lVar4 * 4 + -4) = uVar6;
      }
      if (iVar10 < iVar11 || bVar12) {
        uVar6 = 0;
        if (lVar5 + -1 == lVar4) {
          uVar6 = (int)lVar5;
        }
        *(undefined4 *)(puVar1 + lVar4 * 4) = uVar6;
      }
      lVar4 = lVar4 + 2;
      lVar7 = auVar9._8_8_;
      auVar9._0_8_ = auVar9._0_8_ + 2;
      auVar9._8_8_ = lVar7 + 2;
    } while (lVar4 != 10);
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 0x28;
  } while (lVar5 != 10);
  lVar5 = 0;
  do {
    lVar5 = lVar5 + 0x2c;
  } while (lVar5 != 0x1b8);
  lVar5 = 0;
  printf("ARR-L1-03 (array_2d_stack): %d\n");
  puVar1 = local_208;
  do {
    lVar4 = 0;
    puVar3 = puVar1;
    do {
      lVar7 = 0;
      do {
        *(undefined4 *)(puVar3 + lVar7 * 4) = 1;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 5);
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 0x14;
    } while (lVar4 != 5);
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 100;
  } while (lVar5 != 5);
  lVar5 = 0;
  puVar1 = local_208;
  uVar8 = 0;
  do {
    lVar4 = 0;
    puVar3 = puVar1;
    do {
      lVar7 = 0;
      do {
        uVar8 = (ulong)(uint)((int)uVar8 + *(int *)(puVar3 + lVar7 * 4));
        lVar7 = lVar7 + 1;
      } while (lVar7 != 5);
      lVar4 = lVar4 + 1;
      puVar3 = puVar3 + 0x14;
    } while (lVar4 != 5);
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 100;
  } while (lVar5 != 5);
  lVar5 = 0;
  printf("ARR-L1-04 (array_3d): %d\n",uVar8);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  do {
    aiStack_468[lVar5] = (int)lVar5;
    lVar5 = lVar5 + 10;
  } while (lVar5 != 0x32);
  lVar5 = 0;
  uVar8 = 0;
  do {
    uVar8 = (ulong)(uint)((int)uVar8 + *(int *)((long)aiStack_468 + lVar5));
    lVar5 = lVar5 + 0x28;
  } while (lVar5 != 200);
  lVar5 = 0;
  printf("ARR-L2-02 (array_pointer): %d\n",uVar8);
  piVar2 = &local_50c;
  local_50c = 10;
  local_510 = 0x14;
  local_514 = 0x1e;
  local_508 = piVar2;
  local_500[0] = &local_510;
  local_500[1] = &local_514;
  local_4f0 = (undefined  [16])0x0;
  local_4e0 = (undefined  [16])0x0;
  local_4d0 = (undefined  [16])0x0;
  local_4c0 = 0;
  uVar8 = 0;
  while( true ) {
    if (piVar2 != (int *)0x0) {
      uVar8 = (ulong)(uint)((int)uVar8 + *piVar2);
    }
    if (lVar5 == 2) break;
    piVar2 = local_500[lVar5];
    lVar5 = lVar5 + 1;
  }
  printf("ARR-L2-03 (pointer_array): %d\n",uVar8);
  local_4b8 = 0;
  uStack_4b4 = 1;
  uStack_4b0 = 2;
  uStack_4ac = 3;
  local_4a8 = 4;
  uStack_4a4 = 5;
  uStack_4a0 = 6;
  uStack_49c = 7;
  local_498 = 8;
  uStack_494 = 9;
  uStack_490 = 10;
  uStack_48c = 0xb;
  local_488 = 0xc;
  uStack_484 = 0xd;
  uStack_480 = 0xe;
  uStack_47c = 0xf;
  local_478 = 0x10;
  uStack_474 = 0x11;
  uStack_470 = 0x12;
  uStack_46c = 0x13;
  printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
  return;
}

// Function: ptr_single @ 0x1016a5
int ptr_single(int *param_1)
{
  return *param_1 + 10;
}

// Function: ptr_double @ 0x1016ab
int ptr_double(int **param_1)
{
  return **param_1 + 5;
}

// Function: ptr_triple @ 0x1016b4
int ptr_triple(undefined8 *param_1)
{
  return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x1016bf
int ptr_increment(long param_1,int param_2)
{
  int iVar1;
  long lVar2;
  if (0 < param_2) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + lVar2 * 4);
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
    return iVar1;
  }
  return 0;
}

// Function: ptr_offset @ 0x1016d7
undefined4 ptr_offset(long param_1,int param_2)
{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1016de
ulong ptr_diff(long param_1,long param_2)
{
  return (ulong)(param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x1016e9
int ptr_void(int *param_1,int param_2)
{
  int iVar1;
  if (param_2 == 1) {
    iVar1 = (int)*(char *)param_1;
  }
  else {
    iVar1 = -1;
    if (param_2 == 0) {
      return *param_1;
    }
  }
  return iVar1;
}

// Function: ptr_const @ 0x1016fe
int ptr_const(int *param_1)
{
  return *param_1 * 2;
}

// Function: ptr_const_ptr @ 0x101703
void ptr_const_ptr(int *param_1)
{
  *param_1 = *param_1 + 5;
  return;
}

// Function: ptr_func_simple @ 0x10170b
void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)
{
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}

// Function: ptr_func_complex @ 0x101712
void ptr_func_complex(code *param_1,undefined8 param_2)
{
  (*param_1)(param_2);
  return;
}

// Function: ptr_cast @ 0x101733
undefined4 ptr_cast(undefined4 *param_1)
{
  return *param_1;
}

// Function: opaque_handle_create @ 0x101736
long opaque_handle_create(int param_1)
{
  return (long)param_1;
}

// Function: opaque_handle_op @ 0x10173a
int opaque_handle_op(int param_1)
{
  return param_1 * 2;
}

// Function: test_pointer_types @ 0x10173e
void test_pointer_types(void)
{
  puts(&DAT_001026ab);
  printf("PTR-L2-01 (ptr_single): %d\n",0xf);
  printf("PTR-L2-02 (ptr_double): %d\n",0xf);
  printf("PTR-L2-03 (ptr_triple): %d\n",6);
  printf("PTR-L2-04 (ptr_increment): %d\n",0xf);
  printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
  printf("PTR-L2-06 (ptr_diff): %d\n",4);
  printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
  printf("PTR-L2-07 (ptr_void): %d\n",0x41);
  printf("PTR-L2-08 (ptr_const): %d\n",0x14);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return;
}

// Function: struct_simple @ 0x101855
int struct_simple(int *param_1)
{
  return param_1[1] + *param_1 + param_1[2];
}

// Function: struct_array @ 0x10185e
int struct_array(long param_1,uint param_2)
{
  int iVar1;
  long lVar2;
  if (0 < (int)param_2) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + lVar2) + *(int *)(param_1 + 4 + lVar2) +
              *(int *)(param_1 + 8 + lVar2);
      lVar2 = lVar2 + 0xc;
    } while ((ulong)param_2 * 0xc != lVar2);
    return iVar1;
  }
  return 0;
}

// Function: struct_nested @ 0x101888
int struct_nested(int *param_1)
{
  return param_1[3] + *param_1;
}

// Function: struct_deep @ 0x10188e
int struct_deep(long param_1)
{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}

// Function: struct_with_ptr @ 0x101895
int struct_with_ptr(int *param_1)
{
  int iVar1;
  if (*(int **)(param_1 + 2) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 2);
  }
  return iVar1 + *param_1;
}

// Function: struct_bitfields @ 0x1018a9
short struct_bitfields(ushort *param_1)
{
  ushort uVar1;
  uVar1 = *param_1;
  return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}

// Function: union_type @ 0x1018ca
float union_type(float *param_1,int param_2)
{
  if (param_2 == 1) {
    return (float)(int)*param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return (float)(int)*(char *)param_1;
}

// Function: union_array @ 0x1018df
int union_array(long param_1,uint param_2)
{
  int iVar1;
  ulong uVar2;
  if (0 < (int)param_2) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    return iVar1;
  }
  return 0;
}

// Function: enum_type @ 0x1018f8
int enum_type(int param_1)
{
  return param_1 * 10;
}

// Function: enum_switch @ 0x1018fe
undefined4 enum_switch(uint param_1)
{
  undefined4 uVar1;
  uVar1 = 0xffffff9d;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(&DAT_001020d0 + (long)(int)param_1 * 4);
  }
  return uVar1;
}

// Function: struct_func_ptr @ 0x101916
void struct_func_ptr(undefined4 *param_1)
{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}

// Function: linked_list @ 0x10191e
int linked_list(int *param_1)
{
  int iVar1;
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}

// Function: doubly_linked_list @ 0x10192e
int doubly_linked_list(int *param_1)
{
  int iVar1;
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}

// Function: binary_tree_sum @ 0x10193e
int binary_tree_sum(int *param_1)
{
  int iVar1;
  int iVar2;
  int iVar3;
  if (param_1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
      param_1 = *(int **)(param_1 + 4);
      iVar3 = iVar3 + iVar1 + iVar2;
    } while (param_1 != (int *)0x0);
  }
  return iVar3;
}

// Function: graph_traverse @ 0x101976
int graph_traverse(long param_1)
{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  if (0 < (int)*(uint *)(param_1 + 0x50)) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      for (piVar3 = *(int **)(param_1 + uVar2 * 8); piVar3 != (int *)0x0;
          piVar3 = *(int **)(piVar3 + 2)) {
        iVar1 = iVar1 + *piVar3;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x50));
    return iVar1;
  }
  return 0;
}

// Function: test_composite_types @ 0x10199e
void test_composite_types(void)
{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int *local_100;
  undefined local_f8 [16];
  undefined local_e8 [16];
  undefined local_d8 [16];
  undefined local_c8 [16];
  undefined local_b8 [16];
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98 [2];
  undefined4 *local_90;
  undefined4 local_88 [2];
  undefined4 *local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int local_48 [2];
  undefined4 *local_40;
  undefined8 local_38;
  undefined4 local_30 [2];
  undefined8 local_28;
  int *local_20;
  puts(&DAT_001026c6);
  uVar3 = 0;
  printf("CMP-L2-01 (struct_simple): %d\n",6);
  printf("CMP-L2-02 (struct_array): %d\n",9);
  printf("CMP-L2-03 (struct_nested): %d\n",0x69);
  printf("CMP-L2-04 (struct_deep): %d\n",0x102);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",0x1e);
  printf("CMP-L2-06 (struct_bitfields): %d\n",0x6a);
  printf("CMP-L2-07 (union_type): %d\n",0x12345678);
  printf("CMP-L2-08 (union_array): %d\n",0x3c);
  printf("CMP-L2-09 (enum_type): %d\n",10);
  printf("CMP-L2-10 (enum_switch): %d\n",0x32);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",0x15);
  piVar1 = local_98;
  local_98[0] = 10;
  local_90 = local_88;
  local_88[0] = 0x14;
  local_80 = local_78;
  local_78[0] = 0x1e;
  local_70 = 0;
  do {
    uVar3 = uVar3 + *piVar1;
    piVar1 = *(int **)(piVar1 + 2);
  } while (piVar1 != (int *)0x0);
  uVar2 = 0;
  printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar3);
  piVar1 = local_48;
  local_48[0] = 10;
  local_38 = 0;
  local_30[0] = 0x14;
  local_28 = 0;
  local_20 = piVar1;
  local_40 = local_30;
  do {
    uVar2 = uVar2 + *piVar1;
    piVar1 = *(int **)(piVar1 + 2);
  } while (piVar1 != (int *)0x0);
  lVar4 = 0;
  printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar2);
  local_58 = 0;
  local_68 = 100;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uVar3 = binary_tree_sum();
  printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar3);
  local_100 = &local_a8;
  local_a8 = 1;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_b8 = ZEXT816(0);
  local_c8 = ZEXT816(0);
  local_d8 = ZEXT816(0);
  local_e8 = ZEXT816(0);
  local_f8 = ZEXT816(0);
  uVar5 = 0;
  piVar1 = local_100;
  while( true ) {
    for (; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 2)) {
      uVar5 = (ulong)(uint)((int)uVar5 + *piVar1);
    }
    lVar4 = lVar4 + 1;
    if (lVar4 == 2) break;
    piVar1 = *(int **)(local_f8 + lVar4 * 8 + -8);
  }
  printf("CMP-L2-15 (graph_traverse): %d\n",uVar5);
  return;
}

// Function: main @ 0x101bbc
undefined8 main(void)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}

// Function: _fini @ 0x101bd8
void _fini(void)
{
  return;
}

