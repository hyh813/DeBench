/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_clang_O0_g
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
void __cdecl _cxx_global_var_init()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x21B0 */
void __cdecl GLOBAL__sub_I_5_1_cpp()
{
  _cxx_global_var_init();
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
int __cdecl test_cpp_member_func()
{
  int r2; // [rsp+10h] [rbp-30h]
  int r1; // [rsp+14h] [rbp-2Ch]
  SimpleClass obj; // [rsp+18h] [rbp-28h] BYREF

  SimpleClass::SimpleClass(&obj, 5, "Test");
  SimpleClass::setValue(&obj, 10);
  r1 = SimpleClass::getValue(&obj);
  r2 = SimpleClass::compute(&obj, 3);
  return SimpleClass::getClassID() + r2 + r1;
}


/* Function: _Z20test_cpp_constructorv @ 0x2310 */
int __cdecl test_cpp_constructor()
{
  int Data; // [rsp+18h] [rbp-28h]
  LifecycleClass obj; // [rsp+28h] [rbp-18h] BYREF
  int result; // [rsp+3Ch] [rbp-4h]

  result = 0;
  LifecycleClass::LifecycleClass(&obj, 5u);
  Data = LifecycleClass::getData(&obj, 2u);
  result += Data;
  result += LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(&obj);
  return result + 1000 * LifecycleClass::getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x23B0 */
int __cdecl call_virtual_func(Base *obj, int x)
{
  return ((__int64 (__fastcall *)(Base *, _QWORD))*obj->_vptr$Base)(obj, (unsigned int)x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x23E0 */
int __cdecl test_cpp_virtual_func()
{
  int v1; // [rsp+4h] [rbp-5Ch]
  int r3; // [rsp+1Ch] [rbp-44h]
  int r2; // [rsp+34h] [rbp-2Ch]
  int r1; // [rsp+38h] [rbp-28h]
  Derived derived; // [rsp+48h] [rbp-18h] BYREF
  Base base; // [rsp+58h] [rbp-8h] BYREF

  Base::Base(&base);
  Derived::Derived(&derived, 3);
  r1 = Base::virtual_func(&base, 5);
  r2 = Derived::virtual_func(&derived, 5);
  r3 = call_virtual_func(&base, 5);
  v1 = call_virtual_func(&derived, 5) + r3 + r2 + r1;
  Derived::~Derived(&derived);
  Base::~Base(&base);
  return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x24F0 */
int __cdecl test_cpp_multiple_inheritance()
{
  MultiDerived *v1; // [rsp+18h] [rbp-58h]
  int r2; // [rsp+28h] [rbp-48h]
  int r1; // [rsp+3Ch] [rbp-34h]
  MultiDerived obj; // [rsp+50h] [rbp-20h] BYREF

  MultiDerived::MultiDerived(&obj);
  obj.dataA = 100;
  obj.dataB = 200;
  v1 = 0;
  if ( &obj )
    v1 = (MultiDerived *)&obj.BaseB;
  r1 = ((__int64 (__fastcall *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
  r2 = (*(__int64 (__fastcall **)(MultiDerived *))v1->_vptr$BaseA)(v1);
  MultiDerived::~MultiDerived(&obj);
  return (&obj != v1) + r2 + r1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x25D0 */
int __cdecl test_cpp_diamond_inheritance()
{
  int v1; // [rsp+Ch] [rbp-64h]
  __int64 (__fastcall ***v2)(_QWORD); // [rsp+18h] [rbp-58h]
  int r1; // [rsp+34h] [rbp-3Ch]
  _QWORD v4[6]; // [rsp+40h] [rbp-30h] BYREF

  DiamondDerived::DiamondDerived((DiamondDerived *)v4);
  *(_DWORD *)((char *)&v4[1] + *(_QWORD *)(v4[0] - 24LL)) = 50;
  v2 = 0;
  if ( v4 )
    v2 = (__int64 (__fastcall ***)(_QWORD))((char *)v4 + *(_QWORD *)(v4[0] - 24LL));
  r1 = (**v2)(v2);
  *(_DWORD *)((char *)&v4[1] + *(_QWORD *)(v4[0] - 24LL)) = 100;
  v1 = (**v2)(v2) + r1;
  DiamondDerived::~DiamondDerived((DiamondDerived *)v4);
  return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x26A0 */
int __cdecl test_cpp_operator_overload()
{
  int v0; // ecx
  bool eq; // [rsp+7h] [rbp-19h]
  Point p3; // [rsp+8h] [rbp-18h] BYREF
  Point p2; // [rsp+10h] [rbp-10h] BYREF
  Point p1; // [rsp+18h] [rbp-8h] BYREF

  Point::Point(&p1, 1, 2);
  Point::Point(&p2, 3, 4);
  p3 = Point::operator+(&p1, &p2);
  eq = Point::operator==(&p1, &p2);
  Point::operator++(&p3);
  v0 = 10;
  if ( eq )
    v0 = 0;
  return v0 + p3.y + p3.x;
}


/* Function: _Z22test_cpp_template_funcv @ 0x2720 */
int __cdecl test_cpp_template_func()
{
  int b; // [rsp+8h] [rbp-18h] BYREF
  int a; // [rsp+Ch] [rbp-14h] BYREF
  double r2; // [rsp+10h] [rbp-10h]
  int r1; // [rsp+1Ch] [rbp-4h]

  r1 = template_max<int>(3, 7);
  r2 = template_max<double>(2.5, 1.5);
  a = 10;
  b = 20;
  template_swap<int>(&a, &b);
  return b + a + (int)r2 + r1;
}


/* Function: _Z23test_cpp_template_classv @ 0x2790 */
int __cdecl test_cpp_template_class()
{
  double r3; // [rsp+8h] [rbp-98h]
  Container<double> double_container; // [rsp+10h] [rbp-90h] BYREF
  int r2; // [rsp+68h] [rbp-38h]
  int r1; // [rsp+6Ch] [rbp-34h]
  Container<int> int_container; // [rsp+70h] [rbp-30h] BYREF

  Container<int>::Container(&int_container);
  Container<int>::push(&int_container, 10);
  Container<int>::push(&int_container, 20);
  Container<int>::push(&int_container, 30);
  r1 = Container<int>::get(&int_container, 0);
  r2 = Container<int>::getSize(&int_container);
  Container<double>::Container(&double_container);
  Container<double>::push(&double_container, 3.14);
  r3 = Container<double>::get(&double_container, 0);
  return (int)r3 + r2 + r1;
}


/* Function: _Z15test_cpp_lambdav @ 0x2840 */
int __cdecl test_cpp_lambda()
{
  int v0; // eax
  int r1; // [rsp+Ch] [rbp-24h]
  $44B1EA910F358000232221CCB0AF3F67 lambda2; // [rsp+10h] [rbp-20h] BYREF
  $53A263AF813E6A51E9D2036C8CF165B2 lambda1; // [rsp+18h] [rbp-18h] BYREF
  int capture_by_ref; // [rsp+28h] [rbp-8h] BYREF
  int capture_by_value; // [rsp+2Ch] [rbp-4h]

  capture_by_value = 10;
  capture_by_ref = 20;
  lambda1.capture_by_value = 10;
  lambda1.capture_by_ref = &capture_by_ref;
  r1 = test_cpp_lambda(void)::$_1::operator()(
         (const const struct __cppobj {int capture_by_value;int *capture_by_ref;} *)&lambda1,
         3);
  test_cpp_lambda(void)::$_0::operator()<int,int>(&lambda2, 10, 20);
  return v0 + r1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x28A0 */
int __cdecl test_cpp_lambda(void)::$_1::operator()(
        const const struct __cppobj {int capture_by_value;int *capture_by_ref;} *this,
        int x)
{
  *this->capture_by_ref += 5;
  return *this->capture_by_ref + this->capture_by_value * x;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x28D0 */
void __cdecl test_cpp_lambda(void)::$_0::operator()<int,int>(const const struct {_BYTE gap0;} *this, int a, int b)
{
  ;
}


/* Function: _Z18test_cpp_exceptionv @ 0x28F0 */
int __cdecl __noreturn test_cpp_exception()
{
  _DWORD *exception; // rdi

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x2A50 */
int __cdecl test_cpp_smart_ptr()
{
  int *v0; // rax
  std::unique_ptr<int> *v1; // rax
  int v3; // [rsp+4h] [rbp-9Ch]
  std::__add_lvalue_reference_helper<int,true>::type v4; // [rsp+10h] [rbp-90h]
  std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer v5; // [rsp+18h] [rbp-88h]
  int *__p; // [rsp+30h] [rbp-70h]
  std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> v7; // [rsp+60h] [rbp-40h] BYREF
  std::unique_ptr<int[]> v8; // [rsp+70h] [rbp-30h] BYREF
  std::unique_ptr<int> ptr2; // [rsp+80h] [rbp-20h] BYREF
  std::unique_ptr<int> __t; // [rsp+98h] [rbp-8h] BYREF

  v0 = (int *)operator new(4u);
  *v0 = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(&__t, v0);
  *std::unique_ptr<int>::operator*(&__t) = 200;
  v1 = std::move<std::unique_ptr<int> &>(&__t);
  std::unique_ptr<int>::unique_ptr(&ptr2, v1);
  HIDWORD(v8._M_t._M_t._M_head_impl) = *std::unique_ptr<int>::operator*(&ptr2);
  __p = (int *)operator new[](0x14u);
  *__p = 1;
  __p[1] = 2;
  __p[2] = 3;
  __p[3] = 4;
  __p[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(&v8, __p);
  HIDWORD(v7._M_t._M_t._M_head_impl) = *std::unique_ptr<int []>::operator[](&v8, 2u);
  v5 = (std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer)operator new(4u);
  *v5 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
    &v7,
    v5,
    (const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)&v7._M_t._M_t.std::_Head_base<0UL,int *,false>);
  v4 = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(&v7);
  v3 = *v4 + HIDWORD(v7._M_t._M_t._M_head_impl) + HIDWORD(v8._M_t._M_t._M_head_impl);
  std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(&v7);
  std::unique_ptr<int []>::~unique_ptr(&v8);
  std::unique_ptr<int>::~unique_ptr(&ptr2);
  std::unique_ptr<int>::~unique_ptr(&__t);
  return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x2C40 */
void __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
        std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this,
        std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer __p,
        const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *__d)
{
  ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
    &this->_M_t,
    __p,
    __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2C80 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(
        const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2CB0 */
void __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(
        std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  int **v1; // rax
  std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *deleter; // [rsp+8h] [rbp-28h]
  int **__ptr; // [rsp+20h] [rbp-10h]

  __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(this);
    v1 = std::move<int *&>(__ptr);
    test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
  }
  *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x2D30 */
int __cdecl test_cpp_rtti()
{
  const char *v0; // rax
  const RTTIDerivedB *v2; // [rsp+18h] [rbp-68h]
  const RTTIDerivedA *v3; // [rsp+28h] [rbp-58h]
  RTTIDerivedA *v4; // [rsp+40h] [rbp-40h]
  RTTIDerivedB *v5; // [rsp+48h] [rbp-38h]
  int result; // [rsp+6Ch] [rbp-14h]
  int resulta; // [rsp+6Ch] [rbp-14h]

  v4 = (RTTIDerivedA *)operator new(8u);
  memset(v4, 0, sizeof(RTTIDerivedA));
  RTTIDerivedA::RTTIDerivedA(v4);
  v5 = (RTTIDerivedB *)operator new(8u);
  memset(v5, 0, sizeof(RTTIDerivedB));
  RTTIDerivedB::RTTIDerivedB(v5);
  result = 0;
  if ( !v4 )
    __cxa_bad_typeid();
  if ( std::type_info::operator==(
         *((const std::type_info **)v4->_vptr$RTTIBase - 1),
         (const std::type_info *)&`typeinfo for'RTTIDerivedA) )
  {
    result = 10;
  }
  if ( !v5 )
    __cxa_bad_typeid();
  if ( std::type_info::operator==(
         *((const std::type_info **)v5->_vptr$RTTIBase - 1),
         (const std::type_info *)&`typeinfo for'RTTIDerivedB) )
  {
    result += 20;
  }
  v3 = (const RTTIDerivedA *)__dynamic_cast(
                               v4,
                               (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                               (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                               0);
  if ( v3 )
    result += RTTIDerivedA::derivedA_data(v3);
  v2 = (const RTTIDerivedB *)__dynamic_cast(
                               v5,
                               (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                               (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                               0);
  if ( v2 )
    result += RTTIDerivedB::derivedB_data(v2);
  v0 = std::type_info::name(*((const std::type_info **)v4->_vptr$RTTIBase - 1));
  resulta = strlen(v0) + result;
  (*((void (__fastcall **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
  (*((void (__fastcall **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
  return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x2F70 */
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
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x30A0 */
void __cdecl ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
        std::__uniq_ptr_data<int,(lambda at src_5-1_cpp:445:20),true,false> *this,
        std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer a2,
        const const struct {_BYTE gap0;} *a3)
{
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
    this,
    a2,
    a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x30D0 */
void __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
        std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this,
        std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer __p,
        const const struct {_BYTE gap0;} *__d)
{
  const const struct {_BYTE gap0;} *v3; // rax
  std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer __pa; // [rsp+10h] [rbp-10h] BYREF
  std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *thisa; // [rsp+18h] [rbp-8h]

  thisa = this;
  __pa = __p;
  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>((std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *)__d);
  std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
    &this->_M_t,
    &__pa,
    v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x3110 */
const const struct {_BYTE gap0;} *__cdecl std::forward<test_cpp_smart_ptr(void)::$_2 const&>(
        std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *__t)
{
  return (const const struct {_BYTE gap0;} *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x3120 */
void __cdecl std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
        std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *this,
        int **__a1,
        const const struct {_BYTE gap0;} *__a2)
{
  const const struct {_BYTE gap0;} *v3; // rdx
  int **__head; // [rsp+10h] [rbp-20h]

  __head = std::forward<int *&>(__a1);
  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>((std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *)__a2);
  std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
    this,
    __head,
    v3);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x3180 */
void __cdecl std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
        std::_Tuple_impl<0UL,int *,(lambda at src_5-1_cpp:445:20)> *this,
        int **__head,
        const const struct {_BYTE gap0;} *__tail)
{
  const const struct {_BYTE gap0;} *v3; // rax
  int **v4; // rax

  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>((std::remove_reference<const (lambda at src_5-1_cpp:445:20) &>::type *)__tail);
  std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(this, v3);
  v4 = std::forward<int *&>(__head);
  std::_Head_base<0ul,int *,false>::_Head_base<int *&>((std::_Head_base<0UL,int *,false> *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x31E0 */
void __cdecl std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(
        std::_Tuple_impl<1UL,(lambda at src_5-1_cpp:445:20)> *this,
        const const struct {_BYTE gap0;} *__head)
{
  std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x3210 */
void __cdecl std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(
        std::_Head_base<1UL,(lambda at src_5-1_cpp:445:20),true> *this,
        const const struct {_BYTE gap0;} *__h)
{
  ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x3220 */
std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(
        std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  return std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x3240 */
std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(
        std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  return (std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x3270 */
void __cdecl test_cpp_smart_ptr(void)::$_2::operator()(const const struct {_BYTE gap0;} *this, int *p)
{
  *p = -1;
  if ( p )
    operator delete(p);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x32B0 */
std::__tuple_element_t<0UL,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > *__cdecl std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(
        std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x32D0 */
int **__cdecl std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(
        std::_Tuple_impl<0UL,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x32F0 */
int **__cdecl std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(
        std::_Tuple_impl<0UL,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0UL,int *,false> *)__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x3310 */
struct {_BYTE gap0;} *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(
        std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  return (struct {_BYTE gap0;} *)std::get<1ul,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x3330 */
std::__tuple_element_t<1UL,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > *__cdecl std::get<1ul,int *,test_cpp_smart_ptr(void)::$_2>(
        std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return (std::__tuple_element_t<1UL,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > *)std::__get_helper<1ul,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILm1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x3350 */
struct {_BYTE gap0;} *__cdecl std::__get_helper<1ul,test_cpp_smart_ptr(void)::$_2>(
        std::_Tuple_impl<1UL,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x3370 */
struct {_BYTE gap0;} *__cdecl std::_Tuple_impl<1ul,test_cpp_smart_ptr(void)::$_2>::_M_head(
        std::_Tuple_impl<1UL,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x3390 */
struct {_BYTE gap0;} *__cdecl std::_Head_base<1ul,test_cpp_smart_ptr(void)::$_2,true>::_M_head(
        std::_Head_base<1UL,(lambda at src_5-1_cpp:445:20),true> *__b)
{
  return (struct {_BYTE gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x33A0 */
std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::pointer __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(
        const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x33D0 */
std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)>::pointer __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(
        const std::__uniq_ptr_impl<int,(lambda at src_5-1_cpp:445:20)> *this)
{
  return *std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x33F0 */
const std::__tuple_element_t<0UL,std::tuple<int *,(lambda at src_5-1_cpp:445:20)> > *__cdecl std::get<0ul,int *,test_cpp_smart_ptr(void)::$_2>(
        const std::tuple<int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3410 */
int *const *__cdecl std::__get_helper<0ul,int *,test_cpp_smart_ptr(void)::$_2>(
        const std::_Tuple_impl<0UL,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x3430 */
int *const *__cdecl std::_Tuple_impl<0ul,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(
        const std::_Tuple_impl<0UL,int *,(lambda at src_5-1_cpp:445:20)> *__t)
{
  return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0UL,int *,false> *)__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x3450 */
void __cdecl SimpleClass::SimpleClass(SimpleClass *this, int v, const char *n)
{
  this->value = v;
  strncpy(this->name, n, 0x1Fu);
  this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x3490 */
void __cdecl SimpleClass::setValue(SimpleClass *this, int v)
{
  this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x34B0 */
int __cdecl SimpleClass::getValue(const SimpleClass *this)
{
  return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x34C0 */
int __cdecl SimpleClass::compute(const SimpleClass *this, int x)
{
  int v3; // [rsp+8h] [rbp-18h]

  v3 = x * this->value;
  return strlen(this->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x3500 */
int __cdecl SimpleClass::getClassID()
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Em @ 0x3510 */
void __cdecl LifecycleClass::LifecycleClass(LifecycleClass *this, size_t s)
{
  size_t i; // [rsp+8h] [rbp-18h]

  this->size = s;
  this->data = (int *)operator new[](saturated_mul(4u, s));
  for ( i = 0; i < s; ++i )
    this->data[i] = 10 * i;
  ++LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEm @ 0x35B0 */
int __cdecl LifecycleClass::getData(const LifecycleClass *this, size_t idx)
{
  if ( idx >= this->size )
    return -1;
  else
    return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x3600 */
int __cdecl LifecycleClass::getInstanceCount()
{
  return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x3610 */
void __cdecl LifecycleClass::~LifecycleClass(LifecycleClass *this)
{
  if ( this->data )
    operator delete[](this->data);
  --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x3650 */
void __cdecl Base::Base(Base *this)
{
  this->_vptr$Base = (int (**)(void))&off_8878;
}


/* Function: _ZN7DerivedC2Ei @ 0x3670 */
void __cdecl Derived::Derived(Derived *this, int m)
{
  Base::Base(this);
  this->_vptr$Base = (int (**)(void))&off_88B8;
  this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x36B0 */
int __cdecl Base::virtual_func(Base *this, int x)
{
  return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x36D0 */
int __cdecl Derived::virtual_func(Derived *this, int x)
{
  return this->multiplier * x;
}


/* Function: _ZN7DerivedD2Ev @ 0x36F0 */
void __cdecl Derived::~Derived(Derived *this)
{
  Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x3710 */
void __cdecl Base::~Base(Base *this)
{
  ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x3720 */
void __cdecl MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA(this);
  BaseB::BaseB(&this->BaseB);
  this->_vptr$BaseA = (int (**)(void))&off_8900;
  this->_vptr$BaseB = (int (**)(void))&off_8930;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3770 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  BaseB::~BaseB(&this->BaseB);
  BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x37A0 */
void __cdecl DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((VirtualBase *)&this->MiddleB);
  MiddleA::MiddleA(this, (void **)off_8A90);
  MiddleB::MiddleB((MiddleB *)(&this->dataA + 2), (void **)off_8AA0);
  this->_vptr$MiddleA = (int (**)(void))&off_8A08;
  this->_vptr$MiddleB = (int (**)(void))&off_8A70;
  *((_QWORD *)&this->dataA + 1) = &off_8A38;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3830 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this, &`VTT for'DiamondDerived);
  VirtualBase::~VirtualBase((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x3870 */
void __cdecl Point::Point(Point *this, int _x, int _y)
{
  this->x = _x;
  this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x3890 */
Point __cdecl Point::operator+(const Point *this, const Point *other)
{
  Point v3; // [rsp+18h] [rbp-8h] BYREF

  Point::Point(&v3, other->x + this->x, other->y + this->y);
  return v3;
}


/* Function: _ZNK5PointeqERKS_ @ 0x38D0 */
bool __cdecl Point::operator==(const Point *this, const Point *other)
{
  bool v3; // [rsp+Fh] [rbp-11h]

  v3 = 0;
  if ( this->x == other->x )
    return this->y == other->y;
  return v3;
}


/* Function: _ZN5PointppEv @ 0x3920 */
Point *__cdecl Point::operator++(Point *this)
{
  Point *result; // rax

  result = this;
  ++this->x;
  ++this->y;
  return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3940 */
int __cdecl template_max<int>(int a, int b)
{
  if ( a <= b )
    return b;
  else
    return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3970 */
double __cdecl template_max<double>(double a, double b)
{
  if ( a <= b )
    return b;
  else
    return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x39B0 */
void __cdecl template_swap<int>(int *a, int *b)
{
  int temp; // [rsp+0h] [rbp-14h]

  temp = *a;
  *a = *b;
  *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x39E0 */
void __cdecl Container<int>::Container(Container<int> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3A00 */
void __cdecl Container<int>::push(Container<int> *this, int value)
{
  int size; // ecx

  if ( this->size < 10 )
  {
    size = this->size;
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3A40 */
int __cdecl Container<int>::get(const Container<int> *this, int idx)
{
  if ( idx < 0 || idx >= this->size )
    return 0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3A90 */
int __cdecl Container<int>::getSize(const Container<int> *this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x3AB0 */
void __cdecl Container<double>::Container(Container<double> *this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3AD0 */
void __cdecl Container<double>::push(Container<double> *this, double value)
{
  int size; // ecx

  if ( this->size < 10 )
  {
    size = this->size;
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3B10 */
double __cdecl Container<double>::get(const Container<double> *this, int idx)
{
  if ( idx < 0 || idx >= this->size )
    return 0.0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3B70 */
int __cdecl Container<double>::getSize(const Container<double> *this)
{
  return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3B90 */
void __cdecl std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(
        std::unique_ptr<int> *this,
        std::unique_ptr<int>::pointer __p)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x3BC0 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int>::operator*(
        const std::unique_ptr<int> *this)
{
  return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3BF0 */
std::remove_reference<std::unique_ptr<int> &>::type *__cdecl std::move<std::unique_ptr<int> &>(
        std::unique_ptr<int> *__t)
{
  return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3C00 */
void __cdecl std::unique_ptr<int>::unique_ptr(std::unique_ptr<int> *this, std::unique_ptr<int> *a2)
{
  std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3C30 */
void __cdecl std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
        std::unique_ptr<int[]> *this,
        int *__p)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEm @ 0x3C60 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int []>::operator[](
        const std::unique_ptr<int[]> *this,
        std::size_t __i)
{
  return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x3CA0 */
void __cdecl std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int[]> *this)
{
  std::unique_ptr<int[]>::deleter_type *deleter; // rdi
  int **__ptr; // [rsp+10h] [rbp-10h]

  __ptr = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int []>::get_deleter(this);
    std::default_delete<int []>::operator()<int>(deleter, *__ptr);
  }
  *__ptr = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3D10 */
void __cdecl std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *this)
{
  int *v1; // rsi
  std::unique_ptr<int>::deleter_type *deleter; // [rsp+0h] [rbp-20h]
  int **__ptr; // [rsp+10h] [rbp-10h]

  __ptr = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int>::get_deleter(this);
    v1 = *std::move<int *&>(__ptr);
    std::default_delete<int>::operator()(deleter, v1);
  }
  *__ptr = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3D80 */
void __cdecl RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase(this);
  this->_vptr$RTTIBase = (int (**)(void))off_8D50;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3DC0 */
void __cdecl RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase(this);
  this->_vptr$RTTIBase = (int (**)(void))off_8DA0;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3E00 */
bool __cdecl std::type_info::operator==(const std::type_info *this, const std::type_info *__arg)
{
  bool v3; // [rsp+Fh] [rbp-21h]
  char v4; // [rsp+1Fh] [rbp-11h]

  v4 = 1;
  if ( *((_QWORD *)this + 1) != *((_QWORD *)__arg + 1) )
  {
    v3 = 0;
    if ( **((_BYTE **)this + 1) != 42 )
      v3 = strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
    v4 = v3;
  }
  return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3E80 */
int __cdecl RTTIDerivedA::derivedA_data(const RTTIDerivedA *this)
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3E90 */
int __cdecl RTTIDerivedB::derivedB_data(const RTTIDerivedB *this)
{
  return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3EA0 */
const char *__cdecl std::type_info::name(const std::type_info *this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return (const char *)(*((_QWORD *)this + 1) + 1LL);
  else
    return (const char *)*((_QWORD *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3EF0 */
const char *__cdecl Base::getName(const Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3F10 */
void __cdecl Base::~Base(Base *this)
{
  Base::~Base(this);
  operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x3F40 */
const char *__cdecl Derived::getName(const Derived *this)
{
  return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x3F60 */
void __cdecl Derived::~Derived(Derived *this)
{
  Derived::~Derived(this);
  operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3F90 */
void __cdecl BaseA::BaseA(BaseA *this)
{
  this->_vptr$BaseA = (int (**)(void))&off_89B0;
}


/* Function: _ZN5BaseBC2Ev @ 0x3FB0 */
void __cdecl BaseB::BaseB(BaseB *this)
{
  this->_vptr$BaseB = (int (**)(void))&off_89D8;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3FD0 */
int __cdecl MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3FE0 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x4010 */
int __cdecl MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn16_N12MultiDerived5funcBEv @ 0x4020 */
void __cdecl `non-virtual thunk to'MultiDerived::funcB()
{
  __int64 v0; // rdi

  MultiDerived::funcB((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD1Ev @ 0x4040 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived()
{
  __int64 v0; // rdi

  MultiDerived::~MultiDerived((MultiDerived *)(v0 - 16));
}


/* Function: _ZThn16_N12MultiDerivedD0Ev @ 0x4060 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived()
{
  __int64 v0; // rdi

  MultiDerived::~MultiDerived((MultiDerived *)(v0 - 16));
}


/* Function: _ZN5BaseA5funcAEv @ 0x4080 */
int __cdecl BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x4090 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  ;
}


/* Function: _ZN5BaseAD0Ev @ 0x40A0 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  BaseA::~BaseA(this);
  operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x40D0 */
int __cdecl BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x40E0 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  ;
}


/* Function: _ZN5BaseBD0Ev @ 0x40F0 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  BaseB::~BaseB(this);
  operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x4120 */
void __cdecl VirtualBase::VirtualBase(VirtualBase *this)
{
  this->_vptr$VirtualBase = (int (**)(void))&off_8C38;
}


/* Function: _ZN7MiddleAC2Ev @ 0x4140 */
void __cdecl MiddleA::MiddleA(MiddleA *this, void **vtt)
{
  this->_vptr$MiddleA = (int (**)(void))*vtt;
  *(int (***)(void))((char *)&this->_vptr$MiddleA + *((_QWORD *)this->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x4170 */
void __cdecl MiddleB::MiddleB(MiddleB *this, void **vtt)
{
  this->_vptr$MiddleB = (int (**)(void))*vtt;
  *(int (***)(void))((char *)&this->_vptr$MiddleB + *((_QWORD *)this->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x41A0 */
int __cdecl MiddleA::func(MiddleA *this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x41C0 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA(this, &`VTT for'MiddleA);
  VirtualBase::~VirtualBase((VirtualBase *)(&this->dataA + 2));
}


/* Function: _ZN7MiddleAD0Ev @ 0x4200 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA(this);
  operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 0x4230 */
void __cdecl `virtual thunk to'MiddleA::func()
{
  _QWORD *v0; // rdi

  MiddleA::func((MiddleA *)((char *)v0 + *(_QWORD *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 0x4250 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA()
{
  _QWORD *v0; // rdi

  MiddleA::~MiddleA((MiddleA *)((char *)v0 + *(_QWORD *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 0x4270 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA()
{
  _QWORD *v0; // rdi

  MiddleA::~MiddleA((MiddleA *)((char *)v0 + *(_QWORD *)(*v0 - 32LL)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x4290 */
int __cdecl MiddleB::func(MiddleB *this)
{
  return *(int *)((char *)&this->dataB + *((_QWORD *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x42B0 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB(this, &`VTT for'MiddleB);
  VirtualBase::~VirtualBase((VirtualBase *)(&this->dataB + 2));
}


/* Function: _ZN7MiddleBD0Ev @ 0x42F0 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB(this);
  operator delete(this);
}


/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 0x4320 */
void __cdecl `virtual thunk to'MiddleB::func()
{
  _QWORD *v0; // rdi

  MiddleB::func((MiddleB *)((char *)v0 + *(_QWORD *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 0x4340 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB()
{
  _QWORD *v0; // rdi

  MiddleB::~MiddleB((MiddleB *)((char *)v0 + *(_QWORD *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 0x4360 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB()
{
  _QWORD *v0; // rdi

  MiddleB::~MiddleB((MiddleB *)((char *)v0 + *(_QWORD *)(*v0 - 32LL)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x4380 */
int __cdecl DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)((char *)&this->dataA + *((_QWORD *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x43A0 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this);
}


/* Function: _ZThn16_N14DiamondDerived4funcEv @ 0x43D0 */
void __cdecl `non-virtual thunk to'DiamondDerived::func()
{
  __int64 v0; // rdi

  DiamondDerived::func((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 0x43F0 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
  __int64 v0; // rdi

  DiamondDerived::~DiamondDerived((DiamondDerived *)(v0 - 16));
}


/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 0x4410 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived()
{
  __int64 v0; // rdi

  DiamondDerived::~DiamondDerived((DiamondDerived *)(v0 - 16));
}


/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 0x4430 */
void __cdecl `virtual thunk to'DiamondDerived::func()
{
  _QWORD *v0; // rdi

  DiamondDerived::func((DiamondDerived *)((char *)v0 + *(_QWORD *)(*v0 - 24LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 0x4450 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived()
{
  _QWORD *v0; // rdi

  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)v0 + *(_QWORD *)(*v0 - 32LL)));
}


/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 0x4470 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived()
{
  _QWORD *v0; // rdi

  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)v0 + *(_QWORD *)(*v0 - 32LL)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x4490 */
int __cdecl VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x44A0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x44B0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x44E0 */
void __cdecl MiddleA::~MiddleA(MiddleA *this, void **vtt)
{
  ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x44F0 */
void __cdecl MiddleB::~MiddleB(MiddleB *this, void **vtt)
{
  ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x4500 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this, void **vtt)
{
  MiddleB::~MiddleB((MiddleB *)(&this->dataA + 2), vtt + 3);
  MiddleA::~MiddleA(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x4550 */
void __cdecl std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x4580 */
void __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
        std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
  std::tuple<int *,std::default_delete<int> > *v2; // rax

  v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
  std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
  *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x45E0 */
std::remove_reference<std::tuple<int *,std::default_delete<int> > &>::type *__cdecl std::move<std::tuple<int *,std::default_delete<int>> &>(
        std::tuple<int *,std::default_delete<int> > *__t)
{
  return __t;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x45F0 */
void __cdecl std::tuple<int *,std::default_delete<int>>::tuple(
        std::tuple<int *,std::default_delete<int> > *this,
        std::tuple<int *,std::default_delete<int> > *a2)
{
  std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4620 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
  return std::get<0ul,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x4640 */
void __fastcall __noreturn _clang_call_terminate(void *a1)
{
  __cxa_begin_catch(a1);
  std::terminate();
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4650 */
void __cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<0UL,int *,std::default_delete<int> > *this,
        std::_Tuple_impl<0UL,int *,std::default_delete<int> > *a2)
{
  std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(this, a2);
  *(_QWORD *)&this->std::_Tuple_impl<1UL,std::default_delete<int> >::std::_Head_base<1UL,std::default_delete<int>,true>::_M_head_impl.gap0 = *(_QWORD *)&a2->std::_Tuple_impl<1UL,std::default_delete<int> >::std::_Head_base<1UL,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4690 */
void __cdecl std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<1UL,std::default_delete<int> > *this,
        std::_Tuple_impl<1UL,std::default_delete<int> > *__in)
{
  ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x46A0 */
std::__tuple_element_t<0UL,std::tuple<int *,std::default_delete<int> > > *__cdecl std::get<0ul,int *,std::default_delete<int>>(
        std::tuple<int *,std::default_delete<int> > *__t)
{
  return std::__get_helper<0ul,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x46C0 */
int **__cdecl std::__get_helper<0ul,int *,std::default_delete<int>>(
        std::_Tuple_impl<0UL,int *,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x46E0 */
int **__cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(
        std::_Tuple_impl<0UL,int *,std::default_delete<int> > *__t)
{
  return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0UL,int *,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERS1_ @ 0x4700 */
int **__cdecl std::_Head_base<0ul,int *,false>::_M_head(std::_Head_base<0UL,int *,false> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x4710 */
void __cdecl RTTIBase::RTTIBase(RTTIBase *this)
{
  this->_vptr$RTTIBase = (int (**)(void))off_8D78;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4730 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4750 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4780 */
int __cdecl RTTIDerivedA::getType(const RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x4790 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *this)
{
  ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x47A0 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x47D0 */
int __cdecl RTTIBase::getType(const RTTIBase *this)
{
  return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x47E0 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4800 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4830 */
int __cdecl RTTIDerivedB::getType(const RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4840 */
void __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
        std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x4870 */
void __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
        std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
  *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x48B0 */
void __cdecl std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
        std::tuple<int *,std::default_delete<int> > *this)
{
  std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEEC2Ev @ 0x48E0 */
void __cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<0UL,int *,std::default_delete<int> > *this)
{
  std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(this);
  std::_Head_base<0ul,int *,false>::_Head_base((std::_Head_base<0UL,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEEC2Ev @ 0x4910 */
void __cdecl std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<1UL,std::default_delete<int> > *this)
{
  std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2Ev @ 0x4930 */
void __cdecl std::_Head_base<0ul,int *,false>::_Head_base(std::_Head_base<0UL,int *,false> *this)
{
  this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EEC2Ev @ 0x4950 */
void __cdecl std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(
        std::_Head_base<1UL,std::default_delete<int>,true> *this)
{
  ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x4960 */
std::unique_ptr<int>::deleter_type *__cdecl std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4990 */
void __cdecl std::default_delete<int>::operator()(const std::default_delete<int> *this, int *__ptr)
{
  if ( __ptr )
    operator delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x49D0 */
std::remove_reference<int *&>::type *__cdecl std::move<int *&>(int **__t)
{
  return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x49E0 */
std::default_delete<int> *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
  return std::get<1ul,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4A00 */
std::__tuple_element_t<1UL,std::tuple<int *,std::default_delete<int> > > *__cdecl std::get<1ul,int *,std::default_delete<int>>(
        std::tuple<int *,std::default_delete<int> > *__t)
{
  return std::__get_helper<1ul,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x4A20 */
std::default_delete<int> *__cdecl std::__get_helper<1ul,std::default_delete<int>>(
        std::_Tuple_impl<1UL,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4A40 */
std::default_delete<int> *__cdecl std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(
        std::_Tuple_impl<1UL,std::default_delete<int> > *__t)
{
  return std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4A60 */
std::default_delete<int> *__cdecl std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(
        std::_Head_base<1UL,std::default_delete<int>,true> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4A70 */
std::unique_ptr<int>::pointer __cdecl std::unique_ptr<int>::get(const std::unique_ptr<int> *this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x4AA0 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
        const std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
  return *std::get<0ul,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x4AC0 */
const std::__tuple_element_t<0UL,std::tuple<int *,std::default_delete<int> > > *__cdecl std::get<0ul,int *,std::default_delete<int>>(
        const std::tuple<int *,std::default_delete<int> > *__t)
{
  return std::__get_helper<0ul,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4AE0 */
int *const *__cdecl std::__get_helper<0ul,int *,std::default_delete<int>>(
        const std::_Tuple_impl<0UL,int *,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4B00 */
int *const *__cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int>>::_M_head(
        const std::_Tuple_impl<0UL,int *,std::default_delete<int> > *__t)
{
  return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0UL,int *,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EE7_M_headERKS1_ @ 0x4B20 */
int *const *__cdecl std::_Head_base<0ul,int *,false>::_M_head(const std::_Head_base<0UL,int *,false> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4B30 */
void __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
        std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,
        std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x4B60 */
void __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this,
        std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
  *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4BA0 */
void __cdecl std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
        std::tuple<int *,std::default_delete<int[]> > *this)
{
  std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4BD0 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
        std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
  return std::get<0ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4BF0 */
void __cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_Tuple_impl(
        std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *this)
{
  std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(this);
  std::_Head_base<0ul,int *,false>::_Head_base((std::_Head_base<0UL,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEEC2Ev @ 0x4C20 */
void __cdecl std::_Tuple_impl<1ul,std::default_delete<int []>>::_Tuple_impl(
        std::_Tuple_impl<1UL,std::default_delete<int[]> > *this)
{
  std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EEC2Ev @ 0x4C40 */
void __cdecl std::_Head_base<1ul,std::default_delete<int []>,true>::_Head_base(
        std::_Head_base<1UL,std::default_delete<int[]>,true> *this)
{
  ;
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4C50 */
std::__tuple_element_t<0UL,std::tuple<int *,std::default_delete<int[]> > > *__cdecl std::get<0ul,int *,std::default_delete<int []>>(
        std::tuple<int *,std::default_delete<int[]> > *__t)
{
  return std::__get_helper<0ul,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4C70 */
int **__cdecl std::__get_helper<0ul,int *,std::default_delete<int []>>(
        std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *__t)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4C90 */
int **__cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(
        std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *__t)
{
  return std::_Head_base<0ul,int *,false>::_M_head((std::_Head_base<0UL,int *,false> *)__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4CB0 */
std::unique_ptr<int[]>::deleter_type *__cdecl std::unique_ptr<int []>::get_deleter(std::unique_ptr<int[]> *this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x4CE0 */
std::enable_if<true,void>::type __cdecl std::default_delete<int []>::operator()<int>(
        const std::default_delete<int[]> *this,
        int *__ptr)
{
  if ( __ptr )
    operator delete[](__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4D20 */
std::default_delete<int[]> *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
        std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
  return std::get<1ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILm1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4D40 */
std::__tuple_element_t<1UL,std::tuple<int *,std::default_delete<int[]> > > *__cdecl std::get<1ul,int *,std::default_delete<int []>>(
        std::tuple<int *,std::default_delete<int[]> > *__t)
{
  return std::__get_helper<1ul,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILm1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4D60 */
std::default_delete<int[]> *__cdecl std::__get_helper<1ul,std::default_delete<int []>>(
        std::_Tuple_impl<1UL,std::default_delete<int[]> > *__t)
{
  return std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x4D80 */
std::default_delete<int[]> *__cdecl std::_Tuple_impl<1ul,std::default_delete<int []>>::_M_head(
        std::_Tuple_impl<1UL,std::default_delete<int[]> > *__t)
{
  return std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILm1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x4DA0 */
std::default_delete<int[]> *__cdecl std::_Head_base<1ul,std::default_delete<int []>,true>::_M_head(
        std::_Head_base<1UL,std::default_delete<int[]>,true> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x4DB0 */
std::unique_ptr<int[]>::pointer __cdecl std::unique_ptr<int []>::get(const std::unique_ptr<int[]> *this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4DE0 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
        const std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
  return *std::get<0ul,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILm0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4E00 */
const std::__tuple_element_t<0UL,std::tuple<int *,std::default_delete<int[]> > > *__cdecl std::get<0ul,int *,std::default_delete<int []>>(
        const std::tuple<int *,std::default_delete<int[]> > *__t)
{
  return std::__get_helper<0ul,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILm0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4E20 */
int *const *__cdecl std::__get_helper<0ul,int *,std::default_delete<int []>>(
        const std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *__t)
{
  return std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILm0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4E40 */
int *const *__cdecl std::_Tuple_impl<0ul,int *,std::default_delete<int []>>::_M_head(
        const std::_Tuple_impl<0UL,int *,std::default_delete<int[]> > *__t)
{
  return std::_Head_base<0ul,int *,false>::_M_head((const std::_Head_base<0UL,int *,false> *)__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4E60 */
int **__cdecl std::forward<int *&>(std::remove_reference<int *&>::type *__t)
{
  return __t;
}


/* Function: _ZNSt10_Head_baseILm0EPiLb0EEC2IRS0_EEOT_ @ 0x4E70 */
void __cdecl std::_Head_base<0ul,int *,false>::_Head_base<int *&>(std::_Head_base<0UL,int *,false> *this, int **__h)
{
  this->_M_head_impl = *std::forward<int *&>(__h);
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
