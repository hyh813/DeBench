/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_O0_no_g
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
    (char **)va,
    0,
    0,
    a1,
    va);
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
int test_cpp_member_func(void)
{
  int Value; // [sp+4h] [bp-38h]
  SimpleClass *v2; // [sp+8h] [bp-34h]
  _BYTE v3[36]; // [sp+10h] [bp-2Ch] BYREF

  SimpleClass::SimpleClass((SimpleClass *)v3, 5, "Test");
  SimpleClass::setValue((SimpleClass *)v3, 10);
  Value = SimpleClass::getValue((SimpleClass *)v3);
  v2 = (SimpleClass *)SimpleClass::compute((SimpleClass *)v3, 3);
  return (int)v2 + Value + SimpleClass::getClassID(v2);
}


/* Function: _Z20test_cpp_constructorv @ 0x10D74 */
char *test_cpp_constructor(void)
{
  LifecycleClass *v0; // r0
  LifecycleClass *Data; // [sp+0h] [bp-14h]
  char *v3; // [sp+0h] [bp-14h]
  _BYTE v4[8]; // [sp+4h] [bp-10h] BYREF

  LifecycleClass::LifecycleClass((LifecycleClass *)v4, 5u);
  Data = (LifecycleClass *)LifecycleClass::getData((LifecycleClass *)v4, 2u);
  v3 = (char *)Data + LifecycleClass::getInstanceCount(Data);
  LifecycleClass::~LifecycleClass((LifecycleClass *)v4);
  return &v3[1000 * LifecycleClass::getInstanceCount(v0)];
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x10E48 */
int __fastcall call_virtual_func(int (__fastcall ***a1)(_DWORD, int), int a2)
{
  return (**a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x10E84 */
int test_cpp_virtual_func(void)
{
  int v0; // r4
  _DWORD (**v2)(Base *__hidden, int); // [sp+0h] [bp-34h] BYREF
  int v3; // [sp+4h] [bp-30h]
  int v4; // [sp+8h] [bp-2Ch]
  _DWORD (***v5)(Base *__hidden, int); // [sp+Ch] [bp-28h]
  int (__fastcall ***v6)(_DWORD, int); // [sp+10h] [bp-24h]
  int v7; // [sp+14h] [bp-20h]
  int v8; // [sp+18h] [bp-1Ch]
  _BYTE v9[8]; // [sp+1Ch] [bp-18h] BYREF

  v2 = &off_145F0;
  Derived::Derived((Derived *)v9, 3);
  v3 = Base::virtual_func((Base *)&v2, 5);
  v4 = Derived::virtual_func((Derived *)v9, 5);
  v5 = &v2;
  v6 = (int (__fastcall ***)(_DWORD, int))v9;
  v7 = call_virtual_func((int (__fastcall ***)(_DWORD, int))&v2, 5);
  v8 = call_virtual_func(v6, 5);
  v0 = v3 + v4 + v7 + v8;
  Derived::~Derived((Derived *)v9);
  Base::~Base((Base *)&v2);
  return v0;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x10FA0 */
int test_cpp_multiple_inheritance(void)
{
  int v0; // r4
  int v2; // [sp+8h] [bp-2Ch]
  _DWORD v3[2]; // [sp+14h] [bp-20h] BYREF
  _DWORD v4[2]; // [sp+1Ch] [bp-18h] BYREF

  MultiDerived::MultiDerived((MultiDerived *)v3);
  v3[1] = 100;
  v4[1] = 200;
  v2 = (*(int (__fastcall **)(_DWORD *))v3[0])(v3);
  v0 = v2 + (*(int (__fastcall **)(_DWORD *))v4[0])(v4) + (v3 != v4);
  MultiDerived::~MultiDerived((MultiDerived *)v3);
  return v0;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x110A4 */
int test_cpp_diamond_inheritance(void)
{
  int v0; // r4
  int v2; // [sp+4h] [bp-30h]
  _BYTE v3[16]; // [sp+Ch] [bp-28h] BYREF
  int (__fastcall **v4)(_DWORD); // [sp+1Ch] [bp-18h] BYREF
  int v5; // [sp+20h] [bp-14h]

  DiamondDerived::DiamondDerived((DiamondDerived *)v3);
  v5 = 50;
  v2 = (*v4)(&v4);
  v5 = 100;
  v0 = v2 + (*v4)(&v4);
  DiamondDerived::~DiamondDerived((DiamondDerived *)v3);
  return v0;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1117C */
int test_cpp_operator_overload(void)
{
  int v0; // r2
  char v2; // [sp+3h] [bp-21h]
  _BYTE v3[8]; // [sp+4h] [bp-20h] BYREF
  _BYTE v4[8]; // [sp+Ch] [bp-18h] BYREF
  _DWORD v5[2]; // [sp+14h] [bp-10h] BYREF

  Point::Point((Point *)v3, 1, 2);
  Point::Point((Point *)v4, 3, 4);
  Point::operator+(v5, v3, v4);
  v2 = Point::operator==(v3, v4);
  Point::operator++(v5);
  if ( v2 )
    v0 = 0;
  else
    v0 = 10;
  return v0 + v5[0] + v5[1];
}


/* Function: _Z22test_cpp_template_funcv @ 0x11250 */
int __fastcall test_cpp_template_func(int a1, int a2, int a3)
{
  int v4; // [sp+4h] [bp-20h] BYREF
  int v5; // [sp+8h] [bp-1Ch] BYREF
  int v6; // [sp+Ch] [bp-18h]
  double v7; // [sp+10h] [bp-14h]

  v6 = template_max<int>(3, 7, a3, 0);
  v7 = COERCE_DOUBLE(template_max<double>(0, 1074003968, 0, 1073217536));
  v4 = 10;
  v5 = 20;
  template_swap<int>(&v4, &v5);
  return (int)v7 + v6 + v4 + v5;
}


/* Function: _Z23test_cpp_template_classv @ 0x11324 */
int test_cpp_template_class(void)
{
  int v1; // [sp+0h] [bp-ACh]
  int Size; // [sp+4h] [bp-A8h]
  _BYTE v3[44]; // [sp+14h] [bp-98h] BYREF
  _BYTE v4[92]; // [sp+40h] [bp-6Ch] BYREF

  Container<int>::Container(v3);
  Container<int>::push(v3, 10);
  Container<int>::push(v3, 20);
  Container<int>::push(v3, 30);
  v1 = Container<int>::get(v3, 0);
  Size = Container<int>::getSize(v3);
  Container<double>::Container(v4);
  Container<double>::push(v4, v4, 1374389535, 1074339512);
  return v1 + Size + (int)COERCE_DOUBLE(Container<double>::get(v4, 0));
}


/* Function: _ZZ15test_cpp_lambdavENKUliE_clEi @ 0x1143C */
int __fastcall test_cpp_lambda(void)::{lambda(int)#1}::operator()(int a1, int a2)
{
  **(_DWORD **)(a1 + 4) += 5;
  return *(_DWORD *)a1 * a2 + **(_DWORD **)(a1 + 4);
}


/* Function: _Z15test_cpp_lambdav @ 0x1149C */
int test_cpp_lambda(void)
{
  _DWORD v1[2]; // [sp+4h] [bp-20h] BYREF
  _DWORD v2[2]; // [sp+14h] [bp-10h] BYREF

  v1[1] = 10;
  v1[0] = 20;
  v2[0] = 10;
  v2[1] = v1;
  return test_cpp_lambda(void)::{lambda(int)#1}::operator()((int)v2, 3) + 30;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1152C */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = 42;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: sub_11564 @ 0x11564 */
void __fastcall sub_11564(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  __asm { POP     {R4,R5,R11,PC} }
}


/* Function: _ZZ18test_cpp_smart_ptrvENKUlPiE_clES_ @ 0x1169C */
void __fastcall test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(int a1, _DWORD *a2)
{
  *a2 = -1;
  if ( a2 )
    operator delete(a2, 4u);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x116E0 */
int test_cpp_smart_ptr(void)
{
  _DWORD *v0; // r0
  int v1; // r0
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  int v4; // r4
  _BYTE v6[4]; // [sp+4h] [bp-30h] BYREF
  _BYTE v7[4]; // [sp+8h] [bp-2Ch] BYREF
  _BYTE v8[4]; // [sp+Ch] [bp-28h] BYREF
  _BYTE v9[4]; // [sp+10h] [bp-24h] BYREF
  _BYTE v10[4]; // [sp+14h] [bp-20h] BYREF
  int v11; // [sp+18h] [bp-1Ch]
  int v12; // [sp+1Ch] [bp-18h]
  int v13; // [sp+20h] [bp-14h]

  v0 = (_DWORD *)operator new(4u);
  *v0 = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v7, v0);
  *(_DWORD *)std::unique_ptr<int>::operator*(v7) = 200;
  v1 = std::move<std::unique_ptr<int> &>(v7);
  std::unique_ptr<int>::unique_ptr(v8, v1);
  v11 = *(_DWORD *)std::unique_ptr<int>::operator*(v8);
  v2 = (_DWORD *)operator new[](0x14u);
  *v2 = 1;
  v2[1] = 2;
  v2[2] = 3;
  v2[3] = 4;
  v2[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v9);
  v12 = *(_DWORD *)std::unique_ptr<int []>::operator[](v9, 2);
  v3 = (_DWORD *)operator new(4u);
  *v3 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
    v10,
    v3,
    v6);
  v13 = *(_DWORD *)std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(v10);
  v4 = v11 + v12 + v13;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(v10);
  std::unique_ptr<int []>::~unique_ptr(v9);
  std::unique_ptr<int>::~unique_ptr(v8);
  std::unique_ptr<int>::~unique_ptr(v7);
  return v4;
}


/* Function: _Z13test_cpp_rttiv @ 0x118C4 */
size_t test_cpp_rtti(void)
{
  RTTIDerivedA *v0; // r4
  RTTIDerivedB *v1; // r4
  RTTIDerivedA *v2; // r3
  RTTIDerivedB *v3; // r3
  const char *v4; // r0
  int v6; // [sp+4h] [bp-20h]
  size_t v7; // [sp+4h] [bp-20h]
  RTTIDerivedA *lpsrc; // [sp+8h] [bp-1Ch]

  v0 = (RTTIDerivedA *)operator new(4u);
  *(_DWORD *)v0 = 0;
  RTTIDerivedA::RTTIDerivedA(v0);
  lpsrc = v0;
  v1 = (RTTIDerivedB *)operator new(4u);
  *(_DWORD *)v1 = 0;
  RTTIDerivedB::RTTIDerivedB(v1);
  v6 = 0;
  if ( !lpsrc )
    _cxa_bad_typeid();
  if ( std::type_info::operator==(*(_DWORD *)(*(_DWORD *)lpsrc - 4), &`typeinfo for'RTTIDerivedA) )
    v6 = 10;
  if ( !v1 )
    _cxa_bad_typeid();
  if ( std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v1 - 4), &`typeinfo for'RTTIDerivedB) )
    v6 += 20;
  v2 = (RTTIDerivedA *)_dynamic_cast(
                         lpsrc,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedA,
                         0);
  if ( v2 )
    v6 += RTTIDerivedA::derivedA_data(v2);
  v3 = (RTTIDerivedB *)_dynamic_cast(
                         v1,
                         (const struct __class_type_info *)&`typeinfo for'RTTIBase,
                         (const struct __class_type_info *)&`typeinfo for'RTTIDerivedB,
                         0);
  if ( v3 )
    v6 += RTTIDerivedB::derivedB_data(v3);
  v4 = (const char *)std::type_info::name(*(std::type_info **)(*(_DWORD *)lpsrc - 4));
  v7 = strlen(v4) + v6;
  (*(void (__fastcall **)(RTTIDerivedA *))(*(_DWORD *)lpsrc + 4))(lpsrc);
  (*(void (__fastcall **)(RTTIDerivedB *))(*(_DWORD *)v1 + 4))(v1);
  return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x11ADC */
void __noreturn test_cpp_oo_features(void)
{
  int v0; // r0
  char *v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r0
  int v11; // r0

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
  v6 = printf(aCppL306D, v5);
  v9 = test_cpp_template_func(v6, v7, v8);
  printf(aCppL307D, v9);
  v10 = test_cpp_template_class();
  printf(aCppL308D, v10);
  v11 = test_cpp_lambda();
  printf(aCppL309D, v11);
  test_cpp_exception();
}


/* Function: main @ 0x11C18 */
int __fastcall __noreturn main(int argc, const char **argv, const char **envp)
{
  test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_ @ 0x11C30 */
int __fastcall ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(
        int a1,
        int a2,
        int a3)
{
  std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
    a1,
    a2,
    a3);
  return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EC2IS1_vEES0_RKS1_ @ 0x11C6C */
int __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::unique_ptr<test_cpp_smart_ptr(void)::{lambda(int *)#1},void>(
        int a1,
        int a2,
        int a3)
{
  ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvEUlPiE_Lb1ELb0EECI2St15__uniq_ptr_implIiS1_EIRKS1_EES0_OT_(a1, a2, a3);
  return a1;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_ED2Ev @ 0x11CA8 */
int __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::~unique_ptr(int a1)
{
  int deleter; // r4
  _DWORD **v2; // r0
  _DWORD *v5; // [sp+Ch] [bp-10h]

  v5 = (_DWORD *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
  if ( *v5 )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(a1);
    v2 = (_DWORD **)std::move<int *&>(v5);
    test_cpp_smart_ptr(void)::{lambda(int *)#1}::operator()(deleter, *v2);
  }
  *v5 = 0;
  return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_EdeEv @ 0x11D1C */
int __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::operator*(int a1)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_EC2IRKS1_EES0_OT_ @ 0x11D4C */
int __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(
        int a1,
        int a2,
        int a3)
{
  int v4; // r0
  int v6; // [sp+8h] [bp-14h] BYREF
  int v7; // [sp+Ch] [bp-10h]

  v7 = a1;
  v6 = a2;
  v4 = std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>(a3);
  std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
    a1,
    &v6,
    v4);
  return v7;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11D94 */
int __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(int a1)
{
  return std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E11get_deleterEv @ 0x11DC0 */
int __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(a1);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvEUlPiE_E3getEv @ 0x11DEC */
int __fastcall std::unique_ptr<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::get(int a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(a1);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvEUlPiE_EOT_RNSt16remove_referenceIS4_E4typeE @ 0x11E18 */
void std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>()
{
  ;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x11E3C */
int __fastcall std::tuple<int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::tuple<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,true>(
        int a1,
        int a2)
{
  int v3; // r5
  int v4; // r0

  v3 = std::forward<int *&>(a2);
  std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>();
  std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
    a1,
    v3,
    v4);
  return a1;
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11E90 */
int __fastcall std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E10_M_deleterEv @ 0x11EBC */
int __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_deleter(int a1)
{
  return std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvEUlPiE_E6_M_ptrEv @ 0x11EE8 */
int __fastcall std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x11F18 */
int __fastcall std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::{lambda(int *)#1} const&,void>(
        int a1,
        int a2)
{
  int v2; // r0
  int v3; // r0

  std::forward<test_cpp_smart_ptr(void)::{lambda(int *)#1} const&>();
  std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(a1, v2);
  v3 = std::forward<int *&>(a2);
  std::_Head_base<0u,int *,false>::_Head_base<int *&>(a1, v3);
  return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x11F74 */
int __fastcall std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x11F9C */
int __fastcall std::get<1u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::__get_helper<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x11FC4 */
int __fastcall std::get<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EEC2ERKS1_ @ 0x11FF0 */
int __fastcall std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_Tuple_impl(int a1, int a2)
{
  std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base(a1, a2);
  return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERS2_ @ 0x12020 */
int __fastcall std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvEUlPiE_JEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x1204C */
int __fastcall std::__get_helper<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvEUlS0_E_EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x12074 */
int __fastcall std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>(int a1)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EEC2ERKS1_ @ 0x1209C */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_Head_base()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvEUlPiE_EE7_M_headERS2_ @ 0x120C4 */
int __fastcall std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(int a1)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvEUlS0_E_EE7_M_headERKS2_ @ 0x120EC */
int __fastcall std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::{lambda(int *)#1}>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvEUlPiE_Lb1EE7_M_headERS2_ @ 0x12118 */
void std::_Head_base<1u,test_cpp_smart_ptr(void)::{lambda(int *)#1},true>::_M_head()
{
  ;
}


/* Function: _Z41__static_initialization_and_destruction_0ii @ 0x1213C */
int __fastcall __static_initialization_and_destruction_0(int result, int a2)
{
  if ( result == 1 && a2 == 0xFFFF )
  {
    std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
    return _aeabi_atexit(&std::__ioinit, std::ios_base::Init::~Init, &_dso_handle);
  }
  return result;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x121A0 */
int GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
  return __static_initialization_and_destruction_0(1, 0xFFFF);
}


/* Function: _ZNKSt9type_info4nameEv @ 0x121BC */
int __fastcall std::type_info::name(std::type_info *this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return *((_DWORD *)this + 1) + 1;
  else
    return *((_DWORD *)this + 1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x12208 */
void __fastcall SimpleClass::SimpleClass(SimpleClass *this, int a2, const char *a3)
{
  *(_DWORD *)this = a2;
  strncpy((char *)this + 4, a3, 0x1Fu);
  *((_BYTE *)this + 35) = 0;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x12260 */
int __fastcall SimpleClass::getValue(SimpleClass *this)
{
  return *(_DWORD *)this;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x12288 */
_DWORD *__fastcall SimpleClass::setValue(_DWORD *this, int a2)
{
  *this = a2;
  return this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x122B8 */
size_t __fastcall SimpleClass::compute(SimpleClass *this, int a2)
{
  return a2 * *(_DWORD *)this + strlen((const char *)this + 4);
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x12304 */
int __fastcall SimpleClass::getClassID(SimpleClass *this)
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x12324 */
void __fastcall LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned int a2)
{
  unsigned int i; // [sp+Ch] [bp-8h]

  *((_DWORD *)this + 1) = a2;
  if ( a2 > 0x1FFFFFFE )
    _cxa_throw_bad_array_new_length();
  *(_DWORD *)this = operator new[](4 * a2);
  for ( i = 0; i < a2; ++i )
    *(_DWORD *)(*(_DWORD *)this + 4 * i) = 10 * i;
  ++LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x123F4 */
void __fastcall LifecycleClass::~LifecycleClass(void **this)
{
  if ( *this )
    operator delete[](*this);
  --LifecycleClass::instance_count;
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x1244C */
int __fastcall LifecycleClass::getData(LifecycleClass *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 1) )
    return -1;
  else
    return *(_DWORD *)(*(_DWORD *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x124A4 */
int __fastcall LifecycleClass::getInstanceCount(LifecycleClass *this)
{
  return LifecycleClass::instance_count;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x124C8 */
int __fastcall Base::virtual_func(Base *this, int a2)
{
  return a2 + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x124F4 */
const char *__fastcall Base::getName(Base *this)
{
  return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1251C */
void __fastcall Base::~Base(Base *this)
{
  *(_DWORD *)this = &off_145F0;
}


/* Function: _ZN4BaseD0Ev @ 0x12550 */
void __fastcall Base::~Base(Base *this)
{
  Base::~Base(this);
  operator delete(this, 4u);
}


/* Function: _ZN4BaseC2Ev @ 0x12584 */
void __fastcall Base::Base(Base *this)
{
  *(_DWORD *)this = &off_145F0;
}


/* Function: _ZN7DerivedC2Ei @ 0x125B8 */
void __fastcall Derived::Derived(Derived *this, int a2)
{
  Base::Base(this);
  *(_DWORD *)this = &off_145D8;
  *((_DWORD *)this + 1) = a2;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x12604 */
int __fastcall Derived::virtual_func(Derived *this, int a2)
{
  return a2 * *((_DWORD *)this + 1);
}


/* Function: _ZNK7Derived7getNameEv @ 0x12638 */
const char *__fastcall Derived::getName(Derived *this)
{
  return "Derived";
}


/* Function: _ZN5BaseA5funcAEv @ 0x12660 */
int __fastcall BaseA::funcA(BaseA *this)
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x12684 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  *(_DWORD *)this = &off_145C4;
}


/* Function: _ZN5BaseAD0Ev @ 0x126B8 */
void __fastcall BaseA::~BaseA(BaseA *this)
{
  BaseA::~BaseA(this);
  operator delete(this, 8u);
}


/* Function: _ZN5BaseB5funcBEv @ 0x126EC */
int __fastcall BaseB::funcB(BaseB *this)
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x12710 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  *(_DWORD *)this = &off_145B0;
}


/* Function: _ZN5BaseBD0Ev @ 0x12744 */
void __fastcall BaseB::~BaseB(BaseB *this)
{
  BaseB::~BaseB(this);
  operator delete(this, 8u);
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x12778 */
int __fastcall MultiDerived::funcA(MultiDerived *this)
{
  return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1279C */
int __fastcall MultiDerived::funcB(MultiDerived *this)
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x127C0 */
int __fastcall `non-virtual thunk to'MultiDerived::funcB(MultiDerived *this)
{
  return MultiDerived::funcB((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN5BaseAC2Ev @ 0x127C8 */
void __fastcall BaseA::BaseA(BaseA *this)
{
  *(_DWORD *)this = &off_145C4;
}


/* Function: _ZN5BaseBC2Ev @ 0x127FC */
void __fastcall BaseB::BaseB(BaseB *this)
{
  *(_DWORD *)this = &off_145B0;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x12830 */
void __fastcall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA(this);
  BaseB::BaseB((MultiDerived *)((char *)this + 8));
  *(_DWORD *)this = &off_14584;
  *((_DWORD *)this + 2) = &off_1459C;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1288C */
int __fastcall VirtualBase::func(VirtualBase *this)
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x128B0 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  *(_DWORD *)this = &off_14570;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x128E4 */
void __fastcall VirtualBase::~VirtualBase(VirtualBase *this)
{
  VirtualBase::~VirtualBase(this);
  operator delete(this, 8u);
}


/* Function: _ZN7MiddleA4funcEv @ 0x12918 */
int __fastcall MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1295C */
int __fastcall `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x12970 */
int __fastcall MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x129B4 */
int __fastcall `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x129C8 */
int __fastcall DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x12A0C */
int __fastcall `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x12A20 */
int __fastcall `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x12A28 */
void __fastcall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(_DWORD *)this = &off_14570;
}


/* Function: _ZN7MiddleAC2Ev @ 0x12A5C */
void __fastcall MiddleA::MiddleA(MiddleA *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleAD2Ev @ 0x12ABC */
void __fastcall MiddleA::~MiddleA(MiddleA *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x12B1C */
void __fastcall MiddleB::MiddleB(MiddleB *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBD2Ev @ 0x12B7C */
void __fastcall MiddleB::~MiddleB(MiddleB *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x12BDC */
void __fastcall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 16));
  MiddleA::MiddleA(this, off_144E8);
  MiddleB::MiddleB((DiamondDerived *)((char *)this + 8), off_144F0);
  *(_DWORD *)this = &off_144A4;
  *((_DWORD *)this + 4) = &off_144D8;
  *((_DWORD *)this + 2) = &off_144BC;
}


/* Function: _ZN5PointC2Eii @ 0x12C74 */
void __fastcall Point::Point(Point *this, int a2, int a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x12CB8 */
void __fastcall __spoils<R1,R2,R3,R12> Point::operator+(Point *a1, _DWORD *a2, _DWORD *a3)
{
  Point::Point(a1, *a2 + *a3, a2[1] + a3[1]);
}


/* Function: _ZNK5PointeqERKS_ @ 0x12D10 */
bool __fastcall Point::operator==(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2 && a1[1] == a2[1];
}


/* Function: _ZN5PointppEv @ 0x12D70 */
_DWORD *__fastcall Point::operator++(_DWORD *result)
{
  ++*result;
  ++result[1];
  return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x12DBC */
int __fastcall template_max<int>(int a1, int a2)
{
  if ( a1 <= a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x12DFC */
__int64 __fastcall template_max<double>(double a1, double a2)
{
  if ( a1 > a2 )
    a2 = a1;
  return *(_QWORD *)&a2;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x12E5C */
int *__fastcall template_swap<int>(int *result, int *a2)
{
  int v2; // [sp+Ch] [bp-8h]

  v2 = *result;
  *result = *a2;
  *a2 = v2;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x12EA8 */
int __fastcall Container<int>::Container(int result)
{
  *(_DWORD *)(result + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x12ED8 */
int __fastcall Container<int>::push(int result, int a2)
{
  int v2; // r3
  int v3; // [sp+4h] [bp-8h]

  v3 = result;
  if ( *(int *)(result + 40) <= 9 )
  {
    v2 = *(_DWORD *)(result + 40);
    result = v2 + 1;
    *(_DWORD *)(v3 + 40) = v2 + 1;
    *(_DWORD *)(v3 + 4 * v2) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x12F2C */
int __fastcall Container<int>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 40) )
    return 0;
  else
    return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x12F84 */
int __fastcall Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x12FAC */
int __fastcall Container<double>::Container(int result)
{
  *(_DWORD *)(result + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x12FDC */
int __fastcall Container<double>::push(int result, int a2, int a3, int a4)
{
  int v4; // r1
  _DWORD *v5; // r1

  if ( *(int *)(result + 80) <= 9 )
  {
    v4 = *(_DWORD *)(result + 80);
    *(_DWORD *)(result + 80) = v4 + 1;
    v5 = (_DWORD *)(result + 8 * v4);
    *v5 = a3;
    v5[1] = a4;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x13040 */
__int64 __fastcall Container<double>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 80) )
    return 0;
  else
    return *(_QWORD *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x130A8 */
int __fastcall Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x130D0 */
int __fastcall std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(int a1, int a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
  return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x13108 */
int __fastcall std::unique_ptr<int>::unique_ptr(int a1, int a2)
{
  std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
  return a1;
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x13140 */
int __fastcall RTTIBase::getType(RTTIBase *this)
{
  return 0;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x13164 */
int __fastcall RTTIDerivedA::getType(RTTIDerivedA *this)
{
  return 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x13188 */
int __fastcall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x131AC */
int __fastcall RTTIDerivedB::getType(RTTIDerivedB *this)
{
  return 2;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x131D0 */
int __fastcall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)
{
  return 200;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x131F4 */
void __fastcall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(_DWORD *)this = off_1448C;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x13228 */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  *(_DWORD *)this = off_1448C;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x1325C */
void __fastcall RTTIBase::~RTTIBase(RTTIBase *this)
{
  RTTIBase::~RTTIBase(this);
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x13290 */
void __fastcall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase(this);
  *(_DWORD *)this = off_14478;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x132CC */
void __fastcall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase(this);
  *(_DWORD *)this = off_14464;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x13308 */
int __fastcall ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(int a1, int a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
  return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x13340 */
int __fastcall std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(int a1, int a2)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
  return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x13374 */
int __fastcall std::unique_ptr<int>::~unique_ptr(int a1)
{
  int deleter; // r4
  _DWORD *v2; // r0
  _DWORD *v5; // [sp+Ch] [bp-10h]

  v5 = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  if ( *v5 )
  {
    deleter = std::unique_ptr<int>::get_deleter(a1);
    v2 = (_DWORD *)std::move<int *&>(v5);
    std::default_delete<int>::operator()(deleter, *v2);
  }
  *v5 = 0;
  return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x133E8 */
int __fastcall std::unique_ptr<int>::operator*(int a1)
{
  return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x13418 */
void std::move<std::unique_ptr<int> &>()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1343C */
_DWORD *__fastcall std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(_DWORD *a1, _DWORD *a2)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1, a2);
  *a1 = *a2;
  return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x1347C */
_DWORD *__fastcall std::tuple<int *,std::default_delete<int>>::tuple(_DWORD *a1, _DWORD *a2)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x134B4 */
_DWORD *__fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(_DWORD *a1, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
  std::tuple<int *,std::default_delete<int>>::tuple(a1, v3);
  *(_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2) = 0;
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x1350C */
int __fastcall ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(int a1, int a2)
{
  std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
  return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x13544 */
int __fastcall std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(int a1, int a2)
{
  ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
  return a1;
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x13578 */
int __fastcall std::unique_ptr<int []>::~unique_ptr(int a1)
{
  int deleter; // r0
  _DWORD *v4; // [sp+Ch] [bp-8h]

  v4 = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int []>::get_deleter(a1);
    std::default_delete<int []>::operator()<int>(deleter, *v4);
  }
  *v4 = 0;
  return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x135E4 */
int __fastcall std::unique_ptr<int []>::operator[](int a1, int a2)
{
  return std::unique_ptr<int []>::get(a1) + 4 * a2;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x13624 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
  *(_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1) = a2;
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13668 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
  return std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x13694 */
int __fastcall std::unique_ptr<int>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x136C0 */
void std::move<int *&>()
{
  ;
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x136E4 */
void __fastcall std::default_delete<int>::operator()(int a1, void *a2)
{
  if ( a2 )
    operator delete(a2, 4u);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x1371C */
int __fastcall std::unique_ptr<int>::get(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x13748 */
void std::move<std::tuple<int *,std::default_delete<int>> &>()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x1376C */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl()
{
  ;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x13794 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(int a1, int a2)
{
  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
  *(_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1) = a2;
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x137D8 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
  return std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x13804 */
int __fastcall std::unique_ptr<int []>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsrSt14is_convertibleIPA_T_PS0_E5valueEvE4typeEPS5_ @ 0x13830 */
void __fastcall std::default_delete<int []>::operator()<int>(int a1, void *a2)
{
  if ( a2 )
    operator delete[](a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x13864 */
int __fastcall std::unique_ptr<int []>::get(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x13890 */
int __fastcall std::tuple<int *,std::default_delete<int>>::tuple<true,true>(int a1)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1);
  return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x138BC */
int __fastcall std::get<0u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x138E8 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(int a1)
{
  return std::get<1u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x13914 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x13944 */
int __fastcall std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(int a1)
{
  std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(a1);
  return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13970 */
int __fastcall std::get<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x1399C */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(int a1)
{
  return std::get<1u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x139C8 */
int __fastcall std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x139F8 */
int __fastcall std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(int a1)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1);
  std::_Head_base<0u,int *,false>::_Head_base(a1);
  return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13A2C */
int __fastcall std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x13A54 */
int __fastcall std::get<1u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<1u,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x13A7C */
int __fastcall std::get<0u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x13AA8 */
int __fastcall std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(int a1)
{
  std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(a1);
  std::_Head_base<0u,int *,false>::_Head_base(a1);
  return a1;
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13ADC */
int __fastcall std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x13B04 */
int __fastcall std::get<1u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<1u,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x13B2C */
int __fastcall std::get<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x13B58 */
void std::forward<int *&>()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x13B7C */
int __fastcall std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
  std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(a1);
  return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x13BA4 */
_DWORD *__fastcall std::_Head_base<0u,int *,false>::_Head_base(_DWORD *result)
{
  *result = 0;
  return result;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x13BD4 */
int __fastcall std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x13C00 */
int __fastcall std::__get_helper<1u,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13C28 */
int __fastcall std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x13C50 */
int __fastcall std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(int a1)
{
  std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(a1);
  return a1;
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x13C78 */
int __fastcall std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x13CA4 */
int __fastcall std::__get_helper<1u,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x13CCC */
int __fastcall std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x13CF4 */
_DWORD *__fastcall std::_Head_base<0u,int *,false>::_Head_base<int *&>(_DWORD *a1)
{
  _DWORD *v1; // r0

  std::forward<int *&>();
  *a1 = *v1;
  return a1;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x13D30 */
void std::_Head_base<1u,std::default_delete<int>,true>::_Head_base()
{
  ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x13D54 */
void std::_Head_base<0u,int *,false>::_M_head()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x13D78 */
int __fastcall std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x13DA0 */
int __fastcall std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x13DCC */
void std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base()
{
  ;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x13DF0 */
int __fastcall std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x13E18 */
int __fastcall std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x13E44 */
void std::_Head_base<1u,std::default_delete<int>,true>::_M_head()
{
  ;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x13E68 */
void std::_Head_base<0u,int *,false>::_M_head()
{
  ;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x13E8C */
void std::_Head_base<1u,std::default_delete<int []>,true>::_M_head()
{
  ;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x13EB0 */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  *(_DWORD *)this = off_14464;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x13EEC */
void __fastcall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedB::~RTTIDerivedB(this);
  operator delete(this, 4u);
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x13F20 */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  *(_DWORD *)this = off_14478;
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x13F5C */
void __fastcall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this, 4u);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x13F90 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  *(_DWORD *)this = &off_144A4;
  *((_DWORD *)this + 4) = &off_144D8;
  *((_DWORD *)this + 2) = &off_144BC;
  MiddleB::~MiddleB((DiamondDerived *)((char *)this + 8), off_144F0);
  MiddleA::~MiddleA(this, off_144E8);
  VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 16));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x14028 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x14030 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x14044 */
void __fastcall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this, 0x18u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x14078 */
void __fastcall `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x14080 */
void __fastcall `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x14094 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  *(_DWORD *)this = &off_14584;
  *((_DWORD *)this + 2) = &off_1459C;
  BaseB::~BaseB((MultiDerived *)((char *)this + 8));
  BaseA::~BaseA(this);
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x140F0 */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x140F8 */
void __fastcall MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1412C */
void __fastcall `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN7DerivedD2Ev @ 0x14134 */
void __fastcall Derived::~Derived(Derived *this)
{
  *(_DWORD *)this = &off_145D8;
  Base::~Base(this);
}


/* Function: _ZN7DerivedD0Ev @ 0x14170 */
void __fastcall Derived::~Derived(Derived *this)
{
  Derived::~Derived(this);
  operator delete(this, 8u);
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

/* Total functions decompiled: 205, failed: 30 */
