// Decompiled by BinaryAI
// SHA256: 722c14c7c10c78972bc1dba13bcb548dd331817497e669eeae68f407d5d07008

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

// Function: main @ 0x100800
undefined8 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _start @ 0x100840
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100874
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100890
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1008c0
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001008fc @ 0x1008fc
void FUN_001008fc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100900
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: func_a @ 0x100954
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x10095c
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: callback_func @ 0x100964
int callback_func(int param_1)
{
  return param_1 << 1;
}

// Function: cdecl_func @ 0x10096c
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x100974
undefined8 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x10097c
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x100984
undefined8 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x10098c
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x100998
undefined8 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x1009a0
undefined8 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x1009a8
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1009bc
undefined8 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x1009c4
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x1009d4
undefined8 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x1009dc
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x1009f4
undefined8 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x1009fc
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x100a10
undefined8 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x100a18
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x100a28
undefined8 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x100a30
undefined8 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x100a38
void varargs_func(int param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = -0x38;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + 8;
    }
  }
  return;
}

// Function: func_no_args @ 0x100b0c
undefined8 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x100b14
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x100b34
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
  return (int)((double)(iVar1 + param_2) + param_1 + (double)param_4);
}

// Function: func_struct_byval @ 0x100b8c
long func_struct_byval(long param_1)
{
  long lVar1;
  long lVar2;
  long lVar3;
  lVar3 = 0;
  lVar2 = 0;
  do {
    lVar1 = lVar3 * 8;
    lVar3 = lVar3 + 1;
    lVar2 = lVar2 + *(long *)(param_1 + lVar1);
  } while (lVar3 != 0x10);
  return lVar2;
}

// Function: func_struct_byptr @ 0x100bb0
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

// Function: test_calling_conventions @ 0x100bc8
void test_calling_conventions(void)
{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long local_108 [16];
  long local_88 [16];
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_0010145c);
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
  uVar2 = varargs_func(5,1,2,3,4);
  __printf_chk(1,&DAT_0010151d,uVar2);
  __printf_chk(1,&DAT_00101545,0x2a);
  __printf_chk(1,&DAT_00101567,0x24);
  uVar2 = func_mixed_args(0x40091eb851eb851f,10,&DAT_0010158e,100);
  __printf_chk(1,&DAT_00101593,uVar2);
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    local_108[lVar3] = lVar4;
    lVar3 = lVar4;
  } while (lVar4 != 0x10);
  lVar4 = 0;
  local_88[1] = local_108[1];
  local_88[0] = local_108[0];
  local_88[3] = local_108[3];
  local_88[2] = local_108[2];
  local_88[5] = local_108[5];
  local_88[4] = local_108[4];
  local_88[7] = local_108[7];
  local_88[6] = local_108[6];
  local_88[9] = local_108[9];
  local_88[8] = local_108[8];
  local_88[11] = local_108[11];
  local_88[10] = local_108[10];
  lVar3 = 0;
  local_88[13] = local_108[13];
  local_88[12] = local_108[12];
  local_88[15] = local_108[15];
  local_88[14] = local_108[14];
  do {
    plVar1 = local_88 + lVar3;
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + *plVar1;
  } while (lVar3 != 0x10);
  __printf_chk(1,&DAT_001015bb,lVar4);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  __printf_chk(1,&DAT_001015e7,0x32);
  return;
}

// Function: param_by_value_int @ 0x100de4
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x100dec
undefined8 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x100df4
undefined8 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x100e08
undefined8 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x100e10
undefined8 param_array_decay(void)
{
  return 8;
}

// Function: call_array_decay @ 0x100e18
undefined8 call_array_decay(void)
{
  return 8;
}

// Function: param_string @ 0x100e20
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x100e30
undefined8 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x100e38
int param_ptr_array(long param_1,int param_2)
{
  int iVar1;
  long lVar2;
  iVar1 = 0;
  for (lVar2 = 0; (int)lVar2 < param_2; lVar2 = lVar2 + 1) {
    iVar1 = iVar1 + (uint)**(byte **)(param_1 + lVar2 * 8);
  }
  return iVar1;
}

