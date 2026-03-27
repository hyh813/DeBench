/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/4/4_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000103fc */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010488 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000104cc */

/* WARNING: Removing unreachable block (ram,0x000104e0) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000104f0 */

/* WARNING: Removing unreachable block (ram,0x00010500) */
/* WARNING: Removing unreachable block (ram,0x00010508) */
/* WARNING: Removing unreachable block (ram,0x0001050c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 0001051c */

/* WARNING: Removing unreachable block (ram,0x00010538) */
/* WARNING: Removing unreachable block (ram,0x00010540) */
/* WARNING: Removing unreachable block (ram,0x00010544) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010554 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: cdecl_func @ 00010580 */

int cdecl_func(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_cdecl @ 000105b0 */

undefined4 call_cdecl(void)

{
  undefined4 uVar1;
  
  uVar1 = cdecl_func(5,10);
  return uVar1;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int param_1,int param_2)

{
  return param_2 * param_1;
}



/* Function: call_stdcall @ 00010600 */

undefined4 call_stdcall(void)

{
  undefined4 uVar1;
  
  uVar1 = stdcall_func(5,10);
  return uVar1;
}



/* Function: fastcall_func @ 00010620 */

int fastcall_func(int param_1,int param_2,int param_3)

{
  return param_1 + param_2 + param_3;
}



/* Function: call_fastcall @ 0001065c */

undefined4 call_fastcall(void)

{
  undefined4 uVar1;
  
  uVar1 = fastcall_func(1,2,3);
  return uVar1;
}



/* Function: call_thiscall @ 00010680 */

undefined4 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 0001069c */

int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_arm_aapcs @ 000106ec */

undefined4 call_arm_aapcs(void)

{
  undefined4 uVar1;
  
  uVar1 = arm_aapcs_func(1,2,3,4,5);
  return uVar1;
}



/* Function: mips_func @ 00010724 */

int mips_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_mips @ 0001076c */

undefined4 call_mips(void)

{
  undefined4 uVar1;
  
  uVar1 = mips_func(10,0x14,0x1e,0x28);
  return uVar1;
}



/* Function: amd64_sysv_func @ 00010794 */

int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}



/* Function: call_amd64_sysv @ 000107ec */

undefined4 call_amd64_sysv(void)

{
  undefined4 uVar1;
  
  uVar1 = amd64_sysv_func(1,2,3,4,5,6);
  return uVar1;
}



/* Function: ms_x64_func @ 0001082c */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 0001087c */

undefined4 call_ms_x64(void)

{
  undefined4 uVar1;
  
  uVar1 = ms_x64_func(1,2,3,4,5);
  return uVar1;
}



/* Function: vectorcall_func @ 000108b4 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 000108fc */

undefined4 call_vectorcall(void)

{
  undefined4 uVar1;
  
  uVar1 = vectorcall_func(1,2,3,4);
  return uVar1;
}



/* Function: mixed_conventions_test @ 00010924 */

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



/* Function: varargs_func @ 000109a0 */

/* WARNING: Removing unreachable block (ram,0x00010a30) */

int varargs_func(int param_1)

{
  int *local_28;
  int local_24;
  int local_20;
  int local_c [3];
  
  local_24 = 0;
  local_28 = local_c;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    local_24 = local_24 + *local_28;
    local_28 = local_28 + 1;
  }
  return local_24;
}



/* Function: func_no_args @ 00010a4c */

undefined4 func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00010a68 */

int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7,int param_8)

{
  return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}



/* Function: func_mixed_args @ 00010ad0 */

undefined4
func_mixed_args(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6)

{
  size_t sVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(param_2);
  }
  uVar3 = __floatsidf(param_1 + sVar1);
  uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),param_3,param_4);
  uVar4 = __aeabi_l2d(param_5,param_6);
  uVar3 = __aeabi_dadd((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                       (int)((ulonglong)uVar4 >> 0x20));
  uVar2 = __aeabi_d2iz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return uVar2;
}



/* Function: func_struct_byval @ 00010b80 */

int func_struct_byval(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int local_2c;
  int local_28;
  int local_10 [4];
  
  local_10[0] = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  local_10[3] = param_4;
  local_28 = 0;
  for (local_2c = 0; local_2c < 0x10; local_2c = local_2c + 1) {
    local_28 = local_28 + local_10[local_2c * 2];
  }
  return local_28;
}



