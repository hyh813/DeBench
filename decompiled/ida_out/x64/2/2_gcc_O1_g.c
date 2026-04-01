/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_gcc_O1_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
  return result;
}


/* Function: sub_1020 @ 0x1020 */
void sub_1020()
{
  JUMPOUT(0);
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  sub_1020();
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1020();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1020();
}


/* Function: _start @ 0x10A0 */
// positive sp value has been detected, the output may be wrong!
void __fastcall __noreturn start(__int64 a1, __int64 a2, void (*a3)(void))
{
  __int64 v3; // rax
  int v4; // esi
  __int64 v5; // [rsp-8h] [rbp-8h] BYREF
  char *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = v5;
  v5 = v3;
  _libc_start_main((int (*)(int, char **, char **))main, v4, &retaddr, 0, 0, a3, &v5);
  __halt();
}


/* Function: deregister_tm_clones @ 0x10D0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1100 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1140 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1180 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x1189 */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: process_int @ 0x1191 */
int __fastcall process_int(int x)
{
  return 2 * x + 1;
}


/* Function: complex_callback @ 0x119A */
int __fastcall complex_callback(int *p, char **args)
{
  *p += 10;
  return *args != 0;
}


/* Function: process_char @ 0x11AC */
char __fastcall process_char(char c)
{
  char result; // al

  result = c + 32;
  if ( (unsigned __int8)(c - 65) >= 0x1Au )
    return c;
  return result;
}


/* Function: process_short @ 0x11BD */
__int16 __fastcall process_short(__int16 a, __int16 b)
{
  return b + a;
}


/* Function: process_long @ 0x11C5 */
__int64 __fastcall process_long(__int64 x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x11CE */
__int64 __fastcall process_ll(__int64 x)
{
  return x * x;
}


/* Function: process_float @ 0x11DA */
float __fastcall process_float(float a1, float f)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x11EF */
double __fastcall process_double(double a1, double d)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1204 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x1213 */
bool __fastcall process_bool(int x)
{
  bool v1; // al

  v1 = (x & 1) == 0;
  if ( x <= 0 )
    return 0;
  return v1;
}


/* Function: const_param @ 0x122C */
int __fastcall const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x1236 */
int __fastcall volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1241 */
void __cdecl test_data_types_l1()
{
  puts(s);
  __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
  __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
  __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
  __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
  __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
  __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
  __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 3.5);
  __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", 2.1);
  __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 10.0);
  __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
  __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
  __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x13F1 */
int __fastcall array_1d_stack(int *arr, int n)
{
  int *v2; // rax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = arr;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &arr[n - 1 + 1] );
  return v3;
}


/* Function: array_string @ 0x141E */
int __fastcall array_string(char *str)
{
  __int64 v1; // rax
  int v2; // edx

  if ( !*str )
    return 0;
  v1 = 1;
  do
    v2 = v1++;
  while ( str[v1 - 1] );
  return v2;
}


/* Function: array_2d_stack @ 0x1443 */
int __fastcall array_2d_stack(int (*arr)[10])
{
  int *v1; // rdx
  int result; // eax

  v1 = &(*arr)[110];
  result = 0;
  do
  {
    result += (*arr)[0];
    arr = (int (*)[10])((char *)arr + 44);
  }
  while ( arr != (int (*)[10])v1 );
  return result;
}


/* Function: array_3d @ 0x145F */
int __fastcall array_3d(int (*arr)[5][5])
{
  int *v1; // rcx
  int result; // eax
  int *v3; // rdx

  v1 = (*arr)[5];
  result = 0;
  do
  {
    v3 = v1 - 25;
    do
    {
      result += v3[4] + v3[3] + v3[2] + v3[1] + *v3;
      v3 += 5;
    }
    while ( v3 != v1 );
    v1 += 25;
  }
  while ( v1 != (*arr)[30] );
  return result;
}


/* Function: array_vla @ 0x1498 */
int __fastcall array_vla(int n, int *arr)
{
  int *v2; // rax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = arr;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &arr[n - 1 + 1] );
  return v3;
}


/* Function: array_pointer @ 0x14C5 */
int __fastcall array_pointer(int (*arr)[10], int n)
{
  int *v2; // rax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = (int *)arr;
  v3 = 0;
  do
  {
    v3 += *v2;
    v2 += 10;
  }
  while ( v2 != &(*arr)[10 * (n - 1) + 10] );
  return v3;
}


