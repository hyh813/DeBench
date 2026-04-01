/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/3/3_clang_Os_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x55C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_568 @ 0x568 */
void sub_568()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x654 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_690 + 19060), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x698 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x6BC */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x700 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x750 */
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


/* Function: frame_dummy @ 0x7B8 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: local_vars @ 0x7BC */
int __fastcall local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x7C8 */
int __fastcall local_array(int a1)
{
  int v1; // r1
  int i; // r3
  _BYTE v4[40]; // [sp+0h] [bp-28h]

  v1 = 0;
  for ( i = 0; i != -10; --i )
  {
    *(_DWORD *)&v4[-4 * i] = v1;
    v1 += a1;
  }
  return *(_DWORD *)&v4[20];
}


/* Function: local_struct @ 0x7F8 */
int __fastcall local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x800 */
int __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x810 */
int __fastcall address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x81C */
int large_stack_frame()
{
  int i; // r0
  _BYTE v2[2056]; // [sp+0h] [bp-808h]

  for ( i = 0; i != 2048; ++i )
    v2[i] = i;
  return v2[1024];
}


/* Function: vla_stack @ 0x84C */
int __fastcall vla_stack(unsigned int a1)
{
  int v1; // r1
  char *v2; // r1
  int v3; // r3
  unsigned int v4; // r2
  int v6; // [sp-4h] [bp-10h] BYREF

  v1 = -1;
  if ( a1 - 1001 >= 0xFFFFFC18 )
  {
    v2 = (char *)&v6 - ((4 * a1 + 7) & 0xFFFFFFF8);
    v3 = 0;
    v4 = a1;
    do
    {
      *(_DWORD *)&v2[2 * v3] = v3;
      v3 += 2;
      --v4;
    }
    while ( v4 );
    return *(_DWORD *)&v2[(2 * (a1 + (a1 >> 31))) & 0xFFFFFFFD];
  }
  return v1;
}


