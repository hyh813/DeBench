/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/4/4_clang_O1_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000103e4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010458 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 0001049c */

/* WARNING: Removing unreachable block (ram,0x000104b0) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000104c0 */

/* WARNING: Removing unreachable block (ram,0x000104e0) */
/* WARNING: Removing unreachable block (ram,0x000104ec) */
/* WARNING: Removing unreachable block (ram,0x000104f0) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010504 */

/* WARNING: Removing unreachable block (ram,0x00010530) */
/* WARNING: Removing unreachable block (ram,0x0001053c) */
/* WARNING: Removing unreachable block (ram,0x00010540) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010554 */

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



/* Function: cdecl_func @ 000105c0 */

int cdecl_func(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_cdecl @ 000105c8 */

undefined4 call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int param_1,int param_2)

{
  return param_2 * param_1;
}



/* Function: call_stdcall @ 000105dc */

undefined4 call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 000105e4 */

int fastcall_func(int param_1,int param_2,int param_3)

{
  return param_2 + param_1 + param_3;
}



/* Function: call_fastcall @ 000105f0 */

undefined4 call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 000105f8 */

undefined4 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00010600 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00010618 */

undefined4 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00010620 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 00010630 */

undefined4 call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00010638 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00010658 */

undefined4 call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 00010660 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00010678 */

undefined4 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00010680 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00010690 */

undefined4 call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00010698 */

undefined4 mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 000106a0 */

int varargs_func(int param_1)

{
  int iVar1;
  int *local_10;
  int local_c [3];
  
  iVar1 = 0;
  local_10 = local_c;
  if (0 < param_1) {
    do {
      iVar1 = *local_10 + iVar1;
      param_1 = param_1 + -1;
      local_10 = local_10 + 1;
    } while (param_1 != 0);
  }
  return iVar1;
}



/* Function: func_no_args @ 000106e4 */

undefined4 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000106ec */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 0001071c */

void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_2);
  }
  uVar2 = __floatsidf(sVar1 + param_1);
  uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_3,param_4);
  uVar3 = __floatdidf(param_5,param_6);
  __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  __fixdfsi();
  return;
}



/* Function: func_struct_byval @ 00010794 */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_10 [4];
  
  local_10[0] = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  local_10[3] = param_4;
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = *(int *)((int)local_10 + iVar2) + iVar1;
    iVar2 = iVar2 + 8;
  } while (iVar2 != 0x80);
  return iVar1;
}



/* Function: func_struct_byptr @ 000107e0 */

int func_struct_byptr(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1[1] * *param_1;
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 000107f4 */

void test_calling_conventions(void)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int local_90 [34];
  
  puts(&DAT_0001175e);
  printf("CALL-L1-01: %d\n",0xf);
  printf("CALL-L1-02: %d\n",0x32);
  printf("CALL-L1-03: %d\n",6);
  printf("CALL-L1-04: %d\n",0xf);
  printf("CALL-L1-05: %d\n",0xf);
  printf("CALL-L1-06: %d\n",100);
  printf("CALL-L1-07: %d\n",0x15);
  printf("CALL-L1-08: %d\n",0xf);
  printf("CALL-L1-09: %d\n",10);
  printf("CALL-L1-10: %d\n",0x21);
  local_90[0] = 4;
  local_90[1] = 5;
  iVar6 = 1;
  uVar2 = varargs_func(5,1,2,3);
  printf(&DAT_000114b4,uVar2);
  printf(&DAT_000114dc,0x2a);
  printf(&DAT_000114fe,0x24);
  printf(&DAT_00011525,0x75);
  piVar1 = local_90;
  do {
    piVar1[2] = iVar6;
    piVar1[3] = 0;
    iVar6 = iVar6 + 1;
    piVar1 = piVar1 + 2;
  } while (iVar6 != 0x11);
  iVar6 = 0;
  uVar3 = 0;
  iVar5 = 0;
  do {
    uVar4 = *(uint *)((int)local_90 + iVar6 + 8);
    bVar7 = CARRY4(uVar4,uVar3);
    uVar3 = uVar4 + uVar3;
    iVar5 = *(int *)((int)local_90 + iVar6 + 0xc) + iVar5 + (uint)bVar7;
    iVar6 = iVar6 + 8;
  } while (iVar6 != 0x80);
  printf(&DAT_0001154d,uVar3,uVar4,iVar5);
  printf(&DAT_00011579,0x32);
  return;
}



