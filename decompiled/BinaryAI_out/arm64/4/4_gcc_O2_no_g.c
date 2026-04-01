// Decompiled by BinaryAI
// SHA256: 09be74af2c1ee62340f334b9b1a694787228b60267c5834a9329e3ee715e5415

// Function: _init @ 0x1006f0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100710 @ 0x100710
void FUN_00100710(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x100730
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100740
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100750
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100760
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100770
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100780
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100790
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1007a0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: main @ 0x1007c0
undefined8 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
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

// Function: func_a @ 0x100920
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x100930
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: cdecl_func @ 0x100940
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x100950
undefined8 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x100960
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x100970
undefined8 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x100980
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x100990
undefined8 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x1009a0
undefined8 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x1009b0
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1009c4
undefined8 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x1009d0
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x1009e0
undefined8 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x1009f0
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x100a10
undefined8 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x100a20
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x100a34
undefined8 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x100a40
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100a50
undefined8 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x100a60
undefined8 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x100a70
void varargs_func(int param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = -0x38;
  if (0 < param_1) {
    iVar1 = 0;
    do {
      if (iVar2 < 0) {
        iVar2 = iVar2 + 8;
      }
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
  }
  return;
}

// Function: func_no_args @ 0x100b40
undefined8 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x100b50
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100b70
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
  size_t sVar1;
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    param_2 = param_2 + (int)sVar1;
  }
  return (int)((double)param_2 + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100bc0
ulong func_struct_byval(long *param_1)
{
  long *plVar1;
  ulong uVar3;
  long *plVar2;
  uVar3 = 0;
  plVar1 = param_1;
  do {
    plVar2 = plVar1 + 1;
    uVar3 = uVar3 + *plVar1;
    plVar1 = plVar2;
  } while (plVar2 != param_1 + 0x10);
  return uVar3 & 0xffffffff;
}

// Function: func_struct_byptr @ 0x100bf0
int func_struct_byptr(int *param_1)
{
  if (param_1 != (int *)0x0) {
    return *param_1 * param_1[1];
  }
  return -1;
}

// Function: test_calling_conventions @ 0x100c10
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
  puts(&DAT_001015b0);
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
  __printf_chk(1,&DAT_00101678,uVar1);
  __printf_chk(1,&DAT_001016a0,0x2a);
  __printf_chk(1,&DAT_001016c8,0x24);
  __printf_chk(1,&DAT_001016f0,0x75);
  lVar2 = 1;
  do {
    alStack_110[lVar2] = lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  uStack_80 = alStack_110[2];
  local_88 = alStack_110[1];
  uStack_70 = alStack_110[4];
  uStack_78 = alStack_110[3];
  lVar2 = 0;
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
  plVar3 = &local_88;
  do {
    plVar4 = plVar3 + 1;
    lVar2 = lVar2 + *plVar3;
    plVar3 = plVar4;
  } while (&local_8 != plVar4);
  __printf_chk(1,&DAT_00101718,lVar2);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,&DAT_00101748,0x32);
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_by_value_int @ 0x100e20
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x100e30
undefined8 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x100e40
undefined8 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x100e60
undefined8 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x100e70
undefined8 param_array_decay(void)
{
  return 8;
}

// Function: call_array_decay @ 0x100e80
undefined8 call_array_decay(void)
{
  return 8;
}

// Function: param_string @ 0x100e90
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x100ea0
undefined8 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x100eb0
int param_ptr_array(long param_1,int param_2)
{
  long lVar1;
  int iVar2;
  long lVar3;
  if (0 < param_2) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + (uint)**(byte **)(param_1 + lVar1);
    } while ((int)lVar3 < param_2);
    return iVar2;
  }
  return 0;
}

// Function: call_ptr_array @ 0x100ef0
undefined8 call_ptr_array(void)
{
  return 300;
}

