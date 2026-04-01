/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/4/4_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001006b0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100780 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 001007b4 */

/* WARNING: Removing unreachable block (ram,0x001007c4) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 001007d0 */

/* WARNING: Removing unreachable block (ram,0x001007e8) */
/* WARNING: Removing unreachable block (ram,0x001007f4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100800 */

/* WARNING: Removing unreachable block (ram,0x00100824) */
/* WARNING: Removing unreachable block (ram,0x00100830) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_0010083c @ 0010083c */

void FUN_0010083c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100840 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: cdecl_func @ 00100894 */

int cdecl_func(int a,int b)

{
  return a + b;
}



/* Function: call_cdecl @ 001008b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  int iVar1;
  
  iVar1 = cdecl_func(5,10);
  return iVar1;
}



/* Function: stdcall_func @ 001008d0 */

int stdcall_func(int a,int b)

{
  return a * b;
}



/* Function: call_stdcall @ 001008f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  int iVar1;
  
  iVar1 = stdcall_func(5,10);
  return iVar1;
}



/* Function: fastcall_func @ 0010090c */

int fastcall_func(int a,int b,int c)

{
  return a + b + c;
}



/* Function: call_fastcall @ 00100938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  int iVar1;
  
  iVar1 = fastcall_func(1,2,3);
  return iVar1;
}



/* Function: call_thiscall @ 00100958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00100960 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 001009a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  int iVar1;
  
  iVar1 = arm_aapcs_func(1,2,3,4,5);
  return iVar1;
}



/* Function: mips_func @ 001009cc */

int mips_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_mips @ 00100a04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  int iVar1;
  
  iVar1 = mips_func(10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: amd64_sysv_func @ 00100a28 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00100a78 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  int iVar1;
  
  iVar1 = amd64_sysv_func(1,2,3,4,5,6);
  return iVar1;
}



/* Function: ms_x64_func @ 00100aa4 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00100ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  int iVar1;
  
  iVar1 = ms_x64_func(1,2,3,4,5);
  return iVar1;
}



/* Function: vectorcall_func @ 00100b10 */

int vectorcall_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_vectorcall @ 00100b48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  int iVar1;
  
  iVar1 = vectorcall_func(1,2,3,4);
  return iVar1;
}



/* Function: mixed_conventions_test @ 00100b6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int sum@[???] */
  iVar1 = cdecl_func(1,2);
  iVar2 = stdcall_func(3,4);
  iVar3 = fastcall_func(5,6,7);
  return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 00100bd8 */

int varargs_func(int count,...)

{
  int iVar1;
  int *local_118;
  int local_40 [2];
  int *piVar2;
  int *piVar3;
  int local_20;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
  local_40[1] = 0;
  local_20 = -0x38;
  piVar2 = (int *)register0x00000008;
                    /* Unresolved local var: int i@[???] */
  for (local_40[0] = 0; local_40[0] < count; local_40[0] = local_40[0] + 1) {
    iVar1 = local_20;
    if ((local_20 < 0) && (iVar1 = local_20 + 8, iVar1 < 1)) {
      local_118 = (int *)((long)local_40 + (long)local_20);
      piVar3 = piVar2;
      local_20 = iVar1;
    }
    else {
      local_20 = iVar1;
      piVar3 = piVar2 + 2;
      local_118 = piVar2;
    }
    local_40[1] = local_40[1] + *local_118;
    piVar2 = piVar3;
  }
  return local_40[1];
}



/* Function: func_no_args @ 00100d10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00100d18 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100d80 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  undefined4 local_40;
  
                    /* Unresolved local var: int len@[DW_OP_breg31(sp): +12] */
  if (s == (char *)0x0) {
    local_40 = 0;
  }
  else {
    sVar1 = strlen(s);
    local_40 = (int)sVar1;
  }
  return (int)((double)(x + local_40) + d + (double)ll);
}



/* Function: func_struct_byval @ 00100e00 */

int func_struct_byval(LargeStruct *s)

{
  int local_c;
  long local_8;
  
                    /* Unresolved local var: longlong sum@[???] */
  local_8 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_c = 0; local_c < 0x10; local_c = local_c + 1) {
    local_8 = local_8 + s->data[local_c];
  }
  return (int)local_8;
}



