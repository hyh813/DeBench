/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/4/4_gcc_O1_g
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



/* Function: _start @ 000110f0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001111c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011120 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011130 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001114b) */
/* WARNING: Removing unreachable block (ram,0x00011155) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011170 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001119e) */
/* WARNING: Removing unreachable block (ram,0x000111a8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111c0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001121c) */
/* WARNING: Removing unreachable block (ram,0x00011220) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011259 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001125d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: callback_func @ 00011261 */

/* WARNING: Unknown calling convention */

int callback_func(int x)

{
  return x * 2;
}



/* Function: func_a @ 0001126c */

/* WARNING: Unknown calling convention */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 00011278 */

/* WARNING: Unknown calling convention */

int func_b(int x)

{
  return x * 2;
}



/* Function: cdecl_func @ 00011283 */

/* WARNING: Unknown calling convention */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 00011290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 0001129a */

/* WARNING: Unknown calling convention */

int stdcall_func(int a,int b)

{
  return b * a;
}



/* Function: call_stdcall @ 000112aa */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 000112b4 */

int __regparm3 fastcall_func(int a,int b,int c)

{
  int in_stack_00000004;
  
  return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 000112c2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 000112cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 000112d6 */

/* WARNING: Unknown calling convention */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 000112ef */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 000112f9 */

/* WARNING: Unknown calling convention */

int mips_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_mips @ 0001130e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00011318 */

/* WARNING: Unknown calling convention */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00011335 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 0001133f */

/* WARNING: Unknown calling convention */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 00011358 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00011362 */

/* WARNING: Unknown calling convention */

int vectorcall_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_vectorcall @ 00011377 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00011381 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 0001138b */

int varargs_func(int count,...)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    piVar1 = (int *)&stack0x00000008;
    do {
      iVar2 = iVar2 + *piVar1;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (count != iVar3);
  }
  return iVar2;
}



/* Function: func_no_args @ 000113c1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000113cb */

/* WARNING: Unknown calling convention */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 000113f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  
  sVar1 = 0;
  if (s != (char *)0x0) {
    sVar1 = strlen(s);
  }
  return (int)ROUND((double)ll + (double)(int)(sVar1 + x) + d);
}



/* Function: func_struct_byval @ 0001146e */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
  int iVar1;
  longlong *plVar2;
  
                    /* Unresolved local var: int i@[???] */
  plVar2 = s.data;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + (int)*plVar2;
    plVar2 = plVar2 + 1;
  } while (plVar2 != (longlong *)&stack0x00000084);
  return iVar1;
}



/* Function: func_struct_byptr @ 00011498 */

/* WARNING: Unknown calling convention */

int func_struct_byptr(SmallStruct *p)

{
  if (p != (SmallStruct *)0x0) {
    return p->x * p->y;
  }
  return -1;
}



/* Function: test_calling_conventions @ 000114b1 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  LargeStruct *pLVar4;
  int in_GS_OFFSET;
  bool bVar5;
  byte bVar6;
  uint auStack_118 [2];
  LargeStruct large;
  int local_90 [32];
  int local_10;
  
  bVar6 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
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
  __printf_chk(1,&DAT_0001202c,iVar1);
  __printf_chk(1,&DAT_00012054,0x2a);
  __printf_chk(1,&DAT_00012078,0x24);
  __printf_chk(1,&DAT_000120a0,0x75);
                    /* Unresolved local var: int i@[???] */
  uVar2 = 1;
  iVar1 = 0;
  do {
    auStack_118[uVar2 * 2] = uVar2;
    *(int *)((int)large.data + uVar2 * 8 + -4) = iVar1;
    bVar5 = 0xfffffffe < uVar2;
    uVar2 = uVar2 + 1;
    iVar1 = iVar1 + (uint)bVar5;
  } while (iVar1 != 0 || uVar2 != 0x11);
  pLVar4 = &large;
  piVar3 = local_90;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = (int)pLVar4->data[0];
    pLVar4 = (LargeStruct *)((int)pLVar4 + (uint)bVar6 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar6 * -2 + 1;
  }
                    /* Unresolved local var: longlong sum@[???]
                       Unresolved local var: int i@[???] */
  piVar3 = local_90;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *piVar3;
    piVar3 = piVar3 + 2;
  } while (&local_10 != piVar3);
  __printf_chk(1,&DAT_000120c8,iVar1);
  __printf_chk(1,&DAT_000120f4,0x32);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_by_value_int @ 000116af */

