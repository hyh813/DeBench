/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/3/3_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x105A8 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_105B4 @ 0x105B4 */
void sub_105B4()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x106A0 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))&aHeapL301Linked[(_DWORD)&off_106DC + 12],
    v4,
    (char **)va,
    0,
    0,
    a1,
    va);
  abort();
}


/* Function: call_weak_fn @ 0x106E4 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10708 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10734 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x1076C */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x10794 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: double_value @ 0x10798 */
int __fastcall double_value(int a1)
{
  return 2 * a1;
}


/* Function: local_vars @ 0x107C0 */
int __fastcall local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x10804 */
int __fastcall local_array(int a1)
{
  int i; // [sp+8h] [bp-34h]
  _BYTE v3[16]; // [sp+10h] [bp-2Ch]
  int v4; // [sp+20h] [bp-1Ch]

  for ( i = 0; i <= 9; ++i )
    *(_DWORD *)&v3[4 * i - 4] = i * a1;
  return v4;
}


/* Function: local_struct @ 0x10898 */
int __fastcall local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x108D8 */
int __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x10910 */
int __fastcall address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x10954 */
int large_stack_frame()
{
  int i; // [sp+0h] [bp-80Ch]
  _BYTE v2[2048]; // [sp+4h] [bp-808h]

  for ( i = 0; i < 2048; ++i )
    v2[i] = i;
  return v2[1024];
}


/* Function: vla_stack @ 0x109EC */
int __fastcall vla_stack(int a1)
{
  int v3; // [sp+0h] [bp-2Ch] BYREF
  int v4; // [sp+4h] [bp-28h]
  int i; // [sp+8h] [bp-24h]
  int v6; // [sp+Ch] [bp-20h]
  int *v7; // [sp+10h] [bp-1Ch]

  v4 = a1;
  if ( a1 <= 0 || v4 > 1000 )
    return -1;
  v6 = v4 - 1;
  v7 = &v3;
  for ( i = 0; i < v4; ++i )
    v7[i] = 2 * i;
  return v7[v4 / 2];
}


/* Function: alloca_usage @ 0x10B3C */
int __fastcall alloca_usage(int a1)
{
  int v3; // [sp+0h] [bp-1Ch] BYREF
  int v4; // [sp+4h] [bp-18h]
  int i; // [sp+Ch] [bp-10h]
  int *v6; // [sp+10h] [bp-Ch]

  v4 = a1;
  if ( a1 <= 0 )
    return -1;
  v6 = &v3;
  for ( i = 0; i < v4; ++i )
    v6[i] = 3 * i;
  return v6[v4 / 2];
}


/* Function: stack_alias @ 0x10C34 */
int stack_alias()
{
  int v2; // [sp+8h] [bp-Ch] BYREF

  v2 = 10;
  if ( !&v2 )
    return -1;
  v2 = 20;
  return 20;
}


/* Function: test_stack_memory @ 0x10CD4 */
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
  _DWORD v10[2]; // [sp+4h] [bp-38h] BYREF
  _DWORD s[10]; // [sp+Ch] [bp-30h] BYREF

  puts(::s);
  v0 = local_vars(5);
  printf("MEM-L1-01 (local_vars): %d\n", v0);
  v1 = local_array(2);
  printf("MEM-L1-02 (local_array): %d\n", v1);
  v2 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n", v2);
  v3 = address_of_local(v10);
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
  v10[1] = 0;
  v8 = stack_alias();
  return printf("MEM-L2-04 (stack_alias): %d\n", v8);
}


/* Function: heap_basic @ 0x10E68 */
int __fastcall heap_basic(int a1)
{
  int i; // [sp+Ch] [bp-10h]
  _DWORD *ptr; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < a1; ++i )
    ptr[i] = 2 * i;
  v6 = ptr[a1 / 2];
  free(ptr);
  return v6;
}


/* Function: heap_calloc @ 0x10F24 */
int __fastcall heap_calloc(signed int a1)
{
  int v4; // [sp+Ch] [bp-10h]
  signed int i; // [sp+10h] [bp-Ch]
  _DWORD *ptr; // [sp+14h] [bp-8h]

  ptr = calloc(a1, 4u);
  if ( !ptr )
    return -1;
  v4 = 0;
  for ( i = 0; i < a1; ++i )
    v4 += ptr[i];
  free(ptr);
  return v4;
}