/* Function: func_struct_byptr @ 00010c10 */

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



/* Function: test_calling_conventions @ 00010c58 */

void test_calling_conventions(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined *local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  int local_98 [4];
  undefined1 auStack_88 [116];
  int local_14;
  
  local_14 = 0;
  puts(&DAT_00012400);
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
  local_12c = 5;
  local_130 = 4;
  local_bc = varargs_func(5,1,2,3);
  printf(&DAT_000124c4,local_bc);
  local_b8 = func_no_args();
  printf(&DAT_000124ec,local_b8);
  local_124 = 8;
  local_128 = 7;
  local_12c = 6;
  local_130 = 5;
  local_b4 = func_many_args(1,2,3,4);
  printf(&DAT_00012510,local_b4);
  local_b0 = &DAT_00012538;
  local_130 = 100;
  local_12c = 0;
  local_ac = func_mixed_args(10,&DAT_00012538,0x51eb851f,0x40091eb8);
  printf(&DAT_00012540,local_ac);
  for (local_c0 = 0; local_c0 < 0x10; local_c0 = local_c0 + 1) {
    local_98[local_c0 * 2] = local_c0 + 1;
    local_98[local_c0 * 2 + 1] = local_c0 + 1 >> 0x1f;
  }
  memcpy(&local_130,auStack_88,0x70);
  local_a8 = func_struct_byval(local_98[0],local_98[1],local_98[2],local_98[3]);
  printf(&DAT_00012568,local_a8);
  local_a0 = 5;
  uStack_9c = 10;
  local_a4 = func_struct_byptr(&local_a0);
  iVar2 = printf(&DAT_00012594,local_a4);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
}



/* Function: param_by_value_int @ 00010f34 */

int param_by_value_int(int param_1)

{
  return param_1 << 1;
}



/* Function: call_by_value_int @ 00010f64 */

int call_by_value_int(void)

{
  int iVar1;
  
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00010f9c */

/* WARNING: Removing unreachable block (ram,0x00010fd4) */

undefined1 param_by_value_ptr(int *param_1)

{
  *param_1 = *param_1 << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00010fec */

int call_by_value_ptr(void)

{
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  local_18 = 5;
  local_14 = &local_18;
  local_10 = param_by_value_ptr(local_14);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_10,local_c,0);
  }
  return local_18 + local_10;
}



/* Function: param_array_decay @ 0001105c */

undefined4 param_array_decay(void)

{
  return 4;
}



/* Function: call_array_decay @ 00011084 */

undefined4 call_array_decay(void)

{
  undefined4 uVar1;
  undefined1 auStack_34 [40];
  int local_c;
  
  local_c = 0;
  memset(auStack_34,0,0x28);
  uVar1 = param_array_decay(auStack_34,10);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}



/* Function: param_string @ 000110f4 */

int param_string(byte *param_1)

{
  return (uint)*param_1 + (uint)param_1[1];
}



/* Function: call_string_param @ 00011130 */

undefined4 call_string_param(void)

{
  undefined4 uVar1;
  
  uVar1 = param_string("Hello");
  return uVar1;
}



/* Function: param_ptr_array @ 00011150 */

int param_ptr_array(int param_1,int param_2)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    local_10 = local_10 + (uint)**(byte **)(param_1 + local_c * 4);
  }
  return local_10;
}



/* Function: call_ptr_array @ 000111d0 */

undefined4 call_ptr_array(void)

{
  undefined4 uVar1;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined *puStack_10;
  int local_c;
  
  local_c = 0;
  puStack_18 = &DAT_000125d4;
  puStack_14 = &DAT_000125d8;
  puStack_10 = &DAT_000125dc;
  uVar1 = param_ptr_array(&puStack_18,3);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}



/* Function: param_varargs @ 00011240 */

/* WARNING: Removing unreachable block (ram,0x000112d0) */

int param_varargs(int param_1)

{
  int *local_28;
  int local_24;
  int local_20;
  int local_c [3];
  
  local_24 = 0;
  local_28 = local_c;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    local_24 = local_24 + *local_28;
    local_28 = local_28 + 1;
  }
  return local_24;
}



/* Function: call_varargs_param @ 000112ec */

undefined4 call_varargs_param(void)

{
  undefined4 uVar1;
  
  uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return uVar1;
}



