/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_O0_g
 * Processor: arm
 */

/* Function: .init_proc @ 0x10A5C */
int init_proc()
{
  return call_weak_fn();
}


/* Function: sub_10A68 @ 0x10A68 */
void sub_10A68()
{
  JUMPOUT(0);
}


/* Function: _start @ 0x10BCC */
// positive sp value has been detected, the output may be wrong!
void __noreturn start(void (*a1)(void), int a2, int a3, int a4, ...)
{
  int v4; // [sp-4h] [bp-4h]
  va_list va; // [sp+0h] [bp+0h] BYREF

  va_start(va, a4);
  _libc_start_main(
    *(int (**)(int, char **, char **))((char *)&off_14480 + (_DWORD)&off_10C08),
    v4,
    (char **)&va,
    0,
    0,
    a1,
    &va);
  abort();
}


/* Function: call_weak_fn @ 0x10C10 */
int call_weak_fn()
{
  int result; // r0

  if ( &__gmon_start__ )
    return _gmon_start__();
  return result;
}


/* Function: deregister_tm_clones @ 0x10C34 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x10C60 */
__int64 register_tm_clones()
{
  __int64 result; // r0

  LODWORD(result) = &_bss_start;
  HIDWORD(result) = 0;
  return result;
}


/* Function: __do_global_dtors_aux @ 0x10C98 */
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


/* Function: frame_dummy @ 0x10CC0 */
// attributes: thunk
__int64 frame_dummy()
{
  return register_tm_clones();
}


/* Function: _Z20test_cpp_member_funcv @ 0x10CC4 */
int test_cpp_member_func()
{
  int r1; // [sp+4h] [bp-38h]
  int r2; // [sp+8h] [bp-34h]
  SimpleClass obj; // [sp+10h] [bp-2Ch] BYREF

  SimpleClass::SimpleClass(&obj, 5, "Test");
  SimpleClass::setValue(&obj, 10);
  r1 = SimpleClass::getValue(&obj);
  r2 = SimpleClass::compute(&obj, 3);
  return r1 + r2 + SimpleClass::getClassID();
}


