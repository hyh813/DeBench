/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/2/2_clang_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100660 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00100680 @ 00100680 */

void FUN_00100680(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100740 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100774 */

/* WARNING: Removing unreachable block (ram,0x00100784) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100790 */

/* WARNING: Removing unreachable block (ram,0x001007a8) */
/* WARNING: Removing unreachable block (ram,0x001007b4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001007c0 */

/* WARNING: Removing unreachable block (ram,0x001007e4) */
/* WARNING: Removing unreachable block (ram,0x001007f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_001007fc @ 001007fc */

void FUN_001007fc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100800 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: process_char @ 00100854 */

char process_char(char c)

{
  char local_1;
  
  local_1 = c;
  if ((0x40 < (byte)c) && ((byte)c < 0x5b)) {
    local_1 = c + ' ';
  }
  return local_1;
}



/* Function: process_short @ 001008a4 */

short process_short(short a,short b)

{
  return a + b;
}



/* Function: process_int @ 001008c4 */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 001008e0 */

long process_long(long x)

{
  return x << 1;
}



/* Function: process_ll @ 001008f8 */

longlong process_ll(longlong x)

{
  return x * x;
}



/* Function: process_float @ 00100914 */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 00100934 */

double process_double(double d)

{
  return d / 2.0 + 0.1;
}



/* Function: process_ld @ 0010095c */

long_double process_ld(long_double d)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = SUB168(d,0);
  uVar2 = __multf3(local_20);
  auVar1 = __addtf3(uVar2,0);
  return (long_double)auVar1;
}



/* Function: process_bool @ 0010098c */

_Bool process_bool(int x)

{
  return 0 < x && x % 2 == 0;
}



/* Function: const_param @ 001009e0 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 001009fc */

int volatile_access(int *p)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00100a30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  byte bVar1;
  _Bool _Var2;
  short sVar3;
  uint uVar4;
  long lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auVar8 [16];
  int local_18 [2];
  
                    /* Unresolved local var: int value@[???]
                       Unresolved local var: int vol_value@[???] */
  printf(&DAT_00103758);
  bVar1 = process_char('A');
  printf("DT-L1-01 (process_char): %c\n",(ulong)bVar1);
  bVar1 = process_char('b');
  printf("DT-L1-01 (process_char): %c\n",(ulong)bVar1);
  sVar3 = process_short(100,200);
  printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar3);
  uVar4 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n",(ulong)uVar4);
  lVar5 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n",lVar5);
  lVar6 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n",lVar6);
  fVar7 = process_float(2.0);
  auVar8._0_8_ = (double)fVar7;
  auVar8._8_8_ = 0;
  printf("DT-L1-06 (process_float): %.2f\n",auVar8);
  process_double(4.0);
  printf("DT-L1-07 (process_double): %.2f\n");
  process_ld((long_double)_DAT_00103630);
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  _Var2 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
  _Var2 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
  _Var2 = process_bool(-2);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
  local_18[1] = 5;
  uVar4 = const_param(local_18 + 1);
  printf("DT-L1-10 (const_param): %d\n",(ulong)uVar4);
  local_18[0] = 10;
  uVar4 = volatile_access(local_18);
  printf("DT-L1-11 (volatile_access): %d\n",(ulong)uVar4);
  return;
}



/* Function: array_1d_stack @ 00100bc4 */

int array_1d_stack(int *arr,int n)

{
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    local_10 = local_10 + arr[local_14];
  }
  return local_10;
}



/* Function: array_string @ 00100c28 */

int array_string(char *str)

{
  int local_c;
  
                    /* Unresolved local var: int len@[???] */
  for (local_c = 0; str[local_c] != '\0'; local_c = local_c + 1) {
  }
  return local_c;
}



/* Function: array_2d_stack @ 00100c68 */

int array_2d_stack(int (*arr) [10])

{
  int local_10;
  int local_c;
  
                    /* Unresolved local var: int sum@[???] */
  local_c = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
    local_c = local_c + arr[local_10][local_10];
  }
  return local_c;
}



/* Function: array_3d @ 00100cd4 */

int array_3d(int (*arr) [5] [5])

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
                    /* Unresolved local var: int sum@[???] */
  local_c = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
                    /* Unresolved local var: int j@[???] */
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
                    /* Unresolved local var: int k@[???] */
      for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
        local_c = local_c + arr[local_10][local_14][local_18];
      }
    }
  }
  return local_c;
}



/* Function: array_vla @ 00100da8 */

int array_vla(int n,int *arr)

{
  int local_18;
  int local_14;
  
                    /* Unresolved local var: int sum@[???] */
  local_14 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_18 = 0; local_18 < n; local_18 = local_18 + 1) {
    local_14 = local_14 + arr[local_18];
  }
  return local_14;
}



/* Function: array_pointer @ 00100e0c */

int array_pointer(int (*arr) [10],int n)

{
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    local_10 = local_10 + arr[local_14][0];
  }
  return local_10;
}



/* Function: pointer_array @ 00100e78 */

int pointer_array(int **arr,int n)

{
  int local_1c;
  int local_18;
  int local_10;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int count@[???] */
  local_10 = 0;
  local_1c = n;
  if (9 < n) {
    local_1c = 10;
  }
                    /* Unresolved local var: int i@[???] */
  for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
    if (arr[local_18] != (int *)0x0) {
      local_10 = local_10 + *arr[local_18];
    }
  }
  return local_10;
}



/* Function: array_complex_index @ 00100f28 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int local_4;
  
  if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
    local_4 = -1;
  }
  else {
    local_4 = arr[y * w + x];
  }
  return local_4;
}



/* Function: array_oob @ 00100fbc */

int array_oob(int *arr,int n)

{
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 <= n; local_14 = local_14 + 1) {
    local_10 = local_10 + arr[local_14];
  }
  return local_10;
}



/* Function: test_array_types @ 00101020 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  uint uVar1;
  undefined8 *local_588;
  int local_57c;
  int local_56c;
  int aiStack_568 [20];
  int *local_518;
  undefined4 *local_510;
  undefined4 *local_508;
  undefined8 local_500;
  undefined8 local_4f8 [6];
  undefined8 local_4c8;
  int local_4c0;
  int local_4bc;
  int aiStack_4b8 [50];
  int local_3f0 [4];
  int local_3e0;
  int local_3dc;
  int local_3d8;
  int aiStack_3d4 [125];
  int local_1e0;
  int local_1dc;
  int aiStack_1d8 [100];
  char local_48 [8];
  int local_40 [8];
  
                    /* Unresolved local var: int[5] arr1@[???]
                       Unresolved local var: char[6] str@[???]
                       Unresolved local var: int[10][10] matrix@[???]
                       Unresolved local var: int[5][5][5] cube@[DW_OP_breg31(sp): +444]
                       Unresolved local var: int[3] vla_arr@[DW_OP_breg31(sp): +416]
                       Unresolved local var: int[5][10] arr2@[DW_OP_breg31(sp): +216]
                       Unresolved local var: int a@[DW_OP_breg31(sp): +208]
                       Unresolved local var: int b@[DW_OP_breg31(sp): +204]
                       Unresolved local var: int c@[DW_OP_breg31(sp): +200]
                       Unresolved local var: int *[10] ptr_arr@[DW_OP_breg31(sp): +120]
                       Unresolved local var: int[20] flat@[DW_OP_breg31(sp): +40] */
  printf(&DAT_001038c4);
  local_40[2] = 3;
  local_40[3] = 4;
  local_40[0] = 1;
  local_40[1] = 2;
  local_40[4] = 5;
  uVar1 = array_1d_stack(local_40,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",(ulong)uVar1);
  builtin_strncpy(local_48,"hello",6);
  uVar1 = array_string(local_48);
  printf("ARR-L1-02 (array_string): %d\n",(ulong)uVar1);
                    /* Unresolved local var: int i@[???] */
  for (local_1dc = 0; local_1dc < 10; local_1dc = local_1dc + 1) {
                    /* Unresolved local var: int j@[???] */
    for (local_1e0 = 0; local_1e0 < 10; local_1e0 = local_1e0 + 1) {
      if (local_1dc == local_1e0) {
        local_57c = local_1dc;
      }
      else {
        local_57c = 0;
      }
      aiStack_1d8[(long)local_1dc * 10 + (long)local_1e0] = local_57c;
    }
  }
  uVar1 = array_2d_stack((int (*) [10])aiStack_1d8);
  printf("ARR-L1-03 (array_2d_stack): %d\n",(ulong)uVar1);
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +440] */
  for (local_3d8 = 0; local_3d8 < 5; local_3d8 = local_3d8 + 1) {
                    /* Unresolved local var: int j@[DW_OP_breg31(sp): +436] */
    for (local_3dc = 0; local_3dc < 5; local_3dc = local_3dc + 1) {
                    /* Unresolved local var: int k@[DW_OP_breg31(sp): +432] */
      for (local_3e0 = 0; local_3e0 < 5; local_3e0 = local_3e0 + 1) {
        aiStack_3d4[(long)local_3d8 * 0x19 + (long)local_3dc * 5 + (long)local_3e0] = 1;
      }
    }
  }
  uVar1 = array_3d((int (*) [5] [5])aiStack_3d4);
  printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar1);
  local_3f0[0] = 10;
  local_3f0[1] = 0x14;
  local_3f0[2] = 0x1e;
  uVar1 = array_vla(3,local_3f0);
  printf("ARR-L2-01 (array_vla): %d\n",(ulong)uVar1);
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +212] */
  for (local_4bc = 0; local_4bc < 5; local_4bc = local_4bc + 1) {
    aiStack_4b8[(long)local_4bc * 10] = local_4bc * 10;
  }
  uVar1 = array_pointer((int (*) [10])aiStack_4b8,5);
  printf("ARR-L2-02 (array_pointer): %d\n",(ulong)uVar1);
  local_518 = &local_4c0;
  local_4c0 = 10;
  local_510 = (undefined4 *)((long)&local_4c8 + 4);
  local_4c8._4_4_ = 0x14;
  local_508 = (undefined4 *)&local_4c8;
  local_4c8._0_4_ = 0x1e;
  local_500 = 0;
  local_588 = local_4f8;
  do {
    *local_588 = 0;
    local_588 = local_588 + 1;
  } while (local_588 != &local_4c8);
  uVar1 = pointer_array(&local_518,3);
  printf("ARR-L2-03 (pointer_array): %d\n",(ulong)uVar1);
                    /* Unresolved local var: int i@[DW_OP_breg31(sp): +36] */
  for (local_56c = 0; local_56c < 0x14; local_56c = local_56c + 1) {
    aiStack_568[local_56c] = local_56c;
  }
  uVar1 = array_complex_index(aiStack_568,5,4,2,3);
  printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)uVar1);
  return;
}



