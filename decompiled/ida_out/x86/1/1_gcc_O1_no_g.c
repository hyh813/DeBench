/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/1/1_gcc_O1_no_g
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


/* Function: recursion_factorial @ 0x1281 */
int __cdecl recursion_factorial(int a1)
{
  int result; // eax

  result = 1;
  if ( a1 > 1 )
    return a1 * recursion_factorial(a1 - 1);
  return result;
}


/* Function: double_value @ 0x12AE */
int __cdecl double_value(int a1)
{
  return 2 * a1;
}


/* Function: triple_value @ 0x12B9 */
int __cdecl triple_value(int a1)
{
  return 3 * a1;
}


/* Function: op_add @ 0x12C5 */
int __cdecl op_add(int a1, int a2)
{
  return a1 + a2;
}


/* Function: op_sub @ 0x12D2 */
int __cdecl op_sub(int a1, int a2)
{
  return a1 - a2;
}


/* Function: op_mul @ 0x12DF */
int __cdecl op_mul(int a1, int a2)
{
  return a1 * a2;
}


/* Function: op_div @ 0x12ED */
int __cdecl op_div(int a1, int a2)
{
  int v2; // ecx

  v2 = a2;
  if ( a2 )
    return a1 / a2;
  return v2;
}


/* Function: op_mod @ 0x1305 */
int __cdecl op_mod(int a1, int a2)
{
  int v2; // edx

  v2 = a2;
  if ( a2 )
    return a1 % a2;
  return v2;
}


/* Function: op_and @ 0x131D */
int __cdecl op_and(int a1, int a2)
{
  return a1 & a2;
}


/* Function: op_or @ 0x132A */
int __cdecl op_or(__int64 a1)
{
  return a1 | HIDWORD(a1);
}


/* Function: op_xor @ 0x1337 */
int __cdecl op_xor(int a1, int a2)
{
  return a1 ^ a2;
}


/* Function: op_shl @ 0x1344 */
int __cdecl op_shl(int a1, char a2)
{
  return a1 << a2;
}


/* Function: op_shr @ 0x1353 */
int __cdecl op_shr(int a1, char a2)
{
  return a1 >> a2;
}


/* Function: state_idle @ 0x1362 */
_BOOL4 __cdecl state_idle(int a1)
{
  return a1 == 1;
}


/* Function: state_processing @ 0x1372 */
int __cdecl state_processing(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 != 2 )
    return 2 * (a1 == 99) + 1;
  return result;
}


/* Function: state_done @ 0x138D */
int state_done()
{
  return 2;
}


/* Function: state_error @ 0x1397 */
int __cdecl state_error(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x13AA */
int __cdecl sequential_ops(int a1, int a2, int a3)
{
  return 2 * (a1 + a2) - a3;
}


/* Function: single_if @ 0x13BD */
int __cdecl single_if(int a1)
{
  int result; // eax

  result = 2 * a1;
  if ( a1 <= 0 )
    return a1;
  return result;
}


/* Function: if_else @ 0x13CE */
_BOOL4 __cdecl if_else(int a1)
{
  return a1 > 0;
}


/* Function: nested_if_2 @ 0x13DE */
int __cdecl nested_if_2(int a1, int a2)
{
  int result; // eax

  result = 0;
  if ( a1 > 0 )
  {
    result = a1 + a2;
    if ( a2 <= 0 )
      return a1;
  }
  return result;
}


/* Function: nested_if_deep @ 0x13FC */
int __cdecl nested_if_deep(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax

  result = 0;
  if ( a1 > 0 )
  {
    result = 1;
    if ( a2 > 0 )
    {
      if ( a3 <= 0 )
      {
        return 2;
      }
      else if ( a4 <= 0 )
      {
        return 3;
      }
      else
      {
        return (a5 > 0) + 4;
      }
    }
  }
  return result;
}


/* Function: if_elseif_chain @ 0x1441 */
int __cdecl if_elseif_chain(int a1)
{
  int result; // eax

  result = 10;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      return 20;
    }
    else
    {
      result = 30;
      if ( a1 != 2 )
        return -1;
    }
  }
  return result;
}


/* Function: if_elseif_long @ 0x146E */
int __cdecl if_elseif_long(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 100;
      break;
    case 1:
      result = 200;
      break;
    case 2:
      result = 300;
      break;
    case 3:
      result = 400;
      break;
    case 4:
      result = 500;
      break;
    default:
      result = -1;
      break;
  }
  return result;
}


