/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/3/3_gcc_O1_no_g
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


/* Function: _start @ 0x1250 */
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


/* Function: sub_127C @ 0x127C */
void sub_127C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1280 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1290 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x12D0 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1320 */
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


/* Function: frame_dummy @ 0x13B0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x13B9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13BD */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: double_value @ 0x13C1 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: local_vars @ 0x13CC */
int __cdecl local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x13D9 */
__int64 __cdecl local_array(int a1)
{
  unsigned int *v1; // eax
  unsigned int v2; // edx
  __int64 result; // rax
  char v4; // [esp+4h] [ebp-38h] BYREF
  int v5; // [esp+18h] [ebp-24h]
  unsigned int v6; // [esp+2Ch] [ebp-10h] BYREF

  v6 = __readgsdword(0x14u);
  v1 = (unsigned int *)&v4;
  v2 = 0;
  do
  {
    *v1 = v2;
    v2 += a1;
    ++v1;
  }
  while ( v1 != &v6 );
  LODWORD(result) = v5;
  HIDWORD(result) = v6 - __readgsdword(0x14u);
  return result;
}


/* Function: local_struct @ 0x1424 */
int __cdecl local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x1430 */
int __cdecl address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x1444 */
int __cdecl address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x1451 */
__int64 large_stack_frame()
{
  int i; // eax
  __int64 result; // rax
  _BYTE v2[2048]; // [esp+Ch] [ebp-810h]
  unsigned int v3; // [esp+80Ch] [ebp-10h]

  v3 = __readgsdword(0x14u);
  for ( i = 0; i != 2048; ++i )
    v2[i] = i;
  LODWORD(result) = v2[1024];
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: vla_stack @ 0x149C */
int __cdecl vla_stack(int a1)
{
  int v1; // eax
  void *v2; // esp
  int v3; // eax
  _BYTE v5[4]; // [esp-4h] [ebp-1Ch]
  _WORD v6[6]; // [esp+0h] [ebp-18h] BYREF
  unsigned int v7; // [esp+Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  if ( (unsigned int)(a1 - 1) > 0x3E7 )
    return -1;
  while ( v6 != (_WORD *)((char *)v6 - ((4 * a1 + 15) & 0xFFFFF000)) )
    ;
  v1 = (4 * (_WORD)a1 + 15) & 0xFF0;
  v2 = alloca(v1);
  if ( ((4 * (_WORD)a1 + 15) & 0xFF0) != 0 )
    *(_DWORD *)&v5[v1] = *(_DWORD *)&v5[v1];
  v3 = 0;
  do
  {
    *(_DWORD *)&v6[v3] = v3;
    v3 += 2;
  }
  while ( v3 != 2 * a1 );
  return *(_DWORD *)&v6[2 * (a1 / 2)];
}


/* Function: alloca_usage @ 0x1537 */
int __cdecl alloca_usage(int a1)
{
  int v1; // eax
  void *v2; // esp
  int i; // eax
  _BYTE v5[4]; // [esp-4h] [ebp-1Ch]
  _DWORD v6[5]; // [esp+0h] [ebp-18h] BYREF

  v6[3] = __readgsdword(0x14u);
  if ( a1 <= 0 )
    return -1;
  while ( v6 != (_DWORD *)((char *)v6 - ((4 * a1 + 27) & 0xFFFFF000)) )
    ;
  v1 = (4 * (_WORD)a1 + 27) & 0xFF0;
  v2 = alloca(v1);
  if ( ((4 * (_WORD)a1 + 27) & 0xFF0) != 0 )
    *(_DWORD *)&v5[v1] = *(_DWORD *)&v5[v1];
  for ( i = 0; i != a1; ++i )
    v6[i] = 3 * i;
  return v6[i / 2];
}


/* Function: stack_alias @ 0x15D1 */
int stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x15DB */
int test_stack_memory()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax

  puts(asc_3008);
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
  return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x16CF */
int __cdecl heap_basic(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  int i; // eax
  int v4; // esi

  v1 = malloc(4 * a1);
  if ( !v1 )
    return -1;
  v2 = v1;
  if ( a1 > 0 )
  {
    for ( i = 0; i != a1; ++i )
      v2[i] = i * 2;
  }
  v4 = v2[a1 / 2];
  free(v2);
  return v4;
}


/* Function: heap_calloc @ 0x173A */
int __cdecl heap_calloc(int nmemb)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  int v3; // esi

  v1 = calloc(nmemb, 4u);
  if ( !v1 )
    return -1;
  if ( nmemb <= 0 )
  {
    v3 = 0;
  }
  else
  {
    v2 = v1;
    v3 = 0;
    do
      v3 += *v2++;
    while ( v2 != &v1[nmemb] );
  }
  free(v1);
  return v3;
}