/* Function: ptr_single @ 001013d0 */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 001013ec */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 0010140c */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00101430 */

int ptr_increment(int *p,int n)

{
  int local_14;
  int local_10;
  int *local_8;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
  local_8 = p;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    local_10 = local_10 + *local_8;
    local_8 = local_8 + 1;
  }
  return local_10;
}



/* Function: ptr_offset @ 0010149c */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 001014bc */

int ptr_diff(int *p1,int *p2)

{
  return (int)(((long)p1 - (long)p2) / 4);
}



/* Function: ptr_void @ 001014e8 */

int ptr_void(void *p,int type)

{
  undefined4 local_4;
  
  if (type == 0) {
    local_4 = *(uint *)p;
  }
  else if (type == 1) {
    local_4 = (uint)*(byte *)p;
  }
  else {
    local_4 = 0xffffffff;
  }
  return local_4;
}



/* Function: ptr_const @ 0010154c */

int ptr_const(int *p)

{
  return *p + *p;
}



/* Function: ptr_const_ptr @ 00101570 */

int ptr_const_ptr(int *p)

{
  *p = *p + 5;
  return *p;
}



/* Function: ptr_func_simple @ 0010159c */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 001015c8 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  char *local_30;
  undefined8 uStack_28;
  int *local_20;
  _func_int_int_ptr_char_ptr_ptr *local_18;
  
                    /* Unresolved local var: char *[2] args@[DW_OP_breg31(sp): 0] */
  uStack_28 = 0;
  local_30 = "test";
  local_20 = p;
  local_18 = f;
  iVar1 = (*f)(p,&local_30);
  return iVar1;
}



/* Function: ptr_cast @ 00101608 */

int ptr_cast(void *p)

{
                    /* Unresolved local var: int * int_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * back_ptr@[???] */
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00101638 */

void * opaque_handle_create(int size)

{
  return (void *)(long)size;
}



/* Function: opaque_handle_op @ 0010164c */

int opaque_handle_op(void *handle)

{
  return (int)handle << 1;
}



/* Function: test_pointer_types @ 00101664 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  uint uVar1;
  void *handle;
  undefined4 local_b8;
  int local_b4 [3];
  undefined1 local_a5;
  undefined4 local_a4;
  int local_a0 [8];
  int local_80 [8];
  int local_60 [6];
  int ***local_48;
  int **local_40;
  int *local_38;
  int local_2c;
  int **local_28;
  int *local_20;
  int local_18 [2];
  
                    /* Unresolved local var: int val1@[???]
                       Unresolved local var: int val2@[???]
                       Unresolved local var: int * ptr2@[???]
                       Unresolved local var: int * * pptr2@[???]
                       Unresolved local var: int val3@[???]
                       Unresolved local var: int * ptr3@[???]
                       Unresolved local var: int * * pptr3@[???]
                       Unresolved local var: int * * * ppptr3@[???]
                       Unresolved local var: int[5] arr4@[???]
                       Unresolved local var: int[5] arr5@[DW_OP_breg31(sp): +96]
                       Unresolved local var: int[5] arr6@[DW_OP_breg31(sp): +64]
                       Unresolved local var: int val7@[DW_OP_breg31(sp): +60]
                       Unresolved local var: char c7@[DW_OP_breg31(sp): +59]
                       Unresolved local var: int val8@[DW_OP_breg31(sp): +52]
                       Unresolved local var: int val9@[DW_OP_breg31(sp): +48]
                       Unresolved local var: int val11@[DW_OP_breg31(sp): +44]
                       Unresolved local var: int val12@[DW_OP_breg31(sp): +40]
                       Unresolved local var: void * handle@[DW_OP_breg31(sp): +32] */
  printf(&DAT_001039e1);
  local_18[1] = 5;
  uVar1 = ptr_single(local_18 + 1);
  printf("PTR-L2-01 (ptr_single): %d\n",(ulong)uVar1);
  local_20 = local_18;
  local_18[0] = 10;
  local_28 = &local_20;
  uVar1 = ptr_double(local_28);
  printf("PTR-L2-02 (ptr_double): %d\n",(ulong)uVar1);
  local_38 = &local_2c;
  local_2c = 5;
  local_40 = &local_38;
  local_48 = &local_40;
  uVar1 = ptr_triple(local_48);
  printf("PTR-L2-03 (ptr_triple): %d\n",(ulong)uVar1);
  local_60[2] = 3;
  local_60[3] = 4;
  local_60[0] = 1;
  local_60[1] = 2;
  local_60[4] = 5;
  uVar1 = ptr_increment(local_60,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",(ulong)uVar1);
  local_80[2] = 0x1e;
  local_80[3] = 0x28;
  local_80[0] = 10;
  local_80[1] = 0x14;
  local_80[4] = 0x32;
  uVar1 = ptr_offset(local_80,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",(ulong)uVar1);
  local_a0[2] = 0x14;
  local_a0[3] = 0x1e;
  local_a0[0] = 0;
  local_a0[1] = 10;
  local_a0[4] = 0x28;
  uVar1 = ptr_diff(local_a0 + 4,local_a0);
  printf("PTR-L2-06 (ptr_diff): %d\n",(ulong)uVar1);
  local_a4 = 0x2a;
  local_a5 = 0x41;
  uVar1 = ptr_void(&local_a4,0);
  printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
  uVar1 = ptr_void(&local_a5,1);
  printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar1);
  local_b4[2] = 10;
  uVar1 = ptr_const(local_b4 + 2);
  printf("PTR-L2-08 (ptr_const): %d\n",(ulong)uVar1);
  local_b4[1] = 10;
  uVar1 = ptr_const_ptr(local_b4 + 1);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",(ulong)uVar1);
  uVar1 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",(ulong)uVar1);
  local_b4[0] = 5;
  uVar1 = ptr_func_complex(complex_callback,local_b4);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",(ulong)uVar1);
  local_b8 = 0x12345678;
  uVar1 = ptr_cast(&local_b8);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",(ulong)uVar1);
  handle = opaque_handle_create(10);
  uVar1 = opaque_handle_op(handle);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",(ulong)uVar1);
  return;
}



/* Function: double_value @ 001018d4 */

int double_value(int x)

{
  return x << 1;
}



/* Function: complex_callback @ 001018ec */

int complex_callback(int *p,char **args)

{
  *p = *p + 10;
  return (uint)(*args != (char *)0x0);
}



/* Function: struct_simple @ 00101928 */

int struct_simple(Point3D *p)

{
  return p->x + p->y + p->z;
}



/* Function: struct_array @ 00101958 */

int struct_array(Point3D *pts,int n)

{
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    local_10 = local_10 + pts[local_14].x + pts[local_14].y + pts[local_14].z;
  }
  return local_10;
}



/* Function: struct_nested @ 001019f4 */

int struct_nested(Rect *r)

