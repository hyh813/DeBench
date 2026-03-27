/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_gcc_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 001010a0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001010d0 */

/* WARNING: Removing unreachable block (ram,0x001010e3) */
/* WARNING: Removing unreachable block (ram,0x001010ef) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101100 */

/* WARNING: Removing unreachable block (ram,0x00101124) */
/* WARNING: Removing unreachable block (ram,0x00101130) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101140 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: double_value @ 00101189 */

int double_value(int x)

{
  int x_local;
  
  return x * 2;
}



/* Function: process_char @ 0010119b */

char process_char(char c)

{
  char c_local;
  
  if (('@' < c) && (c < '[')) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 001011c3 */

short process_short(short a,short b)

{
  short b_local;
  short a_local;
  
  return b + a;
}



/* Function: process_int @ 001011e3 */

int process_int(int x)

{
  int x_local;
  
  return x * 2 + 1;
}



/* Function: process_long @ 001011f8 */

long process_long(long x)

{
  long x_local;
  
  return x * 2;
}



/* Function: process_ll @ 0010120d */

longlong process_ll(longlong x)

{
  longlong x_local;
  
  return x * x;
}



/* Function: process_float @ 00101223 */

float process_float(float f)

{
  float f_local;
  
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 0010124f */

double process_double(double d)

{
  double d_local;
  
  return d / 2.0 + 0.1;
}



/* Function: process_ld @ 00101289 */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
  longdouble *in_RAX;
  
  return in_RAX;
}



/* Function: process_bool @ 0010129e */

_Bool process_bool(int x)

{
  _Bool _Var1;
  int x_local;
  
  if ((x < 1) || ((x & 1U) != 0)) {
    _Var1 = false;
  }
  else {
    _Var1 = true;
  }
  return _Var1;
}



/* Function: const_param @ 001012ca */

int const_param(int *p)

{
  int *p_local;
  
  return *p + 10;
}



/* Function: volatile_access @ 001012e1 */

int volatile_access(int *p)

{
  int *p_local;
  int a;
  int b;
  
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00101309 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  char cVar1;
  _Bool _Var2;
  short sVar3;
  uint uVar4;
  long lVar5;
  longlong lVar6;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  int value;
  int vol_value;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103010);
  cVar1 = process_char('A');
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
  cVar1 = process_char('b');
  printf("DT-L1-01 (process_char): %c\n",(ulong)(uint)(int)cVar1);
  sVar3 = process_short(100,200);
  printf("DT-L1-02 (process_short): %d\n",(ulong)(uint)(int)sVar3);
  uVar4 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n",(ulong)uVar4);
  lVar5 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n",lVar5);
  lVar6 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n",lVar6);
  fVar7 = process_float(2.0);
  printf("DT-L1-06 (process_float): %.2f\n",(double)fVar7);
  dVar8 = process_double(4.0);
  printf("DT-L1-07 (process_double): %.2f\n",dVar8);
  process_ld(_DAT_00103680);
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  _Var2 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
  _Var2 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
  _Var2 = process_bool(-2);
  printf("DT-L1-09 (process_bool): %d\n",(ulong)_Var2);
  value = 5;
  uVar4 = const_param(&value);
  printf("DT-L1-10 (const_param): %d\n",(ulong)uVar4);
  vol_value = 10;
  uVar4 = volatile_access(&vol_value);
  printf("DT-L1-11 (volatile_access): %d\n",(ulong)uVar4);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: array_1d_stack @ 0010156e */

int array_1d_stack(int *arr,int n)

{
  int n_local;
  int *arr_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i];
  }
  return sum;
}



/* Function: array_string @ 001015b7 */

int array_string(char *str)

{
  char *str_local;
  int len;
  
  for (len = 0; str[len] != '\0'; len = len + 1) {
  }
  return len;
}



/* Function: array_2d_stack @ 001015e9 */

int array_2d_stack(int (*arr) [10])

