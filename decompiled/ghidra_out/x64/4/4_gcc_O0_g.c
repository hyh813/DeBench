/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/4/4_gcc_O0_g
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

int cdecl_func(int a,int b)

{
  int b_local;
  int a_local;
  
  return b + a;
}



/* Function: call_cdecl @ 001011c1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  int iVar1;
  
  iVar1 = cdecl_func(5,10);
  return iVar1;
}



/* Function: stdcall_func @ 001011da */

int stdcall_func(int a,int b)

{
  int b_local;
  int a_local;
  
  return a * b;
}



/* Function: call_stdcall @ 001011f1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  int iVar1;
  
  iVar1 = stdcall_func(5,10);
  return iVar1;
}



/* Function: fastcall_func @ 0010120a */

int fastcall_func(int a,int b,int c)

{
  int c_local;
  int b_local;
  int a_local;
  
  return c + a + b;
}



/* Function: call_fastcall @ 0010122a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  int iVar1;
  
  iVar1 = fastcall_func(1,2,3);
  return iVar1;
}



/* Function: call_thiscall @ 00101248 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00101257 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  int e_local;
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  return e + a + b + c + d;
}



/* Function: call_arm_aapcs @ 00101288 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  int iVar1;
  
  iVar1 = arm_aapcs_func(1,2,3,4,5);
  return iVar1;
}



/* Function: mips_func @ 001012b1 */

int mips_func(int a,int b,int c,int d)

{
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  return d + a + b + c;
}



/* Function: call_mips @ 001012d9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  int iVar1;
  
  iVar1 = mips_func(10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: amd64_sysv_func @ 001012fc */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  int f_local;
  int e_local;
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  return f + a + b + c + d + e;
}



/* Function: call_amd64_sysv @ 00101336 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  int iVar1;
  
  iVar1 = amd64_sysv_func(1,2,3,4,5,6);
  return iVar1;
}



/* Function: ms_x64_func @ 00101365 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  int e_local;
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  return e + a + b + c + d;
}



/* Function: call_ms_x64 @ 00101396 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  int iVar1;
  
  iVar1 = ms_x64_func(1,2,3,4,5);
  return iVar1;
}



/* Function: vectorcall_func @ 001013bf */

int vectorcall_func(int a,int b,int c,int d)

{
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  return d + a + b + c;
}



/* Function: call_vectorcall @ 001013e7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  int iVar1;
  
  iVar1 = vectorcall_func(1,2,3,4);
  return iVar1;
}



/* Function: mixed_conventions_test @ 0010140a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int sum;
  
  iVar1 = cdecl_func(1,2);
  iVar2 = stdcall_func(3,4);
  iVar3 = fastcall_func(5,6,7);
  return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 0010145d */

int varargs_func(int count,...)

{
  char in_AL;
  int *piVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  ulong uVar2;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  int count_local;
  int sum;
  int i;
  va_list args;
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
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  sum = 0;
  args[0].gp_offset = 8;
  args[0].overflow_arg_area = &stack0x00000008;
  for (i = 0; i < count; i = i + 1) {
    if (args[0].gp_offset < 0x30) {
      uVar2 = (ulong)args[0].gp_offset;
      args[0].gp_offset = args[0].gp_offset + 8;
      piVar1 = (int *)((long)local_b8 + uVar2);
    }
    else {
      piVar1 = args[0].overflow_arg_area;
      args[0].overflow_arg_area = (void *)((long)args[0].overflow_arg_area + 8);
    }
    sum = sum + *piVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
    local_b0 = in_RSI;
    local_a8 = in_RDX;
    local_a0 = in_RCX;
    local_98 = in_R8;
    local_90 = in_R9;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sum;
}



/* Function: func_no_args @ 0010158a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00101599 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  int f_local;
  int e_local;
  int d_local;
  int c_local;
  int b_local;
  int a_local;
  
  return h + a + b + c + d + e + f + g;
}



/* Function: func_mixed_args @ 001015dd */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  int iVar1;
  longlong ll_local;
  double d_local;
  char *s_local;
  int x_local;
  int len;
  size_t sVar2;
  
  if (s == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    iVar1 = (int)sVar2;
  }
  return (int)((double)ll + (double)(iVar1 + x) + d);
}



/* Function: func_struct_byval @ 00101643 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
  int i;
  longlong sum;
  
  sum = 0;
  for (i = 0; i < 0x10; i = i + 1) {
    sum = sum + s.data[i];
  }
  return (int)sum;
}



/* Function: func_struct_byptr @ 0010167a */

int func_struct_byptr(SmallStruct *p)

