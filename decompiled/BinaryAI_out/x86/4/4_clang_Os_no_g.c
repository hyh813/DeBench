// Decompiled by BinaryAI
// SHA256: f766eece395f0dd6a1231463c923912f6c4df16a09cb9985fe69a5d3612629e6

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

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::printf @ 0x11050
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::puts @ 0x11060
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x11070
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: FUN_00011080 @ 0x11080
void FUN_00011080(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + -0x10))();
  return;
}

// Function: _start @ 0x11090
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x110bc
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110c0
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x110d0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11110
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11160
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x2ecb) == '\0') {
    if (*(int *)(unaff_EDI + 0x2e83) != 0) {
      FUN_00011080(*(undefined4 *)(unaff_EDI + 0x2eb7));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x2ecf);
    while (uVar1 < ((unaff_EDI + 0x2dab) - (unaff_EDI + 0x2da7) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x2ecf) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x2da7 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x2ecf);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x2ecb) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x111f9
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x111fd
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: cdecl_func @ 0x11204
int cdecl_func(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_cdecl @ 0x1120d
undefined4 call_cdecl(void)
{
  return 0xf;
}

// Function: stdcall_func @ 0x11213
int stdcall_func(int param_1,int param_2)
{
  return param_2 * param_1;
}

// Function: call_stdcall @ 0x1121f
undefined4 call_stdcall(void)
{
  return 0x32;
}

// Function: fastcall_func @ 0x11225
int __regparm3 fastcall_func(undefined4 param_1_00,int param_2,int param_3,int param_1)
{
  return param_3 + param_2 + param_1;
}

// Function: call_fastcall @ 0x1122f
undefined4 call_fastcall(void)
{
  return 6;
}

// Function: call_thiscall @ 0x11235
undefined4 call_thiscall(void)
{
  return 0xf;
}

// Function: arm_aapcs_func @ 0x1123b
int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x11250
undefined4 call_arm_aapcs(void)
{
  return 0xf;
}

// Function: mips_func @ 0x11256
int mips_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_2 + param_1 + param_3 + param_4;
}

// Function: call_mips @ 0x11267
undefined4 call_mips(void)
{
  return 100;
}

// Function: amd64_sysv_func @ 0x1126d
int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x11286
undefined4 call_amd64_sysv(void)
{
  return 0x15;
}

// Function: ms_x64_func @ 0x1128c
int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x112a1
undefined4 call_ms_x64(void)
{
  return 0xf;
}

// Function: vectorcall_func @ 0x112a7
int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
  return param_2 + param_1 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x112b8
undefined4 call_vectorcall(void)
{
  return 10;
}

// Function: mixed_conventions_test @ 0x112be
undefined4 mixed_conventions_test(void)
{
  return 0x21;
}

// Function: varargs_func @ 0x112c4
int varargs_func(int param_1)
{
  int *piVar1;
  int iVar2;
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar1 = (int *)&stack0x00000008;
    do {
      iVar2 = iVar2 + *piVar1;
      param_1 = param_1 + -1;
      piVar1 = piVar1 + 1;
    } while (param_1 != 0);
  }
  return iVar2;
}

// Function: func_no_args @ 0x112ee
undefined4 func_no_args(void)
{
  return 0x2a;
}

// Function: func_many_args @ 0x112f4
int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)
{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x11315
int func_mixed_args(int param_1,char *param_2,double param_3,undefined4 param_4,undefined4 param_5)
{
  size_t sVar1;
  if (param_2 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_2);
  }
  return (int)ROUND((double)CONCAT44(param_5,param_4) + param_3 + (double)(sVar1 + param_1));
}

// Function: func_struct_byval @ 0x11397
int func_struct_byval(void)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)(&stack0x00000004 + iVar2 * 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  return iVar1;
}

// Function: func_struct_byptr @ 0x113b1
int func_struct_byptr(int *param_1)
{
  if (param_1 != (int *)0x0) {
    return param_1[1] * *param_1;
  }
  return -1;
}

