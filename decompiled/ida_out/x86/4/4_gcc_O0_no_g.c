/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/4/4_gcc_O0_no_g
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
int __cdecl cdecl_func(int a1, int a2)
{
  return a1 + a2;
}


/* Function: call_cdecl @ 0x127C */
int call_cdecl()
{
  return cdecl_func(5, 10);
}


/* Function: stdcall_func @ 0x129B */
int __stdcall stdcall_func(int a1, int a2)
{
  return a2 * a1;
}


/* Function: call_stdcall @ 0x12B7 */
int call_stdcall()
{
  return stdcall_func(5, 10);
}


/* Function: fastcall_func @ 0x12D3 */
int __fastcall fastcall_func(int a1, int a2, int a3)
{
  return a2 + a1 + a3;
}


/* Function: call_fastcall @ 0x12FE */
int call_fastcall()
{
  return fastcall_func(1, 2, 3);
}


/* Function: call_thiscall @ 0x1322 */
int call_thiscall()
{
  return 15;
}


/* Function: arm_aapcs_func @ 0x133A */
int __cdecl arm_aapcs_func(int a1, int a2, int a3, int a4, int a5)
{
  return a4 + a3 + a2 + a1 + a5;
}


/* Function: call_arm_aapcs @ 0x1364 */
int call_arm_aapcs()
{
  return arm_aapcs_func(1, 2, 3, 4, 5);
}


/* Function: mips_func @ 0x1389 */
int __cdecl mips_func(int a1, int a2, int a3, int a4)
{
  return a3 + a2 + a1 + a4;
}


/* Function: call_mips @ 0x13AE */
int call_mips()
{
  return mips_func(10, 20, 30, 40);
}


/* Function: amd64_sysv_func @ 0x13D1 */
int __cdecl amd64_sysv_func(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return a5 + a4 + a3 + a2 + a1 + a6;
}


/* Function: call_amd64_sysv @ 0x1400 */
int call_amd64_sysv()
{
  return amd64_sysv_func(1, 2, 3, 4, 5, 6);
}


/* Function: ms_x64_func @ 0x1427 */
int __cdecl ms_x64_func(int a1, int a2, int a3, int a4, int a5)
{
  return a4 + a3 + a2 + a1 + a5;
}


/* Function: call_ms_x64 @ 0x1451 */
int call_ms_x64()
{
  return ms_x64_func(1, 2, 3, 4, 5);
}


/* Function: vectorcall_func @ 0x1476 */
int __cdecl vectorcall_func(int a1, int a2, int a3, int a4)
{
  return a3 + a2 + a1 + a4;
}


/* Function: call_vectorcall @ 0x149B */
int call_vectorcall()
{
  return vectorcall_func(1, 2, 3, 4);
}


/* Function: mixed_conventions_test @ 0x14BE */
int mixed_conventions_test()
{
  int v1; // [esp+Ch] [ebp-4h]
  int v2; // [esp+Ch] [ebp-4h]

  v1 = cdecl_func(1, 2);
  v2 = stdcall_func(3, 4) + v1;
  return fastcall_func(5, 6, 7) + v2;
}


/* Function: varargs_func @ 0x150D */
__int64 __cdecl varargs_func(int a1, char a2)
{
  char *v2; // eax
  __int64 result; // rax
  char *v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  unsigned int v7; // [esp+Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  v5 = 0;
  v4 = &a2;
  for ( i = 0; i < a1; ++i )
  {
    v2 = v4;
    v4 += 4;
    v5 += *(_DWORD *)v2;
  }
  LODWORD(result) = v5;
  HIDWORD(result) = v7 - __readgsdword(0x14u);
  return result;
}


/* Function: func_no_args @ 0x1572 */
int func_no_args()
{
  return 42;
}


/* Function: func_many_args @ 0x158A */
int __cdecl func_many_args(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  return a7 + a6 + a5 + a4 + a3 + a2 + a1 + a8;
}


/* Function: func_mixed_args @ 0x15C3 */
int __cdecl func_mixed_args(int a1, char *s, double a3, __int64 a4)
{
  size_t v4; // eax

  if ( s )
    v4 = strlen(s);
  else
    v4 = 0;
  return (int)((long double)(int)(a1 + v4) + a3 + (long double)a4);
}


/* Function: func_struct_byval @ 0x1645 */
int __cdecl func_struct_byval(int a1)
{
  int i; // [esp+4h] [ebp-Ch]
  int v3; // [esp+8h] [ebp-8h]

  v3 = 0;
  for ( i = 0; i <= 15; ++i )
    v3 += *(&a1 + 2 * i);
  return v3;
}


