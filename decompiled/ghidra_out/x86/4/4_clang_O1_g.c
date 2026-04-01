/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/4/4_clang_O1_g
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



/* Function: _start @ 00011090 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110bc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110c0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000110d0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000110eb) */
/* WARNING: Removing unreachable block (ram,0x000110f5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011110 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001113e) */
/* WARNING: Removing unreachable block (ram,0x00011148) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011160 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111bc) */
/* WARNING: Removing unreachable block (ram,0x000111c0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000111f9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000111fd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: cdecl_func @ 00011210 */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 00011220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 00011230 */

int stdcall_func(int a,int b)

{
  return b * a;
}



/* Function: call_stdcall @ 00011240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00011250 */

int __regparm3 fastcall_func(int a,int b,int c)

{
  int in_stack_00000004;
  
  return c + b + in_stack_00000004;
}



/* Function: call_fastcall @ 00011260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00011270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00011280 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 000112a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 000112b0 */

int mips_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_mips @ 000112d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 000112e0 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 00011310 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 00011330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00011340 */

int vectorcall_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_vectorcall @ 00011360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00011370 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x21;
}



/* Function: varargs_func @ 00011380 */

int varargs_func(int count,...)

{
  int iVar1;
  int *local_8;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
  iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  local_8 = (int *)&stack0x00000008;
  if (0 < count) {
    do {
      iVar1 = iVar1 + *local_8;
      count = count + -1;
      local_8 = local_8 + 1;
    } while (count != 0);
  }
  return iVar1;
}



/* Function: func_no_args @ 000113c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000113d0 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00011400 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  
                    /* Unresolved local var: int len@[???] */
  if (s == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(s);
  }
  return (int)ROUND((double)ll + d + (double)(int)(sVar1 + x));
}



/* Function: func_struct_byval @ 00011490 */

int func_struct_byval(LargeStruct s)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: longlong sum@[???] */
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + (int)s.data[iVar2];
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  return iVar1;
}



/* Function: func_struct_byptr @ 000114c0 */

int func_struct_byptr(SmallStruct *p)

{
  if (p != (SmallStruct *)0x0) {
    return p->y * p->x;
  }
  return -1;
}



/* Function: test_calling_conventions @ 000114e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  int iVar2;
  int aiStack_8c [34];
  
                    /* Unresolved local var: LargeStruct large@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: int struct_val@[???]
                       Unresolved local var: int struct_ptr@[???]
                       Unresolved local var: SmallStruct s@[???]
                       Unresolved local var: char * test_str@[???] */
  puts(&DAT_00012352);
  printf("CALL-L1-01: %d\n",0xf);
  printf("CALL-L1-02: %d\n",0x32);
  printf("CALL-L1-03: %d\n",6);
  printf("CALL-L1-04: %d\n",0xf);
  printf("CALL-L1-05: %d\n",0xf);
  printf("CALL-L1-06: %d\n",100);
  printf("CALL-L1-07: %d\n",0x15);
  printf("CALL-L1-08: %d\n",0xf);
  printf("CALL-L1-09: %d\n",10);
  printf("CALL-L1-10: %d\n",0x21);
  iVar1 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_000120a8,iVar1);
  printf(&DAT_000120d0,0x2a);
  printf(&DAT_000120f2,0x24);
  printf(&DAT_00012119,0x75);
  iVar1 = 1;
  do {
    aiStack_8c[iVar1 * 2 + 1] = 0;
    aiStack_8c[iVar1 * 2] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x11);
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + aiStack_8c[iVar2 * 2 + 2];
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10);
  printf(&DAT_00012141,iVar1);
  printf(&DAT_0001216d,0x32);
  return;
}



/* Function: param_by_value_int @ 00011670 */

int param_by_value_int(int x)

{
  return x * 2;
}



/* Function: call_by_value_int @ 00011680 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0xf;
}



/* Function: param_by_value_ptr @ 00011690 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 000116a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0xb;
}



/* Function: param_array_decay @ 000116b0 */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 000116c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
                    /* Unresolved local var: int[10] array@[???] */
  return 4;
}



/* Function: param_string @ 000116d0 */

int param_string(char *str)

{
  return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 000116e0 */

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
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *arr[iVar2];
      iVar2 = iVar2 + 1;
    } while (n != iVar2);
  }
  return iVar1;
}



/* Function: call_ptr_array @ 00011730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
                    /* Unresolved local var: char *[3] strs@[???] */
  return 300;
}



/* Function: param_varargs @ 00011740 */

int param_varargs(int count,...)

{
  int iVar1;
  int *local_8;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
  iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  local_8 = (int *)&stack0x00000008;
  if (0 < count) {
    do {
      iVar1 = iVar1 + *local_8;
      count = count + -1;
      local_8 = local_8 + 1;
    } while (count != 0);
  }
  return iVar1;
}



/* Function: call_varargs_param @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 000117b0 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 000117e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 000117f0 */

int param_double_ptr(int **pp,int new_val)

{
  int iVar1;
  
  iVar1 = -1;
  if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
    **pp = new_val;
    *pp = (int *)0x0;
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_double_ptr @ 00011820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[???]
                       Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: param_complex_cast @ 00011830 */

int param_complex_cast(void *p,int type)

{
  int iVar1;
  
  if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[DW_OP_reg1(ECX)] */
    iVar1 = *(int *)((int)p + 4) + *(int *)p;
  }
  else {
    iVar1 = -1;
    if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[DW_OP_reg1(ECX)]
                       Unresolved local var: int * back_ptr@[DW_OP_reg1(ECX)]
                       Unresolved local var: char * char_ptr@[DW_OP_reg1(ECX)] */
      return *(int *)p;
    }
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00011850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[???] */
  return 0x12345678;
}



