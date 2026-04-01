// Decompiled by BinaryAI
// SHA256: 926654cefa22167c3048fd6e1ed59c13516e4ccc44bf88a61efb07fcc5e3e4e9

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: FUN_00011090 @ 0x11090
void FUN_00011090(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_000110a0 @ 0x110a0
void FUN_000110a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_000110b0 @ 0x110b0
void FUN_000110b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_000110c0 @ 0x110c0
void FUN_000110c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: main @ 0x110d0
undefined4 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: _start @ 0x110f0
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011090(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1111c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11120
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11130
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11170
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x111c0
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2e47) == '\0') {
    if (*(int *)(unaff_EDI + 0x2e23) != 0) {
      FUN_00011080(*(undefined4 *)(unaff_EDI + 0x2e37));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2e4b);
    while (uVar1 < ((unaff_EDI + 0x2d27) - (unaff_EDI + 0x2d23) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2e4b) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2d23 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2e4b);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2e47) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11259
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x1125d
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: func_a @ 0x11270
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: param_varargs.constprop.0 @ 0x11280
int param_varargs_constprop_0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_3 + param_2 + param_4 + param_5;
}

// Function: varargs_func.constprop.0 @ 0x112a0
int varargs_func_constprop_0
              (undefined4 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_3 + param_2 + param_4 + param_5 + param_6;
}

// Function: func_b @ 0x112c0
int func_b(int param_1)
{
  return param_1 * 2;
}

