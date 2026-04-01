/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_gcc_O0_g
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



/* Function: _start @ 000110d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011110 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112b) */
/* WARNING: Removing unreachable block (ram,0x00011135) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001117e) */
/* WARNING: Removing unreachable block (ram,0x00011188) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111fc) */
/* WARNING: Removing unreachable block (ram,0x00011200) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 00011241 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int double_value(int x)

{
  return x * 2;
}



/* Function: process_char @ 00011259 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

char process_char(char c)

{
  char c_local;
  
  if (('@' < c) && (c < '[')) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 0001128e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

short process_short(short a,short b)

{
  short b_local;
  short a_local;
  
  return b + a;
}



/* Function: process_int @ 000112bc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 000112d7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 000112ef */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longlong process_ll(longlong x)

{
  longlong x_local;
  
  return x * x;
}



/* Function: process_float @ 0001132e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011354 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

double process_double(double d)

{
  double d_local;
  
  return d / 2.0 + 0.1;
}



/* Function: process_ld @ 00011389 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
  return (longdouble *)&_GLOBAL_OFFSET_TABLE_;
}



/* Function: process_bool @ 000113a7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

_Bool process_bool(int x)

{
  _Bool _Var1;
  
  if ((x < 1) || ((x & 1U) != 0)) {
    _Var1 = false;
  }
  else {
    _Var1 = true;
  }
  return _Var1;
}



/* Function: const_param @ 000113d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 000113f4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int volatile_access(int *p)

{
  int a;
  int b;
  
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00011422 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  char cVar1;
  _Bool _Var2;
  short sVar3;
  int iVar4;
  long lVar5;
  int in_GS_OFFSET;
  unkbyte10 extraout_ST0;
  longlong lVar6;
  float fVar7;
  double dVar8;
  int value;
  int vol_value;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013010);
  cVar1 = process_char('A');
  printf("DT-L1-01 (process_char): %c\n",(short)cVar1);
  cVar1 = process_char('b');
  printf("DT-L1-01 (process_char): %c\n",(short)cVar1);
  sVar3 = process_short(100,200);
  printf("DT-L1-02 (process_short): %d\n",sVar3);
  iVar4 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n",(short)iVar4);
  lVar5 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n",(short)lVar5);
  lVar6 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n",(short)lVar6,(short)((ulonglong)lVar6 >> 0x20));
  fVar7 = process_float(2.0);
  printf("DT-L1-06 (process_float): %.2f\n",SUB82((double)fVar7,0),
         (short)((ulonglong)(double)fVar7 >> 0x20));
  dVar8 = process_double(4.0);
  printf("DT-L1-07 (process_double): %.2f\n",SUB82(dVar8,0),(short)((ulonglong)dVar8 >> 0x20));
  process_ld(_DAT_00013660);
  printf("DT-L1-08 (process_ld): %.2Lf\n",(short)extraout_ST0,
         (short)((unkuint10)extraout_ST0 >> 0x20),(short)((unkuint10)extraout_ST0 >> 0x40));
  _Var2 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n",(ushort)_Var2);
  _Var2 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n",(ushort)_Var2);
  _Var2 = process_bool(-2);
  printf("DT-L1-09 (process_bool): %d\n",(ushort)_Var2);
  value = 5;
  iVar4 = const_param(&value);
  printf("DT-L1-10 (const_param): %d\n",(short)iVar4);
  vol_value = 10;
  iVar4 = volatile_access(&vol_value);
  printf("DT-L1-11 (volatile_access): %d\n",(short)iVar4);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: array_1d_stack @ 00011686 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_1d_stack(int *arr,int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i];
  }
  return sum;
}



/* Function: array_string @ 000116cf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_string(char *str)

{
  int len;
  
  for (len = 0; str[len] != '\0'; len = len + 1) {
  }
  return len;
}



/* Function: array_2d_stack @ 00011704 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_2d_stack(int (*arr) [10])

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < 10; i = i + 1) {
    sum = sum + *(int *)(i * 0x2c + (int)arr);
  }
  return sum;
}



/* Function: array_3d @ 00011754 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_3d(int (*arr) [5] [5])

{
  int sum;
  int i;
  int j;
  int k;
  
  sum = 0;
  for (i = 0; i < 5; i = i + 1) {
    for (j = 0; j < 5; j = j + 1) {
      for (k = 0; k < 5; k = k + 1) {
        sum = sum + arr[i][j][k];
      }
    }
  }
  return sum;
}



/* Function: array_vla @ 000117ce */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_vla(int n,int *arr)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i];
  }
  return sum;
}



