/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_O0_no_g
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


/* Function: _start @ 0x10E0 */
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


/* Function: deregister_tm_clones @ 0x1110 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1140 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1180 */
void *_do_global_dtors_aux()
{
  void *result; // rax

  if ( !completed_0 )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    completed_0 = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x11C0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: sequential_ops @ 0x11C9 */
__int64 __fastcall sequential_ops(int a1, int a2, int a3)
{
  return (unsigned int)(2 * (a1 + a2) - a3);
}


/* Function: single_if @ 0x11FB */
__int64 __fastcall single_if(int a1)
{
  unsigned int v2; // [rsp+0h] [rbp-4h]

  v2 = a1;
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  return v2;
}


/* Function: if_else @ 0x1214 */
_BOOL8 __fastcall if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x1233 */
__int64 __fastcall nested_if_2(int a1, int a2)
{
  if ( a1 <= 0 )
    return 0;
  if ( a2 <= 0 )
    return (unsigned int)a1;
  return (unsigned int)(a1 + a2);
}


/* Function: nested_if_deep @ 0x1263 */
__int64 __fastcall nested_if_deep(int a1, int a2, int a3, int a4, int a5)
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


/* Function: if_elseif_chain @ 0x12C3 */
__int64 __fastcall if_elseif_chain(int a1)
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
  return 0xFFFFFFFFLL;
}


/* Function: if_elseif_long @ 0x12FC */
__int64 __fastcall if_elseif_long(int a1)
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
  return 0xFFFFFFFFLL;
}


/* Function: switch_small @ 0x134F */
__int64 __fastcall switch_small(int a1)
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
  return 0xFFFFFFFFLL;
}


/* Function: switch_large @ 0x13B9 */
__int64 __fastcall switch_large(int a1)
{
  __int64 result; // rax

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
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}


/* Function: switch_default @ 0x143B */
__int64 __fastcall switch_default(int a1)
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


/* Function: switch_fallthrough @ 0x147C */
__int64 __fastcall switch_fallthrough(int a1)
{
  int v2; // [rsp+10h] [rbp-4h]

  v2 = 0;
  if ( a1 == 3 )
  {
    v2 = 12;
LABEL_7:
    v2 += 2 * a1;
    return (unsigned int)(a1 + v2);
  }
  if ( a1 > 3 )
    return (unsigned int)-1;
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return (unsigned int)-1;
    goto LABEL_7;
  }
  return (unsigned int)(a1 + v2);
}


/* Function: loop_for_fixed @ 0x14CD */
__int64 __fastcall loop_for_fixed(int a1)
{
  unsigned int v2; // [rsp+Ch] [rbp-8h]
  int i; // [rsp+10h] [rbp-4h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
    v2 += i;
  return v2;
}


/* Function: loop_while @ 0x14FF */
__int64 __fastcall loop_while(int a1)
{
  __int64 result; // rax
  int v3; // [rsp+10h] [rbp-4h]

  v3 = 0;
  while ( a1 )
  {
    a1 /= 10;
    ++v3;
  }
  result = (unsigned int)v3;
  if ( v3 <= 0 )
    return 1;
  return result;
}


/* Function: loop_dowhile @ 0x154C */
__int64 __fastcall loop_dowhile(int a1)
{
  unsigned int v3; // [rsp+10h] [rbp-4h]

  v3 = 0;
  do
  {
    a1 /= 10;
    ++v3;
  }
  while ( a1 );
  return v3;
}


/* Function: loop_nested @ 0x158D */
__int64 __fastcall loop_nested(int a1, int a2)
{
  unsigned int v3; // [rsp+Ch] [rbp-Ch]
  int i; // [rsp+10h] [rbp-8h]
  int j; // [rsp+14h] [rbp-4h]

  v3 = 0;
  for ( i = 0; i < a1; ++i )
  {
    for ( j = 0; j < a2; ++j )
      ++v3;
  }
  return v3;
}


