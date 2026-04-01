/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/4/4_gcc_Os_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

/* WARNING: Unknown calling convention */

int func_a(int x)

{
  return x + 10;
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

/* WARNING: Unknown calling convention */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 000112bb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 000112c5 */

/* WARNING: Unknown calling convention */

int stdcall_func(int a,int b)

{
  return b * a;
}



/* Function: call_stdcall @ 000112d7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 000112e1 */

int __regparm3 fastcall_func(int a,int b,int c)

{
  int in_stack_00000004;
  
  return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 000112f2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 000112fc */

undefined4 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00011306 */

/* WARNING: Unknown calling convention */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 0001131e */

undefined4 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00011328 */

/* WARNING: Unknown calling convention */

int mips_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_mips @ 0001133d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00011347 */

/* WARNING: Unknown calling convention */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00011362 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 000113ad */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 000113b7 */

/* WARNING: Unknown calling convention */

int varargs_func(int count,...)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < count; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: func_no_args @ 000113d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000113de */

/* WARNING: Unknown calling convention */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 000113ff */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  
  sVar1 = 0;
  if (s != (char *)0x0) {
    sVar1 = strlen(s);
  }
  return (int)ROUND((double)ll + d + (double)(int)(sVar1 + x));
}



/* Function: func_struct_byval @ 00011471 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + (int)s.data[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  return iVar1;
}



/* Function: func_struct_byptr @ 0001148e */

/* WARNING: Unknown calling convention */

int func_struct_byptr(SmallStruct *p)

{
  int iVar1;
  
  iVar1 = -1;
  if (p != (SmallStruct *)0x0) {
    iVar1 = p->x * p->y;
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 000114a7 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  LargeStruct *pLVar4;
  int *piVar5;
  int in_GS_OFFSET;
  bool bVar6;
  byte bVar7;
  uint auStack_128 [2];
  LargeStruct large;
  int local_a0 [32];
  int local_20;
  undefined4 uStack_14;
  
  bVar7 = 0;
                    /* Unresolved local var: int i@[???] */
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
  iVar1 = varargs_func(5,1,2,3,4,5);
  __printf_chk(1,&DAT_000120c9,iVar1);
  __printf_chk(1,&DAT_000120f1,0x2a);
  __printf_chk(1,&DAT_00012113,0x24);
  __printf_chk(1,&DAT_0001213a,0x75);
  uVar2 = 1;
  iVar1 = 0;
  do {
    iVar3 = uVar2 * 8;
    auStack_128[uVar2 * 2] = uVar2;
    bVar6 = 0xfffffffe < uVar2;
    uVar2 = uVar2 + 1;
    *(int *)((int)large.data + iVar3 + -4) = iVar1;
    iVar1 = iVar1 + (uint)bVar6;
  } while (uVar2 != 0x11 || iVar1 != 0);
                    /* Unresolved local var: longlong sum@[???]
                       Unresolved local var: int i@[???] */
  iVar1 = 0;
  pLVar4 = &large;
  piVar5 = local_a0;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = (int)pLVar4->data[0];
    pLVar4 = (LargeStruct *)((int)pLVar4 + (uint)bVar7 * -8 + 4);
    piVar5 = piVar5 + (uint)bVar7 * -2 + 1;
  }
  iVar3 = 0;
  do {
    iVar3 = iVar3 + local_a0[iVar1 * 2];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  __printf_chk(1,&DAT_00012162,iVar3,0x10);
  __printf_chk(1,&DAT_0001218e,0x32);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: param_by_value_int @ 00011688 */

int param_by_value_int(int x)

{
  return x * 2;
}



/* Function: call_by_value_int @ 00011696 */

undefined4 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 000116a0 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 000116b3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 000116bd */

/* WARNING: Unknown calling convention */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 000116c7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  return 4;
}



/* Function: param_string @ 000116d1 */

/* WARNING: Unknown calling convention */

int param_string(char *str)

{
  return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 000116e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 000116f0 */

int param_ptr_array(char **arr,int n)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *arr[iVar1];
  }
  return iVar2;
}



/* Function: call_ptr_array @ 00011714 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  char **ppcVar4;
  int in_GS_OFFSET;
  char *strs [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  ppuVar3 = &PTR_DAT_00014008;
  ppcVar4 = strs;
  for (iVar2 = 3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppcVar4 = *ppuVar3;
    ppuVar3 = ppuVar3 + 1;
    ppcVar4 = ppcVar4 + 1;
  }
  iVar2 = param_ptr_array(strs,3);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_varargs @ 0001176c */

/* WARNING: Unknown calling convention */

int param_varargs(int count,...)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < count; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00011789 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 000117a4 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 000117b9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: param_double_ptr @ 000117dd */

/* WARNING: Unknown calling convention */

int param_double_ptr(int **pp,int new_val)

{
  int iVar1;
  
  iVar1 = -1;
  if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
    **pp = new_val;
    iVar1 = 1;
    *pp = (int *)0x0;
  }
  return iVar1;
}



