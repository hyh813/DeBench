/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_gcc_O0_no_g
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


/* Function: sub_2160 @ 0x2160 */
void sub_2160()
{
  sub_2020();
}


/* Function: sub_2170 @ 0x2170 */
void sub_2170()
{
  sub_2020();
}


/* Function: _start @ 0x22E0 */
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


/* Function: deregister_tm_clones @ 0x2310 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x2340 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x2380 */
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


/* Function: frame_dummy @ 0x23C0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x23CA */
__int64 test_cpp_member_func(void)
{
  int Value; // [rsp+4h] [rbp-3Ch]
  int v2; // [rsp+8h] [rbp-38h]
  _BYTE v3[40]; // [rsp+10h] [rbp-30h] BYREF
  unsigned __int64 v4; // [rsp+38h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  SimpleClass::SimpleClass((SimpleClass *)v3, 5, "Test");
  SimpleClass::setValue((SimpleClass *)v3, 10);
  Value = SimpleClass::getValue((SimpleClass *)v3);
  v2 = SimpleClass::compute((SimpleClass *)v3, 3);
  return v2 + Value + (unsigned int)SimpleClass::getClassID((SimpleClass *)v3);
}


/* Function: _Z20test_cpp_constructorv @ 0x245C */
__int64 test_cpp_constructor(void)
{
  int Data; // [rsp+Ch] [rbp-24h]
  int v2; // [rsp+Ch] [rbp-24h]
  _BYTE v3[24]; // [rsp+10h] [rbp-20h] BYREF
  unsigned __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  LifecycleClass::LifecycleClass((LifecycleClass *)v3, 5u);
  Data = LifecycleClass::getData((LifecycleClass *)v3, 2u);
  v2 = LifecycleClass::getInstanceCount((LifecycleClass *)v3) + Data;
  LifecycleClass::~LifecycleClass((LifecycleClass *)v3);
  return 1000 * (unsigned int)LifecycleClass::getInstanceCount((LifecycleClass *)v3) + v2;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x24DE */
__int64 __fastcall call_virtual_func(Base *a1, unsigned int a2)
{
  return (**(__int64 (__fastcall ***)(Base *, _QWORD))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x250B */
__int64 test_cpp_virtual_func(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+8h] [rbp-58h]
  int v3; // [rsp+Ch] [rbp-54h]
  int v4; // [rsp+10h] [rbp-50h]
  _QWORD v5[2]; // [rsp+18h] [rbp-48h] BYREF
  Base *v6; // [rsp+28h] [rbp-38h]
  _BYTE v7[24]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v8; // [rsp+48h] [rbp-18h]

  v8 = __readfsqword(0x28u);
  v5[0] = &off_8B50;
  Derived::Derived((Derived *)v7, 3);
  v2 = Base::virtual_func((Base *)v5, 5);
  v3 = Derived::virtual_func((Derived *)v7, 5);
  v5[1] = v5;
  v6 = (Base *)v7;
  v4 = call_virtual_func((Base *)v5, 5u);
  v0 = v4 + v3 + v2 + call_virtual_func(v6, 5u);
  Derived::~Derived((Derived *)v7);
  Base::~Base((Base *)v5);
  return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x2616 */
__int64 test_cpp_multiple_inheritance(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+4h] [rbp-5Ch]
  __int64 (__fastcall **v3)(_QWORD); // [rsp+20h] [rbp-40h] BYREF
  int v4; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall **v5)(_QWORD); // [rsp+30h] [rbp-30h] BYREF
  int v6; // [rsp+38h] [rbp-28h]
  unsigned __int64 v7; // [rsp+48h] [rbp-18h]

  v7 = __readfsqword(0x28u);
  MultiDerived::MultiDerived((MultiDerived *)&v3);
  v4 = 100;
  v6 = 200;
  v2 = (*v3)(&v3);
  v0 = (*v5)(&v5) + v2 + (&v3 != &v5);
  MultiDerived::~MultiDerived((MultiDerived *)&v3);
  return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x26F3 */
__int64 test_cpp_diamond_inheritance(void)
{
  unsigned int v0; // ebx
  int v2; // [rsp+0h] [rbp-60h]
  _BYTE v3[32]; // [rsp+10h] [rbp-50h] BYREF
  __int64 (__fastcall **v4)(_QWORD); // [rsp+30h] [rbp-30h] BYREF
  int v5; // [rsp+38h] [rbp-28h]
  unsigned __int64 v6; // [rsp+48h] [rbp-18h]

  v6 = __readfsqword(0x28u);
  DiamondDerived::DiamondDerived((DiamondDerived *)v3);
  v5 = 50;
  v2 = (*v4)(&v4);
  v5 = 100;
  v0 = v2 + (*v4)(&v4);
  DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
  return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x27B2 */
__int64 test_cpp_operator_overload(void)
{
  int v0; // edx
  char v2; // [rsp+Fh] [rbp-21h]
  _BYTE v3[8]; // [rsp+10h] [rbp-20h] BYREF
  _BYTE v4[8]; // [rsp+18h] [rbp-18h] BYREF
  _QWORD v5[2]; // [rsp+20h] [rbp-10h] BYREF

  v5[1] = __readfsqword(0x28u);
  Point::Point((Point *)v3, 1, 2);
  Point::Point((Point *)v4, 3, 4);
  v5[0] = Point::operator+(v3, v4);
  v2 = Point::operator==(v3, v4);
  Point::operator++(v5);
  if ( v2 )
    v0 = 0;
  else
    v0 = 10;
  return (unsigned int)(v0 + LODWORD(v5[0]) + HIDWORD(v5[0]));
}


/* Function: _Z22test_cpp_template_funcv @ 0x2864 */
__int64 test_cpp_template_func(void)
{
  int v1; // [rsp+4h] [rbp-1Ch] BYREF
  int v2; // [rsp+8h] [rbp-18h] BYREF
  int v3; // [rsp+Ch] [rbp-14h]
  double v4; // [rsp+10h] [rbp-10h]
  unsigned __int64 v5; // [rsp+18h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  v3 = template_max<int>(3, 7);
  v4 = template_max<double>(2.5, 1.5);
  v1 = 10;
  v2 = 20;
  template_swap<int>(&v1, &v2);
  return (unsigned int)(v1 + v3 + (int)v4 + v2);
}


/* Function: _Z23test_cpp_template_classv @ 0x2906 */
__int64 test_cpp_template_class(void)
{
  int v1; // [rsp+0h] [rbp-A0h]
  int Size; // [rsp+4h] [rbp-9Ch]
  _BYTE v3[48]; // [rsp+10h] [rbp-90h] BYREF
  _BYTE v4[88]; // [rsp+40h] [rbp-60h] BYREF
  unsigned __int64 v5; // [rsp+98h] [rbp-8h]

  v5 = __readfsqword(0x28u);
  Container<int>::Container(v3);
  Container<int>::push(v3, 10);
  Container<int>::push(v3, 20);
  Container<int>::push(v3, 30);
  v1 = Container<int>::get(v3, 0);
  Size = Container<int>::getSize(v3);
  Container<double>::Container(v4);
  Container<double>::push(v4, 3.14);
  return (unsigned int)(Size + v1 + (int)Container<double>::get(v4, 0));
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x2A12 */
__int64 __fastcall test_cpp_lambda(void)::{lambda(int)#1}::operator()(__int64 a1, int a2)
{
  **(_DWORD **)(a1 + 8) += 5;
  return (unsigned int)(a2 * *(_DWORD *)a1 + **(_DWORD **)(a1 + 8));
}


/* Function: _Z15test_cpp_lambdav @ 0x2A4E */
__int64 test_cpp_lambda(void)
{
  _DWORD v1[2]; // [rsp+0h] [rbp-30h] BYREF
  int v2; // [rsp+10h] [rbp-20h] BYREF
  _DWORD *v3; // [rsp+18h] [rbp-18h]
  unsigned __int64 v4; // [rsp+28h] [rbp-8h]

  v4 = __readfsqword(0x28u);
  v1[1] = 10;
  v1[0] = 20;
  v2 = 10;
  v3 = v1;
  return (unsigned int)test_cpp_lambda(void)::{lambda(int)#1}::operator()((__int64)&v2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x2ABE */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // rax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x2BE4 */
void __fastcall test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(__int64 a1, _DWORD *a2)
{
  *a2 = -1;
  if ( a2 )
    operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2C17 */
__int64 test_cpp_smart_ptr(void)
{
  _DWORD *v0; // rax
  __int64 v1; // rax
  _DWORD *v2; // rdx
  _DWORD *v3; // rax
  unsigned int v4; // ebx
  char v6; // [rsp+Bh] [rbp-45h] BYREF
  int v7; // [rsp+Ch] [rbp-44h]
  int v8; // [rsp+10h] [rbp-40h]
  int v9; // [rsp+14h] [rbp-3Ch]
  _BYTE v10[8]; // [rsp+18h] [rbp-38h] BYREF
  _BYTE v11[8]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-18h]

  v14 = __readfsqword(0x28u);
  v0 = (_DWORD *)operator new(4u);
  *v0 = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v10, v0);
  *(_DWORD *)std::unique_ptr<int>::operator*(v10) = 200;
  v1 = std::move<std::unique_ptr<int> &>(v10);
  std::unique_ptr<int>::unique_ptr(v11, v1);
  v7 = *(_DWORD *)std::unique_ptr<int>::operator*(v11);
  v2 = (_DWORD *)operator new[](0x14u);
  *v2 = 1;
  v2[1] = 2;
  v2[2] = 3;
  v2[3] = 4;
  v2[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v12, v2);
  v8 = *(_DWORD *)std::unique_ptr<int []>::operator[](v12, 2);
  v3 = (_DWORD *)operator new(4u);
  *v3 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
    v13,
    v3,
    &v6);
  v9 = *(_DWORD *)std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(v13);
  v4 = v8 + v7 + v9;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(v13);
  std::unique_ptr<int []>::~unique_ptr(v12);
  std::unique_ptr<int>::~unique_ptr(v11);
  std::unique_ptr<int>::~unique_ptr(v10);
  return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x2DC5 */
__int64 test_cpp_rtti(void)
{
  RTTIDerivedA *v0; // rbx
  RTTIDerivedB *v1; // rbx
  RTTIDerivedA *v2; // rax
  RTTIDerivedB *v3; // rax
  const char *v4; // rax
  int v6; // [rsp+Ch] [rbp-34h]
  unsigned int v7; // [rsp+Ch] [rbp-34h]
  RTTIDerivedA *lpsrc; // [rsp+10h] [rbp-30h]

  v0 = (RTTIDerivedA *)operator new(8u);
  *(_QWORD *)v0 = 0;
  RTTIDerivedA::RTTIDerivedA(v0);
  lpsrc = v0;
  v1 = (RTTIDerivedB *)operator new(8u);
  *(_QWORD *)v1 = 0;
  RTTIDerivedB::RTTIDerivedB(v1);
  v6 = 0;
  if ( !lpsrc )
    __cxa_bad_typeid();
  if ( (unsigned __int8)std::type_info::operator==(*(_QWORD *)(*(_QWORD *)lpsrc - 8LL), &`typeinfo for'RTTIDerivedA) )
    v6 = 10;
  if ( !v1 )
    __cxa_bad_typeid();
  if ( (unsigned __int8)std::type_info::operator==(*(_QWORD *)(*(_QWORD *)v1 - 8LL), &`typeinfo for'RTTIDerivedB) )
    v6 += 20;
  v2 = (RTTIDerivedA *)__dynamic_cast(
                         lpsrc,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                         0);
  if ( v2 )
    v6 += RTTIDerivedA::derivedA_data(v2);
  v3 = (RTTIDerivedB *)__dynamic_cast(
                         v1,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                         0);
  if ( v3 )
    v6 += RTTIDerivedB::derivedB_data(v3);
  v4 = (const char *)std::type_info::name(*(std::type_info **)(*(_QWORD *)lpsrc - 8LL));
  v7 = strlen(v4) + v6;
  (*(void (__fastcall **)(RTTIDerivedA *))(*(_QWORD *)lpsrc + 8LL))(lpsrc);
  (*(void (__fastcall **)(RTTIDerivedB *))(*(_QWORD *)v1 + 8LL))(v1);
  return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F6F */
void __noreturn test_cpp_oo_features(void)
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
  printf(format, v0);
  v1 = test_cpp_constructor();
  printf(aCppL302D, v1);
  v2 = test_cpp_virtual_func();
  printf(aCppL303D, v2);
  v3 = test_cpp_multiple_inheritance();
  printf(aCppL304D, v3);
  v4 = test_cpp_diamond_inheritance();
  printf(aCppL305D, v4);
  v5 = test_cpp_operator_overload();
  printf(aCppL306D, v5);
  v6 = test_cpp_template_func();
  printf(aCppL307D, v6);
  v7 = test_cpp_template_class();
  printf(aCppL308D, v7);
  v8 = test_cpp_lambda();
  printf(aCppL309D, v8);
  test_cpp_exception();
}


/* Function: main @ 0x30CD */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x30E2 */
__int64 __fastcall ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
           a1,
           a2,
           a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x3110 */
__int64 __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
           a1,
           a2,
           a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x313E */
_QWORD *__fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(__int64 a1)
{
  __int64 deleter; // rbx
  _DWORD **v2; // rax
  _QWORD *result; // rax
  _QWORD *v4; // [rsp+18h] [rbp-18h]

  v4 = (_QWORD *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(a1);
    v2 = (_DWORD **)std::move<int *&>(v4);
    test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x31A2 */
__int64 __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(__int64 a1)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x31C4 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[3]; // [rsp+10h] [rbp-20h] BYREF

  v5[1] = a1;
  v5[0] = a2;
  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  return std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
           a1,
           v5,
           v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x3202 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(__int64 a1)
{
  return std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x321C */
__int64 __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(__int64 a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x3236 */
__int64 __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(__int64 a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x3250 */
__int64 __fastcall std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x325E */
__int64 __fastcall std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r12
  __int64 v4; // rax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  v4 = std::forward<int *&>(a2);
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
           a1,
           v4,
           v3);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32AC */
__int64 __fastcall std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__int64 a1)
{
  return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x32C6 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(__int64 a1)
{
  return std::get<1ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x32E0 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(__int64 a1)
{
  return *(_QWORD *)std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x32FE */
__int64 __fastcall std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(a1, v3);
  v4 = std::forward<int *&>(a2);
  return std::_Head_base<0ul,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3353 */
__int64 __fastcall std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x336D */
__int64 __fastcall std::get<1ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__int64 a1)
{
  return std::__get_helper<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x3387 */
__int64 __fastcall std::get<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__int64 a1)
{
  return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x33A2 */
__int64 __fastcall std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(
        __int64 a1,
        __int64 a2)
{
  return std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(a1, a2);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x33C8 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33E2 */
__int64 __fastcall std::__get_helper<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__int64 a1)
{
  return std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x33FC */
__int64 __fastcall std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x3416 */
void std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x3425 */
__int64 __fastcall std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__int64 a1)
{
  return std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x343F */
__int64 __fastcall std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x3459 */
__int64 __fastcall std::_Head_base<1ul,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x3467 */
int __fastcall __static_initialization_and_destruction_0(int a1, int a2)
{
  int result; // eax

  if ( a1 == 1 && a2 == 0xFFFF )
  {
    std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
    return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  }
  return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x34BD */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x34D6 */
__int64 __fastcall std::type_info::name(std::type_info *this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return *((_QWORD *)this + 1) + 1LL;
  else
    return *((_QWORD *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x350A */
_BOOL8 __fastcall std::type_info::operator==(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8)
      || **(_BYTE **)(a1 + 8) != 42 && !strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3570 */
void __fastcall SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
  *(_DWORD *)this = a2;
  strncpy((char *)this + 4, a3, 0x1Fu);
  *((_BYTE *)this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x35B8 */
__int64 __fastcall SimpleClass::getValue(SimpleClass *this)
{
  return *(unsigned int *)this;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x35CC */
SimpleClass *__fastcall SimpleClass::setValue(SimpleClass *this, int a2)
{
  SimpleClass *result; // rax

  result = this;
  *(_DWORD *)this = a2;
  return result;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x35E8 */
__int64 __fastcall SimpleClass::compute(SimpleClass *this, int a2)
{
  int v2; // ebx

  v2 = a2 * *(_DWORD *)this;
  return v2 + (unsigned int)strlen((const char *)this + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3620 */
__int64 __fastcall SimpleClass::getClassID(SimpleClass *this)
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3630 */
void __fastcall LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+18h] [rbp-8h]

  *((_QWORD *)this + 1) = a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  *(_QWORD *)this = operator new[](4 * a2);
  for ( i = 0; i < a2; ++i )
    *(_DWORD *)(*(_QWORD *)this + 4 * i) = 10 * i;
  ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x36D0 */
void __fastcall LifecycleClass::~LifecycleClass(void **this)
{
  if ( *this )
    operator delete[](*this);
  --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x370E */
__int64 __fastcall LifecycleClass::getData(LifecycleClass *this, unsigned __int64 a2)
{
  if ( a2 >= *((_QWORD *)this + 1) )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(*(_QWORD *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3749 */
__int64 __fastcall LifecycleClass::getInstanceCount(LifecycleClass *this)
{
  return (unsigned int)LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x375A */
__int64 __fastcall Base::virtual_func(Base *this, int a2)
{
  return (unsigned int)(a2 + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3772 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x3788 */
void __fastcall Base::~Base(Base *this)
{
  *(_QWORD *)this = &off_8B50;
}


/* Function: _ZN4BaseD0Ev @ 0x37A6 */
void __fastcall Base::~Base(Base *this)
{
  Base::~Base(this);
  operator delete(this, 8u);
}


/* Function: _ZN4BaseC2Ev @ 0x37D6 */
void __fastcall Base::Base(Base *this)
{
  *(_QWORD *)this = &off_8B50;
}


/* Function: _ZN7DerivedC2Ei @ 0x37F4 */
void __fastcall Derived::Derived(Derived *this, int a2)
{
  Base::Base(this);
  *(_QWORD *)this = &off_8B20;
  *((_DWORD *)this + 2) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x382E */
__int64 __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return (unsigned int)(a2 * *((_DWORD *)this + 2));
}


/* Function: _ZNK7Derived7getNameEv @ 0x384A */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x3860 */
__int64 __fastcall BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3874 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  *(_QWORD *)this = &off_8AF8;
}


/* Function: _ZN5BaseAD0Ev @ 0x3892 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  BaseA::~BaseA(this);
  operator delete(this, 0x10u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38C2 */
__int64 __fastcall BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38D6 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  *(_QWORD *)this = &off_8AD0;
}


/* Function: _ZN5BaseBD0Ev @ 0x38F4 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  BaseB::~BaseB(this);
  operator delete(this, 0x10u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3924 */
__int64 __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x3938 */
__int64 __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x394B */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return MultiDerived::funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseAC2Ev @ 0x3956 */
void __fastcall BaseA::BaseA(BaseA *this)
{
  *(_QWORD *)this = &off_8AF8;
}


/* Function: _ZN5BaseBC2Ev @ 0x3974 */
void __fastcall BaseB::BaseB(BaseB *this)
{
  *(_QWORD *)this = &off_8AD0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3992 */
void __fastcall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA(this);
  BaseB::BaseB((MultiDerived *)((char *)this + 16));
  *(_QWORD *)this = &off_8A78;
  *((_QWORD *)this + 2) = &off_8AA8;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x39DE */
__int64 __fastcall VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x39F2 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  *(_QWORD *)this = &off_8A50;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3A10 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this, 0x10u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x3A40 */
__int64 __fastcall MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 150);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x3A6E */
__int64 __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3A7C */
__int64 __fastcall MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 200);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x3AAA */
__int64 __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3AB8 */
__int64 __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 250);
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x3AE6 */
__int64 __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)));
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x3AF3 */
__int64 __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3AFE */
void __fastcall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(_QWORD *)this = &off_8A50;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3B1C */
void __fastcall MiddleA::MiddleA(MiddleA *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x3B60 */
void __fastcall MiddleA::~MiddleA(MiddleA *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3BA4 */
void __fastcall MiddleB::MiddleB(MiddleB *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x3BE8 */
void __fastcall MiddleB::~MiddleB(MiddleB *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x3C2C */
void __fastcall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 32));
  MiddleA::MiddleA(this, off_8940);
  MiddleB::MiddleB((DiamondDerived *)((char *)this + 16), off_8950);
  *(_QWORD *)this = &off_88B8;
  *((_QWORD *)this + 4) = &off_8920;
  *((_QWORD *)this + 2) = &off_88E8;
}


/* Function: _ZN5PointC2Eii @ 0x3CAE */
void __fastcall Point::Point(Point *this, int a2, int a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3CD6 */
__int64 __fastcall Point::operator+(_DWORD *a1, _DWORD *a2)
{
  _QWORD v3[2]; // [rsp+10h] [rbp-10h] BYREF

  v3[1] = __readfsqword(0x28u);
  Point::Point((Point *)v3, *a2 + *a1, a2[1] + a1[1]);
  return v3[0];
}


/* Function: _ZNK5PointeqERKS_ @ 0x3D40 */
_BOOL8 __fastcall Point::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x3D80 */
_DWORD *__fastcall Point::operator++(_DWORD *a1)
{
  ++*a1;
  ++a1[1];
  return a1;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3DB2 */
__int64 __fastcall template_max<int>(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3DD2 */
__int64 __fastcall template_max<double>(double a1, double a2)
{
  if ( a1 <= a2 )
    a1 = a2;
  return *(_QWORD *)&a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3E08 */
int *__fastcall template_swap<int>(int *a1, int *a2)
{
  int *result; // rax
  int v3; // [rsp+1Ch] [rbp-4h]

  v3 = *a1;
  *a1 = *a2;
  result = a2;
  *a2 = v3;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3E3A */
__int64 __fastcall Container<int>::Container(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3E54 */
__int64 __fastcall Container<int>::push(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 40);
  if ( (int)result <= 9 )
  {
    LODWORD(result) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = result + 1;
    result = (int)result;
    *(_DWORD *)(a1 + 4LL * (int)result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3E90 */
__int64 __fastcall Container<int>::get(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 40) )
    return 0;
  else
    return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3EC8 */
__int64 __fastcall Container<int>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3EDE */
__int64 __fastcall Container<double>::Container(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3EF8 */
__int64 __fastcall Container<double>::push(__int64 a1, double a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 80);
  if ( (int)result <= 9 )
  {
    LODWORD(result) = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = result + 1;
    result = (int)result;
    *(double *)(a1 + 8LL * (int)result) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3F3A */
__int64 __fastcall Container<double>::get(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 80) )
    return 0;
  else
    return *(_QWORD *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3F7C */
__int64 __fastcall Container<double>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3F92 */
__int64 __fastcall std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
        __int64 a1,
        __int64 a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3FBC */
__int64 __fastcall std::unique_ptr<int>::unique_ptr(__int64 a1, __int64 a2)
{
  return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x3FE6 */
__int64 __fastcall RTTIBase::getType(RTTIBase *this)
{
  return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3FFA */
__int64 __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x400E */
__int64 __fastcall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4022 */
__int64 __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x4036 */
__int64 __fastcall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
  return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x404A */
void __fastcall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(_QWORD *)this = off_8888;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4068 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  *(_QWORD *)this = off_8888;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x4086 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x40B6 */
void __fastcall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase(this);
  *(_QWORD *)this = off_8860;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x40E4 */
void __fastcall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase(this);
  *(_QWORD *)this = off_8838;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4112 */
__int64 __fastcall ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
        __int64 a1,
        __int64 a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x413C */
__int64 __fastcall std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(__int64 a1, __int64 a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x4166 */
_QWORD *__fastcall std::unique_ptr<int>::~unique_ptr(__int64 a1)
{
  __int64 deleter; // rbx
  _QWORD *v2; // rax
  _QWORD *result; // rax
  _QWORD *v4; // [rsp+18h] [rbp-18h]

  v4 = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int>::get_deleter(a1);
    v2 = (_QWORD *)std::move<int *&>(v4);
    std::default_delete<int>::operator()(deleter, *v2);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x41CE */
__int64 __fastcall std::unique_ptr<int>::operator*(__int64 a1)
{
  return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x41F3 */
__int64 __fastcall std::move<std::unique_ptr<int> &>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4206 */
_QWORD *__fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(a1, a2);
  result = a1;
  *a1 = *a2;
  return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x423E */
_QWORD *__fastcall std::tuple<int *,std::default_delete<int>>::tuple(_QWORD *a1, _QWORD *a2)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4268 */
_QWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *result; // rax

  v2 = (_QWORD *)std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
  std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
  result = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
  *result = 0;
  return result;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x42B2 */
__int64 __fastcall ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
        __int64 a1,
        __int64 a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x42DC */
__int64 __fastcall std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
        __int64 a1,
        __int64 a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x4306 */
_QWORD *__fastcall std::unique_ptr<int []>::~unique_ptr(__int64 a1)
{
  __int64 deleter; // rax
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+18h] [rbp-8h]

  v3 = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  if ( *v3 )
  {
    deleter = std::unique_ptr<int []>::get_deleter(a1);
    std::default_delete<int []>::operator()<int>(deleter, *v3);
  }
  result = v3;
  *v3 = 0;
  return result;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x4362 */
__int64 __fastcall std::unique_ptr<int []>::operator[](__int64 a1, __int64 a2)
{
  return std::unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x439A */
_QWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
  result = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x43D6 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__int64 a1)
{
  return std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F4 */
__int64 __fastcall std::unique_ptr<int>::get_deleter(__int64 a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4412 */
__int64 __fastcall std::move<int *&>(__int64 a1)
{
  return a1;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4424 */
void __fastcall std::default_delete<int>::operator()(__int64 a1, void *a2)
{
  if ( a2 )
    operator delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4452 */
__int64 __fastcall std::unique_ptr<int>::get(__int64 a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x4470 */
__int64 __fastcall std::move<std::tuple<int *,std::default_delete<int>> &>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4482 */
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl()
{
  ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4496 */
_QWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
  result = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x44D2 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(__int64 a1)
{
  return std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x44F0 */
__int64 __fastcall std::unique_ptr<int []>::get_deleter(__int64 a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x450E */
void __fastcall std::default_delete<int []>::operator()<int>(__int64 a1, void *a2)
{
  if ( a2 )
    operator delete[](a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4538 */
__int64 __fastcall std::unique_ptr<int []>::get(__int64 a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4556 */
__int64 __fastcall std::tuple<int *,std::default_delete<int>>::tuple<true,true>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4575 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4594 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(__int64 a1)
{
  return std::get<1ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B2 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__int64 a1)
{
  return *(_QWORD *)std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x45D4 */
__int64 __fastcall std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x45F3 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4612 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(__int64 a1)
{
  return std::get<1ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4630 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(__int64 a1)
{
  return *(_QWORD *)std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x4652 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(__int64 a1)
{
  std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(a1);
  return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x467D */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x469B */
__int64 __fastcall std::get<1ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::__get_helper<1ul,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x46B9 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x46D8 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(__int64 a1)
{
  std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(a1);
  return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4703 */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4721 */
__int64 __fastcall std::get<1ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::__get_helper<1ul,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x473F */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x475D */
__int64 __fastcall std::forward<int *&>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4770 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4790 */
_QWORD *__fastcall std::_Head_base<0ul,int *,false>::_Head_base(_QWORD *a1)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = 0;
  return result;
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x47AA */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x47C8 */
__int64 __fastcall std::__get_helper<1ul,std::default_delete<int>>(__int64 a1)
{
  return std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x47E6 */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4804 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4823 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4841 */
__int64 __fastcall std::__get_helper<1ul,std::default_delete<int []>>(__int64 a1)
{
  return std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x485F */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x487E */
_QWORD *__fastcall std::_Head_base<0ul,int *,false>::_Head_base<int *&>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *result; // rax

  v2 = *(_QWORD *)std::forward<int *&>(a2);
  result = a1;
  *a1 = v2;
  return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x48AC */
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base()
{
  ;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x48BB */
__int64 __fastcall std::_Head_base<0ul,int *,false>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x48CD */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x48EB */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x490A */
void std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4919 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4937 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4955 */
__int64 __fastcall std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4967 */
__int64 __fastcall std::_Head_base<0ul,int *,false>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4979 */
__int64 __fastcall std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x498C */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  *(_QWORD *)this = off_8838;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x49BA */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this, 8u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x49EA */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  *(_QWORD *)this = off_8860;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4A18 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this, 8u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x4A48 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  *(_QWORD *)this = &off_88B8;
  *((_QWORD *)this + 4) = &off_8920;
  *((_QWORD *)this + 2) = &off_88E8;
  MiddleB::~MiddleB((DiamondDerived *)((char *)this + 16), off_8950);
  MiddleA::~MiddleA(this, off_8940);
  VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 32));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x4ACA */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4AD7 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x4AE8 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x30u);
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4B17 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4B21 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x4B2E */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  *(_QWORD *)this = &off_8A78;
  *((_QWORD *)this + 2) = &off_8AA8;
  BaseB::~BaseB((MultiDerived *)((char *)this + 16));
  BaseA::~BaseA(this);
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4B7A */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x4B84 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this, 0x20u);
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4BB3 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN7DerivedD2Ev @ 0x4BBE */
void __fastcall Derived::~Derived(Derived *this)
{
  *(_QWORD *)this = &off_8B20;
  Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x4BEC */
void __fastcall Derived::~Derived(Derived *this)
{
  Derived::~Derived(this);
  operator delete(this, 0x10u);
}


/* Function: .term_proc @ 0x4C1C */
void term_proc()
{
  ;
}


/* FAILED to decompile: _Znam @ 0x9048 */

/* FAILED to decompile: printf @ 0x9050 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9058 */

/* FAILED to decompile: strlen @ 0x9060 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9068 */

/* FAILED to decompile: strncpy @ 0x9070 */

/* FAILED to decompile: __libc_start_main @ 0x9080 */

/* FAILED to decompile: __cxa_atexit @ 0x9088 */

/* FAILED to decompile: _Znwm @ 0x9090 */

/* FAILED to decompile: _ZdlPvm @ 0x9098 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90A0 */

/* FAILED to decompile: __stack_chk_fail @ 0x90A8 */

/* FAILED to decompile: __dynamic_cast @ 0x90B0 */

/* FAILED to decompile: _ZdaPv @ 0x90B8 */

/* FAILED to decompile: strcmp @ 0x90C8 */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x90D0 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90E0 */

/* FAILED to decompile: puts @ 0x90E8 */

/* FAILED to decompile: __cxa_end_catch @ 0x90F0 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90F8 */

/* FAILED to decompile: __cxa_throw @ 0x9100 */

/* FAILED to decompile: _Unwind_Resume @ 0x9110 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x9118 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x9120 */

/* FAILED to decompile: __gmon_start__ @ 0x9130 */

/* Total functions decompiled: 225, failed: 26 */
