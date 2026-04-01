/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/1/1_clang_O0_no_g
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


/* Function: _start @ 0x1090 */
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


/* Function: deregister_tm_clones @ 0x10C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10F0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1130 */
char *_do_global_dtors_aux()
{
  char *result; // rax

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x1170 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: sequential_ops @ 0x1180 */
__int64 __fastcall sequential_ops(int a1, int a2, int a3)
{
  return (unsigned int)(2 * (a2 + a1) - a3);
}


/* Function: single_if @ 0x11B0 */
__int64 __fastcall single_if(int a1)
{
  unsigned int v2; // [rsp+0h] [rbp-4h]

  v2 = a1;
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  return v2;
}


/* Function: if_else @ 0x11D0 */
_BOOL8 __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x1200 */
__int64 __fastcall nested_if_2(int a1, int a2)
{
  if ( a1 <= 0 )
  {
    return 0;
  }
  else if ( a2 <= 0 )
  {
    return (unsigned int)a1;
  }
  else
  {
    return (unsigned int)(a2 + a1);
  }
}


/* Function: nested_if_deep @ 0x1250 */
__int64 __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  if ( a1 <= 0 )
  {
    return 0;
  }
  else if ( a2 <= 0 )
  {
    return 1;
  }
  else if ( a3 <= 0 )
  {
    return 2;
  }
  else if ( a4 <= 0 )
  {
    return 3;
  }
  else if ( a5 <= 0 )
  {
    return 4;
  }
  else
  {
    return 5;
  }
}


/* Function: if_elseif_chain @ 0x12E0 */
__int64 __fastcall if_elseif_chain(int a1)
{
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      return 20;
    }
    else if ( a1 == 2 )
    {
      return 30;
    }
    else
    {
      return (unsigned int)-1;
    }
  }
  else
  {
    return 10;
  }
}


/* Function: if_elseif_long @ 0x1340 */
__int64 __fastcall if_elseif_long(int a1)
{
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        return 200;
      case 2:
        return 300;
      case 3:
        return 400;
      case 4:
        return 500;
      default:
        return (unsigned int)-1;
    }
  }
  else
  {
    return 100;
  }
}


/* Function: switch_small @ 0x13D0 */
__int64 __fastcall switch_small(int a1)
{
  unsigned int v2; // [rsp+14h] [rbp-4h]

  switch ( a1 )
  {
    case 0:
      v2 = 15;
      break;
    case 1:
      v2 = 5;
      break;
    case 2:
      v2 = 50;
      break;
    case 3:
      v2 = 2;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}


/* Function: switch_large @ 0x1450 */
__int64 __fastcall switch_large(int a1)
{
  unsigned int v2; // [rsp+Ch] [rbp-4h]

  switch ( a1 )
  {
    case 0:
      v2 = 0;
      break;
    case 1:
      v2 = 10;
      break;
    case 2:
      v2 = 20;
      break;
    case 3:
      v2 = 30;
      break;
    case 4:
      v2 = 40;
      break;
    case 5:
      v2 = 50;
      break;
    case 6:
      v2 = 60;
      break;
    case 7:
      v2 = 70;
      break;
    case 8:
      v2 = 80;
      break;
    case 9:
      v2 = 90;
      break;
    default:
      v2 = -1;
      break;
  }
  return v2;
}


/* Function: switch_default @ 0x1500 */
__int64 __fastcall switch_default(int a1)
{
  switch ( a1 )
  {
    case 1:
      return 100;
    case 2:
      return 200;
    case 3:
      return 300;
    default:
      return 0;
  }
}


/* Function: switch_fallthrough @ 0x1570 */
__int64 __fastcall switch_fallthrough(int a1)
{
  int v2; // [rsp+4h] [rbp-8h]

  v2 = 0;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
    {
      if ( a1 != 3 )
        return (unsigned int)-1;
      v2 = 12;
    }
    v2 += 2 * a1;
  }
  return (unsigned int)(v2 + a1);
}


/* Function: loop_for_fixed @ 0x15F0 */
__int64 __fastcall loop_for_fixed(int a1)
{
  int i; // [rsp+0h] [rbp-Ch]
  unsigned int v3; // [rsp+4h] [rbp-8h]

  v3 = 0;
  for ( i = 0; i < a1; ++i )
    v3 += i;
  return v3;
}