{
  int (*arr_local) [10];
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < 10; i = i + 1) {
    sum = sum + arr[i][i];
  }
  return sum;
}



/* Function: array_3d @ 0010163d */

int array_3d(int (*arr) [5] [5])

{
  int (*arr_local) [5] [5];
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



/* Function: array_vla @ 001016d7 */

int array_vla(int n,int *arr)

{
  int *arr_local;
  int n_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i];
  }
  return sum;
}



/* Function: array_pointer @ 00101720 */

int array_pointer(int (*arr) [10],int n)

{
  int n_local;
  int (*arr_local) [10];
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i][0];
  }
  return sum;
}



/* Function: pointer_array @ 00101773 */

int pointer_array(int **arr,int n)

{
  int n_local;
  int **arr_local;
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



/* Function: array_complex_index @ 001017eb */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int iVar1;
  int y_local;
  int x_local;
  int h_local;
  int w_local;
  int *arr_local;
  
  if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
    iVar1 = -1;
  }
  else {
    iVar1 = arr[x + y * w];
  }
  return iVar1;
}



/* Function: array_oob @ 0010184a */

int array_oob(int *arr,int n)

{
  int n_local;
  int *arr_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i <= n; i = i + 1) {
    sum = sum + arr[i];
  }
  return sum;
}



/* Function: test_array_types @ 00101893 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
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
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103180);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  uVar2 = array_1d_stack(arr1,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",(ulong)uVar2);
  builtin_strncpy(str,"hello",6);
  uVar2 = array_string(str);
  printf("ARR-L1-02 (array_string): %d\n",(ulong)uVar2);
  for (i = 0; i < 10; i = i + 1) {
    for (j = 0; j < 10; j = j + 1) {
      iVar3 = i;
      if (i != j) {
        iVar3 = 0;
      }
      matrix[i][j] = iVar3;
    }
  }
  uVar2 = array_2d_stack(matrix);
  printf("ARR-L1-03 (array_2d_stack): %d\n",(ulong)uVar2);
  for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
    for (j_1 = 0; j_1 < 5; j_1 = j_1 + 1) {
      for (k = 0; k < 5; k = k + 1) {
        cube[i_1][j_1][k] = 1;
      }
    }
  }
  uVar2 = array_3d(cube);
  printf("ARR-L1-04 (array_3d): %d\n",(ulong)uVar2);
  vla_arr[0] = 10;
  vla_arr[1] = 0x14;
  vla_arr[2] = 0x1e;
  uVar2 = array_vla(3,vla_arr);
  printf("ARR-L2-01 (array_vla): %d\n",(ulong)uVar2);
  for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
    arr2[i_2][0] = i_2 * 10;
  }
  uVar2 = array_pointer(arr2,5);
  printf("ARR-L2-02 (array_pointer): %d\n",(ulong)uVar2);
  a = 10;
  b = 0x14;
  c = 0x1e;
  ptr_arr[3] = (int *)0x0;
  ptr_arr[4] = (int *)0x0;
  ptr_arr[5] = (int *)0x0;
  ptr_arr[6] = (int *)0x0;
  ptr_arr[7] = (int *)0x0;
  ptr_arr[8] = (int *)0x0;
  ptr_arr[9] = (int *)0x0;
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  uVar2 = pointer_array(ptr_arr,3);
  printf("ARR-L2-03 (pointer_array): %d\n",(ulong)uVar2);
  for (i_3 = 0; i_3 < 0x14; i_3 = i_3 + 1) {
    flat[i_3] = i_3;
  }
  uVar2 = array_complex_index(flat,5,4,2,3);
  printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)uVar2);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: ptr_single @ 00101cda */

int ptr_single(int *p)

{
  int *p_local;
  
  return *p + 10;
}



/* Function: ptr_double @ 00101cf1 */

int ptr_double(int **p)

{
  int **p_local;
  
  return **p + 5;
}



/* Function: ptr_triple @ 00101d0b */

