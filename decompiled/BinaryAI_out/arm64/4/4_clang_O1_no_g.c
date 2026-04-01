// Decompiled by BinaryAI
// SHA256: cc856ca657f7d2e72af515f995b8c437200189d938cd2212fd2fd8731ea3eb31

// Function: _init @ 0x100628
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00100640 @ 0x100640
void FUN_00100640(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x100660
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100670
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100680
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100690
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x1006a0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x1006b0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x1006c0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x100700
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100734
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100750
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100780
void register_tm_clones(void)
{
  return;
}

// Function: FUN_001007bc @ 0x1007bc
void FUN_001007bc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x1007c0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: cdecl_func @ 0x100814
int cdecl_func(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_cdecl @ 0x10081c
undefined8 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x100824
int stdcall_func(int param_1,int param_2)
{
  return param_2 * param_1;
}

// Function: call_stdcall @ 0x10082c
undefined8 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x100834
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_2 + param_1 + param_3;
}

// Function: call_fastcall @ 0x100840
undefined8 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x100848
undefined8 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x100850
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x100864
undefined8 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x10086c
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x10087c
undefined8 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x100884
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x10089c
undefined8 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x1008a4
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x1008b8
undefined8 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x1008c0
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x1008d0
undefined8 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x1008d8
undefined8 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x1008e0
int varargs_func(int param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  iVar1 = -0x38;
  iVar2 = 0;
  piVar6 = (int *)register0x00000008;
  if (0 < param_1) {
    do {
      lVar4 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        piVar3 = (int *)(&stack0xffffffffffffffe0 + lVar4);
        piVar5 = piVar6;
      }
      else {
        piVar5 = piVar6 + 2;
        piVar3 = piVar6;
      }
      param_1 = param_1 + -1;
      iVar2 = *piVar3 + iVar2;
      piVar6 = piVar5;
    } while (param_1 != 0);
  }
  return iVar2;
}

// Function: func_no_args @ 0x100984
undefined8 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x10098c
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x1009ac
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

// Function: func_struct_byval @ 0x100a04
ulong func_struct_byval(long param_1)
{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  lVar3 = 0;
  uVar2 = 0;
  do {
    plVar1 = (long *)(param_1 + lVar3);
    lVar3 = lVar3 + 8;
    uVar2 = *plVar1 + uVar2;
  } while (lVar3 != 0x80);
  return uVar2 & 0xffffffff;
}

// Function: func_struct_byptr @ 0x100a28
int func_struct_byptr(int *param_1)
{
  if (param_1 != (int *)0x0) {
    return param_1[1] * *param_1;
  }
  return -1;
}

// Function: test_calling_conventions @ 0x100a40
int test_calling_conventions(void)
{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long local_120 [16];
  long local_a0 [16];
  puts(&DAT_001014be);
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
  uVar3 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_00101214,uVar3 & 0xffffffff);
  printf(&DAT_0010123c,0x2a);
  printf(&DAT_0010125e,0x24);
  printf(&DAT_00101285,0x75);
  lVar5 = 0;
  do {
    lVar4 = lVar5 + 1;
    local_a0[lVar5] = lVar4;
    lVar5 = lVar4;
  } while (lVar4 != 0x10);
  lVar5 = 0;
  lVar4 = 0;
  local_120[9] = local_a0[9];
  local_120[8] = local_a0[8];
  local_120[11] = local_a0[11];
  local_120[10] = local_a0[10];
  local_120[13] = local_a0[13];
  local_120[12] = local_a0[12];
  local_120[15] = local_a0[15];
  local_120[14] = local_a0[14];
  local_120[1] = local_a0[1];
  local_120[0] = local_a0[0];
  local_120[3] = local_a0[3];
  local_120[2] = local_a0[2];
  local_120[5] = local_a0[5];
  local_120[4] = local_a0[4];
  local_120[7] = local_a0[7];
  local_120[6] = local_a0[6];
  do {
    plVar1 = (long *)((long)local_120 + lVar5);
    lVar5 = lVar5 + 8;
    lVar4 = *plVar1 + lVar4;
  } while (lVar5 != 0x80);
  printf(&DAT_001012ad,lVar4);
  iVar2 = printf(&DAT_001012d9,0x32);
  return iVar2;
}

// Function: param_by_value_int @ 0x100be0
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x100be8
undefined8 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x100bf0
undefined8 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x100c08
undefined8 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x100c10
undefined8 param_array_decay(void)
{
  return 8;
}

// Function: call_array_decay @ 0x100c18
undefined8 call_array_decay(void)
{
  return 8;
}

// Function: param_string @ 0x100c20
int param_string(byte *param_1)
{
  return (uint)param_1[1] + (uint)*param_1;
}

// Function: call_string_param @ 0x100c30
undefined8 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x100c38
int param_ptr_array(byte **param_1,uint param_2)
{
  int iVar1;
  ulong uVar2;
  if (0 < (int)param_2) {
    iVar1 = 0;
    uVar2 = (ulong)param_2;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + (uint)**param_1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}

// Function: call_ptr_array @ 0x100c6c
undefined8 call_ptr_array(void)
{
  return 300;
}

// Function: param_varargs @ 0x100c74
int param_varargs(int param_1)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  iVar1 = -0x38;
  iVar2 = 0;
  piVar6 = (int *)register0x00000008;
  if (0 < param_1) {
    do {
      lVar4 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        piVar3 = (int *)(&stack0xffffffffffffffe0 + lVar4);
        piVar5 = piVar6;
      }
      else {
        piVar5 = piVar6 + 2;
        piVar3 = piVar6;
      }
      param_1 = param_1 + -1;
      iVar2 = *piVar3 + iVar2;
      piVar6 = piVar5;
    } while (param_1 != 0);
  }
  return iVar2;
}

