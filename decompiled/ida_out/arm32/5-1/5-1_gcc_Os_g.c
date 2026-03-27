/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x109B0 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_109BC @ 0x109BC */
void sub_109BC()
{
  JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10B08 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = 42;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x10BBC */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10BCC */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
}


/* Function: _start @ 0x10BFC */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))((char *)&loc_11448 + (_DWORD)&off_10C38),
    v4,
    (char **)&va,
    0,
    0,
    a1,
    &va);
  abort();
}


/* Function: call_weak_fn @ 0x10C40 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10C64 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10C90 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10CC8 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0x10CF0 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x10CF4 */
size_t test_cpp_member_func()
{
  SimpleClass obj; // [sp+0h] [bp-30h] BYREF

  strncpy(obj.name, "Test", 0x1Fu);
  obj.name[31] = 0;
  return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10D60 */
int test_cpp_constructor()
{
  return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10D7C */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr.Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10D88 */
int __fastcall test_cpp_virtual_func(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  Base base; // [sp+0h] [bp-18h] BYREF
  Derived derived; // [sp+4h] [bp-14h] BYREF
  int v8; // [sp+Ch] [bp-Ch]

  v8 = a4;
  base._vptr.Base = (int (**)(...))&off_11AF0;
  derived._vptr.Base = (int (**)(...))&off_11B08;
  derived.multiplier = 3;
  v4 = call_virtual_func(&base, 5);
  return v4 + 21 + call_virtual_func(&derived, 5);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10E08 */
int test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10E10 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10E18 */
int __fastcall test_cpp_template_func(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  double v5; // r6
  int a; // [sp+4h] [bp-1Ch] BYREF
  int b[6]; // [sp+8h] [bp-18h] BYREF

  b[1] = a4;
  v4 = template_max<int>(3, 7);
  v5 = template_max<double>(2.5, 1.5);
  a = 10;
  b[0] = 20;
  template_swap<int>(&a, b);
  return (int)v5 + v4 + a + b[0];
}


/* Function: _Z23test_cpp_template_classv @ 0x10EC0 */
int test_cpp_template_class()
{
  int v0; // r3
  int r2[10]; // [sp+0h] [bp-38h] BYREF
  int v3; // [sp+28h] [bp-10h]

  v3 = 1;
  r2[0] = 10;
  Container<int>::push((Container<int> *const)r2, 20);
  Container<int>::push((Container<int> *const)r2, 30);
  if ( v3 > 0 )
    v0 = r2[0];
  else
    v0 = 0;
  return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x10F40 */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F48 */
size_t test_cpp_rtti()
{
  void *v0; // r6
  void *v1; // r5
  int v2; // r4
  const char *v3; // r0
  size_t v4; // r4

  v0 = (void *)operator new(4u);
  *(_DWORD *)v0 = off_11C68;
  v1 = (void *)operator new(4u);
  *(_DWORD *)v1 = off_11C7C;
  if ( std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v0 - 4), &`typeinfo for'RTTIDerivedA) )
    v2 = 10;
  else
    v2 = 0;
  if ( std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v1 - 4), &`typeinfo for'RTTIDerivedB) )
    v2 += 20;
  if ( _dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v2 += 100;
  }
  if ( _dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v2 += 200;
  }
  v3 = *(const char **)(*(_DWORD *)(*(_DWORD *)v0 - 4) + 4);
  if ( *v3 == 42 )
    ++v3;
  v4 = v2 + strlen(v3);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v0 + 4))(v0);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v1 + 4))(v1);
  return v4;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11038 */
int __fastcall test_cpp_smart_ptr(int a1, int a2, int a3, int *a4)
{
  int *v4; // r0
  _DWORD *v5; // r0
  std::unique_ptr<int> ptr2; // [sp+0h] [bp-18h] BYREF
  std::unique_ptr<int []> arr; // [sp+8h] [bp-10h] BYREF

  arr._M_t._M_t._M_head_impl = a4;
  v4 = (int *)operator new(4u);
  *v4 = 200;
  ptr2._M_t._M_t._M_head_impl = v4;
  *(_DWORD *)&ptr2._M_t._M_t._M_head_impl.gap0 = 0;
  v5 = (_DWORD *)operator new[](0x14u);
  *v5 = 1;
  v5[1] = 2;
  v5[2] = 3;
  v5[3] = 4;
  *(_DWORD *)&arr._M_t._M_t._M_head_impl.gap0 = v5;
  v5[4] = 5;
  std::unique_ptr<int []>::~unique_ptr(&arr);
  std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int>::~unique_ptr(&ptr2);
  return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110EC */
int test_cpp_diamond_inheritance()
{
  int v0; // r4
  int v1; // r4
  DiamondDerived obj; // [sp+4h] [bp-24h] BYREF

  obj._vptr.MiddleA = (int (**)(...))&off_11C20;
  *(&obj.dataA + 1) = (int)&off_11C38;
  obj._vptr.MiddleB = (int (**)(...))&off_11C54;
  obj.dataB = 50;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  obj.dataB = 100;
  v1 = v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  DiamondDerived::~DiamondDerived(&obj);
  return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1117C */
void __noreturn test_cpp_oo_features()
{
  size_t v0; // r0
  int v1; // r0
  __int64 v2; // r0
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  __int64 v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r0

  puts(s);
  v0 = test_cpp_member_func();
  _printf_chk(1, &unk_1188A, v0);
  v1 = test_cpp_constructor();
  v2 = _printf_chk(1, &unk_118A8, v1);
  v5 = test_cpp_virtual_func(v2, SHIDWORD(v2), v3, v4);
  _printf_chk(1, &unk_118C4, v5);
  v6 = test_cpp_multiple_inheritance();
  _printf_chk(1, &unk_118E0, v6);
  v7 = test_cpp_diamond_inheritance();
  _printf_chk(1, &unk_118FC, v7);
  v8 = test_cpp_operator_overload();
  v9 = _printf_chk(1, &unk_11919, v8);
  v12 = test_cpp_template_func(v9, SHIDWORD(v9), v10, v11);
  _printf_chk(1, &unk_11935, v12);
  v13 = test_cpp_template_class();
  _printf_chk(1, &unk_11951, v13);
  v14 = test_cpp_lambda();
  _printf_chk(1, &unk_1196D, v14);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x112B0 */
int __fastcall Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x112B8 */
const char *__fastcall Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x112C4 */
void *__fastcall Base::~Base(Base *const this)
{
  return this;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x112C8 */
int __fastcall Derived::virtual_func(Derived *const this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x112D4 */
const char *__fastcall Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x112E0 */
int __fastcall MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x112E8 */
int __fastcall MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x112F0 */
int __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x112F8 */
int __fastcall VirtualBase::func(VirtualBase *const this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x11300 */
void *__fastcall VirtualBase::~VirtualBase(VirtualBase *const this)
{
  return this;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11304 */
int __fastcall MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1131C */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x11330 */
int __fastcall MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11348 */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *((_DWORD *)this->_vptr.MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1135C */
int __fastcall DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11374 */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11388 */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x11390 */
void *__fastcall MiddleA::~MiddleA(MiddleA *const this)
{
  this->_vptr.MiddleA = (int (**)(...))&off_11B2C;
  *(&this->dataA + 1) = (int)&off_11B48;
  return this;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x113A8 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  int v1; // r1

  v1 = *((_DWORD *)this->_vptr.MiddleA - 4);
  *(int (***)(...))((char *)&this->_vptr.MiddleA + v1) = (int (**)(...))&off_11B2C;
  *(int *)((char *)&this->dataA + v1 + 4) = (int)&off_11B48;
}


/* Function: _ZN7MiddleBD1Ev @ 0x113D0 */
void *__fastcall MiddleB::~MiddleB(MiddleB *const this)
{
  this->_vptr.MiddleB = (int (**)(...))&off_11B68;
  *(&this->dataB + 1) = (int)&off_11B84;
  return this;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x113E8 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  int v1; // r1

  v1 = *((_DWORD *)this->_vptr.MiddleB - 4);
  *(int (***)(...))((char *)&this->_vptr.MiddleB + v1) = (int (**)(...))&off_11B68;
  *(int *)((char *)&this->dataB + v1 + 4) = (int)&off_11B84;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x11410 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11418 */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11420 */
void *__fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  return this;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11424 */
void *__fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  return this;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11428 */
void *__fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  return this;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1142C */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11434 */
void *__fastcall Derived::~Derived(Derived *const this)
{
  return this;
}


/* Function: _ZN4BaseD0Ev @ 0x11438 */
void *__fastcall Base::~Base(Base *const this)
{
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN7DerivedD0Ev @ 0x11450 */
void *__fastcall Derived::~Derived(Derived *const this)
{
  operator delete(this, 8u);
  return this;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11468 */
void *__fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x10u);
  return this;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11480 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x11488 */
void *__fastcall VirtualBase::~VirtualBase(VirtualBase *const this)
{
  operator delete(this, 8u);
  return this;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x114A0 */
void *__fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x114B8 */
void *__fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN7MiddleAD0Ev @ 0x114D0 */
void *__fastcall MiddleA::~MiddleA(MiddleA *const this)
{
  this->_vptr.MiddleA = (int (**)(...))&off_11B2C;
  *(&this->dataA + 1) = (int)&off_11B48;
  operator delete(this, 0x10u);
  return this;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x114FC */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x11510 */
void *__fastcall MiddleB::~MiddleB(MiddleB *const this)
{
  this->_vptr.MiddleB = (int (**)(...))&off_11B68;
  *(&this->dataB + 1) = (int)&off_11B84;
  operator delete(this, 0x10u);
  return this;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1153C */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *((_DWORD *)this->_vptr.MiddleB - 4)));
}


/* Function: _ZN7MiddleAD2Ev @ 0x11550 */
void *__fastcall MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  _DWORD *v2; // r2

  v2 = *__vtt_parm;
  this->_vptr.MiddleA = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr.MiddleA + *(v2 - 3)) = (int (**)(...))__vtt_parm[1];
  return this;
}


/* Function: _ZN7MiddleBD2Ev @ 0x11568 */
void *__fastcall MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  _DWORD *v2; // r2

  v2 = *__vtt_parm;
  this->_vptr.MiddleB = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr.MiddleB + *(v2 - 3)) = (int (**)(...))__vtt_parm[1];
  return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11580 */
int __fastcall template_max<int>(int a, int b)
{
  if ( a < b )
    return b;
  return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1158C */
double __fastcall template_max<double>(double a, double b)
{
  double v2; // r4

  v2 = a;
  if ( a <= b )
    return b;
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x115BC */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // r3

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x115D0 */
Container<int> *__fastcall Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
  return this;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x115DC */
void __fastcall Container<int>::push(Container<int> *const this, int value)
{
  int size; // r3

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x115F4 */
int __fastcall Container<int>::get(const Container<int> *const this, int idx)
{
  if ( idx < 0 || this->size <= idx )
    return 0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11618 */
int __fastcall Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x11620 */
Container<double> *__fastcall Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
  return this;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1162C */
void __fastcall Container<double>::push(Container<double> *const this, int a2, double value)
{
  int size; // r1

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1164C */
double __fastcall Container<double>::get(const Container<double> *const this, int idx)
{
  double *v3; // t0

  if ( idx < 0 || idx >= this->size )
    return 0.0;
  v3 = &this->data[idx];
  return *v3;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11678 */
int __fastcall Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x11680 */
void *__fastcall std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
  void *v2; // r0

  v2 = *(void **)&this->_M_t._M_t._M_head_impl.gap0;
  if ( v2 )
    operator delete(v2, 4u);
  return this;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x116A4 */
void *__fastcall std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
  void *v2; // r0

  v2 = *(void **)&this->_M_t._M_t._M_head_impl.gap0;
  if ( v2 )
    operator delete[](v2);
  return this;
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x116C4 */
void *__fastcall DiamondDerived::~DiamondDerived(
        DiamondDerived *const this,
        const int __in_chrg,
        const void **const __vtt_parm)
{
  int v4; // r3
  int (**v7)(...); // r2
  _DWORD (**v8)(DiamondDerived *__hidden); // r3
  const void **v9; // r1
  const void **v10; // r1

  if ( __in_chrg )
    v4 = (int)&off_11C20;
  else
    v4 = (int)*__vtt_parm;
  this->_vptr.MiddleA = (int (**)(...))v4;
  if ( __in_chrg )
    v4 = 16;
  if ( __in_chrg )
  {
    v7 = (int (**)(...))&off_11C54;
  }
  else
  {
    v4 = *(_DWORD *)(v4 - 12);
    v7 = (int (**)(...))__vtt_parm[5];
  }
  *(int (***)(...))((char *)&this->_vptr.MiddleA + v4) = v7;
  if ( __in_chrg )
    v8 = &off_11C38;
  else
    v8 = (_DWORD (**)(DiamondDerived *__hidden))__vtt_parm[6];
  if ( __in_chrg )
    v9 = (const void **)&off_11C04;
  else
    v9 = __vtt_parm + 3;
  *(&this->dataA + 1) = (int)v8;
  MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 1), v9);
  if ( __in_chrg )
    v10 = (const void **)&off_11BFC;
  else
    v10 = __vtt_parm + 1;
  MiddleA::~MiddleA(this, v10);
  return this;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11748 */
void *__fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  return DiamondDerived::~DiamondDerived(this, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11754 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1175C */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11770 */
void *__fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
  return this;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11790 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x11798 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x117AC */
void *__fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this, const void **const __vtt_parm)
{
  return DiamondDerived::~DiamondDerived(this, 0, __vtt_parm);
}


/* Function: .term_proc @ 0x117B8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x220A0 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x220A4 */

/* FAILED to decompile: __imp_strncpy @ 0x220A8 */

/* FAILED to decompile: __imp__ZdaPv @ 0x220AC */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220B0 */

/* FAILED to decompile: __imp_abort @ 0x220B4 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220B8 */

/* FAILED to decompile: __imp___libc_start_main @ 0x220BC */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220C0 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220C4 */

/* FAILED to decompile: __imp___printf_chk @ 0x220C8 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220CC */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220D0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220D4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220DC */

/* FAILED to decompile: __imp_strlen @ 0x220E0 */

/* FAILED to decompile: __imp__Znwj @ 0x220E4 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220E8 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220EC */

/* FAILED to decompile: __imp_puts @ 0x220F0 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220F4 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220F8 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220FC */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x22100 */

/* FAILED to decompile: __imp__Znaj @ 0x22104 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x2210C */

/* Total functions decompiled: 87, failed: 27 */
