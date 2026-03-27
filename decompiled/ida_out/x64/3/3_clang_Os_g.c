/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/3/3_clang_Os_g
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


/* Function: local_vars @ 0x120C */
int __fastcall local_vars(int x)
{
  return 2 * x + 10;
}


/* Function: local_array @ 0x1213 */
int __fastcall local_array(int n)
{
  int v1; // eax
  __int64 i; // rcx
  _DWORD v4[10]; // [rsp+0h] [rbp-28h]

  v1 = 0;
  for ( i = 0; i != 10; ++i )
  {
    v4[i] = v1;
    v1 += n;
  }
  return v4[5];
}


/* Function: local_struct @ 0x122B */
int __fastcall local_struct(int x)
{
  return 3 * x;
}


/* Function: address_of_local @ 0x122F */
int __fastcall address_of_local(int *out)
{
  *out = 42;
  return 42;
}


/* Function: address_of_array @ 0x123B */
int __fastcall address_of_array(int *arr)
{
  return 2 * *arr;
}


/* Function: large_stack_frame @ 0x1240 */
int __cdecl large_stack_frame()
{
  __m128i si128; // xmm0
  __int64 v1; // rax
  __m128i v2; // xmm1
  _OWORD v4[64]; // [rsp+0h] [rbp-808h]
  char v5; // [rsp+400h] [rbp-408h]

  si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
  v1 = 0;
  v2 = _mm_load_si128((const __m128i *)&xmmword_2020);
  do
  {
    v4[v1++] = si128;
    si128 = _mm_add_epi8(si128, v2);
  }
  while ( v1 != 128 );
  return v5;
}


/* Function: vla_stack @ 0x127F */
int __fastcall vla_stack(int n)
{
  int result; // eax
  char *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // [rsp-8h] [rbp-8h] BYREF

  result = -1;
  if ( (unsigned int)(n - 1001) >= 0xFFFFFC18 )
  {
    v2 = (char *)&v4 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL);
    v3 = 0;
    do
    {
      *(_DWORD *)&v2[2 * v3] = v3;
      v3 += 2;
    }
    while ( 2LL * (unsigned int)n != v3 );
    return *(_DWORD *)&v2[4 * (n / 2)];
  }
  return result;
}


/* Function: alloca_usage @ 0x12D5 */
int __fastcall alloca_usage(int n)
{
  __int64 v1; // rdx
  _DWORD *v2; // rsi
  __int64 v4; // [rsp-8h] [rbp-8h] BYREF

  if ( n <= 0 )
    return -1;
  v1 = 0;
  v2 = (_DWORD *)((char *)&v4 - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL));
  do
  {
    *v2 = v1;
    v1 += 3;
    ++v2;
  }
  while ( 3LL * (unsigned int)n != v1 );
  return *(_DWORD *)((char *)&v4 + 4 * (unsigned int)(n / 2) - ((4LL * (unsigned int)n + 15) & 0xFFFFFFFFFFFFFFF0LL));
}


/* Function: stack_alias @ 0x1323 */
__int64 __fastcall stack_alias(int *p1, int *p2)
{
  return 20;
}


/* Function: test_stack_memory @ 0x1329 */
void __cdecl test_stack_memory()
{
  __int64 v0; // rbx
  __int64 v1; // rbx
  __m128i si128; // xmm0
  __m128i v3; // xmm1
  __int64 v4; // rbx
  __int128 *v5; // r14
  __int64 v6; // rbx
  __int128 v7; // [rsp+0h] [rbp-818h] BYREF
  int v8; // [rsp+14h] [rbp-804h]
  char v9; // [rsp+400h] [rbp-418h]

  puts(s);
  v0 = 0;
  printf("MEM-L1-01 (local_vars): %d\n", 20);
  do
  {
    *(_DWORD *)((char *)&v7 + 2 * v0) = v0;
    v0 += 2;
  }
  while ( v0 != 20 );
  v1 = 0;
  printf("MEM-L1-02 (local_array): %d\n", v8);
  printf("MEM-L1-03 (local_struct): %d\n", 15);
  printf("MEM-L1-04 (address_of_local): %d\n", 42);
  printf("MEM-L1-05 (address_of_array): %d\n", 2);
  si128 = _mm_load_si128((const __m128i *)&xmmword_2010);
  v3 = _mm_load_si128((const __m128i *)&xmmword_2020);
  do
  {
    *(__int128 *)((char *)&v7 + v1) = (__int128)si128;
    v1 += 16;
    si128 = _mm_add_epi8(si128, v3);
  }
  while ( v1 != 2048 );
  v4 = 0;
  printf("MEM-L2-01 (large_stack_frame): %d\n", v9);
  do
  {
    *(_DWORD *)((char *)&v7 + 2 * v4) = v4;
    v4 += 2;
  }
  while ( v4 != 20 );
  v5 = &v7;
  v6 = 0;
  printf("MEM-L2-02 (vla_stack): %d\n", v8);
  do
  {
    *(_DWORD *)v5 = v6;
    v5 = (__int128 *)((char *)v5 + 4);
    v6 += 3;
  }
  while ( v6 != 30 );
  printf("MEM-L2-03 (alloca_usage): %d\n", v8);
  printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1456 */
int __fastcall heap_basic(int n)
{
  _DWORD *v1; // rax
  __int64 i; // rdx
  int v3; // ebx

  v1 = malloc(4LL * n);
  if ( !v1 )
    return -1;
  if ( n > 0 )
  {
    for ( i = 0; i != n; ++i )
      v1[i] = i * 2;
  }
  v3 = v1[n / 2];
  free(v1);
  return v3;
}


/* Function: heap_calloc @ 0x14A3 */
int __fastcall heap_calloc(int n)
{
  _DWORD *v1; // rax
  int v2; // ebx
  __int64 i; // rdx

  v1 = calloc(n, 4u);
  if ( !v1 )
    return -1;
  v2 = 0;
  if ( n >= 2 )
  {
    v2 = 0;
    for ( i = 1; i != n; v2 += v1[i++] )
      ;
  }
  free(v1);
  return v2;
}


/* Function: heap_realloc @ 0x14F1 */
int __cdecl heap_realloc()
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx
  __int64 i; // rax
  int v3; // r14d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ebp

  v0 = malloc(0x14u);
  if ( !v0 )
    return -1;
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
  return v7;
}


