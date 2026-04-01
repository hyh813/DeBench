/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/2/2_gcc_O0_g
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


/* Function: process_char @ 0x1259 */
char __cdecl process_char(char c)
{
  if ( c <= 64 || c > 90 )
    return c;
  else
    return c + 32;
}


/* Function: process_short @ 0x128E */
__int16 __cdecl process_short(__int16 a, __int16 b)
{
  return a + b;
}


/* Function: process_int @ 0x12BC */
int __cdecl process_int(int x)
{
  return 2 * x + 1;
}


/* Function: process_long @ 0x12D7 */
int __cdecl process_long(int x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x12EF */
__int64 __cdecl process_ll(__int64 x)
{
  __int64 result; // rax

  result = (unsigned int)x * (unsigned __int64)(unsigned int)x;
  HIDWORD(result) += 2 * x * HIDWORD(x);
  return result;
}


/* Function: process_float @ 0x132E */
float __cdecl process_float(float f)
{
  return f * 1.5 + 0.5;
}


/* Function: process_double @ 0x1354 */
double __cdecl process_double(double d)
{
  return d / 2.0 + 0.1;
}


/* Function: process_ld @ 0x1389 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x13A7 */
bool __cdecl process_bool(int x)
{
  return x > 0 && (x & 1) == 0;
}


/* Function: const_param @ 0x13D9 */
int __cdecl const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x13F4 */
int __cdecl volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x1422 */
void test_data_types_l1()
{
  char v0; // al
  char v1; // al
  __int16 v2; // ax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rax
  long double v6; // fst7
  long double v7; // fst7
  bool v8; // al
  bool v9; // al
  bool v10; // al
  int v11; // eax
  int v12; // eax
  long double v13; // [esp-Ch] [ebp-24h]
  int value; // [esp+4h] [ebp-14h] BYREF
  int vol_value[3]; // [esp+8h] [ebp-10h] BYREF

  vol_value[1] = __readgsdword(0x14u);
  puts(asc_3010);
  v0 = process_char(65);
  printf("DT-L1-01 (process_char): %c\n", v0);
  v1 = process_char(98);
  printf("DT-L1-01 (process_char): %c\n", v1);
  v2 = process_short(100, 200);
  printf("DT-L1-02 (process_short): %d\n", v2);
  v3 = process_int(5);
  printf("DT-L1-03 (process_int): %d\n", v3);
  v4 = process_long(100);
  printf("DT-L1-04 (process_long): %ld\n", v4);
  v5 = process_ll(100);
  printf("DT-L1-05 (process_ll): %lld\n", v5);
  v6 = process_float(2.0);
  printf("DT-L1-06 (process_float): %.2f\n", (double)v6);
  v7 = process_double(4.0);
  printf("DT-L1-07 (process_double): %.2f\n", (double)v7);
  v13 = process_ld(3.0);
  printf("DT-L1-08 (process_ld): %.2Lf\n", *(_QWORD *)&v13, HIDWORD(v13));
  v8 = process_bool(4);
  printf("DT-L1-09 (process_bool): %d\n", v8);
  v9 = process_bool(3);
  printf("DT-L1-09 (process_bool): %d\n", v9);
  v10 = process_bool(-2);
  printf("DT-L1-09 (process_bool): %d\n", v10);
  value = 5;
  v11 = const_param(&value);
  printf("DT-L1-10 (const_param): %d\n", v11);
  vol_value[0] = 10;
  v12 = volatile_access(vol_value);
  printf("DT-L1-11 (volatile_access): %d\n", v12);
}


/* Function: array_1d_stack @ 0x1686 */
int __cdecl array_1d_stack(int *arr, int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += arr[i];
  return sum;
}


/* Function: array_string @ 0x16CF */
int __cdecl array_string(char *str)
{
  int len; // [esp+Ch] [ebp-4h]

  for ( len = 0; str[len]; ++len )
    ;
  return len;
}


/* Function: array_2d_stack @ 0x1704 */
int __cdecl array_2d_stack(int (*arr)[10])
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i <= 9; ++i )
    sum += (*arr)[10 * i + i];
  return sum;
}


