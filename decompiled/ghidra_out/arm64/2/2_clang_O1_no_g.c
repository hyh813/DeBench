/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/2/2_clang_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100608 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100620 @ 00100620 */

void FUN_00100620(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 001006c0 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 001006f4 */

/* WARNING: Removing unreachable block (ram,0x00100704) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100710 */

/* WARNING: Removing unreachable block (ram,0x00100728) */
/* WARNING: Removing unreachable block (ram,0x00100734) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100740 */

/* WARNING: Removing unreachable block (ram,0x00100764) */
/* WARNING: Removing unreachable block (ram,0x00100770) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_0010077c @ 0010077c */

void FUN_0010077c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100780 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: process_char @ 001007d4 */

int process_char(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (0x19 < (param_1 - 0x41U & 0xff)) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Function: process_short @ 001007ec */

int process_short(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: process_int @ 001007f4 */

uint process_int(int param_1)

{
  return param_1 << 1 | 1;
}



/* Function: process_long @ 00100804 */

long process_long(long param_1)

{
  return param_1 << 1;
}



/* Function: process_ll @ 0010080c */

long process_ll(long param_1)

{
  return param_1 * param_1;
}



/* Function: process_float @ 00100814 */

float process_float(float param_1)

{
  return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00100824 */

undefined1  [16] process_double(double param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 * 0.5 + 0.1;
  auVar1._8_8_ = 0;
  return auVar1;
}



/* Function: process_ld @ 0010083c */

void process_ld(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __multf3(param_1,param_1);
  __addtf3(uVar1,0);
  return;
}



/* Function: process_bool @ 0010085c */

bool process_bool(uint param_1)

{
  return 0 < (int)param_1 && (param_1 & 1) == 0;
}



/* Function: const_param @ 00100874 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 00100880 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00100890 */

int test_data_types_l1(void)

{
  int iVar1;
  
  puts(&DAT_00102ebf);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n",10000);
  printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
  printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
  printf("DT-L1-08 (process_ld): %.2Lf\n",0);
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
  iVar1 = printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return iVar1;
}



/* Function: array_1d_stack @ 001009a8 */

int array_1d_stack(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    iVar1 = 0;
    uVar2 = (ulong)param_2;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: array_string @ 001009d8 */

int array_string(char *param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    cVar1 = *param_1;
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  return iVar2;
}



/* Function: array_2d_stack @ 001009f0 */

int array_2d_stack(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = 0;
  iVar2 = 0;
  do {
    piVar1 = (int *)(param_1 + lVar3);
    lVar3 = lVar3 + 0x2c;
    iVar2 = *piVar1 + iVar2;
  } while (lVar3 != 0x1b8);
  return iVar2;
}



/* Function: array_3d @ 00100a14 */

int array_3d(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = 0;
  iVar2 = 0;
  do {
    lVar4 = 0;
    lVar5 = param_1;
    do {
      lVar6 = 0;
      do {
        piVar1 = (int *)(lVar5 + lVar6);
        lVar6 = lVar6 + 4;
        iVar2 = *piVar1 + iVar2;
      } while (lVar6 != 0x14);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x14;
    } while (lVar4 != 5);
    lVar3 = lVar3 + 1;
    param_1 = param_1 + 100;
  } while (lVar3 != 5);
  return iVar2;
}



/* Function: array_vla @ 00100a64 */

int array_vla(uint param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_1) {
    uVar2 = (ulong)param_1;
    iVar1 = 0;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_2 + iVar1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: array_pointer @ 00100a94 */

int array_pointer(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    iVar1 = 0;
    uVar2 = (ulong)param_2;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 10;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: pointer_array @ 00100ac4 */

int pointer_array(undefined8 *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((int)param_2 < 1) {
    iVar1 = 0;
  }
  else {
    if (9 < (int)param_2) {
      param_2 = 10;
    }
    iVar1 = 0;
    if ((int)param_2 < 2) {
      param_2 = 1;
    }
    uVar2 = (ulong)param_2;
    do {
      if ((int *)*param_1 != (int *)0x0) {
        iVar1 = *(int *)*param_1 + iVar1;
      }
      param_1 = param_1 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return iVar1;
}



/* Function: array_complex_index @ 00100b14 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  if (-1 < param_4) {
    uVar1 = 0xffffffff;
    if (((param_5 < param_3) && (param_4 < param_2)) && (-1 < param_5)) {
      uVar1 = *(undefined4 *)(param_1 + (long)(param_4 + param_5 * param_2) * 4);
    }
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: array_oob @ 00100b48 */

int array_oob(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (-1 < param_2) {
    iVar1 = 0;
    uVar2 = (ulong)(param_2 + 1);
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: test_array_types @ 00100b74 */

int test_array_types(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int *piVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  uint local_510 [20];
  undefined4 *local_4c0 [10];
  undefined4 local_470;
  int local_46c [50];
  undefined1 local_3a4 [500];
  int local_1b0 [100];
  undefined4 local_8;
  undefined4 local_4;
  
  puts(&DAT_00102ee0);
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
  lVar3 = 0;
  piVar4 = local_1b0;
  do {
    lVar6 = 0;
    do {
      iVar1 = (int)lVar3;
      if (lVar3 != lVar6) {
        iVar1 = 0;
      }
      piVar4[lVar6] = iVar1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 10);
    lVar3 = lVar3 + 1;
    piVar4 = piVar4 + 10;
  } while (lVar3 != 10);
  lVar3 = 0;
  uVar2 = 0;
  do {
    piVar4 = (int *)((long)local_1b0 + lVar3);
    lVar3 = lVar3 + 0x2c;
    uVar2 = (ulong)(uint)(*piVar4 + (int)uVar2);
  } while (lVar3 != 0x1b8);
  printf("ARR-L1-03 (array_2d_stack): %d\n",uVar2);
  lVar3 = 0;
  puVar5 = local_3a4;
  do {
    lVar6 = 0;
    puVar7 = puVar5;
    do {
      lVar8 = 0;
      do {
        *(undefined4 *)(puVar7 + lVar8) = 1;
        lVar8 = lVar8 + 4;
      } while (lVar8 != 0x14);
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x14;
    } while (lVar6 != 5);
    lVar3 = lVar3 + 1;
    puVar5 = puVar5 + 100;
  } while (lVar3 != 5);
  lVar3 = 0;
  uVar2 = 0;
  puVar5 = local_3a4;
  do {
    lVar6 = 0;
    puVar7 = puVar5;
    do {
      lVar8 = 0;
      do {
        piVar4 = (int *)(puVar7 + lVar8);
        lVar8 = lVar8 + 4;
        uVar2 = (ulong)(uint)(*piVar4 + (int)uVar2);
      } while (lVar8 != 0x14);
      lVar6 = lVar6 + 1;
      puVar7 = puVar7 + 0x14;
    } while (lVar6 != 5);
    lVar3 = lVar3 + 1;
    puVar5 = puVar5 + 100;
  } while (lVar3 != 5);
  printf("ARR-L1-04 (array_3d): %d\n",uVar2);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  lVar3 = 0;
  do {
    local_46c[lVar3] = (int)lVar3;
    lVar3 = lVar3 + 10;
  } while (lVar3 != 0x32);
  lVar3 = 0;
  uVar2 = 0;
  do {
    piVar4 = (int *)((long)local_46c + lVar3);
    lVar3 = lVar3 + 0x28;
    uVar2 = (ulong)(uint)(*piVar4 + (int)uVar2);
  } while (lVar3 != 200);
  printf("ARR-L2-02 (array_pointer): %d\n",uVar2);
  lVar3 = 0;
  uVar2 = 0;
  local_8 = 0x14;
  local_4 = 10;
  local_470 = 0x1e;
  local_4c0[9] = (undefined4 *)0x0;
  local_4c0[4] = (undefined4 *)0x0;
  local_4c0[3] = (undefined4 *)0x0;
  local_4c0[0] = &local_4;
  local_4c0[1] = &local_8;
  local_4c0[2] = &local_470;
  local_4c0[6] = (undefined4 *)0x0;
  local_4c0[5] = (undefined4 *)0x0;
  local_4c0[8] = (undefined4 *)0x0;
  local_4c0[7] = (undefined4 *)0x0;
  do {
    if (*(int **)((long)local_4c0 + lVar3) != (int *)0x0) {
      uVar2 = (ulong)(uint)(**(int **)((long)local_4c0 + lVar3) + (int)uVar2);
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x18);
  printf("ARR-L2-03 (pointer_array): %d\n",uVar2);
  lVar3 = 0;
  do {
    local_510[lVar3] = (uint)lVar3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x14);
  iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)local_510[0x11]);
  return iVar1;
}



/* Function: ptr_single @ 00100db4 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00100dc0 */

int ptr_double(undefined8 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00100dd0 */

int ptr_triple(undefined8 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00100de4 */

int ptr_increment(int *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      param_2 = param_2 + -1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: ptr_offset @ 00100e14 */

undefined4 ptr_offset(long param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00100e1c */

ulong ptr_diff(long param_1,long param_2)

{
  return (ulong)(param_1 - param_2) >> 2;
}



/* Function: ptr_void @ 00100e28 */

uint ptr_void(uint *param_1,int param_2)

{
  if (param_2 == 1) {
    return (uint)(byte)*param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return 0xffffffff;
}



/* Function: ptr_const @ 00100e4c */

int ptr_const(int *param_1)

{
  return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00100e58 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 00100e6c */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: ptr_func_complex @ 00100e88 */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
  undefined *local_20;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  local_20 = &DAT_00102b70;
  (*param_1)(param_2,&local_20);
  return;
}



/* Function: ptr_cast @ 00100ec4 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00100ecc */

long opaque_handle_create(int param_1)

{
  return (long)param_1;
}



/* Function: opaque_handle_op @ 00100ed4 */

int opaque_handle_op(int param_1)

{
  return param_1 << 1;
}



/* Function: test_pointer_types @ 00100edc */

int test_pointer_types(void)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int local_40 [8];
  
  puts(&DAT_00102efb);
  printf("PTR-L2-01 (ptr_single): %d\n",0xf);
  printf("PTR-L2-02 (ptr_double): %d\n",0xf);
  printf("PTR-L2-03 (ptr_triple): %d\n",6);
  lVar4 = 0;
  uVar3 = 0;
  local_40[2] = 3;
  local_40[3] = 4;
  local_40[0] = 1;
  local_40[1] = 2;
  local_40[4] = 5;
  do {
    piVar1 = (int *)((long)local_40 + lVar4);
    lVar4 = lVar4 + 4;
    uVar3 = (ulong)(uint)(*piVar1 + (int)uVar3);
  } while ((int)lVar4 != 0x14);
  printf("PTR-L2-04 (ptr_increment): %d\n",uVar3);
  printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
  printf("PTR-L2-06 (ptr_diff): %d\n",4);
  printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
  printf("PTR-L2-07 (ptr_void): %d\n",0x41);
  printf("PTR-L2-08 (ptr_const): %d\n",0x14);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  iVar2 = printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return iVar2;
}



/* Function: struct_simple @ 00101020 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00101034 */

int struct_array(long param_1,uint param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  
  if (0 < (int)param_2) {
    iVar4 = 0;
    uVar6 = (ulong)param_2;
    piVar5 = (int *)(param_1 + 4);
    do {
      piVar2 = piVar5 + -1;
      iVar3 = *piVar5;
      piVar1 = piVar5 + 1;
      piVar5 = piVar5 + 3;
      uVar6 = uVar6 - 1;
      iVar4 = *piVar2 + iVar4 + iVar3 + *piVar1;
    } while (uVar6 != 0);
    return iVar4;
  }
  return 0;
}



/* Function: struct_nested @ 00101078 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00101088 */

int struct_deep(long param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00101098 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int **)(param_1 + 2) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 2);
  }
  return iVar1 + *param_1;
}



/* Function: struct_bitfields @ 001010b0 */

short struct_bitfields(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 001010d0 */

float union_type(float *param_1,int param_2)

{
  if (param_2 == 1) {
    return (float)(int)*param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return (float)(uint)*(byte *)param_1;
}



/* Function: union_array @ 001010f8 */

int union_array(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    iVar1 = 0;
    uVar2 = (ulong)param_2;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: enum_type @ 00101128 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 00101134 */

undefined4 enum_switch(uint param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&DAT_00102920 + (long)(int)param_1 * 4);
  }
  return 0xffffff9d;
}



/* Function: struct_func_ptr @ 00101154 */

void struct_func_ptr(undefined4 *param_1)

{
  (**(code **)(param_1 + 2))(*param_1);
  return;
}



/* Function: linked_list @ 00101170 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
    iVar1 = *param_1 + iVar1;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00101190 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
    iVar1 = *param_1 + iVar1;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 001011b0 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    iVar2 = binary_tree_sum(*(undefined8 *)(param_1 + 2));
    iVar3 = binary_tree_sum(*(undefined8 *)(param_1 + 4));
    iVar3 = iVar2 + iVar1 + iVar3;
  }
  return iVar3;
}



/* Function: binary_tree @ 001011f0 */

void binary_tree(void)

{
  binary_tree_sum();
  return;
}



/* Function: graph_traverse @ 00101204 */

int graph_traverse(long param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  
  if ((int)*(uint *)(param_1 + 0x50) < 1) {
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = 0;
    do {
      for (piVar3 = *(int **)(param_1 + uVar2 * 8); piVar3 != (int *)0x0;
          piVar3 = *(int **)(piVar3 + 2)) {
        iVar1 = *piVar3 + iVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != *(uint *)(param_1 + 0x50));
  }
  return iVar1;
}



/* Function: test_composite_types @ 00101250 */

int test_composite_types(void)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  undefined8 *local_120 [12];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int local_90 [2];
  undefined4 *local_88;
  undefined8 uStack_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  int *piStack_68;
  int local_60 [2];
  undefined4 *local_58;
  undefined4 local_50 [2];
  undefined4 *local_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  puts(&DAT_00102f16);
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
  piVar3 = local_60;
  uVar2 = 0;
  local_60[0] = 10;
  local_40[0] = 0x1e;
  local_50[0] = 0x14;
  local_58 = local_50;
  local_48 = local_40;
  local_38 = 0;
  do {
    iVar1 = *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
    uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
  } while (piVar3 != (int *)0x0);
  printf("CMP-L2-12 (linked_list): %d\n",uVar2);
  piVar3 = local_90;
  uVar2 = 0;
  local_70 = 0;
  piStack_68 = piVar3;
  local_90[0] = 10;
  local_78[0] = 0x14;
  local_88 = local_78;
  uStack_80 = 0;
  do {
    iVar1 = *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
    uVar2 = (ulong)(uint)(iVar1 + (int)uVar2);
  } while (piVar3 != (int *)0x0);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar2);
  uStack_a8 = 0;
  local_b0 = 100;
  local_a0 = 0;
  uVar2 = binary_tree_sum(&local_b0);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar2 & 0xffffffff);
  lVar4 = 0;
  uVar2 = 0;
  local_120[1] = (undefined8 *)0x0;
  local_120[3] = (undefined8 *)0x0;
  local_120[2] = (undefined8 *)0x0;
  local_120[0] = &local_c0;
  uStack_b8 = 0;
  local_c0 = 1;
  local_120[7] = (undefined8 *)0x0;
  local_120[6] = (undefined8 *)0x0;
  local_120[9] = (undefined8 *)0x0;
  local_120[8] = (undefined8 *)0x0;
  local_120[10] = (undefined8 *)0x2;
  local_120[5] = (undefined8 *)0x0;
  local_120[4] = (undefined8 *)0x0;
  do {
    for (piVar3 = (int *)local_120[lVar4]; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
      uVar2 = (ulong)(uint)(*piVar3 + (int)uVar2);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 2);
  iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",uVar2);
  return iVar1;
}



/* Function: main @ 00101470 */

undefined8 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __addtf3 @ 001014a0 */

undefined1  [16] __addtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar28;
  undefined1 auVar27 [16];
  ulong uVar29;
  
  uVar11 = param_2._8_8_;
  uVar29 = param_2._0_8_;
  uVar28 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  uVar13 = fpcr;
  uVar3 = (uVar28 & 0xffffffffffff) << 3;
  lVar18 = -((long)uVar28 >> 0x3f);
  uVar12 = (uint)lVar18;
  lVar9 = -((long)uVar11 >> 0x3f);
  uVar14 = (uint)lVar9;
  uVar2 = uVar11 << 3;
  uVar4 = uVar2 & 0x7fffffffffff8;
  uVar10 = uVar26 >> 0x3d;
  uVar24 = uVar3 | uVar10;
  uVar20 = uVar28 >> 0x30 & 0x7fff;
  uVar19 = uVar11 >> 0x30 & 0x7fff;
  uVar17 = uVar29 >> 0x3d;
  uVar16 = uVar4 | uVar17;
  uVar21 = uVar26 * 8;
  uVar23 = uVar29 * 8;
  uVar22 = uVar21;
  uVar25 = uVar24;
  if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
    uVar8 = (int)uVar20 - (int)uVar19;
    lVar9 = lVar18;
    if ((int)uVar8 < 1) {
      if (uVar8 != 0) {
        if (uVar20 == 0) {
          if (uVar24 == 0 && uVar21 == 0) {
            uVar22 = uVar23;
            uVar25 = uVar16;
            if (uVar19 == 0x7fff) {
              uVar14 = uVar12;
              if (uVar16 != 0 || uVar23 != 0) {
                uVar11 = uVar4 >> 0x32 ^ 1;
                goto LAB_001017c0;
              }
              goto LAB_00101a74;
            }
            goto LAB_0010171c;
          }
          uVar8 = ~uVar8;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            uVar20 = uVar19;
            goto LAB_001018d8;
          }
        }
        else {
          uVar8 = -uVar8;
          uVar24 = uVar24 | 0x8000000000000;
        }
        if (uVar19 != 0x7fff) {
          if ((int)uVar8 < 0x75) {
            if ((int)uVar8 < 0x40) {
              uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                       (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
              uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
            }
            else {
              uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
              if (uVar8 - 0x40 == 0) {
                uVar10 = uVar21;
              }
              uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
            }
          }
          else {
            uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
          }
          uVar10 = uVar17 + uVar23;
          uVar20 = uVar19;
          if (CARRY8(uVar17,uVar23)) {
            uVar16 = uVar16 + 1;
          }
          goto LAB_001018d8;
        }
        if (uVar16 != 0 || uVar23 != 0) {
          uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
          uVar11 = uVar4 >> 0x32 ^ 1;
          uVar10 = uVar4 >> 3;
          goto LAB_00101984;
        }
LAB_00101b08:
        uVar22 = 0;
        uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
        goto LAB_00101654;
      }
      uVar15 = uVar20 + 1;
      if ((uVar15 & 0x7ffe) == 0) {
        if (uVar20 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) {
              if (uVar19 != 0x7fff) goto LAB_00101d90;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00101b08;
            }
            else {
              uVar11 = uVar3 >> 0x32 ^ 1;
              uVar8 = (uint)uVar11;
              if (uVar19 != 0x7fff) goto LAB_00101f38;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00101fd0;
            }
LAB_00101ffc:
            if ((uVar2 & 0x4000000000000) == 0) {
              uVar8 = 1;
            }
            uVar11 = (ulong)uVar8;
            if (uVar24 != 0 || uVar21 != 0) {
LAB_00101f40:
              uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
              uVar10 = uVar28 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
                uVar10 = uVar4 >> 3;
                uVar12 = uVar14;
              }
              goto LAB_00101984;
            }
LAB_00101d90:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
          }
          else {
            if (uVar19 == 0x7fff) {
              if (uVar16 != 0 || uVar23 != 0) goto LAB_00101ffc;
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00101b08;
            }
            else {
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00101d90;
LAB_00101f38:
              if (uVar16 != 0 || uVar23 != 0) goto LAB_00101f40;
            }
LAB_00101fd0:
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
          }
          goto LAB_00101984;
        }
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = 0;
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_0010173c;
          }
          goto LAB_00101d08;
        }
        if (uVar16 == 0 && uVar23 == 0) goto LAB_00101d08;
        uVar22 = uVar21 + uVar23;
        uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        if ((uVar25 >> 0x33 & 1) != 0) {
          uVar25 = uVar25 & 0xfff7ffffffffffff;
          uVar10 = 0;
          bVar6 = false;
          uVar15 = 1;
          goto LAB_001015ec;
        }
LAB_001015d8:
        uVar17 = uVar22 | uVar25;
        goto LAB_001015dc;
      }
      if (uVar15 != 0x7fff) {
        uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        bVar6 = false;
        uVar10 = uVar21 + uVar23 >> 1 & 7;
        uVar25 = uVar17 >> 1;
        uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
        goto LAB_001015ec;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 != 0) {
        if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00101fe0:
          uVar11 = 0x14;
          lVar18 = 0;
          goto LAB_0010182c;
        }
        if (uVar10 == 0x800000) {
          if (lVar18 == 0) goto LAB_00101f7c;
LAB_00101e48:
          uVar11 = 0x14;
          lVar18 = 1;
          goto LAB_0010182c;
        }
LAB_00101ca4:
        uVar14 = 0x14;
        if ((uVar13 & 0xc00000) == 0x400000) {
          uVar22 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          bVar6 = false;
          uVar11 = 0x14;
          uVar25 = uVar22;
          goto joined_r0x00101cc4;
        }
        goto LAB_001017e8;
      }
LAB_00101d34:
      uVar11 = 0x14;
    }
    else {
      if (uVar19 == 0) {
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            goto LAB_001018d8;
          }
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) goto LAB_00101b08;
            goto LAB_001017b4;
          }
          goto LAB_001016b0;
        }
        uVar19 = uVar20;
        if (uVar20 != 0x7fff) goto LAB_0010171c;
        uVar14 = uVar12;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00101a74;
        uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
        uVar23 = uVar21;
        uVar16 = uVar24;
LAB_001017c0:
        uVar20 = 0x7fff;
        goto LAB_001017c8;
      }
      uVar16 = uVar16 | 0x8000000000000;
      if (uVar20 == 0x7fff) goto LAB_00101964;
LAB_001016b0:
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          uVar16 = uVar24;
        }
      }
      else {
        uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
        uVar16 = uVar24;
      }
      uVar10 = uVar17 + uVar21;
      if (CARRY8(uVar17,uVar21)) {
        uVar16 = uVar16 + 1;
      }
