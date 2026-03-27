/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/2/2_clang_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000103cc */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010434 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010478 */

/* WARNING: Removing unreachable block (ram,0x0001048c) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 0001049c */

/* WARNING: Removing unreachable block (ram,0x000104bc) */
/* WARNING: Removing unreachable block (ram,0x000104c8) */
/* WARNING: Removing unreachable block (ram,0x000104cc) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000104e0 */

/* WARNING: Removing unreachable block (ram,0x0001050c) */
/* WARNING: Removing unreachable block (ram,0x00010518) */
/* WARNING: Removing unreachable block (ram,0x0001051c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010530 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: process_char @ 0001059c */

char process_char(char param_1)

{
  if ((byte)(param_1 + 0xbfU) < 0x1a) {
    param_1 = param_1 + ' ';
  }
  return param_1;
}



/* Function: process_short @ 000105b4 */

int process_short(int param_1,int param_2)

{
  return (param_2 + param_1) * 0x10000 >> 0x10;
}



/* Function: process_int @ 000105c4 */

uint process_int(int param_1)

{
  return param_1 << 1 | 1;
}



/* Function: process_long @ 000105d0 */

int process_long(int param_1)

{
  return param_1 << 1;
}



/* Function: process_ll @ 000105d8 */

undefined8 process_ll(uint param_1,int param_2)

{
  return CONCAT44(param_1 * param_2 +
                  param_1 * param_2 + (int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20),
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 000105f0 */

void process_float(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = __mulsf3(param_1,0x3fc00000);
  __addsf3(uVar1,0x3f000000);
  return;
}



/* Function: process_double @ 0001060c */

void process_double(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __muldf3(param_1,param_2,0,0x3fe00000);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0x9999999a,0x3fb99999);
  return;
}



/* Function: process_ld @ 0001063c */

void process_ld(undefined4 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = __muldf3(param_1,param_2,param_1,param_2);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),0,0x3ff00000);
  return;
}



/* Function: process_bool @ 00010664 */

bool process_bool(uint param_1)

{
  return 0 < (int)param_1 && (param_1 & 1) == 0;
}



/* Function: const_param @ 00010684 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 00010690 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 000106a0 */

void test_data_types_l1(void)

{
  puts(&DAT_00012483);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n");
  printf("DT-L1-06 (process_float): %.2f\n");
  printf("DT-L1-07 (process_double): %.2f\n");
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
  printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 000107fc */

int array_1d_stack(int *param_1,int param_2)

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



/* Function: array_string @ 00010828 */

int array_string(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1;
    iVar1 = iVar2 + 1;
  } while (*(char *)(param_1 + iVar2) != '\0');
  return iVar2;
}



/* Function: array_2d_stack @ 00010844 */

int array_2d_stack(int *param_1)

{
  return param_1[99] +
         param_1[0x58] +
         param_1[0x4d] +
         param_1[0x42] +
         param_1[0x37] + param_1[0x2c] + param_1[0x21] + param_1[0x16] + param_1[0xb] + *param_1;
}



/* Function: array_3d @ 00010894 */

int array_3d(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = 0;
  do {
    piVar2 = (int *)(param_1 + iVar3);
    iVar3 = iVar3 + 100;
    iVar1 = piVar2[0x18] +
            piVar2[0x17] +
            piVar2[0x16] +
            piVar2[0x15] +
            piVar2[0x14] +
            piVar2[0x13] +
            piVar2[0x12] +
            piVar2[0x11] +
            piVar2[0x10] +
            piVar2[0xf] +
            piVar2[0xe] +
            piVar2[0xd] +
            piVar2[0xc] +
            piVar2[0xb] +
            piVar2[10] +
            piVar2[9] +
            piVar2[8] +
            piVar2[7] +
            piVar2[6] + piVar2[5] + piVar2[4] + piVar2[3] + piVar2[2] + piVar2[1] + *piVar2 + iVar1;
  } while (iVar3 != 500);
  return iVar1;
}



/* Function: array_vla @ 0001096c */

int array_vla(int param_1,int *param_2)

