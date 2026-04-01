/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/5-1/5-1_clang_Os_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x848 */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_854 @ 0x854 */
void sub_854()
{
  JUMPOUT(0);
}


/* Function: _ZN12RTTIDerivedAD0Ev_0 @ 0x8BC */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x958 */
void GLOBAL__sub_I_5_1_cpp()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x994 */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main((int (*)(int, char **, char **))*(&off_9D0 + 17830), v4, (char **)&va, 0, 0, a1, &va);
  abort();
}


/* Function: call_weak_fn @ 0x9D8 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x9FC */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0xA40 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0xA90 */
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


/* Function: frame_dummy @ 0xAF8 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0xAFC */
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
  HIBYTE(v1[2]) = unk_12BD;
  v1[3] = unk_12BE;
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


/* Function: _Z20test_cpp_constructorv @ 0xB64 */
int test_cpp_constructor()
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0xB80 */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return ((int (__fastcall *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0xB8C */
int test_cpp_virtual_func()
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0xB94 */
int test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0xB9C */
int test_cpp_diamond_inheritance()
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0xBA8 */
int test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0xBB0 */
int test_cpp_template_func()
{
  return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0xBB8 */
int test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0xBC0 */
int test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0xBC8 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = 42;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0xC98 */
int test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0xCA4 */
int test_cpp_rtti()
{
  RTTIDerivedA *v0; // r4
  void *v1; // r5
  void *v2; // r7
  void *v3; // r6
  int v4; // r0

  v0 = (RTTIDerivedA *)operator new(4u);
  v0->_vptr$RTTIBase = (int (**)(void))&off_11ED8;
  v1 = (void *)operator new(4u);
  *(_DWORD *)v1 = &off_11EEC;
  v2 = _dynamic_cast(
         v0,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0);
  v3 = _dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0);
  RTTIDerivedA::~RTTIDerivedA(v0);
  (*(void (__fastcall **)(void *))(*(_DWORD *)v1 + 4))(v1);
  v4 = 130;
  if ( !v2 )
    v4 = 30;
  if ( v3 )
    v4 += 200;
  return v4 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0xD70 */
void __noreturn test_cpp_oo_features()
{
  size_t v0; // r0
  _WORD v1[4]; // [sp+8h] [bp-28h] BYREF
  int v2; // [sp+10h] [bp-20h]
  int v3; // [sp+14h] [bp-1Ch]
  int v4; // [sp+18h] [bp-18h]
  int v5; // [sp+1Ch] [bp-14h]
  int v6; // [sp+20h] [bp-10h]
  __int16 v7; // [sp+24h] [bp-Ch]
  char v8; // [sp+26h] [bp-Ah]
  char v9; // [sp+27h] [bp-9h]

  puts(asc_1294);
  strcpy((char *)v1, "Test");
  HIBYTE(v1[2]) = unk_12BD;
  v1[3] = unk_12BE;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v0 = strlen((const char *)v1);
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


/* Function: main @ 0xEF4 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0xF08 */
int __fastcall template_max<int>(int a, int b)
{
  if ( a <= b )
    return b;
  return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0xF14 */
int __fastcall template_max<double>(double a, double b)
{
  int v2; // r5

  v2 = LODWORD(b);
  if ( a > b )
    return LODWORD(a);
  return v2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0xF48 */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // r2

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0xF5C */
void __fastcall Container<int>::Container(Container<int> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0xF68 */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0xF80 */
int __fastcall Container<int>::get(const Container<int> *this, int idx)
{
  int result; // r0

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0xFA0 */
int __fastcall Container<int>::getSize(const Container<int> *this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0xFA8 */
void __fastcall Container<double>::Container(Container<double> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0xFB4 */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0xFD8 */
double __fastcall Container<double>::get(const Container<double> *this, int idx)
{
  double result; // r0

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1004 */
int __fastcall Container<double>::getSize(const Container<double> *this)
{
  return this->size;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1010 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x1018 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x101C */
// attributes: thunk
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedA::~RTTIDerivedA((RTTIDerivedA *)this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1020 */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *this)
{
  return 2;
}


/* Function: .term_proc @ 0x1028 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __imp__Znwj @ 0x120C0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x120C4 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x120C8 */

/* FAILED to decompile: __imp_printf @ 0x120CC */

/* FAILED to decompile: __imp_puts @ 0x120D0 */

/* FAILED to decompile: __imp___libc_start_main @ 0x120D8 */

/* FAILED to decompile: __imp_abort @ 0x120DC */

/* FAILED to decompile: _ZdlPv @ 0x120E0 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x120E4 */

/* FAILED to decompile: __imp___dynamic_cast @ 0x120E8 */

/* FAILED to decompile: __imp___cxa_atexit @ 0x120EC */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x120F4 */

/* FAILED to decompile: __imp_strlen @ 0x120F8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x120FC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x12100 */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x12104 */

/* FAILED to decompile: __imp___cxa_throw @ 0x12108 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x1210C */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x12110 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x12114 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x12118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x12120 */

/* Total functions decompiled: 41, failed: 22 */
