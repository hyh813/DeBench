/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_clang_O1_g
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


/* Function: _start @ 0x1060 */
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


/* Function: deregister_tm_clones @ 0x1090 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10C0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1100 */
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


/* Function: frame_dummy @ 0x1140 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: process_char @ 0x1150 */
char __fastcall process_char(char c)
{
  char result; // al

  result = c + 32;
  if ( (unsigned __int8)(c - 65) >= 0x1Au )
    return c;
  return result;
}


/* Function: process_short @ 0x1160 */
short __fastcall process_short(short a, short b)
{
  return a + b;
}


/* Function: process_int @ 0x1170 */
int __fastcall process_int(int x)
{
  return 2 * x + 1;
}


/* Function: process_long @ 0x1180 */
long __fastcall process_long(long x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x1190 */
__int64 __fastcall process_ll(__int64 x)
{
  return x * x;
}


/* Function: process_float @ 0x11A0 */
float __fastcall process_float(float a1, float f)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x11C0 */
double __fastcall process_double(double a1, double d)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x11E0 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x11F0 */
bool __fastcall process_bool(int x)
{
  return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x1200 */
int __fastcall const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x1210 */
int __fastcall volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1220 */
void __cdecl test_data_types_l1()
{
  puts(s);
  printf("DT-L1-01 (process_char): %c\n", 97);
  printf("DT-L1-01 (process_char): %c\n", 98);
  printf("DT-L1-02 (process_short): %d\n", 300);
  printf("DT-L1-03 (process_int): %d\n", 11);
  printf("DT-L1-04 (process_long): %ld\n", 200);
  printf("DT-L1-05 (process_ll): %lld\n", 10000);
  printf("DT-L1-06 (process_float): %.2f\n", 3.5);
  printf("DT-L1-07 (process_double): %.2f\n", 2.1);
  printf("DT-L1-08 (process_ld): %.2Lf\n", 10.0);
  printf("DT-L1-09 (process_bool): %d\n", 1);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-09 (process_bool): %d\n", 0);
  printf("DT-L1-10 (const_param): %d\n", 15);
  printf("DT-L1-11 (volatile_access): %d\n", 20);
}


/* Function: array_1d_stack @ 0x1350 */
int __fastcall array_1d_stack(int *arr, int n)
{
  __int64 v2; // rdx
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


/* Function: array_string @ 0x1370 */
int __fastcall array_string(char *str)
{
  int result; // eax

  result = -1;
  do
    ++result;
  while ( *str++ != 0 );
  return result;
}


/* Function: array_2d_stack @ 0x1390 */
int __fastcall array_2d_stack(int (*arr)[10])
{
  __int64 v1; // rcx
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


/* Function: array_3d @ 0x13C0 */
int __fastcall array_3d(int (*arr)[5][5])
{
  __int64 v1; // r8
  int result; // eax
  int *v3; // rdx
  __int64 i; // rsi
  __int64 j; // rcx

  v1 = 0;
  result = 0;
  do
  {
    v3 = (int *)arr;
    for ( i = 0; i != 5; ++i )
    {
      for ( j = 0; j != 5; ++j )
        result += v3[j];
      v3 += 5;
    }
    ++v1;
    ++arr;
  }
  while ( v1 != 5 );
  return result;
}


/* Function: array_vla @ 0x1420 */
int __fastcall array_vla(int n, int *arr)
{
  __int64 v2; // rdx
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


/* Function: array_pointer @ 0x1440 */
int __fastcall array_pointer(int (*arr)[10], int n)
{
  __int64 v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
  {
    result += (*arr)[v2];
    v2 += 10;
  }
  while ( 10LL * (unsigned int)n != v2 );
  return result;
}


/* Function: pointer_array @ 0x1470 */
int __fastcall pointer_array(int **arr, int n)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rdx
  int result; // eax
  int *v6; // rsi

  if ( n <= 0 )
    return 0;
  v2 = 10;
  if ( n < 10 )
    v2 = n;
  v3 = 1;
  if ( v2 >= 2 )
    v3 = (unsigned int)v2;
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


/* Function: array_complex_index @ 0x14B0 */
int __fastcall array_complex_index(int *arr, int w, int h, int x, int y)
{
  int result; // eax

  result = -1;
  if ( x >= 0 && y < h && x < w && y >= 0 )
    return arr[x + w * y];
  return result;
}


/* Function: array_oob @ 0x14E0 */
int __fastcall array_oob(int *arr, int n)
{
  __int64 v2; // rsi
  __int64 v3; // rcx
  int result; // eax

  if ( n < 0 )
    return 0;
  v2 = (unsigned int)(n + 1);
  v3 = 0;
  result = 0;
  do
    result += arr[v3++];
  while ( v2 != v3 );
  return result;
}


/* Function: test_array_types @ 0x1500 */
void __cdecl test_array_types()
{
  __int64 v0; // rbx
  _DWORD *v1; // rax
  __int64 i; // rcx
  int v3; // edx
  __int64 v4; // rax
  int v5; // esi
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // rcx
  __int64 j; // rdx
  __int64 k; // rsi
  __int64 v11; // rax
  _BYTE *v12; // rcx
  int v13; // esi
  _BYTE *v14; // rdx
  __int64 m; // rdi
  __int64 n; // rbx
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // esi
  __int64 v20; // rbx
  int v21; // esi
  _DWORD *v22; // rax
  __int64 v23; // rbx
  int v24; // [rsp+4h] [rbp-514h] BYREF
  int v25; // [rsp+8h] [rbp-510h] BYREF
  int v26; // [rsp+Ch] [rbp-50Ch] BYREF
  _QWORD v27[3]; // [rsp+10h] [rbp-508h]
  __int128 v28; // [rsp+28h] [rbp-4F0h]
  __int128 v29; // [rsp+38h] [rbp-4E0h]
  __int128 v30; // [rsp+48h] [rbp-4D0h]
  __int64 v31; // [rsp+58h] [rbp-4C0h]
  _DWORD v32[72]; // [rsp+60h] [rbp-4B8h]
  _DWORD v33[100]; // [rsp+180h] [rbp-398h] BYREF
  _BYTE v34[520]; // [rsp+310h] [rbp-208h] BYREF

  puts(asc_25E0);
  v0 = 0;
  printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
  printf("ARR-L1-02 (array_string): %d\n", 5);
  v1 = v33;
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
    v5 += v33[v4];
    v4 += 11;
  }
  while ( v4 != 110 );
  v6 = 0;
  printf("ARR-L1-03 (array_2d_stack): %d\n", v5);
  v7 = v34;
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
  v12 = v34;
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
  v17 = 0;
  printf("ARR-L1-04 (array_3d): %d\n", v13);
  printf("ARR-L2-01 (array_vla): %d\n", 60);
  do
  {
    v32[v17 + 20] = v17;
    v17 += 10;
  }
  while ( v17 != 50 );
  v18 = 0;
  v19 = 0;
  do
  {
    v19 += v32[v18 + 20];
    v18 += 10;
  }
  while ( v18 != 50 );
  v20 = 0;
  printf("ARR-L2-02 (array_pointer): %d\n", v19);
  v26 = 10;
  v25 = 20;
  v24 = 30;
  v27[0] = &v26;
  v27[1] = &v25;
  v27[2] = &v24;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v21 = 0;
  do
  {
    v22 = (_DWORD *)v27[v20];
    if ( v22 )
      v21 += *v22;
    ++v20;
  }
  while ( v20 != 3 );
  v23 = 0;
  printf("ARR-L2-03 (pointer_array): %d\n", v21);
  do
  {
    v32[v23] = v23;
    ++v23;
  }
  while ( v23 != 20 );
  printf("ARR-L2-04 (array_complex_index): %d\n", v32[17]);
}


/* Function: ptr_single @ 0x1790 */
int __fastcall ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x17A0 */
int __fastcall ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x17B0 */
int __fastcall ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x17C0 */
int __fastcall ptr_increment(int *p, int n)
{
  __int64 v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
    result += p[v2++];
  while ( n != (_DWORD)v2 );
  return result;
}


/* Function: ptr_offset @ 0x17E0 */
int __fastcall ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x17F0 */
int __fastcall ptr_diff(int *p1, int *p2)
{
  return (unsigned __int64)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0x1800 */
int __fastcall ptr_void(void *p, int type)
{
  int result; // eax

  if ( type == 1 )
    return *(char *)p;
  result = -1;
  if ( !type )
    return *(_DWORD *)p;
  return result;
}


/* Function: ptr_const @ 0x1820 */
int __fastcall ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1830 */
int __fastcall ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x1840 */
int __fastcall ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x1850 */
int __fastcall ptr_func_complex(int (*f)(int *, char **), int *p)
{
  __int128 v3; // [rsp+0h] [rbp-18h] BYREF

  v3 = *(_OWORD *)&off_3DE0;
  return f(p, (char **)&v3);
}


/* Function: ptr_cast @ 0x1880 */
int __fastcall ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x1890 */
void *__fastcall opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x18A0 */
int __fastcall opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x18B0 */
void __cdecl test_pointer_types()
{
  __int64 v0; // rbx
  int v1; // esi
  __int128 v2; // [rsp+0h] [rbp-28h]
  int v3; // [rsp+10h] [rbp-18h]

  puts(asc_25FB);
  v0 = 0;
  printf("PTR-L2-01 (ptr_single): %d\n", 15);
  printf("PTR-L2-02 (ptr_double): %d\n", 15);
  printf("PTR-L2-03 (ptr_triple): %d\n", 6);
  v3 = 5;
  v2 = xmmword_2640;
  v1 = 0;
  do
    v1 += *((_DWORD *)&v2 + v0++);
  while ( (_DWORD)v0 != 5 );
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


/* Function: struct_simple @ 0x1A00 */
int __fastcall struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1A10 */
int __fastcall struct_array(Point3D *pts, int n)
{
  __int64 v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  result = 0;
  do
  {
    result += pts[v2].z + pts[v2].y + pts[v2].x;
    ++v2;
  }
  while ( n != v2 );
  return result;
}


/* Function: struct_nested @ 0x1A50 */
int __fastcall struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1A60 */
int __fastcall struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1A70 */
int __fastcall struct_with_ptr(Node *node)
{
  Node *next; // rax

  next = node->next;
  if ( next )
    return node->data + next->data;
  else
    return node->data;
}


/* Function: struct_bitfields @ 0x1A90 */
int __fastcall struct_bitfields(Flags *f)
{
  return ((*(_WORD *)f >> 3) & 7) + ((*(_WORD *)f >> 1) & 3) + (*(_WORD *)f & 1) + (*(_WORD *)f >> 6);
}


/* Function: union_type @ 0x1AC0 */
int __fastcall union_type(UnionData *u, int type)
{
  if ( type == 1 )
    return (int)u->f;
  if ( type )
    return u->bytes[0];
  return u->i;
}


/* Function: union_array @ 0x1AE0 */
int __fastcall union_array(UnionData *arr, int n)
{
  __int64 v2; // rdx
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


/* Function: enum_type @ 0x1B00 */
int __fastcall enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1B10 */
int __fastcall enum_switch(State s)
{
  int result; // eax

  result = -99;
  if ( (unsigned int)s <= STATE_STOPPED )
    return dword_2680[s];
  return result;
}


/* Function: struct_func_ptr @ 0x1B30 */
int __fastcall struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1B40 */
int __fastcall linked_list(Node *head)
{
  int result; // eax

  for ( result = 0; head; head = head->next )
    result += head->data;
  return result;
}


/* Function: doubly_linked_list @ 0x1B60 */
int __fastcall doubly_linked_list(DNode *head)
{
  int result; // eax

  for ( result = 0; head; head = head->next )
    result += head->data;
  return result;
}


/* Function: binary_tree_sum @ 0x1B80 */
int __fastcall binary_tree_sum(TreeNode *root)
{
  int data; // r14d
  int v2; // ebp

  if ( !root )
    return 0;
  data = root->data;
  v2 = data + binary_tree_sum(root->left);
  return v2 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x1BB0 */
int __fastcall binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1BC0 */
int __fastcall graph_traverse(Graph *g)
{
  __int64 numVertices; // rcx
  __int64 v2; // rdx
  int result; // eax
  Edge *i; // rsi

  numVertices = (unsigned int)g->numVertices;
  if ( (int)numVertices <= 0 )
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


/* Function: test_composite_types @ 0x1C00 */
void __cdecl test_composite_types()
{
  int v0; // ebx
  int *v1; // rax
  int v2; // ebp
  int *v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  int v6; // esi
  __int64 i; // rax
  int v8; // [rsp+0h] [rbp-F8h] BYREF
  int *v9; // [rsp+8h] [rbp-F0h]
  int v10; // [rsp+10h] [rbp-E8h] BYREF
  int *v11; // [rsp+18h] [rbp-E0h]
  int v12; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+28h] [rbp-D0h]
  int v14; // [rsp+30h] [rbp-C8h] BYREF
  int *v15; // [rsp+38h] [rbp-C0h]
  __int64 v16; // [rsp+40h] [rbp-B8h]
  int v17; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-A8h]
  int *v19; // [rsp+58h] [rbp-A0h]
  __int128 v20; // [rsp+60h] [rbp-98h] BYREF
  TreeNode root; // [rsp+70h] [rbp-88h] BYREF
  _OWORD v22[5]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v23; // [rsp+E0h] [rbp-18h]

  puts(asc_2616);
  v0 = 0;
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
  v1 = &v8;
  v8 = 10;
  v9 = &v10;
  v10 = 20;
  v11 = &v12;
  v12 = 30;
  v13 = 0;
  do
  {
    v0 += *v1;
    v1 = (int *)*((_QWORD *)v1 + 1);
  }
  while ( v1 );
  v2 = 0;
  printf("CMP-L2-12 (linked_list): %d\n", v0);
  v3 = &v14;
  v14 = 10;
  v15 = &v17;
  v16 = 0;
  v17 = 20;
  v18 = 0;
  v19 = &v14;
  do
  {
    v2 += *v3;
    v3 = (int *)*((_QWORD *)v3 + 1);
  }
  while ( v3 );
  v4 = 0;
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
  root.right = 0;
  *(_OWORD *)&root.data = xmmword_2658;
  v5 = binary_tree_sum(&root);
  printf("CMP-L2-14 (binary_tree): %d\n", v5);
  v20 = xmmword_2670;
  memset(&v22[1], 0, 64);
  v23 = 2;
  v22[0] = (unsigned __int64)&v20;
  v6 = 0;
  do
  {
    for ( i = *((_QWORD *)v22 + v4); i; i = *(_QWORD *)(i + 8) )
      v6 += *(_DWORD *)i;
    ++v4;
  }
  while ( v4 != 2 );
  printf("CMP-L2-15 (graph_traverse): %d\n", v6);
}


/* Function: main @ 0x1E90 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: .term_proc @ 0x1EAC */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x4048 */

/* FAILED to decompile: puts @ 0x4050 */

/* FAILED to decompile: printf @ 0x4058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4060 */

/* FAILED to decompile: __gmon_start__ @ 0x4070 */

/* Total functions decompiled: 63, failed: 5 */
