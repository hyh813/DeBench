/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_gcc_O2_no_g
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
void __noreturn test_cpp_exception(void)
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
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
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
    (char **)va,
    0,
    0,
    a1,
    va);
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
size_t test_cpp_member_func(void)
{
  char dest[32]; // [sp+4h] [bp-2Ch] BYREF

  strncpy(dest, "Test", 0x1Fu);
  dest[31] = 0;
  return strlen(dest) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x10CBC */
int test_cpp_constructor(void)
{
  return LifecycleClass::instance_count + 21 + 1000 * LifecycleClass::instance_count;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10CDC */
int __fastcall call_virtual_func(int (__fastcall ***a1)(_DWORD))
{
  return (**a1)(a1);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10CE8 */
int test_cpp_virtual_func(void)
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10CF0 */
int test_cpp_multiple_inheritance(void)
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x10CF8 */
int test_cpp_diamond_inheritance(void)
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x10D04 */
int test_cpp_operator_overload(void)
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x10D0C */
int __fastcall test_cpp_template_func(int a1, int a2, int a3)
{
  int v3; // r4
  double v4; // r6
  int v6; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-18h] BYREF

  v3 = template_max<int>(3, 7, a3, 0);
  v4 = COERCE_DOUBLE(template_max<double>(0, 1074003968, 0, 1073217536));
  v6 = 10;
  v7 = 20;
  template_swap<int>(&v6, &v7);
  return (int)v4 + v3 + v6 + v7;
}


/* Function: _Z23test_cpp_template_classv @ 0x10DB4 */
int test_cpp_template_class(void)
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x10DBC */
int test_cpp_lambda(void)
{
  return 85;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x10DC4 */
int test_cpp_smart_ptr(void)
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x10DD0 */
size_t test_cpp_rtti(void)
{
  void *v0; // r5
  void *v1; // r4
  int v2; // r0
  int v3; // r6
  const char *v4; // r0
  size_t v5; // r6

  v0 = (void *)operator new(4u);
  *(_DWORD *)v0 = off_1162C;
  v1 = (void *)operator new(4u);
  v2 = *(_DWORD *)(*(_DWORD *)v0 - 4);
  *(_DWORD *)v1 = off_11640;
  if ( std::type_info::operator==(v2, &`typeinfo for'RTTIDerivedA) )
    v3 = 10;
  else
    v3 = 0;
  if ( std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v1 - 4), &`typeinfo for'RTTIDerivedB) )
    v3 += 20;
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
  v4 = *(const char **)(*(_DWORD *)(*(_DWORD *)v0 - 4) + 4);
  if ( *v4 == 42 )
    ++v4;
  v5 = v3 + strlen(v4);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v0 + 4))(v0);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v1 + 4))(v1);
  return v5;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x10EC8 */
void __noreturn test_cpp_oo_features(void)
{
  size_t v0; // r0
  int v1; // r0
  int v2; // r0
  __int64 v3; // r0
  int v4; // r2
  int v5; // r0
  char dest[32]; // [sp+4h] [bp-2Ch] BYREF

  puts(s);
  strncpy(dest, "Test", 0x1Fu);
  dest[31] = 0;
  v0 = strlen(dest);
  _printf_chk(1, &unk_11474, v0 + 4700);
  v1 = test_cpp_constructor();
  _printf_chk(1, &unk_11494, v1);
  _printf_chk(1, &unk_114B0, 42);
  _printf_chk(1, &unk_114CC, 71);
  v2 = test_cpp_diamond_inheritance();
  _printf_chk(1, &unk_114E8, v2);
  v3 = _printf_chk(1, &unk_11508, 22);
  v5 = test_cpp_template_func(v3, SHIDWORD(v3), v4);
  _printf_chk(1, &unk_11524, v5);
  _printf_chk(1, &unk_11540, 16);
  _printf_chk(1, &unk_1155C, 85);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x11048 */
int __fastcall Base::virtual_func(Base *this, int a2)
{
  return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x11050 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1105C */
void __fastcall Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x11060 */
int __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return a2 * *((_DWORD *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x1106C */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x11078 */
int __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x11080 */
int __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x11088 */
int __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN7MiddleA4funcEv @ 0x11090 */
int __fastcall MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x110A8 */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this
                   + *(_DWORD *)(*(_DWORD *)this - 12)
                   + *(_DWORD *)(*(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) - 12)
                   + 4)
       + 150;
}


/* Function: _ZN7MiddleB4funcEv @ 0x110CC */
int __fastcall MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x110E4 */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this
                   + *(_DWORD *)(*(_DWORD *)this - 12)
                   + *(_DWORD *)(*(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) - 12)
                   + 4)
       + 200;
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x11108 */
int __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x11120 */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this
                   + *(_DWORD *)(*(_DWORD *)this - 12)
                   + *(_DWORD *)(*(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) - 12)
                   + 4)
       + 250;
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x11144 */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*((_DWORD *)this - 2) - 12) - 4) + 250;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1115C */
int __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x11164 */
int __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1116C */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x11170 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x11174 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x11178 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x11188 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x11190 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x11194 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1119C */
void __fastcall Derived::~Derived(Derived *this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x111A0 */
void __fastcall Base::~Base(Base *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x111B8 */
void __fastcall Derived::~Derived(Derived *this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x111D0 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x111E8 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  operator delete((char *)this - 8, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x11204 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1121C */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x11234 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete(this, 0x18u);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x1124C */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this + *(_DWORD *)(*(_DWORD *)this - 16), 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x11270 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  operator delete((char *)this - 8, 0x18u);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1128C */
int __fastcall template_max<int>(int result, int a2)
{
  if ( result < a2 )
    return a2;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x11298 */
__int64 __fastcall template_max<double>(double a1, double a2)
{
  double v2; // r4

  v2 = a1;
  if ( a1 <= a2 )
    v2 = a2;
  return *(_QWORD *)&v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x112C8 */
int *__fastcall template_swap<int>(int *result, int *a2)
{
  int v2; // r3

  v2 = *result;
  *result = *a2;
  *a2 = v2;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x112DC */
int __fastcall Container<int>::Container(int result)
{
  *(_DWORD *)(result + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x112E8 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x11300 */
int __fastcall Container<int>::get(int a1, int a2)
{
  if ( a2 >= 0 && *(_DWORD *)(a1 + 40) > a2 )
    return *(_DWORD *)(a1 + 4 * a2);
  else
    return 0;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x11324 */
int __fastcall Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1132C */
int __fastcall Container<double>::Container(int result)
{
  *(_DWORD *)(result + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x11338 */
int __fastcall Container<double>::push(int result, int a2, int a3, int a4)
{
  int v5; // r3
  int v7; // r2
  _DWORD *v8; // r3

  v5 = *(_DWORD *)(result + 80);
  if ( v5 <= 9 )
  {
    v7 = v5 + 1;
    v8 = (_DWORD *)(result + 8 * v5);
    *(_DWORD *)(result + 80) = v7;
    *v8 = a3;
    v8[1] = a4;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x11368 */
__int64 __fastcall Container<double>::get(int a1, int a2)
{
  if ( a2 >= 0 && a2 < *(_DWORD *)(a1 + 80) )
    return *(_QWORD *)(a1 + 8 * a2);
  else
    return 0;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x11394 */
int __fastcall Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: .term_proc @ 0x1139C */
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