// Function: test_calling_conventions @ 0x113c4
void test_calling_conventions(void)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int aiStack_94 [35];
  aiStack_94[1] = 0x113d1;
  puts(&DAT_00012352);
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
  uVar1 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_000120a8,uVar1);
  printf(&DAT_000120d0,0x2a);
  printf(&DAT_000120f2,0x24);
  printf(&DAT_00012119,0x75);
  iVar2 = 1;
  do {
    aiStack_94[iVar2 * 2 + 1] = 0;
    aiStack_94[iVar2 * 2] = iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x11);
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + aiStack_94[iVar3 * 2 + 2];
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  printf(&DAT_00012141,iVar2);
  printf(&DAT_0001216d,0x32);
  return;
}

// Function: param_by_value_int @ 0x11541
int param_by_value_int(int param_1)
{
  return param_1 * 2;
}

// Function: call_by_value_int @ 0x11548
undefined4 call_by_value_int(void)
{
  return 0xf;
}

// Function: param_by_value_ptr @ 0x1154e
undefined4 param_by_value_ptr(int *param_1)
{
  *param_1 = *param_1 << 1;
  return 1;
}

// Function: call_by_value_ptr @ 0x11558
undefined4 call_by_value_ptr(void)
{
  return 0xb;
}

// Function: param_array_decay @ 0x1155e
undefined4 param_array_decay(void)
{
  return 4;
}

// Function: call_array_decay @ 0x11564
undefined4 call_array_decay(void)
{
  return 4;
}

// Function: param_string @ 0x1156a
int param_string(char *param_1)
{
  return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x11578
undefined4 call_string_param(void)
{
  return 0xad;
}

// Function: param_ptr_array @ 0x1157e
int param_ptr_array(int param_1,int param_2)
{
  int iVar1;
  int iVar2;
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + **(char **)(param_1 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (param_2 != iVar2);
  }
  return iVar1;
}

// Function: call_ptr_array @ 0x115a4
undefined4 call_ptr_array(void)
{
  return 300;
}

// Function: param_varargs @ 0x115aa
int param_varargs(int param_1)
{
  int *piVar1;
  int iVar2;
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar1 = (int *)&stack0x00000008;
    do {
      iVar2 = iVar2 + *piVar1;
      param_1 = param_1 + -1;
      piVar1 = piVar1 + 1;
    } while (param_1 != 0);
  }
  return iVar2;
}

// Function: call_varargs_param @ 0x115d4
void call_varargs_param(void)
{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}