int ptr_triple(int ***p)

{
  int ***p_local;
  
  return ***p + 1;
}



/* Function: ptr_increment @ 00101d28 */

int ptr_increment(int *p,int n)

{
  int n_local;
  int *p_local;
  int sum;
  int i;
  
  sum = 0;
  p_local = p;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + *p_local;
    p_local = p_local + 1;
  }
  return sum;
}



/* Function: ptr_offset @ 00101d66 */

int ptr_offset(int *p,int offset)

{
  int offset_local;
  int *p_local;
  
  return p[offset];
}



/* Function: ptr_diff @ 00101d8d */

int ptr_diff(int *p1,int *p2)

{
  int *p2_local;
  int *p1_local;
  
  return (int)((long)p1 - (long)p2 >> 2);
}



/* Function: ptr_void @ 00101dab */

int ptr_void(void *p,int type)

{
  int iVar1;
  int type_local;
  void *p_local;
  
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



/* Function: ptr_const @ 00101de1 */

int ptr_const(int *p)

{
  int *p_local;
  
  return *p * 2;
}



/* Function: ptr_const_ptr @ 00101df7 */

int ptr_const_ptr(int *p)

{
  int *p_local;
  
  *p = *p + 5;
  return *p;
}



/* Function: ptr_func_simple @ 00101e1a */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  int x_local;
  _func_int_int *f_local;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00101e3a */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int *p_local;
  _func_int_int_ptr_char_ptr_ptr *f_local;
  char *args [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  args[0] = "test";
  args[1] = (char *)0x0;
  iVar2 = (*f)(p,args);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: ptr_cast @ 00101e9a */

int ptr_cast(void *p)

{
  void *p_local;
  int *int_ptr;
  char *char_ptr;
  int *back_ptr;
  
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00101ec6 */

void * opaque_handle_create(int size)

{
  int size_local;
  
  return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101ed8 */

int opaque_handle_op(void *handle)

{
  void *handle_local;
  
  return (int)handle * 2;
}



/* Function: complex_callback @ 00101eec */

int complex_callback(int *p,char **args)

{
  char **args_local;
  int *p_local;
  
  *p = *p + 10;
  return (int)(*args != (char *)0x0);
}



/* Function: test_pointer_types @ 00101f1d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  long lVar1;
  uint uVar2;
  long in_FS_OFFSET;
  char c7;
  int val1;
  int val2;
  int val3;
  int val7;
  int val8;
  int val9;
  int val11;
  int val12;
  int *ptr2;
  int *ptr3;
  int **pptr3;
  int **pptr2;
  int ***ppptr3;
  void *handle;
  int arr4 [5];
  int arr5 [5];
  int arr6 [5];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001032a2);
  val1 = 5;
  uVar2 = ptr_single(&val1);
  printf("PTR-L2-01 (ptr_single): %d\n",(ulong)uVar2);
  val2 = 10;
  ptr2 = &val2;
  pptr2 = &ptr2;
  uVar2 = ptr_double(pptr2);
  printf("PTR-L2-02 (ptr_double): %d\n",(ulong)uVar2);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  ppptr3 = &pptr3;
  uVar2 = ptr_triple(ppptr3);
  printf("PTR-L2-03 (ptr_triple): %d\n",(ulong)uVar2);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  uVar2 = ptr_increment(arr4,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",(ulong)uVar2);
  arr5[0] = 10;
  arr5[1] = 0x14;
  arr5[2] = 0x1e;
  arr5[3] = 0x28;
  arr5[4] = 0x32;
  uVar2 = ptr_offset(arr5,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",(ulong)uVar2);
  arr6[0] = 0;
  arr6[1] = 10;
  arr6[2] = 0x14;
  arr6[3] = 0x1e;
  arr6[4] = 0x28;
  uVar2 = ptr_diff(arr6 + 4,arr6);
  printf("PTR-L2-06 (ptr_diff): %d\n",(ulong)uVar2);
  val7 = 0x2a;
  c7 = 'A';
  uVar2 = ptr_void(&val7,0);
  printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar2);
  uVar2 = ptr_void(&c7,1);
  printf("PTR-L2-07 (ptr_void): %d\n",(ulong)uVar2);
  val8 = 10;
  uVar2 = ptr_const(&val8);
  printf("PTR-L2-08 (ptr_const): %d\n",(ulong)uVar2);
  val9 = 10;
  uVar2 = ptr_const_ptr(&val9);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",(ulong)uVar2);
  uVar2 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",(ulong)uVar2);
  val11 = 5;
  uVar2 = ptr_func_complex(complex_callback,&val11);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",(ulong)uVar2);
  val12 = 0x12345678;
  uVar2 = ptr_cast(&val12);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",(ulong)uVar2);
  handle = opaque_handle_create(10);
  uVar2 = opaque_handle_op(handle);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",(ulong)uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: struct_simple @ 0010228b */

int struct_simple(Point3D *p)

{
  Point3D *p_local;
  
  return p->z + p->x + p->y;
}



/* Function: struct_array @ 001022b1 */

int struct_array(Point3D *pts,int n)

{
  int n_local;
  Point3D *pts_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + pts[i].z + pts[i].x + pts[i].y;
  }
  return sum;
}



/* Function: struct_nested @ 00102347 */

int struct_nested(Rect *r)

{
  Rect *r_local;
  
  return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00102364 */

int struct_deep(Widget *w)

{
  Widget *w_local;
  
  return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00102382 */

int struct_with_ptr(Node *node)

{
  int iVar1;
  Node *node_local;
  
  if (node->next == (Node *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = node->next->data;
  }
  return iVar1 + node->data;
}



/* Function: struct_bitfields @ 001023b6 */

int struct_bitfields(Flags *f)

{
  Flags *f_local;
  
  return (uint)(*(ushort *)f >> 6) +
         (uint)(*(byte *)f & 1) + (uint)(*(byte *)f >> 1 & 3) + (uint)(*(byte *)f >> 3 & 7);
}



/* Function: union_type @ 00102404 */

int union_type(UnionData *u,int type)

{
  int iVar1;
  int type_local;
  UnionData *u_local;
  
  if (type == 0) {
    iVar1 = u->i;
  }
  else if (type == 1) {
    iVar1 = (int)u->f;
  }
  else {
    iVar1 = (int)u->bytes[0];
  }
  return iVar1;
}



/* Function: union_array @ 00102441 */

int union_array(UnionData *arr,int n)

{
  int n_local;
  UnionData *arr_local;
  int sum;
  int i;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = sum + arr[i].i;
  }
  return sum;
}



/* Function: enum_type @ 0010248a */

int enum_type(State s)

{
  State s_local;
  
  return s * 10;
}



/* Function: enum_switch @ 001024a3 */

int enum_switch(State s)

{
  State s_local;
  
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



/* Function: struct_func_ptr @ 001024f7 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  Device *dev_local;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 0010251b */

int linked_list(Node *head)

{
  Node *head_local;
  int sum;
  Node *current;
  
  sum = 0;
  for (current = head; current != (Node *)0x0; current = current->next) {
    sum = sum + current->data;
  }
  return sum;
}



/* Function: doubly_linked_list @ 00102559 */

int doubly_linked_list(DNode *head)

{
  DNode *head_local;
  int sum;
  DNode *current;
  
  sum = 0;
  for (current = head; current != (DNode *)0x0; current = current->next) {
    sum = sum + current->data;
  }
  return sum;
}



/* Function: binary_tree_sum @ 00102597 */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int iVar3;
  TreeNode *root_local;
  
  if (root == (TreeNode *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar1 = root->data;
    iVar2 = binary_tree_sum(root->left);
    iVar3 = binary_tree_sum(root->right);
    iVar3 = iVar3 + iVar1 + iVar2;
  }
  return iVar3;
}



/* Function: binary_tree @ 001025e6 */

int binary_tree(TreeNode *root)

{
  int iVar1;
  TreeNode *root_local;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00102604 */

int graph_traverse(Graph *g)

{
  Graph *g_local;
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



/* Function: test_composite_types @ 00102665 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  Graph *pGVar4;
  long in_FS_OFFSET;
  byte bVar5;
  Flags f;
  Point3D p1;
  Node node2;
  Node node1;
  Device dev;
  Edge e1;
  Rect r;
  TreeNode tree;
  Widget w;
  UnionData u;
  UnionData arr_u [3];
  Point3D pts [2];
  Node list [3];
  DNode dlist [2];
  Graph g;
  
  bVar5 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103452);
  p1.x = 1;
  p1.y = 2;
  p1.z = 3;
  uVar2 = struct_simple(&p1);
  printf("CMP-L2-01 (struct_simple): %d\n",(ulong)uVar2);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  uVar2 = struct_array(pts,2);
  printf("CMP-L2-02 (struct_array): %d\n",(ulong)uVar2);
  r.position.x = 5;
  r.position.y = 10;
  r.position.z = 0;
  r.size.width = 100;
  r.size.height = 200;
  uVar2 = struct_nested(&r);
  printf("CMP-L2-03 (struct_nested): %d\n",(ulong)uVar2);
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
  uVar2 = struct_deep(&w);
  printf("CMP-L2-04 (struct_deep): %d\n",(ulong)uVar2);
  node2.data = 0x14;
  node2.next = (Node *)0x0;
  node1.data = 10;
  node1.next = &node2;
  uVar2 = struct_with_ptr(&node1);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",(ulong)uVar2);
  f._0_2_ = 0x191d;
  f._4_4_ = f._4_4_ & 0xfff00000;
  uVar2 = struct_bitfields(&f);
  printf("CMP-L2-06 (struct_bitfields): %d\n",(ulong)uVar2);
  u.i = 0x12345678;
  uVar2 = union_type(&u,0);
  printf("CMP-L2-07 (union_type): %d\n",(ulong)uVar2);
  arr_u[0].i = 10;
  arr_u[1].i = 0x14;
  arr_u[2].i = 0x1e;
  uVar2 = union_array(arr_u,3);
  printf("CMP-L2-08 (union_array): %d\n",(ulong)uVar2);
  uVar2 = enum_type(STATE_RUNNING);
  printf("CMP-L2-09 (enum_type): %d\n",(ulong)uVar2);
  uVar2 = enum_switch(STATE_PAUSED);
  printf("CMP-L2-10 (enum_switch): %d\n",(ulong)uVar2);
  dev.data = 10;
  dev.process = process_int;
  uVar2 = struct_func_ptr(&dev);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",(ulong)uVar2);
  list[0].data = 10;
  list[0].next = list + 1;
  list[1].data = 0x14;
  list[1].next = list + 2;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  uVar2 = linked_list(list);
  printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar2);
  dlist[0].data = 10;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  dlist[1].prev = dlist;
  dlist[0].next = dlist + 1;
  uVar2 = doubly_linked_list(dlist);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar2);
  tree.data = 100;
  tree.left = (TreeNode *)0x0;
  tree.right = (TreeNode *)0x0;
  uVar2 = binary_tree(&tree);
  printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
  e1.dest = 1;
  e1.next = (Edge *)0x0;
  pGVar4 = &g;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    pGVar4->adjList[0] = (Edge *)0x0;
    pGVar4 = (Graph *)((long)pGVar4 + (ulong)bVar5 * -0x10 + 8);
  }
  g.numVertices = 2;
  g.adjList[0] = &e1;
  uVar2 = graph_traverse(&g);
  printf("CMP-L2-15 (graph_traverse): %d\n",(ulong)uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: main @ 00102ba5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _fini @ 00102bdc */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 64 */