/* Function: loop_while @ 0x1630 */
__int64 __fastcall loop_while(int a1)
{
  int v3; // [rsp+4h] [rbp-8h]

  v3 = 0;
  while ( a1 )
  {
    a1 /= 10;
    ++v3;
  }
  if ( v3 <= 0 )
    return 1;
  else
    return (unsigned int)v3;
}


/* Function: loop_dowhile @ 0x1690 */
__int64 __fastcall loop_dowhile(int a1)
{
  unsigned int v2; // [rsp+0h] [rbp-8h]

  v2 = 0;
  do
  {
    a1 /= 10;
    ++v2;
  }
  while ( a1 );
  return v2;
}


/* Function: loop_nested @ 0x16D0 */
__int64 __fastcall loop_nested(int a1, int a2)
{
  int j; // [rsp+0h] [rbp-14h]
  int i; // [rsp+4h] [rbp-10h]
  unsigned int v5; // [rsp+8h] [rbp-Ch]

  v5 = 0;
  for ( i = 0; i < a1; ++i )
  {
    for ( j = 0; j < a2; ++j )
      ++v5;
  }
  return v5;
}


/* Function: loop_break @ 0x1740 */
__int64 __fastcall loop_break(int a1)
{
  int i; // [rsp+0h] [rbp-28h]
  _QWORD v3[2]; // [rsp+8h] [rbp-20h]
  int v4; // [rsp+18h] [rbp-10h]
  int v5; // [rsp+20h] [rbp-8h]

  v5 = a1;
  v3[0] = 0x140000000ALL;
  v3[1] = 0x280000001ELL;
  v4 = 50;
  for ( i = 0; i < 5; ++i )
  {
    if ( *((_DWORD *)v3 + i) == v5 )
      return (unsigned int)i;
  }
  return (unsigned int)-1;
}


/* Function: loop_continue @ 0x17C0 */
__int64 __fastcall loop_continue(int a1)
{
  int i; // [rsp+0h] [rbp-Ch]
  unsigned int v3; // [rsp+4h] [rbp-8h]

  v3 = 0;
  for ( i = 1; i <= a1; ++i )
  {
    if ( i % 2 )
      v3 += i;
  }
  return v3;
}


/* Function: goto_forward @ 0x1820 */
__int64 __fastcall goto_forward(int a1)
{
  int v2; // [rsp+0h] [rbp-8h]

  if ( a1 <= 0 )
    v2 = a1;
  else
    v2 = a1 * a1;
  return (unsigned int)(2 * v2);
}


/* Function: goto_backward @ 0x1860 */
__int64 __fastcall goto_backward(int a1)
{
  int i; // [rsp+0h] [rbp-10h]
  unsigned int v3; // [rsp+4h] [rbp-Ch]

  if ( a1 > 0 )
  {
    v3 = 1;
    for ( i = 1; i <= a1; ++i )
      v3 *= i;
    return v3;
  }
  else
  {
    return 1;
  }
}


/* Function: ternary_op @ 0x18C0 */
__int64 __fastcall ternary_op(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}


/* Function: test_control_flow_l1 @ 0x18F0 */
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

  printf(format);
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
  v25 = ternary_op(0xAu, 5u);
  printf("CF-L1-20 (ternary_op): %d\n", v25);
  v26 = ternary_op(3u, 8u);
  return printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x1C00 */
__int64 __fastcall loop_multi_exit(int a1)
{
  int j; // [rsp+8h] [rbp-48h]
  int i; // [rsp+Ch] [rbp-44h]
  _OWORD dest[3]; // [rsp+10h] [rbp-40h] BYREF
  int v5; // [rsp+48h] [rbp-8h]

  v5 = a1;
  memcpy(dest, &unk_30A0, sizeof(dest));
  for ( i = 0; i < 3; ++i )
  {
    for ( j = 0; j < 4; ++j )
    {
      if ( *((_DWORD *)&dest[i] + j) == v5 )
        return (unsigned int)(j + 10 * i);
    }
  }
  return (unsigned int)-1;
}


/* Function: infinite_loop @ 0x1CB0 */
__int64 __fastcall infinite_loop(_DWORD *a1)
{
  unsigned int v2; // [rsp+0h] [rbp-Ch]

  v2 = 0;
  while ( *a1 != 1 )
  {
    if ( (int)++v2 > 1000 )
    {
      *a1 = 1;
      return v2;
    }
  }
  return v2;
}