LAB_001018d8:
      uVar19 = uVar20;
      uVar22 = uVar10;
      uVar25 = uVar16;
      if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010171c;
      uVar15 = uVar20 + 1;
      if (uVar15 != 0x7fff) {
        bVar6 = false;
        uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
        uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
        uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
        goto LAB_001015ec;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 == 0) goto LAB_00101d34;
      if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00101fe0;
      if (uVar10 != 0x800000) goto LAB_00101ca4;
      if (lVar18 != 0) goto LAB_00101e48;
LAB_00101f7c:
      uVar22 = 0xffffffffffffffff;
      lVar18 = 0;
      uVar15 = 0x7ffe;
      uVar11 = 0x14;
      uVar25 = uVar22;
LAB_0010161c:
      uVar14 = (uint)uVar11;
      uVar12 = (uint)lVar18;
      if (uVar15 + 1 != 0x7fff) {
        uVar10 = uVar25 >> 3 & 0xffffffffffff;
        uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
        uVar14 = (uint)(uVar15 + 1) & 0x7fff;
        goto LAB_00101638;
      }
LAB_001017e8:
      uVar12 = (uint)lVar18;
      uVar13 = uVar13 & 0xc00000;
      if (uVar13 != 0) {
        if (uVar13 == 0x400000) {
          if (lVar9 != 0) goto LAB_00101804;
        }
        else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101804:
          uVar22 = 0xffffffffffffffff;
          uVar11 = (ulong)(uVar14 | 0x14);
          uVar10 = 0x1fffffffffffffff;
          uVar20 = 0x7ffe;
          goto LAB_0010173c;
        }
      }
      uVar11 = (ulong)(uVar14 | 0x14);
    }