/* Function: array_3d @ 0x1754 */
int __cdecl array_3d(int (*arr)[5][5])
{
  int sum; // [esp+0h] [ebp-10h]
  int i; // [esp+4h] [ebp-Ch]
  int j; // [esp+8h] [ebp-8h]
  int k; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i <= 4; ++i )
  {
    for ( j = 0; j <= 4; ++j )
    {
      for ( k = 0; k <= 4; ++k )
        sum += (*arr)[5 * i][5 * j + k];
    }
  }
  return sum;
}


/* Function: array_vla @ 0x17CE */
int __cdecl array_vla(int n, int *arr)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += arr[i];
  return sum;
}


/* Function: array_pointer @ 0x1817 */
int __cdecl array_pointer(int (*arr)[10], int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += (*arr)[10 * i];
  return sum;
}


/* Function: pointer_array @ 0x1865 */
int __cdecl pointer_array(int **arr, int n)
{
  int v2; // eax
  int sum; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]

  sum = 0;
  v2 = n;
  if ( n > 10 )
    v2 = 10;
  for ( i = 0; i < v2; ++i )
  {
    if ( arr[i] )
      sum += *arr[i];
  }
  return sum;
}


/* Function: array_complex_index @ 0x18D5 */
int __cdecl array_complex_index(int *arr, int w, int h, int x, int y)
{
  if ( x >= 0 && x < w && y >= 0 && y < h )
    return arr[w * y + x];
  else
    return -1;
}


/* Function: array_oob @ 0x1927 */
int __cdecl array_oob(int *arr, int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i <= n; ++i )
    sum += arr[i];
  return sum;
}


/* Function: test_array_types @ 0x1970 */
void test_array_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // edx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int a; // [esp+8h] [ebp-520h] BYREF
  int b; // [esp+Ch] [ebp-51Ch] BYREF
  int c; // [esp+10h] [ebp-518h] BYREF
  int i; // [esp+14h] [ebp-514h]
  int j; // [esp+18h] [ebp-510h]
  int i_0; // [esp+1Ch] [ebp-50Ch]
  int j_0; // [esp+20h] [ebp-508h]
  int k; // [esp+24h] [ebp-504h]
  int i_1; // [esp+28h] [ebp-500h]
  int i_2; // [esp+2Ch] [ebp-4FCh]
  int vla_arr[3]; // [esp+30h] [ebp-4F8h] BYREF
  int arr1[5]; // [esp+3Ch] [ebp-4ECh] BYREF
  int *ptr_arr[10]; // [esp+50h] [ebp-4D8h] BYREF
  int arr[20]; // [esp+78h] [ebp-4B0h] BYREF
  int arr2[5][10]; // [esp+C8h] [ebp-460h] BYREF
  int matrix[10][10]; // [esp+190h] [ebp-398h] BYREF
  int cube[5][5][5]; // [esp+320h] [ebp-208h] BYREF
  char str[6]; // [esp+516h] [ebp-12h] BYREF
  unsigned int v27; // [esp+51Ch] [ebp-Ch]

  v27 = __readgsdword(0x14u);
  puts(asc_317C);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  v0 = array_1d_stack(arr1, 5);
  printf("ARR-L1-01 (array_1d_stack): %d\n", v0);
  strcpy(str, "hello");
  v1 = array_string(str);
  printf("ARR-L1-02 (array_string): %d\n", v1);
  for ( i = 0; i <= 9; ++i )
  {
    for ( j = 0; j <= 9; ++j )
    {
      if ( i == j )
        v2 = i;
      else
        v2 = 0;
      matrix[i][j] = v2;
    }
  }
  v3 = array_2d_stack(matrix);
  printf("ARR-L1-03 (array_2d_stack): %d\n", v3);
  for ( i_0 = 0; i_0 <= 4; ++i_0 )
  {
    for ( j_0 = 0; j_0 <= 4; ++j_0 )
    {
      for ( k = 0; k <= 4; ++k )
        cube[i_0][j_0][k] = 1;
    }
  }
  v4 = array_3d(cube);
  printf("ARR-L1-04 (array_3d): %d\n", v4);
  vla_arr[0] = 10;
  vla_arr[1] = 20;
  vla_arr[2] = 30;
  v5 = array_vla(3, vla_arr);
  printf("ARR-L2-01 (array_vla): %d\n", v5);
  for ( i_1 = 0; i_1 <= 4; ++i_1 )
    arr2[i_1][0] = 10 * i_1;
  v6 = array_pointer(arr2, 5);
  printf("ARR-L2-02 (array_pointer): %d\n", v6);
  a = 10;
  b = 20;
  c = 30;
  memset(ptr_arr, 0, sizeof(ptr_arr));
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  v7 = pointer_array(ptr_arr, 3);
  printf("ARR-L2-03 (pointer_array): %d\n", v7);
  for ( i_2 = 0; i_2 <= 19; ++i_2 )
    arr[i_2] = i_2;
  v8 = array_complex_index(arr, 5, 4, 2, 3);
  printf("ARR-L2-04 (array_complex_index): %d\n", v8);
}