/* Function: heap_array @ 0x1576 */
int __fastcall heap_array(int n)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rsi
  int v4; // ebx

  v1 = malloc(4LL * n);
  if ( !v1 )
    return -1;
  if ( n > 0 )
  {
    v2 = 0;
    v3 = v1;
    do
    {
      *v3 = v2;
      v2 += 3;
      ++v3;
    }
    while ( 3LL * (unsigned int)n != v2 );
  }
  v4 = v1[n / 2];
  free(v1);
  return v4;
}


/* Function: heap_struct @ 0x15CA */
int __fastcall heap_struct(int x)
{
  return 3 * x;
}


/* Function: heap_nested @ 0x15CE */
int __fastcall heap_nested(Node **head)
{
  Node *v1; // rax
  Node *v2; // rbx
  Node *v3; // rax

  v1 = (Node *)malloc(0x10u);
  *head = v1;
  if ( !v1 )
    return -1;
  v2 = v1;
  v1->data = 10;
  v3 = (Node *)malloc(0x10u);
  v2->next = v3;
  if ( v3 )
  {
    v3->data = 20;
    v3->next = 0;
    return 0;
  }
  else
  {
    free(v2);
    return -2;
  }
}


/* Function: linked_list_heap @ 0x1631 */
int __cdecl linked_list_heap()
{
  _QWORD *v0; // rax
  int v1; // ebp
  int v2; // ebx
  _QWORD *v3; // r15
  _QWORD *v4; // r14
  bool v5; // bl
  _QWORD *v6; // rbp
  int v7; // ebp
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  v0 = malloc(0x10u);
  v1 = 0;
  if ( v0 )
  {
    v2 = 0;
    v3 = 0;
    v4 = 0;
    while ( 1 )
    {
      *(_DWORD *)v0 = v1;
      v0[1] = 0;
      if ( v4 )
        v3[1] = v0;
      else
        v4 = v0;
      if ( v2 == -4 )
        break;
      v3 = v0;
      v0 = malloc(0x10u);
      --v2;
      v1 += 10;
      if ( !v0 )
      {
        v5 = (unsigned int)~v2 < 4;
        goto LABEL_10;
      }
    }
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v4 = 0;
LABEL_10:
    if ( v4 )
    {
      do
      {
        v6 = (_QWORD *)v4[1];
        free(v4);
        v4 = v6;
      }
      while ( v6 );
    }
    v4 = 0;
  }
  v7 = -1;
  if ( !v5 )
  {
    v7 = 0;
    if ( v4 )
    {
      v8 = v4;
      do
      {
        v7 += *(_DWORD *)v8;
        v8 = (_QWORD *)v8[1];
      }
      while ( v8 );
      do
      {
        v9 = (_QWORD *)v4[1];
        free(v4);
        v4 = v9;
      }
      while ( v9 );
    }
  }
  return v7;
}


