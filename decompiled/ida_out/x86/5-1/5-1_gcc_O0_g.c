/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/x86/5-1/5-1_gcc_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
  if ( &_gmon_start__ )
    ((void (*)(void))_gmon_start__)();
  frame_dummy();
  return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
  __asm { jmp     dword ptr [ebx+8] }
}


/* Function: sub_1040 @ 0x1040 */
void sub_1040()
{
  sub_1030();
}


/* Function: sub_1050 @ 0x1050 */
void sub_1050()
{
  sub_1030();
}


/* Function: sub_1060 @ 0x1060 */
void sub_1060()
{
  sub_1030();
}


/* Function: sub_1070 @ 0x1070 */
void sub_1070()
{
  sub_1030();
}


/* Function: sub_1080 @ 0x1080 */
void sub_1080()
{
  sub_1030();
}


/* Function: sub_1090 @ 0x1090 */
void sub_1090()
{
  sub_1030();
}


/* Function: sub_10A0 @ 0x10A0 */
void sub_10A0()
{
  sub_1030();
}


/* Function: sub_10B0 @ 0x10B0 */
void sub_10B0()
{
  sub_1030();
}


/* Function: sub_10C0 @ 0x10C0 */
void sub_10C0()
{
  sub_1030();
}


/* Function: sub_10D0 @ 0x10D0 */
void sub_10D0()
{
  sub_1030();
}


/* Function: sub_10E0 @ 0x10E0 */
void sub_10E0()
{
  sub_1030();
}


/* Function: sub_10F0 @ 0x10F0 */
void sub_10F0()
{
  sub_1030();
}


/* Function: sub_1100 @ 0x1100 */
void sub_1100()
{
  sub_1030();
}


/* Function: sub_1110 @ 0x1110 */
void sub_1110()
{
  sub_1030();
}


/* Function: sub_1120 @ 0x1120 */
void sub_1120()
{
  sub_1030();
}


/* Function: sub_1130 @ 0x1130 */
void sub_1130()
{
  sub_1030();
}


/* Function: sub_1140 @ 0x1140 */
void sub_1140()
{
  sub_1030();
}


/* Function: sub_1150 @ 0x1150 */
void sub_1150()
{
  sub_1030();
}


/* Function: sub_1160 @ 0x1160 */
void sub_1160()
{
  sub_1030();
}


/* Function: sub_1170 @ 0x1170 */
void sub_1170()
{
  sub_1030();
}


/* Function: sub_1180 @ 0x1180 */
void sub_1180()
{
  sub_1030();
}


/* Function: sub_1190 @ 0x1190 */
void sub_1190()
{
  sub_1030();
}


/* Function: sub_11A0 @ 0x11A0 */
int __usercall sub_11A0@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 + 104))();
}


/* Function: _start @ 0x1310 */
// positive sp value has been detected, the output may be wrong!
void __usercall __noreturn start(int a1@<eax>, void (*a2)(void)@<edx>)
{
  int v2; // esi
  int v3; // [esp-4h] [ebp-4h] BYREF
  char *retaddr; // [esp+0h] [ebp+0h] BYREF

  v2 = v3;
  v3 = a1;
  __libc_start_main((int (*)(int, char **, char **))main, v2, &retaddr, 0, 0, a2, &v3);
  __halt();
}


/* Function: sub_133C @ 0x133C */
void sub_133C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1340 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1350 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1390 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x13E0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_11A0((int)&GLOBAL_OFFSET_TABLE_);
    v0 = dtor_idx_0;
    for ( i = &_DTOR_END__ - _DTOR_LIST__ - 1; dtor_idx_0 < i; v0 = dtor_idx_0 )
    {
      dtor_idx_0 = v0 + 1;
      ((void (*)(void))_DTOR_LIST__[v0 + 1])();
    }
    deregister_tm_clones();
    _bss_start = 1;
  }
}


