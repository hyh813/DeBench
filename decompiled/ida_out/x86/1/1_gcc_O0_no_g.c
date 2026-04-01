/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/1/1_gcc_O0_no_g
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
int __usercall sub_10A0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 40))();
}


/* Function: _start @ 0x1110 */
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


/* Function: sub_113C @ 0x113C */
void sub_113C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1140 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1150 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1190 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11E0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !completed_1 )
  {
    if ( &_cxa_finalize )
      sub_10A0((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    completed_1 = 1;
  }
}


/* Function: frame_dummy @ 0x1270 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1279 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x127D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: sequential_ops @ 0x1281 */
int __cdecl sequential_ops(int a1, int a2, int a3)
{
  return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x12B6 */
int __cdecl single_if(int a1)
{
  if ( a1 > 0 )
    a1 *= 2;
  return a1;
}


/* Function: if_else @ 0x12D5 */
_BOOL4 __cdecl if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x12FA */
int __cdecl nested_if_2(int a1, int a2)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return a1;
  return a1 + a2;
}


/* Function: nested_if_deep @ 0x132D */
int __cdecl nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return 1;
  if ( a3 <= 0 )
    return 2;
  if ( a4 <= 0 )
    return 3;
  if ( a5 <= 0 )
    return 4;
  return 5;
}


/* Function: if_elseif_chain @ 0x1386 */
int __cdecl if_elseif_chain(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 10;
    case 1:
      return 20;
    case 2:
      return 30;
  }
  return -1;
}


/* Function: if_elseif_long @ 0x13C5 */
int __cdecl if_elseif_long(int a1)
{
  switch ( a1 )
  {
    case 0:
      return 100;
    case 1:
      return 200;
    case 2:
      return 300;
    case 3:
      return 400;
    case 4:
      return 500;
  }
  return -1;
}


/* Function: switch_small @ 0x141E */
int __cdecl switch_small(int a1)
{
  if ( a1 == 3 )
    return 2;
  if ( a1 <= 3 )
  {
    switch ( a1 )
    {
      case 2:
        return 50;
      case 0:
        return 15;
      case 1:
        return 5;
    }
  }
  return -1;
}


/* Function: switch_large @ 0x1491 */
int __cdecl switch_large(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 0;
      break;
    case 1:
      result = 10;
      break;
    case 2:
      result = 20;
      break;
    case 3:
      result = 30;
      break;
    case 4:
      result = 40;
      break;
    case 5:
      result = 50;
      break;
    case 6:
      result = 60;
      break;
    case 7:
      result = 70;
      break;
    case 8:
      result = 80;
      break;
    case 9:
      result = 90;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


/* Function: switch_default @ 0x1507 */
int __cdecl switch_default(int a1)
{
  if ( a1 == 3 )
    return 300;
  if ( a1 > 3 )
    return 0;
  if ( a1 == 1 )
    return 100;
  if ( a1 == 2 )
    return 200;
  else
    return 0;
}


/* Function: switch_fallthrough @ 0x154E */
int __cdecl switch_fallthrough(int a1)
{
  int v2; // [esp+Ch] [ebp-4h]

  v2 = 0;
  if ( a1 == 3 )
  {
    v2 = 12;
LABEL_7:
    v2 += 2 * a1;
    return a1 + v2;
  }
  if ( a1 > 3 )
    return -1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return -1;
    goto LABEL_7;
  }
  return a1 + v2;
}


/* Function: loop_for_fixed @ 0x15A8 */
int __cdecl loop_for_fixed(int a1)
{
  int v2; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
    v2 += i;
  return v2;
}


/* Function: loop_while @ 0x15E3 */
int __cdecl loop_while(int a1)
{
  int result; // eax
  int v2; // [esp+Ch] [ebp-4h]

  v2 = 0;
  while ( a1 )
  {
    a1 /= 10;
    ++v2;
  }
  result = v2;
  if ( v2 <= 0 )
    return 1;
  return result;
}


/* Function: loop_dowhile @ 0x1634 */
int __cdecl loop_dowhile(int a1)
{
  int v2; // [esp+Ch] [ebp-4h]

  v2 = 0;
  do
  {
    a1 /= 10;
    ++v2;
  }
  while ( a1 );
  return v2;
}


