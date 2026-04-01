/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/4/4_gcc_Os_g
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



/* Function: main @ 00100800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: _start @ 00100840 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100874 */

/* WARNING: Removing unreachable block (ram,0x00100884) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100890 */

/* WARNING: Removing unreachable block (ram,0x001008a8) */
/* WARNING: Removing unreachable block (ram,0x001008b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001008c0 */

/* WARNING: Removing unreachable block (ram,0x001008e4) */
/* WARNING: Removing unreachable block (ram,0x001008f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001008fc @ 001008fc */

void FUN_001008fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100900 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: func_a @ 00100954 */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 0010095c */

int func_b(int param_1)

{
  return param_1 << 1;
}



/* Function: callback_func @ 00100964 */

int callback_func(int param_1)

{
  return param_1 << 1;
}



/* Function: cdecl_func @ 0010096c */

int cdecl_func(int a,int b)

{
  return a + b;
}



/* Function: call_cdecl @ 00100974 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  return 0xf;
}



/* Function: stdcall_func @ 0010097c */

int stdcall_func(int a,int b)

{
  return a * b;
}



/* Function: call_stdcall @ 00100984 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  return 0x32;
}



/* Function: fastcall_func @ 0010098c */

int fastcall_func(int a,int b,int c)

{
  return a + b + c;
}



/* Function: call_fastcall @ 00100998 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  return 6;
}



/* Function: call_thiscall @ 001009a0 */

undefined8 call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 001009a8 */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return a + b + c + d + e;
}



/* Function: call_arm_aapcs @ 001009bc */

undefined8 call_arm_aapcs(void)

{
  return 0xf;
}



/* Function: mips_func @ 001009c4 */

int mips_func(int a,int b,int c,int d)

{
  return a + b + c + d;
}



/* Function: call_mips @ 001009d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  return 100;
}



/* Function: amd64_sysv_func @ 001009dc */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return a + b + c + d + e + f;
}



/* Function: call_amd64_sysv @ 001009f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  return 0x15;
}



/* Function: ms_x64_func @ 001009fc */

int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  return param_1 + param_2 + param_3 + param_4 + param_5;
}



/* Function: call_ms_x64 @ 00100a10 */

undefined8 call_ms_x64(void)

{
  return 0xf;
}



/* Function: vectorcall_func @ 00100a18 */

int vectorcall_func(int param_1,int param_2,int param_3,int param_4)

{
  return param_1 + param_2 + param_3 + param_4;
}



/* Function: call_vectorcall @ 00100a28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  return 10;
}



/* Function: mixed_conventions_test @ 00100a30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x21;
}



/* Function: varargs_func @ 00100a38 */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100ab4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int varargs_func(int count,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  va_list args;
  
  iVar3 = -0x38;
  iVar2 = 0;
  piVar4 = (int *)register0x00000008;
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  for (iVar6 = 0; iVar6 < count; iVar6 = iVar6 + 1) {
    piVar5 = piVar4;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 8;
      if (iVar1 < 1) {
        piVar5 = (int *)(&stack0x00000000 + iVar3);
        iVar3 = iVar1;
      }
      else {
        piVar4 = piVar4 + 2;
        iVar3 = iVar1;
      }
    }
    else {
      piVar4 = piVar4 + 2;
    }
    iVar2 = iVar2 + *piVar5;
  }
  return iVar2;
}



/* Function: func_no_args @ 00100b0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 00100b14 */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return a + b + c + d + e + f + g + h;
}



/* Function: func_mixed_args @ 00100b34 */

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



/* Function: func_struct_byval @ 00100b8c */

int func_struct_byval(LargeStruct *s)

{
  longlong *plVar1;
  long lVar2;
  long lVar3;
  
                    /* Unresolved local var: longlong sum@[???]
                       Unresolved local var: int i@[???] */
  lVar3 = 0;
  lVar2 = 0;
  do {
    plVar1 = s->data + lVar3;
    lVar3 = lVar3 + 1;
    lVar2 = lVar2 + *plVar1;
  } while (lVar3 != 0x10);
  return (int)lVar2;
}



/* Function: func_struct_byptr @ 00100bb0 */

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