{
  int iVar1;
  
  if (0 < param_1) {
    iVar1 = 0;
    do {
      param_1 = param_1 + -1;
      iVar1 = *param_2 + iVar1;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: array_pointer @ 00010998 */

int array_pointer(int *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      param_2 = param_2 + -1;
      iVar1 = *param_1 + iVar1;
      param_1 = param_1 + 10;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: pointer_array @ 000109c4 */

int pointer_array(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  iVar1 = 0;
  if (9 < param_2) {
    param_2 = 10;
  }
  do {
    piVar2 = (int *)*param_1;
    param_1 = param_1 + 1;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2 + iVar1;
    }
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return iVar1;
}



/* Function: array_complex_index @ 00010a08 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffff;
  if (-1 < param_4) {
    bVar3 = SBORROW4(param_5,param_3);
    iVar1 = param_5 - param_3;
    if (param_5 < param_3) {
      bVar3 = SBORROW4(param_4,param_2);
      iVar1 = param_4 - param_2;
    }
    if (iVar1 < 0 != bVar3) {
      if (-1 < param_5) {
        uVar2 = *(undefined4 *)(param_1 + (param_5 * param_2 + param_4) * 4);
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}



/* Function: array_oob @ 00010a48 */

int array_oob(int *param_1,int param_2)

{
  int iVar1;
  
  if (-1 < param_2) {
    param_2 = param_2 + 1;
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



/* Function: test_array_types @ 00010a7c */

void test_array_types(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_3a4 [125];
  int local_1b0 [22];
  int local_158;
  int local_12c;
  int local_100;
  int local_d4;
  int local_a8;
  int local_7c;
  int local_50;
  int local_24;
  
  puts(&DAT_000124a4);
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
  iVar2 = 0;
  do {
    uVar1 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    *(undefined4 *)((int)local_1b0 + iVar2) = 0;
    if (iVar2 == 0x168) {
      uVar1 = 9;
    }
    *(undefined4 *)((int)local_1b0 + iVar2 + 0x24) = uVar1;
    uVar1 = 0;
    if (iVar2 == 0x118) {
      uVar1 = 7;
    }
    if (iVar2 == 0xf0) {
      uVar3 = 6;
    }
    *(undefined4 *)((int)local_1b0 + iVar2 + 0x1c) = uVar1;
    if (iVar2 == 200) {
      uVar5 = 5;
    }
    *(undefined4 *)((int)local_1b0 + iVar2 + 0x18) = uVar3;
    if (iVar2 == 0x78) {
      uVar6 = 3;
    }
    *(undefined4 *)((int)local_1b0 + iVar2 + 0x14) = uVar5;
    *(undefined4 *)((int)local_1b0 + iVar2 + 0xc) = uVar6;
    *(uint *)((int)local_1b0 + iVar2 + 4) = (uint)(iVar2 == 0x28);
    iVar4 = iVar2 + 0x28;
    *(uint *)((int)local_1b0 + iVar2 + 0x20) = (uint)(iVar2 == 0x140) * 8;
    *(uint *)((int)local_1b0 + iVar2 + 0x10) = (uint)(iVar2 == 0xa0) * 4;
    *(uint *)((int)local_1b0 + iVar2 + 8) = (uint)(iVar2 == 0x50) * 2;
    iVar2 = iVar4;
  } while (iVar4 != 400);
  printf("ARR-L1-03 (array_2d_stack): %d\n",
         local_1b0[0xb] + local_1b0[0] + local_158 + local_12c + local_100 + local_d4 + local_a8 +
         local_7c + local_50 + local_24);
  iVar2 = 0;
  do {
    *(undefined4 *)((int)local_3a4 + iVar2) = 1;
    iVar4 = iVar2 + 100;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x44) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x48) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x4c) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x50) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x54) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x58) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x5c) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x60) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x24) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x28) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x2c) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x30) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x34) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x38) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x3c) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x40) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 4) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 8) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0xc) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x10) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x14) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x18) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x1c) = 1;
    *(undefined4 *)((int)local_3a4 + iVar2 + 0x20) = 1;
    iVar2 = iVar4;
  } while (iVar4 != 500);
  uVar1 = array_3d(local_3a4);
  printf("ARR-L1-04 (array_3d): %d\n",uVar1);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  printf("ARR-L2-02 (array_pointer): %d\n",100);
  printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
  printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
  return;
}



/* Function: ptr_single @ 00010ccc */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00010cd8 */

