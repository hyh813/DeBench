// Decompiled by BinaryAI
// SHA256: 3c819f7ca2b2bf0aebc683e557641882968fa694029b53fdfd0ef028a56e1795

// Function: _init @ 0x10400
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10420
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1042c
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::printf @ 0x10438
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x10450
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::memset @ 0x1045c
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10468
void abort(void)
{
  abort();
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

// Function: register_tm_clones @ 0x10520
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10570
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

// Function: cdecl_func @ 0x105dc
int cdecl_func(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_cdecl @ 0x105fc
void call_cdecl(void)
{
  cdecl_func(5,10);
  return;
}

// Function: stdcall_func @ 0x10618
int stdcall_func(int param_1,int param_2)
{
  return param_1 * param_2;
}

// Function: call_stdcall @ 0x10638
void call_stdcall(void)
{
  stdcall_func(5,10);
  return;
}

// Function: fastcall_func @ 0x10654
int fastcall_func(int param_1,int param_2,int param_3)
{
  return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x10680
void call_fastcall(void)
{
  fastcall_func(1,2,3);
  return;
}

// Function: call_thiscall @ 0x106a0
undefined4 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x106a8
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x106ec
void call_arm_aapcs(void)
{
  arm_aapcs_func(1,2,3,4,5);
  return;
}

// Function: mips_func @ 0x10724
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x1075c
void call_mips(void)
{
  mips_func(10,0x14,0x1e,0x28);
  return;
}

// Function: amd64_sysv_func @ 0x10780
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x107d0
void call_amd64_sysv(void)
{
  amd64_sysv_func(1,2,3,4,5,6);
  return;
}

// Function: ms_x64_func @ 0x10810
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x10854
void call_ms_x64(void)
{
  ms_x64_func(1,2,3,4,5);
  return;
}

// Function: vectorcall_func @ 0x1088c
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x108c4
void call_vectorcall(void)
{
  vectorcall_func(1,2,3,4);
  return;
}

// Function: mixed_conventions_test @ 0x108e8
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

// Function: varargs_func @ 0x10964
int varargs_func(int param_1)
{
  int local_1c;
  int local_18;
  int *local_14;
  int local_c [3];
  local_18 = 0;
  local_14 = local_c;
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    local_18 = local_18 + *local_14;
    local_14 = local_14 + 1;
  }
  return local_18;
}

// Function: func_no_args @ 0x109e0
undefined4 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x109e8
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x10a50
void func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)
{
  undefined8 uVar1;
  undefined8 uVar2;
  size_t local_30;
  if (param_2 == (char *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = strlen(param_2);
  }
  uVar1 = __floatsidf(param_1 + local_30);
  uVar1 = __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4);
  uVar2 = __floatdidf(param_5,param_6);
  __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20));
  __fixdfsi();
  return;
}

// Function: func_struct_byval @ 0x10b0c
int func_struct_byval(void)
{
  int local_1c;
  int local_18;
  int local_10 [4];
  local_18 = 0;
  for (local_1c = 0; local_1c < 0x10; local_1c = local_1c + 1) {
    local_18 = local_18 + local_10[local_1c * 2];
  }
  return local_18;
}

// Function: func_struct_byptr @ 0x10b94
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