/* Function: func_struct_byptr @ 0x1690 */
int __cdecl func_struct_byptr(_DWORD *a1)
{
  if ( a1 )
    return *a1 * a1[1];
  else
    return -1;
}


/* Function: test_calling_conventions @ 0x16BE */
unsigned int test_calling_conventions()
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
  int v13[32]; // [esp-80h] [ebp-148h] BYREF
  int i; // [esp+4h] [ebp-C4h]
  int v15; // [esp+8h] [ebp-C0h]
  int v16; // [esp+Ch] [ebp-BCh]
  int v17; // [esp+10h] [ebp-B8h]
  char *s; // [esp+14h] [ebp-B4h]
  int v19; // [esp+18h] [ebp-B0h]
  int v20; // [esp+1Ch] [ebp-ACh]
  int v21; // [esp+20h] [ebp-A8h]
  _DWORD v22[2]; // [esp+24h] [ebp-A4h] BYREF
  _DWORD v23[32]; // [esp+2Ch] [ebp-9Ch] BYREF
  unsigned int v24; // [esp+ACh] [ebp-1Ch]

  v24 = __readgsdword(0x14u);
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
  v15 = varargs_func(5, 1);
  printf(aCallL206, v15);
  v16 = func_no_args();
  printf(aCallL207, v16);
  v17 = func_many_args(1, 2, 3, 4, 5, 6, 7, 8);
  printf(aCallL208, v17);
  s = "test";
  v19 = func_mixed_args(10, "test", 3.14, 100);
  printf(aCallL209, v19);
  for ( i = 0; i <= 15; ++i )
  {
    v10 = i + 1;
    v11 = i;
    v23[2 * i] = v10;
    v23[2 * v11 + 1] = HIDWORD(v10);
  }
  qmemcpy(v13, v23, sizeof(v13));
  v20 = func_struct_byval(v13[0]);
  printf(aCallL210, v20);
  v22[0] = 5;
  v22[1] = 10;
  v21 = func_struct_byptr(v22);
  printf(aCallL211, v21);
  return v24 - __readgsdword(0x14u);
}


/* Function: param_by_value_int @ 0x1998 */
int __cdecl param_by_value_int(int a1)
{
  return 2 * a1;
}


/* Function: call_by_value_int @ 0x19B1 */
int call_by_value_int()
{
  return param_by_value_int(5) + 5;
}


/* Function: param_by_value_ptr @ 0x19E4 */
int __cdecl param_by_value_ptr(_DWORD *a1)
{
  *a1 *= 2;
  return 1;
}


