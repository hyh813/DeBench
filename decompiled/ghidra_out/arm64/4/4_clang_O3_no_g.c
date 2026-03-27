/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/4/4_clang_O3_no_g
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

/* WARNING: Removing unreachable block (ram,0x00100938) */
/* WARNING: Removing unreachable block (ram,0x00100944) */
/* WARNING: Removing unreachable block (ram,0x00100958) */
/* WARNING: Removing unreachable block (ram,0x00100964) */
/* WARNING: Removing unreachable block (ram,0x001009d8) */
/* WARNING: Removing unreachable block (ram,0x001009e8) */
/* WARNING: Removing unreachable block (ram,0x00100a08) */
/* WARNING: Removing unreachable block (ram,0x00100a3c) */
/* WARNING: Removing unreachable block (ram,0x00100a4c) */
/* WARNING: Removing unreachable block (ram,0x00100a54) */

int varargs_func(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint local_8;
  
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    local_8 = 0xffffffc8;
    iVar2 = 0;
    piVar3 = (int *)register0x00000008;
    do {
      while ((uVar1 = local_8, (int)local_8 < 0 && (uVar1 = local_8 + 8, local_8 < 0xfffffff9))) {
        param_1 = param_1 + -1;
        iVar2 = *(int *)(&stack0xffffffffffffffe0 + (int)local_8) + iVar2;
        local_8 = local_8 + 8;
        if (param_1 == 0) {
          return iVar2;
        }
      }
      local_8 = uVar1;
      param_1 = param_1 + -1;
      iVar2 = *piVar3 + iVar2;
      piVar3 = piVar3 + 2;
    } while (param_1 != 0);
  }
  return iVar2;
}



/* Function: func_no_args @ 00100a78 */

undefined8 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00100a80 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_2 + param_1 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00100aa0 */

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



/* Function: func_struct_byval @ 00100af8 */

int func_struct_byval(int *param_1)

{
  return param_1[0x1e] +
         param_1[0x1c] +
         param_1[0x1a] +
         param_1[0x18] +
         param_1[0x16] +
         param_1[0x14] +
         param_1[0x12] +
         param_1[0x10] +
         param_1[0xe] +
         param_1[0xc] + param_1[10] + param_1[8] + param_1[6] + param_1[4] + param_1[2] + *param_1;
}



/* Function: func_struct_byptr @ 00100b78 */

int func_struct_byptr(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return param_1[1] * *param_1;
  }
  return -1;
}



/* Function: test_calling_conventions @ 00100b90 */

int test_calling_conventions(void)

{
  int iVar1;
  ulong uVar2;
  
  puts(&DAT_00101752);
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
  uVar2 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_001014a8,uVar2 & 0xffffffff);
  printf(&DAT_001014d0,0x2a);
  printf(&DAT_001014f2,0x24);
  printf(&DAT_00101519,0x75);
  printf(&DAT_00101541,0x88);
  iVar1 = printf(&DAT_0010156d,0x32);
  return iVar1;
}



/* Function: param_by_value_int @ 00100cc4 */

int param_by_value_int(int param_1)

{
  return param_1 << 1;
}



/* Function: call_by_value_int @ 00100ccc */

undefined8 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00100cd4 */

undefined8 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00100cec */

undefined8 call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 00100cf4 */

undefined8 param_array_decay(void)

{
  return 8;
}



/* Function: call_array_decay @ 00100cfc */

undefined8 call_array_decay(void)

{
  return 8;
}



/* Function: param_string @ 00100d04 */

int param_string(byte *param_1)

{
  return (uint)param_1[1] + (uint)*param_1;
}



/* Function: call_string_param @ 00100d14 */

undefined8 call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00100d1c */

int param_ptr_array(long param_1,uint param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  uVar5 = (ulong)param_2;
  if (param_2 == 1) {
    uVar7 = 0;
    iVar3 = 0;
  }
  else {
    uVar7 = uVar5 & 0xfffffffe;
    iVar4 = 0;
    iVar3 = 0;
    puVar8 = (undefined8 *)(param_1 + 8);
    uVar9 = uVar7;
    do {
      puVar1 = puVar8 + -1;
      pbVar2 = (byte *)*puVar8;
      puVar8 = puVar8 + 2;
      uVar9 = uVar9 - 2;
      iVar4 = iVar4 + (uint)*(byte *)*puVar1;
      iVar3 = iVar3 + (uint)*pbVar2;
    } while (uVar9 != 0);
    iVar3 = iVar3 + iVar4;
    if (uVar7 == uVar5) {
      return iVar3;
    }
  }
  lVar6 = uVar5 - uVar7;
  puVar8 = (undefined8 *)(param_1 + uVar7 * 8);
  do {
    lVar6 = lVar6 + -1;
    iVar3 = iVar3 + (uint)*(byte *)*puVar8;
    puVar8 = puVar8 + 1;
  } while (lVar6 != 0);
  return iVar3;
}



/* Function: call_ptr_array @ 00100da8 */

undefined8 call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 00100db0 */

/* WARNING: Removing unreachable block (ram,0x00100e08) */
/* WARNING: Removing unreachable block (ram,0x00100e14) */
/* WARNING: Removing unreachable block (ram,0x00100e28) */
/* WARNING: Removing unreachable block (ram,0x00100e34) */
/* WARNING: Removing unreachable block (ram,0x00100ea8) */
/* WARNING: Removing unreachable block (ram,0x00100eb8) */
/* WARNING: Removing unreachable block (ram,0x00100ed8) */
/* WARNING: Removing unreachable block (ram,0x00100f0c) */
/* WARNING: Removing unreachable block (ram,0x00100f1c) */
/* WARNING: Removing unreachable block (ram,0x00100f24) */

