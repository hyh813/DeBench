/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_clang_O0_no_g
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


/* Function: sub_1190 @ 0x1190 */
int __usercall sub_1190@<eax>(int a1@<ebx>)
{
  return (*(int (**)(void))(a1 - 24))();
}


/* Function: __cxx_global_var_init @ 0x11A0 */
int _cxx_global_var_init()
{
  std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
  return __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x11F0 */
int GLOBAL__sub_I_5_1_cpp()
{
  return _cxx_global_var_init();
}


/* Function: _start @ 0x1210 */
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


/* Function: sub_123C @ 0x123C */
void sub_123C()
{
  ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1240 */
void _x86_get_pc_thunk_bx()
{
  ;
}


/* Function: deregister_tm_clones @ 0x1250 */
char *deregister_tm_clones()
{
  return &_bss_start;
}


/* Function: register_tm_clones @ 0x1290 */
int register_tm_clones()
{
  return 0;
}


/* Function: __do_global_dtors_aux @ 0x12E0 */
void _do_global_dtors_aux()
{
  int v0; // eax
  unsigned int i; // ebx

  if ( !_bss_start )
  {
    if ( &_cxa_finalize )
      sub_1190((int)&GLOBAL_OFFSET_TABLE_);
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


/* Function: frame_dummy @ 0x1370 */
int frame_dummy()
{
  return register_tm_clones();
}


/* Function: __x86.get_pc_thunk.dx @ 0x1379 */
void _x86_get_pc_thunk_dx()
{
  ;
}


/* Function: __x86.get_pc_thunk.di @ 0x137D */
void _x86_get_pc_thunk_di()
{
  ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1390 */
int test_cpp_member_func(void)
{
  SimpleClass *v1; // [esp+0h] [ebp-48h]
  int v2; // [esp+18h] [ebp-30h]
  int Value; // [esp+1Ch] [ebp-2Ch]
  _BYTE v4[40]; // [esp+20h] [ebp-28h] BYREF

  SimpleClass::SimpleClass((SimpleClass *)v4, 5, "Test");
  SimpleClass::setValue((SimpleClass *)v4, 10);
  Value = SimpleClass::getValue((SimpleClass *)v4);
  v2 = SimpleClass::compute((SimpleClass *)v4, 3);
  return SimpleClass::getClassID(v1) + v2 + Value;
}


/* Function: _Z20test_cpp_constructorv @ 0x1420 */
int test_cpp_constructor(void)
{
  int v0; // eax
  LifecycleClass *v2; // [esp+0h] [ebp-38h]
  LifecycleClass *v3; // [esp+0h] [ebp-38h]
  int InstanceCount; // [esp+10h] [ebp-28h]
  int Data; // [esp+1Ch] [ebp-1Ch]
  _BYTE v6[8]; // [esp+28h] [ebp-10h] BYREF
  int v7; // [esp+30h] [ebp-8h]

  v7 = 0;
  LifecycleClass::LifecycleClass((LifecycleClass *)v6, 5u);
  Data = LifecycleClass::getData((LifecycleClass *)v6, 2u);
  v7 += Data;
  InstanceCount = LifecycleClass::getInstanceCount(v2);
  v7 += InstanceCount;
  LifecycleClass::~LifecycleClass((LifecycleClass *)v6);
  v0 = LifecycleClass::getInstanceCount(v3);
  return v7 + 1000 * v0;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int __cdecl call_virtual_func(Base *a1, int a2)
{
  return (**(int (__cdecl ***)(Base *, int))a1)(a1, a2);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1520 */
int test_cpp_virtual_func(void)
{
  int v1; // [esp+10h] [ebp-48h]
  int v2; // [esp+2Ch] [ebp-2Ch]
  int v3; // [esp+38h] [ebp-20h]
  int v4; // [esp+3Ch] [ebp-1Ch]
  _BYTE v5[8]; // [esp+48h] [ebp-10h] BYREF
  _BYTE v6[8]; // [esp+50h] [ebp-8h] BYREF

  Base::Base((Base *)v6);
  Derived::Derived((Derived *)v5, 3);
  v4 = Base::virtual_func((Base *)v6, 5);
  v3 = Derived::virtual_func((Derived *)v5, 5);
  v2 = call_virtual_func((Base *)v6, 5);
  v1 = call_virtual_func((Base *)v5, 5) + v2 + v3 + v4;
  Derived::~Derived((Derived *)v5);
  Base::~Base((Base *)v6);
  return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1670 */
int test_cpp_multiple_inheritance(void)
{
  _DWORD *v1; // [esp+20h] [ebp-38h]
  int v2; // [esp+28h] [ebp-30h]
  int v3; // [esp+34h] [ebp-24h]
  _DWORD v4[2]; // [esp+40h] [ebp-18h] BYREF
  _DWORD v5[4]; // [esp+48h] [ebp-10h] BYREF

  MultiDerived::MultiDerived((MultiDerived *)v4);
  v4[1] = 100;
  v5[1] = 200;
  v1 = 0;
  if ( v4 )
    v1 = v5;
  v3 = (*(int (__cdecl **)(_DWORD *))v4[0])(v4);
  v2 = (*(int (__cdecl **)(_DWORD *))*v1)(v1);
  MultiDerived::~MultiDerived((MultiDerived *)v4);
  return (v4 != v1) + v2 + v3;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1760 */
int test_cpp_diamond_inheritance(void)
{
  int v1; // [esp+10h] [ebp-48h]
  int (__cdecl ***v2)(_DWORD); // [esp+20h] [ebp-38h]
  int v3; // [esp+30h] [ebp-28h]
  _DWORD v4[8]; // [esp+38h] [ebp-20h] BYREF

  DiamondDerived::DiamondDerived((DiamondDerived *)v4);
  *(_DWORD *)((char *)&v4[1] + *(_DWORD *)(v4[0] - 12)) = 50;
  v2 = 0;
  if ( v4 )
    v2 = (int (__cdecl ***)(_DWORD))((char *)v4 + *(_DWORD *)(v4[0] - 12));
  v3 = (**v2)(v2);
  *(_DWORD *)((char *)&v4[1] + *(_DWORD *)(v4[0] - 12)) = 100;
  v1 = (**v2)(v2) + v3;
  DiamondDerived::~DiamondDerived((DiamondDerived *)v4);
  return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1840 */
int test_cpp_operator_overload(void)
{
  int v0; // ecx
  char v2; // [esp+17h] [ebp-21h]
  _DWORD v3[2]; // [esp+18h] [ebp-20h] BYREF
  _BYTE v4[8]; // [esp+20h] [ebp-18h] BYREF
  _BYTE v5[16]; // [esp+28h] [ebp-10h] BYREF

  Point::Point((Point *)v5, 1, 2);
  Point::Point((Point *)v4, 3, 4);
  Point::operator+((Point *)v3);
  v2 = Point::operator==(v5, v4) & 1;
  Point::operator++(v3);
  v0 = 10;
  if ( (v2 & 1) != 0 )
    v0 = 0;
  return v0 + v3[1] + v3[0];
}


/* Function: _Z22test_cpp_template_funcv @ 0x1900 */
int __usercall test_cpp_template_func@<eax>(long double a1@<st0>)
{
  int v2; // [esp+20h] [ebp-18h] BYREF
  int v3; // [esp+24h] [ebp-14h] BYREF
  double v4; // [esp+28h] [ebp-10h]
  int v5; // [esp+30h] [ebp-8h]

  v5 = template_max<int>(3, 7);
  template_max<double>(2.5, 1.5);
  v4 = a1;
  v3 = 10;
  v2 = 20;
  template_swap<int>(&v3, &v2);
  return v2 + v3 + (int)v4 + v5;
}


/* Function: _Z23test_cpp_template_classv @ 0x19B0 */
int test_cpp_template_class(void)
{
  double v1; // [esp+20h] [ebp-98h]
  _BYTE v2[88]; // [esp+28h] [ebp-90h] BYREF
  int Size; // [esp+80h] [ebp-38h]
  int v4; // [esp+84h] [ebp-34h]
  _BYTE v5[48]; // [esp+88h] [ebp-30h] BYREF

  Container<int>::Container(v5);
  Container<int>::push(v5, 10);
  Container<int>::push(v5, 20);
  Container<int>::push(v5, 30);
  v4 = Container<int>::get(v5, 0);
  Size = Container<int>::getSize(v5);
  Container<double>::Container(v2);
  Container<double>::push((int)v2, 3.14);
  v1 = Container<double>::get(v2, 0);
  return (int)v1 + Size + v4;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B20 */
int test_cpp_lambda(void)
{
  int v1; // [esp+14h] [ebp-24h]
  _BYTE v2[8]; // [esp+18h] [ebp-20h] BYREF
  _DWORD v3[3]; // [esp+20h] [ebp-18h] BYREF
  _DWORD v4[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v4[1] = 10;
  v4[0] = 20;
  v3[0] = 10;
  v3[1] = v4;
  v1 = test_cpp_lambda(void)::$_1::operator()(v3, 3);
  return test_cpp_lambda(void)::$_0::operator()<int,int>(v2, 10, 20) + v1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x1BA0 */
int __cdecl test_cpp_lambda(void)::$_1::operator()(int a1, int a2)
{
  **(_DWORD **)(a1 + 4) += 5;
  return **(_DWORD **)(a1 + 4) + *(_DWORD *)a1 * a2;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x1BD0 */
int __cdecl test_cpp_lambda(void)::$_0::operator()<int,int>(int a1, int a2, int a3)
{
  return a3 + a2;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BF0 */
void __noreturn test_cpp_exception(void)
{
  _DWORD *exception; // ecx

  exception = __cxa_allocate_exception(4u);
  *exception = 42;
  __cxa_throw(exception, (struct type_info *)&`typeinfo for'int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D90 */
int test_cpp_smart_ptr(void)
{
  _DWORD *v0; // eax
  int v1; // eax
  int v3; // [esp+14h] [ebp-64h]
  _DWORD *v4; // [esp+1Ch] [ebp-5Ch]
  _DWORD *v5; // [esp+20h] [ebp-58h]
  _DWORD *v6; // [esp+2Ch] [ebp-4Ch]
  _BYTE v7[8]; // [esp+48h] [ebp-30h] BYREF
  _BYTE v8[4]; // [esp+50h] [ebp-28h] BYREF
  int v9; // [esp+54h] [ebp-24h]
  _BYTE v10[4]; // [esp+58h] [ebp-20h] BYREF
  int v11; // [esp+5Ch] [ebp-1Ch]
  _BYTE v12[8]; // [esp+60h] [ebp-18h] BYREF
  _BYTE v13[8]; // [esp+70h] [ebp-8h] BYREF

  v0 = (_DWORD *)operator new(4u);
  *v0 = 100;
  std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(v13, v0);
  *(_DWORD *)std::unique_ptr<int>::operator*(v13) = 200;
  v1 = std::move<std::unique_ptr<int> &>(v13);
  std::unique_ptr<int>::unique_ptr(v12, v1);
  v11 = *(_DWORD *)std::unique_ptr<int>::operator*(v12);
  v6 = (_DWORD *)operator new[](0x14u);
  *v6 = 1;
  v6[1] = 2;
  v6[2] = 3;
  v6[3] = 4;
  v6[4] = 5;
  std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(v10, v6);
  v9 = *(_DWORD *)std::unique_ptr<int []>::operator[](v10, 2);
  v5 = (_DWORD *)operator new(4u);
  *v5 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(v7, v5, v8);
  v4 = (_DWORD *)std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(v7);
  v3 = *v4 + v9 + v11;
  std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(v7);
  std::unique_ptr<int []>::~unique_ptr(v10);
  std::unique_ptr<int>::~unique_ptr(v12);
  std::unique_ptr<int>::~unique_ptr(v13);
  return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1FD0 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
        int a1,
        int a2,
        int a3)
{
  return ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
           a1,
           a2,
           a3);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2020 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(int a1)
{
  return std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2060 */
_DWORD *__cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(int a1)
{
  _DWORD *v1; // eax
  _DWORD *result; // eax
  int deleter; // [esp+10h] [ebp-18h]
  _DWORD *v4; // [esp+20h] [ebp-8h]

  v4 = (_DWORD *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(a1);
    v1 = (_DWORD *)std::move<int *&>(v4);
    test_cpp_smart_ptr(void)::$_2::operator()(deleter, *v1);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _Z13test_cpp_rttiv @ 0x2100 */
size_t test_cpp_rtti(void)
{
  const char *v0; // eax
  RTTIDerivedB *v2; // [esp+28h] [ebp-40h]
  RTTIDerivedA *v3; // [esp+30h] [ebp-38h]
  RTTIDerivedA *v4; // [esp+3Ch] [ebp-2Ch]
  RTTIDerivedB *v5; // [esp+44h] [ebp-24h]
  int v6; // [esp+54h] [ebp-14h]
  size_t v7; // [esp+54h] [ebp-14h]

  v4 = (RTTIDerivedA *)operator new(4u);
  memset(v4, 0, 4u);
  RTTIDerivedA::RTTIDerivedA(v4);
  v5 = (RTTIDerivedB *)operator new(4u);
  memset(v5, 0, 4u);
  RTTIDerivedB::RTTIDerivedB(v5);
  v6 = 0;
  if ( !v4 )
    __cxa_bad_typeid();
  if ( (std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v4 - 4), &`typeinfo for'RTTIDerivedA) & 1) != 0 )
    v6 = 10;
  if ( !v5 )
    __cxa_bad_typeid();
  if ( (std::type_info::operator==(*(_DWORD *)(*(_DWORD *)v5 - 4), &`typeinfo for'RTTIDerivedB) & 1) != 0 )
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
  v0 = (const char *)std::type_info::name(*(std::type_info **)(*(_DWORD *)v4 - 4));
  v7 = v6 + strlen(v0);
  (*(void (__cdecl **)(RTTIDerivedA *))(*(_DWORD *)v4 + 4))(v4);
  (*(void (__cdecl **)(RTTIDerivedB *))(*(_DWORD *)v5 + 4))(v5);
  return v7;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x23A0 */
void __usercall __noreturn test_cpp_oo_features(long double a1@<st0>)
{
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax

  printf(asc_500D);
  v1 = test_cpp_member_func();
  printf(aCppL301D, v1);
  v2 = test_cpp_constructor();
  printf(aCppL302D, v2);
  v3 = test_cpp_virtual_func();
  printf(aCppL303D, v3);
  v4 = test_cpp_multiple_inheritance();
  printf(aCppL304D, v4);
  v5 = test_cpp_diamond_inheritance();
  printf(aCppL305D, v5);
  v6 = test_cpp_operator_overload();
  printf(aCppL306D, v6);
  v7 = test_cpp_template_func(a1);
  printf(aCppL307D, v7);
  v8 = test_cpp_template_class();
  printf(aCppL308D, v8);
  v9 = test_cpp_lambda();
  printf(aCppL309D, v9);
  test_cpp_exception();
}


/* Function: main @ 0x2530 */
int __cdecl main(int argc, const char **argv, const char **envp)
{
  long double v3; // fst7

  test_cpp_oo_features(v3);
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2560 */
int __cdecl ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
        int a1,
        int a2,
        int a3)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
           a1,
           a2,
           a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x25A0 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr(void)::$_2 const&>(
        int a1,
        int a2,
        int a3)
{
  int v3; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
  return std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
           a1,
           &a2,
           v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x25F0 */
int __cdecl std::forward<test_cpp_smart_ptr(void)::$_2 const&>(int a1)
{
  return a1;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2600 */
int __cdecl std::tuple<int *,test_cpp_smart_ptr(void)::$_2>::tuple<int *&,test_cpp_smart_ptr(void)::$_2 const&,true>(
        int a1,
        int a2,
        int a3)
{
  int v3; // esi
  int v5; // [esp+18h] [ebp-10h]

  v5 = std::forward<int *&>(a2);
  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
           a1,
           v5,
           v3);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2680 */
int __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl<int *&,test_cpp_smart_ptr(void)::$_2 const&,void>(
        int a1,
        int a2,
        int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = std::forward<test_cpp_smart_ptr(void)::$_2 const&>(a3);
  std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(a1, v3);
  v4 = std::forward<int *&>(a2);
  return std::_Head_base<0u,int *,false>::_Head_base<int *&>(a1, v4);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2700 */
int __cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_Tuple_impl(int a1, int a2)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(a1, a2);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2740 */
int __cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_Head_base(int a1)
{
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2750 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(int a1)
{
  return std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2780 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(a1);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x27D0 */
void __cdecl test_cpp_smart_ptr(void)::$_2::operator()(int a1, _DWORD *a2)
{
  *a2 = -1;
  if ( a2 )
    operator delete(a2);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2820 */
int __cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2850 */
int __cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2880 */
int __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x28B0 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_deleter(int a1)
{
  return std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x28E0 */
int __cdecl std::get<1u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
  return std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2910 */
int __cdecl std::__get_helper<1u,test_cpp_smart_ptr(void)::$_2>(int a1)
{
  return std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2940 */
int __cdecl std::_Tuple_impl<1u,test_cpp_smart_ptr(void)::$_2>::_M_head(int a1)
{
  return std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2970 */
int __cdecl std::_Head_base<1u,test_cpp_smart_ptr(void)::$_2,true>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2980 */
int __cdecl std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::get(int a1)
{
  return std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x29D0 */
int __cdecl std::__uniq_ptr_impl<int,test_cpp_smart_ptr(void)::$_2>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2A00 */
int __cdecl std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
  return std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2A30 */
int __cdecl std::__get_helper<0u,int *,test_cpp_smart_ptr(void)::$_2>(int a1)
{
  return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2A60 */
int __cdecl std::_Tuple_impl<0u,int *,test_cpp_smart_ptr(void)::$_2>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2A90 */
void __cdecl SimpleClass::SimpleClass(SimpleClass *this, int a2, char *src)
{
  *(_DWORD *)this = a2;
  strncpy((char *)this + 4, src, 0x1Fu);
  *((_BYTE *)this + 35) = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2AE0 */
SimpleClass *__cdecl SimpleClass::setValue(SimpleClass *this, int a2)
{
  SimpleClass *result; // eax

  result = this;
  *(_DWORD *)this = a2;
  return result;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2B00 */
int __cdecl SimpleClass::getValue(SimpleClass *this)
{
  return *(_DWORD *)this;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2B10 */
size_t __cdecl SimpleClass::compute(SimpleClass *this, int a2)
{
  int v3; // [esp+10h] [ebp-8h]

  v3 = a2 * *(_DWORD *)this;
  return strlen((const char *)this + 4) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2B50 */
int SimpleClass::getClassID()
{
  return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2B60 */
void __cdecl LifecycleClass::LifecycleClass(LifecycleClass *this, unsigned int a2)
{
  unsigned int i; // [esp+10h] [ebp-8h]

  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = operator new[](saturated_mul(4u, a2));
  for ( i = 0; i < a2; ++i )
    *(_DWORD *)(*(_DWORD *)this + 4 * i) = 10 * i;
  *(&GLOBAL_OFFSET_TABLE_ + 33) = (Elf32_Dyn *)((char *)*(&GLOBAL_OFFSET_TABLE_ + 33) + 1);
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x2C00 */
int __cdecl LifecycleClass::getData(LifecycleClass *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 1) )
    return -1;
  else
    return *(_DWORD *)(*(_DWORD *)this + 4 * a2);
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2C50 */
int LifecycleClass::getInstanceCount()
{
  return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2C70 */
void __cdecl LifecycleClass::~LifecycleClass(void **this)
{
  if ( *this )
    operator delete[](*this);
  --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x2CC0 */
void __cdecl Base::Base(Base *this)
{
  *(_DWORD *)this = &off_8C3C;
}


/* Function: _ZN7DerivedC2Ei @ 0x2CF0 */
void __cdecl Derived::Derived(Derived *this, int a2)
{
  Base::Base(this);
  *(_DWORD *)this = &GLOBAL_OFFSET_TABLE_ - 233;
  *((_DWORD *)this + 1) = a2;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2D40 */
int __cdecl Base::virtual_func(Base *this, int a2)
{
  return a2 + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2D60 */
int __cdecl Derived::virtual_func(Derived *this, int a2)
{
  return *((_DWORD *)this + 1) * a2;
}


/* Function: _ZN7DerivedD2Ev @ 0x2D80 */
void __cdecl Derived::~Derived(Derived *this)
{
  Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x2DB0 */
void __cdecl Base::~Base()
{
  ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2DC0 */
void __cdecl MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA(this);
  BaseB::BaseB((MultiDerived *)((char *)this + 8));
  *(_DWORD *)this = &GLOBAL_OFFSET_TABLE_ - 224;
  *((_DWORD *)this + 2) = &GLOBAL_OFFSET_TABLE_ - 218;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2E20 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  BaseB::~BaseB((MultiDerived *)((char *)this + 8));
  BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E60 */
void __cdecl DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((DiamondDerived *)((char *)this + 16));
  MiddleA::MiddleA(this);
  MiddleB::MiddleB((DiamondDerived *)((char *)this + 8));
  *(_DWORD *)this = &GLOBAL_OFFSET_TABLE_ - 190;
  *((_DWORD *)this + 4) = &GLOBAL_OFFSET_TABLE_ - 177;
  *((_DWORD *)this + 2) = &GLOBAL_OFFSET_TABLE_ - 184;
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2F00 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  VirtualBase::~VirtualBase((DiamondDerived *)((char *)this + 16));
}


/* Function: _ZN5PointC2Eii @ 0x2F50 */
void __cdecl Point::Point(Point *this, int a2, int a3)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
}


/* Function: _ZNK5PointplERKS_ @ 0x2F70 */
Point *__stdcall Point::operator+(Point *a1, _DWORD *a2, _DWORD *a3)
{
  Point::Point(a1, *a3 + *a2, a3[1] + a2[1]);
  return a1;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2FD0 */
int __cdecl Point::operator==(_DWORD *a1, _DWORD *a2)
{
  bool v3; // [esp+7h] [ebp-1h]

  v3 = 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return v3;
}


/* Function: _ZN5PointppEv @ 0x3020 */
_DWORD *__cdecl Point::operator++(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  ++*a1;
  ++a1[1];
  return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3040 */
int __cdecl template_max<int>(int a1, int a2)
{
  if ( a1 <= a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3070 */
long double __cdecl template_max<double>(double a1, double a2)
{
  if ( a1 <= (long double)a2 )
    return a2;
  else
    return a1;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x30B0 */
int *__cdecl template_swap<int>(int *a1, int *a2)
{
  int *result; // eax
  int v3; // [esp+0h] [ebp-4h]

  v3 = *a1;
  *a1 = *a2;
  result = a2;
  *a2 = v3;
  return result;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x30E0 */
int __cdecl Container<int>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3100 */
int __cdecl Container<int>::push(int a1, int a2)
{
  int result; // eax
  int v3; // ecx

  result = a1;
  if ( *(int *)(a1 + 40) < 10 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 40) = v3 + 1;
    *(_DWORD *)(a1 + 4 * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3140 */
int __cdecl Container<int>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 40) )
    return 0;
  else
    return *(_DWORD *)(a1 + 4 * a2);
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3190 */
int __cdecl Container<int>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 40);
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x31A0 */
int __cdecl Container<double>::Container(int a1)
{
  int result; // eax

  result = a1;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x31C0 */
int __cdecl Container<double>::push(int a1, double a2)
{
  int result; // eax
  int v3; // ecx

  result = a1;
  if ( *(int *)(a1 + 80) < 10 )
  {
    result = a1;
    v3 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v3 + 1;
    *(double *)(a1 + 8 * v3) = a2;
  }
  return result;
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3200 */
long double __cdecl Container<double>::get(int a1, int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 80) )
    return 0.0;
  else
    return *(double *)(a1 + 8 * a2);
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3260 */
int __cdecl Container<double>::getSize(int a1)
{
  return *(_DWORD *)(a1 + 80);
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3270 */
int __cdecl std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(int a1, int a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x32C0 */
int __cdecl std::unique_ptr<int>::operator*(int a1)
{
  return std::unique_ptr<int>::get(a1);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3300 */
int __cdecl std::move<std::unique_ptr<int> &>(int a1)
{
  return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3310 */
int __cdecl std::unique_ptr<int>::unique_ptr(int a1, int a2)
{
  return std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(a1, a2);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3350 */
int __cdecl std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(int a1, int a2)
{
  return ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(a1, a2);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x33A0 */
int __cdecl std::unique_ptr<int []>::operator[](int a1, int a2)
{
  return 4 * a2 + std::unique_ptr<int []>::get(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x33F0 */
_DWORD *__cdecl std::unique_ptr<int []>::~unique_ptr(int a1)
{
  int deleter; // ecx
  _DWORD *result; // eax
  _DWORD *v3; // [esp+10h] [ebp-8h]

  v3 = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  if ( *v3 )
  {
    deleter = std::unique_ptr<int []>::get_deleter(a1);
    std::default_delete<int []>::operator()<int>(deleter, *v3);
  }
  result = v3;
  *v3 = 0;
  return result;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3470 */
_DWORD *__cdecl std::unique_ptr<int>::~unique_ptr(int a1)
{
  int v1; // edx
  _DWORD *result; // eax
  int deleter; // [esp+14h] [ebp-14h]
  _DWORD *v4; // [esp+20h] [ebp-8h]

  v4 = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  if ( *v4 )
  {
    deleter = std::unique_ptr<int>::get_deleter(a1);
    v1 = *(_DWORD *)std::move<int *&>(v4);
    std::default_delete<int>::operator()(deleter, v1);
  }
  result = v4;
  *v4 = 0;
  return result;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3500 */
void __cdecl RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase(this);
  *(_DWORD *)this = &GLOBAL_OFFSET_TABLE_ - 82;
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3540 */
void __cdecl RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase(this);
  *(_DWORD *)this = &GLOBAL_OFFSET_TABLE_ - 72;
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3580 */
int __cdecl std::type_info::operator==(int a1, int a2)
{
  bool v3; // [esp+17h] [ebp-11h]
  char v4; // [esp+23h] [ebp-5h]

  v4 = 1;
  if ( *(_DWORD *)(a1 + 4) != *(_DWORD *)(a2 + 4) )
  {
    v3 = 0;
    if ( **(_BYTE **)(a1 + 4) != 42 )
      v3 = strcmp(*(const char **)(a1 + 4), *(const char **)(a2 + 4)) == 0;
    v4 = v3;
  }
  return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3610 */
int __cdecl RTTIDerivedA::derivedA_data()
{
  return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3620 */
int __cdecl RTTIDerivedB::derivedB_data()
{
  return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3630 */
int __cdecl std::type_info::name(std::type_info *this)
{
  if ( **((_BYTE **)this + 1) == 42 )
    return *((_DWORD *)this + 1) + 1;
  else
    return *((_DWORD *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3670 */
const char *__cdecl Base::getName()
{
  return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3690 */
void __cdecl Base::~Base(Base *this)
{
  Base::~Base();
  operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x36D0 */
const char *__cdecl Derived::getName()
{
  return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x36F0 */
void __cdecl Derived::~Derived(Derived *this)
{
  Derived::~Derived(this);
  operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3730 */
void __cdecl BaseA::BaseA(BaseA *this)
{
  *(_DWORD *)this = &off_8CDC;
}


/* Function: _ZN5BaseBC2Ev @ 0x3760 */
void __cdecl BaseB::BaseB(BaseB *this)
{
  *(_DWORD *)this = &off_8CF0;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3790 */
int __cdecl MultiDerived::funcA()
{
  return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x37A0 */
void __cdecl MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived(this);
  operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x37E0 */
int __cdecl MultiDerived::funcB()
{
  return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x37F0 */
int `non-virtual thunk to'MultiDerived::funcB()
{
  return MultiDerived::funcB();
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3820 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3850 */
void __cdecl `non-virtual thunk to'MultiDerived::~MultiDerived(MultiDerived *this)
{
  MultiDerived::~MultiDerived((MultiDerived *)((char *)this - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3880 */
int __cdecl BaseA::funcA()
{
  return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3890 */
void __cdecl BaseA::~BaseA()
{
  ;
}


/* Function: _ZN5BaseAD0Ev @ 0x38A0 */
void __cdecl BaseA::~BaseA(BaseA *this)
{
  BaseA::~BaseA();
  operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38E0 */
int __cdecl BaseB::funcB()
{
  return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38F0 */
void __cdecl BaseB::~BaseB()
{
  ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3900 */
void __cdecl BaseB::~BaseB(BaseB *this)
{
  BaseB::~BaseB();
  operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3940 */
void __cdecl VirtualBase::VirtualBase(VirtualBase *this)
{
  *(_DWORD *)this = &off_8E2C;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3970 */
void __cdecl MiddleA::MiddleA(MiddleA *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3990 */
void __cdecl MiddleB::MiddleB(MiddleB *this, _DWORD *a2)
{
  *(_DWORD *)this = *a2;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)) = a2[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x39B0 */
int __cdecl MiddleA::func(MiddleA *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x39D0 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA(this);
  VirtualBase::~VirtualBase((MiddleA *)((char *)this + 8));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3A20 */
void __cdecl MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA(this);
  operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x3A60 */
int __cdecl `virtual thunk to'MiddleA::func(MiddleA *this)
{
  return MiddleA::func((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x3A90 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3AC0 */
void __cdecl `virtual thunk to'MiddleA::~MiddleA(MiddleA *this)
{
  MiddleA::~MiddleA((MiddleA *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3AF0 */
int __cdecl MiddleB::func(MiddleB *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3B10 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB(this);
  VirtualBase::~VirtualBase((MiddleB *)((char *)this + 8));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3B60 */
void __cdecl MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB(this);
  operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x3BA0 */
int __cdecl `virtual thunk to'MiddleB::func(MiddleB *this)
{
  return MiddleB::func((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x3BD0 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3C00 */
void __cdecl `virtual thunk to'MiddleB::~MiddleB(MiddleB *this)
{
  MiddleB::~MiddleB((MiddleB *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3C30 */
int __cdecl DiamondDerived::func(DiamondDerived *this)
{
  return *(_DWORD *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12) + 4) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3C50 */
void __cdecl DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived(this);
  operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3C90 */
int __cdecl `non-virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3CC0 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3CF0 */
void __cdecl `non-virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x3D20 */
int __cdecl `virtual thunk to'DiamondDerived::func(DiamondDerived *this)
{
  return DiamondDerived::func((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3D50 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3D80 */
void __cdecl `virtual thunk to'DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
  DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)this + *(_DWORD *)(*(_DWORD *)this - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x3DB0 */
int __cdecl VirtualBase::func()
{
  return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x3DC0 */
void __cdecl VirtualBase::~VirtualBase()
{
  ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3DD0 */
void __cdecl VirtualBase::~VirtualBase(VirtualBase *this)
{
  VirtualBase::~VirtualBase();
  operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3E10 */
void __cdecl MiddleA::~MiddleA()
{
  ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x3E20 */
void __cdecl MiddleB::~MiddleB()
{
  ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x3E30 */
void __cdecl DiamondDerived::~DiamondDerived()
{
  MiddleB::~MiddleB();
  MiddleA::~MiddleA();
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3E90 */
int __cdecl std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(int a1, int a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3ED0 */
_DWORD *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
  int v2; // eax
  _DWORD *result; // eax

  v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(a2);
  std::tuple<int *,std::default_delete<int>>::tuple(a1, v2);
  result = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a2);
  *result = 0;
  return result;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3F50 */
int __cdecl std::move<std::tuple<int *,std::default_delete<int>> &>(int a1)
{
  return a1;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3F60 */
int __cdecl std::tuple<int *,std::default_delete<int>>::tuple(int a1, int a2)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3FA0 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
  return std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: __clang_call_terminate @ 0x3FD0 */
void __cdecl __noreturn _clang_call_terminate(void *a1)
{
  __cxa_begin_catch(a1);
  std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4000 */
_DWORD *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // eax

  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1, a2);
  result = a1;
  *a1 = *a2;
  return result;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4040 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
  return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4050 */
int __cdecl std::get<0u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4080 */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x40B0 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x40E0 */
int __cdecl std::_Head_base<0u,int *,false>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x40F0 */
void __cdecl RTTIBase::RTTIBase(RTTIBase *this)
{
  *(_DWORD *)this = off_8ECC;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4120 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4150 */
void __cdecl RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIDerivedA::~RTTIDerivedA(this);
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4190 */
int __cdecl RTTIDerivedA::getType()
{
  return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x41A0 */
void __cdecl RTTIBase::~RTTIBase()
{
  ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x41B0 */
void __cdecl RTTIBase::~RTTIBase(RTTIBase *this)
{
  RTTIBase::~RTTIBase();
  operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x41F0 */
int __cdecl RTTIBase::getType()
{
  return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4200 */
void __cdecl RTTIDerivedB::~RTTIDerivedB()
{
  RTTIBase::~RTTIBase();
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4230 */
void __cdecl RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIDerivedB::~RTTIDerivedB();
  operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4270 */
int __cdecl RTTIDerivedB::getType()
{
  return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4280 */
int __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(int a1, int a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x42C0 */
_DWORD *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(int a1, int a2)
{
  _DWORD *result; // eax

  std::tuple<int *,std::default_delete<int>>::tuple<true,true>(a1);
  result = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4310 */
int __cdecl std::tuple<int *,std::default_delete<int>>::tuple<true,true>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x4350 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(int a1)
{
  std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(a1);
  return std::_Head_base<0u,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x4390 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(int a1)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x43C0 */
_DWORD *__cdecl std::_Head_base<0u,int *,false>::_Head_base(_DWORD *a1)
{
  _DWORD *result; // eax

  result = a1;
  *a1 = 0;
  return result;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x43E0 */
int __cdecl std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(int a1)
{
  return a1;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F0 */
int __cdecl std::unique_ptr<int>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4440 */
void __cdecl std::default_delete<int>::operator()(int a1, void *a2)
{
  if ( a2 )
    operator delete(a2);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4480 */
int __cdecl std::move<int *&>(int a1)
{
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4490 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(int a1)
{
  return std::get<1u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x44C0 */
int __cdecl std::get<1u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<1u,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x44F0 */
int __cdecl std::__get_helper<1u,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4520 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4550 */
int __cdecl std::_Head_base<1u,std::default_delete<int>,true>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4560 */
int __cdecl std::unique_ptr<int>::get(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B0 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x45E0 */
int __cdecl std::get<0u,int *,std::default_delete<int>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4610 */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4640 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x4670 */
int __cdecl std::_Head_base<0u,int *,false>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4680 */
int __cdecl ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(int a1, int a2)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(a1, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x46C0 */
_DWORD *__cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(int a1, int a2)
{
  _DWORD *result; // eax

  std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(a1);
  result = (_DWORD *)std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
  *result = a2;
  return result;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4710 */
int __cdecl std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(a1);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4750 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
  return std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4780 */
_DWORD *__cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(_DWORD *a1)
{
  std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(a1);
  return std::_Head_base<0u,int *,false>::_Head_base(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x47C0 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(int a1)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x47F0 */
int __cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(int a1)
{
  return a1;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4800 */
int __cdecl std::get<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4830 */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4860 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4890 */
int __cdecl std::unique_ptr<int []>::get_deleter(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(a1);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x48E0 */
void __cdecl std::default_delete<int []>::operator()<int>(int a1, void *a2)
{
  if ( a2 )
    operator delete[](a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4920 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(int a1)
{
  return std::get<1u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4950 */
int __cdecl std::get<1u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<1u,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4980 */
int __cdecl std::__get_helper<1u,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x49B0 */
int __cdecl std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(a1);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x49E0 */
int __cdecl std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(int a1)
{
  return a1;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x49F0 */
int __cdecl std::unique_ptr<int []>::get(int a1)
{
  return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(a1);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4A40 */
int __cdecl std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(int a1)
{
  return *(_DWORD *)std::get<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4A70 */
int __cdecl std::get<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::__get_helper<0u,int *,std::default_delete<int []>>(a1);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4AA0 */
int __cdecl std::__get_helper<0u,int *,std::default_delete<int []>>(int a1)
{
  return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(a1);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4AD0 */
int __cdecl std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(int a1)
{
  return std::_Head_base<0u,int *,false>::_M_head(a1);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B00 */
int __cdecl std::forward<int *&>(int a1)
{
  return a1;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4B10 */
_DWORD *__cdecl std::_Head_base<0u,int *,false>::_Head_base<int *&>(_DWORD *a1, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *result; // eax

  v2 = (_DWORD *)std::forward<int *&>(a2);
  result = a1;
  *a1 = *v2;
  return result;
}


/* Function: __do_global_ctors_aux @ 0x4B50 */
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


/* Function: .term_proc @ 0x4B9C */
void term_proc()
{
  _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9090 */

/* FAILED to decompile: __cxa_finalize @ 0x9094 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9098 */

/* FAILED to decompile: __cxa_begin_catch @ 0x909C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x90A0 */

/* FAILED to decompile: strlen @ 0x90A4 */

/* FAILED to decompile: __cxa_atexit @ 0x90A8 */

/* FAILED to decompile: strcmp @ 0x90B0 */

/* FAILED to decompile: __libc_start_main @ 0x90B4 */

/* FAILED to decompile: _Znaj @ 0x90B8 */

/* FAILED to decompile: strncpy @ 0x90BC */

/* FAILED to decompile: _ZdlPv @ 0x90C0 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90C4 */

/* FAILED to decompile: __dynamic_cast @ 0x90C8 */

/* FAILED to decompile: _ZdaPv @ 0x90CC */

/* FAILED to decompile: printf @ 0x90D4 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90DC */

/* FAILED to decompile: __cxa_end_catch @ 0x90E0 */

/* FAILED to decompile: memset @ 0x90E4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90E8 */

/* FAILED to decompile: __cxa_throw @ 0x90EC */

/* FAILED to decompile: _Unwind_Resume @ 0x90F4 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x90F8 */

/* Total functions decompiled: 221, failed: 24 */