LAB_0010182c:
    uVar22 = 0;
    uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
    goto LAB_00101840;
  }
  uVar8 = (int)uVar20 - (int)uVar19;
  if ((int)uVar8 < 1) {
    if (uVar8 == 0) {
      uVar11 = 0;
      if ((uVar20 + 1 & 0x7ffe) != 0) {
        uVar22 = uVar21 + uVar29 * -8;
        uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
        if ((uVar10 >> 0x33 & 1) != 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_00101574;
        }
        lVar9 = lVar18;
        if (uVar22 != 0 || uVar10 != 0) goto LAB_00101574;
        uVar22 = 0;
        uVar20 = 0;
        uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
        uVar10 = 0;
        goto LAB_0010173c;
      }
      if (uVar20 == 0) {
        if (uVar24 != 0 || uVar21 != 0) {
          if (uVar16 == 0 && uVar23 == 0) goto LAB_00101d08;
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          if ((uVar25 >> 0x33 & 1) == 0) {
            if (uVar22 != 0 || uVar25 != 0) {
              uVar10 = 0;
              bVar6 = true;
              uVar15 = uVar20;
              goto LAB_001015ec;
            }
            goto LAB_00101de0;
          }
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          uVar17 = uVar22 | uVar25;
          goto LAB_001015dc;
        }
        uVar22 = uVar23;
        uVar25 = uVar16;
        lVar18 = lVar9;
        if (uVar16 == 0 && uVar23 == 0) {
LAB_00101de0:
          uVar10 = 0;
          uVar22 = 0;
          uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
          goto LAB_0010173c;
        }
LAB_00101d08:
        uVar10 = 0;
        uVar15 = 0;
        goto LAB_00101d10;
      }
      if (uVar20 == 0x7fff) {
        if (uVar24 == 0 && uVar21 == 0) {
          if (uVar19 != 0x7fff) goto LAB_00101c48;
        }
        else {
          uVar11 = uVar3 >> 0x32 ^ 1;
          if (uVar19 != 0x7fff) goto LAB_00101c18;
        }
LAB_00101e90:
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = (uint)uVar11;
          if ((uVar2 & 0x4000000000000) == 0) {
            uVar8 = 1;
          }
          uVar11 = (ulong)uVar8;
          if (uVar24 == 0 && uVar21 == 0) {
LAB_00101f0c:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
            goto LAB_00101984;
          }
LAB_00101ea8:
          uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
          uVar10 = uVar28 & 0xffffffffffff;
          if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
          }
          goto LAB_00101984;
        }
        if (uVar24 != 0 || uVar21 != 0) goto LAB_00101c18;
      }
      else {
        if (uVar19 == 0x7fff) goto LAB_00101e90;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00101c18:
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
            goto LAB_00101984;
          }
          goto LAB_00101ea8;
        }
