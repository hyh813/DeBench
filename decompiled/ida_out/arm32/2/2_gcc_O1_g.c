/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/2/2_gcc_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x103B8 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_103C4 @ 0x103C4 */
void sub_103C4()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x1042C */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_10468 + 19185), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x10470 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10494 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x104C0 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x104F8 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x10520 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x10524 */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: process_int @ 0x1052C */
int __fastcall process_int(int x)
{
  return 2 * x + 1;
}


/* Function: complex_callback @ 0x10538 */
int __fastcall complex_callback(int *p, char **args)
{
  int result; // r0

  *p += 10;
  result = (int)*args;
  if ( *args )
    return 1;
  return result;
}


/* Function: process_char @ 0x10554 */
char __fastcall process_char(char c)
{
  if ( (unsigned int)(c - 65) <= 0x19 )
    c += 32;
  return c;
}


/* Function: process_short @ 0x10568 */
__int16 __fastcall process_short(__int16 a, __int16 b)
{
  return a + b;
}


/* Function: process_long @ 0x10578 */
int __fastcall process_long(int x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x10580 */
__int64 __fastcall process_ll(__int64 x)
{
  unsigned __int64 v1; // kr00_8

  HIDWORD(x) *= (_DWORD)x;
  v1 = (unsigned int)x * (unsigned __int64)(unsigned int)x;
  LODWORD(x) = x * x;
  HIDWORD(x) = HIDWORD(v1) + 2 * HIDWORD(x);
  return x;
}


/* Function: process_float @ 0x10594 */
float __fastcall process_float(float f)
{
  return (float)(f * 1.5) + 0.5;
}


/* Function: process_double @ 0x105AC */
double __fastcall process_double(double d)
{
  return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x105D8 */
double __fastcall process_ld(double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x105FC */
bool __fastcall process_bool(int x)
{
  char v1; // r0

  if ( x <= 0 )
    v1 = 0;
  else
    v1 = 1 - (x & 1);
  return v1 & 1;
}


/* Function: const_param @ 0x10614 */
int __fastcall const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x10620 */
int __fastcall volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x10630 */
void test_data_types_l1()
{
  puts(s);
  _printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
  _printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
  _printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
  _printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
  _printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
  _printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000LL);
  _printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
  _printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
  _printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
  _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
  _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  _printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  _printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
  _printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x10794 */
int __fastcall array_1d_stack(int *arr, int n)
{
  int *v2; // r3
  int *v3; // r1
  int result; // r0
  int v5; // t1

  if ( n <= 0 )
    return 0;
  v2 = arr - 1;
  v3 = &arr[n - 1];
  result = 0;
  do
  {
    v5 = v2[1];
    ++v2;
    result += v5;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: array_string @ 0x107C4 */
int __fastcall array_string(char *str)
{
  char *v1; // r3
  int v2; // r1
  int result; // r0

  if ( !*str )
    return 0;
  v1 = str;
  v2 = 1 - (_DWORD)str;
  do
    result = (int)&v1[v2];
  while ( *++v1 );
  return result;
}


/* Function: array_2d_stack @ 0x107F4 */
int __fastcall array_2d_stack(int (*arr)[10])
{
  int v2; // r3
  int result; // r0

  v2 = 0;
  result = 0;
  do
  {
    result += (*arr)[v2];
    v2 += 11;
  }
  while ( v2 != 110 );
  return result;
}


/* Function: array_3d @ 0x10818 */
int __fastcall array_3d(int (*arr)[5][5])
{
  int *v1; // r1
  int *v2; // r12
  int result; // r0
  int *v4; // r3

  v1 = (*arr)[5];
  v2 = (*arr)[30];
  result = 0;
  do
  {
    v4 = v1 - 25;
    do
    {
      result += *v4 + v4[1] + v4[2] + v4[3] + v4[4];
      v4 += 5;
    }
    while ( v4 != v1 );
    v1 += 25;
  }
  while ( v1 != v2 );
  return result;
}


/* Function: array_vla @ 0x1086C */
int __fastcall array_vla(int n, int *arr)
{
  int *v2; // r1
  int *v3; // r2
  int result; // r0
  int v5; // t1

  if ( n <= 0 )
    return 0;
  v2 = arr - 1;
  v3 = &v2[n];
  result = 0;
  do
  {
    v5 = v2[1];
    ++v2;
    result += v5;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: array_pointer @ 0x1089C */
int __fastcall array_pointer(int (*arr)[10], int n)
{
  int v3; // r3
  int result; // r0

  if ( n <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    result += (*arr)[v3];
    v3 += 10;
  }
  while ( v3 != 10 * n );
  return result;
}


/* Function: pointer_array @ 0x108D8 */
int __fastcall pointer_array(int **arr, int n)
{
  int v2; // r12
  int **v3; // r1
  int v4; // r3
  int result; // r0
  int *v6; // r2
  int *v7; // t1

  if ( n >= 10 )
    v2 = 10;
  else
    v2 = n;
  if ( n <= 0 )
    return 0;
  v3 = arr - 1;
  v4 = 0;
  result = 0;
  do
  {
    v7 = v3[1];
    ++v3;
    v6 = v7;
    if ( v7 )
      result += *v6;
    ++v4;
  }
  while ( v2 > v4 );
  return result;
}


/* Function: array_complex_index @ 0x10920 */
int __fastcall array_complex_index(int *arr, int w, int h, int x, int y)
{
  if ( (x >= w) | ((x | (unsigned int)y) >> 31) )
    return -1;
  if ( y >= h )
    return -1;
  return arr[x + y * w];
}


/* Function: array_oob @ 0x10964 */
int __fastcall array_oob(int *arr, int n)
{
  int *v2; // r3
  int *v3; // r1
  int result; // r0
  int v5; // t1

  if ( n < 0 )
    return 0;
  v2 = arr - 1;
  v3 = &arr[n];
  result = 0;
  do
  {
    v5 = v2[1];
    ++v2;
    result += v5;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: test_array_types @ 0x10994 */
void test_array_types()
{
  int v0; // r0
  int v1; // r0
  int *v2; // r12
  int i; // r0
  int *v4; // r2
  int j; // r3
  int v6; // r1
  int v7; // r0
  char *v8; // r0
  char *v9; // r3
  int k; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int **v15; // r2
  int *m; // r3
  int a; // [sp+4h] [bp-514h] BYREF
  int b; // [sp+8h] [bp-510h] BYREF
  int c; // [sp+Ch] [bp-50Ch] BYREF
  int vla_arr[3]; // [sp+10h] [bp-508h] BYREF
  int arr1[5]; // [sp+1Ch] [bp-4FCh] BYREF
  int *ptr_arr[10]; // [sp+30h] [bp-4E8h] BYREF
  int v23[20]; // [sp+58h] [bp-4C0h]
  int arr2[5][10]; // [sp+A8h] [bp-470h] BYREF
  int matrix[10][10]; // [sp+170h] [bp-3A8h] BYREF
  int cube[5][5][5]; // [sp+300h] [bp-218h] BYREF
  char str[8]; // [sp+4F4h] [bp-24h] BYREF

  puts(asc_12120);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  v0 = array_1d_stack(arr1, 5);
  _printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
  strcpy(str, "hello");
  v1 = array_string(str);
  _printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
  v2 = &arr2[4][9];
  for ( i = 0; i != 10; ++i )
  {
    v4 = v2;
    for ( j = 0; j != 10; ++j )
    {
      if ( i == j )
        v6 = j;
      else
        v6 = 0;
      v4[1] = v6;
      ++v4;
    }
    v2 += 10;
  }
  v7 = array_2d_stack(matrix);
  _printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v7);
  v8 = (char *)cube;
  do
  {
    v9 = v8;
    for ( k = 0; k != 5; ++k )
    {
      *(_DWORD *)v9 = 1;
      *((_DWORD *)v9 + 1) = 1;
      *((_DWORD *)v9 + 2) = 1;
      *((_DWORD *)v9 + 3) = 1;
      *((_DWORD *)v9 + 4) = 1;
      v9 += 20;
    }
    v8 += 100;
  }
  while ( v8 != str );
  v11 = array_3d(cube);
  _printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v11);
  vla_arr[0] = 10;
  vla_arr[1] = 20;
  vla_arr[2] = 30;
  v12 = array_vla(3, vla_arr);
  _printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v12);
  arr2[0][0] = 0;
  arr2[1][0] = 10;
  arr2[2][0] = 20;
  arr2[3][0] = 30;
  arr2[4][0] = 40;
  v13 = array_pointer(arr2, 5);
  _printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v13);
  a = 10;
  b = 20;
  c = 30;
  memset(&ptr_arr[3], 0, 28);
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  v14 = pointer_array(ptr_arr, 3);
  _printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v14);
  v15 = &ptr_arr[9];
  for ( m = 0; m != (int *)20; m = (int *)((char *)m + 1) )
  {
    v15[1] = m;
    ++v15;
  }
  _printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v23[17]);
}


/* Function: ptr_single @ 0x10C28 */
int __fastcall ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x10C34 */
int __fastcall ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x10C44 */
int __fastcall ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x10C58 */
int __fastcall ptr_increment(int *p, int n)
{
  int v3; // r3
  int result; // r0
  int v5; // t1

  if ( n <= 0 )
    return 0;
  v3 = 0;
  result = 0;
  do
  {
    v5 = *p++;
    result += v5;
    ++v3;
  }
  while ( n != v3 );
  return result;
}


/* Function: ptr_offset @ 0x10C8C */
int __fastcall ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x10C94 */
int __fastcall ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x10CA0 */
int __fastcall ptr_void(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(unsigned __int8 *)p;
  return -1;
}


/* Function: ptr_const @ 0x10CC0 */
int __fastcall ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x10CCC */
int __fastcall ptr_const_ptr(int *const p)
{
  int result; // r0

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x10CE0 */
int __fastcall ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x10CF4 */
int __fastcall ptr_func_complex(int (*f)(int *, char **), int *p)
{
  char *args[2]; // [sp+4h] [bp-14h] BYREF

  args[0] = "test";
  args[1] = 0;
  return f(p, args);
}


/* Function: ptr_cast @ 0x10D58 */
int __fastcall ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x10D60 */
void *__fastcall opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x10D64 */
int __fastcall opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x10D6C */
void test_pointer_types()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int val3; // [sp+0h] [bp-38h] BYREF
  int *ptr3; // [sp+4h] [bp-34h] BYREF
  int **pptr3; // [sp+8h] [bp-30h] BYREF
  int val11; // [sp+Ch] [bp-2Ch] BYREF
  int arr4[5]; // [sp+10h] [bp-28h] BYREF

  puts(asc_1224C);
  _printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  _printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  v0 = ptr_triple(&pptr3);
  _printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  v1 = ptr_increment(arr4, 5);
  _printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
  _printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  _printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  _printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  _printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  _printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  v2 = ptr_func_simple(double_value, 5);
  _printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
  val11 = 5;
  v3 = ptr_func_complex(complex_callback, &val11);
  _printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
  _printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  _printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x10F3C */
int __fastcall struct_simple(Point3D *p)
{
  return p->x + p->y + p->z;
}


/* Function: struct_array @ 0x10F54 */
int __fastcall struct_array(Point3D *pts, int n)
{
  Point3D *v2; // r3
  Point3D *v3; // r12
  int result; // r0

  if ( n <= 0 )
    return 0;
  v2 = pts;
  v3 = &pts[n];
  result = 0;
  do
  {
    result += v2->x + v2->y + v2->z;
    ++v2;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: struct_nested @ 0x10F9C */
int __fastcall struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x10FAC */
int __fastcall struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x10FBC */
int __fastcall struct_with_ptr(Node *node)
{
  int data; // r2
  Node *next; // r3
  int v3; // r0

  data = node->data;
  next = node->next;
  if ( next )
    v3 = next->data;
  else
    v3 = 0;
  return data + v3;
}


/* Function: struct_bitfields @ 0x10FD8 */
int __fastcall struct_bitfields(Flags *f)
{
  return (*(_BYTE *)f & 1)
       + ((unsigned int)(*(_BYTE *)f << 29) >> 30)
       + ((unsigned int)(*(_BYTE *)f << 26) >> 29)
       + (*(_WORD *)f >> 6);
}


/* Function: union_type @ 0x10FFC */
int __fastcall union_type(UnionData *u, int type)
{
  if ( !type )
    return u->i;
  if ( type == 1 )
    return (int)u->f;
  return (unsigned __int8)u->bytes[0];
}


/* Function: union_array @ 0x1102C */
int __fastcall union_array(UnionData *arr, int n)
{
  UnionData *v2; // r3
  UnionData *v3; // r1
  int result; // r0
  UnionData v5; // t1

  if ( n <= 0 )
    return 0;
  v2 = arr - 1;
  v3 = &arr[n - 1];
  result = 0;
  do
  {
    v5.i = v2[1].i;
    ++v2;
    result += v5.i;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: enum_type @ 0x1105C */
int __fastcall enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x11068 */
int __fastcall enum_switch(State s)
{
  int result; // r0

  switch ( s )
  {
    case STATE_IDLE:
      result = 0;
      break;
    case STATE_RUNNING:
      result = 100;
      break;
    case STATE_PAUSED:
      result = 50;
      break;
    case STATE_STOPPED:
      result = -1;
      break;
    default:
      result = -99;
      break;
  }
  return result;
}


/* Function: struct_func_ptr @ 0x110AC */
int __fastcall struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x110C0 */
int __fastcall linked_list(Node *head)
{
  Node *v1; // r3
  int result; // r0

  v1 = head;
  if ( !head )
    return 0;
  result = 0;
  do
  {
    result += v1->data;
    v1 = v1->next;
  }
  while ( v1 );
  return result;
}


/* Function: doubly_linked_list @ 0x110EC */
int __fastcall doubly_linked_list(DNode *head)
{
  DNode *v1; // r3
  int result; // r0

  v1 = head;
  if ( !head )
    return 0;
  result = 0;
  do
  {
    result += v1->data;
    v1 = v1->next;
  }
  while ( v1 );
  return result;
}


/* Function: binary_tree_sum @ 0x11118 */
int __fastcall binary_tree_sum(TreeNode *root)
{
  int v2; // r5

  if ( !root )
    return 0;
  v2 = binary_tree_sum(root->left) + root->data;
  return v2 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x1114C */
int __fastcall binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x11158 */
int __fastcall graph_traverse(Graph *g)
{
  int numVertices; // r12
  int *p_numVertices; // r1
  Edge **v3; // r12
  int result; // r0
  _DWORD *i; // r3
  _DWORD *v6; // t1

  numVertices = g->numVertices;
  if ( numVertices <= 0 )
    return 0;
  p_numVertices = &g[-1].numVertices;
  v3 = &g[-1].adjList[numVertices + 10];
  result = 0;
  do
  {
    v6 = (_DWORD *)p_numVertices[1];
    ++p_numVertices;
    for ( i = v6; i; i = (_DWORD *)i[1] )
      result += *i;
  }
  while ( p_numVertices != (int *)v3 );
  return result;
}


/* Function: test_composite_types @ 0x111A4 */
void test_composite_types()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  Node node2; // [sp+4h] [bp-DCh] BYREF
  Node node1; // [sp+Ch] [bp-D4h] BYREF
  Flags f; // [sp+14h] [bp-CCh] BYREF
  Device dev; // [sp+1Ch] [bp-C4h] BYREF
  Edge e1; // [sp+24h] [bp-BCh] BYREF
  Point3D p1; // [sp+2Ch] [bp-B4h] BYREF
  TreeNode tree; // [sp+38h] [bp-A8h] BYREF
  UnionData arr_u[3]; // [sp+44h] [bp-9Ch] BYREF
  Point3D pts[2]; // [sp+50h] [bp-90h] BYREF
  Node list[3]; // [sp+68h] [bp-78h] BYREF
  DNode dlist[2]; // [sp+80h] [bp-60h] BYREF
  Graph g; // [sp+98h] [bp-48h] BYREF

  puts(asc_123F4);
  p1.x = 1;
  p1.y = 2;
  p1.z = 3;
  v0 = struct_simple(&p1);
  _printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", v0);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  v1 = struct_array(pts, 2);
  _printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v1);
  _printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
  _printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
  node2.data = 20;
  node2.next = 0;
  node1.data = 10;
  node1.next = &node2;
  v2 = struct_with_ptr(&node1);
  _printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v2);
  *(_DWORD *)&f = 6429;
  *((_DWORD *)&f + 1) = 0;
  v3 = struct_bitfields(&f);
  _printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v3);
  _printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  arr_u[0].i = 10;
  arr_u[1].i = 20;
  arr_u[2].i = 30;
  v4 = union_array(arr_u, 3);
  _printf_chk(1, "CMP-L2-08 (union_array): %d\n", v4);
  _printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  _printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  dev.data = 10;
  dev.process = process_int;
  v5 = struct_func_ptr(&dev);
  _printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
  list[0].data = 10;
  list[0].next = &list[1];
  list[1].data = 20;
  list[1].next = &list[2];
  list[2].data = 30;
  list[2].next = 0;
  v6 = linked_list(list);
  _printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
  dlist[0].data = 10;
  dlist[0].next = &dlist[1];
  dlist[0].prev = 0;
  dlist[1].data = 20;
  dlist[1].next = 0;
  dlist[1].prev = dlist;
  v7 = doubly_linked_list(dlist);
  _printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v7);
  tree.data = 100;
  tree.left = 0;
  tree.right = 0;
  v8 = binary_tree_sum(&tree);
  _printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v8);
  e1.dest = 1;
  e1.next = 0;
  memset(&g.adjList[1], 0, 0x24u);
  g.adjList[0] = &e1;
  g.numVertices = 2;
  v9 = graph_traverse(&g);
  _printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
}


/* Function: main @ 0x11478 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __muldf3 @ 0x11494 */
int __fastcall _muldf3(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r5
  unsigned int v4; // r12
  bool v5; // zf
  int v6; // r4
  int v7; // r4
  int v8; // r6
  int v9; // r1
  int v10; // r3
  bool v11; // zf
  int v12; // r3
  int v13; // r12
  unsigned int v14; // r5
  unsigned int v15; // lr
  unsigned int v16; // r2
  unsigned int v17; // lr
  unsigned __int64 v18; // kr10_8
  unsigned int v19; // r5
  unsigned int v20; // r6
  int v21; // r4
  unsigned int v22; // off
  unsigned int v24; // lr
  bool v25; // cc
  bool v26; // cf
  int v27; // r4
  int v28; // r4
  int v29; // r4
  char v30; // r4
  char v31; // r4
  unsigned int v32; // r3
  char v33; // r4
  unsigned int v34; // r3
  int v35; // lr
  unsigned int v36; // r3

  v4 = 2047;
  v6 = (HIDWORD(a1) >> 20) & 0x7FF;
  v5 = v6 == 0;
  if ( v6 )
  {
    v3 = (a3 >> 20) & 0x7FF;
    v5 = v3 == 0;
  }
  if ( !v5 )
  {
    v5 = v6 == 0x7FF;
    if ( v6 != 0x7FF )
      v5 = v3 == 0x7FF;
  }
  if ( v5 )
    a1 = sub_11674();
  v7 = v6 + v3;
  v8 = HIDWORD(a1) ^ a3;
  v9 = HIDWORD(a1) & ~(v4 << 21);
  v10 = a3 & ~(v4 << 21);
  v11 = ((unsigned int)a1 | (v9 << 12)) == 0;
  if ( (unsigned int)a1 | (v9 << 12) )
    v11 = (a2 | (v10 << 12)) == 0;
  HIDWORD(a1) = v9 | 0x100000;
  v12 = v10 | 0x100000;
  if ( v11 )
  {
    LODWORD(a1) = a1 | a2;
    HIDWORD(a1) = (v8 & 0x80000000 | HIDWORD(a1)) ^ v12;
    v25 = v7 <= (int)(v4 >> 1);
    v27 = v7 - (v4 >> 1);
    if ( !v25 && (int)v4 > v27 )
      return a1;
    HIDWORD(a1) |= 0x100000u;
    v24 = 0;
    v25 = v27 <= 1;
    v21 = v27 - 1;
  }
  else
  {
    v13 = a1 * a2;
    v14 = (HIDWORD(a1) * (unsigned __int64)a2 + (((unsigned int)a1 * (unsigned __int64)a2) >> 32)) >> 32;
    v15 = (a1 * (unsigned __int64)a2) >> 32;
    v16 = v8 & 0x80000000;
    v18 = (unsigned int)a1 * (unsigned __int64)(unsigned int)v12 + __PAIR64__(v14, v15);
    v17 = v18;
    v20 = (HIDWORD(a1) * (unsigned __int64)(unsigned int)v12 + HIDWORD(v18)) >> 32;
    v19 = HIDWORD(a1) * v12 + HIDWORD(v18);
    if ( v13 )
      v17 = v18 | 1;
    v21 = (__PAIR64__(v7 - 255, v20) - 0x30000000200LL) >> 32;
    if ( v20 < 0x200 )
    {
      v26 = __CFSHL__(v17, 1);
      v17 *= 2;
      v22 = v26 + v19;
      v26 = __CFADD__(v26, v19) | __CFADD__(v19, v22);
      v19 += v22;
      v20 += v26 + v20;
    }
    HIDWORD(a1) = v16 | (v20 << 11) | (v19 >> 21);
    LODWORD(a1) = (v19 << 11) | (v17 >> 21);
    v24 = v17 << 11;
    v25 = v21 <= 253;
    if ( (unsigned int)v21 > 0xFD )
      v25 = v21 - 253 <= 1792;
    if ( !v25 )
    {
      v26 = v24 >= 0x80000000;
      if ( v24 == 0x80000000 )
        v26 = a1 & 1;
      LODWORD(a1) = v26 + (_DWORD)a1;
      return a1;
    }
  }
  if ( !v25 )
    JUMPOUT(0x116E0);
  if ( v21 > -54 )
  {
    v28 = -v21;
    v25 = v28 < 32;
    v29 = v28 - 32;
    if ( v25 )
    {
      v25 = v29 <= -12;
      v30 = v29 + 12;
      if ( v25 )
      {
        v31 = v30 + 20;
        v32 = (_DWORD)a1 << (32 - v31);
        LODWORD(a1) = (((unsigned int)a1 >> v31) | (HIDWORD(a1) << (32 - v31))) + (v32 >> 31);
        if ( !(v24 | (2 * v32)) )
          LODWORD(a1) = a1 & ~(v32 >> 31);
      }
      else
      {
        v33 = 12 - v30;
        v34 = (_DWORD)a1 << v33;
        LODWORD(a1) = (((unsigned int)a1 >> (32 - v33)) | (HIDWORD(a1) << v33)) + ((_DWORD)a1 << v33 >> 31);
        if ( !(v24 | (2 * v34)) )
          LODWORD(a1) = a1 & ~(v34 >> 31);
      }
    }
    else
    {
      v35 = v24 | ((_DWORD)a1 << (32 - v29));
      v36 = ((unsigned int)a1 >> v29) | (HIDWORD(a1) << (32 - v29));
      LODWORD(a1) = ((HIDWORD(a1) >> v29) & ~((HIDWORD(a1) & 0x80000000) >> v29)) + (v36 >> 31);
      if ( !(v35 | (2 * v36)) )
        LODWORD(a1) = a1 & ~(v36 >> 31);
    }
  }
  else
  {
    LODWORD(a1) = 0;
  }
  return a1;
}


/* Function: sub_11674 @ 0x11674 */
int __fastcall sub_11674(int result, unsigned int a2, int a3, unsigned int a4, int a5, int a6, int a7, int a8)
{
  bool v8; // cf
  int v9; // r4
  int v10; // r12
  bool v11; // zf
  int v12; // r5
  bool v13; // zf
  bool v14; // zf

  v11 = v9 == v10;
  v12 = v10 & (a4 >> 20);
  if ( v9 != v10 )
    v11 = v12 == v10;
  if ( v11 )
  {
    v14 = (result | (2 * a2)) == 0;
    if ( result | (2 * a2) )
    {
      v14 = (a3 | (2 * a4)) == 0;
    }
    else
    {
      result = a3;
      a2 = a4;
    }
    if ( !v14 && (v9 != v10 || !(result | (a2 << 12))) && (v12 != v10 || !(a3 | (a4 << 12))) )
      __asm { POP     {R4-R6,PC} }
    __asm { POP     {R4-R6,PC} }
  }
  v13 = (result | (2 * a2)) == 0;
  if ( result | (2 * a2) )
    v13 = (a3 | (2 * a4)) == 0;
  if ( v13 )
    __asm { POP     {R4-R6,PC} }
  if ( v9 )
    goto LABEL_24;
  while ( 1 )
  {
    v8 = __CFSHL__(result, 1);
    result *= 2;
    a2 += v8 + a2;
    if ( (a2 & 0x100000) != 0 )
      break;
    --v9;
  }
  if ( !v12 )
  {
LABEL_24:
    while ( 1 )
    {
      v8 = __CFSHL__(a3, 1);
      a3 *= 2;
      a4 += v8 + a4;
      if ( (a4 & 0x100000) != 0 )
        break;
      --v12;
    }
  }
  return result;
}


/* Function: __mulsf3 @ 0x11700 */
int __fastcall _mulsf3(unsigned int a1, unsigned int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r2
  int v6; // r2
  int v7; // r12
  bool v8; // zf
  unsigned int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r3
  int v12; // kr00_4
  bool v13; // cf
  unsigned int v14; // r0
  int v15; // r2
  bool v16; // cc
  int result; // r0
  unsigned int v18; // r12
  int v19; // r0
  int v20; // r2
  int v21; // r2
  unsigned int v22; // r12
  unsigned int v23; // r12
  bool v24; // zf
  bool v25; // zf
  unsigned int v26; // r12
  bool v27; // zf
  bool v28; // zf
  bool v29; // zf

  v5 = (unsigned __int8)(a1 >> 23);
  v4 = v5 == 0;
  if ( (unsigned __int8)(a1 >> 23) )
  {
    a4 = (unsigned __int8)(a2 >> 23);
    v4 = a4 == 0;
  }
  if ( !v4 )
  {
    v4 = v5 == 0xFF;
    if ( v5 != 0xFF )
      v4 = a4 == 0xFF;
  }
  if ( v4 )
  {
    a4 = (unsigned __int8)(a2 >> 23);
    v27 = v5 == 0xFF;
    if ( v5 != 0xFF )
      v27 = a4 == 0xFF;
    if ( v27 )
    {
      v29 = a1 == 0;
      if ( a1 )
        v29 = a1 == 0x80000000;
      if ( v29 )
        a1 = a2;
      else
        v29 = a2 == 0;
      if ( !v29 )
        v29 = a2 == 0x80000000;
      if ( !v29 && (v5 != 0xFF || !(a1 << 9)) )
      {
        if ( a4 != 0xFF || !(a2 << 9) )
        {
          v14 = a1 ^ a2;
          return v14 & 0x80000000 | 0x7F800000;
        }
        a1 = a2;
      }
      return a1 | 0x7FC00000;
    }
    v28 = (a1 & 0x7FFFFFFF) == 0;
    if ( (a1 & 0x7FFFFFFF) != 0 )
      v28 = (a2 & 0x7FFFFFFF) == 0;
    if ( v28 )
      return (a1 ^ a2) & 0x80000000;
    v24 = v5 == 0;
    v23 = a1 & 0x80000000;
    while ( v24 )
    {
      a1 *= 2;
      v24 = (a1 & 0x800000) == 0;
      if ( (a1 & 0x800000) != 0 )
        break;
      --v5;
    }
    a1 |= v23;
    v25 = a4 == 0;
    v26 = a2 & 0x80000000;
    while ( v25 )
    {
      a2 *= 2;
      v25 = (a2 & 0x800000) == 0;
      if ( (a2 & 0x800000) != 0 )
        break;
      --a4;
    }
    a2 |= v26;
  }
  v6 = v5 + a4;
  v7 = a1 ^ a2;
  v9 = a1 << 9;
  v8 = v9 == 0;
  if ( v9 )
  {
    a2 <<= 9;
    v8 = a2 == 0;
  }
  if ( v8 )
  {
    v18 = v7 & 0x80000000;
    if ( !v9 )
      a2 <<= 9;
    v19 = v18 | (v9 >> 9) | (a2 >> 9);
    v16 = v6 <= 127;
    v20 = v6 - 127;
    if ( !v16 && v20 < 255 )
      return v19 | (v20 << 23);
    v14 = v19 | 0x800000;
    v11 = 0;
    v16 = v20 <= 1;
    v15 = v20 - 1;
  }
  else
  {
    v12 = ((v9 >> 5) | 0x8000000) * ((a2 >> 5) | 0x8000000);
    v10 = (((v9 >> 5) | 0x8000000) * (unsigned __int64)((a2 >> 5) | 0x8000000)) >> 32;
    v11 = v12;
    v13 = v10 >= 0x800000;
    if ( v10 < 0x800000 )
    {
      v10 = __SPAIR64__(v10, v12) >> 31;
      v11 = 2 * v12;
    }
    v14 = v7 & 0x80000000 | v10;
    v15 = v6 - (!v13 + 127);
    v16 = v15 <= 253;
    if ( (unsigned int)v15 <= 0xFD )
    {
      result = (v15 << 23) + (v11 >= 0x80000000) + v14;
      if ( v11 == 0x80000000 )
        return result & 0xFFFFFFFE;
      return result;
    }
  }
  if ( !v16 )
    return v14 & 0x80000000 | 0x7F800000;
  if ( v15 <= -25 )
    return v14 & 0x80000000;
  v21 = -v15;
  v22 = v14 << (32 - v21);
  result = (((2 * v14) >> v21) & 1) + (((2 * v14) >> v21 >> 1) | (__CFSHL__(v14, 1) << 31));
  if ( !(v11 | (2 * v22)) )
    return result & ~(v22 >> 31);
  return result;
}


/* Function: __aeabi_drsub @ 0x11898 */
double __fastcall _aeabi_drsub(double a1, double a2)
{
  HIDWORD(a1) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __subdf3 @ 0x118A0 */
double __fastcall _subdf3(double a1, double a2)
{
  HIDWORD(a2) ^= 0x80000000;
  return a1 + a2;
}


/* Function: __aeabi_dadd @ 0x118A4 */
int __fastcall _aeabi_dadd(__int64 a1, __int64 a2)
{
  int v2; // r4
  int v3; // r5
  bool v4; // zf
  int v5; // r4
  bool v6; // vf
  char v7; // cc
  int v8; // r5
  __int64 v9; // r2
  int v10; // r4
  char v11; // lr
  unsigned int v12; // r12
  __int64 v13; // r0
  bool v14; // nf
  char v15; // r5
  _BOOL1 v16; // off
  _BOOL1 v17; // cf
  int v18; // off
  int v19; // r4
  bool v20; // zf
  unsigned int v21; // r3
  int v22; // r3
  bool v23; // cc
  int v24; // r2
  int v25; // r4
  int v26; // r4
  char v27; // r4
  bool v28; // zf
  bool v29; // zf

  v2 = 2 * HIDWORD(a1);
  v3 = 2 * HIDWORD(a2);
  v4 = 2 * HIDWORD(a1) == 2 * HIDWORD(a2);
  if ( 2 * HIDWORD(a1) == 2 * HIDWORD(a2) )
    v4 = (unsigned int)a1 == (unsigned int)a2;
  if ( !v4 )
  {
    v4 = (v2 | (unsigned int)a1) == 0;
    if ( v2 | (unsigned int)a1 )
    {
      v4 = (v3 | (unsigned int)a2) == 0;
      if ( v3 | (unsigned int)a2 )
      {
        v4 = v2 >> 21 == -1;
        if ( v2 >> 21 != -1 )
          v4 = v3 >> 21 == -1;
      }
    }
  }
  if ( v4 )
  {
    v28 = v2 >> 21 == -1;
    if ( v2 >> 21 != -1 )
      v28 = v3 >> 21 == -1;
    if ( v28 )
    {
      if ( v2 >> 21 != -1 )
        return a2;
    }
    else
    {
      v29 = v2 == v3;
      if ( v2 == v3 )
        v29 = (unsigned int)a1 == (unsigned int)a2;
      if ( v29 )
      {
        if ( HIDWORD(a1) != HIDWORD(a2) )
        {
          LODWORD(a1) = 0;
          return a1;
        }
        if ( !((unsigned int)v2 >> 21) )
        {
          LODWORD(a1) = 2 * a1;
          return a1;
        }
        if ( (unsigned int)v2 < 0xFFC00000 )
          return a1;
        goto LABEL_69;
      }
      if ( !(v2 | (unsigned int)a1) )
        LODWORD(a1) = a2;
    }
  }
  else
  {
    v5 = (unsigned int)v2 >> 21;
    v6 = __OFSUB__((unsigned int)v3 >> 21, v5);
    v8 = ((unsigned int)v3 >> 21) - v5;
    v7 = (v8 < 0) ^ v6 | (v8 == 0);
    if ( v8 < 0 != v6 )
      v8 = -v8;
    if ( !v7 )
    {
      v5 += v8;
      v9 = a1 ^ a2;
      a1 ^= v9;
      a2 = a1 ^ v9;
    }
    if ( (unsigned int)v8 <= 0x36 )
    {
      v4 = a1 >= 0;
      HIDWORD(a1) = HIDWORD(a1) & 0xFFFFF | 0x100000;
      if ( !v4 )
        a1 = -a1;
      v4 = a2 >= 0;
      HIDWORD(a2) = HIDWORD(a2) & 0xFFFFF | 0x100000;
      if ( !v4 )
        a2 = -a2;
      if ( v5 == v8 )
      {
        HIDWORD(a2) ^= 0x100000u;
        if ( v5 )
        {
          --v8;
        }
        else
        {
          HIDWORD(a1) ^= 0x100000u;
          v5 = 1;
        }
      }
      v10 = v5 - 1;
      v11 = 32 - v8;
      if ( v8 > 32 )
      {
        v15 = v8 - 32;
        v12 = HIDWORD(a2) << (v11 + 32);
        if ( (_DWORD)a2 )
          v12 |= 2u;
        LODWORD(a1) = a1 + (SHIDWORD(a2) >> v15);
        HIDWORD(a1) += (SHIDWORD(a2) >> 31) + __CFSHR__(HIDWORD(a2), 31);
        v14 = a1 < 0;
      }
      else
      {
        v12 = (_DWORD)a2 << v11;
        v13 = a1 + ((unsigned int)a2 >> v8);
        LODWORD(a1) = v13 + (HIDWORD(a2) << v11);
        HIDWORD(a1) = (SHIDWORD(a2) >> v8) + __CFSHR__(HIDWORD(a2), v8) + HIDWORD(v13);
        v14 = a1 < 0;
      }
      if ( v14 )
      {
        v17 = v12 == 0;
        v12 = -v12;
        v16 = v17;
        v17 = __CFSUB__(0, (_DWORD)a1, v17);
        LODWORD(a1) = -(a1 + !v16);
        HIDWORD(a1) = -(HIDWORD(a1) + !v17);
      }
      if ( HIDWORD(a1) >= 0x100000 )
      {
        if ( HIDWORD(a1) < 0x200000
          || (v17 = a1 & 1,
              LODWORD(a1) = a1 >> 1,
              v12 = (v12 >> 1) | (v17 << 31),
              (unsigned int)((v10 + 1) << 21) < 0xFFC00000) )
        {
LABEL_30:
          v17 = v12 >= 0x80000000;
          if ( v12 == 0x80000000 )
            v17 = a1 & 1;
          LODWORD(a1) = v17 + (_DWORD)a1;
          return a1;
        }
LABEL_69:
        LODWORD(a1) = 0;
        return a1;
      }
      v17 = __CFSHL__(v12, 1);
      v12 *= 2;
      v18 = v17 + (_DWORD)a1;
      v17 = __CFADD__(v17, (_DWORD)a1) | __CFADD__((_DWORD)a1, v18);
      LODWORD(a1) = a1 + v18;
      HIDWORD(a1) += v17 + HIDWORD(a1);
      v17 = v10 != 0;
      v19 = v10 - 1;
      if ( v17 && HIDWORD(a1) >= 0x100000 )
        goto LABEL_30;
      v20 = HIDWORD(a1) == 0;
      if ( !HIDWORD(a1) )
      {
        HIDWORD(a1) = a1;
        LODWORD(a1) = 0;
      }
      v21 = __clz(HIDWORD(a1));
      if ( v20 )
        v21 += 32;
      v22 = v21 - 11;
      v24 = v22 - 32;
      v23 = v22 <= 32;
      if ( v22 < 32 )
      {
        v23 = v24 <= -12;
        if ( v24 > -12 )
        {
          LODWORD(a1) = HIDWORD(a1) << v22;
          HIDWORD(a1) >>= 32 - v22;
LABEL_47:
          v7 = v19 < v22;
          v25 = v19 - v22;
          if ( v7 )
          {
            v26 = ~v25;
            v7 = v26 < 31;
            v27 = v26 - 31;
            if ( v7 )
              LODWORD(a1) = ((unsigned int)a1 >> (v27 + 32)) | (HIDWORD(a1) << -v27);
            else
              LODWORD(a1) = HIDWORD(a1) >> v27;
          }
          return a1;
        }
        LOBYTE(v24) = v22;
      }
      if ( v23 )
        LOBYTE(v12) = 32 - v24;
      HIDWORD(a1) <<= v24;
      if ( v23 )
      {
        HIDWORD(a1) |= (unsigned int)a1 >> v12;
        LODWORD(a1) = (_DWORD)a1 << v24;
      }
      goto LABEL_47;
    }
  }
  return a1;
}


/* Function: __floatunsidf @ 0x11B50 */
int __fastcall _floatunsidf(int result)
{
  if ( result )
    JUMPOUT(0x119EC);
  return result;
}


/* Function: __floatsidf @ 0x11B74 */
int __fastcall _floatsidf(int result)
{
  if ( result )
    JUMPOUT(0x119EC);
  return result;
}


/* Function: __extendsfdf2 @ 0x11B9C */
int __fastcall _extendsfdf2(int a1, int a2, int a3, unsigned int a4)
{
  bool v4; // zf
  int v5; // r2
  int result; // r0

  v5 = 2 * a1;
  v4 = 2 * a1 == 0;
  result = a1 << 29;
  if ( v4 || (a4 = v5 & 0xFF000000, (v5 & 0xFF000000) == 0) || a4 == 0xFF000000 )
  {
    if ( (v5 & 0xFFFFFF) != 0 && a4 != 0xFF000000 )
      JUMPOUT(0x119EC);
  }
  return result;
}


/* Function: __floatundidf @ 0x11BE4 */
int __fastcall _floatundidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11C14);
  return a1;
}


/* Function: __floatdidf @ 0x11BF8 */
int __fastcall _floatdidf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11990);
  return a1;
}