/* Function: ptr_single @ 0x1D1D */
int __cdecl ptr_single(int *p)
{
  return *p + 10;
}


/* Function: ptr_double @ 0x1D38 */
int __cdecl ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x1D55 */
int __cdecl ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x1D74 */
int __cdecl ptr_increment(int *p, int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += *p++;
  return sum;
}


/* Function: ptr_offset @ 0x1DB5 */
int __cdecl ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x1DD9 */
int __cdecl ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x1DF5 */
int __cdecl ptr_void(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(char *)p;
  return -1;
}


/* Function: ptr_const @ 0x1E2B */
int __cdecl ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1E45 */
int __cdecl ptr_const_ptr(int *const p)
{
  *p += 5;
  return *p;
}


/* Function: ptr_func_simple @ 0x1E6A */
int __cdecl ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x1E8E */
int __cdecl ptr_func_complex(int (*f)(int *, char **), int *p)
{
  char *args[2]; // [esp+14h] [ebp-14h] BYREF
  unsigned int v4; // [esp+1Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  args[0] = "test";
  args[1] = 0;
  return f(p, args);
}


/* Function: ptr_cast @ 0x1EEF */
int __cdecl ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x1F1C */
void *__cdecl opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x1F32 */
int __cdecl opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: complex_callback @ 0x1F4A */
int __cdecl complex_callback(int *p, char **args)
{
  *p += 10;
  return *args != 0;
}