// Function: test_calling_conventions @ 0x10bdc
void test_calling_conventions(void)
{
  undefined4 uVar1;
  int *piVar2;
  int local_158 [28];
  int *local_e8;
  int *local_e4;
  int local_e0;
  int *local_dc;
  int *local_d8;
  int local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8 [4];
  int aiStack_98 [29];
  undefined4 local_24;
  undefined *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  local_d8 = local_158;
  printf(&DAT_00012180);
  uVar1 = call_cdecl();
  printf("CALL-L1-01: %d\n",uVar1);
  uVar1 = call_stdcall();
  printf("CALL-L1-02: %d\n",uVar1);
  uVar1 = call_fastcall();
  printf("CALL-L1-03: %d\n",uVar1);
  uVar1 = call_thiscall();
  printf("CALL-L1-04: %d\n",uVar1);
  uVar1 = call_arm_aapcs();
  printf("CALL-L1-05: %d\n",uVar1);
  uVar1 = call_mips();
  printf("CALL-L1-06: %d\n",uVar1);
  uVar1 = call_amd64_sysv();
  printf("CALL-L1-07: %d\n",uVar1);
  uVar1 = call_ms_x64();
  printf("CALL-L1-08: %d\n",uVar1);
  uVar1 = call_vectorcall();
  printf("CALL-L1-09: %d\n",uVar1);
  uVar1 = mixed_conventions_test();
  printf("CALL-L1-10: %d\n",uVar1);
  local_d4 = 5;
  local_158[1] = 5;
  local_c8 = 4;
  local_158[0] = 4;
  local_c4 = 1;
  local_d0 = 2;
  local_cc = 3;
  local_14 = varargs_func();
  printf(&DAT_00012242,local_14);
  local_18 = func_no_args();
  printf(&DAT_0001226a,local_18);
  local_158[3] = 8;
  local_158[2] = 7;
  local_158[1] = 6;
  local_158[0] = local_d4;
  local_1c = func_many_args(local_c4,local_d0,local_cc,local_c8);
  printf(&DAT_0001228c,local_1c);
  local_20 = &DAT_000122b3;
  local_c0 = 0;
  local_158[1] = 0;
  local_158[0] = 100;
  local_24 = func_mixed_args(10,&DAT_000122b3,0x51eb851f,0x40091eb8);
  printf(&DAT_000122b8,local_24);
  for (local_ac = local_c0; local_ac < 0x10; local_ac = local_ac + 1) {
    local_a8[local_ac * 2] = local_ac + 1;
    local_a8[local_ac * 2 + 1] = local_ac + 1 >> 0x1f;
  }
  local_e0 = 0x70;
  local_dc = local_a8 + 4;
  do {
    piVar2 = local_dc + 1;
    local_e4 = local_d8 + 1;
    local_e8 = piVar2;
    *local_d8 = *local_dc;
    local_e0 = local_e0 + -4;
    local_dc = piVar2;
    local_d8 = local_e4;
  } while (local_e0 != 0);
  local_b0 = func_struct_byval(local_a8[0],local_a8[1],local_a8[2],local_a8[3]);
  printf(&DAT_000122e0,local_b0);
  local_b4 = 10;
  local_b8 = 5;
  local_bc = func_struct_byptr(&local_b8);
  printf(&DAT_0001230c,local_bc);
  return;
}

// Function: param_by_value_int @ 0x10f18
int param_by_value_int(int param_1)
{
  return param_1 << 1;
}

// Function: call_by_value_int @ 0x10f38
int call_by_value_int(void)
{
  int iVar1;
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}

// Function: param_by_value_ptr @ 0x10f70
undefined4 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x10fa4
int call_by_value_ptr(void)
{
  int iVar1;
  int local_c;
  local_c = 5;
  iVar1 = param_by_value_ptr(&local_c);
  return local_c + iVar1;
}

// Function: param_array_decay @ 0x10fe4
undefined4 param_array_decay(void)
{
  return 4;
}

// Function: call_array_decay @ 0x10ffc
void call_array_decay(void)
{
  undefined auStack_30 [40];
  memset(auStack_30,0,0x28);
  param_array_decay(auStack_30,10);
  return;
}

// Function: param_string @ 0x11034
int param_string(byte *param_1)
{
  return (uint)*param_1 + (uint)param_1[1];
}

// Function: call_string_param @ 0x11054
void call_string_param(void)
{
  param_string("Hello");
  return;
}

// Function: param_ptr_array @ 0x11074
int param_ptr_array(int param_1,int param_2)
{
  int local_10;
  int local_c;
  local_c = 0;
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    local_c = local_c + (uint)**(byte **)(param_1 + local_10 * 4);
  }
  return local_c;
}

// Function: call_ptr_array @ 0x110e0
void call_ptr_array(void)
{
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  local_14 = &DAT_0001233f;
  local_10 = &DAT_00012343;
  local_c = &DAT_00012347;
  param_ptr_array(&local_14,3);
  return;
}

// Function: param_varargs @ 0x11130
int param_varargs(int param_1)
{
  int local_1c;
  int local_18;
  int *local_14;
  int local_c [3];
  local_18 = 0;
  local_14 = local_c;
  for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
    local_18 = local_18 + *local_14;
    local_14 = local_14 + 1;
  }
  return local_18;
}