/* Function: loop_break @ 0x15D5 */
__int64 __fastcall loop_break(int a1)
{
  int i; // [rsp+18h] [rbp-28h]
  _DWORD v3[6]; // [rsp+20h] [rbp-20h]
  unsigned __int64 v4; // [rsp+38h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  v3[0] = 10;
  v3[1] = 20;
  v3[2] = 30;
  v3[3] = 40;
  v3[4] = 50;
  for ( i = 0; i < 5; ++i )
  {
    if ( a1 == v3[i] )
      return (unsigned int)i;
  }
  return 0xFFFFFFFFLL;
}


/* Function: loop_continue @ 0x1660 */
__int64 __fastcall loop_continue(int a1)
{
  unsigned int v2; // [rsp+Ch] [rbp-8h]
  int i; // [rsp+10h] [rbp-4h]

  v2 = 0;
  for ( i = 1; i <= a1; ++i )
  {
    if ( (i & 1) != 0 )
      v2 += i;
  }
  return v2;
}


/* Function: goto_forward @ 0x169F */
__int64 __fastcall goto_forward(int a1)
{
  int v2; // [rsp+10h] [rbp-4h]

  if ( a1 <= 0 )
    v2 = a1;
  else
    v2 = a1 * a1;
  return (unsigned int)(2 * v2);
}


/* Function: goto_backward @ 0x16C9 */
__int64 __fastcall goto_backward(int a1)
{
  unsigned int v2; // [rsp+Ch] [rbp-8h]
  int i; // [rsp+10h] [rbp-4h]

  if ( a1 <= 0 )
    return 1;
  v2 = 1;
  for ( i = 1; i <= a1; ++i )
    v2 *= i;
  return v2;
}


/* Function: ternary_op @ 0x170D */
__int64 __fastcall ternary_op(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a1;
  if ( (int)a2 >= (int)a1 )
    return a2;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1728 */
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
  v25 = ternary_op(0xAu, 5u);
  printf("CF-L1-20 (ternary_op): %d\n", v25);
  v26 = ternary_op(3u, 8u);
  return printf("CF-L1-20 (ternary_op): %d\n", v26);
}


/* Function: loop_multi_exit @ 0x1ADF */
__int64 __fastcall loop_multi_exit(int a1)
{
  int i; // [rsp+18h] [rbp-48h]
  int j; // [rsp+1Ch] [rbp-44h]
  _DWORD v4[14]; // [rsp+20h] [rbp-40h]
  unsigned __int64 v5; // [rsp+58h] [rbp-8h]

  v5 = __readfsqword(0x28u);
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
        return (unsigned int)(10 * i + j);
    }
  }
  return 0xFFFFFFFFLL;
}


/* Function: infinite_loop @ 0x1BC2 */
__int64 __fastcall infinite_loop(_DWORD *a1)
{
  unsigned int v2; // [rsp+14h] [rbp-4h]

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


/* Function: multi_return @ 0x1BFF */
__int64 __fastcall multi_return(int a1)
{
  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  if ( 2 * a1 > 100 )
    return 4294967294LL;
  if ( (a1 & 1) != 0 )
    return (unsigned int)(a1 + 1);
  return (unsigned int)(2 * a1);
}


/* Function: conditional_return @ 0x1C43 */
__int64 __fastcall conditional_return(int a1)
{
  if ( a1 > 0 )
    return (unsigned int)(2 * a1);
  if ( a1 >= 0 )
    return 0;
  return (unsigned int)-a1;
}


/* Function: duffs_device @ 0x1C6F */
__int64 __fastcall duffs_device(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // rdx
  _DWORD *v6; // rax
  _DWORD *v7; // rdx
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  _DWORD *v12; // rax
  _DWORD *v13; // rdx
  _DWORD *v14; // rax
  _DWORD *v15; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // rdx
  _DWORD *v18; // rax
  _DWORD *v19; // rdx
  _DWORD *v20; // rax
  int v24; // [rsp+20h] [rbp-4h]

  if ( a3 <= 0 )
    return 0xFFFFFFFFLL;
  v4 = a3 + 7;
  if ( a3 + 7 < 0 )
    v4 = a3 + 14;
  v24 = v4 >> 3;
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
        if ( --v24 <= 0 )
          break;
LABEL_6:
        v5 = a2++;
        v6 = a1++;
        *v6 = *v5;
      }
      break;
    default:
      return (unsigned int)a3;
  }
  return (unsigned int)a3;
}