/* Function: alloca_usage @ 0x8C0 */
int __fastcall alloca_usage(int a1)
{
  char *v2; // r1
  int v3; // r2
  int i; // r3
  int v5; // [sp-4h] [bp-10h] BYREF

  if ( a1 < 1 )
    return -1;
  v2 = (char *)&v5 - ((4 * a1 + 7) & 0xFFFFFFF8);
  v3 = 0;
  for ( i = 0; i != a1; ++i )
  {
    *(_DWORD *)&v2[4 * i] = v3;
    v3 += 3;
  }
  return *(_DWORD *)&v2[(2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD];
}


/* Function: stack_alias @ 0x924 */
int stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x92C */
int test_stack_memory()
{
  int v0; // r0
  _DWORD *v1; // r4
  int i; // r0
  int j; // r1
  int k; // r0
  _BYTE v6[20]; // [sp+0h] [bp-810h] BYREF
  int v7; // [sp+14h] [bp-7FCh]
  unsigned __int8 v8; // [sp+400h] [bp-410h]

  puts(asc_2CFE);
  printf("MEM-L1-01 (local_vars): %d\n", 20);
  v0 = 0;
  v1 = v6;
  do
  {
    *(_DWORD *)&v6[2 * v0] = v0;
    v0 += 2;
  }
  while ( v0 != 20 );
  printf("MEM-L1-02 (local_array): %d\n", v7);
  printf("MEM-L1-03 (local_struct): %d\n", 15);
  printf("MEM-L1-04 (address_of_local): %d\n", 42);
  printf("MEM-L1-05 (address_of_array): %d\n", 2);
  for ( i = 0; i != 2048; ++i )
    v6[i] = i;
  printf("MEM-L2-01 (large_stack_frame): %d\n", v8);
  for ( j = 0; j != 20; j += 2 )
    *(_DWORD *)&v6[2 * j] = j;
  printf("MEM-L2-02 (vla_stack): %d\n", v7);
  for ( k = 0; k != 30; k += 3 )
    *v1++ = k;
  printf("MEM-L2-03 (alloca_usage): %d\n", v7);
  return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0xA5C */
int __fastcall heap_basic(int a1)
{
  char *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r4

  v2 = (char *)malloc(4 * a1);
  if ( !v2 )
    return -1;
  if ( a1 >= 1 )
  {
    v3 = 0;
    v4 = a1;
    do
    {
      *(_DWORD *)&v2[2 * v3] = v3;
      v3 += 2;
      --v4;
    }
    while ( v4 );
  }
  v5 = *(_DWORD *)&v2[(2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD];
  free(v2);
  return v5;
}


/* Function: heap_calloc @ 0xABC */
int __fastcall heap_calloc(signed int a1)
{
  int *v2; // r0
  int v3; // r4
  int *v4; // r1
  int v5; // r2
  int v6; // t1

  v2 = (int *)calloc(a1, 4u);
  if ( !v2 )
    return -1;
  v3 = 0;
  if ( a1 >= 2 )
  {
    v4 = v2 + 1;
    v5 = a1 - 1;
    v3 = 0;
    do
    {
      v6 = *v4++;
      --v5;
      v3 += v6;
    }
    while ( v5 );
  }
  free(v2);
  return v3;
}


/* Function: heap_realloc @ 0xB14 */
int heap_realloc()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r4
  int i; // r0
  int v3; // r6
  _DWORD *v4; // r0
  int v5; // r1
  int v6; // r5

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
    v4[9] = 90;
    v5 = v4[2];
    v4[6] = 60;
    v6 = -3;
    v4[5] = 50;
    v1 = v4;
    v4[7] = 70;
    v4[8] = 80;
    if ( v5 == v3 )
      v6 = 50;
  }
  else
  {
    v6 = -2;
  }
  free(v1);
  return v6;
}


/* Function: heap_array @ 0xBBC */
int __fastcall heap_array(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  _DWORD *v4; // r2
  int v5; // r3
  int v6; // r4

  v2 = malloc(4 * a1);
  if ( !v2 )
    return -1;
  if ( a1 >= 1 )
  {
    v3 = 0;
    v4 = v2;
    v5 = a1;
    do
    {
      *v4++ = v3;
      v3 += 3;
      --v5;
    }
    while ( v5 );
  }
  v6 = *(_DWORD *)((char *)v2 + ((2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD));
  free(v2);
  return v6;
}


/* Function: heap_struct @ 0xC20 */
int __fastcall heap_struct(int a1)
{
  return 3 * a1;
}


/* Function: heap_nested @ 0xC28 */
int __fastcall heap_nested(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r0
  _DWORD *v5; // r1
  int result; // r0

  v2 = malloc(8u);
  *a1 = v2;
  if ( !v2 )
    return -1;
  v3 = v2;
  *v2 = 10;
  v4 = malloc(8u);
  v3[1] = v4;
  if ( v4 )
  {
    v5 = v4;
    result = 0;
    *v5 = 20;
    v5[1] = 0;
  }
  else
  {
    free(v3);
    return -2;
  }
  return result;
}


/* Function: linked_list_heap @ 0xC98 */
int linked_list_heap()
{
  _DWORD *v0; // r0
  _DWORD *v1; // r5
  int v2; // r7
  int v3; // r6
  _DWORD *v4; // r1
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  _BOOL4 v7; // r6
  _DWORD *v8; // r5
  int v9; // r5
  int *v10; // r0
  int v11; // r1
  _DWORD *v12; // r6

  v0 = malloc(8u);
  if ( v0 )
  {
    v1 = v0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      *v1 = v2;
      v1[1] = 0;
      if ( v5 )
        v4[1] = v1;
      else
        v5 = v1;
      if ( v3 == 4 )
        break;
      v6 = malloc(8u);
      v4 = v1;
      ++v3;
      v2 += 10;
      v1 = v6;
      if ( !v6 )
      {
        v7 = (unsigned int)(v3 - 1) < 4;
        goto LABEL_10;
      }
    }
    v7 = 0;
  }
  else
  {
    v7 = 1;
    v5 = 0;
LABEL_10:
    if ( v5 )
    {
      do
      {
        v8 = (_DWORD *)v5[1];
        free(v5);
        v5 = v8;
      }
      while ( v8 );
    }
    v5 = 0;
  }
  v9 = -1;
  if ( !v7 )
  {
    v9 = 0;
    if ( v5 )
    {
      v10 = v5;
      do
      {
        v11 = *v10;
        v10 = (int *)v10[1];
        v9 += v11;
      }
      while ( v10 );
      do
      {
        v12 = (_DWORD *)v5[1];
        free(v5);
        v5 = v12;
      }
      while ( v12 );
    }
  }
  return v9;
}


/* Function: create_tree_node @ 0xDA4 */
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


/* Function: tree_heap_traversal @ 0xDD0 */
int tree_heap_traversal()
{
  return 60;
}


/* Function: memory_leak @ 0xDD8 */
int __fastcall memory_leak(int a1)
{
  _DWORD *v2; // r0
  int i; // r1

  v2 = malloc(4 * a1);
  if ( !v2 )
    return -1;
  if ( a1 >= 1 )
  {
    for ( i = 0; i != a1; ++i )
      v2[i] = i;
  }
  return *(_DWORD *)((char *)v2 + ((2 * (a1 + ((unsigned int)a1 >> 31))) & 0xFFFFFFFD));
}


/* Function: dangling_pointer @ 0xE2C */
int dangling_pointer()
{
  void *v0; // r0
  void *v1; // r4

  v0 = malloc(4u);
  if ( !v0 )
    return -1;
  v1 = v0;
  printf("value before free: %d\n", 42);
  free(v1);
  return *(_DWORD *)v1;
}


/* Function: double_free @ 0xE74 */
int __fastcall double_free(int a1)
{
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -2;
}


/* Function: heap_overflow @ 0xE84 */
int heap_overflow()
{
  int *v0; // r0
  int v1; // r1
  int i; // r2
  int v3; // r4

  v0 = (int *)malloc(0x28u);
  if ( !v0 )
    return -1;
  v1 = 0;
  for ( i = 0; i != -11; --i )
  {
    v0[-i] = v1;
    v1 += 100;
  }
  v3 = *v0;
  free(v0);
  return v3;
}


/* Function: test_heap_memory @ 0xED0 */
void test_heap_memory()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  void **v5; // r4
  int v6; // r0
  _DWORD *v7; // r0
  int i; // r1
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // [sp+0h] [bp-10h] BYREF
  void **v14; // [sp+4h] [bp-Ch] BYREF

  puts(asc_2D1C);
  v0 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n", v0);
  v1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n", v1);
  v2 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n", v2);
  v3 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n", v3);
  printf("HEAP-L2-05 (heap_struct): %d\n", 15);
  v14 = 0;
  v4 = heap_nested(&v14);
  printf("HEAP-L2-06 (heap_nested): %d\n", v4);
  v5 = v14;
  if ( v14 )
  {
    free(v14[1]);
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
    v12 = dangling_pointer();
    printf(aD, v12);
    exit(0);
  }
  if ( v10 < 1 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v10, &v13, 0);
    v11 = v13 & 0x7F;
    if ( (v13 & 0x7F) != 0 )
    {
      if ( (v11 << 24) + 0x1000000 >= 0x2000000 )
        printf(byte_29EA, v11);
    }
    else
    {
      printf(byte_29C5, BYTE1(v13));
    }
  }
}


