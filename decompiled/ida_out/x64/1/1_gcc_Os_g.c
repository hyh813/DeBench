/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/1/1_gcc_Os_g
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


/* Function: main @ 0x10E0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_control_flow_l1();
  test_control_flow_l2();
  test_control_flow_l3();
  return 0;
}


/* Function: _start @ 0x1100 */
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


/* Function: deregister_tm_clones @ 0x1130 */
void *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1160 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11A0 */
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


/* Function: frame_dummy @ 0x11E0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: recursion_factorial @ 0x11E9 */
int __fastcall recursion_factorial(int n)
{
  int result; // eax

  result = 1;
  while ( n > 1 )
    result *= n--;
  return result;
}


/* Function: double_value @ 0x11FF */
int __fastcall double_value(int x)
{
  return 2 * x;
}


/* Function: triple_value @ 0x1207 */
int __fastcall triple_value(int x)
{
  return 3 * x;
}


/* Function: op_add @ 0x120F */
int __fastcall op_add(int a, int b)
{
  return a + b;
}


/* Function: op_sub @ 0x1217 */
int __fastcall op_sub(int a, int b)
{
  return a - b;
}


/* Function: op_mul @ 0x1220 */
int __fastcall op_mul(int a, int b)
{
  return b * a;
}


/* Function: op_div @ 0x122A */
int __fastcall op_div(int a, int b)
{
  int v2; // r8d

  v2 = b;
  if ( b )
    return a / b;
  return v2;
}


/* Function: op_mod @ 0x1241 */
int __fastcall op_mod(int a, int b)
{
  int v2; // edx

  v2 = b;
  if ( b )
    return a % b;
  return v2;
}


/* Function: op_and @ 0x1253 */
int __fastcall op_and(int a, int b)
{
  return b & a;
}


/* Function: op_or @ 0x125C */
int __fastcall op_or(int a, int b)
{
  return b | a;
}


/* Function: op_xor @ 0x1265 */
int __fastcall op_xor(int a, int b)
{
  return b ^ a;
}


/* Function: op_shl @ 0x126E */
int __fastcall op_shl(int a, int b)
{
  return a << b;
}


/* Function: op_shr @ 0x1279 */
int __fastcall op_shr(int a, int b)
{
  return a >> b;
}


/* Function: state_idle @ 0x1284 */
int __fastcall state_idle(int event)
{
  return event == 1;
}


/* Function: state_processing @ 0x1290 */
int __fastcall state_processing(int event)
{
  int result; // eax

  result = event;
  if ( event != 2 )
  {
    if ( event == 99 )
      return 3;
    else
      return 1;
  }
  return result;
}


/* Function: state_done @ 0x12AC */
int __fastcall state_done(int event)
{
  return 2;
}


/* Function: state_error @ 0x12B6 */
int __fastcall state_error(int event)
{
  int result; // eax

  result = event;
  if ( event )
    return 3;
  return result;
}


/* Function: sequential_ops @ 0x12C6 */
int __fastcall sequential_ops(int a, int b, int c)
{
  return 2 * (a + b) - c;
}


/* Function: single_if @ 0x12D2 */
int __fastcall single_if(int x)
{
  int result; // eax

  result = x;
  if ( x > 0 )
    return 2 * x;
  return result;
}


/* Function: if_else @ 0x12DF */
int __fastcall if_else(int x)
{
  return x > 0;
}


/* Function: nested_if_2 @ 0x12EB */
int __fastcall nested_if_2(int a, int b)
{
  int result; // eax

  result = a;
  if ( a <= 0 )
    return 0;
  if ( b > 0 )
    return b + a;
  return result;
}


/* Function: nested_if_deep @ 0x12FF */
int __fastcall nested_if_deep(int a, int b, int c, int d, int e)
{
  int result; // eax

  result = 0;
  if ( a > 0 )
  {
    result = 1;
    if ( b > 0 )
    {
      result = 2;
      if ( c > 0 )
      {
        result = 3;
        if ( d > 0 )
          return (e > 0) + 4;
      }
    }
  }
  return result;
}


/* Function: if_elseif_chain @ 0x1330 */
int __fastcall if_elseif_chain(int x)
{
  int result; // eax

  result = 10;
  if ( x )
  {
    result = 20;
    if ( x != 1 )
    {
      result = 30;
      if ( x != 2 )
        return -1;
    }
  }
  return result;
}


/* Function: if_elseif_long @ 0x1358 */
int __fastcall if_elseif_long(int x)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)x <= 4 )
    return 100 * (x + 1);
  return result;
}


