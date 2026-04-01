/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_gcc_Os_g
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


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1020();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1020();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
  sub_1020();
}


/* Function: main @ 0x11E0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: _start @ 0x1210 */
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


/* Function: deregister_tm_clones @ 0x1240 */
char *deregister_tm_clones()
{
  return &completed_0;
}


/* Function: register_tm_clones @ 0x1270 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x12B0 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x12F0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x12F9 */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: local_vars @ 0x1301 */
int __fastcall local_vars(int x)
{
  return 2 * x + 10;
}


/* Function: local_array @ 0x130A */
int __fastcall local_array(int n)
{
  int v1; // edx
  __int64 i; // rax
  int arr[10]; // [rsp+0h] [rbp-38h]
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v5 = __readfsqword(0x28u);
  for ( i = 0; i != 10; ++i )
  {
    arr[i] = v1;
    v1 += n;
  }
  return arr[5];
}


/* Function: local_struct @ 0x1350 */
int __fastcall local_struct(int x)
{
  return 3 * x;
}


/* Function: address_of_local @ 0x1358 */
int __fastcall address_of_local(int *out)
{
  *out = 42;
  return 42;
}


/* Function: address_of_array @ 0x1368 */
int __fastcall address_of_array(int *arr)
{
  return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1371 */
int __cdecl large_stack_frame()
{
  __int64 i; // rax
  char large_buf[2048]; // [rsp+8h] [rbp-810h]
  unsigned __int64 v3; // [rsp+808h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 2048; ++i )
    large_buf[i] = i;
  return large_buf[1024];
}


/* Function: vla_stack @ 0x13C6 */
int __fastcall vla_stack(int n)
{
  int result; // eax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int16 v4; // ax
  signed __int64 v5; // rax
  void *v6; // rsp
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-8h]

  v10 = __readfsqword(0x28u);
  result = -1;
  if ( (unsigned int)(n - 1) <= 0x3E7 )
  {
    v2 = 4LL * n + 15;
    v3 = v2 & 0xFFFFFFFFFFFFF000LL;
    v4 = v2 & 0xFFF0;
    while ( v9 != (_DWORD *)((char *)v9 - v3) )
      ;
    v5 = v4 & 0xFFF;
    v6 = alloca(v5);
    if ( v5 )
      *(_QWORD *)((char *)&v9[-2] + v5) = *(_QWORD *)((char *)&v9[-2] + v5);
    v7 = 0;
    do
    {
      v9[v7] = 2 * v7;
      ++v7;
    }
    while ( n > (int)v7 );
    return v9[n >> 1];
  }
  return result;
}


/* Function: alloca_usage @ 0x1468 */
int __fastcall alloca_usage(int n)
{
  int result; // eax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int16 v4; // ax
  signed __int64 v5; // rax
  void *v6; // rsp
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-8h]

  v10 = __readfsqword(0x28u);
  result = -1;
  if ( n > 0 )
  {
    v2 = 4LL * n + 23;
    v3 = v2 & 0xFFFFFFFFFFFFF000LL;
    v4 = v2 & 0xFFF0;
    while ( v9 != (_DWORD *)((char *)v9 - v3) )
      ;
    v5 = v4 & 0xFFF;
    v6 = alloca(v5);
    if ( v5 )
      *(_QWORD *)((char *)&v9[-2] + v5) = *(_QWORD *)((char *)&v9[-2] + v5);
    v7 = 0;
    do
    {
      v9[v7] = 3 * v7;
      ++v7;
    }
    while ( n > (int)v7 );
    return v9[n >> 1];
  }
  return result;
}


/* Function: stack_alias @ 0x1509 */
int __fastcall stack_alias(int *p1, int *p2)
{
  return 20;
}


/* Function: test_stack_memory @ 0x1513 */
void __cdecl test_stack_memory()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax

  puts(s);
  __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
  v0 = local_array(2);
  __printf_chk(1, "MEM-L1-02 (local_array): %d\n", v0);
  __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
  __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
  __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
  v1 = large_stack_frame();
  __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
  v2 = vla_stack(10);
  __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
  v3 = alloca_usage(10);
  __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
  __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1616 */