/* Function: loop_complex_cond @ 0x1DD4 */
__int64 __fastcall loop_complex_cond(int a1)
{
  int v2; // [rsp+8h] [rbp-Ch]
  int i; // [rsp+10h] [rbp-4h]

  v2 = 0;
  for ( i = 0; v2 < a1 && i <= 9 && a1 > 0; ++i )
  {
    v2 += 2;
    --a1;
  }
  return (unsigned int)(a1 + v2 + i);
}


/* Function: loop_modify_var @ 0x1E24 */
__int64 __fastcall loop_modify_var(int a1)
{
  unsigned int v2; // [rsp+Ch] [rbp-8h]
  int i; // [rsp+10h] [rbp-4h]

  v2 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v2 += i;
    if ( i > 5 )
      i += 2;
  }
  return v2;
}


/* Function: loop_external_state @ 0x1E60 */
__int64 __fastcall loop_external_state(_DWORD *a1)
{
  int i; // [rsp+14h] [rbp-4h]

  for ( i = 0; i <= 100; ++i )
  {
    if ( *a1 )
      break;
  }
  return (unsigned int)i;
}


/* Function: recursion_factorial @ 0x1E91 */
__int64 __fastcall recursion_factorial(int a1)
{
  if ( a1 > 1 )
    return a1 * (unsigned int)recursion_factorial((unsigned int)(a1 - 1));
  else
    return 1;
}


/* Function: tail_recursion @ 0x1EC0 */
__int64 __fastcall tail_recursion(int a1, unsigned int a2)
{
  if ( a1 > 1 )
    return tail_recursion((unsigned int)(a1 - 1), a2 * a1);
  else
    return a2;
}


/* Function: indirect_recursion_a @ 0x1EF5 */
__int64 __fastcall indirect_recursion_a(unsigned int a1, int a2)
{
  if ( a2 <= 0 )
    return a1;
  if ( (a1 & 1) != 0 )
    return indirect_recursion_b(3 * a1 + 1, (unsigned int)(a2 - 1));
  return indirect_recursion_b((unsigned int)((int)a1 / 2), (unsigned int)(a2 - 1));
}


/* Function: indirect_recursion_b @ 0x1F56 */
__int64 __fastcall indirect_recursion_b(unsigned int a1, int a2)
{
  if ( a2 > 0 )
    return indirect_recursion_a(a1 + 1, a2 - 1);
  else
    return a1;
}


/* Function: call_func_ptr @ 0x1F8A */
__int64 __fastcall call_func_ptr(__int64 (__fastcall *a1)(_QWORD), unsigned int a2)
{
  return a1(a2);
}