LAB_00101c48:
        uVar11 = 0;
        if (uVar16 != 0 || uVar23 != 0) goto LAB_00101f0c;
      }
      uVar22 = 0xffffffffffffffff;
      uVar10 = 0xffffffffffff;
      uVar12 = 0;
      uVar11 = 1;
    }
    else {
      if (uVar20 == 0) {
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar19 == 0x7fff) {
            if (uVar16 != 0 || uVar23 != 0) {
              uVar11 = uVar4 >> 0x32 ^ 1;
              uVar12 = uVar14;
              goto LAB_001017c0;
            }
            goto LAB_00101a74;
          }
          goto LAB_0010171c;
        }
        uVar8 = ~uVar8;
        if (uVar8 == 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_0010156c;
        }
      }
      else {
        uVar8 = -uVar8;
        uVar24 = uVar24 | 0x8000000000000;
      }
      if (uVar19 != 0x7fff) {
        if ((int)uVar8 < 0x75) {
          if ((int)uVar8 < 0x40) {
            uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                     (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
            uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
          }
          else {
            uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
            if (uVar8 - 0x40 == 0) {
              uVar10 = uVar21;
            }
            uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          }
        }
        else {
          uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
        }
        uVar22 = uVar23 - uVar10;
        uVar25 = uVar16 - (uVar23 < uVar10);
        goto LAB_0010156c;
      }
      if (uVar16 == 0 && uVar23 == 0) goto LAB_00101b08;
      uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
      uVar11 = uVar4 >> 0x32 ^ 1;
      uVar10 = uVar4 >> 3;
      uVar12 = uVar14;
LAB_00101984:
      if (uVar10 == 0 && uVar22 == 0) {
        uVar22 = 0;
        uVar14 = 0x7fff;
        uVar10 = 0;
        goto LAB_00101638;
      }
    }
    uVar14 = 0x7fff;
    uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
  }
  else {
    if (uVar19 == 0) {
      if (uVar16 != 0 || uVar23 != 0) {
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          uVar19 = uVar20;
          lVar9 = lVar18;
          goto LAB_0010156c;
        }
        goto LAB_00101518;
      }
      uVar19 = uVar20;
      lVar9 = lVar18;
      if (uVar20 == 0x7fff) {
        uVar14 = uVar12;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_001017b4:
          uVar11 = uVar3 >> 0x32 ^ 1;
          uVar23 = uVar21;
          uVar16 = uVar24;
          goto LAB_001017c0;
        }
LAB_00101a74:
        uVar22 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = uVar14;
        goto LAB_00101984;
      }
