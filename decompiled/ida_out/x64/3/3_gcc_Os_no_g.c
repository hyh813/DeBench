/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_gcc_Os_no_g
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
  test_stack_memory(argc, argv, envp);
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
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: local_vars @ 0x1301 */
__int64 __fastcall local_vars(int a1)
{
  return (unsigned int)(2 * a1 + 10);
}


/* Function: local_array @ 0x130A */
__int64 __fastcall local_array(int a1)
{
  int v1; // edx
  __int64 i; // rax
  _DWORD v4[10]; // [rsp+0h] [rbp-38h]
  unsigned __int64 v5; // [rsp+28h] [rbp-10h]

  v1 = 0;
  v5 = __readfsqword(0x28u);
  for ( i = 0; i != 10; ++i )
  {
    v4[i] = v1;
    v1 += a1;
  }
  return v4[5];
}


/* Function: local_struct @ 0x1350 */
__int64 __fastcall local_struct(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: address_of_local @ 0x1358 */
__int64 __fastcall address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x1368 */
__int64 __fastcall address_of_array(_DWORD *a1)
{
  return (unsigned int)(2 * *a1);
}


/* Function: large_stack_frame @ 0x1371 */
__int64 large_stack_frame()
{
  __int64 i; // rax
  _BYTE v2[2048]; // [rsp+8h] [rbp-810h]
  unsigned __int64 v3; // [rsp+808h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  for ( i = 0; i != 2048; ++i )
    v2[i] = i;
  return v2[1024];
}


/* Function: vla_stack @ 0x13C6 */
__int64 __fastcall vla_stack(int a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int16 v4; // ax
  signed __int64 v5; // rax
  void *v6; // rsp
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-8h]

  v10 = __readfsqword(0x28u);
  result = 0xFFFFFFFFLL;
  if ( (unsigned int)(a1 - 1) <= 0x3E7 )
  {
    v2 = 4LL * a1 + 15;
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
    while ( a1 > (int)v7 );
    return (unsigned int)v9[a1 >> 1];
  }
  return result;
}


/* Function: alloca_usage @ 0x1468 */
__int64 __fastcall alloca_usage(int a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int16 v4; // ax
  signed __int64 v5; // rax
  void *v6; // rsp
  __int64 v7; // rax
  _DWORD v9[2]; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-8h]

  v10 = __readfsqword(0x28u);
  result = 0xFFFFFFFFLL;
  if ( a1 > 0 )
  {
    v2 = 4LL * a1 + 23;
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
    while ( a1 > (int)v7 );
    return (unsigned int)v9[a1 >> 1];
  }
  return result;
}


/* Function: stack_alias @ 0x1509 */
__int64 stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x1513 */
__int64 test_stack_memory()
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
  v1 = large_stack_frame(1);
  __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v1);
  v2 = vla_stack(10);
  __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", v2);
  v3 = alloca_usage(10);
  __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v3);
  return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1616 */
__int64 __fastcall heap_basic(int a1)
{
  unsigned int v1; // r12d
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  __int64 i; // rax

  v1 = -1;
  v3 = malloc(4LL * a1);
  if ( v3 )
  {
    v4 = v3;
    for ( i = 0; a1 > (int)i; ++i )
      v4[i] = 2 * i;
    v1 = v4[a1 / 2];
    free(v4);
  }
  return v1;
}


/* Function: heap_calloc @ 0x1667 */
__int64 __fastcall heap_calloc(int a1)
{
  unsigned int v1; // r12d
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  __int64 i; // rax

  v1 = -1;
  v3 = calloc(a1, 4u);
  if ( v3 )
  {
    v4 = v3;
    v1 = 0;
    for ( i = 0; a1 > (int)i; ++i )
      v1 += v4[i];
    free(v4);
  }
  return v1;
}


