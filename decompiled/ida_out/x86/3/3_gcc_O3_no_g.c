/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/3/3_gcc_O3_no_g
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


/* Function: main @ 0x1250 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}


/* Function: _start @ 0x1280 */
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


/* Function: sub_12AC @ 0x12AC */
void sub_12AC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x12B0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x12C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1300 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1350 */
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


/* Function: frame_dummy @ 0x13E0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x13E9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x13ED */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: double_value @ 0x1400 */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: alloca_usage.constprop.0 @ 0x1410 */
int alloca_usage_constprop_0()
{
  return 15;
}


/* Function: local_vars @ 0x1420 */
int __cdecl local_vars(int a1)
{
  return 2 * a1 + 10;
}


/* Function: local_array @ 0x1430 */
int __cdecl local_array(int a1)
{
  return 5 * a1;
}


/* Function: local_struct @ 0x1440 */
int __cdecl local_struct(int a1)
{
  return 3 * a1;
}


/* Function: address_of_local @ 0x1450 */
int __cdecl address_of_local(_DWORD *a1)
{
  *a1 = 42;
  return 42;
}


/* Function: address_of_array @ 0x1470 */
int __cdecl address_of_array(_DWORD *a1)
{
  return 2 * *a1;
}


/* Function: large_stack_frame @ 0x1480 */
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


/* Function: vla_stack @ 0x14E0 */
int __cdecl vla_stack(int a1)
{
  int v1; // edx
  _WORD *v2; // ecx
  __int16 v3; // dx
  int v4; // edx
  void *v5; // esp
  int v6; // eax
  _WORD v8[2048]; // [esp-1000h] [ebp-1018h] BYREF
  _DWORD v9[5]; // [esp+0h] [ebp-18h] BYREF

  v9[3] = __readgsdword(0x14u);
  if ( (unsigned int)(a1 - 1) > 0x3E7 )
    return -1;
  v1 = 4 * a1 + 15;
  v2 = (_WORD *)((char *)v9 - (v1 & 0xFFFFF000));
  v3 = v1 & 0xFFF0;
  if ( v9 != (_DWORD *)v2 )
  {
    while ( v8 != v2 )
      ;
  }
  v4 = v3 & 0xFFF;
  v5 = alloca(v4);
  if ( v4 )
    *(_DWORD *)((char *)&v8[-2] + v4) = *(_DWORD *)((char *)&v8[-2] + v4);
  v6 = 0;
  do
  {
    *(_DWORD *)&v8[v6] = v6;
    v6 += 2;
  }
  while ( v6 != 2 * a1 );
  return *(_DWORD *)&v8[2 * (a1 >> 1)];
}


/* Function: alloca_usage @ 0x1590 */
int __cdecl alloca_usage(int a1)
{
  int v1; // edx
  _DWORD *v2; // ebx
  __int16 v3; // dx
  int v4; // edx
  void *v5; // esp
  int i; // eax
  _DWORD v8[1024]; // [esp-1000h] [ebp-1018h] BYREF
  _DWORD v9[5]; // [esp+0h] [ebp-18h] BYREF

  v9[3] = __readgsdword(0x14u);
  if ( a1 <= 0 )
    return -1;
  v1 = 4 * a1 + 27;
  v2 = (_DWORD *)((char *)v9 - (v1 & 0xFFFFF000));
  v3 = v1 & 0xFFF0;
  if ( v9 != v2 )
  {
    while ( v8 != v2 )
      ;
  }
  v4 = v3 & 0xFFF;
  v5 = alloca(v4);
  if ( v4 )
    *(_DWORD *)((char *)&v8[-1] + v4) = *(_DWORD *)((char *)&v8[-1] + v4);
  for ( i = 0; i != a1; ++i )
    v8[i] = 3 * i;
  return v8[a1 >> 1];
}


/* Function: stack_alias @ 0x1630 */
int stack_alias()
{
  return 20;
}