/* Function: frame_dummy @ 0x1470 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1479 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x147D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1482 */
__int64 test_cpp_member_func()
{
  __int64 result; // rax
  int r1; // [esp+Ch] [ebp-3Ch]
  int r2; // [esp+10h] [ebp-38h]
  SimpleClass obj; // [esp+18h] [ebp-30h] BYREF
  unsigned int v4; // [esp+3Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  SimpleClass::SimpleClass(&obj, 5, "Test");
  SimpleClass::setValue(&obj, 10);
  r1 = SimpleClass::getValue(&obj);
  r2 = SimpleClass::compute(&obj, 3);
  LODWORD(result) = r2 + r1 + SimpleClass::getClassID();
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x1519 */
__int64 test_cpp_constructor()
{
  __int64 v0; // rax
  int result; // [esp+0h] [ebp-18h]
  int resulta; // [esp+0h] [ebp-18h]
  LifecycleClass obj; // [esp+4h] [ebp-14h] BYREF
  unsigned int v4; // [esp+Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  LifecycleClass::LifecycleClass(&obj, 5u);
  result = LifecycleClass::getData(&obj, 2u);
  resulta = LifecycleClass::getInstanceCount() + result;
  LifecycleClass::~LifecycleClass(&obj);
  LODWORD(v0) = 1000 * LifecycleClass::getInstanceCount() + resulta;
  HIDWORD(v0) = v4 - __readgsdword(0x14u);
  return v0;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x159F */
int __cdecl call_virtual_func(Base *obj, int x)
{
  return (*obj->_vptr_Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x15CA */
__int64 test_cpp_virtual_func()
{
  int v0; // ebx
  __int64 result; // rax
  Base base; // [esp+8h] [ebp-30h] BYREF
  int r1; // [esp+Ch] [ebp-2Ch]
  int r2; // [esp+10h] [ebp-28h]
  Base *pb; // [esp+14h] [ebp-24h]
  Base *pd; // [esp+18h] [ebp-20h]
  int r3; // [esp+1Ch] [ebp-1Ch]
  int r4; // [esp+20h] [ebp-18h]
  Derived derived; // [esp+24h] [ebp-14h] BYREF
  unsigned int v10; // [esp+2Ch] [ebp-Ch]

  v10 = __readgsdword(0x14u);
  base._vptr_Base = (int (**)(...))&off_8DA8;
  Derived::Derived(&derived, 3);
  r1 = Base::virtual_func(&base, 5);
  r2 = Derived::virtual_func(&derived, 5);
  pb = &base;
  pd = &derived;
  r3 = call_virtual_func(&base, 5);
  r4 = call_virtual_func(pd, 5);
  v0 = r3 + r2 + r1 + r4;
  Derived::~Derived(&derived);
  Base::~Base(&base);
  LODWORD(result) = v0;
  HIDWORD(result) = v10 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x16DE */
__int64 test_cpp_multiple_inheritance()
{
  int v0; // ebx
  __int64 result; // rax
  int r1; // [esp+10h] [ebp-28h]
  MultiDerived obj; // [esp+1Ch] [ebp-1Ch] BYREF
  unsigned int v4; // [esp+2Ch] [ebp-Ch]

  v4 = __readgsdword(0x14u);
  MultiDerived::MultiDerived(&obj);
  obj.dataA = 100;
  obj.dataB = 200;
  r1 = (*obj._vptr_BaseA)(&obj);
  v0 = (*obj._vptr_BaseB)(&obj.BaseB) + r1 + (&obj != (MultiDerived *)&obj.BaseB);
  MultiDerived::~MultiDerived(&obj);
  LODWORD(result) = v0;
  HIDWORD(result) = v4 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x17C0 */
__int64 test_cpp_diamond_inheritance()
{
  int v0; // ebx
  __int64 result; // rax
  int r1; // [esp+Ch] [ebp-2Ch]
  DiamondDerived obj; // [esp+14h] [ebp-24h] BYREF

  *(&obj.dataB + 1) = __readgsdword(0x14u);
  DiamondDerived::DiamondDerived(&obj);
  obj.dataB = 50;
  r1 = (*obj._vptr_MiddleB)(&obj.MiddleB);
  obj.dataB = 100;
  v0 = r1 + (*obj._vptr_MiddleB)(&obj.MiddleB);
  DiamondDerived::~DiamondDerived(&obj);
  LODWORD(result) = v0;
  HIDWORD(result) = *(&obj.dataB + 1) - __readgsdword(0x14u);
  return result;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1888 */
__int64 test_cpp_operator_overload()
{
  int v0; // edx
  __int64 result; // rax
  bool eq; // [esp+3h] [ebp-25h]
  Point p1; // [esp+4h] [ebp-24h] BYREF
  Point p2; // [esp+Ch] [ebp-1Ch] BYREF
  Point p3; // [esp+14h] [ebp-14h] BYREF
  unsigned int v6; // [esp+1Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  Point::Point(&p1, 1, 2);
  Point::Point(&p2, 3, 4);
  Point::operator+(&p3, &p1, &p2);
  eq = Point::operator==(&p1, &p2);
  Point::operator++(&p3);
  if ( eq )
    v0 = 0;
  else
    v0 = 10;
  LODWORD(result) = v0 + p3.x + p3.y;
  HIDWORD(result) = v6 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1938 */
__int64 test_cpp_template_func()
{
  __int64 result; // rax
  int a; // [esp+14h] [ebp-24h] BYREF
  int b; // [esp+18h] [ebp-20h] BYREF
  int r1; // [esp+1Ch] [ebp-1Ch]
  double r2; // [esp+20h] [ebp-18h]
  unsigned int v5; // [esp+2Ch] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  r1 = template_max<int>(3, 7);
  r2 = template_max<double>(2.5, 1.5);
  a = 10;
  b = 20;
  template_swap<int>(&a, &b);
  LODWORD(result) = a + r1 + (int)r2 + b;
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x19F3 */
__int64 test_cpp_template_class()
{
  __int64 result; // rax
  int r1; // [esp+18h] [ebp-A0h]
  int r2; // [esp+1Ch] [ebp-9Ch]
  Container<int> int_container; // [esp+2Ch] [ebp-8Ch] BYREF
  Container<double> double_container; // [esp+58h] [ebp-60h] BYREF
  unsigned int v5; // [esp+ACh] [ebp-Ch]

  v5 = __readgsdword(0x14u);
  Container<int>::Container(&int_container);
  Container<int>::push(&int_container, 10);
  Container<int>::push(&int_container, 20);
  Container<int>::push(&int_container, 30);
  r1 = Container<int>::get(&int_container, 0);
  r2 = Container<int>::getSize(&int_container);
  Container<double>::Container(&double_container);
  Container<double>::push(&double_container, 3.14);
  LODWORD(result) = r2 + r1 + (int)Container<double>::get(&double_container, 0);
  HIDWORD(result) = v5 - __readgsdword(0x14u);
  return result;
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1B34 */
int __cdecl test_cpp_lambda(void)::{lambda(int)#1}::operator()(
        const const struct {int __capture_by_value;int *__capture_by_ref;} *const __closure,
        int x)
{
  *__closure->__capture_by_ref += 5;
  return x * __closure->__capture_by_value + *__closure->__capture_by_ref;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B6B */
// local variable allocation has failed, the output may be wrong!
__int64 test_cpp_lambda()
{
  __int64 result; // rax
  int capture_by_ref; // [esp+4h] [ebp-24h] BYREF
  int capture_by_value; // [esp+8h] [ebp-20h]
  int r1; // [esp+Ch] [ebp-1Ch]
  int lambda2; // [esp+14h] [ebp-14h] OVERLAPPED BYREF
  int *p_capture_by_ref; // [esp+18h] [ebp-10h]
  unsigned int v6; // [esp+1Ch] [ebp-Ch]

  v6 = __readgsdword(0x14u);
  capture_by_value = 10;
  capture_by_ref = 20;
  lambda2 = 10;
  p_capture_by_ref = &capture_by_ref;
  r1 = test_cpp_lambda(void)::{lambda(int)#1}::operator()(
         (const const struct {int __capture_by_value;int *__capture_by_ref;} *const)&lambda2,
         3);
  LODWORD(result) = r1 + 30;
  HIDWORD(result) = v6 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BD7 */
void __noreturn test_cpp_exception()
{
  _DWORD *exception; // eax

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1D26 */
void __cdecl test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(
        const const struct {_BYTE gap0;} *const __closure,
        int *p)
{
  *p = -1;
  if ( p )
    operator delete(p, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D5E */
__int64 test_cpp_smart_ptr()
{
  int *v0; // eax
  std::remove_reference<std::unique_ptr<int>&>::type *v1; // eax
  int *v2; // edx
  int *v3; // eax
  int v4; // ebx
  __int64 result; // rax
  $44B1EA910F358000232221CCB0AF3F67 deleter; // [esp+Fh] [ebp-29h] BYREF
  std::unique_ptr<int> ptr2; // [esp+10h] [ebp-28h] BYREF
  std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > ptr3; // [esp+18h] [ebp-20h] BYREF
  int r1; // [esp+20h] [ebp-18h]
  int r2; // [esp+24h] [ebp-14h]
  int r3; // [esp+28h] [ebp-10h]
  unsigned int v12; // [esp+2Ch] [ebp-Ch]

  v12 = __readgsdword(0x14u);
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
  v4 = r2 + r1 + r3;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr((std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const)&ptr3._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int []>::~unique_ptr((std::unique_ptr<int []> *const)&ptr3);
  std::unique_ptr<int>::~unique_ptr((std::unique_ptr<int> *const)&ptr2._M_t._M_t.std::_Head_base<0,int*,false>);
  std::unique_ptr<int>::~unique_ptr(&ptr2);
  LODWORD(result) = v4;
  HIDWORD(result) = v12 - __readgsdword(0x14u);
  return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x1F3B */
int test_cpp_rtti()
{
  RTTIDerivedA *v0; // esi
  RTTIDerivedB *v1; // esi
  const RTTIDerivedA *v2; // eax
  const RTTIDerivedB *v3; // eax
  const char *v4; // eax
  int result; // [esp+Ch] [ebp-1Ch]
  int resulta; // [esp+Ch] [ebp-1Ch]
  RTTIBase *obj1; // [esp+10h] [ebp-18h]

  v0 = (RTTIDerivedA *)operator new(4u);
  v0->_vptr_RTTIBase = 0;
  RTTIDerivedA::RTTIDerivedA(v0);
  obj1 = v0;
  v1 = (RTTIDerivedB *)operator new(4u);
  v1->_vptr_RTTIBase = 0;
  RTTIDerivedB::RTTIDerivedB(v1);
  result = 0;
  if ( !obj1 )
    __cxa_bad_typeid();
  if ( std::type_info::operator==(
         *((const std::type_info *const *)obj1->_vptr_RTTIBase - 1),
         (const std::type_info *)&`typeinfo for'RTTIDerivedA) )
  {
    result = 10;
  }
  if ( !v1 )
    __cxa_bad_typeid();
  if ( std::type_info::operator==(
         *((const std::type_info *const *)v1->_vptr_RTTIBase - 1),
         (const std::type_info *)&`typeinfo for'RTTIDerivedB) )
  {
    result += 20;
  }
  v2 = (const RTTIDerivedA *)__dynamic_cast(
                               obj1,
                               (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                               (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                               0);
  if ( v2 )
    result += RTTIDerivedA::derivedA_data(v2);
  v3 = (const RTTIDerivedB *)__dynamic_cast(
                               v1,
                               (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                               (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                               0);
  if ( v3 )
    result += RTTIDerivedB::derivedB_data(v3);
  v4 = std::type_info::name(*((const std::type_info *const *)obj1->_vptr_RTTIBase - 1));
  resulta = result + strlen(v4);
  (*((void (__cdecl **)(RTTIBase *))obj1->_vptr_RTTIBase + 1))(obj1);
  (*((void (__cdecl **)(RTTIDerivedB *))v1->_vptr_RTTIBase + 1))(v1);
  return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x20EA */
void __noreturn test_cpp_oo_features()
{
  int v0; // eax
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  puts(asc_503C);
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


/* Function: main @ 0x2238 */
int __cdecl __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: std::__uniq_ptr_data_int_test_cpp_smart_ptr()::_lambda(int_)__true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr()::_lambda(int_)_&_ @ 0x2258 */
void __cdecl std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
        std::__uniq_ptr_data<int,test_cpp_smart_ptr()::<lambda(int*)>,true,false> *const this,
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __p,
        const const struct {_BYTE gap0;} *a3)
{
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
    this,
    __p,
    a3);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x2282 */
void __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __p,
        const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *__d)
{
  std::__uniq_ptr_data_int_test_cpp_smart_ptr__::_lambda_int____true_false_::__uniq_ptr_data_const_test_cpp_smart_ptr__::_lambda_int_____(
    &this->_M_t,
    __p,
    __d);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x22AA */
void __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *deleter; // ebx
  int **v2; // eax
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer *__ptr; // [esp+Ch] [ebp-Ch]

  __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(this);
    v2 = std::move<int *&>(__ptr);
    test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
  }
  *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x2312 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(
        const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x233A */
void __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __p,
        const const struct {_BYTE gap0;} *__d)
{
  const const struct {_BYTE gap0;} *v3; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__d);
  std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
    &this->_M_t,
    &__p,
    v3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2374 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x2396 */
std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(
        std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return (std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x23B8 */
std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(
        const std::unique_ptr<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(&this->_M_t);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x23D9 */
const const struct {_BYTE gap0;} *__cdecl std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *__t)
{
  return (const const struct {_BYTE gap0;} *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x23EC */
void __cdecl std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
        std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        int **__a1,
        const const struct {_BYTE gap0;} *__a2)
{
  const const struct {_BYTE gap0;} *v3; // ebx
  int **v4; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__a2);
  v4 = std::forward<int *&>(__a1);
  std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
    this,
    v4,
    v3);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x242F */
std::__tuple_element_t_1 *__cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x2450 */
struct {_BYTE gap0;} *__cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(
        std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return (struct {_BYTE gap0;} *)std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x2472 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> >::pointer __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(
        const std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::<lambda(int*)> > *const this)
{
  return *std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2496 */
void __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
        std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        int **__head,
        const const struct {_BYTE gap0;} *__t)
{
  const const struct {_BYTE gap0;} *v3; // eax
  int **v4; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>((std::remove_reference<const test_cpp_smart_ptr()::<lambda(int*)>&>::type *)__t);
  std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(this, v3);
  v4 = std::forward<int *&>(__head);
  std::_Head_base<0u,int *,false>::_Head_base<int *&>((std::_Head_base<0,int*,false> *const)this, v4);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x24E5 */
int **__cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2505 */
std::__tuple_element_t *__cdecl std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return (std::__tuple_element_t *)std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(__t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2525 */
const std::__tuple_element_t_1 *__cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        const std::tuple<int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x2546 */
void __cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(
        std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *const this,
        const const struct {_BYTE gap0;} *__head)
{
  std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(this, __head);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x256A */
int **__cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
        std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: std::__get_helper_1_test_cpp_smart_ptr()::_lambda(int_)___ @ 0x258B */
struct {_BYTE gap0;} *__cdecl std::__get_helper_1_test_cpp_smart_ptr__::_lambda_int_____(
        std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x25AB */
int *const *__cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(
        const std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x25CC */
void __cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(
        std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *const this,
        const const struct {_BYTE gap0;} *__h)
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x25DC */
struct {_BYTE gap0;} *__cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
        std::_Tuple_impl<1,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x25FC */
int *const *__cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(
        const std::_Tuple_impl<0,int*,test_cpp_smart_ptr()::<lambda(int*)> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x261D */
struct {_BYTE gap0;} *__cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(
        std::_Head_base<1,test_cpp_smart_ptr()::<lambda(int*)>,true> *__b)
{
  return (struct {_BYTE gap0;} *)__b;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x262F */
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  if ( __initialize_p == 1 && __priority == 0xFFFF )
  {
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
  }
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x268C */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x26B4 */
const char *__cdecl std::type_info::name(const std::type_info *const this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return (const char *)(*((_DWORD *)this + 1) + 1);
  else
    return (const char *)*((_DWORD *)this + 1);
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x26E6 */
bool __cdecl std::type_info::operator==(const std::type_info *const this, const std::type_info *__arg)
{
  return *((_DWORD *)this + 1) == *((_DWORD *)__arg + 1)
      || **((_BYTE **)this + 1) != 42 && !strcmp(*((const char **)this + 1), *((const char **)__arg + 1));
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x274A */
void __cdecl SimpleClass::SimpleClass(SimpleClass *const this, int v, const char *n)
{
  this->value = v;
  strncpy(this->name, n, 0x1Fu);
  this->name[31] = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x278E */
int __cdecl SimpleClass::getValue(const SimpleClass *const this)
{
  return this->value;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x27A6 */
void __cdecl SimpleClass::setValue(SimpleClass *const this, int v)
{
  this->value = v;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x27C2 */
int __cdecl SimpleClass::compute(const SimpleClass *const this, int x)
{
  int v2; // esi

  v2 = x * this->value;
  return v2 + strlen(this->name);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x27FD */
int SimpleClass::getClassID()
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2816 */
void __cdecl LifecycleClass::LifecycleClass(LifecycleClass *const this, size_t s)
{
  size_t i; // [esp+Ch] [ebp-Ch]

  this->size = s;
  if ( s > 0x1FFFFFFF )
    __cxa_throw_bad_array_new_length();
  this->data = (int *)operator new[](4 * s);
  for ( i = 0; i < s; ++i )
    this->data[i] = 10 * i;
  ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x28A4 */
void __cdecl LifecycleClass::~LifecycleClass(LifecycleClass *const this)
{
  if ( this->data )
    operator delete[](this->data);
  --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x28EA */
int __cdecl LifecycleClass::getData(const LifecycleClass *const this, size_t idx)
{
  if ( idx >= this->size )
    return -1;
  else
    return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x291E */
int LifecycleClass::getInstanceCount()
{
  return LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2938 */
int __cdecl Base::virtual_func(Base *const this, int x)
{
  return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x2952 */
const char *__cdecl Base::getName(const Base *const this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x296C */
void __cdecl Base::~Base(Base *const this)
{
  this->_vptr_Base = (int (**)(...))&off_8DA8;
}


/* Function: _ZN4BaseD0Ev @ 0x298C */
void __cdecl Base::~Base(Base *const this)
{
  Base::~Base(this);
  operator delete(this, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x29C6 */
void __cdecl Base::Base(Base *const this)
{
  this->_vptr_Base = (int (**)(...))&off_8DA8;
}


/* Function: _ZN7DerivedC2Ei @ 0x29E6 */
void __cdecl Derived::Derived(Derived *const this, int m)
{
  Base::Base(this);
  this->_vptr_Base = (int (**)(...))&off_8D90;
  this->multiplier = m;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2A26 */
int __cdecl Derived::virtual_func(Derived *const this, int x)
{
  return x * this->multiplier;
}


/* Function: _ZNK7Derived7getNameEv @ 0x2A44 */
const char *__cdecl Derived::getName(const Derived *const this)
{
  return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x2A5E */
int __cdecl BaseA::funcA(BaseA *const this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x2A76 */
void __cdecl BaseA::~BaseA(BaseA *const this)
{
  this->_vptr_BaseA = (int (**)(...))&off_8D7C;
}


/* Function: _ZN5BaseAD0Ev @ 0x2A96 */
void __cdecl BaseA::~BaseA(BaseA *const this)
{
  BaseA::~BaseA(this);
  operator delete(this, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x2AD0 */
int __cdecl BaseB::funcB(BaseB *const this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x2AE8 */
void __cdecl BaseB::~BaseB(BaseB *const this)
{
  this->_vptr_BaseB = (int (**)(...))&off_8D68;
}


/* Function: _ZN5BaseBD0Ev @ 0x2B08 */
void __cdecl BaseB::~BaseB(BaseB *const this)
{
  BaseB::~BaseB(this);
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x2B42 */
int __cdecl MultiDerived::funcA(MultiDerived *const this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x2B5A */
int __cdecl MultiDerived::funcB(MultiDerived *const this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x2B72 */
int __cdecl `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return MultiDerived::funcB((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x2B7E */
void __cdecl BaseA::BaseA(BaseA *const this)
{
  this->_vptr_BaseA = (int (**)(...))&off_8D7C;
}


/* Function: _ZN5BaseBC2Ev @ 0x2B9E */
void __cdecl BaseB::BaseB(BaseB *const this)
{
  this->_vptr_BaseB = (int (**)(...))&off_8D68;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2BBE */
void __cdecl MultiDerived::MultiDerived(MultiDerived *const this)
{
  BaseA::BaseA(this);
  BaseB::BaseB(&this->BaseB);
  this->_vptr_BaseA = (int (**)(...))&off_8D3C;
  this->_vptr_BaseB = (int (**)(...))&off_8D54;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x2C12 */
int __cdecl VirtualBase::func(VirtualBase *const this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x2C2A */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *const this)
{
  this->_vptr_VirtualBase = (int (**)(...))&off_8D28;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x2C4A */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *const this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x2C84 */
int __cdecl MiddleA::func(MiddleA *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x2CB0 */
int __cdecl `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x2CC4 */
int __cdecl MiddleB::func(MiddleB *const this)
{
  return *(int *)((char *)&this->dataB + *((_DWORD *)this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x2CF0 */
int __cdecl `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *((_DWORD *)this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x2D04 */
int __cdecl DiamondDerived::func(DiamondDerived *const this)
{
  return *(int *)((char *)&this->dataA + *((_DWORD *)this->_vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x2D30 */
int __cdecl `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x2D43 */
int __cdecl `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x2D4E */
void __cdecl VirtualBase::VirtualBase(VirtualBase *const this)
{
  this->_vptr_VirtualBase = (int (**)(...))&off_8D28;
}


/* Function: _ZN7MiddleAC2Ev @ 0x2D6E */
void __cdecl MiddleA::MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr_MiddleA + *((_DWORD *)this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x2DA6 */
void __cdecl MiddleA::~MiddleA(MiddleA *const this, const void **const __vtt_parm)
{
  this->_vptr_MiddleA = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr_MiddleA + *((_DWORD *)this->_vptr_MiddleA - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x2DDE */
void __cdecl MiddleB::MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr_MiddleB + *((_DWORD *)this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x2E16 */
void __cdecl MiddleB::~MiddleB(MiddleB *const this, const void **const __vtt_parm)
{
  this->_vptr_MiddleB = (int (**)(...))*__vtt_parm;
  *(int (***)(...))((char *)&this->_vptr_MiddleB + *((_DWORD *)this->_vptr_MiddleB - 3)) = (int (**)(...))__vtt_parm[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E4E */
void __cdecl DiamondDerived::DiamondDerived(DiamondDerived *const this)
{
  VirtualBase::VirtualBase((VirtualBase *const)&this->MiddleB);
  MiddleA::MiddleA(this, (const void **const)off_8CA0);
  MiddleB::MiddleB((MiddleB *const)(&this->dataA + 1), (const void **const)off_8CA8);
  this->_vptr_MiddleA = (int (**)(...))&off_8C5C;
  this->_vptr_MiddleB = (int (**)(...))&off_8C90;
  *(&this->dataA + 1) = (int)&off_8C74;
}


/* Function: _ZN5PointC2Eii @ 0x2ED0 */
void __cdecl Point::Point(Point *const this, int _x, int _y)
{
  this->x = _x;
  this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x2EF6 */
Point *__userpurge Point::operator+@<eax>(Point *__return_ptr retstr, const Point *const this, const Point *other)
{
  Point::Point(retstr, this->x + other->x, other->y + this->y);
  return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2F3C */
bool __cdecl Point::operator==(const Point *const this, const Point *other)
{
  return this->x == other->x && this->y == other->y;
}


/* Function: _ZN5PointppEv @ 0x2F7A */
Point *__cdecl Point::operator++(Point *const this)
{
  ++this->x;
  ++this->y;
  return this;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x2FAC */
int __cdecl template_max<int>(int a, int b)
{
  if ( a <= b )
    return b;
  else
    return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x2FCF */
double __cdecl template_max<double>(double a, double b)
{
  if ( a <= (long double)b )
    return b;
  else
    return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x3011 */
void __cdecl template_swap<int>(int *a, int *b)
{
  int temp; // [esp+Ch] [ebp-4h]

  temp = *a;
  *a = *b;
  *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x3042 */
void __cdecl Container<int>::Container(Container<int> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3060 */
void __cdecl Container<int>::push(Container<int> *const this, int value)
{
  int size; // eax

  if ( this->size <= 9 )
  {
    size = this->size;
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x309C */
int __cdecl Container<int>::get(const Container<int> *const this, int idx)
{
  if ( idx < 0 || idx >= this->size )
    return 0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x30D0 */
int __cdecl Container<int>::getSize(const Container<int> *const this)
{
  return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x30EA */
void __cdecl Container<double>::Container(Container<double> *const this)
{
  this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x3108 */
void __cdecl Container<double>::push(Container<double> *const this, double value)
{
  int size; // eax

  if ( this->size <= 9 )
  {
    size = this->size;
    this->size = size + 1;
    this->data[size] = value;
  }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x314E */
double __cdecl Container<double>::get(const Container<double> *const this, int idx)
{
  if ( idx < 0 || idx >= this->size )
    return 0.0;
  else
    return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3180 */
int __cdecl Container<double>::getSize(const Container<double> *const this)
{
  return this->size;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x319A */
void __cdecl std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *const this,
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x31C4 */
void __cdecl std::unique_ptr<int>::unique_ptr(std::unique_ptr<int> *const this, std::unique_ptr<int> *a2)
{
  std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x31EE */
int __cdecl RTTIBase::getType(const RTTIBase *const this)
{
  return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x3206 */
int __cdecl RTTIDerivedA::getType(const RTTIDerivedA *const this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x321E */
int __cdecl RTTIDerivedA::derivedA_data(const RTTIDerivedA *const this)
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x3236 */
int __cdecl RTTIDerivedB::getType(const RTTIDerivedB *const this)
{
  return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x324E */
int __cdecl RTTIDerivedB::derivedB_data(const RTTIDerivedB *const this)
{
  return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x3266 */
void __cdecl RTTIBase::RTTIBase(RTTIBase *const this)
{
  this->_vptr_RTTIBase = (int (**)(...))off_8C44;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x3286 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *const this)
{
  this->_vptr_RTTIBase = (int (**)(...))off_8C44;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x32A6 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *const this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x32E0 */
void __cdecl RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *const this)
{
  RTTIBase::RTTIBase(this);
  this->_vptr_RTTIBase = (int (**)(...))off_8C30;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3316 */
void __cdecl RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *const this)
{
  RTTIBase::RTTIBase(this);
  this->_vptr_RTTIBase = (int (**)(...))off_8C1C;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x334C */
void __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
        std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3376 */
void __cdecl std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(
        std::unique_ptr<int> *const this,
        std::unique_ptr<int>::pointer __p)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x33A0 */
void __cdecl std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *const this)
{
  std::unique_ptr<int>::deleter_type *deleter; // ebx
  int **v2; // eax
  std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__ptr; // [esp+Ch] [ebp-Ch]

  __ptr = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int>::get_deleter(this);
    v2 = std::move<int *&>(__ptr);
    std::default_delete<int>::operator()(deleter, *v2);
  }
  *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x340C */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int>::operator*(
        const std::unique_ptr<int> *const this)
{
  return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3437 */
std::remove_reference<std::unique_ptr<int>&>::type *__cdecl std::move<std::unique_ptr<int> &>(
        std::unique_ptr<int> *__t)
{
  return __t;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x344E */
void __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *const this,
        std::_Tuple_impl<0,int*,std::default_delete<int> > *a2)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this, a2);
  *(_DWORD *)&this->std::_Tuple_impl<1,std::default_delete<int> >::std::_Head_base<1,std::default_delete<int>,true>::_M_head_impl.gap0 = *(_DWORD *)&a2->std::_Tuple_impl<1,std::default_delete<int> >::std::_Head_base<1,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3480 */
void __cdecl std::tuple<int *,std::default_delete<int>>::tuple(
        std::tuple<int*,std::default_delete<int> > *const this,
        std::tuple<int*,std::default_delete<int> > *a2)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x34AA */
void __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
  std::tuple<int*,std::default_delete<int> > *v2; // eax

  v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
  std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
  *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x34F8 */
void __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
        std::__uniq_ptr_data<int,std::default_delete<int []>,true,true> *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer __p)
{
  std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3522 */
void __cdecl std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(
        std::unique_ptr<int []> *const this,
        int *__p)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x354C */
void __cdecl std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int []> *const this)
{
  std::unique_ptr<int []>::deleter_type *deleter; // eax
  std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer *__ptr; // [esp+Ch] [ebp-Ch]

  __ptr = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
  if ( *__ptr )
  {
    deleter = std::unique_ptr<int []>::get_deleter(this);
    std::default_delete<int []>::operator()<int>(deleter, *__ptr);
  }
  *__ptr = 0;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x35A8 */
std::__add_lvalue_reference_helper<int,true>::type __cdecl std::unique_ptr<int []>::operator[](
        const std::unique_ptr<int []> *const this,
        std::size_t __i)
{
  return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x35DE */
void __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
  *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x361C */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
  return std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x3642 */
std::unique_ptr<int>::deleter_type *__cdecl std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x3667 */
std::remove_reference<int*&>::type *__cdecl std::move<int *&>(int **__t)
{
  return __t;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x367E */
void __cdecl std::default_delete<int>::operator()(const std::default_delete<int> *const this, int *__ptr)
{
  if ( __ptr )
    operator delete(__ptr, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x36B2 */
std::unique_ptr<int>::pointer __cdecl std::unique_ptr<int>::get(const std::unique_ptr<int> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x36D7 */
std::remove_reference<std::tuple<int*,std::default_delete<int> >&>::type *__cdecl std::move<std::tuple<int *,std::default_delete<int>> &>(
        std::tuple<int*,std::default_delete<int> > *__t)
{
  return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x36EE */
void __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<1,std::default_delete<int> > *const this,
        std::_Tuple_impl<1,std::default_delete<int> > *__in)
{
  ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x3702 */
void __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
        std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this,
        std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer __p)
{
  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
  *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x3740 */
std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
        std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
  return std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x3766 */
std::unique_ptr<int []>::deleter_type *__cdecl std::unique_ptr<int []>::get_deleter(
        std::unique_ptr<int []> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x378C */
void __cdecl std::default_delete<int []>::operator()<int>(const std::default_delete<int []> *const this, int *__ptr)
{
  if ( __ptr )
    operator delete[](__ptr);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x37BE */
std::unique_ptr<int []>::pointer __cdecl std::unique_ptr<int []>::get(const std::unique_ptr<int []> *const this)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x37E4 */
void __cdecl std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
        std::tuple<int*,std::default_delete<int> > *const this)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x380A */
std::__tuple_element_t *__cdecl std::get<0u,int *,std::default_delete<int>>(
        std::tuple<int*,std::default_delete<int> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x3830 */
std::default_delete<int> *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
        std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
  return (std::default_delete<int> *)std::get<1u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3856 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
        const std::__uniq_ptr_impl<int,std::default_delete<int> > *const this)
{
  return *std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x387E */
void __cdecl std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
        std::tuple<int*,std::default_delete<int []> > *const this)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x38A4 */
std::__tuple_element_t_0 *__cdecl std::get<0u,int *,std::default_delete<int []>>(
        std::tuple<int*,std::default_delete<int []> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x38CA */
std::default_delete<int []> *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
        std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
  return (std::default_delete<int []> *)std::get<1u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x38F0 */
std::__uniq_ptr_impl<int,std::default_delete<int []> >::pointer __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
        const std::__uniq_ptr_impl<int,std::default_delete<int []> > *const this)
{
  return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x3918 */
void __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *const this)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this);
  std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0,int*,false> *const)this);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x394C */
int **__cdecl std::__get_helper<0u,int *,std::default_delete<int>>(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x3970 */
std::__tuple_element_t *__cdecl std::get<1u,int *,std::default_delete<int>>(
        std::tuple<int*,std::default_delete<int> > *__t)
{
  return (std::__tuple_element_t *)std::__get_helper<1u,std::default_delete<int>>(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x3994 */
const std::__tuple_element_t *__cdecl std::get<0u,int *,std::default_delete<int>>(
        const std::tuple<int*,std::default_delete<int> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x39BA */
void __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(
        std::_Tuple_impl<0,int*,std::default_delete<int []> > *const this)
{
  std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(this);
  std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0,int*,false> *const)this);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x39EE */
int **__cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(
        std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x3A12 */
std::__tuple_element_t *__cdecl std::get<1u,int *,std::default_delete<int []>>(
        std::tuple<int*,std::default_delete<int []> > *__t)
{
  return (std::__tuple_element_t *)std::__get_helper<1u,std::default_delete<int []>>(__t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x3A36 */
const std::__tuple_element_t_0 *__cdecl std::get<0u,int *,std::default_delete<int []>>(
        const std::tuple<int*,std::default_delete<int []> > *__t)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x3A5B */
int **__cdecl std::forward<int *&>(std::remove_reference<int*&>::type *__t)
{
  return __t;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x3A72 */
void __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
        std::_Tuple_impl<1,std::default_delete<int> > *const this)
{
  std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x3A98 */
void __cdecl std::_Head_base<0u,int *,false>::_Head_base(std::_Head_base<0,int*,false> *const this)
{
  this->_M_head_impl = 0;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x3AB5 */
int **__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
        std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x3ADA */
std::default_delete<int> *__cdecl std::__get_helper<1u,std::default_delete<int>>(
        std::_Tuple_impl<1,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3AFE */
int *const *__cdecl std::__get_helper<0u,int *,std::default_delete<int>>(
        const std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x3B22 */
void __cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(
        std::_Tuple_impl<1,std::default_delete<int []> > *const this)
{
  std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x3B47 */
int **__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
        std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x3B6C */
std::default_delete<int []> *__cdecl std::__get_helper<1u,std::default_delete<int []>>(
        std::_Tuple_impl<1,std::default_delete<int []> > *__t)
{
  return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x3B90 */
int *const *__cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(
        const std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x3BB4 */
void __cdecl std::_Head_base<0u,int *,false>::_Head_base<int *&>(std::_Head_base<0,int*,false> *const this, int **__h)
{
  this->_M_head_impl = *std::forward<int *&>(__h);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x3BE0 */
void __cdecl std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(
        std::_Head_base<1,std::default_delete<int>,true> *const this)
{
  ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x3BF4 */
int **__cdecl std::_Head_base<0u,int *,false>::_M_head(std::_Head_base<0,int*,false> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x3C0A */
std::default_delete<int> *__cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(
        std::_Tuple_impl<1,std::default_delete<int> > *__t)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x3C2E */
int *const *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
        const std::_Tuple_impl<0,int*,std::default_delete<int> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x3C54 */
void __cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(
        std::_Head_base<1,std::default_delete<int []>,true> *const this)
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x3C68 */
std::default_delete<int []> *__cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(
        std::_Tuple_impl<1,std::default_delete<int []> > *__t)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x3C8C */
int *const *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
        const std::_Tuple_impl<0,int*,std::default_delete<int []> > *__t)
{
  return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0,int*,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x3CB1 */
std::default_delete<int> *__cdecl std::_Head_base<1u,std::default_delete<int>,true>::_M_head(
        std::_Head_base<1,std::default_delete<int>,true> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x3CC7 */
int *const *__cdecl std::_Head_base<0u,int *,false>::_M_head(const std::_Head_base<0,int*,false> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x3CDD */
std::default_delete<int []> *__cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(
        std::_Head_base<1,std::default_delete<int []>,true> *__b)
{
  return &__b->_M_head_impl;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x3CF4 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  this->_vptr_RTTIBase = (int (**)(...))off_8C1C;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x3D26 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *const this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x3D60 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  this->_vptr_RTTIBase = (int (**)(...))off_8C30;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x3D92 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *const this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x3DCC */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  this->_vptr_MiddleA = (int (**)(...))&off_8C5C;
  this->_vptr_MiddleB = (int (**)(...))&off_8C90;
  *(&this->dataA + 1) = (int)&off_8C74;
  MiddleB::~MiddleB((MiddleB *const)(&this->dataA + 1), (const void **const)off_8CA8);
  MiddleA::~MiddleA(this, (const void **const)off_8CA0);
  VirtualBase::~VirtualBase((VirtualBase *const)&this->MiddleB);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3E4E */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3E5C */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3E72 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *const this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3EAB */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3EB6 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *((_DWORD *)this->_vptr_MiddleA - 4)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x3ECA */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  this->_vptr_BaseA = (int (**)(...))&off_8D3C;
  this->_vptr_BaseB = (int (**)(...))&off_8D54;
  BaseB::~BaseB(&this->BaseB);
  BaseA::~BaseA(this);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3F19 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x3F24 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *const this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3F5D */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x3F68 */
void __cdecl Derived::~Derived(Derived *const this)
{
  this->_vptr_Base = (int (**)(...))&off_8D90;
  Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x3F9A */
void __cdecl Derived::~Derived(Derived *const this)
{
  Derived::~Derived(this);
  operator delete(this, 8u);
}


/* Function: __x86.get_pc_thunk.ax @ 0x3FD3 */
void *_x86_get_pc_thunk_ax()
{
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h]

  return retaddr;
}


/* Function: __x86.get_pc_thunk.si @ 0x3FD7 */
void _x86_get_pc_thunk_si()
{
  ;
}


/* Function: __stack_chk_fail_local @ 0x3FE0 */
void __noreturn _stack_chk_fail_local()
{
  __asm { add     ebx, (offset _GLOBAL_OFFSET_TABLE_ - $) }
}


/* Function: __do_global_ctors_aux @ 0x4000 */
void (*_do_global_ctors_aux())(void)
{
  void (*result)(void); // eax
  int *v1; // ebx

  result = (void (*)(void))_CTOR_LIST__;
  if ( _CTOR_LIST__ != -1 )
  {
    v1 = &_CTOR_LIST__;
    do
    {
      result();
      result = (void (*)(void))*--v1;
    }
    while ( result != (void (*)(void))-1 );
  }
  return result;
}


/* Function: .term_proc @ 0x404C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9030 */

/* FAILED to decompile: __cxa_finalize @ 0x9034 */

/* FAILED to decompile: __cxa_begin_catch @ 0x9038 */

/* FAILED to decompile: __cxa_allocate_exception @ 0x903C */

/* FAILED to decompile: strlen @ 0x9040 */

/* FAILED to decompile: __cxa_atexit @ 0x9044 */

/* FAILED to decompile: _ZdlPvj @ 0x9048 */

/* FAILED to decompile: strcmp @ 0x9050 */

/* FAILED to decompile: __libc_start_main @ 0x9054 */

/* FAILED to decompile: _Znaj @ 0x9058 */

/* FAILED to decompile: strncpy @ 0x905C */

/* FAILED to decompile: __cxa_bad_typeid @ 0x9060 */

/* FAILED to decompile: __stack_chk_fail @ 0x9064 */

/* FAILED to decompile: __dynamic_cast @ 0x9068 */

/* FAILED to decompile: _ZdaPv @ 0x906C */

/* FAILED to decompile: __cxa_throw_bad_array_new_length @ 0x9074 */

/* FAILED to decompile: printf @ 0x9078 */

/* FAILED to decompile: __cxa_rethrow @ 0x907C */

/* FAILED to decompile: puts @ 0x9080 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x9084 */

/* FAILED to decompile: __cxa_end_catch @ 0x9088 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x908C */

/* FAILED to decompile: __cxa_throw @ 0x9090 */

/* FAILED to decompile: _Unwind_Resume @ 0x9098 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x909C */

/* Total functions decompiled: 235, failed: 25 */