/* Function: pointer_array @ 0x14F6 */
int __fastcall pointer_array(int **arr, int n)
{
  int v2; // r8d
  __int64 v3; // rax
  int v4; // ecx
  int *v5; // rdx

  v2 = 10;
  if ( n <= 10 )
    v2 = n;
  if ( n <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = arr[v3];
    if ( v5 )
      v4 += *v5;
    ++v3;
  }
  while ( v2 > (int)v3 );
  return v4;
}


/* Function: array_complex_index @ 0x1535 */
int __fastcall array_complex_index(int *arr, int w, int h, int x, int y)
{
  if ( (y | x) < 0 || x >= w )
    return -1;
  if ( y >= h )
    return -1;
  return arr[x + y * w];
}


/* Function: array_oob @ 0x1565 */
int __fastcall array_oob(int *arr, int n)
{
  int *v2; // rax
  int v3; // edx

  if ( n < 0 )
    return 0;
  v2 = arr;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &arr[n + 1] );
  return v3;
}


/* Function: test_array_types @ 0x1591 */
void __cdecl test_array_types()
{
  int v0; // eax
  int v1; // eax
  int *v2; // rsi
  int i; // ecx
  __int64 j; // rax
  int v5; // edx
  int v6; // eax
  int *v7; // rdx
  int *v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 k; // rax
  int a; // [rsp+8h] [rbp-550h] BYREF
  int b; // [rsp+Ch] [rbp-54Ch] BYREF
  int c; // [rsp+10h] [rbp-548h] BYREF
  int vla_arr[3]; // [rsp+14h] [rbp-544h] BYREF
  int arr1[8]; // [rsp+20h] [rbp-538h] BYREF
  int *ptr_arr[10]; // [rsp+40h] [rbp-518h] BYREF
  int v20[20]; // [rsp+90h] [rbp-4C8h]
  int arr2[5][10]; // [rsp+E0h] [rbp-478h] BYREF
  int matrix[10][10]; // [rsp+1B0h] [rbp-3A8h] BYREF
  int cube[5][5][5]; // [rsp+340h] [rbp-218h] BYREF
  char str[6]; // [rsp+542h] [rbp-16h] BYREF
  unsigned __int64 v25; // [rsp+548h] [rbp-10h]
  char v26; // [rsp+598h] [rbp+40h] BYREF

  v25 = __readfsqword(0x28u);
  puts(asc_33E1);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  v0 = array_1d_stack(arr1, 5);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v0);
  strcpy(str, "hello");
  v1 = array_string(str);
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
  v2 = matrix[0];
  for ( i = 0; i != 10; ++i )
  {
    for ( j = 0; j != 10; ++j )
    {
      v5 = 0;
      if ( i == (_DWORD)j )
        v5 = j;
      v2[j] = v5;
    }
    v2 += 10;
  }
  v6 = array_2d_stack(matrix);
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v6);
  v7 = cube[1][0];
  do
  {
    v8 = v7 - 25;
    do
    {
      *v8 = 1;
      v8[1] = 1;
      v8[2] = 1;
      v8[3] = 1;
      v8[4] = 1;
      v8 += 5;
    }
    while ( v8 != v7 );
    v7 += 25;
  }
  while ( v7 != (int *)&v26 );
  v9 = array_3d(cube);
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v9);
  vla_arr[0] = 10;
  vla_arr[1] = 20;
  vla_arr[2] = 30;
  v10 = array_vla(3, vla_arr);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v10);
  arr2[0][0] = 0;
  arr2[1][0] = 10;
  arr2[2][0] = 20;
  arr2[3][0] = 30;
  arr2[4][0] = 40;
  v11 = array_pointer(arr2, 5);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v11);
  a = 10;
  b = 20;
  c = 30;
  memset(&ptr_arr[3], 0, 56);
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  v12 = pointer_array(ptr_arr, 3);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v12);
  for ( k = 0; k != 20; ++k )
    v20[k] = k;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v20[17]);
}


/* Function: ptr_single @ 0x18A6 */
int __fastcall ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x18B0 */
int __fastcall ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x18BD */
int __fastcall ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x18CD */
int __fastcall ptr_increment(int *p, int n)
{
  int *v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = &p[n];
  result = 0;
  do
    result += *p++;
  while ( p != v2 );
  return result;
}