/* Function: loop_nested @ 0x1679 */
int __cdecl loop_nested(int a1, int a2)
{
  int v3; // [esp+4h] [ebp-Ch]
  int i; // [esp+8h] [ebp-8h]
  int j; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a1; ++i )
  {
    for ( j = 0; j < a2; ++j )
      ++v3;
  }
  return v3;
}


/* Function: loop_break @ 0x16C7 */
int __cdecl loop_break(int a1)
{
  int i; // [esp+0h] [ebp-28h]
  _DWORD v3[8]; // [esp+8h] [ebp-20h]

  v3[5] = __readgsdword(0x14u);
  v3[0] = 10;
  v3[1] = 20;
  v3[2] = 30;
  v3[3] = 40;
  v3[4] = 50;
  for ( i = 0; i < 5; ++i )
  {
    if ( a1 == v3[i] )
      return i;
  }
  return -1;
}


/* Function: loop_continue @ 0x174E */
int __cdecl loop_continue(int a1)
{
  int v2; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 1; i <= a1; ++i )
  {
    if ( (i & 1) != 0 )
      v2 += i;
  }
  return v2;
}


/* Function: goto_forward @ 0x1796 */
int __cdecl goto_forward(int a1)
{
  int v2; // [esp+Ch] [ebp-4h]

  if ( a1 <= 0 )
    v2 = a1;
  else
    v2 = a1 * a1;
  return 2 * v2;
}


/* Function: goto_backward @ 0x17C9 */
int __cdecl goto_backward(int a1)
{
  int v2; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  if ( a1 <= 0 )
    return 1;
  v2 = 1;
  for ( i = 1; i <= a1; ++i )
    v2 *= i;
  return v2;
}