/* Function: test_pointer_types @ 0x1F77 */
void test_pointer_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char c7; // [esp+7h] [ebp-81h] BYREF
  int val1; // [esp+8h] [ebp-80h] BYREF
  int val2; // [esp+Ch] [ebp-7Ch] BYREF
  int *ptr2; // [esp+10h] [ebp-78h] BYREF
  int val3; // [esp+14h] [ebp-74h] BYREF
  int *ptr3; // [esp+18h] [ebp-70h] BYREF
  int **pptr3; // [esp+1Ch] [ebp-6Ch] BYREF
  int val7; // [esp+20h] [ebp-68h] BYREF
  int val8; // [esp+24h] [ebp-64h] BYREF
  int val9; // [esp+28h] [ebp-60h] BYREF
  int val11; // [esp+2Ch] [ebp-5Ch] BYREF
  int val12; // [esp+30h] [ebp-58h] BYREF
  int **pptr2; // [esp+34h] [ebp-54h]
  int ***ppptr3; // [esp+38h] [ebp-50h]
  void *handle; // [esp+3Ch] [ebp-4Ch]
  int arr4[5]; // [esp+40h] [ebp-48h] BYREF
  int arr5[5]; // [esp+54h] [ebp-34h] BYREF
  int arr6[5]; // [esp+68h] [ebp-20h] BYREF
  unsigned int v32; // [esp+7Ch] [ebp-Ch]

  v32 = __readgsdword(0x14u);
  puts(asc_329A);
  val1 = 5;
  v0 = ptr_single(&val1);
  printf("PTR-L2-01 (ptr_single): %d\n", v0);
  val2 = 10;
  ptr2 = &val2;
  pptr2 = &ptr2;
  v1 = ptr_double(&ptr2);
  printf("PTR-L2-02 (ptr_double): %d\n", v1);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  ppptr3 = &pptr3;
  v2 = ptr_triple(&pptr3);
  printf("PTR-L2-03 (ptr_triple): %d\n", v2);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  v3 = ptr_increment(arr4, 5);
  printf("PTR-L2-04 (ptr_increment): %d\n", v3);
  arr5[0] = 10;
  arr5[1] = 20;
  arr5[2] = 30;
  arr5[3] = 40;
  arr5[4] = 50;
  v4 = ptr_offset(arr5, 2);
  printf("PTR-L2-05 (ptr_offset): %d\n", v4);
  arr6[0] = 0;
  arr6[1] = 10;
  arr6[2] = 20;
  arr6[3] = 30;
  arr6[4] = 40;
  v5 = ptr_diff(&arr6[4], arr6);
  printf("PTR-L2-06 (ptr_diff): %d\n", v5);
  val7 = 42;
  c7 = 65;
  v6 = ptr_void(&val7, 0);
  printf("PTR-L2-07 (ptr_void): %d\n", v6);
  v7 = ptr_void(&c7, 1);
  printf("PTR-L2-07 (ptr_void): %d\n", v7);
  val8 = 10;
  v8 = ptr_const(&val8);
  printf("PTR-L2-08 (ptr_const): %d\n", v8);
  val9 = 10;
  v9 = ptr_const_ptr(&val9);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n", v9);
  v10 = ptr_func_simple(double_value, 5);
  printf("PTR-L2-10 (ptr_func_simple): %d\n", v10);
  val11 = 5;
  v11 = ptr_func_complex(complex_callback, &val11);
  printf("PTR-L2-11 (ptr_func_complex): %d\n", v11);
  val12 = 305419896;
  v12 = ptr_cast(&val12);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n", v12);
  handle = opaque_handle_create(10);
  v13 = opaque_handle_op(handle);
  printf("PTR-L2-13 (opaque_handle_op): %d\n", v13);
}


/* Function: struct_simple @ 0x2291 */
int __cdecl struct_simple(Point3D *p)
{
  return p->y + p->x + p->z;
}


/* Function: struct_array @ 0x22B9 */
int __cdecl struct_array(Point3D *pts, int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += pts[i].y + pts[i].x + pts[i].z;
  return sum;
}


/* Function: struct_nested @ 0x2336 */
int __cdecl struct_nested(Rect *r)
{
  return r->position.x + r->size.width;
}


/* Function: struct_deep @ 0x2356 */
int __cdecl struct_deep(Widget *w)
{
  return w->bounds.position.z + w->style.fill.r;
}


/* Function: struct_with_ptr @ 0x2377 */
int __cdecl struct_with_ptr(Node *node)
{
  int data; // eax

  if ( node->next )
    data = node->next->data;
  else
    data = 0;
  return node->data + data;
}


/* Function: struct_bitfields @ 0x23AA */
int __cdecl struct_bitfields(Flags *f)
{
  return ((*(_BYTE *)f >> 3) & 7) + ((*(_BYTE *)f >> 1) & 3) + (*(_BYTE *)f & 1) + (*(_WORD *)f >> 6);
}