/* Function: call_by_value_ptr @ 0x1A15 */
__int64 call_by_value_ptr()
{
  __int64 result; // rax
  _DWORD v1[2]; // [esp+0h] [ebp-18h] BYREF
  int v2; // [esp+8h] [ebp-10h]
  unsigned int v3; // [esp+Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  v1[0] = 5;
  v1[1] = v1;
  v2 = param_by_value_ptr(v1);
  LODWORD(result) = v1[0] + v2;
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: param_array_decay @ 0x1A6A */
int param_array_decay()
{
  return 4;
}


/* Function: call_array_decay @ 0x1A82 */
int call_array_decay()
{
  _BYTE v1[40]; // [esp+4h] [ebp-34h] BYREF
  unsigned int v2; // [esp+2Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  memset(v1, 0, sizeof(v1));
  return param_array_decay();
}


/* Function: param_string @ 0x1AD7 */
int __cdecl param_string(char *a1)
{
  return *a1 + a1[1];
}


/* Function: call_string_param @ 0x1B01 */
int call_string_param()
{
  return param_string("Hello");
}


/* Function: param_ptr_array @ 0x1B23 */
int __cdecl param_ptr_array(int a1, int a2)
{
  int v3; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v3 = 0;
  for ( i = 0; i < a2; ++i )
    v3 += **(char **)(4 * i + a1);
  return v3;
}


/* Function: call_ptr_array @ 0x1B72 */
int call_ptr_array()
{
  _DWORD v1[6]; // [esp+0h] [ebp-18h] BYREF

  v1[3] = __readgsdword(0x14u);
  v1[0] = "abc";
  v1[1] = "def";
  v1[2] = "ghi";
  return param_ptr_array((int)v1, 3);
}


/* Function: param_varargs @ 0x1BCE */
__int64 __cdecl param_varargs(int a1, char a2)
{
  char *v2; // eax
  __int64 result; // rax
  char *v4; // [esp+0h] [ebp-18h]
  int v5; // [esp+4h] [ebp-14h]
  int i; // [esp+8h] [ebp-10h]
  unsigned int v7; // [esp+Ch] [ebp-Ch]

  v7 = __readgsdword(0x14u);
  v4 = &a2;
  v5 = 0;
  for ( i = 0; i < a1; ++i )
  {
    v2 = v4;
    v4 += 4;
    v5 += *(_DWORD *)v2;
  }
  LODWORD(result) = v5;
  HIDWORD(result) = v7 - __readgsdword(0x14u);
  return result;
}


/* Function: call_varargs_param @ 0x1C33 */
__int64 call_varargs_param()
{
  return param_varargs(4, 10);
}


/* Function: param_func_ptr @ 0x1C5E */
int __cdecl param_func_ptr(int (__cdecl *a1)(int), int a2)
{
  return a1(a2) + 10;
}


/* Function: callback_func @ 0x1C85 */
int __cdecl callback_func(int a1)
{
  return 2 * a1;
}


/* Function: call_func_ptr_param @ 0x1C9D */
int call_func_ptr_param()
{
  return param_func_ptr(callback_func, 5);
}


/* Function: param_double_ptr @ 0x1CC7 */
int __cdecl param_double_ptr(_DWORD *a1, int a2)
{
  if ( !a1 || !*a1 )
    return -1;
  *(_DWORD *)*a1 = a2;
  *a1 = 0;
  return 1;
}


/* Function: call_double_ptr @ 0x1D08 */
__int64 call_double_ptr()
{
  __int64 result; // rax
  int v1; // [esp+0h] [ebp-18h] BYREF
  int *v2; // [esp+4h] [ebp-14h] BYREF
  unsigned int v3; // [esp+Ch] [ebp-Ch]

  v3 = __readgsdword(0x14u);
  v1 = 10;
  v2 = &v1;
  param_double_ptr(&v2, 20);
  LODWORD(result) = (v2 == 0) + v1;
  HIDWORD(result) = v3 - __readgsdword(0x14u);
  return result;
}


/* Function: param_complex_cast @ 0x1D68 */
int __cdecl param_complex_cast(_DWORD *a1, int a2)
{
  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *a1 + a1[1];
  return -1;
}


/* Function: call_complex_cast @ 0x1DBD */
int call_complex_cast()
{
  int v1; // [esp+0h] [ebp-18h] BYREF
  _DWORD v2[5]; // [esp+4h] [ebp-14h] BYREF

  v2[2] = __readgsdword(0x14u);
  v1 = 305419896;
  v2[0] = 100;
  v2[1] = 200;
  param_complex_cast(v2, 1);
  return param_complex_cast(&v1, 0);
}


/* Function: param_struct_byval @ 0x1E20 */
int __cdecl param_struct_byval(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  return a1 + a16;
}


/* Function: call_struct_byval @ 0x1E3B */
int call_struct_byval()
{
  int i; // [esp+8h] [ebp-50h]
  int v2[19]; // [esp+Ch] [ebp-4Ch]

  v2[16] = __readgsdword(0x14u);
  for ( i = 0; i <= 15; ++i )
    v2[i] = i;
  return param_struct_byval(
           v2[0],
           v2[1],
           v2[2],
           v2[3],
           v2[4],
           v2[5],
           v2[6],
           v2[7],
           v2[8],
           v2[9],
           v2[10],
           v2[11],
           v2[12],
           v2[13],
           v2[14],
           v2[15]);
}


/* Function: param_order_dep @ 0x1EC2 */
int __cdecl param_order_dep(int a1, int a2)
{
  return a1 + a2;
}


/* Function: call_order_dep @ 0x1EDD */
int call_order_dep()
{
  return param_order_dep(2, 2);
}


/* Function: test_parameter_passing @ 0x1F10 */
int test_parameter_passing()
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
  return printf("PARAM-L3-05: %d\n", v10);
}


/* Function: ret_basic_type @ 0x2046 */
int __cdecl ret_basic_type(int a1)
{
  return 2 * a1;
}


/* Function: call_ret_basic @ 0x205E */
int call_ret_basic()
{
  return ret_basic_type(21);
}


/* Function: ret_pointer @ 0x208C */
int __cdecl ret_pointer(int a1)
{
  return a1 + 4;
}