{
  return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00101a18 */

int struct_deep(Widget *w)

{
  return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00101a3c */

int struct_with_ptr(Node *node)

{
  int local_10;
  
  if (node->next == (Node *)0x0) {
    local_10 = 0;
  }
  else {
    local_10 = node->next->data;
  }
  return node->data + local_10;
}



/* Function: struct_bitfields @ 00101a94 */

int struct_bitfields(Flags *f)

{
  return (*(ushort *)f >> 1 & 3) + (uint)(*(ushort *)f & 1) + (*(ushort *)f >> 3 & 7) +
         (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00101aec */

int union_type(UnionData *u,int type)

{
  undefined4 local_4;
  
  if (type == 0) {
    local_4 = u->i;
  }
  else if (type == 1) {
    local_4 = (uint)u->f;
  }
  else {
    local_4 = (uint)(byte)u->bytes[0];
  }
  return local_4;
}



/* Function: union_array @ 00101b54 */

int union_array(UnionData *arr,int n)

{
  int local_14;
  int local_10;
  
                    /* Unresolved local var: int sum@[???] */
  local_10 = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_14 = 0; local_14 < n; local_14 = local_14 + 1) {
    local_10 = local_10 + arr[local_14].i;
  }
  return local_10;
}



/* Function: enum_type @ 00101bb8 */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00101bd4 */

int enum_switch(State s)

{
  int local_4;
  
  switch(s) {
  case STATE_IDLE:
    local_4 = 0;
    break;
  case STATE_RUNNING:
    local_4 = 100;
    break;
  case STATE_PAUSED:
    local_4 = 0x32;
    break;
  case STATE_STOPPED:
    local_4 = -1;
    break;
  default:
    local_4 = -99;
  }
  return local_4;
}



/* Function: struct_func_ptr @ 00101c50 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00101c80 */

int linked_list(Node *head)

{
  Node *local_18;
  int local_c;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: Node * current@[???] */
  local_c = 0;
  for (local_18 = head; local_18 != (Node *)0x0; local_18 = local_18->next) {
    local_c = local_c + local_18->data;
  }
  return local_c;
}



/* Function: doubly_linked_list @ 00101cd4 */

int doubly_linked_list(DNode *head)

{
  DNode *local_18;
  int local_c;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: DNode * current@[???] */
  local_c = 0;
  for (local_18 = head; local_18 != (DNode *)0x0; local_18 = local_18->next) {
    local_c = local_c + local_18->data;
  }
  return local_c;
}



/* Function: binary_tree_sum @ 00101d28 */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int local_14;
  
  if (root == (TreeNode *)0x0) {
    local_14 = 0;
  }
  else {
    iVar1 = root->data;
    iVar2 = binary_tree_sum(root->left);
    local_14 = binary_tree_sum(root->right);
    local_14 = iVar1 + iVar2 + local_14;
  }
  return local_14;
}



/* Function: binary_tree @ 00101d9c */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00101dc0 */

int graph_traverse(Graph *g)

{
  Edge *local_18;
  int local_10;
  int local_c;
  
                    /* Unresolved local var: int sum@[???] */
  local_c = 0;
                    /* Unresolved local var: int i@[???] */
  for (local_10 = 0; local_10 < g->numVertices; local_10 = local_10 + 1) {
                    /* Unresolved local var: Edge * edge@[???] */
    for (local_18 = g->adjList[local_10]; local_18 != (Edge *)0x0; local_18 = local_18->next) {
      local_c = local_c + local_18->dest;
    }
  }
  return local_c;
}



/* Function: test_composite_types @ 00101e50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  uint uVar1;
  Graph local_1d8;
  Edge local_180;
  TreeNode local_170;
  DNode local_150;
  DNode local_138;
  Node local_120;
  Node local_110;
  Node local_100;
  Device local_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  UnionData local_cc;
  Flags local_c8;
  Node local_c0;
  Node local_b0;
  Widget WStack_a0;
  Rect local_70;
  undefined1 local_50 [16];
  undefined8 local_40;
  Point3D local_30;
  
                    /* Unresolved local var: Point3D p1@[???]
                       Unresolved local var: Point3D[2] pts@[???]
                       Unresolved local var: Rect r@[???]
                       Unresolved local var: Widget w@[???]
                       Unresolved local var: Node node2@[???]
                       Unresolved local var: Node node1@[???]
                       Unresolved local var: Flags f@[???]
                       Unresolved local var: UnionData u@[???]
                       Unresolved local var: UnionData[3] arr_u@[???]
                       Unresolved local var: Device dev@[???]
                       Unresolved local var: Node[3] list@[DW_OP_breg31(sp): +240]
                       Unresolved local var: DNode[2] dlist@[DW_OP_breg31(sp): +192]
                       Unresolved local var: TreeNode tree@[DW_OP_breg31(sp): +160]
                       Unresolved local var: Edge e1@[DW_OP_breg31(sp): +144]
                       Unresolved local var: Graph g@[DW_OP_breg31(sp): +56] */
  printf(&DAT_00103b7b);
  local_30.x = 1;
  local_30.y = 2;
  local_30.z = 3;
  uVar1 = struct_simple(&local_30);
  printf("CMP-L2-01 (struct_simple): %d\n",(ulong)uVar1);
  local_50._8_8_ = 0x200000001;
  local_50._0_4_ = 1;
  local_50._4_4_ = 1;
  local_40 = 0x200000002;
  uVar1 = struct_array((Point3D *)local_50,2);
  printf("CMP-L2-02 (struct_array): %d\n",(ulong)uVar1);
  local_70.position.z = 0;
  local_70.size.width = 100;
  local_70.position.x = 5;
  local_70.position.y = 10;
  local_70.size.height = 200;
  uVar1 = struct_nested(&local_70);
  printf("CMP-L2-03 (struct_nested): %d\n",(ulong)uVar1);
  memcpy(&WStack_a0,&DAT_00103704,0x30);
  uVar1 = struct_deep(&WStack_a0);
  printf("CMP-L2-04 (struct_deep): %d\n",(ulong)uVar1);
  local_c0.next = &local_b0;
  local_b0.next = (Node *)0x0;
  local_b0.data = 0x14;
  local_b0._4_4_ = 0;
  local_c0.data = 10;
  uVar1 = struct_with_ptr(&local_c0);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",(ulong)uVar1);
  local_c8 = (Flags)0x191d;
  uVar1 = struct_bitfields(&local_c8);
  printf("CMP-L2-06 (struct_bitfields): %d\n",(ulong)uVar1);
  local_cc.i = 0x12345678;
  uVar1 = union_type(&local_cc,0);
  printf("CMP-L2-07 (union_type): %d\n",(ulong)uVar1);
  local_d8 = 0x140000000a;
  local_d0 = 0x1e;
  uVar1 = union_array((UnionData *)&local_d8,3);
  printf("CMP-L2-08 (union_array): %d\n",(ulong)uVar1);
  uVar1 = enum_type(STATE_RUNNING);
  printf("CMP-L2-09 (enum_type): %d\n",(ulong)uVar1);
  uVar1 = enum_switch(STATE_PAUSED);
  printf("CMP-L2-10 (enum_switch): %d\n",(ulong)uVar1);
  local_f0.process = process_int;
  local_f0.data = 10;
  local_f0._4_4_ = 0;
  uVar1 = struct_func_ptr(&local_f0);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",(ulong)uVar1);
  local_120.data = 10;
  local_120.next = &local_110;
  local_110.data = 0x14;
  local_110.next = &local_100;
  local_100.data = 0x1e;
  local_100.next = (Node *)0x0;
  uVar1 = linked_list(&local_120);
  printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar1);
  local_138.prev = &local_150;
  local_150.data = 10;
  local_150.prev = (DNode *)0x0;
  local_138.data = 0x14;
  local_138.next = (DNode *)0x0;
  local_150.next = &local_138;
  uVar1 = doubly_linked_list(local_138.prev);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar1);
  local_170.left = (TreeNode *)0x0;
  local_170.data = 100;
  local_170._4_4_ = 0;
  local_170.right = (TreeNode *)0x0;
  uVar1 = binary_tree(&local_170);
  printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar1);
  local_180.next = (Edge *)0x0;
  local_180.dest = 1;
  local_180._4_4_ = 0;
  memset(&local_1d8,0,0x58);
  local_1d8.numVertices = 2;
  local_1d8.adjList[0] = &local_180;
  uVar1 = graph_traverse(&local_1d8);
  printf("CMP-L2-15 (graph_traverse): %d\n",(ulong)uVar1);
  return;
}



/* Function: main @ 00102194 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: FUN_001021cc @ 001021cc */

undefined1  [16] FUN_001021cc(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar28;
  undefined1 auVar27 [16];
  ulong uVar29;
  
  uVar11 = param_2._8_8_;
  uVar29 = param_2._0_8_;
  uVar28 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  uVar13 = fpcr;
  uVar3 = (uVar28 & 0xffffffffffff) << 3;
  lVar18 = -((long)uVar28 >> 0x3f);
  uVar12 = (uint)lVar18;
  lVar9 = -((long)uVar11 >> 0x3f);
  uVar14 = (uint)lVar9;
  uVar2 = uVar11 << 3;
  uVar4 = uVar2 & 0x7fffffffffff8;
  uVar10 = uVar26 >> 0x3d;
  uVar24 = uVar3 | uVar10;
  uVar20 = uVar28 >> 0x30 & 0x7fff;
  uVar19 = uVar11 >> 0x30 & 0x7fff;
  uVar17 = uVar29 >> 0x3d;
  uVar16 = uVar4 | uVar17;
  uVar21 = uVar26 * 8;
  uVar23 = uVar29 * 8;
  uVar22 = uVar21;
  uVar25 = uVar24;
  if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
    uVar8 = (int)uVar20 - (int)uVar19;
    lVar9 = lVar18;
    if ((int)uVar8 < 1) {
      if (uVar8 != 0) {
        if (uVar20 == 0) {
          if (uVar24 == 0 && uVar21 == 0) {
            uVar22 = uVar23;
            uVar25 = uVar16;
            if (uVar19 == 0x7fff) {
              uVar14 = uVar12;
              if (uVar16 != 0 || uVar23 != 0) {
                uVar11 = uVar4 >> 0x32 ^ 1;
                goto LAB_001024f0;
              }
              goto LAB_001027a4;
            }
            goto LAB_0010244c;
          }
          uVar8 = ~uVar8;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            uVar20 = uVar19;
            goto LAB_00102608;
          }
        }
        else {
          uVar8 = -uVar8;
          uVar24 = uVar24 | 0x8000000000000;
        }
        if (uVar19 != 0x7fff) {
          if ((int)uVar8 < 0x75) {
            if ((int)uVar8 < 0x40) {
              uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                       (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
              uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
            }
            else {
              uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
              if (uVar8 - 0x40 == 0) {
                uVar10 = uVar21;
              }
              uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
            }
          }
          else {
            uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
          }
          uVar10 = uVar17 + uVar23;
          uVar20 = uVar19;
          if (CARRY8(uVar17,uVar23)) {
            uVar16 = uVar16 + 1;
          }
          goto LAB_00102608;
        }
        if (uVar16 != 0 || uVar23 != 0) {
          uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
          uVar11 = uVar4 >> 0x32 ^ 1;
          uVar10 = uVar4 >> 3;
          goto LAB_001026b4;
        }
LAB_00102838:
        uVar22 = 0;
        uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
        goto LAB_00102384;
      }
      uVar15 = uVar20 + 1;
      if ((uVar15 & 0x7ffe) == 0) {
        if (uVar20 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) {
              if (uVar19 != 0x7fff) goto LAB_00102ac0;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102838;
            }
            else {
              uVar11 = uVar3 >> 0x32 ^ 1;
              uVar8 = (uint)uVar11;
              if (uVar19 != 0x7fff) goto LAB_00102c68;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102d00;
            }
LAB_00102d2c:
            if ((uVar2 & 0x4000000000000) == 0) {
              uVar8 = 1;
            }
            uVar11 = (ulong)uVar8;
            if (uVar24 != 0 || uVar21 != 0) {
LAB_00102c70:
              uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
              uVar10 = uVar28 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
                uVar10 = uVar4 >> 3;
                uVar12 = uVar14;
              }
              goto LAB_001026b4;
            }
LAB_00102ac0:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
          }
          else {
            if (uVar19 == 0x7fff) {
              if (uVar16 != 0 || uVar23 != 0) goto LAB_00102d2c;
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102838;
            }
            else {
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102ac0;
LAB_00102c68:
              if (uVar16 != 0 || uVar23 != 0) goto LAB_00102c70;
            }
LAB_00102d00:
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
          }
          goto LAB_001026b4;
        }
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = 0;
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_0010246c;
          }
          goto LAB_00102a38;
        }
        if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a38;
        uVar22 = uVar21 + uVar23;
        uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        if ((uVar25 >> 0x33 & 1) != 0) {
          uVar25 = uVar25 & 0xfff7ffffffffffff;
          uVar10 = 0;
          bVar6 = false;
          uVar15 = 1;
          goto LAB_0010231c;
        }
