/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_gcc_O2_g
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


/* Function: process_char @ 0x11C0 */
char __fastcall process_char(char c)
{
  char result; // al

  result = c + 32;
  if ( (unsigned __int8)(c - 65) >= 0x1Au )
    return c;
  return result;
}


/* Function: process_short @ 0x11E0 */
__int16 __fastcall process_short(__int16 a, __int16 b)
{
  return b + a;
}


/* Function: process_int @ 0x11F0 */
int __fastcall process_int(int x)
{
  return 2 * x + 1;
}


/* Function: process_long @ 0x1200 */
__int64 __fastcall process_long(__int64 x)
{
  return 2 * x;
}


/* Function: process_ll @ 0x1210 */
__int64 __fastcall process_ll(__int64 x)
{
  return x * x;
}


/* Function: process_float @ 0x1220 */
float __fastcall process_float(float a1, float f)
{
  return (float)(a1 * 1.5) + 0.5;
}


/* Function: process_double @ 0x1240 */
double __fastcall process_double(double a1, double d)
{
  return a1 * 0.5 + 0.1;
}


/* Function: process_ld @ 0x1260 */
long double __cdecl process_ld(long double d)
{
  return d * d + 1.0;
}


/* Function: process_bool @ 0x1270 */
bool __fastcall process_bool(int x)
{
  bool result; // al

  result = (x & 1) == 0;
  if ( x <= 0 )
    return 0;
  return result;
}


/* Function: const_param @ 0x1290 */
int __fastcall const_param(const int *p)
{
  return *p + 10;
}


/* Function: volatile_access @ 0x12A0 */
int __fastcall volatile_access(volatile int *p)
{
  return 2 * *p;
}


/* Function: test_data_types_l1 @ 0x12B0 */
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


/* Function: array_1d_stack @ 0x1440 */
int __fastcall array_1d_stack(int *arr, int n)
{
  int *v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = &arr[n - 1 + 1];
  result = 0;
  do
    result += *arr++;
  while ( arr != v2 );
  return result;
}


/* Function: array_string @ 0x1470 */
int __fastcall array_string(char *str)
{
  __int64 v1; // rax
  int v2; // r8d

  if ( !*str )
    return 0;
  v1 = 1;
  do
    v2 = v1++;
  while ( str[v1 - 1] );
  return v2;
}


/* Function: array_2d_stack @ 0x14A0 */
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


/* Function: array_3d @ 0x14C0 */
int __fastcall array_3d(int (*arr)[5][5])
{
  int *v1; // rcx
  int result; // eax
  int *v3; // rdx
  int v4; // eax

  v1 = (*arr)[5];
  result = 0;
  do
  {
    v3 = v1 - 25;
    do
    {
      v4 = *v3 + result;
      v3 += 5;
      result = *(v3 - 1) + *(v3 - 2) + *(v3 - 3) + *(v3 - 4) + v4;
    }
    while ( v3 != v1 );
    v1 = v3 + 25;
  }
  while ( v3 + 25 != (*arr)[30] );
  return result;
}


/* Function: array_vla @ 0x1500 */
int __fastcall array_vla(int n, int *arr)
{
  int *v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = &arr[n - 1 + 1];
  result = 0;
  do
    result += *arr++;
  while ( arr != v2 );
  return result;
}


/* Function: array_pointer @ 0x1530 */
int __fastcall array_pointer(int (*arr)[10], int n)
{
  int *v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = &(*arr)[10 * (n - 1) + 10];
  result = 0;
  do
    result += (*arr++)[0];
  while ( arr != (int (*)[10])v2 );
  return result;
}


