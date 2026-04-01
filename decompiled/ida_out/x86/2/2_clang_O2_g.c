/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_clang_O2_g
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
  int *v4; // edx
  int v5; // esi

  if ( n <= 0 )
    return 0;
  if ( (unsigned int)(n - 1) >= 7 )
  {
    v2 = 0;
    result = 0;
    do
    {
      result += arr[v2 + 7]
              + arr[v2 + 6]
              + arr[v2 + 5]
              + arr[v2 + 4]
              + arr[v2 + 3]
              + arr[v2 + 2]
              + arr[v2 + 1]
              + arr[v2];
      v2 += 8;
    }
    while ( (n & 0x7FFFFFF8) != v2 );
  }
  else
  {
    v2 = 0;
    result = 0;
  }
  if ( (n & 7) != 0 )
  {
    v4 = &arr[v2];
    v5 = 0;
    do
      result += v4[v5++];
    while ( (n & 7) != v5 );
  }
  return result;
}


/* Function: array_string @ 0x14A0 */
int __cdecl array_string(char *str)
{
  int result; // eax

  result = -1;
  while ( str[++result] != 0 )
    ;
  return result;
}


/* Function: array_2d_stack @ 0x14C0 */
int __cdecl array_2d_stack(int (*arr)[10])
{
  return (*arr)[99]
       + (*arr)[88]
       + (*arr)[77]
       + (*arr)[66]
       + (*arr)[55]
       + (*arr)[44]
       + (*arr)[33]
       + (*arr)[22]
       + (*arr)[0]
       + (*arr)[11];
}


/* Function: array_3d @ 0x1500 */
int __cdecl array_3d(int (*arr)[5][5])
{
  int *v1; // ecx
  int v2; // edx
  int result; // eax

  v2 = 0;
  result = 0;
  do
  {
    v1 = &(*arr)[4][4];
    result += v1[v2]
            + v1[v2 - 1]
            + v1[v2 - 2]
            + v1[v2 - 3]
            + v1[v2 - 4]
            + v1[v2 - 5]
            + v1[v2 - 6]
            + v1[v2 - 7]
            + v1[v2 - 8]
            + v1[v2 - 9]
            + v1[v2 - 10]
            + v1[v2 - 11]
            + v1[v2 - 12]
            + v1[v2 - 13]
            + v1[v2 - 14]
            + v1[v2 - 15]
            + v1[v2 - 16]
            + v1[v2 - 17]
            + v1[v2 - 18]
            + v1[v2 - 19]
            + v1[v2 - 20]
            + v1[v2 - 21]
            + v1[v2 - 22]
            + v1[v2 - 23]
            + v1[v2 - 24];
    v2 += 25;
  }
  while ( v2 != 125 );
  return result;
}


/* Function: array_vla @ 0x1580 */
int __cdecl array_vla(int n, int *arr)
{
  int v2; // esi
  int result; // eax
  int *v4; // edx
  int v5; // esi

  if ( n <= 0 )
    return 0;
  if ( (unsigned int)(n - 1) >= 7 )
  {
    v2 = 0;
    result = 0;
    do
    {
      result += arr[v2 + 7]
              + arr[v2 + 6]
              + arr[v2 + 5]
              + arr[v2 + 4]
              + arr[v2 + 3]
              + arr[v2 + 2]
              + arr[v2 + 1]
              + arr[v2];
      v2 += 8;
    }
    while ( (n & 0x7FFFFFF8) != v2 );
  }
  else
  {
    v2 = 0;
    result = 0;
  }
  if ( (n & 7) != 0 )
  {
    v4 = &arr[v2];
    v5 = 0;
    do
      result += v4[v5++];
    while ( (n & 7) != v5 );
  }
  return result;
}


/* Function: array_pointer @ 0x15F0 */
int __cdecl array_pointer(int (*arr)[10], int n)
{
  int v2; // esi
  int result; // eax
  int *v4; // ebx
  int *v5; // edx
  int v6; // esi

  if ( n <= 0 )
    return 0;
  if ( (unsigned int)(n - 1) >= 3 )
  {
    v2 = 0;
    v4 = (int *)arr;
    result = 0;
    do
    {
      result += v4[30] + v4[20] + v4[10] + *v4;
      v2 += 4;
      v4 += 40;
    }
    while ( (n & 0x7FFFFFFC) != v2 );
  }
  else
  {
    v2 = 0;
    result = 0;
  }
  if ( (n & 3) != 0 )
  {
    v5 = &(*arr)[10 * v2];
    v6 = 0;
    do
    {
      result += v5[v6];
      v6 += 10;
    }
    while ( 10 * (n & 3) != v6 );
  }
  return result;
}


