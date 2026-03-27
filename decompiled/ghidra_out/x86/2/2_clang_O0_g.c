/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_clang_O0_g
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



/* Function: _start @ 00011080 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000110c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000110db) */
/* WARNING: Removing unreachable block (ram,0x000110e5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011100 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112e) */
/* WARNING: Removing unreachable block (ram,0x00011138) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111ac) */
/* WARNING: Removing unreachable block (ram,0x000111b0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000111e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000111ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: process_char @ 00011200 */

/* WARNING: Unknown calling convention */

char process_char(char c)

{
  undefined1 local_5;
  
  if ((c < 'A') || ('Z' < c)) {
    local_5 = c;
  }
  else {
    local_5 = c + ' ';
  }
  return local_5;
}



/* Function: process_short @ 00011240 */

/* WARNING: Unknown calling convention */

short process_short(short a,short b)

{
  return a + b;
}



/* Function: process_int @ 00011260 */

/* WARNING: Unknown calling convention */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 00011280 */

/* WARNING: Unknown calling convention */

long process_long(long x)

{
  return x << 1;
}



/* Function: process_ll @ 00011290 */

/* WARNING: Unknown calling convention */

longlong process_ll(longlong x)

{
  longlong lVar1;
  
  lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)x * x._4_4_ * 2,(int)lVar1);
}



/* Function: process_float @ 000112b0 */

/* WARNING: Unknown calling convention */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 000112e0 */

/* WARNING: Unknown calling convention */

double process_double(double d)

{
  return d / 2.0 + 0.1;
}



/* Function: process_ld @ 00011310 */

longdouble * process_ld(longdouble *__return_storage_ptr__,longdouble d)

{
  longdouble *in_EAX;
  longdouble d_local;
  
  return in_EAX;
}



/* Function: process_bool @ 00011330 */

/* WARNING: Unknown calling convention */

_Bool process_bool(int x)

{
  bool local_5;
  
  local_5 = 0 < x && x % 2 == 0;
  return local_5;
}



/* Function: const_param @ 00011370 */

/* WARNING: Unknown calling convention */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 00011380 */

/* WARNING: Unknown calling convention */

int volatile_access(int *p)

{
  int b;
  int a;
  
  return *p + *p;
}



/* Function: test_data_types_l1 @ 000113b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  char cVar1;
  _Bool _Var2;
  short sVar3;
  int iVar4;
  long lVar5;
  unkbyte10 extraout_ST0;
  longlong lVar6;
  float fVar7;
  double dVar8;
  undefined2 uVar9;
  undefined2 in_stack_ffffffe0;
  int vol_value;
  int value;
  
  printf(&DAT_0001312c);
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
  uVar9 = (undefined2)((ulonglong)dVar8 >> 0x30);
  printf("DT-L1-07 (process_double): %.2f\n",SUB82(dVar8,0),(short)((ulonglong)dVar8 >> 0x20));
  process_ld(SUB104((longdouble)3.0,0),
             (longdouble)
             CONCAT28(in_stack_ffffffe0,CONCAT26(uVar9,(int6)((unkuint10)(longdouble)3.0 >> 0x20))))
  ;
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
  return;
}



/* Function: array_1d_stack @ 00011640 */

/* WARNING: Unknown calling convention */

int array_1d_stack(int *arr,int n)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = arr[i] + sum;
  }
  return sum;
}



/* Function: array_string @ 00011690 */

/* WARNING: Unknown calling convention */

int array_string(char *str)

{
  int len;
  
  for (len = 0; str[len] != '\0'; len = len + 1) {
  }
  return len;
}



/* Function: array_2d_stack @ 000116d0 */

/* WARNING: Unknown calling convention */

int array_2d_stack(int (*arr) [10])

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < 10; i = i + 1) {
    sum = *(int *)((int)arr + i * 0x2c) + sum;
  }
  return sum;
}



/* Function: array_3d @ 00011720 */

/* WARNING: Unknown calling convention */

int array_3d(int (*arr) [5] [5])

{
  int k;
  int j;
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < 5; i = i + 1) {
    for (j = 0; j < 5; j = j + 1) {
      for (k = 0; k < 5; k = k + 1) {
        sum = arr[i][j][k] + sum;
      }
    }
  }
  return sum;
}



/* Function: array_vla @ 000117c0 */

/* WARNING: Unknown calling convention */