// Function: cdecl_func @ 0x112d0
int cdecl_func(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_cdecl @ 0x112e0
undefined4 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x112f0
int stdcall_func(int param_1,int param_2)
{
  return param_2 * param_1;
}

// Function: call_stdcall @ 0x11300
undefined4 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x11310
int __regparm3 fastcall_func(undefined4 param_1_00,int param_2,int param_3,int param_1)
{
  return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x11320
undefined4 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x11330
undefined4 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x11340
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x11360
undefined4 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x11370
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x11390
undefined4 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x113a0
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x113c0
undefined4 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x113d0
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x113f0
undefined4 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x11400
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x11420
undefined4 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x11430
undefined4 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x11440
int varargs_func(int param_1)
{
  int iVar1;
  int iVar2;
  if (0 < param_1) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
    return iVar2;
  }
  return 0;
}

// Function: func_no_args @ 0x11480
undefined4 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x11490
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x114c0
int func_mixed_args(int param_1,int param_2,double param_3,undefined4 param_4,undefined4 param_5)
{
  int iVar1;
  longlong local_1c;
  if (param_2 != 0) {
    iVar1 = FUN_000110b0(param_2);
    param_1 = param_1 + iVar1;
  }
  local_1c = CONCAT44(param_5,param_4);
  return (int)ROUND((double)local_1c + (double)param_1 + param_3);
}

// Function: func_struct_byval @ 0x11540
int func_struct_byval(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                     undefined4 param_6,int param_7,undefined4 param_8,int param_9,
                     undefined4 param_10,int param_11,undefined4 param_12_00,int param_12,
                     undefined4 param_14_00,int param_13,undefined4 param_16_00,int param_14,
                     undefined4 param_18_00,int param_15,undefined4 param_20_00,int param_16,
                     undefined4 param_22,int param_17,undefined4 param_24,int param_18,
                     undefined4 param_26,int param_19,undefined4 param_28,int param_20,
                     undefined4 param_30,int param_21)
{
  return param_3 + param_1 + param_5 + param_7 + param_9 + param_11 + param_12 + param_13 + param_14
         + param_15 + param_16 + param_17 + param_18 + param_19 + param_20 + param_21;
}

// Function: func_struct_byptr @ 0x11590
int func_struct_byptr(int *param_1)
{
  if (param_1 != (int *)0x0) {
    return *param_1 * param_1[1];
  }
  return -1;
}

// Function: test_calling_conventions @ 0x115b0
void test_calling_conventions(void)
{
  undefined4 uVar1;
  FUN_000110a0(&DAT_00012008);
  FUN_000110c0(1,"CALL-L1-01: %d\n",0xf);
  FUN_000110c0(1,"CALL-L1-02: %d\n",0x32);
  FUN_000110c0(1,"CALL-L1-03: %d\n",6);
  FUN_000110c0(1,"CALL-L1-04: %d\n",0xf);
  FUN_000110c0(1,"CALL-L1-05: %d\n",0xf);
  FUN_000110c0(1,"CALL-L1-06: %d\n",100);
  FUN_000110c0(1,"CALL-L1-07: %d\n",0x15);
  FUN_000110c0(1,"CALL-L1-08: %d\n",0xf);
  FUN_000110c0(1,"CALL-L1-09: %d\n",10);
  FUN_000110c0(1,"CALL-L1-10: %d\n",0x21);
  uVar1 = varargs_func_constprop_0(5,1,2,3,4,5);
  FUN_000110c0(1,&DAT_0001202c,uVar1);
  FUN_000110c0(1,&DAT_00012054,0x2a);
  FUN_000110c0(1,&DAT_00012078,0x24);
  FUN_000110c0(1,&DAT_000120a0,0x75);
  FUN_000110c0(1,&DAT_000120c8,0x88);
  FUN_000110c0(1,&DAT_000120f4,0x32);
  return;
}

// Function: param_by_value_int @ 0x11720
int param_by_value_int(int param_1)
{
  return param_1 * 2;
}

// Function: call_by_value_int @ 0x11730
undefined4 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x11740
undefined4 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x11750
undefined4 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x11760
undefined4 param_array_decay(void)
{
  return 4;
}

// Function: call_array_decay @ 0x11770
undefined4 call_array_decay(void)
{
  return 4;
}

// Function: param_string @ 0x11780
int param_string(char *param_1)
{
  return (int)*param_1 + (int)param_1[1];
}

// Function: call_string_param @ 0x117a0
undefined4 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x117b0
int param_ptr_array(char **param_1,int param_2)
{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  if (0 < param_2) {
    ppcVar1 = param_1 + param_2;
    iVar3 = 0;
    do {
      pcVar2 = *param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + *pcVar2;
    } while (ppcVar1 != param_1);
    return iVar3;
  }
  return 0;
}

// Function: call_ptr_array @ 0x117f0
undefined4 call_ptr_array(void)
{
  return 300;
}

// Function: param_varargs @ 0x11800
int param_varargs(int param_1)
{
  int iVar1;
  int iVar2;
  if (0 < param_1) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
    return iVar2;
  }
  return 0;
}

// Function: call_varargs_param @ 0x11840
void call_varargs_param(void)
{
  param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x11860
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x11880
undefined4 call_func_ptr_param(void)
{
  return 0x14;
}

// Function: param_double_ptr @ 0x11890
undefined4 param_double_ptr(int *param_1,undefined4 param_2)
{
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}

// Function: call_double_ptr @ 0x118c0
undefined4 call_double_ptr(void)
{
  return 0x15;
}

// Function: param_complex_cast @ 0x118d0
int param_complex_cast(int *param_1,int param_2)
{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return param_1[1] + *param_1;
  }
  return -1;
}

