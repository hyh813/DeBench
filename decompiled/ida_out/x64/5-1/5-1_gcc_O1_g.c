/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_gcc_O1_g
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


/* Function: sub_2030 @ 0x2030 */
void sub_2030()
{
  sub_2020();
}


/* Function: sub_2040 @ 0x2040 */
void sub_2040()
{
  sub_2020();
}


/* Function: sub_2050 @ 0x2050 */
void sub_2050()
{
  sub_2020();
}


/* Function: sub_2060 @ 0x2060 */
void sub_2060()
{
  sub_2020();
}


/* Function: sub_2070 @ 0x2070 */
void sub_2070()
{
  sub_2020();
}


/* Function: sub_2080 @ 0x2080 */
void sub_2080()
{
  sub_2020();
}


/* Function: sub_2090 @ 0x2090 */
void sub_2090()
{
  sub_2020();
}


/* Function: sub_20A0 @ 0x20A0 */
void sub_20A0()
{
  sub_2020();
}


/* Function: sub_20B0 @ 0x20B0 */
void sub_20B0()
{
  sub_2020();
}


/* Function: sub_20C0 @ 0x20C0 */
void sub_20C0()
{
  sub_2020();
}


/* Function: sub_20D0 @ 0x20D0 */
void sub_20D0()
{
  sub_2020();
}


/* Function: sub_20E0 @ 0x20E0 */
void sub_20E0()
{
  sub_2020();
}


/* Function: sub_20F0 @ 0x20F0 */
void sub_20F0()
{
  sub_2020();
}


/* Function: sub_2100 @ 0x2100 */
void sub_2100()
{
  sub_2020();
}


/* Function: sub_2110 @ 0x2110 */
void sub_2110()
{
  sub_2020();
}


/* Function: sub_2120 @ 0x2120 */
void sub_2120()
{
  sub_2020();
}


/* Function: sub_2130 @ 0x2130 */
void sub_2130()
{
  sub_2020();
}


/* Function: sub_2140 @ 0x2140 */
void sub_2140()
{
  sub_2020();
}


/* Function: _start @ 0x2280 */
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


/* Function: deregister_tm_clones @ 0x22B0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x22E0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x2320 */
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