/* Function: __aeabi_frsub @ 0x11C58 */
float __fastcall _aeabi_frsub(int a1, float a2)
{
  return COERCE_FLOAT(a1 ^ 0x80000000) + a2;
}


/* Function: __subsf3 @ 0x11C60 */
float __fastcall _subsf3(float a1, int a2)
{
  return a1 + COERCE_FLOAT(a2 ^ 0x80000000);
}


/* Function: __aeabi_fadd @ 0x11C64 */
int __fastcall _aeabi_fadd(int result, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r2
  int v6; // r2
  bool v7; // vf
  int v8; // r3
  int v9; // r1
  int v10; // r0
  int v11; // r1
  signed int v12; // r2
  unsigned int v13; // r0
  unsigned int v14; // r1
  unsigned int v15; // r3
  bool v16; // cf
  int v17; // r0
  signed int v18; // r12
  bool v19; // cc
  int v20; // r2
  unsigned int v21; // r0
  int v22; // r3
  bool v23; // zf
  bool v24; // zf
  int v25; // r2
  bool v26; // zf

  v5 = 2 * result;
  v4 = 2 * result == 0;
  if ( 2 * result )
  {
    a4 = 2 * a2;
    v4 = 2 * a2 == 0;
  }
  if ( !v4 )
  {
    v4 = v5 == a4;
    if ( v5 != a4 )
    {
      v4 = v5 >> 24 == -1;
      if ( v5 >> 24 != -1 )
        v4 = a4 >> 24 == -1;
    }
  }
  if ( v4 )
  {
    v22 = 2 * a2;
    v23 = v5 >> 24 == -1;
    if ( v5 >> 24 != -1 )
      v23 = v22 >> 24 == -1;
    if ( v23 )
    {
      v25 = ~(v5 >> 24);
      v24 = v25 == 0;
      if ( v25 )
        result = a2;
      else
        v24 = v22 >> 24 == -1;
      if ( !v24 )
        a2 = result;
      v26 = result << 9 == 0;
      if ( !(result << 9) )
        v26 = a2 << 9 == 0;
      if ( v26 )
        v26 = result == a2;
      if ( !v26 )
        return result | 0x400000;
    }
    else if ( v5 != v22 )
    {
      if ( !v5 )
        return a2;
    }
    else
    {
      if ( result != a2 )
        return 0;
      if ( (v5 & 0xFF000000) != 0 )
      {
        if ( (unsigned int)v5 < 0xFE000000 )
        {
          result += 0x800000;
          return result;
        }
        v15 = result & 0x80000000;
        return v15 | 0x7F800000;
      }
      v16 = __CFSHL__(result, 1);
      result *= 2;
      if ( v16 )
        return result | 0x80000000;
    }
  }
  else
  {
    v6 = HIBYTE(v5);
    v7 = __OFSUB__(HIBYTE(a4), v6);
    v8 = HIBYTE(a4) - v6;
    if ( !((v8 < 0) ^ v7 | (v8 == 0)) )
    {
      v6 += v8;
      v9 = result ^ a2;
      result ^= v9;
      a2 = result ^ v9;
    }
    if ( v8 < 0 != v7 )
      v8 = -v8;
    if ( (unsigned int)v8 <= 0x19 )
    {
      v4 = result >= 0;
      v10 = result & 0x7FFFFF | 0x800000;
      if ( !v4 )
        v10 = -v10;
      v4 = a2 >= 0;
      v11 = a2 & 0x7FFFFF | 0x800000;
      if ( !v4 )
        v11 = -v11;
      if ( v6 == v8 )
      {
        v11 ^= 0x800000u;
        if ( v6 )
        {
          LOBYTE(v8) = v8 - 1;
        }
        else
        {
          v10 ^= 0x800000u;
          v6 = 1;
        }
      }
      v12 = v6 - 1;
      v13 = v10 + (v11 >> v8);
      v14 = v11 << (32 - v8);
      v15 = v13 & 0x80000000;
      if ( (v13 & 0x80000000) != 0 )
      {
        v16 = v14 == 0;
        v14 = -v14;
        v13 = -(v13 + !v16);
      }
      if ( v13 >= 0x800000 )
      {
        if ( v13 < 0x1000000 )
          goto LABEL_23;
        v16 = v13 & 1;
        v13 >>= 1;
        v14 = (v14 >> 1) | (v16 << 31);
        if ( (unsigned int)++v12 < 0xFE )
          goto LABEL_23;
        return v15 | 0x7F800000;
      }
      v16 = __CFSHL__(v14, 1);
      v14 *= 2;
      v13 += v16 + v13;
      v16 = v12-- != 0;
      if ( v16 && v13 >= 0x800000 )
      {
LABEL_23:
        v17 = (v12 << 23) + (v14 >= 0x80000000) + v13;
        if ( v14 == 0x80000000 )
          v17 &= ~1u;
        return v17 | v15;
      }
      v18 = __clz(v13) - 8;
      v19 = v12 < v18;
      v20 = v12 - v18;
      v21 = v13 << v18;
      if ( v19 )
        v20 = -v20;
      else
        v21 += v20 << 23;
      if ( v19 )
        return v15 | (v21 >> v20);
      else
        return v21 | v15;
    }
  }
  return result;
}


