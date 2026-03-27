/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/4/4_gcc_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100738 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100750 @ 00100750 */

void FUN_00100750(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100800 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100834 */

/* WARNING: Removing unreachable block (ram,0x00100844) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100850 */

/* WARNING: Removing unreachable block (ram,0x00100868) */
/* WARNING: Removing unreachable block (ram,0x00100874) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100880 */

/* WARNING: Removing unreachable block (ram,0x001008a4) */
/* WARNING: Removing unreachable block (ram,0x001008b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001008bc @ 001008bc */

void FUN_001008bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001008c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: callback_func @ 00100914 */

int callback_func(int x)

{
  return x << 1;
}



/* Function: func_a @ 0010091c */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 00100924 */

int func_b(int x)

{
  return x << 1;
}



/* Function: cdecl_func @ 0010092c */

int cdecl_func(int a,int b)

{
  return a + b;
}



/* Function: call_cdecl @ 00100934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 0010093c */

int stdcall_func(int a,int b)

{
  return a * b;
}



/* Function: call_stdcall @ 00100944 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 0010094c */

int fastcall_func(int a,int b,int c)

{
  return a + b + c;
}



/* Function: call_fastcall @ 00100958 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00100960 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00100968 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 0010097c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00100984 */

int mips_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_mips @ 00100994 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 0010099c */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 001009b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 001009bc */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_ms_x64 @ 001009d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 001009d8 */

int vectorcall_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_vectorcall @ 001009e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 001009f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x21;
}



/* Function: varargs_func @ 001009f8 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int varargs_func(int count,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  va_list args;
  
                    /* Unresolved local var: int sum@[???] */
  iVar3 = 0;
  args.__gr_offs = -0x38;
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    args.__stack = register0x00000008;
    do {
      piVar4 = args.__stack;
      if (args.__gr_offs < 0) {
        iVar1 = args.__gr_offs + 8;
        if (iVar1 < 1) {
          piVar4 = (int *)(&stack0x00000000 + args.__gr_offs);
          args.__gr_offs = iVar1;
        }
        else {
          args.__stack = (void *)((long)args.__stack + 8);
          args.__gr_offs = iVar1;
        }
      }
      else {
        args.__stack = (void *)((long)args.__stack + 8);
      }
      iVar2 = iVar2 + *piVar4;
      iVar3 = iVar3 + 1;
    } while (count != iVar3);
  }
  return iVar2;
}



/* Function: func_no_args @ 00100ae8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00100af0 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100b10 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  int iVar1;
  size_t sVar2;
  
                    /* Unresolved local var: int len@[???] */
  iVar1 = 0;
  if (s != (char *)0x0) {
    sVar2 = strlen(s);
    iVar1 = (int)sVar2;
  }
  return (int)((double)(iVar1 + x) + d + (double)ll);
}



/* Function: func_struct_byval @ 00100b64 */

int func_struct_byval(LargeStruct *s)

{
  long lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
                    /* Unresolved local var: longlong sum@[???] */
                    /* Unresolved local var: int i@[???] */
  lVar1 = 0;
  plVar2 = s->data;
  do {
    plVar3 = plVar2 + 1;
    lVar1 = lVar1 + *plVar2;
    plVar2 = plVar3;
  } while ((LargeStruct *)plVar3 != s + 1);
  return (int)lVar1;
}



/* Function: func_struct_byptr @ 00100b84 */

int func_struct_byptr(SmallStruct *p)

