/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O1_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
  if ( &_gmon_start__ )
    ((void (*)(void))_gmon_start__)();
  frame_dummy();
  return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm { jmp     dword ptr [ebx+8] }
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
int __usercall sub_1080@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 32))();
}


/* Function: _start @ 0x10D0 */
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, 0, 0, a2, &v3);
  __halt();
}


/* Function: sub_10FC @ 0x10FC */
void sub_10FC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1100 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1110 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1150 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11A0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1080((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x1230 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1239 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x123D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: double_value @ 0x1241 */
int __cdecl double_value(int x)
{
  return 2 * x;
}


/* Function: process_int @ 0x124C */
int __cdecl process_int(int x)
{
  return 2 * x + 1;
}


/* Function: complex_callback @ 0x1259 */
int __cdecl complex_callback(int *p, char **args)
{
  *p += 10;
  return *args != 0;
}


/* Function: process_char @ 0x1272 */
char __cdecl process_char(char c)
{
  char result; // al

  result = c;
  if ( (unsigned __int8)(c - 65) < 0x1Au )
    return c + 32;
  return result;
}


/* Function: process_short @ 0x1287 */
__int16 __cdecl process_short(__int16 a, __int16 b)
{
  return a + b;
}


/* Function: process_long @ 0x1295 */
int __cdecl process_long(int x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x12A0 */
__int64 __cdecl process_ll(__int64 x)
{
  __int64 result; // rax

  result = (unsigned int)x * (unsigned __int64)(unsigned int)x;
  HIDWORD(result) += 2 * HIDWORD(x) * x;
  return result;
}


/* Function: process_float @ 0x12B6 */
float __cdecl process_float(float f)
{
  return 1.5 * f + 0.5;
}


/* Function: process_double @ 0x12E0 */
double __cdecl process_double(double d)
{
  return 0.5 * d + 0.1;
}


/* Function: process_ld @ 0x130A */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x1319 */
bool __cdecl process_bool(int x)
{
  bool v1; // al

  v1 = (x & 1) == 0;
  if ( x <= 0 )
    return 0;
  return v1;
}


/* Function: const_param @ 0x1336 */
int __cdecl const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x1344 */
int __cdecl volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1353 */
void test_data_types_l1()
{
  puts(asc_3008);
  __printf_chk(1, "DT-L1-01 (process_char): %c\n", 97);
  __printf_chk(1, "DT-L1-01 (process_char): %c\n", 98);
  __printf_chk(1, "DT-L1-02 (process_short): %d\n", 300);
  __printf_chk(1, "DT-L1-03 (process_int): %d\n", 11);
  __printf_chk(1, "DT-L1-04 (process_long): %ld\n", 200);
  __printf_chk(1, "DT-L1-05 (process_ll): %lld\n", 10000);
  __printf_chk(1, "DT-L1-06 (process_float): %.2f\n", 0);
  __printf_chk(1, "DT-L1-07 (process_double): %.2f\n", -858993459);
  __printf_chk(1, "DT-L1-08 (process_ld): %.2Lf\n", 0);
  __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 1);
  __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  __printf_chk(1, "DT-L1-09 (process_bool): %d\n", 0);
  __printf_chk(1, "DT-L1-10 (const_param): %d\n", 15);
  __printf_chk(1, "DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x149E */
int __cdecl array_1d_stack(int *arr, int n)
{
  int *v2; // eax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = arr;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &arr[n] );
  return v3;
}


/* Function: array_string @ 0x14CB */
int __cdecl array_string(char *str)
{
  int result; // eax

  if ( !*str )
    return 0;
  result = 0;
  do
    ++result;
  while ( str[result] );
  return result;
}


/* Function: array_2d_stack @ 0x14ED */
int __cdecl array_2d_stack(int (*arr)[10])
{
  int *v1; // eax
  int v2; // edx

  v1 = (int *)arr;
  v2 = 0;
  do
  {
    v2 += *v1;
    v1 += 11;
  }
  while ( v1 != &(*arr)[110] );
  return v2;
}


/* Function: array_3d @ 0x150E */
int __cdecl array_3d(int (*arr)[5][5])
{
  int *v1; // ecx
  int result; // eax
  int *v3; // edx

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


/* Function: array_vla @ 0x1546 */
int __cdecl array_vla(int n, int *arr)
{
  int *v2; // eax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = arr;
  v3 = 0;
  do
    v3 += *v2++;
  while ( v2 != &arr[n] );
  return v3;
}


/* Function: array_pointer @ 0x1573 */
int __cdecl array_pointer(int (*arr)[10], int n)
{
  int *v2; // eax
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
  while ( v2 != &(*arr)[10 * n] );
  return v3;
}


/* Function: pointer_array @ 0x15A3 */
int __cdecl pointer_array(int **arr, int n)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  int *v5; // edx

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
  while ( v2 > v3 );
  return v4;
}


/* Function: array_complex_index @ 0x15E7 */
int __cdecl array_complex_index(int *arr, int w, int h, int x, int y)
{
  if ( (y | x) < 0 || x >= w )
    return -1;
  if ( y >= h )
    return -1;
  return arr[x + y * w];
}


/* Function: array_oob @ 0x1624 */
int __cdecl array_oob(int *arr, int n)
{
  int *v2; // eax
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


/* Function: test_array_types @ 0x1652 */
void __cdecl test_array_types(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        char a15)
{
  int v15; // eax
  int v16; // eax
  int *v17; // esi
  int i; // ecx
  int j; // eax
  int v20; // edx
  int v21; // eax
  int *v22; // edx
  int *v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned int k; // eax
  int v28; // eax
  int m; // eax
  int a; // [esp+10h] [ebp-514h] BYREF
  int b; // [esp+14h] [ebp-510h] BYREF
  int c; // [esp+18h] [ebp-50Ch] BYREF
  int vla_arr[3]; // [esp+1Ch] [ebp-508h] BYREF
  int arr1[5]; // [esp+28h] [ebp-4FCh] BYREF
  int *ptr_arr[10]; // [esp+3Ch] [ebp-4E8h] BYREF
  int v36[20]; // [esp+64h] [ebp-4C0h]
  int arr2[5][10]; // [esp+B4h] [ebp-470h] BYREF
  int matrix[10][10]; // [esp+17Ch] [ebp-3A8h] BYREF
  int cube[5][5][5]; // [esp+30Ch] [ebp-218h] BYREF
  char str[6]; // [esp+502h] [ebp-22h] BYREF
  unsigned int v41; // [esp+508h] [ebp-1Ch]

  v41 = __readgsdword(0x14u);
  puts(asc_33BD);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  v15 = array_1d_stack(arr1, 5);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", v15);
  strcpy(str, "hello");
  v16 = array_string(str);
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v16);
  v17 = matrix[0];
  for ( i = 0; i != 10; ++i )
  {
    for ( j = 0; j != 10; ++j )
    {
      v20 = 0;
      if ( i == j )
        v20 = j;
      v17[j] = v20;
    }
    v17 += 10;
  }
  v21 = array_2d_stack(matrix);
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v21);
  v22 = cube[1][0];
  do
  {
    v23 = v22 - 25;
    do
    {
      *v23 = 1;
      v23[1] = 1;
      v23[2] = 1;
      v23[3] = 1;
      v23[4] = 1;
      v23 += 5;
    }
    while ( v22 != v23 );
    v22 += 25;
  }
  while ( v22 != (int *)&a15 );
  v24 = array_3d(cube);
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v24);
  vla_arr[0] = 10;
  vla_arr[1] = 20;
  vla_arr[2] = 30;
  v25 = array_vla(3, vla_arr);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v25);
  arr2[0][0] = 0;
  arr2[1][0] = 10;
  arr2[2][0] = 20;
  arr2[3][0] = 30;
  arr2[4][0] = 40;
  v26 = array_pointer(arr2, 5);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v26);
  a = 10;
  b = 20;
  c = 30;
  for ( k = 0; k < 7; ++k )
    ptr_arr[k + 3] = 0;
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  v28 = pointer_array(ptr_arr, 3);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v28);
  for ( m = 0; m != 20; ++m )
    v36[m] = m;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v36[17]);
}


