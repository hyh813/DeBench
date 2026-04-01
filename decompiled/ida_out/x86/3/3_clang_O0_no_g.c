/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/3/3_clang_O0_no_g
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


/* Function: sub_1130 @ 0x1130 */
int __usercall sub_1130@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 16))();
}


/* Function: _start @ 0x1140 */
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


/* Function: sub_116C @ 0x116C */
void sub_116C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1170 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1180 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11C0 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1210 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1130((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x12A0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x12A9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12AD */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: local_vars @ 0x12C0 */
int __cdecl local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x12F0 */
int __cdecl local_array(int a1)
{
  int i; // [esp+0h] [ebp-2Ch]
  _DWORD v3[10]; // [esp+4h] [ebp-28h]

  for ( i = 0; i < 10; ++i )
    v3[i] = a1 * i;
  return v3[5];
}


/* Function: local_struct @ 0x1330 */
int __cdecl local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x1360 */
int __cdecl address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x1380 */
int __cdecl address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x13B0 */
int large_stack_frame()
{
  int i; // [esp+0h] [ebp-804h]
  _BYTE v2[2048]; // [esp+4h] [ebp-800h]

  for ( i = 0; i < 2048; ++i )
    v2[i] = i;
  return v2[1024];
}


/* Function: vla_stack @ 0x1410 */
int __cdecl vla_stack(int a1)
{
  int v2; // [esp+0h] [ebp-18h] BYREF
  char *v3; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  int v5; // [esp+Ch] [ebp-Ch]
  int *v6; // [esp+10h] [ebp-8h]

  if ( a1 <= 0 || a1 > 1000 )
    return -1;
  v6 = &v2;
  v3 = (char *)&v2 - ((4 * a1 + 15) & 0xFFFFFFF0);
  v5 = a1;
  for ( i = 0; i < a1; ++i )
    *(_DWORD *)&v3[4 * i] = 2 * i;
  return *(_DWORD *)&v3[4 * (a1 / 2)];
}


/* Function: alloca_usage @ 0x14B0 */
int __cdecl alloca_usage(int a1)
{
  _DWORD v2[3]; // [esp+0h] [ebp-18h] BYREF
  int i; // [esp+Ch] [ebp-Ch]
  char *v4; // [esp+10h] [ebp-8h]

  if ( a1 <= 0 )
    return -1;
  v4 = (char *)v2 - ((4 * a1 + 15) & 0xFFFFFFF0);
  for ( i = 0; i < a1; ++i )
    *(_DWORD *)&v4[4 * i] = 3 * i;
  v2[2] = v4;
  return *(_DWORD *)&v4[4 * (a1 / 2)];
}


/* Function: stack_alias @ 0x1540 */
int stack_alias()
{
  int v1; // [esp+0h] [ebp-8h] BYREF

  v1 = 10;
  if ( !&v1 )
    return -1;
  v1 = 20;
  return 20;
}


/* Function: test_stack_memory @ 0x15A0 */
int test_stack_memory()
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
  _DWORD s[10]; // [esp+18h] [ebp-30h] BYREF
  int v11; // [esp+40h] [ebp-8h] BYREF

  printf(asc_4008);
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


/* Function: heap_basic @ 0x1750 */
int __cdecl heap_basic(int a1)
{
  int v2; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]
  _DWORD *ptr; // [esp+1Ch] [ebp-Ch]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < a1; ++i )
    ptr[i] = 2 * i;
  v2 = ptr[a1 / 2];
  free(ptr);
  return v2;
}


/* Function: heap_calloc @ 0x1800 */
int __cdecl heap_calloc(signed int nmemb)
{
  signed int i; // [esp+14h] [ebp-14h]
  int v3; // [esp+18h] [ebp-10h]
  _DWORD *ptr; // [esp+1Ch] [ebp-Ch]

  ptr = calloc(nmemb, 4u);
  if ( !ptr )
    return -1;
  v3 = 0;
  for ( i = 0; i < nmemb; ++i )
    v3 += ptr[i];
  free(ptr);
  return v3;
}


/* Function: heap_realloc @ 0x18A0 */
int heap_realloc()
{
  int v1; // [esp+10h] [ebp-28h]
  int j; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v3; // [esp+20h] [ebp-18h]
  int v4; // [esp+24h] [ebp-14h]
  int i; // [esp+28h] [ebp-10h]
  _DWORD *ptr; // [esp+2Ch] [ebp-Ch]

  ptr = malloc(0x14u);
  if ( !ptr )
    return -1;
  for ( i = 0; i < 5; ++i )
    ptr[i] = i + 1;
  v4 = ptr[2];
  v3 = realloc(ptr, 0x28u);
  if ( v3 )
  {
    for ( j = 5; j < 10; ++j )
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


/* Function: heap_array @ 0x19D0 */
int __cdecl heap_array(int a1)
{
  int v2; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]
  _DWORD *ptr; // [esp+1Ch] [ebp-Ch]

  ptr = malloc(4 * a1);
  if ( !ptr )
    return -1;
  for ( i = 0; i < a1; ++i )
    ptr[i] = 3 * i;
  v2 = ptr[a1 / 2];
  free(ptr);
  return v2;
}


/* Function: heap_struct @ 0x1A80 */
int __cdecl heap_struct(int a1)
{
  int v2; // [esp+8h] [ebp-10h]
  _DWORD *ptr; // [esp+Ch] [ebp-Ch]

  ptr = malloc(8u);
  if ( !ptr )
    return -1;
  *ptr = a1;
  ptr[1] = 2 * a1;
  v2 = ptr[1] + *ptr;
  free(ptr);
  return v2;
}


/* Function: heap_nested @ 0x1B00 */
int __cdecl heap_nested(void **a1)
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


/* Function: linked_list_heap @ 0x1BC0 */
int linked_list_heap()
{
  void *v1; // [esp+10h] [ebp-28h]
  _DWORD *j; // [esp+14h] [ebp-24h]
  int v3; // [esp+18h] [ebp-20h]
  void *ptr; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v5; // [esp+20h] [ebp-18h]
  int i; // [esp+24h] [ebp-14h]
  _DWORD *v7; // [esp+28h] [ebp-10h]
  _DWORD *v8; // [esp+2Ch] [ebp-Ch]

  v8 = 0;
  v7 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
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


/* Function: create_tree_node @ 0x1D10 */
_DWORD *__cdecl create_tree_node(int a1)
{
  _DWORD *v2; // [esp+10h] [ebp-8h]

  v2 = malloc(0xCu);
  if ( v2 )
  {
    *v2 = a1;
    v2[1] = 0;
    v2[2] = 0;
  }
  return v2;
}


/* Function: tree_heap_traversal @ 0x1D70 */
int tree_heap_traversal()
{
  int v1; // [esp+8h] [ebp-10h]
  void **ptr; // [esp+Ch] [ebp-Ch]

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


/* Function: memory_leak @ 0x1EA0 */
int __cdecl memory_leak(int a1)
{
  int i; // [esp+8h] [ebp-10h]
  _DWORD *v3; // [esp+Ch] [ebp-Ch]

  v3 = malloc(4 * a1);
  if ( !v3 )
    return -1;
  for ( i = 0; i < a1; ++i )
    v3[i] = i;
  return v3[a1 / 2];
}


/* Function: dangling_pointer @ 0x1F30 */
int dangling_pointer()
{
  _DWORD *ptr; // [esp+1Ch] [ebp-Ch]

  ptr = malloc(4u);
  if ( !ptr )
    return -1;
  *ptr = 42;
  printf("value before free: %d\n", *ptr);
  free(ptr);
  return *ptr;
}


/* Function: double_free @ 0x1FC0 */
int __cdecl double_free(int a1)
{
  _DWORD *ptr; // [esp+Ch] [ebp-Ch]

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


/* Function: heap_overflow @ 0x2050 */
int heap_overflow()
{
  int v1; // [esp+14h] [ebp-14h]
  int i; // [esp+18h] [ebp-10h]
  int *ptr; // [esp+1Ch] [ebp-Ch]

  ptr = (int *)malloc(0x28u);
  if ( !ptr )
    return -1;
  for ( i = 0; i <= 10; ++i )
    ptr[i] = 100 * i;
  v1 = *ptr;
  free(ptr);
  return v1;
}


/* Function: test_heap_memory @ 0x20E0 */
void test_heap_memory()
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
  int stat_loc; // [esp+14h] [ebp-14h] BYREF
  int v10; // [esp+18h] [ebp-10h]
  __pid_t pid; // [esp+1Ch] [ebp-Ch]
  void *ptr; // [esp+20h] [ebp-8h] BYREF

  printf(asc_4152);
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
    v10 = dangling_pointer();
    printf(aD, v10);
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
        printf(byte_42E0, stat_loc & 0x7F);
    }
    else
    {
      printf(byte_42BB, (stat_loc & 0xFF00) >> 8);
    }
  }
}


/* Function: global_var_access @ 0x2380 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x23B0 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x23D0 */
int __cdecl global_array_access(unsigned int a1)
{
  if ( a1 < 0xA )
    return global_array[a1];
  else
    return -1;
}


/* Function: static_local @ 0x2420 */
int __cdecl static_local(int a1)
{
  if ( !a1 )
    return ++static_local_counter;
  static_local_counter = 0;
  return 0;
}


/* Function: call_static_func @ 0x2480 */
int __cdecl call_static_func(int a1)
{
  return static_helper(a1) + 1;
}


/* Function: static_helper @ 0x24B0 */
int __cdecl static_helper(int a1)
{
  return 2 * a1;
}


/* Function: access_extern_global @ 0x24C0 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x24F0 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x2520 */
int read_const_data()
{
  return *((char *)const_string + 4) + 42;
}


/* Function: access_bss_var @ 0x2540 */
int access_bss_var()
{
  return bss_var;
}


/* Function: access_bss_buffer @ 0x2560 */
int access_bss_buffer()
{
  return bss_buffer;
}


/* Function: global_struct_access @ 0x2580 */
int global_struct_access()
{
  return dword_7080 + global_point;
}


/* Function: set_file_static @ 0x25A0 */
Elf32_Dyn **__cdecl set_file_static(int *a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  file_scope_static = a1;
  return result;
}


/* Function: get_file_static @ 0x25C0 */
int *get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x25E0 */
Elf32_Dyn **__cdecl set_global_callback(int a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  global_func_ptr = a1;
  return result;
}


/* Function: call_global_callback @ 0x2600 */
int __cdecl call_global_callback(int a1)
{
  if ( global_func_ptr )
    return ((int (__cdecl *)(int))*(&GLOBAL_OFFSET_TABLE_ + 70))(a1);
  else
    return -1;
}


/* Function: global_heap_store @ 0x2650 */
int __cdecl global_heap_store(int a1)
{
  global_heap_ptr = a1;
  if ( a1 )
    return *(_DWORD *)global_heap_ptr;
  else
    return -1;
}


/* Function: static_complex_init @ 0x26A0 */
int static_complex_init()
{
  return dword_7098 + dword_7090 + complex_init;
}


/* Function: tls_access @ 0x26D0 */
unsigned int __cdecl tls_access(unsigned int a1)
{
  __writegsdword(0xFFFFFFFC, a1);
  return 2 * __readgsdword(0xFFFFFFFC);
}


/* Function: init_order_test @ 0x26F0 */
int init_order_test()
{
  int v1; // [esp+10h] [ebp-8h] BYREF

  v1 = 20;
  return init_depends_on(&v1);
}


/* Function: init_depends_on @ 0x2720 */
int __cdecl init_depends_on(int *a1)
{
  if ( a1 )
    init_depends_on_static_depends = *a1;
  return init_depends_on_static_depends;
}


/* Function: test_static_global @ 0x2760 */
int test_static_global()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int const_data; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int *file_static; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  int inited; // eax
  int v19; // [esp+10h] [ebp-8h] BYREF

  printf(asc_4337);
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
  set_global_callback((int)double_value);
  v13 = call_global_callback(5);
  printf("STM-L2-07 (global_func_ptr): %d\n", v13);
  v19 = 100;
  v14 = global_heap_store((int)&v19);
  printf("STM-L2-08 (global_heap_store): %d\n", v14);
  v15 = static_complex_init();
  printf("STM-L2-09 (static_complex_init): %d\n", v15);
  v16 = tls_access(0xAu);
  printf("STM-L3-01 (tls_access): %d\n", v16);
  inited = init_order_test();
  return printf("STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: double_value @ 0x2A00 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: memop_memset @ 0x2A10 */
int __cdecl memop_memset(unsigned __int8 *s, size_t n, unsigned __int8 a3)
{
  if ( !s || !n )
    return -1;
  memset(s, a3, n);
  return *s;
}


/* Function: memop_memcpy @ 0x2A90 */
int __cdecl memop_memcpy(void *dest, void *src, size_t n)
{
  if ( !dest || !src || !n )
    return -1;
  memcpy(dest, src, n);
  return *((_DWORD *)dest + (n >> 2) - 1);
}


/* Function: memop_memmove @ 0x2B10 */
int __cdecl memop_memmove(int a1, unsigned int a2)
{
  if ( !a1 || a2 < 2 )
    return -1;
  memmove((void *)(a1 + 1), (const void *)a1, a2 - 1);
  return *(char *)(a1 + 1);
}


/* Function: memop_memcmp @ 0x2B90 */
int __cdecl memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v3; // eax
  int v6; // [esp+18h] [ebp-10h]

  if ( !a1 || !a2 || !a3 )
    return 0;
  v6 = memcmp(a1, a2, a3);
  if ( v6 > 0 )
    return 1;
  v3 = 0;
  if ( v6 < 0 )
    return -1;
  return v3;
}


/* Function: memop_bzero @ 0x2C40 */
int __cdecl memop_bzero(unsigned __int8 *s, size_t n)
{
  if ( !s )
    return -1;
  memset(s, 0, n);
  return *s;
}


/* Function: memop_bcopy @ 0x2CB0 */
int __cdecl memop_bcopy(void *src, unsigned __int8 *dest, size_t n)
{
  if ( !src || !dest || !n )
    return -1;
  bcopy(src, dest, n);
  return *dest;
}


/* Function: memop_unaligned_access @ 0x2D30 */
int __cdecl memop_unaligned_access(int a1)
{
  if ( a1 )
    return *(_DWORD *)(a1 + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x2D70 */
int __cdecl memop_memory_barrier(signed __int32 *a1)
{
  signed __int32 v2; // [esp+0h] [ebp-8h] BYREF

  if ( !a1 )
    return -1;
  v2 = *a1;
  _InterlockedOr(&v2, 0);
  return *a1 + v2;
}


/* Function: test_memory_op_functions @ 0x2DC0 */
int test_memory_op_functions()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  signed __int32 v9; // [esp+18h] [ebp-170h] BYREF
  _DWORD v10[2]; // [esp+1Eh] [ebp-16Ah] BYREF
  unsigned __int8 v11[4]; // [esp+26h] [ebp-162h] BYREF
  int src; // [esp+2Ah] [ebp-15Eh] BYREF
  unsigned __int8 v13[10]; // [esp+2Eh] [ebp-15Ah] BYREF
  _DWORD v14[3]; // [esp+38h] [ebp-150h] BYREF
  _DWORD v15[3]; // [esp+44h] [ebp-144h] BYREF
  char v16[31]; // [esp+51h] [ebp-137h] BYREF
  _BYTE dest[20]; // [esp+70h] [ebp-118h] BYREF
  unsigned __int8 v18[260]; // [esp+84h] [ebp-104h] BYREF

  printf(asc_459A);
  memcpy(dest, "\n", sizeof(dest));
  memset(&v16[11], 0, 0x14u);
  v0 = memop_memset(v18, 0xAu, 0x41u);
  printf("MEMOP-L2-01: %d\n", v0);
  v1 = memop_memcpy(&v16[11], dest, 0x14u);
  printf("MEMOP-L2-02: %d\n", v1);
  strcpy(v16, "HelloWorld");
  v2 = memop_memmove((int)v16, 0xAu);
  printf("MEMOP-L2-03: %c\n", v2);
  v15[0] = 1;
  v15[1] = 2;
  v15[2] = 3;
  v14[0] = 1;
  v14[1] = 2;
  v14[2] = 4;
  v3 = memop_memcmp(v15, v14, 0xCu);
  printf("MEMOP-L2-04: %d\n", v3);
  v4 = memop_bzero(v13, 0xAu);
  printf("MEMOP-L2-05: %d\n", v4);
  src = 67305985;
  memset(v11, 0, sizeof(v11));
  v5 = memop_bcopy(&src, v11, 4u);
  printf("MEMOP-L2-06: %d\n", v5);
  v10[0] = 50462976;
  v10[1] = 117835012;
  v6 = memop_unaligned_access((int)v10);
  printf("MEMOP-L3-01: 0x%x\n", v6);
  v9 = 5;
  v7 = memop_memory_barrier(&v9);
  return printf("MEMOP-L3-02: %d\n", v7);
}


/* Function: main @ 0x30D0 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x3120 */
int __cdecl extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __do_global_ctors_aux @ 0x3130 */
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


/* Function: .term_proc @ 0x317C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x7134 */

/* FAILED to decompile: printf @ 0x7138 */

/* FAILED to decompile: memmove @ 0x713C */

/* FAILED to decompile: free @ 0x7140 */

/* FAILED to decompile: memcpy @ 0x7144 */

/* FAILED to decompile: memcmp @ 0x7148 */

/* FAILED to decompile: __cxa_finalize @ 0x714C */

/* FAILED to decompile: perror @ 0x7150 */

/* FAILED to decompile: bcopy @ 0x7154 */

/* FAILED to decompile: waitpid @ 0x7158 */

/* FAILED to decompile: realloc @ 0x715C */

/* FAILED to decompile: malloc @ 0x7160 */

/* FAILED to decompile: exit @ 0x7164 */

/* FAILED to decompile: memset @ 0x7168 */

/* FAILED to decompile: fork @ 0x716C */

/* FAILED to decompile: calloc @ 0x7170 */

/* Total functions decompiled: 72, failed: 16 */