int ptr_double(undefined4 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00010ce8 */

int ptr_triple(undefined4 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00010cfc */

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



/* Function: ptr_offset @ 00010d28 */

undefined4 ptr_offset(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00010d30 */

int ptr_diff(int param_1,int param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00010d3c */

uint ptr_void(uint *param_1,int param_2)

{
  if (param_2 == 1) {
    return (uint)(byte)*param_1;
  }
  if (param_2 != 0) {
    return 0xffffffff;
  }
  return *param_1;
}



/* Function: ptr_const @ 00010d64 */

int ptr_const(int *param_1)

{
  return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 00010d70 */

int ptr_const_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00010d84 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: ptr_func_complex @ 00010d90 */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
  undefined *local_10;
  undefined4 local_c;
  
  local_10 = &DAT_00012134;
  local_c = 0;
  (*param_1)(param_2,&local_10);
  return;
}



/* Function: ptr_cast @ 00010de0 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00010de8 */

void opaque_handle_create(void)

{
  return;
}



/* Function: opaque_handle_op @ 00010dec */

int opaque_handle_op(int param_1)

{
  return param_1 << 1;
}



/* Function: test_pointer_types @ 00010df4 */

void test_pointer_types(void)

{
  puts(&DAT_000124bf);
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



/* Function: struct_simple @ 00010f24 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00010f38 */

int struct_array(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (0 < param_2) {
    iVar1 = 0;
    piVar2 = (int *)(param_1 + 4);
    do {
      param_2 = param_2 + -1;
      iVar1 = piVar2[-1] + iVar1 + *piVar2 + piVar2[1];
      piVar2 = piVar2 + 3;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: struct_nested @ 00010f80 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00010f90 */

int struct_deep(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00010fa0 */

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



/* Function: struct_bitfields @ 00010fbc */

short struct_bitfields(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  return (uVar1 & 1) + (uVar1 >> 6) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00010fe4 */

uint union_type(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 1) {
    uVar1 = __fixsfsi(*param_1);
    return uVar1;
  }
  if (param_2 == 0) {
    uVar1 = *param_1;
  }
  else {
    uVar1 = (uint)(byte)*param_1;
  }
  return uVar1;
}



/* Function: union_array @ 00011014 */

int union_array(int *param_1,int param_2)

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



/* Function: enum_type @ 00011040 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 0001104c */

undefined4 enum_switch(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffff9d;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(&DAT_00012514 + param_1 * 4);
  }
  return uVar1;
}



/* Function: struct_func_ptr @ 0001106c */

void struct_func_ptr(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[1])(*param_1);
  return;
}



/* Function: linked_list @ 00011078 */

int linked_list(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    do {
      iVar2 = *param_1;
      param_1 = (int *)param_1[1];
      iVar1 = iVar2 + iVar1;
    } while (param_1 != (int *)0x0);
    return iVar1;
  }
  return 0;
}



/* Function: doubly_linked_list @ 000110a4 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    do {
      iVar2 = *param_1;
      param_1 = (int *)param_1[1];
      iVar1 = iVar2 + iVar1;
    } while (param_1 != (int *)0x0);
    return iVar1;
  }
  return 0;
}



/* Function: binary_tree_sum @ 000110d0 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    do {
      iVar3 = *param_1;
      iVar2 = binary_tree_sum(param_1[1]);
      param_1 = (int *)param_1[2];
      iVar1 = iVar3 + iVar1 + iVar2;
    } while (param_1 != (int *)0x0);
    return iVar1;
  }
  return 0;
}



/* Function: graph_traverse @ 0001111c */

int graph_traverse(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x28) < 1) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0;
    iVar1 = 0;
    do {
      for (piVar2 = *(int **)(param_1 + iVar3 * 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1])
      {
        iVar1 = *piVar2 + iVar1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(param_1 + 0x28));
  }
  return iVar1;
}



/* Function: test_composite_types @ 00011178 */

void test_composite_types(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  puts(&DAT_000124da);
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
  iVar3 = 0;
  local_20 = 10;
  local_10 = 0x1e;
  piVar1 = &local_20;
  local_c = 0;
  local_14 = &local_10;
  local_18 = 0x14;
  local_1c = &local_18;
  do {
    iVar4 = *piVar1;
    piVar1 = (int *)piVar1[1];
    iVar3 = iVar4 + iVar3;
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-12 (linked_list): %d\n",iVar3);
  piVar1 = &local_38;
  iVar3 = 0;
  local_2c = 0x14;
  local_24 = piVar1;
  local_28 = 0;
  local_30 = 0;
  local_38 = 10;
  local_34 = &local_2c;
  do {
    iVar4 = *piVar1;
    piVar1 = (int *)piVar1[1];
    iVar3 = iVar4 + iVar3;
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
  local_40 = 0;
  local_3c = 0;
  local_44 = 100;
  uVar2 = binary_tree_sum(&local_44);
  printf("CMP-L2-14 (binary_tree): %d\n",uVar2);
  iVar3 = 1;
  piVar1 = (int *)0x0;
  bVar5 = false;
  while (bVar5) {
    iVar4 = *piVar1;
    piVar1 = (int *)piVar1[1];
    iVar3 = iVar3 + iVar4;
    bVar5 = piVar1 != (int *)0x0;
  }
  printf("CMP-L2-15 (graph_traverse): %d\n",iVar3);
  return;
}



/* Function: main @ 000113c4 */

undefined4 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __muldf3 @ 000113e4 */

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint extraout_r2;
  uint extraout_r3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  uint extraout_r12;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar14 = CONCAT44(param_2,param_1);
  uVar10 = 0x7ff;
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar11 = uVar6 == 0;
  if (!bVar11) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar11 = unaff_r5 == 0;
  }
  if (!bVar11) {
    bVar11 = uVar6 == 0x7ff;
  }
  if (!bVar11) {
    bVar11 = unaff_r5 == 0x7ff;
  }
  if (bVar11) {
    uVar14 = FUN_000115c4();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    uVar10 = extraout_r12;
  }
  uVar4 = (uint)(uVar14 >> 0x20);
  iVar7 = uVar6 + unaff_r5;
  uVar9 = uVar4 ^ param_4;
  uVar4 = uVar4 & ~(uVar10 << 0x15);
  param_4 = param_4 & ~(uVar10 << 0x15);
  uVar6 = uVar4 | 0x100000;
  uVar5 = param_4 | 0x100000;
  if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
    param_3 = (uint)uVar14 | param_3;
    uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
    uVar6 = uVar10 >> 1;
    bVar13 = SBORROW4(iVar7,uVar6);
    uVar8 = iVar7 - uVar6;
    bVar11 = uVar8 == 0;
    uVar4 = uVar8;
    if (!bVar11 && (int)uVar6 <= iVar7) {
      bVar13 = SBORROW4(uVar10,uVar8);
      uVar4 = uVar10 - uVar8;
      bVar11 = uVar10 == uVar8;
    }
    if (!bVar11 && (int)uVar4 < 0 == bVar13) {
      return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
    }
    uVar5 = uVar5 | 0x100000;
    uVar10 = 0;
    bVar13 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar11 = uVar8 == 0;
    uVar6 = uVar8;
  }
  else {
    uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
    uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
             (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
    uVar4 = (uint)uVar14;
    lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
    uVar10 = (uint)lVar1;
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((int)uVar2 != 0) {
      uVar4 = uVar4 | 1;
    }
    uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
    if (uVar6 < 0x200) {
      bVar3 = (byte)(uVar4 >> 0x1f);
      uVar4 = uVar4 << 1;
      lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
                       uVar10 * 2 + (uint)bVar3);
    }
    uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
    param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
    uVar10 = uVar4 * 0x800;
    bVar12 = 0xfc < uVar8;
    bVar13 = SBORROW4(uVar8,0xfd);
    uVar9 = uVar8 - 0xfd;
    bVar11 = uVar9 == 0;
    uVar6 = uVar9;
    if (bVar12 && !bVar11) {
      bVar12 = 0x6ff < uVar9;
      bVar13 = SBORROW4(uVar9,0x700);
      uVar6 = uVar8 - 0x7fd;
      bVar11 = uVar9 == 0x700;
    }
    if (!bVar12 || bVar11) {
      bVar11 = 0x7fffffff < uVar10;
      if (uVar10 == 0x80000000) {
        bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
      }
      return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
                     );
    }
  }
  if (!bVar11 && (int)uVar6 < 0 == bVar13) {
    return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if (-0x36 < (int)uVar8) {
    uVar6 = -uVar8;
    uVar4 = uVar6 - 0x20;
    if (0x1f < (int)uVar6) {
      uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
      uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
              ((int)uVar9 >> 0x1f);
      if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
        uVar6 = uVar6 & ~(uVar9 >> 0x1f);
      }
      return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
    }
    if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
      uVar4 = 0xc - (uVar6 - 0x14);
      uVar6 = param_3 << (uVar4 & 0xff);
      uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
      uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
      if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar6 >> 0x1f);
      }
      return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
    }
    uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
    uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
    uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
    if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar4 >> 0x1f);
    }
    return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
                    (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
  }
  return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_000115c4 @ 000115c4 */

