/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/5-1/5-1_clang_O0_no_g
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


/* Function: __cxx_global_var_init @ 0x2180 */
int _cxx_global_var_init()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x21B0 */
int GLOBAL__sub_I_5_1_cpp()
{
  return _cxx_global_var_init();
}


/* Function: _start @ 0x21C0 */
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


/* Function: deregister_tm_clones @ 0x21F0 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x2220 */
__int64 register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x2260 */
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


/* Function: frame_dummy @ 0x22A0 */
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x22B0 */
__int64 test_cpp_member_func(void)
{
  int v1; // [rsp+10h] [rbp-30h]
  int Value; // [rsp+14h] [rbp-2Ch]
  _BYTE v3[40]; // [rsp+18h] [rbp-28h] BYREF

  SimpleClass::SimpleClass((SimpleClass *)v3, 5, "Test");
  SimpleClass::setValue((SimpleClass *)v3, 10);
  Value = SimpleClass::getValue((SimpleClass *)v3);
  v1 = SimpleClass::compute((SimpleClass *)v3, 3);
  return (unsigned int)SimpleClass::getClassID((SimpleClass *)v3) + v1 + Value;
}


/* Function: _Z20test_cpp_constructorv @ 0x2310 */
__int64 test_cpp_constructor(void)
{
  int v0; // eax
  int InstanceCount; // [rsp+Ch] [rbp-34h]
  int Data; // [rsp+18h] [rbp-28h]
  _BYTE v4[20]; // [rsp+28h] [rbp-18h] BYREF
  int v5; // [rsp+3Ch] [rbp-4h]

  v5 = 0;
  LifecycleClass::LifecycleClass((LifecycleClass *)v4, 5u);
  Data = LifecycleClass::getData((LifecycleClass *)v4, 2u);
  v5 += Data;
  InstanceCount = LifecycleClass::getInstanceCount((LifecycleClass *)v4);
  v5 += InstanceCount;
  LifecycleClass::~LifecycleClass((LifecycleClass *)v4);
  v0 = LifecycleClass::getInstanceCount((LifecycleClass *)v4);
  return (unsigned int)(v5 + 1000 * v0);
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x23B0 */
__int64 __fastcall call_virtual_func(Base *a1, unsigned int a2)
{
  return (**(__int64 (__fastcall ***)(Base *, _QWORD))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x23E0 */
__int64 test_cpp_virtual_func(void)
{
  unsigned int v1; // [rsp+4h] [rbp-5Ch]
  int v2; // [rsp+1Ch] [rbp-44h]
  int v3; // [rsp+34h] [rbp-2Ch]
  int v4; // [rsp+38h] [rbp-28h]
  _BYTE v5[16]; // [rsp+48h] [rbp-18h] BYREF
  _BYTE v6[8]; // [rsp+58h] [rbp-8h] BYREF

  Base::Base((Base *)v6);
  Derived::Derived((Derived *)v5, 3);
  v4 = Base::virtual_func((Base *)v6, 5);
  v3 = Derived::virtual_func((Derived *)v5, 5);
  v2 = call_virtual_func((Base *)v6, 5u);
  v1 = call_virtual_func((Base *)v5, 5u) + v2 + v3 + v4;
  Derived::~Derived((Derived *)v5);
  Base::~Base((Base *)v6);
  return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24F0 */
__int64 test_cpp_multiple_inheritance(void)
{
  _QWORD *v1; // [rsp+18h] [rbp-58h]
  int v2; // [rsp+28h] [rbp-48h]
  int v3; // [rsp+3Ch] [rbp-34h]
  __int64 (__fastcall **v4)(_QWORD); // [rsp+50h] [rbp-20h] BYREF
  int v5; // [rsp+58h] [rbp-18h]
  _DWORD v6[4]; // [rsp+60h] [rbp-10h] BYREF

  MultiDerived::MultiDerived((MultiDerived *)&v4);
  v5 = 100;
  v6[2] = 200;
  v1 = 0;
  if ( &v4 )
    v1 = v6;
  v3 = (*v4)(&v4);
  v2 = (*(__int64 (__fastcall **)(_QWORD *))*v1)(v1);
  MultiDerived::~MultiDerived((MultiDerived *)&v4);
  return (unsigned int)(&v4 != v1) + v2 + v3;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x25D0 */
__int64 test_cpp_diamond_inheritance(void)
{
  unsigned int v1; // [rsp+Ch] [rbp-64h]
  __int64 (__fastcall ***v2)(_QWORD); // [rsp+18h] [rbp-58h]
  int v3; // [rsp+34h] [rbp-3Ch]
  _QWORD v4[6]; // [rsp+40h] [rbp-30h] BYREF

  DiamondDerived::DiamondDerived((DiamondDerived *)v4);
  *(_DWORD *)((char *)&v4[1] + *(_QWORD *)(v4[0] - 24LL)) = 50;
  v2 = 0;
  if ( v4 )
    v2 = (__int64 (__fastcall ***)(_QWORD))((char *)v4 + *(_QWORD *)(v4[0] - 24LL));
  v3 = (**v2)(v2);
  *(_DWORD *)((char *)&v4[1] + *(_QWORD *)(v4[0] - 24LL)) = 100;
  v1 = (**v2)(v2) + v3;
  DiamondDerived::~DiamondDerived((DiamondDerived *)v4);
  return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x26A0 */
__int64 test_cpp_operator_overload(void)
{
  int v0; // ecx
  char v2; // [rsp+7h] [rbp-19h]
  __int64 v3; // [rsp+8h] [rbp-18h] BYREF
  _BYTE v4[8]; // [rsp+10h] [rbp-10h] BYREF
  _BYTE v5[8]; // [rsp+18h] [rbp-8h] BYREF

  Point::Point((Point *)v5, 1, 2);
  Point::Point((Point *)v4, 3, 4);
  v3 = Point::operator+(v5, v4);
  v2 = Point::operator==(v5, v4) & 1;
  Point::operator++(&v3);
  v0 = 10;
  if ( (v2 & 1) != 0 )
    v0 = 0;
  return (unsigned int)(v0 + HIDWORD(v3) + v3);
}


/* Function: _Z22test_cpp_template_funcv @ 0x2720 */
__int64 test_cpp_template_func(void)
{
  int v1; // [rsp+8h] [rbp-18h] BYREF
  int v2; // [rsp+Ch] [rbp-14h] BYREF
  double v3; // [rsp+10h] [rbp-10h]
  int v4; // [rsp+1Ch] [rbp-4h]

  v4 = template_max<int>(3, 7);
  v3 = template_max<double>(2.5, 1.5);
  v2 = 10;
  v1 = 20;
  template_swap<int>(&v2, &v1);
  return (unsigned int)(v1 + v2 + (int)v3 + v4);
}


/* Function: _Z23test_cpp_template_classv @ 0x2790 */
__int64 test_cpp_template_class(void)
{
  double v1; // [rsp+8h] [rbp-98h]
  _BYTE v2[88]; // [rsp+10h] [rbp-90h] BYREF
  int Size; // [rsp+68h] [rbp-38h]
  int v4; // [rsp+6Ch] [rbp-34h]
  _BYTE v5[48]; // [rsp+70h] [rbp-30h] BYREF

  Container<int>::Container(v5);
  Container<int>::push(v5, 10);
  Container<int>::push(v5, 20);
  Container<int>::push(v5, 30);
  v4 = Container<int>::get(v5, 0);
  Size = Container<int>::getSize(v5);
  Container<double>::Container(v2);
  Container<double>::push(v2, 3.14);
  v1 = Container<double>::get(v2, 0);
  return (unsigned int)((int)v1 + Size + v4);
}


/* Function: _Z15test_cpp_lambdav @ 0x2840 */
__int64 test_cpp_lambda(void)
{
  int v1; // [rsp+Ch] [rbp-24h]
  _BYTE v2[8]; // [rsp+10h] [rbp-20h] BYREF
  int v3; // [rsp+18h] [rbp-18h] BYREF
  _DWORD *v4; // [rsp+20h] [rbp-10h]
  _DWORD v5[2]; // [rsp+28h] [rbp-8h] BYREF

  v5[1] = 10;
  v5[0] = 20;
  v3 = 10;
  v4 = v5;
  v1 = test_cpp_lambda(void)::$_1::operator()(&v3, 3);
  return (unsigned int)test_cpp_lambda(void)::$_0::operator()<int,int>(v2, 10, 20) + v1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x28A0 */
__int64 __fastcall test_cpp_lambda(void)::$_1::operator()(__int64 a1, int a2)
{
  **(_DWORD **)(a1 + 8) += 5;
  return (unsigned int)(**(_DWORD **)(a1 + 8) + *(_DWORD *)a1 * a2);
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x28D0 */
__int64 __fastcall test_cpp_lambda(void)::$_0::operator()<int,int>(__int64 a1, int a2, int a3)
{
  return (unsigned int)(a3 + a2);
}


/* Function: _Z18test_cpp_exceptionv @ 0x28F0 */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // rdi

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2A50 */
__int64 test_cpp_smart_ptr(void)
{
  __int64 v0; // rax
  _DWORD *v1; // rsi
  unsigned int v3; // [rsp+4h] [rbp-9Ch]
  _DWORD *v4; // [rsp+10h] [rbp-90h]
  _DWORD *v5; // [rsp+18h] [rbp-88h]
  _BYTE v6[8]; // [rsp+60h] [rbp-40h] BYREF
  _BYTE v7[4]; // [rsp+68h] [rbp-38h] BYREF
  int v8; // [rsp+6Ch] [rbp-34h]
  _BYTE v9[12]; // [rsp+70h] [rbp-30h] BYREF
  int v10; // [rsp+7Ch] [rbp-24h]
  _BYTE v11[12]; // [rsp+80h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+98h] [rbp-8h] BYREF

  *(_DWORD *)operator new(4u) = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>();
  *(_DWORD *)std::unique_ptr<int>::operator*(v12) = 200;
  v0 = std::move<std::unique_ptr<int> &>(v12);
  std::unique_ptr<int>::unique_ptr(v11, v0);
  v10 = *(_DWORD *)std::unique_ptr<int>::operator*(v11);
  v1 = (_DWORD *)operator new[](0x14u);
  *v1 = 1;
  v1[1] = 2;
  v1[2] = 3;
  v1[3] = 4;
  v1[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>();
  v8 = *(_DWORD *)std::unique_ptr<int []>::operator[](v9, 2);
  v5 = (_DWORD *)operator new(4u);
  *v5 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(v6, v5, v7);
  v4 = (_DWORD *)std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(v6);
  v3 = *v4 + v8 + v10;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(v6);
  std::unique_ptr<int []>::~unique_ptr(v9);
  std::unique_ptr<int>::~unique_ptr(v11);
  std::unique_ptr<int>::~unique_ptr(v12);
  return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x2C40 */
__int64 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>()
{
  return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_();
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2C80 */
__int64 __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(__int64 a1)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2CB0 */
_QWORD *__fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *result; // rax
  __int64 deleter; // [rsp+8h] [rbp-28h]
  _QWORD *v4; // [rsp+20h] [rbp-10h]

  v4 = (_QWORD *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr();
  if ( *v4 )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(a1);
    v1 = (_QWORD *)std::move<int *&>(v4);
    test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x2D30 */
__int64 test_cpp_rtti(void)
{
  const char *v0; // rax
  RTTIDerivedB *v2; // [rsp+18h] [rbp-68h]
  RTTIDerivedA *v3; // [rsp+28h] [rbp-58h]
  RTTIDerivedA *v4; // [rsp+40h] [rbp-40h]
  RTTIDerivedB *v5; // [rsp+48h] [rbp-38h]
  int v6; // [rsp+6Ch] [rbp-14h]
  unsigned int v7; // [rsp+6Ch] [rbp-14h]

  v4 = (RTTIDerivedA *)operator new(8u);
  memset(v4, 0, 8u);
  RTTIDerivedA::RTTIDerivedA(v4);
  v5 = (RTTIDerivedB *)operator new(8u);
  memset(v5, 0, 8u);
  RTTIDerivedB::RTTIDerivedB(v5);
  v6 = 0;
  if ( !v4 )
    __cxa_bad_typeid();
  if ( (std::type_info::operator==(*(_QWORD *)(*(_QWORD *)v4 - 8LL), &`typeinfo for'RTTIDerivedA) & 1) != 0 )
    v6 = 10;
  if ( !v5 )
    __cxa_bad_typeid();
  if ( (std::type_info::operator==(*(_QWORD *)(*(_QWORD *)v5 - 8LL), &`typeinfo for'RTTIDerivedB) & 1) != 0 )
    v6 += 20;
  v3 = (RTTIDerivedA *)__dynamic_cast(
                         v4,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                         0);
  if ( v3 )
    v6 += RTTIDerivedA::derivedA_data(v3);
  v2 = (RTTIDerivedB *)__dynamic_cast(
                         v5,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                         0);
  if ( v2 )
    v6 += RTTIDerivedB::derivedB_data(v2);
  v0 = (const char *)std::type_info::name(*(std::type_info **)(*(_QWORD *)v4 - 8LL));
  v7 = strlen(v0) + v6;
  (*(void (__fastcall **)(RTTIDerivedA *))(*(_QWORD *)v4 + 8LL))(v4);
  (*(void (__fastcall **)(RTTIDerivedB *))(*(_QWORD *)v5 + 8LL))(v5);
  return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F70 */
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

  printf(format);
  v0 = test_cpp_member_func();
  printf(aCppL301D, v0);
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


/* Function: main @ 0x3080 */
int __fastcall main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x30A0 */
__int64 __fastcall ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
           a1,
           a2,
           a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x30D0 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+10h] [rbp-10h] BYREF

  v5[1] = a1;
  v5[0] = a2;
  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
  return std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
           a1,
           v5,
           v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x3110 */
__int64 __fastcall std::forward<test_cpp_smart_ptr(void)::$_2 const&>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x3120 */
__int64 __fastcall std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rdx
  __int64 v5; // [rsp+10h] [rbp-20h]

  v5 = std::forward<int *&>(a2);
  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
           a1,
           v5,
           v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x3180 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
  std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(a1, v3);
  v4 = std::forward<int *&>(a2);
  return std::_Head_base<0ul,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x31E0 */
__int64 __fastcall std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(__int64 a1, __int64 a2)
{
  return std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(a1, a2);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x3210 */
void std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_Head_base()
{
  ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x3220 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(__int64 a1)
{
  return std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x3240 */
__int64 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter()
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter();
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x3270 */
void __fastcall test_cpp_smart_ptr(void)::$_2::operator()(__int64 a1, _DWORD *a2)
{
  *a2 = -1;
  if ( a2 )
    operator delete(a2);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32B0 */
__int64 __fastcall std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(__int64 a1)
{
  return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x32D0 */
__int64 __fastcall std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x32F0 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x3310 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(__int64 a1)
{
  return std::get<1ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x3330 */
__int64 __fastcall std::get<1ul,int *,test_cpp_smart_ptr(void)::$_2>(__int64 a1)
{
  return std::__get_helper<1ul,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x3350 */
__int64 __fastcall std::__get_helper<1ul,test_cpp_smart_ptr(void)::$_2>(__int64 a1)
{
  return std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x3370 */
__int64 __fastcall std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_M_head(__int64 a1)
{
  return std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x3390 */
__int64 __fastcall std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x33A0 */
__int64 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get()
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x33D0 */
__int64 __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(__int64 a1)
{
  return *(_QWORD *)std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x33F0 */
__int64 __fastcall std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(__int64 a1)
{
  return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3410 */
__int64 __fastcall std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x3430 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3450 */
void __fastcall SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
  *(_DWORD *)this = a2;
  strncpy((char *)this + 4, a3, 0x1Fu);
  *((_BYTE *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3490 */
SimpleClass *__fastcall SimpleClass::setValue(SimpleClass *this, int a2)
{
  SimpleClass *result; // rax

  result = this;
  *(_DWORD *)this = a2;
  return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x34B0 */
__int64 __fastcall SimpleClass::getValue(SimpleClass *this)
{
  return *(unsigned int *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x34C0 */
__int64 __fastcall SimpleClass::compute(SimpleClass *this, int a2)
{
  __int64 v3; // [rsp+8h] [rbp-18h]

  v3 = a2 * *(_DWORD *)this;
  return strlen((const char *)this + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3500 */
__int64 __fastcall SimpleClass::getClassID(SimpleClass *this)
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3510 */
void __fastcall LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned __int64 a2)
{
  unsigned __int64 i; // [rsp+8h] [rbp-18h]

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = operator new[](saturated_mul(4u, a2));
  for ( i = 0; i < a2; ++i )
    *(_DWORD *)(*(_QWORD *)this + 4 * i) = 10 * i;
  ++LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x35B0 */
__int64 __fastcall LifecycleClass::getData(LifecycleClass *this, unsigned __int64 a2)
{
  if ( a2 >= *((_QWORD *)this + 1) )
    return (unsigned int)-1;
  else
    return *(unsigned int *)(*(_QWORD *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3600 */
__int64 __fastcall LifecycleClass::getInstanceCount(LifecycleClass *this)
{
  return (unsigned int)LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x3610 */
void __fastcall LifecycleClass::~LifecycleClass(void **this)
{
  if ( *this )
    operator delete[](*this);
  --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x3650 */
void __fastcall Base::Base(Base *this)
{
  *(_QWORD *)this = &off_8878;
}


/* Function: _ZN7DerivedC2Ei @ 0x3670 */
void __fastcall Derived::Derived(Derived *this, int a2)
{
  Base::Base(this);
  *(_QWORD *)this = &off_88B8;
  *((_DWORD *)this + 2) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x36B0 */
__int64 __fastcall Base::virtual_func(Base *this, int a2)
{
  return (unsigned int)(a2 + 1);
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x36D0 */
__int64 __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return (unsigned int)(*((_DWORD *)this + 2) * a2);
}


/* Function: _ZN7DerivedD2Ev @ 0x36F0 */
void __fastcall Derived::~Derived(Derived *this)
{
  Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x3710 */
void __fastcall Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3720 */
void __fastcall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA(this);
  BaseB::BaseB((MultiDerived *)((char *)this + 16));
  *(_QWORD *)this = &off_8900;
  *((_QWORD *)this + 2) = &off_8930;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3770 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  BaseB::~BaseB((MultiDerived *)((char *)this + 16));
  BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x37A0 */
void __fastcall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 32));
  MiddleA::MiddleA(this);
  MiddleB::MiddleB((DiamondDerived *)((char *)this + 16));
  *(_QWORD *)this = &off_8A08;
  *((_QWORD *)this + 4) = &off_8A70;
  *((_QWORD *)this + 2) = &off_8A38;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3830 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 32));
}


/* Function: _ZN5PointC2Eii @ 0x3870 */
void __fastcall Point::Point(Point *this, int a2, int a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x3890 */
__int64 __fastcall Point::operator+(_DWORD *a1, _DWORD *a2)
{
  __int64 v3; // [rsp+18h] [rbp-8h] BYREF

  Point::Point((Point *)&v3, *a2 + *a1, a2[1] + a1[1]);
  return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x38D0 */
_BOOL8 __fastcall Point::operator==(_DWORD *a1, _DWORD *a2)
{
  bool v3; // [rsp+Fh] [rbp-11h]

  v3 = 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return v3;
}


/* Function: _ZN5PointppEv @ 0x3920 */
_DWORD *__fastcall Point::operator++(_DWORD *a1)
{
  _DWORD *result; // rax

  result = a1;
  ++*a1;
  ++a1[1];
  return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3940 */
__int64 __fastcall template_max<int>(unsigned int a1, unsigned int a2)
{
  if ( (int)a1 <= (int)a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3970 */
double __fastcall template_max<double>(double a1, double a2)
{
  if ( a1 <= a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x39B0 */
int *__fastcall template_swap<int>(int *a1, int *a2)
{
  int *result; // rax
  int v3; // [rsp+0h] [rbp-14h]

  v3 = *a1;
  *a1 = *a2;
  result = a2;
  *a2 = v3;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x39E0 */
__int64 __fastcall Container<int>::Container(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3A00 */
__int64 __fastcall Container<int>::push(__int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // ecx

  result = a1;
  if ( *(int *)(a1 + 40) < 10 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v3 + 1;
    *(_DWORD *)(a1 + 4LL * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3A40 */
__int64 __fastcall Container<int>::get(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 40) )
    return 0;
  else
    return *(unsigned int *)(a1 + 4LL * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3A90 */
__int64 __fastcall Container<int>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3AB0 */
__int64 __fastcall Container<double>::Container(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3AD0 */
__int64 __fastcall Container<double>::push(__int64 a1, double a2)
{
  __int64 result; // rax
  int v3; // ecx

  result = a1;
  if ( *(int *)(a1 + 80) < 10 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v3 + 1;
    *(double *)(a1 + 8LL * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3B10 */
double __fastcall Container<double>::get(__int64 a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 80) )
    return 0.0;
  else
    return *(double *)(a1 + 8LL * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3B70 */
__int64 __fastcall Container<double>::getSize(__int64 a1)
{
  return *(unsigned int *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3B90 */
__int64 __fastcall std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(__int64 a1, __int64 a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3BC0 */
__int64 __fastcall std::unique_ptr<int>::operator*(__int64 a1)
{
  return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BF0 */
__int64 __fastcall std::move<std::unique_ptr<int> &>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3C00 */
__int64 __fastcall std::unique_ptr<int>::unique_ptr(__int64 a1, __int64 a2)
{
  return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C30 */
__int64 __fastcall std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
        __int64 a1,
        __int64 a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3C60 */
__int64 __fastcall std::unique_ptr<int []>::operator[](__int64 a1, __int64 a2)
{
  return 4 * a2 + std::unique_ptr<int []>::get(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CA0 */
_QWORD *__fastcall std::unique_ptr<int []>::~unique_ptr(__int64 a1)
{
  __int64 deleter; // rdi
  _QWORD *result; // rax
  _QWORD *v3; // [rsp+10h] [rbp-10h]

  v3 = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr();
  if ( *v3 )
  {
    deleter = std::unique_ptr<int []>::get_deleter(a1);
    std::default_delete<int []>::operator()<int>(deleter, *v3);
  }
  result = v3;
  *v3 = 0;
  return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3D10 */
_QWORD *__fastcall std::unique_ptr<int>::~unique_ptr(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *result; // rax
  __int64 deleter; // [rsp+0h] [rbp-20h]
  _QWORD *v4; // [rsp+10h] [rbp-10h]

  v4 = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr();
  if ( *v4 )
  {
    deleter = std::unique_ptr<int>::get_deleter(a1);
    v1 = *(_QWORD *)std::move<int *&>(v4);
    std::default_delete<int>::operator()(deleter, v1);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3D80 */
void __fastcall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase(this);
  *(_QWORD *)this = off_8D50;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3DC0 */
void __fastcall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase(this);
  *(_QWORD *)this = off_8DA0;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3E00 */
__int64 __fastcall std::type_info::operator==(__int64 a1, __int64 a2)
{
  bool v3; // [rsp+Fh] [rbp-21h]
  char v4; // [rsp+1Fh] [rbp-11h]

  v4 = 1;
  if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
  {
    v3 = 0;
    if ( **(_BYTE **)(a1 + 8) != 42 )
      v3 = strcmp(*(const char **)(a1 + 8), *(const char **)(a2 + 8)) == 0;
    v4 = v3;
  }
  return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3E80 */
__int64 __fastcall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3E90 */
__int64 __fastcall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
  return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3EA0 */
__int64 __fastcall std::type_info::name(std::type_info *this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return *((_QWORD *)this + 1) + 1LL;
  else
    return *((_QWORD *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3EF0 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3F10 */
void __fastcall Base::~Base(Base *this)
{
  Base::~Base(this);
  operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3F40 */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3F60 */
void __fastcall Derived::~Derived(Derived *this)
{
  Derived::~Derived(this);
  operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3F90 */
void __fastcall BaseA::BaseA(BaseA *this)
{
  *(_QWORD *)this = &off_89B0;
}


/* Function: _ZN5BaseBC2Ev @ 0x3FB0 */
void __fastcall BaseB::BaseB(BaseB *this)
{
  *(_QWORD *)this = &off_89D8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3FD0 */
__int64 __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3FE0 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x4010 */
__int64 __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x4020 */
__int64 __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return MultiDerived::funcB((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4040 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4060 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x4080 */
__int64 __fastcall BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x4090 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  ;
}


/* Function: _ZN5BaseAD0Ev @ 0x40A0 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  BaseA::~BaseA(this);
  operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x40D0 */
__int64 __fastcall BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x40E0 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  ;
}


/* Function: _ZN5BaseBD0Ev @ 0x40F0 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  BaseB::~BaseB(this);
  operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x4120 */
void __fastcall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(_QWORD *)this = &off_8C38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x4140 */
void __fastcall MiddleA::MiddleA(MiddleA *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x4170 */
void __fastcall MiddleB::MiddleB(MiddleB *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x41A0 */
__int64 __fastcall MiddleA::func(MiddleA *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 150);
}


/* Function: _ZN7MiddleAD1Ev @ 0x41C0 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA(this);
  VirtualBase::~VirtualBase((MiddleA *)((char *)this + 16));
}


/* Function: _ZN7MiddleAD0Ev @ 0x4200 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA(this);
  operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x4230 */
__int64 __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x4250 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x4270 */
void __fastcall `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x4290 */
__int64 __fastcall MiddleB::func(MiddleB *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 200);
}


/* Function: _ZN7MiddleBD1Ev @ 0x42B0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB(this);
  VirtualBase::~VirtualBase((MiddleB *)((char *)this + 16));
}


/* Function: _ZN7MiddleBD0Ev @ 0x42F0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB(this);
  operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x4320 */
__int64 __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x4340 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x4360 */
void __fastcall `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x4380 */
__int64 __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return (unsigned int)(*(_DWORD *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL) + 8) + 250);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x43A0 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x43D0 */
__int64 __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x43F0 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4410 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4430 */
__int64 __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4450 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4470 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_QWORD *)(*(_QWORD *)this - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x4490 */
__int64 __fastcall VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x44A0 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x44B0 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x44E0 */
void __fastcall MiddleA::~MiddleA(MiddleA *this)
{
  ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x44F0 */
void __fastcall MiddleB::~MiddleB(MiddleB *this)
{
  ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4500 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  MiddleB::~MiddleB((DiamondDerived *)((char *)this + 16));
  MiddleA::~MiddleA(this);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x4550 */
__int64 __fastcall std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
        __int64 a1,
        __int64 a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4580 */
_QWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax

  v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
  std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
  result = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
  *result = 0;
  return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x45E0 */
__int64 __fastcall std::move<std::tuple<int *,std::default_delete<int>> &>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x45F0 */
__int64 __fastcall std::tuple<int *,std::default_delete<int>>::tuple(__int64 a1, __int64 a2)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4620 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__int64 a1)
{
  return std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: __clang_call_terminate @ 0x4640 */
void __fastcall __noreturn _clang_call_terminate(void *a1)
{
  __cxa_begin_catch(a1);
  std::terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4650 */
_QWORD *__fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(a1, a2);
  result = a1;
  *a1 = *a2;
  return result;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4690 */
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl()
{
  ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x46A0 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x46C0 */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x46E0 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4700 */
__int64 __fastcall std::_Head_base<0ul,int *,false>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4710 */
void __fastcall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(_QWORD *)this = off_8D78;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4730 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4750 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4780 */
__int64 __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4790 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x47A0 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x47D0 */
__int64 __fastcall RTTIBase::getType(RTTIBase *this)
{
  return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x47E0 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4800 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4830 */
__int64 __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4840 */
__int64 __fastcall ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
        __int64 a1,
        __int64 a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x4870 */
_QWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  std::tuple<int *,std::default_delete<int>>::tuple<true,true>();
  result = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x48B0 */
__int64 std::tuple<int *,std::default_delete<int>>::tuple<true,true>()
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x48E0 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(__int64 a1)
{
  std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
  return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4910 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4930 */
_QWORD *__fastcall std::_Head_base<0ul,int *,false>::_Head_base(_QWORD *a1)
{
  _QWORD *result; // rax

  result = a1;
  *a1 = 0;
  return result;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4950 */
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base()
{
  ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x4960 */
__int64 std::unique_ptr<int>::get_deleter()
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter();
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4990 */
void __fastcall std::default_delete<int>::operator()(__int64 a1, void *a2)
{
  if ( a2 )
    operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x49D0 */
__int64 __fastcall std::move<int *&>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x49E0 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(__int64 a1)
{
  return std::get<1ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4A00 */
__int64 __fastcall std::get<1ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::__get_helper<1ul,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4A20 */
__int64 __fastcall std::__get_helper<1ul,std::default_delete<int>>(__int64 a1)
{
  return std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4A40 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4A60 */
__int64 __fastcall std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4A70 */
__int64 std::unique_ptr<int>::get()
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4AA0 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__int64 a1)
{
  return *(_QWORD *)std::get<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4AC0 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4AE0 */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4B00 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4B20 */
__int64 __fastcall std::_Head_base<0ul,int *,false>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4B30 */
__int64 __fastcall ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
        __int64 a1,
        __int64 a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4B60 */
_QWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>();
  result = (_QWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4BA0 */
__int64 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>()
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl();
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4BD0 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(__int64 a1)
{
  return std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4BF0 */
_QWORD *__fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(_QWORD *a1)
{
  std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl();
  return std::_Head_base<0ul,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4C20 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4C40 */
void std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base()
{
  ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4C50 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4C70 */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4C90 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4CB0 */
__int64 std::unique_ptr<int []>::get_deleter()
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter();
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x4CE0 */
void __fastcall std::default_delete<int []>::operator()<int>(__int64 a1, void *a2)
{
  if ( a2 )
    operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4D20 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(__int64 a1)
{
  return std::get<1ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4D40 */
__int64 __fastcall std::get<1ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::__get_helper<1ul,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4D60 */
__int64 __fastcall std::__get_helper<1ul,std::default_delete<int []>>(__int64 a1)
{
  return std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4D80 */
__int64 __fastcall std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(__int64 a1)
{
  return std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4DA0 */
__int64 __fastcall std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(__int64 a1)
{
  return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4DB0 */
__int64 std::unique_ptr<int []>::get()
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr();
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4DE0 */
__int64 __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(__int64 a1)
{
  return *(_QWORD *)std::get<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4E00 */
__int64 __fastcall std::get<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::__get_helper<0ul,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4E20 */
__int64 __fastcall std::__get_helper<0ul,int *,std::default_delete<int []>>(__int64 a1)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4E40 */
__int64 __fastcall std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__int64 a1)
{
  return std::_Head_base<0ul,int *,false>::_M_head(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4E60 */
__int64 __fastcall std::forward<int *&>(__int64 a1)
{
  return a1;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4E70 */
_QWORD *__fastcall std::_Head_base<0ul,int *,false>::_Head_base<int *&>(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax

  v2 = (_QWORD *)std::forward<int *&>(a2);
  result = a1;
  *a1 = *v2;
  return result;
}


/* Function: .term_proc @ 0x4EA4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: _Znam @ 0x9100 */

/* FAILED to decompile: printf @ 0x9110 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9118 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9120 */

/* FAILED to decompile: strlen @ 0x9128 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x9130 */

/* FAILED to decompile: strncpy @ 0x9138 */

/* FAILED to decompile: memset @ 0x9140 */

/* FAILED to decompile: __libc_start_main @ 0x9150 */

/* FAILED to decompile: __cxa_atexit @ 0x9158 */

/* FAILED to decompile: _ZdlPv @ 0x9160 */

/* FAILED to decompile: _Znwm @ 0x9168 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9170 */

/* FAILED to decompile: __dynamic_cast @ 0x9178 */

/* FAILED to decompile: _ZdaPv @ 0x9180 */

/* FAILED to decompile: strcmp @ 0x9190 */

/* FAILED to decompile: __cxa_rethrow @ 0x9198 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x91A0 */

/* FAILED to decompile: __cxa_end_catch @ 0x91A8 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x91B0 */

/* FAILED to decompile: __cxa_throw @ 0x91B8 */

/* FAILED to decompile: _Unwind_Resume @ 0x91C8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x91D0 */

/* FAILED to decompile: __imp___cxa_finalize @ 0x91D8 */

/* FAILED to decompile: __gmon_start__ @ 0x91E8 */

/* Total functions decompiled: 215, failed: 25 */
