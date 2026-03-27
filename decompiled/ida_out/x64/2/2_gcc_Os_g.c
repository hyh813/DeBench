/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_gcc_Os_g
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


/* Function: main @ 0x10A0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: _start @ 0x10D0 */
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


/* Function: deregister_tm_clones @ 0x1100 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1130 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1170 */
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


/* Function: frame_dummy @ 0x11B0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x11B9 */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: process_int @ 0x11C1 */
int __fastcall process_int(int x)
{
  return 2 * x + 1;
}


/* Function: complex_callback @ 0x11CA */
int __fastcall complex_callback(int *p, char **args)
{
  *p += 10;
  return *args != 0;
}


/* Function: process_char @ 0x11DB */
char __fastcall process_char(char c)
{
  char result; // al

  result = c;
  if ( (unsigned __int8)(c - 65) <= 0x19u )
    return c + 32;
  return result;
}


/* Function: process_short @ 0x11ED */
__int16 __fastcall process_short(__int16 a, __int16 b)
{
  return b + a;
}


/* Function: process_long @ 0x11F5 */
__int64 __fastcall process_long(__int64 x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x11FE */
__int64 __fastcall process_ll(__int64 x)
{
  return x * x;
}


/* Function: process_float @ 0x120A */
float __fastcall process_float(float a1, float f)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x121F */
double __fastcall process_double(double a1, double d)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1234 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x1243 */
bool __fastcall process_bool(int x)
{
  bool v1; // al

  v1 = 0;
  if ( x > 0 )
    return (x & 1) == 0;
  return v1;
}


/* Function: const_param @ 0x1258 */
int __fastcall const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x1262 */
int __fastcall volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x126D */
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


/* Function: array_1d_stack @ 0x13EC */
int __fastcall array_1d_stack(int *arr, int n)
{
  __int64 v2; // rax
  int v3; // r8d

  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
    v3 += arr[v2++];
  return v3;
}


/* Function: array_string @ 0x1406 */
int __fastcall array_string(char *str)
{
  __int64 v1; // rax
  int v2; // r8d

  v1 = 0;
  do
    v2 = v1++;
  while ( str[v1 - 1] );
  return v2;
}


/* Function: array_2d_stack @ 0x141D */
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


/* Function: array_3d @ 0x1436 */
int __fastcall array_3d(int (*arr)[5][5])
{
  int *v1; // rcx
  int result; // eax
  int *v3; // rdx
  int v4; // eax

  v1 = (*arr)[25];
  result = 0;
  do
  {
    v3 = (*arr)[5];
    do
    {
      v4 = (*arr)[0][0] + result;
      arr = (int (*)[5][5])((char *)arr + 20);
      result = (*arr)[-1][4] + (*arr)[-1][3] + (*arr)[-1][2] + (*arr)[-1][1] + v4;
    }
    while ( arr != (int (*)[5][5])v3 );
  }
  while ( v1 != (int *)arr );
  return result;
}


/* Function: array_vla @ 0x1464 */
int __fastcall array_vla(int n, int *arr)
{
  __int64 v2; // rax
  int v3; // r8d

  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
    v3 += arr[v2++];
  return v3;
}


/* Function: array_pointer @ 0x147E */
int __fastcall array_pointer(int (*arr)[10], int n)
{
  __int64 v2; // rax
  int v3; // r8d
  __int64 v4; // rdx

  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
  {
    v4 = 10 * v2++;
    v3 += (*arr)[v4];
  }
  return v3;
}


/* Function: pointer_array @ 0x149C */
int __fastcall pointer_array(int **arr, int n)
{
  __int64 v2; // rax
  int v3; // r8d
  int *v4; // rdx

  if ( n > 10 )
    n = 10;
  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
  {
    v4 = arr[v2];
    if ( v4 )
      v3 += *v4;
    ++v2;
  }
  return v3;
}


/* Function: array_complex_index @ 0x14C8 */
int __fastcall array_complex_index(int *arr, int w, int h, int x, int y)
{
  int result; // eax

  result = -1;
  if ( (y | x) >= 0 && x < w && y < h )
    return arr[x + y * w];
  return result;
}


/* Function: array_oob @ 0x14EF */
int __fastcall array_oob(int *arr, int n)
{
  __int64 v2; // rax
  int v3; // r8d

  v2 = 0;
  v3 = 0;
  while ( n >= (int)v2 )
    v3 += arr[v2++];
  return v3;
}


/* Function: test_array_types @ 0x1509 */
void __cdecl test_array_types()
{
  int v0; // eax
  int v1; // eax
  int *v2; // rcx
  int i; // edx
  __int64 j; // rax
  int v5; // esi
  int v6; // eax
  int *v7; // rdx
  int *v8; // rax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int **v13; // rdi
  __int64 k; // rcx
  int v15; // eax
  __int64 m; // rax
  int a; // [rsp+4h] [rbp-534h] BYREF
  int b; // [rsp+8h] [rbp-530h] BYREF
  int c; // [rsp+Ch] [rbp-52Ch] BYREF
  int vla_arr[3]; // [rsp+10h] [rbp-528h] BYREF
  int arr1[5]; // [rsp+1Ch] [rbp-51Ch] BYREF
  int *ptr_arr[10]; // [rsp+30h] [rbp-508h] BYREF
  int v23[20]; // [rsp+84h] [rbp-4B4h]
  int arr2[5][10]; // [rsp+D4h] [rbp-464h] BYREF
  int matrix[10][10]; // [rsp+19Ch] [rbp-39Ch] BYREF
  int cube[5][5][5]; // [rsp+32Ch] [rbp-20Ch] BYREF
  char v27; // [rsp+520h] [rbp-18h] BYREF
  char str[6]; // [rsp+522h] [rbp-16h] BYREF
  unsigned __int64 v29; // [rsp+528h] [rbp-10h]

  v29 = __readfsqword(0x28u);
  puts(asc_216F);
  *(_QWORD *)arr1 = 0x200000001LL;
  *(_QWORD *)&arr1[2] = 0x400000003LL;
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
      v5 = j;
      if ( i != (_DWORD)j )
        v5 = 0;
      v2[j] = v5;
    }
    v2 += 10;
  }
  v6 = array_2d_stack(matrix);
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v6);
  v7 = cube[0][0];
  do
  {
    v8 = v7;
    v9 = 5;
    do
    {
      *v8 = 1;
      v8 += 5;
      *(v8 - 4) = 1;
      *(v8 - 3) = 1;
      *(v8 - 2) = 1;
      *(v8 - 1) = 1;
      --v9;
    }
    while ( v9 );
    v7 += 25;
  }
  while ( &v27 != (char *)v7 );
  v10 = array_3d(cube);
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v10);
  *(_QWORD *)vla_arr = 0x140000000ALL;
  vla_arr[2] = 30;
  v11 = array_vla(3, vla_arr);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", v11);
  arr2[0][0] = 0;
  arr2[1][0] = 10;
  arr2[2][0] = 20;
  arr2[3][0] = 30;
  arr2[4][0] = 40;
  v12 = array_pointer(arr2, 5);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", v12);
  v13 = &ptr_arr[3];
  for ( k = 14; k; --k )
  {
    *(_DWORD *)v13 = v9;
    v13 = (int **)((char *)v13 + 4);
  }
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  a = 10;
  b = 20;
  c = 30;
  ptr_arr[2] = &c;
  v15 = pointer_array(ptr_arr, 3);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", v15);
  for ( m = 0; m != 20; ++m )
    v23[m] = m;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v23[17]);
}