/* Function: multi_return @ 0x1D10 */
__int64 __fastcall multi_return(int a1)
{
  if ( a1 >= 0 )
  {
    if ( 2 * a1 <= 100 )
    {
      if ( a1 % 2 )
        return (unsigned int)(a1 + 1);
      else
        return (unsigned int)(2 * a1);
    }
    else
    {
      return (unsigned int)-2;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
}


/* Function: conditional_return @ 0x1D80 */
__int64 __fastcall conditional_return(int a1)
{
  if ( a1 <= 0 )
  {
    if ( a1 >= 0 )
      return 0;
    else
      return (unsigned int)-a1;
  }
  else
  {
    return (unsigned int)(2 * a1);
  }
}


/* Function: duffs_device @ 0x1DD0 */
__int64 __fastcall duffs_device(_DWORD *a1, int *a2, int a3)
{
  int v3; // eax
  int *v4; // rax
  int v5; // ecx
  _DWORD *v6; // rax
  int *v7; // rax
  int v8; // ecx
  _DWORD *v9; // rax
  int *v10; // rax
  int v11; // ecx
  _DWORD *v12; // rax
  int *v13; // rax
  int v14; // ecx
  _DWORD *v15; // rax
  int *v16; // rax
  int v17; // ecx
  _DWORD *v18; // rax
  int *v19; // rax
  int v20; // ecx
  _DWORD *v21; // rax
  int *v22; // rax
  int v23; // ecx
  _DWORD *v24; // rax
  int *v25; // rax
  int v26; // ecx
  _DWORD *v27; // rax
  int v29; // [rsp+8h] [rbp-20h]

  if ( a3 > 0 )
  {
    v3 = a3 + 7;
    if ( a3 + 7 < 0 )
      v3 = a3 + 14;
    v29 = v3 >> 3;
    switch ( a3 % 8 )
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
          v8 = *v7;
          v9 = a1++;
          *v9 = v8;
LABEL_8:
          v10 = a2++;
          v11 = *v10;
          v12 = a1++;
          *v12 = v11;
LABEL_9:
          v13 = a2++;
          v14 = *v13;
          v15 = a1++;
          *v15 = v14;
LABEL_10:
          v16 = a2++;
          v17 = *v16;
          v18 = a1++;
          *v18 = v17;
LABEL_11:
          v19 = a2++;
          v20 = *v19;
          v21 = a1++;
          *v21 = v20;
LABEL_12:
          v22 = a2++;
          v23 = *v22;
          v24 = a1++;
          *v24 = v23;
LABEL_13:
          v25 = a2++;
          v26 = *v25;
          v27 = a1++;
          *v27 = v26;
          if ( --v29 <= 0 )
            break;
LABEL_6:
          v4 = a2++;
          v5 = *v4;
          v6 = a1++;
          *v6 = v5;
        }
        break;
      default:
        break;
    }
    return (unsigned int)a3;
  }
  else
  {
    return (unsigned int)-1;
  }
}


/* Function: loop_complex_cond @ 0x1F80 */
__int64 __fastcall loop_complex_cond(int a1)
{
  bool v2; // [rsp+1h] [rbp-11h]
  int i; // [rsp+2h] [rbp-10h]
  int v5; // [rsp+Ah] [rbp-8h]

  v5 = 0;
  for ( i = 0; ; ++i )
  {
    v2 = 0;
    if ( v5 < a1 )
    {
      v2 = 0;
      if ( i < 10 )
        v2 = a1 > 0;
    }
    if ( !v2 )
      break;
    v5 += 2;
    --a1;
  }
  return (unsigned int)(i + a1 + v5);
}


/* Function: loop_modify_var @ 0x2000 */
__int64 __fastcall loop_modify_var(int a1)
{
  int i; // [rsp+0h] [rbp-Ch]
  unsigned int v3; // [rsp+4h] [rbp-8h]

  v3 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v3 += i;
    if ( i > 5 )
      i += 2;
  }
  return v3;
}


/* Function: loop_external_state @ 0x2060 */
__int64 __fastcall loop_external_state(_DWORD *a1)
{
  int i; // [rsp+0h] [rbp-Ch]

  for ( i = 0; i <= 100; ++i )
  {
    if ( *a1 )
      break;
  }
  return (unsigned int)i;
}


/* Function: recursion_factorial @ 0x20A0 */
__int64 __fastcall recursion_factorial(int a1)
{
  if ( a1 > 1 )
    return (unsigned int)(recursion_factorial((unsigned int)(a1 - 1)) * a1);
  else
    return 1;
}