ulonglong FUN_000115c4(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar4 != in_r12) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
    {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar5 = param_2 & 0x80000000;
      do {
        iVar2 = param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar2;
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar5;
      if (uVar4 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      iVar2 = param_3 >> 0x1f;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 - iVar2;
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar1 = (param_2 & 0x7fffffff) != 0;
  uVar5 = param_4;
  iVar2 = param_3;
  if (param_1 != 0 || bVar1) {
    uVar5 = param_2;
    iVar2 = param_1;
  }
  uVar3 = uVar5;
  if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
      ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
     ((uVar4 != in_r12 ||
      (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __mulsf3 @ 00011650 */

uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar3 = param_1 >> 0x17 & 0xff;
  bVar10 = uVar3 == 0;
  if (!bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar3 == 0xff;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff;
  }
  if (bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0xff || param_4 == 0xff) {
      uVar9 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        uVar9 = param_1;
      }
      uVar5 = uVar9;
      if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
          ((uVar3 == 0xff && ((uVar9 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar5 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar5 | 0x7fc00000;
      }
      uVar9 = uVar9 ^ param_2;
      goto LAB_000117cc;
    }
    if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar10 = uVar3 == 0;
    uVar9 = param_1 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_1 = param_1 << 1;
        bVar10 = (param_1 & 0x800000) == 0;
      }
      if (!bVar10) break;
      uVar3 = uVar3 - 1;
    }
    param_1 = param_1 | uVar9;
    bVar10 = param_4 == 0;
    uVar9 = param_2 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_2 = param_2 << 1;
        bVar10 = (param_2 & 0x800000) == 0;
      }
      if (!bVar10) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar9;
  }
  iVar4 = uVar3 + param_4;
  uVar9 = param_1 ^ param_2;
  uVar3 = param_1 << 9;
  bVar10 = uVar3 == 0;
  if (!bVar10) {
    param_2 = param_2 << 9;
    bVar10 = param_2 == 0;
  }
  if (bVar10) {
    if (uVar3 == 0) {
      param_2 = param_2 << 9;
    }
    uVar9 = uVar9 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar11 = SBORROW4(iVar4,0x7f);
    iVar6 = iVar4 + -0x7f;
    bVar10 = iVar6 == 0;
    iVar7 = iVar6;
    if (!bVar10 && 0x7e < iVar4) {
      bVar11 = SBORROW4(0xff,iVar6);
      iVar7 = -iVar6 + 0xff;
      bVar10 = -iVar6 == -0xff;
    }
    if (!bVar10 && iVar7 < 0 == bVar11) {
      return uVar9 | iVar6 * 0x800000;
    }
    uVar9 = uVar9 | 0x800000;
    uVar8 = 0;
    bVar11 = SBORROW4(iVar6,1);
    uVar5 = iVar4 - 0x80;
    bVar10 = uVar5 == 0;
    uVar3 = uVar5;
  }
  else {
    lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) * (ulonglong)(uVar3 >> 5 | 0x8000000);
    bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
    if (bVar10) {
      lVar2 = lVar2 * 2;
    }
    uVar8 = (uint)lVar2;
    uVar9 = uVar9 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = iVar4 - (bVar10 + 0x7f);
    bVar11 = SBORROW4(uVar5,0xfd);
    bVar10 = uVar5 == 0xfd;
    uVar3 = uVar5 - 0xfd;
    if (uVar5 < 0xfe) {
      uVar3 = uVar9 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar8);
      if (uVar8 == 0x80000000) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      return uVar3;
    }
  }
  if (bVar10 || (int)uVar3 < 0 != bVar11) {
    if (-0x19 < (int)uVar5) {
      uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
      uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
      uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
      if (uVar8 == 0 && (uVar3 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar3 >> 0x1f);
      }
      return uVar9;
    }
    return uVar9 & 0x80000000;
  }
LAB_000117cc:
  return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 000117e8 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __adddf3(param_1,param_2 ^ 0x80000000);
  return;
}



/* Function: __subdf3 @ 000117f0 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar8 = param_4 ^ 0x80000000;
  uVar11 = param_2 << 1;
  param_4 = param_4 << 1;
  iVar10 = (int)uVar11 >> 0x15;
  iVar1 = (int)param_4 >> 0x15;
  if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
       param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
    if (iVar10 == -1 || iVar1 == -1) {
      uVar11 = param_3;
      uVar12 = uVar8;
      if (iVar10 == -1) {
        uVar11 = param_1;
        uVar12 = param_2;
      }
      if (iVar10 != -1 || iVar1 != -1) {
        param_3 = uVar11;
        uVar8 = uVar12;
      }
      bVar14 = (uVar12 & 0xfffff) == 0;
      bVar15 = uVar11 == 0 && bVar14;
      if (uVar11 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar12 != uVar8) {
        uVar12 = uVar12 | 0x80000;
      }
      return CONCAT44(uVar12,uVar11);
    }
    if (uVar11 != param_4 || param_1 != param_3) {
      if (uVar11 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = uVar8;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar8) {
      return 0;
    }
    if (uVar11 >> 0x15 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar11 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar11 = uVar11 | 0x80000000;
      }
      return CONCAT44(uVar11,param_1 << 1);
    }
    if (uVar11 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_00011a64:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar11 = uVar11 >> 0x15;
  param_4 = param_4 >> 0x15;
  uVar12 = param_4 - uVar11;
  bVar14 = uVar12 != 0;
  if (param_4 < uVar11) {
    uVar12 = -uVar12;
  }
  uVar6 = param_1;
  uVar9 = param_2;
  if (bVar14 && uVar11 <= param_4) {
    uVar11 = uVar11 + uVar12;
    uVar6 = param_3;
    uVar9 = uVar8;
    param_3 = param_1;
    uVar8 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar9,uVar6);
  }
  uVar5 = uVar9 & 0xfffff | 0x100000;
  if ((uVar9 & 0x80000000) != 0) {
    bVar14 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar9 = uVar8 & 0xfffff | 0x100000;
  if ((uVar8 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar9 = -(uVar9 + bVar14);
  }
  if (uVar11 == uVar12) {
    uVar9 = uVar9 ^ 0x100000;
    if (uVar11 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar11 = 1;
    }
    else {
      uVar12 = uVar12 - 1;
    }
  }
  uVar8 = -uVar12 + 0x20;
  if ((int)uVar12 < 0x21) {
    uVar13 = param_3 << (uVar8 & 0xff);
    param_3 = param_3 >> (uVar12 & 0xff);
    uVar4 = uVar6 + param_3;
    uVar7 = uVar9 << (uVar8 & 0xff);
    uVar8 = uVar4 + uVar7;
    uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
             (uint)CARRY4(uVar4,uVar7);
  }
  else {
    uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
    uVar8 = uVar6 + uVar12;
    uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
  }
  param_2 = uVar12 & 0x80000000;
  uVar6 = uVar12;
  if ((int)uVar12 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar6 = -uVar8;
    uVar8 = -(uVar8 + !bVar14);
    uVar6 = -(uVar12 + (bVar14 <= uVar6));
  }
  if (0xfffff < uVar6) {
    uVar9 = uVar11 - 1;
    if (0x1fffff < uVar6) {
      bVar2 = (byte)uVar6;
      uVar6 = uVar6 >> 1;
      bVar3 = (byte)uVar8;
      uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar9 = uVar11;
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011a64;
    }
LAB_0001190c:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar8 & 1);
    }
    return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
                    uVar8 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar9 = uVar8 * 2;
  bVar14 = CARRY4(uVar8,uVar8);
  uVar8 = uVar8 * 2 + (uint)bVar2;
  uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
  uVar9 = uVar11 - 2;
  if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_0001190c;
  uVar11 = uVar8;
  uVar5 = uVar6;
  if (uVar6 == 0) {
    uVar11 = 0;
    uVar5 = uVar8;
  }
  iVar10 = LZCOUNT(uVar5);
  if (uVar6 == 0) {
    iVar10 = iVar10 + 0x20;
  }
  uVar4 = iVar10 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar7 = iVar10 - 0x2b;
  bVar14 = uVar7 == 0;
  uVar8 = uVar7;
  uVar6 = uVar7;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar7,0xc);
    uVar6 = iVar10 - 0x1f;
    bVar14 = uVar6 == 0;
    uVar8 = uVar4;
    if (!bVar14 && -0xd < (int)uVar7) {
      uVar11 = uVar5 << (uVar4 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar14 || (int)uVar6 < 0 != bVar15) {
    uVar13 = 0x20 - uVar8;
  }
  uVar5 = uVar5 << (uVar8 & 0xff);
  if (bVar14 || (int)uVar6 < 0 != bVar15) {
    uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
    uVar11 = uVar11 << (uVar8 & 0xff);
  }
LAB_0001198c:
  if ((int)uVar4 <= (int)uVar9) {
    return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
  }
  uVar8 = ~(uVar9 - uVar4);
  if ((int)uVar8 < 0x1f) {
    if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
      uVar8 = 0xc - (uVar8 - 0x13);
      return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
                    uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
  }
  return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __adddf3 @ 000117f4 */

ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar9 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar8 = (int)uVar9 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_3;
      uVar5 = param_4;
      if (iVar8 == -1) {
        uVar9 = param_1;
        uVar5 = param_2;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar9;
        param_4 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar9 == 0 && bVar14;
      if (uVar9 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != param_4) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar9);
    }
    if (uVar9 != uVar5 || param_1 != param_3) {
      if (uVar9 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if (uVar9 >> 0x15 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_00011a64:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 >> 0x15;
  uVar5 = uVar5 >> 0x15;
  uVar11 = uVar5 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar5 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar5) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar5 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar7 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -(uVar7 + bVar14);
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar13 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar13 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar4 = uVar10 + param_3;
    uVar6 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar5 & 0x80000000;
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar5 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar2 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar3 = (byte)uVar13;
      uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011a64;
    }
LAB_0001190c:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar2 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar2;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_0001190c;
  uVar9 = uVar13;
  uVar7 = uVar11;
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar7 = uVar13;
  }
  iVar8 = LZCOUNT(uVar7);
  if (uVar11 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar4 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar11 = uVar6;
  uVar13 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar13 = iVar8 - 0x1f;
    bVar14 = uVar13 == 0;
    uVar11 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar9 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar12 = 0x20 - uVar11;
  }
  uVar7 = uVar7 << (uVar11 & 0xff);
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_0001198c:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar4);
  if ((int)uVar11 < 0x1f) {
    if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
      uVar11 = 0xc - (uVar11 - 0x13);
      return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 00011aa0 */

ulonglong __aeabi_ui2d(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(param_1);
  uVar5 = iVar4 + 0x15;
  bVar8 = SBORROW4(uVar5,0x20);
  uVar2 = iVar4 - 0xb;
  bVar7 = uVar2 == 0;
  uVar6 = uVar2;
  uVar3 = uVar2;
  if (uVar5 < 0x20) {
    bVar8 = SCARRY4(uVar2,0xc);
    uVar3 = iVar4 + 1;
    bVar7 = uVar3 == 0;
    uVar6 = uVar5;
    if (!bVar7 && -0xd < (int)uVar2) {
      uVar1 = param_1 << uVar5;
      param_1 = param_1 >> (0xc - uVar3 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    in_r12 = 0x20 - uVar6;
  }
  param_1 = param_1 << (uVar6 & 0xff);
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar6 & 0xff);
  }
LAB_0001198c:
  if (uVar5 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
  }
  uVar6 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar6) {
    return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
  }
  if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
    uVar6 = uVar6 + 1;
    return CONCAT44(param_1 >> (uVar6 & 0xff),
                    uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
  }
  uVar6 = 0xc - (uVar6 - 0x13);
  return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 00011ac4 */

ulonglong __floatsidf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar5 = LZCOUNT(uVar2);
  uVar6 = iVar5 + 0x15;
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0xb;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if (uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = iVar5 + 1;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << uVar6;
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_0001198c:
  if (uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 00011aec */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_r12;
  bool bVar10;
  bool bVar11;
  
  uVar2 = param_1 << 1;
  bVar10 = uVar2 == 0;
  uVar9 = param_1 & 0x80000000;
  uVar8 = (uint)((int)uVar2 >> 3) >> 1;
  uVar1 = uVar9 | uVar8;
  param_1 = param_1 << 0x1d;
  if (!bVar10) {
    param_4 = uVar2 & 0xff000000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff000000;
  }
  if (!bVar10) {
    return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
  }
  if ((uVar2 & 0xffffff) == 0) {
    return CONCAT44(uVar1,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar1,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar3 = uVar8;
  if (uVar8 == 0) {
    uVar2 = 0;
    uVar3 = param_1;
  }
  iVar6 = LZCOUNT(uVar3);
  if (uVar8 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar10 = uVar4 == 0;
  uVar8 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar4,0xc);
    uVar5 = iVar6 - 0x1f;
    bVar10 = uVar5 == 0;
    uVar8 = uVar7;
    if (!bVar10 && -0xd < (int)uVar4) {
      uVar2 = uVar3 << (uVar7 & 0xff);
      uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    in_r12 = 0x20 - uVar8;
  }
  uVar3 = uVar3 << (uVar8 & 0xff);
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
    uVar2 = uVar2 << (uVar8 & 0xff);
  }
LAB_0001198c:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
  }
  uVar8 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar8) {
    return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
                    uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
  }
  uVar9 = 0xc - (uVar8 - 0x13);
  return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
         0x80000000ffffffff;
}



/* Function: __floatundidf @ 00011b34 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar11 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar11 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar11 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar11 = iVar11 + 3;
    }
    iVar11 = iVar11 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar11 & 0xff);
    param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
    param_2 = param_2 >> iVar11;
    iVar11 = iVar11 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar11 = iVar11 + 1;
      if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_0001190c:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  bVar12 = iVar11 != 0;
  iVar11 = iVar11 + -1;
  if (bVar12 && 0xfffff < param_2) goto LAB_0001190c;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar8 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar13 = SBORROW4(uVar9,0x20);
  uVar5 = iVar8 - 0x2b;
  bVar12 = uVar5 == 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if ((int)uVar9 < 0x20) {
    bVar13 = SCARRY4(uVar5,0xc);
    uVar6 = iVar8 - 0x1f;
    bVar12 = uVar6 == 0;
    uVar7 = uVar9;
    if (!bVar12 && -0xd < (int)uVar5) {
      uVar3 = uVar4 << (uVar9 & 0xff);
      uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar10 = 0x20 - uVar7;
  }
  uVar4 = uVar4 << (uVar7 & 0xff);
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
    uVar3 = uVar3 << (uVar7 & 0xff);
  }
LAB_0001198c:
  if ((int)uVar9 <= iVar11) {
    return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
  }
  uVar10 = ~(iVar11 - uVar9);
  if ((int)uVar10 < 0x1f) {
    if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
      uVar10 = 0xc - (uVar10 - 0x13);
      return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar4 >> (uVar10 & 0xff),
                    uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
  }
  return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}



/* Function: __aeabi_l2d @ 00011b48 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar11 = param_2 & 0x80000000;
  uVar4 = param_2;
  if ((int)uVar11 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    uVar4 = -(param_2 + bVar13);
  }
  iVar10 = 0x432;
  uVar12 = 0;
  if (uVar4 >> 0x16 != 0) {
    iVar10 = 3;
    if (uVar4 >> 0x19 != 0) {
      iVar10 = 6;
    }
    if (uVar4 >> 0x1c != 0) {
      iVar10 = iVar10 + 3;
    }
    iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
    uVar12 = param_1 << (0x20U - iVar10 & 0xff);
    param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
    uVar4 = uVar4 >> iVar10;
    iVar10 = iVar10 + 0x432;
  }
  if (0xfffff < uVar4) {
    if (0x1fffff < uVar4) {
      bVar1 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      iVar10 = iVar10 + 1;
      if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
    }
LAB_0001190c:
    bVar13 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar13 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
                    param_1 + bVar13);
  }
  bVar1 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar3 = param_1 * 2;
  bVar13 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
  bVar13 = iVar10 != 0;
  iVar10 = iVar10 + -1;
  if (bVar13 && 0xfffff < uVar4) goto LAB_0001190c;
  uVar3 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  iVar8 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar14 = SBORROW4(uVar9,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar13 = uVar6 == 0;
  uVar4 = uVar6;
  uVar7 = uVar6;
  if ((int)uVar9 < 0x20) {
    bVar14 = SCARRY4(uVar6,0xc);
    uVar7 = iVar8 - 0x1f;
    bVar13 = uVar7 == 0;
    uVar4 = uVar9;
    if (!bVar13 && -0xd < (int)uVar6) {
      uVar3 = uVar5 << (uVar9 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
      goto LAB_0001198c;
    }
  }
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
    uVar3 = uVar3 << (uVar4 & 0xff);
  }
LAB_0001198c:
  if ((int)uVar9 <= iVar10) {
    return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
  }
  uVar4 = ~(iVar10 - uVar9);
  if ((int)uVar4 < 0x1f) {
    if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
      uVar4 = 0xc - (uVar4 - 0x13);
      return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
                    uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_frsub @ 00011ba8 */

void __aeabi_frsub(uint param_1)

{
  __addsf3(param_1 ^ 0x80000000);
  return;
}



/* Function: __aeabi_fsub @ 00011bb0 */

uint __aeabi_fsub(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar5 = param_2 ^ 0x80000000;
  uVar4 = param_1 << 1;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    param_4 = param_2 << 1;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar9) {
    bVar9 = iVar1 == -1;
  }
  if (!bVar9) {
    bVar9 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar9) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = uVar5;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        uVar5 = uVar4;
      }
      if (((uVar4 & 0x7fffff) != 0 || (uVar5 & 0x7fffff) != 0) || uVar4 != uVar5) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (uVar4 != param_2 << 1) {
      if (uVar4 == 0) {
        param_1 = uVar5;
      }
      return param_1;
    }
    if (param_1 != uVar5) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if (SUB41(param_1 >> 0x1f,0)) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_00011d14:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar8 = param_4 - uVar4;
  uVar6 = uVar5;
  uVar7 = uVar4;
  if (uVar8 != 0 && uVar4 <= param_4) {
    uVar7 = uVar4 + uVar8;
    uVar6 = param_1;
    param_1 = uVar5;
  }
  if (param_4 < uVar4) {
    uVar8 = -uVar8;
  }
  if (0x19 < uVar8) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar5 = uVar6 & 0xffffff | 0x800000;
  if ((uVar6 & 0x80000000) != 0) {
    uVar5 = -uVar5;
  }
  if (uVar7 == uVar8) {
    uVar5 = uVar5 ^ 0x800000;
    if (uVar7 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar7 = 1;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar5 >> (uVar8 & 0xff));
  uVar5 = uVar5 << (0x20 - uVar8 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar9 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar4 = -(uVar4 + bVar9);
  }
  if (uVar4 < 0x800000) {
    iVar1 = (int)uVar5 >> 0x1f;
    uVar5 = uVar5 << 1;
    uVar4 = uVar4 * 2 - iVar1;
    uVar8 = uVar7 - 2;
    if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
      uVar5 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar5 & 0xff);
      if ((int)uVar8 < (int)uVar5) {
        uVar4 = uVar4 >> (-(uVar8 - uVar5) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar8 - uVar5) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar8 = uVar7 - 1;
    if (0xffffff < uVar4) {
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      uVar5 = (uint)(bVar3 & 1) << 0x1f | uVar5 >> 1;
      uVar8 = uVar7;
      if (0xfd < uVar7) goto LAB_00011d14;
    }
  }
  uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar5);
  if (uVar5 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}



