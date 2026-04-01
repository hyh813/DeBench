// Decompiled by BinaryAI
// SHA256: 042c83509ca3cbf6730c33147f3d9e5e4bcaf527b7790a17d6d162dbf3605a80

// Function: _init @ 0x103dc
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x103fc
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x10408
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10414
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::puts @ 0x10420
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10438
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10444
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::abort @ 0x10450
void abort(void)
{
  abort();
}

// Function: main @ 0x1045c
undefined4 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _start @ 0x10474
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x104b8
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x104dc
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10508
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10540
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: func_a @ 0x1056c
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x10574
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: callback_func @ 0x1057c
int callback_func(int param_1)
{
  return param_1 << 1;
}

// Function: cdecl_func @ 0x10584
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x1058c
undefined4 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x10594
int stdcall_func(int param_1,int param_2)
{
  return param_2 * param_1;
}

// Function: call_stdcall @ 0x1059c
undefined4 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x105a4
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x105b0
undefined4 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x105b8
undefined4 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x105c0
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x105d8
undefined4 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x105e0
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x105f0
undefined4 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x105f8
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x10618
undefined4 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x10620
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x10638
undefined4 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x10640
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x10650
undefined4 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x10658
undefined4 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x10660
void varargs_func(int param_1)
{
  int iVar1;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
  }
  return;
}

// Function: func_no_args @ 0x106d4
undefined4 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x106dc
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1070c
void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)
{
  undefined8 uVar1;
  undefined8 uVar2;
  if (param_2 != (char *)0x0) {
    param_2 = (char *)strlen(param_2);
  }
  uVar1 = __floatsidf(param_2 + param_1);
  uVar1 = __aeabi_dadd((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4);
  uVar2 = __aeabi_l2d(param_5,param_6);
  __aeabi_dadd((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20)
              );
  __aeabi_d2iz();
  return;
}

// Function: func_struct_byval @ 0x1076c
int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_10 [4];
  piVar4 = local_10;
  local_10[0] = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  local_10[3] = param_4;
  iVar3 = 0x10;
  iVar1 = 0;
  do {
    iVar2 = *piVar4;
    piVar4 = piVar4 + 2;
    iVar1 = iVar2 + iVar1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

// Function: func_struct_byptr @ 0x1079c
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

// Function: test_calling_conventions @ 0x107b0
void test_calling_conventions(void)
{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint local_110 [32];
  int local_90 [33];
  int local_c;
  local_c = 0;
  puts(&DAT_0001148c);
  __printf_chk(1,"CALL-L1-01: %d\n",0xf);
  __printf_chk(1,"CALL-L1-02: %d\n",0x32);
  __printf_chk(1,"CALL-L1-03: %d\n",6);
  __printf_chk(1,"CALL-L1-04: %d\n",0xf);
  __printf_chk(1,"CALL-L1-05: %d\n",0xf);
  __printf_chk(1,"CALL-L1-06: %d\n",100);
  __printf_chk(1,"CALL-L1-07: %d\n",0x15);
  __printf_chk(1,"CALL-L1-08: %d\n",0xf);
  __printf_chk(1,"CALL-L1-09: %d\n",10);
  __printf_chk(1,"CALL-L1-10: %d\n",0x21);
  uVar1 = varargs_func(5,1,2,3,4,5);
  __printf_chk(1,&DAT_0001154d,uVar1);
  __printf_chk(1,&DAT_00011575,0x2a);
  __printf_chk(1,&DAT_00011597,0x24);
  __printf_chk(1,&DAT_000115be,0x75);
  uVar2 = 0;
  puVar4 = local_110;
  uVar6 = 1;
  do {
    *puVar4 = uVar6;
    puVar4[1] = uVar2;
    uVar8 = uVar6 - 0x10;
    uVar2 = uVar2 + (0xfffffffe < uVar6);
    puVar4 = puVar4 + 2;
    uVar6 = uVar6 + 1;
  } while ((uVar8 | uVar2) != 0);
  memcpy(local_90,local_110,0x80);
  iVar5 = 0;
  iVar3 = 0;
  piVar7 = local_90;
  do {
    iVar3 = iVar3 + 1;
    iVar5 = *piVar7 + iVar5;
    piVar7 = piVar7 + 2;
  } while (iVar3 != 0x10);
  __printf_chk(1,&DAT_000115e6,iVar5);
  if (local_c != 0) {
    __stack_chk_fail();
  }
  __printf_chk(1,&DAT_00011612,0x32,0);
  return;
}

// Function: param_by_value_int @ 0x109b8
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x109c0
undefined4 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x109c8
undefined4 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x109dc
undefined4 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x109e4
undefined4 param_array_decay(void)
{
  return 4;
}

// Function: call_array_decay @ 0x109ec
undefined4 call_array_decay(void)
{
  return 4;
}

// Function: param_string @ 0x109f4
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x10a04
undefined4 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x10a0c
int param_ptr_array(int param_1,int param_2)
{
  int iVar1;
  int iVar2;
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + (uint)**(byte **)(param_1 + iVar2 * 4);
  }
  return iVar1;
}

// Function: call_ptr_array @ 0x10a34
void call_ptr_array(void)
{
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  int local_c;
  local_c = 0;
  puStack_18 = &DAT_00011836;
  puStack_14 = &DAT_0001183a;
  puStack_10 = &DAT_0001183e;
  param_ptr_array(&puStack_18,3);
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return;
}

// Function: param_varargs @ 0x10a90
void param_varargs(int param_1)
{
  int iVar1;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
  }
  return;
}