/* Function: call_double_ptr @ 00011806 */

undefined4 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00011810 */

int param_complex_cast(void *p,int type)

{
  int iVar1;
  
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * back_ptr@[???] */
    iVar1 = *(int *)p;
  }
  else {
    iVar1 = -1;
    if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[???] */
      iVar1 = *(int *)((int)p + 4) + *(int *)p;
    }
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00011832 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 0001183c */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 0001184b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  BigStruct s;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    s.data[iVar2] = iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  iVar2 = s.data[0xf] + s.data[0];
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_000121c7);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",4);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  iVar1 = call_ptr_array();
  __printf_chk(1,"PARAM-L2-03: %d\n",iVar1);
  iVar1 = call_varargs_param();
  __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
  iVar1 = call_func_ptr_param();
  __printf_chk(1,"PARAM-L3-01: %d\n",iVar1);
  __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
  __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
  iVar1 = call_struct_byval();
  __printf_chk(1,"PARAM-L3-04: %d\n",iVar1);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}



/* Function: ret_basic_type @ 000119ad */

int ret_basic_type(int param_1)

{
  return param_1 * 2;
}



/* Function: call_ret_basic @ 000119bb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 000119c5 */

/* WARNING: Unknown calling convention */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 000119d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 000119de */

/* WARNING: Unknown calling convention */

SmallPoint * ret_small_struct(int x,int y)

{
  SmallPoint *in_stack_00000004;
  
  in_stack_00000004->x = x;
  in_stack_00000004->y = y;
  return in_stack_00000004;
}



/* Function: call_ret_small_struct @ 000119f7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00011a01 */

/* WARNING: Unknown calling convention */

LargeData * ret_large_struct(int seed)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_GS_OFFSET;
  int *in_stack_00000004;
  LargeData d;
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  do {
    *(int *)((int)&d + iVar2 * 4) = seed + iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  iVar2 = 0x10;
  piVar3 = d.data;
  piVar4 = in_stack_00000004;
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    in_stack_00000004 = (int *)__stack_chk_fail_local();
  }
  return (LargeData *)in_stack_00000004;
}



/* Function: call_ret_large_struct @ 00011a4d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  LargeData d;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  ret_large_struct(100);
  iVar2 = d.data[0xf] + d.data[0];
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: ret_func_ptr @ 00011a86 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

func_ptr_t ret_func_ptr(int selector)

{
  code *pcVar1;
  
  pcVar1 = func_a;
  if (selector != 0) {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 00011aac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00011ab6 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

void * ret_opaque_handle(int type)

{
  undefined8 *puVar1;
  
  puVar1 = &handle2_0;
  if (type == 0) {
    puVar1 = (undefined8 *)&handle1_1;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00011adc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00011af1 */

/* WARNING: Unknown calling convention */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z + 10;
  if (y < x) {
    iVar1 = z * 2;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00011b0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00011b16 */

/* WARNING: Unknown calling convention */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 3) {
    iVar1 = (op + 1) * 10;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00011b30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00011b3a */

/* WARNING: Unknown calling convention */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00011b4c */

undefined4 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00011b56 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  
  puts(&DAT_000122a3);
  __printf_chk(1,&DAT_000122c1,0x2a);
  __printf_chk(1,&DAT_000122dd,0x14);
  __printf_chk(1,&DAT_000122f9,7);
  iVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_00012314,iVar1);
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
