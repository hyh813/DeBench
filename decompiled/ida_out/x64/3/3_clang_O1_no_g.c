/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_clang_O1_no_g
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


/* Function: _start @ 0x1120 */
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


/* Function: deregister_tm_clones @ 0x1150 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1180 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11C0 */
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


/* Function: frame_dummy @ 0x1200 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: local_vars @ 0x1210 */
__int64 __fastcall local_vars(int a1)
{
  return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x1220 */
__int64 __fastcall local_array(int a1)
{
  int v1; // eax
  __int64 i; // rcx
  _DWORD v4[10]; // [rsp+0h] [rbp-28h]

  v1 = 0;
  for ( i = 0; i != 10; ++i )
  {
    v4[i] = v1;
    v1 += a1;
  }
  return v4[5];
}


/* Function: local_struct @ 0x1250 */
__int64 __fastcall local_struct(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x1260 */
__int64 __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x1270 */
__int64 __fastcall address_of_array(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x1280 */
__int64 large_stack_frame()
{
  __int64 i; // rax
  _BYTE v2[2056]; // [rsp+0h] [rbp-808h]

  for ( i = 0; i != 2048; ++i )
    v2[i] = i;
  return v2[1024];
}


/* Function: vla_stack @ 0x12B0 */
__int64 __fastcall vla_stack(int a1)
{
  __int64 result; // rax
  char *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // [rsp-8h] [rbp-8h] BYREF

  result = 0xFFFFFFFFLL;
  if ( (unsigned int)(a1 - 1001) >= 0xFFFFFC18 )
  {
    v2 = (char *)&v4 - ((4LL * (unsigned int)a1 + 15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( a1 > 0 )
    {
      v3 = 0;
      do
      {
        *(_DWORD *)&v2[2 * v3] = v3;
        v3 += 2;
      }
      while ( 2LL * (unsigned int)a1 != v3 );
    }
    return *(unsigned int *)&v2[4 * (a1 / 2)];
  }
  return result;
}


/* Function: alloca_usage @ 0x1310 */
__int64 __fastcall alloca_usage(int a1)
{
  __int64 v1; // rdx
  _DWORD *v2; // rsi
  __int64 v4; // [rsp-8h] [rbp-8h] BYREF

  if ( a1 <= 0 )
    return 0xFFFFFFFFLL;
  v1 = 0;
  v2 = (_DWORD *)((char *)&v4 - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFFFF0LL));
  do
  {
    *v2 = v1;
    v1 += 3;
    ++v2;
  }
  while ( 3LL * (unsigned int)a1 != v1 );
  return *(unsigned int *)((char *)&v4 + 4 * (unsigned int)(a1 / 2) - ((4LL * a1 + 15) & 0xFFFFFFFFFFFFFFF0LL));
}


/* Function: stack_alias @ 0x1370 */
__int64 stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x1380 */
int test_stack_memory()
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rbx
  _DWORD *v4; // rax
  _BYTE v6[20]; // [rsp+0h] [rbp-808h] BYREF
  int v7; // [rsp+14h] [rbp-7F4h]
  char v8; // [rsp+400h] [rbp-408h]

  puts(s);
  v0 = 0;
  printf("MEM-L1-01 (local_vars): %d\n", 20);
  do
  {
    *(_DWORD *)&v6[2 * v0] = v0;
    v0 += 2;
  }
  while ( v0 != 20 );
  v1 = 0;
  printf("MEM-L1-02 (local_array): %d\n", v7);
  printf("MEM-L1-03 (local_struct): %d\n", 15);
  printf("MEM-L1-04 (address_of_local): %d\n", 42);
  printf("MEM-L1-05 (address_of_array): %d\n", 2);
  do
  {
    v6[v1] = v1;
    ++v1;
  }
  while ( v1 != 2048 );
  v2 = 0;
  printf("MEM-L2-01 (large_stack_frame): %d\n", v8);
  do
  {
    *(_DWORD *)&v6[2 * v2] = v2;
    v2 += 2;
  }
  while ( v2 != 20 );
  v3 = 0;
  printf("MEM-L2-02 (vla_stack): %d\n", v7);
  v4 = v6;
  do
  {
    *v4++ = v3;
    v3 += 3;
  }
  while ( v3 != 30 );
  printf("MEM-L2-03 (alloca_usage): %d\n", v7);
  return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x14B0 */
__int64 __fastcall heap_basic(int a1)
{
  _DWORD *v1; // rax
  __int64 i; // rdx
  unsigned int v3; // ebx

  v1 = malloc(4LL * a1);
  if ( v1 )
  {
    if ( a1 > 0 )
    {
      for ( i = 0; i != a1; ++i )
        v1[i] = i * 2;
    }
    v3 = v1[a1 / 2];
    free(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}


/* Function: heap_calloc @ 0x1500 */
__int64 __fastcall heap_calloc(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v1 = calloc(a1, 4u);
  if ( v1 )
  {
    if ( a1 <= 0 )
    {
      v3 = 0;
    }
    else
    {
      v2 = 0;
      v3 = 0;
      do
        v3 += v1[v2++];
      while ( a1 != v2 );
    }
    free(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}


/* Function: heap_realloc @ 0x1550 */
__int64 heap_realloc()
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx
  __int64 i; // rax
  int v3; // r14d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v7; // ebp

  v0 = malloc(0x14u);
  if ( v0 )
  {
    v1 = v0;
    for ( i = 0; i != 5; ++i )
      v1[i] = i + 1;
    v3 = v1[2];
    v4 = realloc(v1, 0x28u);
    if ( v4 )
    {
      v5 = 5;
      v6 = 50;
      do
      {
        v4[v5++] = v6;
        v6 += 10;
      }
      while ( v5 != 10 );
      v7 = -3;
      if ( v4[2] == v3 )
        v7 = v4[5];
      v1 = v4;
    }
    else
    {
      v7 = -2;
    }
    free(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v7;
}


/* Function: heap_array @ 0x15E0 */
__int64 __fastcall heap_array(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rsi
  unsigned int v4; // ebx

  v1 = malloc(4LL * a1);
  if ( v1 )
  {
    if ( a1 > 0 )
    {
      v2 = 0;
      v3 = v1;
      do
      {
        *v3 = v2;
        v2 += 3;
        ++v3;
      }
      while ( 3LL * (unsigned int)a1 != v2 );
    }
    v4 = v1[a1 / 2];
    free(v1);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v4;
}


/* Function: heap_struct @ 0x1650 */
__int64 __fastcall heap_struct(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: heap_nested @ 0x1660 */
__int64 __fastcall heap_nested(void **a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rax

  v1 = malloc(0x10u);
  *a1 = v1;
  if ( !v1 )
    return 0xFFFFFFFFLL;
  *v1 = 10;
  *((_QWORD *)*a1 + 1) = malloc(0x10u);
  v2 = *((_QWORD *)*a1 + 1);
  if ( v2 )
  {
    *(_DWORD *)v2 = 20;
    *(_QWORD *)(v2 + 8) = 0;
    return 0;
  }
  else
  {
    free(*a1);
    return 4294967294LL;
  }
}


/* Function: linked_list_heap @ 0x16C0 */
__int64 linked_list_heap()
{
  _QWORD *v0; // rbp
  bool v1; // r15
  _QWORD *v2; // r12
  unsigned int v3; // r13d
  _QWORD *v4; // r14
  _QWORD *v5; // rbx
  unsigned int v6; // r14d
  _QWORD *v7; // rax
  _QWORD *v8; // rbx

  v0 = 0;
  v1 = 1;
  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = malloc(0x10u);
    if ( !v4 )
      break;
    *(_DWORD *)v4 = 10 * v3;
    v4[1] = 0;
    if ( v0 )
    {
      v2[1] = v4;
      v2 = v4;
    }
    else
    {
      v2 = v4;
      v0 = v4;
    }
    v1 = v3++ < 4;
    if ( v3 == 5 )
      goto LABEL_10;
  }
  if ( v0 )
  {
    do
    {
      v5 = (_QWORD *)v0[1];
      free(v0);
      v0 = v5;
    }
    while ( v5 );
  }
  v0 = 0;
LABEL_10:
  v6 = -1;
  if ( !v1 )
  {
    v6 = 0;
    if ( v0 )
    {
      v7 = v0;
      do
      {
        v6 += *(_DWORD *)v7;
        v7 = (_QWORD *)v7[1];
      }
      while ( v7 );
    }
    if ( v0 )
    {
      do
      {
        v8 = (_QWORD *)v0[1];
        free(v0);
        v0 = v8;
      }
      while ( v8 );
    }
  }
  return v6;
}


/* Function: create_tree_node @ 0x17E0 */
char *__fastcall create_tree_node(int a1)
{
  char *result; // rax

  result = (char *)malloc(0x18u);
  if ( result )
  {
    *(_DWORD *)result = a1;
    *(_OWORD *)(result + 8) = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x1800 */
__int64 tree_heap_traversal()
{
  char *v0; // rax
  _QWORD *v1; // r14
  char *v2; // rax
  _DWORD *v3; // r15
  char *v4; // rax
  void *v5; // rbx
  unsigned int v6; // ebp

  v0 = (char *)malloc(0x18u);
  if ( v0 )
  {
    v1 = v0;
    *(_DWORD *)v0 = 10;
    *(_OWORD *)(v0 + 8) = 0;
    v2 = (char *)malloc(0x18u);
    v3 = v2;
    if ( v2 )
    {
      *(_DWORD *)v2 = 20;
      *(_OWORD *)(v2 + 8) = 0;
    }
    v1[1] = v2;
    v4 = (char *)malloc(0x18u);
    v5 = v4;
    if ( v4 )
    {
      *(_DWORD *)v4 = 30;
      *(_OWORD *)(v4 + 8) = 0;
    }
    v1[2] = v4;
    if ( v3 && v4 )
    {
      v6 = *(_DWORD *)v4 + *(_DWORD *)v1 + *v3;
      free(v3);
      v5 = (void *)v1[2];
    }
    else
    {
      if ( v3 )
        free(v3);
      v6 = -2;
      if ( !v5 )
        goto LABEL_14;
    }
    free(v5);
LABEL_14:
    free(v1);
    return v6;
  }
  return (unsigned int)-1;
}


/* Function: memory_leak @ 0x18D0 */
__int64 __fastcall memory_leak(int a1)
{
  _DWORD *v1; // rax
  __int64 i; // rdx

  v1 = malloc(4LL * a1);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  if ( a1 > 0 )
  {
    for ( i = 0; i != a1; ++i )
      v1[i] = i;
  }
  return (unsigned int)v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1920 */
__int64 dangling_pointer()
{
  _DWORD *v0; // rax
  unsigned int *v1; // rbx

  v0 = malloc(4u);
  if ( !v0 )
    return 0xFFFFFFFFLL;
  v1 = v0;
  *v0 = 42;
  printf("value before free: %d\n", 42);
  free(v1);
  return *v1;
}


/* Function: double_free @ 0x1960 */
__int64 __fastcall double_free(unsigned int *a1)
{
  if ( a1 )
    return *a1;
  else
    return 4294967294LL;
}


/* Function: heap_overflow @ 0x1970 */
__int64 heap_overflow()
{
  _DWORD *v0; // rax
  __int64 v1; // rcx
  _DWORD *v2; // rdx
  unsigned int v3; // ebx

  v0 = malloc(0x28u);
  if ( v0 )
  {
    v1 = 0;
    v2 = v0;
    do
    {
      *v2 = v1;
      v1 += 100;
      ++v2;
    }
    while ( v1 != 1100 );
    v3 = *v0;
    free(v0);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v3;
}


/* Function: test_heap_memory @ 0x19C0 */
void __fastcall test_heap_memory()
{
  __int64 v0; // rax
  _DWORD *v1; // rax
  int v2; // r14d
  int v3; // ebp
  __int64 i; // rcx
  int v5; // ebx
  _DWORD *v6; // rax
  __int64 j; // rcx
  _DWORD *v8; // rax
  int v9; // r14d
  int v10; // ebp
  _DWORD *v11; // rbx
  __int64 k; // rax
  int v13; // r15d
  _DWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // edx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *v20; // rax
  void **v21; // rbx
  _DWORD *v22; // rax
  int v23; // esi
  const char *v24; // rdi
  int v25; // esi
  int v26; // eax
  _DWORD *v27; // rax
  __int64 m; // rcx
  int v29; // esi
  int v30; // eax
  unsigned int v31; // eax
  int stat_loc; // [rsp+0h] [rbp-24h] BYREF

  stat_loc = HIDWORD(v0);
  puts(asc_35F7);
  v1 = malloc(0x28u);
  v2 = -1;
  v3 = -1;
  if ( v1 )
  {
    for ( i = 0; i != 10; ++i )
      v1[i] = i * 2;
    v3 = v1[5];
    free(v1);
  }
  v5 = 0;
  printf("HEAP-L2-01 (heap_basic): %d\n", v3);
  v6 = calloc(5u, 4u);
  if ( v6 )
  {
    for ( j = 0; j != 5; ++j )
      v5 += v6[j];
    free(v6);
    v2 = v5;
  }
  printf("HEAP-L2-02 (heap_calloc): %d\n", v2);
  v8 = malloc(0x14u);
  v9 = -1;
  v10 = -1;
  if ( v8 )
  {
    v11 = v8;
    for ( k = 0; k != 5; ++k )
      v11[k] = k + 1;
    v13 = v11[2];
    v14 = realloc(v11, 0x28u);
    if ( v14 )
    {
      v15 = 5;
      v16 = 50;
      do
      {
        v14[v15++] = v16;
        v16 += 10;
      }
      while ( v15 != 10 );
      v10 = -3;
      if ( v14[2] == v13 )
        v10 = v14[5];
      v11 = v14;
    }
    else
    {
      v10 = -2;
    }
    free(v11);
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n", v10);
  v17 = malloc(0x28u);
  if ( v17 )
  {
    v18 = 0;
    v19 = v17;
    do
    {
      *v19 = v18;
      v18 += 3;
      ++v19;
    }
    while ( v18 != 30 );
    v9 = v17[5];
    free(v17);
  }
  printf("HEAP-L2-04 (heap_array): %d\n", v9);
  printf("HEAP-L2-05 (heap_struct): %d\n", 15);
  v20 = malloc(0x10u);
  v21 = (void **)v20;
  if ( v20 )
  {
    *v20 = 10;
    v22 = malloc(0x10u);
    v21[1] = v22;
    if ( v22 )
    {
      *v22 = 20;
      *((_QWORD *)v22 + 1) = 0;
      v23 = 0;
    }
    else
    {
      free(v21);
      v23 = -2;
    }
  }
  else
  {
    v23 = -1;
  }
  v24 = "HEAP-L2-06 (heap_nested): %d\n";
  printf("HEAP-L2-06 (heap_nested): %d\n", v23);
  if ( v21 )
  {
    free(v21[1]);
    v24 = (const char *)v21;
    free(v21);
  }
  v25 = linked_list_heap(v24);
  printf("HEAP-L3-01 (linked_list_heap): %d\n", v25);
  v26 = tree_heap_traversal("HEAP-L3-01 (linked_list_heap): %d\n", v25);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v26);
  v27 = malloc(0x14u);
  if ( v27 )
  {
    for ( m = 0; m != 5; ++m )
      v27[m] = m;
    v29 = v27[2];
  }
  else
  {
    v29 = -1;
  }
  printf("HEAP-L3-03 (memory_leak): %d\n", v29);
  printf("HEAP-L3-04 (dangling_pointer): ");
  v30 = fork();
  if ( !v30 )
  {
    v31 = dangling_pointer("HEAP-L3-04 (dangling_pointer): ");
    printf(aD, v31);
    exit(0);
  }
  if ( v30 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v30, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
        printf(byte_32BA, stat_loc & 0x7F);
    }
    else
    {
      printf(&byte_3295, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x1CC0 */
__int64 global_var_access()
{
  return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1CD0 */
__int64 global_var_read()
{
  return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1CE0 */
__int64 __fastcall global_array_access(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 9 )
    return global_array[a1];
  return result;
}


/* Function: static_local @ 0x1D00 */
__int64 __fastcall static_local(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( !a1 )
    result = (unsigned int)(static_local_counter + 1);
  static_local_counter = result;
  return result;
}


/* Function: call_static_func @ 0x1D20 */
__int64 __fastcall call_static_func(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1D30 */
__int64 access_extern_global()
{
  return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1D40 */
__int64 call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x1D50 */
__int64 read_const_data()
{
  return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x1D60 */
__int64 access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x1D70 */
__int64 access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x1D80 */
__int64 global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x1D90 */
void __fastcall set_file_static(int a1)
{
  file_scope_static = a1;
}


/* Function: get_file_static @ 0x1DA0 */
__int64 get_file_static()
{
  return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1DB0 */
void __fastcall set_global_callback(__int64 a1)
{
  global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x1DC0 */
__int64 __fastcall call_global_callback(__int64 a1)
{
  if ( global_func_ptr )
    return global_func_ptr(a1);
  else
    return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1DE0 */
__int64 __fastcall global_heap_store(unsigned int *a1)
{
  global_heap_ptr = (__int64)a1;
  if ( a1 )
    return *a1;
  else
    return 0xFFFFFFFFLL;
}


/* Function: static_complex_init @ 0x1E00 */
__int64 static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x1E10 */
__int64 __fastcall tls_access(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1E20 */
__int64 init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x1E30 */
int test_static_global()
{
  int v0; // eax
  int v2; // [rsp+Ch] [rbp-Ch] BYREF

  puts(asc_3615);
  printf("STM-L1-01 (global_var_access): %d\n", ++global_counter);
  printf("STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  printf("STM-L1-02 (global_array_access): %d\n", 5);
  static_local_counter = 1;
  printf("STM-L1-03 (static_local): %d\n", 1);
  printf("STM-L1-03 (static_local): %d\n", ++static_local_counter);
  printf("STM-L1-04 (call_static_func): %d\n", 11);
  printf("STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v0 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n", v0);
  printf("STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
  printf("STM-L2-04 (access_bss_var): %d\n", 0);
  printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
  printf("STM-L2-05 (global_struct_access): %d\n", 30);
  file_scope_static = 50;
  printf("STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (__int64 (__fastcall *)(_QWORD))double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n", 10);
  v2 = 100;
  global_heap_ptr = (__int64)&v2;
  printf("STM-L2-08 (global_heap_store): %d\n", 100);
  printf("STM-L2-09 (static_complex_init): %d\n", 15);
  printf("STM-L3-01 (tls_access): %d\n", 20);
  return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x2000 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: memop_memset @ 0x2010 */
__int64 __fastcall memop_memset(unsigned __int8 *a1, size_t a2, int a3)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 )
  {
    if ( a2 )
    {
      memset(a1, a3, a2);
      return *a1;
    }
  }
  return result;
}


/* Function: memop_memcpy @ 0x2040 */
__int64 __fastcall memop_memcpy(char *a1, const void *a2, size_t a3)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      memcpy(a1, a2, a3);
      return *(unsigned int *)&a1[(a3 & 0xFFFFFFFFFFFFFFFCLL) - 4];
    }
  }
  return result;
}


/* Function: memop_memmove @ 0x2080 */
__int64 __fastcall memop_memmove(char *src, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( src )
  {
    if ( a2 >= 2 )
    {
      memmove(src + 1, src, a2 - 1);
      return (unsigned int)src[1];
    }
  }
  return result;
}


/* Function: memop_memcmp @ 0x20B0 */
__int64 __fastcall memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  __int64 result; // rax
  int v4; // eax
  unsigned int v5; // ecx
  bool v6; // cc

  result = 0;
  if ( a1 && a2 && a3 )
  {
    v4 = memcmp(a1, a2, a3);
    v5 = -(v4 != 0);
    v6 = v4 <= 0;
    result = 1;
    if ( v6 )
      return v5;
  }
  return result;
}


/* Function: memop_bzero @ 0x20E0 */
__int64 __fastcall memop_bzero(unsigned __int8 *a1, size_t a2)
{
  if ( !a1 )
    return 0xFFFFFFFFLL;
  memset(a1, 0, a2);
  return *a1;
}


/* Function: memop_bcopy @ 0x2100 */
__int64 __fastcall memop_bcopy(void *src, unsigned __int8 *dest, size_t a3)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( src && dest )
  {
    if ( a3 )
    {
      memmove(dest, src, a3);
      return *dest;
    }
  }
  return result;
}


/* Function: memop_unaligned_access @ 0x2130 */
__int64 __fastcall memop_unaligned_access(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(a1 + 1);
  else
    return 0xFFFFFFFFLL;
}


/* Function: memop_memory_barrier @ 0x2140 */
__int64 __fastcall memop_memory_barrier(int *a1)
{
  int v1; // eax

  if ( !a1 )
    return 0xFFFFFFFFLL;
  v1 = *a1;
  _mm_mfence();
  return (unsigned int)(*a1 + v1);
}


/* Function: test_memory_op_functions @ 0x2160 */
int test_memory_op_functions()
{
  int v1; // [rsp+4h] [rbp-14h]

  puts(asc_3639);
  printf("MEMOP-L2-01: %d\n", 65);
  printf("MEMOP-L2-02: %d\n", 50);
  printf("MEMOP-L2-03: %c\n", 72);
  printf("MEMOP-L2-04: %d\n", -1);
  printf("MEMOP-L2-05: %d\n", 0);
  printf("MEMOP-L2-06: %d\n", 1);
  printf("MEMOP-L3-01: 0x%x\n", 67305985);
  v1 = 5;
  _mm_mfence();
  return printf("MEMOP-L3-02: %d\n", v1 + 5);
}


/* Function: main @ 0x2240 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x2260 */
__int64 __fastcall extern_function(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: .term_proc @ 0x2264 */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x60D0 */

/* FAILED to decompile: __libc_start_main @ 0x60D8 */

/* FAILED to decompile: puts @ 0x60E0 */

/* FAILED to decompile: printf @ 0x60E8 */

/* FAILED to decompile: memset @ 0x60F0 */

/* FAILED to decompile: memcmp @ 0x60F8 */

/* FAILED to decompile: calloc @ 0x6100 */

/* FAILED to decompile: memcpy @ 0x6108 */

/* FAILED to decompile: malloc @ 0x6110 */

/* FAILED to decompile: realloc @ 0x6118 */

/* FAILED to decompile: memmove @ 0x6120 */

/* FAILED to decompile: waitpid @ 0x6128 */

/* FAILED to decompile: perror @ 0x6130 */

/* FAILED to decompile: exit @ 0x6138 */

/* FAILED to decompile: fork @ 0x6140 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6148 */

/* FAILED to decompile: __gmon_start__ @ 0x6158 */

/* Total functions decompiled: 64, failed: 17 */
