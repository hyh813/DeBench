/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/2/2_clang_Os_g
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


/* Function: process_char @ 0x114C */
char __fastcall process_char(char c)
{
  char result; // al

  result = c + 32;
  if ( (unsigned __int8)(c - 65) >= 0x1Au )
    return c;
  return result;
}


/* Function: process_short @ 0x115B */
short __fastcall process_short(short a, short b)
{
  return a + b;
}


/* Function: process_int @ 0x115F */
int __fastcall process_int(int x)
{
  return 2 * x + 1;
}


/* Function: process_long @ 0x1165 */
long __fastcall process_long(long x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x116A */
__int64 __fastcall process_ll(__int64 x)
{
  return x * x;
}


/* Function: process_float @ 0x1172 */
float __fastcall process_float(float a1, float f)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1183 */
double __fastcall process_double(double a1, double d)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1194 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x119F */
bool __fastcall process_bool(int x)
{
  return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x11AE */
int __fastcall const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x11B4 */
int __fastcall volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x11B9 */
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


/* Function: array_1d_stack @ 0x12E2 */
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


/* Function: array_string @ 0x12FB */
int __fastcall array_string(char *str)
{
  int result; // eax

  result = -1;
  do
    ++result;
  while ( *str++ != 0 );
  return result;
}


/* Function: array_2d_stack @ 0x130C */
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


/* Function: array_3d @ 0x1321 */
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


/* Function: array_vla @ 0x1354 */
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


/* Function: array_pointer @ 0x136D */
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


/* Function: pointer_array @ 0x138F */
int __fastcall pointer_array(int **arr, int n)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  int result; // eax
  int *v5; // rsi

  if ( n <= 0 )
    return 0;
  v2 = 10;
  if ( (unsigned int)n < 0xA )
    v2 = (unsigned int)n;
  v3 = 0;
  result = 0;
  do
  {
    v5 = arr[v3];
    if ( v5 )
      result += *v5;
    ++v3;
  }
  while ( v2 != v3 );
  return result;
}


/* Function: array_complex_index @ 0x13B9 */
int __fastcall array_complex_index(int *arr, int w, int h, int x, int y)
{
  int result; // eax

  result = -1;
  if ( x >= 0 && y < h && x < w && y >= 0 )
    return arr[x + w * y];
  return result;
}


/* Function: array_oob @ 0x13DE */
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


/* Function: test_array_types @ 0x13F7 */
void __cdecl test_array_types()
{
  __int64 v0; // rbx
  char *v1; // rax
  __m128i si128; // xmm0
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  __m128i v5; // xmm3
  __int64 v6; // rdx
  __m128i v7; // xmm4
  __m128i v8; // xmm5
  __m128i v9; // xmm6
  __m128i v10; // xmm5
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax
  int v14; // esi
  __int64 v15; // rbx
  _BYTE *v16; // rax
  _BYTE *v17; // rcx
  __int64 i; // rdx
  __int64 j; // rsi
  __int64 v20; // rax
  _BYTE *v21; // rcx
  int v22; // esi
  _BYTE *v23; // rdx
  __int64 k; // rdi
  __int64 m; // rbx
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // esi
  __int64 v29; // rbx
  int *v30; // rax
  int v31; // esi
  int v32; // [rsp+4h] [rbp-514h] BYREF
  int v33; // [rsp+8h] [rbp-510h] BYREF
  int v34; // [rsp+Ch] [rbp-50Ch] BYREF
  int *v35; // [rsp+10h] [rbp-508h]
  _QWORD v36[2]; // [rsp+18h] [rbp-500h]
  __int128 v37; // [rsp+28h] [rbp-4F0h]
  __int128 v38; // [rsp+38h] [rbp-4E0h]
  __int128 v39; // [rsp+48h] [rbp-4D0h]
  __int64 v40; // [rsp+58h] [rbp-4C0h]
  __int128 v41; // [rsp+60h] [rbp-4B8h]
  __int128 v42; // [rsp+70h] [rbp-4A8h]
  __int128 v43; // [rsp+80h] [rbp-498h]
  __int128 v44; // [rsp+90h] [rbp-488h]
  __int128 v45; // [rsp+A0h] [rbp-478h]
  _DWORD v46[53]; // [rsp+B0h] [rbp-468h]
  char v47; // [rsp+184h] [rbp-394h] BYREF
  _BYTE v48[520]; // [rsp+310h] [rbp-208h] BYREF

  puts(asc_2690);
  v0 = 0;
  printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
  printf("ARR-L1-02 (array_string): %d\n", 5);
  v1 = &v47;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2030);
  v3 = _mm_load_si128((const __m128i *)&xmmword_2040);
  v4 = _mm_load_si128((const __m128i *)&xmmword_2050);
  v5 = _mm_load_si128((const __m128i *)&xmmword_2060);
  do
  {
    v6 = 0;
    v7 = si128;
    do
    {
      v8 = _mm_xor_si128(v7, v3);
      v9 = _mm_cmpgt_epi32(v4, v8);
      v10 = _mm_or_si128(_mm_shuffle_epi32(v9, 245), _mm_and_si128(_mm_shuffle_epi32(_mm_cmpeq_epi32(v8, v4), 245), v9));
      if ( (_mm_cvtsi128_si32(v10) & 1) != 0 )
      {
        v11 = 0;
        if ( v0 == v6 )
          v11 = v0;
        *(_DWORD *)&v1[4 * v6 - 4] = v11;
      }
      if ( (_mm_extract_epi16(v10, 4) & 1) != 0 )
      {
        v12 = 0;
        if ( v0 - 1 == v6 )
          v12 = v0;
        *(_DWORD *)&v1[4 * v6] = v12;
      }
      v6 += 2;
      v7 = _mm_add_epi64(v7, v5);
    }
    while ( v6 != 10 );
    ++v0;
    v1 += 40;
  }
  while ( v0 != 10 );
  v13 = 0;
  v14 = 0;
  do
  {
    v14 += v46[v13 + 52];
    v13 += 11;
  }
  while ( v13 != 110 );
  v15 = 0;
  printf("ARR-L1-03 (array_2d_stack): %d\n", v14);
  v16 = v48;
  do
  {
    v17 = v16;
    for ( i = 0; i != 5; ++i )
    {
      for ( j = 0; j != 5; ++j )
        *(_DWORD *)&v17[4 * j] = 1;
      v17 += 20;
    }
    ++v15;
    v16 += 100;
  }
  while ( v15 != 5 );
  v20 = 0;
  v21 = v48;
  v22 = 0;
  do
  {
    v23 = v21;
    for ( k = 0; k != 5; ++k )
    {
      for ( m = 0; m != 5; ++m )
        v22 += *(_DWORD *)&v23[4 * m];
      v23 += 20;
    }
    ++v20;
    v21 += 100;
  }
  while ( v20 != 5 );
  v26 = 0;
  printf("ARR-L1-04 (array_3d): %d\n", v22);
  printf("ARR-L2-01 (array_vla): %d\n", 60);
  do
  {
    v46[v26] = v26;
    v26 += 10;
  }
  while ( v26 != 50 );
  v27 = 0;
  v28 = 0;
  do
  {
    v28 += v46[v27];
    v27 += 10;
  }
  while ( v27 != 50 );
  v29 = 0;
  printf("ARR-L2-02 (array_pointer): %d\n", v28);
  v30 = &v34;
  v34 = 10;
  v33 = 20;
  v32 = 30;
  v35 = &v34;
  v36[0] = &v33;
  v36[1] = &v32;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v31 = 0;
  while ( 1 )
  {
    if ( v30 )
      v31 += *v30;
    if ( v29 == 2 )
      break;
    v30 = (int *)v36[v29++];
  }
  printf("ARR-L2-03 (pointer_array): %d\n", v31);
  v41 = xmmword_2070;
  v42 = xmmword_2080;
  v43 = xmmword_2090;
  v44 = xmmword_20A0;
  v45 = xmmword_20B0;
  printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x16A5 */
int __fastcall ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x16AB */
int __fastcall ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x16B4 */
int __fastcall ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x16BF */
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


/* Function: ptr_offset @ 0x16D7 */
int __fastcall ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x16DE */
int __fastcall ptr_diff(int *p1, int *p2)
{
  return (unsigned __int64)((char *)p1 - (char *)p2) >> 2;
}


/* Function: ptr_void @ 0x16E9 */
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


/* Function: ptr_const @ 0x16FE */
int __fastcall ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1703 */
int __fastcall ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x170B */
int __fastcall ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x1712 */
int __fastcall ptr_func_complex(int (*f)(int *, char **), int *p)
{
  return ((__int64 (__fastcall *)(int *))f)(p);
}


/* Function: ptr_cast @ 0x1733 */
int __fastcall ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x1736 */
void *__fastcall opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x173A */
int __fastcall opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x173E */
void __cdecl test_pointer_types()
{
  puts(asc_26AB);
  printf("PTR-L2-01 (ptr_single): %d\n", 15);
  printf("PTR-L2-02 (ptr_double): %d\n", 15);
  printf("PTR-L2-03 (ptr_triple): %d\n", 6);
  printf("PTR-L2-04 (ptr_increment): %d\n", 15);
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


/* Function: struct_simple @ 0x1855 */
int __fastcall struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x185E */
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


/* Function: struct_nested @ 0x1888 */
int __fastcall struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x188E */
int __fastcall struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1895 */
int __fastcall struct_with_ptr(Node *node)
{
  Node *next; // rax
  int data; // eax

  next = node->next;
  if ( next )
    data = next->data;
  else
    data = 0;
  return node->data + data;
}


/* Function: struct_bitfields @ 0x18A9 */
int __fastcall struct_bitfields(Flags *f)
{
  return ((*(_WORD *)f >> 3) & 7) + ((*(_WORD *)f >> 1) & 3) + (*(_WORD *)f & 1) + (*(_WORD *)f >> 6);
}


/* Function: union_type @ 0x18CA */
int __fastcall union_type(UnionData *u, int type)
{
  if ( type == 1 )
    return (int)u->f;
  if ( type )
    return u->bytes[0];
  return u->i;
}


/* Function: union_array @ 0x18DF */
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


/* Function: enum_type @ 0x18F8 */
int __fastcall enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x18FE */
int __fastcall enum_switch(State s)
{
  int result; // eax

  result = -99;
  if ( (unsigned int)s <= STATE_STOPPED )
    return dword_20D0[s];
  return result;
}


/* Function: struct_func_ptr @ 0x1916 */
int __fastcall struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x191E */
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


/* Function: doubly_linked_list @ 0x192E */
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


/* Function: binary_tree_sum @ 0x193E */
int __fastcall binary_tree_sum(TreeNode *root)
{
  TreeNode *v1; // r14
  int v2; // ebx
  int v3; // ebx
  int v4; // eax

  if ( !root )
    return 0;
  v1 = root;
  v2 = 0;
  do
  {
    v3 = v1->data + v2;
    v4 = binary_tree_sum(v1->left);
    v1 = v1->right;
    v2 = v4 + v3;
  }
  while ( v1 );
  return v2;
}


/* Function: binary_tree @ 0x1971 */
// attributes: thunk
int __fastcall binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x1976 */
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


/* Function: test_composite_types @ 0x199E */
void __cdecl test_composite_types()
{
  int v0; // ebp
  int *v1; // rax
  int v2; // ebx
  int *v3; // rax
  __int64 v4; // rbp
  int v5; // eax
  __int128 *v6; // rax
  int v7; // esi
  __int128 *v8; // [rsp+8h] [rbp-100h]
  __int128 v9; // [rsp+10h] [rbp-F8h]
  __int128 v10; // [rsp+20h] [rbp-E8h]
  __int128 v11; // [rsp+30h] [rbp-D8h]
  __int128 v12; // [rsp+40h] [rbp-C8h]
  __int128 v13; // [rsp+50h] [rbp-B8h]
  __int128 v14; // [rsp+60h] [rbp-A8h] BYREF
  int v15; // [rsp+70h] [rbp-98h] BYREF
  int *v16; // [rsp+78h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-88h] BYREF
  int *v18; // [rsp+88h] [rbp-80h]
  int v19; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+98h] [rbp-70h]
  TreeNode root; // [rsp+A0h] [rbp-68h] BYREF
  int v22; // [rsp+C0h] [rbp-48h] BYREF
  int *v23; // [rsp+C8h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-38h]
  int v25; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-28h]
  int *v27; // [rsp+E8h] [rbp-20h]

  puts(asc_26C6);
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
  v1 = &v15;
  v15 = 10;
  v16 = &v17;
  v17 = 20;
  v18 = &v19;
  v19 = 30;
  v20 = 0;
  do
  {
    v0 += *v1;
    v1 = (int *)*((_QWORD *)v1 + 1);
  }
  while ( v1 );
  v2 = 0;
  printf("CMP-L2-12 (linked_list): %d\n", v0);
  v3 = &v22;
  v22 = 10;
  v24 = 0;
  v25 = 20;
  v26 = 0;
  v27 = &v22;
  v23 = &v25;
  do
  {
    v2 += *v3;
    v3 = (int *)*((_QWORD *)v3 + 1);
  }
  while ( v3 );
  v4 = 0;
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v2);
  root.right = 0;
  *(_OWORD *)&root.data = xmmword_26E8;
  v5 = binary_tree_sum(&root);
  printf("CMP-L2-14 (binary_tree): %d\n", v5);
  v6 = &v14;
  v14 = xmmword_20C0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v10 = 0;
  v9 = 0;
  v8 = &v14;
  v7 = 0;
  while ( 1 )
  {
    while ( v6 )
    {
      v7 += *(_DWORD *)v6;
      v6 = (__int128 *)*((_QWORD *)v6 + 1);
    }
    if ( ++v4 == 2 )
      break;
    v6 = *(&v8 + v4);
  }
  printf("CMP-L2-15 (graph_traverse): %d\n", v7);
}


/* Function: main @ 0x1BBC */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: .term_proc @ 0x1BD8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x5048 */

/* FAILED to decompile: puts @ 0x5050 */

/* FAILED to decompile: printf @ 0x5058 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5060 */

/* FAILED to decompile: __gmon_start__ @ 0x5070 */

/* Total functions decompiled: 63, failed: 5 */