/* Function: ptr_offset @ 0x18F2 */
int __fastcall ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x18FD */
int __fastcall ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x190B */
int __fastcall ptr_void(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(char *)p;
  return -1;
}


/* Function: ptr_const @ 0x1925 */
int __fastcall ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x192E */
int __fastcall ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x193A */
int __fastcall ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x194E */
int __fastcall ptr_func_complex(int (*f)(int *, char **), int *p)
{
  char *args[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  args[0] = "test";
  args[1] = 0;
  return ((__int64 (__fastcall *)(int *, char **, _QWORD))f)(p, args, 0);
}


/* Function: ptr_cast @ 0x199F */
int __fastcall ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x19A6 */
void *__fastcall opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x19AE */
int __fastcall opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x19B6 */
void __cdecl test_pointer_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int val3; // [rsp+8h] [rbp-40h] BYREF
  int val11; // [rsp+Ch] [rbp-3Ch] BYREF
  int *ptr3; // [rsp+10h] [rbp-38h] BYREF
  int **pptr3; // [rsp+18h] [rbp-30h] BYREF
  int arr4[6]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  puts(asc_3454);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  v0 = ptr_triple(&pptr3);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  v1 = ptr_increment(arr4, 5);
  __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
  __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  v2 = ptr_func_simple(double_value, 5);
  __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", v2);
  val11 = 5;
  v3 = ptr_func_complex(complex_callback, &val11);
  __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", v3);
  __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1BEA */
int __fastcall struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1BF7 */
int __fastcall struct_array(Point3D *pts, int n)
{
  Point3D *v2; // rax
  Point3D *v3; // rsi
  int v4; // ecx

  if ( n <= 0 )
    return 0;
  v2 = pts;
  v3 = &pts[(unsigned int)(n - 1) + 1];
  v4 = 0;
  do
  {
    v4 += v2->z + v2->x + v2->y;
    ++v2;
  }
  while ( v2 != v3 );
  return v4;
}


/* Function: struct_nested @ 0x1C30 */
int __fastcall struct_nested(Rect *r)
{
  return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x1C3A */
int __fastcall struct_deep(Widget *w)
{
  return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0x1C45 */
int __fastcall struct_with_ptr(Node *node)
{
  Node *next; // rcx
  int data; // edx

  next = node->next;
  data = 0;
  if ( next )
    data = next->data;
  return data + node->data;
}


/* Function: struct_bitfields @ 0x1C5E */
int __fastcall struct_bitfields(Flags *f)
{
  return (*(_WORD *)f >> 6) + ((*(_BYTE *)f >> 3) & 7) + ((*(_BYTE *)f >> 1) & 3) + (*(_BYTE *)f & 1);
}


/* Function: union_type @ 0x1C88 */
int __fastcall union_type(UnionData *u, int type)
{
  if ( !type )
    return u->i;
  if ( type == 1 )
    return (int)u->f;
  return u->bytes[0];
}


/* Function: union_array @ 0x1CA1 */
int __fastcall union_array(UnionData *arr, int n)
{
  UnionData *v2; // rax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = arr;
  v3 = 0;
  do
  {
    v3 += v2->i;
    ++v2;
  }
  while ( v2 != &arr[n - 1 + 1] );
  return v3;
}


/* Function: enum_type @ 0x1CCE */
int __fastcall enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1CD8 */
int __fastcall enum_switch(State s)
{
  int result; // eax

  if ( s == STATE_PAUSED )
    return 50;
  if ( (unsigned int)s <= STATE_PAUSED )
    return s != STATE_IDLE ? 0x64 : 0;
  result = -99;
  if ( s == STATE_STOPPED )
    return -1;
  return result;
}


/* Function: struct_func_ptr @ 0x1D02 */
int __fastcall struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1D17 */
int __fastcall linked_list(Node *head)
{
  int result; // eax

  if ( !head )
    return 0;
  result = 0;
  do
  {
    result += head->data;
    head = head->next;
  }
  while ( head );
  return result;
}


/* Function: doubly_linked_list @ 0x1D37 */
int __fastcall doubly_linked_list(DNode *head)
{
  int result; // eax

  if ( !head )
    return 0;
  result = 0;
  do
  {
    result += head->data;
    head = head->next;
  }
  while ( head );
  return result;
}


/* Function: binary_tree_sum @ 0x1D57 */
int __fastcall binary_tree_sum(TreeNode *root)
{
  int result; // eax
  int v2; // ebp

  result = 0;
  if ( root )
  {
    v2 = root->data + binary_tree_sum(root->left);
    return v2 + binary_tree_sum(root->right);
  }
  return result;
}


/* Function: binary_tree @ 0x1D8E */
int __fastcall binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1DA0 */
int __fastcall graph_traverse(Graph *g)
{
  int numVertices; // eax
  Graph *v2; // rcx
  Edge **v3; // rsi
  int v4; // edx
  Edge *i; // rax

  numVertices = g->numVertices;
  if ( numVertices <= 0 )
    return 0;
  v2 = g;
  v3 = &g->adjList[(unsigned int)(numVertices - 1) + 1];
  v4 = 0;
  do
  {
    for ( i = v2->adjList[0]; i; i = i->next )
      v4 += i->dest;
    v2 = (Graph *)((char *)v2 + 8);
  }
  while ( v2 != (Graph *)v3 );
  return v4;
}


/* Function: test_composite_types @ 0x1DE1 */
void __cdecl test_composite_types()
{
  int v0; // eax
  int v1; // eax
  __int16 v2; // ax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  Flags f; // [rsp+8h] [rbp-160h] BYREF
  Node node2; // [rsp+10h] [rbp-158h] BYREF
  Node node1; // [rsp+20h] [rbp-148h] BYREF
  Device dev; // [rsp+30h] [rbp-138h] BYREF
  Edge e1; // [rsp+40h] [rbp-128h] BYREF
  TreeNode tree; // [rsp+50h] [rbp-118h] BYREF
  UnionData arr_u[3]; // [rsp+74h] [rbp-F4h] BYREF
  Point3D pts[2]; // [rsp+80h] [rbp-E8h] BYREF
  Node list[3]; // [rsp+A0h] [rbp-C8h] BYREF
  DNode dlist[2]; // [rsp+D0h] [rbp-98h] BYREF
  Graph g; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+158h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  puts(asc_354A);
  __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  v0 = struct_array(pts, 2);
  __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", v0);
  __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
  __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
  node2.data = 20;
  node2.next = 0;
  node1.data = 10;
  node1.next = &node2;
  v1 = struct_with_ptr(&node1);
  __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", v1);
  *(_BYTE *)&f = *(_BYTE *)&f & 0xC0 | 0x1D;
  LOBYTE(v2) = *(_BYTE *)&f & 0x3F;
  HIBYTE(v2) = 25;
  *(_WORD *)&f = v2;
  *((_DWORD *)&f + 1) &= 0xFFF00000;
  v3 = struct_bitfields(&f);
  __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v3);
  __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  arr_u[0].i = 10;
  arr_u[1].i = 20;
  arr_u[2].i = 30;
  v4 = union_array(arr_u, 3);
  __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v4);
  __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  dev.data = 10;
  dev.process = process_int;
  v5 = struct_func_ptr(&dev);
  __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v5);
  list[0].data = 10;
  list[0].next = &list[1];
  list[1].data = 20;
  list[1].next = &list[2];
  list[2].data = 30;
  list[2].next = 0;
  v6 = linked_list(list);
  __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v6);
  dlist[0].data = 10;
  dlist[0].next = &dlist[1];
  dlist[0].prev = 0;
  dlist[1].data = 20;
  dlist[1].next = 0;
  dlist[1].prev = dlist;
  v7 = doubly_linked_list(dlist);
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v7);
  tree.data = 100;
  tree.left = 0;
  tree.right = 0;
  v8 = binary_tree_sum(&tree);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v8);
  e1.dest = 1;
  e1.next = 0;
  memset(&g.adjList[1], 0, 72);
  *(_QWORD *)&g.numVertices = 2;
  g.adjList[0] = &e1;
  v9 = graph_traverse(&g);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
}


/* Function: main @ 0x221B */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: .term_proc @ 0x2258 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6020 */

/* FAILED to decompile: puts @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x6030 */

/* FAILED to decompile: __printf_chk @ 0x6038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6040 */

/* FAILED to decompile: __gmon_start__ @ 0x6050 */

/* Total functions decompiled: 68, failed: 6 */