/* Function: switch_small @ 0x136A */
int __fastcall switch_small(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 3 )
    return CSWTCH_55[op];
  return result;
}


/* Function: switch_large @ 0x1384 */
int __fastcall switch_large(int op)
{
  int result; // eax

  result = -1;
  if ( (unsigned int)op <= 9 )
    return 10 * op;
  return result;
}


/* Function: switch_default @ 0x1394 */
int __fastcall switch_default(int op)
{
  int result; // eax

  result = 0;
  if ( (unsigned int)(op - 1) <= 2 )
    return 100 * op;
  return result;
}


/* Function: switch_fallthrough @ 0x13A6 */
int __fastcall switch_fallthrough(int op)
{
  int v2; // eax
  int v3; // eax

  if ( op == 2 )
  {
    v2 = 0;
LABEL_7:
    v3 = v2 + 2 * op;
    return op + v3;
  }
  if ( op == 3 )
  {
    v2 = 12;
    goto LABEL_7;
  }
  if ( op != 1 )
    return -1;
  v3 = 0;
  return op + v3;
}


/* Function: loop_for_fixed @ 0x13D0 */
int __fastcall loop_for_fixed(int n)
{
  int v1; // eax
  int v2; // r8d

  v1 = 0;
  v2 = 0;
  while ( v1 < n )
    v2 += v1++;
  return v2;
}


/* Function: loop_while @ 0x13E8 */
int __fastcall loop_while(int x)
{
  int v2; // ecx
  int result; // eax

  v2 = 0;
  while ( x )
  {
    ++v2;
    x /= 10;
  }
  result = 1;
  if ( v2 > 0 )
    return v2;
  return result;
}


/* Function: loop_dowhile @ 0x140B */
int __fastcall loop_dowhile(int x)
{
  int v2; // r8d

  v2 = 0;
  do
  {
    ++v2;
    x /= 10;
  }
  while ( x );
  return v2;
}


/* Function: loop_nested @ 0x1427 */
int __fastcall loop_nested(int m, int n)
{
  int v2; // edx
  int result; // eax

  v2 = 0;
  result = 0;
  if ( n < 0 )
    n = 0;
  while ( v2 < m )
  {
    result += n;
    ++v2;
  }
  return result;
}


/* Function: loop_break @ 0x1441 */
int __fastcall loop_break(int target)
{
  __int64 v1; // rax
  int v2; // r8d
  int arr[5]; // [rsp+4h] [rbp-24h]
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  arr[4] = 50;
  *(_QWORD *)arr = 0x140000000ALL;
  *(_QWORD *)&arr[2] = 0x280000001ELL;
  v1 = 0;
  while ( 1 )
  {
    v2 = v1;
    if ( arr[v1] == target )
      break;
    if ( ++v1 == 5 )
      return -1;
  }
  return v2;
}


/* Function: loop_continue @ 0x14B6 */
int __fastcall loop_continue(int n)
{
  int v1; // eax
  int v2; // r8d

  v1 = 1;
  v2 = 0;
  while ( v1 <= n )
  {
    if ( (v1 & 1) != 0 )
      v2 += v1;
    ++v1;
  }
  return v2;
}


/* Function: goto_forward @ 0x14D5 */
int __fastcall goto_forward(int x)
{
  if ( x > 0 )
    x *= x;
  return 2 * x;
}


/* Function: goto_backward @ 0x14E4 */
int __fastcall goto_backward(int x)
{
  int v1; // r8d
  int i; // eax

  v1 = 1;
  if ( x > 0 )
  {
    for ( i = 1; i <= x; ++i )
      v1 *= i;
  }
  return v1;
}


/* Function: ternary_op @ 0x1505 */
int __fastcall ternary_op(int a, int b)
{
  int result; // eax

  result = a;
  if ( b >= a )
    return b;
  return result;
}


/* Function: test_control_flow_l1 @ 0x1511 */
void __cdecl test_control_flow_l1()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  puts(s);
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
  __printf_chk(1, "CF-L1-19 (goto_backward): %d\n", 120);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 10);
  __printf_chk(1, "CF-L1-20 (ternary_op): %d\n", 8);
}


/* Function: loop_multi_exit @ 0x17CE */
int __fastcall loop_multi_exit(int target)
{
  __int64 v2; // rcx
  int v3; // eax
  int *v4; // rdi
  int *v5; // rsi
  int *v6; // rcx
  __int64 i; // rdx
  int matrix[3][4]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-10h]

  v2 = 12;
  v10 = __readfsqword(0x28u);
  v3 = 0;
  v4 = matrix[0];
  v5 = (int *)&unk_35E0;
  while ( v2 )
  {
    *v4++ = *v5++;
    --v2;
  }
  v6 = matrix[0];
  do
  {
    for ( i = 0; i != 4; ++i )
    {
      if ( v6[i] == target )
        return i + 10 * v3;
    }
    ++v3;
    v6 += 4;
  }
  while ( v3 != 3 );
  return -1;
}