/* Function: param_func_ptr @ 00011324 */

int param_func_ptr(code *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*param_1)(param_2);
  return iVar1 + 10;
}



/* Function: callback_func @ 00011358 */

int callback_func(int param_1)

{
  return param_1 << 1;
}



/* Function: call_func_ptr_param @ 00011380 */

undefined4 call_func_ptr_param(void)

{
  undefined4 uVar1;
  
  uVar1 = param_func_ptr(callback_func,5);
  return uVar1;
}



/* Function: param_double_ptr @ 000113a4 */

undefined4 param_double_ptr(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = param_2;
    *param_1 = 0;
    uVar1 = 1;
  }
  return uVar1;
}



/* Function: call_double_ptr @ 0001140c */

int call_double_ptr(void)

{
  int local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  local_18 = 10;
  local_14 = &local_18;
  local_10 = param_double_ptr(&local_14,0x14);
  if (local_c == 0) {
    return (uint)(local_14 == (int *)0x0) + local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10,local_c,0);
}



/* Function: param_complex_cast @ 00011498 */

int param_complex_cast(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = *param_1;
  }
  else if (param_2 == 1) {
    iVar1 = *param_1 + param_1[1];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_complex_cast @ 0001151c */

undefined4 call_complex_cast(void)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = 0;
  local_18 = 0x12345678;
  local_14 = 100;
  uStack_10 = 200;
  param_complex_cast(&local_14,1);
  uVar1 = param_complex_cast(&local_18,0);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}



/* Function: param_struct_byval @ 000115a8 */

int param_struct_byval(int param_1)

{
  int in_stack_0000002c;
  
  return param_1 + in_stack_0000002c;
}



/* Function: call_struct_byval @ 000115dc */

undefined4 call_struct_byval(void)

{
  undefined4 uVar1;
  int local_50;
  int local_4c [16];
  int local_c;
  
  local_c = 0;
  for (local_50 = 0; local_50 < 0x10; local_50 = local_50 + 1) {
    local_4c[local_50] = local_50;
  }
  uVar1 = param_struct_byval(local_4c[0],local_4c[1],local_4c[2],local_4c[3],local_4c[4],local_4c[5]
                             ,local_4c[6],local_4c[7],local_4c[8],local_4c[9],local_4c[10],
                             local_4c[0xb],local_4c[0xc],local_4c[0xd],local_4c[0xe],local_4c[0xf]);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return uVar1;
}



/* Function: param_order_dep @ 00011690 */

int param_order_dep(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_order_dep @ 000116c0 */

undefined4 call_order_dep(void)

{
  undefined4 uVar1;
  
  uVar1 = param_order_dep(2,2);
  return uVar1;
}



/* Function: test_parameter_passing @ 00011708 */

int test_parameter_passing(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_000125f4);
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
  iVar2 = printf("PARAM-L3-05: %d\n",uVar1);
  return iVar2;
}



/* Function: ret_basic_type @ 0001182c */

int ret_basic_type(int param_1)

{
  return param_1 << 1;
}



/* Function: call_ret_basic @ 00011854 */

undefined4 call_ret_basic(void)

{
  undefined4 uVar1;
  
  uVar1 = ret_basic_type(0x15);
  return uVar1;
}



/* Function: ret_pointer @ 00011884 */

int ret_pointer(int param_1)

{
  return param_1 + 4;
}



/* Function: call_ret_pointer @ 000118ac */

undefined4 call_ret_pointer(void)

{
  undefined4 *puVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  
  local_c = 0;
  local_18 = 10;
  uStack_14 = 0x14;
  uStack_10 = 0x1e;
  puVar1 = (undefined4 *)ret_pointer(&local_18);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar1,local_c,0);
  }
  return *puVar1;
}



/* Function: ret_small_struct @ 00011920 */

