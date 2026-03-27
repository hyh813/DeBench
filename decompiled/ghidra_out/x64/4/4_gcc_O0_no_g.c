/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_O0_no_g
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



/* Function: _start @ 001010c0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010f0 */

/* WARNING: Removing unreachable block (ram,0x00101103) */
/* WARNING: Removing unreachable block (ram,0x0010110f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101120 */

/* WARNING: Removing unreachable block (ram,0x00101144) */
/* WARNING: Removing unreachable block (ram,0x00101150) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101160 */

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



/* Function: cdecl_func @ 001011a9 */

int cdecl_func(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_cdecl @ 001011c1 */

void call_cdecl(void)

{
  cdecl_func(5,10);
  return;
}



/* Function: stdcall_func @ 001011da */

int stdcall_func(int param_1,int param_2)

{
  return param_1 * param_2;
}



/* Function: call_stdcall @ 001011f1 */

void call_stdcall(void)

{
  stdcall_func(5,10);
  return;
}



/* Function: fastcall_func @ 0010120a */

int fastcall_func(int param_1,int param_2,int param_3)

{
  return param_3 + param_1 + param_2;
}



/* Function: call_fastcall @ 0010122a */

void call_fastcall(void)

{
  fastcall_func(1,2,3);
  return;
}



/* Function: call_thiscall @ 00101248 */

undefined8 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00101257 */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_5 + param_1 + param_2 + param_3 + param_4;
}



/* Function: call_arm_aapcs @ 00101288 */

void call_arm_aapcs(void)

{
  arm_aapcs_func(1,2,3,4,5);
  return;
}



/* Function: mips_func @ 001012b1 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_4 + param_1 + param_2 + param_3;
}



/* Function: call_mips @ 001012d9 */

void call_mips(void)

{
  mips_func(10,0x14,0x1e,0x28);
  return;
}



/* Function: amd64_sysv_func @ 001012fc */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_6 + param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_amd64_sysv @ 00101336 */

void call_amd64_sysv(void)

{
  amd64_sysv_func(1,2,3,4,5,6);
  return;
}



/* Function: ms_x64_func @ 00101365 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_5 + param_1 + param_2 + param_3 + param_4;
}



/* Function: call_ms_x64 @ 00101396 */

void call_ms_x64(void)

{
  ms_x64_func(1,2,3,4,5);
  return;
}



/* Function: vectorcall_func @ 001013bf */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_4 + param_1 + param_2 + param_3;
}



/* Function: call_vectorcall @ 001013e7 */

void call_vectorcall(void)

{
  vectorcall_func(1,2,3,4);
  return;
}



/* Function: mixed_conventions_test @ 0010140a */

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



/* Function: varargs_func @ 0010145d */

int varargs_func(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int *piVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_e0;
  int local_dc;
  uint local_d8;
  int *local_d0;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_e0 = 0;
  local_d8 = 8;
  local_d0 = (int *)&stack0x00000008;
  for (local_dc = 0; local_dc < param_9; local_dc = local_dc + 1) {
    if (local_d8 < 0x30) {
      uVar2 = (ulong)local_d8;
      local_d8 = local_d8 + 8;
      piVar1 = (int *)((long)local_b8 + uVar2);
    }
    else {
      piVar1 = local_d0;
      local_d0 = local_d0 + 2;
    }
    local_e0 = local_e0 + *piVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
    local_b0 = param_10;
    local_a8 = param_11;
    local_a0 = param_12;
    local_98 = param_13;
    local_90 = param_14;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_e0;
}



/* Function: func_no_args @ 0010158a */

undefined8 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00101599 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_8 + param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7;
}



/* Function: func_mixed_args @ 001015dd */

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
  return (int)((double)param_4 + (double)(iVar1 + param_2) + param_1);
}



/* Function: func_struct_byval @ 00101643 */

long func_struct_byval(void)

{
  int local_14;
  long local_10;
  
  local_10 = 0;
  for (local_14 = 0; local_14 < 0x10; local_14 = local_14 + 1) {
    local_10 = local_10 + *(long *)(&stack0x00000008 + (long)local_14 * 8);
  }
  return local_10;
}



/* Function: func_struct_byptr @ 0010167a */

int func_struct_byptr(int *param_1)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = param_1[1] * *param_1;
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 001016a6 */

void test_calling_conventions(void)