/* Function: heap_realloc @ 0x179A */
int heap_realloc()
{
  _DWORD *v0; // eax
  void *v1; // esi
  _DWORD *v2; // eax
  int v3; // esi

  v0 = malloc(0x14u);
  if ( !v0 )
    return -1;
  v1 = v0;
  *v0 = 1;
  v0[1] = 2;
  v0[2] = 3;
  v0[3] = 4;
  v0[4] = 5;
  v2 = realloc(v0, 0x28u);
  if ( v2 )
  {
    v2[5] = 50;
    v2[6] = 60;
    v2[7] = 70;
    v2[8] = 80;
    v2[9] = 90;
    v3 = -3;
    if ( v2[2] == 3 )
      v3 = 50;
    free(v2);
  }
  else
  {
    free(v1);
    return -2;
  }
  return v3;
}


/* Function: heap_array @ 0x1859 */
int __cdecl heap_array(int a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx
  int i; // eax
  int v4; // esi

  v1 = malloc(4 * a1);
  if ( !v1 )
    return -1;
  v2 = v1;
  if ( a1 > 0 )
  {
    for ( i = 0; i != a1; ++i )
      v2[i] = 3 * i;
  }
  v4 = v2[a1 / 2];
  free(v2);
  return v4;
}


/* Function: heap_struct @ 0x18C4 */
int __cdecl heap_struct(int a1)
{
  void *v1; // eax
  int v2; // esi

  v1 = malloc(8u);
  if ( !v1 )
    return -1;
  v2 = 3 * a1;
  free(v1);
  return v2;
}


/* Function: heap_nested @ 0x1908 */
int __cdecl heap_nested(_DWORD *a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // eax

  v1 = malloc(8u);
  *a1 = v1;
  if ( !v1 )
    return -1;
  *v1 = 10;
  v2 = malloc(8u);
  v1[1] = v2;
  if ( v2 )
  {
    *v2 = 20;
    v2[1] = 0;
    return 0;
  }
  else
  {
    free(v1);
    return -2;
  }
}


/* Function: linked_list_heap @ 0x197E */
int linked_list_heap()
{
  int v0; // edi
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  void *v3; // eax
  int v4; // edi
  _DWORD *v5; // ebp
  _DWORD *v6; // eax
  void *v7; // eax

  v0 = 0;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v5 = v1;
    v1 = malloc(8u);
    if ( !v1 )
      break;
    *v1 = v0;
    v1[1] = 0;
    if ( v2 )
      v5[1] = v1;
    else
      v2 = v1;
    v0 += 10;
    if ( v0 == 50 )
    {
      v6 = v2;
      v4 = 0;
      do
      {
        v4 += *v6;
        v6 = (_DWORD *)v6[1];
      }
      while ( v6 );
      do
      {
        v7 = v2;
        v2 = (_DWORD *)v2[1];
        free(v7);
      }
      while ( v2 );
      return v4;
    }
  }
  if ( !v2 )
    return -1;
  do
  {
    v3 = v2;
    v2 = (_DWORD *)v2[1];
    free(v3);
  }
  while ( v2 );
  return -1;
}


/* Function: create_tree_node @ 0x1A35 */
_DWORD *__cdecl create_tree_node(int a1)
{
  _DWORD *result; // eax

  result = malloc(0xCu);
  if ( result )
  {
    *result = a1;
    result[1] = 0;
    result[2] = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x1A6F */
int tree_heap_traversal()
{
  void **tree_node; // eax
  void **ptr; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // edx
  int v4; // edi

  tree_node = (void **)create_tree_node(10);
  if ( !tree_node )
    return -1;
  ptr = tree_node;
  tree_node[1] = create_tree_node(20);
  v2 = create_tree_node(30);
  ptr[2] = v2;
  v3 = ptr[1];
  if ( v2 && v3 )
  {
    v4 = (int)*ptr + *v3 + *v2;
    free(ptr[1]);
    free(ptr[2]);
    free(ptr);
  }
  else
  {
    if ( v3 )
      free(ptr[1]);
    if ( ptr[2] )
      free(ptr[2]);
    free(ptr);
    return -2;
  }
  return v4;
}


/* Function: memory_leak @ 0x1B2A */
int __cdecl memory_leak(int a1)
{
  _DWORD *v1; // eax
  int i; // edx

  v1 = malloc(4 * a1);
  if ( !v1 )
    return -1;
  if ( a1 > 0 )
  {
    for ( i = 0; i != a1; ++i )
      v1[i] = i;
  }
  return v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1B82 */
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


/* Function: double_free @ 0x1BD3 */
int __cdecl double_free(int a1)
{
  void *ptr; // eax
  void *v3; // esi

  if ( a1 )
    return *(_DWORD *)a1;
  ptr = malloc(4u);
  v3 = ptr;
  if ( !ptr )
    return -1;
  free(ptr);
  free(v3);
  return -2;
}


/* Function: heap_overflow @ 0x1C2C */
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


/* Function: test_heap_memory @ 0x1C82 */
unsigned int test_heap_memory()
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
  int v10; // eax
  int v12; // [esp+8h] [ebp-24h]
  void *ptr; // [esp+14h] [ebp-18h] BYREF
  int stat_loc; // [esp+18h] [ebp-14h] BYREF
  unsigned int v15; // [esp+1Ch] [ebp-10h]

  v15 = __readgsdword(0x14u);
  puts(asc_30EA);
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
  ptr = 0;
  v5 = heap_nested(&ptr);
  __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v5);
  if ( ptr )
  {
    free(*((void **)ptr + 1));
    free(ptr);
  }
  v6 = linked_list_heap();
  __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v6);
  v7 = tree_heap_traversal();
  __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v7);
  v8 = memory_leak(5);
  __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v8);
  __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ", v12);
  v9 = fork();
  if ( !v9 )
  {
    v10 = dangling_pointer();
    __printf_chk(1, &unk_31BA, v10);
    exit(0);
  }
  if ( v9 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v9, &stat_loc, 0);
    if ( (stat_loc & 0x7F) != 0 )
    {
      if ( (char)((stat_loc & 0x7F) + 1) > 1 )
        __printf_chk(1, &unk_33E4, stat_loc & 0x7F);
    }
    else
    {
      __printf_chk(1, &unk_33BC, BYTE1(stat_loc));
    }
  }
  return v15 - __readgsdword(0x14u);
}


