/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/4/4_clang_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010400 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010474 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000104b8 */

/* WARNING: Removing unreachable block (ram,0x000104cc) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000104dc */

/* WARNING: Removing unreachable block (ram,0x000104fc) */
/* WARNING: Removing unreachable block (ram,0x00010508) */
/* WARNING: Removing unreachable block (ram,0x0001050c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010520 */

/* WARNING: Removing unreachable block (ram,0x0001054c) */
/* WARNING: Removing unreachable block (ram,0x00010558) */
/* WARNING: Removing unreachable block (ram,0x0001055c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010570 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: cdecl_func @ 000105dc */

int cdecl_func(int a,int b)

{
  return a + b;
}



/* Function: call_cdecl @ 000105fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  int iVar1;
  
  iVar1 = cdecl_func(5,10);
  return iVar1;
}



/* Function: stdcall_func @ 00010618 */

int stdcall_func(int a,int b)

{
  return a * b;
}



/* Function: call_stdcall @ 00010638 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  int iVar1;
  
  iVar1 = stdcall_func(5,10);
  return iVar1;
}



/* Function: fastcall_func @ 00010654 */

int fastcall_func(int a,int b,int c)

{
  return a + b + c;
}



/* Function: call_fastcall @ 00010680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  int iVar1;
  
  iVar1 = fastcall_func(1,2,3);
  return iVar1;
}



/* Function: call_thiscall @ 000106a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 000106a8 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 000106ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  int iVar1;
  
  iVar1 = arm_aapcs_func(1,2,3,4,5);
  return iVar1;
}



/* Function: mips_func @ 00010724 */

int mips_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_mips @ 0001075c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  int iVar1;
  
  iVar1 = mips_func(10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: amd64_sysv_func @ 00010780 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 000107d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  int iVar1;
  
  iVar1 = amd64_sysv_func(1,2,3,4,5,6);
  return iVar1;
}



/* Function: ms_x64_func @ 00010810 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 00010854 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  int iVar1;
  
  iVar1 = ms_x64_func(1,2,3,4,5);
  return iVar1;
}



/* Function: vectorcall_func @ 0001088c */

int vectorcall_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_vectorcall @ 000108c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  int iVar1;
  
  iVar1 = vectorcall_func(1,2,3,4);
  return iVar1;
}



/* Function: mixed_conventions_test @ 000108e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
  iVar1 = cdecl_func(1,2);
  iVar2 = stdcall_func(3,4);
  iVar3 = fastcall_func(5,6,7);
  return iVar1 + iVar2 + iVar3;
}



/* Function: varargs_func @ 00010964 */

int varargs_func(int count,...)

