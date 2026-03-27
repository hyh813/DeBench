/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/3/3_clang_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x57C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_588 @ 0x588 */
void sub_588()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x680 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_6BC + 20073), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x6C4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x6E8 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x72C */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x77C */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x7E4 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: local_vars @ 0x7E8 */
int __fastcall local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x81C */
int __fastcall local_array(int a1)
{
  int i; // [sp+0h] [bp-30h]
  _DWORD v3[10]; // [sp+4h] [bp-2Ch]
  int v4; // [sp+2Ch] [bp-4h]

  v4 = a1;
  for ( i = 0; i <= 9; ++i )
    v3[i] = i * v4;
  return v3[5];
}


/* Function: local_struct @ 0x874 */
int __fastcall local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x8A4 */
int __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x8CC */
int __fastcall address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x900 */
int large_stack_frame()
{
  int i; // [sp+0h] [bp-80Ch]
  _BYTE v2[2056]; // [sp+4h] [bp-808h]

  for ( i = 0; i < 2048; ++i )
    v2[i] = i;
  return v2[1024];
}


/* Function: vla_stack @ 0x95C */
int __fastcall vla_stack(int a1)
{
  char *v2; // [sp+0h] [bp-20h] BYREF
  int i; // [sp+4h] [bp-1Ch]
  int v4; // [sp+8h] [bp-18h]
  char **v5; // [sp+Ch] [bp-14h]
  int v6; // [sp+10h] [bp-10h]

  v6 = a1;
  if ( a1 < 1 || v6 > 1000 )
    return -1;
  v5 = &v2;
  v2 = (char *)&v2 - ((4 * v6 + 7) & 0xFFFFFFF8);
  v4 = v6;
  for ( i = 0; i < v6; ++i )
    *(_DWORD *)&v2[4 * i] = 2 * i;
  return *(_DWORD *)&v2[(2 * (v6 + ((unsigned int)v6 >> 31))) & 0xFFFFFFFD];
}


/* Function: alloca_usage @ 0xA40 */
int __fastcall alloca_usage(int a1)
{
  int i; // [sp+0h] [bp-18h] BYREF
  char *v3; // [sp+4h] [bp-14h]
  int v4; // [sp+8h] [bp-10h]

  v4 = a1;
  if ( a1 <= 0 )
    return -1;
  v3 = (char *)&i - ((4 * v4 + 7) & 0xFFFFFFF8);
  for ( i = 0; i < v4; ++i )
    *(_DWORD *)&v3[4 * i] = 3 * i;
  return *(_DWORD *)&v3[(2 * (v4 + ((unsigned int)v4 >> 31))) & 0xFFFFFFFD];
}


/* Function: stack_alias @ 0xB00 */
int stack_alias()
{
  int v1; // [sp+0h] [bp-10h] BYREF
  int *v2; // [sp+4h] [bp-Ch]
  int *v3; // [sp+8h] [bp-8h]

  v1 = 10;
  v3 = &v1;
  v2 = &v1;
  if ( !&v1 )
    return -1;
  *v3 = 20;
  return *v2;
}


/* Function: test_stack_memory @ 0xB78 */
int test_stack_memory()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  _DWORD s[10]; // [sp+1Ch] [bp-2Ch] BYREF
  int v11; // [sp+44h] [bp-4h] BYREF

  printf(asc_35B4);
  v0 = local_vars(5);
  printf("MEM-L1-01 (local_vars): %d\n", v0);
  v1 = local_array(2);
  printf("MEM-L1-02 (local_array): %d\n", v1);
  v2 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n", v2);
  v3 = address_of_local(&v11);
  printf("MEM-L1-04 (address_of_local): %d\n", v3);
  memset(s, 0, sizeof(s));
  s[0] = 1;
  s[1] = 2;
  s[2] = 3;
  v4 = address_of_array(s);
  printf("MEM-L1-05 (address_of_array): %d\n", v4);
  v5 = large_stack_frame();
  printf("MEM-L2-01 (large_stack_frame): %d\n", v5);
  v6 = vla_stack(10);
  printf("MEM-L2-02 (vla_stack): %d\n", v6);
  v7 = alloca_usage(10);
  printf("MEM-L2-03 (alloca_usage): %d\n", v7);
  v8 = stack_alias();
  return printf("MEM-L2-04 (stack_alias): %d\n", v8);
}