LAB_00102308:
        uVar17 = uVar22 | uVar25;
        goto LAB_0010230c;
      }
      if (uVar15 != 0x7fff) {
        uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        bVar6 = false;
        uVar10 = uVar21 + uVar23 >> 1 & 7;
        uVar25 = uVar17 >> 1;
        uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
        goto LAB_0010231c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 != 0) {
        if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102d10:
          uVar11 = 0x14;
          lVar18 = 0;
          goto LAB_0010255c;
        }
        if (uVar10 == 0x800000) {
          if (lVar18 == 0) goto LAB_00102cac;
LAB_00102b78:
          uVar11 = 0x14;
          lVar18 = 1;
          goto LAB_0010255c;
        }
LAB_001029d4:
        uVar14 = 0x14;
        if ((uVar13 & 0xc00000) == 0x400000) {
          uVar22 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          bVar6 = false;
          uVar11 = 0x14;
          uVar25 = uVar22;
          goto joined_r0x001029f4;
        }
        goto LAB_00102518;
      }
LAB_00102a64:
      uVar11 = 0x14;
    }
    else {
      if (uVar19 == 0) {
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            goto LAB_00102608;
          }
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) goto LAB_00102838;
            goto LAB_001024e4;
          }
          goto LAB_001023e0;
        }
        uVar19 = uVar20;
        if (uVar20 != 0x7fff) goto LAB_0010244c;
        uVar14 = uVar12;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_001027a4;
        uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
        uVar23 = uVar21;
        uVar16 = uVar24;
LAB_001024f0:
        uVar20 = 0x7fff;
        goto LAB_001024f8;
      }
      uVar16 = uVar16 | 0x8000000000000;
      if (uVar20 == 0x7fff) goto LAB_00102694;
LAB_001023e0:
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          uVar16 = uVar24;
        }
      }
      else {
        uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
        uVar16 = uVar24;
      }
      uVar10 = uVar17 + uVar21;
      if (CARRY8(uVar17,uVar21)) {
        uVar16 = uVar16 + 1;
      }
LAB_00102608:
      uVar19 = uVar20;
      uVar22 = uVar10;
      uVar25 = uVar16;
      if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010244c;
      uVar15 = uVar20 + 1;
      if (uVar15 != 0x7fff) {
        bVar6 = false;
        uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
        uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
        uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
        goto LAB_0010231c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 == 0) goto LAB_00102a64;
      if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102d10;
      if (uVar10 != 0x800000) goto LAB_001029d4;
      if (lVar18 != 0) goto LAB_00102b78;
LAB_00102cac:
      uVar22 = 0xffffffffffffffff;
      lVar18 = 0;
      uVar15 = 0x7ffe;
      uVar11 = 0x14;
      uVar25 = uVar22;
LAB_0010234c:
      uVar14 = (uint)uVar11;
      uVar12 = (uint)lVar18;
      if (uVar15 + 1 != 0x7fff) {
        uVar10 = uVar25 >> 3 & 0xffffffffffff;
        uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
        uVar14 = (uint)(uVar15 + 1) & 0x7fff;
        goto LAB_00102368;
      }
LAB_00102518:
      uVar12 = (uint)lVar18;
      uVar13 = uVar13 & 0xc00000;
      if (uVar13 != 0) {
        if (uVar13 == 0x400000) {
          if (lVar9 != 0) goto LAB_00102534;
        }
        else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00102534:
          uVar22 = 0xffffffffffffffff;
          uVar11 = (ulong)(uVar14 | 0x14);
          uVar10 = 0x1fffffffffffffff;
          uVar20 = 0x7ffe;
          goto LAB_0010246c;
        }
      }
      uVar11 = (ulong)(uVar14 | 0x14);
    }
LAB_0010255c:
    uVar22 = 0;
    uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
    goto LAB_00102570;
  }
  uVar8 = (int)uVar20 - (int)uVar19;
  if ((int)uVar8 < 1) {
    if (uVar8 == 0) {
      uVar11 = 0;
      if ((uVar20 + 1 & 0x7ffe) != 0) {
        uVar22 = uVar21 + uVar29 * -8;
        uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
        if ((uVar10 >> 0x33 & 1) != 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_001022a4;
        }
        lVar9 = lVar18;
        if (uVar22 != 0 || uVar10 != 0) goto LAB_001022a4;
        uVar22 = 0;
        uVar20 = 0;
        uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
        uVar10 = 0;
        goto LAB_0010246c;
      }
      if (uVar20 == 0) {
        if (uVar24 != 0 || uVar21 != 0) {
          if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a38;
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          if ((uVar25 >> 0x33 & 1) == 0) {
            if (uVar22 != 0 || uVar25 != 0) {
              uVar10 = 0;
              bVar6 = true;
              uVar15 = uVar20;
              goto LAB_0010231c;
            }
            goto LAB_00102b10;
          }
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          uVar17 = uVar22 | uVar25;
          goto LAB_0010230c;
        }
        uVar22 = uVar23;
        uVar25 = uVar16;
        lVar18 = lVar9;
        if (uVar16 == 0 && uVar23 == 0) {
LAB_00102b10:
          uVar10 = 0;
          uVar22 = 0;
          uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
          goto LAB_0010246c;
        }
LAB_00102a38:
        uVar10 = 0;
        uVar15 = 0;
        goto LAB_00102a40;
      }
      if (uVar20 == 0x7fff) {
        if (uVar24 == 0 && uVar21 == 0) {
          if (uVar19 != 0x7fff) goto LAB_00102978;
        }
        else {
          uVar11 = uVar3 >> 0x32 ^ 1;
          if (uVar19 != 0x7fff) goto LAB_00102948;
        }
LAB_00102bc0:
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = (uint)uVar11;
          if ((uVar2 & 0x4000000000000) == 0) {
            uVar8 = 1;
          }
          uVar11 = (ulong)uVar8;
          if (uVar24 == 0 && uVar21 == 0) {
LAB_00102c3c:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
            goto LAB_001026b4;
          }
LAB_00102bd8:
          uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
          uVar10 = uVar28 & 0xffffffffffff;
          if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
          }
          goto LAB_001026b4;
        }
        if (uVar24 != 0 || uVar21 != 0) goto LAB_00102948;
      }
      else {
        if (uVar19 == 0x7fff) goto LAB_00102bc0;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00102948:
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
            goto LAB_001026b4;
          }
          goto LAB_00102bd8;
        }