{
  int iVar1;
  SmallStruct *p_local;
  
  if (p == (SmallStruct *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = p->y * p->x;
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 001016a6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  long lVar1;
  LargeStruct s_00;
  uint uVar2;
  long in_FS_OFFSET;
  int i;
  int sum;
  int no_args;
  int many;
  int mixed;
  int struct_val;
  int struct_ptr;
  char *test_str;
  SmallStruct s;
  LargeStruct large;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103008);
  uVar2 = call_cdecl();
  printf("CALL-L1-01: %d\n",(ulong)uVar2);
  uVar2 = call_stdcall();
  printf("CALL-L1-02: %d\n",(ulong)uVar2);
  uVar2 = call_fastcall();
  printf("CALL-L1-03: %d\n",(ulong)uVar2);
  uVar2 = call_thiscall();
  printf("CALL-L1-04: %d\n",(ulong)uVar2);
  uVar2 = call_arm_aapcs();
  printf("CALL-L1-05: %d\n",(ulong)uVar2);
  uVar2 = call_mips();
  printf("CALL-L1-06: %d\n",(ulong)uVar2);
  uVar2 = call_amd64_sysv();
  printf("CALL-L1-07: %d\n",(ulong)uVar2);
  uVar2 = call_ms_x64();
  printf("CALL-L1-08: %d\n",(ulong)uVar2);
  uVar2 = call_vectorcall();
  printf("CALL-L1-09: %d\n",(ulong)uVar2);
  uVar2 = mixed_conventions_test();
  printf("CALL-L1-10: %d\n",(ulong)uVar2);
  uVar2 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_001030d0,(ulong)uVar2);
  uVar2 = func_no_args();
  printf(&DAT_001030f8,(ulong)uVar2);
  uVar2 = func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_00103120,(ulong)uVar2);
  uVar2 = func_mixed_args(10,"test",3.14,100);
  printf(&DAT_00103150,(ulong)uVar2);
  for (i = 0; i < 0x10; i = i + 1) {
    large.data[i] = (long)(i + 1);
  }
  s_00.data[1] = large.data[1];
  s_00.data[0] = large.data[0];
  s_00.data[2] = large.data[2];
  s_00.data[3] = large.data[3];
  s_00.data[4] = large.data[4];
  s_00.data[5] = large.data[5];
  s_00.data[6] = large.data[6];
  s_00.data[7] = large.data[7];
  s_00.data[8] = large.data[8];
  s_00.data[9] = large.data[9];
  s_00.data[10] = large.data[10];
  s_00.data[0xb] = large.data[0xb];
  s_00.data[0xc] = large.data[0xc];
  s_00.data[0xd] = large.data[0xd];
  s_00.data[0xe]._0_4_ = (int)large.data[0xe];
  s_00.data[0xe]._4_4_ = (int)((ulong)large.data[0xe] >> 0x20);
  s_00.data[0xf]._0_4_ = (int)large.data[0xf];
  s_00.data[0xf]._4_4_ = (int)((ulong)large.data[0xf] >> 0x20);
  uVar2 = func_struct_byval(s_00);
  printf(&DAT_00103178,(ulong)uVar2);
  s.x = 5;
  s.y = 10;
  uVar2 = func_struct_byptr(&s);
  printf(&DAT_001031a8,(ulong)uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: param_by_value_int @ 00101a1f */

int param_by_value_int(int x)

{
  int x_local;
  
  return x << 1;
}



/* Function: call_by_value_int @ 00101a32 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
  int iVar1;
  int val;
  int result;
  
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00101a5c */

int param_by_value_ptr(int *p)

{
  int *p_local;
  
  *p = *p * 2;
  return 1;
}



/* Function: call_by_value_ptr @ 00101a8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  long in_FS_OFFSET;
  int val;
  int result;
  int *ptr;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  val = 5;
  ptr = &val;
  result = param_by_value_ptr(ptr);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return result + val;
}



/* Function: param_array_decay @ 00101ae3 */

int param_array_decay(int *arr,int n)

{
  int n_local;
  int *arr_local;
  
  return 8;
}



/* Function: call_array_decay @ 00101af9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int array [10];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  array[0] = 0;
  array[1] = 0;
  array[2] = 0;
  array[3] = 0;
  array[4] = 0;
  array[5] = 0;
  array[6] = 0;
  array[7] = 0;
  array[8] = 0;
  array[9] = 0;
  iVar2 = param_array_decay(array,10);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_string @ 00101b63 */

int param_string(char *str)

{
  char *str_local;
  
  return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 00101b8b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  int iVar1;
  
  iVar1 = param_string("Hello");
  return iVar1;
}



/* Function: param_ptr_array @ 00101ba4 */

int param_ptr_array(char **arr,int n)

{
  int n_local;
  char **arr_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + *arr[i];
  }
  return sum;
}