/* Function: tail_recursion @ 0x20F0 */
__int64 __fastcall tail_recursion(int a1, unsigned int a2)
{
  if ( a1 > 1 )
    return (unsigned int)tail_recursion((unsigned int)(a1 - 1), a2 * a1);
  else
    return a2;
}


/* Function: indirect_recursion_a @ 0x2140 */
__int64 __fastcall indirect_recursion_a(signed int a1, int a2)
{
  if ( a2 > 0 )
  {
    if ( a1 % 2 )
      return (unsigned int)indirect_recursion_b((unsigned int)(3 * a1 + 1), (unsigned int)(a2 - 1));
    else
      return (unsigned int)indirect_recursion_b((unsigned int)(a1 / 2), (unsigned int)(a2 - 1));
  }
  else
  {
    return (unsigned int)a1;
  }
}


/* Function: indirect_recursion_b @ 0x21C0 */
__int64 __fastcall indirect_recursion_b(unsigned int a1, int a2)
{
  if ( a2 > 0 )
    return (unsigned int)indirect_recursion_a(a1 + 1, a2 - 1);
  else
    return a1;
}


/* Function: call_func_ptr @ 0x2200 */
__int64 __fastcall call_func_ptr(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x2220 */
__int64 __fastcall call_func_ptr_array(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(); // [rsp+0h] [rbp-30h]
  __int64 (__fastcall *v8)(); // [rsp+8h] [rbp-28h]
  __int64 (__fastcall *v9)(int); // [rsp+10h] [rbp-20h]
  unsigned int v10; // [rsp+24h] [rbp-Ch]
  int v11; // [rsp+28h] [rbp-8h]

  v11 = a1;
  v10 = a2;
  v7 = double_value;
  v8 = triple_value;
  v9 = recursion_factorial;
  if ( a1 >= 0 && v11 < 3 )
    return ((unsigned int (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(), __int64 (__fastcall *)(), __int64 (__fastcall *)(int)))*(&v7 + v11))(
             v10,
             a2,
             a3,
             a4,
             a5,
             a6,
             v7,
             v8,
             v9);
  else
    return (unsigned int)-1;
}


/* Function: double_value @ 0x2290 */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x22A0 */
__int64 __fastcall triple_value(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: call_virtual_func @ 0x22B0 */
__int64 __fastcall call_virtual_func(__int64 a1, int a2)
{
  return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x22D0 */
__int64 __fastcall process_with_callback(__int64 a1, int a2, __int64 (__fastcall *a3)(_QWORD))
{
  int i; // [rsp+0h] [rbp-20h]
  unsigned int v5; // [rsp+4h] [rbp-1Ch]

  v5 = 0;
  for ( i = 0; i < a2; ++i )
    v5 += a3(*(unsigned int *)(a1 + 4LL * i));
  return v5;
}


/* Function: test_control_flow_l2 @ 0x2330 */
int test_control_flow_l2()
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
  int v12; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  int v25; // eax
  _QWORD v27[2]; // [rsp+0h] [rbp-70h] BYREF
  int v28; // [rsp+10h] [rbp-60h]
  int v29; // [rsp+1Ch] [rbp-54h] BYREF
  _DWORD s[8]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v31[5]; // [rsp+40h] [rbp-30h] BYREF
  int v32; // [rsp+6Ch] [rbp-4h] BYREF

  printf(asc_3352);
  v0 = loop_multi_exit(7);
  printf("CF-L2-01 (loop_multi_exit): %d\n", v0);
  v32 = 0;
  v1 = infinite_loop(&v32);
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
  v31[0] = 0x200000001LL;
  v31[1] = 0x400000003LL;
  v31[2] = 0x600000005LL;
  v31[3] = 0x800000007LL;
  memset(s, 0, sizeof(s));
  v7 = duffs_device(s, (int *)v31, 8);
  printf("CF-L2-05 (duffs_device): %d\n", v7);
  v8 = loop_complex_cond(10);
  printf("CF-L2-06 (loop_complex_cond): %d\n", v8);
  v9 = loop_modify_var(10);
  printf("CF-L2-07 (loop_modify_var): %d\n", v9);
  v29 = 0;
  v10 = loop_external_state(&v29);
  printf("CF-L2-08 (loop_external_state): %d\n", v10);
  v11 = recursion_factorial(5);
  printf("CF-L2-09 (recursion_factorial): %d\n", v11);
  v12 = tail_recursion(5, 1u);
  printf("CF-L2-10 (tail_recursion): %d\n", v12);
  v13 = indirect_recursion_a(10, 3);
  printf("CF-L2-11 (indirect_recursion): %d\n", v13);
  v14 = call_func_ptr((__int64 (__fastcall *)(_QWORD))double_value, 5u);
  printf("CF-L2-12 (call_func_ptr): %d\n", v14);
  v19 = call_func_ptr_array(0, 5, v15, v16, v17, v18);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v19);
  v24 = call_func_ptr_array(2, 5, v20, v21, v22, v23);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v24);
  v27[0] = 0x200000001LL;
  v27[1] = 0x400000003LL;
  v28 = 5;
  v25 = process_with_callback((__int64)v27, 5, (__int64 (__fastcall *)(_QWORD))double_value);
  return printf("CF-L2-15 (process_with_callback): %d\n", v25);
}