undefined4 * ret_small_struct(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



/* Function: call_ret_small_struct @ 0001196c */

int call_ret_small_struct(void)

{
  undefined4 uVar1;
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  uVar1 = ret_small_struct(&local_14,3,4);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_14 + local_10;
}



/* Function: ret_large_struct @ 000119d4 */

/* WARNING: Removing unreachable block (ram,0x00011a80) */

int * ret_large_struct(int *param_1,int param_2)

{
  int local_50;
  int local_4c [17];
  
  for (local_50 = 0; local_50 < 0x10; local_50 = local_50 + 1) {
    local_4c[local_50] = param_2 + local_50;
  }
  *param_1 = local_4c[0];
  param_1[1] = local_4c[1];
  param_1[2] = local_4c[2];
  param_1[3] = local_4c[3];
  param_1[4] = local_4c[4];
  param_1[5] = local_4c[5];
  param_1[6] = local_4c[6];
  param_1[7] = local_4c[7];
  param_1[8] = local_4c[8];
  param_1[9] = local_4c[9];
  param_1[10] = local_4c[10];
  param_1[0xb] = local_4c[0xb];
  param_1[0xc] = local_4c[0xc];
  param_1[0xd] = local_4c[0xd];
  param_1[0xe] = local_4c[0xe];
  param_1[0xf] = local_4c[0xf];
  return param_1;
}



/* Function: call_ret_large_struct @ 00011a94 */

int call_ret_large_struct(void)

{
  undefined4 uVar1;
  int local_4c [15];
  int local_10;
  int local_c;
  
  local_c = 0;
  uVar1 = ret_large_struct(local_4c,100);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_4c[0] + local_10;
}



/* Function: func_a @ 00011af8 */

int func_a(int param_1)

{
  return param_1 + 10;
}



/* Function: func_b @ 00011b20 */

int func_b(int param_1)

{
  return param_1 << 1;
}



/* Function: ret_func_ptr @ 00011b48 */

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



/* Function: call_ret_func_ptr @ 00011b88 */

undefined4 call_ret_func_ptr(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (code *)ret_func_ptr(1);
  uVar2 = (*pcVar1)(5);
  return uVar2;
}



/* Function: ret_opaque_handle @ 00011bbc */

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



/* Function: call_ret_opaque @ 00011bfc */

undefined4 call_ret_opaque(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)ret_opaque_handle(0);
  return *puVar1;
}



/* Function: ret_complex_expr @ 00011c28 */

int ret_complex_expr(int param_1,int param_2,int param_3)

{
  if (param_2 < param_1) {
    param_3 = param_3 << 1;
  }
  else {
    param_3 = param_3 + 10;
  }
  return param_3;
}



/* Function: call_ret_complex_expr @ 00011c74 */

int call_ret_complex_expr(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00011cc0 */

undefined4 ret_multi_branch(int param_1)

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



/* Function: call_ret_multi_branch @ 00011d30 */

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



/* Function: ret_void @ 00011d9c */

int ret_void(int param_1,int *param_2)

{
  *param_2 = param_1 * 3;
  return param_1;
}



/* Function: call_ret_void @ 00011dd8 */

undefined4 call_ret_void(void)

{
  undefined4 uVar1;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  uVar1 = ret_void(7,&local_10);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_c,0);
  }
  return local_10;
}



/* Function: test_return_values @ 00011e34 */

int test_return_values(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_00012700);
  uVar1 = call_ret_basic();
  printf(&DAT_00012720,uVar1);
  uVar1 = call_ret_pointer();
  printf(&DAT_0001273c,uVar1);
  uVar1 = call_ret_small_struct();
  printf(&DAT_00012758,uVar1);
  uVar1 = call_ret_large_struct();
  printf(&DAT_00012774,uVar1);
  uVar1 = call_ret_func_ptr();
  printf(&DAT_00012794,uVar1);
  uVar1 = call_ret_opaque();
  printf(&DAT_000127b0,uVar1);
  uVar1 = call_ret_complex_expr();
  printf(&DAT_000127d0,uVar1);
  uVar1 = call_ret_multi_branch();
  printf(&DAT_000127ec,uVar1);
  uVar1 = call_ret_void();
  iVar2 = printf(&DAT_00012808,uVar1);
  return iVar2;
}



/* Function: main @ 00011f28 */

undefined4 main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __aeabi_drsub @ 00011f48 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}