/* Function: double_value @ 0x1FAA */
__int64 __fastcall double_value(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: triple_value @ 0x1FBC */
__int64 __fastcall triple_value(int a1)
{
  return (unsigned int)(3 * a1);
}


/* Function: call_func_ptr_array @ 0x1FD2 */
__int64 __fastcall call_func_ptr_array(unsigned int a1, unsigned int a2)
{
  _QWORD v3[4]; // [rsp+10h] [rbp-20h]

  v3[3] = __readfsqword(0x28u);
  v3[0] = double_value;
  v3[1] = triple_value;
  v3[2] = recursion_factorial;
  if ( a1 <= 2 )
    return ((__int64 (__fastcall *)(_QWORD))v3[a1])(a2);
  else
    return 0xFFFFFFFFLL;
}


/* Function: call_virtual_func @ 0x204E */
__int64 __fastcall call_virtual_func(__int64 a1, int a2)
{
  return (unsigned int)(2 * a2);
}


/* Function: process_with_callback @ 0x2064 */
__int64 __fastcall process_with_callback(__int64 a1, int a2, __int64 (__fastcall *a3)(_QWORD))
{
  unsigned int v5; // [rsp+28h] [rbp-8h]
  int i; // [rsp+2Ch] [rbp-4h]

  v5 = 0;
  for ( i = 0; i < a2; ++i )
    v5 += a3(*(unsigned int *)(4LL * i + a1));
  return v5;
}


/* Function: test_control_flow_l2 @ 0x20BD */
unsigned __int64 test_control_flow_l2()
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
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v19; // [rsp+8h] [rbp-78h] BYREF
  int v20; // [rsp+Ch] [rbp-74h] BYREF
  _DWORD v21[8]; // [rsp+10h] [rbp-70h] BYREF
  _DWORD v22[8]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v23[5]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-8h]

  v24 = __readfsqword(0x28u);
  puts(asc_32D8);
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
  memset(v23, 0, 32);
  v7 = duffs_device(v23, v22, 8);
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
  v12 = tail_recursion(5, 1u);
  printf("CF-L2-10 (tail_recursion): %d\n", v12);
  v13 = indirect_recursion_a(0xAu, 3);
  printf("CF-L2-11 (indirect_recursion): %d\n", v13);
  v14 = call_func_ptr((__int64 (__fastcall *)(_QWORD))double_value, 5u);
  printf("CF-L2-12 (call_func_ptr): %d\n", v14);
  v15 = call_func_ptr_array(0, 5u);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v15);
  v16 = call_func_ptr_array(2u, 5u);
  printf("CF-L2-13 (call_func_ptr_array): %d\n", v16);
  v21[0] = 1;
  v21[1] = 2;
  v21[2] = 3;
  v21[3] = 4;
  v21[4] = 5;
  v17 = process_with_callback((__int64)v21, 5, (__int64 (__fastcall *)(_QWORD))double_value);
  printf("CF-L2-15 (process_with_callback): %d\n", v17);
  return v24 - __readfsqword(0x28u);
}


/* Function: non_local_jump @ 0x2405 */
__int64 __fastcall non_local_jump(int a1)
{
  if ( _setjmp(jump_buffer) )
    return 0xFFFFFFFFLL;
  if ( a1 < 0 )
    longjmp(jump_buffer, 1);
  if ( a1 > 100 )
    longjmp(jump_buffer, 2);
  return (unsigned int)(2 * a1);
}


/* Function: cpp_exception @ 0x246D */
__int64 __fastcall cpp_exception(int a1)
{
  if ( a1 < 0 )
    return 0xFFFFFFFFLL;
  if ( a1 <= 100 )
    return (unsigned int)(2 * a1);
  return 4294967294LL;
}


/* Function: op_add @ 0x2499 */
__int64 __fastcall op_add(int a1, int a2)
{
  return (unsigned int)(a1 + a2);
}


/* Function: op_sub @ 0x24B1 */
__int64 __fastcall op_sub(int a1, int a2)
{
  return (unsigned int)(a1 - a2);
}


/* Function: op_mul @ 0x24C7 */
__int64 __fastcall op_mul(int a1, int a2)
{
  return (unsigned int)(a2 * a1);
}


/* Function: op_div @ 0x24DE */
__int64 __fastcall op_div(int a1, int a2)
{
  if ( a2 )
    return (unsigned int)(a1 / a2);
  else
    return 0;
}


/* Function: op_mod @ 0x2502 */
__int64 __fastcall op_mod(int a1, int a2)
{
  if ( a2 )
    return (unsigned int)(a1 % a2);
  else
    return 0;
}


/* Function: op_and @ 0x2528 */
__int64 __fastcall op_and(unsigned int a1, int a2)
{
  return a2 & a1;
}


/* Function: op_or @ 0x253E */
__int64 __fastcall op_or(unsigned int a1, int a2)
{
  return a2 | a1;
}


/* Function: op_xor @ 0x2554 */
__int64 __fastcall op_xor(unsigned int a1, int a2)
{
  return a2 ^ a1;
}


/* Function: op_shl @ 0x256A */
__int64 __fastcall op_shl(int a1, char a2)
{
  return (unsigned int)(a1 << a2);
}


/* Function: op_shr @ 0x2586 */
__int64 __fastcall op_shr(int a1, char a2)
{
  return (unsigned int)(a1 >> a2);
}


/* Function: large_jump_table @ 0x25A2 */
__int64 __fastcall large_jump_table(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _QWORD v4[12]; // [rsp+10h] [rbp-60h]

  v4[11] = __readfsqword(0x28u);
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
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))v4[a1])(a2, a3);
  else
    return 0xFFFFFFFFLL;
}