// Function: call_ptr_array @ 0x100e64
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
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: param_varargs @ 0x100ecc
void param_varargs(int param_1)
{
  int iVar1;
  int iVar2;
  iVar1 = -0x38;
  for (iVar2 = 0; iVar2 < param_1; iVar2 = iVar2 + 1) {
    if (iVar1 < 0) {
      iVar1 = iVar1 + 8;
    }
  }
  return;
}

// Function: call_varargs_param @ 0x100fa0
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x100fb8
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100fd8
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: param_double_ptr @ 0x100fe8
undefined8 param_double_ptr(undefined8 *param_1,undefined4 param_2)
{
  undefined8 uVar1;
  if ((param_1 == (undefined8 *)0x0) || ((undefined4 *)*param_1 == (undefined4 *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// Function: call_double_ptr @ 0x10100c
undefined8 call_double_ptr(void)
{
  return 0x15;
}

// Function: param_complex_cast @ 0x101014
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

// Function: call_complex_cast @ 0x10103c
undefined8 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x101048
int param_struct_byval(int *param_1)
{
  return *param_1 + param_1[0xf];
}

// Function: call_struct_byval @ 0x101058
void call_struct_byval(void)
{
  long lVar1;
  undefined4 local_48 [18];
  lVar1 = 0;
  do {
    local_48[lVar1] = (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}

// Function: param_order_dep @ 0x1010c0
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x1010c8
undefined8 call_order_dep(void)
{
  return 4;
}

// Function: test_parameter_passing @ 0x1010d0
void test_parameter_passing(void)
{
  undefined4 uVar1;
  puts(&DAT_00101614);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
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

// Function: ret_basic_type @ 0x1011d8
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x1011e0
undefined8 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x1011e8
long ret_pointer(long param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1011f0
undefined8 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x1011f8
ulong ret_small_struct(ulong param_1,long param_2)
{
  return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x101204
undefined8 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x10120c
void ret_large_struct(int param_1)
{
  long lVar1;
  long lVar2;
  undefined8 *in_x8;
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
  lVar2 = 0;
  do {
    *(int *)((long)&local_48 + lVar2 * 4) = param_1 + (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
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

// Function: call_ret_large_struct @ 0x101278
void call_ret_large_struct(void)
{
  long lVar1;
  int local_48;
  int local_c;
  lVar1 = ___stack_chk_guard;
  ret_large_struct(100,0);
  if (lVar1 - ___stack_chk_guard != 0) {
    __stack_chk_fail(local_48 + local_c,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}

// Function: ret_func_ptr @ 0x1012d4
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x1012f0
undefined8 call_ret_func_ptr(void)
{
  return 10;
}

// Function: ret_opaque_handle @ 0x1012f8
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x101314
undefined4 call_ret_opaque(void)
{
  return handle1_1;
}

// Function: ret_complex_expr @ 0x101320
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 << 1;
  }
  return iVar1;
}

// Function: call_ret_complex_expr @ 0x101334
undefined8 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x10133c
int ret_multi_branch(uint param_1)
{
  int iVar1;
  iVar1 = param_1 * 10 + 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_ret_multi_branch @ 0x101350
undefined8 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x101358
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x101364
undefined8 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x10136c
void test_return_values(void)
{
  undefined4 uVar1;
  puts(&DAT_001016f0);
  __printf_chk(1,&DAT_0010170e,0x2a);
  __printf_chk(1,&DAT_0010172a,0x14);
  __printf_chk(1,&DAT_00101746,7);
  uVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_00101761,uVar1);
  __printf_chk(1,&DAT_0010177e,10);
  __printf_chk(1,&DAT_0010179a,handle1_1);
  __printf_chk(1,&DAT_001017b7,0x28);
  __printf_chk(1,&DAT_001017d3,0x3c);
  __printf_chk(1,&DAT_001017ef,0x15);
  return;
}

// Function: _fini @ 0x101440
void _fini(void)
{
  return;
}

