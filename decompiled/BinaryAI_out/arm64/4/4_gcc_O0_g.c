// Decompiled by BinaryAI
// SHA256: e9127a278e5438f7994413bee3868da729ae8d7db77049584b578bbd1570c740

// Function: _init @ 0x100730
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

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1007a0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1007b0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1007c0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1007d0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x1007e0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
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

// Function: cdecl_func @ 0x100914
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x100934
void call_cdecl(void)
{
  cdecl_func(5,10);
  return;
}

// Function: stdcall_func @ 0x100950
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x100970
void call_stdcall(void)
{
  stdcall_func(5,10);
  return;
}

// Function: fastcall_func @ 0x10098c
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x1009b8
void call_fastcall(void)
{
  fastcall_func(1,2,3);
  return;
}

// Function: call_thiscall @ 0x1009d8
undefined8 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x1009e0
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x100a24
void call_arm_aapcs(void)
{
  arm_aapcs_func(1,2,3,4,5);
  return;
}

// Function: mips_func @ 0x100a4c
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x100a84
void call_mips(void)
{
  mips_func(10,0x14,0x1e,0x28);
  return;
}

// Function: amd64_sysv_func @ 0x100aa8
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x100af8
void call_amd64_sysv(void)
{
  amd64_sysv_func(1,2,3,4,5,6);
  return;
}

// Function: ms_x64_func @ 0x100b24
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x100b68
void call_ms_x64(void)
{
  ms_x64_func(1,2,3,4,5);
  return;
}

// Function: vectorcall_func @ 0x100b90
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100bc8
void call_vectorcall(void)
{
  vectorcall_func(1,2,3,4);
  return;
}

// Function: mixed_conventions_test @ 0x100bec
int mixed_conventions_test(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = cdecl_func(1,2);
  iVar2 = stdcall_func(3,4);
  iVar3 = fastcall_func(5,6,7);
  return iVar1 + iVar2 + iVar3;
}

// Function: varargs_func @ 0x100c5c
int varargs_func(int param_1)
{
  int iVar1;
  int *piVar2;
  int local_f0;
  int local_ec;
  int *piVar3;
  int local_d0;
  local_f0 = 0;
  local_d0 = -0x38;
  piVar3 = (int *)register0x00000008;
  for (local_ec = 0; local_ec < param_1; local_ec = local_ec + 1) {
    piVar2 = piVar3;
    if (local_d0 < 0) {
      iVar1 = local_d0 + 8;
      if (iVar1 < 1) {
        piVar2 = (int *)(&stack0x00000000 + local_d0);
        local_d0 = iVar1;
      }
      else {
        piVar3 = piVar3 + 2;
        local_d0 = iVar1;
      }
    }
    else {
      piVar3 = piVar3 + 2;
    }
    local_f0 = local_f0 + *piVar2;
  }
  return local_f0;
}

// Function: func_no_args @ 0x100d9c
undefined8 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x100da4
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100e0c
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
  int iVar1;
  size_t sVar2;
  if (param_3 == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    sVar2 = strlen(param_3);
    iVar1 = (int)sVar2;
  }
  return (int)((double)(param_2 + iVar1) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100e74
long func_struct_byval(long param_1)
{
  int local_c;
  long local_8;
  local_8 = 0;
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    local_8 = local_8 + *(long *)(param_1 + (long)local_c * 8);
  }
  return local_8;
}

// Function: func_struct_byptr @ 0x100ec0
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

