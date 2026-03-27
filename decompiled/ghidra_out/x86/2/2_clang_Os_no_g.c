/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_clang_Os_no_g
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



/* Function: _start @ 00011080 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000110c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000110db) */
/* WARNING: Removing unreachable block (ram,0x000110e5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011100 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112e) */
/* WARNING: Removing unreachable block (ram,0x00011138) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111ac) */
/* WARNING: Removing unreachable block (ram,0x000111b0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000111e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000111ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: process_char @ 000111f4 */

uint process_char(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)((char)param_1 + 0x20);
  if (0x19 < (byte)((char)param_1 + 0xbfU)) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Function: process_short @ 0001120a */

short process_short(short param_1,short param_2)

{
  return param_2 + param_1;
}



/* Function: process_int @ 00011215 */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: process_long @ 0001121d */

int process_long(int param_1)

{
  return param_1 * 2;
}



/* Function: process_ll @ 00011224 */

undefined8 process_ll(uint param_1,int param_2)

{
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: FUN_0001123f @ 0001123f */

longdouble FUN_0001123f(undefined4 param_1,float param_2)

{
  int unaff_retaddr;
  
  return (longdouble)param_2 * (longdouble)*(float *)(unaff_retaddr + 0xdc9) +
         (longdouble)*(float *)(unaff_retaddr + 0xdcd);
}



/* Function: FUN_0001125c @ 0001125c */

longdouble FUN_0001125c(undefined4 param_1,double param_2)

{
  int unaff_retaddr;
  
  return (longdouble)param_2 * (longdouble)*(float *)(unaff_retaddr + 0xdb0) +
         (longdouble)*(double *)(unaff_retaddr + 0xdbc);
}



/* Function: process_ld @ 00011274 */

longdouble process_ld(longdouble param_1)

{
  return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 0001127f */

bool process_bool(uint param_1)

{
  return (param_1 & 1) == 0 && 0 < (int)param_1;
}



/* Function: const_param @ 00011290 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 0001129a */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 000112a3 */

void test_data_types_l1(void)

{
  longdouble lVar1;
  
  puts(&DAT_000125bf);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n",10000,0);
  printf("DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
  printf("DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
  lVar1 = (longdouble)10.0;
  printf("DT-L1-08 (process_ld): %.2Lf\n",SUB104(lVar1,0),(int)((unkuint10)lVar1 >> 0x20),
         (short)((unkuint10)lVar1 >> 0x40));
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
  printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 000113d6 */

int array_1d_stack(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return iVar1;
}



/* Function: array_string @ 000113f5 */

void array_string(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = -1;
  do {
    pcVar1 = (char *)(param_1 + 1 + iVar2);
    iVar2 = iVar2 + 1;
  } while (*pcVar1 != '\0');
  return;
}



/* Function: array_2d_stack @ 00011407 */

int array_2d_stack(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)(param_1 + iVar2);
    iVar2 = iVar2 + 0x2c;
  } while (iVar2 != 0x1b8);
  return iVar1;
}



/* Function: array_3d @ 0001141e */

int array_3d(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar5 = 0;
    iVar4 = param_1;
    do {
      iVar3 = 0;
      do {
        iVar1 = iVar1 + *(int *)(iVar4 + iVar3 * 4);
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x14;
    } while (iVar5 != 5);
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 100;
  } while (iVar2 != 5);
  return iVar1;
}



/* Function: array_vla @ 0001144e */

int array_vla(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_1 != iVar2);
  }
  return iVar1;
}



/* Function: array_pointer @ 0001146d */

int array_pointer(int *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *param_1;
      param_1 = param_1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: pointer_array @ 00011487 */

int pointer_array(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((int)param_2 < 1) {
    iVar2 = 0;
  }
  else {
    uVar3 = 10;
    if (param_2 < 10) {
      uVar3 = param_2;
    }
    uVar4 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + uVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = iVar2 + *piVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return iVar2;
}



/* Function: array_complex_index @ 000114b9 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
    uVar1 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
  }
  return uVar1;
}



/* Function: array_oob @ 000114e9 */

int array_oob(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 + 1 != iVar2);
  }
  return iVar1;
}



/* Function: test_array_types @ 00011509 */

/* WARNING: Type propagation algorithm not settling */

void test_array_types(void)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined4 ****ppppuVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 ****local_4dc [12];
  int aiStack_4ac [20];
  int aiStack_45c [50];
  int local_394 [100];
  undefined1 local_204 [500];
  
  puts(&DAT_000125e0);
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
  iVar1 = 0;
  piVar2 = local_394;
  do {
    iVar5 = 0;
    do {
      iVar8 = 0;
      if (iVar1 == iVar5) {
        iVar8 = iVar1;
      }
      piVar2[iVar5] = iVar8;
      iVar5 = iVar5 + 1;
    } while (iVar5 != 10);
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar1 != 10);
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)((int)local_394 + iVar5);
    iVar5 = iVar5 + 0x2c;
  } while (iVar5 != 0x1b8);
  printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
  iVar1 = 0;
  puVar3 = local_204;
  do {
    iVar5 = 0;
    puVar6 = puVar3;
    do {
      iVar8 = 0;
      do {
        *(undefined4 *)(puVar6 + iVar8 * 4) = 1;
        iVar8 = iVar8 + 1;
      } while (iVar8 != 5);
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 0x14;
    } while (iVar5 != 5);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 100;
  } while (iVar1 != 5);
  iVar1 = 0;
  puVar3 = local_204;
  iVar5 = 0;
  do {
    iVar8 = 0;
    puVar6 = puVar3;
    do {
      iVar7 = 0;
      do {
        iVar5 = iVar5 + *(int *)(puVar6 + iVar7 * 4);
        iVar7 = iVar7 + 1;
      } while (iVar7 != 5);
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 0x14;
    } while (iVar8 != 5);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 100;
  } while (iVar1 != 5);
  printf("ARR-L1-04 (array_3d): %d\n",iVar5);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  iVar1 = 0;
  do {
    aiStack_45c[iVar1] = iVar1;
    iVar1 = iVar1 + 10;
  } while (iVar1 != 0x32);
  iVar5 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)((int)aiStack_45c + iVar5);
    iVar5 = iVar5 + 0x28;
  } while (iVar5 != 200);
  printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
  ppppuVar4 = local_4dc + 0xb;
  local_4dc[0xb] = (undefined4 ****)0xa;
  local_4dc[10] = (undefined4 ****)0x14;
  local_4dc[9] = (undefined4 ****)0x1e;
  local_4dc[0] = local_4dc + 10;
  local_4dc[1] = local_4dc + 9;
  iVar1 = 0;
  local_4dc[2] = (undefined4 ****)0x0;
  local_4dc[3] = (undefined4 ****)0x0;
  local_4dc[4] = (undefined4 ****)0x0;
  local_4dc[5] = (undefined4 ****)0x0;
  local_4dc[6] = (undefined4 ****)0x0;
  local_4dc[7] = (undefined4 ****)0x0;
  local_4dc[8] = (undefined4 ****)0x0;
  iVar5 = 0;
  while( true ) {
    if (ppppuVar4 != (undefined4 ****)0x0) {
      iVar5 = iVar5 + (int)*ppppuVar4;
    }
    if (iVar1 == 2) break;
    ppppuVar4 = local_4dc[iVar1];
    iVar1 = iVar1 + 1;
  }
  printf("ARR-L2-03 (pointer_array): %d\n",iVar5);
  iVar1 = 0;
  do {
    aiStack_4ac[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  printf("ARR-L2-04 (array_complex_index): %d\n",aiStack_4ac[0x11]);
  return;
}



/* Function: ptr_single @ 00011701 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 0001170b */

int ptr_double(undefined4 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00011717 */

int ptr_triple(undefined4 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011723 */

int ptr_increment(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return iVar1;
}



/* Function: ptr_offset @ 00011742 */

undefined4 ptr_offset(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 0001174e */

int ptr_diff(int param_1,int param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 0001175a */

int ptr_void(int *param_1,int param_2)

{
  if (param_2 == 1) {
    return (int)(char)*param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return -1;
}



/* Function: ptr_const @ 00011776 */

int ptr_const(int *param_1)

{
  return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 0001177f */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 0001178b */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: ptr_func_complex @ 000117ab */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
  undefined *local_14;
  undefined4 local_10;
  
  local_14 = &DAT_00012270;
  local_10 = 0;
  (*param_1)(param_2,&local_14);
  return;
}



/* Function: ptr_cast @ 000117e4 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 000117eb */

undefined4 opaque_handle_create(undefined4 param_1)

{
  return param_1;
}



/* Function: opaque_handle_op @ 000117f0 */

int opaque_handle_op(int param_1)

{
  return param_1 * 2;
}



/* Function: test_pointer_types @ 000117f7 */

void test_pointer_types(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 local_20;
  int aiStack_1c [4];
  
  bVar5 = 0;
  puts(&DAT_000125fb);
  printf("PTR-L2-01 (ptr_single): %d\n",0xf);
  printf("PTR-L2-02 (ptr_double): %d\n",0xf);
  printf("PTR-L2-03 (ptr_triple): %d\n",6);
  puVar3 = &DAT_00012634;
  puVar4 = &local_20;
  for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  iVar1 = 1;
  iVar2 = 0;
  do {
    iVar1 = iVar1 + aiStack_1c[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  printf("PTR-L2-04 (ptr_increment): %d\n",iVar1);
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



/* Function: struct_simple @ 00011962 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 0001196f */

int struct_array(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (0 < param_2) {
    piVar2 = (int *)(param_1 + 8);
    iVar1 = 0;
    do {
      iVar1 = iVar1 + piVar2[-2] + piVar2[-1] + *piVar2;
      piVar2 = piVar2 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: struct_nested @ 00011992 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 0001199c */

int struct_deep(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 000119a7 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  if ((int *)param_1[1] == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)param_1[1];
  }
  return iVar1 + *param_1;
}



/* Function: struct_bitfields @ 000119bd */

short struct_bitfields(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 000119e4 */

float union_type(float *param_1,int param_2)

{
  float fVar1;
  
  if (param_2 == 1) {
    fVar1 = (float)(int)ROUND(*param_1);
  }
  else if (param_2 == 0) {
    fVar1 = *param_1;
  }
  else {
    fVar1 = (float)(int)*(char *)param_1;
  }
  return fVar1;
}



/* Function: union_array @ 00011a27 */

int union_array(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return iVar1;
}



/* Function: enum_type @ 00011a46 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: FUN_00011a55 @ 00011a55 */

undefined4 FUN_00011a55(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int unaff_retaddr;
  
  uVar1 = 0xffffff9d;
  if (param_2 < 4) {
    uVar1 = *(undefined4 *)(unaff_retaddr + 0xbff + param_2 * 4);
  }
  return uVar1;
}



/* Function: struct_func_ptr @ 00011a72 */

void struct_func_ptr(undefined4 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return;
}



/* Function: linked_list @ 00011a93 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011aa5 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011ab7 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
    iVar1 = *param_1;
    iVar2 = binary_tree_sum(param_1[1]);
    iVar3 = iVar3 + iVar1 + iVar2;
  }
  return iVar3;
}



/* Function: binary_tree @ 00011af0 */

void binary_tree(undefined4 param_1)

{
  binary_tree_sum(param_1);
  return;
}



/* Function: graph_traverse @ 00011b11 */

int graph_traverse(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      for (piVar3 = *(int **)(param_1 + iVar2 * 4); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1])
      {
        iVar1 = iVar1 + *piVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != *(int *)(param_1 + 0x28));
  }
  return iVar1;
}



/* Function: test_composite_types @ 00011b3c */

void test_composite_types(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int local_84 [3];
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c [12];
  
  bVar6 = 0;
  puts(&DAT_00012616);
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
  piVar1 = local_84 + 2;
  local_84[2] = 10;
  local_78 = &local_74;
  local_74 = 0x14;
  local_70 = &local_6c;
  local_6c = 0x1e;
  local_68 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-12 (linked_list): %d\n",iVar3);
  piVar1 = &local_54;
  local_54 = 10;
  iVar3 = 0;
  local_4c = 0;
  local_48 = 0x14;
  local_44 = 0;
  local_40 = piVar1;
  local_50 = &local_48;
  do {
    iVar3 = iVar3 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
  local_5c = 0;
  local_60 = 0;
  local_64 = 100;
  uVar2 = binary_tree_sum(&local_64);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
  piVar1 = local_84;
  local_84[1] = 0;
  local_84[0] = 1;
  iVar4 = 0;
  puVar5 = local_3c;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  iVar3 = 0;
  while( true ) {
    for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar3 = iVar3 + *piVar1;
    }
    iVar4 = iVar4 + 1;
    if (iVar4 == 2) break;
    piVar1 = (int *)local_3c[iVar4];
  }
  printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
  return;
}



/* Function: main @ 00011d68 */

undefined4 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011dba) */
/* WARNING: Removing unreachable block (ram,0x00011dd0) */
/* WARNING: Removing unreachable block (ram,0x00011ddd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011dec */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 67 */
