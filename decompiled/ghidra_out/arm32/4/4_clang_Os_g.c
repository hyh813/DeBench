/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/4/4_clang_Os_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000103e4 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010458 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 0001049c */

/* WARNING: Removing unreachable block (ram,0x000104b0) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000104c0 */

/* WARNING: Removing unreachable block (ram,0x000104e0) */
/* WARNING: Removing unreachable block (ram,0x000104ec) */
/* WARNING: Removing unreachable block (ram,0x000104f0) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010504 */

/* WARNING: Removing unreachable block (ram,0x00010530) */
/* WARNING: Removing unreachable block (ram,0x0001053c) */
/* WARNING: Removing unreachable block (ram,0x00010540) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010554 */

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



/* Function: cdecl_func @ 000105c0 */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 000105c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 000105d0 */

int stdcall_func(int a,int b)

{
  return b * a;
}



/* Function: call_stdcall @ 000105dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 000105e4 */

int fastcall_func(int a,int b,int c)

{
  return b + a + c;
}



/* Function: call_fastcall @ 000105f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 000105f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 00010600 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_arm_aapcs @ 00010618 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 00010620 */

int mips_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_mips @ 00010630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 00010638 */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return b + a + c + d + e + f;
}



/* Function: call_amd64_sysv @ 00010658 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 00010660 */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return b + a + c + d + e;
}



/* Function: call_ms_x64 @ 00010678 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00010680 */

int vectorcall_func(int a,int b,int c,int d)

{
  return b + a + c + d;
}



/* Function: call_vectorcall @ 00010690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00010698 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x21;
}



/* Function: varargs_func @ 000106a0 */

int varargs_func(int count,...)

{
  int *piVar1;
  int iVar2;
  int local_c [3];
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar1 = local_c;
    do {
      count = count + -1;
      iVar2 = *piVar1 + iVar2;
      piVar1 = piVar1 + 1;
    } while (count != 0);
  }
  return iVar2;
}



/* Function: func_no_args @ 000106f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 000106f8 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return b + a + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00010728 */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
                    /* Unresolved local var: int len@[???] */
  if (s == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(s);
  }
  uVar3 = __floatsidf(sVar1 + x);
  uVar3 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)ll,(int)((ulonglong)ll >> 0x20));
  uVar4 = __floatdidf(in_stack_00000000,in_stack_00000004);
  __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  iVar2 = __fixdfsi();
  return iVar2;
}



/* Function: func_struct_byval @ 000107a0 */

int func_struct_byval(LargeStruct s)

{
  int local_10 [4];
  
                    /* Unresolved local var: longlong sum@[???] */
  s.data[0]._4_4_ = 0;
  s.data[0]._0_4_ = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    s.data[1]._0_4_ = (int *)((int)local_10 + s.data[0]._4_4_);
    s.data[0]._4_4_ = s.data[0]._4_4_ + 8;
    s.data[0]._0_4_ = *(int *)s.data[1] + (int)s.data[0];
  } while (s.data[0]._4_4_ != 0x80);
  return (int)s.data[0];
}



/* Function: func_struct_byptr @ 000107ec */

int func_struct_byptr(SmallStruct *p)

{
  int iVar1;
  
  if (p == (SmallStruct *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = p->y * p->x;
  }
  return iVar1;
}



/* Function: test_calling_conventions @ 00010800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  double d;
  uint local_90 [32];
  
                    /* Unresolved local var: LargeStruct large@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: char * test_str@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: int struct_val@[???]
                       Unresolved local var: int struct_ptr@[???]
                       Unresolved local var: SmallStruct s@[???] */
  puts(&DAT_0001178b);
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
  uVar5 = 1;
  iVar1 = varargs_func(5,1,2,3,4,5);
  printf(&DAT_000114dc,iVar1);
  printf(&DAT_00011504,0x2a);
  printf(&DAT_00011526,0x24);
  iVar1 = func_mixed_args(10,"test",d,0x40091eb851eb851f);
  printf(&DAT_00011552,iVar1);
  puVar2 = local_90;
  do {
                    /* Unresolved local var: int i@[???] */
    *puVar2 = uVar5;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    uVar5 = uVar5 + 1;
  } while (uVar5 != 0x11);
  uVar5 = 0;
  iVar4 = 0;
  iVar1 = 0;
  do {
                    /* Unresolved local var: longlong sum@[???]
                       Unresolved local var: int i@[???] */
    uVar6 = *(uint *)((int)local_90 + iVar1);
    iVar3 = iVar1 + 8;
    bVar7 = CARRY4(uVar6,uVar5);
    uVar5 = uVar6 + uVar5;
    iVar4 = *(int *)((int)local_90 + iVar1 + 4) + iVar4 + (uint)bVar7;
    iVar1 = iVar3;
  } while (iVar3 != 0x80);
  printf(&DAT_0001157a,uVar5,local_90,iVar4);
  printf(&DAT_000115a6,0x32);
  return;
}