/* Function: test_calling_conventions @ 00100bc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  longlong *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  LargeStruct large;
  longlong local_88 [16];
  long local_8;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int no_args@[???]
                       Unresolved local var: int many@[???]
                       Unresolved local var: char * test_str@[???]
                       Unresolved local var: int mixed@[???]
                       Unresolved local var: int struct_val@[???]
                       Unresolved local var: SmallStruct s@[???]
                       Unresolved local var: int struct_ptr@[???] */
  local_8 = ___stack_chk_guard;
  puts(&DAT_0010145c);
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
  iVar2 = varargs_func(5,1,2,3,4);
  __printf_chk(1,&DAT_0010151d,iVar2);
  __printf_chk(1,&DAT_00101545,0x2a);
  __printf_chk(1,&DAT_00101567,0x24);
  iVar2 = func_mixed_args(10,"test",3.14,100);
  __printf_chk(1,&DAT_00101593,iVar2);
                    /* Unresolved local var: int i@[???] */
  lVar3 = 0;
  do {
    lVar4 = lVar3 + 1;
    large.data[lVar3] = lVar4;
    lVar3 = lVar4;
  } while (lVar4 != 0x10);
                    /* Unresolved local var: longlong sum@[???] */
  lVar4 = 0;
  local_88[1] = large.data[1];
  local_88[0] = large.data[0];
  local_88[3] = large.data[3];
  local_88[2] = large.data[2];
  local_88[5] = large.data[5];
  local_88[4] = large.data[4];
  local_88[7] = large.data[7];
  local_88[6] = large.data[6];
  local_88[9] = large.data[9];
  local_88[8] = large.data[8];
  local_88[0xb] = large.data[0xb];
  local_88[10] = large.data[10];
  lVar3 = 0;
  local_88[0xd] = large.data[0xd];
  local_88[0xc] = large.data[0xc];
  local_88[0xf] = large.data[0xf];
  local_88[0xe] = large.data[0xe];
  do {
    plVar1 = local_88 + lVar3;
                    /* Unresolved local var: int i@[???] */
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + *plVar1;
  } while (lVar3 != 0x10);
  __printf_chk(1,&DAT_001015bb,lVar4);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  __printf_chk(1,&DAT_001015e7,0x32);
  return;
}



/* Function: param_by_value_int @ 00100de4 */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 00100dec */

undefined8 call_by_value_int(void)

{
  return 0xf;
}



/* Function: param_by_value_ptr @ 00100df4 */

int param_by_value_ptr(int *p)

{
  *p = *p << 1;
  return 1;
}



/* Function: call_by_value_ptr @ 00100e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int * ptr@[???]
                       Unresolved local var: int result@[???] */
  return 0xb;
}



/* Function: param_array_decay @ 00100e10 */

int param_array_decay(int *arr,int n)

{
  return 8;
}



/* Function: call_array_decay @ 00100e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
                    /* Unresolved local var: int[10] array@[???] */
  return 8;
}



/* Function: param_string @ 00100e20 */

int param_string(char *str)

{
  return (uint)(byte)*str + (uint)(byte)str[1];
}



/* Function: call_string_param @ 00100e30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  return 0xad;
}



/* Function: param_ptr_array @ 00100e38 */

int param_ptr_array(char **arr,int n)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  for (lVar2 = 0; (int)lVar2 < n; lVar2 = lVar2 + 1) {
    iVar1 = iVar1 + (uint)(byte)*arr[lVar2];
  }
  return iVar1;
}



/* Function: call_ptr_array @ 00100e64 */

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
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return iVar2;
}



/* Function: param_varargs @ 00100ecc */

/* WARNING: Variable defined which should be unmapped: args */
/* WARNING: Removing unreachable block (ram,0x00100f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int param_varargs(int count,...)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  va_list args;
  
  iVar3 = -0x38;
  iVar2 = 0;
  piVar4 = (int *)register0x00000008;
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  for (iVar6 = 0; iVar6 < count; iVar6 = iVar6 + 1) {
    piVar5 = piVar4;
    if (iVar3 < 0) {
      iVar1 = iVar3 + 8;
      if (iVar1 < 1) {
        piVar5 = (int *)(&stack0x00000000 + iVar3);
        iVar3 = iVar1;
      }
      else {
        piVar4 = piVar4 + 2;
        iVar3 = iVar1;
      }
    }
    else {
      piVar4 = piVar4 + 2;
    }
    iVar2 = iVar2 + *piVar5;
  }
  return iVar2;
}



/* Function: call_varargs_param @ 00100fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00100fb8 */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: call_func_ptr_param @ 00100fd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: param_double_ptr @ 00100fe8 */

int param_double_ptr(int **pp,int new_val)

{
  int iVar1;
  
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



/* Function: call_double_ptr @ 0010100c */

undefined8 call_double_ptr(void)

{
  return 0x15;
}



/* Function: param_complex_cast @ 00101014 */

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



/* Function: call_complex_cast @ 0010103c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: TestIntPair pair@[???] */
  return 0x12345678;
}



/* Function: param_struct_byval @ 00101048 */

int param_struct_byval(BigStruct *s)

{
  return s->data[0] + s->data[0xf];
}



/* Function: call_struct_byval @ 00101058 */

/* WARNING: Removing unreachable block (ram,0x001010b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  long lVar1;
  BigStruct s;
  
                    /* Unresolved local var: int i@[???] */
  lVar1 = 0;
  do {
    s.data[lVar1] = (int)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x10);
  return s.data[0] + s.data[0xf];
}