{
  int local_1c;
  int local_18;
  int *local_14;
  int local_c [3];
  
                    /* Unresolved local var: va_list args@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
  local_18 = 0;
  local_14 = local_c;
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
  for (local_1c = 0; local_1c < count; local_1c = local_1c + 1) {
    local_18 = local_18 + *local_14;
    local_14 = local_14 + 1;
  }
  return local_18;
}



/* Function: func_no_args @ 000109e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000109e8 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010a50 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* Unresolved local var: int len@[DW_OP_breg13(sp): +12] */
  if (s == (char *)0x0) {
    local_30 = 0;
  }
  else {
    local_30 = strlen(s);
  }
  uVar2 = __floatsidf(x + local_30);
  local_20 = (undefined4)ll;
  local_1c = (undefined4)((ulonglong)ll >> 0x20);
  uVar2 = __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),local_20,local_1c);
  uVar3 = __floatdidf(in_stack_00000000,in_stack_00000004);
  __adddf3((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),(int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  iVar1 = __fixdfsi();
  return iVar1;
}



/* Function: func_struct_byval @ 00010b0c */

int func_struct_byval(LargeStruct s)

{
  int local_1c;
  int local_18;
  int local_10 [4];
  
                    /* Unresolved local var: longlong sum@[DW_OP_breg13(sp): +8] */
  local_18 = 0;
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
  local_1c = 0;
  while (local_1c < 0x10) {
    s.data[0]._0_4_ = local_10 + local_1c * 2;
    s.data[1]._4_4_ = *(int *)s.data[0];
    s.data[0]._4_4_ = local_18 + s.data[1]._4_4_;
    local_18 = s.data[0]._4_4_;
    s.data[0]._0_4_ = (int *)(local_1c + 1);
    local_1c = (int)(int *)s.data[0];
  }
  s.data[0]._0_4_ = (int *)local_18;
  return (int)(int *)s.data[0];
}



/* Function: func_struct_byptr @ 00010b94 */

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



/* Function: test_calling_conventions @ 00010bdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  undefined4 uVar2;
  double d;
  LargeStruct s;
  undefined1 auVar3 [116];
  undefined1 auVar4 [12];
  undefined1 in_stack_00000000 [112];
  int local_e0;
  undefined4 *local_dc;
  undefined4 *local_d8;
  SmallStruct local_b8;
  int local_b0;
  int local_ac;
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined4 auStack_98 [29];
  int local_24;
  undefined *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: char * test_str@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: LargeStruct large@[???]
                       Unresolved local var: int struct_val@[DW_OP_breg13(sp): +168]
                       Unresolved local var: SmallStruct s@[DW_OP_breg13(sp): +160]
                       Unresolved local var: int struct_ptr@[DW_OP_breg13(sp): +156] */
  printf(&DAT_00012180);
  iVar1 = call_cdecl();
  printf("CALL-L1-01: %d\n",iVar1);
  iVar1 = call_stdcall();
  printf("CALL-L1-02: %d\n",iVar1);
  iVar1 = call_fastcall();
  printf("CALL-L1-03: %d\n",iVar1);
  iVar1 = call_thiscall();
  printf("CALL-L1-04: %d\n",iVar1);
  iVar1 = call_arm_aapcs();
  printf("CALL-L1-05: %d\n",iVar1);
  iVar1 = call_mips();
  printf("CALL-L1-06: %d\n",iVar1);
  iVar1 = call_amd64_sysv();
  printf("CALL-L1-07: %d\n",iVar1);
  iVar1 = call_ms_x64();
  printf("CALL-L1-08: %d\n",iVar1);
  iVar1 = call_vectorcall();
  printf("CALL-L1-09: %d\n",iVar1);
  iVar1 = mixed_conventions_test();
  printf("CALL-L1-10: %d\n",iVar1);
  local_14 = varargs_func(5);
  printf(&DAT_00012242,local_14);
  local_18 = func_no_args();
  printf(&DAT_0001226a,local_18);
  local_1c = func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_0001228c,local_1c);
  local_20 = &DAT_000122b3;
  local_24 = func_mixed_args(10,"test",d,0x40091eb851eb851f);
  printf(&DAT_000122b8,local_24);
                    /* Unresolved local var: int i@[???] */
  for (local_ac = 0; local_ac < 0x10; local_ac = local_ac + 1) {
    *(int *)(local_a8 + local_ac * 8) = local_ac + 1;
    *(int *)(local_a8 + local_ac * 8 + 4) = local_ac + 1 >> 0x1f;
  }
  local_e0 = 0x70;
  local_dc = auStack_98;
  local_d8 = (undefined4 *)&stack0xfffffea8;
  do {
    *local_d8 = *local_dc;
    local_e0 = local_e0 + -4;
    local_dc = local_dc + 1;
    local_d8 = local_d8 + 1;
  } while (local_e0 != 0);
  uVar2 = local_9c;
  auVar3 = CONCAT1124(in_stack_00000000,uVar2);
  auVar4 = local_a8;
  s.data = (longlong  [16])CONCAT11612(auVar3,auVar4);
  local_b0 = func_struct_byval(s);
  printf(&DAT_000122e0,local_b0);
  local_b8.y = 10;
  local_b8.x = 5;
  iVar1 = func_struct_byptr(&local_b8);
  printf(&DAT_0001230c,iVar1);
  return;
}