/* Function: heap_realloc @ 0x10FC8 */
int heap_realloc()
{
  int v1; // r3
  int i; // [sp+0h] [bp-1Ch]
  int j; // [sp+4h] [bp-18h]
  _DWORD *ptr; // [sp+8h] [bp-14h]
  int v6; // [sp+Ch] [bp-10h]
  _DWORD *v7; // [sp+10h] [bp-Ch]
  int v8; // [sp+14h] [bp-8h]

  ptr = malloc(0x14u);
  if ( !ptr )
    return -1;
  for ( i = 0; i <= 4; ++i )
    ptr[i] = i + 1;
  v6 = ptr[2];
  v7 = realloc(ptr, 0x28u);
  if ( v7 )
  {
    for ( j = 5; j <= 9; ++j )
      v7[j] = 10 * j;
    if ( v6 == v7[2] )
      v1 = v7[5];
    else
      v1 = -3;
    v8 = v1;
    free(v7);
    return v8;
  }
  else
  {
    free(ptr);
    return -2;
  }
}


/* Function: heap_array @ 0x11108 */
int __fastcall heap_array(int a1)
{
  int i; // [sp+Ch] [bp-10h]
  _DWORD *ptr; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < a1; ++i )
    ptr[i] = 3 * i;
  v6 = ptr[a1 / 2];
  free(ptr);
  return v6;
}


/* Function: heap_struct @ 0x111CC */
int __fastcall heap_struct(int a1)
{
  _DWORD *ptr; // [sp+8h] [bp-Ch]
  int v5; // [sp+Ch] [bp-8h]

  ptr = malloc(8u);
  if ( !ptr )
    return -1;
  *ptr = a1;
  ptr[1] = 2 * a1;
  v5 = *ptr + ptr[1];
  free(ptr);
  return v5;
}


/* Function: heap_nested @ 0x1124C */
int __fastcall heap_nested(void **a1)
{
  _DWORD *v2; // r4

  *a1 = malloc(8u);
  if ( !*a1 )
    return -1;
  *(_DWORD *)*a1 = 10;
  v2 = *a1;
  v2[1] = malloc(8u);
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


/* Function: linked_list_heap @ 0x11318 */
int linked_list_heap()
{
  _DWORD *v2; // [sp+0h] [bp-24h]
  _DWORD *v3; // [sp+4h] [bp-20h]
  int i; // [sp+8h] [bp-1Ch]
  int v5; // [sp+Ch] [bp-18h]
  _DWORD *j; // [sp+10h] [bp-14h]
  void *v7; // [sp+14h] [bp-10h]
  _DWORD *v8; // [sp+18h] [bp-Ch]
  void *ptr; // [sp+1Ch] [bp-8h]

  v2 = 0;
  v3 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i > 4 )
    {
      v5 = 0;
      for ( j = v2; j; j = (_DWORD *)j[1] )
        v5 += *j;
      while ( v2 )
      {
        v7 = v2;
        v2 = (_DWORD *)v2[1];
        free(v7);
      }
      return v5;
    }
    v8 = malloc(8u);
    if ( !v8 )
      break;
    *v8 = 10 * i;
    v8[1] = 0;
    if ( v2 )
      v3[1] = v8;
    else
      v2 = v8;
    v3 = v8;
  }
  while ( v2 )
  {
    ptr = v2;
    v2 = (_DWORD *)v2[1];
    free(ptr);
  }
  return -1;
}


/* Function: create_tree_node @ 0x11484 */
_DWORD *__fastcall create_tree_node(int a1)
{
  _DWORD *v3; // [sp+Ch] [bp-8h]

  v3 = malloc(0xCu);
  if ( v3 )
  {
    *v3 = a1;
    v3[1] = 0;
    v3[2] = 0;
  }
  return v3;
}