/* Function: array_pointer @ 00011817 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_pointer(int (*arr) [10],int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i][0];
  }
  return sum;
}



/* Function: pointer_array @ 00011865 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int pointer_array(int **arr,int n)

{
  int sum;
  int i;
  int count;
  
  sum = 0;
  if (10 < n) {
    n = 10;
  }
  for (i = 0; i < n; i = i + 1) {
    if (arr[i] != (int *)0x0) {
      sum = sum + *arr[i];
    }
  }
  return sum;
}



/* Function: array_complex_index @ 000118d5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int iVar1;
  
  if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
    iVar1 = -1;
  }
  else {
    iVar1 = arr[x + y * w];
  }
  return iVar1;
}



/* Function: array_oob @ 00011927 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int array_oob(int *arr,int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i <= n; i = i + 1) {
    sum = sum + arr[i];
  }
  return sum;
}



/* Function: test_array_types @ 00011970 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  int iVar1;
  int iVar2;
  int **ppiVar3;
  int in_GS_OFFSET;
  byte bVar4;
  int a;
  int b;
  int c;
  int i;
  int j;
  int i_1;
  int j_1;
  int k;
  int i_2;
  int i_3;
  int vla_arr [3];
  int arr1 [5];
  int *ptr_arr [10];
  int flat [20];
  int arr2 [5] [10];
  int matrix [10] [10];
  int cube [5] [5] [5];
  char str [6];
  
  bVar4 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_0001317c);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  iVar2 = array_1d_stack(arr1,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",iVar2);
  builtin_strncpy(str,"hello",6);
  iVar2 = array_string(str);
  printf("ARR-L1-02 (array_string): %d\n",iVar2);
  for (i = 0; i < 10; i = i + 1) {
    for (j = 0; j < 10; j = j + 1) {
      iVar2 = i;
      if (i != j) {
        iVar2 = 0;
      }
      matrix[i][j] = iVar2;
    }
  }
  iVar2 = array_2d_stack(matrix);
  printf("ARR-L1-03 (array_2d_stack): %d\n",iVar2);
  for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
    for (j_1 = 0; j_1 < 5; j_1 = j_1 + 1) {
      for (k = 0; k < 5; k = k + 1) {
        cube[i_1][j_1][k] = 1;
      }
    }
  }
  iVar2 = array_3d(cube);
  printf("ARR-L1-04 (array_3d): %d\n",iVar2);
  vla_arr[0] = 10;
  vla_arr[1] = 0x14;
  vla_arr[2] = 0x1e;
  iVar2 = array_vla(3,vla_arr);
  printf("ARR-L2-01 (array_vla): %d\n",iVar2);
  for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
    arr2[i_2][0] = i_2 * 10;
  }
  iVar2 = array_pointer(arr2,5);
  printf("ARR-L2-02 (array_pointer): %d\n",iVar2);
  a = 10;
  b = 0x14;
  c = 0x1e;
  ppiVar3 = ptr_arr;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppiVar3 = (int *)0x0;
    ppiVar3 = ppiVar3 + (uint)bVar4 * -2 + 1;
  }
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  iVar2 = pointer_array(ptr_arr,3);
  printf("ARR-L2-03 (pointer_array): %d\n",iVar2);
  for (i_3 = 0; i_3 < 0x14; i_3 = i_3 + 1) {
    flat[i_3] = i_3;
  }
  iVar2 = array_complex_index(flat,5,4,2,3);
  printf("ARR-L2-04 (array_complex_index): %d\n",iVar2);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: ptr_single @ 00011d1d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 00011d38 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 00011d55 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00011d74 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_increment(int *p,int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + *p;
    p = p + 1;
  }
  return sum;
}



/* Function: ptr_offset @ 00011db5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00011dd9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_diff(int *p1,int *p2)

{
  return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011df5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_void(void *p,int type)

{
  int iVar1;
  
  if (type == 0) {
    iVar1 = *(int *)p;
  }
  else if (type == 1) {
    iVar1 = (int)*(char *)p;
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: ptr_const @ 00011e2b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 00011e45 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_const_ptr(int *p)

{
  *p = *p + 5;
  return *p;
}



/* Function: ptr_func_simple @ 00011e6a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00011e8e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int *p_local;
  _func_int_int_ptr_char_ptr_ptr *f_local;
  char *args [2];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  args[0] = "test";
  args[1] = (char *)0x0;
  iVar2 = (*f)(p,args);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: ptr_cast @ 00011eef */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_cast(void *p)