/* Function: switch_small @ 0x14B3 */
int __cdecl switch_small(int a1)
{
  int result; // eax

  if ( a1 == 2 )
    return 50;
  if ( a1 > 2 )
    return 3 * (a1 == 3) - 1;
  result = 15;
  if ( a1 )
  {
    result = -1;
    if ( a1 == 1 )
      return 5;
  }
  return result;
}


/* Function: switch_large @ 0x14F0 */
int __cdecl switch_large(int a1)
{
  int result; // eax

  result = a1;
  switch ( a1 )
  {
    case 0:
      return result;
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


/* Function: switch_default @ 0x154E */
int __cdecl switch_default(int a1)
{
  int result; // eax

  result = 200;
  if ( a1 != 2 )
  {
    result = 300;
    if ( a1 != 3 )
    {
      result = 0;
      if ( a1 == 1 )
        return 100;
    }
  }
  return result;
}


/* Function: switch_fallthrough @ 0x157B */
int __cdecl switch_fallthrough(int a1)
{
  int v2; // eax
  int v3; // eax

  if ( a1 == 2 )
  {
    v2 = 0;
LABEL_7:
    v3 = v2 + 2 * a1;
    return a1 + v3;
  }
  if ( a1 == 3 )
  {
    v2 = 12;
    goto LABEL_7;
  }
  if ( a1 != 1 )
    return -1;
  v3 = 0;
  return a1 + v3;
}


/* Function: loop_for_fixed @ 0x15B1 */
int __cdecl loop_for_fixed(int a1)
{
  int v1; // eax
  int v2; // edx

  if ( a1 <= 0 )
    return 0;
  v1 = 0;
  v2 = 0;
  do
    v2 += v1++;
  while ( a1 != v1 );
  return v2;
}


/* Function: loop_while @ 0x15DA */
int __cdecl loop_while(int a1)
{
  int v1; // ecx
  int v2; // ebx
  int result; // eax

  v1 = a1;
  if ( a1 )
  {
    v2 = 0;
    do
    {
      v1 /= 10;
      ++v2;
    }
    while ( v1 );
  }
  else
  {
    v2 = 0;
  }
  result = 1;
  if ( v2 > 0 )
    return v2;
  return result;
}


/* Function: loop_dowhile @ 0x1618 */
int __cdecl loop_dowhile(int a1)
{
  int v2; // ebx

  v2 = 0;
  do
  {
    a1 /= 10;
    ++v2;
  }
  while ( a1 );
  return v2;
}


/* Function: loop_nested @ 0x1646 */
int __cdecl loop_nested(int a1, int a2)
{
  int v2; // ecx
  int v3; // ebx
  int v5; // eax

  v2 = 0;
  v3 = 0;
  if ( a1 > 0 )
  {
    do
    {
      v5 = 0;
      if ( a2 > 0 )
      {
        do
          ++v5;
        while ( a2 != v5 );
        v3 += v5;
      }
      ++v2;
    }
    while ( a1 != v2 );
  }
  return v3;
}


/* Function: loop_break @ 0x1682 */
int __cdecl loop_break(int a1)
{
  int result; // eax
  _DWORD v2[9]; // [esp+8h] [ebp-24h]

  v2[5] = __readgsdword(0x14u);
  result = 0;
  v2[0] = 10;
  v2[1] = 20;
  v2[2] = 30;
  v2[3] = 40;
  v2[4] = 50;
  while ( v2[result] != a1 )
  {
    if ( ++result == 5 )
      return -1;
  }
  return result;
}


/* Function: loop_continue @ 0x16ED */
int __cdecl loop_continue(int a1)
{
  int v1; // eax
  int v2; // edx

  if ( a1 <= 0 )
    return 0;
  v1 = 1;
  v2 = 0;
  do
  {
    if ( (v1 & 1) != 0 )
      v2 += v1;
    ++v1;
  }
  while ( v1 != a1 + 1 );
  return v2;
}


/* Function: goto_forward @ 0x1721 */
int __cdecl goto_forward(int a1)
{
  int v1; // eax

  v1 = a1;
  if ( a1 > 0 )
    v1 = a1 * a1;
  return 2 * v1;
}


/* Function: goto_backward @ 0x1735 */
int __cdecl goto_backward(int a1)
{
  int v1; // edx
  int v2; // eax

  v1 = 1;
  if ( a1 > 0 )
  {
    v2 = 1;
    do
      v1 *= v2++;
    while ( v2 != a1 + 1 );
  }
  return v1;
}


/* Function: ternary_op @ 0x175B */
int __cdecl ternary_op(int a1, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 < a1 )
    return a1;
  return result;
}


/* Function: test_control_flow_l1 @ 0x176D */
int test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  puts(asc_3064);
  __printf_chk(1, "CF-L1-01 (sequential_ops): %d\n", 21);
  __printf_chk(1, "CF-L1-02 (single_if): %d\n", 20);
  __printf_chk(1, "CF-L1-02 (single_if): %d\n", -5);
  __printf_chk(1, "CF-L1-03 (if_else): %d\n", 1);
  __printf_chk(1, "CF-L1-03 (if_else): %d\n", 0);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 15);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 10);
  __printf_chk(1, "CF-L1-04 (nested_if_2): %d\n", 0);
  __printf_chk(1, "CF-L1-05 (nested_if_deep): %d\n", 5);
  __printf_chk(1, "CF-L1-06 (if_elseif_chain): %d\n", 20);
  __printf_chk(1, "CF-L1-07 (if_elseif_long): %d\n", 400);
  __printf_chk(1, "CF-L1-08 (switch_small): %d\n", 50);
  __printf_chk(1, "CF-L1-09 (switch_large): %d\n", 70);
  __printf_chk(1, "CF-L1-10 (switch_default): %d\n", 0);
  __printf_chk(1, "CF-L1-11 (switch_fallthrough): %d\n", 21);
  v0 = loop_for_fixed(10);
  __printf_chk(1, "CF-L1-12 (loop_for_fixed): %d\n", v0);
  v1 = loop_while(12345);
  __printf_chk(1, "CF-L1-13 (loop_while): %d\n", v1);
  v2 = loop_dowhile(9876);
  __printf_chk(1, "CF-L1-14 (loop_dowhile): %d\n", v2);
  v3 = loop_nested(3, 4);
  __printf_chk(1, "CF-L1-15 (loop_nested): %d\n", v3);
  v4 = loop_break(30);
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v4);
  v5 = loop_break(99);
  __printf_chk(1, "CF-L1-16 (loop_break): %d\n", v5);
  v6 = loop_continue(10);
  __printf_chk(1, "CF-L1-17 (loop_continue): %d\n", v6);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", 50);
  __printf_chk(1, "CF-L1-18 (goto_forward): %d\n", -6);
  v7 = goto_backward(5);
  __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", v7);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  return __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x19C5 */
