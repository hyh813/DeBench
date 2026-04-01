/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_clang_O1_g
 * Processor: arm
 */

/* Function: .init_proc @ 0xB84 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_B90 @ 0xB90 */
void sub_B90()
{
  JUMPOUT(0);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0xCB8 */
void GLOBAL__sub_I_5_1_cpp()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0xCF8 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_D34 + 18640), v4, (char **)&va, 0, 0, a1, &va);
  abort();
}


/* Function: call_weak_fn @ 0xD3C */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0xD60 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0xDA4 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0xDF4 */
char *_do_global_dtors_aux()
{
  char *result; // r0

  if ( !_bss_start )
  {
    if ( &__cxa_finalize )
      _cxa_finalize(_dso_handle);
    result = deregister_tm_clones();
    _bss_start = 1;
  }
  return result;
}


/* Function: frame_dummy @ 0xE5C */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0xE60 */
size_t test_cpp_member_func()
{
  _WORD v1[4]; // [sp+8h] [bp-28h] BYREF
  int v2; // [sp+10h] [bp-20h]
  int v3; // [sp+14h] [bp-1Ch]
  int v4; // [sp+18h] [bp-18h]
  int v5; // [sp+1Ch] [bp-14h]
  int v6; // [sp+20h] [bp-10h]
  __int16 v7; // [sp+24h] [bp-Ch]
  char v8; // [sp+26h] [bp-Ah]
  char v9; // [sp+27h] [bp-9h]

  strcpy((char *)v1, "Test");
  HIBYTE(v1[2]) = 0;
  v1[3] = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  return strlen((const char *)v1) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0xED0 */
int test_cpp_constructor()
{
  _DWORD *v0; // r0
  int v1; // r1
  int i; // r2
  int v3; // r4
  int v4; // r6

  v0 = (_DWORD *)operator new[](0x14u);
  v1 = 0;
  for ( i = 0; i != -5; --i )
  {
    v0[-i] = v1;
    v1 += 10;
  }
  v3 = ++LifecycleClass::instance_count;
  v4 = v0[2];
  operator delete[](v0);
  --LifecycleClass::instance_count;
  return v4 + v3 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xF48 */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return ((int (__fastcall *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xF64 */
int test_cpp_virtual_func()
{
  int v0; // r4
  Derived v2; // [sp+4h] [bp-14h] BYREF
  Base v3; // [sp+Ch] [bp-Ch] BYREF

  v3._vptr$Base = (int (**)(void))&off_12CF0;
  v2.multiplier = 3;
  v0 = Base::virtual_func(&v3, 5);
  return v0 + Derived::virtual_func(&v2, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xFDC */
int test_cpp_multiple_inheritance()
{
  int v0; // r5
  int v1; // r0
  MultiDerived v3; // [sp+0h] [bp-20h] BYREF

  v3.dataB = 200;
  v3.dataA = 100;
  v3._vptr$BaseA = (int (**)(void))&off_12D34;
  v3._vptr$BaseB = (int (**)(void))&off_12D4C;
  v0 = MultiDerived::funcA(&v3);
  (*v3._vptr$BaseB)();
  return v0 + v1 + 1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x104C */
int test_cpp_diamond_inheritance()
{
  int v0; // r0
  int v1; // r5
  int v2; // r0
  _DWORD (**v4)(DiamondDerived *__hidden); // [sp+0h] [bp-28h]
  _DWORD (**v5)(DiamondDerived *__hidden); // [sp+8h] [bp-20h]
  _DWORD (**v6)(DiamondDerived *__hidden); // [sp+10h] [bp-18h]
  int v7; // [sp+14h] [bp-14h]

  v6 = &off_12DF0;
  v4 = &off_12DBC;
  v5 = &off_12DD4;
  `virtual thunk to'DiamondDerived::func();
  v1 = v0;
  v7 = 100;
  `virtual thunk to'DiamondDerived::func();
  return v2 + v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D0 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D8 */
int test_cpp_template_func()
{
  return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x10E0 */
int test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10E8 */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x10F0 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = 42;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x11C0 */
int test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x11CC */
size_t test_cpp_rtti()
{
  void *v0; // r4
  void *v1; // r5
  int v2; // r7
  char *v3; // r6
  const char *v4; // r0
  _BOOL4 v5; // r10
  void *v6; // r8
  void *v7; // r9
  const char *v8; // r0
  size_t v9; // r6

  v0 = (void *)operator new(4u);
  *(_DWORD *)v0 = &off_12ED8;
  v1 = (void *)operator new(4u);
  v2 = 0;
  *(_DWORD *)v1 = 0;
  *(_DWORD *)v1 = &off_12EEC;
  v3 = *(char **)(*(_DWORD *)(*(_DWORD *)v0 - 4) + 4);
  if ( v3 == "12RTTIDerivedA" )
  {
    v2 = 10;
  }
  else if ( *v3 != 42 )
  {
    v2 = 0;
    if ( !strcmp(*(const char **)(*(_DWORD *)(*(_DWORD *)v0 - 4) + 4), "12RTTIDerivedA") )
      v2 = 10;
  }
  v4 = *(const char **)(*(_DWORD *)(*(_DWORD *)v1 - 4) + 4);
  if ( v4 == "12RTTIDerivedB" )
  {
    v5 = 1;
  }
  else
  {
    v5 = 0;
    if ( *v4 != 42 )
      v5 = strcmp(v4, "12RTTIDerivedB") == 0;
  }
  v6 = _dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0);
  v7 = _dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0);
  v8 = v3 + 1;
  if ( *v3 != 42 )
    v8 = v3;
  v9 = strlen(v8);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v0 + 4))(v0);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v1 + 4))(v1);
  if ( v5 )
    v2 |= 0x14u;
  if ( v6 )
    v2 += 100;
  if ( v7 )
    v2 += 200;
  return v2 + v9;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x136C */
void __noreturn test_cpp_oo_features()
{
  int v0; // r4
  size_t v1; // r0
  _DWORD *v2; // r0
  int i; // r1
  int v4; // r4
  int v5; // r6
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r6
  void (__fastcall **v11)(); // r1
  int v12; // r0
  _DWORD (**v13)(DiamondDerived *__hidden); // [sp+0h] [bp-40h] BYREF
  _DWORD v14[2]; // [sp+4h] [bp-3Ch] BYREF
  int v15; // [sp+Ch] [bp-34h]
  void (__fastcall **v16)(); // [sp+10h] [bp-30h]
  int v17; // [sp+14h] [bp-2Ch]
  int v18; // [sp+18h] [bp-28h]
  int v19; // [sp+1Ch] [bp-24h]
  __int16 v20; // [sp+20h] [bp-20h]
  char v21; // [sp+22h] [bp-1Eh]
  char v22; // [sp+23h] [bp-1Dh]
  Base v23; // [sp+24h] [bp-1Ch] BYREF

  puts(asc_1C71);
  strcpy((char *)v14, "Test");
  BYTE1(v14[1]) = 0;
  HIWORD(v14[1]) = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v0 = 0;
  v22 = 0;
  v13 = (_DWORD (**)(DiamondDerived *__hidden))(byte_9 + 1);
  v1 = strlen((const char *)v14);
  printf(aCppL301D, v1 + 4700);
  v2 = (_DWORD *)operator new[](0x14u);
  for ( i = 0; i != -5; --i )
  {
    v2[-i] = v0;
    v0 += 10;
  }
  v4 = ++LifecycleClass::instance_count;
  v5 = v2[2];
  operator delete[](v2);
  --LifecycleClass::instance_count;
  printf(aCppL302D, v5 + v4 + 1000 * LifecycleClass::instance_count);
  v23._vptr$Base = (int (**)(void))&off_12CF0;
  v14[0] = 3;
  v13 = (_DWORD (**)(DiamondDerived *__hidden))&off_12D10;
  v6 = Base::virtual_func(&v23, 5);
  v7 = Derived::virtual_func((Derived *)&v13, 5);
  printf(aCppL303D, v6 + v7 + 21);
  v14[1] = &off_12D4C;
  v15 = 200;
  v14[0] = 100;
  v13 = (_DWORD (**)(DiamondDerived *__hidden))&off_12D34;
  `non-virtual thunk to'MultiDerived::funcB();
  printf(aCppL304D, v8 + 31);
  v16 = (void (__fastcall **)())&off_12DF0;
  v17 = 50;
  v13 = &off_12DBC;
  v14[1] = &off_12DD4;
  `virtual thunk to'DiamondDerived::func();
  v10 = v9;
  v11 = v16;
  *(_DWORD *)((char *)v14 + *(_DWORD *)((char *)v13 + 0xFFFFFFF4)) = 100;
  (*v11)();
  printf(aCppL305D, v12 + v10);
  printf(aCppL306D, 22);
  printf(aCppL307D, 39);
  printf(aCppL308D, 16);
  printf(aCppL309D, 85);
  test_cpp_exception();
}


/* Function: main @ 0x1648 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x165C */
int __fastcall Base::virtual_func(Base *this, int x)
{
  return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1664 */
int __fastcall Derived::virtual_func(Derived *this, int x)
{
  return this->multiplier * x;
}


/* Function: _ZN4BaseD2Ev @ 0x1670 */
void __fastcall Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1674 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x1678 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x167C */
int __fastcall template_max<int>(int a, int b)
{
  if ( a <= b )
    return b;
  return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1688 */
int __fastcall template_max<double>(double a, double b)
{
  int v2; // r5

  v2 = LODWORD(b);
  if ( a > b )
    return LODWORD(a);
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16BC */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // r2

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16D0 */
void __fastcall Container<int>::Container(Container<int> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16DC */
void __fastcall Container<int>::push(Container<int> *this, int value)
{
  int size; // r2

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F4 */
int __fastcall Container<int>::get(const Container<int> *this, int idx)
{
  int result; // r0

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1714 */
int __fastcall Container<int>::getSize(const Container<int> *this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x171C */
void __fastcall Container<double>::Container(Container<double> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1728 */
void __fastcall Container<double>::push(Container<double> *this, double value)
{
  int size; // r12

  size = this->size;
  if ( size <= 9 )
  {
    this->data[size] = value;
    this->size = size + 1;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x174C */
double __fastcall Container<double>::get(const Container<double> *this, int idx)
{
  double result; // r0

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1778 */
int __fastcall Container<double>::getSize(const Container<double> *this)
{
  return this->size;
}


/* Function: _ZNK4Base7getNameEv @ 0x1780 */
const char *__fastcall Base::getName(const Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x1790 */
void __fastcall Base::~Base(Base *this)
{
  operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x17A0 */
const char *__fastcall Derived::getName(const Derived *this)
{
  return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x17B0 */
void __fastcall Derived::~Derived(Derived *this)
{
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x17C0 */
int __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x17C8 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x17D8 */
int __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x17E0 */
void `non-virtual thunk to'MultiDerived::funcB()
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x17E8 */
void `non-virtual thunk to'MultiDerived::~MultiDerived()
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x17EC */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(int a1)
{
  operator delete((void *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x1800 */
int __fastcall BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x1808 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  ;
}


/* Function: _ZN5BaseAD0Ev @ 0x180C */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x181C */
int __fastcall BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x1824 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  ;
}


/* Function: _ZN5BaseBD0Ev @ 0x1828 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  operator delete(this);
}


/* Function: _ZN7MiddleA4funcEv @ 0x1838 */
int __fastcall MiddleA::func(MiddleA *this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x1850 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  ;
}


/* Function: _ZN7MiddleAD0Ev @ 0x1854 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1864 */
void `virtual thunk to'MiddleA::func()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1884 */
void `virtual thunk to'MiddleA::~MiddleA()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1888 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(_DWORD *a1)
{
  operator delete((char *)a1 + *(_DWORD *)(*a1 - 16));
}


/* Function: _ZN7MiddleB4funcEv @ 0x18A4 */
int __fastcall MiddleB::func(MiddleB *this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x18BC */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  ;
}


/* Function: _ZN7MiddleBD0Ev @ 0x18C0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x18D0 */
void `virtual thunk to'MiddleB::func()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x18F0 */
void `virtual thunk to'MiddleB::~MiddleB()
{
  ;
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x18F4 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(_DWORD *a1)
{
  operator delete((char *)a1 + *(_DWORD *)(*a1 - 16));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1910 */
int __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x1928 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1938 */
void `non-virtual thunk to'DiamondDerived::func()
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x1950 */
void `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x1954 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(int a1)
{
  operator delete((void *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1968 */
void `virtual thunk to'DiamondDerived::func()
{
  ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1988 */
void `virtual thunk to'DiamondDerived::~DiamondDerived()
{
  ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x198C */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(_DWORD *a1)
{
  operator delete((char *)a1 + *(_DWORD *)(*a1 - 16));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x19A8 */
int __fastcall VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x19B0 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x19B4 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  operator delete(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x19C4 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x19D4 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x19DC */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x19E0 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x19F0 */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *this)
{
  return 2;
}


/* Function: .term_proc @ 0x19F8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp__Znwj @ 0x130CC */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x130D0 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x130D4 */

/* FAILED to decompile: __imp_printf @ 0x130D8 */

/* FAILED to decompile: __imp_puts @ 0x130DC */

/* FAILED to decompile: __imp___libc_start_main @ 0x130E4 */

/* FAILED to decompile: __imp__Znaj @ 0x130E8 */

/* FAILED to decompile: __imp_abort @ 0x130EC */

/* FAILED to decompile: __imp__ZdlPv @ 0x130F0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x130F4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x130F8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x130FC */

/* FAILED to decompile: __imp__ZdaPv @ 0x13100 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x13108 */

/* FAILED to decompile: __imp_strlen @ 0x1310C */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x13110 */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x13114 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x13118 */

/* FAILED to decompile: __imp_strcmp @ 0x1311C */

/* FAILED to decompile: __imp___cxa_throw @ 0x13120 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x13124 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x1312C */

/* FAILED to decompile: __imp___cxa_finalize @ 0x13130 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x13134 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x1313C */

/* Total functions decompiled: 85, failed: 25 */