LAB_00102978:
        uVar11 = 0;
        if (uVar16 != 0 || uVar23 != 0) goto LAB_00102c3c;
      }
      uVar22 = 0xffffffffffffffff;
      uVar10 = 0xffffffffffff;
      uVar12 = 0;
      uVar11 = 1;
    }
    else {
      if (uVar20 == 0) {
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar19 == 0x7fff) {
            if (uVar16 != 0 || uVar23 != 0) {
              uVar11 = uVar4 >> 0x32 ^ 1;
              uVar12 = uVar14;
              goto LAB_001024f0;
            }
            goto LAB_001027a4;
          }
          goto LAB_0010244c;
        }
        uVar8 = ~uVar8;
        if (uVar8 == 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_0010229c;
        }
      }
      else {
        uVar8 = -uVar8;
        uVar24 = uVar24 | 0x8000000000000;
      }
      if (uVar19 != 0x7fff) {
        if ((int)uVar8 < 0x75) {
          if ((int)uVar8 < 0x40) {
            uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                     (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
            uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
          }
          else {
            uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
            if (uVar8 - 0x40 == 0) {
              uVar10 = uVar21;
            }
            uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          }
        }
        else {
          uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
        }
        uVar22 = uVar23 - uVar10;
        uVar25 = uVar16 - (uVar23 < uVar10);
        goto LAB_0010229c;
      }
      if (uVar16 == 0 && uVar23 == 0) goto LAB_00102838;
      uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
      uVar11 = uVar4 >> 0x32 ^ 1;
      uVar10 = uVar4 >> 3;
      uVar12 = uVar14;
LAB_001026b4:
      if (uVar10 == 0 && uVar22 == 0) {
        uVar22 = 0;
        uVar14 = 0x7fff;
        uVar10 = 0;
        goto LAB_00102368;
      }
    }
    uVar14 = 0x7fff;
    uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
  }
  else {
    if (uVar19 == 0) {
      if (uVar16 != 0 || uVar23 != 0) {
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          uVar19 = uVar20;
          lVar9 = lVar18;
          goto LAB_0010229c;
        }
        goto LAB_00102248;
      }
      uVar19 = uVar20;
      lVar9 = lVar18;
      if (uVar20 == 0x7fff) {
        uVar14 = uVar12;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_001024e4:
          uVar11 = uVar3 >> 0x32 ^ 1;
          uVar23 = uVar21;
          uVar16 = uVar24;
          goto LAB_001024f0;
        }
LAB_001027a4:
        uVar22 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = uVar14;
        goto LAB_001026b4;
      }
LAB_0010244c:
      uVar12 = (uint)lVar9;
      uVar17 = uVar22 | uVar25;
      uVar10 = uVar22 & 7;
      bVar6 = false;
      uVar15 = uVar19;
      lVar18 = lVar9;
      if (uVar19 == 0) goto joined_r0x0010245c;
LAB_0010231c:
      if (uVar10 == 0) {
        uVar10 = uVar25 & 0x8000000000000;
        uVar11 = 0;
        if (bVar6) {
LAB_00102a40:
          uVar11 = 0;
          if (((uint)uVar13 >> 0xb & 1) != 0) {
            uVar11 = 8;
          }
        }
      }
      else {
        uVar10 = uVar13 & 0xc00000;
        if (uVar10 == 0x400000) {
          uVar11 = 0x10;
joined_r0x001029f4:
          if (lVar18 == 0) {
LAB_00102644:
            bVar7 = 0xfffffffffffffff7 < uVar22;
            uVar22 = uVar22 + 8;
            if (bVar7) {
              uVar25 = uVar25 + 1;
            }
          }
        }
        else if (uVar10 == 0x800000) {
          uVar11 = 0x10;
          if (lVar18 != 0) goto LAB_00102644;
        }
        else {
          if (uVar10 != 0) {
            uVar10 = uVar25 & 0x8000000000000;
            uVar11 = 0x10;
            if (bVar6) {
              uVar11 = 0x18;
            }
            goto LAB_00102348;
          }
          uVar11 = 0x10;
          if (((uVar22 & 0xf) != 4) &&
             (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
            uVar25 = uVar25 + 1;
          }
        }
        uVar10 = uVar25 & 0x8000000000000;
        if (bVar6) {
          uVar11 = (ulong)((uint)uVar11 | 8);
        }
      }
LAB_00102348:
      uVar12 = (uint)lVar18;
      uVar20 = uVar15;
      uVar23 = uVar22;
      uVar16 = uVar25;
      lVar9 = lVar18;
      if (uVar10 != 0) goto LAB_0010234c;
LAB_001024f8:
      uVar10 = uVar16 >> 3;
      uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
      if (uVar20 == 0x7fff) goto LAB_001026b4;
    }
    else {
      uVar16 = uVar16 | 0x8000000000000;
LAB_00102248:
      if (uVar20 == 0x7fff) {
LAB_00102694:
        lVar9 = lVar18;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00102838;
        uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
        uVar11 = uVar3 >> 0x32 ^ 1;
        uVar10 = uVar28 & 0xffffffffffff;
        goto LAB_001026b4;
      }
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
        }
      }
      else {
        uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
      }
      uVar22 = uVar21 - uVar10;
      uVar25 = uVar24 - (uVar21 < uVar10);
      uVar19 = uVar20;
      lVar9 = lVar18;
LAB_0010229c:
      uVar10 = uVar25 & 0x7ffffffffffff;
      uVar20 = uVar19;
      if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010244c;
LAB_001022a4:
      if (uVar10 == 0) {
        uVar12 = (int)LZCOUNT(uVar22) + 0x34;
        if (uVar12 < 0x40) goto LAB_001022b0;
        uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
        uVar17 = 0;
      }
      else {
        uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_001022b0:
        uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
        uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
      }
      if ((long)(int)uVar12 < (long)uVar20) {
        uVar19 = uVar20 - (long)(int)uVar12;
        uVar22 = uVar17;
        uVar25 = uVar10 & 0xfff7ffffffffffff;
        goto LAB_0010244c;
      }
      iVar1 = uVar12 - (int)uVar20;
      uVar12 = iVar1 + 1;
      if ((int)uVar12 < 0x40) {
        uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
        uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
                 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
        goto LAB_00102308;
      }
      uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
      if (uVar12 == 0x40) {
        uVar22 = uVar17;
      }
      uVar25 = 0;
      uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
      uVar22 = uVar17;
LAB_0010230c:
      uVar12 = (uint)lVar9;
joined_r0x0010245c:
      if (uVar17 != 0) {
        uVar10 = uVar22 & 7;
        bVar6 = true;
        uVar15 = 0;
        lVar18 = lVar9;
        goto LAB_0010231c;
      }
      uVar22 = 0;
      uVar20 = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
LAB_0010246c:
    uVar10 = uVar10 & 0xffffffffffff;
    uVar14 = (uint)uVar20 & 0x7fff;
  }
LAB_00102368:
  uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
  if ((int)uVar11 == 0) {
LAB_00102384:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar22;
    return auVar27;
  }
LAB_00102570:
  __sfp_handle_exceptions(uVar11);
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar22;
  return auVar5;
}



/* Function: __addtf3 @ 001021d0 */

undefined1  [16] __addtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar28;
  undefined1 auVar27 [16];
  ulong uVar29;
  
  uVar11 = param_2._8_8_;
  uVar29 = param_2._0_8_;
  uVar28 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  uVar13 = fpcr;
  uVar3 = (uVar28 & 0xffffffffffff) << 3;
  lVar18 = -((long)uVar28 >> 0x3f);
  uVar12 = (uint)lVar18;
  lVar9 = -((long)uVar11 >> 0x3f);
  uVar14 = (uint)lVar9;
  uVar2 = uVar11 << 3;
  uVar4 = uVar2 & 0x7fffffffffff8;
  uVar10 = uVar26 >> 0x3d;
  uVar24 = uVar3 | uVar10;
  uVar20 = uVar28 >> 0x30 & 0x7fff;
  uVar19 = uVar11 >> 0x30 & 0x7fff;
  uVar17 = uVar29 >> 0x3d;
  uVar16 = uVar4 | uVar17;
  uVar21 = uVar26 * 8;
  uVar23 = uVar29 * 8;
  uVar22 = uVar21;
  uVar25 = uVar24;
  if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
    uVar8 = (int)uVar20 - (int)uVar19;
    lVar9 = lVar18;
    if ((int)uVar8 < 1) {
      if (uVar8 != 0) {
        if (uVar20 == 0) {
          if (uVar24 == 0 && uVar21 == 0) {
            uVar22 = uVar23;
            uVar25 = uVar16;
            if (uVar19 == 0x7fff) {
              uVar14 = uVar12;
              if (uVar16 != 0 || uVar23 != 0) {
                uVar11 = uVar4 >> 0x32 ^ 1;
                goto LAB_001024f0;
              }
              goto LAB_001027a4;
            }
            goto LAB_0010244c;
          }
          uVar8 = ~uVar8;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            uVar20 = uVar19;
            goto LAB_00102608;
          }
        }
        else {
          uVar8 = -uVar8;
          uVar24 = uVar24 | 0x8000000000000;
        }
        if (uVar19 != 0x7fff) {
          if ((int)uVar8 < 0x75) {
            if ((int)uVar8 < 0x40) {
              uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                       (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
              uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
            }
            else {
              uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
              if (uVar8 - 0x40 == 0) {
                uVar10 = uVar21;
              }
              uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
            }
          }
          else {
            uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
          }
          uVar10 = uVar17 + uVar23;
          uVar20 = uVar19;
          if (CARRY8(uVar17,uVar23)) {
            uVar16 = uVar16 + 1;
          }
          goto LAB_00102608;
        }
        if (uVar16 != 0 || uVar23 != 0) {
          uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
          uVar11 = uVar4 >> 0x32 ^ 1;
          uVar10 = uVar4 >> 3;
          goto LAB_001026b4;
        }
LAB_00102838:
        uVar22 = 0;
        uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
        goto LAB_00102384;
      }
      uVar15 = uVar20 + 1;
      if ((uVar15 & 0x7ffe) == 0) {
        if (uVar20 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) {
              if (uVar19 != 0x7fff) goto LAB_00102ac0;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102838;
            }
            else {
              uVar11 = uVar3 >> 0x32 ^ 1;
              uVar8 = (uint)uVar11;
              if (uVar19 != 0x7fff) goto LAB_00102c68;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102d00;
            }
LAB_00102d2c:
            if ((uVar2 & 0x4000000000000) == 0) {
              uVar8 = 1;
            }
            uVar11 = (ulong)uVar8;
            if (uVar24 != 0 || uVar21 != 0) {
LAB_00102c70:
              uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
              uVar10 = uVar28 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
                uVar10 = uVar4 >> 3;
                uVar12 = uVar14;
              }
              goto LAB_001026b4;
            }
LAB_00102ac0:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
          }
          else {
            if (uVar19 == 0x7fff) {
              if (uVar16 != 0 || uVar23 != 0) goto LAB_00102d2c;
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102838;
            }
            else {
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102ac0;
LAB_00102c68:
              if (uVar16 != 0 || uVar23 != 0) goto LAB_00102c70;
            }
LAB_00102d00:
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
          }
          goto LAB_001026b4;
        }
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = 0;
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_0010246c;
          }
          goto LAB_00102a38;
        }
        if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a38;
        uVar22 = uVar21 + uVar23;
        uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        if ((uVar25 >> 0x33 & 1) != 0) {
          uVar25 = uVar25 & 0xfff7ffffffffffff;
          uVar10 = 0;
          bVar6 = false;
          uVar15 = 1;
          goto LAB_0010231c;
        }