// Function: test_calling_conventions @ 0x100ef8
void test_calling_conventions(void)
{
  int iVar1;
  ulong uVar2;
  long local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined *local_90;
  long local_88 [16];
  long local_8;
  local_8 = ___stack_chk_guard;
  iVar1 = puts(&DAT_00101fb0);
  uVar2 = call_cdecl(iVar1);
  iVar1 = printf("CALL-L1-01: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_stdcall(iVar1);
  iVar1 = printf("CALL-L1-02: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_fastcall(iVar1);
  iVar1 = printf("CALL-L1-03: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_thiscall(iVar1);
  iVar1 = printf("CALL-L1-04: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_arm_aapcs(iVar1);
  iVar1 = printf("CALL-L1-05: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_mips(iVar1);
  iVar1 = printf("CALL-L1-06: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_amd64_sysv(iVar1);
  iVar1 = printf("CALL-L1-07: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_ms_x64(iVar1);
  iVar1 = printf("CALL-L1-08: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_vectorcall(iVar1);
  iVar1 = printf("CALL-L1-09: %d\n",uVar2 & 0xffffffff);
  uVar2 = mixed_conventions_test(iVar1);
  printf("CALL-L1-10: %d\n",uVar2 & 0xffffffff);
  local_b0 = varargs_func(5,1,2,3,4,5);
  iVar1 = printf(&DAT_00102078,(ulong)local_b0);
  local_ac = func_no_args(iVar1);
  printf(&DAT_001020a0,(ulong)local_ac);
  local_a8 = func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_001020c8,(ulong)local_a8);
  local_90 = &DAT_001020f0;
  local_a4 = func_mixed_args(0x40091eb851eb851f,10,&DAT_001020f0,100);
  printf(&DAT_001020f8,(ulong)local_a4);
  for (local_b4 = 0; local_b4 < 0x10; local_b4 = local_b4 + 1) {
    local_88[local_b4] = (long)(local_b4 + 1);
  }
  uStack_138 = local_88[1];
  local_140 = local_88[0];
  uStack_128 = local_88[3];
  uStack_130 = local_88[2];
  uStack_118 = local_88[5];
  local_120 = local_88[4];
  uStack_108 = local_88[7];
  uStack_110 = local_88[6];
  uStack_f8 = local_88[9];
  local_100 = local_88[8];
  uStack_e8 = local_88[11];
  uStack_f0 = local_88[10];
  uStack_d8 = local_88[13];
  local_e0 = local_88[12];
  uStack_c8 = local_88[15];
  uStack_d0 = local_88[14];
  local_a0 = func_struct_byval(&local_140);
  printf(&DAT_00102120,(ulong)local_a0);
  local_98 = 5;
  local_94 = 10;
  local_9c = func_struct_byptr(&local_98);
  printf(&DAT_00102150,(ulong)local_9c);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_by_value_int @ 0x101178
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x101198
int call_by_value_int(void)
{
  int iVar1;
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x1011c8
undefined param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x101200
int call_by_value_ptr(void)
{
  int local_18;
  int local_14;
  int *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_18 = 5;
  local_10 = &local_18;
  local_14 = param_by_value_ptr(local_10,0);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,local_18 + local_14,0,local_8 - ___stack_chk_guard);
  }
  return local_18 + local_14;
}

// Function: param_array_decay @ 0x101274
undefined8 param_array_decay(void)
{
  return 8;
}

// Function: call_array_decay @ 0x10128c
undefined4 call_array_decay(void)
{
  undefined4 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  uVar1 = param_array_decay(&local_30,10);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: param_string @ 0x1012f0
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x10131c
void call_string_param(void)
{
  param_string("Hello");
  return;
}

// Function: param_ptr_array @ 0x101338
int param_ptr_array(long param_1,int param_2)
{
  int local_8;
  int local_4;
  local_8 = 0;
  for (local_4 = 0; local_4 < param_2; local_4 = local_4 + 1) {
    local_8 = local_8 + (uint)**(byte **)(param_1 + (long)local_4 * 8);
  }
  return local_8;
}

// Function: call_ptr_array @ 0x1013a0
undefined4 call_ptr_array(void)
{
  undefined4 uVar1;
  undefined *local_20;
  undefined *puStack_18;
  undefined *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_20 = PTR_DAT_00114010;
  puStack_18 = PTR_DAT_00114018;
  local_10 = PTR_DAT_00114020;
  uVar1 = param_ptr_array(&local_20,3);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: param_varargs @ 0x101418
int param_varargs(int param_1)
{
  int iVar1;
  int *piVar2;
  int local_f0;
  int local_ec;
  int *piVar3;
  int local_d0;
  local_d0 = -0x38;
  local_f0 = 0;
  piVar3 = (int *)register0x00000008;
  for (local_ec = 0; local_ec < param_1; local_ec = local_ec + 1) {
    piVar2 = piVar3;
    if (local_d0 < 0) {
      iVar1 = local_d0 + 8;
      if (iVar1 < 1) {
        piVar2 = (int *)(&stack0x00000000 + local_d0);
        local_d0 = iVar1;
      }
      else {
        piVar3 = piVar3 + 2;
        local_d0 = iVar1;
      }
    }
    else {
      piVar3 = piVar3 + 2;
    }
    local_f0 = local_f0 + *piVar2;
  }
  return local_f0;
}

// Function: call_varargs_param @ 0x101558
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x101580
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: callback_func @ 0x1015a8
int callback_func(int param_1)
{
  return param_1 << 1;
}

// Function: call_func_ptr_param @ 0x1015c0
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: param_double_ptr @ 0x1015e0
undefined8 param_double_ptr(long *param_1,undefined4 param_2)
{
  undefined8 uVar1;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// Function: call_double_ptr @ 0x101634
int call_double_ptr(void)
{
  int iVar1;
  int local_18;
  undefined4 local_14;
  int *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_18 = 10;
  local_10 = &local_18;
  local_14 = param_double_ptr(&local_10,0x14);
  iVar1 = (uint)(local_10 == (int *)0x0) + local_18;
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: param_complex_cast @ 0x1016bc
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

// Function: call_complex_cast @ 0x101730
undefined4 call_complex_cast(void)
{
  undefined4 uVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_14 = 0x12345678;
  local_10 = 100;
  local_c = 200;
  param_complex_cast(&local_10,1);
  uVar1 = param_complex_cast(&local_14,0);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: param_struct_byval @ 0x1017b0
int param_struct_byval(int *param_1)
{
  return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x1017cc
undefined4 call_struct_byval(void)
{
  undefined4 uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  for (local_4c = 0; local_4c < 0x10; local_4c = local_4c + 1) {
    *(int *)((long)&local_48 + (long)local_4c * 4) = local_4c;
  }
  uStack_88 = uStack_40;
  local_90 = local_48;
  uStack_78 = uStack_30;
  uStack_80 = uStack_38;
  uStack_68 = uStack_20;
  local_70 = local_28;
  uStack_58 = uStack_10;
  uStack_60 = uStack_18;
  uVar1 = param_struct_byval(&local_90);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: param_order_dep @ 0x10186c
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x10188c
void call_order_dep(void)
{
  param_order_dep(2,2);
  return;
}

// Function: test_parameter_passing @ 0x1018c4
int test_parameter_passing(void)
{
  int iVar1;
  ulong uVar2;
  iVar1 = puts(&DAT_001021a0);
  uVar2 = call_by_value_int(iVar1);
  iVar1 = printf("PARAM-L1-01: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_by_value_ptr(iVar1);
  iVar1 = printf("PARAM-L1-02: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_array_decay(iVar1);
  iVar1 = printf("PARAM-L2-01: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_string_param(iVar1);
  iVar1 = printf("PARAM-L2-02: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_ptr_array(iVar1);
  iVar1 = printf("PARAM-L2-03: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_varargs_param(iVar1);
  iVar1 = printf("PARAM-L2-04: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_func_ptr_param(iVar1);
  iVar1 = printf("PARAM-L3-01: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_double_ptr(iVar1);
  iVar1 = printf("PARAM-L3-02: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_complex_cast(iVar1);
  iVar1 = printf("PARAM-L3-03: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_struct_byval(iVar1);
  iVar1 = printf("PARAM-L3-04: %d\n",uVar2 & 0xffffffff);
  uVar2 = call_order_dep(iVar1);
  iVar1 = printf("PARAM-L3-05: %d\n",uVar2 & 0xffffffff);
  return iVar1;
}

// Function: ret_basic_type @ 0x1019c0
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x1019d8
undefined4 call_ret_basic(void)
{
  undefined4 uVar1;
  uVar1 = ret_basic_type(0x15);
  return uVar1;
}

// Function: ret_pointer @ 0x101a00
long ret_pointer(long param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x101a18
undefined4 call_ret_pointer(void)
{
  undefined4 *puVar1;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_18 = 0x140000000a;
  local_10 = 0x1e;
  puVar1 = (undefined4 *)ret_pointer(&local_18);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,*puVar1,0,local_8 - ___stack_chk_guard);
  }
  return *puVar1;
}

// Function: ret_small_struct @ 0x101a94
undefined8 ret_small_struct(undefined4 param_1,undefined4 param_2)
{
  return CONCAT44(param_2,param_1);
}

// Function: call_ret_small_struct @ 0x101abc
int call_ret_small_struct(void)
{
  undefined8 uVar1;
  int local_8;
  int iStack_4;
  uVar1 = ret_small_struct(3,4);
  local_8 = (int)uVar1;
  iStack_4 = (int)((ulong)uVar1 >> 0x20);
  return local_8 + iStack_4;
}

// Function: ret_large_struct @ 0x101ae8
void ret_large_struct(int param_1)
{
  long lVar1;
  undefined8 *in_x8;
  int local_4c;
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
  for (local_4c = 0; local_4c < 0x10; local_4c = local_4c + 1) {
    *(int *)((long)&local_48 + (long)local_4c * 4) = param_1 + local_4c;
  }
  in_x8[1] = uStack_40;
  *in_x8 = local_48;
  in_x8[3] = uStack_30;
  in_x8[2] = uStack_38;
  in_x8[5] = uStack_20;
  in_x8[4] = local_28;
  in_x8[7] = uStack_10;
  in_x8[6] = uStack_18;
  if (lVar1 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}

// Function: call_ret_large_struct @ 0x101b88
int call_ret_large_struct(void)
{
  long lVar1;
  int local_48;
  int local_c;
  lVar1 = ___stack_chk_guard;
  ret_large_struct(100,0);
  if (lVar1 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,local_48 + local_c,0,lVar1 - ___stack_chk_guard);
  }
  return local_48 + local_c;
}

// Function: func_a @ 0x101bf0
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x101c08
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: ret_func_ptr @ 0x101c20
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  else {
    pcVar1 = func_b;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101c50
void call_ret_func_ptr(void)
{
  code *pcVar1;
  pcVar1 = (code *)ret_func_ptr(1);
  (*pcVar1)(5);
  return;
}

// Function: ret_opaque_handle @ 0x101c78
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  if (param_1 == 0) {
    puVar1 = (undefined8 *)&handle1_1;
  }
  else {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x101ca8
undefined4 call_ret_opaque(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)ret_opaque_handle(0);
  return *puVar1;
}

// Function: ret_complex_expr @ 0x101ccc
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

// Function: call_ret_complex_expr @ 0x101d08
int call_ret_complex_expr(void)
{
  int iVar1;
  int iVar2;
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar1 + iVar2;
}

// Function: ret_multi_branch @ 0x101d4c
undefined8 ret_multi_branch(int param_1)
{
  if (param_1 == 2) {
    return 0x1e;
  }
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 10;
    }
    if (param_1 == 1) {
      return 0x14;
    }
  }
  return 0xffffffff;
}

// Function: call_ret_multi_branch @ 0x101dac
int call_ret_multi_branch(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}

// Function: ret_void @ 0x101e0c
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x101e3c
undefined4 call_ret_void(void)
{
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  ret_void(7,&local_c);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,local_c,0,local_8 - ___stack_chk_guard);
  }
  return local_c;
}

// Function: test_return_values @ 0x101e9c
int test_return_values(void)
{
  int iVar1;
  ulong uVar2;
  iVar1 = puts(&DAT_001022e0);
  uVar2 = call_ret_basic(iVar1);
  iVar1 = printf(&DAT_00102300,uVar2 & 0xffffffff);
  uVar2 = call_ret_pointer(iVar1);
  iVar1 = printf(&DAT_00102320,uVar2 & 0xffffffff);
  uVar2 = call_ret_small_struct(iVar1);
  iVar1 = printf(&DAT_00102340,uVar2 & 0xffffffff);
  uVar2 = call_ret_large_struct(iVar1);
  iVar1 = printf(&DAT_00102360,uVar2 & 0xffffffff);
  uVar2 = call_ret_func_ptr(iVar1);
  iVar1 = printf(&DAT_00102380,uVar2 & 0xffffffff);
  uVar2 = call_ret_opaque(iVar1);
  iVar1 = printf(&DAT_001023a0,uVar2 & 0xffffffff);
  uVar2 = call_ret_complex_expr(iVar1);
  iVar1 = printf(&DAT_001023c0,uVar2 & 0xffffffff);
  uVar2 = call_ret_multi_branch(iVar1);
  iVar1 = printf(&DAT_001023e0,uVar2 & 0xffffffff);
  uVar2 = call_ret_void(iVar1);
  iVar1 = printf(&DAT_00102400,uVar2 & 0xffffffff);
  return iVar1;
}

// Function: main @ 0x101f70
undefined8 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _fini @ 0x101f90
void _fini(void)
{
  return;
}