/* Function: param_by_value_int @ 000109cc */

int param_by_value_int(int param_1)

{
  return param_1 << 1;
}



/* Function: call_by_value_int @ 000109d4 */

undefined4 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 000109dc */

undefined4 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 000109f0 */

undefined4 call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 000109f8 */

undefined4 param_array_decay(void)

{
  return 4;
}



/* Function: call_array_decay @ 00010a00 */

undefined4 call_array_decay(void)

{
  return 4;
}



/* Function: param_string @ 00010a08 */

int param_string(byte *param_1)

{
  return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00010a18 */

undefined4 call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00010a20 */

int param_ptr_array(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + (uint)*(byte *)*param_1;
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_ptr_array @ 00010a50 */

undefined4 call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 00010a58 */

int param_varargs(int param_1)

{
  int iVar1;
  int *local_10;
  int local_c [3];
  
  iVar1 = 0;
  local_10 = local_c;
  if (0 < param_1) {
    do {
      iVar1 = *local_10 + iVar1;
      param_1 = param_1 + -1;
      local_10 = local_10 + 1;
    } while (param_1 != 0);
  }
  return iVar1;
}



/* Function: call_varargs_param @ 00010a9c */

void call_varargs_param(void)

{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 00010acc */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010aec */

undefined4 call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00010af4 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (int *)0x0) {
    param_4 = (undefined4 *)*param_1;
  }
  if (param_1 != (int *)0x0 && param_4 != (undefined4 *)0x0) {
    *param_1 = 0;
    *param_4 = param_2;
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: call_double_ptr @ 00010b1c */

undefined4 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00010b24 */

int param_complex_cast(int *param_1,int param_2)

{
  if (param_2 == 1) {
    return param_1[1] + *param_1;
  }
  if (param_2 != 0) {
    return -1;
  }
  return *param_1;
}



/* Function: call_complex_cast @ 00010b58 */

undefined4 call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00010b64 */

int param_struct_byval(int param_1)

{
  int in_stack_0000002c;
  
  return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 00010b70 */

int call_struct_byval(void)

{
  int iVar1;
  int local_40 [16];
  
  iVar1 = 0;
  do {
    local_40[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00010ba0 */

int param_order_dep(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_order_dep @ 00010ba8 */

undefined4 call_order_dep(void)

{
  return 3;
}



/* Function: test_parameter_passing @ 00010bb0 */

void test_parameter_passing(void)

{
  undefined4 uVar1;
  int iVar2;
  int local_48 [16];
  
  puts(&DAT_0001177f);
  printf("PARAM-L1-01: %d\n",0xf);
  printf("PARAM-L1-02: %d\n",0xb);
  printf("PARAM-L2-01: %d\n",4);
  printf("PARAM-L2-02: %d\n",0xad);
  printf("PARAM-L2-03: %d\n",300);
  uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  printf("PARAM-L2-04: %d\n",uVar1);
  printf("PARAM-L3-01: %d\n",0x14);
  printf("PARAM-L3-02: %d\n",0x15);
  printf("PARAM-L3-03: %d\n",0x12345678);
  iVar2 = 0;
  do {
    local_48[iVar2] = iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  printf("PARAM-L3-04: %d\n",local_48[0xf] + local_48[0]);
  printf("PARAM-L3-05: %d\n",3);
  return;
}



/* Function: ret_basic_type @ 00010cf0 */

int ret_basic_type(int param_1)

{
  return param_1 << 1;
}



/* Function: call_ret_basic @ 00010cf8 */

undefined4 call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00010d00 */

int ret_pointer(int param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 00010d08 */

undefined4 call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00010d10 */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Function: call_ret_small_struct @ 00010d18 */

undefined4 call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00010d20 */

void ret_large_struct(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(int *)(param_1 + iVar1 * 4) = param_2 + iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return;
}



/* Function: call_ret_large_struct @ 00010d3c */

int call_ret_large_struct(void)

{
  int iVar1;
  int local_40 [16];
  
  iVar1 = 0;
  do {
    local_40[iVar1] = iVar1 + 100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00010d70 */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: func_b @ 00010d78 */

int func_b(int param_1)

{
  return param_1 << 1;
}



/* Function: ret_func_ptr @ 00010d80 */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 00010da8 */

undefined4 call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00010db0 */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &ret_opaque_handle_handle2;
  if (param_1 == 0) {
    puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00010dd8 */

undefined4 call_ret_opaque(void)

{
  return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00010de8 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 << 1;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00010dfc */

undefined4 call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00010e04 */

int ret_multi_branch(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 3) {
    iVar1 = param_1 * 10 + 10;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e20 */

undefined4 call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00010e28 */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 00010e34 */

undefined4 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00010e3c */

void test_return_values(void)

{
  int iVar1;
  int local_48 [16];
  
  puts(&DAT_000117a0);
  printf(&DAT_00011661,0x2a);
  printf(&DAT_0001167d,0x14);
  printf(&DAT_00011699,7);
  iVar1 = 0;
  do {
    local_48[iVar1] = iVar1 + 100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  printf(&DAT_000116b4,local_48[0xf] + local_48[0]);
  printf(&DAT_000116d1,10);
  printf(&DAT_000116ed,ret_opaque_handle_handle1);
  printf(&DAT_0001170a,0x28);
  printf(&DAT_00011726,0x3c);
  printf(&DAT_00011742,0x15);
  return;
}



/* Function: main @ 00010f40 */

undefined4 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __aeabi_drsub @ 00010f5c */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __adddf3(param_1,param_2 ^ 0x80000000);
  return;
}



/* Function: __subdf3 @ 00010f64 */

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
LAB_000111d8:
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
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_000111d8;
    }
LAB_00011080:
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
  if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00011080;
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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __adddf3 @ 00010f68 */

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
LAB_000111d8:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_000111d8;
    }
LAB_00011080:
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
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00011080;
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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __aeabi_ui2d @ 00011214 */

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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __floatsidf @ 00011238 */

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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __extendsfdf2 @ 00011260 */

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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __floatundidf @ 000112a8 */

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
LAB_00011080:
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
  if (bVar12 && 0xfffff < param_2) goto LAB_00011080;
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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __floatdidf @ 000112bc */

ulonglong __floatdidf(uint param_1,uint param_2)

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
LAB_00011080:
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
  if (bVar13 && 0xfffff < uVar4) goto LAB_00011080;
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
      goto LAB_00011100;
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
LAB_00011100:
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



/* Function: __fixdfsi @ 0001131c */

uint __fixdfsi(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_2 * 2 + 0x200000;
  if (param_2 * 2 < 0xffe00000) {
    if (-1 < iVar2) {
      return 0;
    }
    uVar1 = iVar2 >> 0x15;
    uVar3 = -uVar1 - 0x3e1;
    if (uVar1 < 0xfffffc20 && uVar3 != 0) {
      uVar1 = (param_2 << 0xb | 0x80000000 | param_1 >> 0x15) >> (uVar3 & 0xff);
      if ((param_2 & 0x80000000) != 0) {
        uVar1 = -uVar1;
      }
      return uVar1;
    }
  }
  else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}



/* Function: _fini @ 00011378 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 86 */