LAB_00102308:
        uVar17 = uVar22 | uVar25;
        goto LAB_0010230c;
      }
      if (uVar15 != 0x7fff) {
        uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        bVar6 = false;
        uVar10 = uVar21 + uVar23 >> 1 & 7;
        uVar25 = uVar17 >> 1;
        uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
        goto LAB_0010231c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 != 0) {
        if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102d10:
          uVar11 = 0x14;
          lVar18 = 0;
          goto LAB_0010255c;
        }
        if (uVar10 == 0x800000) {
          if (lVar18 == 0) goto LAB_00102cac;
LAB_00102b78:
          uVar11 = 0x14;
          lVar18 = 1;
          goto LAB_0010255c;
        }
LAB_001029d4:
        uVar14 = 0x14;
        if ((uVar13 & 0xc00000) == 0x400000) {
          uVar22 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          bVar6 = false;
          uVar11 = 0x14;
          uVar25 = uVar22;
          goto joined_r0x001029f4;
        }
        goto LAB_00102518;
      }
LAB_00102a64:
      uVar11 = 0x14;
    }
    else {
      if (uVar19 == 0) {
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            goto LAB_00102608;
          }
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) goto LAB_00102838;
            goto LAB_001024e4;
          }
          goto LAB_001023e0;
        }
        uVar19 = uVar20;
        if (uVar20 != 0x7fff) goto LAB_0010244c;
        uVar14 = uVar12;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_001027a4;
        uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
        uVar23 = uVar21;
        uVar16 = uVar24;
LAB_001024f0:
        uVar20 = 0x7fff;
        goto LAB_001024f8;
      }
      uVar16 = uVar16 | 0x8000000000000;
      if (uVar20 == 0x7fff) goto LAB_00102694;
LAB_001023e0:
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          uVar16 = uVar24;
        }
      }
      else {
        uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
        uVar16 = uVar24;
      }
      uVar10 = uVar17 + uVar21;
      if (CARRY8(uVar17,uVar21)) {
        uVar16 = uVar16 + 1;
      }
LAB_00102608:
      uVar19 = uVar20;
      uVar22 = uVar10;
      uVar25 = uVar16;
      if ((uVar16 >> 0x33 & 1) == 0) goto LAB_0010244c;
      uVar15 = uVar20 + 1;
      if (uVar15 != 0x7fff) {
        bVar6 = false;
        uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
        uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
        uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
        goto LAB_0010231c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 == 0) goto LAB_00102a64;
      if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102d10;
      if (uVar10 != 0x800000) goto LAB_001029d4;
      if (lVar18 != 0) goto LAB_00102b78;
LAB_00102cac:
      uVar22 = 0xffffffffffffffff;
      lVar18 = 0;
      uVar15 = 0x7ffe;
      uVar11 = 0x14;
      uVar25 = uVar22;
LAB_0010234c:
      uVar14 = (uint)uVar11;
      uVar12 = (uint)lVar18;
      if (uVar15 + 1 != 0x7fff) {
        uVar10 = uVar25 >> 3 & 0xffffffffffff;
        uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
        uVar14 = (uint)(uVar15 + 1) & 0x7fff;
        goto LAB_00102368;
      }
LAB_00102518:
      uVar12 = (uint)lVar18;
      uVar13 = uVar13 & 0xc00000;
      if (uVar13 != 0) {
        if (uVar13 == 0x400000) {
          if (lVar9 != 0) goto LAB_00102534;
        }
        else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00102534:
          uVar22 = 0xffffffffffffffff;
          uVar11 = (ulong)(uVar14 | 0x14);
          uVar10 = 0x1fffffffffffffff;
          uVar20 = 0x7ffe;
          goto LAB_0010246c;
        }
      }
      uVar11 = (ulong)(uVar14 | 0x14);
    }
LAB_0010255c:
    uVar22 = 0;
    uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
    goto LAB_00102570;
  }
  uVar8 = (int)uVar20 - (int)uVar19;
  if ((int)uVar8 < 1) {
    if (uVar8 == 0) {
      uVar11 = 0;
      if ((uVar20 + 1 & 0x7ffe) != 0) {
        uVar22 = uVar21 + uVar29 * -8;
        uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
        if ((uVar10 >> 0x33 & 1) != 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_001022a4;
        }
        lVar9 = lVar18;
        if (uVar22 != 0 || uVar10 != 0) goto LAB_001022a4;
        uVar22 = 0;
        uVar20 = 0;
        uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
        uVar10 = 0;
        goto LAB_0010246c;
      }
      if (uVar20 == 0) {
        if (uVar24 != 0 || uVar21 != 0) {
          if (uVar16 == 0 && uVar23 == 0) goto LAB_00102a38;
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          if ((uVar25 >> 0x33 & 1) == 0) {
            if (uVar22 != 0 || uVar25 != 0) {
              uVar10 = 0;
              bVar6 = true;
              uVar15 = uVar20;
              goto LAB_0010231c;
            }
            goto LAB_00102b10;
          }
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          uVar17 = uVar22 | uVar25;
          goto LAB_0010230c;
        }
        uVar22 = uVar23;
        uVar25 = uVar16;
        lVar18 = lVar9;
        if (uVar16 == 0 && uVar23 == 0) {
LAB_00102b10:
          uVar10 = 0;
          uVar22 = 0;
          uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
          goto LAB_0010246c;
        }
LAB_00102a38:
        uVar10 = 0;
        uVar15 = 0;
        goto LAB_00102a40;
      }
      if (uVar20 == 0x7fff) {
        if (uVar24 == 0 && uVar21 == 0) {
          if (uVar19 != 0x7fff) goto LAB_00102978;
        }
        else {
          uVar11 = uVar3 >> 0x32 ^ 1;
          if (uVar19 != 0x7fff) goto LAB_00102948;
        }
LAB_00102bc0:
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = (uint)uVar11;
          if ((uVar2 & 0x4000000000000) == 0) {
            uVar8 = 1;
          }
          uVar11 = (ulong)uVar8;
          if (uVar24 == 0 && uVar21 == 0) {
LAB_00102c3c:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
            goto LAB_001026b4;
          }
LAB_00102bd8:
          uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
          uVar10 = uVar28 & 0xffffffffffff;
          if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
          }
          goto LAB_001026b4;
        }
        if (uVar24 != 0 || uVar21 != 0) goto LAB_00102948;
      }
      else {
        if (uVar19 == 0x7fff) goto LAB_00102bc0;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00102948:
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
            goto LAB_001026b4;
          }
          goto LAB_00102bd8;
        }
LAB_00102978:
        uVar11 = 0;
        if (uVar16 != 0 || uVar23 != 0) goto LAB_00102c3c;
      }
      uVar22 = 0xffffffffffffffff;
      uVar10 = 0xffffffffffff;
      uVar12 = 0;
      uVar11 = 1;
    }
    else {
      if (uVar20 == 0) {
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar19 == 0x7fff) {
            if (uVar16 != 0 || uVar23 != 0) {
              uVar11 = uVar4 >> 0x32 ^ 1;
              uVar12 = uVar14;
              goto LAB_001024f0;
            }
            goto LAB_001027a4;
          }
          goto LAB_0010244c;
        }
        uVar8 = ~uVar8;
        if (uVar8 == 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_0010229c;
        }
      }
      else {
        uVar8 = -uVar8;
        uVar24 = uVar24 | 0x8000000000000;
      }
      if (uVar19 != 0x7fff) {
        if ((int)uVar8 < 0x75) {
          if ((int)uVar8 < 0x40) {
            uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                     (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
            uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
          }
          else {
            uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
            if (uVar8 - 0x40 == 0) {
              uVar10 = uVar21;
            }
            uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          }
        }
        else {
          uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
        }
        uVar22 = uVar23 - uVar10;
        uVar25 = uVar16 - (uVar23 < uVar10);
        goto LAB_0010229c;
      }
      if (uVar16 == 0 && uVar23 == 0) goto LAB_00102838;
      uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
      uVar11 = uVar4 >> 0x32 ^ 1;
      uVar10 = uVar4 >> 3;
      uVar12 = uVar14;
LAB_001026b4:
      if (uVar10 == 0 && uVar22 == 0) {
        uVar22 = 0;
        uVar14 = 0x7fff;
        uVar10 = 0;
        goto LAB_00102368;
      }
    }
    uVar14 = 0x7fff;
    uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
  }
  else {
    if (uVar19 == 0) {
      if (uVar16 != 0 || uVar23 != 0) {
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          uVar19 = uVar20;
          lVar9 = lVar18;
          goto LAB_0010229c;
        }
        goto LAB_00102248;
      }
      uVar19 = uVar20;
      lVar9 = lVar18;
      if (uVar20 == 0x7fff) {
        uVar14 = uVar12;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_001024e4:
          uVar11 = uVar3 >> 0x32 ^ 1;
          uVar23 = uVar21;
          uVar16 = uVar24;
          goto LAB_001024f0;
        }
LAB_001027a4:
        uVar22 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = uVar14;
        goto LAB_001026b4;
      }