/* Function: ternary_op @ 0x1816 */
int __cdecl ternary_op(int a1, int a2)
{
  int result; // eax

  result = a1;
  if ( a2 >= a1 )
    return a2;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1834 */
int test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  _BOOL4 v3; // eax
  _BOOL4 v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax

  puts(asc_3030);
  v0 = sequential_ops(5, 7, 3);
  printf("CF-L1-01 (sequential_ops): %d\n", v0);
  v1 = single_if(10);
  printf("CF-L1-02 (single_if): %d\n", v1);
  v2 = single_if(-5);
  printf("CF-L1-02 (single_if): %d\n", v2);
  v3 = if_else(5);
  printf("CF-L1-03 (if_else): %d\n", v3);
  v4 = if_else(-3);
  printf("CF-L1-03 (if_else): %d\n", v4);
  v5 = nested_if_2(10, 5);
  printf("CF-L1-04 (nested_if_2): %d\n", v5);
  v6 = nested_if_2(10, -5);
  printf("CF-L1-04 (nested_if_2): %d\n", v6);
  v7 = nested_if_2(-10, 5);
  printf("CF-L1-04 (nested_if_2): %d\n", v7);
  v8 = nested_if_deep(1, 1, 1, 1, 1);
  printf("CF-L1-05 (nested_if_deep): %d\n", v8);
  v9 = if_elseif_chain(1);
  printf("CF-L1-06 (if_elseif_chain): %d\n", v9);
  v10 = if_elseif_long(3);
  printf("CF-L1-07 (if_elseif_long): %d\n", v10);
  v11 = switch_small(2);
  printf("CF-L1-08 (switch_small): %d\n", v11);
  v12 = switch_large(7);
  printf("CF-L1-09 (switch_large): %d\n", v12);
  v13 = switch_default(5);
  printf("CF-L1-10 (switch_default): %d\n", v13);
  v14 = switch_fallthrough(3);
  printf("CF-L1-11 (switch_fallthrough): %d\n", v14);
  v15 = loop_for_fixed(10);
  printf("CF-L1-12 (loop_for_fixed): %d\n", v15);
  v16 = loop_while(12345);
  printf("CF-L1-13 (loop_while): %d\n", v16);
  v17 = loop_dowhile(9876);
  printf("CF-L1-14 (loop_dowhile): %d\n", v17);
  v18 = loop_nested(3, 4);
  printf("CF-L1-15 (loop_nested): %d\n", v18);
  v19 = loop_break(30);
  printf("CF-L1-16 (loop_break): %d\n", v19);
  v20 = loop_break(99);
  printf("CF-L1-16 (loop_break): %d\n", v20);
  v21 = loop_continue(10);
  printf("CF-L1-17 (loop_continue): %d\n", v21);
  v22 = goto_forward(5);
  printf("CF-L1-18 (goto_forward): %d\n", v22);
  v23 = goto_forward(-3);
  printf("CF-L1-18 (goto_forward): %d\n", v23);
  v24 = goto_backward(5);
  printf("CF-L1-19 (goto_backward): %d\n", v24);
  v25 = ternary_op(10, 5);
  printf("CF-L1-20 (ternary_op): %d\n", v25);
  v26 = ternary_op(3, 8);
  return printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x1BE0 */
int __cdecl loop_multi_exit(int a1)
{
  int i; // [esp+4h] [ebp-44h]
  int j; // [esp+8h] [ebp-40h]
  _DWORD v4[15]; // [esp+Ch] [ebp-3Ch]

  v4[12] = __readgsdword(0x14u);
  v4[0] = 1;
  v4[1] = 2;
  v4[2] = 3;
  v4[3] = 4;
  v4[4] = 5;
  v4[5] = 6;
  v4[6] = 7;
  v4[7] = 8;
  v4[8] = 9;
  v4[9] = 10;
  v4[10] = 11;
  v4[11] = 12;
  for ( i = 0; i <= 2; ++i )
  {
    for ( j = 0; j <= 3; ++j )
    {
      if ( a1 == v4[4 * i + j] )
        return 10 * i + j;
    }
  }
  return -1;
}


/* Function: infinite_loop @ 0x1CBE */
int __cdecl infinite_loop(_DWORD *a1)
{
  int v2; // [esp+Ch] [ebp-4h]

  v2 = 0;
  while ( *a1 != 1 )
  {
    if ( ++v2 > 1000 )
    {
      *a1 = 1;
      return v2;
    }
  }
  return v2;
}


/* Function: multi_return @ 0x1D01 */
int __cdecl multi_return(int a1)
{
  if ( a1 < 0 )
    return -1;
  if ( 2 * a1 > 100 )
    return -2;
  if ( (a1 & 1) != 0 )
    return a1 + 1;
  return 2 * a1;
}


/* Function: conditional_return @ 0x1D4E */
int __cdecl conditional_return(int a1)
{
  if ( a1 > 0 )
    return 2 * a1;
  if ( a1 >= 0 )
    return 0;
  return -a1;
}


/* Function: duffs_device @ 0x1D80 */
int __cdecl duffs_device(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // edx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  _DWORD *v8; // eax
  _DWORD *v9; // edx
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // eax
  _DWORD *v15; // edx
  _DWORD *v16; // eax
  _DWORD *v17; // edx
  _DWORD *v18; // eax
  _DWORD *v19; // edx
  _DWORD *v20; // eax
  int v21; // [esp+Ch] [ebp-4h]

  if ( a3 <= 0 )
    return -1;
  v4 = a3 + 7;
  if ( a3 + 7 < 0 )
    v4 = a3 + 14;
  v21 = v4 >> 3;
  switch ( a3 % 8 )
  {
    case 0:
      goto _L151;
    case 1:
      goto _L150;
    case 2:
      goto _L149;
    case 3:
      goto _L148;
    case 4:
      goto _L147;
    case 5:
      goto _L146;
    case 6:
      goto _L145;
    case 7:
      while ( 1 )
      {
        v7 = a2++;
        v8 = a1++;
        *v8 = *v7;
_L145:
        v9 = a2++;
        v10 = a1++;
        *v10 = *v9;
_L146:
        v11 = a2++;
        v12 = a1++;
        *v12 = *v11;
_L147:
        v13 = a2++;
        v14 = a1++;
        *v14 = *v13;
_L148:
        v15 = a2++;
        v16 = a1++;
        *v16 = *v15;
_L149:
        v17 = a2++;
        v18 = a1++;
        *v18 = *v17;
_L150:
        v19 = a2++;
        v20 = a1++;
        *v20 = *v19;
        if ( --v21 <= 0 )
          break;
_L151:
        v5 = a2++;
        v6 = a1++;
        *v6 = *v5;
      }
      break;
    default:
      return a3;
  }
  return a3;
}


/* Function: loop_complex_cond @ 0x1EA7 */
int __cdecl loop_complex_cond(int a1)
{
  int v2; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; v2 < a1 && i <= 9 && a1 > 0; ++i )
  {
    v2 += 2;
    --a1;
  }
  return a1 + v2 + i;
}


