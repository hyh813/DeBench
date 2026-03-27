/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_clang_O1_g
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


/* Function: sub_1070 @ 0x1070 */
int __usercall sub_1070@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 20))();
}


/* Function: _start @ 0x1080 */
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


/* Function: sub_10AC @ 0x10AC */
void sub_10AC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x10B0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x10C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1100 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1150 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1070((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x11E0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x11E9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x11ED */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: process_char @ 0x1200 */
char __cdecl process_char(char c)
{
  char result; // al

  result = c + 32;
  if ( (unsigned __int8)(c - 65) >= 0x1Au )
    return c;
  return result;
}


/* Function: process_short @ 0x1220 */
short __cdecl process_short(short a, short b)
{
  return a + b;
}


/* Function: process_int @ 0x1230 */
int __cdecl process_int(int x)
{
  return 2 * x + 1;
}


/* Function: process_long @ 0x1240 */
long __cdecl process_long(long x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x1250 */
__int64 __cdecl process_ll(__int64 x)
{
  return x * x;
}


/* Function: process_float @ 0x1270 */
float __cdecl process_float(float f)
{
  return f * 1.5 + 0.5;
}


/* Function: process_double @ 0x1290 */
double __cdecl process_double(double d)
{
  return d * 0.5 + 0.1;
}


/* Function: process_ld @ 0x12B0 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x12C0 */
bool __cdecl process_bool(int x)
{
  return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x12E0 */
int __cdecl const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x12F0 */
int __cdecl volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1300 */
void test_data_types_l1()
{
  long double v0; // [esp+4h] [ebp-18h]

  puts(asc_35BF);
  printf("DT-L1-01 (process_char): %c\n", 97);
  printf("DT-L1-01 (process_char): %c\n", 98);
  printf("DT-L1-02 (process_short): %d\n", 300);
  printf("DT-L1-03 (process_int): %d\n", 11);
  printf("DT-L1-04 (process_long): %ld\n", 200);
  printf("DT-L1-05 (process_ll): %lld\n", 10000, 0);
  printf("DT-L1-06 (process_float): %.2f\n", 0, 1074528256);
  printf("DT-L1-07 (process_double): %.2f\n", -858993459, 1073794252);
  v0 = 10.0;
  printf("DT-L1-08 (process_ld): %.2Lf\n", LODWORD(v0));
  printf("DT-L1-09 (process_bool): %d\n", 1);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-10 (const_param): %d\n", 15);
  printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x1430 */
int __cdecl array_1d_stack(int *arr, int n)
{
  int v2; // esi
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += arr[v2++];
  while ( n != v2 );
  return result;
}


/* Function: array_string @ 0x1460 */
int __cdecl array_string(char *str)
{
  int result; // eax

  result = -1;
  while ( str[++result] != 0 )
    ;
  return result;
}


/* Function: array_2d_stack @ 0x1480 */
int __cdecl array_2d_stack(int (*arr)[10])
{
  int v1; // ecx
  int result; // eax

  v1 = 0;
  result = 0;
  do
  {
    result += (*arr)[v1];
    v1 += 11;
  }
  while ( v1 != 110 );
  return result;
}


/* Function: array_3d @ 0x14A0 */
int __cdecl array_3d(int (*arr)[5][5])
{
  int v1; // ecx
  int result; // eax
  int *v4; // esi
  int i; // edi
  int j; // ebx

  v1 = 0;
  result = 0;
  do
  {
    v4 = (int *)arr;
    for ( i = 0; i != 5; ++i )
    {
      for ( j = 0; j != 5; ++j )
        result += v4[j];
      v4 += 5;
    }
    ++v1;
    ++arr;
  }
  while ( v1 != 5 );
  return result;
}


/* Function: array_vla @ 0x1500 */
int __cdecl array_vla(int n, int *arr)
{
  int v2; // esi
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += arr[v2++];
  while ( n != v2 );
  return result;
}


/* Function: array_pointer @ 0x1530 */
int __cdecl array_pointer(int (*arr)[10], int n)
{
  int v2; // ecx
  int result; // eax

  v2 = n;
  if ( n <= 0 )
    return 0;
  result = 0;
  do
  {
    result += (*arr++)[0];
    --v2;
  }
  while ( v2 );
  return result;
}


/* Function: pointer_array @ 0x1550 */
int __cdecl pointer_array(int **arr, int n)
{
  int v2; // esi
  int v3; // edx
  int v4; // esi
  int result; // eax
  int *v6; // edi

  if ( n <= 0 )
    return 0;
  v2 = 10;
  if ( n < 10 )
    v2 = n;
  v3 = 1;
  if ( v2 >= 2 )
    v3 = v2;
  v4 = 0;
  result = 0;
  do
  {
    v6 = arr[v4];
    if ( v6 )
      result += *v6;
    ++v4;
  }
  while ( v3 != v4 );
  return result;
}


/* Function: array_complex_index @ 0x15A0 */
int __cdecl array_complex_index(int *arr, int w, int h, int x, int y)
{
  int result; // eax

  result = -1;
  if ( x >= 0 && y < h && x < w && y >= 0 )
    return arr[x + w * y];
  return result;
}


/* Function: array_oob @ 0x15E0 */
int __cdecl array_oob(int *arr, int n)
{
  int v2; // esi
  int result; // eax

  if ( n < 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += arr[v2++];
  while ( n + 1 != v2 );
  return result;
}


/* Function: test_array_types @ 0x1610 */
void test_array_types()
{
  int v0; // eax
  _DWORD *v1; // ecx
  int i; // edx
  int v3; // esi
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  _BYTE *v7; // ecx
  _BYTE *v8; // edx
  int j; // esi
  int k; // edi
  int v11; // eax
  _BYTE *v12; // edx
  int v13; // ecx
  _BYTE *v14; // esi
  int m; // edi
  int n; // ebp
  int ii; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // edx
  int jj; // eax
  int v24; // [esp+Ch] [ebp-4E0h] BYREF
  int v25; // [esp+10h] [ebp-4DCh] BYREF
  int v26; // [esp+14h] [ebp-4D8h] BYREF
  _DWORD v27[80]; // [esp+18h] [ebp-4D4h] BYREF
  _DWORD v28[100]; // [esp+158h] [ebp-394h] BYREF
  _BYTE v29[516]; // [esp+2E8h] [ebp-204h] BYREF

  puts(asc_35E0);
  printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
  printf("ARR-L1-02 (array_string): %d\n", 5);
  v0 = 0;
  v1 = v28;
  do
  {
    for ( i = 0; i != 10; ++i )
    {
      v3 = 0;
      if ( v0 == i )
        v3 = v0;
      v1[i] = v3;
    }
    ++v0;
    v1 += 10;
  }
  while ( v0 != 10 );
  v4 = 0;
  v5 = 0;
  do
  {
    v5 += v28[v4];
    v4 += 11;
  }
  while ( v4 != 110 );
  printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
  v6 = 0;
  v7 = v29;
  do
  {
    v8 = v7;
    for ( j = 0; j != 5; ++j )
    {
      for ( k = 0; k != 5; ++k )
        *(_DWORD *)&v8[4 * k] = 1;
      v8 += 20;
    }
    ++v6;
    v7 += 100;
  }
  while ( v6 != 5 );
  v11 = 0;
  v12 = v29;
  v13 = 0;
  do
  {
    v14 = v12;
    for ( m = 0; m != 5; ++m )
    {
      for ( n = 0; n != 5; ++n )
        v13 += *(_DWORD *)&v14[4 * n];
      v14 += 20;
    }
    ++v11;
    v12 += 100;
  }
  while ( v11 != 5 );
  printf("ARR-L1-04 (array_3d): %d\n", v13);
  printf("ARR-L2-01 (array_vla): %d\n", 60);
  for ( ii = 0; ii != 50; ii += 10 )
    v27[ii + 30] = ii;
  v18 = 0;
  v19 = 0;
  do
  {
    v19 += v27[v18 + 30];
    v18 += 10;
  }
  while ( v18 != 50 );
  printf("ARR-L2-02 (array_pointer): %d\n", v19);
  v26 = 10;
  v25 = 20;
  v24 = 30;
  v27[0] = &v26;
  v27[1] = &v25;
  v27[2] = &v24;
  memset(&v27[3], 0, 28);
  v20 = 0;
  v21 = 0;
  do
  {
    v22 = (_DWORD *)v27[v20];
    if ( v22 )
      v21 += *v22;
    ++v20;
  }
  while ( v20 != 3 );
  printf("ARR-L2-03 (pointer_array): %d\n", v21);
  for ( jj = 0; jj != 20; ++jj )
    v27[jj + 10] = jj;
  printf("ARR-L2-04 (array_complex_index): %d\n", v27[27]);
}


/* Function: ptr_single @ 0x18C0 */
int __cdecl ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x18D0 */
int __cdecl ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x18E0 */
int __cdecl ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x18F0 */
int __cdecl ptr_increment(int *p, int n)
{
  int v2; // esi
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += p[v2++];
  while ( n != v2 );
  return result;
}


/* Function: ptr_offset @ 0x1920 */
int __cdecl ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x1930 */
int __cdecl ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x1940 */
int __cdecl ptr_void(void *p, int type)
{
  int result; // eax

  if ( type == 1 )
    return *(char *)p;
  result = -1;
  if ( !type )
    return *(_DWORD *)p;
  return result;
}


/* Function: ptr_const @ 0x1960 */
int __cdecl ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1970 */
int __cdecl ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x1980 */
int __cdecl ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x19A0 */
int __cdecl ptr_func_complex(int (*f)(int *, char **), int *p)
{
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v3[1] = &dword_0;
  v3[0] = "test";
  return f(p, (char **)v3);
}


/* Function: ptr_cast @ 0x19E0 */
int __cdecl ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x19F0 */
void *__cdecl opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x1A00 */
int __cdecl opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x1A10 */
void test_pointer_types()
{
  int v0; // ecx
  int v1; // eax
  _DWORD v2[7]; // [esp+10h] [ebp-1Ch]

  puts(asc_35FB);
  printf("PTR-L2-01 (ptr_single): %d\n", 15);
  printf("PTR-L2-02 (ptr_double): %d\n", 15);
  printf("PTR-L2-03 (ptr_triple): %d\n", 6);
  v2[4] = 5;
  v2[3] = 4;
  v2[2] = 3;
  v2[1] = 2;
  v2[0] = 1;
  v0 = 0;
  v1 = 0;
  do
    v1 += v2[v0++];
  while ( v0 != 5 );
  printf("PTR-L2-04 (ptr_increment): %d\n", v1);
  printf("PTR-L2-05 (ptr_offset): %d\n", 30);
  printf("PTR-L2-06 (ptr_diff): %d\n", 4);
  printf("PTR-L2-07 (ptr_void): %d\n", 42);
  printf("PTR-L2-07 (ptr_void): %d\n", 65);
  printf("PTR-L2-08 (ptr_const): %d\n", 20);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  printf("PTR-L2-10 (ptr_func_simple): %d\n", 10);
  printf("PTR-L2-11 (ptr_func_complex): %d\n", 1);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  printf("PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1BB0 */
int __cdecl struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1BC0 */
int __cdecl struct_array(Point3D *pts, int n)
{
  int v2; // ecx
  int *p_z; // edx
  int result; // eax

  v2 = n;
  if ( n <= 0 )
    return 0;
  p_z = &pts->z;
  result = 0;
  do
  {
    result += *p_z + *(p_z - 1) + *(p_z - 2);
    p_z += 3;
    --v2;
  }
  while ( v2 );
  return result;
}


/* Function: struct_nested @ 0x1C00 */
int __cdecl struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1C10 */
int __cdecl struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1C20 */
int __cdecl struct_with_ptr(Node *node)
{
  Node *next; // eax

  next = node->next;
  if ( next )
    return node->data + next->data;
  else
    return node->data;
}


/* Function: struct_bitfields @ 0x1C40 */
int __cdecl struct_bitfields(Flags *f)
{
  return ((*(_WORD *)f >> 3) & 7) + ((*(_WORD *)f >> 1) & 3) + (*(_WORD *)f & 1) + (*(_WORD *)f >> 6);
}


/* Function: union_type @ 0x1C70 */
int __cdecl union_type(UnionData *u, int type)
{
  if ( type == 1 )
    return (int)u->f;
  if ( type )
    return u->bytes[0];
  return u->i;
}


/* Function: union_array @ 0x1CC0 */
int __cdecl union_array(UnionData *arr, int n)
{
  int v2; // esi
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += arr[v2++].i;
  while ( n != v2 );
  return result;
}


/* Function: enum_type @ 0x1CF0 */
int __cdecl enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1D00 */
int __cdecl enum_switch(State s)
{
  int result; // eax

  result = -99;
  if ( (unsigned int)s <= STATE_STOPPED )
    return dword_3654[s];
  return result;
}


/* Function: struct_func_ptr @ 0x1D30 */
int __cdecl struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1D60 */
int __cdecl linked_list(Node *head)
{
  Node *v1; // ecx
  int result; // eax

  v1 = head;
  for ( result = 0; v1; v1 = v1->next )
    result += v1->data;
  return result;
}


/* Function: doubly_linked_list @ 0x1D80 */
int __cdecl doubly_linked_list(DNode *head)
{
  DNode *v1; // ecx
  int result; // eax

  v1 = head;
  for ( result = 0; v1; v1 = v1->next )
    result += v1->data;
  return result;
}


/* Function: binary_tree_sum @ 0x1DA0 */
int __cdecl binary_tree_sum(TreeNode *root)
{
  int data; // ebp
  int v2; // esi

  if ( !root )
    return 0;
  data = root->data;
  v2 = data + binary_tree_sum(root->left);
  return v2 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x1DF0 */
int __cdecl binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1E20 */
int __cdecl graph_traverse(Graph *g)
{
  int numVertices; // edx
  int v2; // esi
  int result; // eax
  Edge *i; // edi

  numVertices = g->numVertices;
  if ( numVertices <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
  {
    for ( i = g->adjList[v2]; i; i = i->next )
      result += i->dest;
    ++v2;
  }
  while ( v2 != numVertices );
  return result;
}


/* Function: test_composite_types @ 0x1E60 */
void test_composite_types()
{
  _DWORD *v0; // eax
  int v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  _DWORD *i; // edx
  _DWORD v8[2]; // [esp+10h] [ebp-7Ch] BYREF
  _DWORD v9[2]; // [esp+18h] [ebp-74h] BYREF
  _DWORD v10[2]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v11[2]; // [esp+28h] [ebp-64h] BYREF
  TreeNode root; // [esp+30h] [ebp-5Ch] BYREF
  _DWORD v13[3]; // [esp+40h] [ebp-4Ch] BYREF
  _DWORD v14[3]; // [esp+4Ch] [ebp-40h] BYREF
  _DWORD v15[13]; // [esp+58h] [ebp-34h] BYREF

  puts(asc_3616);
  printf("CMP-L2-01 (struct_simple): %d\n", 6);
  printf("CMP-L2-02 (struct_array): %d\n", 9);
  printf("CMP-L2-03 (struct_nested): %d\n", 105);
  printf("CMP-L2-04 (struct_deep): %d\n", 258);
  printf("CMP-L2-05 (struct_with_ptr): %d\n", 30);
  printf("CMP-L2-06 (struct_bitfields): %d\n", 106);
  printf("CMP-L2-07 (union_type): %d\n", 305419896);
  printf("CMP-L2-08 (union_array): %d\n", 60);
  printf("CMP-L2-09 (enum_type): %d\n", 10);
  printf("CMP-L2-10 (enum_switch): %d\n", 50);
  printf("CMP-L2-11 (struct_func_ptr): %d\n", 21);
  v0 = v9;
  v9[0] = 10;
  v9[1] = v10;
  v10[0] = 20;
  v10[1] = v11;
  v11[0] = 30;
  v11[1] = 0;
  v1 = 0;
  do
  {
    v1 += *v0;
    v0 = (_DWORD *)v0[1];
  }
  while ( v0 );
  printf("CMP-L2-12 (linked_list): %d\n", v1);
  v2 = v13;
  v13[0] = 10;
  v13[1] = v14;
  v13[2] = 0;
  v14[0] = 20;
  v14[1] = 0;
  v14[2] = v13;
  v3 = 0;
  do
  {
    v3 += *v2;
    v2 = (_DWORD *)v2[1];
  }
  while ( v2 );
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v3);
  root.right = 0;
  root.left = 0;
  root.data = (int)&dword_64;
  v4 = binary_tree_sum(&root);
  printf("CMP-L2-14 (binary_tree): %d\n", v4);
  v8[1] = 0;
  v8[0] = 1;
  memset(&v15[1], 0, 36);
  v15[0] = v8;
  v15[10] = 2;
  v5 = 0;
  v6 = 0;
  do
  {
    for ( i = (_DWORD *)v15[v5]; i; i = (_DWORD *)i[1] )
      v6 += *i;
    ++v5;
  }
  while ( v5 != 2 );
  printf("CMP-L2-15 (graph_traverse): %d\n", v6);
}


/* Function: main @ 0x2110 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x2140 */
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


/* Function: .term_proc @ 0x218C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: printf @ 0x6030 */

/* FAILED to decompile: __cxa_finalize @ 0x6034 */

/* FAILED to decompile: puts @ 0x6038 */

/* Total functions decompiled: 69, failed: 4 */