int param_by_value_int(int x)

{
  return x * 2;
}



/* Function: call_by_value_int @ 000116ba */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 000116c4 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 000116d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 000116de */

/* WARNING: Unknown calling convention */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 000116e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  return 4;
}



/* Function: param_string @ 000116f2 */

/* WARNING: Unknown calling convention */

int param_string(char *str)

{
  return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 00011704 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 0001170e */

int param_ptr_array(char **arr,int n)

{
  char **ppcVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    ppcVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + **arr;
      arr = arr + 1;
    } while (arr != ppcVar1);
  }
  return iVar2;
}



/* Function: call_ptr_array @ 00011742 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char *strs [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  strs[0] = "abc";
  strs[1] = "def";
  strs[2] = "ghi";
  iVar2 = param_ptr_array(strs,3);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_varargs @ 000117a2 */

int param_varargs(int count,...)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar2 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    piVar1 = (int *)&stack0x00000008;
    do {
      iVar2 = iVar2 + *piVar1;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
    } while (count != iVar3);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 000117d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 000117ef */

/* WARNING: Unknown calling convention */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011805 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: param_double_ptr @ 00011828 */

int param_double_ptr(int **pp,int new_val)

{
  if (pp == (int **)0x0) {
    return -1;
  }
  if (*pp != (int *)0x0) {
    **pp = new_val;
    *pp = (int *)0x0;
    return 1;
  }
  return -1;
}



/* Function: call_double_ptr @ 00011858 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
  int in_GS_OFFSET;
  int val;
  int *ptr;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  val = 10;
  ptr = &val;
  param_double_ptr(&ptr,0x14);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return (uint)(ptr == (int *)0x0) + val;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_complex_cast @ 000118af */

int param_complex_cast(void *p,int type)

{
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * back_ptr@[???] */
    return *(int *)p;
  }
  if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[???] */
    return *(int *)((int)p + 4) + *(int *)p;
  }
  return -1;
}



/* Function: call_complex_cast @ 000118d3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 000118dd */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 000118ea */

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
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return s.data[0] + s.data[0xf];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: param_order_dep @ 00011927 */

/* WARNING: Unknown calling convention */

int param_order_dep(int a,int b)

{
  return b + a;
}



/* Function: call_order_dep @ 00011934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
  return 4;
}



/* Function: test_parameter_passing @ 0001193e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_00012124);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  iVar1 = call_by_value_ptr();
  __printf_chk(1,"PARAM-L1-02: %d\n",iVar1);
  __printf_chk(1,"PARAM-L2-01: %d\n",4);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  iVar1 = call_ptr_array();
  __printf_chk(1,"PARAM-L2-03: %d\n",iVar1);
  iVar1 = call_varargs_param();
  __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
  iVar1 = call_func_ptr_param();
  __printf_chk(1,"PARAM-L3-01: %d\n",iVar1);
  iVar1 = call_double_ptr();
  __printf_chk(1,"PARAM-L3-02: %d\n",iVar1);
  iVar1 = call_complex_cast();
  __printf_chk(1,"PARAM-L3-03: %d\n",iVar1);
  iVar1 = call_struct_byval();
  __printf_chk(1,"PARAM-L3-04: %d\n",iVar1);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}



/* Function: ret_basic_type @ 00011a52 */

/* WARNING: Unknown calling convention */

int ret_basic_type(int x)

{
  return x * 2;
}