/* Function: pointer_array @ 0x1660 */
int __cdecl pointer_array(int **arr, int n)
{
  int v2; // edx
  int v3; // esi
  int result; // eax
  int *v5; // ecx
  int *v6; // edi
  int *v7; // edi

  if ( n <= 0 )
    return 0;
  v2 = 10;
  if ( (unsigned int)n < 0xA )
    v2 = n;
  if ( v2 == 1 )
  {
    v3 = 0;
    result = 0;
  }
  else
  {
    v3 = 0;
    result = 0;
    do
    {
      v6 = arr[v3];
      if ( v6 )
        result += *v6;
      v7 = arr[v3 + 1];
      if ( v7 )
        result += *v7;
      v3 += 2;
    }
    while ( (v2 & 0xE) != v3 );
  }
  if ( (v2 & 1) != 0 )
  {
    v5 = arr[v3];
    if ( v5 )
      result += *v5;
  }
  return result;
}


/* Function: array_complex_index @ 0x16D0 */
int __cdecl array_complex_index(int *arr, int w, int h, int x, int y)
{
  int result; // eax

  result = -1;
  if ( x >= 0 && y < h && x < w && y >= 0 )
    return arr[x + w * y];
  return result;
}


/* Function: array_oob @ 0x1710 */
int __cdecl array_oob(int *arr, int n)
{
  int v2; // esi
  int result; // eax
  int *v4; // edx
  int v5; // esi

  if ( n < 0 )
    return 0;
  if ( (unsigned int)n >= 7 )
  {
    v2 = 0;
    result = 0;
    do
    {
      result += arr[v2 + 7]
              + arr[v2 + 6]
              + arr[v2 + 5]
              + arr[v2 + 4]
              + arr[v2 + 3]
              + arr[v2 + 2]
              + arr[v2 + 1]
              + arr[v2];
      v2 += 8;
    }
    while ( ((n + 1) & 0xFFFFFFF8) != v2 );
  }
  else
  {
    v2 = 0;
    result = 0;
  }
  if ( (((_BYTE)n + 1) & 7) != 0 )
  {
    v4 = &arr[v2];
    v5 = 0;
    do
      result += v4[v5++];
    while ( (((_BYTE)n + 1) & 7) != v5 );
  }
  return result;
}


/* Function: test_array_types @ 0x1780 */
void test_array_types()
{
  int i; // eax
  int v1; // ecx
  int v2; // ecx
  int j; // eax
  int v4; // eax
  int arr[5][5]; // [esp+10h] [ebp-38Ch] BYREF
  _DWORD v6[102]; // [esp+204h] [ebp-198h]

  puts(asc_35E0);
  printf("ARR-L1-01 (array_1d_stack): %d\n", 15);
  printf("ARR-L1-02 (array_string): %d\n", 5);
  for ( i = 0; i != 100; i += 10 )
  {
    v6[i] = 0;
    v6[i + 1] = i == 10;
    v6[i + 2] = 2 * (i == 20);
    v6[i + 3] = 3 * (i == 30);
    v6[i + 4] = 4 * (i == 40);
    v6[i + 5] = 5 * (i == 50);
    v1 = 0;
    if ( i == 60 )
      v1 = 6;
    v6[i + 6] = v1;
    v2 = 0;
    if ( i == 70 )
      v2 = 7;
    v6[i + 7] = v2;
    v6[i + 8] = 8 * (i == 80);
    v6[i + 9] = 9 * (i == 90);
  }
  printf(
    "ARR-L1-03 (array_2d_stack): %d\n",
    v6[99] + v6[88] + v6[77] + v6[66] + v6[55] + v6[44] + v6[33] + v6[22] + v6[0] + v6[11]);
  for ( j = 0; j != 25; j += 5 )
  {
    arr[j][0] = 1;
    arr[j][1] = 1;
    arr[j][2] = 1;
    arr[j][3] = 1;
    arr[j][4] = 1;
    arr[j + 1][0] = 1;
    arr[j + 1][1] = 1;
    arr[j + 1][2] = 1;
    arr[j + 1][3] = 1;
    arr[j + 1][4] = 1;
    arr[j + 2][0] = 1;
    arr[j + 2][1] = 1;
    arr[j + 2][2] = 1;
    arr[j + 2][3] = 1;
    arr[j + 2][4] = 1;
    arr[j + 3][0] = 1;
    arr[j + 3][1] = 1;
    arr[j + 3][2] = 1;
    arr[j + 3][3] = 1;
    arr[j + 3][4] = 1;
    arr[j + 4][0] = 1;
    arr[j + 4][1] = 1;
    arr[j + 4][2] = 1;
    arr[j + 4][3] = 1;
    arr[j + 4][4] = 1;
  }
  v4 = array_3d((int (*)[5][5])arr);
  printf("ARR-L1-04 (array_3d): %d\n", v4);
  printf("ARR-L2-01 (array_vla): %d\n", 60);
  printf("ARR-L2-02 (array_pointer): %d\n", 100);
  printf("ARR-L2-03 (pointer_array): %d\n", 60);
  printf("ARR-L2-04 (array_complex_index): %d\n", 17);
}


