/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_clang_O1_no_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x2000 */
__int64 (**init_proc())(void)
{
  __int64 (**result)(void); // rax

  result = &_gmon_start__;
  if ( &_gmon_start__ )
    return (__int64 (**)(void))_gmon_start__();
  return result;
}


/* Function: sub_2020 @ 0x2020 */
void sub_2020()
{
  JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x2150 */
int GLOBAL__sub_I_5_1_cpp()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x2180 */
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


/* Function: deregister_tm_clones @ 0x21B0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x21E0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x2220 */
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


/* Function: frame_dummy @ 0x2260 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x2270 */
__int64 test_cpp_member_func(void)
{
  _BYTE s[31]; // [rsp+4h] [rbp-24h] BYREF
  char v2; // [rsp+23h] [rbp-5h]

  *(_OWORD *)s = xmmword_3262;
  *(_OWORD *)&s[15] = *(__int128 *)((char *)&xmmword_3262 + 15);
  v2 = 0;
  return (unsigned int)strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x22B0 */
__int64 test_cpp_constructor(void)
{
  _DWORD *v0; // rax
  __int64 v1; // rcx
  _DWORD *v2; // rdx
  int v3; // ebx

  v0 = (_DWORD *)operator new[](0x14u);
  v1 = 0;
  v2 = v0;
  do
  {
    *v2 = v1;
    v1 += 10;
    ++v2;
  }
  while ( v1 != 50 );
  ++LifecycleClass::instance_count;
  v3 = v0[2] + LifecycleClass::instance_count;
  operator delete[](v0);
  --LifecycleClass::instance_count;
  return (unsigned int)(v3 + 1000 * LifecycleClass::instance_count);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x2310 */
__int64 __fastcall call_virtual_func(Base *a1)
{
  return (**(__int64 (__fastcall ***)(Base *))a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x2320 */
__int64 test_cpp_virtual_func(void)
{
  int v0; // ebx
  __int64 v2; // [rsp+8h] [rbp-20h] BYREF
  int v3; // [rsp+10h] [rbp-18h]
  __int64 (__fastcall **v4)(Base *__hidden, int); // [rsp+18h] [rbp-10h] BYREF

  v4 = &off_59C8;
  v3 = 3;
  v0 = Base::virtual_func((Base *)&v4, 5);
  return v0 + (unsigned int)Derived::virtual_func((Derived *)&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2380 */
__int64 test_cpp_multiple_inheritance(void)
{
  int v0; // ebx
  __int64 (__fastcall **v2)(MultiDerived *__hidden); // [rsp+8h] [rbp-30h] BYREF
  int v3; // [rsp+10h] [rbp-28h]
  __int64 (__fastcall **v4)(MultiDerived *__hidden); // [rsp+18h] [rbp-20h] BYREF
  int v5; // [rsp+20h] [rbp-18h]

  v2 = &off_5A50;
  v4 = &off_5A80;
  v3 = 100;
  v5 = 200;
  v0 = MultiDerived::funcA((MultiDerived *)&v2);
  return v0 + (unsigned int)(*v4)((MultiDerived *)&v4) + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x23E0 */
__int64 test_cpp_diamond_inheritance(void)
{
  int v0; // ebp
  _DWORD v2[2]; // [rsp+10h] [rbp-38h]
  __int64 (__fastcall **v3)(DiamondDerived *__hidden); // [rsp+18h] [rbp-30h]
  __int64 (__fastcall **v4)(DiamondDerived *__hidden); // [rsp+28h] [rbp-20h] BYREF
  int v5; // [rsp+30h] [rbp-18h]

  v4 = &off_5BC0;
  v3 = &off_5B88;
  v5 = 50;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&v4);
  *(_DWORD *)((char *)v2 + (_QWORD)*(&off_5B58 - 3)) = 100;
  return v0 + (unsigned int)(*v4)((DiamondDerived *)&v4);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x2450 */
__int64 test_cpp_operator_overload(void)
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2460 */
__int64 test_cpp_template_func(void)
{
  return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x2470 */
__int64 test_cpp_template_class(void)
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x2480 */
__int64 test_cpp_lambda(void)
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2490 */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // rax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2550 */
__int64 test_cpp_smart_ptr(void)
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x2560 */
__int64 test_cpp_rtti(void)
{
  void *v0; // r14
  void *v1; // r13
  const char *v2; // r15
  int v3; // ebx
  const char *v4; // rdi
  bool v5; // al
  int v6; // ebp
  int v7; // ebx
  int v8; // ebp
  int v9; // ebx

  v0 = (void *)operator new(8u);
  *(_QWORD *)v0 = off_5D78;
  v1 = (void *)operator new(8u);
  *(_QWORD *)v1 = off_5DA0;
  v2 = *(const char **)(*(_QWORD *)(*(_QWORD *)v0 - 8LL) + 8LL);
  if ( v2 == "12RTTIDerivedA" )
  {
    v3 = 10;
  }
  else
  {
    v3 = 0;
    if ( *v2 != 42 )
    {
      v3 = 10;
      if ( strcmp(*(const char **)(*(_QWORD *)(*(_QWORD *)v0 - 8LL) + 8LL), "12RTTIDerivedA") )
        v3 = 0;
    }
  }
  v4 = *(const char **)(*(_QWORD *)(*(_QWORD *)v1 - 8LL) + 8LL);
  v5 = v4 == "12RTTIDerivedB" || *v4 != 42 && strcmp(v4, "12RTTIDerivedB") == 0;
  v6 = v3 | 0x14;
  if ( !v5 )
    v6 = v3;
  v7 = v6 + 100;
  if ( !__dynamic_cast(
          v0,
          (const struct __class_type_info *)&`typeinfo for'RTTIBase,
          (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
          0) )
    v7 = v6;
  v8 = v7 + 200;
  if ( !__dynamic_cast(
          v1,
          (const struct __class_type_info *)&`typeinfo for'RTTIBase,
          (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
          0) )
    v8 = v7;
  v9 = strlen(&v2[*v2 == 42]);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v0 + 8LL))(v0);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v1 + 8LL))(v1);
  return (unsigned int)(v8 + v9);
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x26A0 */
void __noreturn test_cpp_oo_features(void)
{
  int v0; // eax
  __int64 v1; // rbx
  _DWORD *v2; // rax
  _DWORD *v3; // rcx
  int v4; // ebx
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  _BYTE s[40]; // [rsp+0h] [rbp-48h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  __int64 (__fastcall **v12)(Base *__hidden, int); // [rsp+30h] [rbp-18h] BYREF

  puts(::s);
  *(_OWORD *)&s[4] = xmmword_3262;
  memset(&s[19], 0, 17);
  *(_DWORD *)s = 10;
  v0 = strlen(&s[4]);
  v1 = 0;
  printf(format, (unsigned int)(v0 + 4700));
  v2 = (_DWORD *)operator new[](0x14u);
  v3 = v2;
  do
  {
    *v3 = v1;
    v1 += 10;
    ++v3;
  }
  while ( v1 != 50 );
  ++LifecycleClass::instance_count;
  v4 = v2[2] + LifecycleClass::instance_count;
  operator delete[](v2);
  --LifecycleClass::instance_count;
  printf(aCppL302D, (unsigned int)(v4 + 1000 * LifecycleClass::instance_count));
  v12 = &off_59C8;
  *(_QWORD *)s = &off_5A08;
  *(_DWORD *)&s[8] = 3;
  v5 = Base::virtual_func((Base *)&v12, 5);
  v6 = (**(__int64 (__fastcall ***)(_BYTE *, __int64))s)(s, 5);
  printf(aCppL303D, (unsigned int)(v5 + v6 + 21));
  *(_QWORD *)s = &off_5A50;
  *(_QWORD *)&s[16] = &off_5A80;
  *(_DWORD *)&s[8] = 100;
  *(_DWORD *)&s[24] = 200;
  v7 = `non-virtual thunk to'MultiDerived::funcB((MultiDerived *)&s[16]);
  printf(aCppL304D, (unsigned int)(v7 + 31));
  *(_QWORD *)s = &off_5B58;
  *(_QWORD *)&s[32] = &off_5BC0;
  *(_QWORD *)&s[16] = &off_5B88;
  v11 = 50;
  v8 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&s[32]);
  *(_DWORD *)&s[*(_QWORD *)(*(_QWORD *)s - 24LL) + 8] = 100;
  v9 = (**(__int64 (__fastcall ***)(_BYTE *))&s[32])(&s[32]);
  printf(aCppL305D, (unsigned int)(v9 + v8));
  printf(aCppL306D, 22);
  printf(aCppL307D, 39);
  printf(aCppL308D, 16);
  printf(aCppL309D, 85);
  test_cpp_exception();
}


/* Function: main @ 0x28F0 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2900 */
__int64 __fastcall Base::virtual_func(Base *this, int a2)
{
  return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2910 */
__int64 __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return (unsigned int)(*((_DWORD *)this + 2) * a2);
}


/* Function: _ZN4BaseD2Ev @ 0x2920 */
void __fastcall Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2930 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2940 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2950 */
__int64 __fastcall template_max<int>(unsigned int a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( (int)a1 > (int)a2 )
    return a1;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2960 */
double __fastcall template_max<double>(double a1, double a2)
{
  return fmax(a1, a2);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2970 */
__int64 __fastcall template_swap<int>(_DWORD *a1, _DWORD *a2)
{
  __int64 result; // rax

  result = (unsigned int)*a1;
  *a1 = *a2;
  *a2 = result;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2980 */
void __fastcall Container<int>::Container(__int64 a1)
{
  *(_DWORD *)(a1 + 40) = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2990 */
__int64 __fastcall Container<int>::push(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(int *)(a1 + 40);
  if ( result <= 9 )
  {
    *(_DWORD *)(a1 + 40) = result + 1;
    *(_DWORD *)(a1 + 4 * result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x29B0 */
__int64 __fastcall Container<int>::get(__int64 a1, int a2)
{
  __int64 result; // rax

  result = 0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 40) > a2 )
    return *(unsigned int *)(a1 + 4LL * a2);
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x29D0 */
__int64 __fastcall Container<int>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x29E0 */
void __fastcall Container<double>::Container(__int64 a1)
{
  *(_DWORD *)(a1 + 80) = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x29F0 */
__int64 __fastcall Container<double>::push(__int64 a1, double a2)
{
  __int64 result; // rax

  result = *(int *)(a1 + 80);
  if ( result <= 9 )
  {
    *(_DWORD *)(a1 + 80) = result + 1;
    *(double *)(a1 + 8 * result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2A10 */
double __fastcall Container<double>::get(__int64 a1, int a2)
{
  double result; // xmm0_8

  result = 0.0;
  if ( a2 >= 0 && *(_DWORD *)(a1 + 80) > a2 )
    return *(double *)(a1 + 8LL * a2);
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2A30 */
__int64 __fastcall Container<double>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNK4Base7getNameEv @ 0x2A40 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x2A50 */
void __fastcall Base::~Base(Base *this)
{
  operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A60 */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x2A70 */
void __fastcall Derived::~Derived(Derived *this)
{
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A80 */
__int64 __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2A90 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2AA0 */
__int64 __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2AB0 */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AC0 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2AD0 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete((char *)this - 16);
}


/* Function: _ZN5BaseA5funcAEv @ 0x2AE0 */
__int64 __fastcall BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2AF0 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  ;
}


/* Function: _ZN5BaseAD0Ev @ 0x2B00 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2B10 */
__int64 __fastcall BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2B20 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  ;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B30 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2B40 */
__int64 __fastcall MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B60 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x2B70 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2B80 */
__int64 __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this
                                  + *(_QWORD *)(*(_QWORD *)this - 24LL)
                                  + *(_QWORD *)(*(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) - 24LL)
                                  + 8)
                      + 150);
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2BA0 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  ;
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2BB0 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  operator delete((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2BC0 */
__int64 __fastcall MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x2BE0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x2BF0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2C00 */
__int64 __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this
                                  + *(_QWORD *)(*(_QWORD *)this - 24LL)
                                  + *(_QWORD *)(*(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) - 24LL)
                                  + 8)
                      + 200);
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2C20 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  ;
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C30 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  operator delete((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2C40 */
__int64 __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2C60 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2C70 */
__int64 __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*((_QWORD *)this - 2) - 24LL) - 8) + 250);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2C90 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2CA0 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this - 16);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2CB0 */
__int64 __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this
                                  + *(_QWORD *)(*(_QWORD *)this - 24LL)
                                  + *(_QWORD *)(*(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) - 24LL)
                                  + 8)
                      + 250);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2CD0 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2CE0 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2CF0 */
__int64 __fastcall VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2D00 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2D10 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2D20 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2D30 */
__int64 __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x2D40 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2D50 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2D60 */
__int64 __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: .term_proc @ 0x2D68 */
void term_proc()
{
  ;
}


/* FAILED to decompile: _Znam @ 0x60E8 */

/* FAILED to decompile: printf @ 0x60F8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6100 */

/* FAILED to decompile: strlen @ 0x6108 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6110 */

/* FAILED to decompile: __libc_start_main @ 0x6120 */

/* FAILED to decompile: __cxa_atexit @ 0x6128 */

/* FAILED to decompile: _ZdlPv @ 0x6130 */

/* FAILED to decompile: _Znwm @ 0x6138 */

/* FAILED to decompile: __dynamic_cast @ 0x6140 */

/* FAILED to decompile: _ZdaPv @ 0x6148 */

/* FAILED to decompile: strcmp @ 0x6158 */

/* FAILED to decompile: __cxa_rethrow @ 0x6160 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x6168 */

/* FAILED to decompile: puts @ 0x6170 */

/* FAILED to decompile: __cxa_end_catch @ 0x6178 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6180 */

/* FAILED to decompile: __cxa_throw @ 0x6188 */

/* FAILED to decompile: _Unwind_Resume @ 0x6198 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x61A0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x61A8 */

/* FAILED to decompile: __gmon_start__ @ 0x61B8 */

/* Total functions decompiled: 84, failed: 22 */
