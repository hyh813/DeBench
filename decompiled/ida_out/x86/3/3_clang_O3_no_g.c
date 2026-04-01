/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/3/3_clang_O3_no_g
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


/* Function: local_array @ 0x12D0 */
int __cdecl local_array(int a1)
{
  return 5 * a1;
}


/* Function: local_struct @ 0x12E0 */
int __cdecl local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x12F0 */
int __cdecl address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x1300 */
int __cdecl address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x1310 */
int large_stack_frame()
{
  int i; // eax
  _BYTE v2[2048]; // [esp+0h] [ebp-800h]

  for ( i = 0; i != 2048; i += 8 )
  {
    v2[i] = i;
    v2[i + 1] = i + 1;
    v2[i + 2] = i + 2;
    v2[i + 3] = i + 3;
    v2[i + 4] = i + 4;
    v2[i + 5] = i + 5;
    v2[i + 6] = i + 6;
    v2[i + 7] = i + 7;
  }
  return v2[1024];
}


/* Function: vla_stack @ 0x1380 */
int __cdecl vla_stack(unsigned int a1)
{
  int result; // eax
  char *v2; // eax
  int v3; // esi
  int v4; // edi
  int v5; // edx
  int v6; // edi
  _DWORD v7[6]; // [esp+0h] [ebp-18h] BYREF

  result = -1;
  if ( a1 - 1001 >= 0xFFFFFC18 )
  {
    v7[2] = v7;
    v2 = (char *)v7 - ((4 * a1 + 15) & 0xFFFFFFF0);
    v3 = a1 & 3;
    v4 = 0;
    if ( a1 - 1 >= 3 )
    {
      v4 = 0;
      v5 = 4;
      do
      {
        *(_DWORD *)&v2[2 * v5 - 8] = v5 - 4;
        *(_DWORD *)&v2[2 * v5 - 4] = v5 - 2;
        *(_DWORD *)&v2[2 * v5] = v5;
        *(_DWORD *)&v2[2 * v5 + 4] = v5 + 2;
        v4 += 4;
        v5 += 8;
      }
      while ( (a1 & 0xFFFFFFFC) != v4 );
    }
    if ( (a1 & 3) != 0 )
    {
      v6 = 2 * v4;
      do
      {
        *(_DWORD *)&v2[2 * v6] = v6;
        v6 += 2;
        --v3;
      }
      while ( v3 );
    }
    return *(_DWORD *)&v2[2 * ((a1 + (a1 >> 31)) & 0xFFFFFFFE)];
  }
  return result;
}


/* Function: alloca_usage @ 0x1430 */
int __cdecl alloca_usage(int a1)
{
  char *v1; // ecx
  int v2; // esi
  int v3; // ebx
  char *v4; // edi
  int v5; // esi
  int v6; // ebx
  int v8; // [esp+0h] [ebp-18h] BYREF

  if ( a1 <= 0 )
    return -1;
  v1 = (char *)&v8 - ((4 * a1 + 15) & 0xFFFFFFF0);
  v2 = 0;
  if ( (unsigned int)(a1 - 1) >= 3 )
  {
    v2 = 0;
    v3 = 6;
    do
    {
      *(_DWORD *)&v1[4 * v2] = v3 - 6;
      *(_DWORD *)&v1[4 * v2 + 4] = v3 - 3;
      *(_DWORD *)&v1[4 * v2 + 8] = v3;
      *(_DWORD *)&v1[4 * v2 + 12] = v3 + 3;
      v2 += 4;
      v3 += 12;
    }
    while ( (a1 & 0x7FFFFFFC) != v2 );
  }
  if ( (a1 & 3) != 0 )
  {
    v4 = &v1[4 * v2];
    v5 = 3 * v2;
    v6 = 0;
    do
    {
      *(_DWORD *)&v4[4 * v6++] = v5;
      v5 += 3;
    }
    while ( (a1 & 3) != v6 );
  }
  return *(_DWORD *)&v1[2 * ((a1 + ((unsigned int)a1 >> 31)) & 0xFFFFFFFE)];
}