/* Function: ptr_single @ 0x1A60 */
int __cdecl ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x1A70 */
int __cdecl ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x1A80 */
int __cdecl ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x1A90 */
int __cdecl ptr_increment(int *p, int n)
{
  int result; // eax
  int v4; // esi
  int v5; // esi

  if ( n <= 0 )
    return 0;
  if ( (unsigned int)(n - 1) >= 7 )
  {
    v4 = n & 0x7FFFFFF8;
    result = 0;
    do
    {
      result += p[7] + p[6] + p[5] + p[4] + p[3] + p[2] + p[1] + *p;
      p += 8;
      v4 -= 8;
    }
    while ( v4 );
  }
  else
  {
    result = 0;
  }
  if ( (n & 7) != 0 )
  {
    v5 = 0;
    do
      result += p[v5++];
    while ( (n & 7) != v5 );
  }
  return result;
}


/* Function: ptr_offset @ 0x1B00 */
int __cdecl ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x1B10 */
int __cdecl ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x1B20 */
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


/* Function: ptr_const @ 0x1B40 */
int __cdecl ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1B50 */
int __cdecl ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x1B60 */
int __cdecl ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x1B80 */
int __cdecl ptr_func_complex(int (*f)(int *, char **), int *p)
{
  _DWORD v3[3]; // [esp+0h] [ebp-Ch] BYREF

  v3[1] = &dword_0;
  v3[0] = "test";
  return f(p, (char **)v3);
}