/* Function: test_stack_memory @ 0x1640 */
int test_stack_memory()
{
  int v0; // eax
  int v1; // eax

  puts(asc_3008);
  __printf_chk(1, "MEM-L1-01 (local_vars): %d\n", 20);
  __printf_chk(1, "MEM-L1-02 (local_array): %d\n", 10);
  __printf_chk(1, "MEM-L1-03 (local_struct): %d\n", 15);
  __printf_chk(1, "MEM-L1-04 (address_of_local): %d\n", 42);
  __printf_chk(1, "MEM-L1-05 (address_of_array): %d\n", 2);
  v0 = large_stack_frame();
  __printf_chk(1, "MEM-L2-01 (large_stack_frame): %d\n", v0);
  __printf_chk(1, "MEM-L2-02 (vla_stack): %d\n", 10);
  v1 = alloca_usage_constprop_0();
  __printf_chk(1, "MEM-L2-03 (alloca_usage): %d\n", v1);
  return __printf_chk(1, "MEM-L2-04 (stack_alias): %d\n", 20);
}


/* Function: heap_basic @ 0x1720 */
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


/* Function: heap_calloc @ 0x1790 */
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
    while ( &v1[nmemb] != v2 );
  }
  free(v1);
  return v3;
}


/* Function: heap_realloc @ 0x1800 */
int heap_realloc()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  int v3; // esi
  void *v5; // [esp-14h] [ebp-1Ch]

  v0 = malloc(0x14u);
  if ( !v0 )
    return -1;
  *v0 = 1;
  v1 = v0;
  v0[1] = 2;
  v0[2] = 3;
  v0[3] = 4;
  v0[4] = 5;
  v2 = realloc(v0, 0x28u);
  if ( v2 )
  {
    v3 = 50;
    if ( v2[2] != 3 )
      v3 = -3;
    free(v2);
  }
  else
  {
    v5 = v1;
    v3 = -2;
    free(v5);
  }
  return v3;
}


/* Function: heap_array @ 0x18A0 */
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


/* Function: heap_struct @ 0x1910 */
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


/* Function: heap_nested @ 0x1960 */
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


/* Function: linked_list_heap @ 0x19E0 */
int linked_list_heap()
{
  int v0; // ebp
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  int v5; // edi
  void *v6; // eax
  void *v8; // eax

  v0 = 0;
  v1 = 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = malloc(8u);
    if ( !v3 )
      break;
    *v3 = v0;
    v3[1] = 0;
    if ( v2 )
    {
      v0 += 10;
      v1[1] = v3;
      if ( v0 == 50 )
        goto LABEL_7;
    }
    else
    {
      v0 += 10;
      v2 = v3;
      if ( v0 == 50 )
      {
LABEL_7:
        v4 = v2;
        v5 = 0;
        do
        {
          v5 += *v4;
          v4 = (_DWORD *)v4[1];
        }
        while ( v4 );
        do
        {
          v6 = v2;
          v2 = (_DWORD *)v2[1];
          free(v6);
        }
        while ( v2 );
        return v5;
      }
    }
    v1 = v3;
  }
  while ( v2 )
  {
    v8 = v2;
    v2 = (_DWORD *)v2[1];
    free(v8);
  }
  return -1;
}


/* Function: create_tree_node @ 0x1A90 */
_DWORD *__cdecl create_tree_node(int a1)
{
  _DWORD *result; // eax

  result = malloc(0xCu);
  if ( result )
  {
    result[1] = 0;
    result[2] = 0;
    *result = a1;
  }
  return result;
}


/* Function: tree_heap_traversal @ 0x1AD0 */
int tree_heap_traversal()
{
  void *v0; // eax
  void *v1; // esi
  void *ptr; // edi
  void *v3; // ebp
  void *v5; // eax

  v0 = malloc(0xCu);
  if ( !v0 )
    return -1;
  v1 = v0;
  ptr = malloc(0xCu);
  if ( !ptr )
  {
    v5 = malloc(0xCu);
    if ( v5 )
      free(v5);
    goto LABEL_7;
  }
  v3 = malloc(0xCu);
  if ( !v3 )
  {
    free(ptr);
LABEL_7:
    free(v1);
    return -2;
  }
  free(ptr);
  free(v3);
  free(v1);
  return 60;
}