/* Function: __addsf3 @ 00011bb4 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = param_1 << 1;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    param_4 = param_2 << 1;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar9) {
    bVar9 = iVar1 == -1;
  }
  if (!bVar9) {
    bVar9 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar9) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = param_2;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        param_2 = uVar4;
      }
      if (((uVar4 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar4 != param_2) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (uVar4 != param_2 << 1) {
      if (uVar4 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if (SUB41(param_1 >> 0x1f,0)) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_00011d14:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar8 = param_4 - uVar4;
  uVar5 = param_2;
  uVar7 = uVar4;
  if (uVar8 != 0 && uVar4 <= param_4) {
    uVar7 = uVar4 + uVar8;
    uVar5 = param_1;
    param_1 = param_2;
  }
  if (param_4 < uVar4) {
    uVar8 = -uVar8;
  }
  if (0x19 < uVar8) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar6 = uVar5 & 0xffffff | 0x800000;
  if ((uVar5 & 0x80000000) != 0) {
    uVar6 = -uVar6;
  }
  if (uVar7 == uVar8) {
    uVar6 = uVar6 ^ 0x800000;
    if (uVar7 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar7 = 1;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar6 >> (uVar8 & 0xff));
  uVar6 = uVar6 << (0x20 - uVar8 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar9 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar4 = -(uVar4 + bVar9);
  }
  if (uVar4 < 0x800000) {
    iVar1 = (int)uVar6 >> 0x1f;
    uVar6 = uVar6 << 1;
    uVar4 = uVar4 * 2 - iVar1;
    uVar8 = uVar7 - 2;
    if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
      uVar7 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar7 & 0xff);
      if ((int)uVar8 < (int)uVar7) {
        uVar4 = uVar4 >> (-(uVar8 - uVar7) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar8 - uVar7) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar8 = uVar7 - 1;
    if (0xffffff < uVar4) {
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
      uVar8 = uVar7;
      if (0xfd < uVar7) goto LAB_00011d14;
    }
  }
  uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
  if (uVar6 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00011d44 */

