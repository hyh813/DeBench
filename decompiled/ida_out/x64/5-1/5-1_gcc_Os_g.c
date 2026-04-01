/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_gcc_Os_g
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


/* Function: sub_2150 @ 0x2150 */
void sub_2150()
{
  sub_2020();
}


/* Function: _Z18test_cpp_exceptionv @ 0x22A0 */
int __cdecl __noreturn test_cpp_exception()
{
  _DWORD *exception; // rax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: main @ 0x2367 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x2375 */
void __cdecl GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  std::ios_base::Init::Init(&std::__ioinit);
  _cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _start @ 0x23A0 */
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


/* Function: deregister_tm_clones @ 0x23D0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x2400 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x2440 */
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


/* Function: frame_dummy @ 0x2480 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x2489 */
int __cdecl test_cpp_member_func()
{
  char *v0; // rax
  SimpleClass obj; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v3; // [rsp+28h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  v0 = strncpy(obj.name, "Test", 0x1Fu);
  obj.name[31] = 0;
  return strlen(v0) + 4700;
}


/* Function: _Z20test_cpp_constructorv @ 0x24E3 */
int __cdecl test_cpp_constructor()
{
  return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24F5 */
int __fastcall call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x24FE */
int __cdecl test_cpp_virtual_func()
{
  int v0; // ebx
  Base base; // [rsp+0h] [rbp-28h] BYREF
  Derived derived; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  derived.multiplier = 3;
  base._vptr_Base = (int (**)(...))&off_58A8;
  derived._vptr_Base = (int (**)(...))&off_58D8;
  v0 = call_virtual_func(&base, 5);
  return v0 + call_virtual_func(&derived, 5) + 21;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2571 */
int __cdecl test_cpp_multiple_inheritance()
{
  return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x257B */
int __cdecl test_cpp_operator_overload()
{
  return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2585 */
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


/* Function: _Z23test_cpp_template_classv @ 0x2618 */
int __cdecl test_cpp_template_class()
{
  int v0; // eax
  int r2[10]; // [rsp+Ch] [rbp-3Ch] BYREF
  int v3; // [rsp+34h] [rbp-14h]
  unsigned __int64 v4; // [rsp+38h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3 = 1;
  r2[0] = 10;
  Container<int>::push((Container<int> *const)r2, 20);
  Container<int>::push((Container<int> *const)r2, 30);
  v0 = 0;
  if ( v3 > 0 )
    v0 = r2[0];
  return v3 + v0 + 3;
}


/* Function: _Z15test_cpp_lambdav @ 0x268D */
int __cdecl test_cpp_lambda()
{
  return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x2697 */
int __cdecl test_cpp_rtti()
{
  int v0; // ebx
  __int64 *v1; // r13
  _QWORD *v2; // rax
  __int64 v3; // r14
  const void *v4; // rbp
  __int64 v5; // rax
  const char *v6; // r12
  int v7; // ebx
  int v8; // r12d

  v0 = 10;
  v1 = (__int64 *)operator new(8u);
  *v1 = (__int64)off_5B98;
  v2 = (_QWORD *)operator new(8u);
  v3 = *v1;
  v4 = v2;
  *v2 = off_5BC0;
  v5 = *(_QWORD *)(v3 - 8);
  v6 = *(const char **)(v5 + 8);
  if ( v6 != "12RTTIDerivedA" )
  {
    v0 = 0;
    if ( *v6 != 42 )
      v0 = strcmp(*(const char **)(v5 + 8), "12RTTIDerivedA") == 0 ? 0xA : 0;
  }
  v7 = v0 + 20;
  if ( __dynamic_cast(
         v1,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
         0) )
  {
    v7 += 100;
  }
  if ( __dynamic_cast(
         v4,
         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
         0) )
  {
    v7 += 200;
  }
  if ( *v6 == 42 )
    ++v6;
  v8 = v7 + strlen(v6);
  (*(void (__fastcall **)(__int64 *))(v3 + 8))(v1);
  (*(void (__fastcall **)(const void *))(*(_QWORD *)v4 + 8LL))(v4);
  return v8;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x27AC */
int __cdecl test_cpp_smart_ptr()
{
  int *v0; // rax
  __int64 v1; // rax
  std::unique_ptr<int> ptr2; // [rsp+0h] [rbp-38h] BYREF
  std::unique_ptr<int []> arr; // [rsp+10h] [rbp-28h] BYREF

  arr._M_t._M_t._M_head_impl = (int *)__readfsqword(0x28u);
  v0 = (int *)operator new(4u);
  *(_QWORD *)&ptr2._M_t._M_t._M_head_impl.gap0 = 0;
  *v0 = 200;
  ptr2._M_t._M_t._M_head_impl = v0;
  v1 = operator new[](0x14u);
  *(_QWORD *)&arr._M_t._M_t._M_head_impl.gap0 = v1;
  *(_QWORD *)v1 = 0x200000001LL;
  *(_QWORD *)(v1 + 8) = 0x400000003LL;
  *(_DWORD *)(v1 + 16) = 5;
  std::unique_ptr<int []>::~unique_ptr(&arr);
  std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int>::~unique_ptr(&ptr2);
  return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x287C */
int __cdecl test_cpp_diamond_inheritance()
{
  int v0; // eax
  int v1; // r12d
  DiamondDerived obj; // [rsp+8h] [rbp-50h] BYREF

  *((_QWORD *)&obj.dataB + 1) = __readfsqword(0x28u);
  obj.dataB = 50;
  obj._vptr_MiddleA = (int (**)(...))&off_5B08;
  obj._vptr_MiddleB = (int (**)(...))&off_5B70;
  *((_QWORD *)&obj.dataA + 1) = &off_5B70 - 7;
  v0 = `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  obj.dataB = 100;
  v1 = v0 + `virtual thunk to'DiamondDerived::func((DiamondDerived *)&obj.MiddleB);
  DiamondDerived::~DiamondDerived(&obj);
  return v1;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x290D */
void __cdecl __noreturn test_cpp_oo_features()
{
  unsigned int v0; // eax
  unsigned int v1; // eax
  unsigned int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax

  puts(s);
  v0 = test_cpp_member_func();
  __printf_chk(1, &unk_303A, v0);
  v1 = test_cpp_constructor();
  __printf_chk(1, &unk_3058, v1);
  v2 = test_cpp_virtual_func();
  __printf_chk(1, &unk_3074, v2);
  v3 = test_cpp_multiple_inheritance();
  __printf_chk(1, &unk_3090, v3);
  v4 = test_cpp_diamond_inheritance();
  __printf_chk(1, &unk_30AC, v4);
  v5 = test_cpp_operator_overload();
  __printf_chk(1, &unk_30C9, v5);
  v6 = test_cpp_template_func();
  __printf_chk(1, &unk_30E5, v6);
  v7 = test_cpp_template_class();
  __printf_chk(1, &unk_3101, v7);
  v8 = test_cpp_lambda();
  __printf_chk(1, &unk_311D, v8);
  test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2A58 */
int __fastcall Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2A60 */
const char *__fastcall Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x2A6C */
void __fastcall Base::~Base(Base *const this)
{
  ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A72 */
int __fastcall Derived::virtual_func(Derived *const this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A7E */
const char *__fastcall Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2A8A */
int __fastcall MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2A94 */
int __fastcall MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x2A9E */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2AA8 */
int __fastcall VirtualBase::func(VirtualBase *const this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2AB2 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *const this)
{
  ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x2AB8 */
int __fastcall MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x2ACD */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *((_QWORD *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2ADA */
int __fastcall MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_QWORD *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x2AEF */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *((_QWORD *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2AFC */
int __fastcall DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x2B11 */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *((_QWORD *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x2B1E */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN7MiddleAD1Ev @ 0x2B28 */
void __fastcall MiddleA::~MiddleA(MiddleA *const this)
{
  this->_vptr_MiddleA = (int (**)(...))&off_5920;
  *((_QWORD *)&this->dataA + 1) = &off_5958;
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x2B3F */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  _QWORD *v1; // rdi

  v1 = (int (***)(...))((char *)&this->_vptr_MiddleA + *((_QWORD *)this->_vptr_MiddleA - 4));
  *v1 = &off_5920;
  v1[2] = &off_5958;
}


/* Function: _ZN7MiddleBD1Ev @ 0x2B5E */
void __fastcall MiddleB::~MiddleB(MiddleB *const this)
{
  this->_vptr_MiddleB = (int (**)(...))&off_5998;
  *((_QWORD *)&this->dataB + 1) = &off_59D0;
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x2B75 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  _QWORD *v1; // rdi

  v1 = (int (***)(...))((char *)&this->_vptr_MiddleB + *((_QWORD *)this->_vptr_MiddleB - 4));
  *v1 = &off_5998;
  v1[2] = &off_59D0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x2B94 */
int __fastcall RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x2B9E */
int __fastcall RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x2BA8 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x2BAE */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2BB4 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  ;
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x2BB9 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  ;
}


/* Function: _ZN7DerivedD2Ev @ 0x2BBE */
void __fastcall Derived::~Derived(Derived *const this)
{
  ;
}


/* Function: _ZN4BaseD0Ev @ 0x2BC4 */
void __fastcall Base::~Base(Base *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN7DerivedD0Ev @ 0x2BD2 */
void __fastcall Derived::~Derived(Derived *const this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x2BE0 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *const this)
{
  operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x2BEE */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2BF8 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *const this)
{
  operator delete(this, 0x10u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x2C06 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x2C14 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  operator delete(this, 8u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x2C22 */
void __fastcall MiddleA::~MiddleA(MiddleA *const this)
{
  this->_vptr_MiddleA = (int (**)(...))&off_5920;
  *((_QWORD *)&this->dataA + 1) = &off_5958;
  operator delete(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x2C42 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *((_QWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x2C50 */
void __fastcall MiddleB::~MiddleB(MiddleB *const this)
{
  this->_vptr_MiddleB = (int (**)(...))&off_5998;
  *((_QWORD *)&this->dataB + 1) = &off_59D0;
  operator delete(this, 0x20u);
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x2C70 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *((_QWORD *)this->_vptr_MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x2C7E */
void __fastcall MiddleA::~MiddleA(MiddleA *const this, const int __in_chrg, const void **const __vtt_parm)
{
  int (**v3)(...); // rax
  int (**v4)(...); // r8
  __int64 v5; // rcx

  v3 = (int (**)(...))&off_5920;
  if ( !__in_chrg )
    v3 = (int (**)(...))*__vtt_parm;
  this->_vptr_MiddleA = v3;
  v4 = (int (**)(...))&off_5958;
  v5 = 16;
  if ( !__in_chrg )
  {
    v4 = (int (**)(...))__vtt_parm[1];
    v5 = (__int64)*(v3 - 3);
  }
  *(int (***)(...))((char *)&this->_vptr_MiddleA + v5) = v4;
}


/* Function: _ZN7MiddleAD2Ev @ 0x2CB0 */
void __fastcall MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  MiddleA::~MiddleA(this, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x2CBE */
void __fastcall MiddleB::~MiddleB(MiddleB *const this, const int __in_chrg, const void **const __vtt_parm)
{
  int (**v3)(...); // rax
  int (**v4)(...); // r8
  __int64 v5; // rcx

  v3 = (int (**)(...))&off_5998;
  if ( !__in_chrg )
    v3 = (int (**)(...))*__vtt_parm;
  this->_vptr_MiddleB = v3;
  v4 = (int (**)(...))&off_59D0;
  v5 = 16;
  if ( !__in_chrg )
  {
    v4 = (int (**)(...))__vtt_parm[1];
    v5 = (__int64)*(v3 - 3);
  }
  *(int (***)(...))((char *)&this->_vptr_MiddleB + v5) = v4;
}


/* Function: _ZN7MiddleBD2Ev @ 0x2CF0 */
void __fastcall MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  MiddleB::~MiddleB(this, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2CFE */
int __fastcall template_max<int>(int a, int b)
{
  int result; // eax

  result = b;
  if ( a >= b )
    return a;
  return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2D0A */
double __fastcall template_max<double>(double a1, double a, double b)
{
  return fmax(a1, a);
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x2D13 */
void __fastcall template_swap<int>(int *a, int *b)
{
  int v2; // eax

  v2 = *a;
  *a = *b;
  *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x2D20 */
void __fastcall Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2D2C */
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


/* Function: _ZNK9ContainerIiE3getEi @ 0x2D44 */
int __fastcall Container<int>::get(const Container<int> *const this, int idx)
{
  int result; // eax

  result = 0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2D5A */
int __fastcall Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2D62 */
void __fastcall Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2D6E */
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


/* Function: _ZNK9ContainerIdE3getEi @ 0x2D88 */
double __fastcall Container<double>::get(const Container<double> *const this, int idx)
{
  double result; // xmm0_8

  result = 0.0;
  if ( idx >= 0 && this->size > idx )
    return this->data[idx];
  return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x2DA2 */
int __fastcall Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x2DAA */
void __fastcall std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
  void *v1; // rdi

  v1 = *(void **)&this->_M_t._M_t._M_head_impl.gap0;
  if ( v1 )
    operator delete(v1, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x2DC2 */
void __fastcall std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
  void *v1; // rdi

  v1 = *(void **)&this->_M_t._M_t._M_head_impl.gap0;
  if ( v1 )
    operator delete[](v1);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2DD4 */
void __fastcall DiamondDerived::~DiamondDerived(
        DiamondDerived *const this,
        const int __in_chrg,
        const void **const __vtt_parm)
{
  int (**v3)(...); // rax
  int (**v7)(...); // rcx
  __int64 v8; // rdx
  __int64 (__fastcall **v9)(DiamondDerived *__hidden); // rax
  MiddleB *v10; // rdi
  const void **v11; // rsi
  const void **v12; // rsi

  v3 = (int (**)(...))&off_5B08;
  if ( !__in_chrg )
    v3 = (int (**)(...))*__vtt_parm;
  this->_vptr_MiddleA = v3;
  v7 = (int (**)(...))&off_5B70;
  v8 = 32;
  if ( !__in_chrg )
  {
    v7 = (int (**)(...))__vtt_parm[5];
    v8 = (__int64)*(v3 - 3);
  }
  *(int (***)(...))((char *)&this->_vptr_MiddleA + v8) = v7;
  v9 = &off_5B38;
  if ( !__in_chrg )
    v9 = (__int64 (__fastcall **)(DiamondDerived *__hidden))__vtt_parm[6];
  *((_QWORD *)&this->dataA + 1) = v9;
  v10 = (MiddleB *)(&this->dataA + 2);
  v11 = (const void **)off_5AD0;
  if ( !__in_chrg )
    v11 = __vtt_parm + 3;
  MiddleB::~MiddleB(v10, v11);
  v12 = (const void **)off_5AC0;
  if ( !__in_chrg )
    v12 = __vtt_parm + 1;
  MiddleA::~MiddleA(this, v12);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2E5E */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this, 2, 0);
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x2E6E */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x2E78 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_QWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x2E86 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x2EAB */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x2EB5 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_QWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x2EC2 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *const this, const void **const __vtt_parm)
{
  DiamondDerived::~DiamondDerived(this, 0, __vtt_parm);
}


/* Function: .term_proc @ 0x2ED0 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __printf_chk @ 0x6048 */

/* FAILED to decompile: _Znam @ 0x6050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x6058 */

/* FAILED to decompile: strlen @ 0x6060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6068 */

/* FAILED to decompile: strncpy @ 0x6070 */

/* FAILED to decompile: __libc_start_main @ 0x6080 */

/* FAILED to decompile: __cxa_atexit @ 0x6088 */

/* FAILED to decompile: _Znwm @ 0x6090 */

/* FAILED to decompile: _ZdlPvm @ 0x6098 */

/* FAILED to decompile: __stack_chk_fail @ 0x60A0 */

/* FAILED to decompile: __dynamic_cast @ 0x60A8 */

/* FAILED to decompile: _ZdaPv @ 0x60B0 */

/* FAILED to decompile: strcmp @ 0x60C0 */

/* FAILED to decompile: __cxa_rethrow @ 0x60C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x60D0 */

/* FAILED to decompile: puts @ 0x60D8 */

/* FAILED to decompile: __cxa_end_catch @ 0x60E0 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x60E8 */

/* FAILED to decompile: __cxa_throw @ 0x60F0 */

/* FAILED to decompile: _Unwind_Resume @ 0x6100 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6108 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x6110 */

/* FAILED to decompile: __gmon_start__ @ 0x6120 */

/* Total functions decompiled: 107, failed: 24 */