/* Function: global_var_access @ 0x1E98 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x1EB7 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x1ECE */
int __cdecl global_array_access(unsigned int a1)
{
  if ( a1 > 9 )
    return -1;
  else
    return global_array[a1];
}


/* Function: static_local @ 0x1EF4 */
int __cdecl static_local(int a1)
{
  int result; // eax

  result = 0;
  if ( !a1 )
    result = counter_1 + 1;
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x1F1F */
int __cdecl call_static_func(int a1)
{
  return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x1F2C */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x1F46 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x1F65 */
int read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x1F81 */
int access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x1F8B */
int access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x1F95 */
int global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x1F9F */
Elf32_Dyn **__cdecl set_file_static(int a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  file_scope_static = a1;
  return result;
}


/* Function: get_file_static @ 0x1FB8 */
int get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x1FCD */
Elf32_Dyn **__cdecl set_global_callback(int a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  global_func_ptr = a1;
  return result;
}


/* Function: call_global_callback @ 0x1FE6 */
int __cdecl call_global_callback(int a1)
{
  if ( global_func_ptr )
    return ((int (__cdecl *)(int))global_func_ptr)(a1);
  else
    return -1;
}


/* Function: global_heap_store @ 0x2011 */
int __cdecl global_heap_store(int a1)
{
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -1;
}


/* Function: static_complex_init @ 0x2026 */
int static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x2030 */
int __cdecl tls_access(int a1)
{
  return 2 * a1;
}


/* Function: init_order_test @ 0x203B */
int init_order_test()
{
  static_depends_0 = 20;
  return 20;
}


/* Function: test_static_global @ 0x2059 */
int test_static_global()
{
  int v0; // eax
  int v1; // eax
  int const_data; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int inited; // eax

  puts(asc_3428);
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
  global_func_ptr = (int)double_value;
  v4 = call_global_callback(5);
  __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v4);
  __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  v5 = static_complex_init();
  __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v5);
  __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  inited = init_order_test();
  return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", inited);
}


/* Function: memop_memset @ 0x2231 */
int __cdecl memop_memset(unsigned __int8 *s, size_t n, int c)
{
  if ( !s || !n )
    return -1;
  memset(s, c, n);
  return *s;
}