int __fastcall heap_basic(int n)
{
  int v1; // r12d
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  __int64 i; // rax

  v1 = -1;
  v3 = malloc(4LL * n);
  if ( v3 )
  {
    v4 = v3;
    for ( i = 0; n > (int)i; ++i )
      v4[i] = 2 * i;
    v1 = v4[n / 2];
    free(v4);
  }
  return v1;
}


/* Function: heap_calloc @ 0x1667 */
int __fastcall heap_calloc(int n)
{
  int v1; // r12d
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  __int64 i; // rax

  v1 = -1;
  v3 = calloc(n, 4u);
  if ( v3 )
  {
    v4 = v3;
    v1 = 0;
    for ( i = 0; n > (int)i; ++i )
      v1 += v4[i];
    free(v4);
  }
  return v1;
}


/* Function: heap_realloc @ 0x16AA */
int __cdecl heap_realloc()
{
  int v0; // r12d
  _QWORD *v1; // rax
  void *v2; // rbp
  _DWORD *v3; // rax

  v0 = -1;
  v1 = malloc(0x14u);
  if ( v1 )
  {
    v2 = v1;
    *v1 = 0x200000001LL;
    v1[1] = 0x400000003LL;
    *((_DWORD *)v1 + 4) = 5;
    v3 = realloc(v1, 0x28u);
    if ( v3 )
    {
      v0 = 50;
      if ( v3[2] != 3 )
        v0 = -3;
      free(v3);
    }
    else
    {
      v0 = -2;
      free(v2);
    }
  }
  return v0;
}


/* Function: heap_array @ 0x1730 */
int __fastcall heap_array(int n)
{
  int v1; // r12d
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  __int64 i; // rax

  v1 = -1;
  v3 = malloc(4LL * n);
  if ( v3 )
  {
    v4 = v3;
    for ( i = 0; n > (int)i; ++i )
      v4[i] = 3 * i;
    v1 = v4[n / 2];
    free(v4);
  }
  return v1;
}


/* Function: heap_struct @ 0x1781 */
int __fastcall heap_struct(int x)
{
  int v1; // r12d
  void *v2; // rax

  v1 = -1;
  v2 = malloc(8u);
  if ( v2 )
  {
    v1 = 3 * x;
    free(v2);
  }
  return v1;
}


/* Function: heap_nested @ 0x17B2 */
int __fastcall heap_nested(Node **head)
{
  Node *v1; // rbp
  int result; // eax
  Node *v3; // rax

  v1 = (Node *)malloc(0x10u);
  *head = v1;
  result = -1;
  if ( v1 )
  {
    v1->data = 10;
    v3 = (Node *)malloc(0x10u);
    v1->next = v3;
    if ( v3 )
    {
      v3->data = 20;
      v3->next = 0;
      return 0;
    }
    else
    {
      free(v1);
      return -2;
    }
  }
  return result;
}


/* Function: linked_list_heap @ 0x1811 */
int __cdecl linked_list_heap()
{
  _QWORD *v0; // rax
  int v1; // r12d
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  int v5; // r12d
  _QWORD *v6; // rax
  void *v7; // rdi

  v0 = 0;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = v0;
    v0 = malloc(0x10u);
    if ( !v0 )
      break;
    *(_DWORD *)v0 = v1;
    v0[1] = 0;
    if ( v2 )
      v3[1] = v0;
    else
      v2 = v0;
    v1 += 10;
    if ( v1 == 50 )
    {
      v6 = v2;
      v5 = 0;
      do
      {
        v5 += *(_DWORD *)v6;
        v6 = (_QWORD *)v6[1];
      }
      while ( v6 );
      do
      {
        v7 = v2;
        v2 = (_QWORD *)v2[1];
        free(v7);
      }
      while ( v2 );
      return v5;
    }
  }
  while ( v2 )
  {
    v4 = (_QWORD *)v2[1];
    free(v2);
    v2 = v4;
  }
  return -1;
}