/* Function: call_ret_pointer @ 0x20A5 */
__int64 call_ret_pointer()
{
  __int64 result; // rax
  _DWORD v1[3]; // [esp+10h] [ebp-18h] BYREF
  unsigned int v2; // [esp+1Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  v1[0] = 10;
  v1[1] = 20;
  v1[2] = 30;
  LODWORD(result) = *(_DWORD *)ret_pointer((int)v1);
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: ret_small_struct @ 0x2100 */
_DWORD *__userpurge ret_small_struct@<eax>(_DWORD *a1, int a2, int a3)
{
  *a1 = a2;
  a1[1] = a3;
  return a1;
}


/* Function: call_ret_small_struct @ 0x2135 */
__int64 call_ret_small_struct()
{
  __int64 result; // rax
  _DWORD v1[2]; // [esp+4h] [ebp-14h] BYREF
  unsigned int v2; // [esp+Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  ret_small_struct(v1, 3, 4);
  LODWORD(result) = v1[0] + v1[1];
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: ret_large_struct @ 0x217F */
_DWORD *__userpurge ret_large_struct@<eax>(_DWORD *a1, int a2)
{
  int i; // [esp+18h] [ebp-50h]
  _DWORD v4[19]; // [esp+1Ch] [ebp-4Ch]

  v4[16] = __readgsdword(0x14u);
  for ( i = 0; i <= 15; ++i )
    v4[i] = i + a2;
  *a1 = v4[0];
  a1[1] = v4[1];
  a1[2] = v4[2];
  a1[3] = v4[3];
  a1[4] = v4[4];
  a1[5] = v4[5];
  a1[6] = v4[6];
  a1[7] = v4[7];
  a1[8] = v4[8];
  a1[9] = v4[9];
  a1[10] = v4[10];
  a1[11] = v4[11];
  a1[12] = v4[12];
  a1[13] = v4[13];
  a1[14] = v4[14];
  a1[15] = v4[15];
  return a1;
}


/* Function: call_ret_large_struct @ 0x2240 */
__int64 call_ret_large_struct()
{
  __int64 result; // rax
  _DWORD v1[16]; // [esp+Ch] [ebp-4Ch] BYREF
  unsigned int v2; // [esp+4Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  ret_large_struct(v1, 100);
  LODWORD(result) = v1[0] + v1[15];
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: func_a @ 0x228B */
int __cdecl func_a(int a1)
{
  return a1 + 10;
}


/* Function: func_b @ 0x22A4 */
int __cdecl func_b(int a1)
{
  return 2 * a1;
}


/* Function: ret_func_ptr @ 0x22BC */
int (__cdecl *__cdecl ret_func_ptr(int a1))(int a1)
{
  if ( a1 )
    return func_b;
  else
    return func_a;
}


/* Function: call_ret_func_ptr @ 0x22E3 */
int call_ret_func_ptr()
{
  int (__cdecl *v1)(int); // [esp+Ch] [ebp-Ch]

  v1 = ret_func_ptr(1);
  return v1(5);
}


/* Function: ret_opaque_handle @ 0x2313 */
void *__cdecl ret_opaque_handle(int a1)
{
  if ( a1 )
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
int __cdecl ret_complex_expr(int a1, int a2, int a3)
{
  if ( a1 <= a2 )
    return a3 + 10;
  else
    return 2 * a3;
}


/* Function: call_ret_complex_expr @ 0x238A */
int call_ret_complex_expr()
{
  int v1; // [esp+8h] [ebp-8h]

  v1 = ret_complex_expr(5, 3, 10);
  return v1 + ret_complex_expr(3, 5, 10);
}


/* Function: ret_multi_branch @ 0x23CA */
int __cdecl ret_multi_branch(int a1)
{
  if ( a1 == 2 )
    return 30;
  if ( a1 > 2 )
    return -1;
  if ( !a1 )
    return 10;
  if ( a1 == 1 )
    return 20;
  else
    return -1;
}


/* Function: call_ret_multi_branch @ 0x2411 */
int call_ret_multi_branch()
{
  int v1; // [esp+Ch] [ebp-4h]
  int v2; // [esp+Ch] [ebp-4h]

  v1 = ret_multi_branch(0);
  v2 = ret_multi_branch(1) + v1;
  return ret_multi_branch(2) + v2;
}


/* Function: ret_void @ 0x2458 */
_DWORD *__cdecl ret_void(int a1, _DWORD *a2)
{
  _DWORD *result; // eax

  result = a2;
  *a2 = 3 * a1;
  return result;
}


/* Function: call_ret_void @ 0x247A */
__int64 call_ret_void()
{
  __int64 result; // rax
  int v1; // [esp+8h] [ebp-10h] BYREF
  unsigned int v2; // [esp+Ch] [ebp-Ch]

  v2 = __readgsdword(0x14u);
  ret_void(7, &v1);
  LODWORD(result) = v1;
  HIDWORD(result) = v2 - __readgsdword(0x14u);
  return result;
}


/* Function: test_return_values @ 0x24BD */
int test_return_values()
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
  return printf(aRetL303D, v8);
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

/* Total functions decompiled: 92, failed: 6 */
