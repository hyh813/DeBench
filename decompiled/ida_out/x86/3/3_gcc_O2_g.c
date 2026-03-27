/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/3/3_gcc_O2_g
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
void sub_1080()
{
  sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
  sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
  sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
  sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
  sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
  sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
int __usercall sub_1140@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 80))();
}


/* Function: main @ 0x1250 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: _start @ 0x1280 */
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


/* Function: sub_12AC @ 0x12AC */
void sub_12AC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12B0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x12C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1300 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1350 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1140((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x13E0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x13E9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13ED */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: double_value @ 0x1400 */
int __cdecl double_value(int x)
{
  return 2 * x;
}


/* Function: local_vars @ 0x1410 */
int __cdecl local_vars(int x)
{
  return 2 * x + 10;
}


/* Function: local_array @ 0x1420 */
int __cdecl local_array(int n)
{
  int v1; // edx
  int *v2; // eax
  int arr[10]; // [esp+4h] [ebp-38h] BYREF
  unsigned int v5; // [esp+2Ch] [ebp-10h] BYREF

  v1 = 0;
  v5 = __readgsdword(0x14u);
  v2 = arr;
  do
  {
    *v2++ = v1;
    v1 += n;
  }
  while ( v2 != (int *)&v5 );
  return arr[5];
}


/* Function: local_struct @ 0x1470 */
int __cdecl local_struct(int x)
{
  return 3 * x;
}


/* Function: address_of_local @ 0x1480 */
int __cdecl address_of_local(int *out)
{
  *out = 42;
  return 42;
}


/* Function: address_of_array @ 0x14A0 */
int __cdecl address_of_array(int *arr)
{
  return 2 * *arr;
}


/* Function: large_stack_frame @ 0x14B0 */
__int64 large_stack_frame()
{
  int i; // eax
  __int64 result; // rax
  char large_buf[2048]; // [esp+Ch] [ebp-810h]
  unsigned int v3; // [esp+80Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  for ( i = 0; i != 2048; ++i )
    large_buf[i] = i;
  LODWORD(result) = large_buf[1024];
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: vla_stack @ 0x1510 */
int __cdecl vla_stack(int n)
{
  int v1; // edx
  _WORD *v2; // ecx
  __int16 v3; // dx
  int v4; // edx
  void *v5; // esp
  int v6; // eax
  _WORD v8[2048]; // [esp-1000h] [ebp-1018h] BYREF
  _DWORD v9[5]; // [esp+0h] [ebp-18h] BYREF

  v9[3] = __readgsdword(0x14u);
  if ( (unsigned int)(n - 1) > 0x3E7 )
    return -1;
  v1 = 4 * n + 15;
  v2 = (_WORD *)((char *)v9 - (v1 & 0xFFFFF000));
  v3 = v1 & 0xFFF0;
  if ( v9 != (_DWORD *)v2 )
  {
    while ( v8 != v2 )
      ;
  }
  v4 = v3 & 0xFFF;
  v5 = alloca(v4);
  if ( v4 )
    *(_DWORD *)((char *)&v8[-2] + v4) = *(_DWORD *)((char *)&v8[-2] + v4);
  v6 = 0;
  do
  {
    *(_DWORD *)&v8[v6] = v6;
    v6 += 2;
  }
  while ( v6 != 2 * n );
  return *(_DWORD *)&v8[2 * (n >> 1)];
}


/* Function: alloca_usage @ 0x15C0 */
int __cdecl alloca_usage(int n)
{
  int v1; // edx
  _DWORD *v2; // ebx
  __int16 v3; // dx
  int v4; // edx
  void *v5; // esp
  int i; // eax
  _DWORD v8[1024]; // [esp-1000h] [ebp-1018h] BYREF
  _DWORD v9[5]; // [esp+0h] [ebp-18h] BYREF

  v9[3] = __readgsdword(0x14u);
  if ( n <= 0 )
    return -1;
  v1 = 4 * n + 27;
  v2 = (_DWORD *)((char *)v9 - (v1 & 0xFFFFF000));
  v3 = v1 & 0xFFF0;
  if ( v9 != v2 )
  {
    while ( v8 != v2 )
      ;
  }
  v4 = v3 & 0xFFF;
  v5 = alloca(v4);
  if ( v4 )
    *(_DWORD *)((char *)&v8[-1] + v4) = *(_DWORD *)((char *)&v8[-1] + v4);
  for ( i = 0; i != n; ++i )
    v8[i] = 3 * i;
  return v8[n >> 1];
}


/* Function: stack_alias @ 0x1660 */
int __cdecl stack_alias(int *p1, int *p2)
{
  return 20;
}


/* Function: test_stack_memory @ 0x1670 */
void test_stack_memory()
{
  int v0; // eax
  int v1; // eax

  puts(asc_3008);
  __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
  __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
  __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
  __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
  __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
  v0 = large_stack_frame();
  __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
  __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
  v1 = alloca_usage(10);
  __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
  __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1750 */
int __cdecl heap_basic(int n)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  int i; // eax
  int v4; // esi

  v1 = malloc(4 * n);
  if ( !v1 )
    return -1;
  v2 = v1;
  if ( n > 0 )
  {
    for ( i = 0; i != n; ++i )
      v2[i] = i * 2;
  }
  v4 = v2[n / 2];
  free(v2);
  return v4;
}


/* Function: heap_calloc @ 0x17C0 */
int __cdecl heap_calloc(int n)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  int v3; // esi

  v1 = calloc(n, 4u);
  if ( !v1 )
    return -1;
  if ( n <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = v1;
    v3 = 0;
    do
      v3 += *v2++;
    while ( v2 != &v1[n] );
  }
  free(v1);
  return v3;
}


/* Function: heap_realloc @ 0x1830 */
int heap_realloc()
{
  int *v0; // eax
  int *v1; // esi
  _DWORD *v2; // eax
  int v3; // esi
  int *p; // [esp+0h] [ebp-1Ch]

  v0 = (int *)malloc(0x14u);
  if ( !v0 )
    return -1;
  *v0 = 1;
  v1 = v0;
  v0[1] = 2;
  v0[2] = 3;
  v0[3] = 4;
  v0[4] = 5;
  v2 = realloc(v0, 0x28u);
  if ( v2 )
  {
    v3 = 50;
    if ( v2[2] != 3 )
      v3 = -3;
    free(v2);
  }
  else
  {
    p = v1;
    v3 = -2;
    free(p);
  }
  return v3;
}


/* Function: heap_array @ 0x18D0 */
int __cdecl heap_array(int n)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  int i; // eax
  int v4; // esi

  v1 = malloc(4 * n);
  if ( !v1 )
    return -1;
  v2 = v1;
  if ( n > 0 )
  {
    for ( i = 0; i != n; ++i )
      v2[i] = 3 * i;
  }
  v4 = v2[n / 2];
  free(v2);
  return v4;
}


/* Function: heap_struct @ 0x1940 */
int __cdecl heap_struct(int x)
{
  void *v1; // eax
  int v2; // esi

  v1 = malloc(8u);
  if ( !v1 )
    return -1;
  v2 = 3 * x;
  free(v1);
  return v2;
}


/* Function: heap_nested @ 0x1990 */
int __cdecl heap_nested(Node **head)
{
  Node *v1; // esi
  Node *v2; // eax

  v1 = (Node *)malloc(8u);
  *head = v1;
  if ( !v1 )
    return -1;
  v1->data = 10;
  v2 = (Node *)malloc(8u);
  v1->next = v2;
  if ( v2 )
  {
    v2->data = 20;
    v2->next = 0;
    return 0;
  }
  else
  {
    free(v1);
    return -2;
  }
}


/* Function: linked_list_heap @ 0x1A10 */
int linked_list_heap()
{
  _DWORD *v0; // eax
  int v1; // ebp
  _DWORD *v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // eax
  int v5; // edi
  void *v6; // eax
  void *v8; // eax

  v0 = 0;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = v0;
    v0 = malloc(8u);
    if ( !v0 )
      break;
    *v0 = v1;
    v0[1] = 0;
    if ( v2 )
      v3[1] = v0;
    else
      v2 = v0;
    v1 += 10;
    if ( v1 == 50 )
    {
      v4 = v2;
      v5 = 0;
      do
      {
        v5 += *v4;
        v4 = (_DWORD *)v4[1];
      }
      while ( v4 );
      do
      {
        v6 = v2;
        v2 = (_DWORD *)v2[1];
        free(v6);
      }
      while ( v2 );
      return v5;
    }
  }
  while ( v2 )
  {
    v8 = v2;
    v2 = (_DWORD *)v2[1];
    free(v8);
  }
  return -1;
}