/* Function: call_ret_basic @ 00011a5d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00011a67 */

/* WARNING: Unknown calling convention */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00011a73 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00011a7d */

/* WARNING: Unknown calling convention */

SmallPoint * ret_small_struct(int x,int y)

{
  SmallPoint *in_stack_00000004;
  
  in_stack_00000004->x = x;
  in_stack_00000004->y = y;
  return in_stack_00000004;
}



/* Function: call_ret_small_struct @ 00011a95 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00011a9f */

/* WARNING: Unknown calling convention */

LargeData * ret_large_struct(int seed)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  LargeData *in_stack_00000004;
  LargeData d;
  
  iVar3 = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int i@[???] */
  iVar1 = seed + 0x10;
  iVar2 = seed * -4;
  do {
    *(int *)((int)&d + seed * 4 + iVar2) = seed;
    seed = seed + 1;
  } while (seed != iVar1);
  in_stack_00000004->data[0] = d.data[0];
  in_stack_00000004->data[1] = d.data[1];
  in_stack_00000004->data[2] = d.data[2];
  in_stack_00000004->data[3] = d.data[3];
  in_stack_00000004->data[4] = d.data[4];
  in_stack_00000004->data[5] = d.data[5];
  in_stack_00000004->data[6] = d.data[6];
  in_stack_00000004->data[7] = d.data[7];
  in_stack_00000004->data[8] = d.data[8];
  in_stack_00000004->data[9] = d.data[9];
  in_stack_00000004->data[10] = d.data[10];
  in_stack_00000004->data[0xb] = d.data[0xb];
  in_stack_00000004->data[0xc] = d.data[0xc];
  in_stack_00000004->data[0xd] = d.data[0xd];
  in_stack_00000004->data[0xe] = d.data[0xe];
  in_stack_00000004->data[0xf] = d.data[0xf];
  if (iVar3 == *(int *)(in_GS_OFFSET + 0x14)) {
    return in_stack_00000004;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: call_ret_large_struct @ 00011b5a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  int iVar1;
  int in_GS_OFFSET;
  LargeData d;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  ret_large_struct(100);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return d.data[0xf] + d.data[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ret_func_ptr @ 00011b9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_b;
  if (selector == 0) {
    p_Var1 = func_a;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 00011bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  int iVar1;
  
  iVar1 = func_b(5);
  return iVar1;
}



/* Function: ret_opaque_handle @ 00011bcf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void * ret_opaque_handle(int type)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&handle1_1;
  if (type != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00011bf2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00011c07 */

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



/* Function: call_ret_complex_expr @ 00011c21 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00011c2b */

/* WARNING: Unknown calling convention */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = 0x14;
  if ((op != 1) && (iVar1 = 0x1e, op != 2)) {
    iVar1 = (-(uint)(op == 0) & 0xb) - 1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00011c53 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00011c5d */

/* WARNING: Unknown calling convention */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00011c6f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00011c79 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  
  puts(&DAT_000122ac);
  __printf_chk(1,&DAT_000122ca,0x2a);
  iVar1 = call_ret_pointer();
  __printf_chk(1,&DAT_000122e6,iVar1);
  iVar1 = call_ret_small_struct();
  __printf_chk(1,&DAT_00012302,iVar1);
  iVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_0001231d,iVar1);
  iVar1 = call_ret_func_ptr();
  __printf_chk(1,&DAT_0001233a,iVar1);
  __printf_chk(1,&DAT_00012356,handle1_1);
  __printf_chk(1,&DAT_00012373,0x28);
  __printf_chk(1,&DAT_0001238f,0x3c);
  __printf_chk(1,&DAT_000123ab,0x15);
  return;
}



/* Function: main @ 00011d5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00011d7c */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00011d80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011dba) */
/* WARNING: Removing unreachable block (ram,0x00011dd0) */
/* WARNING: Removing unreachable block (ram,0x00011ddd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011dec */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 85 */