/* Function: ptr_single @ 0x191F */
int __cdecl ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x192D */
int __cdecl ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x193D */
int __cdecl ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x194F */
int __cdecl ptr_increment(int *p, int n)
{
  int v2; // eax
  int v3; // edx

  if ( n <= 0 )
    return 0;
  v2 = 0;
  v3 = 0;
  do
    v3 += p[v2++];
  while ( n != v2 );
  return v3;
}


/* Function: ptr_offset @ 0x197F */
int __cdecl ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x198F */
int __cdecl ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x199F */
int __cdecl ptr_void(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(char *)p;
  return -1;
}


/* Function: ptr_const @ 0x19C5 */
int __cdecl ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x19D2 */
int __cdecl ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x19E2 */
int __cdecl ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x19F5 */
int __cdecl ptr_func_complex(int (*f)(int *, char **), int *p)
{
  char *args[2]; // [esp+Ch] [ebp-18h] BYREF
  unsigned int v4; // [esp+14h] [ebp-10h]

  v4 = __readgsdword(0x14u);
  args[0] = "test";
  args[1] = 0;
  return f(p, args);
}


/* Function: ptr_cast @ 0x1A4B */
int __cdecl ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x1A56 */
void *__cdecl opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x1A5F */
int __cdecl opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x1A6A */
void test_pointer_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int val3; // [esp+14h] [ebp-34h] BYREF
  int *ptr3; // [esp+18h] [ebp-30h] BYREF
  int **pptr3; // [esp+1Ch] [ebp-2Ch] BYREF
  int val11; // [esp+20h] [ebp-28h] BYREF
  int arr4[5]; // [esp+24h] [ebp-24h] BYREF
  unsigned int v9; // [esp+38h] [ebp-10h]

  v9 = __readgsdword(0x14u);
  puts(asc_3430);
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