/* Function: create_tree_node @ 0x16FE */
TreeNode *__fastcall create_tree_node(int data)
{
  TreeNode *result; // rax

  result = (TreeNode *)malloc(0x18u);
  if ( result )
  {
    result->data = data;
    *(_OWORD *)&result->left = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x171B */
int __cdecl tree_heap_traversal()
{
  return 60;
}


/* Function: memory_leak @ 0x1721 */
int __fastcall memory_leak(int n)
{
  _DWORD *v1; // rax
  __int64 i; // rdx

  v1 = malloc(4LL * n);
  if ( !v1 )
    return -1;
  if ( n > 0 )
  {
    for ( i = 0; i != n; ++i )
      v1[i] = i;
  }
  return v1[n / 2];
}


/* Function: dangling_pointer @ 0x1760 */
int __cdecl dangling_pointer()
{
  _DWORD *v0; // rax
  _DWORD *v1; // rbx

  v0 = malloc(4u);
  if ( !v0 )
    return -1;
  v1 = v0;
  printf("value before free: %d\n", 42);
  free(v1);
  return *v1;
}


/* Function: double_free @ 0x1799 */
int __fastcall double_free(int *p)
{
  if ( p )
    return *p;
  else
    return -2;
}


/* Function: heap_overflow @ 0x17A7 */
int __cdecl heap_overflow()
{
  int *v0; // rax
  __int64 v1; // rcx
  int *v2; // rdx
  int v3; // ebx

  v0 = (int *)malloc(0x28u);
  if ( !v0 )
    return -1;
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
  return v3;
}


/* Function: test_heap_memory @ 0x17E4 */
void __cdecl test_heap_memory()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  Node *v5; // rbx
  int v6; // eax
  _DWORD *v7; // rax
  __int64 i; // rcx
  int v9; // esi
  int v10; // eax
  unsigned int v11; // eax
  int stat_loc; // [rsp+4h] [rbp-14h] BYREF
  Node *v13; // [rsp+8h] [rbp-10h] BYREF

  puts(asc_2607);
  v0 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n", v0);
  v1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
  v2 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
  v3 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n", v3);
  printf("HEAP-L2-05 (heap_struct): %d\n", 15);
  v13 = 0;
  v4 = heap_nested(&v13);
  printf("HEAP-L2-06 (heap_nested): %d\n", v4);
  v5 = v13;
  if ( v13 )
  {
    free(v13->next);
    free(v5);
  }
  v6 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
  v7 = malloc(0x14u);
  if ( v7 )
  {
    for ( i = 0; i != 5; ++i )
      v7[i] = i;
    v9 = v7[2];
  }
  else
  {
    v9 = -1;
  }
  printf("HEAP-L3-03 (memory_leak): %d\n", v9);
  printf("HEAP-L3-04 (dangling_pointer): ");
  v10 = fork();
  if ( !v10 )
  {
    v11 = dangling_pointer();
    printf(aD, v11);
    exit(0);
  }
  if ( v10 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v10, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
        printf(byte_22CA, stat_loc & 0x7F);
    }
    else
    {
      printf(&byte_22A5, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x199A */
int __cdecl global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x19A9 */
int __cdecl global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x19B2 */
int __fastcall global_array_access(int idx)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)idx <= 9 )
    return global_array[idx];
  return result;
}


/* Function: static_local @ 0x19C9 */
int __fastcall static_local(int reset)
{
  int result; // eax

  result = 0;
  if ( !reset )
    result = static_local_counter + 1;
  static_local_counter = result;
  return result;
}


/* Function: call_static_func @ 0x19DF */
int __fastcall call_static_func(int x)
{
  return 2 * x + 1;
}


/* Function: access_extern_global @ 0x19E5 */
int __cdecl access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x19F2 */
int __cdecl call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x19FC */
int __cdecl read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1A0B */
int __cdecl access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x1A0E */
int __cdecl access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x1A11 */
int __cdecl global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x1A17 */
void __fastcall set_file_static(int val)
{
  file_scope_static = val;
}


/* Function: get_file_static @ 0x1A1E */
int __cdecl get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x1A25 */
void __fastcall set_global_callback(int (*f)(int))
{
  global_func_ptr = (__int64)f;
}


/* Function: call_global_callback @ 0x1A2D */
int __fastcall call_global_callback(int x)
{
  if ( global_func_ptr )
    return global_func_ptr(x);
  else
    return -1;
}


/* Function: global_heap_store @ 0x1A41 */
int __fastcall global_heap_store(int *p)
{
  global_heap_ptr = (__int64)p;
  if ( p )
    return *p;
  else
    return -1;
}


/* Function: static_complex_init @ 0x1A56 */
int __cdecl static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x1A5C */
int __fastcall tls_access(int val)
{
  return 2 * val;
}


/* Function: init_order_test @ 0x1A60 */
int __cdecl init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x1A66 */
void __cdecl test_static_global()
{
  int v0; // eax
  int v1; // [rsp+Ch] [rbp-Ch] BYREF

  puts(asc_2625);
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
  v1 = 100;
  global_heap_ptr = (__int64)&v1;
  printf("STM-L2-08 (global_heap_store): %d\n", 100);
  printf("STM-L2-09 (static_complex_init): %d\n", 15);
  printf("STM-L3-01 (tls_access): %d\n", 20);
  printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1C2C */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: memop_memset @ 0x1C30 */
int __fastcall memop_memset(void *buf, size_t size, int fill_value)
{
  int result; // eax

  result = -1;
  if ( buf )
  {
    if ( size )
    {
      memset(buf, fill_value, size);
      return *(unsigned __int8 *)buf;
    }
  }
  return result;
}


/* Function: memop_memcpy @ 0x1C55 */
int __fastcall memop_memcpy(void *dst, const void *src, size_t n)
{
  int result; // eax

  result = -1;
  if ( dst && src )
  {
    if ( n )
    {
      memcpy(dst, src, n);
      return *(_DWORD *)((char *)dst + (n & 0xFFFFFFFFFFFFFFFCLL) - 4);
    }
  }
  return result;
}


/* Function: memop_memmove @ 0x1C8C */
int __fastcall memop_memmove(void *buf, size_t n)
{
  int result; // eax

  result = -1;
  if ( buf )
  {
    if ( n >= 2 )
    {
      memmove((char *)buf + 1, buf, n - 1);
      return *((char *)buf + 1);
    }
  }
  return result;
}


/* Function: memop_memcmp @ 0x1CB7 */
int __fastcall memop_memcmp(const void *p1, const void *p2, size_t n)
{
  int result; // eax
  int v4; // eax
  int v5; // ecx
  bool v6; // cc

  result = 0;
  if ( p1 && p2 && n )
  {
    v4 = memcmp(p1, p2, n);
    v5 = -(v4 != 0);
    v6 = v4 <= 0;
    result = 1;
    if ( v6 )
      return v5;
  }
  return result;
}


/* Function: memop_bzero @ 0x1CE6 */
int __fastcall memop_bzero(void *buf, size_t n)
{
  if ( !buf )
    return -1;
  memset(buf, 0, n);
  return *(unsigned __int8 *)buf;
}


/* Function: memop_bcopy @ 0x1D04 */
int __fastcall memop_bcopy(const void *src, void *dst, size_t n)
{
  int result; // eax

  result = -1;
  if ( src && dst )
  {
    if ( n )
    {
      memmove(dst, src, n);
      return *(unsigned __int8 *)dst;
    }
  }
  return result;
}


/* Function: memop_unaligned_access @ 0x1D2C */
int __fastcall memop_unaligned_access(const char *buf)
{
  if ( buf )
    return *(_DWORD *)(buf + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x1D3B */
int __fastcall memop_memory_barrier(volatile int *flag)
{
  volatile int v1; // eax

  if ( !flag )
    return -1;
  v1 = *flag;
  _mm_mfence();
  return *flag + v1;
}


/* Function: test_memory_op_functions @ 0x1D4E */
void __cdecl test_memory_op_functions()
{
  int v0; // [rsp+4h] [rbp-14h]

  puts(asc_2649);
  printf("MEMOP-L2-01: %d\n", 65);
  printf("MEMOP-L2-02: %d\n", 50);
  printf("MEMOP-L2-03: %c\n", 72);
  printf("MEMOP-L2-04: %d\n", -1);
  printf("MEMOP-L2-05: %d\n", 0);
  printf("MEMOP-L2-06: %d\n", 1);
  printf("MEMOP-L3-01: 0x%x\n", 67305985);
  v0 = 5;
  _mm_mfence();
  printf("MEMOP-L3-02: %d\n", v0 + 5);
}


/* Function: main @ 0x1E25 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x1E40 */
int __fastcall extern_function(int x)
{
  return 3 * x;
}


/* Function: .term_proc @ 0x1E44 */
void term_proc()
{
  ;
}


/* FAILED to decompile: free @ 0x50D0 */

/* FAILED to decompile: __libc_start_main @ 0x50D8 */

/* FAILED to decompile: puts @ 0x50E0 */

/* FAILED to decompile: printf @ 0x50E8 */

/* FAILED to decompile: memset @ 0x50F0 */

/* FAILED to decompile: memcmp @ 0x50F8 */

/* FAILED to decompile: calloc @ 0x5100 */

/* FAILED to decompile: memcpy @ 0x5108 */

/* FAILED to decompile: malloc @ 0x5110 */

/* FAILED to decompile: realloc @ 0x5118 */

/* FAILED to decompile: memmove @ 0x5120 */

/* FAILED to decompile: waitpid @ 0x5128 */

/* FAILED to decompile: perror @ 0x5130 */

/* FAILED to decompile: exit @ 0x5138 */

/* FAILED to decompile: fork @ 0x5140 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x5148 */

/* FAILED to decompile: __gmon_start__ @ 0x5158 */

/* Total functions decompiled: 64, failed: 17 */