/* Function: call_ptr_array @ 00101bf4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *strs [3];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  strs[0] = "abc";
  strs[1] = "def";
  strs[2] = "ghi";
  iVar2 = param_ptr_array(strs,3);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_varargs @ 00101c57 */

int param_varargs(int count,...)

{
  char in_AL;
  int *piVar1;
  undefined8 in_RCX;
  undefined8 in_RDX;
  ulong uVar2;
  undefined8 in_RSI;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  undefined8 in_XMM0_Qa;
  undefined8 in_XMM1_Qa;
  undefined8 in_XMM2_Qa;
  undefined8 in_XMM3_Qa;
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  int count_local;
  int sum;
  int i;
  va_list args;
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
    local_88 = in_XMM0_Qa;
    local_78 = in_XMM1_Qa;
    local_68 = in_XMM2_Qa;
    local_58 = in_XMM3_Qa;
    local_48 = in_XMM4_Qa;
    local_38 = in_XMM5_Qa;
    local_28 = in_XMM6_Qa;
    local_18 = in_XMM7_Qa;
  }
  args[0].gp_offset = 8;
  args[0].overflow_arg_area = &stack0x00000008;
  sum = 0;
  for (i = 0; i < count; i = i + 1) {
    if (args[0].gp_offset < 0x30) {
      uVar2 = (ulong)args[0].gp_offset;
      args[0].gp_offset = args[0].gp_offset + 8;
      piVar1 = (int *)((long)local_b8 + uVar2);
    }
    else {
      piVar1 = args[0].overflow_arg_area;
      args[0].overflow_arg_area = (void *)((long)args[0].overflow_arg_area + 8);
    }
    sum = sum + *piVar1;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
    local_b0 = in_RSI;
    local_a8 = in_RDX;
    local_a0 = in_RCX;
    local_98 = in_R8;
    local_90 = in_R9;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return sum;
}



/* Function: call_varargs_param @ 00101d84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00101db2 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  int x_local;
  _func_int_int *callback_local;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: callback_func @ 00101dd5 */

int callback_func(int x)

{
  int x_local;
  
  return x * 2;
}



/* Function: call_func_ptr_param @ 00101de7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: param_double_ptr @ 00101e05 */

int param_double_ptr(int **pp,int new_val)