/* Function: heap_basic @ 0xCE0 */
int __fastcall heap_basic(unsigned int a1)
{
  int v2; // [sp+4h] [bp-14h]
  int i; // [sp+8h] [bp-10h]
  _DWORD *ptr; // [sp+Ch] [bp-Ch]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < (int)a1; ++i )
    ptr[i] = 2 * i;
  v2 = *(_DWORD *)((char *)ptr + ((2 * (a1 + (a1 >> 31))) & 0xFFFFFFFD));
  free(ptr);
  return v2;
}


/* Function: heap_calloc @ 0xDA0 */
int __fastcall heap_calloc(signed int a1)
{
  signed int i; // [sp+4h] [bp-14h]
  int v3; // [sp+8h] [bp-10h]
  _DWORD *ptr; // [sp+Ch] [bp-Ch]

  ptr = calloc(a1, 4u);
  if ( !ptr )
    return -1;
  v3 = 0;
  for ( i = 0; i < a1; ++i )
    v3 += ptr[i];
  free(ptr);
  return v3;
}


/* Function: heap_realloc @ 0xE50 */
int heap_realloc()
{
  int v1; // [sp+0h] [bp-20h]
  int j; // [sp+8h] [bp-18h]
  _DWORD *v3; // [sp+Ch] [bp-14h]
  int v4; // [sp+10h] [bp-10h]
  int i; // [sp+14h] [bp-Ch]
  _DWORD *ptr; // [sp+18h] [bp-8h]

  ptr = malloc(0x14u);
  if ( !ptr )
    return -1;
  for ( i = 0; i <= 4; ++i )
    ptr[i] = i + 1;
  v4 = ptr[2];
  v3 = realloc(ptr, 0x28u);
  if ( v3 )
  {
    for ( j = 5; j <= 9; ++j )
      v3[j] = 10 * j;
    if ( v3[2] == v4 )
      v1 = v3[5];
    else
      v1 = -3;
    free(v3);
    return v1;
  }
  else
  {
    free(ptr);
    return -2;
  }
}


/* Function: heap_array @ 0xFB0 */
int __fastcall heap_array(unsigned int a1)
{
  int v2; // [sp+4h] [bp-14h]
  int i; // [sp+8h] [bp-10h]
  _DWORD *ptr; // [sp+Ch] [bp-Ch]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < (int)a1; ++i )
    ptr[i] = 3 * i;
  v2 = *(_DWORD *)((char *)ptr + ((2 * (a1 + (a1 >> 31))) & 0xFFFFFFFD));
  free(ptr);
  return v2;
}


/* Function: heap_struct @ 0x1070 */
int __fastcall heap_struct(int a1)
{
  int v2; // [sp+0h] [bp-10h]
  _DWORD *ptr; // [sp+4h] [bp-Ch]

  ptr = malloc(8u);
  if ( !ptr )
    return -1;
  *ptr = a1;
  ptr[1] = 2 * a1;
  v2 = *ptr + ptr[1];
  free(ptr);
  return v2;
}


/* Function: heap_nested @ 0x10FC */
int __fastcall heap_nested(void **a1)
{
  *a1 = malloc(8u);
  if ( !*a1 )
    return -1;
  *(_DWORD *)*a1 = 10;
  *((_DWORD *)*a1 + 1) = malloc(8u);
  if ( *((_DWORD *)*a1 + 1) )
  {
    **((_DWORD **)*a1 + 1) = 20;
    *(_DWORD *)(*((_DWORD *)*a1 + 1) + 4) = 0;
    return 0;
  }
  else
  {
    free(*a1);
    return -2;
  }
}