/* Function: infinite_loop @ 0x183D */
int __fastcall infinite_loop(volatile int *flag)
{
  int result; // eax

  result = 0;
  while ( *flag != 1 )
  {
    if ( ++result == 1001 )
    {
      *flag = 1;
      return result;
    }
  }
  return result;
}


/* Function: multi_return @ 0x1859 */
int __fastcall multi_return(int x)
{
  int result; // eax

  result = -1;
  if ( x >= 0 )
  {
    result = 2 * x;
    if ( 2 * x > 100 )
    {
      return -2;
    }
    else if ( (x & 1) != 0 )
    {
      return x + 1;
    }
  }
  return result;
}


/* Function: conditional_return @ 0x187C */
int __fastcall conditional_return(int x)
{
  int result; // eax

  result = x;
  if ( x > 0 )
    return 2 * x;
  if ( x )
    return -x;
  return result;
}


/* Function: duffs_device @ 0x188E */
int __fastcall duffs_device(int *dst, int *src, int n)
{
  int v5; // r8d
  int v6; // esi
  int v7; // edx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx

  v5 = n;
  if ( n <= 0 )
    return -1;
  v6 = (n + 7) >> 3;
  switch ( n & 7 )
  {
    case 1:
      goto LABEL_9;
    case 2:
      goto LABEL_8;
    case 3:
      goto LABEL_7;
    case 4:
      goto LABEL_6;
    case 5:
      goto LABEL_5;
    case 6:
      goto LABEL_4;
    case 7:
      goto LABEL_3;
    default:
      while ( 1 )
      {
        v13 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v13;
LABEL_3:
        v7 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v7;
LABEL_4:
        v8 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v8;
LABEL_5:
        v9 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v9;
LABEL_6:
        v10 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v10;
LABEL_7:
        v11 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v11;
LABEL_8:
        v12 = *src;
        ++dst;
        ++src;
        *(dst - 1) = v12;
LABEL_9:
        *dst = *src;
        if ( !--v6 )
          break;
        ++src;
        ++dst;
      }
      break;
  }
  return v5;
}


/* Function: loop_complex_cond @ 0x1939 */
int __fastcall loop_complex_cond(int x)
{
  int i; // edx

  for ( i = 0; 2 * i < x - i && i <= 9; ++i )
    ;
  return x + 2 * i;
}


/* Function: loop_modify_var @ 0x1958 */
int __fastcall loop_modify_var(int n)
{
  int v1; // eax
  int v2; // r8d

  v1 = 0;
  v2 = 0;
  while ( v1 < n )
  {
    v2 += v1;
    if ( v1 > 5 )
      v1 += 2;
    ++v1;
  }
  return v2;
}


/* Function: loop_external_state @ 0x1978 */
int __fastcall loop_external_state(volatile int *flag)
{
  int result; // eax

  for ( result = 0; result != 101; ++result )
  {
    if ( *flag )
      break;
  }
  return result;
}


/* Function: tail_recursion @ 0x198C */
int __fastcall tail_recursion(int n, int acc)
{
  int result; // eax

  result = acc;
  while ( n > 1 )
    result *= n--;
  return result;
}


/* Function: indirect_recursion_a @ 0x199F */
int __fastcall indirect_recursion_a(int n, int depth)
{
  int result; // eax
  int v3; // eax

  result = n;
  while ( depth > 0 )
  {
    if ( (result & 1) != 0 )
    {
      v3 = 3 * result;
      if ( depth == 1 )
        return v3 + 1;
      result = v3 + 2;
    }
    else
    {
      result /= 2;
      if ( depth == 1 )
        return result;
      ++result;
    }
    depth -= 2;
  }
  return result;
}


/* Function: call_func_ptr @ 0x19D2 */
int __fastcall call_func_ptr(int (*f)(int), int x)
{
  return f(x);
}


/* Function: call_func_ptr_array @ 0x19DD */
int __fastcall call_func_ptr_array(int idx, int x)
{
  int (*funcs[3])(int); // [rsp+0h] [rbp-28h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  funcs[0] = double_value;
  funcs[1] = triple_value;
  funcs[2] = recursion_factorial;
  if ( (unsigned int)idx > 2 )
    return -1;
  else
    return funcs[idx](x);
}