/* Function: global_var_access @ 0x10CC */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x10F0 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x1104 */
int __fastcall global_array_access(unsigned int a1)
{
  int result; // r0

  result = -1;
  if ( a1 <= 9 )
    return global_array[a1];
  return result;
}


/* Function: static_local @ 0x1124 */
int __fastcall static_local(int a1)
{
  int v1; // r1

  v1 = 0;
  if ( !a1 )
    v1 = static_local_counter + 1;
  static_local_counter = v1;
  return v1;
}


/* Function: call_static_func @ 0x1154 */
int __fastcall call_static_func(int a1)
{
  return (2 * a1) | 1;
}


/* Function: access_extern_global @ 0x1160 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1178 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x1180 */
int read_const_data()
{
  return (unsigned __int8)const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1198 */
int access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x11A0 */
int access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x11A8 */
int global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x11B0 */
int *__fastcall set_file_static(int *result)
{
  file_scope_static = result;
  return result;
}


/* Function: get_file_static @ 0x11C4 */
int *get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x11D4 */
void *__fastcall set_global_callback(void *result)
{
  global_func_ptr = result;
  return result;
}


/* Function: call_global_callback @ 0x11E8 */
int call_global_callback()
{
  if ( global_func_ptr )
    return global_func_ptr();
  else
    return -1;
}


/* Function: global_heap_store @ 0x1204 */
int __fastcall global_heap_store(int a1)
{
  global_heap_ptr = a1;
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -1;
}


/* Function: static_complex_init @ 0x1224 */
int static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x122C */
int __fastcall tls_access(int a1)
{
  return 2 * a1;
}


/* Function: init_order_test @ 0x1234 */
int init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x123C */
int test_static_global()
{
  int v0; // r0
  int v2; // [sp+4h] [bp-14h] BYREF

  puts(asc_2D3A);
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
  printf("STM-L2-03 (read_const_data): %d\n", (unsigned __int8)const_string[4] + 42);
  printf("STM-L2-04 (access_bss_var): %d\n", 0);
  printf("STM-L2-04 (access_bss_buffer): %d\n", 0);
  printf("STM-L2-05 (global_struct_access): %d\n", 30);
  file_scope_static = (_DWORD *)&word_32;
  printf("STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n", 10);
  global_heap_ptr = (int)&v2;
  v2 = 100;
  printf("STM-L2-08 (global_heap_store): %d\n", 100);
  printf("STM-L2-09 (static_complex_init): %d\n", 15);
  printf("STM-L3-01 (tls_access): %d\n", 20);
  return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x1484 */
int __fastcall double_value(int a1)
{
  return 2 * a1;
}


/* Function: memop_memset @ 0x148C */
int __fastcall memop_memset(unsigned __int8 *s, size_t n, int c, size_t a4)
{
  int result; // r0
  bool v6; // zf

  result = -1;
  v6 = s == 0;
  if ( s )
  {
    a4 = n;
    v6 = n == 0;
  }
  if ( !v6 )
  {
    memset(s, c, a4);
    return *s;
  }
  return result;
}


/* Function: memop_memcpy @ 0x14C4 */
int __fastcall memop_memcpy(char *dest, const void *a2, size_t n)
{
  size_t v3; // r4
  int result; // r0
  bool v6; // zf

  result = -1;
  if ( dest )
  {
    v6 = a2 == 0;
    if ( a2 )
    {
      v3 = n;
      v6 = n == 0;
    }
    if ( !v6 )
    {
      memcpy(dest, a2, v3);
      return *(_DWORD *)&dest[(v3 & 0xFFFFFFFC) - 4];
    }
  }
  return result;
}


/* Function: memop_memmove @ 0x1508 */
int __fastcall memop_memmove(char *src, unsigned int a2)
{
  int result; // r0

  result = -1;
  if ( src )
  {
    if ( a2 >= 2 )
    {
      memmove(src + 1, src, a2 - 1);
      return (unsigned __int8)src[1];
    }
  }
  return result;
}


/* Function: memop_memcmp @ 0x1540 */
int __fastcall memop_memcmp(void *s1, const void *a2, size_t a3)
{
  int result; // r0
  bool v5; // zf
  int v6; // r1

  result = 0;
  if ( s1 )
  {
    v5 = a2 == 0;
    if ( a2 )
      v5 = a3 == 0;
    if ( !v5 )
    {
      result = memcmp(s1, a2, a3);
      v6 = result;
      if ( result )
        result = -1;
      if ( v6 >= 1 )
        return 1;
    }
  }
  return result;
}


/* Function: memop_bzero @ 0x1588 */
int __fastcall memop_bzero(unsigned __int8 *a1, size_t n)
{
  if ( !a1 )
    return -1;
  memset(a1, 0, n);
  return *a1;
}


/* Function: memop_bcopy @ 0x15B4 */
int __fastcall memop_bcopy(void *src, unsigned __int8 *dest, size_t a3)
{
  int result; // r0
  bool v6; // zf

  result = -1;
  if ( src )
  {
    v6 = dest == 0;
    if ( dest )
      v6 = a3 == 0;
    if ( !v6 )
    {
      memmove(dest, src, a3);
      return *dest;
    }
  }
  return result;
}


/* Function: memop_unaligned_access @ 0x15EC */
int __fastcall memop_unaligned_access(unsigned __int8 *a1)
{
  if ( a1 )
    return a1[1] | (a1[2] << 8) | ((a1[3] | (a1[4] << 8)) << 16);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x1618 */
int __fastcall memop_memory_barrier(int *a1)
{
  int v2; // r5

  if ( !a1 )
    return -1;
  v2 = *a1;
  _sync_synchronize();
  return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x1644 */
int test_memory_op_functions()
{
  int v0; // r0
  int v1; // r1
  _BYTE src[20]; // [sp+4h] [bp-14h] BYREF

  puts(asc_2D5E);
  printf("MEMOP-L2-01: %d\n", 65);
  printf("MEMOP-L2-02: %d\n", 50);
  qmemcpy(src, "HelloWorld", 10);
  memmove(&src[1], src, 9u);
  printf("MEMOP-L2-03: %c\n", src[1]);
  v0 = memcmp(&unk_2DAC, &unk_2DB8, 0xCu);
  v1 = v0;
  if ( v0 )
    v1 = -1;
  if ( v0 >= 1 )
    v1 = 1;
  printf("MEMOP-L2-04: %d\n", v1);
  printf("MEMOP-L2-05: %d\n", 0);
  printf("MEMOP-L2-06: %d\n", 1);
  printf("MEMOP-L3-01: 0x%x\n", 67305985);
  _sync_synchronize();
  return printf("MEMOP-L3-02: %d\n", 10);
}


/* Function: main @ 0x1780 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x17A0 */
int __fastcall extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __sync_fetch_and_add_4 @ 0x17A8 */
int __fastcall _sync_fetch_and_add_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 + a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_sub_4 @ 0x17E0 */
int __fastcall _sync_fetch_and_sub_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 - a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_or_4 @ 0x1818 */
int __fastcall _sync_fetch_and_or_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 | a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_and_4 @ 0x1850 */
int __fastcall _sync_fetch_and_and_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 & a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_xor_4 @ 0x1888 */
int __fastcall _sync_fetch_and_xor_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, *a1 ^ a2, a1) );
  return v4;
}


/* Function: __sync_fetch_and_nand_4 @ 0x18C0 */
int __fastcall _sync_fetch_and_nand_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, ~(*a1 & a2), a1) );
  return v4;
}