/* Function: __floatunsisf @ 0x11DF4 */
void _floatunsisf()
{
  JUMPOUT(0x11E04);
}


/* Function: __floatsisf @ 0x11DFC */
int __fastcall _floatsisf(int result)
{
  if ( result < 0 )
    result = -result;
  if ( result )
    JUMPOUT(0x11E5C);
  return result;
}


/* Function: __floatundisf @ 0x11E1C */
int __fastcall _floatundisf(__int64 a1)
{
  if ( a1 )
    JUMPOUT(0x11E44);
  return a1;
}


/* Function: __floatdisf @ 0x11E2C */
int __fastcall _floatdisf(__int64 a1)
{
  unsigned int v1; // r3
  bool v2; // zf
  unsigned int v3; // r12
  int v4; // r3
  signed int v5; // r2
  bool v6; // cc
  int v7; // r2
  int v8; // r3
  int v9; // r12
  char v10; // r2

  if ( a1 )
  {
    v1 = HIDWORD(a1) & 0x80000000;
    if ( a1 < 0 )
      a1 = -a1;
    v3 = HIDWORD(a1);
    v2 = HIDWORD(a1) == 0;
    if ( !HIDWORD(a1) )
    {
      v3 = a1;
      HIDWORD(a1) = a1;
      LODWORD(a1) = 0;
    }
    v4 = v1 | 0x5B000000;
    if ( v2 )
      v4 -= 0x10000000;
    v5 = __clz(v3);
    v6 = v5 < 8;
    v7 = v5 - 8;
    v8 = v4 - 0x800000 - (v7 << 23);
    if ( v6 )
    {
      v10 = v7 + 32;
      v2 = ((unsigned int)a1 | (2 * (HIDWORD(a1) << v10))) == 0;
      LODWORD(a1) = (HIDWORD(a1) >> (32 - v10)) + __CFSHL__(HIDWORD(a1) << v10, 1) + v8;
      if ( v2 )
        LODWORD(a1) = a1 & ~(HIDWORD(a1) << v10 >> 31);
    }
    else
    {
      v9 = (_DWORD)a1 << v7;
      LODWORD(a1) = ((unsigned int)a1 >> (32 - v7)) + ((_DWORD)a1 << v7 >= 0x80000000) + v8 + (HIDWORD(a1) << v7);
      if ( v9 == 0x80000000 )
        LODWORD(a1) = a1 & 0xFFFFFFFE;
    }
  }
  return a1;
}