/* Function: create_tree_node @ 0x189C */
TreeNode *__fastcall create_tree_node(int data)
{
  TreeNode *result; // rax

  result = (TreeNode *)malloc(0x18u);
  if ( result )
  {
    result->data = data;
    result->left = 0;
    result->right = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x18C6 */
int __cdecl tree_heap_traversal()
{
  int v0; // r12d
  TreeNode *tree_node; // rax
  TreeNode *v2; // rbp
  TreeNode *v3; // rax
  TreeNode *left; // rdi
  TreeNode *right; // rdi

  v0 = -1;
  tree_node = create_tree_node(10);
  if ( tree_node )
  {
    v2 = tree_node;
    tree_node->left = create_tree_node(20);
    v3 = create_tree_node(30);
    left = v2->left;
    v2->right = v3;
    if ( left )
    {
      if ( v3 )
      {
        v0 = v3->data + v2->data + left->data;
        free(left);
        free(v2->right);
        free(v2);
        return v0;
      }
      free(left);
    }
    right = v2->right;
    if ( right )
      free(right);
    v0 = -2;
    free(v2);
  }
  return v0;
}


/* Function: memory_leak @ 0x1959 */
int __fastcall memory_leak(int n)
{
  _DWORD *v1; // rcx
  __int64 v2; // rax

  v1 = malloc(4LL * n);
  v2 = 0;
  if ( !v1 )
    return -1;
  while ( n > (int)v2 )
  {
    v1[v2] = v2;
    ++v2;
  }
  return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1999 */
int __cdecl dangling_pointer()
{
  _DWORD *v0; // rbx
  int result; // eax

  v0 = malloc(4u);
  result = -1;
  if ( v0 )
  {
    __printf_chk(1, "value before free: %d\n", 42);
    free(v0);
    return *v0;
  }
  return result;
}


/* Function: double_free @ 0x19D7 */
int __fastcall double_free(int *p)
{
  void *v1; // rbp
  int result; // eax

  if ( p )
    return *p;
  v1 = malloc(4u);
  result = -1;
  if ( v1 )
  {
    free(v1);
    free(v1);
    return -2;
  }
  return result;
}


/* Function: heap_overflow @ 0x1A12 */
int __cdecl heap_overflow()
{
  int v0; // r12d
  int *v1; // rax
  int *v2; // rdi
  __int64 i; // rax

  v0 = -1;
  v1 = (int *)malloc(0x28u);
  if ( v1 )
  {
    v2 = v1;
    for ( i = 0; i != 11; ++i )
      v2[i] = 100 * i;
    v0 = *v2;
    free(v2);
  }
  return v0;
}


/* Function: test_heap_memory @ 0x1A4D */
void __cdecl test_heap_memory()
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
  unsigned int v10; // eax
  const char *v11; // rsi
  __int64 v12; // rdx
  int status; // [rsp+Ch] [rbp-1Ch] BYREF
  Node *head[3]; // [rsp+10h] [rbp-18h] BYREF

  head[1] = (Node *)__readfsqword(0x28u);
  puts(asc_314D);
  v0 = heap_basic(10);
  __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v0);
  v1 = heap_calloc(5);
  __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v1);
  v2 = heap_realloc();
  __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v2);
  v3 = heap_array(10);
  __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v3);
  v4 = heap_struct(5);
  __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v4);
  head[0] = 0;
  v5 = heap_nested(head);
  __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
  if ( head[0] )
  {
    free(head[0]->next);
    free(head[0]);
  }
  v6 = linked_list_heap();
  __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
  v7 = tree_heap_traversal();
  __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
  v8 = memory_leak(5);
  __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v8);
  __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
  v9 = fork();
  if ( !v9 )
  {
    v10 = dangling_pointer();
    __printf_chk(1, aD, v10);
    exit(0);
  }
  if ( v9 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v9, &status, 0);
    v11 = (const char *)&unk_32B5;
    v12 = BYTE1(status);
    if ( (status & 0x7F) != 0 )
    {
      if ( (char)((status & 0x7F) + 1) <= 1 )
        return;
      v12 = status & 0x7F;
      v11 = (const char *)&unk_32DA;
    }
    __printf_chk(1, v11, v12);
  }
}


/* Function: global_var_access @ 0x1C51 */
int __cdecl global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x1C64 */
int __cdecl global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x1C71 */
int __fastcall global_array_access(int idx)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)idx <= 9 )
    return global_array[idx];
  return result;
}


