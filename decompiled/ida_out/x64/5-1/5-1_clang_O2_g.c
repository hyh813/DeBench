/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_clang_O2_g
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


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x1120 */
void __cdecl GLOBAL__sub_I_5_1_cpp()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x1150 */
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


/* Function: deregister_tm_clones @ 0x1180 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x11B0 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x11F0 */
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


/* Function: frame_dummy @ 0x1230 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x1240 */
int __cdecl test_cpp_member_func()
{
  _BYTE s[31]; // [rsp+4h] [rbp-24h] BYREF
  char v2; // [rsp+23h] [rbp-5h]

  *(_OWORD *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
  *(_OWORD *)s = xmmword_21F8;
  v2 = 0;
  return strlen(s) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x1280 */
int __cdecl test_cpp_constructor()
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x12A0 */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return ((__int64 (__fastcall *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x12B0 */
int __cdecl test_cpp_virtual_func()
{
  return 42;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x12C0 */
int __cdecl test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x12D0 */
int __cdecl test_cpp_diamond_inheritance()
{
  return 650;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x12E0 */
int __cdecl test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x12F0 */
int __cdecl test_cpp_template_func()
{
  return 39;
}


/* Function: _Z23test_cpp_template_classv @ 0x1300 */
int __cdecl test_cpp_template_class()
{
  return 16;
}


/* Function: _Z15test_cpp_lambdav @ 0x1310 */
int __cdecl test_cpp_lambda()
{
  return 85;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1320 */
int __cdecl __noreturn test_cpp_exception()
{
  _DWORD *exception; // rax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x13E0 */
int __cdecl test_cpp_smart_ptr()
{
  return 703;
}


/* Function: _Z13test_cpp_rttiv @ 0x13F0 */
int __cdecl test_cpp_rtti()
{
  _QWORD *v0; // r14
  void *v1; // r12
  int v2; // ebx
  int v3; // ebp

  v0 = (_QWORD *)operator new(8u);
  *v0 = &off_3D78;
  v1 = (void *)operator new(8u);
  *(_QWORD *)v1 = &off_3DA0;
  v2 = 130;
  if ( !__dynamic_cast(
          v0,
          (const struct __class_type_info *)&`typeinfo for'RTTIBase,
          (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
          0) )
    v2 = 30;
  v3 = v2 + 200;
  if ( !__dynamic_cast(
          v1,
          (const struct __class_type_info *)&`typeinfo for'RTTIBase,
          (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
          0) )
    v3 = v2;
  operator delete(v0);
  (*(void (__fastcall **)(void *))(*(_QWORD *)v1 + 8LL))(v1);
  return v3 + 14;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x14A0 */
void __cdecl __noreturn test_cpp_oo_features()
{
  int v0; // eax
  _BYTE s[31]; // [rsp+Ch] [rbp-4Ch] BYREF
  char v2; // [rsp+2Bh] [rbp-2Dh]

  puts(::s);
  *(_OWORD *)&s[15] = *(__int128 *)((char *)&xmmword_21F8 + 15);
  *(_OWORD *)s = xmmword_21F8;
  v2 = 0;
  v0 = strlen(s);
  printf(format, (unsigned int)(v0 + 4700));
  printf(aCppL302D, (unsigned int)(1001 * LifecycleClass::instance_count + 21));
  printf(aCppL303D, 42);
  printf(aCppL304D, 71);
  printf(aCppL305D, 650);
  printf(aCppL306D, 22);
  printf(aCppL307D, 39);
  printf(aCppL308D, 16);
  printf(aCppL309D, 85);
  test_cpp_exception();
}


/* Function: main @ 0x1680 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1690 */
int __fastcall template_max<int>(int a, int b)
{
  int result; // eax

  result = b;
  if ( a > b )
    return a;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x16A0 */
double __fastcall template_max<double>(double a1, double a, double b)
{
  return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x16B0 */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // eax

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x16C0 */
void __fastcall Container<int>::Container(Container<int> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x16D0 */
void __fastcall Container<int>::push(Container<int> *this, int value)
{
  __int64 size; // rax

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x16F0 */
int __fastcall Container<int>::get(const Container<int> *this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x1710 */
int __fastcall Container<int>::getSize(const Container<int> *this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x1720 */
void __fastcall Container<double>::Container(Container<double> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x1730 */
void __fastcall Container<double>::push(Container<double> *this, double a2, double value)
{
  __int64 size; // rax

  size = this->size;
  if ( size <= 9 )
  {
    this->size = size + 1;
    this->data[size] = a2;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x1750 */
double __fastcall Container<double>::get(const Container<double> *this, int idx)
{
  double result; // xmm0_8

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x1770 */
int __fastcall Container<double>::getSize(const Container<double> *this)
{
  return this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1780 */
// attributes: thunk
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1790 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x17A0 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x17B0 */
// attributes: thunk
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x17C0 */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *this)
{
  return 2;
}


/* Function: .term_proc @ 0x17C8 */
void term_proc()
{
  ;
}


/* FAILED to decompile: printf @ 0x40D8 */

/* FAILED to decompile: __cxa_begin_catch @ 0x40E0 */

/* FAILED to decompile: strlen @ 0x40E8 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x40F0 */

/* FAILED to decompile: __libc_start_main @ 0x4100 */

/* FAILED to decompile: __cxa_atexit @ 0x4108 */

/* FAILED to decompile: _ZdlPv @ 0x4110 */

/* FAILED to decompile: _Znwm @ 0x4118 */

/* FAILED to decompile: __dynamic_cast @ 0x4120 */

/* FAILED to decompile: __cxa_rethrow @ 0x4130 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x4138 */

/* FAILED to decompile: puts @ 0x4140 */

/* FAILED to decompile: __cxa_end_catch @ 0x4148 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x4150 */

/* FAILED to decompile: __cxa_throw @ 0x4158 */

/* FAILED to decompile: _Unwind_Resume @ 0x4160 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x4168 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x4170 */

/* FAILED to decompile: __gmon_start__ @ 0x4180 */

/* Total functions decompiled: 40, failed: 19 */