LAB_0010244c:
      uVar12 = (uint)lVar9;
      uVar17 = uVar22 | uVar25;
      uVar10 = uVar22 & 7;
      bVar6 = false;
      uVar15 = uVar19;
      lVar18 = lVar9;
      if (uVar19 == 0) goto joined_r0x0010245c;
LAB_0010231c:
      if (uVar10 == 0) {
        uVar10 = uVar25 & 0x8000000000000;
        uVar11 = 0;
        if (bVar6) {
LAB_00102a40:
          uVar11 = 0;
          if (((uint)uVar13 >> 0xb & 1) != 0) {
            uVar11 = 8;
          }
        }
      }
      else {
        uVar10 = uVar13 & 0xc00000;
        if (uVar10 == 0x400000) {
          uVar11 = 0x10;
joined_r0x001029f4:
          if (lVar18 == 0) {
LAB_00102644:
            bVar7 = 0xfffffffffffffff7 < uVar22;
            uVar22 = uVar22 + 8;
            if (bVar7) {
              uVar25 = uVar25 + 1;
            }
          }
        }
        else if (uVar10 == 0x800000) {
          uVar11 = 0x10;
          if (lVar18 != 0) goto LAB_00102644;
        }
        else {
          if (uVar10 != 0) {
            uVar10 = uVar25 & 0x8000000000000;
            uVar11 = 0x10;
            if (bVar6) {
              uVar11 = 0x18;
            }
            goto LAB_00102348;
          }
          uVar11 = 0x10;
          if (((uVar22 & 0xf) != 4) &&
             (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
            uVar25 = uVar25 + 1;
          }
        }
        uVar10 = uVar25 & 0x8000000000000;
        if (bVar6) {
          uVar11 = (ulong)((uint)uVar11 | 8);
        }
      }
LAB_00102348:
      uVar12 = (uint)lVar18;
      uVar20 = uVar15;
      uVar23 = uVar22;
      uVar16 = uVar25;
      lVar9 = lVar18;
      if (uVar10 != 0) goto LAB_0010234c;
LAB_001024f8:
      uVar10 = uVar16 >> 3;
      uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
      if (uVar20 == 0x7fff) goto LAB_001026b4;
    }
    else {
      uVar16 = uVar16 | 0x8000000000000;
LAB_00102248:
      if (uVar20 == 0x7fff) {
LAB_00102694:
        lVar9 = lVar18;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00102838;
        uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
        uVar11 = uVar3 >> 0x32 ^ 1;
        uVar10 = uVar28 & 0xffffffffffff;
        goto LAB_001026b4;
      }
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
        }
      }
      else {
        uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
      }
      uVar22 = uVar21 - uVar10;
      uVar25 = uVar24 - (uVar21 < uVar10);
      uVar19 = uVar20;
      lVar9 = lVar18;
LAB_0010229c:
      uVar10 = uVar25 & 0x7ffffffffffff;
      uVar20 = uVar19;
      if ((uVar25 >> 0x33 & 1) == 0) goto LAB_0010244c;
LAB_001022a4:
      if (uVar10 == 0) {
        uVar12 = (int)LZCOUNT(uVar22) + 0x34;
        if (uVar12 < 0x40) goto LAB_001022b0;
        uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
        uVar17 = 0;
      }
      else {
        uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_001022b0:
        uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
        uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
      }
      if ((long)(int)uVar12 < (long)uVar20) {
        uVar19 = uVar20 - (long)(int)uVar12;
        uVar22 = uVar17;
        uVar25 = uVar10 & 0xfff7ffffffffffff;
        goto LAB_0010244c;
      }
      iVar1 = uVar12 - (int)uVar20;
      uVar12 = iVar1 + 1;
      if ((int)uVar12 < 0x40) {
        uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
        uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
                 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
        goto LAB_00102308;
      }
      uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
      if (uVar12 == 0x40) {
        uVar22 = uVar17;
      }
      uVar25 = 0;
      uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
      uVar22 = uVar17;
LAB_0010230c:
      uVar12 = (uint)lVar9;
joined_r0x0010245c:
      if (uVar17 != 0) {
        uVar10 = uVar22 & 7;
        bVar6 = true;
        uVar15 = 0;
        lVar18 = lVar9;
        goto LAB_0010231c;
      }
      uVar22 = 0;
      uVar20 = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
LAB_0010246c:
    uVar10 = uVar10 & 0xffffffffffff;
    uVar14 = (uint)uVar20 & 0x7fff;
  }
LAB_00102368:
  uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
  if ((int)uVar11 == 0) {
LAB_00102384:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar22;
    return auVar27;
  }
LAB_00102570:
  __sfp_handle_exceptions(uVar11);
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar22;
  return auVar5;
}



/* Function: __multf3 @ 00102d70 */

undefined1  [16] __multf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  
  uVar21 = param_2._8_8_;
  uVar17 = param_2._0_8_;
  uVar11 = param_1._8_8_;
  uVar15 = param_1._0_8_;
  uVar18 = fpcr;
  uVar10 = uVar11 >> 0x3f;
  uVar19 = uVar11 & 0xffffffffffff;
  uVar11 = uVar11 >> 0x30 & 0x7fff;
  iVar8 = (int)uVar11;
  if (iVar8 == 0) {
    if (uVar15 == 0 && uVar19 == 0) {
      uVar19 = 0;
      uVar7 = 4;
      lVar13 = 0;
      lVar24 = 1;
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      if (uVar19 == 0) {
        uVar11 = LZCOUNT(uVar15) + 0x31;
        iVar8 = (int)uVar11;
        lVar13 = LZCOUNT(uVar15) + 0x40;
        if (uVar11 < 0x3d) goto LAB_001031c8;
        uVar11 = 0;
        uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
      }
      else {
        lVar13 = LZCOUNT(uVar19);
        iVar8 = (int)lVar13 + -0xf;
LAB_001031c8:
        uVar19 = uVar15 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar19 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar11 = uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      uVar7 = 0;
      lVar13 = -0x3fef - lVar13;
      lVar24 = 0;
      uVar6 = 0;
    }
  }
  else if (iVar8 == 0x7fff) {
    if (uVar15 == 0 && uVar19 == 0) {
      uVar19 = 0;
      uVar7 = 8;
      lVar13 = 0x7fff;
      lVar24 = 2;
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      uVar6 = uVar19 >> 0x2f ^ 1;
      uVar7 = 0xc;
      lVar13 = 0x7fff;
      lVar24 = 3;
      uVar11 = uVar15;
    }
  }
  else {
    uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
    lVar13 = uVar11 - 0x3fff;
    lVar24 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar11 = uVar15 << 3;
  }
  uVar14 = uVar21 >> 0x3f;
  uVar15 = uVar21 & 0xffffffffffff;
  uVar22 = uVar21 >> 0x30 & 0x7fff;
  iVar8 = (int)uVar22;
  uVar4 = param_1._12_4_;
  uVar5 = param_2._12_4_;
  if (iVar8 == 0) {
    if (uVar17 == 0 && uVar15 == 0) {
      uVar7 = uVar7 | 1;
      lVar23 = lVar13 + 1;
      uVar21 = 0;
      uVar17 = 0;
      lVar12 = 1;
      lVar20 = lVar13;
    }
    else {
      if (uVar15 == 0) {
        uVar21 = LZCOUNT(uVar17) + 0x31;
        iVar8 = (int)uVar21;
        lVar23 = LZCOUNT(uVar17) + 0x40;
        if (uVar21 < 0x3d) goto LAB_0010316c;
        uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
        uVar17 = 0;
      }
      else {
        lVar23 = LZCOUNT(uVar15);
        iVar8 = (int)lVar23 + -0xf;
LAB_0010316c:
        uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      lVar20 = (lVar13 - lVar23) + -0x3fef;
      lVar23 = (lVar13 - lVar23) + -0x3fee;
      lVar12 = 0;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    if (uVar7 < 0xb) {
LAB_00102e7c:
      uVar15 = uVar21;
      if (2 < uVar7) {
LAB_00102ef8:
        uVar7 = 1L << uVar7;
        uVar25 = uVar11;
        uVar21 = uVar19;
        uVar26 = uVar22;
        lVar9 = lVar24;
        if ((uVar7 & 0x530) == 0) {
          if ((uVar7 & 0x240) != 0) {
            uVar6 = 1;
            uVar15 = 0xffffffffffff;
            uVar4 = 0x7fff;
            uVar11 = 0xffffffffffffffff;
            uVar10 = 0;
            goto LAB_00102eac;
          }
          uVar25 = uVar17;
          uVar21 = uVar15;
          uVar26 = uVar14;
          lVar9 = lVar12;
          if ((uVar7 & 0x88) == 0) goto LAB_00102f9c;
        }
LAB_00102f3c:
        lVar12 = lVar9;
        uVar14 = uVar26;
        uVar17 = uVar25;
        uVar22 = uVar14;
        if (lVar12 == 2) {
LAB_00102f8c:
          uVar4 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          uVar10 = uVar22;
          goto LAB_00102eac;
        }
        goto LAB_00102f58;
      }
      if (uVar7 - 1 < 2) {
        if (lVar12 == 2) goto LAB_00102f8c;
        goto LAB_00102e98;
      }
LAB_00102f9c:
      uVar29 = uVar17 & 0xffffffff;
      uVar25 = uVar11 >> 0x20;
      uVar7 = uVar15 & 0xffffffff;
      uVar11 = uVar11 & 0xffffffff;
      uVar17 = uVar17 >> 0x20;
      uVar15 = uVar15 >> 0x20;
      uVar26 = uVar25 * uVar29;
      uVar28 = uVar19 >> 0x20;
      uVar14 = uVar25 * uVar7;
      uVar19 = uVar19 & 0xffffffff;
      uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
      uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
      uVar27 = uVar28 * uVar29;
      uVar30 = uVar28 * uVar7;
      lVar13 = uVar25 * uVar17 + 0x100000000;
      if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
        lVar13 = uVar25 * uVar17;
      }
      uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
      uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
      uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
      lVar24 = uVar25 * uVar15 + 0x100000000;
      if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
        lVar24 = uVar25 * uVar15;
      }
      uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
      lVar13 = uVar17 * uVar28 + 0x100000000;
      if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
        lVar13 = uVar17 * uVar28;
      }
      uVar17 = lVar24 + (uVar21 >> 0x20);
      uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
      lVar24 = uVar15 * uVar28 + 0x100000000;
      if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
        lVar24 = uVar15 * uVar28;
      }
      uVar15 = uVar21 + uVar17;
      uVar26 = (ulong)(uVar14 < uVar26);
      uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
      uVar7 = uVar15 + uVar26;
      uVar16 = uVar16 >> 0x20;
      uVar25 = lVar13 + (uVar1 >> 0x20);
      if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
        uVar16 = uVar16 + 1;
      }
      uVar15 = uVar14 + uVar19;
      uVar21 = (ulong)CARRY8(uVar14,uVar19);
      uVar17 = uVar7 + uVar25;
      uVar19 = uVar17 + uVar21;
      if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
        lVar24 = lVar24 + 1;
      }
      uVar10 = (ulong)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
                      (uVar15 & 0x7ffffffffffff) != 0);
      uVar15 = uVar15 >> 0x33;
      uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
      uVar19 = uVar19 >> 0x33;
      uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
      if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
        uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
        uVar21 = uVar21 >> 1;
        lVar20 = lVar23;
      }
