// Decompiled by BinaryAI
// SHA256: 7b877da8bd972238a141eaeca10dffae8e0c093c38b48bc80e73881b33855d3f

// Function: _init @ 0x1006b0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001006d0 @ 0x1006d0
void FUN_001006d0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x1006f0
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::strlen @ 0x100700
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100710
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100720
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::memset @ 0x100730
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100740
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100750
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::printf @ 0x100760
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100780
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x1007b4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x1007d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100800
void register_tm_clones(void)
{
  return;
}

// Function: FUN_0010083c @ 0x10083c
void FUN_0010083c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100840
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: cdecl_func @ 0x100894
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x1008b4
void call_cdecl(void)
{
  cdecl_func(5,10);
  return;
}

// Function: stdcall_func @ 0x1008d0
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x1008f0
void call_stdcall(void)
{
  stdcall_func(5,10);
  return;
}

// Function: fastcall_func @ 0x10090c
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x100938
void call_fastcall(void)
{
  fastcall_func(1,2,3);
  return;
}

// Function: call_thiscall @ 0x100958
undefined8 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x100960
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1009a4
void call_arm_aapcs(void)
{
  arm_aapcs_func(1,2,3,4,5);
  return;
}

// Function: mips_func @ 0x1009cc
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x100a04
void call_mips(void)
{
  mips_func(10,0x14,0x1e,0x28);
  return;
}

// Function: amd64_sysv_func @ 0x100a28
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x100a78
void call_amd64_sysv(void)
{
  amd64_sysv_func(1,2,3,4,5,6);
  return;
}

// Function: ms_x64_func @ 0x100aa4
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x100ae8
void call_ms_x64(void)
{
  ms_x64_func(1,2,3,4,5);
  return;
}

// Function: vectorcall_func @ 0x100b10
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100b48
void call_vectorcall(void)
{
  vectorcall_func(1,2,3,4);
  return;
}

// Function: mixed_conventions_test @ 0x100b6c
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

// Function: varargs_func @ 0x100bd8
int varargs_func(int param_1)
{
  int iVar1;
  int *local_118;
  int local_40 [2];
  int *piVar2;
  int *piVar3;
  int local_20;
  local_40[1] = 0;
  local_20 = -0x38;
  piVar2 = (int *)register0x00000008;
  for (local_40[0] = 0; local_40[0] < param_1; local_40[0] = local_40[0] + 1) {
    iVar1 = local_20;
    if ((local_20 < 0) && (iVar1 = local_20 + 8, iVar1 < 1)) {
      local_118 = (int *)((long)local_40 + (long)local_20);
      piVar3 = piVar2;
      local_20 = iVar1;
    }
    else {
      local_20 = iVar1;
      piVar3 = piVar2 + 2;
      local_118 = piVar2;
    }
    local_40[1] = local_40[1] + *local_118;
    piVar2 = piVar3;
  }
  return local_40[1];
}

// Function: func_no_args @ 0x100d10
undefined8 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x100d18
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100d80
int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
  size_t sVar1;
  int local_40;
  if (param_3 == (char *)0x0) {
    local_40 = 0;
  }
  else {
    sVar1 = strlen(param_3);
    local_40 = (int)sVar1;
  }
  return (int)((double)(param_2 + local_40) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100e00
ulong func_struct_byval(long param_1)
{
  int local_c;
  ulong local_8;
  local_8 = 0;
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    local_8 = local_8 + *(long *)(param_1 + (long)local_c * 8);
  }
  return local_8 & 0xffffffff;
}

// Function: func_struct_byptr @ 0x100e60
int func_struct_byptr(int *param_1)
{
  int local_4;
  if (param_1 == (int *)0x0) {
    local_4 = -1;
  }
  else {
    local_4 = *param_1 * param_1[1];
  }
  return local_4;
}