{
  int iVar1;
  
  if (p == (SmallStruct *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = p->x * p->y;
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 00100ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  long lVar2;
  longlong *plVar3;
  LargeStruct large;
  longlong local_88;
  longlong lStack_80;
  longlong lStack_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong lStack_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong lStack_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong lStack_18;
  longlong lStack_10;
  long local_8;
  longlong *plVar4;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: char * test_str@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: int struct_val@[???]
                       Unresolved local var: SmallStruct s@[???]
                       Unresolved local var: int struct_ptr@[???] */
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101570);
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
  iVar1 = varargs_func(5,1,2,3,4);
  __printf_chk(1,&DAT_00101638,iVar1);
  __printf_chk(1,&DAT_00101660,0x2a);
  __printf_chk(1,&DAT_00101688,0x24);
  iVar1 = func_mixed_args(10,"test",3.14,100);
  __printf_chk(1,&DAT_001016b8,iVar1);
                    /* Unresolved local var: int i@[???] */
  lVar2 = 1;
  do {
    large.data[lVar2 + -1] = lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  lStack_80 = large.data[1];
  local_88 = large.data[0];
  lStack_70 = large.data[3];
  lStack_78 = large.data[2];
  lStack_60 = large.data[5];
  local_68 = large.data[4];
  lStack_50 = large.data[7];
  lStack_58 = large.data[6];
  lStack_40 = large.data[9];
  local_48 = large.data[8];
  lStack_30 = large.data[0xb];
  lStack_38 = large.data[10];
  lStack_20 = large.data[0xd];
  local_28 = large.data[0xc];
  lStack_10 = large.data[0xf];
  lStack_18 = large.data[0xe];
                    /* Unresolved local var: longlong sum@[???]
                       Unresolved local var: int i@[???] */
  lVar2 = 0;
  plVar3 = &local_88;
  do {
    plVar4 = plVar3 + 1;
    lVar2 = lVar2 + *plVar3;
    plVar3 = plVar4;
  } while (&local_8 != plVar4);
  __printf_chk(1,&DAT_001016e0,lVar2);
  __printf_chk(1,&DAT_00101710,0x32);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_by_value_int @ 00100dc0 */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 00100dc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0xf;
}



/* Function: param_by_value_ptr @ 00100dd0 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00100de4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[???]
                       Unresolved local var: int result@[???] */
  return 0xb;
}



/* Function: param_array_decay @ 00100dec */

int param_array_decay(int *arr,int n)

{
  return 8;
}



/* Function: call_array_decay @ 00100df4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
                    /* Unresolved local var: int[10] array@[???] */
  return 8;
}



/* Function: param_string @ 00100dfc */

int param_string(char *str)

{
  return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00100e0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00100e14 */

int param_ptr_array(char **arr,int n)

{
  int iVar1;
  long lVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + (uint)(byte)*arr[lVar2];
      lVar2 = lVar2 + 1;
    } while ((int)lVar2 < n);
  }
  return iVar1;
}



/* Function: call_ptr_array @ 00100e4c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
  long lVar1;
  int iVar2;
  char *strs [3];
  
  lVar1 = ___stack_chk_guard;
  strs[0] = PTR_DAT_00113010;
  strs[1] = PTR_DAT_00113018;
  strs[2] = PTR_DAT_00113020;
  iVar2 = param_ptr_array(strs,3);
  if (lVar1 - ___stack_chk_guard == 0) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: param_varargs @ 00100eb4 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int count,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  va_list args;
  
                    /* Unresolved local var: int sum@[???] */
  iVar3 = 0;
  args.__gr_offs = -0x38;
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    args.__stack = register0x00000008;
    do {
      piVar4 = args.__stack;
      if (args.__gr_offs < 0) {
        iVar1 = args.__gr_offs + 8;
        if (iVar1 < 1) {
          piVar4 = (int *)(&stack0x00000000 + args.__gr_offs);
          args.__gr_offs = iVar1;
        }
        else {
          args.__stack = (void *)((long)args.__stack + 8);
          args.__gr_offs = iVar1;
        }
      }
      else {
        args.__stack = (void *)((long)args.__stack + 8);
      }
      iVar2 = iVar2 + *piVar4;
      iVar3 = iVar3 + 1;
    } while (count != iVar3);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00100fa4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00100fcc */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100fec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: param_double_ptr @ 0010100c */

int param_double_ptr(int **pp,int new_val)

{
  int iVar1;
  
  if (pp == (int **)0x0) {
    iVar1 = -1;
  }
  else if (*pp == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    **pp = new_val;
    *pp = (int *)0x0;
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_double_ptr @ 00101038 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
  int iVar1;
  int val;
  int *ptr;
  long local_8;
  
                    /* Unresolved local var: int result@[???] */
  local_8 = ___stack_chk_guard;
  val = 10;
  ptr = &val;
  param_double_ptr(&ptr,0x14);
  iVar1 = val;
  if (ptr == (int *)0x0) {
    iVar1 = val + 1;
  }
  if (local_8 - ___stack_chk_guard == 0) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: param_complex_cast @ 001010a8 */

int param_complex_cast(void *p,int type)

{
  int iVar1;
  
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * back_ptr@[???] */
    iVar1 = *(int *)p;
  }
  else if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[???] */
    iVar1 = *(int *)p + *(int *)((long)p + 4);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_complex_cast @ 001010d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[???] */
  return 0x12345678;
}



/* Function: param_struct_byval @ 001010e0 */

int param_struct_byval(BigStruct *s)

{
  return s->data[0] + s->data[0xf];
}



/* Function: call_struct_byval @ 001010f0 */

/* WARNING: Removing unreachable block (ram,0x00101154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  int *piVar2;
  BigStruct s;
  
                    /* Unresolved local var: int i@[???] */
  iVar1 = 0;
  piVar2 = s.data;
  do {
    *piVar2 = iVar1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0x10);
  return s.data[0xf] + s.data[0];
}