/* Function: stack_alias @ 0x14D0 */
int stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x14E0 */
int test_stack_memory()
{
  int i; // eax
  _BYTE v2[2052]; // [esp+8h] [ebp-804h]

  puts(asc_35C1);
  printf("MEM-L1-01 (local_vars): %d\n", 20);
  printf("MEM-L1-02 (local_array): %d\n", 10);
  printf("MEM-L1-03 (local_struct): %d\n", 15);
  printf("MEM-L1-04 (address_of_local): %d\n", 42);
  printf("MEM-L1-05 (address_of_array): %d\n", 2);
  for ( i = 0; i != 2048; i += 8 )
  {
    v2[i] = i;
    v2[i + 1] = i + 1;
    v2[i + 2] = i + 2;
    v2[i + 3] = i + 3;
    v2[i + 4] = i + 4;
    v2[i + 5] = i + 5;
    v2[i + 6] = i + 6;
    v2[i + 7] = i + 7;
  }
  printf("MEM-L2-01 (large_stack_frame): %d\n", v2[1024]);
  printf("MEM-L2-02 (vla_stack): %d\n", 10);
  printf("MEM-L2-03 (alloca_usage): %d\n", 15);
  return printf("MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1640 */
int __cdecl heap_basic(int a1)
{
  unsigned int v1; // esi
  char *v2; // eax
  int v3; // ecx
  int v4; // edx
  int v5; // ebp
  int v6; // edx
  int v7; // esi

  v1 = a1;
  v2 = (char *)malloc(4 * a1);
  if ( !v2 )
    return -1;
  if ( a1 > 0 )
  {
    v3 = a1 & 3;
    v4 = 0;
    if ( (unsigned int)(a1 - 1) >= 3 )
    {
      v4 = 0;
      v5 = 4;
      do
      {
        *(_DWORD *)&v2[2 * v5 - 8] = v5 - 4;
        *(_DWORD *)&v2[2 * v5 - 4] = v5 - 2;
        *(_DWORD *)&v2[2 * v5] = v5;
        *(_DWORD *)&v2[2 * v5 + 4] = v5 + 2;
        v4 += 4;
        v5 += 8;
      }
      while ( (a1 & 0xFFFFFFFC) != v4 );
    }
    v1 = a1;
    if ( (a1 & 3) != 0 )
    {
      v6 = 2 * v4;
      do
      {
        *(_DWORD *)&v2[2 * v6] = v6;
        v6 += 2;
        --v3;
      }
      while ( v3 );
    }
  }
  v7 = *(_DWORD *)&v2[2 * ((v1 + (v1 >> 31)) & 0xFFFFFFFE)];
  free(v2);
  return v7;
}


/* Function: heap_calloc @ 0x1700 */
int __cdecl heap_calloc(int nmemb)
{
  _DWORD *v1; // eax
  int v2; // esi
  int v3; // edi
  int v4; // edx
  unsigned int v5; // edi
  int v6; // edx
  char *v7; // edx
  int v8; // edi

  v1 = calloc(nmemb, 4u);
  if ( v1 )
  {
    v2 = 0;
    if ( nmemb >= 2 )
    {
      v3 = nmemb - 1;
      if ( (unsigned int)(nmemb - 2) >= 7 )
      {
        v5 = v3 & 0xFFFFFFF8;
        v2 = 0;
        v6 = 0;
        do
        {
          v2 += v1[v6 + 8] + v1[v6 + 7] + v1[v6 + 6] + v1[v6 + 5] + v1[v6 + 4] + v1[v6 + 3] + v1[v6 + 2] + v1[v6 + 1];
          v6 += 8;
        }
        while ( v5 != v6 );
        v4 = v6 + 1;
        if ( (((_BYTE)nmemb - 1) & 7) == 0 )
          goto LABEL_12;
      }
      else
      {
        v2 = 0;
        v4 = 1;
        if ( (v3 & 7) == 0 )
          goto LABEL_12;
      }
      v7 = (char *)&v1[v4];
      v8 = 0;
      do
        v2 += *(_DWORD *)&v7[4 * v8++];
      while ( (((_BYTE)nmemb - 1) & 7) != v8 );
    }
LABEL_12:
    free(v1);
    return v2;
  }
  return -1;
}


/* Function: heap_realloc @ 0x17C0 */
int heap_realloc()
{
  _DWORD *v0; // eax
  void *v1; // esi
  _DWORD *v2; // eax
  int v3; // edi

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
    v1 = v2;
  }
  else
  {
    v3 = -2;
  }
  free(v1);
  return v3;
}


/* Function: heap_array @ 0x1870 */
int __cdecl heap_array(int a1)
{
  unsigned int v1; // esi
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // ebp
  char *v5; // edi
  int v6; // edx
  int v7; // ebp
  int v8; // esi

  v1 = a1;
  v2 = malloc(4 * a1);
  if ( !v2 )
    return -1;
  if ( a1 > 0 )
  {
    v3 = 0;
    if ( (unsigned int)(a1 - 1) >= 3 )
    {
      v3 = 0;
      v4 = 6;
      do
      {
        v2[v3] = v4 - 6;
        v2[v3 + 1] = v4 - 3;
        v2[v3 + 2] = v4;
        v2[v3 + 3] = v4 + 3;
        v3 += 4;
        v4 += 12;
      }
      while ( (a1 & 0xFFFFFFFC) != v3 );
    }
    v1 = a1;
    if ( (a1 & 3) != 0 )
    {
      v5 = (char *)&v2[v3];
      v6 = 3 * v3;
      v7 = 0;
      do
      {
        *(_DWORD *)&v5[4 * v7++] = v6;
        v6 += 3;
      }
      while ( (a1 & 3) != v7 );
    }
  }
  v8 = *(_DWORD *)((char *)v2 + 2 * ((v1 + (v1 >> 31)) & 0xFFFFFFFE));
  free(v2);
  return v8;
}


/* Function: heap_struct @ 0x1940 */
int __cdecl heap_struct(int a1)
{
  return 3 * a1;
}


/* Function: heap_nested @ 0x1950 */
int __cdecl heap_nested(_DWORD *a1)
{
  _DWORD *v1; // eax
  _DWORD *v2; // esi
  _DWORD *v3; // eax

  v1 = malloc(8u);
  *a1 = v1;
  if ( !v1 )
    return -1;
  v2 = v1;
  *v1 = 10;
  v3 = malloc(8u);
  v2[1] = v3;
  if ( v3 )
  {
    *v3 = 20;
    v3[1] = 0;
    return 0;
  }
  else
  {
    free(v2);
    return -2;
  }
}


/* Function: linked_list_heap @ 0x19C0 */
int linked_list_heap()
{
  _DWORD *v0; // eax
  int v1; // esi
  _DWORD *v2; // edi
  _DWORD *v3; // eax
  _DWORD *v4; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // ebp
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  _DWORD *v11; // ebp
  _DWORD *v12; // ebp
  _DWORD *v13; // ebp
  _DWORD *v15; // [esp+8h] [ebp-14h]

  v0 = malloc(8u);
  v1 = -1;
  if ( v0 )
  {
    v2 = v0;
    *v0 = 0;
    v3 = malloc(8u);
    if ( v3 )
    {
      v4 = v3;
      *v3 = 10;
      v3[1] = 0;
      v2[1] = v3;
      v5 = malloc(8u);
      if ( v5 )
      {
        *v5 = 20;
        v5[1] = 0;
        v15 = v5;
        v4[1] = v5;
        v6 = malloc(8u);
        if ( v6 )
        {
          v7 = v6;
          *v6 = 30;
          v6[1] = 0;
          v15[1] = v6;
          v8 = malloc(8u);
          if ( v8 )
          {
            *v8 = 40;
            v8[1] = 0;
            v7[1] = v8;
            v1 = 0;
            v9 = v2;
            do
            {
              v1 += *v9;
              v9 = (_DWORD *)v9[1];
            }
            while ( v9 );
            do
            {
              v10 = (_DWORD *)v2[1];
              free(v2);
              v2 = v10;
            }
            while ( v10 );
          }
          else
          {
            do
            {
              v13 = (_DWORD *)v2[1];
              free(v2);
              v2 = v13;
            }
            while ( v13 );
          }
        }
        else
        {
          do
          {
            v12 = (_DWORD *)v2[1];
            free(v2);
            v2 = v12;
          }
          while ( v12 );
        }
      }
      else
      {
        do
        {
          v11 = (_DWORD *)v2[1];
          free(v2);
          v2 = v11;
        }
        while ( v11 );
      }
    }
    else
    {
      free(v2);
    }
  }
  return v1;
}


/* Function: create_tree_node @ 0x1B40 */
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


/* Function: tree_heap_traversal @ 0x1B80 */
int tree_heap_traversal()
{
  return 60;
}


/* Function: memory_leak @ 0x1B90 */
int __cdecl memory_leak(int a1)
{
  _DWORD *v1; // eax
  int v2; // ecx
  int v3; // edx

  v1 = malloc(4 * a1);
  if ( !v1 )
    return -1;
  if ( a1 > 0 )
  {
    v2 = a1 & 7;
    v3 = 0;
    if ( (unsigned int)(a1 - 1) >= 7 )
    {
      v3 = 0;
      do
      {
        v1[v3] = v3;
        v1[v3 + 1] = v3 + 1;
        v1[v3 + 2] = v3 + 2;
        v1[v3 + 3] = v3 + 3;
        v1[v3 + 4] = v3 + 4;
        v1[v3 + 5] = v3 + 5;
        v1[v3 + 6] = v3 + 6;
        v1[v3 + 7] = v3 + 7;
        v3 += 8;
      }
      while ( v3 != (a1 & 0x7FFFFFF8) );
    }
    if ( (a1 & 7) != 0 )
    {
      do
      {
        v1[v3] = v3;
        ++v3;
        --v2;
      }
      while ( v2 );
    }
  }
  return *(_DWORD *)((char *)v1 + 2 * ((a1 + ((unsigned int)a1 >> 31)) & 0xFFFFFFFE));
}


/* Function: dangling_pointer @ 0x1C50 */
int dangling_pointer()
{
  void *v0; // eax
  void *v1; // esi

  v0 = malloc(4u);
  if ( !v0 )
    return -1;
  v1 = v0;
  printf("value before free: %d\n", 42);
  free(v1);
  return *(_DWORD *)v1;
}


/* Function: double_free @ 0x1CB0 */
int __cdecl double_free(int a1)
{
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -2;
}


/* Function: heap_overflow @ 0x1CD0 */
int heap_overflow()
{
  return 0;
}


/* Function: test_heap_memory @ 0x1CE0 */
void test_heap_memory()
{
  _DWORD *v0; // eax
  void *v1; // esi
  _DWORD *v2; // eax
  int v3; // edi
  void **v4; // eax
  void **v5; // esi
  _DWORD *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int stat_loc; // [esp+Ch] [ebp-10h] BYREF

  puts(asc_35DF);
  printf("HEAP-L2-01 (heap_basic): %d\n", 10);
  printf("HEAP-L2-02 (heap_calloc): %d\n", 0);
  v0 = malloc(0x14u);
  if ( v0 )
  {
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
      v1 = v2;
    }
    else
    {
      v3 = -2;
    }
    free(v1);
  }
  else
  {
    v3 = -1;
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n", v3);
  printf("HEAP-L2-04 (heap_array): %d\n", 15);
  printf("HEAP-L2-05 (heap_struct): %d\n", 15);
  v4 = (void **)malloc(8u);
  if ( v4 )
  {
    v5 = v4;
    *v4 = byte_9 + 1;
    v6 = malloc(8u);
    v5[1] = v6;
    if ( v6 )
    {
      *v6 = 20;
      v6[1] = 0;
      v7 = 0;
    }
    else
    {
      free(v5);
      v7 = -2;
    }
    printf("HEAP-L2-06 (heap_nested): %d\n", v7);
    free(v5[1]);
    free(v5);
  }
  else
  {
    printf("HEAP-L2-06 (heap_nested): %d\n", -1);
  }
  v8 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n", v8);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n", 60);
  printf("HEAP-L3-03 (memory_leak): %d\n", 2);
  printf("HEAP-L3-04 (dangling_pointer): ");
  v9 = fork();
  if ( !v9 )
  {
    v10 = dangling_pointer();
    printf(aD, v10);
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
      if ( ((stat_loc & 0x7F) << 24) + 0x1000000 >= 0x2000000 )
        printf(byte_32A2, stat_loc & 0x7F);
    }
    else
    {
      printf(byte_327D, BYTE1(stat_loc));
    }
  }
}