/* Function: create_tree_node @ 0x1AC0 */
TreeNode *__cdecl create_tree_node(int data)
{
  TreeNode *result; // eax

  result = (TreeNode *)malloc(0xCu);
  if ( result )
  {
    result->left = 0;
    result->right = 0;
    result->data = data;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x1B00 */
int tree_heap_traversal()
{
  void *v0; // eax
  void *v1; // esi
  void *ptr; // edi
  void *v3; // ebp
  void *v5; // eax

  v0 = malloc(0xCu);
  if ( !v0 )
    return -1;
  v1 = v0;
  ptr = malloc(0xCu);
  if ( !ptr )
  {
    v5 = malloc(0xCu);
    if ( v5 )
      free(v5);
    goto LABEL_7;
  }
  v3 = malloc(0xCu);
  if ( !v3 )
  {
    free(ptr);
LABEL_7:
    free(v1);
    return -2;
  }
  free(ptr);
  free(v3);
  free(v1);
  return 60;
}


/* Function: memory_leak @ 0x1BD0 */
int __cdecl memory_leak(int n)
{
  _DWORD *v1; // eax
  int i; // edx

  v1 = malloc(4 * n);
  if ( !v1 )
    return -1;
  if ( n > 0 )
  {
    for ( i = 0; i != n; ++i )
      v1[i] = i;
  }
  return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1C30 */
int dangling_pointer()
{
  void *v0; // eax
  void *ptr; // esi

  v0 = malloc(4u);
  if ( !v0 )
    return -1;
  ptr = v0;
  __printf_chk(1, "value before free: %d\n", 42);
  free(ptr);
  return *(_DWORD *)ptr;
}


/* Function: double_free @ 0x1C80 */
int __cdecl double_free(int *p)
{
  void *ptr; // eax
  void *v3; // esi

  if ( p )
    return *p;
  ptr = malloc(4u);
  v3 = ptr;
  if ( !ptr )
    return -1;
  free(ptr);
  free(v3);
  return -2;
}


/* Function: heap_overflow @ 0x1CE0 */
int heap_overflow()
{
  _DWORD *v0; // eax
  _DWORD *v1; // ecx
  int i; // edx
  int v3; // esi

  v0 = malloc(0x28u);
  if ( !v0 )
    return -1;
  v1 = v0;
  for ( i = 0; i != 1100; i += 100 )
    *v1++ = i;
  v3 = *v0;
  free(v0);
  return v3;
}


/* Function: test_heap_memory @ 0x1D40 */
void test_heap_memory()
{
  _DWORD *v0; // eax
  int i; // edx
  int v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // eax
  int j; // edx
  int v9; // esi
  void *v10; // eax
  int v11; // eax
  void **v12; // esi
  _DWORD *v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // esi
  int v21; // eax
  int result; // [esp+8h] [ebp-24h]
  int status[5]; // [esp+18h] [ebp-14h] BYREF

  status[1] = __readgsdword(0x14u);
  puts(asc_30EA);
  v0 = malloc(0x28u);
  if ( v0 )
  {
    for ( i = 0; i != 10; ++i )
      v0[i] = i * 2;
    v2 = v0[5];
    free(v0);
  }
  else
  {
    v2 = -1;
  }
  __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v2);
  v3 = calloc(5u, 4u);
  if ( v3 )
  {
    v4 = v3;
    v5 = 0;
    do
      v5 += *v4++;
    while ( v4 != v3 + 5 );
    free(v3);
  }
  else
  {
    v5 = -1;
  }
  __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
  v6 = heap_realloc();
  __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v6);
  v7 = malloc(0x28u);
  if ( v7 )
  {
    for ( j = 0; j != 10; ++j )
      v7[j] = 3 * j;
    v9 = v7[5];
    free(v7);
  }
  else
  {
    v9 = -1;
  }
  __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v9);
  v10 = malloc(8u);
  if ( v10 )
  {
    free(v10);
    v11 = 15;
  }
  else
  {
    v11 = -1;
  }
  __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v11);
  v12 = (void **)malloc(8u);
  if ( v12 )
  {
    v13 = malloc(8u);
    v12[1] = v13;
    if ( v13 )
    {
      *v13 = 20;
      v13[1] = 0;
      v14 = 0;
    }
    else
    {
      free(v12);
      v14 = -2;
    }
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v14);
    free(v12[1]);
    free(v12);
  }
  else
  {
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
  }
  v15 = linked_list_heap();
  __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v15);
  v16 = tree_heap_traversal();
  __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v16);
  v17 = malloc(0x14u);
  if ( v17 )
  {
    *v17 = 0;
    v17[1] = 1;
    v17[2] = 2;
    v17[3] = 3;
    v17[4] = 4;
    v18 = 2;
  }
  else
  {
    v18 = -1;
  }
  __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v18);
  __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ", result);
  v19 = fork();
  if ( !v19 )
  {
    v20 = malloc(4u);
    if ( v20 )
    {
      __printf_chk(1, "value before free: %d\n", 42);
      free(v20);
      v21 = *v20;
    }
    else
    {
      v21 = -1;
    }
    __printf_chk(1, &unk_319C, v21);
    exit(0);
  }
  if ( v19 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v19, status, 0);
    if ( (status[0] & 0x7F) != 0 )
    {
      if ( (char)((status[0] & 0x7F) + 1) > 1 )
        __printf_chk(1, &unk_33E4, status[0] & 0x7F);
    }
    else
    {
      __printf_chk(1, &unk_33BC, BYTE1(status[0]));
    }
  }
}


