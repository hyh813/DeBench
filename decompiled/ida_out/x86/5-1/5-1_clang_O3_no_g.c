/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_clang_O3_no_g
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
  return (*(int (**)(void))(a1 - 24))();
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1140 */
int GLOBAL__sub_I_5_1_cpp()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x1180 */
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


/* Function: sub_11AC @ 0x11AC */
void sub_11AC()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x11B0 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x11C0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1200 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1250 */
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


/* Function: frame_dummy @ 0x12E0 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x12E9 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x12ED */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1300 */
size_t test_cpp_member_func(void)
{
  _WORD s[4]; // [esp+14h] [ebp-28h] BYREF
  int v2; // [esp+1Ch] [ebp-20h]
  int v3; // [esp+20h] [ebp-1Ch]
  int v4; // [esp+24h] [ebp-18h]
  int v5; // [esp+28h] [ebp-14h]
  _BYTE v6[8]; // [esp+2Ch] [ebp-10h] BYREF

  memset(v6, 0, sizeof(v6));
  v5 = 0;
  v4 = 0;
  v3 = 0;
  v2 = 0;
  HIBYTE(s[2]) = 0;
  s[3] = 0;
  strcpy((char *)s, "Test");
  return strlen((const char *)s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1380 */
int test_cpp_constructor(void)
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x13A0 */
int __cdecl call_virtual_func(int (__cdecl ***a1)(_DWORD, int), int a2)
{
  return (**a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x13D0 */
int test_cpp_virtual_func(void)
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x13E0 */
int test_cpp_multiple_inheritance(void)
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x13F0 */
int test_cpp_diamond_inheritance(void)
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1400 */
int test_cpp_operator_overload(void)
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1410 */
int test_cpp_template_func(void)
{
  return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1420 */
int test_cpp_template_class(void)
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1430 */
int test_cpp_lambda(void)
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1440 */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1530 */
int test_cpp_smart_ptr(void)
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1540 */
int test_cpp_rtti(void)
{
  _DWORD *v0; // eax
  const void *v1; // esi
  void *v2; // edi
  void *v3; // eax
  int v4; // esi
  int v5; // ebp
  void *v7; // [esp+8h] [ebp-14h]

  v0 = (_DWORD *)operator new(4u);
  *v0 = off_3ECC;
  v1 = v0;
  v7 = v0;
  v2 = (void *)operator new(4u);
  *(_DWORD *)v2 = off_3EE0;
  v3 = __dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0);
  v4 = 130;
  if ( !v3 )
    v4 = 30;
  v5 = v4 + 200;
  if ( !__dynamic_cast(
          v2,
          (const struct __class_type_info *)&`typeinfo for'RTTIBase,
          (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
          0) )
    v5 = v4;
  operator delete(v7);
  (*(void (__cdecl **)(void *))(*(_DWORD *)v2 + 4))(v2);
  return v5 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1600 */
void __noreturn test_cpp_oo_features(void)
{
  size_t v0; // eax
  char s[6]; // [esp+Ch] [ebp-30h] BYREF
  __int16 v2; // [esp+12h] [ebp-2Ah]
  int v3; // [esp+14h] [ebp-28h]
  int v4; // [esp+18h] [ebp-24h]
  int v5; // [esp+1Ch] [ebp-20h]
  int v6; // [esp+20h] [ebp-1Ch]
  _BYTE v7[8]; // [esp+24h] [ebp-18h] BYREF

  puts(asc_21D8);
  memset(v7, 0, sizeof(v7));
  v6 = 0;
  v5 = 0;
  v4 = 0;
  v3 = 0;
  s[5] = 0;
  v2 = 0;
  strcpy(s, "Test");
  v0 = strlen(s);
  printf(aCppL301D, v0 + 4700);
  printf(aCppL302D, 1001 * LifecycleClass::instance_count + 21);
  printf(aCppL303D, 42);
  printf(aCppL304D, 71);
  printf(aCppL305D, 650);
  printf(aCppL306D, 22);
  printf(aCppL307D, 39);
  printf(aCppL308D, 16);
  printf(aCppL309D, 85);
  test_cpp_exception();
}


/* Function: main @ 0x1810 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1830 */
int __cdecl template_max<int>(int a1, int a2)
{
  int result; // eax

  result = a2;
  if ( a1 > a2 )
    return a1;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1840 */
long double __cdecl template_max<double>(double a1, double a2)
{
  long double v2; // fst6

  v2 = a2;
  if ( a1 > (long double)a2 )
    return a1;
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1860 */
_DWORD *__cdecl template_swap<int>(int *a1, _DWORD *a2)
{
  _DWORD *result; // eax
  int v3; // edx

  result = a2;
  v3 = *a1;
  *a1 = *a2;
  *a2 = v3;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1880 */
int __cdecl Container<int>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1890 */
int __cdecl Container<int>::push(int a1, int a2)
{
  int result; // eax
  int v3; // ecx

  result = a1;
  v3 = *(_DWORD *)(a1 + 40);
  if ( v3 <= 9 )
  {
    *(_DWORD *)(a1 + 40) = v3 + 1;
    *(_DWORD *)(a1 + 4 * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x18B0 */
int __cdecl Container<int>::get(int a1, int a2)
{
  int result; // eax

  result = 0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 40) > a2 )
    return *(_DWORD *)(a1 + 4 * a2);
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x18D0 */
int __cdecl Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x18E0 */
int __cdecl Container<double>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x18F0 */
int __cdecl Container<double>::push(int a1, double a2)
{
  int result; // eax
  int v3; // ecx

  result = a1;
  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 <= 9 )
  {
    *(_DWORD *)(a1 + 80) = v3 + 1;
    *(double *)(a1 + 8 * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1910 */
long double __cdecl Container<double>::get(int a1, int a2)
{
  long double result; // fst7

  result = 0.0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 80) > a2 )
    return *(double *)(a1 + 8 * a2);
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1930 */
int __cdecl Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1940 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1970 */
int RTTIDerivedA::getType()
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1980 */
void RTTIBase::~RTTIBase()
{
  ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1990 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19C0 */
int RTTIDerivedB::getType()
{
  return 2;
}


/* Function: __do_global_ctors_aux @ 0x19D0 */
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


/* Function: .term_proc @ 0x1A1C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x4078 */

/* FAILED to decompile: __cxa_finalize @ 0x407C */

/* FAILED to decompile: __cxa_begin_catch @ 0x4080 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4084 */

/* FAILED to decompile: strlen @ 0x4088 */

/* FAILED to decompile: __cxa_atexit @ 0x408C */

/* FAILED to decompile: __libc_start_main @ 0x4094 */

/* FAILED to decompile: _ZdlPv @ 0x4098 */

/* FAILED to decompile: __dynamic_cast @ 0x409C */

/* FAILED to decompile: printf @ 0x40A4 */

/* FAILED to decompile: __cxa_rethrow @ 0x40A8 */

/* FAILED to decompile: puts @ 0x40AC */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40B4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40B8 */

/* FAILED to decompile: __cxa_throw @ 0x40BC */

/* FAILED to decompile: _Unwind_Resume @ 0x40C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40C4 */

/* Total functions decompiled: 46, failed: 18 */
