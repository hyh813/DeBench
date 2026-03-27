/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/3/3_gcc_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x1058C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10598 @ 0x10598 */
void sub_10598()
{
  JUMPOUT(0);
}


/* Function: main @ 0x10684 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v3 = test_stack_memory(argc, argv, envp);
  v4 = test_heap_memory(v3);
  v5 = test_static_global(v4);
  test_memory_op_functions(v5);
  return 0;
}


/* Function: _start @ 0x106A0 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))&aHeapL205HeapSt[(_DWORD)&off_106DC + 26],
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


/* Function: local_vars @ 0x107A0 */
int __fastcall local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x107AC */
int __fastcall local_array(int a1)
{
  int v1; // r3
  int v2; // r2
  char *v3; // r1
  char v5; // [sp+4h] [bp-34h] BYREF
  int v6; // [sp+18h] [bp-20h]

  v1 = 0;
  v2 = 0;
  v3 = &v5;
  do
  {
    ++v2;
    *(_DWORD *)v3 = v1;
    v3 += 4;
    v1 += a1;
  }
  while ( v2 != 10 );
  return v6;
}


/* Function: local_struct @ 0x10810 */
int __fastcall local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x10818 */
int __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x10828 */
int __fastcall address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x10834 */
int large_stack_frame()
{
  int v0; // r3
  _BYTE *v1; // r2
  _BYTE v3[2048]; // [sp+4h] [bp-80Ch] BYREF

  v0 = 0;
  v1 = v3;
  do
    *v1++ = v0++;
  while ( v0 != 2048 );
  return v3[1024];
}


/* Function: vla_stack @ 0x10898 */
int __fastcall vla_stack(int a1)
{
  int v2; // r3
  int v3; // [sp+0h] [bp-Ch]

  if ( (unsigned int)(a1 - 1) >= 0x3E8 )
    return -1;
  v2 = 0;
  do
  {
    *(&v3 + v2) = 2 * v2;
    ++v2;
  }
  while ( a1 != v2 );
  return *(&v3 + (a1 >> 1));
}


/* Function: alloca_usage @ 0x10920 */
int __fastcall alloca_usage(int a1)
{
  int i; // r3
  int v3; // [sp+0h] [bp-Ch]

  if ( a1 <= 0 )
    return -1;
  for ( i = 0; i != a1; ++i )
    *(&v3 + i) = 3 * i;
  return *(&v3 + (a1 >> 1));
}


/* Function: stack_alias @ 0x109A4 */
int stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x109AC */
int test_stack_memory()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0

  puts(s);
  _printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
  v0 = local_array(2);
  _printf_chk(1, "MEM-L1-02 (local_array): %d\n", v0);
  _printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
  _printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
  _printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
  v1 = large_stack_frame();
  _printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
  v2 = vla_stack(10);
  _printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
  v3 = alloca_usage(10);
  _printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
  return _printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x10A90 */
int __fastcall heap_basic(int a1)
{
  _DWORD *v2; // r0
  int i; // r3
  int v4; // r4

  v2 = malloc(4 * a1);
  if ( !v2 )
    return -1;
  for ( i = 0; i < a1; ++i )
    v2[i] = 2 * i;
  v4 = v2[a1 / 2];
  free(v2);
  return v4;
}


/* Function: heap_calloc @ 0x10AE0 */
int __fastcall heap_calloc(signed int a1)
{
  _DWORD *v2; // r0
  signed int v3; // r3
  int v4; // r4
  int v5; // r2

  v2 = calloc(a1, 4u);
  if ( !v2 )
    return -1;
  v3 = 0;
  v4 = 0;
  while ( v3 < a1 )
  {
    v5 = v2[v3++];
    v4 += v5;
  }
  free(v2);
  return v4;
}


/* Function: heap_realloc @ 0x10B28 */
int heap_realloc()
{
  _DWORD *v0; // r0
  void *v1; // r4
  int v2; // r4
  _DWORD *v3; // r0

  v0 = malloc(0x14u);
  v1 = v0;
  if ( !v0 )
    return -1;
  *v0 = 1;
  v0[1] = 2;
  v0[2] = 3;
  v0[3] = 4;
  v0[4] = 5;
  v3 = realloc(v0, 0x28u);
  if ( v3 )
  {
    if ( v3[2] == 3 )
      v2 = 50;
    else
      v2 = -3;
    free(v3);
  }
  else
  {
    free(v1);
    return -2;
  }
  return v2;
}


