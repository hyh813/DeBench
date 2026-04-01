/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/4/4_gcc_O0_g
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
int __usercall sub_1090@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 36))();
}


/* Function: _start @ 0x10F0 */
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


/* Function: sub_111C @ 0x111C */
void sub_111C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1120 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1130 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1170 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11C0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1090((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1250 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1259 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x125D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: cdecl_func @ 0x1261 */
int __cdecl cdecl_func(int a, int b)
{
  return a + b;
}


/* Function: call_cdecl @ 0x127C */
int call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x129B */
int __stdcall stdcall_func(int a, int b)
{
  return b * a;
}


/* Function: call_stdcall @ 0x12B7 */
int call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x12D3 */
int __userpurge fastcall_func@<eax>(int a1@<edx>, int a2@<ecx>, int a, int b, int c)
{
  return a1 + a2 + a;
}


/* FAILED to decompile: call_fastcall @ 0x12FE */

/* Function: call_thiscall @ 0x1322 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x133A */
int __cdecl arm_aapcs_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_arm_aapcs @ 0x1364 */
int call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1389 */
int __cdecl mips_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_mips @ 0x13AE */
int call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x13D1 */
int __cdecl amd64_sysv_func(int a, int b, int c, int d, int e, int f)
{
  return e + d + c + b + a + f;
}


/* Function: call_amd64_sysv @ 0x1400 */
int call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1427 */
int __cdecl ms_x64_func(int a, int b, int c, int d, int e)
{
  return d + c + b + a + e;
}


/* Function: call_ms_x64 @ 0x1451 */
int call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x1476 */
int __cdecl vectorcall_func(int a, int b, int c, int d)
{
  return c + b + a + d;
}


/* Function: call_vectorcall @ 0x149B */
int call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x14BE */
int mixed_conventions_test()
{
  int v1; // [esp+0h] [ebp-10h]
  int v2; // [esp+4h] [ebp-Ch]
  int sum; // [esp+Ch] [ebp-4h]
  int suma; // [esp+Ch] [ebp-4h]

  sum = cdecl_func(1, 2);
  suma = stdcall_func(3, 4) + sum;
  return fastcall_func(6, 5, 7, v1, v2) + suma;
}


/* Function: varargs_func @ 0x150D */
int varargs_func(int count, ...)
{
  int v1; // kr00_4
  va_list args; // [esp+0h] [ebp-18h]
  int sum; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  va_list va; // [esp+24h] [ebp+Ch] BYREF

  va_start(va, count);
  sum = 0;
  va_copy(args, va);
  for ( i = 0; i < count; ++i )
  {
    v1 = va_arg(args, _DWORD);
    sum += v1;
  }
  return sum;
}


/* Function: func_no_args @ 0x1572 */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x158A */
int __cdecl func_many_args(int a, int b, int c, int d, int e, int f, int g, int h)
{
  return g + f + e + d + c + b + a + h;
}


/* Function: func_mixed_args @ 0x15C3 */
int __cdecl func_mixed_args(int x, char *s, double d, __int64 ll)
{
  size_t v4; // eax

  if ( s )
    v4 = strlen(s);
  else
    v4 = 0;
  return (int)((long double)(int)(x + v4) + d + (long double)ll);
}


/* Function: func_struct_byval @ 0x1645 */
int __cdecl func_struct_byval(LargeStruct s)
{
  int i; // [esp+4h] [ebp-Ch]
  int sum; // [esp+8h] [ebp-8h]

  sum = 0;
  for ( i = 0; i <= 15; ++i )
    sum += LODWORD(s.data[i]);
  return sum;
}


/* Function: func_struct_byptr @ 0x1690 */
int __cdecl func_struct_byptr(SmallStruct *p)
{
  if ( p )
    return p->x * p->y;
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x16BE */
void test_calling_conventions()
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
  __int64 v10; // rax
  int v11; // ecx
  LargeStruct v12; // [esp-80h] [ebp-148h] BYREF
  int i; // [esp+4h] [ebp-C4h]
  int sum; // [esp+8h] [ebp-C0h]
  int no_args; // [esp+Ch] [ebp-BCh]
  int many; // [esp+10h] [ebp-B8h]
  char *test_str; // [esp+14h] [ebp-B4h]
  int mixed; // [esp+18h] [ebp-B0h]
  int struct_val; // [esp+1Ch] [ebp-ACh]
  int struct_ptr; // [esp+20h] [ebp-A8h]
  SmallStruct s; // [esp+24h] [ebp-A4h] BYREF
  LargeStruct large; // [esp+2Ch] [ebp-9Ch] BYREF
  unsigned int v23; // [esp+ACh] [ebp-1Ch]

  v23 = __readgsdword(0x14u);
  puts(asc_3008);
  v0 = call_cdecl();
  printf("CALL-L1-01: %d\n", v0);
  v1 = call_stdcall();
  printf("CALL-L1-02: %d\n", v1);
  v2 = call_fastcall();
  printf("CALL-L1-03: %d\n", v2);
  v3 = call_thiscall();
  printf("CALL-L1-04: %d\n", v3);
  v4 = call_arm_aapcs();
  printf("CALL-L1-05: %d\n", v4);
  v5 = call_mips();
  printf("CALL-L1-06: %d\n", v5);
  v6 = call_amd64_sysv();
  printf("CALL-L1-07: %d\n", v6);
  v7 = call_ms_x64();
  printf("CALL-L1-08: %d\n", v7);
  v8 = call_vectorcall();
  printf("CALL-L1-09: %d\n", v8);
  v9 = mixed_conventions_test();
  printf("CALL-L1-10: %d\n", v9);
  sum = varargs_func(5, 1, 2, 3, 4, 5);
  printf(aCallL206, sum);
  no_args = func_no_args();
  printf(aCallL207, no_args);
  many = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
  printf(aCallL208, many);
  test_str = "test";
  mixed = func_mixed_args(10, "test", 3.14, 100);
  printf(aCallL209, mixed);
  for ( i = 0; i <= 15; ++i )
  {
    v10 = i + 1;
    v11 = i;
    LODWORD(large.data[i]) = v10;
    HIDWORD(large.data[v11]) = HIDWORD(v10);
  }
  qmemcpy(&v12, &large, sizeof(v12));
  struct_val = func_struct_byval(v12);
  printf(aCallL210, struct_val);
  s.x = 5;
  s.y = 10;
  struct_ptr = func_struct_byptr(&s);
  printf(aCallL211, struct_ptr);
}


/* Function: param_by_value_int @ 0x1998 */
int __cdecl param_by_value_int(int x)
{
  return 2 * x;
}


/* Function: call_by_value_int @ 0x19B1 */
int call_by_value_int()
{
  return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x19E4 */
int __cdecl param_by_value_ptr(int *p)
{
  *p *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x1A15 */
__int64 call_by_value_ptr()
{
  __int64 v0; // rax
  int val; // [esp+0h] [ebp-18h] BYREF
  int *ptr; // [esp+4h] [ebp-14h]
  int result; // [esp+8h] [ebp-10h]
  unsigned int v4; // [esp+Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  val = 5;
  ptr = &val;
  result = param_by_value_ptr(&val);
  LODWORD(v0) = val + result;
  HIDWORD(v0) = v4 - __readgsdword(0x14u);
  return v0;
}


/* Function: param_array_decay @ 0x1A6A */
int __cdecl param_array_decay(int *arr, int n)
{
  return 4;
}


/* Function: call_array_decay @ 0x1A82 */
int call_array_decay()
{
  int array[10]; // [esp+4h] [ebp-34h] BYREF
  unsigned int v2; // [esp+2Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  memset(array, 0, sizeof(array));
  return param_array_decay(array, 10);
}


/* Function: param_string @ 0x1AD7 */
int __cdecl param_string(const char *str)
{
  return *str + str[1];
}


/* Function: call_string_param @ 0x1B01 */
int call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1B23 */
int __cdecl param_ptr_array(char **arr, int n)
{
  int sum; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  sum = 0;
  for ( i = 0; i < n; ++i )
    sum += *arr[i];
  return sum;
}


/* Function: call_ptr_array @ 0x1B72 */
int call_ptr_array()
{
  char *strs[3]; // [esp+0h] [ebp-18h] BYREF
  unsigned int v2; // [esp+Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  strs[0] = "abc";
  strs[1] = "def";
  strs[2] = "ghi";
  return param_ptr_array(strs, 3);
}


/* Function: param_varargs @ 0x1BCE */
int param_varargs(int count, ...)
{
  int v1; // kr00_4
  va_list args; // [esp+0h] [ebp-18h]
  int sum; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  va_list va; // [esp+24h] [ebp+Ch] BYREF

  va_start(va, count);
  va_copy(args, va);
  sum = 0;
  for ( i = 0; i < count; ++i )
  {
    v1 = va_arg(args, _DWORD);
    sum += v1;
  }
  return sum;
}


/* Function: call_varargs_param @ 0x1C33 */
int call_varargs_param()
{
  return param_varargs(4, 10, 20, 30, 40);
}


/* Function: param_func_ptr @ 0x1C5E */
int __cdecl param_func_ptr(int (*callback)(int), int x)
{
  return callback(x) + 10;
}


/* Function: callback_func @ 0x1C85 */
int __cdecl callback_func(int x)
{
  return 2 * x;
}


/* Function: call_func_ptr_param @ 0x1C9D */
int call_func_ptr_param()
{
  return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x1CC7 */
int __cdecl param_double_ptr(int **pp, int new_val)
{
  if ( !pp || !*pp )
    return -1;
  **pp = new_val;
  *pp = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x1D08 */
__int64 call_double_ptr()
{
  __int64 result; // rax
  int val; // [esp+0h] [ebp-18h] BYREF
  int *ptr; // [esp+4h] [ebp-14h] BYREF
  unsigned int v3; // [esp+Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  val = 10;
  ptr = &val;
  param_double_ptr(&ptr, 20);
  LODWORD(result) = (ptr == 0) + val;
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: param_complex_cast @ 0x1D68 */
int __cdecl param_complex_cast(void *p, int type)
{
  if ( !type )
    return *(_DWORD *)p;
  if ( type == 1 )
    return *(_DWORD *)p + *((_DWORD *)p + 1);
  return -1;
}


/* Function: call_complex_cast @ 0x1DBD */
int call_complex_cast()
{
  int val; // [esp+0h] [ebp-18h] BYREF
  TestIntPair pair; // [esp+4h] [ebp-14h] BYREF
  unsigned int v3; // [esp+Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  val = 305419896;
  pair.a = 100;
  pair.b = 200;
  param_complex_cast(&pair, 1);
  return param_complex_cast(&val, 0);
}


/* Function: param_struct_byval @ 0x1E20 */
int __cdecl param_struct_byval(BigStruct s)
{
  return s.data[0] + s.data[15];
}


/* Function: call_struct_byval @ 0x1E3B */
int call_struct_byval()
{
  int i; // [esp+8h] [ebp-50h]
  BigStruct s; // [esp+Ch] [ebp-4Ch]
  unsigned int v3; // [esp+4Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  for ( i = 0; i <= 15; ++i )
    s.data[i] = i;
  return param_struct_byval(s);
}


/* Function: param_order_dep @ 0x1EC2 */
int __cdecl param_order_dep(int a, int b)
{
  return a + b;
}


/* Function: call_order_dep @ 0x1EDD */
int call_order_dep()
{
  return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x1F10 */
void test_parameter_passing()
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

  puts(asc_31D8);
  v0 = call_by_value_int();
  printf("PARAM-L1-01: %d\n", v0);
  v1 = call_by_value_ptr();
  printf("PARAM-L1-02: %d\n", v1);
  v2 = call_array_decay();
  printf("PARAM-L2-01: %d\n", v2);
  v3 = call_string_param();
  printf("PARAM-L2-02: %d\n", v3);
  v4 = call_ptr_array();
  printf("PARAM-L2-03: %d\n", v4);
  v5 = call_varargs_param();
  printf("PARAM-L2-04: %d\n", v5);
  v6 = call_func_ptr_param();
  printf("PARAM-L3-01: %d\n", v6);
  v7 = call_double_ptr();
  printf("PARAM-L3-02: %d\n", v7);
  v8 = call_complex_cast();
  printf("PARAM-L3-03: %d\n", v8);
  v9 = call_struct_byval();
  printf("PARAM-L3-04: %d\n", v9);
  v10 = call_order_dep();
  printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x2046 */
int __cdecl ret_basic_type(int x)
{
  return 2 * x;
}


/* Function: call_ret_basic @ 0x205E */
int call_ret_basic()
{
  return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x208C */
int *__cdecl ret_pointer(int *p)
{
  return p + 1;
}


/* Function: call_ret_pointer @ 0x20A5 */
__int64 call_ret_pointer()
{
  __int64 result; // rax
  int arr[3]; // [esp+10h] [ebp-18h] BYREF
  unsigned int v2; // [esp+1Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  LODWORD(result) = *ret_pointer(arr);
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: ret_small_struct @ 0x2100 */
SmallPoint *__userpurge ret_small_struct@<eax>(SmallPoint *__return_ptr retstr, int x, int y)
{
  retstr->x = x;
  retstr->y = y;
  return retstr;
}


/* Function: call_ret_small_struct @ 0x2135 */
__int64 call_ret_small_struct()
{
  __int64 result; // rax
  SmallPoint p; // [esp+4h] [ebp-14h] BYREF
  unsigned int v2; // [esp+Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  ret_small_struct(&p, 3, 4);
  LODWORD(result) = p.x + p.y;
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: ret_large_struct @ 0x217F */
LargeData *ret_large_struct(LargeData *__return_ptr retstr, int seed)
{
  int i; // [esp+18h] [ebp-50h]
  LargeData d; // [esp+1Ch] [ebp-4Ch]
  unsigned int v5; // [esp+5Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  for ( i = 0; i <= 15; ++i )
    d.data[i] = i + seed;
  *retstr = d;
  return retstr;
}


/* Function: call_ret_large_struct @ 0x2240 */
__int64 call_ret_large_struct()
{
  __int64 result; // rax
  LargeData d; // [esp+Ch] [ebp-4Ch] BYREF
  unsigned int v2; // [esp+4Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  ret_large_struct(&d, 100);
  LODWORD(result) = d.data[0] + d.data[15];
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: func_a @ 0x228B */
int __cdecl func_a(int x)
{
  return x + 10;
}


/* Function: func_b @ 0x22A4 */
int __cdecl func_b(int x)
{
  return 2 * x;
}


/* Function: ret_func_ptr @ 0x22BC */
func_ptr_t __cdecl ret_func_ptr(int selector)
{
  if ( selector )
    return func_b;
  else
    return func_a;
}


/* Function: call_ret_func_ptr @ 0x22E3 */
int call_ret_func_ptr()
{
  func_ptr_t f; // [esp+Ch] [ebp-Ch]

  f = ret_func_ptr(1);
  return f(5);
}


/* Function: ret_opaque_handle @ 0x2313 */
void *__cdecl ret_opaque_handle(int type)
{
  if ( type )
    return &handle2_0;
  else
    return &handle1_1;
}


/* Function: call_ret_opaque @ 0x233A */
int call_ret_opaque()
{
  return *(_DWORD *)ret_opaque_handle(0);
}


/* Function: ret_complex_expr @ 0x2362 */
int __cdecl ret_complex_expr(int x, int y, int z)
{
  if ( x <= y )
    return z + 10;
  else
    return 2 * z;
}


/* Function: call_ret_complex_expr @ 0x238A */
int call_ret_complex_expr()
{
  int r1; // [esp+8h] [ebp-8h]

  r1 = ret_complex_expr(5, 3, 10);
  return r1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x23CA */
int __cdecl ret_multi_branch(int op)
{
  if ( op == 2 )
    return 30;
  if ( op > 2 )
    return -1;
  if ( !op )
    return 10;
  if ( op == 1 )
    return 20;
  else
    return -1;
}


/* Function: call_ret_multi_branch @ 0x2411 */
int call_ret_multi_branch()
{
  int sum; // [esp+Ch] [ebp-4h]
  int suma; // [esp+Ch] [ebp-4h]

  sum = ret_multi_branch(0);
  suma = ret_multi_branch(1) + sum;
  return ret_multi_branch(2) + suma;
}


/* Function: ret_void @ 0x2458 */
void __cdecl ret_void(int x, int *out)
{
  *out = 3 * x;
}


/* Function: call_ret_void @ 0x247A */
__int64 call_ret_void()
{
  __int64 v0; // rax
  int result; // [esp+8h] [ebp-10h] BYREF
  unsigned int v2; // [esp+Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  ret_void(7, &result);
  LODWORD(v0) = result;
  HIDWORD(v0) = v2 - __readgsdword(0x14u);
  return v0;
}


/* Function: test_return_values @ 0x24BD */
void test_return_values()
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

  puts(asc_32B4);
  v0 = call_ret_basic();
  printf(aRetL101D, v0);
  v1 = call_ret_pointer();
  printf(aRetL102D, v1);
  v2 = call_ret_small_struct();
  printf(aRetL103D, v2);
  v3 = call_ret_large_struct();
  printf(aRetL104D, v3);
  v4 = call_ret_func_ptr();
  printf(aRetL201D, v4);
  v5 = call_ret_opaque();
  printf(aRetL202D, v5);
  v6 = call_ret_complex_expr();
  printf(aRetL301D, v6);
  v7 = call_ret_multi_branch();
  printf(aRetL302D, v7);
  v8 = call_ret_void();
  printf(aRetL303D, v8);
}


/* Function: main @ 0x25C3 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_calling_conventions();
  test_parameter_passing();
  test_return_values();
  return 0;
}


/* Function: __x86.get_pc_thunk.ax @ 0x25ED */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __stack_chk_fail_local @ 0x2600 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x2620 */
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


/* Function: .term_proc @ 0x266C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: __libc_start_main @ 0x6024 */

/* FAILED to decompile: printf @ 0x6028 */

/* FAILED to decompile: __stack_chk_fail @ 0x602C */

/* FAILED to decompile: __cxa_finalize @ 0x6030 */

/* FAILED to decompile: puts @ 0x6034 */

/* FAILED to decompile: strlen @ 0x6038 */

/* Total functions decompiled: 91, failed: 7 */