/* Function: param_by_value_int @ 00010f18 */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 00010f38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
  int iVar1;
  
                    /* Unresolved local var: int val@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 00010f70 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00010fa4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  int iVar1;
  int local_c;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
  local_c = 5;
  iVar1 = param_by_value_ptr(&local_c);
  return local_c + iVar1;
}



/* Function: param_array_decay @ 00010fe4 */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 00010ffc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  int iVar1;
  int aiStack_30 [10];
  
                    /* Unresolved local var: int[10] array@[DW_OP_breg13(sp): +8] */
  memset(aiStack_30,0,0x28);
  iVar1 = param_array_decay(aiStack_30,10);
  return iVar1;
}



/* Function: param_string @ 00011034 */

int param_string(char *str)

{
  return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00011054 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  int iVar1;
  
  iVar1 = param_string("Hello");
  return iVar1;
}



/* Function: param_ptr_array @ 00011074 */

int param_ptr_array(char **arr,int n)

{
  int local_10;
  int local_c;
  
                    /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
  local_c = 0;
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
  for (local_10 = 0; local_10 < n; local_10 = local_10 + 1) {
    local_c = local_c + (uint)(byte)*arr[local_10];
  }
  return local_c;
}



/* Function: call_ptr_array @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  int iVar1;
  char *local_14;
  undefined *local_10;
  undefined *local_c;
  
                    /* Unresolved local var: char *[3] strs@[DW_OP_breg13(sp): +4] */
  local_14 = "abc";
  local_10 = &DAT_00012343;
  local_c = &DAT_00012347;
  iVar1 = param_ptr_array(&local_14,3);
  return iVar1;
}



/* Function: param_varargs @ 00011130 */

int param_varargs(int count,...)

{
  int local_1c;
  int local_18;
  int *local_14;
  int local_c [3];
  
                    /* Unresolved local var: va_list args@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
  local_18 = 0;
  local_14 = local_c;
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): 0] */
  for (local_1c = 0; local_1c < count; local_1c = local_1c + 1) {
    local_18 = local_18 + *local_14;
    local_14 = local_14 + 1;
  }
  return local_18;
}



/* Function: call_varargs_param @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 000111e4 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011218 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: callback_func @ 0001123c */

int callback_func(int x)

{
  return x << 1;
}



/* Function: param_double_ptr @ 00011254 */

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



/* Function: call_double_ptr @ 000112c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
  int *local_10;
  int local_c;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
  local_c = 10;
  local_10 = &local_c;
  param_double_ptr(&local_10,0x14);
  if (local_10 == (int *)0x0) {
    local_c = local_c + 1;
  }
  return local_c;
}



/* Function: param_complex_cast @ 00011310 */

int param_complex_cast(void *p,int type)

{
  undefined4 local_4;
  
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[DW_OP_breg13(sp): +12]
                       Unresolved local var: char * char_ptr@[DW_OP_breg13(sp): +8]
                       Unresolved local var: int * back_ptr@[DW_OP_breg13(sp): +4] */
    local_4 = *(int *)p;
  }
  else if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[DW_OP_breg13(sp): 0] */
    local_4 = *(int *)p + *(int *)((int)p + 4);
  }
  else {
    local_4 = -1;
  }
  return local_4;
}



/* Function: call_complex_cast @ 000113a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  int iVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[DW_OP_breg13(sp): +4] */
  local_c = 0x12345678;
  local_10 = 200;
  local_14 = 100;
  param_complex_cast(&local_14,1);
  iVar1 = param_complex_cast(&local_c,0);
  return iVar1;
}



/* Function: param_struct_byval @ 00011400 */

int param_struct_byval(BigStruct s)

{
  s.data[0xf] = s.data[0xf];
  s.data[0] = s.data[0] + s.data[0xf];
  return s.data[0];
}