{
  int *int_ptr;
  char *char_ptr;
  int *back_ptr;
  
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00011f1c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void * opaque_handle_create(int size)

{
  return (void *)size;
}



/* Function: opaque_handle_op @ 00011f32 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: complex_callback @ 00011f4a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int complex_callback(int *p,char **args)

{
  *p = *p + 10;
  return (uint)(*args != (char *)0x0);
}



/* Function: test_pointer_types @ 00011f77 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char c7;
  int val1;
  int val2;
  int *ptr2;
  int val3;
  int *ptr3;
  int **pptr3;
  int val7;
  int val8;
  int val9;
  int val11;
  int val12;
  int **pptr2;
  int ***ppptr3;
  void *handle;
  int arr4 [5];
  int arr5 [5];
  int arr6 [5];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_0001329a);
  val1 = 5;
  iVar2 = ptr_single(&val1);
  printf("PTR-L2-01 (ptr_single): %d\n",iVar2);
  val2 = 10;
  ptr2 = &val2;
  pptr2 = &ptr2;
  iVar2 = ptr_double(pptr2);
  printf("PTR-L2-02 (ptr_double): %d\n",iVar2);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  ppptr3 = &pptr3;
  iVar2 = ptr_triple(ppptr3);
  printf("PTR-L2-03 (ptr_triple): %d\n",iVar2);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  iVar2 = ptr_increment(arr4,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",iVar2);
  arr5[0] = 10;
  arr5[1] = 0x14;
  arr5[2] = 0x1e;
  arr5[3] = 0x28;
  arr5[4] = 0x32;
  iVar2 = ptr_offset(arr5,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",iVar2);
  arr6[0] = 0;
  arr6[1] = 10;
  arr6[2] = 0x14;
  arr6[3] = 0x1e;
  arr6[4] = 0x28;
  iVar2 = ptr_diff(arr6 + 4,arr6);
  printf("PTR-L2-06 (ptr_diff): %d\n",iVar2);
  val7 = 0x2a;
  c7 = 'A';
  iVar2 = ptr_void(&val7,0);
  printf("PTR-L2-07 (ptr_void): %d\n",iVar2);
  iVar2 = ptr_void(&c7,1);
  printf("PTR-L2-07 (ptr_void): %d\n",iVar2);
  val8 = 10;
  iVar2 = ptr_const(&val8);
  printf("PTR-L2-08 (ptr_const): %d\n",iVar2);
  val9 = 10;
  iVar2 = ptr_const_ptr(&val9);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",iVar2);
  iVar2 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",iVar2);
  val11 = 5;
  iVar2 = ptr_func_complex(complex_callback,&val11);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",iVar2);
  val12 = 0x12345678;
  iVar2 = ptr_cast(&val12);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",iVar2);
  handle = opaque_handle_create(10);
  iVar2 = opaque_handle_op(handle);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",iVar2);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: struct_simple @ 00012291 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_simple(Point3D *p)

{
  return p->z + p->x + p->y;
}



/* Function: struct_array @ 000122b9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_array(Point3D *pts,int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + pts[i].z + pts[i].x + pts[i].y;
  }
  return sum;
}



/* Function: struct_nested @ 00012336 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_nested(Rect *r)

{
  return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00012356 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_deep(Widget *w)

{
  return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00012377 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  if (node->next == (Node *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = node->next->data;
  }
  return iVar1 + node->data;
}



/* Function: struct_bitfields @ 000123aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_bitfields(Flags *f)

{
  return (uint)(*(ushort *)f >> 6) +
         (uint)(*(byte *)f & 1) + (uint)(*(byte *)f >> 1 & 3) + (uint)(*(byte *)f >> 3 & 7);
}



/* Function: union_type @ 000123f9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int union_type(UnionData *u,int type)

{
  int iVar1;
  
  if (type == 0) {
    iVar1 = u->i;
  }
  else if (type == 1) {
    iVar1 = (int)ROUND(u->f);
  }
  else {
    iVar1 = (int)u->bytes[0];
  }
  return iVar1;
}



/* Function: union_array @ 0001244c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int union_array(UnionData *arr,int n)

{
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i].i;
  }
  return sum;
}



/* Function: enum_type @ 00012495 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 000124b4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int enum_switch(State s)

{
  if (s == STATE_STOPPED) {
    return -1;
  }
  if (s < 4) {
    if (s == STATE_PAUSED) {
      return 0x32;
    }
    if (s < STATE_STOPPED) {
      if (s == STATE_IDLE) {
        return 0;
      }
      if (s == STATE_RUNNING) {
        return 100;
      }
    }
  }
  return -99;
}



/* Function: struct_func_ptr @ 0001250e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00012538 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int linked_list(Node *head)

{
  int sum;
  Node *current;
  
  sum = 0;
  for (current = head; current != (Node *)0x0; current = current->next) {
    sum = sum + current->data;
  }
  return sum;
}



/* Function: doubly_linked_list @ 00012577 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int doubly_linked_list(DNode *head)

{
  int sum;
  DNode *current;
  
  sum = 0;
  for (current = head; current != (DNode *)0x0; current = current->next) {
    sum = sum + current->data;
  }
  return sum;
}



/* Function: binary_tree_sum @ 000125b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (root == (TreeNode *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar1 = root->data;
    iVar3 = binary_tree_sum(root->left);
    iVar2 = binary_tree_sum(root->right);
    iVar2 = iVar2 + iVar1 + iVar3;
  }
  return iVar2;
}



/* Function: binary_tree @ 0001260a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 0001262e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int graph_traverse(Graph *g)

{
  int sum;
  int i;
  Edge *edge;
  
  sum = 0;
  for (i = 0; i < g->numVertices; i = i + 1) {
    for (edge = g->adjList[i]; edge != (Edge *)0x0; edge = edge->next) {
      sum = sum + edge->dest;
    }
  }
  return sum;
}



/* Function: test_composite_types @ 0001268b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int iVar1;
  int iVar2;
  Graph *pGVar3;
  int in_GS_OFFSET;
  byte bVar4;
  Node node2;
  Node node1;
  Flags f;
  Device dev;
  Edge e1;
  Point3D p1;
  TreeNode tree;
  Rect r;
  Widget w;
  UnionData u;
  UnionData arr_u [3];
  Point3D pts [2];
  Node list [3];
  DNode dlist [2];
  Graph g;
  
  bVar4 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_0001343e);
  p1.x = 1;
  p1.y = 2;
  p1.z = 3;
  iVar2 = struct_simple(&p1);
  printf("CMP-L2-01 (struct_simple): %d\n",iVar2);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  iVar2 = struct_array(pts,2);
  printf("CMP-L2-02 (struct_array): %d\n",iVar2);
  r.position.x = 5;
  r.position.y = 10;
  r.position.z = 0;
  r.size.width = 100;
  r.size.height = 200;
  iVar2 = struct_nested(&r);
  printf("CMP-L2-03 (struct_nested): %d\n",iVar2);
  w.bounds.position.x = 1;
  w.bounds.position.y = 2;
  w.bounds.position.z = 3;
  w.bounds.size.width = 10;
  w.bounds.size.height = 0x14;
  w.style.fill.r = 0xff;
  w.style.fill.g = 0;
  w.style.fill.b = 0;
  w.style.stroke.r = 0;
  w.style.stroke.g = 0;
  w.style.stroke.b = 0xff;
  w.id = 0x2a;
  iVar2 = struct_deep(&w);
  printf("CMP-L2-04 (struct_deep): %d\n",iVar2);
  node2.data = 0x14;
  node2.next = (Node *)0x0;
  node1.data = 10;
  node1.next = &node2;
  iVar2 = struct_with_ptr(&node1);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",iVar2);
  f._0_2_ = 0x191d;
  f._4_4_ = f._4_4_ & 0xfff00000;
  iVar2 = struct_bitfields(&f);
  printf("CMP-L2-06 (struct_bitfields): %d\n",iVar2);
  u.i = 0x12345678;
  iVar2 = union_type(&u,0);
  printf("CMP-L2-07 (union_type): %d\n",iVar2);
  arr_u[0].i = 10;
  arr_u[1].i = 0x14;
  arr_u[2].i = 0x1e;
  iVar2 = union_array(arr_u,3);
  printf("CMP-L2-08 (union_array): %d\n",iVar2);
  iVar2 = enum_type(STATE_RUNNING);
  printf("CMP-L2-09 (enum_type): %d\n",iVar2);
  iVar2 = enum_switch(STATE_PAUSED);
  printf("CMP-L2-10 (enum_switch): %d\n",iVar2);
  dev.data = 10;
  dev.process = process_int;
  iVar2 = struct_func_ptr(&dev);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",iVar2);
  list[0].data = 10;
  list[0].next = list + 1;
  list[1].data = 0x14;
  list[1].next = list + 2;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  iVar2 = linked_list(list);
  printf("CMP-L2-12 (linked_list): %d\n",iVar2);
  dlist[0].data = 10;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  dlist[1].prev = dlist;
  dlist[0].next = dlist + 1;
  iVar2 = doubly_linked_list(dlist);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
  tree.data = 100;
  tree.left = (TreeNode *)0x0;
  tree.right = (TreeNode *)0x0;
  iVar2 = binary_tree(&tree);
  printf("CMP-L2-14 (binary_tree): %d\n",iVar2);
  e1.dest = 1;
  e1.next = (Edge *)0x0;
  pGVar3 = &g;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    pGVar3->adjList[0] = (Edge *)0x0;
    pGVar3 = (Graph *)((int)pGVar3 + (uint)bVar4 * -8 + 4);
  }
  g.numVertices = 2;
  g.adjList[0] = &e1;
  iVar2 = graph_traverse(&g);
  printf("CMP-L2-15 (graph_traverse): %d\n",iVar2);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: main @ 00012b69 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 00012b98 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012ba0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012bc0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00012bda) */
/* WARNING: Removing unreachable block (ram,0x00012bf0) */
/* WARNING: Removing unreachable block (ram,0x00012bfd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00012c0c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 71 */
