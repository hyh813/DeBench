/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O1_no_g
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



/* Function: _start @ 000110d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011110 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112b) */
/* WARNING: Removing unreachable block (ram,0x00011135) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001117e) */
/* WARNING: Removing unreachable block (ram,0x00011188) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111fc) */
/* WARNING: Removing unreachable block (ram,0x00011200) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 00011241 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: process_int @ 0001124c */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: complex_callback @ 00011259 */

bool complex_callback(int *param_1,int *param_2)

{
  *param_1 = *param_1 + 10;
  return *param_2 != 0;
}



/* Function: process_char @ 00011272 */

int process_char(int param_1)

{
  if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



/* Function: process_short @ 00011287 */

short process_short(short param_1,short param_2)

{
  return param_2 + param_1;
}



/* Function: process_long @ 00011295 */

int process_long(int param_1)

{
  return param_1 * 2;
}



/* Function: process_ll @ 000112a0 */

undefined8 process_ll(uint param_1,int param_2)

{
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_1 * param_2 * 2,
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 000112b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_float(float param_1)

{
  return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}



/* Function: process_double @ 000112e0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_double(double param_1)

{
  return (longdouble)0.1 + (longdouble)0.5 * (longdouble)param_1;
}



/* Function: process_ld @ 0001130a */

longdouble process_ld(longdouble param_1)

{
  return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 00011319 */

uint process_bool(uint param_1)

{
  uint uVar1;
  
  uVar1 = ~param_1 & 1;
  if ((int)param_1 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: const_param @ 00011336 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 00011344 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00011353 */

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



/* Function: array_1d_stack @ 0001149e */

int array_1d_stack(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = param_1 + param_2;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
  }
  return iVar2;
}



/* Function: array_string @ 000114cb */

int array_string(char *param_1)

{
  int iVar1;
  
  if (*param_1 != '\0') {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
    } while (param_1[iVar1] != '\0');
    return iVar1;
  }
  return 0;
}



/* Function: array_2d_stack @ 000114ed */

int array_2d_stack(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 0x6e;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + *param_1;
    param_1 = param_1 + 0xb;
  } while (param_1 != piVar1);
  return iVar2;
}



/* Function: array_3d @ 0001150e */

int array_3d(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)(param_1 + 100);
  iVar1 = 0;
  do {
    piVar3 = piVar2 + -0x19;
    do {
      iVar1 = iVar1 + *piVar3 + piVar3[1] + piVar3[2] + piVar3[3] + piVar3[4];
      piVar3 = piVar3 + 5;
    } while (piVar3 != piVar2);
    piVar2 = piVar2 + 0x19;
  } while (piVar2 != (int *)(param_1 + 600));
  return iVar1;
}



/* Function: array_vla @ 00011546 */

int array_vla(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = param_2 + param_1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_2;
      param_2 = param_2 + 1;
    } while (param_2 != piVar1);
  }
  return iVar2;
}



/* Function: array_pointer @ 00011573 */

int array_pointer(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = param_1 + param_2 * 10;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 10;
    } while (param_1 != piVar1);
  }
  return iVar2;
}



/* Function: pointer_array @ 000115a3 */