/* Function: param_struct_byval @ 00011860 */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00011870 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  int local_44 [17];
  
                    /* Unresolved local var: BigStruct s@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
    local_44[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return local_44[0xf] + local_44[0];
}



/* Function: param_order_dep @ 000118a0 */

int param_order_dep(int a,int b)

{
  return b + a;
}



/* Function: call_order_dep @ 000118b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
                    /* Unresolved local var: int i@[???] */
  return 3;
}



/* Function: test_parameter_passing @ 000118c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  int local_44 [16];
  
  puts(&DAT_00012373);
  printf("PARAM-L1-01: %d\n",0xf);
  printf("PARAM-L1-02: %d\n",0xb);
  printf("PARAM-L2-01: %d\n",4);
  printf("PARAM-L2-02: %d\n",0xad);
  printf("PARAM-L2-03: %d\n",300);
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  printf("PARAM-L2-04: %d\n",iVar1);
  printf("PARAM-L3-01: %d\n",0x14);
  printf("PARAM-L3-02: %d\n",0x15);
  printf("PARAM-L3-03: %d\n",0x12345678);
  iVar1 = 0;
  do {
                    /* Unresolved local var: BigStruct s@[???]
                       Unresolved local var: int i@[DW_OP_reg0(EAX)] */
    local_44[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  printf("PARAM-L3-04: %d\n",local_44[0xf] + local_44[0]);
  printf("PARAM-L3-05: %d\n",3);
  return;
}



/* Function: ret_basic_type @ 000119e0 */

int ret_basic_type(int x)

{
  return x * 2;
}



/* Function: call_ret_basic @ 000119f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0x2a;
}



/* Function: ret_pointer @ 00011a00 */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00011a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
                    /* Unresolved local var: int[3] arr@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0x14;
}



/* Function: ret_small_struct @ 00011a20 */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  __return_storage_ptr__->x = x;
  __return_storage_ptr__->y = y;
  return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00011a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  return 7;
}



/* Function: ret_large_struct @ 00011a50 */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  int iVar1;
  
                    /* Unresolved local var: LargeData d@[???] */
  iVar1 = 0;
  do {
    __return_storage_ptr__->data[iVar1] = seed + iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00011a80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  int iVar1;
  int local_44 [17];
  
                    /* Unresolved local var: LargeData d@[???] */
  iVar1 = 100;
  do {
                    /* Unresolved local var: int i@[???] */
    local_44[iVar1 + -100] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x74);
  return local_44[0xf] + local_44[0];
}



/* Function: func_a @ 00011ab0 */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 00011ac0 */

int func_b(int x)

{
  return x * 2;
}



/* Function: ret_func_ptr @ 00011ad0 */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_b;
  if (selector == 0) {
    p_Var1 = func_a;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 00011b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
                    /* Unresolved local var: func_ptr_t f@[???] */
  return 10;
}



/* Function: ret_opaque_handle @ 00011b10 */

void * ret_opaque_handle(int type)

{
  double *pdVar1;
  
  pdVar1 = &ret_opaque_handle::handle2;
  if (type == 0) {
    pdVar1 = (double *)&ret_opaque_handle::handle1;
  }
  return pdVar1;
}



/* Function: call_ret_opaque @ 00011b40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
                    /* Unresolved local var: void * h@[???] */
  return ret_opaque_handle::handle1;
}



/* Function: ret_complex_expr @ 00011b60 */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z + 10;
  if (y < x) {
    iVar1 = z * 2;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00011b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x28;
}



/* Function: ret_multi_branch @ 00011b90 */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 3) {
    iVar1 = op * 10 + 10;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00011bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x3c;
}



/* Function: ret_void @ 00011bc0 */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00011bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
                    /* Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: test_return_values @ 00011be0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  int aiStackY_1d4 [97];
  undefined4 uStackY_50;
  int local_44 [16];
  
  uStackY_50 = 0x11bfe;
  puts(&DAT_00012394);
  uStackY_50 = 0x11c14;
  printf(&DAT_00012255);
  uStackY_50 = 0x11c2a;
  printf(&DAT_00012271);
  uStackY_50 = 0x11c40;
  printf(&DAT_0001228d);
  iVar1 = 100;
  do {
                    /* Unresolved local var: LargeData d@[???]
                       Unresolved local var: int i@[???] */
    aiStackY_1d4[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x74);
  uStackY_50 = 0x11c79;
  printf(&DAT_000122a8);
  uStackY_50 = 0x11c8f;
  printf(&DAT_000122c5);
  uStackY_50 = 0x11ca7;
  printf(&DAT_000122e1);
  uStackY_50 = 0x11cbd;
  printf(&DAT_000122fe);
  uStackY_50 = 0x11cd3;
  printf(&DAT_0001231a);
  uStackY_50 = 0x11ce9;
  printf(&DAT_00012336);
  return;
}



/* Function: main @ 00011cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00011d20 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00011d3a) */
/* WARNING: Removing unreachable block (ram,0x00011d50) */
/* WARNING: Removing unreachable block (ram,0x00011d5d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00011d6c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 82 */