/* Function: memop_memcpy @ 0x2276 */
int __cdecl memop_memcpy(char *dest, void *src, size_t n)
{
  if ( n == 0 || src == 0 || !dest )
    return -1;
  memcpy(dest, src, n);
  return *(_DWORD *)&dest[(n & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x22C6 */
int __cdecl memop_memmove(char *src, unsigned int a2)
{
  if ( !src || a2 <= 1 )
    return -1;
  memmove(src + 1, src, a2 - 1);
  return src[1];
}


/* Function: memop_memcmp @ 0x2310 */
int __cdecl memop_memcmp(void *s1, void *s2, size_t n)
{
  bool v3; // cc
  __int64 v4; // rax

  if ( n == 0 || s2 == 0 || !s1 )
  {
    LODWORD(v4) = 0;
  }
  else
  {
    v4 = memcmp(s1, s2, n);
    v3 = (int)v4 <= 0;
    LODWORD(v4) = 1;
    if ( v3 )
      LODWORD(v4) = HIDWORD(v4);
  }
  return v4;
}


/* Function: memop_bzero @ 0x2364 */
int __cdecl memop_bzero(unsigned __int8 *s, size_t n)
{
  if ( !s )
    return -1;
  memset(s, 0, n);
  return *s;
}


/* Function: memop_bcopy @ 0x23A2 */
int __cdecl memop_bcopy(void *src, unsigned __int8 *dest, size_t n)
{
  if ( n == 0 || dest == 0 || !src )
    return -1;
  memmove(dest, src, n);
  return *dest;
}


/* Function: memop_unaligned_access @ 0x23F0 */
int __cdecl memop_unaligned_access(int a1)
{
  if ( a1 )
    return *(_DWORD *)(a1 + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x2406 */
int __cdecl memop_memory_barrier(int *a1)
{
  int v1; // edx
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  if ( !a1 )
    return -1;
  v1 = *a1;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return v1 + *a1;
}


/* Function: test_memory_op_functions @ 0x2424 */
unsigned int test_memory_op_functions()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v8; // [esp+14h] [ebp-174h] BYREF
  _DWORD s1[3]; // [esp+18h] [ebp-170h] BYREF
  _DWORD s2[3]; // [esp+24h] [ebp-164h] BYREF
  _DWORD src[5]; // [esp+30h] [ebp-158h] BYREF
  _DWORD dest[5]; // [esp+44h] [ebp-144h] BYREF
  int v13; // [esp+5Bh] [ebp-12Dh] BYREF
  int v14; // [esp+5Fh] [ebp-129h] BYREF
  unsigned __int8 v15[10]; // [esp+63h] [ebp-125h] BYREF
  char v16[267]; // [esp+6Dh] [ebp-11Bh] BYREF
  unsigned int v17; // [esp+178h] [ebp-10h]

  v17 = __readgsdword(0x14u);
  puts(asc_3650);
  src[0] = 10;
  src[1] = 20;
  src[2] = 30;
  src[3] = 40;
  src[4] = 50;
  memset(dest, 0, sizeof(dest));
  v0 = memop_memset((unsigned __int8 *)&v16[11], 0xAu, 65);
  __printf_chk(1, "MEMOP-L2-01: %d\n", v0);
  v1 = memop_memcpy((char *)dest, src, 0x14u);
  __printf_chk(1, "MEMOP-L2-02: %d\n", v1);
  strcpy(v16, "HelloWorld");
  v2 = memop_memmove(v16, 0xAu);
  __printf_chk(1, "MEMOP-L2-03: %c\n", v2);
  s1[0] = 1;
  s1[1] = 2;
  s1[2] = 3;
  s2[0] = 1;
  s2[1] = 2;
  s2[2] = 4;
  v3 = memop_memcmp(s1, s2, 0xCu);
  __printf_chk(1, "MEMOP-L2-04: %d\n", v3);
  v4 = memop_bzero(v15, 0xAu);
  __printf_chk(1, "MEMOP-L2-05: %d\n", v4);
  v13 = 67305985;
  v14 = 0;
  v5 = memop_bcopy(&v13, (unsigned __int8 *)&v14, 4u);
  __printf_chk(1, "MEMOP-L2-06: %d\n", v5);
  __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
  v8 = 5;
  v6 = memop_memory_barrier(&v8);
  __printf_chk(1, "MEMOP-L3-02: %d\n", v6);
  return v17 - __readgsdword(0x14u);
}


/* Function: main @ 0x2635 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x265A */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: extern_function @ 0x265E */
int __cdecl extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __stack_chk_fail_local @ 0x2670 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2690 */
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


/* Function: .term_proc @ 0x26DC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6030 */

/* FAILED to decompile: memmove @ 0x6034 */

/* FAILED to decompile: free @ 0x6038 */

/* FAILED to decompile: memcpy @ 0x603C */

/* FAILED to decompile: memcmp @ 0x6040 */

/* FAILED to decompile: __stack_chk_fail @ 0x6044 */

/* FAILED to decompile: __cxa_finalize @ 0x6048 */

/* FAILED to decompile: perror @ 0x604C */

/* FAILED to decompile: waitpid @ 0x6050 */

/* FAILED to decompile: realloc @ 0x6054 */

/* FAILED to decompile: malloc @ 0x6058 */

/* FAILED to decompile: puts @ 0x605C */

/* FAILED to decompile: exit @ 0x6060 */

/* FAILED to decompile: memset @ 0x6064 */

/* FAILED to decompile: __printf_chk @ 0x6068 */

/* FAILED to decompile: fork @ 0x606C */

/* FAILED to decompile: calloc @ 0x6070 */

/* Total functions decompiled: 88, failed: 17 */