/* Function: __sync_fetch_and_add_2 @ 0x18FC */
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


/* Function: __sync_fetch_and_sub_2 @ 0x195C */
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


/* Function: __sync_fetch_and_or_2 @ 0x19BC */
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


/* Function: __sync_fetch_and_and_2 @ 0x1A1C */
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


/* Function: __sync_fetch_and_xor_2 @ 0x1A7C */
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


/* Function: __sync_fetch_and_nand_2 @ 0x1ADC */
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


/* Function: __sync_fetch_and_add_1 @ 0x1B40 */
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


/* Function: __sync_fetch_and_sub_1 @ 0x1B9C */
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


/* Function: __sync_fetch_and_or_1 @ 0x1BF8 */
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


/* Function: __sync_fetch_and_and_1 @ 0x1C54 */
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


/* Function: __sync_fetch_and_xor_1 @ 0x1CB0 */
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


/* Function: __sync_fetch_and_nand_1 @ 0x1D0C */
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


/* Function: __sync_add_and_fetch_4 @ 0x1D6C */
int __fastcall _sync_add_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 + a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_sub_and_fetch_4 @ 0x1DA4 */
int __fastcall _sync_sub_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 - a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_or_and_fetch_4 @ 0x1DDC */
int __fastcall _sync_or_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 | a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_and_and_fetch_4 @ 0x1E14 */
int __fastcall _sync_and_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 & a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_xor_and_fetch_4 @ 0x1E4C */
int __fastcall _sync_xor_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1 ^ a2;
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_nand_and_fetch_4 @ 0x1E84 */
int __fastcall _sync_nand_and_fetch_4(_DWORD *a1, int a2)
{
  int v4; // r4

  do
    v4 = ~(*a1 & a2);
  while ( MEMORY[0xFFFF0FC0]() );
  return v4;
}