{
  uint uVar1;
  long in_FS_OFFSET;
  int local_c4;
  undefined4 local_a0;
  undefined4 local_9c;
  long local_98 [17];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103008);
  uVar1 = call_cdecl();
  printf("CALL-L1-01: %d\n",(ulong)uVar1);
  uVar1 = call_stdcall();
  printf("CALL-L1-02: %d\n",(ulong)uVar1);
  uVar1 = call_fastcall();
  printf("CALL-L1-03: %d\n",(ulong)uVar1);
  uVar1 = call_thiscall();
  printf("CALL-L1-04: %d\n",(ulong)uVar1);
  uVar1 = call_arm_aapcs();
  printf("CALL-L1-05: %d\n",(ulong)uVar1);
  uVar1 = call_mips();
  printf("CALL-L1-06: %d\n",(ulong)uVar1);
  uVar1 = call_amd64_sysv();
  printf("CALL-L1-07: %d\n",(ulong)uVar1);
  uVar1 = call_ms_x64();
  printf("CALL-L1-08: %d\n",(ulong)uVar1);
  uVar1 = call_vectorcall();
  printf("CALL-L1-09: %d\n",(ulong)uVar1);
  uVar1 = mixed_conventions_test();
  printf("CALL-L1-10: %d\n",(ulong)uVar1);
  uVar1 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_001030d0,(ulong)uVar1);
  uVar1 = func_no_args();
  printf(&DAT_001030f8,(ulong)uVar1);
  uVar1 = func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_00103120,(ulong)uVar1);
  uVar1 = func_mixed_args(0x40091eb851eb851f,10,&DAT_00103147,100);
  printf(&DAT_00103150,(ulong)uVar1);
  for (local_c4 = 0; local_c4 < 0x10; local_c4 = local_c4 + 1) {
    local_98[local_c4] = (long)(local_c4 + 1);
  }
  uVar1 = func_struct_byval();
  printf(&DAT_00103178,(ulong)uVar1);
  local_a0 = 5;
  local_9c = 10;
  uVar1 = func_struct_byptr(&local_a0);
  printf(&DAT_001031a8,(ulong)uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_by_value_int @ 00101a1f */

int param_by_value_int(int param_1)

{
  return param_1 << 1;
}



/* Function: call_by_value_int @ 00101a32 */

int call_by_value_int(void)

{
  int iVar1;
  
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00101a5c */

undefined1 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 * 2;
  return 1;
}



/* Function: call_by_value_ptr @ 00101a8c */

int call_by_value_ptr(void)

{
  long in_FS_OFFSET;
  int local_20;
  int local_1c;
  int *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 5;
  local_18 = &local_20;
  local_1c = param_by_value_ptr(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1c + local_20;
}



/* Function: param_array_decay @ 00101ae3 */

undefined8 param_array_decay(void)

{
  return 8;
}



/* Function: call_array_decay @ 00101af9 */

void call_array_decay(void)

{
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  param_array_decay(&local_38,10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_string @ 00101b63 */

int param_string(char *param_1)

{
  return (int)param_1[1] + (int)*param_1;
}



/* Function: call_string_param @ 00101b8b */

void call_string_param(void)

{
  param_string("Hello");
  return;
}



/* Function: param_ptr_array @ 00101ba4 */

int param_ptr_array(long param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    local_10 = local_10 + **(char **)(param_1 + (long)local_c * 8);
  }
  return local_10;
}



/* Function: call_ptr_array @ 00101bf4 */

void call_ptr_array(void)

{
  long in_FS_OFFSET;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = &DAT_001031db;
  local_20 = &DAT_001031df;
  local_18 = &DAT_001031e3;
  param_ptr_array(&local_28,3);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_varargs @ 00101c57 */

int param_varargs(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 int param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  char in_AL;
  int *piVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  int local_e0;
  int local_dc;
  uint local_d8;
  int *local_d0;
  int local_b8 [2];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 local_18;
  
  if (in_AL != '\0') {
    local_88 = param_1;
    local_78 = param_2;
    local_68 = param_3;
    local_58 = param_4;
    local_48 = param_5;
    local_38 = param_6;
    local_28 = param_7;
    local_18 = param_8;
  }
  local_d8 = 8;
  local_d0 = (int *)&stack0x00000008;
  local_e0 = 0;
  for (local_dc = 0; local_dc < param_9; local_dc = local_dc + 1) {
    if (local_d8 < 0x30) {
      uVar2 = (ulong)local_d8;
      local_d8 = local_d8 + 8;
      piVar1 = (int *)((long)local_b8 + uVar2);
    }
    else {
      piVar1 = local_d0;
      local_d0 = local_d0 + 2;
    }
    local_e0 = local_e0 + *piVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
    local_b0 = param_10;
    local_a8 = param_11;
    local_a0 = param_12;
    local_98 = param_13;
    local_90 = param_14;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_e0;
}



/* Function: call_varargs_param @ 00101d84 */

void call_varargs_param(void)

{
  param_varargs(4,10,0x14,0x1e,0x28);
  return;
}



/* Function: param_func_ptr @ 00101db2 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: callback_func @ 00101dd5 */

int callback_func(int param_1)

{
  return param_1 * 2;
}



/* Function: call_func_ptr_param @ 00101de7 */

void call_func_ptr_param(void)

{
  param_func_ptr(callback_func,5);
  return;
}



/* Function: param_double_ptr @ 00101e05 */

undefined8 param_double_ptr(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: call_double_ptr @ 00101e4c */

int call_double_ptr(void)

{
  long in_FS_OFFSET;
  int local_20;
  undefined4 local_1c;
  int *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 10;
  local_18 = &local_20;
  local_1c = param_double_ptr(&local_18,0x14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_20 + (uint)(local_18 == (int *)0x0);
}



/* Function: param_complex_cast @ 00101eb2 */

int param_complex_cast(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else if (param_2 == 1) {
    iVar1 = param_1[1] + *param_1;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00101f0d */

void call_complex_cast(void)

{
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 0x12345678;
  local_18 = 100;
  local_14 = 200;
  param_complex_cast(&local_18,1);
  param_complex_cast(&local_1c,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_struct_byval @ 00101f75 */

int param_struct_byval(void)

{
  int in_stack_00000008;
  undefined8 in_stack_00000040;
  
  return in_stack_00000040._4_4_ + in_stack_00000008;
}



/* Function: call_struct_byval @ 00101f87 */

void call_struct_byval(void)

{
  long in_FS_OFFSET;
  int local_5c;
  int local_58 [18];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_5c = 0; local_5c < 0x10; local_5c = local_5c + 1) {
    local_58[local_5c] = local_5c;
  }
  param_struct_byval();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_order_dep @ 00101ff8 */

int param_order_dep(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_order_dep @ 00102010 */

void call_order_dep(void)

{
  param_order_dep(2,2);
  return;
}



/* Function: test_parameter_passing @ 0010203c */

void test_parameter_passing(void)

{
  uint uVar1;
  
  puts(&DAT_001031e8);
  uVar1 = call_by_value_int();
  printf("PARAM-L1-01: %d\n",(ulong)uVar1);
  uVar1 = call_by_value_ptr();
  printf("PARAM-L1-02: %d\n",(ulong)uVar1);
  uVar1 = call_array_decay();
  printf("PARAM-L2-01: %d\n",(ulong)uVar1);
  uVar1 = call_string_param();
  printf("PARAM-L2-02: %d\n",(ulong)uVar1);
  uVar1 = call_ptr_array();
  printf("PARAM-L2-03: %d\n",(ulong)uVar1);
  uVar1 = call_varargs_param();
  printf("PARAM-L2-04: %d\n",(ulong)uVar1);
  uVar1 = call_func_ptr_param();
  printf("PARAM-L3-01: %d\n",(ulong)uVar1);
  uVar1 = call_double_ptr();
  printf("PARAM-L3-02: %d\n",(ulong)uVar1);
  uVar1 = call_complex_cast();
  printf("PARAM-L3-03: %d\n",(ulong)uVar1);
  uVar1 = call_struct_byval();
  printf("PARAM-L3-04: %d\n",(ulong)uVar1);
  uVar1 = call_order_dep();
  printf("PARAM-L3-05: %d\n",(ulong)uVar1);
  return;
}



/* Function: ret_basic_type @ 001021b6 */

int ret_basic_type(int param_1)

{
  return param_1 * 2;
}



/* Function: call_ret_basic @ 001021c8 */

undefined4 call_ret_basic(void)

{
  undefined4 uVar1;
  
  uVar1 = ret_basic_type(0x15);
  return uVar1;
}



/* Function: ret_pointer @ 001021ed */

long ret_pointer(long param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 00102203 */

undefined4 call_ret_pointer(void)

{
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 10;
  local_18 = 0x14;
  local_14 = 0x1e;
  puVar1 = (undefined4 *)ret_pointer(&local_1c);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}



/* Function: ret_small_struct @ 0010225f */

undefined8 ret_small_struct(undefined4 param_1,undefined4 param_2)

{
  return CONCAT44(param_2,param_1);
}



/* Function: call_ret_small_struct @ 0010227f */

int call_ret_small_struct(void)

{
  undefined8 uVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uVar1 = ret_small_struct(3,4);
  local_10 = (int)uVar1;
  uStack_c = (int)((ulong)uVar1 >> 0x20);
  return uStack_c + local_10;
}



/* Function: ret_large_struct @ 001022a8 */

undefined8 * ret_large_struct(undefined8 *param_1,int param_2)

{
  long in_FS_OFFSET;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_6c = 0; local_6c < 0x10; local_6c = local_6c + 1) {
    *(int *)((long)&local_68 + (long)local_6c * 4) = param_2 + local_6c;
  }
  *param_1 = local_68;
  param_1[1] = local_60;
  param_1[2] = local_58;
  param_1[3] = local_50;
  param_1[4] = local_48;
  param_1[5] = local_40;
  param_1[6] = local_38;
  param_1[7] = local_30;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Function: call_ret_large_struct @ 00102350 */

int call_ret_large_struct(void)

{
  long in_FS_OFFSET;
  int local_58 [15];
  int local_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret_large_struct(local_58,100);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_1c + local_58[0];
}



/* Function: func_a @ 0010239a */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: func_b @ 001023ad */

int func_b(int param_1)

{
  return param_1 * 2;
}



/* Function: ret_func_ptr @ 001023bf */

code * ret_func_ptr(int param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    pcVar1 = func_a;
  }
  else {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 001023e2 */

void call_ret_func_ptr(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)ret_func_ptr(1);
  (*pcVar1)(5);
  return;
}



/* Function: ret_opaque_handle @ 00102409 */

undefined8 * ret_opaque_handle(int param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)&handle1_1;
  }
  else {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 0010242c */

undefined4 call_ret_opaque(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)ret_opaque_handle(0);
  return *puVar1;
}



/* Function: ret_complex_expr @ 0010244e */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  if (param_2 < param_1) {
    param_3 = param_3 * 2;
  }
  else {
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* Function: call_ret_complex_expr @ 00102476 */

int call_ret_complex_expr(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar2 + iVar1;
}



/* Function: ret_multi_branch @ 001024ba */

undefined8 ret_multi_branch(int param_1)

{
  if (param_1 == 2) {
    return 0x1e;
  }
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 10;
    }
    if (param_1 == 1) {
      return 0x14;
    }
  }
  return 0xffffffff;
}



/* Function: call_ret_multi_branch @ 001024fb */

int call_ret_multi_branch(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 0010253a */

void ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return;
}



/* Function: call_ret_void @ 0010255b */

undefined4 call_ret_void(void)

{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret_void(7,&local_14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14;
}



/* Function: test_return_values @ 001025a0 */

void test_return_values(void)

{
  uint uVar1;
  
  puts(&DAT_001032c4);
  uVar1 = call_ret_basic();
  printf(&DAT_001032e2,(ulong)uVar1);
  uVar1 = call_ret_pointer();
  printf(&DAT_001032fe,(ulong)uVar1);
  uVar1 = call_ret_small_struct();
  printf(&DAT_0010331a,(ulong)uVar1);
  uVar1 = call_ret_large_struct();
  printf(&DAT_00103335,(ulong)uVar1);
  uVar1 = call_ret_func_ptr();
  printf(&DAT_00103352,(ulong)uVar1);
  uVar1 = call_ret_opaque();
  printf(&DAT_0010336e,(ulong)uVar1);
  uVar1 = call_ret_complex_expr();
  printf(&DAT_0010338b,(ulong)uVar1);
  uVar1 = call_ret_multi_branch();
  printf(&DAT_001033a7,(ulong)uVar1);
  uVar1 = call_ret_void();
  printf(&DAT_001033c3,(ulong)uVar1);
  return;
}



/* Function: main @ 001026da */

undefined8 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _fini @ 00102708 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 78 */
