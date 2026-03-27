/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_gcc_O3_g
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
int __cdecl __noreturn test_cpp_exception()
{
  _DWORD *exception; // rax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x1310 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x1330 */
void __cdecl GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
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
int __cdecl test_cpp_member_func()
{
  SimpleClass obj; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v2; // [rsp+28h] [rbp-10h]

  v2 = __readfsqword(0x28u);
  *(_QWORD *)obj.name = 1953719636;
  memset(&obj.name[8], 0, 24);
  return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x14D0 */
int __cdecl test_cpp_constructor()
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1500 */
int __cdecl test_cpp_virtual_func()
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1510 */
int __cdecl test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1520 */
int __cdecl test_cpp_diamond_inheritance()
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1530 */
int __cdecl test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1540 */
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
  a = 10;
  r2 = template_max<double>(1.5, v0);
  b = 20;
  template_swap<int>(&a, &b);
  return b + a + v1 + (int)r2;
}


/* Function: _Z23test_cpp_template_classv @ 0x15E0 */
int __cdecl test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x15F0 */
int __cdecl test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1600 */
int __cdecl test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x1610 */
int __cdecl test_cpp_rtti()
{
  __int64 *v0; // r13
  _QWORD *v1; // rax
  __int64 v2; // r15
  const void *v3; // rbp
  __int64 v4; // rax
  const char *v5; // r12
  int v6; // r14d
  int v7; // r12d
  int v9; // ebx

  v0 = (__int64 *)operator new(8u);
  *v0 = (__int64)off_3C70;
  v1 = (_QWORD *)operator new(8u);
  v2 = *v0;
  v3 = v1;
  *v1 = off_3C98;
  v4 = *(_QWORD *)(v2 - 8);
  v5 = *(const char **)(v4 + 8);
  if ( v5 == "12RTTIDerivedA" )
  {
    v6 = 30;
  }
  else if ( *v5 == 42 )
  {
    v6 = 20;
  }
  else
  {
    v6 = strcmp(*(const char **)(v4 + 8), "12RTTIDerivedA") == 0 ? 30 : 20;
  }
  v9 = v6;
  if ( __dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v9 = v6 + 100;
  }
  if ( __dynamic_cast(
         v3,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v9 += 200;
  }
  v7 = v9 + strlen(&v5[*v5 == 42]);
  (*(void (__fastcall **)(__int64 *))(v2 + 8))(v0);
  (*(void (__fastcall **)(const void *))(*(_QWORD *)v3 + 8LL))(v3);
  return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1780 */
void __cdecl __noreturn test_cpp_oo_features()
{
  double v0; // xmm2_8
  int v1; // eax
  int v2; // ebx
  double v3; // [rsp+8h] [rbp-50h]
  int a; // [rsp+18h] [rbp-40h] BYREF
  int b; // [rsp+1Ch] [rbp-3Ch] BYREF
  char s[8]; // [rsp+24h] [rbp-34h] BYREF
  __int64 v7; // [rsp+2Ch] [rbp-2Ch]
  __int64 v8; // [rsp+34h] [rbp-24h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  __int16 v10; // [rsp+40h] [rbp-18h]
  char v11; // [rsp+42h] [rbp-16h]
  char v12; // [rsp+43h] [rbp-15h]
  unsigned __int64 v13; // [rsp+48h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  puts(::s);
  *(_QWORD *)s = 1953719636;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v1 = strlen(s);
  __printf_chk(1, &unk_203C, (unsigned int)(v1 + 4700));
  __printf_chk(1, &unk_205A, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
  __printf_chk(1, &unk_2076, 42);
  __printf_chk(1, &unk_2092, 71);
  __printf_chk(1, &unk_20AE, 650);
  __printf_chk(1, &unk_20CB, 22);
  v2 = template_max<int>(3, 7);
  a = 10;
  v3 = template_max<double>(1.5, v0);
  b = 20;
  template_swap<int>(&a, &b);
  __printf_chk(1, &unk_20E7, (unsigned int)(b + a + v2 + (int)v3));
  __printf_chk(1, &unk_2103, 16);
  __printf_chk(1, &unk_211F, 85);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1990 */
int __fastcall Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x19A0 */
const char *__fastcall Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x19B0 */
void __fastcall Base::~Base(Base *const this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x19C0 */
int __fastcall Derived::virtual_func(Derived *const this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x19D0 */
const char *__fastcall Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x19E0 */
int __fastcall MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x19F0 */
int __fastcall MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x1A00 */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1A10 */
int __fastcall MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x1A30 */
__int64 __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(int *)((char *)&this->dataA
                               + *((_QWORD *)this->_vptr_MiddleA - 3)
                               + *(*(_QWORD **)((char *)&this->_vptr_MiddleA + *((_QWORD *)this->_vptr_MiddleA - 3)) - 3))
                      + 150);
}


/* Function: _ZN7MiddleB4funcEv @ 0x1A50 */
int __fastcall MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_QWORD *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x1A70 */
__int64 __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(int *)((char *)&this->dataB
                               + *((_QWORD *)this->_vptr_MiddleB - 3)
                               + *(*(_QWORD **)((char *)&this->_vptr_MiddleB + *((_QWORD *)this->_vptr_MiddleB - 3)) - 3))
                      + 200);
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1A90 */
int __fastcall DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x1AB0 */
__int64 __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(int *)((char *)&this->dataA
                               + *((_QWORD *)this->_vptr_MiddleA - 3)
                               + *(*(_QWORD **)((char *)&this->_vptr_MiddleA + *((_QWORD *)this->_vptr_MiddleA - 3)) - 3))
                      + 250);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x1AD0 */
__int64 __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*((_QWORD *)&this[-1].dataB + 1) - 24LL) - 8) + 250);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1AF0 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1B00 */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1B10 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1B20 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1B30 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  ;
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x1B40 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x1B50 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1B60 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x1B70 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1B80 */
void __fastcall Derived::~Derived(Derived *const this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x1B90 */
void __fastcall Base::~Base(Base *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1BA0 */
void __fastcall Derived::~Derived(Derived *const this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1BB0 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x1BC0 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(&this[-1].BaseB, 0x20u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1BE0 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1BF0 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1C00 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  operator delete(this, 0x30u);
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x1C10 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *((_QWORD *)this->_vptr_MiddleA - 4), 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x1C30 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(&this[-1].dataB + 2, 0x30u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1C50 */
int __fastcall template_max<int>(int a, int b)
{
  int result; // eax

  result = b;
  if ( a >= b )
    return a;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1C60 */
double __fastcall template_max<double>(double a1, double a, double b)
{
  return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1C70 */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // eax

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1C80 */
void __fastcall Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x1C90 */
void __fastcall Container<int>::push(Container<int> *const this, int value)
{
  __int64 size; // rax

  size = this->size;
  if ( (int)size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1CB0 */
int __fastcall Container<int>::get(const Container<int> *const this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1CD0 */
int __fastcall Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1CE0 */
void __fastcall Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1CF0 */
void __fastcall Container<double>::push(Container<double> *const this, double a2, double value)
{
  __int64 size; // rax

  size = this->size;
  if ( (int)size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = a2;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1D10 */
double __fastcall Container<double>::get(const Container<double> *const this, int idx)
{
  double result; // xmm0_8

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1D40 */
int __fastcall Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: .term_proc @ 0x1D48 */
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