/* Function: non_local_jump @ 0x25C0 */
__int64 __fastcall non_local_jump(int a1)
{
  if ( _setjmp(jump_buffer) )
  {
    return (unsigned int)-1;
  }
  else
  {
    if ( a1 < 0 )
      longjmp(jump_buffer, 1);
    if ( a1 > 100 )
      longjmp(jump_buffer, 2);
    return (unsigned int)(2 * a1);
  }
}


/* Function: cpp_exception @ 0x2640 */
__int64 __fastcall cpp_exception(int a1)
{
  if ( a1 >= 0 )
  {
    if ( a1 <= 100 )
      return (unsigned int)(2 * a1);
    else
      return (unsigned int)-2;
  }
  else
  {
    return (unsigned int)-1;
  }
}


/* Function: large_jump_table @ 0x2690 */
__int64 __fastcall large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD dest[10]; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v5; // [rsp+50h] [rbp-10h]
  unsigned int v6; // [rsp+54h] [rbp-Ch]
  unsigned int v7; // [rsp+58h] [rbp-8h]

  v7 = a1;
  v6 = a2;
  v5 = a3;
  memcpy(dest, off_5D60, sizeof(dest));
  if ( v7 < 0xA )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))dest[v7])(v6, v5);
  else
    return (unsigned int)-1;
}


/* Function: op_add @ 0x2700 */
__int64 __fastcall op_add(int a1, int a2)
{
  return (unsigned int)(a2 + a1);
}