/* Function: heap_array @ 0x10B98 */
int __fastcall heap_array(int a1)
{
  _DWORD *v2; // r0
  int i; // r3
  int v4; // r4

  v2 = malloc(4 * a1);
  if ( !v2 )
    return -1;
  for ( i = 0; i < a1; ++i )
    v2[i] = 3 * i;
  v4 = v2[a1 / 2];
  free(v2);
  return v4;
}


/* Function: heap_struct @ 0x10BE8 */
int __fastcall heap_struct(int a1)
{
  void *v2; // r0
  int v3; // r4

  v2 = malloc(8u);
  if ( !v2 )
    return -1;
  v3 = 3 * a1;
  free(v2);
  return v3;
}


/* Function: heap_nested @ 0x10C14 */
int __fastcall heap_nested(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r3
  int result; // r0

  v2 = malloc(8u);
  *a1 = v2;
  if ( !v2 )
    return -1;
  v3 = v2;
  *v2 = 10;
  v4 = malloc(8u);
  v5 = v4;
  v3[1] = v4;
  if ( v4 )
  {
    *v4 = 20;
    result = 0;
    v5[1] = 0;
  }
  else
  {
    free(v3);
    return -2;
  }
  return result;
}


/* Function: linked_list_heap @ 0x10C80 */
int linked_list_heap()
{
  int v0; // r5
  _DWORD *v1; // r0
  int *v2; // r4
  _DWORD *v3; // r7
  int v4; // r5
  int *v6; // r5
  int *v7; // r3
  int v8; // r2
  int *v9; // r0

  v0 = 0;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = v1;
    v1 = malloc(8u);
    if ( !v1 )
      break;
    *v1 = v0;
    v1[1] = 0;
    v0 += 10;
    if ( v2 )
      v3[1] = v1;
    else
      v2 = v1;
    if ( v0 == 50 )
    {
      v7 = v2;
      v4 = 0;
      do
      {
        v8 = *v7;
        v7 = (int *)v7[1];
        v4 += v8;
      }
      while ( v7 );
      do
      {
        v9 = v2;
        v2 = (int *)v2[1];
        free(v9);
      }
      while ( v2 );
      return v4;
    }
  }
  while ( v2 )
  {
    v6 = (int *)v2[1];
    free(v2);
    v2 = v6;
  }
  return -1;
}


/* Function: create_tree_node @ 0x10D20 */
_DWORD *__fastcall create_tree_node(int a1)
{
  _DWORD *result; // r0

  result = malloc(0xCu);
  if ( result )
  {
    *result = a1;
    result[1] = 0;
    result[2] = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x10D48 */
int tree_heap_traversal()
{
  _DWORD *tree_node; // r4
  int v1; // r5
  _DWORD *v2; // r3
  _DWORD *v3; // r0
  void *v4; // r0

  tree_node = create_tree_node(10);
  if ( !tree_node )
    return -1;
  tree_node[1] = create_tree_node(20);
  v2 = create_tree_node(30);
  tree_node[2] = v2;
  v3 = (_DWORD *)tree_node[1];
  if ( v3 )
  {
    if ( v2 )
    {
      v1 = *tree_node + *v3 + *v2;
      free(v3);
      free((void *)tree_node[2]);
      free(tree_node);
      return v1;
    }
    free(v3);
  }
  v4 = (void *)tree_node[2];
  if ( v4 )
    free(v4);
  free(tree_node);
  return -2;
}


/* Function: memory_leak @ 0x10DE4 */
int __fastcall memory_leak(int a1)
{
  _DWORD *v2; // r0
  int i; // r3

  v2 = malloc(4 * a1);
  if ( !v2 )
    return -1;
  for ( i = 0; i < a1; ++i )
    v2[i] = i;
  return v2[a1 / 2];
}


/* Function: dangling_pointer @ 0x10E28 */
int dangling_pointer()
{
  void *v0; // r4

  v0 = malloc(4u);
  if ( !v0 )
    return -1;
  _printf_chk(1, "value before free: %d\n", 42);
  free(v0);
  return *(_DWORD *)v0;
}


/* Function: double_free @ 0x10E68 */
int __fastcall double_free(int a1)
{
  void *v1; // r0
  void *v2; // r4

  if ( a1 )
    return *(_DWORD *)a1;
  v1 = malloc(4u);
  v2 = v1;
  if ( !v1 )
    return -1;
  free(v1);
  free(v2);
  return -2;
}


/* Function: heap_overflow @ 0x10EA8 */
int heap_overflow()
{
  int *v0; // r0
  int v1; // r4
  int v2; // r3
  int *v3; // r2

  v0 = (int *)malloc(0x28u);
  if ( !v0 )
    return -1;
  v2 = 0;
  v3 = v0 - 1;
  do
  {
    v3[1] = v2;
    ++v3;
    v2 += 100;
  }
  while ( v2 != 1100 );
  v1 = *v0;
  free(v0);
  return v1;
}


/* Function: test_heap_memory @ 0x10EF0 */
void __fastcall test_heap_memory(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r2
  void *ptr; // [sp+4h] [bp-14h] BYREF
  int stat_loc[4]; // [sp+8h] [bp-10h] BYREF

  stat_loc[0] = a3;
  stat_loc[1] = a4;
  puts(asc_128CD);
  v4 = heap_basic(10);
  _printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v4);
  v5 = heap_calloc(5);
  _printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v5);
  v6 = heap_realloc();
  _printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v6);
  v7 = heap_array(10);
  _printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v7);
  v8 = heap_struct(5);
  _printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
  ptr = 0;
  v9 = heap_nested(&ptr);
  _printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v9);
  if ( ptr )
  {
    free(*((void **)ptr + 1));
    free(ptr);
  }
  v10 = linked_list_heap();
  _printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v10);
  v11 = tree_heap_traversal();
  _printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v11);
  v12 = memory_leak(5);
  _printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v12);
  _printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
  v13 = fork();
  if ( !v13 )
  {
    v14 = dangling_pointer();
    _printf_chk(1, aD, v14);
    exit(0);
  }
  if ( v13 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v13, stat_loc, 0);
    v15 = stat_loc[0] & 0x7F;
    if ( (stat_loc[0] & 0x7F) != 0 )
    {
      if ( (v15 + 1) << 24 >= 0x2000000 )
        _printf_chk(1, byte_12A5A, v15);
    }
    else
    {
      _printf_chk(1, byte_12A35, BYTE1(stat_loc[0]));
    }
  }
}