int array_vla(int n,int *arr)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = arr[i] + sum;
  }
  return sum;
}



/* Function: array_pointer @ 00011810 */

/* WARNING: Unknown calling convention */

int array_pointer(int (*arr) [10],int n)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = arr[i][0] + sum;
  }
  return sum;
}



/* Function: pointer_array @ 00011860 */

/* WARNING: Unknown calling convention */

int pointer_array(int **arr,int n)

{
  int local_14;
  int i;
  int count;
  int sum;
  
  sum = 0;
  if (n < 10) {
    local_14 = n;
  }
  else {
    local_14 = 10;
  }
  for (i = 0; i < local_14; i = i + 1) {
    if (arr[i] != (int *)0x0) {
      sum = *arr[i] + sum;
    }
  }
  return sum;
}



/* Function: array_complex_index @ 000118f0 */

/* WARNING: Unknown calling convention */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int local_8;
  
  if ((((x < 0) || (w <= x)) || (y < 0)) || (h <= y)) {
    local_8 = -1;
  }
  else {
    local_8 = arr[y * w + x];
  }
  return local_8;
}



/* Function: array_oob @ 00011960 */

/* WARNING: Unknown calling convention */

int array_oob(int *arr,int n)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i <= n; i = i + 1) {
    sum = arr[i] + sum;
  }
  return sum;
}



/* Function: test_array_types @ 000119b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  int iVar1;
  int **local_528;
  int local_524;
  int i_3;
  int flat [20];
  int *ptr_arr [10];
  int c;
  int b;
  int a;
  int i_2;
  int arr2 [5] [10];
  int vla_arr [3];
  int k;
  int j_1;
  int i_1;
  int cube [5] [5] [5];
  int j;
  int i;
  int matrix [10] [10];
  char str [6];
  int arr1 [5];
  
  printf(&DAT_00013298);
  memcpy(arr1,&DAT_00013050,0x14);
  iVar1 = array_1d_stack(arr1,5);
  printf("ARR-L1-01 (array_1d_stack): %d\n",iVar1);
  str[0] = 'h';
  str[1] = 'e';
  str[2] = 'l';
  str[3] = 'l';
  str[4] = 'o';
  str[5] = '\0';
  iVar1 = array_string(str);
  printf("ARR-L1-02 (array_string): %d\n",iVar1);
  for (i = 0; i < 10; i = i + 1) {
    for (j = 0; j < 10; j = j + 1) {
      if (i == j) {
        local_524 = i;
      }
      else {
        local_524 = 0;
      }
      matrix[i][j] = local_524;
    }
  }
  iVar1 = array_2d_stack(matrix);
  printf("ARR-L1-03 (array_2d_stack): %d\n",iVar1);
  for (i_1 = 0; i_1 < 5; i_1 = i_1 + 1) {
    for (j_1 = 0; j_1 < 5; j_1 = j_1 + 1) {
      for (k = 0; k < 5; k = k + 1) {
        cube[i_1][j_1][k] = 1;
      }
    }
  }
  iVar1 = array_3d(cube);
  printf("ARR-L1-04 (array_3d): %d\n",iVar1);
  vla_arr[0] = 10;
  vla_arr[1] = 0x14;
  vla_arr[2] = 0x1e;
  iVar1 = array_vla(3,vla_arr);
  printf("ARR-L2-01 (array_vla): %d\n",iVar1);
  for (i_2 = 0; i_2 < 5; i_2 = i_2 + 1) {
    arr2[i_2][0] = i_2 * 10;
  }
  iVar1 = array_pointer(arr2,5);
  printf("ARR-L2-02 (array_pointer): %d\n",iVar1);
  a = 10;
  b = 0x14;
  c = 0x1e;
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  ptr_arr[3] = (int *)0x0;
  local_528 = ptr_arr + 4;
  do {
    *local_528 = (int *)0x0;
    local_528 = local_528 + 1;
  } while (local_528 != (int **)&c);
  iVar1 = pointer_array(ptr_arr,3);
  printf("ARR-L2-03 (pointer_array): %d\n",iVar1);
  for (i_3 = 0; i_3 < 0x14; i_3 = i_3 + 1) {
    flat[i_3] = i_3;
  }
  iVar1 = array_complex_index(flat,5,4,2,3);
  printf("ARR-L2-04 (array_complex_index): %d\n",iVar1);
  return;
}



/* Function: ptr_single @ 00011e50 */