int __cdecl loop_multi_exit(int a1)
{
  _DWORD *v1; // edx
  int v2; // ebx
  int i; // eax
  _DWORD v5[16]; // [esp+Ch] [ebp-40h] BYREF

  v5[12] = __readgsdword(0x14u);
  v5[0] = 1;
  v5[1] = 2;
  v5[2] = 3;
  v5[3] = 4;
  v5[4] = 5;
  v5[5] = 6;
  v5[6] = 7;
  v5[7] = 8;
  v5[8] = 9;
  v5[9] = 10;
  v5[10] = 11;
  v5[11] = 12;
  v1 = v5;
  v2 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v1[i] == a1 )
        return i + 10 * v2;
    }
    ++v2;
    v1 += 4;
    if ( v2 != 3 )
      continue;
    break;
  }
  return -1;
}


/* Function: infinite_loop @ 0x1A87 */
int __cdecl infinite_loop(_DWORD *a1)
{
  int result; // eax

  result = 0;
  while ( *a1 != 1 )
  {
    if ( ++result == 1001 )
    {
      *a1 = 1;
      return result;
    }
  }
  return result;
}


/* Function: multi_return @ 0x1AAC */
int __cdecl multi_return(int a1)
{
  int result; // eax

  if ( a1 < 0 )
    return -1;
  result = 2 * a1;
  if ( 2 * a1 > 100 )
    return -2;
  if ( (a1 & 1) != 0 )
    return a1 + 1;
  return result;
}


/* Function: conditional_return @ 0x1AD6 */
int __cdecl conditional_return(int a1)
{
  int result; // eax

  if ( a1 > 0 )
    return 2 * a1;
  result = 0;
  if ( a1 < 0 )
    return -a1;
  return result;
}