/* Function: loop_modify_var @ 0x1F00 */
int __cdecl loop_modify_var(int a1)
{
  int v2; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v2 += i;
    if ( i > 5 )
      i += 2;
  }
  return v2;
}


/* Function: loop_external_state @ 0x1F45 */
int __cdecl loop_external_state(_DWORD *a1)
{
  int i; // [esp+Ch] [ebp-4h]

  for ( i = 0; i <= 100; ++i )
  {
    if ( *a1 )
      break;
  }
  return i;
}


/* Function: recursion_factorial @ 0x1F7D */
int __cdecl recursion_factorial(int a1)
{
  if ( a1 > 1 )
    return a1 * recursion_factorial(a1 - 1);
  else
    return 1;
}


/* Function: tail_recursion @ 0x1FB6 */
int __cdecl tail_recursion(int a1, int a2)
{
  if ( a1 > 1 )
    return tail_recursion(a1 - 1, a2 * a1);
  else
    return a2;
}


/* Function: indirect_recursion_a @ 0x1FF1 */
int __cdecl indirect_recursion_a(int a1, int a2)
{
  if ( a2 <= 0 )
    return a1;
  if ( (a1 & 1) != 0 )
    return indirect_recursion_b(3 * a1 + 1, a2 - 1);
  return indirect_recursion_b(a1 / 2, a2 - 1);
}


/* Function: indirect_recursion_b @ 0x205C */
int __cdecl indirect_recursion_b(int a1, int a2)
{
  if ( a2 > 0 )
    return indirect_recursion_a(a1 + 1, a2 - 1);
  else
    return a1;
}