LAB_0010171c:
      uVar12 = (uint)lVar9;
      uVar17 = uVar22 | uVar25;
      uVar10 = uVar22 & 7;
      bVar6 = false;
      uVar15 = uVar19;
      lVar18 = lVar9;
      if (uVar19 == 0) goto joined_r0x0010172c;
LAB_001015ec:
      if (uVar10 == 0) {
        uVar10 = uVar25 & 0x8000000000000;
        uVar11 = 0;
        if (bVar6) {
LAB_00101d10:
          uVar11 = 0;
          if (((uint)uVar13 >> 0xb & 1) != 0) {
            uVar11 = 8;
          }
        }
      }
      else {
        uVar10 = uVar13 & 0xc00000;
        if (uVar10 == 0x400000) {
          uVar11 = 0x10;
joined_r0x00101cc4:
          if (lVar18 == 0) {
LAB_00101914:
            bVar7 = 0xfffffffffffffff7 < uVar22;
            uVar22 = uVar22 + 8;
            if (bVar7) {
              uVar25 = uVar25 + 1;
            }
          }
        }
        else if (uVar10 == 0x800000) {
          uVar11 = 0x10;
          if (lVar18 != 0) goto LAB_00101914;
        }
        else {
          if (uVar10 != 0) {
            uVar10 = uVar25 & 0x8000000000000;
            uVar11 = 0x10;
            if (bVar6) {
              uVar11 = 0x18;
            }
            goto LAB_00101618;
          }
          uVar11 = 0x10;
          if (((uVar22 & 0xf) != 4) &&
             (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
            uVar25 = uVar25 + 1;
          }
        }
        uVar10 = uVar25 & 0x8000000000000;
        if (bVar6) {
          uVar11 = (ulong)((uint)uVar11 | 8);
        }
      }
LAB_00101618:
      uVar12 = (uint)lVar18;
      uVar20 = uVar15;
      uVar23 = uVar22;
      uVar16 = uVar25;
      lVar9 = lVar18;
      if (uVar10 != 0) goto LAB_0010161c;
LAB_001017c8:
      uVar10 = uVar16 >> 3;
      uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
      if (uVar20 == 0x7fff) goto LAB_00101984;
    }
    else {
      uVar16 = uVar16 | 0x8000000000000;
LAB_00101518:
      if (uVar20 == 0x7fff) {
LAB_00101964:
        lVar9 = lVar18;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00101b08;
        uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
        uVar11 = uVar3 >> 0x32 ^ 1;
        uVar10 = uVar28 & 0xffffffffffff;
        goto LAB_00101984;
      }
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
        }
      }
      else {
        uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
      }
      uVar22 = uVar21 - uVar10;
      uVar25 = uVar24 - (uVar21 < uVar10);
      uVar19 = uVar20;
      lVar9 = lVar18;