int pointer_array(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 10;
  if (param_2 < 0xb) {
    iVar4 = param_2;
  }
  if (param_2 < 1) {
    iVar3 = 0;
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    do {
      piVar1 = *(int **)(param_1 + iVar2 * 4);
      if (piVar1 != (int *)0x0) {
        iVar3 = iVar3 + *piVar1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return iVar3;
}



/* Function: array_complex_index @ 000115e7 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (((int)(param_4 | param_5) < 0) || (param_2 <= (int)param_4)) {
    uVar1 = 0xffffffff;
  }
  else if ((int)param_5 < param_3) {
    uVar1 = *(undefined4 *)(param_1 + (param_2 * param_5 + param_4) * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: array_oob @ 00011624 */

int array_oob(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    piVar1 = param_1 + param_2 + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
  }
  return iVar2;
}



/* Function: test_array_types @ 00011652 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_array_types(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  int in_GS_OFFSET;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  undefined4 local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 *local_4ec;
  undefined4 *local_4e8;
  undefined4 *local_4e4;
  undefined4 auStack_4e0 [7];
  int aiStack_4c4 [20];
  undefined4 local_474 [10];
  undefined4 local_44c;
  undefined4 local_424;
  undefined4 local_3fc;
  undefined4 local_3d4;
  undefined1 local_3ac [400];
  undefined1 local_21c [100];
  undefined4 local_1b8 [100];
  undefined4 local_26;
  undefined2 local_22;
  int local_20;
  
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000133bd);
  local_500 = 1;
  local_4fc = 2;
  local_4f8 = 3;
  local_4f4 = 4;
  local_4f0 = 5;
  uVar1 = array_1d_stack(&local_500,5);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",uVar1);
  local_26 = 0x6c6c6568;
  local_22 = 0x6f;
  uVar1 = array_string(&local_26);
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar1);
  puVar8 = local_3ac;
  iVar5 = 0;
  do {
    iVar2 = 0;
    do {
      iVar6 = 0;
      if (iVar5 == iVar2) {
        iVar6 = iVar2;
      }
      *(int *)(puVar8 + iVar2 * 4) = iVar6;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 10);
    iVar5 = iVar5 + 1;
    puVar8 = puVar8 + 0x28;
  } while (iVar5 != 10);
  uVar1 = array_2d_stack(local_3ac);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",uVar1);
  puVar7 = local_1b8;
  do {
    puVar3 = puVar7 + -0x19;
    do {
      *puVar3 = 1;
      puVar3[1] = 1;
      puVar3[2] = 1;
      puVar3[3] = 1;
      puVar3[4] = 1;
      puVar3 = puVar3 + 5;
    } while (puVar7 != puVar3);
    puVar7 = puVar7 + 0x19;
  } while (puVar7 != (undefined4 *)&stack0x0000003c);
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
  local_514 = 0x14;
  local_510 = 0x1e;
  uVar4 = 0;
  do {
    *(undefined4 *)((int)auStack_4e0 + uVar4) = 0;
    uVar4 = uVar4 + 4;
  } while (uVar4 < 0x1c);
  local_4ec = &local_518;
  local_4e8 = &local_514;
  local_4e4 = &local_510;
  uVar1 = pointer_array(&local_4ec,3);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",uVar1);
  iVar5 = 0;
  do {
    aiStack_4c4[iVar5] = iVar5;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",aiStack_4c4[0x11]);
  if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_single @ 0001191f */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 0001192d */

int ptr_double(undefined4 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 0001193d */

int ptr_triple(undefined4 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 0001194f */

int ptr_increment(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
  }
  return iVar2;
}



/* Function: ptr_offset @ 0001197f */

undefined4 ptr_offset(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 0001198f */

int ptr_diff(int param_1,int param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 0001199f */

int ptr_void(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return (int)(char)*param_1;
  }
  return -1;
}



/* Function: ptr_const @ 000119c5 */

int ptr_const(int *param_1)

{
  return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 000119d2 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 000119e2 */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: ptr_func_complex @ 000119f5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
  int in_GS_OFFSET;
  undefined *local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_18 = &DAT_0001342b;
  local_14 = 0;
  (*param_1)(param_2,&local_18);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_cast @ 00011a4b */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00011a56 */

undefined4 opaque_handle_create(undefined4 param_1)

{
  return param_1;
}



/* Function: opaque_handle_op @ 00011a5f */

int opaque_handle_op(int param_1)

{
  return param_1 * 2;
}



/* Function: test_pointer_types @ 00011a6a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_pointer_types(void)

{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013430);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  local_34 = 5;
  local_30 = &local_34;
  local_2c = &local_30;
  uVar1 = ptr_triple(&local_2c);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",uVar1);
  local_24 = 1;
  local_20 = 2;
  local_1c = 3;
  local_18 = 4;
  local_14 = 5;
  uVar1 = ptr_increment(&local_24,5);
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",uVar1);
  __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
  __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
  __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
  __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  uVar1 = ptr_func_simple(double_value,5);
  __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
  local_28 = 5;
  uVar1 = ptr_func_complex(complex_callback,&local_28);
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: struct_simple @ 00011c3d */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00011c4e */

int struct_array(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = param_1 + param_2 * 3;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + param_1[1] + *param_1 + param_1[2];
      param_1 = param_1 + 3;
    } while (param_1 != piVar1);
  }
  return iVar2;
}



/* Function: struct_nested @ 00011c88 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00011c96 */

int struct_deep(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00011ca5 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((int *)param_1[1] != (int *)0x0) {
    iVar1 = *(int *)param_1[1];
  }
  return *param_1 + iVar1;
}



/* Function: struct_bitfields @ 00011cc0 */

short struct_bitfields(ushort *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*param_1;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00011cf0 */

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



/* Function: union_array @ 00011d3e */

int union_array(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = param_1 + param_2;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (param_1 != piVar1);
  }
  return iVar2;
}



/* Function: enum_type @ 00011d6b */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 00011d79 */

uint enum_switch(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 2) {
    return 0x32;
  }
  if (param_1 < 3) {
    return -(uint)(param_1 != 0) & 100;
  }
  uVar1 = 0xffffff9d;
  if (param_1 == 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: struct_func_ptr @ 00011daa */

void struct_func_ptr(undefined4 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return;
}



/* Function: linked_list @ 00011dbe */

int linked_list(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *param_1;
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x0);
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011de2 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *param_1;
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x0);
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011e06 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_1 != (int *)0x0) {
    iVar3 = binary_tree_sum(param_1[1]);
    iVar1 = *param_1;
    iVar2 = binary_tree_sum(param_1[2]);
    iVar2 = iVar2 + iVar3 + iVar1;
  }
  return iVar2;
}



/* Function: binary_tree @ 00011e41 */

void binary_tree(undefined4 param_1)

{
  binary_tree_sum(param_1);
  return;
}



/* Function: graph_traverse @ 00011e55 */

int graph_traverse(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)param_1[10] < 1) {
    iVar3 = 0;
  }
  else {
    puVar1 = param_1 + param_1[10];
    iVar3 = 0;
    do {
      for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        iVar3 = iVar3 + *piVar2;
      }
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
  }
  return iVar3;
}