/* Function: param_order_dep @ 001010c0 */

int param_order_dep(int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: call_order_dep @ 001010c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
                    /* Unresolved local var: int i@[???] */
  return 4;
}



/* Function: test_parameter_passing @ 001010d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_00101614);
  __printf_chk(1,"PARAM-L1-01: %d\n",0xf);
  __printf_chk(1,"PARAM-L1-02: %d\n",0xb);
  __printf_chk(1,"PARAM-L2-01: %d\n",8);
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



/* Function: ret_basic_type @ 001011d8 */

int ret_basic_type(int param_1)

{
  return param_1 << 1;
}



/* Function: call_ret_basic @ 001011e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
                    /* Unresolved local var: int val@[???]
                       Unresolved local var: int result@[???] */
  return 0x2a;
}



/* Function: ret_pointer @ 001011e8 */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 001011f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
                    /* Unresolved local var: int[3] arr@[???]
                       Unresolved local var: int * ptr@[???] */
  return 0x14;
}



/* Function: ret_small_struct @ 001011f8 */

SmallPoint ret_small_struct(int x,int y)

{
  SmallPoint SVar1;
  
  SVar1.y = y;
  SVar1.x = x;
                    /* Unresolved local var: SmallPoint p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_reg1(x1); DW_OP_piece: 4] */
  return SVar1;
}



/* Function: call_ret_small_struct @ 00101204 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
                    /* Unresolved local var: SmallPoint p@[???] */
  return 7;
}



/* Function: ret_large_struct @ 0010120c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ret_large_struct(LargeData *__return_storage_ptr__,int seed)

{
  long lVar1;
  long lVar2;
  LargeData d;
  
  lVar1 = ___stack_chk_guard;
  lVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  do {
    d.data[lVar2] = seed + (int)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  *(undefined8 *)(__return_storage_ptr__->data + 2) = d.data._8_8_;
  *(undefined8 *)__return_storage_ptr__->data = d.data._0_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 6) = d.data._24_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 4) = d.data._16_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 10) = d.data._40_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 8) = d.data._32_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 0xe) = d.data._56_8_;
  *(undefined8 *)(__return_storage_ptr__->data + 0xc) = d.data._48_8_;
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}



/* Function: call_ret_large_struct @ 00101278 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_large_struct(void)

{
  long lVar1;
  LargeData d;
  
  lVar1 = ___stack_chk_guard;
  ret_large_struct(&d,100);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(d.data[0] + d.data[0xf],&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return d.data[0] + d.data[0xf];
}



/* Function: ret_func_ptr @ 001012d4 */

func_ptr_t ret_func_ptr(int selector)

{
  func_ptr_t p_Var1;
  
  p_Var1 = func_b;
  if (selector == 0) {
    p_Var1 = func_a;
  }
  return p_Var1;
}



/* Function: call_ret_func_ptr @ 001012f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
                    /* Unresolved local var: func_ptr_t f@[???] */
  return 10;
}



/* Function: ret_opaque_handle @ 001012f8 */

void * ret_opaque_handle(int type)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)&handle1_1;
  if (type != 0) {
    puVar1 = &handle2_0;
  }
  return puVar1;
}



/* Function: call_ret_opaque @ 00101314 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
                    /* Unresolved local var: void * h@[???] */
  return handle1_1;
}



/* Function: ret_complex_expr @ 00101320 */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  iVar1 = z + 10;
  if (y < x) {
    iVar1 = z << 1;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 00101334 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
                    /* Unresolved local var: int r1@[???]
                       Unresolved local var: int r2@[???] */
  return 0x28;
}



/* Function: ret_multi_branch @ 0010133c */

int ret_multi_branch(int op)

{
  int iVar1;
  
  iVar1 = op * 10 + 10;
  if (2 < (uint)op) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_ret_multi_branch @ 00101350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
                    /* Unresolved local var: int sum@[???] */
  return 0x3c;
}



/* Function: ret_void @ 00101358 */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 00101364 */

undefined8 call_ret_void(void)

{
  return 0x15;
}



/* Function: test_return_values @ 0010136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  
  puts(&DAT_001016f0);
  __printf_chk(1,&DAT_0010170e,0x2a);
  __printf_chk(1,&DAT_0010172a,0x14);
  __printf_chk(1,&DAT_00101746,7);
  iVar1 = call_ret_large_struct();
  __printf_chk(1,&DAT_00101761,iVar1);
  __printf_chk(1,&DAT_0010177e,10);
  __printf_chk(1,&DAT_0010179a,handle1_1);
  __printf_chk(1,&DAT_001017b7,0x28);
  __printf_chk(1,&DAT_001017d3,0x3c);
  __printf_chk(1,&DAT_001017ef,0x15);
  return;
}



/* Function: _fini @ 00101440 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 80 */