/* Function: param_by_value_int @ 000109f8 */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 00010a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0xf;
}



/* Function: param_by_value_ptr @ 00010a08 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00010a1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0xb;
}



/* Function: param_array_decay @ 00010a24 */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 00010a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
                    /* Unresolved local var: int[10] array@[???] */
  return 4;
}



/* Function: param_string @ 00010a34 */

int param_string(char *str)

{
  return (uint)(byte)str[1] + (uint)(byte)*str;
}



/* Function: call_string_param @ 00010a44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00010a4c */

int param_ptr_array(char **arr,int n)

{
  int iVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    do {
      n = n + -1;
      iVar1 = iVar1 + (uint)(byte)**arr;
      arr = arr + 1;
    } while (n != 0);
    return iVar1;
  }
  return 0;
}



/* Function: call_ptr_array @ 00010a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ptr_array(void)

{
                    /* Unresolved local var: char *[3] strs@[???] */
  return 300;
}



/* Function: param_varargs @ 00010a84 */

int param_varargs(int count,...)

{
  int *piVar1;
  int iVar2;
  int local_c [3];
  
                    /* Unresolved local var: va_list args@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (count < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    piVar1 = local_c;
    do {
      count = count + -1;
      iVar2 = *piVar1 + iVar2;
      piVar1 = piVar1 + 1;
    } while (count != 0);
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00010ad4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00010b04 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00010b24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  return 0x14;
}



/* Function: param_double_ptr @ 00010b2c */

int param_double_ptr(int **pp,int new_val)

{
  int iVar1;
  int *in_r3;
  
  iVar1 = -1;
  if (pp != (int **)0x0) {
    in_r3 = *pp;
  }
  if (pp != (int **)0x0 && in_r3 != (int *)0x0) {
    *in_r3 = new_val;
    *pp = (int *)0x0;
    iVar1 = 1;
  }
  return iVar1;
}



/* Function: call_double_ptr @ 00010b54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[???]
                       Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: param_complex_cast @ 00010b5c */

int param_complex_cast(void *p,int type)

{
  int iVar1;
  
  if (type == 1) {
                    /* Unresolved local var: TestIntPair * s@[???] */
    iVar1 = *(int *)((int)p + 4) + *(int *)p;
  }
  else {
    iVar1 = -1;
                    /* Unresolved local var: int * int_ptr@[DW_OP_reg0(r0)]
                       Unresolved local var: int * back_ptr@[DW_OP_reg0(r0)]
                       Unresolved local var: char * char_ptr@[DW_OP_reg0(r0)] */
    if (type == 0) {
      iVar1 = *(int *)p;
    }
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00010b88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[???] */
  return 0x12345678;
}



/* Function: param_struct_byval @ 00010b94 */

int param_struct_byval(BigStruct s)

{
  s.data[0xf] = s.data[0xf];
  s.data[0] = s.data[0] + s.data[0xf];
  return s.data[0];
}



/* Function: call_struct_byval @ 00010ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  int local_40 [16];
  
                    /* Unresolved local var: BigStruct s@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_40[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: param_order_dep @ 00010bd0 */

int param_order_dep(int a,int b)

{
  return b + a;
}



/* Function: call_order_dep @ 00010bd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
                    /* Unresolved local var: int i@[???] */
  return 3;
}



/* Function: test_parameter_passing @ 00010be0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  int local_48 [16];
  
  puts(&DAT_000117ac);
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
                       Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_48[iVar1] = iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  printf("PARAM-L3-04: %d\n",local_48[0xf] + local_48[0]);
  printf("PARAM-L3-05: %d\n",3);
  return;
}



/* Function: ret_basic_type @ 00010d1c */

int ret_basic_type(int x)

{
  return x << 1;
}



/* Function: call_ret_basic @ 00010d24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0x2a;
}



/* Function: ret_pointer @ 00010d2c */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 00010d34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
                    /* Unresolved local var: int[3] arr@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0x14;
}



/* Function: ret_small_struct @ 00010d3c */

SmallPoint * ret_small_struct(SmallPoint *__return_storage_ptr__,int x,int y)

{
                    /* Unresolved local var: SmallPoint p@[DW_OP_breg0(r0): 0] */
  __return_storage_ptr__->x = x;
  __return_storage_ptr__->y = y;
  return __return_storage_ptr__;
}



/* Function: call_ret_small_struct @ 00010d44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  return 7;
}



/* Function: ret_large_struct @ 00010d4c */

LargeData * ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  int iVar1;
  
                    /* Unresolved local var: LargeData d@[DW_OP_breg0(r0): 0] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg2(r2)] */
    __return_storage_ptr__->data[iVar1] = seed + iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return __return_storage_ptr__;
}