/* Function: global_var_access @ 0x110E8 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x11100 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x11114 */
int __fastcall global_array_access(unsigned int a1)
{
  if ( a1 > 9 )
    return -1;
  else
    return global_array[a1];
}


/* Function: static_local @ 0x1112C */
int __fastcall static_local(int a1)
{
  int result; // r0

  if ( a1 )
    result = 0;
  else
    result = counter_1 + 1;
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x1114C */
int __fastcall call_static_func(int a1)
{
  return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x11158 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1116C */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x11174 */
int read_const_data()
{
  return *((unsigned __int8 *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x1118C */
int access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x11194 */
int access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x1119C */
int global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x111A4 */
int __fastcall set_file_static(int result)
{
  file_scope_static = result;
  return result;
}


/* Function: get_file_static @ 0x111B4 */
int get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x111C4 */
void *__fastcall set_global_callback(void *result)
{
  global_func_ptr = result;
  return result;
}


/* Function: call_global_callback @ 0x111D4 */
int call_global_callback()
{
  if ( global_func_ptr )
    return global_func_ptr();
  else
    return -1;
}


/* Function: global_heap_store @ 0x111F4 */
int __fastcall global_heap_store(int a1)
{
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -1;
}


/* Function: static_complex_init @ 0x11204 */
int static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x1120C */
int __fastcall tls_access(int a1)
{
  return 2 * a1;
}


/* Function: init_order_test @ 0x11214 */
int init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x1121C */
int test_static_global()
{
  int v0; // r0
  int v1; // r0
  int const_data; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  puts(asc_12AA6);
  v0 = global_var_access();
  _printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v0);
  _printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  _printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
  counter_1 = 1;
  _printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
  _printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
  _printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
  _printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v1 = call_extern_func();
  _printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v1);
  const_data = read_const_data();
  _printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
  _printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
  _printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
  v3 = global_struct_access();
  _printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v3);
  file_scope_static = 50;
  _printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (int (*)(void))double_value;
  v4 = call_global_callback();
  _printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
  _printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  v5 = static_complex_init();
  _printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
  _printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  return _printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x113F4 */
int __fastcall memop_memset(unsigned __int8 *a1, size_t n, int c)
{
  bool v3; // zf

  v3 = n == 0;
  if ( n )
    v3 = a1 == 0;
  if ( v3 )
    return -1;
  memset(a1, c, n);
  return *a1;
}


/* Function: memop_memcpy @ 0x11428 */
int __fastcall memop_memcpy(char *a1, const void *a2, size_t a3)
{
  bool v3; // zf
  int v4; // r3
  char *v5; // r4

  v3 = a3 == 0;
  if ( a3 )
    v3 = a2 == 0;
  v4 = v3;
  if ( !a1 )
    v4 |= 1u;
  if ( v4 )
    return -1;
  v5 = &a1[a3 & 0xFFFFFFFC];
  memcpy(a1, a2, a3);
  return *((_DWORD *)v5 - 1);
}


/* Function: memop_memmove @ 0x11470 */
int __fastcall memop_memmove(char *src, unsigned int a2)
{
  bool v2; // cc

  v2 = src != 0;
  if ( src )
    v2 = a2 > 1;
  if ( !v2 )
    return -1;
  memmove(src + 1, src, a2 - 1);
  return (unsigned __int8)src[1];
}


/* Function: memop_memcmp @ 0x114A4 */
int __fastcall memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  bool v3; // zf
  int v4; // r3
  int v5; // r0

  v3 = a3 == 0;
  if ( a3 )
    v3 = a2 == 0;
  v4 = v3;
  if ( !a1 )
    v4 |= 1u;
  if ( v4 )
    return 0;
  v5 = memcmp(a1, a2, a3);
  if ( v5 > 0 )
    return 1;
  if ( v5 )
    return -1;
  return 0;
}


/* Function: memop_bzero @ 0x114F0 */
int __fastcall memop_bzero(unsigned __int8 *a1, size_t n)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, n);
  return *a1;
}