/* Function: frame_dummy @ 0x2360 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x2369 */
int __cdecl test_cpp_member_func()
{
  SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v2; // [rsp+28h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  *(_QWORD *)obj.name = 1953719636;
  memset(&obj.name[8], 0, 24);
  return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x23DE */
int __cdecl test_cpp_constructor()
{
  _DWORD *v0; // rdi
  int v1; // eax
  int v2; // ebx

  v0 = (_DWORD *)operator new[](0x14u);
  v0[1] = 10;
  v0[2] = 20;
  v0[3] = 30;
  v0[4] = 40;
  v1 = LifecycleClass::instance_count++;
  v2 = v1 + 21;
  operator delete[](v0);
  --LifecycleClass::instance_count;
  return v2 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x243C */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x244E */
int __cdecl test_cpp_virtual_func()
{
  int v0; // ebx
  Base base; // [rsp+8h] [rbp-30h] BYREF
  Derived derived; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  base._vptr_Base = (int (**)(...))&off_59A0;
  derived._vptr_Base = (int (**)(...))&off_59D0;
  derived.multiplier = 3;
  v0 = call_virtual_func(&base, 5);
  return v0 + call_virtual_func(&derived, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24C6 */
int __cdecl test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x24D0 */
int __cdecl test_cpp_diamond_inheritance()
{
  int v0; // ebx
  DiamondDerived obj; // [rsp+0h] [rbp-58h] BYREF

  *((_QWORD *)&obj.dataB + 2) = __readfsqword(0x28u);
  obj._vptr_MiddleB = (int (**)(...))&off_5B78;
  obj.dataB = 50;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  obj.dataB = 100;
  return v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x254C */
int __cdecl test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2556 */
int __cdecl test_cpp_template_func()
{
  double v0; // xmm2_8
  int v1; // ebx
  double r2; // [rsp+8h] [rbp-20h]
  int a; // [rsp+10h] [rbp-18h] BYREF
  int b; // [rsp+14h] [rbp-14h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-10h]

  v6 = __readfsqword(0x28u);
  v1 = template_max<int>(3, 7);
  r2 = template_max<double>(1.5, v0);
  a = 10;
  b = 20;
  template_swap<int>(&a, &b);
  return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x25E5 */
int __cdecl test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x25EF */
int __cdecl test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x25F9 */
int __cdecl __noreturn test_cpp_exception()
{
  _DWORD *exception; // rdi

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x26D1 */
int __cdecl test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x26DB */
int __cdecl test_cpp_rtti()
{
  __int64 *v0; // r12
  void *v1; // r13
  __int64 v2; // r14
  const char *v3; // rbp
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx

  v0 = (__int64 *)operator new(8u);
  *v0 = (__int64)off_5BA0;
  v1 = (void *)operator new(8u);
  *(_QWORD *)v1 = off_5BC8;
  v2 = *v0;
  v3 = *(const char **)(*(_QWORD *)(*v0 - 8) + 8LL);
  v4 = 10;
  if ( v3 != "12RTTIDerivedA" )
  {
    v4 = 0;
    if ( *v3 != 42 )
      v4 = strcmp(*(const char **)(*(_QWORD *)(*v0 - 8) + 8LL), "12RTTIDerivedA") == 0 ? 0xA : 0;
  }
  v5 = v4 + 20;
  if ( __dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v5 += 100;
  }
  if ( __dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v5 += 200;
  }
  v6 = strlen(&v3[*v3 == 42]) + v5;
  (*(void (__fastcall **)(__int64 *))(v2 + 8))(v0);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v1 + 8LL))(v1);
  return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2801 */
void __cdecl __noreturn test_cpp_oo_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax

  puts(s);
  v0 = test_cpp_member_func();
  __printf_chk(1, &unk_303C, v0);
  v1 = test_cpp_constructor();
  __printf_chk(1, &unk_305A, v1);
  v2 = test_cpp_virtual_func();
  __printf_chk(1, &unk_3076, v2);
  v3 = test_cpp_multiple_inheritance();
  __printf_chk(1, &unk_3092, v3);
  v4 = test_cpp_diamond_inheritance();
  __printf_chk(1, &unk_30AE, v4);
  __printf_chk(1, &unk_30CB, 22);
  v5 = test_cpp_template_func();
  __printf_chk(1, &unk_30E7, v5);
  __printf_chk(1, &unk_3103, 16);
  __printf_chk(1, &unk_311F, 85);
  test_cpp_exception();
}


/* Function: main @ 0x2970 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2987 */
void __cdecl GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _ZN4Base12virtual_funcEi @ 0x29B4 */
int __fastcall Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x29BC */
const char *__fastcall Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x29C8 */
void __fastcall Base::~Base(Base *const this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x29CE */
int __fastcall Derived::virtual_func(Derived *const this, int x)
{
  return this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x29DA */
const char *__fastcall Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x29E6 */
int __fastcall MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x29F0 */
int __fastcall MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x29FA */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2A04 */
int __fastcall MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2A19 */
__int64 __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(int *)((char *)&this->dataA
                               + *((_QWORD *)this->_vptr_MiddleA - 3)
                               + *(*(_QWORD **)((char *)&this->_vptr_MiddleA + *((_QWORD *)this->_vptr_MiddleA - 3)) - 3))
                      + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x2A36 */
int __fastcall MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_QWORD *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2A4B */
__int64 __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(int *)((char *)&this->dataB
                               + *((_QWORD *)this->_vptr_MiddleB - 3)
                               + *(*(_QWORD **)((char *)&this->_vptr_MiddleB + *((_QWORD *)this->_vptr_MiddleB - 3)) - 3))
                      + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2A68 */
int __fastcall DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2A7D */
__int64 __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(int *)((char *)&this->dataA
                               + *((_QWORD *)this->_vptr_MiddleA - 3)
                               + *(*(_QWORD **)((char *)&this->_vptr_MiddleA + *((_QWORD *)this->_vptr_MiddleA - 3)) - 3))
                      + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2A99 */
__int64 __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*((_QWORD *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2AB0 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2ABA */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2AC4 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2ACA */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2AD0 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2AD5 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2ADA */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2AE0 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2AE5 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2AEA */
void __fastcall Derived::~Derived(Derived *const this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x2AF0 */
void __fastcall Base::~Base(Base *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2B08 */
void __fastcall Derived::~Derived(Derived *const this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2B20 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2B37 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2B52 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2B6A */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2B82 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2B99 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *((_QWORD *)this->_vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2BB7 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2BD2 */
int __fastcall template_max<int>(int a, int b)
{
  int result; // eax

  result = b;
  if ( a >= b )
    return a;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2BDE */
double __fastcall template_max<double>(double a1, double a, double b)
{
  return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2BE7 */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // eax

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2BF4 */
void __fastcall Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2C00 */
void __fastcall Container<int>::push(Container<int> *const this, int value)
{
  int size; // eax

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2C18 */
int __fastcall Container<int>::get(const Container<int> *const this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2C34 */
int __fastcall Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2C3C */
void __fastcall Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2C48 */
void __fastcall Container<double>::push(Container<double> *const this, double a2, double value)
{
  int size; // eax

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = a2;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2C62 */
double __fastcall Container<double>::get(const Container<double> *const this, int idx)
{
  double result; // xmm0_8

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2C7E */
int __fastcall Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: .term_proc @ 0x2C88 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: __libc_start_main @ 0x6078 */

/* FAILED to decompile: __cxa_atexit @ 0x6080 */

/* FAILED to decompile: _Znwm @ 0x6088 */

/* FAILED to decompile: _ZdlPvm @ 0x6090 */

/* FAILED to decompile: __stack_chk_fail @ 0x6098 */

/* FAILED to decompile: __dynamic_cast @ 0x60A0 */

/* FAILED to decompile: _ZdaPv @ 0x60A8 */

/* FAILED to decompile: strcmp @ 0x60B8 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C0 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60C8 */

/* FAILED to decompile: puts @ 0x60D0 */

/* FAILED to decompile: __cxa_end_catch @ 0x60D8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E0 */

/* FAILED to decompile: __cxa_throw @ 0x60E8 */

/* FAILED to decompile: _Unwind_Resume @ 0x60F8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6100 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6108 */

/* FAILED to decompile: __gmon_start__ @ 0x6118 */

/* Total functions decompiled: 87, failed: 23 */