/* Function: heap_realloc @ 0x16AA */
__int64 heap_realloc()
{
  unsigned int v0; // r12d
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
__int64 __fastcall heap_array(int a1)
{
  unsigned int v1; // r12d
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  __int64 i; // rax

  v1 = -1;
  v3 = malloc(4LL * a1);
  if ( v3 )
  {
    v4 = v3;
    for ( i = 0; a1 > (int)i; ++i )
      v4[i] = 3 * i;
    v1 = v4[a1 / 2];
    free(v4);
  }
  return v1;
}


/* Function: heap_struct @ 0x1781 */
__int64 __fastcall heap_struct(int a1)
{
  unsigned int v1; // r12d
  void *v2; // rax

  v1 = -1;
  v2 = malloc(8u);
  if ( v2 )
  {
    v1 = 3 * a1;
    free(v2);
  }
  return v1;
}


/* Function: heap_nested @ 0x17B2 */
__int64 __fastcall heap_nested(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 result; // rax
  _QWORD *v3; // rax

  v1 = malloc(0x10u);
  *a1 = v1;
  result = 0xFFFFFFFFLL;
  if ( v1 )
  {
    *(_DWORD *)v1 = 10;
    v3 = malloc(0x10u);
    v1[1] = v3;
    if ( v3 )
    {
      *(_DWORD *)v3 = 20;
      v3[1] = 0;
      return 0;
    }
    else
    {
      free(v1);
      return 4294967294LL;
    }
  }
  return result;
}


/* Function: linked_list_heap @ 0x1811 */
__int64 linked_list_heap()
{
  _QWORD *v0; // rax
  int v1; // r12d
  _QWORD *v2; // rbp
  _QWORD *v3; // rbx
  _QWORD *v4; // rbx
  unsigned int v5; // r12d
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
  return (unsigned int)-1;
}


/* Function: create_tree_node @ 0x189C */
_QWORD *__fastcall create_tree_node(int a1)
{
  _QWORD *result; // rax

  result = malloc(0x18u);
  if ( result )
  {
    *(_DWORD *)result = a1;
    result[1] = 0;
    result[2] = 0;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x18C6 */
__int64 tree_heap_traversal()
{
  unsigned int v0; // r12d
  _QWORD *tree_node; // rax
  _QWORD *v2; // rbp
  _QWORD *v3; // rax
  _DWORD *v4; // rdi
  void *v5; // rdi

  v0 = -1;
  tree_node = create_tree_node(10);
  if ( tree_node )
  {
    v2 = tree_node;
    tree_node[1] = create_tree_node(20);
    v3 = create_tree_node(30);
    v4 = (_DWORD *)v2[1];
    v2[2] = v3;
    if ( v4 )
    {
      if ( v3 )
      {
        v0 = *(_DWORD *)v3 + *(_DWORD *)v2 + *v4;
        free(v4);
        free((void *)v2[2]);
        free(v2);
        return v0;
      }
      free(v4);
    }
    v5 = (void *)v2[2];
    if ( v5 )
      free(v5);
    v0 = -2;
    free(v2);
  }
  return v0;
}


/* Function: memory_leak @ 0x1959 */
__int64 __fastcall memory_leak(int a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rax

  v1 = malloc(4LL * a1);
  v2 = 0;
  if ( !v1 )
    return 0xFFFFFFFFLL;
  while ( a1 > (int)v2 )
  {
    v1[v2] = v2;
    ++v2;
  }
  return (unsigned int)v1[a1 / 2];
}


/* Function: dangling_pointer @ 0x1999 */
__int64 dangling_pointer()
{
  unsigned int *v0; // rbx
  __int64 result; // rax

  v0 = (unsigned int *)malloc(4u);
  result = 0xFFFFFFFFLL;
  if ( v0 )
  {
    __printf_chk(1, "value before free: %d\n", 42);
    free(v0);
    return *v0;
  }
  return result;
}


/* Function: double_free @ 0x19D7 */
__int64 __fastcall double_free(unsigned int *a1)
{
  void *v1; // rbp
  __int64 result; // rax

  if ( a1 )
    return *a1;
  v1 = malloc(4u);
  result = 0xFFFFFFFFLL;
  if ( v1 )
  {
    free(v1);
    free(v1);
    return 4294967294LL;
  }
  return result;
}


/* Function: heap_overflow @ 0x1A12 */
__int64 heap_overflow()
{
  unsigned int v0; // r12d
  unsigned int *v1; // rax
  unsigned int *v2; // rdi
  __int64 i; // rax

  v0 = -1;
  v1 = (unsigned int *)malloc(0x28u);
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
unsigned __int64 test_heap_memory()
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
  int stat_loc; // [rsp+Ch] [rbp-1Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-10h]

  v16 = __readfsqword(0x28u);
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
  __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ");
  v9 = fork();
  if ( !v9 )
  {
    v10 = dangling_pointer(0);
    __printf_chk(1, aD, v10);
    exit(0);
  }
  if ( v9 <= 0 )
  {
    perror(aFork_0);
    return v16 - __readfsqword(0x28u);
  }
  waitpid(v9, &stat_loc, 0);
  v11 = (const char *)&unk_32B5;
  v12 = BYTE1(stat_loc);
  if ( (stat_loc & 0x7F) == 0 )
    goto LABEL_9;
  if ( (char)((stat_loc & 0x7F) + 1) > 1 )
  {
    v12 = stat_loc & 0x7F;
    v11 = (const char *)&unk_32DA;
LABEL_9:
    __printf_chk(1, v11, v12);
  }
  return v16 - __readfsqword(0x28u);
}


/* Function: global_var_access @ 0x1C51 */
__int64 global_var_access()
{
  return (unsigned int)++global_counter;
}


/* Function: global_var_read @ 0x1C64 */
__int64 global_var_read()
{
  return (unsigned int)(2 * global_counter);
}


/* Function: global_array_access @ 0x1C71 */
__int64 __fastcall global_array_access(unsigned int a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 <= 9 )
    return global_array[a1];
  return result;
}


/* Function: static_local @ 0x1C8B */
__int64 __fastcall static_local(int a1)
{
  __int64 result; // rax

  result = 0;
  if ( !a1 )
    result = (unsigned int)(counter_1 + 1);
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x1CA4 */
__int64 __fastcall call_static_func(int a1)
{
  return (unsigned int)(2 * a1 + 1);
}


/* Function: access_extern_global @ 0x1CAD */
__int64 access_extern_global()
{
  return (unsigned int)(extern_global_var + 100);
}


/* Function: call_extern_func @ 0x1CBB */
__int64 call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x1CC9 */
__int64 read_const_data()
{
  return (unsigned int)(const_string[4] + 42);
}


/* Function: access_bss_var @ 0x1CDC */
__int64 access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x1CE3 */
__int64 access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x1CEA */
__int64 global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x1CF4 */
void __fastcall set_file_static(int a1)
{
  file_scope_static = a1;
}


/* Function: get_file_static @ 0x1CFF */
__int64 get_file_static()
{
  return (unsigned int)file_scope_static;
}


/* Function: set_global_callback @ 0x1D0A */
void __fastcall set_global_callback(__int64 a1)
{
  global_func_ptr = a1;
}


/* Function: call_global_callback @ 0x1D16 */
__int64 call_global_callback()
{
  if ( global_func_ptr )
    return global_func_ptr();
  else
    return 0xFFFFFFFFLL;
}


/* Function: global_heap_store @ 0x1D2C */
__int64 __fastcall global_heap_store(unsigned int *a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 )
    return *a1;
  return result;
}


/* Function: static_complex_init @ 0x1D3B */
__int64 static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x1D45 */
__int64 __fastcall tls_access(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: init_order_test @ 0x1D4D */
__int64 init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x1D57 */
__int64 test_static_global()
{
  int v0; // edx
  int v1; // eax
  int v2; // eax
  int v3; // edx
  int const_data; // eax
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // edx
  int v9; // eax

  puts(asc_3326);
  v1 = global_var_access(1, "STM-L1-01 (global_var_access): %d\n", v0);
  __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", v1);
  __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
  counter_1 = 1;
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
  __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
  __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v2 = call_extern_func();
  __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v2);
  const_data = read_const_data(1, "STM-L2-03 (read_const_data): %d\n", v3);
  __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_data);
  __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
  __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
  v6 = global_struct_access(1, "STM-L2-05 (global_struct_access): %d\n", v5);
  __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", v6);
  file_scope_static = 50;
  __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (__int64 (*)(void))double_value;
  v7 = call_global_callback(5);
  __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", v7);
  __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  v9 = static_complex_init(1, "STM-L2-09 (static_complex_init): %d\n", v8);
  __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", v9);
  __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x1F61 */
__int64 __fastcall memop_memset(unsigned __int8 *a1, unsigned __int64 a2, char a3)
{
  if ( !a1 || !a2 )
    return 0xFFFFFFFFLL;
  memset(a1, a3, a2);
  return *a1;
}


/* Function: memop_memcpy @ 0x1F82 */
__int64 __fastcall memop_memcpy(char *a1, const void *a2, unsigned __int64 a3)
{
  if ( a3 == 0 || a2 == 0 || !a1 )
    return 0xFFFFFFFFLL;
  qmemcpy(a1, a2, a3);
  return *(unsigned int *)&a1[(a3 & 0xFFFFFFFFFFFFFFFCLL) - 4];
}


/* Function: memop_memmove @ 0x1FB5 */
__int64 __fastcall memop_memmove(char *src, unsigned __int64 a2)
{
  if ( !src || a2 <= 1 )
    return 0xFFFFFFFFLL;
  memmove(src + 1, src, a2 - 1);
  return (unsigned int)src[1];
}


/* Function: memop_memcmp @ 0x1FE2 */
__int64 __fastcall memop_memcmp(const void *a1, const void *a2, size_t a3)
{
  int v3; // r8d
  __int64 result; // rax

  if ( a3 == 0 || a2 == 0 || !a1 )
    return 0;
  v3 = memcmp(a1, a2, a3);
  result = 1;
  if ( v3 <= 0 )
    return (unsigned int)-(v3 != 0);
  return result;
}


/* Function: memop_bzero @ 0x201D */
__int64 __fastcall memop_bzero(unsigned __int8 *a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 )
  {
    memset(a1, 0, a2);
    return *a1;
  }
  return result;
}


/* Function: memop_bcopy @ 0x2037 */
__int64 __fastcall memop_bcopy(void *src, void *dest, size_t a3)
{
  if ( a3 == 0 || dest == 0 || !src )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned __int8 *)memmove(dest, src, a3);
}