/* Function: ptr_cast @ 0x1BC0 */
int __cdecl ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x1BD0 */
void *__cdecl opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x1BE0 */
int __cdecl opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x1BF0 */
void test_pointer_types()
{
  puts(asc_35FB);
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


/* Function: struct_simple @ 0x1D50 */
int __cdecl struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1D60 */
int __cdecl struct_array(Point3D *pts, int n)
{
  int v2; // esi
  int result; // eax
  int *p_z; // edi

  if ( n <= 0 )
    return 0;
  if ( n == 1 )
  {
    v2 = 0;
    result = 0;
  }
  else
  {
    p_z = &pts[1].z;
    v2 = 0;
    result = 0;
    do
    {
      result += *p_z + *(p_z - 1) + *(p_z - 2) + *(p_z - 3) + *(p_z - 4) + *(p_z - 5);
      v2 += 2;
      p_z += 6;
    }
    while ( (n & 0xFFFFFFFE) != v2 );
  }
  if ( (n & 1) != 0 )
    result += pts[v2].z + pts[v2].y + pts[v2].x;
  return result;
}


/* Function: struct_nested @ 0x1DD0 */
int __cdecl struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x1DE0 */
int __cdecl struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x1DF0 */
int __cdecl struct_with_ptr(Node *node)
{
  Node *next; // eax

  next = node->next;
  if ( next )
    return node->data + next->data;
  else
    return node->data;
}


/* Function: struct_bitfields @ 0x1E10 */
int __cdecl struct_bitfields(Flags *f)
{
  return ((*(_WORD *)f >> 3) & 7) + ((*(_WORD *)f >> 1) & 3) + (*(_WORD *)f & 1) + (*(_WORD *)f >> 6);
}


/* Function: union_type @ 0x1E40 */
int __cdecl union_type(UnionData *u, int type)
{
  if ( type == 1 )
    return (int)u->f;
  if ( type )
    return u->bytes[0];
  return u->i;
}


/* Function: union_array @ 0x1E90 */
int __cdecl union_array(UnionData *arr, int n)
{
  int v2; // esi
  int result; // eax
  UnionData *v4; // edx
  int v5; // esi

  if ( n <= 0 )
    return 0;
  if ( (unsigned int)(n - 1) >= 7 )
  {
    v2 = 0;
    result = 0;
    do
    {
      result += arr[v2 + 7].i
              + arr[v2 + 6].i
              + arr[v2 + 5].i
              + arr[v2 + 4].i
              + arr[v2 + 3].i
              + arr[v2 + 2].i
              + arr[v2 + 1].i
              + arr[v2].i;
      v2 += 8;
    }
    while ( (n & 0x7FFFFFF8) != v2 );
  }
  else
  {
    v2 = 0;
    result = 0;
  }
  if ( (n & 7) != 0 )
  {
    v4 = &arr[v2];
    v5 = 0;
    do
      result += v4[v5++].i;
    while ( (n & 7) != v5 );
  }
  return result;
}


/* Function: enum_type @ 0x1F00 */
int __cdecl enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1F10 */
int __cdecl enum_switch(State s)
{
  int result; // eax

  result = -99;
  if ( (unsigned int)s <= STATE_STOPPED )
    return dword_3640[s];
  return result;
}


/* Function: struct_func_ptr @ 0x1F40 */
int __cdecl struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1F70 */
int __cdecl linked_list(Node *head)
{
  Node *v1; // ecx
  int result; // eax

  v1 = head;
  for ( result = 0; v1; v1 = v1->next )
    result += v1->data;
  return result;
}


/* Function: doubly_linked_list @ 0x1F90 */
int __cdecl doubly_linked_list(DNode *head)
{
  DNode *v1; // ecx
  int result; // eax

  v1 = head;
  for ( result = 0; v1; v1 = v1->next )
    result += v1->data;
  return result;
}


/* Function: binary_tree_sum @ 0x1FB0 */
int __cdecl binary_tree_sum(TreeNode *root)
{
  TreeNode *v1; // edi
  int i; // esi
  int v3; // esi
  int v4; // eax

  v1 = root;
  for ( i = 0; v1; i = v4 + v3 )
  {
    v3 = v1->data + i;
    v4 = binary_tree_sum(v1->left);
    v1 = v1->right;
  }
  return i;
}


/* Function: binary_tree @ 0x1FF0 */
int __cdecl binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x2020 */
int __cdecl graph_traverse(Graph *g)
{
  int numVertices; // edx
  int v2; // esi
  int result; // eax
  Edge *k; // ecx
  Edge *i; // edi
  _DWORD *j; // edi

  numVertices = g->numVertices;
  if ( numVertices <= 0 )
    return 0;
  if ( numVertices == 1 )
  {
    v2 = 0;
    result = 0;
  }
  else
  {
    v2 = 0;
    result = 0;
    do
    {
      for ( i = g->adjList[v2]; i; i = i->next )
        result += i->dest;
      for ( j = *(Edge **)((char *)g->adjList + ((4 * v2) | 4)); j; j = (_DWORD *)j[1] )
        result += *j;
      v2 += 2;
    }
    while ( v2 != (numVertices & 0xFFFFFFFE) );
  }
  if ( (numVertices & 1) != 0 )
  {
    for ( k = g->adjList[v2]; k; k = k->next )
      result += k->dest;
  }
  return result;
}


/* Function: test_composite_types @ 0x20B0 */
void test_composite_types()
{
  int *v0; // eax
  int v1; // ecx
  _DWORD *v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // [esp+8h] [ebp-44h] BYREF
  int *v6; // [esp+Ch] [ebp-40h]
  int v7; // [esp+10h] [ebp-3Ch] BYREF
  int *v8; // [esp+14h] [ebp-38h]
  int v9; // [esp+18h] [ebp-34h] BYREF
  int v10; // [esp+1Ch] [ebp-30h]
  TreeNode root; // [esp+20h] [ebp-2Ch] BYREF
  _DWORD v12[3]; // [esp+30h] [ebp-1Ch] BYREF
  _DWORD v13[4]; // [esp+3Ch] [ebp-10h] BYREF

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
  v0 = &v5;
  v5 = 10;
  v6 = &v7;
  v7 = 20;
  v8 = &v9;
  v9 = 30;
  v10 = 0;
  v1 = 0;
  do
  {
    v1 += *v0;
    v0 = (int *)v0[1];
  }
  while ( v0 );
  printf("CMP-L2-12 (linked_list): %d\n", v1, v5, v6, v7, v8, v9, v10);
  v2 = v12;
  v12[0] = 10;
  v12[2] = 0;
  v13[0] = 20;
  v13[1] = 0;
  v13[2] = v12;
  v12[1] = v13;
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
  printf("CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: main @ 0x22F0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __do_global_ctors_aux @ 0x2320 */
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


/* Function: .term_proc @ 0x236C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: printf @ 0x6030 */

/* FAILED to decompile: __cxa_finalize @ 0x6034 */

/* FAILED to decompile: puts @ 0x6038 */

/* Total functions decompiled: 69, failed: 4 */