uint __aeabi_ui2f(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar3 = uVar2 * -0x800000 + 0x4a800000;
  if (7 < uVar1) {
    uVar1 = 0 << (uVar2 & 0xff);
    uVar2 = iVar3 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
            (uint)(0x7fffffff < uVar1);
    if (uVar1 == 0x80000000) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  uVar2 = param_1 << uVar1 + 0x18;
  uVar1 = (iVar3 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar2 >> 0x1f);
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar1 = uVar1 & ~(uVar2 >> 0x1f);
  }
  return uVar1;
}



/* Function: __floatsisf @ 00011d4c */

uint __floatsisf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1 & 0x80000000;
  if ((int)uVar3 < 0) {
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
  if (7 < uVar1) {
    uVar3 = 0 << (uVar2 & 0xff);
    uVar1 = iVar4 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
            (uint)(0x7fffffff < uVar3);
    if (uVar3 == 0x80000000) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  uVar3 = param_1 << uVar1 + 0x18;
  uVar1 = (iVar4 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar3 >> 0x1f);
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar1 = uVar1 & ~(uVar3 >> 0x1f);
  }
  return uVar1;
}



/* Function: __floatundisf @ 00011d6c */

uint __floatundisf(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  iVar5 = 0x5b000000;
  if (param_2 == 0) {
    iVar5 = 0x4b000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar2 << uVar3 + 0x18;
    uVar2 = (iVar5 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar4 >> 0x1f);
    if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar4 >> 0x1f);
    }
    return uVar2;
  }
  uVar3 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
          (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



/* Function: __aeabi_l2f @ 00011d7c */

uint __aeabi_l2f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar5 = param_2 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar7);
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  uVar5 = uVar5 | 0x5b000000;
  if (param_2 == 0) {
    uVar5 = uVar5 + 0xf0000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar5 = uVar2 << uVar3 + 0x18;
    uVar2 = (iVar6 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar5 >> 0x1f);
    if (uVar1 == 0 && (uVar5 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar5 >> 0x1f);
    }
    return uVar2;
  }
  uVar5 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar6 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
          (uint)(0x7fffffff < uVar5);
  if (uVar5 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



/* Function: __fixsfsi @ 00011df8 */

uint __fixsfsi(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 << 1 < 0x7f000000) {
    return 0;
  }
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = 0x9e - uVar1;
  if (uVar1 < 0x9f && uVar2 != 0) {
    uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
    if ((param_1 & 0x80000000) != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  param_1 = param_1 & 0x80000000;
  if (param_1 == 0) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}



/* Function: _fini @ 00011e54 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 80 */
