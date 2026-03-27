/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/4/4_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100628 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100640 @ 00100640 */

void FUN_00100640(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100700 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100734 */

/* WARNING: Removing unreachable block (ram,0x00100744) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100750 */

/* WARNING: Removing unreachable block (ram,0x00100768) */
/* WARNING: Removing unreachable block (ram,0x00100774) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100780 */

/* WARNING: Removing unreachable block (ram,0x001007a4) */
/* WARNING: Removing unreachable block (ram,0x001007b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001007bc @ 001007bc */

void FUN_001007bc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 001007c0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: cdecl_func @ 00100814 */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 0010081c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 00100824 */

int stdcall_func(int a,int b)

{
  return b * a;
}



/* Function: call_stdcall @ 0010082c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 00100834 */

int fastcall_func(int a,int b,int c)

{
  return b + a + c;
}



/* Function: call_fastcall @ 00100840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 00100848 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00100850 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 00100864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 0010086c */

int mips_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_mips @ 0010087c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00100884 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 0010089c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 001008a4 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 001008b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 001008c0 */

int vectorcall_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_vectorcall @ 001008d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 001008d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x21;
}



/* Function: varargs_func @ 001008e0 */

int varargs_func(int count,...)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  iVar1 = -0x38;
  iVar2 = 0;
  piVar6 = (int *)register0x00000008;
  if (0 < count) {
    do {
      lVar4 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        piVar3 = (int *)(&stack0xffffffffffffffe0 + lVar4);
        piVar5 = piVar6;
      }
      else {
        piVar5 = piVar6 + 2;
        piVar3 = piVar6;
      }
      count = count + -1;
      iVar2 = *piVar3 + iVar2;
      piVar6 = piVar5;
    } while (count != 0);
  }
  return iVar2;
}



/* Function: func_no_args @ 00100984 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 0010098c */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 001009ac */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  int iVar1;
  size_t sVar2;
  
                    /* Unresolved local var: int len@[???] */
  if (s == (char *)0x0) {
    iVar1 = 0;
  }
  else {
    sVar2 = strlen(s);
    iVar1 = (int)sVar2;
  }
  return (int)((double)(iVar1 + x) + d + (double)ll);
}



/* Function: func_struct_byval @ 00100a04 */

int func_struct_byval(LargeStruct *s)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
                    /* Unresolved local var: longlong sum@[???] */
  lVar3 = 0;
  lVar2 = 0;
  do {
    plVar1 = (long *)((long)s->data + lVar3);
                    /* Unresolved local var: int i@[???] */
    lVar3 = lVar3 + 8;
    lVar2 = *plVar1 + lVar2;
  } while (lVar3 != 0x80);
  return (int)lVar2;
}



/* Function: func_struct_byptr @ 00100a28 */

int func_struct_byptr(SmallStruct *p)

{
  if (p != (SmallStruct *)0x0) {
    return p->y * p->x;
  }
  return -1;
}



/* Function: test_calling_conventions @ 00100a40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long local_120 [16];
  long local_a0 [16];
  
                    /* Unresolved local var: LargeStruct large@[DW_OP_breg31(sp): +128]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: int struct_val@[???]
                       Unresolved local var: int struct_ptr@[???]
                       Unresolved local var: char * test_str@[???]
                       Unresolved local var: SmallStruct s@[???] */
  puts(&DAT_001014be);
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
  uVar2 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_00101214,(ulong)uVar2);
  printf(&DAT_0010123c,0x2a);
  printf(&DAT_0010125e,0x24);
  printf(&DAT_00101285,0x75);
  lVar4 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    lVar3 = lVar4 + 1;
    local_a0[lVar4] = lVar3;
    lVar4 = lVar3;
  } while (lVar3 != 0x10);
  lVar4 = 0;
  lVar3 = 0;
  local_120[9] = local_a0[9];
  local_120[8] = local_a0[8];
  local_120[0xb] = local_a0[0xb];
  local_120[10] = local_a0[10];
  local_120[0xd] = local_a0[0xd];
  local_120[0xc] = local_a0[0xc];
  local_120[0xf] = local_a0[0xf];
  local_120[0xe] = local_a0[0xe];
  local_120[1] = local_a0[1];
  local_120[0] = local_a0[0];
  local_120[3] = local_a0[3];
  local_120[2] = local_a0[2];
  local_120[5] = local_a0[5];
  local_120[4] = local_a0[4];
  local_120[7] = local_a0[7];
  local_120[6] = local_a0[6];
  do {
    plVar1 = (long *)((long)local_120 + lVar4);
                    /* Unresolved local var: longlong sum@[DW_OP_reg1(x1)]
                       Unresolved local var: int i@[???] */
    lVar4 = lVar4 + 8;
    lVar3 = *plVar1 + lVar3;
  } while (lVar4 != 0x80);
  printf(&DAT_001012ad,lVar3);
  printf(&DAT_001012d9,0x32);
  return;
}