// Function: call_varargs_param @ 0x100d18
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x100d40
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x100d60
undefined8 call_func_ptr_param(void)
{
  return 0x14;
}

// Function: param_double_ptr @ 0x100d68
undefined8 param_double_ptr(undefined8 *param_1,undefined4 param_2)
{
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}

// Function: call_double_ptr @ 0x100d90
undefined8 call_double_ptr(void)
{
  return 0x15;
}

// Function: param_complex_cast @ 0x100d98
int param_complex_cast(int *param_1,int param_2)
{
  if (param_2 == 1) {
    return param_1[1] + *param_1;
  }
  if (param_2 == 0) {
    return *param_1;
  }
  return -1;
}

// Function: call_complex_cast @ 0x100dc0
undefined8 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x100dcc
int param_struct_byval(int *param_1)
{
  return param_1[0xf] + *param_1;
}

// Function: call_struct_byval @ 0x100ddc
int call_struct_byval(void)
{
  long lVar1;
  int local_40 [16];
  lVar1 = 0;
  do {
    local_40[lVar1] = (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return local_40[15] + local_40[0];
}

// Function: param_order_dep @ 0x100e0c
int param_order_dep(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_order_dep @ 0x100e14
undefined8 call_order_dep(void)
{
  return 3;
}

// Function: test_parameter_passing @ 0x100e1c
int test_parameter_passing(void)
{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int local_50 [16];
  puts(&DAT_001014df);
  printf("PARAM-L1-01: %d\n",0xf);
  printf("PARAM-L1-02: %d\n",0xb);
  printf("PARAM-L2-01: %d\n",8);
  printf("PARAM-L2-02: %d\n",0xad);
  printf("PARAM-L2-03: %d\n",300);
  uVar2 = param_varargs(4,10,0x14,0x1e,0x28);
  printf("PARAM-L2-04: %d\n",uVar2 & 0xffffffff);
  printf("PARAM-L3-01: %d\n",0x14);
  printf("PARAM-L3-02: %d\n",0x15);
  printf("PARAM-L3-03: %d\n",0x12345678);
  lVar3 = 0;
  do {
    local_50[lVar3] = (int)lVar3;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  printf("PARAM-L3-04: %d\n",(ulong)(uint)(local_50[15] + local_50[0]));
  iVar1 = printf("PARAM-L3-05: %d\n",3);
  return iVar1;
}

// Function: ret_basic_type @ 0x100f2c
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x100f34
undefined8 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x100f3c
long ret_pointer(long param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x100f44
undefined8 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x100f4c
ulong ret_small_struct(ulong param_1,long param_2)
{
  return param_1 & 0xffffffff | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x100f58
undefined8 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x100f60
void ret_large_struct(int param_1)
{
  long in_x8;
  long lVar1;
  lVar1 = 0;
  do {
    *(int *)(in_x8 + lVar1 * 4) = param_1 + (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}

// Function: call_ret_large_struct @ 0x100f80
int call_ret_large_struct(void)
{
  long lVar1;
  int local_40 [16];
  lVar1 = 0;
  do {
    local_40[lVar1] = (int)lVar1 + 100;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return local_40[15] + local_40[0];
}

// Function: func_a @ 0x100fb4
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x100fbc
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: ret_func_ptr @ 0x100fc4
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_a;
  if (param_1 != 0) {
    pcVar1 = func_b;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x100fe0
undefined8 call_ret_func_ptr(void)
{
  return 10;
}

// Function: ret_opaque_handle @ 0x100fe8
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
  if (param_1 != 0) {
    puVar1 = &ret_opaque_handle_handle2;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x101004
undefined4 call_ret_opaque(void)
{
  return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x101010
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = param_3 << 1;
  if (param_1 <= param_2) {
    iVar1 = param_3 + 10;
  }
  return iVar1;
}

// Function: call_ret_complex_expr @ 0x101024
undefined8 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x10102c
int ret_multi_branch(uint param_1)
{
  int iVar1;
  iVar1 = param_1 * 10 + 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_ret_multi_branch @ 0x101044
undefined8 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x10104c
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x101058
undefined8 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x101060
int test_return_values(void)
{
  int iVar1;
  long lVar2;
  int local_50 [16];
  puts(&DAT_00101500);
  printf(&DAT_001013c1,0x2a);
  printf(&DAT_001013dd,0x14);
  printf(&DAT_001013f9,7);
  lVar2 = 0;
  do {
    local_50[lVar2] = (int)lVar2 + 100;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  printf(&DAT_00101414,(ulong)(uint)(local_50[15] + local_50[0]));
  printf(&DAT_00101431,10);
  printf(&DAT_0010144d,(ulong)ret_opaque_handle_handle1);
  printf(&DAT_0010146a,0x28);
  printf(&DAT_00101486,0x3c);
  iVar1 = printf(&DAT_001014a2,0x15);
  return iVar1;
}

// Function: main @ 0x10113c
undefined8 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _fini @ 0x10115c
void _fini(void)
{
  return;
}