/* Function: __subdf3 @ 00011f50 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
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
  
  uVar8 = param_4 ^ 0x80000000;
  uVar11 = param_2 << 1;
  param_4 = param_4 << 1;
  iVar10 = (int)uVar11 >> 0x15;
  iVar1 = (int)param_4 >> 0x15;
  if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
       param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
    if (iVar10 == -1 || iVar1 == -1) {
      uVar11 = param_3;
      uVar12 = uVar8;
      if (iVar10 == -1) {
        uVar11 = param_1;
        uVar12 = param_2;
      }
      if (iVar10 != -1 || iVar1 != -1) {
        param_3 = uVar11;
        uVar8 = uVar12;
      }
      bVar14 = (uVar12 & 0xfffff) == 0;
      bVar15 = uVar11 == 0 && bVar14;
      if (uVar11 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar12 != uVar8) {
        uVar12 = uVar12 | 0x80000;
      }
      return CONCAT44(uVar12,uVar11);
    }
    if (uVar11 != param_4 || param_1 != param_3) {
      if (uVar11 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = uVar8;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar8) {
      return 0;
    }
    if (uVar11 >> 0x15 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar11 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar11 = uVar11 | 0x80000000;
      }
      return CONCAT44(uVar11,param_1 << 1);
    }
    if (uVar11 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_000121c4:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar11 = uVar11 >> 0x15;
  param_4 = param_4 >> 0x15;
  uVar12 = param_4 - uVar11;
  bVar14 = uVar12 != 0;
  if (param_4 < uVar11) {
    uVar12 = -uVar12;
  }
  uVar6 = param_1;
  uVar9 = param_2;
  if (bVar14 && uVar11 <= param_4) {
    uVar11 = uVar11 + uVar12;
    uVar6 = param_3;
    uVar9 = uVar8;
    param_3 = param_1;
    uVar8 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar9,uVar6);
  }
  uVar5 = uVar9 & 0xfffff | 0x100000;
  if ((uVar9 & 0x80000000) != 0) {
    bVar14 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar14);
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
      uVar5 = uVar5 ^ 0x100000;
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
    uVar4 = uVar6 + param_3;
    uVar7 = uVar9 << (uVar8 & 0xff);
    uVar8 = uVar4 + uVar7;
    uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
             (uint)CARRY4(uVar4,uVar7);
  }
  else {
    uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
    uVar8 = uVar6 + uVar12;
    uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
  }
  param_2 = uVar12 & 0x80000000;
  uVar6 = uVar12;
  if ((int)uVar12 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar6 = -uVar8;
    uVar8 = -(uVar8 + !bVar14);
    uVar6 = -(uVar12 + (bVar14 <= uVar6));
  }
  if (0xfffff < uVar6) {
    uVar9 = uVar11 - 1;
    if (0x1fffff < uVar6) {
      bVar2 = (byte)uVar6;
      uVar6 = uVar6 >> 1;
      bVar3 = (byte)uVar8;
      uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar9 = uVar11;
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_000121c4;
    }
LAB_0001206c:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar8 & 1);
    }
    return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
                    uVar8 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar9 = uVar8 * 2;
  bVar14 = CARRY4(uVar8,uVar8);
  uVar8 = uVar8 * 2 + (uint)bVar2;
  uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
  uVar9 = uVar11 - 2;
  if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_0001206c;
  uVar11 = uVar8;
  uVar5 = uVar6;
  if (uVar6 == 0) {
    uVar11 = 0;
    uVar5 = uVar8;
  }
  iVar10 = LZCOUNT(uVar5);
  if (uVar6 == 0) {
    iVar10 = iVar10 + 0x20;
  }
  uVar4 = iVar10 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar7 = iVar10 - 0x2b;
  bVar14 = uVar7 == 0;
  uVar8 = uVar7;
  uVar6 = uVar7;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar7,0xc);
    uVar6 = iVar10 - 0x1f;
    bVar14 = uVar6 == 0;
    uVar8 = uVar4;
    if (!bVar14 && -0xd < (int)uVar7) {
      uVar11 = uVar5 << (uVar4 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar14 || (int)uVar6 < 0 != bVar15) {
    uVar13 = 0x20 - uVar8;
  }
  uVar5 = uVar5 << (uVar8 & 0xff);
  if (bVar14 || (int)uVar6 < 0 != bVar15) {
    uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
    uVar11 = uVar11 << (uVar8 & 0xff);
  }
LAB_000120ec:
  if ((int)uVar4 <= (int)uVar9) {
    return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
  }
  uVar8 = ~(uVar9 - uVar4);
  if ((int)uVar8 < 0x1f) {
    if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
      uVar8 = 0xc - (uVar8 - 0x13);
      return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
                    uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
  }
  return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_dadd @ 00011f54 */