/* Function: global_var_access @ 0x20F0 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x2110 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x2130 */
int __cdecl global_array_access(int idx)
{
  if ( (unsigned int)idx > 9 )
    return -1;
  else
    return global_array[idx];
}


/* Function: static_local @ 0x2160 */
int __cdecl static_local(int reset)
{
  int result; // eax

  result = 0;
  if ( !reset )
    result = counter_1 + 1;
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x2190 */
int __cdecl call_static_func(int x)
{
  return 2 * x + 1;
}


/* Function: access_extern_global @ 0x21A0 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x21C0 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x21E0 */
int read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2200 */
int access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x2210 */
int access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x2220 */
int global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x2230 */
void __cdecl set_file_static(int val)
{
  file_scope_static = val;
}


/* Function: get_file_static @ 0x2250 */
int get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x2270 */
void __cdecl set_global_callback(int (*f)(int))
{
  global_func_ptr = f;
}


/* Function: call_global_callback @ 0x2290 */
int __cdecl call_global_callback(int x)
{
  if ( global_func_ptr )
    return ((int (*)(void))global_func_ptr)();
  else
    return -1;
}


/* Function: global_heap_store @ 0x22C0 */
int __cdecl global_heap_store(int *p)
{
  if ( p )
    return *p;
  else
    return -1;
}


/* Function: static_complex_init @ 0x22E0 */
int static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x22F0 */
int __cdecl tls_access(int val)
{
  return 2 * val;
}


/* Function: init_order_test @ 0x2300 */
int init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x2310 */
void test_static_global()
{
  int v0; // eax

  puts(asc_3428);
  __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
  __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
  counter_1 = 1;
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
  __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
  __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v0 = extern_function(5);
  __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
  __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
  __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
  __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
  __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
  file_scope_static = 50;
  __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = double_value;
  __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
  __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
  __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x24F0 */
int __cdecl memop_memset(void *buf, size_t size, int fill_value)
{
  if ( !buf || !size )
    return -1;
  memset(buf, fill_value, size);
  return *(unsigned __int8 *)buf;
}


/* Function: memop_memcpy @ 0x2540 */
int __cdecl memop_memcpy(void *dst, const void *src, size_t n)
{
  if ( n == 0 || src == 0 || !dst )
    return -1;
  memcpy(dst, src, n);
  return *(_DWORD *)((char *)dst + (n & 0xFFFFFFFC) - 4);
}


/* Function: memop_memmove @ 0x25A0 */
int __cdecl memop_memmove(void *buf, size_t n)
{
  if ( !buf || n <= 1 )
    return -1;
  memmove((char *)buf + 1, buf, n - 1);
  return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x25F0 */
int __cdecl memop_memcmp(const void *p1, const void *p2, size_t n)
{
  int v3; // edx
  int result; // eax

  if ( n == 0 || p2 == 0 || !p1 )
    return 0;
  v3 = memcmp(p1, p2, n);
  result = -(v3 != 0);
  if ( v3 > 0 )
    return 1;
  return result;
}


/* Function: memop_bzero @ 0x2660 */
int __cdecl memop_bzero(void *buf, size_t n)
{
  if ( !buf )
    return -1;
  memset(buf, 0, n);
  return *(unsigned __int8 *)buf;
}


/* Function: memop_bcopy @ 0x26A0 */
int __cdecl memop_bcopy(const void *src, void *dst, size_t n)
{
  if ( n == 0 || dst == 0 || !src )
    return -1;
  memmove(dst, src, n);
  return *(unsigned __int8 *)dst;
}


/* Function: memop_unaligned_access @ 0x2700 */
int __cdecl memop_unaligned_access(const char *buf)
{
  if ( buf )
    return *(_DWORD *)(buf + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x2720 */
int __cdecl memop_memory_barrier(volatile int *flag)
{
  volatile int v1; // edx
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  if ( !flag )
    return -1;
  v1 = *flag;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return v1 + *flag;
}


/* Function: test_memory_op_functions @ 0x2740 */
void test_memory_op_functions()
{
  int v0; // edx
  int v1; // eax
  signed __int32 v2[6]; // [esp+0h] [ebp-15Ch] BYREF
  int flag; // [esp+18h] [ebp-144h]
  int cmp_a[3]; // [esp+1Ch] [ebp-140h] BYREF
  int cmp_b[3]; // [esp+28h] [ebp-134h] BYREF
  char zero_buf[10]; // [esp+37h] [ebp-125h] BYREF
  char move_buf[11]; // [esp+41h] [ebp-11Bh] BYREF
  char buffer[256]; // [esp+4Ch] [ebp-110h] BYREF
  unsigned int v9; // [esp+14Ch] [ebp-10h]

  v9 = __readgsdword(0x14u);
  puts(asc_3650);
  memset(buffer, 65, 10);
  __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
  __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
  strcpy(move_buf, "HelloWorld");
  memmove(&move_buf[1], move_buf, 9u);
  __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_a[2] = 3;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_b[2] = 4;
  v0 = memcmp(cmp_a, cmp_b, 0xCu);
  v1 = -(v0 != 0);
  if ( v0 > 0 )
    v1 = 1;
  __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
  memset(zero_buf, 0, sizeof(zero_buf));
  __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
  __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
  __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
  flag = 5;
  _InterlockedOr(v2, 0);
  __printf_chk(1, "MEMOP-L3-02: %d\n", flag + 5);
}


/* Function: __x86.get_pc_thunk.ax @ 0x28FF */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: extern_function @ 0x2910 */
int __cdecl extern_function(int x)
{
  return 3 * x;
}


/* Function: __stack_chk_fail_local @ 0x2920 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2940 */
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


/* Function: .term_proc @ 0x298C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: memmove @ 0x6030 */

/* FAILED to decompile: free @ 0x6034 */

/* FAILED to decompile: memcpy @ 0x6038 */

/* FAILED to decompile: memcmp @ 0x603C */

/* FAILED to decompile: __stack_chk_fail @ 0x6040 */

/* FAILED to decompile: __cxa_finalize @ 0x6044 */

/* FAILED to decompile: perror @ 0x6048 */

/* FAILED to decompile: waitpid @ 0x604C */

/* FAILED to decompile: realloc @ 0x6050 */

/* FAILED to decompile: malloc @ 0x6054 */

/* FAILED to decompile: puts @ 0x6058 */

/* FAILED to decompile: exit @ 0x605C */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: __printf_chk @ 0x6064 */

/* FAILED to decompile: fork @ 0x6068 */

/* FAILED to decompile: calloc @ 0x606C */

/* Total functions decompiled: 88, failed: 17 */