/* Function: call_struct_byval @ 000114b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auVar7 [12];
  BigStruct s;
  undefined1 auVar8 [52];
  undefined1 in_stack_00000000 [48];
  int local_68;
  int local_64 [16];
  int iVar2;
  
                    /* Unresolved local var: BigStruct s@[DW_OP_breg13(sp): +68] */
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): +64] */
  for (local_68 = 0; local_68 < 0x10; local_68 = local_68 + 1) {
    local_64[local_68] = local_68;
  }
  iVar3 = local_64[1];
  iVar2 = local_64[0];
  uVar6 = CONCAT44(iVar3,iVar2);
  iVar4 = local_64[2];
  auVar7 = CONCAT48(iVar4,uVar6);
  iVar5 = local_64[3];
  auVar8 = CONCAT484(in_stack_00000000,iVar5);
  s.data = (int  [16])CONCAT5212(auVar8,auVar7);
  iVar1 = param_struct_byval(s);
  return iVar1;
}



/* Function: param_order_dep @ 000115a4 */

int param_order_dep(int a,int b)

{
  return a + b;
}



/* Function: call_order_dep @ 000115c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
  int iVar1;
  
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
  iVar1 = param_order_dep(1,2);
  return iVar1;
}



/* Function: test_parameter_passing @ 00011600 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  printf(&DAT_0001234b);
  iVar1 = call_by_value_int();
  printf("PARAM-L1-01: %d\n",iVar1);
  iVar1 = call_by_value_ptr();
  printf("PARAM-L1-02: %d\n",iVar1);
  iVar1 = call_array_decay();
  printf("PARAM-L2-01: %d\n",iVar1);
  iVar1 = call_string_param();
  printf("PARAM-L2-02: %d\n",iVar1);
  iVar1 = call_ptr_array();
  printf("PARAM-L2-03: %d\n",iVar1);
  iVar1 = call_varargs_param();
  printf("PARAM-L2-04: %d\n",iVar1);
  iVar1 = call_func_ptr_param();
  printf("PARAM-L3-01: %d\n",iVar1);
  iVar1 = call_double_ptr();
  printf("PARAM-L3-02: %d\n",iVar1);
  iVar1 = call_complex_cast();
  printf("PARAM-L3-03: %d\n",iVar1);
  iVar1 = call_struct_byval();
  printf("PARAM-L3-04: %d\n",iVar1);
  iVar1 = call_order_dep();
  printf("PARAM-L3-05: %d\n",iVar1);
  return;
}



/* Function: ret_basic_type @ 00011728 */

int ret_basic_type(int x)

{
  return x << 1;
}



/* Function: call_ret_basic @ 00011740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  int iVar1;
  
                    /* Unresolved local var: int val@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int result@[DW_OP_breg13(sp): 0] */
  iVar1 = ret_basic_type(0x15);
  return iVar1;
}



/* Function: ret_pointer @ 00011770 */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00011788 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  int *piVar1;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  
                    /* Unresolved local var: int[3] arr@[DW_OP_breg13(sp): +4]
                       Unresolved local var: int * ptr@[DW_OP_breg13(sp): 0] */
  local_14 = 10;
  local_10 = 0x14;
  local_c = 0x1e;
  piVar1 = ret_pointer(&local_14);
  return *piVar1;
}



/* Function: ret_small_struct @ 000117e0 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  __return_storage_ptr__->x = x;
  __return_storage_ptr__->y = y;
  return (SmallPoint *)y;
}



/* Function: call_ret_small_struct @ 00011810 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  SmallPoint local_10;
  
                    /* Unresolved local var: SmallPoint p@[DW_OP_breg13(sp): 0] */
  ret_small_struct(&local_10,3,4);
  return local_10.x + local_10.y;
}



/* Function: ret_large_struct @ 00011844 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  LargeData *local_8;
  
                    /* Unresolved local var: LargeData d@[???] */
                    /* Unresolved local var: int i@[DW_OP_breg13(sp): +4] */
  for (local_8 = (LargeData *)0x0; (int)local_8 < 0x10;
      local_8 = (LargeData *)((int)local_8->data + 1)) {
    __return_storage_ptr__->data[(int)local_8] = (int)local_8->data + seed;
  }
  return local_8;
}