/* Function: call_func_ptr @ 0x2096 */
int __cdecl call_func_ptr(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: double_value @ 0x20BA */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: triple_value @ 0x20D2 */
int __cdecl triple_value(int a1)
{
  return 3 * a1;
}


/* Function: call_func_ptr_array @ 0x20EE */
int __cdecl call_func_ptr_array(unsigned int a1, int a2)
{
  _DWORD v3[6]; // [esp+0h] [ebp-18h]

  v3[3] = __readgsdword(0x14u);
  v3[0] = double_value;
  v3[1] = triple_value;
  v3[2] = recursion_factorial;
  if ( a1 <= 2 )
    return ((int (__cdecl *)(int))v3[a1])(a2);
  else
    return -1;
}


/* Function: call_virtual_func @ 0x2161 */
int __cdecl call_virtual_func(int a1, int a2)
{
  return 2 * a2;
}


/* Function: process_with_callback @ 0x2179 */
int __cdecl process_with_callback(int a1, int a2, int (__cdecl *a3)(_DWORD))
{
  int v4; // [esp+8h] [ebp-10h]
  int i; // [esp+Ch] [ebp-Ch]

  v4 = 0;
  for ( i = 0; i < a2; ++i )
    v4 += a3(*(_DWORD *)(4 * i + a1));
  return v4;
}


/* Function: test_control_flow_l2 @ 0x21CE */
unsigned int test_control_flow_l2()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  unsigned int i; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [esp+0h] [ebp-68h] BYREF
  int v21; // [esp+4h] [ebp-64h] BYREF
  _DWORD v22[5]; // [esp+8h] [ebp-60h] BYREF
  _DWORD v23[8]; // [esp+1Ch] [ebp-4Ch] BYREF
  _DWORD v24[8]; // [esp+3Ch] [ebp-2Ch] BYREF
  unsigned int v25; // [esp+5Ch] [ebp-Ch]

  v25 = __readgsdword(0x14u);
  puts(asc_32C8);
  v0 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
  v20 = 0;
  v1 = infinite_loop(&v20);
  printf("CF-L2-02 (infinite_loop): %d\n", v1);
  v2 = multi_return(-5);
  printf("CF-L2-03 (multi_return): %d\n", v2);
  v3 = multi_return(100);
  printf("CF-L2-03 (multi_return): %d\n", v3);
  v4 = multi_return(3);
  printf("CF-L2-03 (multi_return): %d\n", v4);
  v5 = conditional_return(5);
  printf("CF-L2-04 (conditional_return): %d\n", v5);
  v6 = conditional_return(-5);
  printf("CF-L2-04 (conditional_return): %d\n", v6);
  v23[0] = 1;
  v23[1] = 2;
  v23[2] = 3;
  v23[3] = 4;
  v23[4] = 5;
  v23[5] = 6;
  v23[6] = 7;
  v23[7] = 8;
  for ( i = 0; i < 8; ++i )
    v24[i] = 0;
  v8 = duffs_device(v24, v23, 8);
  printf("CF-L2-05 (duffs_device): %d\n", v8);
  v9 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n", v9);
  v10 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n", v10);
  v21 = 0;
  v11 = loop_external_state(&v21);
  printf("CF-L2-08 (loop_external_state): %d\n", v11);
  v12 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n", v12);
  v13 = tail_recursion(5, 1);
  printf("CF-L2-10 (tail_recursion): %d\n", v13);
  v14 = indirect_recursion_a(10, 3);
  printf("CF-L2-11 (indirect_recursion): %d\n", v14);
  v15 = call_func_ptr(double_value, 5);
  printf("CF-L2-12 (call_func_ptr): %d\n", v15);
  v16 = call_func_ptr_array(0, 5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
  v17 = call_func_ptr_array(2u, 5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v17);
  v22[0] = 1;
  v22[1] = 2;
  v22[2] = 3;
  v22[3] = 4;
  v22[4] = 5;
  v18 = process_with_callback((int)v22, 5, double_value);
  printf("CF-L2-15 (process_with_callback): %d\n", v18);
  return v25 - __readgsdword(0x14u);
}


/* Function: non_local_jump @ 0x2506 */
int __cdecl non_local_jump(int a1)
{
  if ( _setjmp(&jump_buffer) )
    return -1;
  if ( a1 < 0 )
    longjmp(&jump_buffer, 1);
  if ( a1 > 100 )
    longjmp(&jump_buffer, 2);
  return 2 * a1;
}


/* Function: cpp_exception @ 0x2581 */
int __cdecl cpp_exception(int a1)
{
  if ( a1 < 0 )
    return -1;
  if ( a1 <= 100 )
    return 2 * a1;
  return -2;
}


/* Function: op_add @ 0x25B3 */
int __cdecl op_add(int a1, int a2)
{
  return a1 + a2;
}


/* Function: op_sub @ 0x25CE */
int __cdecl op_sub(int a1, int a2)
{
  return a1 - a2;
}


/* Function: op_mul @ 0x25E7 */
int __cdecl op_mul(int a1, int a2)
{
  return a2 * a1;
}


/* Function: op_div @ 0x2601 */
int __cdecl op_div(int a1, int a2)
{
  if ( a2 )
    return a1 / a2;
  else
    return 0;
}


/* Function: op_mod @ 0x2628 */
int __cdecl op_mod(int a1, int a2)
{
  if ( a2 )
    return a1 % a2;
  else
    return 0;
}


/* Function: op_and @ 0x2651 */
int __cdecl op_and(int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x266A */
int __cdecl op_or(__int64 a1)
{
  return HIDWORD(a1) | a1;
}


/* Function: op_xor @ 0x2683 */
int __cdecl op_xor(int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x269C */
int __cdecl op_shl(int a1, char a2)
{
  return a1 << a2;
}


/* Function: op_shr @ 0x26BB */
int __cdecl op_shr(int a1, char a2)
{
  return a1 >> a2;
}


/* Function: large_jump_table @ 0x26DA */
int __cdecl large_jump_table(unsigned int a1, int a2, int a3)
{
  _DWORD v4[13]; // [esp+4h] [ebp-34h]

  v4[10] = __readgsdword(0x14u);
  v4[0] = op_add;
  v4[1] = op_sub;
  v4[2] = op_mul;
  v4[3] = op_div;
  v4[4] = op_mod;
  v4[5] = op_and;
  v4[6] = op_or;
  v4[7] = op_xor;
  v4[8] = op_shl;
  v4[9] = op_shr;
  if ( a1 < 0xA )
    return ((int (__cdecl *)(int, int))v4[a1])(a2, a3);
  else
    return -1;
}


/* Function: conditional_func_ptr @ 0x278F */
int __cdecl conditional_func_ptr(int a1, int a2)
{
  int (__cdecl *v3)(int); // eax

  if ( !a1 )
    return double_value(a2);
  if ( a1 == 1 )
    v3 = triple_value;
  else
    v3 = recursion_factorial;
  return v3(a2);
}


/* Function: state_machine @ 0x27DE */
int __cdecl state_machine(int a1, int a2)
{
  if ( a2 == 3 )
  {
    if ( a1 )
      return 3;
    else
      return 0;
  }
  else
  {
    if ( a2 > 3 )
      return 3;
    switch ( a2 )
    {
      case 2:
        return 2;
      case 0:
        return a1 == 1;
      case 1:
        if ( a1 == 2 )
        {
          return 2;
        }
        else if ( a1 == 99 )
        {
          return 3;
        }
        else
        {
          return 1;
        }
      default:
        return 3;
    }
  }
}


/* Function: state_idle @ 0x286C */
_BOOL4 __cdecl state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x2889 */
int __cdecl state_processing(int a1)
{
  if ( a1 == 2 )
    return 2;
  if ( a1 == 99 )
    return 3;
  return 1;
}


/* Function: state_done @ 0x28BB */
int state_done()
{
  return 2;
}


/* Function: state_error @ 0x28D3 */
int __cdecl state_error(int a1)
{
  if ( a1 )
    return 3;
  else
    return 0;
}


/* Function: fsm_func_table @ 0x28F8 */
int __cdecl fsm_func_table(int a1, unsigned int a2)
{
  _DWORD v3[7]; // [esp+Ch] [ebp-1Ch]

  v3[4] = __readgsdword(0x14u);
  v3[0] = state_idle;
  v3[1] = state_processing;
  v3[2] = state_done;
  v3[3] = state_error;
  if ( a2 < 4 )
    return ((int (__cdecl *)(int))v3[a2])(a1);
  else
    return 3;
}


/* Function: computed_goto @ 0x2974 */
int __cdecl computed_goto(int a1, unsigned int a2)
{
  _DWORD v3[7]; // [esp+1Ch] [ebp-1Ch]

  v3[4] = __readgsdword(0x14u);
  v3[0] = &loc_29DB;
  v3[1] = &loc_29E6;
  v3[2] = &loc_29F1;
  v3[3] = &loc_29FC;
  if ( a2 < 4 )
    __asm { jmp     eax }
  return -1;
}


/* Function: obfuscated_cf @ 0x2A18 */
int __cdecl obfuscated_cf(int a1)
{
  int v2; // [esp+Ch] [ebp-4h]

  v2 = a1;
  if ( a1 * a1 < -1 )
    v2 = 2 * a1 + 1;
  return 2 * v2;
}


/* Function: opaque_predicate @ 0x2A50 */
int __cdecl opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x2A83 */
int __cdecl overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return 3 * a1 + 1;
  else
    return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x2ABA */
unsigned int test_control_flow_l3()
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
  int v11; // eax
  _DWORD v13[4]; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-Ch]

  v14 = __readgsdword(0x14u);
  puts(asc_34C4);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  v2 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n", v2);
  v3 = cpp_exception(-5);
  printf("CF-L3-02 (cpp_exception): %d\n", v3);
  v4 = large_jump_table(0, 10, 5);
  printf("CF-L3-03 (large_jump_table): %d\n", v4);
  v5 = conditional_func_ptr(0, 5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", v5);
  v6 = state_machine(1, 0);
  printf("CF-L3-05 (state_machine): %d\n", v6);
  v7 = fsm_func_table(2, 1u);
  printf("CF-L3-06 (fsm_func_table): %d\n", v7);
  v13[0] = 0;
  v13[1] = 1;
  v13[2] = 2;
  v13[3] = 3;
  v8 = computed_goto((int)v13, 2u);
  printf("CF-L3-07 (computed_goto): %d\n", v8);
  v9 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
  v10 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n", v10);
  v11 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n", v11);
  return v14 - __readgsdword(0x14u);
}


/* Function: main @ 0x2CAE */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x2CD8 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2CE0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2D00 */
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


/* Function: .term_proc @ 0x2D4C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: printf @ 0x60E4 */

/* FAILED to decompile: longjmp @ 0x60E8 */

/* FAILED to decompile: _setjmp @ 0x60EC */

/* FAILED to decompile: __stack_chk_fail @ 0x60F0 */

/* FAILED to decompile: __cxa_finalize @ 0x60F4 */

/* FAILED to decompile: puts @ 0x60F8 */

/* Total functions decompiled: 88, failed: 7 */