ulonglong __aeabi_dadd(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
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
  
  uVar9 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar8 = (int)uVar9 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_3;
      uVar5 = param_4;
      if (iVar8 == -1) {
        uVar9 = param_1;
        uVar5 = param_2;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar9;
        param_4 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar9 == 0 && bVar14;
      if (uVar9 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != param_4) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar9);
    }
    if (uVar9 != uVar5 || param_1 != param_3) {
      if (uVar9 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if (uVar9 >> 0x15 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_000121c4:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 >> 0x15;
  uVar5 = uVar5 >> 0x15;
  uVar11 = uVar5 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar5 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar5) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar5 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar5 = -(uVar5 + bVar14);
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
      uVar5 = uVar5 ^ 0x100000;
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
    uVar4 = uVar10 + param_3;
    uVar6 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar5 & 0x80000000;
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar5 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar2 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar3 = (byte)uVar13;
      uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_000121c4;
    }
LAB_0001206c:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar2 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar2;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_0001206c;
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
  uVar4 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar11 = uVar6;
  uVar13 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar13 = iVar8 - 0x1f;
    bVar14 = uVar13 == 0;
    uVar11 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar9 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar12 = 0x20 - uVar11;
  }
  uVar7 = uVar7 << (uVar11 & 0xff);
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_000120ec:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar4);
  if ((int)uVar11 < 0x1f) {
    if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
      uVar11 = 0xc - (uVar11 - 0x13);
      return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 00012200 */

ulonglong __aeabi_ui2d(uint param_1)

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
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(param_1);
  uVar5 = iVar4 + 0x15;
  bVar8 = SBORROW4(uVar5,0x20);
  uVar2 = iVar4 - 0xb;
  bVar7 = uVar2 == 0;
  uVar6 = uVar2;
  uVar3 = uVar2;
  if (uVar5 < 0x20) {
    bVar8 = SCARRY4(uVar2,0xc);
    uVar3 = iVar4 + 1;
    bVar7 = uVar3 == 0;
    uVar6 = uVar5;
    if (!bVar7 && -0xd < (int)uVar2) {
      uVar1 = param_1 << uVar5;
      param_1 = param_1 >> (0xc - uVar3 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    in_r12 = 0x20 - uVar6;
  }
  param_1 = param_1 << (uVar6 & 0xff);
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar6 & 0xff);
  }
LAB_000120ec:
  if (uVar5 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
  }
  uVar6 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar6) {
    return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
  }
  if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
    uVar6 = uVar6 + 1;
    return CONCAT44(param_1 >> (uVar6 & 0xff),
                    uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
  }
  uVar6 = 0xc - (uVar6 - 0x13);
  return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 00012224 */

ulonglong __floatsidf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar5 = LZCOUNT(uVar2);
  uVar6 = iVar5 + 0x15;
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0xb;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if (uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = iVar5 + 1;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << uVar6;
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_000120ec:
  if (uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 0001224c */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_r12;
  bool bVar10;
  bool bVar11;
  
  uVar2 = param_1 << 1;
  bVar10 = uVar2 == 0;
  uVar9 = param_1 & 0x80000000;
  uVar8 = (uint)((int)uVar2 >> 3) >> 1;
  uVar1 = uVar9 | uVar8;
  param_1 = param_1 << 0x1d;
  if (!bVar10) {
    param_4 = uVar2 & 0xff000000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff000000;
  }
  if (!bVar10) {
    return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
  }
  if ((uVar2 & 0xffffff) == 0) {
    return CONCAT44(uVar1,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar1,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar3 = uVar8;
  if (uVar8 == 0) {
    uVar2 = 0;
    uVar3 = param_1;
  }
  iVar6 = LZCOUNT(uVar3);
  if (uVar8 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar10 = uVar4 == 0;
  uVar8 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar4,0xc);
    uVar5 = iVar6 - 0x1f;
    bVar10 = uVar5 == 0;
    uVar8 = uVar7;
    if (!bVar10 && -0xd < (int)uVar4) {
      uVar2 = uVar3 << (uVar7 & 0xff);
      uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    in_r12 = 0x20 - uVar8;
  }
  uVar3 = uVar3 << (uVar8 & 0xff);
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
    uVar2 = uVar2 << (uVar8 & 0xff);
  }
LAB_000120ec:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
  }
  uVar8 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar8) {
    return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
                    uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
  }
  uVar9 = 0xc - (uVar8 - 0x13);
  return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
         0x80000000ffffffff;
}