// Function: call_varargs_param @ 0x10b04
void call_varargs_param(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  param_varargs(4,10,0x14,0x1e,0x28,param_2,param_3);
  return;
}

// Function: param_func_ptr @ 0x10b2c
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x10b44
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: param_double_ptr @ 0x10b54
undefined4 param_double_ptr(undefined4 *param_1,undefined4 param_2)
{
  if ((param_1 != (undefined4 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}

// Function: call_double_ptr @ 0x10b84
undefined4 call_double_ptr(void)
{
  return 0x15;
}

// Function: param_complex_cast @ 0x10b8c
int param_complex_cast(int *param_1,int param_2)
{
  int iVar1;
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar1 = *param_1 + param_1[1];
    }
    else {
      iVar1 = -1;
    }
    return iVar1;
  }
  return *param_1;
}

// Function: call_complex_cast @ 0x10bb0
undefined4 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x10bbc
int param_struct_byval(int param_1)
{
  int param_11;
  return param_1 + param_11;
}

// Function: call_struct_byval @ 0x10bd8
void call_struct_byval(undefined4 param_1,undefined4 param_2)
{
  int *piVar1;
  int iVar2;
  int local_4c [15];
  int local_10;
  int local_c;
  local_c = 0;
  iVar2 = 0;
  piVar1 = local_4c;
  do {
    *piVar1 = iVar2;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0x10);
  if (local_c != 0) {
    __stack_chk_fail(local_4c[0] + local_10,param_2,local_c,0);
  }
  return;
}

// Function: param_order_dep @ 0x10c3c
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x10c44
undefined4 call_order_dep(void)
{
  return 4;
}

// Function: test_parameter_passing @ 0x10c4c
void test_parameter_passing(void)
{
  undefined4 uVar1;
  puts(&DAT_0001163f);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",4);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  uVar1 = call_ptr_array();
  __printf_chk(1,"PARAM-L2-03: %d\n",uVar1);
  uVar1 = call_varargs_param();
  __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
  uVar1 = call_func_ptr_param();
  __printf_chk(1,"PARAM-L3-01: %d\n",uVar1);
  __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
  __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
  uVar1 = call_struct_byval();
  __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}

// Function: ret_basic_type @ 0x10d50
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x10d58
undefined4 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x10d60
int ret_pointer(int param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x10d68
undefined4 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x10d70
void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// Function: call_ret_small_struct @ 0x10d78
undefined4 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x10d80
int * ret_large_struct(int *param_1,int param_2)
{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_4c [4];
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int local_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int local_c;
  local_c = 0;
  iVar3 = 0;
  piVar2 = local_4c;
  do {
    iVar1 = param_2 + iVar3;
    iVar3 = iVar3 + 1;
    *piVar2 = iVar1;
    piVar2 = piVar2 + 1;
  } while (iVar3 != 0x10);
  *param_1 = local_4c[0];
  param_1[1] = local_4c[1];
  param_1[2] = local_4c[2];
  param_1[3] = local_4c[3];
  param_1[4] = local_3c;
  param_1[5] = iStack_38;
  param_1[6] = iStack_34;
  param_1[7] = iStack_30;
  param_1[8] = local_2c;
  param_1[9] = iStack_28;
  param_1[10] = iStack_24;
  param_1[0xb] = iStack_20;
  param_1[0xc] = local_1c;
  param_1[0xd] = iStack_18;
  param_1[0xe] = iStack_14;
  param_1[0xf] = iStack_10;
  if (local_c != 0) {
    __stack_chk_fail();
  }
  return param_1;
}

// Function: call_ret_large_struct @ 0x10e0c
void call_ret_large_struct(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  undefined4 extraout_r1;
  int local_4c [15];
  int local_10;
  int local_c;
  local_c = 0;
  ret_large_struct(local_4c,100,param_3,0);
  if (local_c != 0) {
    __stack_chk_fail(local_4c[0] + local_10,extraout_r1,local_c,0);
  }
  return;
}

// Function: ret_func_ptr @ 0x10e64
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x10e84
undefined4 call_ret_func_ptr(void)
{
  return 10;
}

// Function: ret_opaque_handle @ 0x10e8c
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x10ea8
undefined4 call_ret_opaque(void)
{
  return handle1_1;
}

// Function: ret_complex_expr @ 0x10eb8
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  if (param_2 < param_1) {
    param_3 = param_3 << 1;
  }
  else {
    param_3 = param_3 + 10;
  }
  return param_3;
}

// Function: call_ret_complex_expr @ 0x10ec8
undefined4 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x10ed0
int ret_multi_branch(uint param_1)
{
  int iVar1;
  if (param_1 < 3) {
    iVar1 = param_1 * 10 + 10;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_ret_multi_branch @ 0x10ee4
undefined4 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x10eec
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x10ef8
undefined4 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x10f00
void test_return_values(void)
{
  undefined4 uVar1;
  puts(&DAT_0001171b);
  __printf_chk(1,&DAT_00011739,0x2a);
  __printf_chk(1,&DAT_00011755,0x14);
  __printf_chk(1,&DAT_00011771,7);
  uVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_0001178c,uVar1);
  __printf_chk(1,&DAT_000117a9,10);
  __printf_chk(1,&DAT_000117c5,handle1_1);
  __printf_chk(1,&DAT_000117e2,0x28);
  __printf_chk(1,&DAT_000117fe,0x3c);
  __printf_chk(1,&DAT_0001181a,0x15);
  return;
}

// Function: __aeabi_drsub @ 0x10fd4
void __aeabi_drsub(undefined4 param_1,uint param_2)
{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}

// Function: __subdf3 @ 0x10fdc
ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)
{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
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
  bool bVar16;
  uVar8 = param_4 ^ 0x80000000;
  uVar11 = param_2 << 1;
  param_4 = param_4 << 1;
  bVar14 = uVar11 == param_4 && param_1 == param_3;
  if (uVar11 != param_4 || param_1 != param_3) {
    bVar14 = (uVar11 | param_1) == 0;
  }
  if (!bVar14) {
    bVar14 = (param_4 | param_3) == 0;
  }
  iVar10 = (int)uVar11 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar10 == -1;
  }
  iVar1 = (int)param_4 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar10 == -1 || iVar1 == -1) {
      uVar11 = uVar8;
      uVar12 = param_3;
      if (iVar10 == -1) {
        uVar11 = param_2;
        uVar12 = param_1;
      }
      if (iVar10 != -1 || iVar1 != -1) {
        param_3 = uVar12;
        uVar8 = uVar11;
      }
      bVar14 = (uVar12 | uVar11 << 0xc) == 0;
      if (bVar14) {
        bVar14 = (param_3 | uVar8 << 0xc) == 0;
      }
      if (bVar14) {
        bVar14 = uVar11 == uVar8;
      }
      if (!bVar14) {
        uVar11 = uVar11 | 0x80000;
      }
      return CONCAT44(uVar11,uVar12);
    }
    if (uVar11 != param_4 || param_1 != param_3) {
      if ((uVar11 | param_1) == 0) {
        param_1 = param_3;
        param_2 = uVar8;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar8) {
      return 0;
    }
    if (uVar11 >> 0x15 == 0) {
      bVar3 = (byte)(param_1 >> 0x1f);
      uVar11 = param_2 * 2 + (uint)bVar3;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar3)) {
        uVar11 = uVar11 | 0x80000000;
      }
      return CONCAT44(uVar11,param_1 << 1);
    }
    if (uVar11 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_00011250:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar11 = uVar11 >> 0x15;
  param_4 = param_4 >> 0x15;
  uVar12 = param_4 - uVar11;
  bVar14 = uVar12 != 0;
  if (param_4 < uVar11) {
    uVar12 = -uVar12;
  }
  uVar7 = param_1;
  uVar9 = param_2;
  if (bVar14 && uVar11 <= param_4) {
    uVar11 = uVar11 + uVar12;
    uVar7 = param_3;
    uVar9 = uVar8;
    param_3 = param_1;
    uVar8 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar9,uVar7);
  }
  uVar6 = uVar9 & 0xfffff | 0x100000;
  if ((uVar9 & 0x80000000) != 0) {
    bVar14 = uVar7 != 0;
    uVar7 = -uVar7;
    uVar6 = -(uVar6 + bVar14);
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
      uVar6 = uVar6 ^ 0x100000;
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
    uVar5 = uVar7 + param_3;
    uVar2 = uVar9 << (uVar8 & 0xff);
    uVar8 = uVar5 + uVar2;
    uVar12 = uVar6 + CARRY4(uVar7,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
             (uint)CARRY4(uVar5,uVar2);
  }
  else {
    uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
    uVar8 = uVar7 + uVar12;
    uVar12 = uVar6 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar7,uVar12);
  }
  param_2 = uVar12 & 0x80000000;
  uVar7 = uVar12;
  if ((int)uVar12 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar7 = -uVar8;
    uVar8 = -(uVar8 + !bVar14);
    uVar7 = -(uVar12 + (bVar14 <= uVar7));
  }
  if (0xfffff < uVar7) {
    uVar9 = uVar11 - 1;
    if (0x1fffff < uVar7) {
      bVar3 = (byte)uVar7;
      uVar7 = uVar7 >> 1;
      bVar4 = (byte)uVar8;
      uVar8 = (uint)(bVar3 & 1) << 0x1f | uVar8 >> 1;
      uVar13 = (uint)(bVar4 & 1) << 0x1f | uVar13 >> 1;
      uVar9 = uVar11;
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011250;
    }
LAB_000110f8:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar8 & 1);
    }
    return CONCAT44(uVar7 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
                    uVar8 + bVar14);
  }
  bVar3 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar9 = uVar8 * 2;
  bVar14 = CARRY4(uVar8,uVar8);
  uVar8 = uVar8 * 2 + (uint)bVar3;
  uVar7 = uVar7 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar3));
  uVar9 = uVar11 - 2;
  if (uVar11 - 1 != 0 && 0xfffff < uVar7) goto LAB_000110f8;
  uVar11 = uVar8;
  uVar6 = uVar7;
  if (uVar7 == 0) {
    uVar11 = 0;
    uVar6 = uVar8;
  }
  iVar10 = LZCOUNT(uVar6);
  if (uVar7 == 0) {
    iVar10 = iVar10 + 0x20;
  }
  uVar7 = iVar10 - 0xb;
  bVar16 = SBORROW4(uVar7,0x20);
  uVar8 = iVar10 - 0x2b;
  bVar14 = (int)uVar8 < 0;
  bVar15 = uVar8 == 0;
  if ((int)uVar7 < 0x20) {
    bVar16 = SCARRY4(uVar8,0xc);
    iVar10 = iVar10 + -0x1f;
    bVar14 = iVar10 < 0;
    bVar15 = iVar10 == 0;
    uVar8 = uVar7;
    if (!bVar15 && bVar14 == bVar16) {
      uVar11 = uVar6 << (uVar7 & 0xff);
      uVar6 = uVar6 >> (0xcU - iVar10 & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar15 || bVar14 != bVar16) {
    uVar13 = 0x20 - uVar8;
  }
  uVar6 = uVar6 << (uVar8 & 0xff);
  if (bVar15 || bVar14 != bVar16) {
    uVar6 = uVar6 | uVar11 >> (uVar13 & 0xff);
  }
  if (bVar15 || bVar14 != bVar16) {
    uVar11 = uVar11 << (uVar8 & 0xff);
  }
LAB_00011178:
  if ((int)uVar7 <= (int)uVar9) {
    return CONCAT44(uVar6 + (uVar9 - uVar7) * 0x100000 | param_2,uVar11);
  }
  uVar8 = ~(uVar9 - uVar7);
  if ((int)uVar8 < 0x1f) {
    iVar10 = uVar8 - 0x13;
    if (iVar10 != 0 && iVar10 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
      return CONCAT44(uVar12,uVar11 >> (0x20 - (0xcU - iVar10) & 0xff) |
                             uVar6 << (0xcU - iVar10 & 0xff)) & 0x80000000ffffffff;
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(param_2 | uVar6 >> (uVar8 & 0xff),
                    uVar11 >> (uVar8 & 0xff) | uVar6 << (0x20 - uVar8 & 0xff));
  }
  return CONCAT44(uVar12,uVar6 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_dadd @ 0x10fe0
ulonglong __aeabi_dadd(uint param_1,uint param_2,uint param_3,uint param_4)
{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
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
  bool bVar16;
  uVar9 = param_2 << 1;
  uVar6 = param_4 << 1;
  bVar14 = uVar9 == uVar6 && param_1 == param_3;
  if (uVar9 != uVar6 || param_1 != param_3) {
    bVar14 = (uVar9 | param_1) == 0;
  }
  if (!bVar14) {
    bVar14 = (uVar6 | param_3) == 0;
  }
  iVar8 = (int)uVar9 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar8 == -1;
  }
  iVar1 = (int)uVar6 >> 0x15;
  if (!bVar14) {
    bVar14 = iVar1 == -1;
  }
  if (bVar14) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_4;
      uVar6 = param_3;
      if (iVar8 == -1) {
        uVar9 = param_2;
        uVar6 = param_1;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar6;
        param_4 = uVar9;
      }
      bVar14 = (uVar6 | uVar9 << 0xc) == 0;
      if (bVar14) {
        bVar14 = (param_3 | param_4 << 0xc) == 0;
      }
      if (bVar14) {
        bVar14 = uVar9 == param_4;
      }
      if (!bVar14) {
        uVar9 = uVar9 | 0x80000;
      }
      return CONCAT44(uVar9,uVar6);
    }
    if (uVar9 != uVar6 || param_1 != param_3) {
      if ((uVar9 | param_1) == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if (uVar9 >> 0x15 == 0) {
      bVar3 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar3;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar3)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_00011250:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 >> 0x15;
  uVar6 = uVar6 >> 0x15;
  uVar11 = uVar6 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar6 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar6) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar6 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar6 = -(uVar6 + bVar14);
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
      uVar6 = uVar6 ^ 0x100000;
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
    uVar5 = uVar10 + param_3;
    uVar2 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar5 + uVar2;
    uVar6 = uVar6 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar5,uVar2);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar6 = uVar6 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar6 & 0x80000000;
  uVar11 = uVar6;
  if ((int)uVar6 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar6 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar3 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar4 = (byte)uVar13;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar4 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011250;
    }
LAB_000110f8:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar3 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar3;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar3));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_000110f8;
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
  uVar13 = iVar8 - 0xb;
  bVar16 = SBORROW4(uVar13,0x20);
  uVar11 = iVar8 - 0x2b;
  bVar14 = (int)uVar11 < 0;
  bVar15 = uVar11 == 0;
  if ((int)uVar13 < 0x20) {
    bVar16 = SCARRY4(uVar11,0xc);
    iVar8 = iVar8 + -0x1f;
    bVar14 = iVar8 < 0;
    bVar15 = iVar8 == 0;
    uVar11 = uVar13;
    if (!bVar15 && bVar14 == bVar16) {
      uVar9 = uVar7 << (uVar13 & 0xff);
      uVar7 = uVar7 >> (0xcU - iVar8 & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar15 || bVar14 != bVar16) {
    uVar12 = 0x20 - uVar11;
  }
  uVar7 = uVar7 << (uVar11 & 0xff);
  if (bVar15 || bVar14 != bVar16) {
    uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
  }
  if (bVar15 || bVar14 != bVar16) {
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_00011178:
  if ((int)uVar13 <= (int)uVar10) {
    return CONCAT44(uVar7 + (uVar10 - uVar13) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar13);
  if ((int)uVar11 < 0x1f) {
    iVar8 = uVar11 - 0x13;
    if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar11 - 0x1f,0xc)) {
      return CONCAT44(uVar6,uVar9 >> (0x20 - (0xcU - iVar8) & 0xff) | uVar7 << (0xcU - iVar8 & 0xff)
                     ) & 0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar6,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_ui2d @ 0x1128c
ulonglong __aeabi_ui2d(uint param_1)
{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint in_r12;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar3 = LZCOUNT(param_1);
  uVar4 = iVar3 + 0x15;
  bVar7 = SBORROW4(uVar4,0x20);
  uVar2 = iVar3 - 0xb;
  bVar5 = (int)uVar2 < 0;
  bVar6 = uVar2 == 0;
  if (uVar4 < 0x20) {
    bVar7 = SCARRY4(uVar2,0xc);
    bVar5 = false;
    bVar6 = iVar3 + 1 == 0;
    uVar2 = uVar4;
    if (!bVar6 && bVar7 == false) {
      uVar1 = param_1 << uVar4;
      param_1 = param_1 >> (0xcU - (iVar3 + 1) & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar6 || bVar5 != bVar7) {
    in_r12 = 0x20 - uVar2;
  }
  param_1 = param_1 << (uVar2 & 0xff);
  if (bVar6 || bVar5 != bVar7) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
  }
  if (bVar6 || bVar5 != bVar7) {
    uVar1 = 0 << (uVar2 & 0xff);
  }
LAB_00011178:
  if (uVar4 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar4) * 0x100000,uVar1);
  }
  uVar2 = ~(0x432 - uVar4);
  if (0x1e < (int)uVar2) {
    return (ulonglong)(param_1 >> (uVar2 - 0x1f & 0xff));
  }
  iVar3 = uVar2 - 0x13;
  if (iVar3 == 0 || iVar3 < 0 != SCARRY4(uVar2 - 0x1f,0xc)) {
    uVar2 = uVar2 + 1;
    return CONCAT44(param_1 >> (uVar2 & 0xff),
                    uVar1 >> (uVar2 & 0xff) | param_1 << (0x20 - uVar2 & 0xff));
  }
  return (ulonglong)(uVar1 >> (0x20 - (0xcU - iVar3) & 0xff) | param_1 << (0xcU - iVar3 & 0xff));
}

// Function: __floatsidf @ 0x112b0
ulonglong __floatsidf(uint param_1)
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
  bool bVar9;
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar6 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(uVar2);
  uVar5 = iVar4 + 0x15;
  bVar9 = SBORROW4(uVar5,0x20);
  uVar3 = iVar4 - 0xb;
  bVar7 = (int)uVar3 < 0;
  bVar8 = uVar3 == 0;
  if (uVar5 < 0x20) {
    bVar9 = SCARRY4(uVar3,0xc);
    bVar7 = false;
    bVar8 = iVar4 + 1 == 0;
    uVar3 = uVar5;
    if (!bVar8 && bVar9 == false) {
      uVar1 = uVar2 << uVar5;
      uVar2 = uVar2 >> (0xcU - (iVar4 + 1) & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar8 || bVar7 != bVar9) {
    in_r12 = 0x20 - uVar3;
  }
  uVar2 = uVar2 << (uVar3 & 0xff);
  if (bVar8 || bVar7 != bVar9) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
  }
  if (bVar8 || bVar7 != bVar9) {
    uVar1 = 0 << (uVar3 & 0xff);
  }
LAB_00011178:
  if (uVar5 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar5) * 0x100000 | uVar6,uVar1);
  }
  uVar3 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar3) {
    return CONCAT44(param_1,uVar2 >> (uVar3 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar4 = uVar3 - 0x13;
  if (iVar4 == 0 || iVar4 < 0 != SCARRY4(uVar3 - 0x1f,0xc)) {
    uVar3 = uVar3 + 1;
    return CONCAT44(uVar6 | uVar2 >> (uVar3 & 0xff),
                    uVar1 >> (uVar3 & 0xff) | uVar2 << (0x20 - uVar3 & 0xff));
  }
  return CONCAT44(param_1,uVar1 >> (0x20 - (0xcU - iVar4) & 0xff) | uVar2 << (0xcU - iVar4 & 0xff))
         & 0x80000000ffffffff;
}

// Function: __extendsfdf2 @ 0x112d8
ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)
{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_r12;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uVar3 = param_1 << 1;
  bVar9 = uVar3 == 0;
  uVar1 = param_1 & 0x80000000;
  uVar5 = (uint)((int)uVar3 >> 3) >> 1;
  uVar2 = uVar1 | uVar5;
  param_1 = param_1 << 0x1d;
  if (!bVar9) {
    param_4 = uVar3 & 0xff000000;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = param_4 == 0xff000000;
  }
  if (!bVar9) {
    return CONCAT44(uVar2,param_1) ^ 0x3800000000000000;
  }
  if ((uVar3 & 0xffffff) == 0) {
    return CONCAT44(uVar2,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar2,param_1) | 0x8000000000000;
  }
  uVar3 = param_1;
  uVar4 = uVar5;
  if (uVar5 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar6 = LZCOUNT(uVar4);
  if (uVar5 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar10 = SBORROW4(uVar7,0x20);
  uVar5 = iVar6 - 0x2b;
  bVar9 = (int)uVar5 < 0;
  bVar8 = uVar5 == 0;
  if ((int)uVar7 < 0x20) {
    bVar10 = SCARRY4(uVar5,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar9 = iVar6 < 0;
    bVar8 = iVar6 == 0;
    uVar5 = uVar7;
    if (!bVar8 && bVar9 == bVar10) {
      uVar3 = uVar4 << (uVar7 & 0xff);
      uVar4 = uVar4 >> (0xcU - iVar6 & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar8 || bVar9 != bVar10) {
    in_r12 = 0x20 - uVar5;
  }
  uVar4 = uVar4 << (uVar5 & 0xff);
  if (bVar8 || bVar9 != bVar10) {
    uVar4 = uVar4 | uVar3 >> (in_r12 & 0xff);
  }
  if (bVar8 || bVar9 != bVar10) {
    uVar3 = uVar3 << (uVar5 & 0xff);
  }
LAB_00011178:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar4 + (0x380 - uVar7) * 0x100000 | uVar1,uVar3);
  }
  uVar5 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar5) {
    return CONCAT44(uVar2,uVar4 >> (uVar5 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  iVar6 = uVar5 - 0x13;
  if (iVar6 == 0 || iVar6 < 0 != SCARRY4(uVar5 - 0x1f,0xc)) {
    uVar5 = uVar5 + 1;
    return CONCAT44(uVar1 | uVar4 >> (uVar5 & 0xff),
                    uVar3 >> (uVar5 & 0xff) | uVar4 << (0x20 - uVar5 & 0xff));
  }
  return CONCAT44(uVar2,uVar3 >> (0x20 - (0xcU - iVar6) & 0xff) | uVar4 << (0xcU - iVar6 & 0xff)) &
         0x80000000ffffffff;
}

// Function: __floatundidf @ 0x11320
ulonglong __floatundidf(uint param_1,uint param_2)
{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  if ((param_1 | param_2) == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar9 = 0x432;
  uVar8 = param_2 >> 0x16;
  if (uVar8 != 0) {
    iVar9 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar9 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar9 = iVar9 + 3;
    }
    iVar9 = iVar9 - ((int)param_2 >> 0x1f);
    uVar8 = param_1 << (0x20U - iVar9 & 0xff);
    param_1 = param_1 >> iVar9 | param_2 << (0x20U - iVar9 & 0xff);
    param_2 = param_2 >> iVar9;
    iVar9 = iVar9 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
      iVar9 = iVar9 + 1;
      if (0xffbfffff < (uint)(iVar9 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_000110f8:
    bVar11 = 0x7fffffff < uVar8;
    if (uVar8 == 0x80000000) {
      bVar11 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar9 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar11),param_1 + bVar11
                   );
  }
  bVar1 = (byte)(uVar8 >> 0x1f);
  uVar8 = uVar8 << 1;
  uVar3 = param_1 * 2;
  bVar11 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar11 || CARRY4(uVar3,(uint)bVar1));
  bVar11 = iVar9 != 0;
  iVar9 = iVar9 + -1;
  if (bVar11 && 0xfffff < param_2) goto LAB_000110f8;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar6 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar12 = SBORROW4(uVar7,0x20);
  uVar5 = iVar6 - 0x2b;
  bVar11 = (int)uVar5 < 0;
  bVar10 = uVar5 == 0;
  if ((int)uVar7 < 0x20) {
    bVar12 = SCARRY4(uVar5,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar11 = iVar6 < 0;
    bVar10 = iVar6 == 0;
    uVar5 = uVar7;
    if (!bVar10 && bVar11 == bVar12) {
      uVar3 = uVar4 << (uVar7 & 0xff);
      uVar4 = uVar4 >> (0xcU - iVar6 & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar10 || bVar11 != bVar12) {
    uVar8 = 0x20 - uVar5;
  }
  uVar4 = uVar4 << (uVar5 & 0xff);
  if (bVar10 || bVar11 != bVar12) {
    uVar4 = uVar4 | uVar3 >> (uVar8 & 0xff);
  }
  if (bVar10 || bVar11 != bVar12) {
    uVar3 = uVar3 << (uVar5 & 0xff);
  }
LAB_00011178:
  if ((int)uVar7 <= iVar9) {
    return CONCAT44(uVar4 + (iVar9 - uVar7) * 0x100000,uVar3);
  }
  uVar8 = ~(iVar9 - uVar7);
  if ((int)uVar8 < 0x1f) {
    iVar9 = uVar8 - 0x13;
    if (iVar9 != 0 && iVar9 < 0 == SCARRY4(uVar8 - 0x1f,0xc)) {
      return (ulonglong)(uVar3 >> (0x20 - (0xcU - iVar9) & 0xff) | uVar4 << (0xcU - iVar9 & 0xff));
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar4 >> (uVar8 & 0xff),uVar3 >> (uVar8 & 0xff) | uVar4 << (0x20 - uVar8 & 0xff)
                   );
  }
  return (ulonglong)(uVar4 >> (uVar8 - 0x1f & 0xff));
}

// Function: __aeabi_l2d @ 0x11334
ulonglong __aeabi_l2d(uint param_1,uint param_2)
{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  if ((param_1 | param_2) == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar9 = param_2 & 0x80000000;
  uVar4 = param_2;
  if ((int)uVar9 < 0) {
    bVar12 = param_1 != 0;
    param_1 = -param_1;
    uVar4 = -(param_2 + bVar12);
  }
  iVar8 = 0x432;
  uVar10 = uVar4 >> 0x16;
  if (uVar10 != 0) {
    iVar8 = 3;
    if (uVar4 >> 0x19 != 0) {
      iVar8 = 6;
    }
    if (uVar4 >> 0x1c != 0) {
      iVar8 = iVar8 + 3;
    }
    iVar8 = iVar8 - ((int)uVar4 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar8 & 0xff);
    param_1 = param_1 >> iVar8 | uVar4 << (0x20U - iVar8 & 0xff);
    uVar4 = uVar4 >> iVar8;
    iVar8 = iVar8 + 0x432;
  }
  if (0xfffff < uVar4) {
    if (0x1fffff < uVar4) {
      bVar1 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar8 = iVar8 + 1;
      if (0xffbfffff < (uint)(iVar8 * 0x200000)) {
        return (ulonglong)(uVar9 | 0x7ff00000) << 0x20;
      }
    }
LAB_000110f8:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(uVar4 + iVar8 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12) | uVar9,
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  uVar4 = uVar4 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  bVar12 = iVar8 != 0;
  iVar8 = iVar8 + -1;
  if (bVar12 && 0xfffff < uVar4) goto LAB_000110f8;
  uVar3 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  iVar6 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar13 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar12 = (int)uVar4 < 0;
  bVar11 = uVar4 == 0;
  if ((int)uVar7 < 0x20) {
    bVar13 = SCARRY4(uVar4,0xc);
    iVar6 = iVar6 + -0x1f;
    bVar12 = iVar6 < 0;
    bVar11 = iVar6 == 0;
    uVar4 = uVar7;
    if (!bVar11 && bVar12 == bVar13) {
      uVar3 = uVar5 << (uVar7 & 0xff);
      uVar5 = uVar5 >> (0xcU - iVar6 & 0xff);
      goto LAB_00011178;
    }
  }
  if (bVar11 || bVar12 != bVar13) {
    uVar10 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar11 || bVar12 != bVar13) {
    uVar5 = uVar5 | uVar3 >> (uVar10 & 0xff);
  }
  if (bVar11 || bVar12 != bVar13) {
    uVar3 = uVar3 << (uVar4 & 0xff);
  }
LAB_00011178:
  if ((int)uVar7 <= iVar8) {
    return CONCAT44(uVar5 + (iVar8 - uVar7) * 0x100000 | uVar9,uVar3);
  }
  uVar4 = ~(iVar8 - uVar7);
  if ((int)uVar4 < 0x1f) {
    iVar8 = uVar4 - 0x13;
    if (iVar8 != 0 && iVar8 < 0 == SCARRY4(uVar4 - 0x1f,0xc)) {
      return CONCAT44(param_2,uVar3 >> (0x20 - (0xcU - iVar8) & 0xff) |
                              uVar5 << (0xcU - iVar8 & 0xff)) & 0x80000000ffffffff;
    }
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar9 | uVar5 >> (uVar4 & 0xff),
                    uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}

// Function: __aeabi_d2iz @ 0x11394
uint __aeabi_d2iz(uint param_1,uint param_2)
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
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}

// Function: _fini @ 0x113f0
void _fini(void)
{
  return;
}