/* Function: __sync_add_and_fetch_2 @ 0x1EC0 */
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


/* Function: __sync_sub_and_fetch_2 @ 0x1F28 */
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


/* Function: __sync_or_and_fetch_2 @ 0x1F90 */
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


/* Function: __sync_and_and_fetch_2 @ 0x1FF8 */
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


/* Function: __sync_xor_and_fetch_2 @ 0x2060 */
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


/* Function: __sync_nand_and_fetch_2 @ 0x20C8 */
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


/* Function: __sync_add_and_fetch_1 @ 0x2134 */
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


/* Function: __sync_sub_and_fetch_1 @ 0x2198 */
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


/* Function: __sync_or_and_fetch_1 @ 0x21FC */
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


/* Function: __sync_and_and_fetch_1 @ 0x2260 */
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


/* Function: __sync_xor_and_fetch_1 @ 0x22C4 */
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


/* Function: __sync_nand_and_fetch_1 @ 0x2328 */
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


/* Function: __sync_val_compare_and_swap_4 @ 0x2390 */
int __fastcall _sync_val_compare_and_swap_4(int a1, int a2, int a3)
{
  while ( *(_DWORD *)a1 == a2 )
  {
    if ( !MEMORY[0xFFFF0FC0](a2, a3, a1) )
      return a2;
  }
  return *(_DWORD *)a1;
}