// Function: param_varargs @ 0x100f00
void param_varargs(int param_1)
{
  int iVar1;
  int iVar2;
  iVar2 = -0x38;
  if (0 < param_1) {
    iVar1 = 0;
    do {
      if (iVar2 < 0) {
        iVar2 = iVar2 + 8;
      }
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
  }
  return;
}

// Function: call_varargs_param @ 0x100fd0
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x100ff0
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x101010
undefined8 call_func_ptr_param(void)
{
  return 0x14;
}

// Function: param_double_ptr @ 0x101020
undefined8 param_double_ptr(long *param_1,undefined4 param_2)
{
  if ((param_1 != (long *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}

// Function: call_double_ptr @ 0x101050
undefined8 call_double_ptr(void)
{
  return 0x15;
}

// Function: param_complex_cast @ 0x101060
int param_complex_cast(int *param_1,int param_2)
{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return *param_1 + param_1[1];
  }
  return -1;
}

// Function: call_complex_cast @ 0x101090
undefined8 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x1010a0
int param_struct_byval(int *param_1)
{
  return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x1010b0
void call_struct_byval(void)
{
  int iVar1;
  int *piVar2;
  int local_48 [15];
  int local_c;
  long local_8;
  iVar1 = 0;
  local_8 = ___stack_chk_guard;
  piVar2 = local_48;
  do {
    *piVar2 = iVar1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0x10);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(local_48[0] + local_c,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: param_order_dep @ 0x101120
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x101130
undefined8 call_order_dep(void)
{
  return 4;
}

// Function: test_parameter_passing @ 0x101140
void test_parameter_passing(void)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int local_48 [15];
  int local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101778);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  __printf_chk(1,"PARAM-L2-03: %d\n",300);
  uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
  __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
  __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
  __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
  iVar2 = 0;
  piVar3 = local_48;
  do {
    *piVar3 = iVar2;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 != 0x10);
  __printf_chk(1,"PARAM-L3-04: %d\n",local_48[0] + local_c);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,"PARAM-L3-05: %d\n",4);
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: ret_basic_type @ 0x1012a4
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x1012b0
undefined8 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x1012c0
long ret_pointer(long param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1012d0
undefined8 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x1012e0
ulong ret_small_struct(ulong param_1,long param_2)
{
  return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x1012f0
undefined8 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x101300
void ret_large_struct(int param_1)
{
  long lVar1;
  long lVar2;
  long lVar3;
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
  lVar2 = ___stack_chk_guard;
  local_8 = ___stack_chk_guard;
  lVar3 = 1;
  do {
    lVar1 = lVar3 + 1;
    (&iStack_4c)[lVar3] = param_1 + -1 + (int)lVar3;
    lVar3 = lVar1;
  } while (lVar1 != 0x11);
  in_x8[1] = uStack_40;
  *in_x8 = local_48;
  in_x8[3] = uStack_30;
  in_x8[2] = uStack_38;
  in_x8[5] = uStack_20;
  in_x8[4] = local_28;
  in_x8[7] = uStack_10;
  in_x8[6] = uStack_18;
  if (lVar2 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
}

// Function: call_ret_large_struct @ 0x101380
void call_ret_large_struct(void)
{
  long lVar1;
  long lVar2;
  int aiStack_4c [19];
  lVar2 = 1;
  do {
    lVar1 = lVar2 + 1;
    aiStack_4c[lVar2] = (int)lVar2 + 99;
    lVar2 = lVar1;
  } while (lVar1 != 0x11);
  return;
}

// Function: ret_func_ptr @ 0x1013f4
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101410
undefined8 call_ret_func_ptr(void)
{
  return 10;
}

// Function: ret_opaque_handle @ 0x101420
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x101440
undefined4 call_ret_opaque(void)
{
  return handle1_1;
}

// Function: ret_complex_expr @ 0x101450
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 << 1;
  }
  return iVar1;
}

// Function: call_ret_complex_expr @ 0x101464
undefined8 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x101470
int ret_multi_branch(uint param_1)
{
  int iVar1;
  iVar1 = (param_1 + 1) * 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_ret_multi_branch @ 0x101490
undefined8 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x1014a0
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x1014b0
undefined8 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x1014c0
void test_return_values(void)
{
  undefined4 uVar1;
  puts(&DAT_001018a8);
  __printf_chk(1,&DAT_001018c8,0x2a);
  __printf_chk(1,&DAT_001018e8,0x14);
  __printf_chk(1,&DAT_00101908,7);
  uVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_00101928,uVar1);
  __printf_chk(1,&DAT_00101948,10);
  __printf_chk(1,&DAT_00101968,handle1_1);
  __printf_chk(1,&DAT_00101988,0x28);
  __printf_chk(1,&DAT_001019a8,0x3c);
  __printf_chk(1,&DAT_001019c8,0x15);
  return;
}

// Function: _fini @ 0x101594
void _fini(void)
{
  return;
}