/* Function: linked_list_heap @ 0x11D0 */
int linked_list_heap()
{
  void *v1; // [sp+4h] [bp-24h]
  _DWORD *j; // [sp+8h] [bp-20h]
  int v3; // [sp+Ch] [bp-1Ch]
  void *ptr; // [sp+10h] [bp-18h]
  _DWORD *v5; // [sp+14h] [bp-14h]
  int i; // [sp+18h] [bp-10h]
  _DWORD *v7; // [sp+1Ch] [bp-Ch]
  _DWORD *v8; // [sp+20h] [bp-8h]

  v8 = 0;
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 4 )
    {
      v3 = 0;
      for ( j = v8; j; j = (_DWORD *)j[1] )
        v3 += *j;
      while ( v8 )
      {
        v1 = v8;
        v8 = (_DWORD *)v8[1];
        free(v1);
      }
      return v3;
    }
    v5 = malloc(8u);
    if ( !v5 )
      break;
    *v5 = 10 * i;
    v5[1] = 0;
    if ( v8 )
      v7[1] = v5;
    else
      v8 = v5;
    v7 = v5;
  }
  while ( v8 )
  {
    ptr = v8;
    v8 = (_DWORD *)v8[1];
    free(ptr);
  }
  return -1;
}


/* Function: create_tree_node @ 0x1364 */
_DWORD *__fastcall create_tree_node(int a1)
{
  _DWORD *v2; // [sp+0h] [bp-8h]

  v2 = malloc(0xCu);
  if ( v2 )
  {
    *v2 = a1;
    v2[1] = 0;
    v2[2] = 0;
  }
  return v2;
}


/* Function: tree_heap_traversal @ 0x13C4 */
int tree_heap_traversal()
{
  int v1; // [sp+4h] [bp-Ch]
  void **ptr; // [sp+8h] [bp-8h]

  ptr = (void **)create_tree_node(10);
  if ( !ptr )
    return -1;
  ptr[1] = create_tree_node(20);
  ptr[2] = create_tree_node(30);
  if ( ptr[1] && ptr[2] )
  {
    v1 = (int)*ptr + *(_DWORD *)ptr[1] + *(_DWORD *)ptr[2];
    free(ptr[1]);
    free(ptr[2]);
    free(ptr);
    return v1;
  }
  else
  {
    if ( ptr[1] )
      free(ptr[1]);
    if ( ptr[2] )
      free(ptr[2]);
    free(ptr);
    return -2;
  }
}


/* Function: memory_leak @ 0x14FC */
int __fastcall memory_leak(unsigned int a1)
{
  int i; // [sp+0h] [bp-10h]
  _DWORD *v3; // [sp+4h] [bp-Ch]

  v3 = malloc(4 * a1);
  if ( !v3 )
    return -1;
  for ( i = 0; i < (int)a1; ++i )
    v3[i] = i;
  return *(_DWORD *)((char *)v3 + ((2 * (a1 + (a1 >> 31))) & 0xFFFFFFFD));
}


/* Function: dangling_pointer @ 0x15A8 */
int dangling_pointer()
{
  _DWORD *ptr; // [sp+8h] [bp-8h]

  ptr = malloc(4u);
  if ( !ptr )
    return -1;
  *ptr = 42;
  printf("value before free: %d\n", *ptr);
  free(ptr);
  return *ptr;
}


/* Function: double_free @ 0x1638 */
int __fastcall double_free(int a1)
{
  _DWORD *ptr; // [sp+4h] [bp-Ch]

  if ( a1 )
    return *(_DWORD *)a1;
  ptr = malloc(4u);
  if ( !ptr )
    return -1;
  *ptr = 10;
  free(ptr);
  free(ptr);
  return -2;
}