/* Function: __sync_val_compare_and_swap_2 @ 0x23E0 */
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


/* Function: __sync_val_compare_and_swap_1 @ 0x2458 */
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


/* Function: __sync_bool_compare_and_swap_4 @ 0x24CC */
bool __fastcall _sync_bool_compare_and_swap_4(int a1, int a2, int a3)
{
  return MEMORY[0xFFFF0FC0](a2, a3, a1) == 0;
}


/* Function: __sync_bool_compare_and_swap_2 @ 0x24F8 */
bool __fastcall _sync_bool_compare_and_swap_2(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_2(a1, a2, a3);
}


/* Function: __sync_bool_compare_and_swap_1 @ 0x2514 */
bool __fastcall _sync_bool_compare_and_swap_1(int a1, int a2, int a3)
{
  return a2 == _sync_val_compare_and_swap_1(a1, a2, a3);
}


/* Function: __sync_lock_test_and_set_4 @ 0x253C */
int __fastcall _sync_lock_test_and_set_4(_DWORD *a1, int a2)
{
  int v4; // r5

  do
    v4 = *a1;
  while ( MEMORY[0xFFFF0FC0](*a1, a2, a1) );
  return v4;
}


/* Function: __sync_lock_test_and_set_2 @ 0x2574 */
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


/* Function: __sync_lock_test_and_set_1 @ 0x25D4 */
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


/* Function: __sync_lock_release_8 @ 0x2630 */
int __fastcall _sync_lock_release_8(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  a1[1] = 0;
  return result;
}


/* Function: __sync_lock_release_4 @ 0x2654 */
int __fastcall _sync_lock_release_4(_DWORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_2 @ 0x2674 */
int __fastcall _sync_lock_release_2(_WORD *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: __sync_lock_release_1 @ 0x2694 */
int __fastcall _sync_lock_release_1(_BYTE *a1)
{
  int result; // r0

  result = MEMORY[0xFFFF0FA0]();
  *a1 = 0;
  return result;
}


/* Function: .term_proc @ 0x26B4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_calloc @ 0x130C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x130C8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x130CC */

/* FAILED to decompile: __imp_printf @ 0x130D0 */

/* FAILED to decompile: __imp_memmove @ 0x130D4 */

/* FAILED to decompile: __imp_free @ 0x130D8 */

/* FAILED to decompile: __imp_memcpy @ 0x130DC */

/* FAILED to decompile: __imp_memcmp @ 0x130E0 */

/* FAILED to decompile: __imp_realloc @ 0x130E4 */

/* FAILED to decompile: __imp_perror @ 0x130E8 */

/* FAILED to decompile: __imp_waitpid @ 0x130EC */

/* FAILED to decompile: __imp_puts @ 0x130F0 */

/* FAILED to decompile: __imp_malloc @ 0x130F4 */

/* FAILED to decompile: __imp_exit @ 0x130F8 */

/* FAILED to decompile: __imp_memset @ 0x130FC */

/* FAILED to decompile: __imp_fork @ 0x13100 */

/* FAILED to decompile: __imp_abort @ 0x13104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1310C */

/* Total functions decompiled: 114, failed: 18 */