/* Function: func_struct_byptr @ 00100e60 */

int func_struct_byptr(SmallStruct *p)

{
  int local_4;
  
  if (p == (SmallStruct *)0x0) {
    local_4 = -1;
  }
  else {
    local_4 = p->x * p->y;
  }
  return local_4;
}



/* Function: test_calling_conventions @ 00100ea8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  uint uVar1;
  SmallStruct local_150;
  LargeStruct LStack_148;
  uint local_c8;
  int local_c4;
  long alStack_c0 [16];
  uint local_3c;
  undefined *local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: char * test_str@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: LargeStruct large@[???]
                       Unresolved local var: int struct_val@[???]
                       Unresolved local var: SmallStruct s@[DW_OP_breg31(sp): +48]
                       Unresolved local var: int struct_ptr@[DW_OP_breg31(sp): +44] */
  printf(&DAT_00101dc0);
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
  local_24 = varargs_func(5);
  printf(&DAT_00101e82,(ulong)local_24);
  local_28 = func_no_args();
  printf(&DAT_00101eaa,(ulong)local_28);
  local_2c = func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_00101ecc,(ulong)local_2c);
  local_38 = &DAT_00101ef3;
  local_3c = func_mixed_args(10,"test",3.14,100);
  printf(&DAT_00101ef8,(ulong)local_3c);
                    /* Unresolved local var: int i@[???] */
  for (local_c4 = 0; local_c4 < 0x10; local_c4 = local_c4 + 1) {
    alStack_c0[local_c4] = (long)(local_c4 + 1);
  }
  memcpy(&LStack_148,alStack_c0,0x80);
  local_c8 = func_struct_byval(&LStack_148);
  printf(&DAT_00101f20,(ulong)local_c8);
  local_150.x = 5;
  local_150.y = 10;
  uVar1 = func_struct_byptr(&local_150);
  printf(&DAT_00101f4c,(ulong)uVar1);
  return;
}



/* Function: param_by_value_int @ 00101118 */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 00101138 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
  int iVar1;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00101170 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 001011a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  int iVar1;
  int local_14;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +12] */
  local_14 = 5;
  iVar1 = param_by_value_ptr(&local_14);
  return local_14 + iVar1;
}



/* Function: param_array_decay @ 001011e8 */

int param_array_decay(int *arr,int n)

{
  return 8;
}



/* Function: call_array_decay @ 00101200 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  int iVar1;
  int aiStack_38 [10];
  
                    /* Unresolved local var: int[10] array@[DW_OP_breg31(sp): +8] */
  memset(aiStack_38,0,0x28);
  iVar1 = param_array_decay(aiStack_38,10);
  return iVar1;
}



/* Function: param_string @ 00101238 */

int param_string(char *str)

{
  return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 0010125c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  int iVar1;
  
  iVar1 = param_string("Hello");
  return iVar1;
}



/* Function: param_ptr_array @ 00101278 */

int param_ptr_array(char **arr,int n)

{
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    local_10 = local_10 + (uint)(byte)*arr[local_14];
  }
  return local_10;
}



/* Function: call_ptr_array @ 001012e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  int iVar1;
  char *local_30;
  undefined *puStack_28;
  undefined *local_20;
  
                    /* Unresolved local var: char *[3] strs@[DW_OP_breg31(sp): 0] */
  puStack_28 = &DAT_00101f83;
  local_30 = "abc";
  local_20 = &DAT_00101f87;
  iVar1 = param_ptr_array(&local_30,3);
  return iVar1;
}



/* Function: param_varargs @ 0010131c */

int param_varargs(int count,...)

{
  int iVar1;
  int *local_118;
  int local_40 [2];
  int *piVar2;
  int *piVar3;
  int local_20;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
  local_20 = -0x38;
  local_40[1] = 0;
  piVar2 = (int *)register0x00000008;
                    /* Unresolved local var: int i@[???] */
  for (local_40[0] = 0; local_40[0] < count; local_40[0] = local_40[0] + 1) {
    iVar1 = local_20;
    if ((local_20 < 0) && (iVar1 = local_20 + 8, iVar1 < 1)) {
      local_118 = (int *)((long)local_40 + (long)local_20);
      piVar3 = piVar2;
      local_20 = iVar1;
    }
    else {
      local_20 = iVar1;
      piVar3 = piVar2 + 2;
      local_118 = piVar2;
    }
    local_40[1] = local_40[1] + *local_118;
    piVar2 = piVar3;
  }
  return local_40[1];
}