/* Function: static_local @ 0x1C8B */
int __fastcall static_local(int reset)
{
  int result; // eax

  result = 0;
  if ( !reset )
    result = counter_1 + 1;
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x1CA4 */
int __fastcall call_static_func(int x)
{
  return 2 * x + 1;
}


/* Function: access_extern_global @ 0x1CAD */
int __cdecl access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1CBB */
int __cdecl call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x1CC9 */
int __cdecl read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1CDC */
int __cdecl access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x1CE3 */
int __cdecl access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x1CEA */
int __cdecl global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x1CF4 */
void __fastcall set_file_static(int val)
{
  file_scope_static = val;
}


/* Function: get_file_static @ 0x1CFF */
int __cdecl get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x1D0A */
void __fastcall set_global_callback(int (*f)(int))
{
  global_func_ptr = f;
}


/* Function: call_global_callback @ 0x1D16 */
int __fastcall call_global_callback(int x)
{
  if ( global_func_ptr )
    return global_func_ptr(x);
  else
    return -1;
}


/* Function: global_heap_store @ 0x1D2C */
int __fastcall global_heap_store(int *p)
{
  int result; // eax

  result = -1;
  if ( p )
    return *p;
  return result;
}


/* Function: static_complex_init @ 0x1D3B */
int __cdecl static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x1D45 */
int __fastcall tls_access(int val)
{
  return 2 * val;
}


/* Function: init_order_test @ 0x1D4D */
int __cdecl init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x1D57 */
void __cdecl test_static_global()
{
  int v0; // eax
  int v1; // eax
  int const_data; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax

  puts(asc_3326);
  v0 = global_var_access();
  __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
  __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
  counter_1 = 1;
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
  __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
  __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v1 = call_extern_func();
  __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v1);
  const_data = read_const_data();
  __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
  __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
  __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
  v3 = global_struct_access();
  __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v3);
  file_scope_static = 50;
  __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = double_value;
  v4 = call_global_callback(5);
  __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
  __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  v5 = static_complex_init();
  __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
  __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1F61 */
int __fastcall memop_memset(void *buf, size_t size, int fill_value)
{
  if ( !buf || !size )
    return -1;
  memset(buf, fill_value, size);
  return *(unsigned __int8 *)buf;
}


