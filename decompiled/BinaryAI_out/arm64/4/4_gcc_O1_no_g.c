// Decompiled by BinaryAI
// SHA256: 44fa4e9b0e76f4c348d0c8ef2f13bc1a45a034c892e93fe52ddd7a92d3a084bc

// Function: _init @ 0x100738
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100750 @ 0x100750
void FUN_00100750(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x100770
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100780
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100790
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x1007a0
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1007b0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007c0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1007d0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1007e0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: _start @ 0x100800
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100834
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100850
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100880
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001008bc @ 0x1008bc
void FUN_001008bc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x1008c0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: callback_func @ 0x100914
int callback_func(int param_1)
{
  return param_1 << 1;
}

// Function: func_a @ 0x10091c
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x100924
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: cdecl_func @ 0x10092c
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x100934
undefined8 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x10093c
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x100944
undefined8 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x10094c
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x100958
undefined8 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x100960
undefined8 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x100968
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x10097c
undefined8 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x100984
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x100994
undefined8 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x10099c
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x1009b4
undefined8 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x1009bc
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1009d0
undefined8 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x1009d8
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x1009e8
undefined8 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x1009f0
undefined8 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x1009f8
void varargs_func(int param_1)
{
  int iVar1;
  int local_50;
  iVar1 = 0;
  local_50 = -0x38;
  if (0 < param_1) {
    do {
      if (local_50 < 0) {
        local_50 = local_50 + 8;
      }
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
  }
  return;
}

// Function: func_no_args @ 0x100ae8
undefined8 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x100af0
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100b10
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
  int iVar1;
  size_t sVar2;
  iVar1 = 0;
  if (param_3 != (char *)0x0) {
    sVar2 = strlen(param_3);
    iVar1 = (int)sVar2;
  }
  return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100b64
long func_struct_byval(long *param_1)
{
  long lVar1;
  long *plVar2;
  long *plVar3;
  lVar1 = 0;
  plVar2 = param_1;
  do {
    plVar3 = plVar2 + 1;
    lVar1 = lVar1 + *plVar2;
    plVar2 = plVar3;
  } while (plVar3 != param_1 + 0x10);
  return lVar1;
}

// Function: func_struct_byptr @ 0x100b84
int func_struct_byptr(int *param_1)
{
  int iVar1;
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *param_1 * param_1[1];
  }
  return iVar1;
}

// Function: test_calling_conventions @ 0x100ba0
void test_calling_conventions(void)
{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long alStack_110 [17];
  long local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long local_8;
  long *plVar4;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101570);
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
  uVar1 = varargs_func(5,1,2,3,4);
  __printf_chk(1,&DAT_00101638,uVar1);
  __printf_chk(1,&DAT_00101660,0x2a);
  __printf_chk(1,&DAT_00101688,0x24);
  uVar1 = func_mixed_args(0x40091eb851eb851f,10,&DAT_001016b0,100);
  __printf_chk(1,&DAT_001016b8,uVar1);
  lVar2 = 1;
  do {
    alStack_110[lVar2] = lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  uStack_80 = alStack_110[2];
  local_88 = alStack_110[1];
  uStack_70 = alStack_110[4];
  uStack_78 = alStack_110[3];
  uStack_60 = alStack_110[6];
  local_68 = alStack_110[5];
  uStack_50 = alStack_110[8];
  uStack_58 = alStack_110[7];
  uStack_40 = alStack_110[10];
  local_48 = alStack_110[9];
  uStack_30 = alStack_110[12];
  uStack_38 = alStack_110[11];
  uStack_20 = alStack_110[14];
  local_28 = alStack_110[13];
  uStack_10 = alStack_110[16];
  uStack_18 = alStack_110[15];
  lVar2 = 0;
  plVar3 = &local_88;
  do {
    plVar4 = plVar3 + 1;
    lVar2 = lVar2 + *plVar3;
    plVar3 = plVar4;
  } while (&local_8 != plVar4);
  __printf_chk(1,&DAT_001016e0,lVar2);
  __printf_chk(1,&DAT_00101710,0x32);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_by_value_int @ 0x100dc0
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x100dc8
undefined8 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x100dd0
undefined8 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x100de4
undefined8 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x100dec
undefined8 param_array_decay(void)
{
  return 8;
}

// Function: call_array_decay @ 0x100df4
undefined8 call_array_decay(void)
{
  return 8;
}

// Function: param_string @ 0x100dfc
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x100e0c
undefined8 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x100e14
int param_ptr_array(long param_1,int param_2)
{
  int iVar1;
  long lVar2;
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + (uint)**(byte **)(param_1 + lVar2 * 8);
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < param_2);
  }
  return iVar1;
}