// Function: call_varargs_param @ 0x111ac
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x111e4
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x11218
void call_func_ptr_param(void)
{
  param_func_ptr(callback_func,5);
  return;
}

// Function: callback_func @ 0x1123c
int callback_func(int param_1)
{
  return param_1 << 1;
}

// Function: param_double_ptr @ 0x11254
undefined4 param_double_ptr(int *param_1,undefined4 param_2)
{
  undefined4 local_4;
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    local_4 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    local_4 = 1;
  }
  return local_4;
}

// Function: call_double_ptr @ 0x112c4
int call_double_ptr(void)
{
  int *local_10;
  int local_c;
  local_c = 10;
  local_10 = &local_c;
  param_double_ptr(&local_10,0x14);
  if (local_10 == (int *)0x0) {
    local_c = local_c + 1;
  }
  return local_c;
}

// Function: param_complex_cast @ 0x11310
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

// Function: call_complex_cast @ 0x113a0
void call_complex_cast(void)
{
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  local_c = 0x12345678;
  local_10 = 200;
  local_14 = 100;
  param_complex_cast(&local_14,1);
  param_complex_cast(&local_c,0);
  return;
}

// Function: param_struct_byval @ 0x11400
int param_struct_byval(int param_1)
{
  int param_16;
  return param_1 + param_16;
}

// Function: call_struct_byval @ 0x114b8
void call_struct_byval(void)
{
  int local_68;
  int local_64 [16];
  for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 1) {
    local_64[local_68] = local_68;
  }
  param_struct_byval(local_64[0],local_64[1],local_64[2],local_64[3],local_64[4],local_64[5],
                     local_64[6],local_64[7],local_64[8],local_64[9],local_64[10],local_64[11],
                     local_64[12],local_64[13],local_64[14],local_64[15]);
  return;
}