/* Function: memory_leak @ 0x1B90 */
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


/* Function: dangling_pointer @ 0x1BF0 */
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


/* Function: double_free @ 0x1C40 */
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


/* Function: heap_overflow @ 0x1CA0 */
int heap_overflow()
{
  void *v0; // eax

  v0 = malloc(0x28u);
  if ( !v0 )
    return -1;
  free(v0);
  return 0;
}


/* Function: test_heap_memory @ 0x1CE0 */
unsigned int test_heap_memory()
{
  _DWORD *v0; // eax
  int v1; // eax
  _DWORD *v2; // eax
  int v3; // esi
  int v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  void *v7; // eax
  int v8; // eax
  void **v9; // esi
  _DWORD *v10; // eax
  int v11; // eax
  int v12; // ebp
  _DWORD *v13; // edi
  _DWORD *v14; // esi
  _DWORD *v15; // eax
  _DWORD *v16; // eax
  int v17; // edi
  void *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // eax
  int v22; // eax
  _DWORD *v24; // esi
  int v25; // eax
  void *v26; // eax
  int v27; // [esp+8h] [ebp-34h]
  int stat_loc; // [esp+18h] [ebp-24h] BYREF
  unsigned int v29; // [esp+1Ch] [ebp-20h]

  v29 = __readgsdword(0x14u);
  puts(asc_30EA);
  v0 = malloc(0x28u);
  if ( v0 )
  {
    v0[1] = 2;
    v0[2] = 4;
    v0[3] = 6;
    v0[4] = 8;
    v0[5] = 10;
    v0[6] = 12;
    v0[7] = 14;
    v0[8] = 16;
    v0[9] = 18;
    free(v0);
    v1 = 10;
  }
  else
  {
    v1 = -1;
  }
  __printf_chk(1, "HEAP-L2-01 (heap_basic): %d\n", v1);
  v2 = calloc(5u, 4u);
  if ( v2 )
  {
    v3 = v2[4] + v2[3] + v2[2] + *v2 + v2[1];
    free(v2);
  }
  else
  {
    v3 = -1;
  }
  __printf_chk(1, "HEAP-L2-02 (heap_calloc): %d\n", v3);
  v4 = heap_realloc();
  __printf_chk(1, "HEAP-L2-03 (heap_realloc): %d\n", v4);
  v5 = malloc(0x28u);
  if ( v5 )
  {
    v5[1] = 3;
    v5[2] = 6;
    v5[3] = 9;
    v5[4] = 12;
    v5[5] = 15;
    v5[6] = 18;
    v5[7] = 21;
    v5[8] = 24;
    v5[9] = 27;
    free(v5);
    v6 = 15;
  }
  else
  {
    v6 = -1;
  }
  __printf_chk(1, "HEAP-L2-04 (heap_array): %d\n", v6);
  v7 = malloc(8u);
  if ( v7 )
  {
    free(v7);
    v8 = 15;
  }
  else
  {
    v8 = -1;
  }
  __printf_chk(1, "HEAP-L2-05 (heap_struct): %d\n", v8);
  v9 = (void **)malloc(8u);
  if ( v9 )
  {
    v10 = malloc(8u);
    v9[1] = v10;
    if ( v10 )
    {
      *v10 = 20;
      v10[1] = 0;
      v11 = 0;
    }
    else
    {
      free(v9);
      v11 = -2;
    }
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", v11);
    free(v9[1]);
    free(v9);
  }
  else
  {
    __printf_chk(1, "HEAP-L2-06 (heap_nested): %d\n", -1);
  }
  v12 = 0;
  v13 = 0;
  v14 = 0;
  while ( 1 )
  {
    v15 = malloc(8u);
    if ( !v15 )
      break;
    *v15 = v12;
    v15[1] = 0;
    if ( v14 )
    {
      v12 += 10;
      v13[1] = v15;
      if ( v12 == 50 )
        goto LABEL_19;
    }
    else
    {
      v12 += 10;
      v14 = v15;
      if ( v12 == 50 )
      {
LABEL_19:
        v16 = v14;
        v17 = 0;
        do
        {
          v17 += *v16;
          v16 = (_DWORD *)v16[1];
        }
        while ( v16 );
        do
        {
          v18 = v14;
          v14 = (_DWORD *)v14[1];
          free(v18);
        }
        while ( v14 );
        goto LABEL_22;
      }
    }
    v13 = v15;
  }
  while ( v14 )
  {
    v26 = v14;
    v14 = (_DWORD *)v14[1];
    free(v26);
  }
  v17 = -1;
LABEL_22:
  __printf_chk(1, "HEAP-L3-01 (linked_list_heap): %d\n", v17);
  v19 = tree_heap_traversal();
  __printf_chk(1, "HEAP-L3-02 (tree_heap_traversal): %d\n", v19);
  v20 = malloc(0x14u);
  if ( v20 )
  {
    *v20 = 0;
    v20[1] = 1;
    v20[2] = 2;
    v20[3] = 3;
    v20[4] = 4;
    v21 = 2;
  }
  else
  {
    v21 = -1;
  }
  __printf_chk(1, "HEAP-L3-03 (memory_leak): %d\n", v21);
  __printf_chk(1, "HEAP-L3-04 (dangling_pointer): ", v27);
  v22 = fork();
  if ( !v22 )
  {
    v24 = malloc(4u);
    if ( v24 )
    {
      __printf_chk(1, "value before free: %d\n", 42);
      free(v24);
      v25 = *v24;
    }
    else
    {
      v25 = -1;
    }
    __printf_chk(1, &unk_319C, v25);
    exit(0);
  }
  if ( v22 <= 0 )
  {
    perror(aFork_0);
  }
  else
  {
    waitpid(v22, &stat_loc, 0);
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
  return v29 - __readgsdword(0x14u);
}


/* Function: global_var_access @ 0x2180 */
int global_var_access()
{
  return ++global_counter;
}


/* Function: global_var_read @ 0x21A0 */
int global_var_read()
{
  return 2 * global_counter;
}


/* Function: global_array_access @ 0x21C0 */
int __cdecl global_array_access(unsigned int a1)
{
  if ( a1 > 9 )
    return -1;
  else
    return global_array[a1];
}


/* Function: static_local @ 0x21F0 */
int __cdecl static_local(int a1)
{
  int result; // eax

  result = 0;
  if ( !a1 )
    result = counter_1 + 1;
  counter_1 = result;
  return result;
}


/* Function: call_static_func @ 0x2220 */
int __cdecl call_static_func(int a1)
{
  return 2 * a1 + 1;
}


/* Function: access_extern_global @ 0x2230 */
int access_extern_global()
{
  return extern_global_var + 100;
}


/* Function: call_extern_func @ 0x2250 */
int call_extern_func()
{
  return extern_function(5);
}


/* Function: read_const_data @ 0x2270 */
int read_const_data()
{
  return const_string[4] + 42;
}


/* Function: access_bss_var @ 0x2290 */
int access_bss_var()
{
  return 0;
}


/* Function: access_bss_buffer @ 0x22A0 */
int access_bss_buffer()
{
  return 0;
}


/* Function: global_struct_access @ 0x22B0 */
int global_struct_access()
{
  return 30;
}


/* Function: set_file_static @ 0x22C0 */
Elf32_Dyn **__cdecl set_file_static(int a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  file_scope_static = a1;
  return result;
}


/* Function: get_file_static @ 0x22E0 */
int get_file_static()
{
  return file_scope_static;
}


/* Function: set_global_callback @ 0x2300 */
Elf32_Dyn **__cdecl set_global_callback(int a1)
{
  Elf32_Dyn **result; // eax

  result = &GLOBAL_OFFSET_TABLE_;
  global_func_ptr = a1;
  return result;
}


/* Function: call_global_callback @ 0x2320 */
int call_global_callback()
{
  if ( global_func_ptr )
    return ((int (*)(void))global_func_ptr)();
  else
    return -1;
}


/* Function: global_heap_store @ 0x2350 */
int __cdecl global_heap_store(int a1)
{
  if ( a1 )
    return *(_DWORD *)a1;
  else
    return -1;
}


/* Function: static_complex_init @ 0x2370 */
int static_complex_init()
{
  return 15;
}


/* Function: tls_access @ 0x2380 */
int __cdecl tls_access(int a1)
{
  return 2 * a1;
}


/* Function: init_order_test @ 0x2390 */
int init_order_test()
{
  return 20;
}


/* Function: test_static_global @ 0x23A0 */
int test_static_global()
{
  int v0; // eax

  puts(asc_3428);
  __printf_chk(1, "STM-L1-01 (global_var_access): %d\n", ++global_counter);
  __printf_chk(1, "STM-L1-01 (global_var_read): %d\n", 2 * global_counter);
  __printf_chk(1, "STM-L1-02 (global_array_access): %d\n", 5);
  counter_1 = 1;
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", 1);
  __printf_chk(1, "STM-L1-03 (static_local): %d\n", ++counter_1);
  __printf_chk(1, "STM-L1-04 (call_static_func): %d\n", 11);
  __printf_chk(1, "STM-L2-01 (access_extern_global): %d\n", extern_global_var + 100);
  v0 = extern_function(5);
  __printf_chk(1, "STM-L2-02 (call_extern_func): %d\n", v0);
  __printf_chk(1, "STM-L2-03 (read_const_data): %d\n", const_string[4] + 42);
  __printf_chk(1, "STM-L2-04 (access_bss_var): %d\n", 0);
  __printf_chk(1, "STM-L2-04 (access_bss_buffer): %d\n", 0);
  __printf_chk(1, "STM-L2-05 (global_struct_access): %d\n", 30);
  file_scope_static = 50;
  __printf_chk(1, "STM-L2-06 (file_static): %d\n", 50);
  global_func_ptr = (int)double_value;
  __printf_chk(1, "STM-L2-07 (global_func_ptr): %d\n", 10);
  __printf_chk(1, "STM-L2-08 (global_heap_store): %d\n", 100);
  __printf_chk(1, "STM-L2-09 (static_complex_init): %d\n", 15);
  __printf_chk(1, "STM-L3-01 (tls_access): %d\n", 20);
  return __printf_chk(1, "STM-L3-02 (init_order_test): %d\n", 20);
}


/* Function: memop_memset @ 0x2580 */
int __cdecl memop_memset(unsigned __int8 *s, size_t n, int c)
{
  if ( !s || !n )
    return -1;
  memset(s, c, n);
  return *s;
}


/* Function: memop_memcpy @ 0x25D0 */
int __cdecl memop_memcpy(char *dest, const void *a2, size_t n)
{
  if ( n == 0 || a2 == 0 || !dest )
    return -1;
  memcpy(dest, a2, n);
  return *(_DWORD *)&dest[(n & 0xFFFFFFFC) - 4];
}


/* Function: memop_memmove @ 0x2630 */
int __cdecl memop_memmove(char *src, unsigned int a2)
{
  if ( !src || a2 <= 1 )
    return -1;
  memmove(src + 1, src, a2 - 1);
  return src[1];
}


/* Function: memop_memcmp @ 0x2680 */
int __cdecl memop_memcmp(void *s1, void *s2, size_t n)
{
  int v3; // edx
  int result; // eax

  if ( n == 0 || s2 == 0 || !s1 )
    return 0;
  v3 = memcmp(s1, s2, n);
  result = -(v3 != 0);
  if ( v3 > 0 )
    return 1;
  return result;
}


/* Function: memop_bzero @ 0x26F0 */
int __cdecl memop_bzero(unsigned __int8 *s, size_t n)
{
  if ( !s )
    return -1;
  memset(s, 0, n);
  return *s;
}


/* Function: memop_bcopy @ 0x2730 */
int __cdecl memop_bcopy(void *src, unsigned __int8 *dest, size_t n)
{
  if ( n == 0 || dest == 0 || !src )
    return -1;
  memmove(dest, src, n);
  return *dest;
}


/* Function: memop_unaligned_access @ 0x2790 */
int __cdecl memop_unaligned_access(int a1)
{
  if ( a1 )
    return *(_DWORD *)(a1 + 1);
  else
    return -1;
}


/* Function: memop_memory_barrier @ 0x27B0 */
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


/* Function: test_memory_op_functions @ 0x27D0 */
unsigned int test_memory_op_functions()
{
  int v0; // edx
  int v1; // eax
  signed __int32 v3[6]; // [esp+0h] [ebp-15Ch] BYREF
  int v4; // [esp+18h] [ebp-144h]
  _DWORD s1[3]; // [esp+1Ch] [ebp-140h] BYREF
  _BYTE s2[23]; // [esp+28h] [ebp-134h] BYREF
  __int16 v7; // [esp+3Fh] [ebp-11Dh]
  _DWORD dest[66]; // [esp+41h] [ebp-11Bh] BYREF
  unsigned int v9; // [esp+14Ch] [ebp-10h]

  v9 = __readgsdword(0x14u);
  puts(asc_3650);
  memset((char *)&dest[2] + 3, 65, 10);
  __printf_chk(1, "MEMOP-L2-01: %d\n", 65);
  __printf_chk(1, "MEMOP-L2-02: %d\n", 50);
  strcpy((char *)dest, "HelloWorld");
  memmove((char *)dest + 1, dest, 9u);
  __printf_chk(1, "MEMOP-L2-03: %c\n", 72);
  s1[0] = 1;
  s1[1] = 2;
  s1[2] = 3;
  *(_DWORD *)s2 = 1;
  *(_DWORD *)&s2[4] = 2;
  *(_DWORD *)&s2[8] = 4;
  v0 = memcmp(s1, s2, 0xCu);
  v1 = -(v0 != 0);
  if ( v0 > 0 )
    v1 = 1;
  __printf_chk(1, "MEMOP-L2-04: %d\n", v1);
  *(_DWORD *)&s2[15] = 0;
  v7 = 0;
  *(_DWORD *)&s2[19] = 0;
  __printf_chk(1, "MEMOP-L2-05: %d\n", 0);
  __printf_chk(1, "MEMOP-L2-06: %d\n", 1);
  __printf_chk(1, "MEMOP-L3-01: 0x%x\n", 67305985);
  v4 = 5;
  _InterlockedOr(v3, 0);
  __printf_chk(1, "MEMOP-L3-02: %d\n", v4 + 5);
  return v9 - __readgsdword(0x14u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x298F */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: extern_function @ 0x29A0 */
int __cdecl extern_function(int a1)
{
  return 3 * a1;
}


/* Function: __stack_chk_fail_local @ 0x29B0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x29D0 */
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


/* Function: .term_proc @ 0x2A1C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x602C */

/* FAILED to decompile: memmove @ 0x6030 */

/* FAILED to decompile: free @ 0x6034 */

/* FAILED to decompile: memcpy @ 0x6038 */

/* FAILED to decompile: memcmp @ 0x603C */

/* FAILED to decompile: __stack_chk_fail @ 0x6040 */

/* FAILED to decompile: __cxa_finalize @ 0x6044 */

/* FAILED to decompile: perror @ 0x6048 */

/* FAILED to decompile: waitpid @ 0x604C */

/* FAILED to decompile: realloc @ 0x6050 */

/* FAILED to decompile: malloc @ 0x6054 */

/* FAILED to decompile: puts @ 0x6058 */

/* FAILED to decompile: exit @ 0x605C */

/* FAILED to decompile: memset @ 0x6060 */

/* FAILED to decompile: __printf_chk @ 0x6064 */

/* FAILED to decompile: fork @ 0x6068 */

/* FAILED to decompile: calloc @ 0x606C */

/* Total functions decompiled: 89, failed: 17 */