/* Function: conditional_func_ptr @ 0x2673 */
__int64 __fastcall conditional_func_ptr(int a1, int a2)
{
  if ( !a1 )
    return double_value(a2);
  if ( a1 == 1 )
    return triple_value(a2);
  return recursion_factorial(a2);
}


/* Function: state_machine @ 0x26C3 */
__int64 __fastcall state_machine(int a1, int a2)
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


/* Function: state_idle @ 0x274E */
_BOOL8 __fastcall state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x2765 */
__int64 __fastcall state_processing(int a1)
{
  if ( a1 == 2 )
    return 2;
  if ( a1 == 99 )
    return 3;
  return 1;
}


/* Function: state_done @ 0x2791 */
__int64 state_done()
{
  return 2;
}


/* Function: state_error @ 0x27A3 */
__int64 __fastcall state_error(int a1)
{
  if ( a1 )
    return 3;
  else
    return 0;
}


/* Function: fsm_func_table @ 0x27C2 */
__int64 __fastcall fsm_func_table(unsigned int a1, unsigned int a2)
{
  _QWORD v3[6]; // [rsp+10h] [rbp-30h]

  v3[5] = __readfsqword(0x28u);
  v3[0] = state_idle;
  v3[1] = state_processing;
  v3[2] = state_done;
  v3[3] = state_error;
  if ( a2 < 4 )
    return ((__int64 (__fastcall *)(_QWORD))v3[a2])(a1);
  else
    return 3;
}


/* Function: computed_goto @ 0x2849 */
__int64 __fastcall computed_goto(__int64 a1, unsigned int a2)
{
  _QWORD v3[6]; // [rsp+10h] [rbp-30h]

  v3[5] = __readfsqword(0x28u);
  v3[0] = &loc_28B7;
  v3[1] = &loc_28C2;
  v3[2] = &loc_28CD;
  v3[3] = &loc_28D8;
  if ( a2 < 4 )
    __asm { jmp     rax }
  return 0xFFFFFFFFLL;
}


/* Function: obfuscated_cf @ 0x28F7 */
__int64 __fastcall obfuscated_cf(int a1)
{
  int v2; // [rsp+10h] [rbp-4h]

  v2 = a1;
  if ( a1 * a1 < -1 )
    v2 = 2 * a1 + 1;
  return (unsigned int)(2 * v2);
}


/* Function: opaque_predicate @ 0x2926 */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x2950 */
__int64 __fastcall overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return (unsigned int)(3 * a1 + 1);
  else
    return (unsigned int)(a1 / 2);
}


/* Function: test_control_flow_l3 @ 0x2981 */
unsigned __int64 test_control_flow_l3()
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
  _DWORD v13[6]; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-8h]

  v14 = __readfsqword(0x28u);
  puts(asc_34F0);
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
  v7 = fsm_func_table(2u, 1u);
  printf("CF-L3-06 (fsm_func_table): %d\n", v7);
  v13[0] = 0;
  v13[1] = 1;
  v13[2] = 2;
  v13[3] = 3;
  v8 = computed_goto((__int64)v13, 2u);
  printf("CF-L3-07 (computed_goto): %d\n", v8);
  v9 = obfuscated_cf(5);
  printf("CF-L3-08 (obfuscated_cf): %d\n", v9);
  v10 = opaque_predicate(5);
  printf("CF-L3-09 (opaque_predicate): %d\n", v10);
  v11 = overlapped_code(5);
  printf("CF-L3-10 (overlapped_code): %d\n", v11);
  return v14 - __readfsqword(0x28u);
}


/* Function: main @ 0x2B7E */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: .term_proc @ 0x2BAC */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6110 */

/* FAILED to decompile: puts @ 0x6118 */

/* FAILED to decompile: __stack_chk_fail @ 0x6120 */

/* FAILED to decompile: printf @ 0x6128 */

/* FAILED to decompile: _setjmp @ 0x6130 */

/* FAILED to decompile: longjmp @ 0x6138 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6140 */

/* FAILED to decompile: __gmon_start__ @ 0x6150 */

/* Total functions decompiled: 79, failed: 8 */
