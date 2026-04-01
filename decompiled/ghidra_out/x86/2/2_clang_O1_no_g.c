/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_clang_O1_no_g
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



/* Function: process_char @ 00011200 */

uint process_char(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(byte)((char)param_1 + 0x20);
  if (0x19 < (byte)((char)param_1 + 0xbfU)) {
    uVar1 = param_1;
  }
  return uVar1;
}



/* Function: process_short @ 00011220 */

short process_short(short param_1,short param_2)

{
  return param_2 + param_1;
}



/* Function: process_int @ 00011230 */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: process_long @ 00011240 */

int process_long(int param_1)

{
  return param_1 * 2;
}



/* Function: process_ll @ 00011250 */

undefined8 process_ll(uint param_1,int param_2)

{
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: FUN_00011275 @ 00011275 */

longdouble FUN_00011275(undefined4 param_1,float param_2)

{
  int unaff_retaddr;
  
  return (longdouble)param_2 * (longdouble)*(float *)(unaff_retaddr + 0x1d93) +
         (longdouble)*(float *)(unaff_retaddr + 0x1d97);
}



/* Function: FUN_00011295 @ 00011295 */

longdouble FUN_00011295(undefined4 param_1,double param_2)

{
  int unaff_retaddr;
  
  return (longdouble)param_2 * (longdouble)*(float *)(unaff_retaddr + 0x1d77) +
         (longdouble)*(double *)(unaff_retaddr + 0x1d83);
}



/* Function: process_ld @ 000112b0 */

longdouble process_ld(longdouble param_1)

{
  return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 000112c0 */

bool process_bool(uint param_1)

{
  return (param_1 & 1) == 0 && 0 < (int)param_1;
}



/* Function: const_param @ 000112e0 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 000112f0 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 00011300 */

void test_data_types_l1(void)

{
  longdouble lVar1;
  
  puts(&DAT_000135bf);
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



/* Function: array_1d_stack @ 00011430 */

int array_1d_stack(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: array_string @ 00011460 */

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



/* Function: array_2d_stack @ 00011480 */

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



/* Function: array_3d @ 000114a0 */

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



/* Function: array_vla @ 00011500 */

int array_vla(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_1) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_1 != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: array_pointer @ 00011530 */

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



/* Function: pointer_array @ 00011550 */

int pointer_array(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 10;
    if (param_2 < 10) {
      iVar2 = param_2;
    }
    iVar3 = 1;
    if (1 < iVar2) {
      iVar3 = iVar2;
    }
    iVar4 = 0;
    iVar2 = 0;
    do {
      piVar1 = *(int **)(param_1 + iVar4 * 4);
      if (piVar1 != (int *)0x0) {
        iVar2 = iVar2 + *piVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  return iVar2;
}



/* Function: array_complex_index @ 000115a0 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((((-1 < param_4) && (param_5 < param_3)) && (param_4 < param_2)) && (-1 < param_5)) {
    uVar1 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
  }
  return uVar1;
}



/* Function: array_oob @ 000115e0 */

int array_oob(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (-1 < param_2) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 + 1 != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: test_array_types @ 00011610 */

void test_array_types(void)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 *local_4d4 [10];
  int aiStack_4ac [20];
  int aiStack_45c [50];
  int local_394 [100];
  undefined1 local_204 [500];
  
  puts(&DAT_000135e0);
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
  iVar1 = 0;
  piVar2 = local_394;
  do {
    iVar4 = 0;
    do {
      iVar7 = 0;
      if (iVar1 == iVar4) {
        iVar7 = iVar1;
      }
      piVar2[iVar4] = iVar7;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 10);
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar1 != 10);
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)((int)local_394 + iVar4);
    iVar4 = iVar4 + 0x2c;
  } while (iVar4 != 0x1b8);
  printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
  iVar1 = 0;
  puVar3 = local_204;
  do {
    iVar4 = 0;
    puVar5 = puVar3;
    do {
      iVar7 = 0;
      do {
        *(undefined4 *)(puVar5 + iVar7 * 4) = 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 != 5);
      iVar4 = iVar4 + 1;
      puVar5 = puVar5 + 0x14;
    } while (iVar4 != 5);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 100;
  } while (iVar1 != 5);
  iVar1 = 0;
  puVar3 = local_204;
  iVar4 = 0;
  do {
    iVar7 = 0;
    puVar5 = puVar3;
    do {
      iVar6 = 0;
      do {
        iVar4 = iVar4 + *(int *)(puVar5 + iVar6 * 4);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 5);
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 0x14;
    } while (iVar7 != 5);
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 100;
  } while (iVar1 != 5);
  printf("ARR-L1-04 (array_3d): %d\n",iVar4);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  iVar1 = 0;
  do {
    aiStack_45c[iVar1] = iVar1;
    iVar1 = iVar1 + 10;
  } while (iVar1 != 0x32);
  iVar4 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)((int)aiStack_45c + iVar4);
    iVar4 = iVar4 + 0x28;
  } while (iVar4 != 200);
  printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
  local_4d8 = 10;
  local_4dc = 0x14;
  local_4e0 = 0x1e;
  local_4d4[0] = &local_4d8;
  local_4d4[1] = &local_4dc;
  local_4d4[2] = &local_4e0;
  local_4d4[3] = (undefined4 *)0x0;
  local_4d4[4] = (undefined4 *)0x0;
  local_4d4[5] = (undefined4 *)0x0;
  local_4d4[6] = (undefined4 *)0x0;
  local_4d4[7] = (undefined4 *)0x0;
  local_4d4[8] = (undefined4 *)0x0;
  local_4d4[9] = (undefined4 *)0x0;
  iVar4 = 0;
  iVar1 = 0;
  do {
    if (local_4d4[iVar4] != (int *)0x0) {
      iVar1 = iVar1 + *local_4d4[iVar4];
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 3);
  printf("ARR-L2-03 (pointer_array): %d\n",iVar1);
  iVar1 = 0;
  do {
    aiStack_4ac[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x14);
  printf("ARR-L2-04 (array_complex_index): %d\n",aiStack_4ac[0x11]);
  return;
}



/* Function: ptr_single @ 000118c0 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 000118d0 */

int ptr_double(undefined4 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 000118e0 */

int ptr_triple(undefined4 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 000118f0 */

int ptr_increment(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: ptr_offset @ 00011920 */

undefined4 ptr_offset(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011930 */

int ptr_diff(int param_1,int param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011940 */

int ptr_void(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    iVar1 = (int)(char)*param_1;
  }
  else {
    iVar1 = -1;
    if (param_2 == 0) {
      return *param_1;
    }
  }
  return iVar1;
}



/* Function: ptr_const @ 00011960 */

int ptr_const(int *param_1)

{
  return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00011970 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 00011980 */

void ptr_func_simple(code *param_1,undefined4 param_2)

{
  (*param_1)(param_2);
  return;
}



/* Function: ptr_func_complex @ 000119a0 */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
  undefined *local_c;
  undefined4 local_8;
  
  local_c = &DAT_00013270;
  local_8 = 0;
  (*param_1)(param_2,&local_c);
  return;
}



/* Function: ptr_cast @ 000119e0 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 000119f0 */

undefined4 opaque_handle_create(undefined4 param_1)

{
  return param_1;
}



/* Function: opaque_handle_op @ 00011a00 */

int opaque_handle_op(int param_1)

{
  return param_1 * 2;
}



/* Function: test_pointer_types @ 00011a10 */

void test_pointer_types(void)

{
  int iVar1;
  int iVar2;
  int local_1c [5];
  
  puts(&DAT_000135fb);
  printf("PTR-L2-01 (ptr_single): %d\n",0xf);
  printf("PTR-L2-02 (ptr_double): %d\n",0xf);
  printf("PTR-L2-03 (ptr_triple): %d\n",6);
  local_1c[4] = 5;
  local_1c[3] = 4;
  local_1c[2] = 3;
  local_1c[1] = 2;
  local_1c[0] = 1;
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + local_1c[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 != 5);
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



/* Function: struct_simple @ 00011bb0 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00011bc0 */

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



/* Function: struct_nested @ 00011c00 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00011c10 */

int struct_deep(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00011c20 */

int struct_with_ptr(int *param_1)

{
  if ((int *)param_1[1] != (int *)0x0) {
    return *(int *)param_1[1] + *param_1;
  }
  return *param_1;
}



/* Function: struct_bitfields @ 00011c40 */

short struct_bitfields(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  return (uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00011c70 */

float union_type(float *param_1,int param_2)

{
  if (param_2 == 1) {
    return (float)(int)ROUND(*param_1);
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return (float)(int)*(char *)param_1;
}



/* Function: union_array @ 00011cc0 */

int union_array(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: enum_type @ 00011cf0 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: FUN_00011d05 @ 00011d05 */

undefined4 FUN_00011d05(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int unaff_retaddr;
  
  uVar1 = 0xffffff9d;
  if (param_2 < 4) {
    uVar1 = *(undefined4 *)(unaff_retaddr + 0x194f + param_2 * 4);
  }
  return uVar1;
}



/* Function: struct_func_ptr @ 00011d30 */

void struct_func_ptr(undefined4 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  return;
}



/* Function: linked_list @ 00011d60 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011d80 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011da0 */

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
    iVar2 = binary_tree_sum(param_1[1]);
    iVar3 = binary_tree_sum(param_1[2]);
    iVar3 = iVar3 + iVar2 + iVar1;
  }
  return iVar3;
}



/* Function: binary_tree @ 00011df0 */

void binary_tree(undefined4 param_1)

{
  binary_tree_sum(param_1);
  return;
}



/* Function: graph_traverse @ 00011e20 */

int graph_traverse(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    do {
      for (piVar1 = *(int **)(param_1 + iVar3 * 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1])
      {
        iVar2 = iVar2 + *piVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(param_1 + 0x28));
  }
  return iVar2;
}



/* Function: test_composite_types @ 00011e60 */

void test_composite_types(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 *local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  undefined4 *local_34 [12];
  
  puts(&DAT_00013616);
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
  piVar1 = &local_74;
  local_74 = 10;
  local_70 = &local_6c;
  local_6c = 0x14;
  local_68 = &local_64;
  local_64 = 0x1e;
  local_60 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-12 (linked_list): %d\n",iVar3);
  piVar1 = &local_4c;
  local_4c = 10;
  local_48 = &local_40;
  local_44 = 0;
  local_40 = 0x14;
  local_3c = 0;
  local_38 = piVar1;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
  local_54 = 0;
  local_58 = 0;
  local_5c = 100;
  uVar2 = binary_tree_sum(&local_5c);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
  local_7c = 1;
  local_78 = 0;
  local_34[9] = (undefined4 *)0x0;
  local_34[8] = (undefined4 *)0x0;
  local_34[7] = (undefined4 *)0x0;
  local_34[6] = (undefined4 *)0x0;
  local_34[5] = (undefined4 *)0x0;
  local_34[4] = (undefined4 *)0x0;
  local_34[3] = (undefined4 *)0x0;
  local_34[2] = (undefined4 *)0x0;
  local_34[1] = (undefined4 *)0x0;
  local_34[0] = &local_7c;
  local_34[10] = (undefined4 *)0x2;
  iVar4 = 0;
  iVar3 = 0;
  do {
    for (piVar1 = local_34[iVar4]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar3 = iVar3 + *piVar1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 2);
  printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
  return;
}



/* Function: main @ 00012110 */

undefined4 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00012140 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001215a) */
/* WARNING: Removing unreachable block (ram,0x00012170) */
/* WARNING: Removing unreachable block (ram,0x0001217d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001218c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 67 */