LAB_001030fc:
      lVar13 = lVar20 + 0x3fff;
      uVar5 = (uint)uVar6;
      uVar10 = uVar22;
      if (lVar13 < 1) {
        uVar19 = 1 - lVar13;
        if ((long)uVar19 < 0x75) {
          iVar8 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(uVar17 << ((ulong)(0x40 - iVar8) & 0x3f) != 0);
            uVar17 = uVar21 << ((ulong)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
            uVar15 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar17 | uVar11;
            if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_001032e4;
            if ((uVar15 >> 0x33 & 1) == 0) goto LAB_0010342c;
LAB_00103498:
            uVar6 = (ulong)(uVar5 | 0x18);
            uVar17 = 1;
            uVar15 = 0;
            uVar11 = 0;
          }
          else {
            uVar11 = uVar17 | uVar21 << ((ulong)(0x80 - iVar8) & 0x3f);
            if (uVar19 == 0x40) {
              uVar11 = uVar17;
            }
            uVar21 = uVar21 >> ((ulong)(iVar8 - 0x40) & 0x3f);
            uVar19 = uVar11 != 0 | uVar21;
            uVar15 = 0;
            if ((ulong)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_0010342c:
              uVar17 = 0;
              uVar4 = 0;
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
              if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_00102eac;
              uVar6 = (ulong)(uVar5 | 8);
            }
            else {
              uVar15 = 0;
LAB_001032e4:
              uVar18 = uVar18 & 0xc00000;
              if (uVar18 == 0x400000) {
                if (uVar22 == 0) {
LAB_0010348c:
                  bVar3 = 0xfffffffffffffff7 < uVar19;
                  uVar19 = uVar19 + 8;
                  if (bVar3) {
                    uVar15 = uVar15 + 1;
                  }
                }
              }
              else if (uVar18 == 0x800000) {
                if (uVar22 != 0) goto LAB_0010348c;
              }
              else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
                      (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
                uVar15 = uVar15 + 1;
              }
              if ((uVar15 >> 0x33 & 1) != 0) goto LAB_00103498;
              uVar6 = (ulong)(uVar5 | 0x18);
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar17 = 0;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
            }
          }
        }
        else {
          uVar11 = 0;
          if (uVar17 != 0 || uVar21 != 0) {
            uVar5 = uVar5 | 0x10;
            uVar11 = 1 - uVar22;
            if (((uVar18 & 0xc00000) != 0x400000) &&
               (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
              uVar11 = 0;
            }
          }
          uVar6 = (ulong)(uVar5 | 8);
          uVar17 = 0;
          uVar15 = 0;
        }
      }
      else {
        if ((uVar17 & 7) != 0) {
          uVar19 = uVar18 & 0xc00000;
          uVar6 = (ulong)(uVar5 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar22 == 0) {
LAB_0010347c:
              bVar3 = 0xfffffffffffffff7 < uVar17;
              uVar17 = uVar17 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar22 != 0) goto LAB_0010347c;
          }
          else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
                  (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
            uVar21 = uVar21 + 1;
          }
        }
        if ((uVar21 >> 0x34 & 1) != 0) {
          uVar21 = uVar21 & 0xffefffffffffffff;
          lVar13 = lVar20 + 0x4000;
        }
        if (lVar13 < 0x7fff) {
          uVar15 = uVar21 >> 3 & 0xffffffffffff;
          uVar4 = (uint)lVar13 & 0x7fff;
          uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
          goto LAB_00102eac;
        }
        uVar18 = uVar18 & 0xc00000;
        uVar4 = 0x7ffe;
        if (uVar18 == 0x400000) {
          bVar3 = uVar22 != 0;
          if (!bVar3) {
            uVar4 = 0x7fff;
          }
          uVar17 = (ulong)uVar4;
          uVar15 = 0xffffffffffff;
          if (!bVar3) {
            uVar15 = 0;
          }
          uVar11 = -(ulong)bVar3;
        }
        else if (uVar18 == 0x800000) {
          bVar3 = uVar22 == 0;
          if (!bVar3) {
            uVar4 = 0x7fff;
          }
          uVar17 = (ulong)uVar4;
          uVar15 = 0xffffffffffff;
          if (!bVar3) {
            uVar15 = 0;
          }
          uVar11 = -(ulong)bVar3;
        }
        else {
          uVar17 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar17 = 0x7ffe;
            uVar15 = 0xffffffffffff;
            uVar11 = 0xffffffffffffffff;
          }
        }
        uVar6 = (ulong)((uint)uVar6 | 0x14);
      }
      uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
      goto LAB_00103364;
    }
LAB_00102e30:
    if (uVar7 != 0xb) {
LAB_00102e38:
      uVar25 = uVar11;
      uVar21 = uVar19;
      uVar26 = uVar10;
      lVar9 = lVar24;
      goto LAB_00102f3c;
    }
LAB_00102f58:
    uVar22 = uVar14;
    if (lVar12 == 3) {
      uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
    else {
LAB_00102e98:
      lVar20 = lVar23;
      if (lVar12 != 1) goto LAB_001030fc;
      uVar4 = 0;
      uVar15 = 0;
      uVar11 = 0;
      uVar10 = uVar22;
    }
  }
  else {
    if (iVar8 != 0x7fff) {
      lVar20 = (uVar22 - 0x3fff) + lVar13;
      uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
      uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
      uVar17 = uVar17 << 3;
      lVar23 = lVar20 + 1;
      lVar12 = 0;
      if (10 < uVar7) goto LAB_00102e30;
      goto LAB_00102e7c;
    }
    lVar20 = lVar13 + 0x7fff;
    if (uVar17 != 0 || uVar15 != 0) {
      uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
      uVar7 = uVar7 | 3;
      lVar23 = lVar13 + 0x8000;
      uVar4 = (uint)uVar6;
      if ((uVar21 & 0x800000000000) == 0) {
        uVar4 = 1;
      }
      uVar6 = (ulong)uVar4;
      lVar12 = 3;
      if (10 < uVar7) {
        lVar9 = 3;
        goto LAB_001034d4;
      }
      goto LAB_00102ef8;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    uVar7 = uVar7 | 2;
    lVar23 = lVar13 + 0x8000;
    uVar17 = 0;
    if (uVar7 < 0xb) {
      uVar21 = 0;
      lVar12 = 2;
      goto LAB_00102e7c;
    }
    lVar9 = 2;
    uVar15 = 0;
LAB_001034d4:
    lVar23 = lVar13 + 0x8000;
    if (uVar7 != 0xf) {
      uVar25 = uVar17;
      uVar21 = uVar15;
      uVar26 = uVar14;
      if (uVar7 != 0xb) goto LAB_00102e38;
      goto LAB_00102f3c;
    }
    if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
      uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
    }
    else {
      uVar15 = uVar15 | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
  }
LAB_00102eac:
  uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
  if ((int)uVar6 == 0) {
    auVar31._8_8_ = uVar15;
    auVar31._0_8_ = uVar11;
    return auVar31;
  }
LAB_00103364:
  __sfp_handle_exceptions(uVar6);
  auVar2._8_8_ = uVar15;
  auVar2._0_8_ = uVar11;
  return auVar2;
}



/* Function: __sfp_handle_exceptions @ 00103570 */

ulong __sfp_handle_exceptions(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  return param_1;
}



/* Function: _fini @ 001035e0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 70 */