/* WARNING: Unknown calling convention */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 00011e60 */

/* WARNING: Unknown calling convention */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 00011e80 */

/* WARNING: Unknown calling convention */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00011ea0 */

/* WARNING: Unknown calling convention */

int ptr_increment(int *p,int n)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = *p + sum;
    p = p + 1;
  }
  return sum;
}



/* Function: ptr_offset @ 00011ef0 */

/* WARNING: Unknown calling convention */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00011f10 */

/* WARNING: Unknown calling convention */

int ptr_diff(int *p1,int *p2)

{
  return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011f30 */

/* WARNING: Unknown calling convention */

int ptr_void(void *p,int type)

{
  undefined4 local_8;
  
  if (type == 0) {
    local_8 = *(int *)p;
  }
  else if (type == 1) {
    local_8 = (int)*(char *)p;
  }
  else {
    local_8 = -1;
  }
  return local_8;
}



/* Function: ptr_const @ 00011f80 */

/* WARNING: Unknown calling convention */

int ptr_const(int *p)

{
  return *p + *p;
}



/* Function: ptr_const_ptr @ 00011fa0 */

/* WARNING: Unknown calling convention */

int ptr_const_ptr(int *p)

{
  *p = *p + 5;
  return *p;
}



/* Function: ptr_func_simple @ 00011fc0 */

/* WARNING: Unknown calling convention */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00011ff0 */

/* WARNING: Unknown calling convention */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  char *args [2];
  
  args[0] = "test";
  args[1] = (char *)0x0;
  iVar1 = (*f)(p,args);
  return iVar1;
}



/* Function: ptr_cast @ 00012040 */

/* WARNING: Unknown calling convention */

int ptr_cast(void *p)

{
  int *back_ptr;
  char *char_ptr;
  int *int_ptr;
  
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00012070 */

/* WARNING: Unknown calling convention */

void * opaque_handle_create(int size)

{
  return (void *)size;
}



/* Function: opaque_handle_op @ 00012080 */

/* WARNING: Unknown calling convention */

int opaque_handle_op(void *handle)

{
  return (int)handle << 1;
}



/* Function: test_pointer_types @ 00012090 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int iVar1;
  void *handle_00;
  void *handle;
  int val12;
  int val11;
  int val9;
  int val8;
  char c7;
  int val7;
  int arr6 [5];
  int arr5 [5];
  int arr4 [5];
  int ***ppptr3;
  int **pptr3;
  int *ptr3;
  int val3;
  int **pptr2;
  int *ptr2;
  int val2;
  int val1;
  
  printf(&DAT_000133b5);
  val1 = 5;
  iVar1 = ptr_single(&val1);
  printf("PTR-L2-01 (ptr_single): %d\n",iVar1);
  val2 = 10;
  ptr2 = &val2;
  pptr2 = &ptr2;
  iVar1 = ptr_double(pptr2);
  printf("PTR-L2-02 (ptr_double): %d\n",iVar1);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  iVar1 = ptr_triple(&pptr3);
  printf("PTR-L2-03 (ptr_triple): %d\n",iVar1);
  memcpy(arr4,&DAT_00013070,0x14);
  iVar1 = ptr_increment(arr4,5);
  printf("PTR-L2-04 (ptr_increment): %d\n",iVar1);
  memcpy(arr5,&DAT_00013084,0x14);
  iVar1 = ptr_offset(arr5,2);
  printf("PTR-L2-05 (ptr_offset): %d\n",iVar1);
  memcpy(arr6,&DAT_00013098,0x14);
  iVar1 = ptr_diff(arr6 + 4,arr6);
  printf("PTR-L2-06 (ptr_diff): %d\n",iVar1);
  val7 = 0x2a;
  c7 = 'A';
  iVar1 = ptr_void(&val7,0);
  printf("PTR-L2-07 (ptr_void): %d\n",iVar1);
  iVar1 = ptr_void(&c7,1);
  printf("PTR-L2-07 (ptr_void): %d\n",iVar1);
  val8 = 10;
  iVar1 = ptr_const(&val8);
  printf("PTR-L2-08 (ptr_const): %d\n",iVar1);
  val9 = 10;
  iVar1 = ptr_const_ptr(&val9);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",iVar1);
  iVar1 = ptr_func_simple(double_value,5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",iVar1);
  val11 = 5;
  iVar1 = ptr_func_complex(complex_callback,&val11);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",iVar1);
  val12 = 0x12345678;
  iVar1 = ptr_cast(&val12);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",iVar1);
  handle_00 = opaque_handle_create(10);
  iVar1 = opaque_handle_op(handle_00);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",iVar1);
  return;
}



/* Function: double_value @ 000123c0 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
  return x << 1;
}



/* Function: complex_callback @ 000123d0 */

/* WARNING: Unknown calling convention */

int complex_callback(int *p,char **args)

{
  *p = *p + 10;
  return (uint)(*args != (char *)0x0);
}



/* Function: struct_simple @ 00012400 */

/* WARNING: Unknown calling convention */

int struct_simple(Point3D *p)

{
  return p->x + p->y + p->z;
}



/* Function: struct_array @ 00012420 */

/* WARNING: Unknown calling convention */

int struct_array(Point3D *pts,int n)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = pts[i].x + pts[i].y + pts[i].z + sum;
  }
  return sum;
}