int param_varargs(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint local_8;
  
  if (param_1 < 1) {
    iVar2 = 0;
  }
  else {
    local_8 = 0xffffffc8;
    iVar2 = 0;
    piVar3 = (int *)register0x00000008;
    do {
      while ((uVar1 = local_8, (int)local_8 < 0 && (uVar1 = local_8 + 8, local_8 < 0xfffffff9))) {
        param_1 = param_1 + -1;
        iVar2 = *(int *)(&stack0xffffffffffffffe0 + (int)local_8) + iVar2;
        local_8 = local_8 + 8;
        if (param_1 == 0) {
          return iVar2;
        }
      }
      local_8 = uVar1;
      param_1 = param_1 + -1;
      iVar2 = *piVar3 + iVar2;
      piVar3 = piVar3 + 2;
    } while (param_1 != 0);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00100f48 */

void call_varargs_param(void)

{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 00100f60 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100f80 */

undefined8 call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00100f88 */

undefined8 param_double_ptr(undefined8 *param_1,undefined4 param_2)

{
  if ((param_1 != (undefined8 *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}



/* Function: call_double_ptr @ 00100fb0 */

undefined8 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00100fb8 */

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



/* Function: call_complex_cast @ 00100fe0 */

undefined8 call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00100fec */

int param_struct_byval(int *param_1)

{
  return param_1[0xf] + *param_1;
}



/* Function: call_struct_byval @ 00100ffc */

undefined8 call_struct_byval(void)

{
  return 0xf;
}



/* Function: param_order_dep @ 00101004 */

int param_order_dep(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_order_dep @ 0010100c */

undefined8 call_order_dep(void)

{
  return 3;
}



/* Function: test_parameter_passing @ 00101014 */

int test_parameter_passing(void)

{
  int iVar1;
  ulong uVar2;
  
  puts(&DAT_00101773);
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
  printf("PARAM-L3-04: %d\n",0xf);
  iVar1 = printf("PARAM-L3-05: %d\n",3);
  return iVar1;
}



/* Function: ret_basic_type @ 001010f8 */

int ret_basic_type(int param_1)

{
  return param_1 << 1;
}



/* Function: call_ret_basic @ 00101100 */

undefined8 call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00101108 */

long ret_pointer(long param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101110 */

undefined8 call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00101118 */

ulong ret_small_struct(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00101124 */

undefined8 call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 0010112c */

void ret_large_struct(int *param_1,int param_2)

{
  *param_1 = param_2;
  param_1[0xf] = param_2 + 0xf;
  *(ulong *)(param_1 + 3) = CONCAT44(param_2 + 4,param_2 + 3);
  *(ulong *)(param_1 + 1) = CONCAT44(param_2 + 2,param_2 + 1);
  *(ulong *)(param_1 + 7) = CONCAT44(param_2 + 8,param_2 + 7);
  *(ulong *)(param_1 + 5) = CONCAT44(param_2 + 6,param_2 + 5);
  *(ulong *)(param_1 + 0xb) = CONCAT44(param_2 + 0xc,param_2 + 0xb);
  *(ulong *)(param_1 + 9) = CONCAT44(param_2 + 10,param_2 + 9);
  *(ulong *)(param_1 + 0xd) = CONCAT44(param_2 + 0xe,param_2 + 0xd);
  return;
}



/* Function: call_ret_large_struct @ 00101184 */

undefined8 call_ret_large_struct(void)

{
  return 0xd7;
}



/* Function: func_a @ 0010118c */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: func_b @ 00101194 */

int func_b(int param_1)

{
  return param_1 << 1;
}



/* Function: ret_func_ptr @ 0010119c */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  pcVar1 = func_a;
  if (param_1 != 0) {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 001011b8 */

undefined8 call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 001011c0 */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&ret_opaque_handle_handle1;
  if (param_1 != 0) {
    puVar1 = &ret_opaque_handle_handle2;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 001011d8 */

undefined4 call_ret_opaque(void)

{
  return ret_opaque_handle_handle1;
}



/* Function: ret_complex_expr @ 001011e4 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 << 1;
  if (param_1 <= param_2) {
    iVar1 = param_3 + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 001011f8 */

undefined8 call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00101200 */

int ret_multi_branch(uint param_1)

{
  int iVar1;
  
  iVar1 = param_1 * 10 + 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101218 */

undefined8 call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00101220 */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 0010122c */

undefined8 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00101234 */

int test_return_values(void)

{
  int iVar1;
  
  puts(&DAT_00101794);
  printf(&DAT_00101655,0x2a);
  printf(&DAT_00101671,0x14);
  printf(&DAT_0010168d,7);
  printf(&DAT_001016a8,0xd7);
  printf(&DAT_001016c5,10);
  printf(&DAT_001016e1,(ulong)ret_opaque_handle_handle1);
  printf(&DAT_001016fe,0x28);
  printf(&DAT_0010171a,0x3c);
  iVar1 = printf(&DAT_00101736,0x15);
  return iVar1;
}



/* Function: main @ 001012e0 */

undefined8 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  puts(&DAT_00101794);
  printf(&DAT_00101655,0x2a);
  printf(&DAT_00101671,0x14);
  printf(&DAT_0010168d,7);
  printf(&DAT_001016a8,0xd7);
  printf(&DAT_001016c5,10);
  printf(&DAT_001016e1,(ulong)ret_opaque_handle_handle1);
  printf(&DAT_001016fe,0x28);
  printf(&DAT_0010171a,0x3c);
  printf(&DAT_00101736,0x15);
  return 0;
}



/* Function: _fini @ 0010139c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 79 */