/* Function: heap_overflow @ 0x16C8 */
int heap_overflow()
{
  int v1; // [sp+0h] [bp-10h]
  int i; // [sp+4h] [bp-Ch]
  int *ptr; // [sp+8h] [bp-8h]

  ptr = (int *)malloc(0x28u);
  if ( !ptr )
    return -1;
  for ( i = 0; i <= 10; ++i )
    ptr[i] = 100 * i;
  v1 = *ptr;
  free(ptr);
  return v1;
}


/* Function: test_heap_memory @ 0x1770 */
void test_heap_memory()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int stat_loc; // [sp+8h] [bp-10h] BYREF
  int v10; // [sp+Ch] [bp-Ch]
  __pid_t pid; // [sp+10h] [bp-8h]
  void *ptr; // [sp+14h] [bp-4h] BYREF

  printf(asc_36FE);
  v0 = heap_basic(0xAu);
  printf("HEAP-L2-01 (heap_basic): %d\n", v0);
  v1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
  v2 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
  v3 = heap_array(0xAu);
  printf("HEAP-L2-04 (heap_array): %d\n", v3);
  v4 = heap_struct(5);
  printf("HEAP-L2-05 (heap_struct): %d\n", v4);
  ptr = 0;
  v5 = heap_nested(&ptr);
  printf("HEAP-L2-06 (heap_nested): %d\n", v5);
  if ( ptr )
  {
    free(*((void **)ptr + 1));
    free(ptr);
  }
  v6 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n", v6);
  v7 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
  v8 = memory_leak(5u);
  printf("HEAP-L3-03 (memory_leak): %d\n", v8);
  printf("HEAP-L3-04 (dangling_pointer): ");
  pid = fork();
  if ( !pid )
  {
    v10 = dangling_pointer();
    printf(aD, v10);
    exit(0);
  }
  if ( pid < 1 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(pid, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( ((stat_loc & 0x7F) + 1) << 24 >> 25 >= 1 )
        printf(byte_388C, stat_loc & 0x7F);
    }
    else
    {
      printf(byte_3867, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x19B0 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x19E0 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x19F4 */
int __fastcall global_array_access(unsigned int a1)
{
  if ( a1 < 0xA )
    return global_array[a1];
  else
    return -1;
}


/* Function: static_local @ 0x1A50 */
int __fastcall static_local(int a1)
{
  if ( !a1 )
    return ++static_local_counter;
  static_local_counter = 0;
  return 0;
}


/* Function: call_static_func @ 0x1AC4 */
int __fastcall call_static_func(int a1)
{
  return static_helper(a1) + 1;
}


/* Function: static_helper @ 0x1AEC */
int __fastcall static_helper(int a1)
{
  return 2 * a1;
}


/* Function: access_extern_global @ 0x1B04 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1B1C */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x1B34 */
int read_const_data()
{
  return (unsigned __int8)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1B4C */
int access_bss_var()
{
  return bss_var;
}


/* Function: access_bss_buffer @ 0x1B5C */
int access_bss_buffer()
{
  return (unsigned __int8)bss_buffer;
}


/* Function: global_struct_access @ 0x1B70 */
int global_struct_access()
{
  return global_point + dword_140A4;
}


/* Function: set_file_static @ 0x1B94 */
int *__fastcall set_file_static(int *result)
{
  file_scope_static = result;
  return result;
}


/* Function: get_file_static @ 0x1BB8 */
int *get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x1BC8 */
void *__fastcall set_global_callback(void *result)
{
  global_func_ptr = result;
  return result;
}


/* Function: call_global_callback @ 0x1BEC */
int __fastcall call_global_callback(int a1)
{
  if ( global_func_ptr )
    return global_func_ptr(a1);
  else
    return -1;
}


/* Function: global_heap_store @ 0x1C50 */
int __fastcall global_heap_store(int a1)
{
  global_heap_ptr = a1;
  if ( a1 )
    return *(_DWORD *)global_heap_ptr;
  else
    return -1;
}


/* Function: static_complex_init @ 0x1CB4 */
int static_complex_init()
{
  return complex_init + dword_140B4 + dword_140BC;
}


/* Function: tls_access @ 0x1CE0 */
int __fastcall tls_access(void *a1)
{
  GLOBAL_OFFSET_TABLE_ = a1;
  return 2 * (_DWORD)a1;
}


/* Function: init_order_test @ 0x1D18 */
int init_order_test()
{
  int v1; // [sp+4h] [bp-4h] BYREF

  v1 = 20;
  return init_depends_on(&v1);
}


/* Function: init_depends_on @ 0x1D40 */
int __fastcall init_depends_on(int *a1)
{
  if ( a1 )
    init_depends_on_static_depends = *a1;
  return init_depends_on_static_depends;
}


/* Function: test_static_global @ 0x1D88 */
int test_static_global()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int const_data; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int *file_static; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int inited; // r0
  int v19; // [sp+Ch] [bp-4h] BYREF

  printf(asc_38E3);
  v0 = global_var_access();
  printf("STM-L1-01 (global_var_access): %d\n", v0);
  v1 = global_var_read();
  printf("STM-L1-01 (global_var_read): %d\n", v1);
  v2 = global_array_access(5u);
  printf("STM-L1-02 (global_array_access): %d\n", v2);
  static_local(1);
  v3 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n", v3);
  v4 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n", v4);
  v5 = call_static_func(5);
  printf("STM-L1-04 (call_static_func): %d\n", v5);
  v6 = access_extern_global();
  printf("STM-L2-01 (access_extern_global): %d\n", v6);
  v7 = call_extern_func();
  printf("STM-L2-02 (call_extern_func): %d\n", v7);
  const_data = read_const_data();
  printf("STM-L2-03 (read_const_data): %d\n", const_data);
  v9 = access_bss_var();
  printf("STM-L2-04 (access_bss_var): %d\n", v9);
  v10 = access_bss_buffer();
  printf("STM-L2-04 (access_bss_buffer): %d\n", v10);
  v11 = global_struct_access();
  printf("STM-L2-05 (global_struct_access): %d\n", v11);
  set_file_static((int *)&word_32);
  file_static = get_file_static();
  printf("STM-L2-06 (file_static): %d\n", file_static);
  set_global_callback(double_value);
  v13 = call_global_callback(5);
  printf("STM-L2-07 (global_func_ptr): %d\n", v13);
  v19 = 100;
  v14 = global_heap_store((int)&v19);
  printf("STM-L2-08 (global_heap_store): %d\n", v14);
  v15 = static_complex_init();
  printf("STM-L2-09 (static_complex_init): %d\n", v15);
  v16 = tls_access(&byte_9[1]);
  printf("STM-L3-01 (tls_access): %d\n", v16);
  inited = init_order_test();
  return printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: double_value @ 0x1FA8 */
int __fastcall double_value(int a1)
{
  return 2 * a1;
}


/* Function: memop_memset @ 0x1FC0 */
int __fastcall memop_memset(unsigned __int8 *a1, size_t a2, int a3)
{
  if ( !a1 || !a2 )
    return -1;
  memset(a1, a3, a2);
  return *a1;
}


/* Function: memop_memcpy @ 0x2034 */
int __fastcall memop_memcpy(char *a1, const void *a2, size_t a3)
{
  if ( !a1 || !a2 || !a3 )
    return -1;
  memcpy(a1, a2, a3);
  return *(_DWORD *)&a1[(a3 & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x20C4 */
int __fastcall memop_memmove(int a1, unsigned int a2)
{
  if ( !a1 || a2 <= 1 )
    return -1;
  memmove((void *)(a1 + 1), (const void *)a1, a2 - 1);
  return *(unsigned __int8 *)(a1 + 1);
}


/* Function: memop_memcmp @ 0x2138 */
int __fastcall memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v5; // [sp+4h] [bp-14h]

  if ( !a1 || !a2 || !a3 )
    return 0;
  v5 = memcmp(a1, a2, a3);
  if ( v5 < 1 )
    return v5 >> 31;
  else
    return 1;
}


/* Function: memop_bzero @ 0x21E8 */
int __fastcall memop_bzero(unsigned __int8 *a1, size_t a2)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, a2);
  return *a1;
}


/* Function: memop_bcopy @ 0x2248 */
int __fastcall memop_bcopy(const void *a1, unsigned __int8 *a2, size_t a3)
{
  if ( !a1 || !a2 || !a3 )
    return -1;
  bcopy(a1, a2, a3);
  return *a2;
}


/* Function: memop_unaligned_access @ 0x22CC */
int __fastcall memop_unaligned_access(unsigned __int8 *a1)
{
  if ( a1 )
    return a1[1] | (a1[2] << 8) | ((a1[3] | (a1[4] << 8)) << 16);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x232C */
int __fastcall memop_memory_barrier(int *a1)
{
  int v2; // [sp+4h] [bp-Ch]

  if ( !a1 )
    return -1;
  v2 = *a1;
  _sync_synchronize();
  return v2 + *a1;
}


/* Function: test_memory_op_functions @ 0x2390 */
int test_memory_op_functions()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v9; // [sp+Ch] [bp-174h] BYREF
  _DWORD v10[2]; // [sp+10h] [bp-170h] BYREF
  int v11; // [sp+18h] [bp-168h] BYREF
  int v12; // [sp+1Ch] [bp-164h] BYREF
  unsigned __int8 v13[10]; // [sp+22h] [bp-15Eh] BYREF
  _DWORD v14[3]; // [sp+2Ch] [bp-154h] BYREF
  _DWORD v15[3]; // [sp+38h] [bp-148h] BYREF
  char v16[12]; // [sp+44h] [bp-13Ch] BYREF
  _DWORD v17[5]; // [sp+50h] [bp-130h] BYREF
  _DWORD v18[5]; // [sp+64h] [bp-11Ch] BYREF
  unsigned __int8 v19[264]; // [sp+78h] [bp-108h] BYREF

  printf(asc_3B46);
  v18[0] = *(_DWORD *)"\n";
  v18[1] = 20;
  v18[2] = 30;
  v18[3] = 40;
  v18[4] = 50;
  memset(v17, 0, sizeof(v17));
  v0 = memop_memset(v19, 0xAu, 65);
  printf("MEMOP-L2-01: %d\n", v0);
  v1 = memop_memcpy((char *)v17, v18, 0x14u);
  printf("MEMOP-L2-02: %d\n", v1);
  strcpy(v16, "HelloWorld");
  v2 = memop_memmove((int)v16, 0xAu);
  printf("MEMOP-L2-03: %c\n", v2);
  v15[2] = 3;
  v15[1] = 2;
  v15[0] = 1;
  v14[2] = 4;
  v14[1] = 2;
  v14[0] = 1;
  v3 = memop_memcmp(v15, v14, 0xCu);
  printf("MEMOP-L2-04: %d\n", v3);
  v4 = memop_bzero(v13, 0xAu);
  printf("MEMOP-L2-05: %d\n", v4);
  v12 = 67305985;
  v11 = 0;
  v5 = memop_bcopy(&v12, (unsigned __int8 *)&v11, 4u);
  printf("MEMOP-L2-06: %d\n", v5);
  v10[1] = 117835012;
  v10[0] = 50462976;
  v6 = memop_unaligned_access((unsigned __int8 *)v10);
  printf("MEMOP-L3-01: 0x%x\n", v6);
  v9 = 5;
  v7 = memop_memory_barrier(&v9);
  return printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x25B4 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x25EC */
int __fastcall extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x2604 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x263C */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x2674 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x26AC */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x26E4 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x271C */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x2758 */
int __fastcall _sync_fetch_and_add_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_sub_2 @ 0x27B8 */
int __fastcall _sync_fetch_and_sub_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_or_2 @ 0x2818 */
int __fastcall _sync_fetch_and_or_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_and_2 @ 0x2878 */
int __fastcall _sync_fetch_and_and_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_xor_2 @ 0x28D8 */
int __fastcall _sync_fetch_and_xor_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_nand_2 @ 0x2938 */
int __fastcall _sync_fetch_and_nand_2(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (__int16)v6;
}


/* Function: __sync_fetch_and_add_1 @ 0x299C */
int __fastcall _sync_fetch_and_add_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 + a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_sub_1 @ 0x29F8 */
int __fastcall _sync_fetch_and_sub_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 - a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_or_1 @ 0x2A54 */
int __fastcall _sync_fetch_and_or_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 | a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_and_1 @ 0x2AB0 */
int __fastcall _sync_fetch_and_and_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_xor_1 @ 0x2B0C */
int __fastcall _sync_fetch_and_xor_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ ((v6 ^ a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_fetch_and_nand_1 @ 0x2B68 */
int __fastcall _sync_fetch_and_nand_1(int a1, int a2)
{
  char v3; // r5
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = ((unsigned int)v5 & *v4) >> v3;
  while ( MEMORY[0xFFFF0FC0](*v4, (*v4 ^ (~(v6 & a2) << v3)) & v5 ^ *v4, v4) );
  return (char)v6;
}


/* Function: __sync_add_and_fetch_4 @ 0x2BC8 */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x2C00 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x2C38 */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x2C70 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x2CA8 */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x2CE0 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x2D1C */
int __fastcall _sync_add_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_2 @ 0x2D84 */
int __fastcall _sync_sub_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_2 @ 0x2DEC */
int __fastcall _sync_or_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_2 @ 0x2E54 */
int __fastcall _sync_and_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_2 @ 0x2EBC */
int __fastcall _sync_xor_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_2 @ 0x2F24 */
int __fastcall _sync_nand_and_fetch_2(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 0xFFFF << v3;
  do
    v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (__int16)((v5 & v6) >> v3);
}


/* Function: __sync_add_and_fetch_1 @ 0x2F90 */
int __fastcall _sync_add_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 + (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_sub_and_fetch_1 @ 0x2FF4 */
int __fastcall _sync_sub_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ (((((unsigned int)v5 & *v4) >> v3) - a2) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_or_and_fetch_1 @ 0x3058 */
int __fastcall _sync_or_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 | (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_and_and_fetch_1 @ 0x30BC */
int __fastcall _sync_and_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_xor_and_fetch_1 @ 0x3120 */
int __fastcall _sync_xor_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ ((a2 ^ (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_nand_and_fetch_1 @ 0x3184 */
int __fastcall _sync_nand_and_fetch_1(int a1, int a2)
{
  char v3; // r8
  _DWORD *v4; // r9
  int v5; // r5
  unsigned int v6; // r4

  v3 = (8 * a1) & 0x18;
  v4 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v5 = 255 << v3;
  do
    v6 = (*v4 ^ (~(a2 & (((unsigned int)v5 & *v4) >> v3)) << v3)) & v5 ^ *v4;
  while ( MEMORY[0xFFFF0FC0]() );
  return (char)((v5 & v6) >> v3);
}


/* Function: __sync_val_compare_and_swap_4 @ 0x31EC */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x323C */
int __fastcall _sync_val_compare_and_swap_2(int a1, int a2, int a3)
{
  char v4; // r5
  int v5; // r10
  _DWORD *v6; // r4
  int v7; // r9
  int v8; // r7
  unsigned int v9; // r3

  v4 = (8 * a1) & 0x18;
  v5 = 0xFFFF << v4;
  v6 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v7 = a3 << v4;
  v8 = (unsigned __int16)a2;
  while ( 1 )
  {
    v9 = ((unsigned int)v5 & *v6) >> v4;
    if ( v9 != v8 )
      break;
    if ( !MEMORY[0xFFFF0FC0](*v6, (v7 ^ *v6) & v5 ^ *v6, v6) )
      return a2;
  }
  return (__int16)v9;
}


/* Function: __sync_val_compare_and_swap_1 @ 0x32B4 */
int __fastcall _sync_val_compare_and_swap_1(int a1, int a2, int a3)
{
  char v4; // r5
  _DWORD *v5; // r4
  int v6; // r7
  int v7; // r9
  int v8; // r10
  unsigned int v9; // r3

  v4 = (8 * a1) & 0x18;
  v5 = (_DWORD *)(a1 & 0xFFFFFFFC);
  v6 = 255 << v4;
  v7 = a3 << v4;
  v8 = (unsigned __int8)a2;
  while ( 1 )
  {
    v9 = ((unsigned int)v6 & *v5) >> v4;
    if ( v9 != v8 )
      break;
    if ( !MEMORY[0xFFFF0FC0](*v5, (v7 ^ *v5) & v6 ^ *v5, v5) )
      return a2;
  }
  return (char)v9;
}


/* Function: __sync_bool_compare_and_swap_4 @ 0x3328 */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x3354 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x3370 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x3398 */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x33D0 */
int __fastcall _sync_lock_test_and_set_2(int a1, int a2)
{
  char v2; // r9
  unsigned int *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r4

  v2 = (8 * a1) & 0x18;
  v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
  v4 = 0xFFFF << v2;
  v5 = a2 << v2;
  do
    v6 = *v3;
  while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
  return (__int16)((v4 & v6) >> v2);
}


/* Function: __sync_lock_test_and_set_1 @ 0x3430 */
int __fastcall _sync_lock_test_and_set_1(int a1, int a2)
{
  char v2; // r9
  unsigned int *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int v6; // r4

  v2 = (8 * a1) & 0x18;
  v3 = (unsigned int *)(a1 & 0xFFFFFFFC);
  v4 = 255 << v2;
  v5 = a2 << v2;
  do
    v6 = *v3;
  while ( MEMORY[0xFFFF0FC0](*v3, (v5 ^ *v3) & v4 ^ *v3, v3) );
  return (char)((v4 & v6) >> v2);
}


/* Function: __sync_lock_release_8 @ 0x348C */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x34B0 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x34D0 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x34F0 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __aeabi_read_tp @ 0x3510 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x3518 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_calloc @ 0x1417C */

/* FAILED to decompile: __imp___libc_start_main @ 0x14180 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x14184 */

/* FAILED to decompile: __imp_printf @ 0x14188 */

/* FAILED to decompile: __imp_memmove @ 0x1418C */

/* FAILED to decompile: __imp_free @ 0x14190 */

/* FAILED to decompile: __imp_memcpy @ 0x14194 */

/* FAILED to decompile: __imp_memcmp @ 0x14198 */

/* FAILED to decompile: __imp_realloc @ 0x1419C */

/* FAILED to decompile: __imp_perror @ 0x141A0 */

/* FAILED to decompile: __imp_bcopy @ 0x141A4 */

/* FAILED to decompile: __imp_waitpid @ 0x141A8 */

/* FAILED to decompile: __imp_malloc @ 0x141AC */

/* FAILED to decompile: __imp_exit @ 0x141B0 */

/* FAILED to decompile: __imp_memset @ 0x141B4 */

/* FAILED to decompile: __imp_fork @ 0x141B8 */

/* FAILED to decompile: __imp_abort @ 0x141BC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x141C4 */

/* Total functions decompiled: 117, failed: 18 */