/* Function: duffs_device @ 0x1AF4 */
int __cdecl duffs_device(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // ebx
  int v5; // edx
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // esi
  _DWORD *v10; // edi
  _DWORD *v11; // esi
  _DWORD *v12; // edi
  _DWORD *v13; // esi

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( a3 <= 0 )
    return -1;
  v6 = a3 + 14;
  if ( a3 + 7 >= 0 )
    v6 = a3 + 7;
  v7 = v6 >> 3;
  switch ( a3 % 8 )
  {
    case 0:
      goto _L174;
    case 1:
      v12 = a2;
      v13 = a1;
      goto LABEL_11;
    case 2:
      goto _L172;
    case 3:
      v10 = a2;
      v11 = a1;
      goto LABEL_9;
    case 4:
      goto _L170;
    case 5:
      v8 = a2;
      v9 = a1;
      goto LABEL_7;
    case 6:
      goto _L168;
    case 7:
      while ( 1 )
      {
        *v3++ = *v4++;
_L168:
        v8 = v4 + 1;
        v9 = v3 + 1;
        *v3 = *v4;
LABEL_7:
        v4 = v8 + 1;
        v3 = v9 + 1;
        *v9 = *v8;
_L170:
        v10 = v4 + 1;
        v11 = v3 + 1;
        *v3 = *v4;
LABEL_9:
        v4 = v10 + 1;
        v3 = v11 + 1;
        *v11 = *v10;
_L172:
        v12 = v4 + 1;
        v13 = v3 + 1;
        *v3 = *v4;
LABEL_11:
        *v13 = *v12;
        if ( --v7 <= 0 )
          break;
        v4 = v12 + 1;
        v3 = v13 + 1;
_L174:
        *v3++ = *v4++;
      }
      break;
    default:
      return v5;
  }
  return v5;
}


/* Function: loop_complex_cond @ 0x1BBF */
int __cdecl loop_complex_cond(int a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // ebx
  int v4; // ecx

  if ( a1 <= 0 )
  {
    v1 = a1;
    v3 = 0;
    v2 = 0;
  }
  else
  {
    v1 = a1;
    v2 = 0;
    do
    {
      v2 += 2;
      --v1;
      v3 = a1 - v1;
      v4 = 0;
      if ( v2 >= 0 )
        v4 = v2;
    }
    while ( v1 > v4 && v3 <= 9 );
  }
  return v3 + v1 + v2;
}


/* Function: loop_modify_var @ 0x1C06 */
int __cdecl loop_modify_var(int a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // edx

  v1 = 0;
  v2 = 0;
  if ( a1 > 0 )
  {
    while ( 1 )
    {
      v3 = v2 + 1;
      if ( a1 <= v2 + 1 )
        break;
      v1 += v3;
      v2 += 3;
      if ( v3 <= 5 )
        v2 = v3;
    }
  }
  return v1;
}


/* Function: loop_external_state @ 0x1C35 */
int __cdecl loop_external_state(_DWORD *a1)
{
  int result; // eax

  for ( result = 0; result != 101; ++result )
  {
    if ( *a1 )
      break;
  }
  return result;
}


/* Function: tail_recursion @ 0x1C51 */
int __cdecl tail_recursion(int a1, int a2)
{
  int result; // eax

  result = a2;
  if ( a1 > 1 )
    return tail_recursion(a1 - 1, a1 * a2);
  return result;
}


/* Function: indirect_recursion_a @ 0x1C7E */
int __cdecl indirect_recursion_a(int a1, int a2)
{
  int result; // eax
  int v3; // eax

  result = a1;
  if ( a2 > 0 )
  {
    if ( (a1 & 1) != 0 )
    {
      v3 = 3 * a1;
      if ( a2 <= 1 )
        return v3 + 1;
      else
        return indirect_recursion_a(v3 + 2, a2 - 2);
    }
    else
    {
      result = a1 / 2;
      if ( a2 > 1 )
        return indirect_recursion_a(a1 / 2 + 1, a2 - 2);
    }
  }
  return result;
}


/* Function: call_func_ptr @ 0x1CDF */
int __cdecl call_func_ptr(int (__cdecl *a1)(int), int a2)
{
  return a1(a2);
}