/* Function: param_by_value_int @ 00100be0 */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 00100be8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0xf;
}



/* Function: param_by_value_ptr @ 00100bf0 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00100c08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0xb;
}



/* Function: param_array_decay @ 00100c10 */

int param_array_decay(int *arr,int n)

{
  return 8;
}



/* Function: call_array_decay @ 00100c18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
                    /* Unresolved local var: int[10] array@[???] */
  return 8;
}



/* Function: param_string @ 00100c20 */

int param_string(char *str)

{
  return (uint)(byte)str[1] + (uint)(byte)*str;
}



/* Function: call_string_param @ 00100c30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00100c38 */

int param_ptr_array(char **arr,int n)

{
  int iVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    uVar2 = (ulong)(uint)n;
    do {
      uVar2 = uVar2 - 1;
      iVar1 = iVar1 + (uint)(byte)**arr;
      arr = arr + 1;
    } while (uVar2 != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_ptr_array @ 00100c6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
                    /* Unresolved local var: char *[3] strs@[???] */
  return 300;
}



/* Function: param_varargs @ 00100c74 */

int param_varargs(int count,...)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  iVar1 = -0x38;
  iVar2 = 0;
  piVar6 = (int *)register0x00000008;
  if (0 < count) {
    do {
      lVar4 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        piVar3 = (int *)(&stack0xffffffffffffffe0 + lVar4);
        piVar5 = piVar6;
      }
      else {
        piVar5 = piVar6 + 2;
        piVar3 = piVar6;
      }
      count = count + -1;
      iVar2 = *piVar3 + iVar2;
      piVar6 = piVar5;
    } while (count != 0);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00100d18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00100d40 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00100d68 */

int param_double_ptr(int **pp,int new_val)

{
  if ((pp != (int **)0x0) && (*pp != (int *)0x0)) {
    **pp = new_val;
    *pp = (int *)0x0;
    return 1;
  }
  return -1;
}



/* Function: call_double_ptr @ 00100d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[???]
                       Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: param_complex_cast @ 00100d98 */

int param_complex_cast(void *p,int type)

{
  if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[DW_OP_reg0(x0)] */
    return *(int *)((long)p + 4) + *(int *)p;
  }
  if (type == 0) {
                    /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
                       Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)]
                       Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)] */
    return *(int *)p;
  }
  return -1;
}



/* Function: call_complex_cast @ 00100dc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[???] */
  return 0x12345678;
}



/* Function: param_struct_byval @ 00100dcc */

int param_struct_byval(BigStruct *s)

{
  return s->data[0xf] + s->data[0];
}



/* Function: call_struct_byval @ 00100ddc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  long lVar1;
  int local_40 [16];
  
                    /* Unresolved local var: BigStruct s@[???] */
  lVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg8(x8)] */
    local_40[lVar1] = (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00100e0c */

int param_order_dep(int a,int b)

{
  return b + a;
}



/* Function: call_order_dep @ 00100e14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
                    /* Unresolved local var: int i@[???] */
  return 3;
}



