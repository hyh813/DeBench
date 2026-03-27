/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/4/4_gcc_O3_g
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



/* Function: main @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
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



/* Function: func_a @ 00011270 */

/* WARNING: Unknown calling convention */

int func_a(int x)

{
  return x + 10;
}



/* Function: param_varargs @ 00011280 */

/* DWARF original prototype: int param_varargs(int count, int count, ...) */

int param_varargs(int count,int count_1,...)

{
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  return in_stack_0000000c + count_1 + in_stack_00000010 + in_stack_00000014;
}



/* Function: varargs_func @ 000112a0 */

/* DWARF original prototype: int varargs_func(int count, int count, ...) */

int varargs_func(int count,int count_1,...)

{
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  return in_stack_0000000c + count_1 + in_stack_00000010 + in_stack_00000014 + in_stack_00000018;
}



/* Function: func_b @ 000112c0 */

int func_b(int param_1)

{
  return param_1 * 2;
}



/* Function: cdecl_func @ 000112d0 */

/* WARNING: Unknown calling convention */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 000112e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 000112f0 */

/* WARNING: Unknown calling convention */

int stdcall_func(int a,int b)

{
  return b * a;
}



/* Function: call_stdcall @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00011310 */

int __regparm3 fastcall_func(int a,int b,int c)

{
  int in_stack_00000004;
  
  return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 00011320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00011330 */

undefined4 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00011340 */

/* WARNING: Unknown calling convention */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 00011360 */

undefined4 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00011370 */

/* WARNING: Unknown calling convention */

int mips_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_mips @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 000113a0 */

/* WARNING: Unknown calling convention */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 000113c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 000113d0 */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_2 + param_1 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 000113f0 */

undefined4 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00011400 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00011430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  return 0x21;
}



/* Function: varargs_func @ 00011440 */

int varargs_func(int count,...)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < count) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (count != iVar1);
    return iVar2;
  }
  return 0;
}



/* Function: func_no_args @ 00011480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00011490 */

/* WARNING: Unknown calling convention */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 000114c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  
  if (s != (char *)0x0) {
    sVar1 = strlen(s);
    x = x + sVar1;
  }
  return (int)ROUND((double)ll + (double)x + d);
}



/* Function: func_struct_byval @ 00011540 */

/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
                    /* Unresolved local var: longlong sum@[???] */
                    /* Unresolved local var: int i@[???] */
  return (int)s.data[1] + (int)s.data[0] + (int)s.data[2] + (int)s.data[3] + (int)s.data[4] +
         (int)s.data[5] + (int)s.data[6] + (int)s.data[7] + (int)s.data[8] + (int)s.data[9] +
         (int)s.data[10] + (int)s.data[0xb] + (int)s.data[0xc] + (int)s.data[0xd] + (int)s.data[0xe]
         + (int)s.data[0xf];
}



/* Function: func_struct_byptr @ 00011590 */

/* WARNING: Unknown calling convention */

int func_struct_byptr(SmallStruct *p)

{
  if (p != (SmallStruct *)0x0) {
    return p->x * p->y;
  }
  return -1;
}



/* Function: test_calling_conventions @ 000115b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  
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
  __printf_chk(1,&DAT_000120c8,0x88);
  __printf_chk(1,&DAT_000120f4,0x32);
  return;
}



/* Function: param_by_value_int @ 00011720 */

int param_by_value_int(int x)

{
  return x * 2;
}



/* Function: call_by_value_int @ 00011730 */

undefined4 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00011740 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00011750 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  return 0xb;
}



/* Function: param_array_decay @ 00011760 */

/* WARNING: Unknown calling convention */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 00011770 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  return 4;
}



/* Function: param_string @ 00011780 */

/* WARNING: Unknown calling convention */

int param_string(char *str)

{
  return (int)*str + (int)str[1];
}



/* Function: call_string_param @ 000117a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 000117b0 */

int param_ptr_array(char **arr,int n)

{
  char **ppcVar1;
  char *pcVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    ppcVar1 = arr + n;
    iVar3 = 0;
    do {
      pcVar2 = *arr;
      arr = arr + 1;
      iVar3 = iVar3 + *pcVar2;
    } while (ppcVar1 != arr);
    return iVar3;
  }
  return 0;
}



/* Function: call_ptr_array @ 000117f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  return 300;
}



/* Function: param_varargs @ 00011800 */

int param_varargs(int count,...)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < count) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(&stack0x00000008 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (count != iVar1);
    return iVar2;
  }
  return 0;
}



/* Function: call_varargs_param @ 00011840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00011860 */

/* WARNING: Unknown calling convention */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00011880 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00011890 */