/* Function: call_func_ptr_array @ 0x1CF2 */
int __cdecl call_func_ptr_array(unsigned int a1, int a2)
{
  _DWORD v3[7]; // [esp+0h] [ebp-1Ch]

  v3[3] = __readgsdword(0x14u);
  v3[0] = double_value;
  v3[1] = triple_value;
  v3[2] = recursion_factorial;
  if ( a1 > 2 )
    return -1;
  else
    return ((int (__cdecl *)(int))v3[a1])(a2);
}


/* Function: call_virtual_func @ 0x1D61 */
int __cdecl call_virtual_func(int a1, int a2)
{
  return 2 * a2;
}


/* Function: process_with_callback @ 0x1D6C */
int __cdecl process_with_callback(int a1, int a2, int (__cdecl *a3)(_DWORD))
{
  int v3; // ebx
  int v4; // esi

  if ( a2 <= 0 )
    return 0;
  v3 = 0;
  v4 = 0;
  do
    v4 += a3(*(_DWORD *)(a1 + 4 * v3++));
  while ( a2 != v3 );
  return v4;
}


/* Function: test_control_flow_l2 @ 0x1DB7 */
unsigned int test_control_flow_l2()
{
  int v0; // eax
  int v1; // eax
  unsigned int i; // eax
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
  int v15; // [esp+Ch] [ebp-78h] BYREF
  int v16; // [esp+10h] [ebp-74h] BYREF
  _DWORD v17[5]; // [esp+14h] [ebp-70h] BYREF
  _DWORD v18[8]; // [esp+28h] [ebp-5Ch] BYREF
  _DWORD v19[8]; // [esp+48h] [ebp-3Ch] BYREF
  unsigned int v20; // [esp+68h] [ebp-1Ch]

  v20 = __readgsdword(0x14u);
  puts(asc_316C);
  v0 = loop_multi_exit(7);
  __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  v15 = 0;
  v1 = infinite_loop(&v15);
  __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  v18[0] = 1;
  v18[1] = 2;
  v18[2] = 3;
  v18[3] = 4;
  v18[4] = 5;
  v18[5] = 6;
  v18[6] = 7;
  v18[7] = 8;
  for ( i = 0; i < 8; ++i )
    v19[i] = 0;
  v3 = duffs_device(v19, v18, 8);
  __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v3);
  v4 = loop_complex_cond(10);
  __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v4);
  v5 = loop_modify_var(10);
  __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v5);
  v16 = 0;
  v6 = loop_external_state(&v16);
  __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v6);
  v7 = recursion_factorial(5);
  __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v7);
  v8 = tail_recursion(5, 1);
  __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", v8);
  v9 = indirect_recursion_a(10, 3);
  __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v9);
  v10 = call_func_ptr(double_value, 5);
  __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v10);
  v11 = call_func_ptr_array(0, 5);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
  v12 = call_func_ptr_array(2u, 5);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v12);
  v17[0] = 1;
  v17[1] = 2;
  v17[2] = 3;
  v17[3] = 4;
  v17[4] = 5;
  v13 = process_with_callback((int)v17, 5, double_value);
  __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v13);
  return v20 - __readgsdword(0x14u);
}


/* Function: non_local_jump @ 0x205E */
int __cdecl non_local_jump(int a1)
{
  int v2; // [esp+4h] [ebp-24h]
  int v3; // [esp+8h] [ebp-20h]

  if ( _setjmp(&jump_buffer) )
    return -1;
  if ( a1 < 0 )
    __longjmp_chk(&jump_buffer, 1, v2, v3);
  if ( a1 > 100 )
    __longjmp_chk(&jump_buffer, 2, v2, v3);
  return 2 * a1;
}


/* Function: cpp_exception @ 0x20D6 */
int __cdecl cpp_exception(int a1)
{
  if ( a1 < 0 )
    return -1;
  if ( a1 > 100 )
    return -2;
  return 2 * a1;
}


/* Function: large_jump_table @ 0x20F6 */
int __cdecl large_jump_table(unsigned int a1, int a2, int a3)
{
  _DWORD v4[14]; // [esp+4h] [ebp-38h]

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
  if ( a1 > 9 )
    return -1;
  else
    return ((int (__cdecl *)(int, int))v4[a1])(a2, a3);
}


