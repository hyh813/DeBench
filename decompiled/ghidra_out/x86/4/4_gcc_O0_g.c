/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/4/4_gcc_O0_g
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



/* Function: cdecl_func @ 00011261 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int cdecl_func(int a,int b)

{
  return b + a;
}



/* Function: call_cdecl @ 0001127c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_cdecl(void)

{
  int iVar1;
  
  iVar1 = cdecl_func(5,10);
  return iVar1;
}



/* Function: stdcall_func @ 0001129b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int stdcall_func(int a,int b)

{
  return a * b;
}



/* Function: call_stdcall @ 000112b7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_stdcall(void)

{
  int iVar1;
  
  iVar1 = stdcall_func(5,10);
  return iVar1;
}



/* Function: fastcall_func @ 000112d3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int __regparm3 fastcall_func(int a,int b,int c)

{
  int in_stack_00000004;
  int b_local;
  int a_local;
  
  return in_stack_00000004 + c + b;
}



/* Function: call_fastcall @ 000112fe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_fastcall(void)

{
  int iVar1;
  
  iVar1 = fastcall_func(0x15fcc,2,1);
  return iVar1;
}



/* Function: call_thiscall @ 00011322 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_thiscall(void)

{
  return 0xf;
}



/* Function: arm_aapcs_func @ 0001133a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int arm_aapcs_func(int a,int b,int c,int d,int e)

{
  return e + a + b + c + d;
}



/* Function: call_arm_aapcs @ 00011364 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_arm_aapcs(void)

{
  int iVar1;
  
  iVar1 = arm_aapcs_func(1,2,3,4,5);
  return iVar1;
}



/* Function: mips_func @ 00011389 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int mips_func(int a,int b,int c,int d)

{
  return d + a + b + c;
}



/* Function: call_mips @ 000113ae */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_mips(void)