{
  int iVar1;
  int new_val_local;
  int **pp_local;
  
  if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
    iVar1 = -1;
  }
  else {
    **pp = new_val;
    *pp = (int *)0x0;
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_double_ptr @ 00101e4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
  long in_FS_OFFSET;
  int val;
  int result;
  int *ptr;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  val = 10;
  ptr = &val;
  result = param_double_ptr(&ptr,0x14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return val + (uint)(ptr == (int *)0x0);
}



/* Function: param_complex_cast @ 00101eb2 */

int param_complex_cast(void *p,int type)

{
  int iVar1;
  int type_local;
  void *p_local;
  TestIntPair *s;
  int *int_ptr;
  char *char_ptr;
  int *back_ptr;
  
  if (type == 0) {
    iVar1 = *(int *)p;
  }
  else if (type == 1) {
    iVar1 = *(int *)((long)p + 4) + *(int *)p;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00101f0d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int val;
  TestIntPair pair;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  val = 0x12345678;
  pair.a = 100;
  pair.b = 200;
  param_complex_cast(&pair,1);
  iVar2 = param_complex_cast(&val,0);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_struct_byval @ 00101f75 */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00101f87 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  long lVar1;
  BigStruct s_00;
  int iVar2;
  long in_FS_OFFSET;
  int i;
  BigStruct s;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  for (i = 0; i < 0x10; i = i + 1) {
    s.data[i] = i;
  }
  s_00.data[2] = s.data[2];
  s_00.data[3] = s.data[3];
  s_00.data[0] = s.data[0];
  s_00.data[1] = s.data[1];
  s_00.data[4] = s.data[4];
  s_00.data[5] = s.data[5];
  s_00.data[6] = s.data[6];
  s_00.data[7] = s.data[7];
  s_00.data[8] = s.data[8];
  s_00.data[9] = s.data[9];
  s_00.data[10] = s.data[10];
  s_00.data[0xb] = s.data[0xb];
  s_00.data[0xc] = s.data[0xc];
  s_00.data[0xd] = s.data[0xd];
  s_00.data[0xe] = s.data[0xe];
  s_00.data[0xf] = s.data[0xf];
  iVar2 = param_struct_byval(s_00);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: param_order_dep @ 00101ff8 */

int param_order_dep(int a,int b)

{
  int b_local;
  int a_local;
  
  return b + a;
}



/* Function: call_order_dep @ 00102010 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
  int iVar1;
  int i;
  
  iVar1 = param_order_dep(2,2);
  return iVar1;
}



/* Function: test_parameter_passing @ 0010203c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

int ret_basic_type(int x)

{
  int x_local;
  
  return x * 2;
}



/* Function: call_ret_basic @ 001021c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  int iVar1;
  int val;
  int result;
  
  iVar1 = ret_basic_type(0x15);
  return iVar1;
}



/* Function: ret_pointer @ 001021ed */

int * ret_pointer(int *p)

{
  int *p_local;
  
  return p + 1;
}



/* Function: call_ret_pointer @ 00102203 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  long lVar1;
  int *piVar2;
  long in_FS_OFFSET;
  int *ptr;
  int arr [3];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  arr[0] = 10;
  arr[1] = 0x14;
  arr[2] = 0x1e;
  piVar2 = ret_pointer(arr);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *piVar2;
}



/* Function: ret_small_struct @ 0010225f */

SmallPoint ret_small_struct(int x,int y)

{
  SmallPoint SVar1;
  int y_local;
  int x_local;
  SmallPoint p;
  
  SVar1.y = y;
  SVar1.x = x;
  return SVar1;
}



/* Function: call_ret_small_struct @ 0010227f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  SmallPoint SVar1;
  SmallPoint p;
  
  SVar1 = ret_small_struct(3,4);
  p.x = SVar1.x;
  p.y = SVar1.y;
  return p.y + p.x;
}



/* Function: ret_large_struct @ 001022a8 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  long lVar1;
  long in_FS_OFFSET;
  int seed_local;
  int i;
  LargeData d;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  for (i = 0; i < 0x10; i = i + 1) {
    d.data[i] = seed + i;
  }
  *(undefined8 *)__return_storage_ptr__->data = d.data._0_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 2) = d.data._8_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 4) = d.data._16_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 6) = d.data._24_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 8) = d.data._32_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 10) = d.data._40_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 0xc) = d.data._48_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 0xe) = d.data._56_8_;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00102350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  long lVar1;
  long in_FS_OFFSET;
  LargeData d;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  ret_large_struct(&d,100);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return d.data[0xf] + d.data[0];
}



/* Function: func_a @ 0010239a */

int func_a(int x)

{
  int x_local;
  
  return x + 10;
}



/* Function: func_b @ 001023ad */

int func_b(int x)

{
  int x_local;
  
  return x * 2;
}



/* Function: ret_func_ptr @ 001023bf */

func_ptr_t ret_func_ptr(int selector)

{
  code *pcVar1;
  int selector_local;
  
  if (selector == 0) {
    pcVar1 = func_a;
  }
  else {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 001023e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  int iVar1;
  func_ptr_t p_Var2;
  func_ptr_t f;
  
  p_Var2 = ret_func_ptr(1);
  iVar1 = (*p_Var2)(5);
  return iVar1;
}



/* Function: ret_opaque_handle @ 00102409 */

void * ret_opaque_handle(int type)

{
  int *piVar1;
  int type_local;
  
  if (type == 0) {
    piVar1 = &ret_opaque_handle::handle1;
  }
  else {
    piVar1 = (int *)&ret_opaque_handle::handle2;
  }
  return piVar1;
}



/* Function: call_ret_opaque @ 0010242c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  int *piVar1;
  void *h;
  
  piVar1 = ret_opaque_handle(0);
  return *piVar1;
}



/* Function: ret_complex_expr @ 0010244e */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  int z_local;
  int y_local;
  int x_local;
  
  if (y < x) {
    iVar1 = z * 2;
  }
  else {
    iVar1 = z + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00102476 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar2 + iVar1;
}



/* Function: ret_multi_branch @ 001024ba */

int ret_multi_branch(int op)

{
  int op_local;
  
  if (op == 2) {
    return 0x1e;
  }
  if (op < 3) {
    if (op == 0) {
      return 10;
    }
    if (op == 1) {
      return 0x14;
    }
  }
  return -1;
}



/* Function: call_ret_multi_branch @ 001024fb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int sum;
  
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 0010253a */

void ret_void(int x,int *out)

{
  int *out_local;
  int x_local;
  
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 0010255b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
  long in_FS_OFFSET;
  int result;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  ret_void(7,&result);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return result;
}



/* Function: test_return_values @ 001025a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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