/* Function: memop_unaligned_access @ 0x206A */
__int64 __fastcall memop_unaligned_access(__int64 a1)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( a1 )
    return *(unsigned int *)(a1 + 1);
  return result;
}


/* Function: memop_memory_barrier @ 0x207A */
__int64 __fastcall memop_memory_barrier(int *a1)
{
  __int64 result; // rax
  int v2; // edx

  result = 0xFFFFFFFFLL;
  if ( a1 )
  {
    v2 = *a1;
    _mm_mfence();
    return (unsigned int)(v2 + *a1);
  }
  return result;
}


/* Function: test_memory_op_functions @ 0x2090 */
unsigned __int64 test_memory_op_functions()
{
  char *v0; // rdi
  __int64 v1; // rcx
  int v2; // eax
  int v3; // eax
  unsigned int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+4h] [rbp-174h] BYREF
  __int64 s1; // [rsp+8h] [rbp-170h] BYREF
  int v13; // [rsp+10h] [rbp-168h]
  __int64 s2; // [rsp+14h] [rbp-164h] BYREF
  int v15; // [rsp+1Ch] [rbp-15Ch]
  _QWORD v16[2]; // [rsp+20h] [rbp-158h] BYREF
  int v17; // [rsp+30h] [rbp-148h]
  char v18[23]; // [rsp+34h] [rbp-144h] BYREF
  int v19; // [rsp+4Bh] [rbp-12Dh] BYREF
  int dest; // [rsp+4Fh] [rbp-129h] BYREF
  unsigned __int8 v21[10]; // [rsp+53h] [rbp-125h] BYREF
  char src[11]; // [rsp+5Dh] [rbp-11Bh] BYREF
  unsigned __int8 v23[256]; // [rsp+68h] [rbp-110h] BYREF
  unsigned __int64 v24; // [rsp+168h] [rbp-10h]

  v24 = __readfsqword(0x28u);
  puts(asc_3588);
  v0 = v18;
  v1 = 5;
  v16[0] = 0x140000000ALL;
  v16[1] = 0x280000001ELL;
  while ( v1 )
  {
    *(_DWORD *)v0 = 0;
    v0 += 4;
    --v1;
  }
  v17 = 50;
  v2 = memop_memset(v23, 0xAu, 65);
  __printf_chk(1, "MEMOP-L2-01: %d\n", v2);
  v3 = memop_memcpy(v18, v16, 0x14u);
  __printf_chk(1, "MEMOP-L2-02: %d\n", v3);
  strcpy(src, "HelloWorld");
  v4 = memop_memmove(src, 0xAu);
  __printf_chk(1, "MEMOP-L2-03: %c\n", v4);
  s1 = 0x200000001LL;
  v13 = 3;
  s2 = 0x200000001LL;
  v15 = 4;
  v5 = memcmp(&s1, &s2, 0xCu);
  v6 = 1;
  if ( v5 <= 0 )
    v6 = -(v5 != 0);
  __printf_chk(1, "MEMOP-L2-04: %d\n", v6);
  v7 = memop_bzero(v21, 0xAu);
  __printf_chk(1, "MEMOP-L2-05: %d\n", v7);
  v19 = 67305985;
  dest = 0;
  v8 = memop_bcopy(&v19, &dest, 4u);
  __printf_chk(1, "MEMOP-L2-06: %d\n", v8);
  __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
  v11 = 5;
  v9 = memop_memory_barrier(&v11);
  __printf_chk(1, "MEMOP-L3-02: %d\n", v9);
  return v24 - __readfsqword(0x28u);
}


/* Function: extern_function @ 0x228F */
__int64 __fastcall extern_function(int a1)
{
  return (unsigned int)(3 * a1);
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