/* Function: tree_heap_traversal @ 0x114E4 */
int tree_heap_traversal()
{
  void **ptr; // [sp+0h] [bp-Ch]
  int v3; // [sp+4h] [bp-8h]

  ptr = (void **)create_tree_node(10);
  if ( !ptr )
    return -1;
  ptr[1] = create_tree_node(20);
  ptr[2] = create_tree_node(30);
  if ( ptr[1] && ptr[2] )
  {
    v3 = (int)*ptr + *(_DWORD *)ptr[1] + *(_DWORD *)ptr[2];
    free(ptr[1]);
    free(ptr[2]);
    free(ptr);
    return v3;
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


/* Function: memory_leak @ 0x1160C */
int __fastcall memory_leak(int a1)
{
  int i; // [sp+8h] [bp-Ch]
  _DWORD *v5; // [sp+Ch] [bp-8h]

  v5 = malloc(4 * a1);
  if ( !v5 )
    return -1;
  for ( i = 0; i < a1; ++i )
    v5[i] = i;
  return v5[a1 / 2];
}


/* Function: dangling_pointer @ 0x116B4 */
int dangling_pointer()
{
  _DWORD *ptr; // [sp+4h] [bp-10h]

  ptr = malloc(4u);
  if ( !ptr )
    return -1;
  *ptr = 42;
  printf("value before free: %d\n", *ptr);
  free(ptr);
  return *ptr;
}


/* Function: double_free @ 0x11730 */
int __fastcall double_free(int a1)
{
  _DWORD *ptr; // [sp+Ch] [bp-8h]

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


/* Function: heap_overflow @ 0x117A8 */
int heap_overflow()
{
  int i; // [sp+4h] [bp-10h]
  int *ptr; // [sp+8h] [bp-Ch]
  int v4; // [sp+Ch] [bp-8h]

  ptr = (int *)malloc(0x28u);
  if ( !ptr )
    return -1;
  for ( i = 0; i <= 10; ++i )
    ptr[i] = 100 * i;
  v4 = *ptr;
  free(ptr);
  return v4;
}


/* Function: test_heap_memory @ 0x11850 */
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
  void *ptr; // [sp+4h] [bp-18h] BYREF
  int stat_loc; // [sp+8h] [bp-14h] BYREF
  __pid_t pid; // [sp+Ch] [bp-10h]
  int v12; // [sp+10h] [bp-Ch]

  puts(asc_13890);
  v0 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n", v0);
  v1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
  v2 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
  v3 = heap_array(10);
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
  v8 = memory_leak(5);
  printf("HEAP-L3-03 (memory_leak): %d\n", v8);
  printf("HEAP-L3-04 (dangling_pointer): ");
  pid = fork();
  if ( !pid )
  {
    v12 = dangling_pointer();
    printf(aD, v12);
    exit(0);
  }
  if ( pid <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(pid, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( (char)((stat_loc & 0x7F) + 1) >> 1 > 0 )
        printf(&byte_13A34, stat_loc & 0x7F);
    }
    else
    {
      printf(&byte_13A0C, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x11AB8 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x11AF0 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x11B18 */
int __fastcall global_array_access(unsigned int a1)
{
  if ( a1 < 0xA )
    return global_array[a1];
  else
    return -1;
}


/* Function: static_local @ 0x11B68 */
int __fastcall static_local(int a1)
{
  if ( !a1 )
    return ++counter_1;
  counter_1 = 0;
  return 0;
}


/* Function: static_helper @ 0x11BC8 */
int __fastcall static_helper(int a1)
{
  return 2 * a1;
}


/* Function: call_static_func @ 0x11BF0 */
int __fastcall call_static_func(int a1)
{
  return static_helper(a1) + 1;
}


/* Function: access_extern_global @ 0x11C1C */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x11C44 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x11C60 */
int read_const_data()
{
  return *((unsigned __int8 *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x11C98 */
int access_bss_var()
{
  return bss_var;
}


/* Function: access_bss_buffer @ 0x11CBC */
int access_bss_buffer()
{
  return (unsigned __int8)bss_buffer;
}


/* Function: global_struct_access @ 0x11CE0 */
int global_struct_access()
{
  return global_point + dword_24094;
}


/* Function: set_file_static @ 0x11D10 */
int __fastcall set_file_static(int result)
{
  file_scope_static = result;
  return result;
}


/* Function: get_file_static @ 0x11D40 */
int get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x11D64 */
void *__fastcall set_global_callback(void *result)
{
  global_func_ptr = result;
  return result;
}


/* Function: call_global_callback @ 0x11D94 */
int __fastcall call_global_callback(int a1)
{
  if ( global_func_ptr )
    return global_func_ptr(a1);
  else
    return -1;
}


/* Function: global_heap_store @ 0x11DE0 */
int __fastcall global_heap_store(int a1)
{
  global_heap_ptr = a1;
  if ( a1 )
    return *(_DWORD *)global_heap_ptr;
  else
    return -1;
}


/* Function: static_complex_init @ 0x11E34 */
int static_complex_init()
{
  return complex_init + dword_240A4 + dword_240AC;
}


/* Function: tls_access @ 0x11E70 */
int __fastcall tls_access(void (*a1)(void *ptr))
{
  free = a1;
  return 2 * (_DWORD)a1;
}


/* Function: init_depends_on @ 0x11EB8 */
int __fastcall init_depends_on(int *a1)
{
  if ( a1 )
    static_depends_0 = *a1;
  return static_depends_0;
}


/* Function: init_order_test @ 0x11F00 */
int init_order_test()
{
  int v1; // [sp+0h] [bp-Ch] BYREF

  v1 = 20;
  return init_depends_on(&v1);
}


/* Function: test_static_global @ 0x11F60 */
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
  int file_static; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int inited; // r0
  int v19; // [sp+0h] [bp-Ch] BYREF

  puts(asc_13A94);
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
  set_file_static(50);
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
  v16 = tls_access((void (*)(void *))0xA);
  printf("STM-L3-01 (tls_access): %d\n", v16);
  inited = init_order_test();
  return printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: memop_memset @ 0x121A4 */
int __fastcall memop_memset(unsigned __int8 *a1, size_t a2, int a3)
{
  if ( !a1 || !a2 )
    return -1;
  memset(a1, a3, a2);
  return *a1;
}


/* Function: memop_memcpy @ 0x12200 */
int __fastcall memop_memcpy(char *a1, const void *a2, size_t a3)
{
  if ( !a1 || !a2 || !a3 )
    return -1;
  memcpy(a1, a2, a3);
  return *(_DWORD *)&a1[(a3 & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x12278 */
int __fastcall memop_memmove(int a1, unsigned int a2)
{
  if ( !a1 || a2 <= 1 )
    return -1;
  memmove((void *)(a1 + 1), (const void *)a1, a2 - 1);
  return *(unsigned __int8 *)(a1 + 1);
}


/* Function: memop_memcmp @ 0x122E0 */
int __fastcall memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v5; // [sp+14h] [bp-8h]

  if ( !a1 || !a2 || !a3 )
    return 0;
  v5 = memcmp(a1, a2, a3);
  if ( v5 > 0 )
    return 1;
  if ( v5 >= 0 )
    return 0;
  return -1;
}


/* Function: memop_bzero @ 0x12370 */
int __fastcall memop_bzero(unsigned __int8 *a1, size_t a2)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, a2);
  return *a1;
}


/* Function: memop_bcopy @ 0x123C4 */
int __fastcall memop_bcopy(const void *a1, unsigned __int8 *a2, size_t a3)
{
  if ( !a1 || !a2 || !a3 )
    return -1;
  memmove(a2, a1, a3);
  return *a2;
}


/* Function: memop_unaligned_access @ 0x1242C */
int __fastcall memop_unaligned_access(int a1)
{
  int dest; // [sp+8h] [bp-Ch] BYREF

  if ( !a1 )
    return -1;
  memcpy(&dest, (const void *)(a1 + 1), sizeof(dest));
  return dest;
}


/* Function: memop_memory_barrier @ 0x124A8 */
int __fastcall memop_memory_barrier(int *a1)
{
  int v4; // [sp+Ch] [bp-8h]

  if ( !a1 )
    return -1;
  v4 = *a1;
  _sync_synchronize();
  return *a1 + v4;
}


/* Function: test_memory_op_functions @ 0x124F8 */
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
  int v9; // [sp+0h] [bp-174h] BYREF
  _DWORD v10[3]; // [sp+4h] [bp-170h] BYREF
  _DWORD v11[3]; // [sp+10h] [bp-164h] BYREF
  _DWORD v12[5]; // [sp+1Ch] [bp-158h] BYREF
  char v13[20]; // [sp+30h] [bp-144h] BYREF
  int v14; // [sp+44h] [bp-130h] BYREF
  int v15; // [sp+48h] [bp-12Ch] BYREF
  _DWORD v16[2]; // [sp+4Ch] [bp-128h] BYREF
  unsigned __int8 v17[12]; // [sp+54h] [bp-120h] BYREF
  char v18[12]; // [sp+60h] [bp-114h] BYREF
  unsigned __int8 v19[256]; // [sp+6Ch] [bp-108h] BYREF

  puts(asc_13D18);
  v12[0] = *(_DWORD *)"\n";
  v12[1] = 20;
  v12[2] = 30;
  v12[3] = 40;
  v12[4] = 50;
  memset(v13, 0, sizeof(v13));
  v0 = memop_memset(v19, 0xAu, 65);
  printf("MEMOP-L2-01: %d\n", v0);
  v1 = memop_memcpy(v13, v12, 0x14u);
  printf("MEMOP-L2-02: %d\n", v1);
  strcpy(v18, "HelloWorld");
  v2 = memop_memmove((int)v18, 0xAu);
  printf("MEMOP-L2-03: %c\n", v2);
  v10[0] = 1;
  v10[1] = 2;
  v10[2] = 3;
  v11[0] = 1;
  v11[1] = 2;
  v11[2] = 4;
  v3 = memop_memcmp(v10, v11, 0xCu);
  printf("MEMOP-L2-04: %d\n", v3);
  v4 = memop_bzero(v17, 0xAu);
  printf("MEMOP-L2-05: %d\n", v4);
  v14 = 67305985;
  v15 = 0;
  v5 = memop_bcopy(&v14, (unsigned __int8 *)&v15, 4u);
  printf("MEMOP-L2-06: %d\n", v5);
  v16[0] = 50462976;
  v16[1] = 117835012;
  v6 = memop_unaligned_access((int)v16);
  printf("MEMOP-L3-01: 0x%x\n", v6);
  v9 = 5;
  v7 = memop_memory_barrier(&v9);
  return printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x1272C */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x12750 */
int __fastcall extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x12780 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x127B8 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x127F0 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x12828 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x12860 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x12898 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x128D4 */
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


/* Function: __sync_fetch_and_sub_2 @ 0x12934 */
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


/* Function: __sync_fetch_and_or_2 @ 0x12994 */
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


/* Function: __sync_fetch_and_and_2 @ 0x129F4 */
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


/* Function: __sync_fetch_and_xor_2 @ 0x12A54 */
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


/* Function: __sync_fetch_and_nand_2 @ 0x12AB4 */
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


/* Function: __sync_fetch_and_add_1 @ 0x12B18 */
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


/* Function: __sync_fetch_and_sub_1 @ 0x12B74 */
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


/* Function: __sync_fetch_and_or_1 @ 0x12BD0 */
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


/* Function: __sync_fetch_and_and_1 @ 0x12C2C */
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


/* Function: __sync_fetch_and_xor_1 @ 0x12C88 */
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


/* Function: __sync_fetch_and_nand_1 @ 0x12CE4 */
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


/* Function: __sync_add_and_fetch_4 @ 0x12D44 */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x12D7C */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x12DB4 */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x12DEC */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x12E24 */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x12E5C */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x12E98 */
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


/* Function: __sync_sub_and_fetch_2 @ 0x12F00 */
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


/* Function: __sync_or_and_fetch_2 @ 0x12F68 */
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


/* Function: __sync_and_and_fetch_2 @ 0x12FD0 */
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


/* Function: __sync_xor_and_fetch_2 @ 0x13038 */
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


/* Function: __sync_nand_and_fetch_2 @ 0x130A0 */
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


/* Function: __sync_add_and_fetch_1 @ 0x1310C */
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


/* Function: __sync_sub_and_fetch_1 @ 0x13170 */
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


/* Function: __sync_or_and_fetch_1 @ 0x131D4 */
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


/* Function: __sync_and_and_fetch_1 @ 0x13238 */
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


/* Function: __sync_xor_and_fetch_1 @ 0x1329C */
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


/* Function: __sync_nand_and_fetch_1 @ 0x13300 */
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


/* Function: __sync_val_compare_and_swap_4 @ 0x13368 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x133B8 */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x13430 */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x134A4 */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x134D0 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x134EC */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x13514 */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x1354C */
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


/* Function: __sync_lock_test_and_set_1 @ 0x135AC */
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


/* Function: __sync_lock_release_8 @ 0x13608 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x1362C */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x1364C */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x1366C */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __aeabi_read_tp @ 0x13690 */
void _aeabi_read_tp()
{
  JUMPOUT(0xFFFF0FE0);
}


/* Function: .term_proc @ 0x13698 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_memset @ 0x2413C */

/* FAILED to decompile: __imp_free @ 0x24140 */

/* FAILED to decompile: __imp_abort @ 0x24144 */

/* FAILED to decompile: __imp_exit @ 0x24148 */

/* FAILED to decompile: __imp_realloc @ 0x2414C */

/* FAILED to decompile: __imp___libc_start_main @ 0x24150 */

/* FAILED to decompile: __imp_memcmp @ 0x24154 */

/* FAILED to decompile: __imp_waitpid @ 0x24158 */

/* FAILED to decompile: __imp_calloc @ 0x2415C */

/* FAILED to decompile: __imp_fork @ 0x24160 */

/* FAILED to decompile: __imp_memmove @ 0x24164 */

/* FAILED to decompile: __imp_puts @ 0x24168 */

/* FAILED to decompile: __imp_memcpy @ 0x2416C */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x24170 */

/* FAILED to decompile: __imp_perror @ 0x24174 */

/* FAILED to decompile: __imp_printf @ 0x24178 */

/* FAILED to decompile: __imp_malloc @ 0x2417C */

/* FAILED to decompile: __imp___gmon_start__ @ 0x24180 */

/* Total functions decompiled: 117, failed: 18 */