/* Function: struct_simple @ 0x1C3D */
int __cdecl struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1C4E */
int __cdecl struct_array(Point3D *pts, int n)
{
  Point3D *v2; // eax
  int v3; // ecx

  if ( n <= 0 )
    return 0;
  v2 = pts;
  v3 = 0;
  do
  {
    v3 += v2->z + v2->x + v2->y;
    ++v2;
  }
  while ( v2 != &pts[n] );
  return v3;
}


/* Function: struct_nested @ 0x1C88 */
int __cdecl struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1C96 */
int __cdecl struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1CA5 */
int __cdecl struct_with_ptr(Node *node)
{
  Node *next; // ecx
  int data; // edx

  next = node->next;
  data = 0;
  if ( next )
    data = next->data;
  return data + node->data;
}


/* Function: struct_bitfields @ 0x1CC0 */
int __cdecl struct_bitfields(Flags *f)
{
  return (*(_WORD *)f >> 6) + ((*(_BYTE *)f >> 3) & 7) + ((*(_BYTE *)f >> 1) & 3) + (*(_BYTE *)f & 1);
}


/* Function: union_type @ 0x1CF0 */
int __cdecl union_type(UnionData *u, int type)
{
  if ( !type )
    return u->i;
  if ( type == 1 )
    return (int)u->f;
  return u->bytes[0];
}


/* Function: union_array @ 0x1D3E */
int __cdecl union_array(UnionData *arr, int n)
{
  UnionData *v2; // eax
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
  while ( v2 != &arr[n] );
  return v3;
}


/* Function: enum_type @ 0x1D6B */
int __cdecl enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1D79 */
int __cdecl enum_switch(State s)
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