LAB_0010156c:
      uVar10 = uVar25 & 0x7ffffffffffff;
      uVar20 = uVar19;
      if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010171c;
LAB_00101574:
      if (uVar10 == 0) {
        uVar12 = (int)LZCOUNT(uVar22) + 0x34;
        if (uVar12 < 0x40) goto LAB_00101580;
        uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
        uVar17 = 0;
      }
      else {
        uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101580:
        uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
        uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
      }
      if ((long)(int)uVar12 < (long)uVar20) {
        uVar19 = uVar20 - (long)(int)uVar12;
        uVar22 = uVar17;
        uVar25 = uVar10 & 0xfff7ffffffffffff;
        goto LAB_0010171c;
      }
      iVar1 = uVar12 - (int)uVar20;
      uVar12 = iVar1 + 1;
      if ((int)uVar12 < 0x40) {
        uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
        uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
                 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
        goto LAB_001015d8;
      }
      uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
      if (uVar12 == 0x40) {
        uVar22 = uVar17;
      }
      uVar25 = 0;
      uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
      uVar22 = uVar17;
LAB_001015dc:
      uVar12 = (uint)lVar9;
joined_r0x0010172c:
      if (uVar17 != 0) {
        uVar10 = uVar22 & 7;
        bVar6 = true;
        uVar15 = 0;
        lVar18 = lVar9;
        goto LAB_001015ec;
      }
      uVar22 = 0;
      uVar20 = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
LAB_0010173c:
    uVar10 = uVar10 & 0xffffffffffff;
    uVar14 = (uint)uVar20 & 0x7fff;
  }
LAB_00101638:
  uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
  if ((int)uVar11 == 0) {
LAB_00101654:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar22;
    return auVar27;
  }
LAB_00101840:
  __sfp_handle_exceptions(uVar11);
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar22;
  return auVar5;
}



/* Function: __multf3 @ 00102040 */