/* Function: call_varargs_param @ 00101454 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 0010147c */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 001014ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: callback_func @ 001014cc */

int callback_func(int x)

{
  return x << 1;
}



/* Function: param_double_ptr @ 001014e4 */

int param_double_ptr(int **pp,int new_val)

{
  int local_4;
  
  if ((pp == (int **)0x0) || (*pp == (int *)0x0)) {
    local_4 = -1;
  }
  else {
    **pp = new_val;
    *pp = (int *)0x0;
    local_4 = 1;
  }
  return local_4;
}



/* Function: call_double_ptr @ 00101548 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
  int *local_20;
  int local_14;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +12] */
  local_20 = &local_14;
  local_14 = 10;
  param_double_ptr(&local_20,0x14);
  return local_14 + (uint)(local_20 == (int *)0x0);
}



/* Function: param_complex_cast @ 00101598 */

int param_complex_cast(void *p,int type)

{
  undefined4 local_4;
  
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * back_ptr@[???] */
    local_4 = *(int *)p;
  }
  else if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[???] */
    local_4 = *(int *)p + *(int *)((long)p + 4);
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



/* Function: call_complex_cast @ 00101628 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  int iVar1;
  undefined8 local_20;
  undefined4 local_14;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[DW_OP_breg31(sp): +16] */
  local_14 = 0x12345678;
  local_20 = 0xc800000064;
  param_complex_cast(&local_20,1);
  iVar1 = param_complex_cast(&local_14,0);
  return iVar1;
}



/* Function: param_struct_byval @ 0010167c */

int param_struct_byval(BigStruct *s)

{
  return s->data[0] + s->data[0xf];
}



/* Function: call_struct_byval @ 0010168c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  BigStruct BStack_94;
  int local_54;
  int aiStack_50 [16];
  
                    /* Unresolved local var: BigStruct s@[???] */
                    /* Unresolved local var: int i@[???] */
  for (local_54 = 0; local_54 < 0x10; local_54 = local_54 + 1) {
    aiStack_50[local_54] = local_54;
  }
  memcpy(&BStack_94,aiStack_50,0x40);
  iVar1 = param_struct_byval(&BStack_94);
  return iVar1;
}



/* Function: param_order_dep @ 001016fc */

int param_order_dep(int a,int b)

{
  return a + b;
}



/* Function: call_order_dep @ 0010171c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
  int iVar1;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = param_order_dep(1,2);
  return iVar1;
}



/* Function: test_parameter_passing @ 00101754 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  uint uVar1;
  
  printf(&DAT_00101f8b);
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



/* Function: ret_basic_type @ 0010184c */

int ret_basic_type(int x)

{
  return x << 1;
}



/* Function: call_ret_basic @ 00101864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  int iVar1;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[DW_OP_breg31(sp): +8] */
  iVar1 = ret_basic_type(0x15);
  return iVar1;
}



/* Function: ret_pointer @ 00101894 */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 001018ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  int *piVar1;
  int local_20 [4];
  
                    /* Unresolved local var: int[3] arr@[DW_OP_breg31(sp): +16]
                       Unresolved local var: int * ptr@[DW_OP_breg31(sp): +8] */
  local_20[0] = 10;
  local_20[1] = 0x14;
  local_20[2] = 0x1e;
  piVar1 = ret_pointer(local_20);
  return *piVar1;
}



/* Function: ret_small_struct @ 001018f0 */

SmallPoint ret_small_struct(int x,int y)

{
  SmallPoint SVar1;
  
  SVar1.y = y;
  SVar1.x = x;
                    /* Unresolved local var: SmallPoint p@[???] */
  return SVar1;
}