/* Function: param_order_dep @ 00101158 */

int param_order_dep(int a,int b)

{
  return a + b;
}



/* Function: call_order_dep @ 00101160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
                    /* Unresolved local var: int i@[???] */
  return 4;
}



/* Function: test_parameter_passing @ 00101168 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_00101740);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  iVar1 = call_by_value_ptr();
  __printf_chk(1,"PARAM-L1-02: %d\n",iVar1);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
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



/* Function: ret_basic_type @ 0010127c */

int ret_basic_type(int x)

{
  return x << 1;
}



/* Function: call_ret_basic @ 00101284 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0x2a;
}



/* Function: ret_pointer @ 0010128c */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00101294 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
                    /* Unresolved local var: int[3] arr@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0x14;
}



/* Function: ret_small_struct @ 0010129c */

SmallPoint ret_small_struct(int x,int y)

{
  SmallPoint SVar1;
  
  SVar1.y = y;
  SVar1.x = x;
                    /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_reg1(x1); DW_OP_piece: 4] */
  return SVar1;
}



/* Function: call_ret_small_struct @ 001012a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  return 7;
}



/* Function: ret_large_struct @ 001012b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  long lVar1;
  long lVar2;
  LargeData d;
  
  lVar1 = ___stack_chk_guard;
                    /* Unresolved local var: int i@[???] */
  lVar2 = 1;
  do {
    d.data[lVar2 + -1] = seed + -1 + (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x11);
  *(undefined8 *)(__return_storage_ptr__->data + 2) = d.data._8_8_;
  *(undefined8 *)__return_storage_ptr__->data = d.data._0_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 6) = d.data._24_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 4) = d.data._16_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 10) = d.data._40_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 8) = d.data._32_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 0xe) = d.data._56_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 0xc) = d.data._48_8_;
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: call_ret_large_struct @ 0010132c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  long lVar1;
  LargeData d;
  
  lVar1 = ___stack_chk_guard;
  ret_large_struct(&d,100);
  if (lVar1 - ___stack_chk_guard == 0) {
    return d.data[0] + d.data[0xf];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(d.data[0] + d.data[0xf],&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: ret_func_ptr @ 00101388 */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_b;
  if (selector == 0) {
    p_Var1 = func_a;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 001013a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  int iVar1;
  
                    /* Unresolved local var: func_ptr_t f@[???] */
  iVar1 = func_b(5);
  return iVar1;
}



/* Function: ret_opaque_handle @ 001013bc */

void * ret_opaque_handle(int type)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&handle1_1;
  if (type != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 001013e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
                    /* Unresolved local var: void * h@[???] */
  return handle1_1;
}



/* Function: ret_complex_expr @ 001013ec */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z + 10;
  if (y < x) {
    iVar1 = z << 1;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101400 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x28;
}



/* Function: ret_multi_branch @ 00101408 */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = 0x14;
  if (((op != 1) && (iVar1 = 0x1e, op != 2)) && (iVar1 = 10, op != 0)) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101434 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x3c;
}



/* Function: ret_void @ 0010143c */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00101448 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
                    /* Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: test_return_values @ 00101450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  
  puts(&DAT_00101870);
  __printf_chk(1,&DAT_00101890,0x2a);
  iVar1 = call_ret_pointer();
  __printf_chk(1,&DAT_001018b0,iVar1);
  iVar1 = call_ret_small_struct();
  __printf_chk(1,&DAT_001018d0,iVar1);
  iVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_001018f0,iVar1);
  iVar1 = call_ret_func_ptr();
  __printf_chk(1,&DAT_00101910,iVar1);
  __printf_chk(1,&DAT_00101930,handle1_1);
  __printf_chk(1,&DAT_00101950,0x28);
  __printf_chk(1,&DAT_00101970,0x3c);
  __printf_chk(1,&DAT_00101990,0x15);
  return;
}



/* Function: main @ 00101534 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _fini @ 00101554 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 80 */