/* Function: __floatundidf @ 00012294 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar11 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar11 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar11 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar11 = iVar11 + 3;
    }
    iVar11 = iVar11 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar11 & 0xff);
    param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
    param_2 = param_2 >> iVar11;
    iVar11 = iVar11 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar11 = iVar11 + 1;
      if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_0001206c:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  bVar12 = iVar11 != 0;
  iVar11 = iVar11 + -1;
  if (bVar12 && 0xfffff < param_2) goto LAB_0001206c;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar8 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar13 = SBORROW4(uVar9,0x20);
  uVar5 = iVar8 - 0x2b;
  bVar12 = uVar5 == 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if ((int)uVar9 < 0x20) {
    bVar13 = SCARRY4(uVar5,0xc);
    uVar6 = iVar8 - 0x1f;
    bVar12 = uVar6 == 0;
    uVar7 = uVar9;
    if (!bVar12 && -0xd < (int)uVar5) {
      uVar3 = uVar4 << (uVar9 & 0xff);
      uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar10 = 0x20 - uVar7;
  }
  uVar4 = uVar4 << (uVar7 & 0xff);
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
    uVar3 = uVar3 << (uVar7 & 0xff);
  }
LAB_000120ec:
  if ((int)uVar9 <= iVar11) {
    return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
  }
  uVar10 = ~(iVar11 - uVar9);
  if ((int)uVar10 < 0x1f) {
    if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
      uVar10 = 0xc - (uVar10 - 0x13);
      return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar4 >> (uVar10 & 0xff),
                    uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
  }
  return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}



/* Function: __aeabi_l2d @ 000122a8 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar11 = param_2 & 0x80000000;
  uVar4 = param_2;
  if ((int)uVar11 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    uVar4 = -(param_2 + bVar13);
  }
  iVar10 = 0x432;
  uVar12 = 0;
  if (uVar4 >> 0x16 != 0) {
    iVar10 = 3;
    if (uVar4 >> 0x19 != 0) {
      iVar10 = 6;
    }
    if (uVar4 >> 0x1c != 0) {
      iVar10 = iVar10 + 3;
    }
    iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
    uVar12 = param_1 << (0x20U - iVar10 & 0xff);
    param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
    uVar4 = uVar4 >> iVar10;
    iVar10 = iVar10 + 0x432;
  }
  if (0xfffff < uVar4) {
    if (0x1fffff < uVar4) {
      bVar1 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      iVar10 = iVar10 + 1;
      if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
    }
LAB_0001206c:
    bVar13 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar13 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
                    param_1 + bVar13);
  }
  bVar1 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar3 = param_1 * 2;
  bVar13 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
  bVar13 = iVar10 != 0;
  iVar10 = iVar10 + -1;
  if (bVar13 && 0xfffff < uVar4) goto LAB_0001206c;
  uVar3 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  iVar8 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar14 = SBORROW4(uVar9,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar13 = uVar6 == 0;
  uVar4 = uVar6;
  uVar7 = uVar6;
  if ((int)uVar9 < 0x20) {
    bVar14 = SCARRY4(uVar6,0xc);
    uVar7 = iVar8 - 0x1f;
    bVar13 = uVar7 == 0;
    uVar4 = uVar9;
    if (!bVar13 && -0xd < (int)uVar6) {
      uVar3 = uVar5 << (uVar9 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
      goto LAB_000120ec;
    }
  }
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
    uVar3 = uVar3 << (uVar4 & 0xff);
  }
LAB_000120ec:
  if ((int)uVar9 <= iVar10) {
    return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
  }
  uVar4 = ~(iVar10 - uVar9);
  if ((int)uVar4 < 0x1f) {
    if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
      uVar4 = 0xc - (uVar4 - 0x13);
      return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
                    uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_d2iz @ 00012308 */

uint __aeabi_d2iz(uint param_1,uint param_2)

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
  else if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    return 0;
  }
  param_2 = param_2 & 0x80000000;
  if (param_2 == 0) {
    param_2 = 0x7fffffff;
  }
  return param_2;
}



/* Function: _fini @ 00012364 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 87 */