/* Function: call_ret_small_struct @ 00101918 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  SmallPoint SVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  
                    /* Unresolved local var: SmallPoint p@[DW_OP_breg31(sp): +8] */
  SVar1 = ret_small_struct(3,4);
  local_18 = SVar1.x;
  uStack_14 = SVar1.y;
  return local_18 + uStack_14;
}



/* Function: ret_large_struct @ 0010194c */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  int local_8;
  
                    /* Unresolved local var: LargeData d@[???] */
                    /* Unresolved local var: int i@[???] */
  for (local_8 = 0; local_8 < 0x10; local_8 = local_8 + 1) {
    __return_storage_ptr__->data[local_8] = seed + local_8;
  }
  return;
}



/* Function: call_ret_large_struct @ 001019a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  LargeData local_50;
  
                    /* Unresolved local var: LargeData d@[DW_OP_breg31(sp): 0] */
  ret_large_struct(&local_50,100);
  return local_50.data[0] + local_50.data[0xf];
}



/* Function: func_a @ 001019d4 */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 001019ec */

int func_b(int x)

{
  return x << 1;
}



/* Function: ret_func_ptr @ 00101a04 */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_b;
  if (selector == 0) {
    p_Var1 = func_a;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 00101a30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  int iVar1;
  func_ptr_t p_Var2;
  
                    /* Unresolved local var: func_ptr_t f@[DW_OP_breg31(sp): +8] */
  p_Var2 = ret_func_ptr(1);
  iVar1 = (*p_Var2)(5);
  return iVar1;
}



/* Function: ret_opaque_handle @ 00101a60 */

void * ret_opaque_handle(int type)

{
  int *piVar1;
  
  piVar1 = &ret_opaque_handle::handle1;
  if (type != 0) {
    piVar1 = (int *)&ret_opaque_handle::handle2;
  }
  return (double *)piVar1;
}



/* Function: call_ret_opaque @ 00101a8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  int *piVar1;
  
                    /* Unresolved local var: void * h@[DW_OP_breg31(sp): +8] */
  piVar1 = ret_opaque_handle(0);
  return *piVar1;
}



/* Function: ret_complex_expr @ 00101ab8 */

int ret_complex_expr(int x,int y,int z)

{
  undefined4 local_10;
  
  if (y < x) {
    local_10 = z << 1;
  }
  else {
    local_10 = z + 10;
  }
  return local_10;
}



/* Function: call_ret_complex_expr @ 00101b08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar1 + iVar2;
}



/* Function: ret_multi_branch @ 00101b64 */

int ret_multi_branch(int op)

{
  undefined4 local_4;
  
  if (op == 0) {
    local_4 = 10;
  }
  else if (op == 1) {
    local_4 = 0x14;
  }
  else if (op == 2) {
    local_4 = 0x1e;
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



/* Function: call_ret_multi_branch @ 00101bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int sum@[???] */
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00101c34 */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00101c5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
  int local_14;
  
                    /* Unresolved local var: int result@[???] */
  ret_void(7,&local_14);
  return local_14;
}



/* Function: test_return_values @ 00101c84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  uint uVar1;
  
  printf(&DAT_00102068);
  uVar1 = call_ret_basic();
  printf(&DAT_00102087,(ulong)uVar1);
  uVar1 = call_ret_pointer();
  printf(&DAT_001020a3,(ulong)uVar1);
  uVar1 = call_ret_small_struct();
  printf(&DAT_001020bf,(ulong)uVar1);
  uVar1 = call_ret_large_struct();
  printf(&DAT_001020da,(ulong)uVar1);
  uVar1 = call_ret_func_ptr();
  printf(&DAT_001020f7,(ulong)uVar1);
  uVar1 = call_ret_opaque();
  printf(&DAT_00102113,(ulong)uVar1);
  uVar1 = call_ret_complex_expr();
  printf(&DAT_00102130,(ulong)uVar1);
  uVar1 = call_ret_multi_branch();
  printf(&DAT_0010214c,(ulong)uVar1);
  uVar1 = call_ret_void();
  printf(&DAT_00102168,(ulong)uVar1);
  return;
}



/* Function: main @ 00101d54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _fini @ 00101d88 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 80 */