/* Function: call_ret_large_struct @ 0001189c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  LargeData local_48;
  
                    /* Unresolved local var: LargeData d@[DW_OP_breg13(sp): 0] */
  ret_large_struct(&local_48,100);
  return local_48.data[0] + local_48.data[0xf];
}



/* Function: func_a @ 000118cc */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 000118e4 */

int func_b(int x)

{
  return x << 1;
}



/* Function: ret_func_ptr @ 000118fc */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_a;
  if (selector != 0) {
    p_Var1 = func_b;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 00011930 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  func_ptr_t p_Var1;
  int iVar2;
  
                    /* Unresolved local var: func_ptr_t f@[DW_OP_breg13(sp): +4] */
  p_Var1 = ret_func_ptr(1);
  iVar2 = (*p_Var1)(5);
  return iVar2;
}



/* Function: ret_opaque_handle @ 00011964 */

void * ret_opaque_handle(int type)

{
  double *pdVar1;
  
  pdVar1 = &ret_opaque_handle::handle2;
  if (type == 0) {
    pdVar1 = (double *)&ret_opaque_handle::handle1;
  }
  return pdVar1;
}



/* Function: call_ret_opaque @ 00011998 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  int *piVar1;
  
                    /* Unresolved local var: void * h@[DW_OP_breg13(sp): +4] */
  piVar1 = ret_opaque_handle(0);
  return *piVar1;
}



/* Function: ret_complex_expr @ 000119c4 */

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



/* Function: call_ret_complex_expr @ 00011a14 */

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



/* Function: ret_multi_branch @ 00011a70 */

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



/* Function: call_ret_multi_branch @ 00011ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int sum@[DW_OP_breg13(sp): +4] */
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00011b50 */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00011b74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
  int local_c;
  
                    /* Unresolved local var: int result@[DW_OP_breg13(sp): +4] */
  ret_void(7,&local_c);
  return local_c;
}



/* Function: test_return_values @ 00011b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  
  printf(&DAT_00012428);
  iVar1 = call_ret_basic();
  printf(&DAT_00012447,iVar1);
  iVar1 = call_ret_pointer();
  printf(&DAT_00012463,iVar1);
  iVar1 = call_ret_small_struct();
  printf(&DAT_0001247f,iVar1);
  iVar1 = call_ret_large_struct();
  printf(&DAT_0001249a,iVar1);
  iVar1 = call_ret_func_ptr();
  printf(&DAT_000124b7,iVar1);
  iVar1 = call_ret_opaque();
  printf(&DAT_000124d3,iVar1);
  iVar1 = call_ret_complex_expr();
  printf(&DAT_000124f0,iVar1);
  iVar1 = call_ret_multi_branch();
  printf(&DAT_0001250c,iVar1);
  iVar1 = call_ret_void();
  printf(&DAT_00012528,iVar1);
  return;
}



/* Function: main @ 00011c94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __aeabi_drsub @ 00011cc8 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __adddf3(param_1,param_2 ^ 0x80000000);
  return;
}



/* Function: __subdf3 @ 00011cd0 */

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
LAB_00011f44:
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
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011f44;
    }
LAB_00011dec:
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
  if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __adddf3 @ 00011cd4 */

ulonglong __adddf3(uint param_1,uint param_2,uint param_3,uint param_4)

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
LAB_00011f44:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011f44;
    }
LAB_00011dec:
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
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __aeabi_ui2d @ 00011f80 */

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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __floatsidf @ 00011fa4 */

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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __extendsfdf2 @ 00011fcc */

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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __floatundidf @ 00012014 */

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
LAB_00011dec:
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
  if (bVar12 && 0xfffff < param_2) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __floatdidf @ 00012028 */

ulonglong __floatdidf(uint param_1,uint param_2)

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
LAB_00011dec:
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
  if (bVar13 && 0xfffff < uVar4) goto LAB_00011dec;
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
      goto LAB_00011e6c;
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
LAB_00011e6c:
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



/* Function: __fixdfsi @ 00012088 */

uint __fixdfsi(uint param_1,uint param_2)

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



/* Function: _fini @ 000120e4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 87 */