/* Function: memop_memcpy @ 0x1F82 */
int __fastcall memop_memcpy(void *dst, const void *src, size_t n)
{
  if ( n == 0 || src == 0 || !dst )
    return -1;
  qmemcpy(dst, src, n);
  return *(_DWORD *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
}


/* Function: memop_memmove @ 0x1FB5 */
int __fastcall memop_memmove(void *buf, size_t n)
{
  if ( !buf || n <= 1 )
    return -1;
  memmove((char *)buf + 1, buf, n - 1);
  return *((char *)buf + 1);
}


/* Function: memop_memcmp @ 0x1FE2 */
int __fastcall memop_memcmp(const void *p1, const void *p2, size_t n)
{
  int v3; // r8d
  int result; // eax

  if ( n == 0 || p2 == 0 || !p1 )
    return 0;
  v3 = memcmp(p1, p2, n);
  result = 1;
  if ( v3 <= 0 )
    return -(v3 != 0);
  return result;
}


/* Function: memop_bzero @ 0x201D */
int __fastcall memop_bzero(void *buf, size_t n)
{
  int result; // eax

  result = -1;
  if ( buf )
  {
    memset(buf, 0, n);
    return *(unsigned __int8 *)buf;
  }
  return result;
}


/* Function: memop_bcopy @ 0x2037 */
int __fastcall memop_bcopy(const void *src, void *dst, size_t n)
{
  if ( n == 0 || dst == 0 || !src )
    return -1;
  else
    return *(unsigned __int8 *)memmove(dst, src, n);
}


/* Function: memop_unaligned_access @ 0x206A */
int __fastcall memop_unaligned_access(const char *buf)
{
  int result; // eax

  result = -1;
  if ( buf )
    return *(_DWORD *)(buf + 1);
  return result;
}


/* Function: memop_memory_barrier @ 0x207A */
int __fastcall memop_memory_barrier(volatile int *flag)
{
  int result; // eax
  volatile int v2; // edx

  result = -1;
  if ( flag )
  {
    v2 = *flag;
    _mm_mfence();
    return v2 + *flag;
  }
  return result;
}


/* Function: test_memory_op_functions @ 0x2090 */
void __cdecl test_memory_op_functions()
{
  int *v0; // rdi
  __int64 v1; // rcx
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int flag; // [rsp+4h] [rbp-174h] BYREF
  int cmp_a[3]; // [rsp+8h] [rbp-170h] BYREF
  int cmp_b[3]; // [rsp+14h] [rbp-164h] BYREF
  int int_src[5]; // [rsp+20h] [rbp-158h] BYREF
  int int_dst[5]; // [rsp+34h] [rbp-144h] BYREF
  char bcopy_src[4]; // [rsp+4Bh] [rbp-12Dh] BYREF
  char bcopy_dst[4]; // [rsp+4Fh] [rbp-129h] BYREF
  char zero_buf[10]; // [rsp+53h] [rbp-125h] BYREF
  char move_buf[11]; // [rsp+5Dh] [rbp-11Bh] BYREF
  char buffer[256]; // [rsp+68h] [rbp-110h] BYREF
  unsigned __int64 v20; // [rsp+168h] [rbp-10h]

  v20 = __readfsqword(0x28u);
  puts(asc_3588);
  v0 = int_dst;
  v1 = 5;
  *(_QWORD *)int_src = 0x140000000ALL;
  *(_QWORD *)&int_src[2] = 0x280000001ELL;
  while ( v1 )
  {
    *v0++ = 0;
    --v1;
  }
  int_src[4] = 50;
  v2 = memop_memset(buffer, 0xAu, 65);
  __printf_chk(1, "MEMOP-L2-01: %d\n", v2);
  v3 = memop_memcpy(int_dst, int_src, 0x14u);
  __printf_chk(1, "MEMOP-L2-02: %d\n", v3);
  strcpy(move_buf, "HelloWorld");
  v4 = memop_memmove(move_buf, 0xAu);
  __printf_chk(1, "MEMOP-L2-03: %c\n", v4);
  *(_QWORD *)cmp_a = 0x200000001LL;
  cmp_a[2] = 3;
  *(_QWORD *)cmp_b = 0x200000001LL;
  cmp_b[2] = 4;
  v5 = memcmp(cmp_a, cmp_b, 0xCu);
  v6 = 1;
  if ( v5 <= 0 )
    v6 = -(v5 != 0);
  __printf_chk(1, "MEMOP-L2-04: %d\n", v6);
  v7 = memop_bzero(zero_buf, 0xAu);
  __printf_chk(1, "MEMOP-L2-05: %d\n", v7);
  *(_DWORD *)bcopy_src = 67305985;
  *(_DWORD *)bcopy_dst = 0;
  v8 = memop_bcopy(bcopy_src, bcopy_dst, 4u);
  __printf_chk(1, "MEMOP-L2-06: %d\n", v8);
  __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
  flag = 5;
  v9 = memop_memory_barrier(&flag);
  __printf_chk(1, "MEMOP-L3-02: %d\n", v9);
}


/* Function: extern_function @ 0x228F */
int __fastcall extern_function(int x)
{
  return 3 * x;
}


/* Function: .term_proc @ 0x2298 */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x6050 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: puts @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6068 */

/* FAILED to decompile: memcmp @ 0x6070 */

/* FAILED to decompile: calloc @ 0x6078 */

/* FAILED to decompile: malloc @ 0x6080 */

/* FAILED to decompile: realloc @ 0x6088 */

/* FAILED to decompile: __printf_chk @ 0x6090 */

/* FAILED to decompile: memmove @ 0x6098 */

/* FAILED to decompile: waitpid @ 0x60A0 */

/* FAILED to decompile: perror @ 0x60A8 */

/* FAILED to decompile: exit @ 0x60B0 */

/* FAILED to decompile: fork @ 0x60B8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x60C0 */

/* FAILED to decompile: __gmon_start__ @ 0x60D0 */

/* Total functions decompiled: 77, failed: 16 */