undefined1  [16] __multf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  
  uVar21 = param_2._8_8_;
  uVar17 = param_2._0_8_;
  uVar11 = param_1._8_8_;
  uVar15 = param_1._0_8_;
  uVar18 = fpcr;
  uVar10 = uVar11 >> 0x3f;
  uVar19 = uVar11 & 0xffffffffffff;
  uVar11 = uVar11 >> 0x30 & 0x7fff;
  iVar8 = (int)uVar11;
  if (iVar8 == 0) {
    if (uVar15 == 0 && uVar19 == 0) {
      uVar19 = 0;
      uVar7 = 4;
      lVar13 = 0;
      lVar24 = 1;
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      if (uVar19 == 0) {
        uVar11 = LZCOUNT(uVar15) + 0x31;
        iVar8 = (int)uVar11;
        lVar13 = LZCOUNT(uVar15) + 0x40;
        if (uVar11 < 0x3d) goto LAB_00102498;
        uVar11 = 0;
        uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
      }
      else {
        lVar13 = LZCOUNT(uVar19);
        iVar8 = (int)lVar13 + -0xf;
LAB_00102498:
        uVar19 = uVar15 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar19 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar11 = uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      uVar7 = 0;
      lVar13 = -0x3fef - lVar13;
      lVar24 = 0;
      uVar6 = 0;
    }
  }
  else if (iVar8 == 0x7fff) {
    if (uVar15 == 0 && uVar19 == 0) {
      uVar19 = 0;
      uVar7 = 8;
      lVar13 = 0x7fff;
      lVar24 = 2;
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      uVar6 = uVar19 >> 0x2f ^ 1;
      uVar7 = 0xc;
      lVar13 = 0x7fff;
      lVar24 = 3;
      uVar11 = uVar15;
    }
  }
  else {
    uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
    lVar13 = uVar11 - 0x3fff;
    lVar24 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar11 = uVar15 << 3;
  }
  uVar14 = uVar21 >> 0x3f;
  uVar15 = uVar21 & 0xffffffffffff;
  uVar22 = uVar21 >> 0x30 & 0x7fff;
  iVar8 = (int)uVar22;
  uVar4 = param_1._12_4_;
  uVar5 = param_2._12_4_;
  if (iVar8 == 0) {
    if (uVar17 == 0 && uVar15 == 0) {
      uVar7 = uVar7 | 1;
      lVar23 = lVar13 + 1;
      uVar21 = 0;
      uVar17 = 0;
      lVar12 = 1;
      lVar20 = lVar13;
    }
    else {
      if (uVar15 == 0) {
        uVar21 = LZCOUNT(uVar17) + 0x31;
        iVar8 = (int)uVar21;
        lVar23 = LZCOUNT(uVar17) + 0x40;
        if (uVar21 < 0x3d) goto LAB_0010243c;
        uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
        uVar17 = 0;
      }
      else {
        lVar23 = LZCOUNT(uVar15);
        iVar8 = (int)lVar23 + -0xf;
LAB_0010243c:
        uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      lVar20 = (lVar13 - lVar23) + -0x3fef;
      lVar23 = (lVar13 - lVar23) + -0x3fee;
      lVar12 = 0;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    if (uVar7 < 0xb) {
LAB_0010214c:
      uVar15 = uVar21;
      if (2 < uVar7) {
LAB_001021c8:
        uVar7 = 1L << uVar7;
        uVar25 = uVar11;
        uVar21 = uVar19;
        uVar26 = uVar22;
        lVar9 = lVar24;
        if ((uVar7 & 0x530) == 0) {
          if ((uVar7 & 0x240) != 0) {
            uVar6 = 1;
            uVar15 = 0xffffffffffff;
            uVar4 = 0x7fff;
            uVar11 = 0xffffffffffffffff;
            uVar10 = 0;
            goto LAB_0010217c;
          }
          uVar25 = uVar17;
          uVar21 = uVar15;
          uVar26 = uVar14;
          lVar9 = lVar12;
          if ((uVar7 & 0x88) == 0) goto LAB_0010226c;
        }
LAB_0010220c:
        lVar12 = lVar9;
        uVar14 = uVar26;
        uVar17 = uVar25;
        uVar22 = uVar14;
        if (lVar12 == 2) {
LAB_0010225c:
          uVar4 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          uVar10 = uVar22;
          goto LAB_0010217c;
        }
        goto LAB_00102228;
      }
      if (uVar7 - 1 < 2) {
        if (lVar12 == 2) goto LAB_0010225c;
        goto LAB_00102168;
      }
LAB_0010226c:
      uVar29 = uVar17 & 0xffffffff;
      uVar25 = uVar11 >> 0x20;
      uVar7 = uVar15 & 0xffffffff;
      uVar11 = uVar11 & 0xffffffff;
      uVar17 = uVar17 >> 0x20;
      uVar15 = uVar15 >> 0x20;
      uVar26 = uVar25 * uVar29;
      uVar28 = uVar19 >> 0x20;
      uVar14 = uVar25 * uVar7;
      uVar19 = uVar19 & 0xffffffff;
      uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
      uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
      uVar27 = uVar28 * uVar29;
      uVar30 = uVar28 * uVar7;
      lVar13 = uVar25 * uVar17 + 0x100000000;
      if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
        lVar13 = uVar25 * uVar17;
      }
      uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
      uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
      uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
      lVar24 = uVar25 * uVar15 + 0x100000000;
      if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
        lVar24 = uVar25 * uVar15;
      }
      uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
      lVar13 = uVar17 * uVar28 + 0x100000000;
      if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
        lVar13 = uVar17 * uVar28;
      }
      uVar17 = lVar24 + (uVar21 >> 0x20);
      uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
      lVar24 = uVar15 * uVar28 + 0x100000000;
      if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
        lVar24 = uVar15 * uVar28;
      }
      uVar15 = uVar21 + uVar17;
      uVar26 = (ulong)(uVar14 < uVar26);
      uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
      uVar7 = uVar15 + uVar26;
      uVar16 = uVar16 >> 0x20;
      uVar25 = lVar13 + (uVar1 >> 0x20);
      if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
        uVar16 = uVar16 + 1;
      }
      uVar15 = uVar14 + uVar19;
      uVar21 = (ulong)CARRY8(uVar14,uVar19);
      uVar17 = uVar7 + uVar25;
      uVar19 = uVar17 + uVar21;
      if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
        lVar24 = lVar24 + 1;
      }
      uVar10 = (ulong)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
                      (uVar15 & 0x7ffffffffffff) != 0);
      uVar15 = uVar15 >> 0x33;
      uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
      uVar19 = uVar19 >> 0x33;
      uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
      if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
        uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
        uVar21 = uVar21 >> 1;
        lVar20 = lVar23;
      }