// Function: call_complex_cast @ 0x11900
undefined4 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x11910
int param_struct_byval(int param_1)
{
  int param_11;
  return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11920
undefined4 call_struct_byval(void)
{
  return 0xf;
}

// Function: param_order_dep @ 0x11930
int param_order_dep(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_order_dep @ 0x11940
undefined4 call_order_dep(void)
{
  return 4;
}

// Function: test_parameter_passing @ 0x11950
void test_parameter_passing(void)
{
  undefined4 uVar1;
  FUN_000110a0(&DAT_00012124);
  FUN_000110c0(1,"PARAM-L1-01: %d\n",0xf);
  FUN_000110c0(1,"PARAM-L1-02: %d\n",0xb);
  FUN_000110c0(1,"PARAM-L2-01: %d\n",4);
  FUN_000110c0(1,"PARAM-L2-02: %d\n",0xad);
  FUN_000110c0(1,"PARAM-L2-03: %d\n",300);
  uVar1 = param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
  FUN_000110c0(1,"PARAM-L2-04: %d\n",uVar1);
  FUN_000110c0(1,"PARAM-L3-01: %d\n",0x14);
  FUN_000110c0(1,"PARAM-L3-02: %d\n",0x15);
  FUN_000110c0(1,"PARAM-L3-03: %d\n",0x12345678);
  FUN_000110c0(1,"PARAM-L3-04: %d\n",0xf);
  FUN_000110c0(1,"PARAM-L3-05: %d\n",4);
  return;
}

// Function: ret_basic_type @ 0x11a70
int ret_basic_type(int param_1)
{
  return param_1 * 2;
}

// Function: call_ret_basic @ 0x11a80
undefined4 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x11a90
int ret_pointer(int param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x11aa0
undefined4 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x11ab0
void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// Function: call_ret_small_struct @ 0x11ad0
undefined4 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x11ae0
int * ret_large_struct(int *param_1,int param_2)
{
  *param_1 = param_2;
  param_1[1] = param_2 + 1;
  param_1[2] = param_2 + 2;
  param_1[3] = param_2 + 3;
  param_1[4] = param_2 + 4;
  param_1[5] = param_2 + 5;
  param_1[6] = param_2 + 6;
  param_1[7] = param_2 + 7;
  param_1[8] = param_2 + 8;
  param_1[9] = param_2 + 9;
  param_1[10] = param_2 + 10;
  param_1[0xb] = param_2 + 0xb;
  param_1[0xc] = param_2 + 0xc;
  param_1[0xd] = param_2 + 0xd;
  param_1[0xf] = param_2 + 0xf;
  param_1[0xe] = param_2 + 0xe;
  return param_1;
}

// Function: call_ret_large_struct @ 0x11b50
undefined4 call_ret_large_struct(void)
{
  return 0xd7;
}

// Function: ret_func_ptr @ 0x11b60
code * ret_func_ptr(int param_1)
{
  code *pcVar1;
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}

// Function: call_ret_func_ptr @ 0x11b90
undefined4 call_ret_func_ptr(void)
{
  return 10;
}

// Function: ret_opaque_handle @ 0x11ba0
undefined8 * ret_opaque_handle(int param_1)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}

// Function: call_ret_opaque @ 0x11bd0
undefined4 call_ret_opaque(void)
{
  return handle1_1;
}

// Function: ret_complex_expr @ 0x11bf0
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 * 2;
  }
  return iVar1;
}

// Function: call_ret_complex_expr @ 0x11c10
undefined4 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x11c20
int ret_multi_branch(uint param_1)
{
  int iVar1;
  iVar1 = -1;
  if (param_1 < 3) {
    iVar1 = (param_1 * 5 + 5) * 2;
  }
  return iVar1;
}

// Function: call_ret_multi_branch @ 0x11c40
undefined4 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x11c50
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x11c70
undefined4 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x11c80
void test_return_values(void)
{
  FUN_000110a0(&DAT_000122a0);
  FUN_000110c0(1,&DAT_000122be,0x2a);
  FUN_000110c0(1,&DAT_000122da,0x14);
  FUN_000110c0(1,&DAT_000122f6,7);
  FUN_000110c0(1,&DAT_00012311,0xd7);
  FUN_000110c0(1,&DAT_0001232e,10);
  FUN_000110c0(1,&DAT_0001234a,handle1_1);
  FUN_000110c0(1,&DAT_00012367,0x28);
  FUN_000110c0(1,&DAT_00012383,0x3c);
  FUN_000110c0(1,&DAT_0001239f,0x15);
  return;
}

// Function: __x86.get_pc_thunk.ax @ 0x11d56
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: __do_global_ctors_aux @ 0x11d60
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11dac
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