/* Function: call_virtual_func @ 0x1A59 */
int __fastcall call_virtual_func(void *obj, int x)
{
  return 2 * x;
}


/* Function: process_with_callback @ 0x1A61 */
int __fastcall process_with_callback(int *arr, int n, int (*cb)(int))
{
  int v5; // r12d
  __int64 i; // rbx
  __int64 v7; // rdi

  v5 = 0;
  for ( i = 0; n > (int)i; ++i )
  {
    v7 = (unsigned int)arr[i];
    v5 += cb(v7);
  }
  return v5;
}


/* Function: test_control_flow_l2 @ 0x1A9A */
void __cdecl test_control_flow_l2()
{
  int v0; // eax
  int v1; // eax
  int *v2; // rdi
  __int64 v3; // rcx
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
  int flag; // [rsp+Ch] [rbp-8Ch] BYREF
  int ext_flag; // [rsp+10h] [rbp-88h] BYREF
  int arr[5]; // [rsp+14h] [rbp-84h] BYREF
  int src[8]; // [rsp+28h] [rbp-70h] BYREF
  int dst[8]; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  puts(asc_3271);
  v0 = loop_multi_exit(7);
  __printf_chk(1, "CF-L2-01 (loop_multi_exit): %d\n", v0);
  flag = 0;
  v1 = infinite_loop(&flag);
  __printf_chk(1, "CF-L2-02 (infinite_loop): %d\n", v1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -1);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", -2);
  __printf_chk(1, "CF-L2-03 (multi_return): %d\n", 4);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 10);
  __printf_chk(1, "CF-L2-04 (conditional_return): %d\n", 5);
  v2 = dst;
  v3 = 8;
  *(_QWORD *)&src[4] = 0x600000005LL;
  *(_QWORD *)&src[6] = 0x800000007LL;
  while ( v3 )
  {
    *v2++ = 0;
    --v3;
  }
  *(_QWORD *)src = 0x200000001LL;
  *(_QWORD *)&src[2] = 0x400000003LL;
  v4 = duffs_device(dst, src, 8);
  __printf_chk(1, "CF-L2-05 (duffs_device): %d\n", v4);
  v5 = loop_complex_cond(10);
  __printf_chk(1, "CF-L2-06 (loop_complex_cond): %d\n", v5);
  v6 = loop_modify_var(10);
  __printf_chk(1, "CF-L2-07 (loop_modify_var): %d\n", v6);
  ext_flag = 0;
  v7 = loop_external_state(&ext_flag);
  __printf_chk(1, "CF-L2-08 (loop_external_state): %d\n", v7);
  v8 = recursion_factorial(5);
  __printf_chk(1, "CF-L2-09 (recursion_factorial): %d\n", v8);
  __printf_chk(1, "CF-L2-10 (tail_recursion): %d\n", 120);
  v9 = indirect_recursion_a(6, 1);
  __printf_chk(1, "CF-L2-11 (indirect_recursion): %d\n", v9);
  v10 = call_func_ptr(double_value, 5);
  __printf_chk(1, "CF-L2-12 (call_func_ptr): %d\n", v10);
  v11 = call_func_ptr_array(0, 5);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v11);
  v12 = call_func_ptr_array(2, 5);
  __printf_chk(1, "CF-L2-13 (call_func_ptr_array): %d\n", v12);
  *(_QWORD *)arr = 0x200000001LL;
  *(_QWORD *)&arr[2] = 0x400000003LL;
  arr[4] = 5;
  v13 = process_with_callback(arr, 5, double_value);
  __printf_chk(1, "CF-L2-15 (process_with_callback): %d\n", v13);
}


/* Function: non_local_jump @ 0x1D73 */
int __fastcall non_local_jump(int x)
{
  __int64 v1; // rsi
  int result; // eax

  if ( _setjmp(jump_buffer) )
    return -1;
  v1 = 1;
  if ( x < 0 )
    goto LABEL_5;
  result = 2 * x;
  if ( x > 100 )
  {
    v1 = 2;
LABEL_5:
    __longjmp_chk(jump_buffer, v1);
  }
  return result;
}


/* Function: cpp_exception @ 0x1DC5 */
int __fastcall cpp_exception(int x)
{
  int result; // eax

  result = -1;
  if ( x >= 0 )
  {
    result = -2;
    if ( x <= 100 )
      return 2 * x;
  }
  return result;
}