// Function: call_ptr_array @ 0x100e4c
void call_ptr_array(void)
{
  undefined8 uVar1;
  undefined *local_20;
  undefined *puStack_18;
  undefined *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_20 = PTR_DAT_00113010;
  puStack_18 = PTR_DAT_00113018;
  local_10 = PTR_DAT_00113020;
  uVar1 = param_ptr_array(&local_20,3);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_varargs @ 0x100eb4
void param_varargs(int param_1)
{
  int iVar1;
  int local_50;
  iVar1 = 0;
  local_50 = -0x38;
  if (0 < param_1) {
    do {
      if (local_50 < 0) {
        local_50 = local_50 + 8;
      }
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
  }
  return;
}

// Function: call_varargs_param @ 0x100fa4
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x100fcc
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100fec
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: param_double_ptr @ 0x10100c
undefined8 param_double_ptr(undefined8 *param_1,undefined4 param_2)
{
  undefined8 uVar1;
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// Function: call_double_ptr @ 0x101038
void call_double_ptr(void)
{
  int iVar1;
  int local_14;
  int *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_14 = 10;
  local_10 = &local_14;
  param_double_ptr(&local_10,0x14);
  iVar1 = local_14;
  if (local_10 == (int *)0x0) {
    iVar1 = local_14 + 1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_complex_cast @ 0x1010a8
int param_complex_cast(int *param_1,int param_2)
{
  int iVar1;
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else if (param_2 == 1) {
    iVar1 = *param_1 + param_1[1];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_complex_cast @ 0x1010d4
undefined8 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x1010e0
int param_struct_byval(int *param_1)
{
  return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x1010f0
void call_struct_byval(void)
{
  int iVar1;
  int *piVar2;
  int local_48 [15];
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  iVar1 = 0;
  piVar2 = local_48;
  do {
    *piVar2 = iVar1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0x10);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(local_c + local_48[0],&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_order_dep @ 0x101158
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x101160
undefined8 call_order_dep(void)
{
  return 4;
}

// Function: test_parameter_passing @ 0x101168
void test_parameter_passing(void)
{
  undefined4 uVar1;
  puts(&DAT_00101740);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  uVar1 = call_by_value_ptr();
  __printf_chk(1,"PARAM-L1-02: %d\n",uVar1);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  uVar1 = call_ptr_array();
  __printf_chk(1,"PARAM-L2-03: %d\n",uVar1);
  uVar1 = call_varargs_param();
  __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
  uVar1 = call_func_ptr_param();
  __printf_chk(1,"PARAM-L3-01: %d\n",uVar1);
  uVar1 = call_double_ptr();
  __printf_chk(1,"PARAM-L3-02: %d\n",uVar1);
  uVar1 = call_complex_cast();
  __printf_chk(1,"PARAM-L3-03: %d\n",uVar1);
  uVar1 = call_struct_byval();
  __printf_chk(1,"PARAM-L3-04: %d\n",uVar1);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}

// Function: ret_basic_type @ 0x10127c
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x101284
undefined8 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x10128c
long ret_pointer(long param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x101294
undefined8 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x10129c
ulong ret_small_struct(ulong param_1,long param_2)
{
  return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x1012a8
undefined8 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x1012b0
void ret_large_struct(int param_1)
{
  long lVar1;
  long lVar2;
  undefined8 *in_x8;
  int iStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long local_8;
  lVar1 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  lVar2 = 1;
  do {
    (&iStack_4c)[lVar2] = param_1 + -1 + (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  in_x8[1] = uStack_40;
  *in_x8 = local_48;
  in_x8[3] = uStack_30;
  in_x8[2] = uStack_38;
  in_x8[5] = uStack_20;
  in_x8[4] = local_28;
  in_x8[7] = uStack_10;
  in_x8[6] = uStack_18;
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}

// Function: call_ret_large_struct @ 0x10132c
void call_ret_large_struct(void)
{
  long lVar1;
  int local_48;
  int local_c;
  lVar1 = ___stack_chk_guard;
  ret_large_struct(100,0);
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(local_48 + local_c,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}

// Function: ret_func_ptr @ 0x101388
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x1013a4
void call_ret_func_ptr(void)
{
  func_b(5);
  return;
}

// Function: ret_opaque_handle @ 0x1013bc
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x1013e0
undefined4 call_ret_opaque(void)
{
  return handle1_1;
}

// Function: ret_complex_expr @ 0x1013ec
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 << 1;
  }
  return iVar1;
}

// Function: call_ret_complex_expr @ 0x101400
undefined8 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x101408
undefined4 ret_multi_branch(int param_1)
{
  undefined4 uVar1;
  uVar1 = 0x14;
  if (((param_1 != 1) && (uVar1 = 0x1e, param_1 != 2)) && (uVar1 = 10, param_1 != 0)) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: call_ret_multi_branch @ 0x101434
undefined8 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x10143c
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x101448
undefined8 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x101450
void test_return_values(void)
{
  undefined4 uVar1;
  puts(&DAT_00101870);
  __printf_chk(1,&DAT_00101890,0x2a);
  uVar1 = call_ret_pointer();
  __printf_chk(1,&DAT_001018b0,uVar1);
  uVar1 = call_ret_small_struct();
  __printf_chk(1,&DAT_001018d0,uVar1);
  uVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_001018f0,uVar1);
  uVar1 = call_ret_func_ptr();
  __printf_chk(1,&DAT_00101910,uVar1);
  __printf_chk(1,&DAT_00101930,handle1_1);
  __printf_chk(1,&DAT_00101950,0x28);
  __printf_chk(1,&DAT_00101970,0x3c);
  __printf_chk(1,&DAT_00101990,0x15);
  return;
}

// Function: main @ 0x101534
undefined8 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _fini @ 0x101554
void _fini(void)
{
  return;
}