/* Function: struct_nested @ 00012490 */

/* WARNING: Unknown calling convention */

int struct_nested(Rect *r)

{
  return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 000124b0 */

/* WARNING: Unknown calling convention */

int struct_deep(Widget *w)

{
  return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 000124d0 */

/* WARNING: Unknown calling convention */

int struct_with_ptr(Node *node)

{
  int local_c;
  
  if (node->next == (Node *)0x0) {
    local_c = 0;
  }
  else {
    local_c = node->next->data;
  }
  return node->data + local_c;
}



/* Function: struct_bitfields @ 00012520 */

/* WARNING: Unknown calling convention */

int struct_bitfields(Flags *f)

{
  return (uint)(*(ushort *)f & 1) + (uint)(*(ushort *)f >> 1 & 3) + (uint)(*(ushort *)f >> 3 & 7) +
         (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00012570 */

/* WARNING: Unknown calling convention */

int union_type(UnionData *u,int type)

{
  undefined4 local_8;
  
  if (type == 0) {
    local_8 = u->i;
  }
  else if (type == 1) {
    local_8 = (int)ROUND(u->f);
  }
  else {
    local_8 = (int)u->bytes[0];
  }
  return local_8;
}



/* Function: union_array @ 000125e0 */

/* WARNING: Unknown calling convention */

int union_array(UnionData *arr,int n)

{
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < n; i = i + 1) {
    sum = arr[i].i + sum;
  }
  return sum;
}



/* Function: enum_type @ 00012630 */

/* WARNING: Unknown calling convention */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00012640 */

/* WARNING: Unknown calling convention */

int enum_switch(State s)

{
  int local_8;
  
  switch(s) {
  case STATE_IDLE:
    local_8 = 0;
    break;
  case STATE_RUNNING:
    local_8 = 100;
    break;
  case STATE_PAUSED:
    local_8 = 0x32;
    break;
  case STATE_STOPPED:
    local_8 = -1;
    break;
  default:
    local_8 = -99;
  }
  return local_8;
}



/* Function: struct_func_ptr @ 000126c0 */

/* WARNING: Unknown calling convention */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 000126f0 */

/* WARNING: Unknown calling convention */

int linked_list(Node *head)

{
  Node *current;
  int sum;
  
  sum = 0;
  for (current = head; current != (Node *)0x0; current = current->next) {
    sum = current->data + sum;
  }
  return sum;
}



/* Function: doubly_linked_list @ 00012740 */

/* WARNING: Unknown calling convention */

int doubly_linked_list(DNode *head)

{
  DNode *current;
  int sum;
  
  sum = 0;
  for (current = head; current != (DNode *)0x0; current = current->next) {
    sum = current->data + sum;
  }
  return sum;
}



/* Function: binary_tree_sum @ 00012790 */

/* WARNING: Unknown calling convention */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int local_c;
  
  if (root == (TreeNode *)0x0) {
    local_c = 0;
  }
  else {
    iVar1 = root->data;
    iVar2 = binary_tree_sum(root->left);
    local_c = binary_tree_sum(root->right);
    local_c = iVar1 + iVar2 + local_c;
  }
  return local_c;
}



/* Function: binary_tree @ 00012810 */

/* WARNING: Unknown calling convention */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00012840 */

/* WARNING: Unknown calling convention */

int graph_traverse(Graph *g)

{
  Edge *edge;
  int i;
  int sum;
  
  sum = 0;
  for (i = 0; i < g->numVertices; i = i + 1) {
    for (edge = g->adjList[i]; edge != (Edge *)0x0; edge = edge->next) {
      sum = edge->dest + sum;
    }
  }
  return sum;
}



/* Function: test_composite_types @ 000128b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int iVar1;
  Graph g;
  Edge e1;
  TreeNode tree;
  DNode dlist [2];
  Node list [3];
  Device dev;
  UnionData arr_u [3];
  UnionData u;
  Flags f;
  Node node1;
  Node node2;
  Widget w;
  Rect r;
  Point3D pts [2];
  Point3D p1;
  
  printf(&DAT_0001354f);
  p1.x = 1;
  p1.y = 2;
  p1.z = 3;
  iVar1 = struct_simple(&p1);
  printf("CMP-L2-01 (struct_simple): %d\n",iVar1);
  memcpy(pts,&DAT_000130b8,0x18);
  iVar1 = struct_array(pts,2);
  printf("CMP-L2-02 (struct_array): %d\n",iVar1);
  memcpy(&r,&DAT_000130d0,0x14);
  iVar1 = struct_nested(&r);
  printf("CMP-L2-03 (struct_nested): %d\n",iVar1);
  memcpy(&w,&DAT_000130e4,0x30);
  iVar1 = struct_deep(&w);
  printf("CMP-L2-04 (struct_deep): %d\n",iVar1);
  node2.data = 0x14;
  node2.next = (Node *)0x0;
  node1.data = 10;
  node1.next = &node2;
  iVar1 = struct_with_ptr(&node1);
  printf("CMP-L2-05 (struct_with_ptr): %d\n",iVar1);
  f._0_4_ = 0x191d;
  f._4_4_ = 0;
  iVar1 = struct_bitfields(&f);
  printf("CMP-L2-06 (struct_bitfields): %d\n",iVar1);
  u.i = 0x12345678;
  iVar1 = union_type(&u,0);
  printf("CMP-L2-07 (union_type): %d\n",iVar1);
  arr_u[0].i = 10;
  arr_u[1].i = 0x14;
  arr_u[2].i = 0x1e;
  iVar1 = union_array(arr_u,3);
  printf("CMP-L2-08 (union_array): %d\n",iVar1);
  iVar1 = enum_type(STATE_RUNNING);
  printf("CMP-L2-09 (enum_type): %d\n",iVar1);
  iVar1 = enum_switch(STATE_PAUSED);
  printf("CMP-L2-10 (enum_switch): %d\n",iVar1);
  dev.data = 10;
  dev.process = process_int;
  iVar1 = struct_func_ptr(&dev);
  printf("CMP-L2-11 (struct_func_ptr): %d\n",iVar1);
  list[0].data = 10;
  list[0].next = list + 1;
  list[1].data = 0x14;
  list[1].next = list + 2;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  iVar1 = linked_list(list);
  printf("CMP-L2-12 (linked_list): %d\n",iVar1);
  dlist[0].data = 10;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  dlist[1].prev = dlist;
  dlist[0].next = dlist + 1;
  iVar1 = doubly_linked_list(dlist);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar1);
  tree.data = 100;
  tree.left = (TreeNode *)0x0;
  tree.right = (TreeNode *)0x0;
  iVar1 = binary_tree(&tree);
  printf("CMP-L2-14 (binary_tree): %d\n",iVar1);
  e1.dest = 1;
  e1.next = (Edge *)0x0;
  g.adjList[9] = (Edge *)0x0;
  g.adjList[8] = (Edge *)0x0;
  g.adjList[7] = (Edge *)0x0;
  g.adjList[6] = (Edge *)0x0;
  g.adjList[5] = (Edge *)0x0;
  g.adjList[4] = (Edge *)0x0;
  g.adjList[3] = (Edge *)0x0;
  g.adjList[2] = (Edge *)0x0;
  g.adjList[1] = (Edge *)0x0;
  g.numVertices = 2;
  g.adjList[0] = &e1;
  iVar1 = graph_traverse(&g);
  printf("CMP-L2-15 (graph_traverse): %d\n",iVar1);
  return;
}



/* Function: main @ 00012dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00012e20 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00012e3a) */
/* WARNING: Removing unreachable block (ram,0x00012e50) */
/* WARNING: Removing unreachable block (ram,0x00012e5d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00012e6c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 69 */