// Function: param_order_dep @ 0x115a4
int param_order_dep(int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: call_order_dep @ 0x115c4
void call_order_dep(void)
{
  param_order_dep();
  return;
}

// Function: test_parameter_passing @ 0x11600
void test_parameter_passing(void)
{
  undefined4 uVar1;
  printf(&DAT_0001234b);
  uVar1 = call_by_value_int();
  printf("PARAM-L1-01: %d\n",uVar1);
  uVar1 = call_by_value_ptr();
  printf("PARAM-L1-02: %d\n",uVar1);
  uVar1 = call_array_decay();
  printf("PARAM-L2-01: %d\n",uVar1);
  uVar1 = call_string_param();
  printf("PARAM-L2-02: %d\n",uVar1);
  uVar1 = call_ptr_array();
  printf("PARAM-L2-03: %d\n",uVar1);
  uVar1 = call_varargs_param();
  printf("PARAM-L2-04: %d\n",uVar1);
  uVar1 = call_func_ptr_param();
  printf("PARAM-L3-01: %d\n",uVar1);
  uVar1 = call_double_ptr();
  printf("PARAM-L3-02: %d\n",uVar1);
  uVar1 = call_complex_cast();
  printf("PARAM-L3-03: %d\n",uVar1);
  uVar1 = call_struct_byval();
  printf("PARAM-L3-04: %d\n",uVar1);
  uVar1 = call_order_dep();
  printf("PARAM-L3-05: %d\n",uVar1);
  return;
}

// Function: ret_basic_type @ 0x11728
int ret_basic_type(int param_1)
{
  return param_1 << 1;
}

// Function: call_ret_basic @ 0x11740
undefined4 call_ret_basic(void)
{
  undefined4 uVar1;
  uVar1 = ret_basic_type(0x15);
  return uVar1;
}

// Function: ret_pointer @ 0x11770
int ret_pointer(int param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x11788
undefined4 call_ret_pointer(void)
{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  local_14 = 10;
  local_10 = 0x14;
  local_c = 0x1e;
  puVar1 = (undefined4 *)ret_pointer(&local_14);
  return *puVar1;
}

// Function: ret_small_struct @ 0x117e0
void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// Function: call_ret_small_struct @ 0x11810
int call_ret_small_struct(void)
{
  int local_10;
  int local_c;
  ret_small_struct(&local_10,3,4);
  return local_10 + local_c;
}

// Function: ret_large_struct @ 0x11844
void ret_large_struct(int param_1,int param_2)
{
  int local_8;
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    *(int *)(param_1 + local_8 * 4) = param_2 + local_8;
  }
  return;
}

// Function: call_ret_large_struct @ 0x1189c
int call_ret_large_struct(void)
{
  int local_48 [15];
  int local_c;
  ret_large_struct(local_48,100);
  return local_48[0] + local_c;
}

// Function: func_a @ 0x118cc
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x118e4
int func_b(int param_1)
{
  return param_1 << 1;
}

// Function: ret_func_ptr @ 0x118fc
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_a;
  if (param_1 != 0) {
    pcVar1 = func_b;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x11930
void call_ret_func_ptr(void)
{
  code *pcVar1;
  pcVar1 = (code *)ret_func_ptr(1);
  (*pcVar1)(5);
  return;
}

// Function: ret_opaque_handle @ 0x11964
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = &ret_opaque_handle_handle2;
  if (param_1 == 0) {
    puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x11998
undefined4 call_ret_opaque(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)ret_opaque_handle(0);
  return *puVar1;
}

// Function: ret_complex_expr @ 0x119c4
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

// Function: call_ret_complex_expr @ 0x11a14
int call_ret_complex_expr(void)
{
  int iVar1;
  int iVar2;
  iVar1 = ret_complex_expr();
  iVar2 = ret_complex_expr(3,5,10);
  return iVar1 + iVar2;
}

// Function: ret_multi_branch @ 0x11a70
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

// Function: call_ret_multi_branch @ 0x11ae8
int call_ret_multi_branch(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  iVar1 = ret_multi_branch();
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}

// Function: ret_void @ 0x11b50
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x11b74
undefined4 call_ret_void(void)
{
  undefined4 local_c;
  ret_void(7,&local_c);
  return local_c;
}

// Function: test_return_values @ 0x11b9c
void test_return_values(void)
{
  undefined4 uVar1;
  printf(&DAT_00012428);
  uVar1 = call_ret_basic();
  printf(&DAT_00012447,uVar1);
  uVar1 = call_ret_pointer();
  printf(&DAT_00012463,uVar1);
  uVar1 = call_ret_small_struct();
  printf(&DAT_0001247f,uVar1);
  uVar1 = call_ret_large_struct();
  printf(&DAT_0001249a,uVar1);
  uVar1 = call_ret_func_ptr();
  printf(&DAT_000124b7,uVar1);
  uVar1 = call_ret_opaque();
  printf(&DAT_000124d3,uVar1);
  uVar1 = call_ret_complex_expr();
  printf(&DAT_000124f0,uVar1);
  uVar1 = call_ret_multi_branch();
  printf(&DAT_0001250c,uVar1);
  uVar1 = call_ret_void();
  printf(&DAT_00012528,uVar1);
  return;
}

// Function: main @ 0x11c94
undefined4 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: __aeabi_drsub @ 0x11cc8
void __aeabi_drsub(undefined4 param_1,uint param_2)
{
  __adddf3(param_1,param_2 ^ 0x80000000);
  return;
}

// Function: __subdf3 @ 0x11cd0
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
LAB_00011f44:
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
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011f44;
    }
LAB_00011dec:
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
  if (uVar11 - 1 != 0 && 0xfffff < uVar7) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __adddf3 @ 0x11cd4
ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)
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
LAB_00011f44:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011f44;
    }
LAB_00011dec:
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
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __aeabi_ui2d @ 0x11f80
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __floatsidf @ 0x11fa4
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __extendsfdf2 @ 0x11fcc
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __floatundidf @ 0x12014
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
LAB_00011dec:
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
  if (bVar11 && 0xfffff < param_2) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __floatdidf @ 0x12028
ulonglong __floatdidf(uint param_1,uint param_2)
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
LAB_00011dec:
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
  if (bVar12 && 0xfffff < uVar4) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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

// Function: __fixdfsi @ 0x12088
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
  else if ((param_1 | param_2 << 0xc) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}

// Function: _fini @ 0x120e4
void _fini(void)
{
  return;
}