/* Function: op_sub @ 0x2720 */
__int64 __fastcall op_sub(int a1, int a2)
{
  return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x2740 */
__int64 __fastcall op_mul(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x2760 */
__int64 __fastcall op_div(int a1, int a2)
{
  if ( a2 )
    return (unsigned int)(a1 / a2);
  else
    return 0;
}


/* Function: op_mod @ 0x27A0 */
__int64 __fastcall op_mod(int a1, int a2)
{
  if ( a2 )
    return (unsigned int)(a1 % a2);
  else
    return 0;
}


/* Function: op_and @ 0x27E0 */
__int64 __fastcall op_and(unsigned int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x2800 */
__int64 __fastcall op_or(unsigned int a1, int a2)
{
  return a2 | a1;
}


/* Function: op_xor @ 0x2820 */
__int64 __fastcall op_xor(unsigned int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x2840 */
__int64 __fastcall op_shl(int a1, char a2)
{
  return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x2860 */
__int64 __fastcall op_shr(int a1, char a2)
{
  return (unsigned int)(a1 >> a2);
}


/* Function: conditional_func_ptr @ 0x2880 */
__int64 __fastcall conditional_func_ptr(int a1, int a2)
{
  if ( !a1 )
    return double_value(a2);
  if ( a1 == 1 )
    return triple_value(a2);
  return recursion_factorial(a2);
}


/* Function: state_machine @ 0x28F0 */
__int64 __fastcall state_machine(int a1, int a2)
{
  unsigned int v3; // [rsp+14h] [rbp-4h]

  switch ( a2 )
  {
    case 0:
      v3 = a1 == 1;
      break;
    case 1:
      if ( a1 == 2 )
      {
        v3 = 2;
      }
      else if ( a1 == 99 )
      {
        v3 = 3;
      }
      else
      {
        v3 = 1;
      }
      break;
    case 2:
      v3 = 2;
      break;
    case 3:
      if ( a1 )
        v3 = 3;
      else
        v3 = 0;
      break;
    default:
      v3 = 3;
      break;
  }
  return v3;
}


/* Function: fsm_func_table @ 0x29C0 */
__int64 __fastcall fsm_func_table(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 (__fastcall *v7)(); // [rsp+0h] [rbp-30h]
  __int64 (__fastcall *v8)(); // [rsp+8h] [rbp-28h]
  __int64 (__fastcall *v9)(); // [rsp+10h] [rbp-20h]
  __int64 (__fastcall *v10)(); // [rsp+18h] [rbp-18h]
  int v11; // [rsp+24h] [rbp-Ch]
  unsigned int v12; // [rsp+28h] [rbp-8h]

  v12 = a1;
  v11 = a2;
  v7 = state_idle;
  v8 = state_processing;
  v9 = state_done;
  v10 = state_error;
  if ( (int)a2 >= 0 && v11 < 4 )
    return ((unsigned int (__fastcall *)(_QWORD, __int64, __int64, __int64, __int64, __int64, __int64 (__fastcall *)(), __int64 (__fastcall *)(), __int64 (__fastcall *)(), __int64 (__fastcall *)()))*(&v7 + v11))(
             v12,
             a2,
             a3,
             a4,
             a5,
             a6,
             v7,
             v8,
             v9,
             v10);
  else
    return 3;
}


/* Function: state_idle @ 0x2A40 */
_BOOL8 __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x2A60 */
__int64 __fastcall state_processing(int a1)
{
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
}


/* Function: state_done @ 0x2AA0 */
__int64 state_done()
{
  return 2;
}


/* Function: state_error @ 0x2AB0 */
__int64 __fastcall state_error(int a1)
{
  __int64 result; // rax

  result = 3;
  if ( !a1 )
    return 0;
  return result;
}


/* Function: computed_goto @ 0x2AD0 */
__int64 __fastcall computed_goto(__int64 a1, int a2)
{
  _QWORD v3[5]; // [rsp+8h] [rbp-40h]
  int v4; // [rsp+34h] [rbp-14h]
  __int64 v5; // [rsp+38h] [rbp-10h]

  v5 = a1;
  v4 = a2;
  v3[0] = &loc_2B39;
  v3[1] = &loc_2B45;
  v3[2] = &loc_2B51;
  v3[3] = &loc_2B5D;
  if ( a2 >= 0 && v4 <= 3 )
    __asm { jmp     rax }
  return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x2B70 */
__int64 __fastcall obfuscated_cf(int a1)
{
  int v2; // [rsp+0h] [rbp-8h]

  v2 = a1;
  if ( a1 * a1 + 1 < 0 )
    v2 = 2 * a1 + 1;
  return (unsigned int)(2 * v2);
}


/* Function: opaque_predicate @ 0x2BB0 */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x2BF0 */
__int64 __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return (unsigned int)(3 * a1 + 1);
  else
    return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x2C30 */
int test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _QWORD v17[2]; // [rsp+0h] [rbp-10h] BYREF

  printf(asc_3546);
  v0 = non_local_jump(5);
  printf("CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  printf("CF-L3-01 (non_local_jump): %d\n", v1);
  v2 = cpp_exception(5);
  printf("CF-L3-02 (cpp_exception): %d\n", v2);
  v3 = cpp_exception(-5);
  printf("CF-L3-02 (cpp_exception): %d\n", v3);
  v4 = large_jump_table(0, 0xAu, 5u);
  printf("CF-L3-03 (large_jump_table): %d\n", v4);
  v5 = conditional_func_ptr(0, 5);
  printf("CF-L3-04 (conditional_func_ptr): %d\n", v5);
  v6 = state_machine(1, 0);
  printf("CF-L3-05 (state_machine): %d\n", v6);
  v11 = fsm_func_table(2u, 1, v7, v8, v9, v10);
  printf("CF-L3-06 (fsm_func_table): %d\n", v11);
  v17[0] = 0x100000000LL;
  v17[1] = 0x300000002LL;
  v12 = computed_goto((__int64)v17, 2);
  printf("CF-L3-07 (computed_goto): %d\n", v12);
  v13 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n", v13);
  v14 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n", v14);
  v15 = overlapped_code(5);
  return printf("CF-L3-10 (overlapped_code): %d\n", v15);
}


/* Function: main @ 0x2DB0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: .term_proc @ 0x2DD8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6130 */

/* FAILED to decompile: printf @ 0x6138 */

/* FAILED to decompile: memset @ 0x6140 */

/* FAILED to decompile: _setjmp @ 0x6148 */

/* FAILED to decompile: memcpy @ 0x6150 */

/* FAILED to decompile: longjmp @ 0x6158 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6160 */

/* FAILED to decompile: __gmon_start__ @ 0x6170 */

/* Total functions decompiled: 74, failed: 8 */