/* Function: struct_func_ptr @ 0x1DAA */
int __cdecl struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1DBE */
int __cdecl linked_list(Node *head)
{
  Node *v1; // eax
  int v2; // edx

  v1 = head;
  if ( !head )
    return 0;
  v2 = 0;
  do
  {
    v2 += v1->data;
    v1 = v1->next;
  }
  while ( v1 );
  return v2;
}


/* Function: doubly_linked_list @ 0x1DE2 */
int __cdecl doubly_linked_list(DNode *head)
{
  DNode *v1; // eax
  int v2; // edx

  v1 = head;
  if ( !head )
    return 0;
  v2 = 0;
  do
  {
    v2 += v1->data;
    v1 = v1->next;
  }
  while ( v1 );
  return v2;
}


/* Function: binary_tree_sum @ 0x1E06 */
int __cdecl binary_tree_sum(TreeNode *root)
{
  int result; // eax
  int v2; // ebx

  result = 0;
  if ( root )
  {
    v2 = root->data + binary_tree_sum(root->left);
    return v2 + binary_tree_sum(root->right);
  }
  return result;
}


/* Function: binary_tree @ 0x1E41 */
int __cdecl binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1E55 */
int __cdecl graph_traverse(Graph *g)
{
  int numVertices; // edx
  Graph *v2; // ecx
  Graph *v3; // ebx
  int v4; // edx
  Edge *i; // eax

  numVertices = g->numVertices;
  if ( numVertices <= 0 )
    return 0;
  v2 = g;
  v3 = (Graph *)((char *)g + 4 * numVertices);
  v4 = 0;
  do
  {
    for ( i = v2->adjList[0]; i; i = i->next )
      v4 += i->dest;
    v2 = (Graph *)((char *)v2 + 4);
  }
  while ( v2 != v3 );
  return v4;
}


/* Function: test_composite_types @ 0x1E90 */
void test_composite_types()
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
  Node node2; // [esp+18h] [ebp-C4h] BYREF
  Node node1; // [esp+20h] [ebp-BCh] BYREF
  Flags f; // [esp+28h] [ebp-B4h] BYREF
  Device dev; // [esp+30h] [ebp-ACh] BYREF
  Edge e1; // [esp+38h] [ebp-A4h] BYREF
  TreeNode tree; // [esp+40h] [ebp-9Ch] BYREF
  UnionData arr_u[3]; // [esp+4Ch] [ebp-90h] BYREF
  Point3D pts[2]; // [esp+58h] [ebp-84h] BYREF
  Node list[3]; // [esp+70h] [ebp-6Ch] BYREF
  DNode dlist[2]; // [esp+88h] [ebp-54h] BYREF
  Graph g; // [esp+A0h] [ebp-3Ch] BYREF
  unsigned int v21; // [esp+CCh] [ebp-10h]

  v21 = __readgsdword(0x14u);
  puts(asc_3526);
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
  memset(&g.adjList[1], 0, 0x24u);
  g.adjList[0] = &e1;
  g.numVertices = 2;
  v9 = graph_traverse(&g);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v9);
}


/* FAILED to decompile: main @ 0x21E6 */

/* Function: __x86.get_pc_thunk.ax @ 0x220B */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2210 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2230 */
void (*_do_global_ctors_aux())(void)
{
  void (*result)(void); // eax
  int *v1; // ebx

  result = (void (*)(void))_CTOR_LIST__;
  if ( _CTOR_LIST__ != -1 )
  {
    v1 = &_CTOR_LIST__;
    do
    {
      result();
      result = (void (*)(void))*--v1;
    }
    while ( result != (void (*)(void))-1 );
  }
  return result;
}


/* Function: .term_proc @ 0x227C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: __stack_chk_fail @ 0x6018 */

/* FAILED to decompile: __cxa_finalize @ 0x601C */

/* FAILED to decompile: puts @ 0x6020 */

/* FAILED to decompile: __printf_chk @ 0x6024 */

/* Total functions decompiled: 76, failed: 6 */