/* Function: conditional_func_ptr @ 0x21B0 */
int __cdecl conditional_func_ptr(int a1, int a2)
{
  int (__cdecl *v2)(int); // eax

  v2 = double_value;
  if ( a1 )
  {
    v2 = triple_value;
    if ( a1 != 1 )
      v2 = recursion_factorial;
  }
  return v2(a2);
}


/* Function: state_machine @ 0x21EF */
int __cdecl state_machine(int a1, int a2)
{
  int result; // eax

  result = a2;
  if ( a2 != 2 )
  {
    if ( a2 > 2 )
    {
      if ( a2 == 3 )
      {
        if ( !a1 )
          return 0;
      }
      else
      {
        return 3;
      }
    }
    else if ( a2 )
    {
      if ( a2 == 1 )
      {
        if ( a1 == 2 )
        {
          return 2;
        }
        else if ( a1 == 99 )
        {
          return 3;
        }
      }
      else
      {
        return 3;
      }
    }
    else
    {
      return a1 == 1;
    }
  }
  return result;
}


/* Function: fsm_func_table @ 0x2249 */
int __cdecl fsm_func_table(int a1, unsigned int a2)
{
  int result; // eax
  _DWORD v3[8]; // [esp+Ch] [ebp-20h]

  v3[4] = __readgsdword(0x14u);
  v3[0] = state_idle;
  v3[1] = state_processing;
  v3[2] = state_done;
  v3[3] = state_error;
  result = 3;
  if ( a2 <= 3 )
    return ((int (__cdecl *)(int))v3[a2])(a1);
  return result;
}


/* Function: computed_goto @ 0x22C1 */
int __cdecl computed_goto(int a1, unsigned int a2)
{
  _DWORD v3[8]; // [esp+Ch] [ebp-20h]

  v3[4] = __readgsdword(0x14u);
  v3[0] = &loc_2314;
  v3[1] = &loc_232E;
  v3[2] = &loc_2339;
  v3[3] = &loc_2344;
  if ( a2 <= 3 )
    __asm { jmp     [esp+edx*4+2Ch+var_20] }
  return -1;
}


/* Function: obfuscated_cf @ 0x235B */
int __cdecl obfuscated_cf(int a1)
{
  return 2 * a1;
}


/* Function: opaque_predicate @ 0x2366 */
int __cdecl opaque_predicate(int a1)
{
  return 2 * a1;
}


/* Function: overlapped_code @ 0x2371 */
int __cdecl overlapped_code(int a1)
{
  if ( (a1 & 1) != 0 )
    return 3 * a1 + 1;
  else
    return a1 / 2;
}


/* Function: test_control_flow_l3 @ 0x238D */
unsigned int test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  _DWORD v7[4]; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v8; // [esp+2Ch] [ebp-10h]

  v8 = __readgsdword(0x14u);
  puts(asc_32F0);
  v0 = non_local_jump(5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v0);
  v1 = non_local_jump(-5);
  __printf_chk(1, "CF-L3-01 (non_local_jump): %d\n", v1);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", 10);
  __printf_chk(1, "CF-L3-02 (cpp_exception): %d\n", -1);
  v2 = large_jump_table(0, 10, 5);
  __printf_chk(1, "CF-L3-03 (large_jump_table): %d\n", v2);
  v3 = conditional_func_ptr(0, 5);
  __printf_chk(1, "CF-L3-04 (conditional_func_ptr): %d\n", v3);
  __printf_chk(1, "CF-L3-05 (state_machine): %d\n", 1);
  v4 = fsm_func_table(2, 1u);
  __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
  v7[0] = 0;
  v7[1] = 1;
  v7[2] = 2;
  v7[3] = 3;
  v5 = computed_goto((int)v7, 2u);
  __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
  __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
  return v8 - __readgsdword(0x14u);
}


/* Function: main @ 0x2513 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x2533 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2540 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2560 */
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


/* Function: .term_proc @ 0x25AC */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x60E0 */

/* FAILED to decompile: _setjmp @ 0x60E4 */

/* FAILED to decompile: __stack_chk_fail @ 0x60E8 */

/* FAILED to decompile: __cxa_finalize @ 0x60EC */

/* FAILED to decompile: puts @ 0x60F0 */

/* FAILED to decompile: __printf_chk @ 0x60F4 */

/* FAILED to decompile: __longjmp_chk @ 0x60F8 */

/* Total functions decompiled: 87, failed: 7 */