/* Function: global_var_access @ 0x1F80 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x1FA0 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x1FC0 */
int __cdecl global_array_access(unsigned int a1)
{
  int result; // eax

  result = -1;
  if ( a1 <= 9 )
    return global_array[a1];
  return result;
}


/* Function: static_local @ 0x1FF0 */
int __cdecl static_local(int a1)
{
  int result; // eax

  result = 0;
  if ( !a1 )
    result = static_local_counter + 1;
  static_local_counter = result;
  return result;
}


/* Function: call_static_func @ 0x2020 */
int __cdecl call_static_func(int a1)
{
  return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x2030 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2050 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x2080 */
int read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x20A0 */
int access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x20B0 */
int access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x20C0 */
int global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x20D0 */
Elf32_Dyn **__cdecl set_file_static(int *a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  file_scope_static = a1;
  return result;
}


/* Function: get_file_static @ 0x20F0 */
int *get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x2110 */
Elf32_Dyn **__cdecl set_global_callback(int a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  global_func_ptr = a1;
  return result;
}


/* Function: call_global_callback @ 0x2130 */
int __cdecl call_global_callback(int a1)
{
  if ( global_func_ptr )
    return ((int (__cdecl *)(int))global_func_ptr)(a1);
  else
    return -1;
}


/* Function: global_heap_store @ 0x2170 */
int __cdecl global_heap_store(int a1)
{
  global_heap_ptr = a1;
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -1;
}


/* Function: static_complex_init @ 0x21A0 */
int static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x21B0 */
int __cdecl tls_access(int a1)
{
  return 2 * a1;
}


/* Function: init_order_test @ 0x21C0 */
int init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x21D0 */
int test_static_global()
{
  int v0; // eax
  int v2; // [esp+10h] [ebp-Ch] BYREF

  puts(asc_35FD);
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
  file_scope_static = (_DWORD *)&word_32;
  printf("STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (int)double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n", 10);
  v2 = 100;
  global_heap_ptr = (int)&v2;
  printf("STM-L2-08 (global_heap_store): %d\n", 100);
  printf("STM-L2-09 (static_complex_init): %d\n", 15);
  printf("STM-L3-01 (tls_access): %d\n", 20);
  return printf("STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: double_value @ 0x23E0 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: memop_memset @ 0x23F0 */
int __cdecl memop_memset(unsigned __int8 *s, size_t n, int c)
{
  int result; // eax

  result = -1;
  if ( s )
  {
    if ( n )
    {
      memset(s, c, n);
      return *s;
    }
  }
  return result;
}


/* Function: memop_memcpy @ 0x2430 */
int __cdecl memop_memcpy(char *dest, void *src, size_t n)
{
  int result; // eax

  result = -1;
  if ( dest && src )
  {
    if ( n )
    {
      memcpy(dest, src, n);
      return *(_DWORD *)&dest[(n & 0xFFFFFFFC) - 4];
    }
  }
  return result;
}


/* Function: memop_memmove @ 0x2480 */
int __cdecl memop_memmove(char *src, unsigned int a2)
{
  int result; // eax

  result = -1;
  if ( src )
  {
    if ( a2 >= 2 )
    {
      memmove(src + 1, src, a2 - 1);
      return src[1];
    }
  }
  return result;
}


/* Function: memop_memcmp @ 0x24D0 */
int __cdecl memop_memcmp(void *s1, void *s2, size_t n)
{
  int result; // eax
  int v4; // eax
  int v5; // ecx
  bool v6; // cc

  result = 0;
  if ( s1 && s2 && n )
  {
    v4 = memcmp(s1, s2, n);
    v5 = -(v4 != 0);
    v6 = v4 <= 0;
    result = 1;
    if ( v6 )
      return v5;
  }
  return result;
}


/* Function: memop_bzero @ 0x2520 */
int __cdecl memop_bzero(unsigned __int8 *s, size_t n)
{
  if ( !s )
    return -1;
  memset(s, 0, n);
  return *s;
}


/* Function: memop_bcopy @ 0x2560 */
int __cdecl memop_bcopy(void *src, unsigned __int8 *dest, size_t n)
{
  int result; // eax

  result = -1;
  if ( src && dest )
  {
    if ( n )
    {
      memmove(dest, src, n);
      return *dest;
    }
  }
  return result;
}


/* Function: memop_unaligned_access @ 0x25B0 */
int __cdecl memop_unaligned_access(int a1)
{
  if ( a1 )
    return *(_DWORD *)(a1 + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x25D0 */
int __cdecl memop_memory_barrier(int *a1)
{
  int v1; // eax
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  if ( !a1 )
    return -1;
  v1 = *a1;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  return *a1 + v1;
}


/* Function: test_memory_op_functions @ 0x25F0 */
int test_memory_op_functions()
{
  int v0; // eax
  int v1; // ecx
  bool v2; // cc
  int v3; // eax
  signed __int32 v5; // [esp+0h] [ebp-1Ch] BYREF
  int v6; // [esp+8h] [ebp-14h]
  _DWORD v7[4]; // [esp+Ch] [ebp-10h] BYREF

  puts(asc_3621);
  printf("MEMOP-L2-01: %d\n", 65);
  printf("MEMOP-L2-02: %d\n", 50);
  qmemcpy(v7, "HHelloWorl", 10);
  printf("MEMOP-L2-03: %c\n", 72);
  v0 = memcmp(&unk_3670, &unk_367C, 0xCu);
  v1 = -(v0 != 0);
  v2 = v0 <= 0;
  v3 = 1;
  if ( v2 )
    v3 = v1;
  printf("MEMOP-L2-04: %d\n", v3);
  printf("MEMOP-L2-05: %d\n", 0);
  printf("MEMOP-L2-06: %d\n", 1);
  printf("MEMOP-L3-01: 0x%x\n", 67305985);
  v6 = 5;
  _InterlockedOr(&v5, 0);
  return printf("MEMOP-L3-02: %d\n", v6 + 5);
}


/* Function: main @ 0x2720 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: extern_function @ 0x2750 */
int __cdecl extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __do_global_ctors_aux @ 0x2760 */
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


/* Function: .term_proc @ 0x27AC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: printf @ 0x607C */

/* FAILED to decompile: memmove @ 0x6080 */

/* FAILED to decompile: free @ 0x6084 */

/* FAILED to decompile: memcpy @ 0x6088 */

/* FAILED to decompile: memcmp @ 0x608C */

/* FAILED to decompile: __cxa_finalize @ 0x6090 */

/* FAILED to decompile: perror @ 0x6094 */

/* FAILED to decompile: waitpid @ 0x6098 */

/* FAILED to decompile: realloc @ 0x609C */

/* FAILED to decompile: malloc @ 0x60A0 */

/* FAILED to decompile: puts @ 0x60A4 */

/* FAILED to decompile: exit @ 0x60A8 */

/* FAILED to decompile: memset @ 0x60AC */

/* FAILED to decompile: fork @ 0x60B0 */

/* FAILED to decompile: calloc @ 0x60B4 */

/* Total functions decompiled: 70, failed: 16 */