/* Function: test_parameter_passing @ 00100e1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  uint uVar1;
  long lVar2;
  int local_50 [16];
  
  puts(&DAT_001014df);
  printf("PARAM-L1-01: %d\n",0xf);
  printf("PARAM-L1-02: %d\n",0xb);
  printf("PARAM-L2-01: %d\n",8);
  printf("PARAM-L2-02: %d\n",0xad);
  printf("PARAM-L2-03: %d\n",300);
  uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  printf("PARAM-L2-04: %d\n",(ulong)uVar1);
  printf("PARAM-L3-01: %d\n",0x14);
  printf("PARAM-L3-02: %d\n",0x15);
  printf("PARAM-L3-03: %d\n",0x12345678);
  lVar2 = 0;
  do {
                    /* Unresolved local var: BigStruct s@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[DW_OP_reg8(x8)] */
    local_50[lVar2] = (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  printf("PARAM-L3-04: %d\n",(ulong)(uint)(local_50[0xf] + local_50[0]));
  printf("PARAM-L3-05: %d\n",3);
  return;
}



/* Function: ret_basic_type @ 00100f2c */

int ret_basic_type(int x)

{
  return x << 1;
}



/* Function: call_ret_basic @ 00100f34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0x2a;
}



/* Function: ret_pointer @ 00100f3c */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00100f44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
                    /* Unresolved local var: int[3] arr@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0x14;
}



/* Function: ret_small_struct @ 00100f4c */

SmallPoint ret_small_struct(int x,int y)

{
  SmallPoint SVar1;
  
  SVar1.y = y;
  SVar1.x = x;
                    /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_reg1(x1); DW_OP_piece: 4] */
  return SVar1;
}



/* Function: call_ret_small_struct @ 00100f58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  return 7;
}



/* Function: ret_large_struct @ 00100f60 */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  long lVar1;
  
                    /* Unresolved local var: LargeData d@[DW_OP_breg8(x8): 0] */
  lVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  do {
    __return_storage_ptr__->data[lVar1] = seed + (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return;
}



/* Function: call_ret_large_struct @ 00100f80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  long lVar1;
  int local_40 [16];
  
                    /* Unresolved local var: LargeData d@[???] */
  lVar1 = 0;
  do {
                    /* Unresolved local var: LargeData d@[???]
                       Unresolved local var: int i@[DW_OP_reg8(x8)] */
    local_40[lVar1] = (int)lVar1 + 100;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00100fb4 */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 00100fbc */

int func_b(int x)

{
  return x << 1;
}



/* Function: ret_func_ptr @ 00100fc4 */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_a;
  if (selector != 0) {
    p_Var1 = func_b;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 00100fe0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
                    /* Unresolved local var: func_ptr_t f@[???] */
  return 10;
}



/* Function: ret_opaque_handle @ 00100fe8 */

void * ret_opaque_handle(int type)

{
  int *piVar1;
  
  piVar1 = &ret_opaque_handle::handle1;
  if (type != 0) {
    piVar1 = (int *)&ret_opaque_handle::handle2;
  }
  return (double *)piVar1;
}



/* Function: call_ret_opaque @ 00101004 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
                    /* Unresolved local var: void * h@[???] */
  return ret_opaque_handle::handle1;
}



/* Function: ret_complex_expr @ 00101010 */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z << 1;
  if (x <= y) {
    iVar1 = z + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101024 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x28;
}



/* Function: ret_multi_branch @ 0010102c */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = op * 10 + 10;
  if (2 < (uint)op) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101044 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x3c;
}



/* Function: ret_void @ 0010104c */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00101058 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
                    /* Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: test_return_values @ 00101060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  long lVar1;
  int local_50 [16];
  
  puts(&DAT_00101500);
  printf(&DAT_001013c1,0x2a);
  printf(&DAT_001013dd,0x14);
  printf(&DAT_001013f9,7);
  lVar1 = 0;
  do {
                    /* Unresolved local var: LargeData d@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[DW_OP_reg8(x8)] */
    local_50[lVar1] = (int)lVar1 + 100;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  printf(&DAT_00101414,(ulong)(uint)(local_50[0xf] + local_50[0]));
  printf(&DAT_00101431,10);
  printf(&DAT_0010144d,(ulong)(uint)ret_opaque_handle::handle1);
  printf(&DAT_0010146a,0x28);
  printf(&DAT_00101486,0x3c);
  printf(&DAT_001014a2,0x15);
  return;
}



/* Function: main @ 0010113c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _fini @ 0010115c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 79 */
