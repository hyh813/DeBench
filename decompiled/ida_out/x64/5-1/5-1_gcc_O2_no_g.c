/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_gcc_O2_no_g
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


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1020();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1020();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1020();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1020();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1020();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1020();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1020();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
  sub_1020();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
  sub_1020();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
  sub_1020();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
  sub_1020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x1240 */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // rax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x1310 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
  return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x1360 */
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


/* Function: deregister_tm_clones @ 0x1390 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x13C0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x1400 */
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


/* Function: frame_dummy @ 0x1440 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x1450 */
__int64 test_cpp_member_func(void)
{
  char s[8]; // [rsp+4h] [rbp-34h] BYREF
  __int64 v2; // [rsp+Ch] [rbp-2Ch]
  __int64 v3; // [rsp+14h] [rbp-24h]
  int v4; // [rsp+1Ch] [rbp-1Ch]
  __int16 v5; // [rsp+20h] [rbp-18h]
  char v6; // [rsp+22h] [rbp-16h]
  char v7; // [rsp+23h] [rbp-15h]
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = 0;
  *(_QWORD *)s = 1953719636;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v7 = 0;
  return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
__int64 test_cpp_constructor(void)
{
  return (unsigned int)(1001 * LifecycleClass::instance_count + 21);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
__int64 __fastcall call_virtual_func(Base *a1)
{
  return (**(__int64 (__fastcall ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
__int64 test_cpp_virtual_func(void)
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
__int64 test_cpp_multiple_inheritance(void)
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
__int64 test_cpp_diamond_inheritance(void)
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
__int64 test_cpp_operator_overload(void)
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
__int64 test_cpp_template_func(void)
{
  int v0; // ebx
  double v2; // [rsp+8h] [rbp-20h]
  int v3; // [rsp+10h] [rbp-18h] BYREF
  int v4; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  v0 = template_max<int>(3, 7);
  v3 = 10;
  v2 = template_max<double>(2.5, 1.5);
  v4 = 20;
  template_swap<int>(&v3, &v4);
  return (unsigned int)(v4 + v3 + v0 + (int)v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
__int64 test_cpp_template_class(void)
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
__int64 test_cpp_lambda(void)
{
  return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
__int64 test_cpp_smart_ptr(void)
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
__int64 test_cpp_rtti(void)
{
  int v0; // ebx
  __int64 *v1; // r13
  _QWORD *v2; // rax
  __int64 v3; // r14
  const void *v4; // rbp
  __int64 v5; // rax
  const char *v6; // r12
  int v7; // ebx
  unsigned int v8; // r12d

  v0 = 10;
  v1 = (__int64 *)operator new(8u);
  *v1 = (__int64)off_3C70;
  v2 = (_QWORD *)operator new(8u);
  v3 = *v1;
  v4 = v2;
  *v2 = off_3C98;
  v5 = *(_QWORD *)(v3 - 8);
  v6 = *(const char **)(v5 + 8);
  if ( v6 != "12RTTIDerivedA" )
  {
    v0 = 0;
    if ( *v6 != 42 )
      v0 = strcmp(*(const char **)(v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
  }
  v7 = v0 + 20;
  if ( __dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v7 += 100;
  }
  if ( __dynamic_cast(
         v4,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v7 += 200;
  }
  v8 = v7 + strlen(&v6[*v6 == 42]);
  (*(void (__fastcall **)(__int64 *))(v3 + 8))(v1);
  (*(void (__fastcall **)(const void *))(*(_QWORD *)v4 + 8LL))(v4);
  return v8;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1740 */
void __noreturn test_cpp_oo_features(void)
{
  int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  char s[8]; // [rsp+4h] [rbp-34h] BYREF
  __int64 v5; // [rsp+Ch] [rbp-2Ch]
  __int64 v6; // [rsp+14h] [rbp-24h]
  int v7; // [rsp+1Ch] [rbp-1Ch]
  __int16 v8; // [rsp+20h] [rbp-18h]
  char v9; // [rsp+22h] [rbp-16h]
  char v10; // [rsp+23h] [rbp-15h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  puts(::s);
  *(_QWORD *)s = 1953719636;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v0 = strlen(s);
  __printf_chk(1, &unk_203C, (unsigned int)(v0 + 4700));
  v1 = test_cpp_constructor();
  __printf_chk(1, &unk_205A, v1);
  __printf_chk(1, &unk_2076, 42);
  __printf_chk(1, &unk_2092, 71);
  v2 = test_cpp_diamond_inheritance();
  __printf_chk(1, &unk_20AE, v2);
  __printf_chk(1, &unk_20CB, 22);
  v3 = test_cpp_template_func();
  __printf_chk(1, &unk_20E7, v3);
  __printf_chk(1, &unk_2103, 16);
  __printf_chk(1, &unk_211F, 85);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x18F0 */
__int64 __fastcall Base::virtual_func(Base *this, int a2)
{
  return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x1900 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1910 */
void __fastcall Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1920 */
__int64 __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return (unsigned int)(a2 * *((_DWORD *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x1930 */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1940 */
__int64 __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1950 */
__int64 __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1960 */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1970 */
__int64 __fastcall MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1990 */
__int64 __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this
                                  + *(_QWORD *)(*(_QWORD *)this - 24LL)
                                  + *(_QWORD *)(*(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) - 24LL)
                                  + 8)
                      + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x19B0 */
__int64 __fastcall MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x19D0 */
__int64 __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this
                                  + *(_QWORD *)(*(_QWORD *)this - 24LL)
                                  + *(_QWORD *)(*(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) - 24LL)
                                  + 8)
                      + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x19F0 */
__int64 __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1A10 */
__int64 __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this
                                  + *(_QWORD *)(*(_QWORD *)this - 24LL)
                                  + *(_QWORD *)(*(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) - 24LL)
                                  + 8)
                      + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1A30 */
__int64 __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*((_QWORD *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1A50 */
__int64 __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1A60 */
__int64 __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1A70 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1A80 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1A90 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1AA0 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1AB0 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1AC0 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1AD0 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1AE0 */
void __fastcall Derived::~Derived(Derived *this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x1AF0 */
void __fastcall Base::~Base(Base *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1B00 */
void __fastcall Derived::~Derived(Derived *this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1B10 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1B20 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete((char *)this - 16, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1B40 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1B50 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1B60 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1B70 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1B90 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this - 16, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1BB0 */
__int64 __fastcall template_max<int>(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( (int)a1 >= (int)a2 )
    return a1;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1BC0 */
double __fastcall template_max<double>(double a1, double a2)
{
  return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1BD0 */
__int64 __fastcall template_swap<int>(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  *a1 = *a2;
  *a2 = result;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1BE0 */
void __fastcall Container<int>::Container(__int64 a1)
{
  *(_DWORD *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1BF0 */
__int64 __fastcall Container<int>::push(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(int *)(a1 + 40);
  if ( (int)result <= 9 )
  {
    *(_DWORD *)(a1 + 40) = result + 1;
    *(_DWORD *)(a1 + 4 * result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1C10 */
__int64 __fastcall Container<int>::get(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 40) > a2 )
    return *(unsigned int *)(a1 + 4LL * a2);
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1C30 */
__int64 __fastcall Container<int>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1C40 */
void __fastcall Container<double>::Container(__int64 a1)
{
  *(_DWORD *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1C50 */
__int64 __fastcall Container<double>::push(__int64 a1, double a2)
{
  __int64 result; // rax

  result = *(int *)(a1 + 80);
  if ( (int)result <= 9 )
  {
    *(_DWORD *)(a1 + 80) = result + 1;
    *(double *)(a1 + 8 * result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1C70 */
double __fastcall Container<double>::get(__int64 a1, int a2)
{
  double result; // xmm0_8

  result = 0.0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 80) > a2 )
    return *(double *)(a1 + 8LL * a2);
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1CA0 */
__int64 __fastcall Container<double>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 80);
}


/* Function: .term_proc @ 0x1CA8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __printf_chk @ 0x4048 */

/* FAILED to decompile: __cxa_begin_catch @ 0x4050 */

/* FAILED to decompile: strlen @ 0x4058 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4060 */

/* FAILED to decompile: __libc_start_main @ 0x4070 */

/* FAILED to decompile: __cxa_atexit @ 0x4078 */

/* FAILED to decompile: _Znwm @ 0x4080 */

/* FAILED to decompile: _ZdlPvm @ 0x4088 */

/* FAILED to decompile: __stack_chk_fail @ 0x4090 */

/* FAILED to decompile: __dynamic_cast @ 0x4098 */

/* FAILED to decompile: strcmp @ 0x40A8 */

/* FAILED to decompile: __cxa_rethrow @ 0x40B0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40B8 */

/* FAILED to decompile: puts @ 0x40C0 */

/* FAILED to decompile: __cxa_end_catch @ 0x40C8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D8 */

/* FAILED to decompile: _Unwind_Resume @ 0x40E0 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40E8 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x40F0 */

/* FAILED to decompile: __gmon_start__ @ 0x4100 */

/* Total functions decompiled: 85, failed: 21 */