// Function: test_calling_conventions @ 0x100ea8
int test_calling_conventions(void)
{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_150;
  undefined auStack_148 [128];
  uint local_c8;
  int local_c4;
  long alStack_c0 [16];
  uint local_3c;
  undefined *local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  iVar1 = printf(&DAT_00101dc0);
  uVar3 = call_cdecl(iVar1);
  iVar1 = printf("CALL-L1-01: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_stdcall(iVar1);
  iVar1 = printf("CALL-L1-02: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_fastcall(iVar1);
  iVar1 = printf("CALL-L1-03: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_thiscall(iVar1);
  iVar1 = printf("CALL-L1-04: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_arm_aapcs(iVar1);
  iVar1 = printf("CALL-L1-05: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_mips(iVar1);
  iVar1 = printf("CALL-L1-06: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_amd64_sysv(iVar1);
  iVar1 = printf("CALL-L1-07: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_ms_x64(iVar1);
  iVar1 = printf("CALL-L1-08: %d\n",uVar3 & 0xffffffff);
  uVar3 = call_vectorcall(iVar1);
  iVar1 = printf("CALL-L1-09: %d\n",uVar3 & 0xffffffff);
  uVar3 = mixed_conventions_test(iVar1);
  printf("CALL-L1-10: %d\n",uVar3 & 0xffffffff);
  local_24 = varargs_func(5);
  iVar1 = printf(&DAT_00101e82,(ulong)local_24);
  local_28 = func_no_args(iVar1);
  printf(&DAT_00101eaa,(ulong)local_28);
  local_2c = func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_00101ecc,(ulong)local_2c);
  local_38 = &DAT_00101ef3;
  local_3c = func_mixed_args(0x40091eb851eb851f,10,&DAT_00101ef3,100);
  printf(&DAT_00101ef8,(ulong)local_3c);
  for (local_c4 = 0; local_c4 < 0x10; local_c4 = local_c4 + 1) {
    alStack_c0[local_c4] = (long)(local_c4 + 1);
  }
  memcpy(auStack_148,alStack_c0,0x80);
  local_c8 = func_struct_byval(auStack_148);
  printf(&DAT_00101f20,(ulong)local_c8);
  local_150 = 0xa00000005;
  uVar2 = func_struct_byptr(&local_150);
  iVar1 = printf(&DAT_00101f4c,(ulong)uVar2);
  return iVar1;
}

// Function: param_by_value_int @ 0x101118
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x101138
int call_by_value_int(void)
{
  int iVar1;
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x101170
undefined param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x1011a8
int call_by_value_ptr(void)
{
  int iVar1;
  int local_14;
  local_14 = 5;
  iVar1 = param_by_value_ptr(&local_14);
  return local_14 + iVar1;
}

// Function: param_array_decay @ 0x1011e8
undefined8 param_array_decay(void)
{
  return 8;
}

// Function: call_array_decay @ 0x101200
void call_array_decay(void)
{
  undefined auStack_38 [40];
  memset(auStack_38,0,0x28);
  param_array_decay(auStack_38,10);
  return;
}

// Function: param_string @ 0x101238
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x10125c
void call_string_param(void)
{
  param_string("Hello");
  return;
}

// Function: param_ptr_array @ 0x101278
int param_ptr_array(long param_1,int param_2)
{
  int local_14;
  int local_10;
  local_10 = 0;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_10 = local_10 + (uint)**(byte **)(param_1 + (long)local_14 * 8);
  }
  return local_10;
}

// Function: call_ptr_array @ 0x1012e0
void call_ptr_array(void)
{
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  puStack_28 = &DAT_00101f83;
  local_30 = &DAT_00101f7f;
  local_20 = &DAT_00101f87;
  param_ptr_array(&local_30,3);
  return;
}

// Function: param_varargs @ 0x10131c
int param_varargs(int param_1)
{
  int iVar1;
  int *local_118;
  int local_40 [2];
  int *piVar2;
  int *piVar3;
  int local_20;
  local_20 = -0x38;
  local_40[1] = 0;
  piVar2 = (int *)register0x00000008;
  for (local_40[0] = 0; local_40[0] < param_1; local_40[0] = local_40[0] + 1) {
    iVar1 = local_20;
    if ((local_20 < 0) && (iVar1 = local_20 + 8, iVar1 < 1)) {
      local_118 = (int *)((long)local_40 + (long)local_20);
      piVar3 = piVar2;
      local_20 = iVar1;
    }
    else {
      local_20 = iVar1;
      piVar3 = piVar2 + 2;
      local_118 = piVar2;
    }
    local_40[1] = local_40[1] + *local_118;
    piVar2 = piVar3;
  }
  return local_40[1];
}

// Function: call_varargs_param @ 0x101454
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x10147c
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x1014ac
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: callback_func @ 0x1014cc
int callback_func(int param_1)
{
  return param_1 << 1;
}

// Function: param_double_ptr @ 0x1014e4
undefined4 param_double_ptr(long *param_1,undefined4 param_2)
{
  undefined4 local_4;
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    local_4 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    local_4 = 1;
  }
  return local_4;
}

// Function: call_double_ptr @ 0x101548
int call_double_ptr(void)
{
  int *local_20;
  int local_14;
  local_20 = &local_14;
  local_14 = 10;
  param_double_ptr(&local_20,0x14);
  return local_14 + (uint)(local_20 == (int *)0x0);
}

// Function: param_complex_cast @ 0x101598
int param_complex_cast(int *param_1,int param_2)
{
  int local_4;
  if (param_2 == 0) {
    local_4 = *param_1;
  }
  else if (param_2 == 1) {
    local_4 = *param_1 + param_1[1];
  }
  else {
    local_4 = -1;
  }
  return local_4;
}

// Function: call_complex_cast @ 0x101628
void call_complex_cast(void)
{
  undefined8 local_20;
  undefined4 local_14;
  local_14 = 0x12345678;
  local_20 = 0xc800000064;
  param_complex_cast(&local_20,1);
  param_complex_cast(&local_14,0);
  return;
}

// Function: param_struct_byval @ 0x10167c
int param_struct_byval(int *param_1)
{
  return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x10168c
void call_struct_byval(void)
{
  undefined auStack_94 [64];
  int local_54;
  int aiStack_50 [16];
  for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
    aiStack_50[local_54] = local_54;
  }
  memcpy(auStack_94,aiStack_50,0x40);
  param_struct_byval(auStack_94);
  return;
}

// Function: param_order_dep @ 0x1016fc
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x10171c
void call_order_dep(void)
{
  param_order_dep();
  return;
}

// Function: test_parameter_passing @ 0x101754
int test_parameter_passing(void)
{
  int iVar1;
  ulong uVar2;
  iVar1 = printf(&DAT_00101f8b);
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

// Function: ret_basic_type @ 0x10184c
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x101864
undefined4 call_ret_basic(void)
{
  undefined4 uVar1;
  uVar1 = ret_basic_type(0x15);
  return uVar1;
}

// Function: ret_pointer @ 0x101894
long ret_pointer(long param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1018ac
undefined4 call_ret_pointer(void)
{
  undefined4 *puVar1;
  undefined8 local_20;
  undefined4 local_18;
  local_20 = 0x140000000a;
  local_18 = 0x1e;
  puVar1 = (undefined4 *)ret_pointer(&local_20);
  return *puVar1;
}

// Function: ret_small_struct @ 0x1018f0
undefined8 ret_small_struct(undefined4 param_1,undefined4 param_2)
{
  return CONCAT44(param_2,param_1);
}

// Function: call_ret_small_struct @ 0x101918
int call_ret_small_struct(void)
{
  undefined8 uVar1;
  int local_18;
  int iStack_14;
  uVar1 = ret_small_struct(3,4);
  local_18 = (int)uVar1;
  iStack_14 = (int)((ulong)uVar1 >> 0x20);
  return local_18 + iStack_14;
}

// Function: ret_large_struct @ 0x10194c
void ret_large_struct(int param_1)
{
  long in_x8;
  int local_8;
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(int *)(in_x8 + (long)local_8 * 4) = param_1 + local_8;
  }
  return;
}

// Function: call_ret_large_struct @ 0x1019a4
int call_ret_large_struct(void)
{
  int local_50;
  int local_14;
  ret_large_struct(100);
  return local_50 + local_14;
}

// Function: func_a @ 0x1019d4
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x1019ec
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: ret_func_ptr @ 0x101a04
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101a30
void call_ret_func_ptr(void)
{
  code *pcVar1;
  pcVar1 = (code *)ret_func_ptr(1);
  (*pcVar1)(5);
  return;
}

// Function: ret_opaque_handle @ 0x101a60
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
  if (param_1 != 0) {
    puVar1 = &ret_opaque_handle_handle2;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x101a8c
undefined4 call_ret_opaque(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)ret_opaque_handle(0);
  return *puVar1;
}

// Function: ret_complex_expr @ 0x101ab8
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int local_10;
  if (param_2 < param_1) {
    local_10 = param_3 << 1;
  }
  else {
    local_10 = param_3 + 10;
  }
  return local_10;
}

// Function: call_ret_complex_expr @ 0x101b08
int call_ret_complex_expr(void)
{
  int iVar1;
  int iVar2;
  iVar1 = ret_complex_expr();
  iVar2 = ret_complex_expr(3,5,10);
  return iVar1 + iVar2;
}

// Function: ret_multi_branch @ 0x101b64
undefined4 ret_multi_branch(int param_1)
{
  undefined4 local_4;
  if (param_1 == 0) {
    local_4 = 10;
  }
  else if (param_1 == 1) {
    local_4 = 0x14;
  }
  else if (param_1 == 2) {
    local_4 = 0x1e;
  }
  else {
    local_4 = 0xffffffff;
  }
  return local_4;
}

// Function: call_ret_multi_branch @ 0x101bd8
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

// Function: ret_void @ 0x101c34
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x101c5c
undefined4 call_ret_void(void)
{
  undefined4 local_14;
  ret_void(7,&local_14);
  return local_14;
}

// Function: test_return_values @ 0x101c84
int test_return_values(void)
{
  int iVar1;
  ulong uVar2;
  iVar1 = printf(&DAT_00102068);
  uVar2 = call_ret_basic(iVar1);
  iVar1 = printf(&DAT_00102087,uVar2 & 0xffffffff);
  uVar2 = call_ret_pointer(iVar1);
  iVar1 = printf(&DAT_001020a3,uVar2 & 0xffffffff);
  uVar2 = call_ret_small_struct(iVar1);
  iVar1 = printf(&DAT_001020bf,uVar2 & 0xffffffff);
  uVar2 = call_ret_large_struct(iVar1);
  iVar1 = printf(&DAT_001020da,uVar2 & 0xffffffff);
  uVar2 = call_ret_func_ptr(iVar1);
  iVar1 = printf(&DAT_001020f7,uVar2 & 0xffffffff);
  uVar2 = call_ret_opaque(iVar1);
  iVar1 = printf(&DAT_00102113,uVar2 & 0xffffffff);
  uVar2 = call_ret_complex_expr(iVar1);
  iVar1 = printf(&DAT_00102130,uVar2 & 0xffffffff);
  uVar2 = call_ret_multi_branch(iVar1);
  iVar1 = printf(&DAT_0010214c,uVar2 & 0xffffffff);
  uVar2 = call_ret_void(iVar1);
  iVar1 = printf(&DAT_00102168,uVar2 & 0xffffffff);
  return iVar1;
}

// Function: main @ 0x101d54
undefined4 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _fini @ 0x101d88
void _fini(void)
{
  return;
}

