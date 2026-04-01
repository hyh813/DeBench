/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/1/1_gcc_O0_no_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10424 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10430 @ 0x10430 */
void sub_10430()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x104BC */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_104F8 + 20176), v4, (char **)va, 0, 0, a1, va);
  abort();
}


/* Function: call_weak_fn @ 0x10500 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10524 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10550 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10588 */
void *_do_global_dtors_aux()
{
  void *result; // r0

  if ( !completed_0 )
  {
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x105B0 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: sequential_ops @ 0x105B4 */
int __fastcall sequential_ops(int a1, int a2, int a3)
{
  return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x1060C */
int __fastcall single_if(int a1)
{
  int v2; // [sp+4h] [bp-8h]

  v2 = a1;
  if ( a1 > 0 )
    return 2 * a1;
  return v2;
}


/* Function: if_else @ 0x10648 */
bool __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x10680 */
int __fastcall nested_if_2(int a1, int a2)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return a1;
  return a1 + a2;
}


/* Function: nested_if_deep @ 0x106D8 */
int __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
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


/* Function: if_elseif_chain @ 0x1076C */
int __fastcall if_elseif_chain(int a1)
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


/* Function: if_elseif_long @ 0x107CC */
int __fastcall if_elseif_long(int a1)
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


/* Function: switch_small @ 0x10854 */
int __fastcall switch_small(int a1)
{
  int v1; // r3

  switch ( a1 )
  {
    case 0:
      v1 = 15;
      break;
    case 1:
      v1 = 5;
      break;
    case 2:
      v1 = 50;
      break;
    case 3:
      v1 = 2;
      break;
    default:
      v1 = -1;
      break;
  }
  return v1;
}


/* Function: switch_large @ 0x108E8 */
int __fastcall switch_large(int a1)
{
  int v1; // r3

  switch ( a1 )
  {
    case 0:
      v1 = 0;
      break;
    case 1:
      v1 = 10;
      break;
    case 2:
      v1 = 20;
      break;
    case 3:
      v1 = 30;
      break;
    case 4:
      v1 = 40;
      break;
    case 5:
      v1 = 50;
      break;
    case 6:
      v1 = 60;
      break;
    case 7:
      v1 = 70;
      break;
    case 8:
      v1 = 80;
      break;
    case 9:
      v1 = 90;
      break;
    default:
      v1 = -1;
      break;
  }
  return v1;
}


/* Function: switch_default @ 0x10994 */
int __fastcall switch_default(int a1)
{
  if ( a1 == 3 )
    return 300;
  if ( a1 > 3 )
    return 0;
  if ( a1 == 1 )
    return 100;
  if ( a1 != 2 )
    return 0;
  return 200;
}


/* Function: switch_fallthrough @ 0x10A04 */
int __fastcall switch_fallthrough(int a1)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = 0;
  if ( a1 == 3 )
  {
    v2 = 12;
LABEL_7:
    v2 += 2 * a1;
    return v2 + a1;
  }
  if ( a1 > 3 )
    return -1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return -1;
    goto LABEL_7;
  }
  return v2 + a1;
}


/* Function: loop_for_fixed @ 0x10AA8 */
int __fastcall loop_for_fixed(int a1)
{
  int v2; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
    v2 += i;
  return v2;
}


/* Function: loop_while @ 0x10B0C */
int __fastcall loop_while(int a1)
{
  int v1; // r3
  int v4; // [sp+Ch] [bp-8h]

  v4 = 0;
  while ( a1 )
  {
    a1 /= 10;
    ++v4;
  }
  v1 = v4;
  if ( v4 < 1 )
    return 1;
  return v1;
}


/* Function: loop_dowhile @ 0x10B80 */
int __fastcall loop_dowhile(int a1)
{
  int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  do
  {
    a1 /= 10;
    ++v3;
  }
  while ( a1 );
  return v3;
}