int param_double_ptr(int **pp,int new_val)

{
  if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
    **pp = new_val;
    *pp = (int *)0x0;
    return 1;
  }
  return -1;
}



/* Function: call_double_ptr @ 000118c0 */

undefined4 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 000118d0 */

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



/* Function: call_complex_cast @ 00011900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  return 0x12345678;
}



/* Function: param_struct_byval @ 00011910 */

/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00011920 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  return 0xf;
}



/* Function: param_order_dep @ 00011930 */

int param_order_dep(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: call_order_dep @ 00011940 */

undefined4 call_order_dep(void)

{
  return 4;
}



/* Function: test_parameter_passing @ 00011950 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_00012124);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",4);
  __printf_chk(1,"PARAM-L2-02: %d\n",0xad);
  __printf_chk(1,"PARAM-L2-03: %d\n",300);
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  __printf_chk(1,"PARAM-L2-04: %d\n",iVar1);
  __printf_chk(1,"PARAM-L3-01: %d\n",0x14);
  __printf_chk(1,"PARAM-L3-02: %d\n",0x15);
  __printf_chk(1,"PARAM-L3-03: %d\n",0x12345678);
  __printf_chk(1,"PARAM-L3-04: %d\n",0xf);
  __printf_chk(1,"PARAM-L3-05: %d\n",4);
  return;
}



/* Function: ret_basic_type @ 00011a70 */

int ret_basic_type(int param_1)

{
  return param_1 * 2;
}



/* Function: call_ret_basic @ 00011a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  return 0x2a;
}



/* Function: ret_pointer @ 00011a90 */

/* WARNING: Unknown calling convention */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00011aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  return 0x14;
}



/* Function: ret_small_struct @ 00011ab0 */

/* WARNING: Unknown calling convention */

SmallPoint * ret_small_struct(int x,int y)

{
  SmallPoint *in_stack_00000004;
  
  in_stack_00000004->x = x;
  in_stack_00000004->y = y;
  return in_stack_00000004;
}



/* Function: call_ret_small_struct @ 00011ad0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  return 7;
}



/* Function: ret_large_struct @ 00011ae0 */

/* WARNING: Unknown calling convention */

LargeData * ret_large_struct(int seed)

{
  LargeData *d;
  
                    /* Unresolved local var: int i@[???] */
  d->data[0] = seed;
  d->data[1] = seed + 1;
  d->data[2] = seed + 2;
  d->data[3] = seed + 3;
  d->data[4] = seed + 4;
  d->data[5] = seed + 5;
  d->data[6] = seed + 6;
  d->data[7] = seed + 7;
  d->data[8] = seed + 8;
  d->data[9] = seed + 9;
  d->data[10] = seed + 10;
  d->data[0xb] = seed + 0xb;
  d->data[0xc] = seed + 0xc;
  d->data[0xd] = seed + 0xd;
  d->data[0xf] = seed + 0xf;
  d->data[0xe] = seed + 0xe;
  return d;
}



/* Function: call_ret_large_struct @ 00011b50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  return 0xd7;
}



/* Function: ret_func_ptr @ 00011b60 */

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



/* Function: call_ret_func_ptr @ 00011b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  return 10;
}



/* Function: ret_opaque_handle @ 00011ba0 */

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



/* Function: call_ret_opaque @ 00011bd0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  return handle1_1;
}



/* Function: ret_complex_expr @ 00011bf0 */

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



/* Function: call_ret_complex_expr @ 00011c10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  return 0x28;
}



/* Function: ret_multi_branch @ 00011c20 */

/* WARNING: Unknown calling convention */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 3) {
    iVar1 = (op * 5 + 5) * 2;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00011c40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  return 0x3c;
}



/* Function: ret_void @ 00011c50 */

/* WARNING: Unknown calling convention */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00011c70 */

undefined4 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 00011c80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  puts(&DAT_000122a0);
  __printf_chk(1,&DAT_000122be,0x2a);
  __printf_chk(1,&DAT_000122da,0x14);
  __printf_chk(1,&DAT_000122f6,7);
  __printf_chk(1,&DAT_00012311,0xd7);
  __printf_chk(1,&DAT_0001232e,10);
  __printf_chk(1,&DAT_0001234a,handle1_1);
  __printf_chk(1,&DAT_00012367,0x28);
  __printf_chk(1,&DAT_00012383,0x3c);
  __printf_chk(1,&DAT_0001239f,0x15);
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 00011d56 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __do_global_ctors_aux @ 00011d60 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011d7a) */
/* WARNING: Removing unreachable block (ram,0x00011d90) */
/* WARNING: Removing unreachable block (ram,0x00011d9d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011dac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 85 */