{
  int iVar1;
  
  iVar1 = mips_func(10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: amd64_sysv_func @ 000113d1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int amd64_sysv_func(int a,int b,int c,int d,int e,int f)

{
  return f + a + b + c + d + e;
}



/* Function: call_amd64_sysv @ 00011400 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_amd64_sysv(void)

{
  int iVar1;
  
  iVar1 = amd64_sysv_func(1,2,3,4,5,6);
  return iVar1;
}



/* Function: ms_x64_func @ 00011427 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ms_x64_func(int a,int b,int c,int d,int e)

{
  return e + a + b + c + d;
}



/* Function: call_ms_x64 @ 00011451 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ms_x64(void)

{
  int iVar1;
  
  iVar1 = ms_x64_func(1,2,3,4,5);
  return iVar1;
}



/* Function: vectorcall_func @ 00011476 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int vectorcall_func(int a,int b,int c,int d)

{
  return d + a + b + c;
}



/* Function: call_vectorcall @ 0001149b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_vectorcall(void)

{
  int iVar1;
  
  iVar1 = vectorcall_func(1,2,3,4);
  return iVar1;
}



/* Function: mixed_conventions_test @ 000114be */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int mixed_conventions_test(void)

{
  int iVar1;
  int a;
  int iVar2;
  int sum;
  
  iVar1 = cdecl_func(1,2);
  a = stdcall_func(3,4);
  iVar2 = fastcall_func(a,6,5);
  return iVar1 + a + iVar2;
}



/* Function: varargs_func @ 0001150d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int varargs_func(int count,...)

{
  int in_GS_OFFSET;
  va_list args;
  int sum;
  int i;
  
  sum = 0;
  args = &stack0x00000008;
  for (i = 0; i < count; i = i + 1) {
    sum = sum + *(int *)args;
    args = args + 4;
  }
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    sum = __stack_chk_fail_local();
  }
  return sum;
}



/* Function: func_no_args @ 00011572 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int func_no_args(void)

{
  return 0x2a;
}



/* Function: func_many_args @ 0001158a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int func_many_args(int a,int b,int c,int d,int e,int f,int g,int h)

{
  return h + a + b + c + d + e + f + g;
}



/* Function: func_mixed_args @ 000115c3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int func_mixed_args(int x,char *s,double d,longlong ll)

{
  size_t sVar1;
  longlong ll_local;
  double d_local;
  int len;
  
  if (s == (char *)0x0) {
    sVar1 = 0;
  }
  else {
    sVar1 = strlen(s);
  }
  return (int)ROUND((double)ll + (double)(int)(sVar1 + x) + d);
}



/* Function: func_struct_byval @ 00011645 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int func_struct_byval(LargeStruct s)

{
  int i;
  longlong sum;
  
  sum._0_4_ = 0;
  for (i = 0; i < 0x10; i = i + 1) {
    sum._0_4_ = (int)sum + (int)s.data[i];
  }
  return (int)sum;
}



/* Function: func_struct_byptr @ 00011690 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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



/* Function: test_calling_conventions @ 000116be */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_calling_conventions(void)

{
  int iVar1;
  LargeStruct s_00;
  int iVar2;
  int iVar3;
  LargeStruct *pLVar4;
  undefined4 *puVar5;
  int in_GS_OFFSET;
  byte bVar6;
  undefined1 in_stack_fffffeb4 [92];
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int i;
  int sum;
  int no_args;
  int many;
  char *test_str;
  int mixed;
  int struct_val;
  int struct_ptr;
  SmallStruct s;
  LargeStruct large;
  
  bVar6 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013008);
  call_cdecl();
  printf("CALL-L1-01: %d\n");
  call_stdcall();
  printf("CALL-L1-02: %d\n");
  call_fastcall();
  printf("CALL-L1-03: %d\n");
  call_thiscall();
  printf("CALL-L1-04: %d\n");
  call_arm_aapcs();
  printf("CALL-L1-05: %d\n");
  call_mips();
  printf("CALL-L1-06: %d\n");
  call_amd64_sysv();
  printf("CALL-L1-07: %d\n");
  call_ms_x64();
  printf("CALL-L1-08: %d\n");
  call_vectorcall();
  printf("CALL-L1-09: %d\n");
  mixed_conventions_test();
  printf("CALL-L1-10: %d\n");
  varargs_func(5);
  printf(&DAT_000130cc);
  func_no_args();
  printf(&DAT_000130f4);
  uVar14 = 8;
  uVar13 = 7;
  func_many_args(1,2,3,4,5,6,7,8);
  printf(&DAT_00013118);
  puVar9 = &DAT_0001313f;
  uVar10 = 0x51eb851f;
  uVar8 = 10;
  uVar7 = 0x118a1;
  iVar2 = func_mixed_args(10,"test",3.14,100);
  puVar12 = &DAT_00013144;
  uVar11 = 0x118bf;
  printf(&DAT_00013144);
  for (i = 0; i < 0x10; i = i + 1) {
    *(int *)(large.data + i) = i + 1;
    *(int *)((int)large.data + i * 8 + 4) = i + 1 >> 0x1f;
  }
  pLVar4 = &large;
  puVar5 = (undefined4 *)&stack0xfffffeb4;
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = (int)pLVar4->data[0];
    pLVar4 = (LargeStruct *)((int)pLVar4 + (uint)bVar6 * -8 + 4);
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  s_00.data[0xb]._4_4_ = uVar7;
  s_00.data._0_92_ = in_stack_fffffeb4;
  s_00.data[0xc]._0_4_ = uVar8;
  s_00.data[0xc]._4_4_ = puVar9;
  s_00.data[0xd]._0_4_ = uVar10;
  s_00.data[0xd]._4_4_ = uVar11;
  s_00.data[0xe]._0_4_ = puVar12;
  s_00.data[0xe]._4_4_ = iVar2;
  s_00.data[0xf]._0_4_ = uVar13;
  s_00.data[0xf]._4_4_ = uVar14;
  func_struct_byval(s_00);
  printf(&DAT_0001316c);
  s.x = 5;
  s.y = 10;
  func_struct_byptr(&s);
  printf(&DAT_00013198);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: param_by_value_int @ 00011998 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_by_value_int(int x)

{
  return x << 1;
}



/* Function: call_by_value_int @ 000119b1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_int(void)

{
  int iVar1;
  int val;
  int result;
  
  iVar1 = param_by_value_int(5);
  return iVar1 + 5;
}



/* Function: param_by_value_ptr @ 000119e4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_by_value_ptr(int *p)

{
  *p = *p * 2;
  return 1;
}



/* Function: call_by_value_ptr @ 00011a15 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_by_value_ptr(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int val;
  int *ptr;
  int result;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  val = 5;
  ptr = &val;
  result = param_by_value_ptr(ptr);
  iVar1 = result + val;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_array_decay @ 00011a6a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_array_decay(int *arr,int n)

{
  return 4;
}



/* Function: call_array_decay @ 00011a82 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_array_decay(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_GS_OFFSET;
  int array [10];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  piVar3 = array;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  iVar2 = param_array_decay(array,10);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_string @ 00011ad7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_string(char *str)

{
  return (int)str[1] + (int)*str;
}



/* Function: call_string_param @ 00011b01 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_string_param(void)

{
  int iVar1;
  
  iVar1 = param_string("Hello");
  return iVar1;
}



/* Function: param_ptr_array @ 00011b23 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_ptr_array(char **arr,int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + *arr[i];
  }
  return sum;
}



/* Function: call_ptr_array @ 00011b72 */

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
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_varargs @ 00011bce */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_varargs(int count,...)

{
  int in_GS_OFFSET;
  va_list args;
  int sum;
  int i;
  
  sum = 0;
  args = &stack0x00000008;
  for (i = 0; i < count; i = i + 1) {
    sum = sum + *(int *)args;
    args = args + 4;
  }
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    sum = __stack_chk_fail_local();
  }
  return sum;
}



/* Function: call_varargs_param @ 00011c33 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_varargs_param(void)

{
  int iVar1;
  
  iVar1 = param_varargs(4,10,0x14,0x1e,0x28);
  return iVar1;
}



/* Function: param_func_ptr @ 00011c5e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_func_ptr(_func_int_int *callback,int x)

{
  int iVar1;
  
  iVar1 = (*callback)(x);
  return iVar1 + 10;
}



/* Function: callback_func @ 00011c85 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int callback_func(int x)

{
  return x * 2;
}



/* Function: call_func_ptr_param @ 00011c9d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_func_ptr_param(void)

{
  int iVar1;
  
  iVar1 = param_func_ptr(callback_func,5);
  return iVar1;
}



/* Function: param_double_ptr @ 00011cc7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

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



/* Function: call_double_ptr @ 00011d08 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_double_ptr(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int val;
  int *ptr;
  int result;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  val = 10;
  ptr = &val;
  result = param_double_ptr(&ptr,0x14);
  iVar1 = val + (uint)(ptr == (int *)0x0);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: param_complex_cast @ 00011d68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_complex_cast(void *p,int type)

{
  int iVar1;
  TestIntPair *s;
  int *int_ptr;
  char *char_ptr;
  int *back_ptr;
  
  if (type == 0) {
    iVar1 = *(int *)p;
  }
  else if (type == 1) {
    iVar1 = *(int *)((int)p + 4) + *(int *)p;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: call_complex_cast @ 00011dbd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_complex_cast(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int val;
  TestIntPair pair;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  val = 0x12345678;
  pair.a = 100;
  pair.b = 200;
  param_complex_cast(&pair,1);
  iVar2 = param_complex_cast(&val,0);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_struct_byval @ 00011e20 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_struct_byval(BigStruct s)

{
  return s.data[0xf] + s.data[0];
}



/* Function: call_struct_byval @ 00011e3b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_struct_byval(void)

{
  int iVar1;
  BigStruct s_00;
  int iVar2;
  int in_GS_OFFSET;
  int i;
  BigStruct s;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  for (i = 0; i < 0x10; i = i + 1) {
    s.data[i] = i;
  }
  s_00.data[1] = s.data[1];
  s_00.data[0] = s.data[0];
  s_00.data[2] = s.data[2];
  s_00.data[3] = s.data[3];
  s_00.data[4] = s.data[4];
  s_00.data[5] = s.data[5];
  s_00.data[6] = s.data[6];
  s_00.data[7] = s.data[7];
  s_00.data[8] = s.data[8];
  s_00.data[9] = s.data[9];
  s_00.data[10] = s.data[10];
  s_00.data[0xb] = s.data[0xb];
  s_00.data[0xc] = s.data[0xc];
  s_00.data[0xd] = s.data[0xd];
  s_00.data[0xe] = s.data[0xe];
  s_00.data[0xf] = s.data[0xf];
  iVar2 = param_struct_byval(s_00);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: param_order_dep @ 00011ec2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int param_order_dep(int a,int b)

{
  return b + a;
}



/* Function: call_order_dep @ 00011edd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_order_dep(void)

{
  int iVar1;
  int i;
  
  iVar1 = param_order_dep(2,2);
  return iVar1;
}



/* Function: test_parameter_passing @ 00011f10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_parameter_passing(void)

{
  int iVar1;
  
  puts(&DAT_000131d8);
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



/* Function: ret_basic_type @ 00012046 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ret_basic_type(int x)

{
  return x * 2;
}



/* Function: call_ret_basic @ 0001205e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_basic(void)

{
  int iVar1;
  int val;
  int result;
  
  iVar1 = ret_basic_type(0x15);
  return iVar1;
}



/* Function: ret_pointer @ 0001208c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int * ret_pointer(int *p)

{
  return p + 1;
}



/* Function: call_ret_pointer @ 000120a5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_pointer(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_GS_OFFSET;
  int *ptr;
  int arr [3];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  arr[0] = 10;
  arr[1] = 0x14;
  arr[2] = 0x1e;
  piVar2 = ret_pointer(arr);
  iVar3 = *piVar2;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar3 = __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: ret_small_struct @ 00012100 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

SmallPoint * ret_small_struct(int x,int y)

{
  SmallPoint *in_stack_00000004;
  SmallPoint p;
  
  in_stack_00000004->x = x;
  in_stack_00000004->y = y;
  return in_stack_00000004;
}



/* Function: call_ret_small_struct @ 00012135 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_small_struct(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  SmallPoint p;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  ret_small_struct(3,4);
  iVar2 = p.y + p.x;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: ret_large_struct @ 0001217f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

LargeData * ret_large_struct(int seed)

{
  int iVar1;
  int in_GS_OFFSET;
  LargeData *in_stack_00000004;
  int i;
  LargeData d;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  for (i = 0; i < 0x10; i = i + 1) {
    d.data[i] = seed + i;
  }
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
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return in_stack_00000004;
}



/* Function: call_ret_large_struct @ 00012240 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: func_a @ 0001228b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int func_a(int x)

{
  return x + 10;
}



/* Function: func_b @ 000122a4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int func_b(int x)

{
  return x * 2;
}



/* Function: ret_func_ptr @ 000122bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

func_ptr_t ret_func_ptr(int selector)

{
  code *pcVar1;
  
  if (selector == 0) {
    pcVar1 = func_a;
  }
  else {
    pcVar1 = func_b;
  }
  return pcVar1;
}



/* Function: call_ret_func_ptr @ 000122e3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_func_ptr(void)

{
  func_ptr_t p_Var1;
  int iVar2;
  func_ptr_t f;
  
  p_Var1 = ret_func_ptr(1);
  iVar2 = (*p_Var1)(5);
  return iVar2;
}



/* Function: ret_opaque_handle @ 00012313 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void * ret_opaque_handle(int type)

{
  int *piVar1;
  
  if (type == 0) {
    piVar1 = &ret_opaque_handle::handle1;
  }
  else {
    piVar1 = (int *)&ret_opaque_handle::handle2;
  }
  return piVar1;
}



/* Function: call_ret_opaque @ 0001233a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_opaque(void)

{
  int *piVar1;
  void *h;
  
  piVar1 = ret_opaque_handle(0);
  return *piVar1;
}



/* Function: ret_complex_expr @ 00012362 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ret_complex_expr(int x,int y,int z)

{
  int iVar1;
  
  if (y < x) {
    iVar1 = z * 2;
  }
  else {
    iVar1 = z + 10;
  }
  return iVar1;
}



/* Function: call_ret_complex_expr @ 0001238a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_complex_expr(void)

{
  int iVar1;
  int iVar2;
  int r1;
  int r2;
  
  iVar1 = ret_complex_expr(5,3,10);
  iVar2 = ret_complex_expr(3,5,10);
  return iVar2 + iVar1;
}



/* Function: ret_multi_branch @ 000123ca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ret_multi_branch(int op)

{
  if (op == 2) {
    return 0x1e;
  }
  if (op < 3) {
    if (op == 0) {
      return 10;
    }
    if (op == 1) {
      return 0x14;
    }
  }
  return -1;
}



/* Function: call_ret_multi_branch @ 00012411 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_multi_branch(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int sum;
  
  iVar1 = ret_multi_branch(0);
  iVar2 = ret_multi_branch(1);
  iVar3 = ret_multi_branch(2);
  return iVar1 + iVar2 + iVar3;
}



/* Function: ret_void @ 00012458 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void ret_void(int x,int *out)

{
  *out = x * 3;
  return;
}



/* Function: call_ret_void @ 0001247a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_ret_void(void)

{
  int in_GS_OFFSET;
  int result;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ret_void(7,&result);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    result = __stack_chk_fail_local();
  }
  return result;
}



/* Function: test_return_values @ 000124bd */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_return_values(void)

{
  int iVar1;
  
  puts(&DAT_000132b4);
  iVar1 = call_ret_basic();
  printf(&DAT_000132d2,iVar1);
  iVar1 = call_ret_pointer();
  printf(&DAT_000132ee,iVar1);
  iVar1 = call_ret_small_struct();
  printf(&DAT_0001330a,iVar1);
  iVar1 = call_ret_large_struct();
  printf(&DAT_00013325,iVar1);
  iVar1 = call_ret_func_ptr();
  printf(&DAT_00013342,iVar1);
  iVar1 = call_ret_opaque();
  printf(&DAT_0001335e,iVar1);
  iVar1 = call_ret_complex_expr();
  printf(&DAT_0001337b,iVar1);
  iVar1 = call_ret_multi_branch();
  printf(&DAT_00013397,iVar1);
  iVar1 = call_ret_void();
  printf(&DAT_000133b3,iVar1);
  return;
}



/* Function: main @ 000125c3 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 000125ed */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012600 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012620 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001263a) */
/* WARNING: Removing unreachable block (ram,0x00012650) */
/* WARNING: Removing unreachable block (ram,0x0001265d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001266c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 85 */