/* Function: loop_nested @ 0x10BE4 */
int __fastcall loop_nested(int a1, int a2)
{
  int v3; // [sp+Ch] [bp-10h]
  int i; // [sp+10h] [bp-Ch]
  int j; // [sp+14h] [bp-8h]

  v3 = 0;
  for ( i = 0; i < a1; ++i )
  {
    for ( j = 0; j < a2; ++j )
      ++v3;
  }
  return v3;
}


/* Function: loop_break @ 0x10C70 */
int __fastcall loop_break(int a1)
{
  int i; // [sp+8h] [bp-24h]
  int v4; // [sp+10h] [bp-1Ch]
  _DWORD v5[4]; // [sp+14h] [bp-18h]

  v4 = 10;
  v5[0] = 20;
  v5[1] = 30;
  v5[2] = 40;
  v5[3] = 50;
  for ( i = 0; i < 5; ++i )
  {
    if ( a1 == v5[i - 1] )
      return i;
  }
  return -1;
}


/* Function: loop_continue @ 0x10D38 */
int __fastcall loop_continue(int a1)
{
  int v2; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v2 = 0;
  for ( i = 1; i <= a1; ++i )
  {
    if ( (i & 1) != 0 )
      v2 += i;
  }
  return v2;
}


/* Function: goto_forward @ 0x10DB4 */
int __fastcall goto_forward(int a1)
{
  int v2; // [sp+Ch] [bp-8h]

  if ( a1 <= 0 )
    v2 = a1;
  else
    v2 = a1 * a1;
  return 2 * v2;
}


/* Function: goto_backward @ 0x10E10 */
int __fastcall goto_backward(int a1)
{
  int v3; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  if ( a1 <= 0 )
    return 1;
  v3 = 1;
  for ( i = 1; i <= a1; ++i )
    v3 *= i;
  return v3;
}


/* Function: ternary_op @ 0x10E8C */
int __fastcall ternary_op(int a1, int a2)
{
  int v2; // r3

  v2 = a1;
  if ( a2 >= a1 )
    return a2;
  return v2;
}


/* Function: test_control_flow_l1 @ 0x10EC4 */
int test_control_flow_l1()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  _BOOL4 v3; // r0
  _BOOL4 v4; // r0
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
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0

  puts(s);
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


/* Function: loop_multi_exit @ 0x111FC */
int __fastcall loop_multi_exit(int a1)
{
  int i; // [sp+Ch] [bp-40h]
  int j; // [sp+10h] [bp-3Ch]
  int v5; // [sp+14h] [bp-38h]
  _DWORD v6[11]; // [sp+18h] [bp-34h]

  v5 = 1;
  v6[0] = 2;
  v6[1] = 3;
  v6[2] = 4;
  v6[3] = 5;
  v6[4] = 6;
  v6[5] = 7;
  v6[6] = 8;
  v6[7] = 9;
  v6[8] = 10;
  v6[9] = 11;
  v6[10] = 12;
  for ( i = 0; i <= 2; ++i )
  {
    for ( j = 0; j <= 3; ++j )
    {
      if ( a1 == v6[4 * i - 1 + j] )
        return 10 * i + j;
    }
  }
  return -1;
}