/* Function: union_type @ 0x23F9 */
int __cdecl union_type(UnionData *u, int type)
{
  if ( !type )
    return u->i;
  if ( type == 1 )
    return (int)u->f;
  return u->bytes[0];
}


/* Function: union_array @ 0x244C */
int __cdecl union_array(UnionData *arr, int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += arr[i].i;
  return sum;
}


/* Function: enum_type @ 0x2495 */
int __cdecl enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x24B4 */
int __cdecl enum_switch(State s)
{
  if ( s == STATE_STOPPED )
    return -1;
  if ( (unsigned int)s > STATE_STOPPED )
    return -99;
  if ( s == STATE_PAUSED )
    return 50;
  if ( s )
    return 100;
  return 0;
}


/* Function: struct_func_ptr @ 0x250E */
int __cdecl struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x2538 */
int __cdecl linked_list(Node *head)
{
  int sum; // [esp+8h] [ebp-8h]

  sum = 0;
  while ( head )
  {
    sum += head->data;
    head = head->next;
  }
  return sum;
}


/* Function: doubly_linked_list @ 0x2577 */
int __cdecl doubly_linked_list(DNode *head)
{
  int sum; // [esp+8h] [ebp-8h]

  sum = 0;
  while ( head )
  {
    sum += head->data;
    head = head->next;
  }
  return sum;
}


/* Function: binary_tree_sum @ 0x25B6 */
int __cdecl binary_tree_sum(TreeNode *root)
{
  int data; // ebx
  int v3; // ebx

  if ( !root )
    return 0;
  data = root->data;
  v3 = binary_tree_sum(root->left) + data;
  return v3 + binary_tree_sum(root->right);
}


/* Function: binary_tree @ 0x260A */
int __cdecl binary_tree(TreeNode *root)
{
  return binary_tree_sum(root);
}


/* Function: graph_traverse @ 0x262E */
int __cdecl graph_traverse(Graph *g)
{
  int sum; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  Edge *edge; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < g->numVertices; ++i )
  {
    for ( edge = g->adjList[i]; edge; edge = edge->next )
      sum += edge->dest;
  }
  return sum;
}


