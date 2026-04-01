/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/4/4_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: varargs_func.cold @ 001010c0 */

int varargs_func_cold(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  int in_EAX;
  int *piVar1;
  long in_FS_OFFSET;
  int *piStack0000000000000008;
  long in_stack_00000018;
  
  piVar1 = param_3;
  do {
    in_EAX = in_EAX + 1;
    param_5 = param_5 + *piVar1;
    piVar1 = piVar1 + 2;
  } while (in_EAX < param_1);
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5;
  }
  piStack0000000000000008 = param_3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: param_varargs.cold @ 001010db */

int param_varargs_cold(int param_1,undefined8 param_2,int *param_3,undefined8 param_4,int param_5)

{
  int in_EAX;
  int *piVar1;
  long in_FS_OFFSET;
  int *piStack0000000000000008;
  long in_stack_00000018;
  
  piVar1 = param_3;
  do {
    in_EAX = in_EAX + 1;
    param_5 = param_5 + *piVar1;
    piVar1 = piVar1 + 2;
  } while (in_EAX < param_1);
  if (in_stack_00000018 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_5;
  }
  piStack0000000000000008 = param_3;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: main @ 00101100 */

undefined8 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _start @ 00101130 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101160 */

/* WARNING: Removing unreachable block (ram,0x00101173) */
/* WARNING: Removing unreachable block (ram,0x0010117f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101190 */

/* WARNING: Removing unreachable block (ram,0x001011b4) */
/* WARNING: Removing unreachable block (ram,0x001011c0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011d0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: func_a @ 00101220 */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: param_varargs.constprop.0 @ 00101230 */

int param_varargs_constprop_0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3 + param_2 + param_4 + param_5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: varargs_func.constprop.0 @ 001012a0 */

int varargs_func_constprop_0
              (undefined8 param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_3 + param_2 + param_4 + param_5 + param_6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: func_b @ 00101320 */

int func_b(int param_1)

{
  return param_1 * 2;
}



/* Function: cdecl_func @ 00101330 */

int cdecl_func(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_cdecl @ 00101340 */

undefined8 call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 00101350 */

int stdcall_func(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: call_stdcall @ 00101360 */

undefined8 call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00101370 */

int fastcall_func(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 00101380 */

undefined8 call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00101390 */

undefined8 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 001013a0 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 001013b0 */

undefined8 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 001013c0 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 001013d0 */

undefined8 call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 001013e0 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 00101400 */

undefined8 call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 00101410 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00101420 */

undefined8 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00101430 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00101440 */

undefined8 call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00101450 */

undefined8 mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 00101460 */

int varargs_func(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_6;
  if (param_1 < 1) {
    iVar4 = 0;
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    uVar3 = 8;
    do {
      if (0x2f < (uint)uVar3) {
        iVar1 = iVar1 + 1;
        piVar2 = (int *)&stack0x00000010;
        iVar4 = iVar4 + param_7;
        if (param_1 != iVar1) {
          do {
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + *piVar2;
            piVar2 = piVar2 + 2;
          } while (iVar1 < param_1);
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + *(int *)((long)local_38 + uVar3);
      uVar3 = (ulong)((uint)uVar3 + 8);
    } while (param_1 != iVar1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: func_no_args @ 00101530 */

undefined8 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00101540 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00101560 */

int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)

{
  size_t sVar1;
  
  if (param_3 != (char *)0x0) {
    sVar1 = strlen(param_3);
    param_2 = param_2 + (int)sVar1;
  }
  return (int)((double)param_2 + param_1 + (double)param_4);
}



/* Function: func_struct_byval @ 001015c0 */

long func_struct_byval(void)

{
  long in_stack_00000008;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  long in_stack_00000048;
  long in_stack_00000050;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000068;
  long in_stack_00000070;
  long in_stack_00000078;
  long in_stack_00000080;
  
  return in_stack_00000008 + in_stack_00000018 + in_stack_00000028 + in_stack_00000038 +
         in_stack_00000048 + in_stack_00000058 + in_stack_00000068 + in_stack_00000078 +
         in_stack_00000010 + in_stack_00000020 + in_stack_00000030 + in_stack_00000040 +
         in_stack_00000050 + in_stack_00000060 + in_stack_00000070 + in_stack_00000080;
}



/* Function: func_struct_byptr @ 00101630 */

int func_struct_byptr(int *param_1)

{
  if (param_1 != (int *)0x0) {
    return *param_1 * param_1[1];
  }
  return -1;
}



/* Function: test_calling_conventions @ 00101650 */

void test_calling_conventions(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00102008);
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
  uVar1 = varargs_func_constprop_0(5,1,2,3,4,5);
  __printf_chk(1,&DAT_00102030,uVar1);
  __printf_chk(1,&DAT_00102058,0x2a);
  __printf_chk(1,&DAT_00102080,0x24);
  __printf_chk(1,&DAT_001020a8,0x75);
  __printf_chk(1,&DAT_001020d0,0x88);
  __printf_chk(1,&DAT_00102100,0x32);
  return;
}



/* Function: param_by_value_int @ 00101810 */

int param_by_value_int(int param_1)

{
  return param_1 * 2;
}



/* Function: call_by_value_int @ 00101820 */

undefined8 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00101830 */

undefined8 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00101840 */

undefined8 call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 00101850 */

undefined8 param_array_decay(void)

{
  return 8;
}



/* Function: call_array_decay @ 00101860 */

undefined8 call_array_decay(void)

{
  return 8;
}



/* Function: param_string @ 00101870 */

int param_string(char *param_1)

{
  return (int)*param_1 + (int)param_1[1];
}



/* Function: call_string_param @ 00101880 */

undefined8 call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00101890 */

int param_ptr_array(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  int iVar3;
  
  if (0 < param_2) {
    puVar1 = param_1 + (ulong)(param_2 - 1) + 1;
    iVar3 = 0;
    do {
      pcVar2 = (char *)*param_1;
      param_1 = param_1 + 1;
      iVar3 = iVar3 + *pcVar2;
    } while (puVar1 != param_1);
    return iVar3;
  }
  return 0;
}



/* Function: call_ptr_array @ 001018d0 */

undefined8 call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 001018e0 */

int param_varargs(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = param_2;
  local_28 = param_3;
  local_20 = param_4;
  local_18 = param_5;
  local_10 = param_6;
  if (param_1 < 1) {
    iVar4 = 0;
  }
  else {
    iVar1 = 0;
    iVar4 = 0;
    uVar3 = 8;
    do {
      if (0x2f < (uint)uVar3) {
        iVar1 = iVar1 + 1;
        piVar2 = (int *)&stack0x00000010;
        iVar4 = iVar4 + param_7;
        if (param_1 != iVar1) {
          do {
            iVar1 = iVar1 + 1;
            iVar4 = iVar4 + *piVar2;
            piVar2 = piVar2 + 2;
          } while (iVar1 < param_1);
        }
        break;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + *(int *)((long)local_38 + uVar3);
      uVar3 = (ulong)((uint)uVar3 + 8);
    } while (param_1 != iVar1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



/* Function: call_varargs_param @ 001019b0 */

void call_varargs_param(void)

{
  param_varargs_constprop_0(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 001019e0 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00101a00 */

undefined8 call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00101a10 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
  if ((param_1 != (long *)0x0) && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    return 1;
  }
  return 0xffffffff;
}



/* Function: call_double_ptr @ 00101a40 */

undefined8 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00101a50 */

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



/* Function: call_complex_cast @ 00101a80 */

undefined8 call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00101a90 */

int param_struct_byval(void)

{
  int in_stack_00000008;
  undefined8 in_stack_00000040;
  
  return in_stack_00000040._4_4_ + in_stack_00000008;
}



/* Function: call_struct_byval @ 00101aa0 */

undefined8 call_struct_byval(void)

{
  return 0xf;
}



/* Function: param_order_dep @ 00101ab0 */

int param_order_dep(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_order_dep @ 00101ac0 */

undefined8 call_order_dep(void)

{
  return 4;
}



/* Function: test_parameter_passing @ 00101ad0 */

void test_parameter_passing(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00102130);
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



/* Function: ret_basic_type @ 00101c10 */

int ret_basic_type(int param_1)

{
  return param_1 * 2;
}



/* Function: call_ret_basic @ 00101c20 */

undefined8 call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00101c30 */

long ret_pointer(long param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 00101c40 */

undefined8 call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00101c50 */

undefined8 ret_small_struct(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: call_ret_small_struct @ 00101c70 */

undefined8 call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00101c80 */

int * ret_large_struct(int *param_1,int param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
  param_1[0xe] = param_2 + 0xe;
  param_1[0xf] = param_2 + 0xf;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: call_ret_large_struct @ 00101d00 */

undefined8 call_ret_large_struct(void)

{
  return 0xd7;
}



/* Function: ret_func_ptr @ 00101d10 */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  pcVar1 = func_b;
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 00101d30 */

undefined8 call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00101d40 */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&handle1_1;
  if (param_1 != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00101d60 */

undefined4 call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00101d70 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_3 * 2;
  if (param_1 <= param_2) {
    iVar1 = param_3 + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101d80 */

undefined8 call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00101d90 */

int ret_multi_branch(uint param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 < 3) {
    iVar1 = (param_1 * 5 + 5) * 2;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101db0 */

undefined8 call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00101dc0 */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 00101dd0 */

undefined8 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00101de0 */

void test_return_values(void)

{
  puts(&DAT_001022ac);
  __printf_chk(1,&DAT_001022ca,0x2a);
  __printf_chk(1,&DAT_001022e6,0x14);
  __printf_chk(1,&DAT_00102302,7);
  __printf_chk(1,&DAT_0010231d,0xd7);
  __printf_chk(1,&DAT_0010233a,10);
  __printf_chk(1,&DAT_00102356,handle1_1);
  __printf_chk(1,&DAT_00102373,0x28);
  __printf_chk(1,&DAT_0010238f,0x3c);
  __printf_chk(1,&DAT_001023ab,0x15);
  return;
}



/* Function: _fini @ 00101ed4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 81 */