/* Function: infinite_loop @ 0x1130C */
int __fastcall infinite_loop(_DWORD *a1)
{
  int v2; // [sp+Ch] [bp-8h]

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


/* Function: multi_return @ 0x11374 */
int __fastcall multi_return(int a1)
{
  if ( a1 < 0 )
    return -1;
  if ( 2 * a1 > 100 )
    return -2;
  if ( (a1 & 1) != 0 )
    return a1 + 1;
  return 2 * a1;
}


/* Function: conditional_return @ 0x113E8 */
int __fastcall conditional_return(int a1)
{
  if ( a1 > 0 )
    return 2 * a1;
  if ( a1 >= 0 )
    return 0;
  return -a1;
}


/* Function: duffs_device @ 0x1143C */
int __fastcall duffs_device(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r3
  _DWORD *v5; // r2
  _DWORD *v6; // r3
  _DWORD *v7; // r2
  _DWORD *v8; // r3
  _DWORD *v9; // r2
  _DWORD *v10; // r3
  _DWORD *v11; // r2
  _DWORD *v12; // r3
  _DWORD *v13; // r2
  _DWORD *v14; // r3
  _DWORD *v15; // r2
  _DWORD *v16; // r3
  _DWORD *v17; // r2
  _DWORD *v18; // r3
  _DWORD *v19; // r2
  _DWORD *v20; // r3
  int v25; // [sp+14h] [bp-8h]

  if ( a3 <= 0 )
    return -1;
  v4 = a3 + 7;
  if ( a3 + 7 < 0 )
    v4 = a3 + 14;
  v25 = v4 >> 3;
  switch ( a3 & 7 )
  {
    case 0:
      goto LABEL_6;
    case 1:
      goto LABEL_13;
    case 2:
      goto LABEL_12;
    case 3:
      goto LABEL_11;
    case 4:
      goto LABEL_10;
    case 5:
      goto LABEL_9;
    case 6:
      goto LABEL_8;
    case 7:
      while ( 1 )
      {
        v7 = a2++;
        v8 = a1++;
        *v8 = *v7;
LABEL_8:
        v9 = a2++;
        v10 = a1++;
        *v10 = *v9;
LABEL_9:
        v11 = a2++;
        v12 = a1++;
        *v12 = *v11;
LABEL_10:
        v13 = a2++;
        v14 = a1++;
        *v14 = *v13;
LABEL_11:
        v15 = a2++;
        v16 = a1++;
        *v16 = *v15;
LABEL_12:
        v17 = a2++;
        v18 = a1++;
        *v18 = *v17;
LABEL_13:
        v19 = a2++;
        v20 = a1++;
        *v20 = *v19;
        if ( --v25 <= 0 )
          break;
LABEL_6:
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


/* Function: loop_complex_cond @ 0x115F8 */
int __fastcall loop_complex_cond(int a1)
{
  int v2; // [sp+Ch] [bp-10h]
  int i; // [sp+14h] [bp-8h]

  v2 = 0;
  for ( i = 0; v2 < a1 && i <= 9 && a1 > 0; ++i )
  {
    v2 += 2;
    --a1;
  }
  return v2 + a1 + i;
}


/* Function: loop_modify_var @ 0x11694 */
int __fastcall loop_modify_var(int a1)
{
  int v2; // [sp+8h] [bp-Ch]
  int i; // [sp+Ch] [bp-8h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v2 += i;
    if ( i > 5 )
      i += 2;
  }
  return v2;
}


/* Function: loop_external_state @ 0x11710 */
int __fastcall loop_external_state(_DWORD *a1)
{
  int i; // [sp+Ch] [bp-8h]

  for ( i = 0; i <= 100; ++i )
  {
    if ( *a1 )
      break;
  }
  return i;
}


/* Function: recursion_factorial @ 0x11770 */
int __fastcall recursion_factorial(int a1)
{
  if ( a1 > 1 )
    return recursion_factorial(a1 - 1) * a1;
  else
    return 1;
}


/* Function: tail_recursion @ 0x117BC */
int __fastcall tail_recursion(int a1, int a2)
{
  if ( a1 > 1 )
    return tail_recursion(a1 - 1, a2 * a1);
  else
    return a2;
}


/* Function: indirect_recursion_a @ 0x11810 */
int __fastcall indirect_recursion_a(int a1, int a2)
{
  if ( a2 <= 0 )
    return a1;
  if ( (a1 & 1) != 0 )
    return indirect_recursion_b(3 * a1 + 1, a2 - 1);
  return indirect_recursion_b(a1 / 2, a2 - 1);
}


/* Function: indirect_recursion_b @ 0x118B0 */
int __fastcall indirect_recursion_b(int a1, int a2)
{
  if ( a2 > 0 )
    return indirect_recursion_a(a1 + 1, a2 - 1);
  else
    return a1;
}


/* Function: call_func_ptr @ 0x11904 */
int __fastcall call_func_ptr(int (__fastcall *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: double_value @ 0x11934 */
int __fastcall double_value(int a1)
{
  return 2 * a1;
}


/* Function: triple_value @ 0x1195C */
int __fastcall triple_value(int a1)
{
  return 3 * a1;
}


/* Function: call_func_ptr_array @ 0x1198C */
int __fastcall call_func_ptr_array(unsigned int a1, int a2)
{
  int (__fastcall *v4)(int); // [sp+8h] [bp-14h]
  _DWORD v5[2]; // [sp+Ch] [bp-10h]

  v4 = double_value;
  v5[0] = triple_value;
  v5[1] = recursion_factorial;
  if ( a1 <= 2 )
    return ((int (__fastcall *)(int))v5[a1 - 1])(a2);
  else
    return -1;
}


/* Function: call_virtual_func @ 0x11A30 */
int __fastcall call_virtual_func(int a1, int a2)
{
  return 2 * a2;
}


/* Function: process_with_callback @ 0x11A5C */
int __fastcall process_with_callback(int a1, int a2, int (__fastcall *a3)(_DWORD))
{
  int v7; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v7 = 0;
  for ( i = 0; i < a2; ++i )
    v7 += a3(*(_DWORD *)(a1 + 4 * i));
  return v7;
}


/* Function: test_control_flow_l2 @ 0x11AE4 */
int test_control_flow_l2()
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
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v19; // [sp+0h] [bp-64h] BYREF
  int v20; // [sp+4h] [bp-60h] BYREF
  _DWORD v21[5]; // [sp+8h] [bp-5Ch] BYREF
  _DWORD v22[8]; // [sp+1Ch] [bp-48h] BYREF
  _DWORD s[8]; // [sp+3Ch] [bp-28h] BYREF

  puts(asc_12D6C);
  v0 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
  v19 = 0;
  v1 = infinite_loop(&v19);
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
  v22[0] = 1;
  v22[1] = 2;
  v22[2] = 3;
  v22[3] = 4;
  v22[4] = 5;
  v22[5] = 6;
  v22[6] = 7;
  v22[7] = 8;
  memset(s, 0, sizeof(s));
  v7 = duffs_device(s, v22, 8);
  printf("CF-L2-05 (duffs_device): %d\n", v7);
  v8 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
  v9 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n", v9);
  v20 = 0;
  v10 = loop_external_state(&v20);
  printf("CF-L2-08 (loop_external_state): %d\n", v10);
  v11 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n", v11);
  v12 = tail_recursion(5, 1);
  printf("CF-L2-10 (tail_recursion): %d\n", v12);
  v13 = indirect_recursion_a(10, 3);
  printf("CF-L2-11 (indirect_recursion): %d\n", v13);
  v14 = call_func_ptr(double_value, 5);
  printf("CF-L2-12 (call_func_ptr): %d\n", v14);
  v15 = call_func_ptr_array(0, 5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
  v16 = call_func_ptr_array(2u, 5);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
  v21[0] = 1;
  v21[1] = 2;
  v21[2] = 3;
  v21[3] = 4;
  v21[4] = 5;
  v17 = process_with_callback((int)v21, 5, double_value);
  return printf("CF-L2-15 (process_with_callback): %d\n", v17);
}


/* Function: non_local_jump @ 0x11DBC */
int __fastcall non_local_jump(int a1)
{
  if ( setjmp(jump_buffer) )
    return -1;
  if ( a1 < 0 )
    longjmp(jump_buffer, 1);
  if ( a1 > 100 )
    longjmp(jump_buffer, 2);
  return 2 * a1;
}


/* Function: cpp_exception @ 0x11E30 */
int __fastcall cpp_exception(int a1)
{
  if ( a1 < 0 )
    return -1;
  if ( a1 <= 100 )
    return 2 * a1;
  return -2;
}


/* Function: op_add @ 0x11E80 */
int __fastcall op_add(int a1, int a2)
{
  return a1 + a2;
}


/* Function: op_sub @ 0x11EB0 */
int __fastcall op_sub(int a1, int a2)
{
  return a1 - a2;
}


/* Function: op_mul @ 0x11EE0 */
int __fastcall op_mul(int a1, int a2)
{
  return a2 * a1;
}


/* Function: op_div @ 0x11F10 */
int __fastcall op_div(int a1, int a2)
{
  if ( a2 )
    return a1 / a2;
  else
    return 0;
}


/* Function: op_mod @ 0x11F54 */
int __fastcall op_mod(int a1, int a2)
{
  if ( a2 )
    return a1 % a2;
  else
    return 0;
}


/* Function: op_and @ 0x11F9C */
int __fastcall op_and(int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x11FCC */
int __fastcall op_or(int a1, int a2)
{
  return a1 | a2;
}


/* Function: op_xor @ 0x11FFC */
int __fastcall op_xor(int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x1202C */
int __fastcall op_shl(int a1, char a2)
{
  return a1 << a2;
}


/* Function: op_shr @ 0x1205C */
int __fastcall op_shr(int a1, char a2)
{
  return a1 >> a2;
}


/* Function: large_jump_table @ 0x1208C */
int __fastcall large_jump_table(unsigned int a1, int a2, int a3)
{
  int (__fastcall *v5)(int, int); // [sp+14h] [bp-30h]
  _DWORD v6[9]; // [sp+18h] [bp-2Ch]

  v5 = op_add;
  v6[0] = op_sub;
  v6[1] = op_mul;
  v6[2] = op_div;
  v6[3] = op_mod;
  v6[4] = op_and;
  v6[5] = op_or;
  v6[6] = op_xor;
  v6[7] = op_shl;
  v6[8] = op_shr;
  if ( a1 < 0xA )
    return ((int (__fastcall *)(int, int))v6[a1 - 1])(a2, a3);
  else
    return -1;
}


/* Function: conditional_func_ptr @ 0x1214C */
int __fastcall conditional_func_ptr(int a1, int a2)
{
  if ( !a1 )
    return double_value(a2);
  if ( a1 == 1 )
    return triple_value(a2);
  return recursion_factorial(a2);
}


/* Function: state_machine @ 0x121C0 */
int __fastcall state_machine(int a1, int a2)
{
  int v2; // r3

  switch ( a2 )
  {
    case 0:
      v2 = a1 == 1;
      break;
    case 1:
      if ( a1 == 2 )
      {
        v2 = 2;
      }
      else if ( a1 == 99 )
      {
        v2 = 3;
      }
      else
      {
        v2 = 1;
      }
      break;
    case 2:
      v2 = 2;
      break;
    case 3:
      if ( a1 )
        v2 = 3;
      else
        v2 = 0;
      break;
    default:
      v2 = 3;
      break;
  }
  return v2;
}


/* Function: state_idle @ 0x12278 */
bool __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x122AC */
int __fastcall state_processing(int a1)
{
  if ( a1 == 2 )
    return 2;
  if ( a1 == 99 )
    return 3;
  return 1;
}


/* Function: state_done @ 0x122F8 */
int state_done()
{
  return 2;
}


/* Function: state_error @ 0x1231C */
int __fastcall state_error(int a1)
{
  if ( a1 )
    return 3;
  else
    return 0;
}


/* Function: fsm_func_table @ 0x12354 */
int __fastcall fsm_func_table(int a1, unsigned int a2)
{
  bool (__fastcall *v4)(int); // [sp+Ch] [bp-18h]
  _DWORD v5[3]; // [sp+10h] [bp-14h]

  v4 = state_idle;
  v5[0] = state_processing;
  v5[1] = state_done;
  v5[2] = state_error;
  if ( a2 < 4 )
    return ((int (__fastcall *)(int))v5[a2 - 1])(a1);
  else
    return 3;
}


/* Function: computed_goto @ 0x123F8 */
int __fastcall computed_goto(int a1, unsigned int a2)
{
  int v3; // [sp+Ch] [bp-18h]
  _DWORD v4[3]; // [sp+10h] [bp-14h]

  v3 = 74856;
  v4[0] = 74864;
  v4[1] = 74872;
  v4[2] = 74880;
  if ( a2 < 4 )
    __asm { MOV     PC, R3 }
  return -1;
}


/* Function: obfuscated_cf @ 0x124B4 */
int __fastcall obfuscated_cf(int a1)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = a1;
  if ( a1 * a1 < -1 )
    v2 = 2 * a1 + 1;
  return 2 * v2;
}


/* Function: opaque_predicate @ 0x12514 */
int __fastcall opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x12564 */
int __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return 3 * a1 + 1;
  else
    return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x125BC */
int test_control_flow_l3()
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
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _DWORD v13[4]; // [sp+4h] [bp-18h] BYREF

  puts(asc_12FEC);
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
  return printf("CF-L3-10 (overlapped_code): %d\n", v11);
}


/* Function: main @ 0x12788 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __divsi3 @ 0x127A8 */
int __fastcall _divsi3(int a1, int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test();
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: .divsi3_skip_div0_test @ 0x127B0 */
int __fastcall divsi3_skip_div0_test(int result, unsigned int a2)
{
  char v2; // nf
  int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r2
  _BOOL4 v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0

  v3 = result ^ a2;
  if ( v2 )
    a2 = -a2;
  if ( a2 == 1 )
  {
    if ( (v3 ^ result) < 0 )
      return -result;
  }
  else
  {
    v4 = result;
    if ( result < 0 )
      v4 = -result;
    if ( v4 <= a2 )
    {
      if ( v4 < a2 )
        result = 0;
      if ( v4 == a2 )
        return (v3 >> 31) | 1;
    }
    else if ( (a2 & (a2 - 1)) != 0 )
    {
      v5 = 31 - (__clz(a2) - __clz(v4));
      if ( v5 )
      {
        return ((int (__fastcall *)(_DWORD))((char *)&loc_127F8 + 12 * v5))(0);
      }
      else
      {
        v6 = v4 >= a2 << 31;
        if ( v4 >= a2 << 31 )
          v4 -= a2 << 31;
        v7 = v6 + (v4 >= a2 << 30) + v6;
        if ( v4 >= a2 << 30 )
          v4 -= a2 << 30;
        v8 = v7 + (v4 >= a2 << 29) + v7;
        if ( v4 >= a2 << 29 )
          v4 -= a2 << 29;
        v9 = v8 + (v4 >= a2 << 28) + v8;
        if ( v4 >= a2 << 28 )
          v4 -= a2 << 28;
        v10 = v9 + (v4 >= a2 << 27) + v9;
        if ( v4 >= a2 << 27 )
          v4 -= a2 << 27;
        v11 = v10 + (v4 >= a2 << 26) + v10;
        if ( v4 >= a2 << 26 )
          v4 -= a2 << 26;
        v12 = v11 + (v4 >= a2 << 25) + v11;
        if ( v4 >= a2 << 25 )
          v4 -= a2 << 25;
        v13 = v12 + (v4 >= a2 << 24) + v12;
        if ( v4 >= a2 << 24 )
          v4 -= a2 << 24;
        v14 = v13 + (v4 >= a2 << 23) + v13;
        if ( v4 >= a2 << 23 )
          v4 -= a2 << 23;
        v15 = v14 + (v4 >= a2 << 22) + v14;
        if ( v4 >= a2 << 22 )
          v4 -= a2 << 22;
        v16 = v15 + (v4 >= a2 << 21) + v15;
        if ( v4 >= a2 << 21 )
          v4 -= a2 << 21;
        v17 = v16 + (v4 >= a2 << 20) + v16;
        if ( v4 >= a2 << 20 )
          v4 -= a2 << 20;
        v18 = v17 + (v4 >= a2 << 19) + v17;
        if ( v4 >= a2 << 19 )
          v4 -= a2 << 19;
        v19 = v18 + (v4 >= a2 << 18) + v18;
        if ( v4 >= a2 << 18 )
          v4 -= a2 << 18;
        v20 = v19 + (v4 >= a2 << 17) + v19;
        if ( v4 >= a2 << 17 )
          v4 -= a2 << 17;
        v21 = v20 + (v4 >= a2 << 16) + v20;
        if ( v4 >= a2 << 16 )
          v4 -= a2 << 16;
        v22 = v21 + (v4 >= a2 << 15) + v21;
        if ( v4 >= a2 << 15 )
          v4 -= a2 << 15;
        v23 = v22 + (v4 >= a2 << 14) + v22;
        if ( v4 >= a2 << 14 )
          v4 -= a2 << 14;
        v24 = v23 + (v4 >= a2 << 13) + v23;
        if ( v4 >= a2 << 13 )
          v4 -= a2 << 13;
        v25 = v24 + (v4 >= a2 << 12) + v24;
        if ( v4 >= a2 << 12 )
          v4 -= a2 << 12;
        v26 = v25 + (v4 >= a2 << 11) + v25;
        if ( v4 >= a2 << 11 )
          v4 -= a2 << 11;
        v27 = v26 + (v4 >= a2 << 10) + v26;
        if ( v4 >= a2 << 10 )
          v4 -= a2 << 10;
        v28 = v27 + (v4 >= a2 << 9) + v27;
        if ( v4 >= a2 << 9 )
          v4 -= a2 << 9;
        v29 = v28 + (v4 >= a2 << 8) + v28;
        if ( v4 >= a2 << 8 )
          v4 -= a2 << 8;
        v30 = v29 + (v4 >= a2 << 7) + v29;
        if ( v4 >= a2 << 7 )
          v4 -= a2 << 7;
        v31 = v30 + (v4 >= a2 << 6) + v30;
        if ( v4 >= a2 << 6 )
          v4 -= a2 << 6;
        v32 = v31 + (v4 >= 32 * a2) + v31;
        if ( v4 >= 32 * a2 )
          v4 -= 32 * a2;
        v33 = v32 + (v4 >= 16 * a2) + v32;
        if ( v4 >= 16 * a2 )
          v4 -= 16 * a2;
        v34 = v33 + (v4 >= 8 * a2) + v33;
        if ( v4 >= 8 * a2 )
          v4 -= 8 * a2;
        v35 = v34 + (v4 >= 4 * a2) + v34;
        if ( v4 >= 4 * a2 )
          v4 -= 4 * a2;
        v36 = v35 + (v4 >= 2 * a2) + v35;
        if ( v4 >= 2 * a2 )
          v4 -= 2 * a2;
        result = v36 + (v4 >= a2) + v36;
        if ( v3 < 0 )
          return -result;
      }
    }
    else
    {
      result = v4 >> (31 - __clz(a2));
      if ( v3 < 0 )
        return -result;
    }
  }
  return result;
}


/* Function: __aeabi_idivmod @ 0x129C8 */
int __fastcall _aeabi_idivmod(int a1, unsigned int a2)
{
  bool v2; // nf

  if ( a2 )
    return divsi3_skip_div0_test(a1, a2);
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return _aeabi_ldiv0(a1);
}


/* Function: __aeabi_ldiv0 @ 0x129E8 */
int _aeabi_ldiv0()
{
  return raise(8);
}


/* Function: .term_proc @ 0x129F8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp_longjmp @ 0x241DC */

/* FAILED to decompile: __imp_puts @ 0x241E0 */

/* FAILED to decompile: __imp_memset @ 0x241E4 */

/* FAILED to decompile: __imp_raise @ 0x241E8 */

/* FAILED to decompile: __imp_printf @ 0x241EC */

/* FAILED to decompile: __imp__setjmp @ 0x241F0 */

/* FAILED to decompile: __imp_abort @ 0x241F4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x241F8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x241FC */

/* FAILED to decompile: __imp___gmon_start__ @ 0x24200 */

/* Total functions decompiled: 79, failed: 10 */