/* Function: _Z20test_cpp_constructorv @ 0x10D74 */
int test_cpp_constructor()
{
  int result; // [sp+0h] [bp-14h]
  int resulta; // [sp+0h] [bp-14h]
  LifecycleClass obj; // [sp+4h] [bp-10h] BYREF

  LifecycleClass::LifecycleClass(&obj, 5u);
  result = LifecycleClass::getData(&obj, 2u);
  resulta = result + LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(&obj);
  return resulta + 1000 * LifecycleClass::getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10E48 */
int __cdecl call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr.Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10E84 */
int test_cpp_virtual_func()
{
  int v0; // r4
  Base base; // [sp+0h] [bp-34h] BYREF
  int r1; // [sp+4h] [bp-30h]
  int r2; // [sp+8h] [bp-2Ch]
  Base *pb; // [sp+Ch] [bp-28h]
  Base *pd; // [sp+10h] [bp-24h]
  int r3; // [sp+14h] [bp-20h]
  int r4; // [sp+18h] [bp-1Ch]
  Derived derived; // [sp+1Ch] [bp-18h] BYREF

  base._vptr.Base = (int (**)(...))&off_145F0;
  Derived::Derived(&derived, 3);
  r1 = Base::virtual_func(&base, 5);
  r2 = Derived::virtual_func(&derived, 5);
  pb = &base;
  pd = &derived;
  r3 = call_virtual_func(&base, 5);
  r4 = call_virtual_func(pd, 5);
  v0 = r1 + r2 + r3 + r4;
  Derived::~Derived(&derived);
  Base::~Base(&base);
  return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10FA0 */
int test_cpp_multiple_inheritance()
{
  int v0; // r4
  int r1; // [sp+8h] [bp-2Ch]
  MultiDerived obj; // [sp+14h] [bp-20h] BYREF

  MultiDerived::MultiDerived(&obj);
  obj.dataA = 100;
  obj.dataB = 200;
  r1 = (*obj._vptr.BaseA)(&obj);
  v0 = r1 + (*obj._vptr.BaseB)(&obj.BaseB) + (&obj != (MultiDerived *)&obj.BaseB);
  MultiDerived::~MultiDerived(&obj);
  return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110A4 */
int test_cpp_diamond_inheritance()
{
  int v0; // r4
  int r1; // [sp+4h] [bp-30h]
  DiamondDerived obj; // [sp+Ch] [bp-28h] BYREF

  DiamondDerived::DiamondDerived(&obj);
  obj.dataB = 50;
  r1 = (*obj._vptr.MiddleB)(&obj.MiddleB);
  obj.dataB = 100;
  v0 = r1 + (*obj._vptr.MiddleB)(&obj.MiddleB);
  DiamondDerived::~DiamondDerived(&obj);
  return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1117C */
int test_cpp_operator_overload()
{
  int v0; // r2
  bool eq; // [sp+3h] [bp-21h]
  Point p1; // [sp+4h] [bp-20h] BYREF
  Point p2; // [sp+Ch] [bp-18h] BYREF
  Point p3; // [sp+14h] [bp-10h] BYREF

  Point::Point(&p1, 1, 2);
  Point::Point(&p2, 3, 4);
  Point::operator+(&p3, &p1, &p2);
  eq = Point::operator==(&p1, &p2);
  Point::operator++(&p3);
  if ( eq )
    v0 = 0;
  else
    v0 = 10;
  return v0 + p3.x + p3.y;
}


/* Function: _Z22test_cpp_template_funcv @ 0x11250 */
int test_cpp_template_func()
{
  int a; // [sp+4h] [bp-20h] BYREF
  int b; // [sp+8h] [bp-1Ch] BYREF
  int r1; // [sp+Ch] [bp-18h]
  double r2; // [sp+10h] [bp-14h]

  r1 = template_max<int>(3, 7);
  r2 = template_max<double>(2.5, 1.5);
  a = 10;
  b = 20;
  template_swap<int>(&a, &b);
  return (int)r2 + r1 + a + b;
}


/* Function: _Z23test_cpp_template_classv @ 0x11324 */
int test_cpp_template_class()
{
  int r1; // [sp+0h] [bp-ACh]
  int r2; // [sp+4h] [bp-A8h]
  Container<int> int_container; // [sp+14h] [bp-98h] BYREF
  Container<double> double_container; // [sp+40h] [bp-6Ch] BYREF

  Container<int>::Container(&int_container);
  Container<int>::push(&int_container, 10);
  Container<int>::push(&int_container, 20);
  Container<int>::push(&int_container, 30);
  r1 = Container<int>::get(&int_container, 0);
  r2 = Container<int>::getSize(&int_container);
  Container<double>::Container(&double_container);
  Container<double>::push(&double_container, 3.14);
  return r1 + r2 + (int)Container<double>::get(&double_container, 0);
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1143C */
int __cdecl test_cpp_lambda(void)::{lambda(int)#1}::operator()(
        const const struct {int __capture_by_value;int *__capture_by_ref;} *const __closure,
        int x)
{
  *__closure->__capture_by_ref += 5;
  return __closure->__capture_by_value * x + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x1149C */
// local variable allocation has failed, the output may be wrong!
int test_cpp_lambda()
{
  int capture_by_ref; // [sp+4h] [bp-20h] BYREF
  int capture_by_value; // [sp+8h] [bp-1Ch]
  int lambda2; // [sp+14h] [bp-10h] OVERLAPPED BYREF
  int *p_capture_by_ref; // [sp+18h] [bp-Ch]

  capture_by_value = 10;
  capture_by_ref = 20;
  lambda2 = 10;
  p_capture_by_ref = &capture_by_ref;
  return test_cpp_lambda(void)::{lambda(int)#1}::operator()(
           (const const struct {int __capture_by_value;int *__capture_by_ref;} *const)&lambda2,
           3)
       + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1152C */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = 42;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1169C */
void __cdecl test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(
        const const struct {_BYTE gap0;} *const __closure,
        int *p)
{
  *p = -1;
  if ( p )
    operator delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x116E0 */
int test_cpp_smart_ptr()
{
  int *v0; // r0
  std::remove_reference<std::unique_ptr<int>&>::type *v1; // r0
  int *v2; // r0
  int *v3; // r0
  int v4; // r4
  $44B1EA910F358000232221CCB0AF3F67 deleter; // [sp+4h] [bp-30h] BYREF
  std::unique_ptr<int> ptr2; // [sp+8h] [bp-2Ch] BYREF
  std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > ptr3; // [sp+10h] [bp-24h] BYREF
  int r1; // [sp+18h] [bp-1Ch]
  int r2; // [sp+1Ch] [bp-18h]
  int r3; // [sp+20h] [bp-14h]

  v0 = (int *)operator new(4u);
  *v0 = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(&ptr2, v0);
  *std::unique_ptr<int>::operator*(&ptr2) = 200;
  v1 = std::move<std::unique_ptr<int> &>(&ptr2);
  std::unique_ptr<int>::unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>, v1);
  r1 = *std::unique_ptr<int>::operator*((const std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
  v2 = (int *)operator new[](0x14u);
  *v2 = 1;
  v2[1] = 2;
  v2[2] = 3;
  v2[3] = 4;
  v2[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
    (std::unique_ptr<int []> *const)&ptr3,
    v2);
  r2 = *std::unique_ptr<int []>::operator[]((const std::unique_ptr<int []> *const)&ptr3, 2u);
  v3 = (int *)operator new(4u);
  *v3 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
    (std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>,
    v3,
    (const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *)&deleter);
  r3 = *std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*((const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
  v4 = r1 + r2 + r3;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr((std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int []>::~unique_ptr((std::unique_ptr<int []> *const)&ptr3);
  std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int>::~unique_ptr(&ptr2);
  return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x118C4 */
int test_cpp_rtti()
{
  RTTIDerivedA *v0; // r4
  RTTIDerivedB *v1; // r4
  const RTTIDerivedA *v2; // r3
  const RTTIDerivedB *v3; // r3
  const char *v4; // r0
  int result; // [sp+4h] [bp-20h]
  int resulta; // [sp+4h] [bp-20h]
  RTTIBase *obj1; // [sp+8h] [bp-1Ch]

  v0 = (RTTIDerivedA *)operator new(4u);
  v0->_vptr.RTTIBase = 0;
  RTTIDerivedA::RTTIDerivedA(v0);
  obj1 = v0;
  v1 = (RTTIDerivedB *)operator new(4u);
  v1->_vptr.RTTIBase = 0;
  RTTIDerivedB::RTTIDerivedB(v1);
  result = 0;
  if ( !obj1 )
    _cxa_bad_typeid();
  if ( std::type_info::operator==(*((_DWORD *)obj1->_vptr.RTTIBase - 1), &`typeinfo for'RTTIDerivedA) )
    result = 10;
  if ( !v1 )
    _cxa_bad_typeid();
  if ( std::type_info::operator==(*((_DWORD *)v1->_vptr.RTTIBase - 1), &`typeinfo for'RTTIDerivedB) )
    result += 20;
  v2 = (const RTTIDerivedA *)_dynamic_cast(
                               obj1,
                               (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                               (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                               0);
  if ( v2 )
    result += RTTIDerivedA::derivedA_data(v2);
  v3 = (const RTTIDerivedB *)_dynamic_cast(
                               v1,
                               (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                               (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                               0);
  if ( v3 )
    result += RTTIDerivedB::derivedB_data(v3);
  v4 = std::type_info::name(*((const std::type_info *const *)obj1->_vptr.RTTIBase - 1));
  resulta = strlen(v4) + result;
  (*((void (__fastcall **)(RTTIBase *))obj1->_vptr.RTTIBase + 1))(obj1);
  (*((void (__fastcall **)(RTTIDerivedB *))v1->_vptr.RTTIBase + 1))(v1);
  return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11ADC */
void __noreturn test_cpp_oo_features()
{
  int v0; // r0
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0

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


/* Function: main @ 0x11C18 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: std::__uniq_ptr_data_int_test_cpp_smart_ptr()::_lambda(int_)__true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr()::_lambda(int_)_&_ @ 0x11C30 */
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::<lambda(int*)>,true,false> *__cdecl std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
        std::__uniq_ptr_data<int,test_cpp_smart_ptr()::<lambda(int*)>,true,false> *const this,
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer a2,
        const const struct {_BYTE gap0;} *a3)
{
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
    this,
    a2,
    a3);
  return this;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x11C6C */
std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __p,
        const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *__d)
{
  std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
    &this->_M_t,
    __p,
    __d);
  return this;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x11CA8 */
void *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *deleter; // r4
  int **v2; // r0
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer *__ptr; // [sp+Ch] [bp-10h]

  __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(this);
    v2 = std::move<int *&>(__ptr);
    test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
  }
  *__ptr = 0;
  return this;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x11D1C */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(
        const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x11D4C */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __p,
        const const struct {_BYTE gap0;} *__d)
{
  const const struct {_BYTE gap0;} *v4; // r0
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __pa; // [sp+8h] [bp-14h] BYREF
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *thisa; // [sp+Ch] [bp-10h]

  thisa = this;
  __pa = __p;
  v4 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__d);
  std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
    &this->_M_t,
    &__pa,
    v4);
  return thisa;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11D94 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x11DC0 */
std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return (std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x11DEC */
std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(
        const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(&this->_M_t);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x11E18 */
const const struct {_BYTE gap0;} *__cdecl std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *__t)
{
  return (const const struct {_BYTE gap0;} *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x11E3C */
std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__cdecl std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
        std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        int **__a1,
        const const struct {_BYTE gap0;} *__a2)
{
  int **v4; // r5
  const const struct {_BYTE gap0;} *v5; // r0

  v4 = std::forward<int *&>(__a1);
  v5 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__a2);
  std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
    this,
    v4,
    v5);
  return this;
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11E90 */
std::__tuple_element_t_1 *__cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x11EBC */
struct {_BYTE gap0;} *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return (struct {_BYTE gap0;} *)std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11EE8 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(
        const std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return *std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x11F18 */
std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
        std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        int **__head,
        const const struct {_BYTE gap0;} *a3)
{
  const const struct {_BYTE gap0;} *v3; // r0
  int **v4; // r0

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)a3);
  std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(this, v3);
  v4 = std::forward<int *&>(__head);
  std::_Head_base<0u,int *,false>::_Head_base<int *&>((std::_Head_base<0,int*,false> *const)this, v4);
  return this;
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x11F74 */
int **__cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11F9C */
std::__tuple_element_t *__cdecl std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return (std::__tuple_element_t *)std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(__t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x11FC4 */
const std::__tuple_element_t_1 *__cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        const std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x11FF0 */
std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(
        std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        const const struct {_BYTE gap0;} *__head)
{
  std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(this, __head);
  return this;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x12020 */
int **__cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
        std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x1204C */
struct {_BYTE gap0;} *__cdecl std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(
        std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x12074 */
int *const *__cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        const std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x1209C */
std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *__cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(
        std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *const this,
        const const struct {_BYTE gap0;} *__h)
{
  return this;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x120C4 */
struct {_BYTE gap0;} *__cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
        std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x120EC */
int *const *__cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
        const std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x12118 */
struct {_BYTE gap0;} *__cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(
        std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *__b)
{
  return (struct {_BYTE gap0;} *)__b;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x1213C */
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 && __priority == 0xFFFF )
  {
    std::ios_base::Init::Init(&std::__ioinit);
    _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
  }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x121A0 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x121BC */
const char *__cdecl std::type_info::name(const std::type_info *const this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return (const char *)(*((_DWORD *)this + 1) + 1);
  else
    return (const char *)*((_DWORD *)this + 1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x12208 */
SimpleClass *__cdecl SimpleClass::SimpleClass(SimpleClass *const this, int v, const char *n)
{
  this->value = v;
  strncpy(this->name, n, 0x1Fu);
  this->name[31] = 0;
  return this;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x12260 */
int __cdecl SimpleClass::getValue(const SimpleClass *const this)
{
  return this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x12288 */
void __cdecl SimpleClass::setValue(SimpleClass *const this, int v)
{
  this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x122B8 */
int __cdecl SimpleClass::compute(const SimpleClass *const this, int x)
{
  return x * this->value + strlen(this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x12304 */
int SimpleClass::getClassID()
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x12324 */
LifecycleClass *__cdecl LifecycleClass::LifecycleClass(LifecycleClass *const this, size_t s)
{
  size_t i; // [sp+Ch] [bp-8h]

  this->size = s;
  if ( s > 0x1FFFFFFE )
    _cxa_throw_bad_array_new_length();
  this->data = (int *)operator new[](4 * s);
  for ( i = 0; i < s; ++i )
    this->data[i] = 10 * i;
  ++LifecycleClass::instance_count;
  return this;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x123F4 */
void *__cdecl LifecycleClass::~LifecycleClass(LifecycleClass *const this)
{
  if ( this->data )
    operator delete[](this->data);
  --LifecycleClass::instance_count;
  return this;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x1244C */
int __cdecl LifecycleClass::getData(const LifecycleClass *const this, size_t idx)
{
  if ( idx >= this->size )
    return -1;
  else
    return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x124A4 */
int LifecycleClass::getInstanceCount()
{
  return LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x124C8 */
int __cdecl Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x124F4 */
const char *__cdecl Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1251C */
void *__cdecl Base::~Base(Base *const this)
{
  this->_vptr.Base = (int (**)(...))&off_145F0;
  return this;
}


/* Function: _ZN4BaseD0Ev @ 0x12550 */
void *__cdecl Base::~Base(Base *const this)
{
  Base::~Base(this);
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN4BaseC2Ev @ 0x12584 */
Base *__cdecl Base::Base(Base *const this)
{
  this->_vptr.Base = (int (**)(...))&off_145F0;
  return this;
}


/* Function: _ZN7DerivedC2Ei @ 0x125B8 */
Derived *__cdecl Derived::Derived(Derived *const this, int m)
{
  Base::Base(this);
  this->_vptr.Base = (int (**)(...))&off_145D8;
  this->multiplier = m;
  return this;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x12604 */
int __cdecl Derived::virtual_func(Derived *const this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x12638 */
const char *__cdecl Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x12660 */
int __cdecl BaseA::funcA(BaseA *const this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x12684 */
void *__cdecl BaseA::~BaseA(BaseA *const this)
{
  this->_vptr.BaseA = (int (**)(...))&off_145C4;
  return this;
}


/* Function: _ZN5BaseAD0Ev @ 0x126B8 */
void *__cdecl BaseA::~BaseA(BaseA *const this)
{
  BaseA::~BaseA(this);
  operator delete(this, 8u);
  return this;
}


/* Function: _ZN5BaseB5funcBEv @ 0x126EC */
int __cdecl BaseB::funcB(BaseB *const this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x12710 */
void *__cdecl BaseB::~BaseB(BaseB *const this)
{
  this->_vptr.BaseB = (int (**)(...))&off_145B0;
  return this;
}


/* Function: _ZN5BaseBD0Ev @ 0x12744 */
void *__cdecl BaseB::~BaseB(BaseB *const this)
{
  BaseB::~BaseB(this);
  operator delete(this, 8u);
  return this;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x12778 */
int __cdecl MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1279C */
int __cdecl MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x127C0 */
int __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return MultiDerived::funcB((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x127C8 */
BaseA *__cdecl BaseA::BaseA(BaseA *const this)
{
  this->_vptr.BaseA = (int (**)(...))&off_145C4;
  return this;
}


/* Function: _ZN5BaseBC2Ev @ 0x127FC */
BaseB *__cdecl BaseB::BaseB(BaseB *const this)
{
  this->_vptr.BaseB = (int (**)(...))&off_145B0;
  return this;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x12830 */
MultiDerived *__cdecl MultiDerived::MultiDerived(MultiDerived *const this)
{
  BaseA::BaseA(this);
  BaseB::BaseB(&this->BaseB);
  this->_vptr.BaseA = (int (**)(...))&off_14584;
  this->_vptr.BaseB = (int (**)(...))&off_1459C;
  return this;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1288C */
int __cdecl VirtualBase::func(VirtualBase *const this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x128B0 */
void *__cdecl VirtualBase::~VirtualBase(VirtualBase *const this)
{
  this->_vptr.VirtualBase = (int (**)(...))&off_14570;
  return this;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x128E4 */
void *__cdecl VirtualBase::~VirtualBase(VirtualBase *const this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this, 8u);
  return this;
}


/* Function: _ZN7MiddleA4funcEv @ 0x12918 */
int __cdecl MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr.MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1295C */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x12970 */
int __cdecl MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr.MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x129B4 */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *((_DWORD *)this->_vptr.MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x129C8 */
int __cdecl DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr.MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x12A0C */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x12A20 */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x12A28 */
VirtualBase *__cdecl VirtualBase::VirtualBase(VirtualBase *const this)
{
  this->_vptr.VirtualBase = (int (**)(...))&off_14570;
  return this;
}


/* Function: _ZN7MiddleAC2Ev @ 0x12A5C */
MiddleA *__cdecl MiddleA::MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  this->_vptr.MiddleA = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr.MiddleA + *((_DWORD *)this->_vptr.MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
  return this;
}


/* Function: _ZN7MiddleAD2Ev @ 0x12ABC */
void *__cdecl MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  this->_vptr.MiddleA = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr.MiddleA + *((_DWORD *)this->_vptr.MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
  return this;
}


/* Function: _ZN7MiddleBC2Ev @ 0x12B1C */
MiddleB *__cdecl MiddleB::MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  this->_vptr.MiddleB = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr.MiddleB + *((_DWORD *)this->_vptr.MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
  return this;
}


/* Function: _ZN7MiddleBD2Ev @ 0x12B7C */
void *__cdecl MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  this->_vptr.MiddleB = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr.MiddleB + *((_DWORD *)this->_vptr.MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
  return this;
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x12BDC */
DiamondDerived *__cdecl DiamondDerived::DiamondDerived(DiamondDerived *const this)
{
  VirtualBase::VirtualBase((VirtualBase *const)&this->MiddleB);
  MiddleA::MiddleA(this, (const void **const)&_vtt_parm);
  MiddleB::MiddleB((MiddleB *const)(&this->dataA + 1), (const void **const)&off_144F0);
  this->_vptr.MiddleA = (int (**)(...))&off_144A4;
  this->_vptr.MiddleB = (int (**)(...))&off_144D8;
  *(&this->dataA + 1) = (int)&off_144BC;
  return this;
}


/* Function: _ZN5PointC2Eii @ 0x12C74 */
Point *__cdecl Point::Point(Point *const this, int _x, int _y)
{
  this->x = _x;
  this->y = _y;
  return this;
}


/* Function: _ZNK5PointplERKS_ @ 0x12CB8 */
Point *__cdecl Point::operator+(Point *__return_ptr retstr, const Point *const this, const Point *other)
{
  Point::Point(retstr, this->x + other->x, this->y + other->y);
  return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x12D10 */
bool __cdecl Point::operator==(const Point *const this, const Point *other)
{
  return this->x == other->x && this->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x12D70 */
Point *__cdecl Point::operator++(Point *const this)
{
  ++this->x;
  ++this->y;
  return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x12DBC */
int __cdecl template_max<int>(int a, int b)
{
  if ( a <= b )
    return b;
  else
    return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x12DFC */
double __cdecl template_max<double>(double a, double b)
{
  if ( a > b )
    return a;
  return b;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x12E5C */
void __cdecl template_swap<int>(int *a, int *b)
{
  int temp; // [sp+Ch] [bp-8h]

  temp = *a;
  *a = *b;
  *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x12EA8 */
Container<int> *__cdecl Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
  return this;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x12ED8 */
void __cdecl Container<int>::push(Container<int> *const this, int value)
{
  int size; // r3

  if ( this->size <= 9 )
  {
    size = this->size;
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x12F2C */
int __cdecl Container<int>::get(const Container<int> *const this, int idx)
{
  if ( idx < 0 || idx >= this->size )
    return 0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x12F84 */
int __cdecl Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x12FAC */
Container<double> *__cdecl Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
  return this;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x12FDC */
void __cdecl Container<double>::push(Container<double> *const this, double value)
{
  int size; // r1

  if ( this->size <= 9 )
  {
    size = this->size;
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x13040 */
double __cdecl Container<double>::get(const Container<double> *const this, int idx)
{
  if ( idx < 0 || idx >= this->size )
    return 0.0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x130A8 */
int __cdecl Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x130D0 */
std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *__cdecl std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *const this,
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
  return this;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x13108 */
std::unique_ptr<int> *__cdecl std::unique_ptr<int>::unique_ptr(
        std::unique_ptr<int> *const this,
        std::unique_ptr<int> *a2)
{
  std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
  return this;
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x13140 */
int __cdecl RTTIBase::getType(const RTTIBase *const this)
{
  return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x13164 */
int __cdecl RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int __cdecl RTTIDerivedA::derivedA_data(const RTTIDerivedA *const this)
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x131AC */
int __cdecl RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x131D0 */
int __cdecl RTTIDerivedB::derivedB_data(const RTTIDerivedB *const this)
{
  return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x131F4 */
RTTIBase *__cdecl RTTIBase::RTTIBase(RTTIBase *const this)
{
  this->_vptr.RTTIBase = (int (**)(...))off_1448C;
  return this;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x13228 */
void *__cdecl RTTIBase::~RTTIBase(RTTIBase *const this)
{
  this->_vptr.RTTIBase = (int (**)(...))off_1448C;
  return this;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x1325C */
void *__cdecl RTTIBase::~RTTIBase(RTTIBase *const this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x13290 */
RTTIDerivedA *__cdecl RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *const this)
{
  RTTIBase::RTTIBase(this);
  this->_vptr.RTTIBase = (int (**)(...))off_14478;
  return this;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x132CC */
RTTIDerivedB *__cdecl RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *const this)
{
  RTTIBase::RTTIBase(this);
  this->_vptr.RTTIBase = (int (**)(...))off_14464;
  return this;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x13308 */
std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *__cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
  return this;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x13340 */
std::unique_ptr<int> *__cdecl std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(
        std::unique_ptr<int> *const this,
        std::unique_ptr<int>::pointer __p)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
  return this;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x13374 */
void *__cdecl std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
  std::unique_ptr<int>::deleter_type *deleter; // r4
  int **v2; // r0
  std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__ptr; // [sp+Ch] [bp-10h]

  __ptr = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int>::get_deleter(this);
    v2 = std::move<int *&>(__ptr);
    std::default_delete<int>::operator()(deleter, *v2);
  }
  *__ptr = 0;
  return this;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x133E8 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int>::operator*(
        const std::unique_ptr<int> *const this)
{
  return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x13418 */
std::remove_reference<std::unique_ptr<int>&>::type *__cdecl std::move<std::unique_ptr<int> &>(
        std::unique_ptr<int> *__t)
{
  return __t;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1343C */
std::_Tuple_impl<0,int*,std::default_delete<int> > *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *const this,
        std::_Tuple_impl<0,int*,std::default_delete<int> > *a2)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this, a2);
  *(_DWORD *)&this->std::_Tuple_impl<1,std::default_delete<int> >::std::_Head_base<1,std::default_delete<int>,true>::_M_head_impl.gap0 = *(_DWORD *)&a2->std::_Tuple_impl<1,std::default_delete<int> >::std::_Head_base<1,std::default_delete<int>,true>::_M_head_impl.gap0;
  return this;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1347C */
std::tuple<int*,std::default_delete<int> > *__cdecl std::tuple<int *,std::default_delete<int>>::tuple(
        std::tuple<int*,std::default_delete<int> > *const this,
        std::tuple<int*,std::default_delete<int> > *a2)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
  return this;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x134B4 */
std::__uniq_ptr_impl<int,std::default_delete<int> > *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
  std::tuple<int*,std::default_delete<int> > *v3; // r0

  v3 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
  std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v3);
  *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
  return this;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x1350C */
std::__uniq_ptr_data<int,std::default_delete<int []>,true,true> *__cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
        std::__uniq_ptr_data<int,std::default_delete<int []>,true,true> *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, a2);
  return this;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x13544 */
std::unique_ptr<int []> *__cdecl std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
        std::unique_ptr<int []> *const this,
        int *__p)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
  return this;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x13578 */
void *__cdecl std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
  std::unique_ptr<int []>::deleter_type *deleter; // r0
  std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer *__ptr; // [sp+Ch] [bp-8h]

  __ptr = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int []>::get_deleter(this);
    std::default_delete<int []>::operator()<int>(deleter, *__ptr);
  }
  *__ptr = 0;
  return this;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x135E4 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int []>::operator[](
        const std::unique_ptr<int []> *const this,
        std::size_t __i)
{
  return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x13624 */
std::__uniq_ptr_impl<int,std::default_delete<int> > *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
  *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
  return this;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
  return std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x13694 */
std::unique_ptr<int>::deleter_type *__cdecl std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x136C0 */
std::remove_reference<int*&>::type *__cdecl std::move<int *&>(int **__t)
{
  return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x136E4 */
void __cdecl std::default_delete<int>::operator()(const std::default_delete<int> *const this, int *__ptr)
{
  if ( __ptr )
    operator delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x1371C */
std::unique_ptr<int>::pointer __cdecl std::unique_ptr<int>::get(const std::unique_ptr<int> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x13748 */
std::remove_reference<std::tuple<int*,std::default_delete<int> >&>::type *__cdecl std::move<std::tuple<int *,std::default_delete<int>> &>(
        std::tuple<int*,std::default_delete<int> > *__t)
{
  return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x1376C */
std::_Tuple_impl<1,std::default_delete<int> > *__cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<1,std::default_delete<int> > *const this,
        std::_Tuple_impl<1,std::default_delete<int> > *__in)
{
  return this;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x13794 */
std::__uniq_ptr_impl<int,std::default_delete<int []> > *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer __p)
{
  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
  *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
  return this;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x137D8 */
std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
        std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
  return std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x13804 */
std::unique_ptr<int []>::deleter_type *__cdecl std::unique_ptr<int []>::get_deleter(
        std::unique_ptr<int []> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x13830 */
void __cdecl std::default_delete<int []>::operator()<int>(const std::default_delete<int []> *const this, int *__ptr)
{
  if ( __ptr )
    operator delete[](__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x13864 */
std::unique_ptr<int []>::pointer __cdecl std::unique_ptr<int []>::get(const std::unique_ptr<int []> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x13890 */
std::tuple<int*,std::default_delete<int> > *__cdecl std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
        std::tuple<int*,std::default_delete<int> > *const this)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this);
  return this;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x138BC */
std::__tuple_element_t *__cdecl std::get<0u,int *,std::default_delete<int>>(
        std::tuple<int*,std::default_delete<int> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
std::default_delete<int> *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
  return (std::default_delete<int> *)std::get<1u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
        const std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
  return *std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x13944 */
std::tuple<int*,std::default_delete<int []> > *__cdecl std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
        std::tuple<int*,std::default_delete<int []> > *const this)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(this);
  return this;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13970 */
std::__tuple_element_t_0 *__cdecl std::get<0u,int *,std::default_delete<int []>>(
        std::tuple<int*,std::default_delete<int []> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
std::default_delete<int []> *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
        std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
  return (std::default_delete<int []> *)std::get<1u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
        const std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
  return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x139F8 */
std::_Tuple_impl<0,int*,std::default_delete<int> > *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *const this)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this);
  std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0,int*,false> *const)this);
  return this;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13A2C */
int **__cdecl std::__get_helper<0u,int *,std::default_delete<int>>(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x13A54 */
std::__tuple_element_t *__cdecl std::get<1u,int *,std::default_delete<int>>(
        std::tuple<int*,std::default_delete<int> > *__t)
{
  return (std::__tuple_element_t *)std::__get_helper<1u,std::default_delete<int>>(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x13A7C */
const std::__tuple_element_t *__cdecl std::get<0u,int *,std::default_delete<int>>(
        const std::tuple<int*,std::default_delete<int> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x13AA8 */
std::_Tuple_impl<0,int*,std::default_delete<int []> > *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(
        std::_Tuple_impl<0,int*,std::default_delete<int []> > *const this)
{
  std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(this);
  std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0,int*,false> *const)this);
  return this;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13ADC */
int **__cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(
        std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13B04 */
std::__tuple_element_t *__cdecl std::get<1u,int *,std::default_delete<int []>>(
        std::tuple<int*,std::default_delete<int []> > *__t)
{
  return (std::__tuple_element_t *)std::__get_helper<1u,std::default_delete<int []>>(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x13B2C */
const std::__tuple_element_t_0 *__cdecl std::get<0u,int *,std::default_delete<int []>>(
        const std::tuple<int*,std::default_delete<int []> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x13B58 */
int **__cdecl std::forward<int *&>(std::remove_reference<int*&>::type *__t)
{
  return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x13B7C */
std::_Tuple_impl<1,std::default_delete<int> > *__cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<1,std::default_delete<int> > *const this)
{
  std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(this);
  return this;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x13BA4 */
std::_Head_base<0,int*,false> *__cdecl std::_Head_base<0u,int *,false>::_Head_base(
        std::_Head_base<0,int*,false> *const this)
{
  this->_M_head_impl = 0;
  return this;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x13BD4 */
int **__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x13C00 */
std::default_delete<int> *__cdecl std::__get_helper<1u,std::default_delete<int>>(
        std::_Tuple_impl<1,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13C28 */
int *const *__cdecl std::__get_helper<0u,int *,std::default_delete<int>>(
        const std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x13C50 */
std::_Tuple_impl<1,std::default_delete<int []> > *__cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(
        std::_Tuple_impl<1,std::default_delete<int []> > *const this)
{
  std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(this);
  return this;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x13C78 */
int **__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
        std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13CA4 */
std::default_delete<int []> *__cdecl std::__get_helper<1u,std::default_delete<int []>>(
        std::_Tuple_impl<1,std::default_delete<int []> > *__t)
{
  return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13CCC */
int *const *__cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(
        const std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x13CF4 */
std::_Head_base<0,int*,false> *__cdecl std::_Head_base<0u,int *,false>::_Head_base<int *&>(
        std::_Head_base<0,int*,false> *const this,
        int **__h)
{
  this->_M_head_impl = *std::forward<int *&>(__h);
  return this;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x13D30 */
std::_Head_base<1,std::default_delete<int>,true> *__cdecl std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(
        std::_Head_base<1,std::default_delete<int>,true> *const this)
{
  return this;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x13D54 */
int **__cdecl std::_Head_base<0u,int *,false>::_M_head(std::_Head_base<0,int*,false> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x13D78 */
std::default_delete<int> *__cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(
        std::_Tuple_impl<1,std::default_delete<int> > *__t)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x13DA0 */
int *const *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
        const std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x13DCC */
std::_Head_base<1,std::default_delete<int []>,true> *__cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(
        std::_Head_base<1,std::default_delete<int []>,true> *const this)
{
  return this;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x13DF0 */
std::default_delete<int []> *__cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(
        std::_Tuple_impl<1,std::default_delete<int []> > *__t)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x13E18 */
int *const *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
        const std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x13E44 */
std::default_delete<int> *__cdecl std::_Head_base<1u,std::default_delete<int>,true>::_M_head(
        std::_Head_base<1,std::default_delete<int>,true> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 */
int *const *__cdecl std::_Head_base<0u,int *,false>::_M_head(const std::_Head_base<0,int*,false> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x13E8C */
std::default_delete<int []> *__cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(
        std::_Head_base<1,std::default_delete<int []>,true> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x13EB0 */
void *__cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  this->_vptr.RTTIBase = (int (**)(...))off_14464;
  RTTIBase::~RTTIBase(this);
  return this;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x13EEC */
void *__cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x13F20 */
void *__cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  this->_vptr.RTTIBase = (int (**)(...))off_14478;
  RTTIBase::~RTTIBase(this);
  return this;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x13F5C */
void *__cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this, 4u);
  return this;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x13F90 */
void *__cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  this->_vptr.MiddleA = (int (**)(...))&off_144A4;
  this->_vptr.MiddleB = (int (**)(...))&off_144D8;
  *(&this->dataA + 1) = (int)&off_144BC;
  MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 1), (const void **const)&off_144F0);
  MiddleA::~MiddleA(this, (const void **const)&_vtt_parm);
  VirtualBase::~VirtualBase((VirtualBase *const)&this->MiddleB);
  return this;
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x14028 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x14030 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x14044 */
void *__cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
  return this;
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x14078 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x14080 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr.MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x14094 */
void *__cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  this->_vptr.BaseA = (int (**)(...))&off_14584;
  this->_vptr.BaseB = (int (**)(...))&off_1459C;
  BaseB::~BaseB(&this->BaseB);
  BaseA::~BaseA(this);
  return this;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x140F0 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x140F8 */
void *__cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this, 0x10u);
  return this;
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1412C */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x14134 */
void *__cdecl Derived::~Derived(Derived *const this)
{
  this->_vptr.Base = (int (**)(...))&off_145D8;
  Base::~Base(this);
  return this;
}


/* Function: _ZN7DerivedD0Ev @ 0x14170 */
void *__cdecl Derived::~Derived(Derived *const this)
{
  Derived::~Derived(this);
  operator delete(this, 8u);
  return this;
}


/* Function: .term_proc @ 0x141A4 */
void term_proc()
{
  ;
}


/* FAILED to decompile: __aeabi_unwind_cpp_pr1 @ 0x250A8 */

/* FAILED to decompile: __aeabi_unwind_cpp_pr0 @ 0x250AC */

/* FAILED to decompile: __imp___cxa_end_catch @ 0x250B0 */

/* FAILED to decompile: __imp_strncpy @ 0x250B4 */

/* FAILED to decompile: __imp__ZdaPv @ 0x250B8 */

/* FAILED to decompile: __imp___aeabi_d2iz @ 0x250BC */

/* FAILED to decompile: __imp_abort @ 0x250C0 */

/* FAILED to decompile: __imp___cxa_throw @ 0x250C4 */

/* FAILED to decompile: __imp___libc_start_main @ 0x250C8 */

/* FAILED to decompile: __imp___cxa_end_cleanup @ 0x250CC */

/* FAILED to decompile: __imp___gxx_personality_v0 @ 0x250D0 */

/* FAILED to decompile: __imp___aeabi_atexit @ 0x250D4 */

/* FAILED to decompile: __imp___aeabi_dcmpgt @ 0x250D8 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitD1Ev @ 0x250DC */

/* FAILED to decompile: __imp___dynamic_cast @ 0x250E0 */

/* FAILED to decompile: __imp__ZNSt8ios_base4InitC1Ev @ 0x250E4 */

/* FAILED to decompile: __imp_strlen @ 0x250E8 */

/* FAILED to decompile: __imp__Znwj @ 0x250EC */

/* FAILED to decompile: __imp__ZNKSt9type_infoeqERKS_ @ 0x250F0 */

/* FAILED to decompile: __imp___cxa_begin_catch @ 0x250F4 */

/* FAILED to decompile: __imp_puts @ 0x250F8 */

/* FAILED to decompile: __imp__ZdlPvj @ 0x250FC */

/* FAILED to decompile: __imp___stack_chk_fail @ 0x25100 */

/* FAILED to decompile: __imp___cxa_bad_typeid @ 0x25104 */

/* FAILED to decompile: __imp___cxa_rethrow @ 0x25108 */

/* FAILED to decompile: __imp___cxa_allocate_exception @ 0x2510C */

/* FAILED to decompile: __imp_printf @ 0x25110 */

/* FAILED to decompile: __imp__Znaj @ 0x25114 */

/* FAILED to decompile: __imp___cxa_throw_bad_array_new_length @ 0x25118 */

/* FAILED to decompile: __imp___gmon_start__ @ 0x25120 */

/* Total functions decompiled: 204, failed: 30 */