// Function: param_func_ptr @ 0x115fb
int param_func_ptr(code *param_1,undefined4 param_2)
{
  int iVar1;
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x1161e
undefined4 call_func_ptr_param(void)
{
  return 0x14;
}

// Function: param_double_ptr @ 0x11624
undefined4 param_double_ptr(int *param_1,undefined4 param_2)
{
  undefined4 uVar1;
  uVar1 = 0xffffffff;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// Function: call_double_ptr @ 0x11645
undefined4 call_double_ptr(void)
{
  return 0x15;
}

// Function: param_complex_cast @ 0x1164b
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

// Function: call_complex_cast @ 0x11669
undefined4 call_complex_cast(void)
{
  return 0x12345678;
}

// Function: param_struct_byval @ 0x1166f
int param_struct_byval(int param_1)
{
  int param_11;
  return param_11 + param_1;
}

// Function: call_struct_byval @ 0x11678
int call_struct_byval(void)
{
  int iVar1;
  int local_44 [17];
  iVar1 = 0;
  do {
    local_44[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return local_44[15] + local_44[0];
}

// Function: param_order_dep @ 0x11691
int param_order_dep(int param_1,int param_2)
{
  return param_2 + param_1;
}

// Function: call_order_dep @ 0x1169a
undefined4 call_order_dep(void)
{
  return 3;
}

// Function: test_parameter_passing @ 0x116a0
void test_parameter_passing(void)
{
  undefined4 uVar1;
  int iVar2;
  int local_4c [16];
  puts(&DAT_00012373);
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
    local_4c[iVar2] = iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  printf("PARAM-L3-04: %d\n",local_4c[15] + local_4c[0]);
  printf("PARAM-L3-05: %d\n",3);
  return;
}

// Function: ret_basic_type @ 0x117b7
int ret_basic_type(int param_1)
{
  return param_1 * 2;
}

// Function: call_ret_basic @ 0x117be
undefined4 call_ret_basic(void)
{
  return 0x2a;
}

// Function: ret_pointer @ 0x117c4
int ret_pointer(int param_1)
{
  return param_1 + 4;
}

// Function: call_ret_pointer @ 0x117cc
undefined4 call_ret_pointer(void)
{
  return 0x14;
}

// Function: ret_small_struct @ 0x117d2
void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)
{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// Function: call_ret_small_struct @ 0x117e6
undefined4 call_ret_small_struct(void)
{
  return 7;
}

// Function: ret_large_struct @ 0x117ec
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

// Function: call_ret_large_struct @ 0x11807
int call_ret_large_struct(void)
{
  int iVar1;
  int aiStack_1d4 [100];
  int local_44 [17];
  iVar1 = 100;
  do {
    aiStack_1d4[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x74);
  return local_44[15] + local_44[0];
}

// Function: func_a @ 0x11827
int func_a(int param_1)
{
  return param_1 + 10;
}

// Function: func_b @ 0x1182f
int func_b(int param_1)
{
  return param_1 * 2;
}

// Function: FUN_0001183b @ 0x1183b
int FUN_0001183b(undefined4 param_1,int param_2)
{
  int iVar1;
  int unaff_retaddr;
  iVar1 = unaff_retaddr + -0xc;
  if (param_2 == 0) {
    iVar1 = unaff_retaddr + -0x14;
  }
  return iVar1;
}

// Function: call_ret_func_ptr @ 0x11857
undefined4 call_ret_func_ptr(void)
{
  return 10;
}

// Function: FUN_00011862 @ 0x11862
int FUN_00011862(undefined4 param_1,int param_2)
{
  int iVar1;
  int unaff_retaddr;
  iVar1 = unaff_retaddr + 0x27ce;
  if (param_2 == 0) {
    iVar1 = unaff_retaddr + 0x27c6;
  }
  return iVar1;
}

// Function: FUN_00011883 @ 0x11883
undefined4 FUN_00011883(void)
{
  int unaff_retaddr;
  return *(undefined4 *)(unaff_retaddr + 0x27a5);
}

// Function: ret_complex_expr @ 0x11891
int ret_complex_expr(int param_1,int param_2,int param_3)
{
  int iVar1;
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 * 2;
  }
  return iVar1;
}

// Function: call_ret_complex_expr @ 0x118a7
undefined4 call_ret_complex_expr(void)
{
  return 0x28;
}

// Function: ret_multi_branch @ 0x118ad
int ret_multi_branch(uint param_1)
{
  int iVar1;
  iVar1 = param_1 * 10 + 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}

// Function: call_ret_multi_branch @ 0x118c2
undefined4 call_ret_multi_branch(void)
{
  return 0x3c;
}

// Function: ret_void @ 0x118c8
void ret_void(int param_1,int *param_2)
{
  *param_2 = param_1 * 3;
  return;
}

// Function: call_ret_void @ 0x118d6
undefined4 call_ret_void(void)
{
  return 0x15;
}

// Function: test_return_values @ 0x118dc
void test_return_values(void)
{
  int iVar1;
  int aiStackY_1d4 [97];
  undefined4 uStackY_50;
  int local_44 [16];
  uStackY_50 = 0x118fa;
  puts(&DAT_00012394);
  uStackY_50 = 0x11910;
  printf(&DAT_00012255);
  uStackY_50 = 0x11926;
  printf(&DAT_00012271);
  uStackY_50 = 0x1193c;
  printf(&DAT_0001228d);
  iVar1 = 100;
  do {
    aiStackY_1d4[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x74);
  uStackY_50 = 0x11968;
  printf(&DAT_000122a8);
  uStackY_50 = 0x1197e;
  printf(&DAT_000122c5);
  uStackY_50 = 0x11996;
  printf(&DAT_000122e1);
  uStackY_50 = 0x119ac;
  printf(&DAT_000122fe);
  uStackY_50 = 0x119c2;
  printf(&DAT_0001231a);
  uStackY_50 = 0x119d8;
  printf(&DAT_00012336);
  return;
}

// Function: main @ 0x119dd
undefined4 main(void)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}

// Function: __do_global_ctors_aux @ 0x11a10
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x11a5c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

