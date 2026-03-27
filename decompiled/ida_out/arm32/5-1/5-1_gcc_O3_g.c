/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_O3_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10920 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_1092C @ 0x1092C */
void sub_1092C()
{
  JUMPOUT(0);
}


/* Function: _Z18test_cpp_exceptionv @ 0x10A60 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = 42;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x10B18 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x10B28 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
}


/* Function: _start @ 0x10B58 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))((char *)&unk_114E4 + (_DWORD)&off_10B94),
    v4,
    (char **)&va,
    0,
    0,
    a1,
    &va);
  abort();
}


/* Function: call_weak_fn @ 0x10B9C */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10BC0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10BEC */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10C24 */
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


/* Function: frame_dummy @ 0x10C4C */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x10C50 */
size_t test_cpp_member_func()
{
  SimpleClass obj; // [sp+0h] [bp-30h] BYREF

  strncpy(obj.name, "Test", 0x1Fu);
  obj.name[31] = 0;
  return strlen(obj.name) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor()
{
  return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr.Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func()
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance()
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int test_cpp_template_func()
{
  int v0; // r4
  double v1; // r6
  int a; // [sp+4h] [bp-1Ch] BYREF
  int b; // [sp+8h] [bp-18h] BYREF

  v0 = template_max<int>(3, 7);
  v1 = template_max<double>(2.5, 1.5);
  a = 10;
  b = 20;
  template_swap<int>(&a, &b);
  return (int)v1 + v0 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10DD0 */
size_t test_cpp_rtti()
{
  void *v0; // r6
  void *v1; // r5
  int v2; // r0
  int v3; // r4
  int v4; // r7
  const char *v5; // r0
  size_t v6; // r4

  v0 = (void *)operator new(4u);
  *(_DWORD *)v0 = off_116B4;
  v1 = (void *)operator new(4u);
  v2 = *(_DWORD *)(*(_DWORD *)v0 - 4);
  *(_DWORD *)v1 = off_116C8;
  if ( std::type_info::operator==(v2, &`typeinfo for'RTTIDerivedA) )
  {
    v3 = 10;
    v4 = 30;
  }
  else
  {
    v4 = 20;
    v3 = 0;
  }
  if ( std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v1 - 4), &`typeinfo for'RTTIDerivedB) )
    v3 = v4;
  if ( _dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v3 += 100;
  }
  if ( _dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v3 += 200;
  }
  v5 = *(const char **)(*(_DWORD *)(*(_DWORD *)v0 - 4) + 4);
  if ( *v5 == 42 )
    ++v5;
  v6 = v3 + strlen(v5);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v0 + 4))(v0);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v1 + 4))(v1);
  return v6;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x10ED4 */
void __noreturn test_cpp_oo_features()
{
  size_t v0; // r0
  int v1; // r4
  double v2; // r6
  int v3; // [sp+0h] [bp-40h] BYREF
  int b; // [sp+4h] [bp-3Ch] BYREF
  char dest[32]; // [sp+Ch] [bp-34h] BYREF

  puts(s);
  strncpy(dest, "Test", 0x1Fu);
  dest[31] = 0;
  v0 = strlen(dest);
  _printf_chk(1, &unk_114FC, v0 + 4700);
  _printf_chk(1, &unk_1151C, LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count);
  _printf_chk(1, &unk_11538, 42);
  _printf_chk(1, &unk_11554, 71);
  _printf_chk(1, &unk_11570, 650);
  _printf_chk(1, &unk_11590, 22);
  v1 = template_max<int>(3, 7);
  v2 = template_max<double>(2.5, 1.5);
  v3 = 10;
  b = 20;
  template_swap<int>(&v3, &b);
  _printf_chk(1, &unk_115AC, (int)v2 + v1 + v3 + b);
  _printf_chk(1, &unk_115C8, 16);
  _printf_chk(1, &unk_115E4, 85);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x110D0 */
int __fastcall Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x110D8 */
const char *__fastcall Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x110E4 */
void *__fastcall Base::~Base(Base *const this)
{
  return this;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x110E8 */
int __fastcall Derived::virtual_func(Derived *const this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x110F4 */
const char *__fastcall Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11100 */
int __fastcall MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11108 */
int __fastcall MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11110 */
int __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11118 */
int __fastcall MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x11130 */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return *(int *)((char *)&this->dataA
                + *((_DWORD *)this->_vptr.MiddleA - 3)
                + *(*(_DWORD **)((char *)&this->_vptr.MiddleA + *((_DWORD *)this->_vptr.MiddleA - 3)) - 3))
       + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x11154 */
int __fastcall MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1116C */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return *(int *)((char *)&this->dataB
                + *((_DWORD *)this->_vptr.MiddleB - 3)
                + *(*(_DWORD **)((char *)&this->_vptr.MiddleB + *((_DWORD *)this->_vptr.MiddleB - 3)) - 3))
       + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11190 */
int __fastcall DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x111A8 */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)((char *)&this->dataA
                + *((_DWORD *)this->_vptr.MiddleA - 3)
                + *(*(_DWORD **)((char *)&this->_vptr.MiddleA + *((_DWORD *)this->_vptr.MiddleA - 3)) - 3))
       + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x111CC */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(&this[-1].dataB + 1) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x111E4 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x111EC */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x111F4 */
void *__fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  return this;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x111F8 */
void *__fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  return this;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x111FC */
void *__fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  return this;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11200 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11210 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11218 */
void *__fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  return this;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1121C */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11224 */
void *__fastcall Derived::~Derived(Derived *const this)
{
  return this;
}


/* Function: _ZN4BaseD0Ev @ 0x11228 */
void *__fastcall Base::~Base(Base *const this)
{
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN7DerivedD0Ev @ 0x11240 */
void *__fastcall Derived::~Derived(Derived *const this)
{
  operator delete(this, 8u);
  return this;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11258 */
void *__fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x10u);
  return this;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11270 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(&this[-1].BaseB, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1128C */
void *__fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x112A4 */
void *__fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x112BC */
void *__fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  operator delete(this, 0x18u);
  return this;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x112D4 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *((_DWORD *)this->_vptr.MiddleA - 4), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x112F8 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(&this[-1].dataB + 1, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11314 */
int __fastcall template_max<int>(int a, int b)
{
  if ( a < b )
    return b;
  return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11320 */
double __fastcall template_max<double>(double a, double b)
{
  double v2; // r4

  v2 = a;
  if ( a <= b )
    return b;
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x11350 */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // r3

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x11364 */
Container<int> *__fastcall Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
  return this;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x11370 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x11388 */
int __fastcall Container<int>::get(const Container<int> *const this, int idx)
{
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  else
    return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x113AC */
int __fastcall Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x113B4 */
Container<double> *__fastcall Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
  return this;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x113C0 */
void __fastcall Container<double>::push(Container<double> *const this, int a2, double value)
{
  double v3; // r4

  HIDWORD(v3) = HIDWORD(value);
  HIDWORD(value) = this->size;
  if ( SHIDWORD(value) <= 9 )
  {
    LODWORD(v3) = LODWORD(value);
    this->size = HIDWORD(value) + 1;
    this->data[HIDWORD(value)] = v3;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x113F0 */
double __fastcall Container<double>::get(const Container<double> *const this, int idx)
{
  double *v3; // t0

  if ( idx < 0 || this->size <= idx )
    return 0.0;
  v3 = &this->data[idx];
  return *v3;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1141C */
int __fastcall Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: .term_proc @ 0x11424 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x22098 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x2209C */

/* FAILED to decompile: __imp_strncpy @ 0x220A0 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x220A4 */

/* FAILED to decompile: __imp_abort @ 0x220A8 */

/* FAILED to decompile: __imp___cxa_throw @ 0x220AC */

/* FAILED to decompile: __imp___libc_start_main @ 0x220B0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x220B4 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x220B8 */

/* FAILED to decompile: __imp___printf_chk @ 0x220BC */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x220C0 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x220C4 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x220C8 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x220CC */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x220D0 */

/* FAILED to decompile: __imp_strlen @ 0x220D4 */

/* FAILED to decompile: __imp__Znwj @ 0x220D8 */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x220DC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x220E0 */

/* FAILED to decompile: __imp_puts @ 0x220E4 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x220E8 */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x220EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x220F0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x220F4 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x220FC */

/* Total functions decompiled: 70, failed: 25 */