/* Function: pointer_array @ 0x1570 */
int __fastcall pointer_array(int **arr, int n)
{
  int v2; // ecx
  __int64 v3; // rax
  int v4; // r8d
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


/* Function: array_complex_index @ 0x15C0 */
int __fastcall array_complex_index(int *arr, int w, int h, int x, int y)
{
  if ( (y | x) < 0 || x >= w || y >= h )
    return -1;
  else
    return arr[x + y * w];
}


/* Function: array_oob @ 0x15F0 */
int __fastcall array_oob(int *arr, int n)
{
  int result; // eax
  int *v3; // rdx

  if ( n < 0 )
    return 0;
  result = 0;
  v3 = &arr[n + 1];
  do
    result += *arr++;
  while ( arr != v3 );
  return result;
}


/* Function: test_array_types @ 0x1620 */
void __cdecl test_array_types()
{
  __int64 v0; // rax
  int v1; // edx
  int *v2; // r8
  int v3; // ecx
  int *v4; // rsi
  __int64 i; // rax
  int v6; // edx
  int v7; // edx
  int *v8; // rcx
  int *v9; // rdx
  int *v10; // rax
  int v11; // edx
  int *v12; // rax
  int v13; // edx
  __int64 j; // rax
  int v15[20]; // [rsp+0h] [rbp-3F8h]
  int matrix[10][10]; // [rsp+50h] [rbp-3A8h] BYREF
  int cube[5][5][5]; // [rsp+1E0h] [rbp-218h] BYREF
  char str[6]; // [rsp+3E2h] [rbp-16h] BYREF
  unsigned __int64 v20; // [rsp+3E8h] [rbp-10h]
  char v21; // [rsp+438h] [rbp+40h] BYREF

  v20 = __readfsqword(0x28u);
  puts(asc_33E1);
  __printf_chk(1, "ARR-L1-01 (array_1d_stack): %d\n", 15);
  strcpy(str, "hello");
  v0 = 1;
  do
    v1 = v0++;
  while ( str[v0 - 1] );
  __printf_chk(1, "ARR-L1-02 (array_string): %d\n", v1);
  v2 = matrix[0];
  v3 = 0;
  v4 = matrix[0];
  do
  {
    for ( i = 0; i != 10; ++i )
    {
      v6 = 0;
      if ( v3 == (_DWORD)i )
        v6 = i;
      v4[i] = v6;
    }
    ++v3;
    v4 += 10;
  }
  while ( v3 != 10 );
  v7 = 0;
  do
  {
    v7 += *v2;
    v2 += 11;
  }
  while ( cube[0][2] != v2 );
  __printf_chk(1, "ARR-L1-03 (array_2d_stack): %d\n", v7);
  v8 = cube[1][0];
  v9 = cube[1][0];
  do
  {
    v10 = v9 - 25;
    do
    {
      *v10 = 1;
      v10 += 5;
      *(v10 - 4) = 1;
      *(v10 - 3) = 1;
      *(v10 - 2) = 1;
      *(v10 - 1) = 1;
    }
    while ( v10 != v9 );
    v9 = v10 + 25;
  }
  while ( &v21 != (char *)(v10 + 25) );
  v11 = 0;
  do
  {
    v12 = v8 - 25;
    do
    {
      v13 = *v12 + v11;
      v12 += 5;
      v11 = *(v12 - 1) + *(v12 - 2) + *(v12 - 3) + *(v12 - 4) + v13;
    }
    while ( v8 != v12 );
    v8 += 25;
  }
  while ( v8 != (int *)&v21 );
  __printf_chk(1, "ARR-L1-04 (array_3d): %d\n", v11);
  __printf_chk(1, "ARR-L2-01 (array_vla): %d\n", 60);
  __printf_chk(1, "ARR-L2-02 (array_pointer): %d\n", 100);
  __printf_chk(1, "ARR-L2-03 (pointer_array): %d\n", 60);
  for ( j = 0; j != 20; ++j )
    v15[j] = j;
  __printf_chk(1, "ARR-L2-04 (array_complex_index): %d\n", v15[17]);
}


/* Function: ptr_single @ 0x1840 */
__int64 __fastcall ptr_single(_DWORD *a1)
{
  return (unsigned int)(*a1 + 10);
}


/* Function: ptr_double @ 0x1850 */
int __fastcall ptr_double(int **p)
{
  return **p + 5;
}


/* Function: ptr_triple @ 0x1860 */
int __fastcall ptr_triple(int ***p)
{
  return ***p + 1;
}


/* Function: ptr_increment @ 0x1870 */
int __fastcall ptr_increment(int *p, int n)
{
  int result; // eax
  int *v3; // rdx

  if ( n <= 0 )
    return 0;
  result = 0;
  v3 = &p[n];
  do
    result += *p++;
  while ( p != v3 );
  return result;
}


/* Function: ptr_offset @ 0x18A0 */
int __fastcall ptr_offset(int *p, int offset)
{
  return p[offset];
}


/* Function: ptr_diff @ 0x18B0 */
int __fastcall ptr_diff(int *p1, int *p2)
{
  return p1 - p2;
}


/* Function: ptr_void @ 0x18C0 */
int __fastcall ptr_void(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(char *)p;
  return -1;
}


/* Function: ptr_const @ 0x18F0 */
int __fastcall ptr_const(const int *p)
{
  return 2 * *p;
}


/* Function: ptr_const_ptr @ 0x1900 */
int __fastcall ptr_const_ptr(int *const p)
{
  int result; // eax

  result = *p + 5;
  *p = result;
  return result;
}


/* Function: ptr_func_simple @ 0x1910 */
int __fastcall ptr_func_simple(int (*f)(int), int x)
{
  return f(x);
}


/* Function: ptr_func_complex @ 0x1920 */
int __fastcall ptr_func_complex(int (*f)(int *, char **), int *p)
{
  char *args[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  args[1] = 0;
  args[0] = "test";
  return f(p, args);
}


/* Function: ptr_cast @ 0x1970 */
int __fastcall ptr_cast(void *p)
{
  return *(_DWORD *)p;
}


/* Function: opaque_handle_create @ 0x1980 */
void *__fastcall opaque_handle_create(int size)
{
  return (void *)size;
}


/* Function: opaque_handle_op @ 0x1990 */
int __fastcall opaque_handle_op(void *handle)
{
  return 2 * (_DWORD)handle;
}


/* Function: test_pointer_types @ 0x19A0 */
void __cdecl test_pointer_types()
{
  int v0; // ecx
  int v1; // edx
  int *i; // rax
  int arr4[5]; // [rsp+0h] [rbp-28h] BYREF
  char v4; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  puts(asc_3454);
  __printf_chk(1, "PTR-L2-01 (ptr_single): %d\n", 15);
  __printf_chk(1, "PTR-L2-02 (ptr_double): %d\n", 15);
  __printf_chk(1, "PTR-L2-03 (ptr_triple): %d\n", 6);
  arr4[4] = 5;
  v0 = 1;
  *(_QWORD *)arr4 = 0x200000001LL;
  v1 = 0;
  *(_QWORD *)&arr4[2] = 0x400000003LL;
  for ( i = arr4; ; v0 = *i )
  {
    ++i;
    v1 += v0;
    if ( i == (int *)&v4 )
      break;
  }
  __printf_chk(1, "PTR-L2-04 (ptr_increment): %d\n", v1);
  __printf_chk(1, "PTR-L2-05 (ptr_offset): %d\n", 30);
  __printf_chk(1, "PTR-L2-06 (ptr_diff): %d\n", 4);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 42);
  __printf_chk(1, "PTR-L2-07 (ptr_void): %d\n", 65);
  __printf_chk(1, "PTR-L2-08 (ptr_const): %d\n", 20);
  __printf_chk(1, "PTR-L2-09 (ptr_const_ptr): %d\n", 15);
  __printf_chk(1, "PTR-L2-10 (ptr_func_simple): %d\n", 10);
  __printf_chk(1, "PTR-L2-11 (ptr_func_complex): %d\n", 1);
  __printf_chk(1, "PTR-L2-12 (ptr_cast): 0x%x\n", 305419896);
  __printf_chk(1, "PTR-L2-13 (opaque_handle_op): %d\n", 20);
}


/* Function: struct_simple @ 0x1B80 */
int __fastcall struct_simple(Point3D *p)
{
  return p->z + p->x + p->y;
}


/* Function: struct_array @ 0x1B90 */
int __fastcall struct_array(Point3D *pts, int n)
{
  int v2; // r8d
  Point3D *v3; // rdx
  int y; // eax

  if ( n <= 0 )
    return 0;
  v2 = 0;
  v3 = &pts[(unsigned int)(n - 1) + 1];
  do
  {
    y = pts->y;
    ++pts;
    v2 += pts[-1].z + pts[-1].x + y;
  }
  while ( pts != v3 );
  return v2;
}


/* Function: struct_nested @ 0x1BE0 */
int __fastcall struct_nested(Rect *r)
{
  return r->size.width + r->position.x;
}


/* Function: struct_deep @ 0x1BF0 */
int __fastcall struct_deep(Widget *w)
{
  return w->style.fill.r + w->bounds.position.z;
}


/* Function: struct_with_ptr @ 0x1C00 */
int __fastcall struct_with_ptr(Node *node)
{
  Node *next; // rdx
  int result; // eax

  next = node->next;
  result = node->data;
  if ( next )
    result += next->data;
  return result;
}


/* Function: struct_bitfields @ 0x1C20 */
int __fastcall struct_bitfields(Flags *f)
{
  return (*(_WORD *)f >> 6) + ((*(_BYTE *)f >> 3) & 7) + ((*(_BYTE *)f >> 1) & 3) + (*(_BYTE *)f & 1);
}


/* Function: union_type @ 0x1C50 */
int __fastcall union_type(UnionData *u, int type)
{
  if ( !type )
    return u->i;
  if ( type == 1 )
    return (int)u->f;
  return u->bytes[0];
}


/* Function: union_array @ 0x1C80 */
int __fastcall union_array(UnionData *arr, int n)
{
  UnionData *v2; // rdx
  int result; // eax

  if ( n <= 0 )
    return 0;
  v2 = &arr[n - 1 + 1];
  result = 0;
  do
  {
    result += arr->i;
    ++arr;
  }
  while ( arr != v2 );
  return result;
}


/* Function: enum_type @ 0x1CB0 */
int __fastcall enum_type(State s)
{
  return 10 * s;
}


/* Function: enum_switch @ 0x1CC0 */
int __fastcall enum_switch(State s)
{
  int result; // eax

  result = -99;
  if ( (unsigned int)s <= STATE_STOPPED )
    return CSWTCH_61[s];
  return result;
}


/* Function: struct_func_ptr @ 0x1CE0 */
int __fastcall struct_func_ptr(Device *dev)
{
  return dev->process(dev->data);
}


/* Function: linked_list @ 0x1CF0 */
int __fastcall linked_list(Node *head)
{
  int result; // eax

  for ( result = 0; head; head = head->next )
    result += head->data;
  return result;
}


/* Function: doubly_linked_list @ 0x1D20 */
int __fastcall doubly_linked_list(DNode *head)
{
  int result; // eax

  for ( result = 0; head; head = head->next )
    result += head->data;
  return result;
}


/* Function: binary_tree_sum @ 0x1D50 */
int __fastcall binary_tree_sum(TreeNode *root)
{
  TreeNode *v1; // r11
  TreeNode *v2; // rbx
  int v3; // r10d
  int v4; // r13d
  int v5; // r11d
  TreeNode *v6; // rdx
  TreeNode *v7; // rsi
  int v8; // ecx
  int v9; // r9d
  TreeNode *v10; // rbp
  int v11; // r15d
  int v12; // r8d
  TreeNode *v13; // r13
  TreeNode *v14; // r12
  int v15; // r14d
  int v16; // ebx
  int v17; // eax
  TreeNode *left; // [rsp+8h] [rbp-A0h]
  TreeNode *v20; // [rsp+10h] [rbp-98h]
  TreeNode *v21; // [rsp+18h] [rbp-90h]
  int v22; // [rsp+20h] [rbp-88h]
  int data; // [rsp+24h] [rbp-84h]
  int v24; // [rsp+28h] [rbp-80h]
  int v25; // [rsp+2Ch] [rbp-7Ch]
  int v26; // [rsp+30h] [rbp-78h]
  int v27; // [rsp+34h] [rbp-74h]
  int v28; // [rsp+38h] [rbp-70h]
  int v29; // [rsp+3Ch] [rbp-6Ch]
  TreeNode *v30; // [rsp+40h] [rbp-68h]
  TreeNode *v31; // [rsp+48h] [rbp-60h]
  int i; // [rsp+50h] [rbp-58h]
  int v33; // [rsp+54h] [rbp-54h]
  int v34; // [rsp+60h] [rbp-48h]
  int v35; // [rsp+64h] [rbp-44h]
  int v36; // [rsp+68h] [rbp-40h]
  int v37; // [rsp+6Ch] [rbp-3Ch]

  v21 = root;
  for ( i = 0; v21; v21 = v21->right )
  {
    v25 = 0;
    data = v21->data;
    left = v21->left;
    if ( left )
    {
      do
      {
        v26 = 0;
        v24 = left->data;
        v20 = left->left;
        if ( v20 )
        {
          do
          {
            v27 = 0;
            v1 = v20->left;
            v29 = v20->data;
            if ( v1 )
            {
              do
              {
                v2 = v1->left;
                v3 = 0;
                v28 = v1->data;
                if ( v2 )
                {
                  v30 = v1;
                  do
                  {
                    v4 = v2->data;
                    v5 = 0;
                    v6 = v2->left;
                    if ( v6 )
                    {
                      do
                      {
                        v7 = v6->left;
                        v8 = v6->data;
                        v9 = 0;
                        if ( v7 )
                        {
                          do
                          {
                            v10 = v7->left;
                            v11 = 0;
                            v22 = v7->data;
                            if ( v10 )
                            {
                              v12 = v4;
                              v13 = v2;
                              do
                              {
                                v14 = v10->left;
                                v15 = v10->data;
                                v16 = 0;
                                if ( v14 )
                                {
                                  do
                                  {
                                    v37 = v12;
                                    v36 = v9;
                                    v35 = v5;
                                    v34 = v8;
                                    v33 = v3;
                                    v31 = v6;
                                    v17 = v14->data + binary_tree_sum(v14->left);
                                    v14 = v14->right;
                                    v16 += v17;
                                    v6 = v31;
                                    v3 = v33;
                                    v8 = v34;
                                    v5 = v35;
                                    v9 = v36;
                                    v12 = v37;
                                  }
                                  while ( v14 );
                                  v15 += v16;
                                }
                                v10 = v10->right;
                                v11 += v15;
                              }
                              while ( v10 );
                              v22 += v11;
                              v2 = v13;
                              v4 = v12;
                            }
                            v7 = v7->right;
                            v9 += v22;
                          }
                          while ( v7 );
                          v8 += v9;
                        }
                        v6 = v6->right;
                        v5 += v8;
                      }
                      while ( v6 );
                      v4 += v5;
                    }
                    v2 = v2->right;
                    v3 += v4;
                  }
                  while ( v2 );
                  v28 += v3;
                  v1 = v30;
                }
                v1 = v1->right;
                v27 += v28;
              }
              while ( v1 );
              v29 += v27;
            }
            v26 += v29;
            v20 = v20->right;
          }
          while ( v20 );
          v24 += v26;
        }
        v25 += v24;
        left = left->right;
      }
      while ( left );
      data += v25;
    }
    i += data;
  }
  return i;
}


/* Function: binary_tree @ 0x1FB0 */
int __fastcall binary_tree(TreeNode *root)
{
  int v1; // r12d
  TreeNode *v2; // rbx
  int v3; // eax

  v1 = 0;
  if ( root )
  {
    v2 = root;
    do
    {
      v3 = v2->data + binary_tree_sum(v2->left);
      v2 = v2->right;
      v1 += v3;
    }
    while ( v2 );
  }
  return v1;
}


/* Function: graph_traverse @ 0x1FF0 */
int __fastcall graph_traverse(Graph *g)
{
  int numVertices; // eax
  int v2; // r8d
  Graph *v3; // rdx
  Edge *i; // rax

  numVertices = g->numVertices;
  if ( numVertices <= 0 )
    return 0;
  v2 = 0;
  v3 = (Graph *)&g->adjList[(unsigned int)(numVertices - 1) + 1];
  do
  {
    for ( i = g->adjList[0]; i; i = i->next )
      v2 += i->dest;
    g = (Graph *)((char *)g + 8);
  }
  while ( g != v3 );
  return v2;
}


/* Function: test_composite_types @ 0x2040 */
void __cdecl test_composite_types()
{
  Node *v0; // rax
  int data; // ecx
  int v2; // edx
  DNode *v3; // rax
  int v4; // ecx
  int v5; // edx
  int v6; // eax
  Node list[3]; // [rsp+0h] [rbp-78h] BYREF
  DNode dlist[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  puts(asc_354A);
  __printf_chk(1, "CMP-L2-01 (struct_simple): %d\n", 6);
  __printf_chk(1, "CMP-L2-02 (struct_array): %d\n", 9);
  __printf_chk(1, "CMP-L2-03 (struct_nested): %d\n", 105);
  __printf_chk(1, "CMP-L2-04 (struct_deep): %d\n", 258);
  __printf_chk(1, "CMP-L2-05 (struct_with_ptr): %d\n", 30);
  __printf_chk(1, "CMP-L2-06 (struct_bitfields): %d\n", 106);
  __printf_chk(1, "CMP-L2-07 (union_type): %d\n", 305419896);
  __printf_chk(1, "CMP-L2-08 (union_array): %d\n", 60);
  __printf_chk(1, "CMP-L2-09 (enum_type): %d\n", 10);
  __printf_chk(1, "CMP-L2-10 (enum_switch): %d\n", 50);
  __printf_chk(1, "CMP-L2-11 (struct_func_ptr): %d\n", 21);
  v0 = &list[1];
  list[1].next = &list[2];
  data = 10;
  v2 = 0;
  list[1].data = 20;
  list[2].data = 30;
  list[2].next = 0;
  while ( 1 )
  {
    v2 += data;
    if ( !v0 )
      break;
    data = v0->data;
    v0 = v0->next;
  }
  __printf_chk(1, "CMP-L2-12 (linked_list): %d\n", v2);
  v3 = dlist;
  dlist[0].data = 10;
  dlist[0].next = &dlist[1];
  v4 = 10;
  v5 = 0;
  dlist[0].prev = 0;
  dlist[1].data = 20;
  dlist[1].next = 0;
  dlist[1].prev = dlist;
  while ( 1 )
  {
    v3 = v3->next;
    v5 += v4;
    if ( !v3 )
      break;
    v4 = v3->data;
  }
  __printf_chk(1, "CMP-L2-13 (doubly_linked_list): %d\n", v5);
  v6 = binary_tree_sum(0);
  __printf_chk(1, "CMP-L2-14 (binary_tree): %d\n", v6 + 100);
  __printf_chk(1, "CMP-L2-15 (graph_traverse): %d\n", 1);
}


/* Function: .term_proc @ 0x2280 */
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

/* Total functions decompiled: 66, failed: 6 */
