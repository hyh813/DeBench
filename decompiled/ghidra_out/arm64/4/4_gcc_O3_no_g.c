/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/4/4_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001006f0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100710 @ 00100710 */

void FUN_00100710(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 001007c0 */

undefined8 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _start @ 00100800 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100834 */

/* WARNING: Removing unreachable block (ram,0x00100844) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100850 */

/* WARNING: Removing unreachable block (ram,0x00100868) */
/* WARNING: Removing unreachable block (ram,0x00100874) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100880 */

/* WARNING: Removing unreachable block (ram,0x001008a4) */
/* WARNING: Removing unreachable block (ram,0x001008b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001008c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: func_a @ 00100920 */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: param_varargs.constprop.0 @ 00100930 */

/* WARNING: Removing unreachable block (ram,0x001009ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_varargs_constprop_0(void)

{
  return;
}



/* Function: varargs_func.constprop.0 @ 001009b0 */

/* WARNING: Removing unreachable block (ram,0x00100a38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void varargs_func_constprop_0(void)

{
  return;
}



/* Function: func_b @ 00100a40 */

int func_b(int param_1)

{
  return param_1 << 1;
}



/* Function: cdecl_func @ 00100a50 */

int cdecl_func(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_cdecl @ 00100a60 */

undefined8 call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 00100a70 */

int stdcall_func(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: call_stdcall @ 00100a80 */

undefined8 call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00100a90 */

int fastcall_func(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00100aa0 */

undefined8 call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00100ab0 */

undefined8 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00100ac0 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 00100ad4 */

undefined8 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00100ae0 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 00100af0 */

undefined8 call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00100b00 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00100b20 */

undefined8 call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 00100b30 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100b44 */

undefined8 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00100b50 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100b60 */

undefined8 call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00100b70 */

undefined8 mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 00100b80 */

/* WARNING: Removing unreachable block (ram,0x00100c7c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void varargs_func(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x38;
  if (0 < param_1) {
    iVar1 = 0;
    do {
      if (-1 < iVar2) {
        iVar1 = iVar1 + 1;
        if (param_1 == iVar1) {
          return;
        }
        do {
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1);
        return;
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
  }
  return;
}



/* Function: func_no_args @ 00100c80 */

undefined8 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00100c90 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00100cb0 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
  size_t sVar1;
  
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    param_2 = param_2 + (int)sVar1;
  }
  return (int)((double)param_2 + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 00100d00 */

long func_struct_byval(long *param_1)

{
  return param_1[0xe] +
         param_1[0xc] + param_1[10] + param_1[8] + param_1[6] + param_1[4] + *param_1 + param_1[2] +
         param_1[0xf] +
         param_1[0xd] +
         param_1[0xb] + param_1[9] + param_1[7] + param_1[5] + param_1[1] + param_1[3];
}



/* Function: func_struct_byptr @ 00100d40 */

int func_struct_byptr(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *param_1 * param_1[1];
  }
  return -1;
}



/* Function: test_calling_conventions @ 00100d60 */

void test_calling_conventions(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00101598);
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
  uVar1 = varargs_func_constprop_0(5,1,2,3,4);
  __printf_chk(1,&DAT_00101660,uVar1);
  __printf_chk(1,&DAT_00101688,0x2a);
  __printf_chk(1,&DAT_001016b0,0x24);
  __printf_chk(1,&DAT_001016d8,0x75);
  __printf_chk(1,&DAT_00101700,0x88);
  __printf_chk(1,&DAT_00101730,0x32);
  return;
}



/* Function: param_by_value_int @ 00100ed4 */

int param_by_value_int(int param_1)

{
  return param_1 << 1;
}



/* Function: call_by_value_int @ 00100ee0 */

undefined8 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00100ef0 */

undefined8 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00100f10 */

undefined8 call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 00100f20 */

undefined8 param_array_decay(void)

{
  return 8;
}



/* Function: call_array_decay @ 00100f30 */

undefined8 call_array_decay(void)

{
  return 8;
}



/* Function: param_string @ 00100f40 */

int param_string(byte *param_1)

{
  return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00100f50 */

undefined8 call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00100f60 */

int param_ptr_array(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (0 < param_2) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      lVar1 = lVar3 * 8;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + (uint)**(byte **)(param_1 + lVar1);
    } while ((int)lVar3 < param_2);
    return iVar2;
  }
  return 0;
}



/* Function: call_ptr_array @ 00100fa0 */

undefined8 call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 00100fb0 */

/* WARNING: Removing unreachable block (ram,0x001010ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void param_varargs(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = -0x38;
  if (0 < param_1) {
    iVar1 = 0;
    do {
      if (-1 < iVar2) {
        iVar1 = iVar1 + 1;
        if (param_1 == iVar1) {
          return;
        }
        do {
          iVar1 = iVar1 + 1;
        } while (iVar1 < param_1);
        return;
      }
      iVar2 = iVar2 + 8;
      iVar1 = iVar1 + 1;
    } while (param_1 != iVar1);
  }
  return;
}



/* Function: call_varargs_param @ 001010b0 */

void call_varargs_param(void)

{
  param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 001010d0 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001010f0 */

undefined8 call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00101100 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
  if ((param_1 != (long *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}



/* Function: call_double_ptr @ 00101130 */

undefined8 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00101140 */

int param_complex_cast(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return *param_1 + param_1[1];
  }
  return -1;
}



/* Function: call_complex_cast @ 00101170 */

undefined8 call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00101180 */

int param_struct_byval(int *param_1)

{
  return *param_1 + param_1[0xf];
}



/* Function: call_struct_byval @ 00101190 */

undefined8 call_struct_byval(void)

{
  return 0xf;
}



/* Function: param_order_dep @ 001011a0 */

int param_order_dep(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_order_dep @ 001011b0 */

undefined8 call_order_dep(void)

{
  return 4;
}



/* Function: test_parameter_passing @ 001011c0 */

void test_parameter_passing(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00101760);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  __printf_chk(1,"PARAM-L2-03: %d\n",300);
  uVar1 = param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
  __printf_chk(1,"PARAM-L2-04: %d\n",uVar1);
  __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
  __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
  __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
  __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}



/* Function: ret_basic_type @ 001012d0 */

int ret_basic_type(int param_1)

{
  return param_1 << 1;
}



/* Function: call_ret_basic @ 001012e0 */

undefined8 call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 001012f0 */

long ret_pointer(long param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101300 */

undefined8 call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00101310 */

ulong ret_small_struct(ulong param_1,long param_2)

{
  return param_1 & 0xffffffff | param_2 << 0x20;
}



/* Function: call_ret_small_struct @ 00101320 */

undefined8 call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00101330 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(undefined8 *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  param_1[1] = CONCAT44(param_2 + 3,param_2 + 2);
  *param_1 = CONCAT44(param_2 + 1,param_2);
  param_1[3] = CONCAT44(param_2 + 7,param_2 + 6);
  param_1[2] = CONCAT44(param_2 + 5,param_2 + 4);
  param_1[5] = CONCAT44(param_2 + 0xb,param_2 + 10);
  param_1[4] = CONCAT44(param_2 + 9,param_2 + 8);
  param_1[7] = CONCAT44(param_2 + 0xf,param_2 + 0xe);
  param_1[6] = CONCAT44(param_2 + 0xd,param_2 + 0xc);
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1 - ___stack_chk_guard,0);
}



/* Function: call_ret_large_struct @ 001013c4 */

undefined8 call_ret_large_struct(void)

{
  return 0xd7;
}



/* Function: ret_func_ptr @ 001013d0 */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 001013f0 */

undefined8 call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00101400 */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00101420 */

undefined4 call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00101430 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 + 10;
  if (param_2 < param_1) {
    iVar1 = param_3 << 1;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101444 */

undefined8 call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00101450 */

int ret_multi_branch(uint param_1)

{
  int iVar1;
  
  iVar1 = (param_1 + 1) * 10;
  if (2 < param_1) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101470 */

undefined8 call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00101480 */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 00101490 */

undefined8 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 001014a0 */

void test_return_values(void)

{
  puts(&DAT_00101890);
  __printf_chk(1,&DAT_001018b0,0x2a);
  __printf_chk(1,&DAT_001018d0,0x14);
  __printf_chk(1,&DAT_001018f0,7);
  __printf_chk(1,&DAT_00101910,0xd7);
  __printf_chk(1,&DAT_00101930,10);
  __printf_chk(1,&DAT_00101950,handle1_1);
  __printf_chk(1,&DAT_00101970,0x28);
  __printf_chk(1,&DAT_00101990,0x3c);
  __printf_chk(1,&DAT_001019b0,0x15);
  return;
}



/* Function: _fini @ 00101570 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 81 */
