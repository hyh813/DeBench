/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/4/4_clang_O1_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100628 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100640 @ 00100640 */

void FUN_00100640(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100700 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100734 */

/* WARNING: Removing unreachable block (ram,0x00100744) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100750 */

/* WARNING: Removing unreachable block (ram,0x00100768) */
/* WARNING: Removing unreachable block (ram,0x00100774) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100780 */

/* WARNING: Removing unreachable block (ram,0x001007a4) */
/* WARNING: Removing unreachable block (ram,0x001007b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001007bc @ 001007bc */

void FUN_001007bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001007c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: cdecl_func @ 00100814 */

int cdecl_func(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_cdecl @ 0010081c */

undefined8 call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 00100824 */

int stdcall_func(int param_1,int param_2)

{
  return param_2 * param_1;
}



/* Function: call_stdcall @ 0010082c */

undefined8 call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00100834 */

int fastcall_func(int param_1,int param_2,int param_3)

{
  return param_2 + param_1 + param_3;
}



/* Function: call_fastcall @ 00100840 */

undefined8 call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00100848 */

undefined8 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00100850 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00100864 */

undefined8 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 0010086c */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_mips @ 0010087c */

undefined8 call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00100884 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 0010089c */

undefined8 call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 001008a4 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 001008b8 */

undefined8 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 001008c0 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 001008d0 */

undefined8 call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 001008d8 */

undefined8 mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 001008e0 */

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



/* Function: func_no_args @ 00100984 */

undefined8 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 0010098c */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 001009ac */

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



/* Function: func_struct_byval @ 00100a04 */

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



/* Function: func_struct_byptr @ 00100a28 */

int func_struct_byptr(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return param_1[1] * *param_1;
  }
  return -1;
}



/* Function: test_calling_conventions @ 00100a40 */

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
  local_120[0xb] = local_a0[0xb];
  local_120[10] = local_a0[10];
  local_120[0xd] = local_a0[0xd];
  local_120[0xc] = local_a0[0xc];
  local_120[0xf] = local_a0[0xf];
  local_120[0xe] = local_a0[0xe];
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



/* Function: param_by_value_int @ 00100be0 */

int param_by_value_int(int param_1)

{
  return param_1 << 1;
}



/* Function: call_by_value_int @ 00100be8 */

undefined8 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00100bf0 */

undefined8 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00100c08 */

undefined8 call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 00100c10 */

undefined8 param_array_decay(void)

{
  return 8;
}



/* Function: call_array_decay @ 00100c18 */

undefined8 call_array_decay(void)

{
  return 8;
}



/* Function: param_string @ 00100c20 */

int param_string(byte *param_1)

{
  return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00100c30 */

undefined8 call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00100c38 */

int param_ptr_array(undefined8 *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    iVar1 = 0;
    uVar2 = (ulong)param_2;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + (uint)*(byte *)*param_1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_ptr_array @ 00100c6c */

undefined8 call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 00100c74 */

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



/* Function: call_varargs_param @ 00100d18 */

void call_varargs_param(void)

{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 00100d40 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100d60 */

undefined8 call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00100d68 */

undefined8 param_double_ptr(undefined8 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}



/* Function: call_double_ptr @ 00100d90 */

undefined8 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00100d98 */

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



/* Function: call_complex_cast @ 00100dc0 */

undefined8 call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00100dcc */

int param_struct_byval(int *param_1)

{
  return param_1[0xf] + *param_1;
}



/* Function: call_struct_byval @ 00100ddc */

int call_struct_byval(void)

{
  long lVar1;
  int local_40 [16];
  
  lVar1 = 0;
  do {
    local_40[lVar1] = (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00100e0c */

int param_order_dep(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_order_dep @ 00100e14 */

undefined8 call_order_dep(void)

{
  return 3;
}



/* Function: test_parameter_passing @ 00100e1c */

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
  printf("PARAM-L3-04: %d\n",(ulong)(uint)(local_50[0xf] + local_50[0]));
  iVar1 = printf("PARAM-L3-05: %d\n",3);
  return iVar1;
}



/* Function: ret_basic_type @ 00100f2c */

int ret_basic_type(int param_1)

{
  return param_1 << 1;
}



/* Function: call_ret_basic @ 00100f34 */

undefined8 call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00100f3c */

long ret_pointer(long param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 00100f44 */

undefined8 call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00100f4c */

ulong ret_small_struct(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00100f58 */

undefined8 call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00100f60 */

void ret_large_struct(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(int *)(param_1 + lVar1 * 4) = param_2 + (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}



/* Function: call_ret_large_struct @ 00100f80 */

int call_ret_large_struct(void)

{
  long lVar1;
  int local_40 [16];
  
  lVar1 = 0;
  do {
    local_40[lVar1] = (int)lVar1 + 100;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00100fb4 */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: func_b @ 00100fbc */

int func_b(int param_1)

{
  return param_1 << 1;
}



/* Function: ret_func_ptr @ 00100fc4 */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  pcVar1 = func_a;
  if (param_1 != 0) {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 00100fe0 */

undefined8 call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00100fe8 */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
  if (param_1 != 0) {
    puVar1 = &ret_opaque_handle_handle2;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00101004 */

undefined4 call_ret_opaque(void)

{
  return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 00101010 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 << 1;
  if (param_1 <= param_2) {
    iVar1 = param_3 + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101024 */

undefined8 call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 0010102c */

int ret_multi_branch(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 10 + 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101044 */

undefined8 call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 0010104c */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 00101058 */

undefined8 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00101060 */

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
  printf(&DAT_00101414,(ulong)(uint)(local_50[0xf] + local_50[0]));
  printf(&DAT_00101431,10);
  printf(&DAT_0010144d,(ulong)ret_opaque_handle_handle1);
  printf(&DAT_0010146a,0x28);
  printf(&DAT_00101486,0x3c);
  iVar1 = printf(&DAT_001014a2,0x15);
  return iVar1;
}



/* Function: main @ 0010113c */

undefined8 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _fini @ 0010115c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 79 */