/* Function: test_composite_types @ 0x268B */
void test_composite_types()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int16 v5; // ax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  Node node2; // [esp+4h] [ebp-114h] BYREF
  Node node1; // [esp+Ch] [ebp-10Ch] BYREF
  Flags f; // [esp+14h] [ebp-104h] BYREF
  Device dev; // [esp+1Ch] [ebp-FCh] BYREF
  Edge e1; // [esp+24h] [ebp-F4h] BYREF
  Point3D p1; // [esp+2Ch] [ebp-ECh] BYREF
  TreeNode tree; // [esp+38h] [ebp-E0h] BYREF
  Rect r; // [esp+44h] [ebp-D4h] BYREF
  Widget w; // [esp+58h] [ebp-C0h] BYREF
  UnionData u; // [esp+88h] [ebp-90h] BYREF
  UnionData arr_u[3]; // [esp+8Ch] [ebp-8Ch] BYREF
  Point3D pts[2]; // [esp+98h] [ebp-80h] BYREF
  Node list[3]; // [esp+B0h] [ebp-68h] BYREF
  DNode dlist[2]; // [esp+C8h] [ebp-50h] BYREF
  Graph g; // [esp+E0h] [ebp-38h] BYREF
  unsigned int v31; // [esp+10Ch] [ebp-Ch]

  v31 = __readgsdword(0x14u);
  puts(asc_343E);
  p1.x = 1;
  p1.y = 2;
  p1.z = 3;
  v0 = struct_simple(&p1);
  printf("CMP-L2-01 (struct_simple): %d\n", v0);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  v1 = struct_array(pts, 2);
  printf("CMP-L2-02 (struct_array): %d\n", v1);
  r.position.x = 5;
  r.position.y = 10;
  r.position.z = 0;
  r.size.width = 100;
  r.size.height = 200;
  v2 = struct_nested(&r);
  printf("CMP-L2-03 (struct_nested): %d\n", v2);
  w.bounds.position.x = 1;
  w.bounds.position.y = 2;
  w.bounds.position.z = 3;
  w.bounds.size.width = 10;
  w.bounds.size.height = 20;
  w.style.fill.r = 255;
  memset(&w.style.fill.g, 0, 16);
  w.style.stroke.b = 255;
  w.id = 42;
  v3 = struct_deep(&w);
  printf("CMP-L2-04 (struct_deep): %d\n", v3);
  node2.data = 20;
  node2.next = 0;
  node1.data = 10;
  node1.next = &node2;
  v4 = struct_with_ptr(&node1);
  printf("CMP-L2-05 (struct_with_ptr): %d\n", v4);
  *(_BYTE *)&f |= 1u;
  *(_BYTE *)&f = *(_BYTE *)&f & 0xF9 | 4;
  *(_BYTE *)&f = *(_BYTE *)&f & 0xC7 | 0x18;
  LOBYTE(v5) = *(_BYTE *)&f & 0x3F;
  HIBYTE(v5) = 25;
  *(_WORD *)&f = v5;
  *((_DWORD *)&f + 1) &= 0xFFF00000;
  v6 = struct_bitfields(&f);
  printf("CMP-L2-06 (struct_bitfields): %d\n", v6);
  u.i = 305419896;
  v7 = union_type(&u, 0);
  printf("CMP-L2-07 (union_type): %d\n", v7);
  arr_u[0].i = 10;
  arr_u[1].i = 20;
  arr_u[2].i = 30;
  v8 = union_array(arr_u, 3);
  printf("CMP-L2-08 (union_array): %d\n", v8);
  v9 = enum_type(STATE_RUNNING);
  printf("CMP-L2-09 (enum_type): %d\n", v9);
  v10 = enum_switch(STATE_PAUSED);
  printf("CMP-L2-10 (enum_switch): %d\n", v10);
  dev.data = 10;
  dev.process = process_int;
  v11 = struct_func_ptr(&dev);
  printf("CMP-L2-11 (struct_func_ptr): %d\n", v11);
  list[0].data = 10;
  list[0].next = &list[1];
  list[1].data = 20;
  list[1].next = &list[2];
  list[2].data = 30;
  list[2].next = 0;
  v12 = linked_list(list);
  printf("CMP-L2-12 (linked_list): %d\n", v12);
  dlist[0].data = 10;
  dlist[0].prev = 0;
  dlist[1].data = 20;
  dlist[1].next = 0;
  dlist[1].prev = dlist;
  dlist[0].next = &dlist[1];
  v13 = doubly_linked_list(dlist);
  printf("CMP-L2-13 (doubly_linked_list): %d\n", v13);
  tree.data = 100;
  tree.left = 0;
  tree.right = 0;
  v14 = binary_tree(&tree);
  printf("CMP-L2-14 (binary_tree): %d\n", v14);
  e1.dest = 1;
  e1.next = 0;
  memset(&g, 0, sizeof(g));
  g.numVertices = 2;
  g.adjList[0] = &e1;
  v15 = graph_traverse(&g);
  printf("CMP-L2-15 (graph_traverse): %d\n", v15);
}


/* Function: main @ 0x2B69 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x2B98 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2BA0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2BC0 */
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


/* Function: .term_proc @ 0x2C0C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6014 */

/* FAILED to decompile: printf @ 0x6018 */

/* FAILED to decompile: __stack_chk_fail @ 0x601C */

/* FAILED to decompile: __cxa_finalize @ 0x6020 */

/* FAILED to decompile: puts @ 0x6024 */

/* Total functions decompiled: 77, failed: 5 */
