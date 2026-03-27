/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/4/4_gcc_Os_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 000110f0 */

undefined4 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _start @ 00011110 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001113c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011140 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001116b) */
/* WARNING: Removing unreachable block (ram,0x00011175) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011190 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111be) */
/* WARNING: Removing unreachable block (ram,0x000111c8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111e0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001123c) */
/* WARNING: Removing unreachable block (ram,0x00011240) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011279 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001127d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: func_a @ 00011281 */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: func_b @ 00011290 */

int func_b(int param_1)

{
  return param_1 * 2;
}



/* Function: callback_func @ 0001129e */

int callback_func(int param_1)

{
  return param_1 * 2;
}



/* Function: cdecl_func @ 000112ac */

int cdecl_func(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_cdecl @ 000112bb */

undefined4 call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 000112c5 */

int stdcall_func(int param_1,int param_2)

{
  return param_2 * param_1;
}



/* Function: call_stdcall @ 000112d7 */

undefined4 call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 000112e1 */

int fastcall_func(int param_1)

{
  int in_ECX;
  int in_EDX;
  
  return in_ECX + in_EDX + param_1;
}



/* Function: call_fastcall @ 000112f2 */

undefined4 call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 000112fc */

undefined4 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00011306 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 0001131e */

undefined4 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00011328 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 0001133d */

undefined4 call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00011347 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00011362 */

undefined4 call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 0001136c */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00011384 */

undefined4 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 0001138e */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000113a3 */

undefined4 call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 000113ad */

undefined4 mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 000113b7 */

int varargs_func(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: func_no_args @ 000113d4 */

undefined4 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000113de */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 000113ff */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int func_mixed_args(int param_1,char *param_2,double param_3,undefined4 param_4,undefined4 param_5)

{
  size_t sVar1;
  undefined8 local_2c;
  
  sVar1 = 0;
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
  }
  local_2c = CONCAT44(param_5,param_4);
  return (int)ROUND((double)local_2c + param_3 + (double)(int)(sVar1 + param_1));
}



/* Function: func_struct_byval @ 00011471 */

void func_struct_byval(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return;
}



/* Function: func_struct_byptr @ 0001148e */

int func_struct_byptr(int *param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 * param_1[1];
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 000114a7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_calling_conventions(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int in_GS_OFFSET;
  byte bVar9;
  uint auStack_128 [34];
  uint local_a0 [32];
  int local_20;
  undefined4 uStack_14;
  
  bVar9 = 0;
  uStack_14 = 0x114bc;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00012008);
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
  __printf_chk(1,&DAT_000120c9,uVar1);
  __printf_chk(1,&DAT_000120f1,0x2a);
  __printf_chk(1,&DAT_00012113,0x24);
  __printf_chk(1,&DAT_0001213a,0x75);
  uVar6 = 0;
  uVar2 = 1;
  do {
    auStack_128[uVar2 * 2] = uVar2;
    uVar3 = uVar2 + 1;
    auStack_128[uVar2 * 2 + 1] = uVar6;
    uVar6 = uVar6 + (0xfffffffe < uVar2);
    uVar2 = uVar3;
  } while (uVar3 != 0x11 || uVar6 != 0);
  iVar4 = 0;
  puVar7 = auStack_128 + 2;
  puVar8 = local_a0;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + (uint)bVar9 * -2 + 1;
    puVar8 = puVar8 + (uint)bVar9 * -2 + 1;
  }
  iVar5 = 0;
  do {
    iVar5 = iVar5 + local_a0[iVar4 * 2];
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x10);
  __printf_chk(1,&DAT_00012162,iVar5,0x10);
  __printf_chk(1,&DAT_0001218e,0x32);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: param_by_value_int @ 00011688 */

int param_by_value_int(int param_1)

{
  return param_1 * 2;
}



/* Function: call_by_value_int @ 00011696 */

undefined4 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 000116a0 */

undefined4 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 000116b3 */

undefined4 call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 000116bd */

undefined4 param_array_decay(void)

{
  return 4;
}



/* Function: call_array_decay @ 000116c7 */

undefined4 call_array_decay(void)

{
  return 4;
}



/* Function: param_string @ 000116d1 */

int param_string(char *param_1)

{
  return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 000116e6 */

undefined4 call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 000116f0 */

int param_ptr_array(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + **(char **)(param_1 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: call_ptr_array @ 00011714 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_ptr_array(void)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  int in_GS_OFFSET;
  int local_1c [4];
  
  local_1c[3] = *(int *)(in_GS_OFFSET + 0x14);
  ppuVar2 = &PTR_DAT_00014008;
  piVar3 = local_1c;
  for (iVar1 = 3; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (int)*ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  param_ptr_array(local_1c,3);
  if (local_1c[3] != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: param_varargs @ 0001176c */

int param_varargs(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = 0; iVar1 < param_1; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00011789 */

void call_varargs_param(void)

{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 000117a4 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 000117b9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void call_func_ptr_param(void)

{
  param_func_ptr(callback_func,5);
  return;
}



/* Function: param_double_ptr @ 000117dd */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if ((param_1 != (int *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    uVar1 = 1;
    *param_1 = 0;
  }
  return uVar1;
}



/* Function: call_double_ptr @ 00011806 */

undefined4 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00011810 */

int param_complex_cast(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else {
    iVar1 = -1;
    if (param_2 == 1) {
      iVar1 = param_1[1] + *param_1;
    }
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00011832 */

undefined4 call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 0001183c */

int param_struct_byval(int param_1)

{
  int in_stack_00000040;
  
  return in_stack_00000040 + param_1;
}



/* Function: call_struct_byval @ 0001184b */

int call_struct_byval(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int local_50 [16];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    local_50[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  iVar1 = local_50[0xf] + local_50[0];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_order_dep @ 00011883 */

int param_order_dep(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_order_dep @ 00011892 */

undefined4 call_order_dep(void)

{
  return 4;
}



/* Function: test_parameter_passing @ 0001189c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_parameter_passing(void)

{
  undefined4 uVar1;
  
  puts(&DAT_000121c7);
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



/* Function: ret_basic_type @ 000119ad */

int ret_basic_type(int param_1)

{
  return param_1 * 2;
}



/* Function: call_ret_basic @ 000119bb */

undefined4 call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 000119c5 */

int ret_pointer(int param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 000119d4 */

undefined4 call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 000119de */

void ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Function: call_ret_small_struct @ 000119f7 */

undefined4 call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00011a01 */

void ret_large_struct(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_GS_OFFSET;
  int local_50 [16];
  int local_10;
  
  iVar1 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  do {
    local_50[iVar1] = param_2 + iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  piVar2 = local_50;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *piVar2;
    piVar2 = piVar2 + 1;
    param_1 = param_1 + 1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: call_ret_large_struct @ 00011a4d */

int call_ret_large_struct(void)

{
  int in_GS_OFFSET;
  int local_50 [15];
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ret_large_struct(local_50,100);
  local_14 = local_14 + local_50[0];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    local_14 = __stack_chk_fail_local();
  }
  return local_14;
}



/* Function: ret_func_ptr @ 00011a86 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  pcVar1 = func_a;
  if (param_1 != 0) {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 00011aac */

undefined4 call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00011ab6 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = &handle2_0;
  if (param_1 == 0) {
    puVar1 = (undefined8 *)&handle1_1;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00011adc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00011af1 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 * 2;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00011b0c */

undefined4 call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00011b16 */

int ret_multi_branch(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 3) {
    iVar1 = (param_1 + 1) * 10;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00011b30 */

undefined4 call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00011b3a */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 00011b4c */

undefined4 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00011b56 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_return_values(void)

{
  undefined4 uVar1;
  
  puts(&DAT_000122a3);
  __printf_chk(1,&DAT_000122c1,0x2a);
  __printf_chk(1,&DAT_000122dd,0x14);
  __printf_chk(1,&DAT_000122f9,7);
  uVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_00012314,uVar1);
  __printf_chk(1,&DAT_00012331,10);
  __printf_chk(1,&DAT_0001234d,handle1_1);
  __printf_chk(1,&DAT_0001236a,0x28);
  __printf_chk(1,&DAT_00012386,0x3c);
  __printf_chk(1,&DAT_000123a2,0x15);
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 00011c33 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00011c40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011c60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011c7a) */
/* WARNING: Removing unreachable block (ram,0x00011c90) */
/* WARNING: Removing unreachable block (ram,0x00011c9d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011cac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 85 */