/* Function: memop_bcopy @ 0x11518 */
int __fastcall memop_bcopy(void *src, void *dest, size_t a3)
{
  bool v3; // zf
  int v4; // r12

  v3 = a3 == 0;
  if ( a3 )
    v3 = dest == 0;
  v4 = v3;
  if ( !src )
    v4 |= 1u;
  if ( v4 )
    return -1;
  else
    return *(unsigned __int8 *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x1155C */
int __fastcall memop_unaligned_access(int a1, int a2, int a3)
{
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  if ( !a1 )
    return -1;
  memcpy(v4, (const void *)(a1 + 1), 4u);
  return v4[0];
}


/* Function: memop_memory_barrier @ 0x115B8 */
int __fastcall memop_memory_barrier(int *a1)
{
  int v2; // r5

  if ( !a1 )
    return -1;
  v2 = *a1;
  _sync_synchronize();
  return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x115E0 */
int test_memory_op_functions()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r0
  int v12; // [sp+0h] [bp-180h] BYREF
  _DWORD s1[3]; // [sp+4h] [bp-17Ch] BYREF
  _DWORD s2[3]; // [sp+10h] [bp-170h] BYREF
  _DWORD v15[5]; // [sp+1Ch] [bp-164h] BYREF
  char s[20]; // [sp+30h] [bp-150h] BYREF
  int src; // [sp+44h] [bp-13Ch] BYREF
  int v18; // [sp+48h] [bp-138h] BYREF
  _BYTE v19[8]; // [sp+4Ch] [bp-134h] BYREF
  unsigned __int8 v20[12]; // [sp+54h] [bp-12Ch] BYREF
  char dest[12]; // [sp+60h] [bp-120h] BYREF
  unsigned __int8 v22[256]; // [sp+6Ch] [bp-114h] BYREF

  puts(asc_12D08);
  v15[0] = 10;
  v15[1] = 20;
  v15[2] = 30;
  v15[3] = 40;
  v15[4] = 50;
  memset(s, 0, sizeof(s));
  v0 = memop_memset(v22, 0xAu, 65);
  _printf_chk(1, "MEMOP-L2-01: %d\n", v0);
  v1 = memop_memcpy(s, v15, 0x14u);
  _printf_chk(1, "MEMOP-L2-02: %d\n", v1);
  strcpy(dest, "HelloWorld");
  v2 = memop_memmove(dest, 0xAu);
  _printf_chk(1, "MEMOP-L2-03: %c\n", v2);
  s1[0] = 1;
  s1[1] = 2;
  s1[2] = 3;
  s2[0] = 1;
  s2[1] = 2;
  s2[2] = 4;
  v3 = memcmp(s1, s2, 0xCu);
  if ( v3 <= 0 )
  {
    if ( v3 )
      v4 = -1;
    else
      v4 = 0;
  }
  else
  {
    v4 = 1;
  }
  _printf_chk(1, "MEMOP-L2-04: %d\n", v4);
  v5 = memop_bzero(v20, 0xAu);
  _printf_chk(1, "MEMOP-L2-05: %d\n", v5);
  src = 67305985;
  v18 = 0;
  v6 = memop_bcopy(&src, &v18, 4u);
  _printf_chk(1, "MEMOP-L2-06: %d\n", v6);
  memcpy(v19, &unk_12E14, sizeof(v19));
  v9 = memop_unaligned_access((int)v19, v7, v8);
  _printf_chk(1, "MEMOP-L3-01: 0x%x\n", v9);
  v12 = 5;
  v10 = memop_memory_barrier(&v12);
  return _printf_chk(1, "MEMOP-L3-02: %d\n", v10);
}


/* Function: extern_function @ 0x117D4 */
int __fastcall extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x117DC */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x11814 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x1184C */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x11884 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x118BC */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x118F4 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x11930 */
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


/* Function: __sync_fetch_and_sub_2 @ 0x11990 */
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


/* Function: __sync_fetch_and_or_2 @ 0x119F0 */
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


/* Function: __sync_fetch_and_and_2 @ 0x11A50 */
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


/* Function: __sync_fetch_and_xor_2 @ 0x11AB0 */
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


/* Function: __sync_fetch_and_nand_2 @ 0x11B10 */
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


/* Function: __sync_fetch_and_add_1 @ 0x11B74 */
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


/* Function: __sync_fetch_and_sub_1 @ 0x11BD0 */
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


/* Function: __sync_fetch_and_or_1 @ 0x11C2C */
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


/* Function: __sync_fetch_and_and_1 @ 0x11C88 */
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


/* Function: __sync_fetch_and_xor_1 @ 0x11CE4 */
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


/* Function: __sync_fetch_and_nand_1 @ 0x11D40 */
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


/* Function: __sync_add_and_fetch_4 @ 0x11DA0 */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x11DD8 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x11E10 */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x11E48 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x11E80 */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x11EB8 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x11EF4 */
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


/* Function: __sync_sub_and_fetch_2 @ 0x11F5C */
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


/* Function: __sync_or_and_fetch_2 @ 0x11FC4 */
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


/* Function: __sync_and_and_fetch_2 @ 0x1202C */
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


/* Function: __sync_xor_and_fetch_2 @ 0x12094 */
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


/* Function: __sync_nand_and_fetch_2 @ 0x120FC */
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


/* Function: __sync_add_and_fetch_1 @ 0x12168 */
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


/* Function: __sync_sub_and_fetch_1 @ 0x121CC */
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


/* Function: __sync_or_and_fetch_1 @ 0x12230 */
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


/* Function: __sync_and_and_fetch_1 @ 0x12294 */
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


/* Function: __sync_xor_and_fetch_1 @ 0x122F8 */
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


/* Function: __sync_nand_and_fetch_1 @ 0x1235C */
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


/* Function: __sync_val_compare_and_swap_4 @ 0x123C4 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x12414 */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x1248C */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x12500 */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x1252C */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x12548 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x12570 */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x125A8 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x12608 */
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


/* Function: __sync_lock_release_8 @ 0x12664 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x12688 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x126A8 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x126C8 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: .term_proc @ 0x126E8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_memset @ 0x23084 */

/* FAILED to decompile: __imp_free @ 0x23088 */

/* FAILED to decompile: __imp_abort @ 0x2308C */

/* FAILED to decompile: __imp_exit @ 0x23090 */

/* FAILED to decompile: __imp_realloc @ 0x23094 */

/* FAILED to decompile: __imp___libc_start_main @ 0x23098 */

/* FAILED to decompile: __imp___printf_chk @ 0x2309C */

/* FAILED to decompile: __imp_memcmp @ 0x230A0 */

/* FAILED to decompile: __imp_waitpid @ 0x230A4 */

/* FAILED to decompile: __imp_calloc @ 0x230A8 */

/* FAILED to decompile: __imp_fork @ 0x230AC */

/* FAILED to decompile: __imp_memmove @ 0x230B0 */

/* FAILED to decompile: __imp_puts @ 0x230B4 */

/* FAILED to decompile: __imp_memcpy @ 0x230B8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x230BC */

/* FAILED to decompile: __imp_perror @ 0x230C0 */

/* FAILED to decompile: __imp_malloc @ 0x230C4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x230C8 */

/* Total functions decompiled: 114, failed: 18 */