/* Function: ptr_single @ 0x17B6 */
__int64 __fastcall ptr_single(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x17C0 */
int __fastcall ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x17CD */
int __fastcall ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x17DC */
int __fastcall ptr_increment(int *p, int n)
{
  __int64 v2; // rax
  int v3; // r8d

  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
    v3 += p[v2++];
  return v3;
}


/* Function: ptr_offset @ 0x17F6 */
int __fastcall ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x1801 */
int __fastcall ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x180F */
int __fastcall ptr_void(void *p, int type)
{
  int result; // eax

  if ( !type )
    return *(_DWORD *)p;
  result = -1;
  if ( type == 1 )
    return *(char *)p;
  return result;
}


/* Function: ptr_const @ 0x1825 */
int __fastcall ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x182E */
int __fastcall ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x183A */
int __fastcall ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x1845 */
int __fastcall ptr_func_complex(int (*f)(int *, char **), int *p)
{
  char *args[2]; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  args[1] = 0;
  args[0] = "test";
  return f(p, args);
}


/* Function: ptr_cast @ 0x1898 */
int __fastcall ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x189F */
void *__fastcall opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x18A7 */
int __fastcall opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x18AF */
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
  int arr4[5]; // [rsp+24h] [rbp-24h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  puts(asc_2285);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  v0 = ptr_triple(&pptr3);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", v0);
  *(_QWORD *)arr4 = 0x200000001LL;
  *(_QWORD *)&arr4[2] = 0x400000003LL;
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


/* Function: struct_simple @ 0x1AB7 */
int __fastcall struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1AC4 */
int __fastcall struct_array(Point3D *pts, int n)
{
  int v2; // edx
  int v3; // r8d
  int v4; // eax

  v2 = 0;
  v3 = 0;
  while ( v2 < n )
  {
    v4 = pts->x + pts->y;
    ++v2;
    ++pts;
    v3 += pts[-1].z + v4;
  }
  return v3;
}


/* Function: struct_nested @ 0x1AE8 */
int __fastcall struct_nested(Rect *r)
{
  return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x1AF2 */
int __fastcall struct_deep(Widget *w)
{
  return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0x1AFD */
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


/* Function: struct_bitfields @ 0x1B13 */
int __fastcall struct_bitfields(Flags *f)
{
  return ((unsigned __int16)*(_DWORD *)f >> 6) + ((*(_BYTE *)f >> 3) & 7) + ((*(_BYTE *)f >> 1) & 3) + (*(_BYTE *)f & 1);
}


/* Function: union_type @ 0x1B3B */
int __fastcall union_type(UnionData *u, int type)
{
  if ( !type )
    return u->i;
  if ( type == 1 )
    return (int)u->f;
  return u->bytes[0];
}


/* Function: union_array @ 0x1B53 */
int __fastcall union_array(UnionData *arr, int n)
{
  __int64 v2; // rax
  int v3; // r8d

  v2 = 0;
  v3 = 0;
  while ( n > (int)v2 )
    v3 += arr[v2++].i;
  return v3;
}


/* Function: enum_type @ 0x1B6D */
int __fastcall enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1B75 */
int __fastcall enum_switch(State s)
{
  int result; // eax

  result = -99;
  if ( (unsigned int)s <= STATE_STOPPED )
    return CSWTCH_61[s];
  return result;
}


/* Function: struct_func_ptr @ 0x1B91 */
int __fastcall struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1B9D */
int __fastcall linked_list(Node *head)
{
  int result; // eax

  result = 0;
  while ( head )
  {
    result += head->data;
    head = head->next;
  }
  return result;
}


/* Function: doubly_linked_list @ 0x1BB1 */
int __fastcall doubly_linked_list(DNode *head)
{
  int result; // eax

  result = 0;
  while ( head )
  {
    result += head->data;
    head = head->next;
  }
  return result;
}


/* Function: binary_tree_sum @ 0x1BC5 */
int __fastcall binary_tree_sum(TreeNode *root)
{
  int v1; // r12d
  int v3; // eax

  v1 = 0;
  while ( root )
  {
    v3 = root->data + binary_tree_sum(root->left);
    root = root->right;
    v1 += v3;
  }
  return v1;
}


/* Function: binary_tree @ 0x1BF4 */
int __fastcall binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1BFA */
int __fastcall graph_traverse(Graph *g)
{
  __int64 v1; // rax
  int v2; // r8d
  Edge *i; // rdx

  v1 = 0;
  v2 = 0;
  while ( g->numVertices > (int)v1 )
  {
    for ( i = g->adjList[v1]; i; i = i->next )
      v2 += i->dest;
    ++v1;
  }
  return v2;
}


/* Function: test_composite_types @ 0x1C25 */
void __cdecl test_composite_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  Edge **v8; // rdi
  __int64 i; // rcx
  int v10; // eax
  Flags f; // [rsp+8h] [rbp-150h] BYREF
  Node node2; // [rsp+10h] [rbp-148h] BYREF
  Node node1; // [rsp+20h] [rbp-138h] BYREF
  Device dev; // [rsp+30h] [rbp-128h] BYREF
  Edge e1; // [rsp+40h] [rbp-118h] BYREF
  TreeNode tree; // [rsp+50h] [rbp-108h] BYREF
  UnionData arr_u[3]; // [rsp+6Ch] [rbp-ECh] BYREF
  Point3D pts[2]; // [rsp+78h] [rbp-E0h] BYREF
  Node list[3]; // [rsp+90h] [rbp-C8h] BYREF
  DNode dlist[2]; // [rsp+C0h] [rbp-98h] BYREF
  Graph g; // [rsp+F0h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+148h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  puts(asc_241E);
  __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
  *(_QWORD *)&pts[0].x = 0x100000001LL;
  *(_QWORD *)&pts[0].z = 0x200000001LL;
  *(_QWORD *)&pts[1].y = 0x200000002LL;
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
  f = (Flags)(*(_QWORD *)&f & 0xFFF00000FFFF0000LL | 0x191D);
  v2 = struct_bitfields(&f);
  __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", v2);
  __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  *(_QWORD *)&arr_u[0].i = 0x140000000ALL;
  arr_u[2].i = 30;
  v3 = union_array(arr_u, 3);
  __printf_chk(1, "CMP-L2-08 (union_array): %d\n", v3);
  __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  dev.data = 10;
  dev.process = process_int;
  v4 = struct_func_ptr(&dev);
  __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", v4);
  list[0].data = 10;
  list[0].next = &list[1];
  list[1].data = 20;
  list[1].next = &list[2];
  list[2].data = 30;
  list[2].next = 0;
  v5 = linked_list(list);
  __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v5);
  dlist[0].data = 10;
  dlist[1].prev = dlist;
  dlist[0].next = &dlist[1];
  dlist[0].prev = 0;
  dlist[1].data = 20;
  dlist[1].next = 0;
  v6 = doubly_linked_list(dlist);
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v6);
  tree.data = 100;
  tree.left = 0;
  tree.right = 0;
  v7 = binary_tree_sum(&tree);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v7);
  v8 = &g.adjList[1];
  for ( i = 20; i; --i )
  {
    *(_DWORD *)v8 = 0;
    v8 = (Edge **)((char *)v8 + 4);
  }
  e1.dest = 1;
  e1.next = 0;
  g.adjList[0] = &e1;
  g.numVertices = 2;
  v10 = graph_traverse(&g);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", v10);
}


/* Function: .term_proc @ 0x1FA4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4020 */

/* FAILED to decompile: puts @ 0x4028 */

/* FAILED to decompile: __stack_chk_fail @ 0x4030 */

/* FAILED to decompile: __printf_chk @ 0x4038 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4040 */

/* FAILED to decompile: __gmon_start__ @ 0x4050 */

/* Total functions decompiled: 68, failed: 6 */
