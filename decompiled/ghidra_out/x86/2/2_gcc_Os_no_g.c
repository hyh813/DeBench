/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 000110d0 */

undefined4 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _start @ 00011100 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011140 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001115b) */
/* WARNING: Removing unreachable block (ram,0x00011165) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111ae) */
/* WARNING: Removing unreachable block (ram,0x000111b8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111d0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001122c) */
/* WARNING: Removing unreachable block (ram,0x00011230) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 00011271 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: process_int @ 0001127f */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: complex_callback @ 0001128e */

bool complex_callback(int *param_1,int *param_2)

{
  *param_1 = *param_1 + 10;
  return *param_2 != 0;
}



/* Function: process_char @ 000112a9 */

int process_char(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (0x19 < (byte)((char)param_1 + 0xbfU)) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Function: process_short @ 000112c4 */

int process_short(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: process_long @ 000112d3 */

int process_long(int param_1)

{
  return param_1 * 2;
}



/* Function: process_ll @ 000112e1 */

undefined8 process_ll(uint param_1,int param_2)

{
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 000112fa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_float(float param_1)

{
  return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}



/* Function: process_double @ 00011322 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_double(double param_1)

{
  return (longdouble)0.1 + (longdouble)0.5 * (longdouble)param_1;
}



/* Function: process_ld @ 0001134c */

longdouble process_ld(longdouble param_1)

{
  return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 0001135e */

uint process_bool(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (0 < (int)param_1) {
    uVar1 = ~param_1 & 1;
  }
  return uVar1;
}



/* Function: const_param @ 0001137a */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 0001138b */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 0001139d */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_data_types_l1(void)

{
  puts(&DAT_00013008);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
  __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
  __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
  __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
  __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
  __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
  __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
  __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0xa0000000,0x4002);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 000114ec */

int array_1d_stack(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: array_string @ 00011509 */

void array_string(int param_1)

{
  int iVar1;
  
  for (iVar1 = 0; *(char *)(param_1 + iVar1) != '\0'; iVar1 = iVar1 + 1) {
  }
  return;
}



/* Function: array_2d_stack @ 00011520 */

int array_2d_stack(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1 + 0x6e;
  do {
    iVar2 = iVar2 + *param_1;
    param_1 = param_1 + 0xb;
  } while (param_1 != piVar1);
  return iVar2;
}



/* Function: array_3d @ 0001153f */

int array_3d(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar2 = param_1 + 0x7d;
  do {
    piVar1 = param_1 + 0x19;
    piVar4 = param_1;
    do {
      param_1 = piVar4 + 5;
      iVar3 = iVar3 + *piVar4 + piVar4[1] + piVar4[2] + piVar4[3] + piVar4[4];
      piVar4 = param_1;
    } while (param_1 != piVar1);
  } while (piVar2 != param_1);
  return iVar3;
}



/* Function: array_vla @ 00011571 */

int array_vla(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_2 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: array_pointer @ 0001158e */

int array_pointer(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 0x28);
  }
  return iVar2;
}



/* Function: pointer_array @ 000115b0 */

int pointer_array(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 10;
  if (param_2 < 0xb) {
    iVar3 = param_2;
  }
  iVar2 = 0;
  for (iVar4 = 0; iVar4 < iVar3; iVar4 = iVar4 + 1) {
    piVar1 = *(int **)(param_1 + iVar4 * 4);
    if (piVar1 != (int *)0x0) {
      iVar2 = iVar2 + *piVar1;
    }
  }
  return iVar2;
}



/* Function: array_complex_index @ 000115e1 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
    uVar1 = *(undefined4 *)(param_1 + (param_2 * param_5 + param_4) * 4);
  }
  return uVar1;
}



/* Function: array_oob @ 00011615 */

int array_oob(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 <= param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: test_array_types @ 00011632 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_array_types(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_GS_OFFSET;
  byte bVar8;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500 [5];
  undefined4 *local_4ec;
  undefined4 *local_4e8;
  undefined4 *local_4e4;
  undefined4 local_4e0 [7];
  int aiStack_4c4 [20];
  undefined4 local_474 [10];
  undefined4 local_44c;
  undefined4 local_424;
  undefined4 local_3fc;
  undefined4 local_3d4;
  undefined1 local_3ac [400];
  undefined4 local_21c [125];
  undefined1 local_28 [2];
  undefined4 local_26;
  undefined2 local_22;
  int local_20;
  undefined4 uStack_14;
  
  bVar8 = 0;
  uStack_14 = 0x11647;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013173);
  puVar6 = &DAT_0001360c;
  puVar3 = local_500;
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar8 * -2 + 1;
  }
  uVar1 = array_1d_stack(local_500,5);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
  local_26 = 0x6c6c6568;
  local_22 = 0x6f;
  uVar1 = array_string(&local_26);
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
  iVar4 = 0;
  puVar5 = local_3ac;
  do {
    iVar2 = 0;
    do {
      iVar7 = 0;
      if (iVar2 == iVar4) {
        iVar7 = iVar2;
      }
      *(int *)(puVar5 + iVar2 * 4) = iVar7;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 0x28;
  } while (iVar4 != 10);
  uVar1 = array_2d_stack(local_3ac);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
  puVar6 = local_21c;
  do {
    iVar4 = 0;
    puVar3 = puVar6;
    do {
      iVar4 = iVar4 + 1;
      *puVar3 = 1;
      puVar3[1] = 1;
      puVar3[2] = 1;
      puVar3[3] = 1;
      puVar3[4] = 1;
      puVar3 = puVar3 + 5;
    } while (iVar4 != 5);
    puVar6 = puVar6 + 0x19;
  } while ((undefined4 *)local_28 != puVar6);
  uVar1 = array_3d(local_21c);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",uVar1);
  local_50c = 10;
  local_508 = 0x14;
  local_504 = 0x1e;
  uVar1 = array_vla(3,&local_50c);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",uVar1);
  local_474[0] = 0;
  local_44c = 10;
  local_424 = 0x14;
  local_3fc = 0x1e;
  local_3d4 = 0x28;
  uVar1 = array_pointer(local_474,5);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",uVar1);
  local_518 = 10;
  puVar6 = local_4e0;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  local_4ec = &local_518;
  local_514 = 0x14;
  local_4e8 = &local_514;
  local_4e4 = &local_510;
  local_510 = 0x1e;
  uVar1 = pointer_array(&local_4ec,3);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
  iVar4 = 0;
  do {
    aiStack_4c4[iVar4] = iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",aiStack_4c4[0x11],0x14);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: ptr_single @ 000118af */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 000118c0 */

int ptr_double(undefined4 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 000118d3 */

int ptr_triple(undefined4 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 000118e6 */

int ptr_increment(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: ptr_offset @ 00011903 */

undefined4 ptr_offset(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011915 */

int ptr_diff(int param_1,int param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011927 */

int ptr_void(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = -1;
    if (param_2 == 1) {
      iVar1 = (int)(char)*param_1;
    }
  }
  return iVar1;
}



/* Function: ptr_const @ 00011947 */

int ptr_const(int *param_1)

{
  return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00011957 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 0001196a */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001197b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: ptr_func_complex @ 0001197d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
  int in_GS_OFFSET;
  undefined *local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14 = 0;
  local_18 = &DAT_00013284;
  (*param_1)(param_2,&local_18);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: ptr_cast @ 000119ca */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 000119d8 */

undefined4 opaque_handle_create(undefined4 param_1)

{
  return param_1;
}



/* Function: opaque_handle_op @ 000119e4 */

int opaque_handle_op(int param_1)

{
  return param_1 * 2;
}



/* Function: test_pointer_types @ 000119f2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_pointer_types(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  byte bVar5;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 **local_3c;
  undefined4 local_38;
  undefined4 local_34 [5];
  int local_20;
  undefined4 uStack_14;
  
  bVar5 = 0;
  uStack_14 = 0x11a04;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013289);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  local_40 = &local_44;
  local_44 = 5;
  local_3c = &local_40;
  uVar1 = ptr_triple(&local_3c);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
  puVar3 = &DAT_0001360c;
  puVar4 = local_34;
  for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = ptr_increment(local_34,5);
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
  __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
  __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
  __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
  __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  uVar1 = ptr_func_simple(double_value,5);
  __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
  local_38 = 5;
  uVar1 = ptr_func_complex(complex_callback,&local_38);
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: struct_simple @ 00011ba4 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00011bb8 */

int struct_array(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + param_1[1] + *param_1 + param_1[2];
    param_1 = param_1 + 3;
  }
  return iVar1;
}



/* Function: struct_nested @ 00011be1 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00011bf2 */

int struct_deep(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00011c04 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    iVar1 = *(int *)param_1[1];
  }
  return *param_1 + iVar1;
}



/* Function: struct_bitfields @ 00011c1f */

int struct_bitfields(uint *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*param_1;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6 & 0x3ff);
}



/* Function: union_type @ 00011c50 */

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



/* Function: union_array @ 00011c8e */

int union_array(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: enum_type @ 00011cab */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 00011cb8 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

int enum_switch(uint param_1)

{
  int iVar1;
  
  iVar1 = -99;
  if (param_1 < 4) {
    iVar1 = (int)*(char *)((int)&CSWTCH_78 + param_1);
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 00011ce1 */

void struct_func_ptr(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 4))();
  return;
}



/* Function: linked_list @ 00011cf6 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011d11 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011d2c */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
    iVar1 = binary_tree_sum(param_1[1]);
    iVar2 = iVar2 + iVar1 + *param_1;
  }
  return iVar2;
}



/* Function: graph_traverse @ 00011d64 */

int graph_traverse(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x28); iVar1 = iVar1 + 1) {
    for (piVar3 = *(int **)(param_1 + iVar1 * 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      iVar2 = iVar2 + *piVar3;
    }
  }
  return iVar2;
}



/* Function: test_composite_types @ 00011d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_composite_types(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_GS_OFFSET;
  byte bVar5;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  undefined2 local_c4 [2];
  uint local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0 [3];
  undefined4 local_94 [6];
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48 [9];
  undefined4 local_24;
  int local_20;
  undefined4 uStack_14;
  
  bVar5 = 0;
  uStack_14 = 0x11da7;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013422);
  __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
  puVar3 = &DAT_00013620;
  puVar4 = local_94;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = struct_array(local_94,2);
  __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
  __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
  __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
  local_c8 = &local_d4;
  local_d4 = 0x14;
  local_d0 = 0;
  local_cc = 10;
  uVar1 = struct_with_ptr(&local_cc);
  __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
  local_c0 = local_c0 & 0xfff00000;
  local_c4[0] = 0x191d;
  uVar1 = struct_bitfields(local_c4);
  __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
  __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
  puVar3 = &DAT_00013638;
  puVar4 = local_a0;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  uVar1 = union_array(local_a0,3);
  __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
  __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
  __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
  local_b8 = process_int;
  local_bc = 10;
  uVar1 = struct_func_ptr(&local_bc);
  __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
  local_78 = &local_74;
  local_7c = 10;
  local_70 = &local_6c;
  local_74 = 0x14;
  local_6c = 0x1e;
  local_68 = 0;
  uVar1 = linked_list(&local_7c);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
  local_60 = &local_58;
  local_50 = &local_64;
  local_64 = 10;
  local_5c = 0;
  local_58 = 0x14;
  local_54 = 0;
  uVar1 = doubly_linked_list(local_50);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
  local_ac = 100;
  local_a8 = 0;
  local_a4 = 0;
  uVar1 = binary_tree_sum(&local_ac);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
  local_b4 = 1;
  local_b0 = 0;
  puVar3 = local_48;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
  }
  local_4c = &local_b4;
  local_24 = 2;
  uVar1 = graph_traverse(&local_4c);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012091 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012095 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 000120a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 000120c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000120da) */
/* WARNING: Removing unreachable block (ram,0x000120f0) */
/* WARNING: Removing unreachable block (ram,0x000120fd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001210c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 71 */