/* Function: call_ret_large_struct @ 00010d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  int iVar1;
  int local_40 [16];
  
                    /* Unresolved local var: LargeData d@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: LargeData d@[???]
                       Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_40[iVar1] = iVar1 + 100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  return local_40[0xf] + local_40[0];
}



/* Function: func_a @ 00010d9c */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 00010da4 */

int func_b(int x)

{
  return x << 1;
}



/* Function: ret_func_ptr @ 00010dac */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_b;
  if (selector == 0) {
    p_Var1 = func_a;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 00010dd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
                    /* Unresolved local var: func_ptr_t f@[???] */
  return 10;
}



/* Function: ret_opaque_handle @ 00010ddc */

void * ret_opaque_handle(int type)

{
  double *pdVar1;
  
  pdVar1 = &ret_opaque_handle::handle2;
  if (type == 0) {
    pdVar1 = (double *)&ret_opaque_handle::handle1;
  }
  return pdVar1;
}



/* Function: call_ret_opaque @ 00010e04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
                    /* Unresolved local var: void * h@[???] */
  return ret_opaque_handle::handle1;
}



/* Function: ret_complex_expr @ 00010e14 */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z + 10;
  if (y < x) {
    iVar1 = z << 1;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00010e28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x28;
}



/* Function: ret_multi_branch @ 00010e30 */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)op < 3) {
    iVar1 = op * 10 + 10;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00010e4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x3c;
}



/* Function: ret_void @ 00010e54 */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
                    /* Unresolved local var: int result@[???] */
  return 0x15;
}



/* Function: test_return_values @ 00010e68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  int local_48 [16];
  
  puts(&DAT_000117cd);
  printf(&DAT_0001168e,0x2a);
  printf(&DAT_000116aa,0x14);
  printf(&DAT_000116c6,7);
  iVar1 = 0;
  do {
                    /* Unresolved local var: LargeData d@[???]
                       Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_48[iVar1] = iVar1 + 100;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x10);
  printf(&DAT_000116e1,local_48[0xf] + local_48[0]);
  printf(&DAT_000116fe,10);
  printf(&DAT_0001171a,ret_opaque_handle::handle1);
  printf(&DAT_00011737,0x28);
  printf(&DAT_00011753,0x3c);
  printf(&DAT_0001176f,0x15);
  return;
}



/* Function: main @ 00010f68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __aeabi_drsub @ 00010f84 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __adddf3(param_1,param_2 ^ 0x80000000);
  return;
}



/* Function: __subdf3 @ 00010f8c */

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
LAB_00011200:
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
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011200;
    }
LAB_000110a8:
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
  if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_000110a8;
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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __adddf3 @ 00010f90 */

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
LAB_00011200:
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
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011200;
    }
LAB_000110a8:
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
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_000110a8;
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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __aeabi_ui2d @ 0001123c */

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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __floatsidf @ 00011260 */

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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __extendsfdf2 @ 00011288 */

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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __floatundidf @ 000112d0 */

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
LAB_000110a8:
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
  if (bVar12 && 0xfffff < param_2) goto LAB_000110a8;
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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __floatdidf @ 000112e4 */

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
LAB_000110a8:
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
  if (bVar13 && 0xfffff < uVar4) goto LAB_000110a8;
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
      goto LAB_00011128;
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
LAB_00011128:
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



/* Function: __fixdfsi @ 00011344 */

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



/* Function: _fini @ 000113a0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 86 */