LAB_001023cc:
      lVar13 = lVar20 + 0x3fff;
      uVar5 = (uint)uVar6;
      uVar10 = uVar22;
      if (lVar13 < 1) {
        uVar19 = 1 - lVar13;
        if ((long)uVar19 < 0x75) {
          iVar8 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(uVar17 << ((ulong)(0x40 - iVar8) & 0x3f) != 0);
            uVar17 = uVar21 << ((ulong)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
            uVar15 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar17 | uVar11;
            if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_001025b4;
            if ((uVar15 >> 0x33 & 1) == 0) goto LAB_001026fc;
LAB_00102768:
            uVar6 = (ulong)(uVar5 | 0x18);
            uVar17 = 1;
            uVar15 = 0;
            uVar11 = 0;
          }
          else {
            uVar11 = uVar17 | uVar21 << ((ulong)(0x80 - iVar8) & 0x3f);
            if (uVar19 == 0x40) {
              uVar11 = uVar17;
            }
            uVar21 = uVar21 >> ((ulong)(iVar8 - 0x40) & 0x3f);
            uVar19 = uVar11 != 0 | uVar21;
            uVar15 = 0;
            if ((ulong)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_001026fc:
              uVar17 = 0;
              uVar4 = 0;
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
              if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_0010217c;
              uVar6 = (ulong)(uVar5 | 8);
            }
            else {
              uVar15 = 0;
LAB_001025b4:
              uVar18 = uVar18 & 0xc00000;
              if (uVar18 == 0x400000) {
                if (uVar22 == 0) {
LAB_0010275c:
                  bVar3 = 0xfffffffffffffff7 < uVar19;
                  uVar19 = uVar19 + 8;
                  if (bVar3) {
                    uVar15 = uVar15 + 1;
                  }
                }
              }
              else if (uVar18 == 0x800000) {
                if (uVar22 != 0) goto LAB_0010275c;
              }
              else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
                      (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
                uVar15 = uVar15 + 1;
              }
              if ((uVar15 >> 0x33 & 1) != 0) goto LAB_00102768;
              uVar6 = (ulong)(uVar5 | 0x18);
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar17 = 0;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
            }
          }
        }
        else {
          uVar11 = 0;
          if (uVar17 != 0 || uVar21 != 0) {
            uVar5 = uVar5 | 0x10;
            uVar11 = 1 - uVar22;
            if (((uVar18 & 0xc00000) != 0x400000) &&
               (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
              uVar11 = 0;
            }
          }
          uVar6 = (ulong)(uVar5 | 8);
          uVar17 = 0;
          uVar15 = 0;
        }
      }
      else {
        if ((uVar17 & 7) != 0) {
          uVar19 = uVar18 & 0xc00000;
          uVar6 = (ulong)(uVar5 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar22 == 0) {
LAB_0010274c:
              bVar3 = 0xfffffffffffffff7 < uVar17;
              uVar17 = uVar17 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar22 != 0) goto LAB_0010274c;
          }
          else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
                  (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
            uVar21 = uVar21 + 1;
          }
        }
        if ((uVar21 >> 0x34 & 1) != 0) {
          uVar21 = uVar21 & 0xffefffffffffffff;
          lVar13 = lVar20 + 0x4000;
        }
        if (lVar13 < 0x7fff) {
          uVar15 = uVar21 >> 3 & 0xffffffffffff;
          uVar4 = (uint)lVar13 & 0x7fff;
          uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
          goto LAB_0010217c;
        }
        uVar18 = uVar18 & 0xc00000;
        uVar4 = 0x7ffe;
        if (uVar18 == 0x400000) {
          bVar3 = uVar22 != 0;
          if (!bVar3) {
            uVar4 = 0x7fff;
          }
          uVar17 = (ulong)uVar4;
          uVar15 = 0xffffffffffff;
          if (!bVar3) {
            uVar15 = 0;
          }
          uVar11 = -(ulong)bVar3;
        }
        else if (uVar18 == 0x800000) {
          bVar3 = uVar22 == 0;
          if (!bVar3) {
            uVar4 = 0x7fff;
          }
          uVar17 = (ulong)uVar4;
          uVar15 = 0xffffffffffff;
          if (!bVar3) {
            uVar15 = 0;
          }
          uVar11 = -(ulong)bVar3;
        }
        else {
          uVar17 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar17 = 0x7ffe;
            uVar15 = 0xffffffffffff;
            uVar11 = 0xffffffffffffffff;
          }
        }
        uVar6 = (ulong)((uint)uVar6 | 0x14);
      }
      uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
      goto LAB_00102634;
    }
LAB_00102100:
    if (uVar7 != 0xb) {
LAB_00102108:
      uVar25 = uVar11;
      uVar21 = uVar19;
      uVar26 = uVar10;
      lVar9 = lVar24;
      goto LAB_0010220c;
    }
LAB_00102228:
    uVar22 = uVar14;
    if (lVar12 == 3) {
      uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
    else {
LAB_00102168:
      lVar20 = lVar23;
      if (lVar12 != 1) goto LAB_001023cc;
      uVar4 = 0;
      uVar15 = 0;
      uVar11 = 0;
      uVar10 = uVar22;
    }
  }
  else {
    if (iVar8 != 0x7fff) {
      lVar20 = (uVar22 - 0x3fff) + lVar13;
      uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
      uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
      uVar17 = uVar17 << 3;
      lVar23 = lVar20 + 1;
      lVar12 = 0;
      if (10 < uVar7) goto LAB_00102100;
      goto LAB_0010214c;
    }
    lVar20 = lVar13 + 0x7fff;
    if (uVar17 != 0 || uVar15 != 0) {
      uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
      uVar7 = uVar7 | 3;
      lVar23 = lVar13 + 0x8000;
      uVar4 = (uint)uVar6;
      if ((uVar21 & 0x800000000000) == 0) {
        uVar4 = 1;
      }
      uVar6 = (ulong)uVar4;
      lVar12 = 3;
      if (10 < uVar7) {
        lVar9 = 3;
        goto LAB_001027a4;
      }
      goto LAB_001021c8;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    uVar7 = uVar7 | 2;
    lVar23 = lVar13 + 0x8000;
    uVar17 = 0;
    if (uVar7 < 0xb) {
      uVar21 = 0;
      lVar12 = 2;
      goto LAB_0010214c;
    }
    lVar9 = 2;
    uVar15 = 0;
LAB_001027a4:
    lVar23 = lVar13 + 0x8000;
    if (uVar7 != 0xf) {
      uVar25 = uVar17;
      uVar21 = uVar15;
      uVar26 = uVar14;
      if (uVar7 != 0xb) goto LAB_00102108;
      goto LAB_0010220c;
    }
    if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
      uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
    }
    else {
      uVar15 = uVar15 | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
  }
LAB_0010217c:
  uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
  if ((int)uVar6 == 0) {
    auVar31._8_8_ = uVar15;
    auVar31._0_8_ = uVar11;
    return auVar31;
  }
LAB_00102634:
  __sfp_handle_exceptions(uVar6);
  auVar2._8_8_ = uVar15;
  auVar2._0_8_ = uVar11;
  return auVar2;
}



/* Function: __sfp_handle_exceptions @ 00102840 */

ulong __sfp_handle_exceptions(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  return param_1;
}



/* Function: _fini @ 001028b0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 67 */