/* Function: __fixsfsi @ 0x11EA8 */
unsigned int __fastcall _fixsfsi(int a1)
{
  unsigned int v1; // r2
  bool v2; // cf
  int v3; // r2
  bool v4; // zf
  unsigned int result; // r0

  v1 = 2 * a1;
  if ( (unsigned int)(2 * a1) < 0x7F000000 )
    return 0;
  v2 = HIBYTE(v1) <= 0x9Eu;
  v3 = 158 - HIBYTE(v1);
  if ( v3 != 0 && v2 )
  {
    v4 = a1 >= 0;
    result = ((a1 << 8) | 0x80000000) >> v3;
    if ( !v4 )
      return -result;
  }
  else if ( v3 == -97 && a1 << 9 )
  {
    return 0;
  }
  else
  {
    result = a1 & 0x80000000;
    if ( !result )
      return 0x7FFFFFFF;
  }
  return result;
}


/* Function: .term_proc @ 0x11F04 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_puts @ 0x23040 */

/* FAILED to decompile: __imp_memset @ 0x23044 */

/* FAILED to decompile: __imp___printf_chk @ 0x23048 */

/* FAILED to decompile: __imp_abort @ 0x2304C */

/* FAILED to decompile: __imp___libc_start_main @ 0x23050 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x23054 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x23058 */

/* Total functions decompiled: 85, failed: 7 */