/* Function: large_jump_table @ 0x1DDE */
int __fastcall large_jump_table(int op, int a, int b)
{
  __int64 v3; // rax
  int (**v5)(int, int); // rdi
  __int64 (__fastcall **v6)(); // rsi
  __int64 i; // rcx
  int (*ops[10])(int, int); // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp-10h]

  v3 = op;
  v10 = __readfsqword(0x28u);
  v5 = ops;
  v6 = &off_6020;
  for ( i = 20; i; --i )
  {
    *(_DWORD *)v5 = *(_DWORD *)v6;
    v6 = (__int64 (__fastcall **)())((char *)v6 + 4);
    v5 = (int (**)(int, int))((char *)v5 + 4);
  }
  if ( (unsigned int)v3 > 9 )
    return -1;
  else
    return ops[v3](a, b);
}


/* Function: conditional_func_ptr @ 0x1E55 */
int __fastcall conditional_func_ptr(int mode, int x)
{
  int (__fastcall *v2)(int); // rax

  v2 = double_value;
  if ( mode )
  {
    v2 = triple_value;
    if ( mode != 1 )
      v2 = recursion_factorial;
  }
  return v2(x);
}


/* Function: state_machine @ 0x1E7E */
int __fastcall state_machine(int event, int state)
{
  int result; // eax
  bool v3; // zf
  int v4; // edx

  result = state;
  if ( state != 2 )
  {
    if ( state > 2 )
    {
      if ( state != 3 )
        return 3;
      v4 = 0;
      v3 = event == 0;
    }
    else
    {
      if ( !state )
        return event == 1;
      if ( state != 1 )
        return 3;
      if ( event == 2 )
        return 2;
      v3 = event == 99;
      v4 = 3;
    }
    if ( v3 )
      return v4;
  }
  return result;
}


/* Function: fsm_func_table @ 0x1EC6 */
int __fastcall fsm_func_table(int event, int state)
{
  int (*state_handlers[4])(int); // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  state_handlers[0] = state_idle;
  state_handlers[1] = state_processing;
  state_handlers[2] = state_done;
  state_handlers[3] = state_error;
  if ( (unsigned int)state > 3 )
    return 3;
  else
    return state_handlers[state](event);
}


/* Function: computed_goto @ 0x1F4E */
int __fastcall computed_goto(int *labels, int idx)
{
  int result; // eax
  void *targets[4]; // [rsp+8h] [rbp-30h]
  unsigned __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  targets[0] = &MEMORY[0x1FA3];
  targets[1] = &MEMORY[0x1FAB];
  targets[2] = &MEMORY[0x1FB6];
  targets[3] = &MEMORY[0x1FC1];
  result = -1;
  if ( (unsigned int)idx <= 3 )
    __asm { jmp     [rsp+idx*8+38h+targets] }
  return result;
}


/* Function: obfuscated_cf @ 0x1FE4 */
__int64 __fastcall obfuscated_cf(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: opaque_predicate @ 0x1FEC */
__int64 __fastcall opaque_predicate(int a1)
{
  return (unsigned int)(2 * a1);
}


/* Function: overlapped_code @ 0x1FF4 */
int __fastcall overlapped_code(int x)
{
  if ( (x & 1) != 0 )
    return 3 * x + 1;
  else
    return x / 2;
}


/* Function: test_control_flow_l3 @ 0x200D */
void __cdecl test_control_flow_l3()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int labels[4]; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  puts(asc_3464);
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
  v4 = fsm_func_table(2, 1);
  __printf_chk(1, "CF-L3-06 (fsm_func_table): %d\n", v4);
  *(_QWORD *)labels = 0x100000000LL;
  *(_QWORD *)&labels[2] = 0x300000002LL;
  v5 = computed_goto(labels, 2);
  __printf_chk(1, "CF-L3-07 (computed_goto): %d\n", v5);
  __printf_chk(1, "CF-L3-08 (obfuscated_cf): %d\n", 10);
  __printf_chk(1, "CF-L3-09 (opaque_predicate): %d\n", 10);
  __printf_chk(1, "CF-L3-10 (overlapped_code): %d\n", 16);
}


/* Function: .term_proc @ 0x21C4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __libc_start_main @ 0x6170 */

/* FAILED to decompile: puts @ 0x6178 */

/* FAILED to decompile: __stack_chk_fail @ 0x6180 */

/* FAILED to decompile: _setjmp @ 0x6188 */

/* FAILED to decompile: __printf_chk @ 0x6190 */

/* FAILED to decompile: __longjmp_chk @ 0x6198 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61A0 */

/* FAILED to decompile: __gmon_start__ @ 0x61B0 */

/* Total functions decompiled: 78, failed: 8 */
