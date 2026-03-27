/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_Os_no_g
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
void __noreturn test_cpp_exception(void)
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
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
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
    (char **)va,
    0,
    0,
    a1,
    va);
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
size_t test_cpp_member_func(void)
{
  char dest[32]; // [sp+4h] [bp-2Ch] BYREF

  strncpy(dest, "Test", 0x1Fu);
  dest[31] = 0;
  return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10D60 */
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10D7C */
int __fastcall call_virtual_func(int (__fastcall ***a1)(_DWORD))
{
  return (**a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10D88 */
int __fastcall test_cpp_virtual_func(int a1, int a2, int a3, int (__fastcall **a4)(_DWORD))
{
  int v4; // r4
  int (__fastcall **v6)(_DWORD); // [sp+0h] [bp-18h] BYREF
  int (__fastcall **v7[5])(_DWORD); // [sp+4h] [bp-14h] BYREF

  v7[2] = a4;
  v6 = (int (__fastcall **)(_DWORD))&off_11AF0;
  v7[0] = (int (__fastcall **)(_DWORD))&off_11B08;
  v7[1] = (int (__fastcall **)(_DWORD))3;
  v4 = call_virtual_func(&v6);
  return v4 + 21 + call_virtual_func(v7);
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10E08 */
int test_cpp_multiple_inheritance(void)
{
  return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10E10 */
int test_cpp_operator_overload(void)
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10E18 */
int __fastcall test_cpp_template_func(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  double v5; // r6
  int v7; // [sp+4h] [bp-1Ch] BYREF
  int v8; // [sp+8h] [bp-18h] BYREF

  v4 = template_max<int>(3, 7, a3, 0, a1, a2, a3, a4);
  v5 = COERCE_DOUBLE(template_max<double>(0, 1074003968, 0, 1073217536));
  v7 = 10;
  v8 = 20;
  template_swap<int>(&v7, &v8);
  return (int)v5 + v4 + v7 + v8;
}


/* Function: _Z23test_cpp_template_classv @ 0x10EC0 */
int test_cpp_template_class(void)
{
  int v0; // r3
  _DWORD v2[10]; // [sp+0h] [bp-38h] BYREF
  int v3; // [sp+28h] [bp-10h]

  v3 = 1;
  v2[0] = 10;
  Container<int>::push(v2, 20);
  Container<int>::push(v2, 30);
  if ( v3 > 0 )
    v0 = v2[0];
  else
    v0 = 0;
  return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x10F40 */
int test_cpp_lambda(void)
{
  return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x10F48 */
size_t test_cpp_rtti(void)
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
int __fastcall test_cpp_smart_ptr(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int v7; // [sp+0h] [bp-18h] BYREF
  _DWORD *v8; // [sp+4h] [bp-14h] BYREF
  _DWORD v9[4]; // [sp+8h] [bp-10h] BYREF

  v9[1] = a4;
  v4 = (_DWORD *)operator new(4u);
  *v4 = 200;
  v8 = v4;
  v7 = 0;
  v5 = (_DWORD *)operator new[](0x14u);
  *v5 = 1;
  v5[1] = 2;
  v5[2] = 3;
  v5[3] = 4;
  v9[0] = v5;
  v5[4] = 5;
  std::unique_ptr<int []>::~unique_ptr(v9);
  std::unique_ptr<int>::~unique_ptr(&v8);
  std::unique_ptr<int>::~unique_ptr(&v7);
  return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110EC */
int test_cpp_diamond_inheritance(void)
{
  int v0; // r4
  int v1; // r4
  _DWORD v3[4]; // [sp+4h] [bp-24h] BYREF
  _DWORD (**v4)(DiamondDerived *__hidden); // [sp+14h] [bp-14h] BYREF
  int v5; // [sp+18h] [bp-10h]

  v3[0] = &off_11C20;
  v3[2] = &off_11C38;
  v4 = &off_11C54;
  v5 = 50;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&v4);
  v5 = 100;
  v1 = v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)&v4);
  DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
  return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1117C */
void __noreturn test_cpp_oo_features(void)
{
  size_t v0; // r0
  int v1; // r0
  __int64 v2; // r0
  int v3; // r2
  int (__fastcall **v4)(_DWORD); // r3
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
int __fastcall Base::virtual_func(Base *this, int a2)
{
  return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x112B8 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x112C4 */
void __fastcall Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x112C8 */
int __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return a2 * *((_DWORD *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x112D4 */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x112E0 */
int __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x112E8 */
int __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x112F0 */
int __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x112F8 */
int __fastcall VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x11300 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11304 */
int __fastcall MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1131C */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x11330 */
int __fastcall MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x11348 */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1135C */
int __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11374 */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11388 */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x11390 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  *(_DWORD *)this = &off_11B2C;
  *((_DWORD *)this + 2) = &off_11B48;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x113A8 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  int v1; // r1

  v1 = *(_DWORD *)(*(_DWORD *)this - 16);
  *(_DWORD *)((char *)this + v1) = &off_11B2C;
  *(_DWORD *)((char *)this + v1 + 8) = &off_11B48;
}


/* Function: _ZN7MiddleBD1Ev @ 0x113D0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  *(_DWORD *)this = &off_11B68;
  *((_DWORD *)this + 2) = &off_11B84;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x113E8 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  int v1; // r1

  v1 = *(_DWORD *)(*(_DWORD *)this - 16);
  *(_DWORD *)((char *)this + v1) = &off_11B68;
  *(_DWORD *)((char *)this + v1 + 8) = &off_11B84;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x11410 */
int __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11418 */
int __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x11420 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11424 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11428 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1142C */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x11434 */
void __fastcall Derived::~Derived(Derived *this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x11438 */
void __fastcall Base::~Base(Base *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x11450 */
void __fastcall Derived::~Derived(Derived *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x11468 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x11480 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x11488 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x114A0 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x114B8 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x114D0 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  *(_DWORD *)this = &off_11B2C;
  *((_DWORD *)this + 2) = &off_11B48;
  operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x114FC */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x11510 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  *(_DWORD *)this = &off_11B68;
  *((_DWORD *)this + 2) = &off_11B84;
  operator delete(this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1153C */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN7MiddleAD2Ev @ 0x11550 */
void __fastcall MiddleA::~MiddleA(MiddleA *this, int *a2)
{
  int v2; // r2

  v2 = *a2;
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(v2 - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x11568 */
void __fastcall MiddleB::~MiddleB(MiddleB *this, int *a2)
{
  int v2; // r2

  v2 = *a2;
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(v2 - 12)) = a2[1];
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x11580 */
int __fastcall template_max<int>(int result, int a2)
{
  if ( result < a2 )
    return a2;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1158C */
__int64 __fastcall template_max<double>(double a1, double a2)
{
  double v2; // r4

  v2 = a1;
  if ( a1 <= a2 )
    v2 = a2;
  return *(_QWORD *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x115BC */
int *__fastcall template_swap<int>(int *result, int *a2)
{
  int v2; // r3

  v2 = *result;
  *result = *a2;
  *a2 = v2;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x115D0 */
int __fastcall Container<int>::Container(int result)
{
  *(_DWORD *)(result + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x115DC */
int __fastcall Container<int>::push(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(result + 40);
  if ( v2 <= 9 )
  {
    *(_DWORD *)(result + 40) = v2 + 1;
    *(_DWORD *)(result + 4 * v2) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x115F4 */
int __fastcall Container<int>::get(int a1, int a2)
{
  if ( a2 < 0 || *(_DWORD *)(a1 + 40) <= a2 )
    return 0;
  else
    return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11618 */
int __fastcall Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x11620 */
int __fastcall Container<double>::Container(int result)
{
  *(_DWORD *)(result + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1162C */
_DWORD *__fastcall Container<double>::push(_DWORD *result, int a2, int a3, int a4)
{
  int v4; // r1

  v4 = result[20];
  if ( v4 <= 9 )
  {
    result[20] = v4 + 1;
    result += 2 * v4;
    *result = a3;
    result[1] = a4;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1164C */
__int64 __fastcall Container<double>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 80) )
    return 0;
  else
    return *(_QWORD *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11678 */
int __fastcall Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x11680 */
void **__fastcall std::unique_ptr<int>::~unique_ptr(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
    operator delete(v2, 4u);
  return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x116A4 */
void **__fastcall std::unique_ptr<int []>::~unique_ptr(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
    operator delete[](v2);
  return a1;
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x116C4 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this, int a2, int *a3)
{
  int v4; // r3
  _DWORD (**v7)(DiamondDerived *__hidden); // r2
  _DWORD (**v8)(DiamondDerived *__hidden); // r3
  int *v9; // r1
  int *v10; // r1

  if ( a2 )
    v4 = (int)&off_11C20;
  else
    v4 = *a3;
  *(_DWORD *)this = v4;
  if ( a2 )
    v4 = 16;
  if ( a2 )
  {
    v7 = &off_11C54;
  }
  else
  {
    v4 = *(_DWORD *)(v4 - 12);
    v7 = (_DWORD (**)(DiamondDerived *__hidden))a3[5];
  }
  *(_DWORD *)((char *)this + v4) = v7;
  if ( a2 )
    v8 = &off_11C38;
  else
    v8 = (_DWORD (**)(DiamondDerived *__hidden))a3[6];
  if ( a2 )
    v9 = (int *)&off_11C04;
  else
    v9 = a3 + 3;
  *((_DWORD *)this + 2) = v8;
  MiddleB::~MiddleB((DiamondDerived *)((char *)this + 8), v9);
  if ( a2 )
    v10 = (int *)&off_11BFC;
  else
    v10 = a3 + 1;
  MiddleA::~MiddleA(this, v10);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11748 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this, 2, 0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11754 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x1175C */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11770 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11790 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x11798 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x117AC */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this, int *a2)
{
  DiamondDerived::~DiamondDerived(this, 0, a2);
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