/* Function: test_composite_types @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_composite_types(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  byte bVar4;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined2 local_b4 [2];
  uint local_b0;
  undefined4 local_ac;
  code *local_a8;
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
  undefined4 *local_3c;
  undefined4 local_38 [9];
  undefined4 local_14;
  int local_10;
  
  bVar4 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013526);
  __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
  local_84 = 1;
  local_80 = 1;
  local_7c = 1;
  local_78 = 2;
  local_74 = 2;
  local_70 = 2;
  uVar1 = struct_array(&local_84,2);
  __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",uVar1);
  __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
  __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
  local_c4 = 0x14;
  local_c0 = 0;
  local_bc = 10;
  local_b8 = &local_c4;
  uVar1 = struct_with_ptr(&local_bc);
  __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
  local_b4[0] = 0x191d;
  local_b0 = local_b0 & 0xfff00000;
  uVar1 = struct_bitfields(local_b4);
  __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",uVar1);
  __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
  local_90 = 10;
  local_8c = 0x14;
  local_88 = 0x1e;
  uVar1 = union_array(&local_90,3);
  __printf_chk(1,"CMP-L2-08 (union_array): %d\n",uVar1);
  __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
  __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
  local_ac = 10;
  local_a8 = process_int;
  uVar1 = struct_func_ptr(&local_ac);
  __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",uVar1);
  local_6c = 10;
  local_68 = &local_64;
  local_64 = 0x14;
  local_60 = &local_5c;
  local_5c = 0x1e;
  local_58 = 0;
  uVar1 = linked_list(&local_6c);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",uVar1);
  local_54 = 10;
  local_40 = &local_54;
  local_50 = &local_48;
  local_4c = 0;
  local_48 = 0x14;
  local_44 = 0;
  uVar1 = doubly_linked_list(local_40);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
  local_9c = 100;
  local_98 = 0;
  local_94 = 0;
  uVar1 = binary_tree_sum(&local_9c);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",uVar1);
  local_a4 = 1;
  local_a0 = 0;
  puVar3 = local_38;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_3c = &local_a4;
  local_14 = 2;
  uVar1 = graph_traverse(&local_3c);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",uVar1);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: main @ 000121e6 */

undefined4 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 0001220b */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012210 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012230 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001224a) */
/* WARNING: Removing unreachable block (ram,0x00012260) */
/* WARNING: Removing unreachable block (ram,0x0001226d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001227c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 71 */
