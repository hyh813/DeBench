/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_clang_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010d2c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: __cxx_global_var_init @ 00010e84 */

void __cxx_global_var_init(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010ed0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  __cxx_global_var_init();
  return;
}



/* Function: _start @ 00010ee4 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010f28 */

/* WARNING: Removing unreachable block (ram,0x00010f3c) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010f4c */

/* WARNING: Removing unreachable block (ram,0x00010f6c) */
/* WARNING: Removing unreachable block (ram,0x00010f78) */
/* WARNING: Removing unreachable block (ram,0x00010f7c) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010f90 */

/* WARNING: Removing unreachable block (ram,0x00010fbc) */
/* WARNING: Removing unreachable block (ram,0x00010fc8) */
/* WARNING: Removing unreachable block (ram,0x00010fcc) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010fe0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: test_cpp_member_func @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass aSStack_2c [36];
  
  SimpleClass::SimpleClass(aSStack_2c,5,"Test");
  SimpleClass::setValue(aSStack_2c,10);
  iVar1 = SimpleClass::getValue(aSStack_2c);
  iVar2 = SimpleClass::compute(aSStack_2c,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 000110c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  LifecycleClass aLStack_14 [8];
  int local_c;
  
  local_c = 0;
  LifecycleClass::LifecycleClass(aLStack_14,5);
  iVar1 = LifecycleClass::getData(aLStack_14,2);
  local_c = local_c + iVar1;
  iVar1 = LifecycleClass::getInstanceCount();
  local_c = local_c + iVar1;
  LifecycleClass::~LifecycleClass(aLStack_14);
  iVar1 = LifecycleClass::getInstanceCount();
  return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 00011174 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined4 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 000111ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Derived aDStack_14 [8];
  Base aBStack_c [4];
  
  Base::Base(aBStack_c);
  Derived::Derived(aDStack_14,3);
  iVar1 = Base::virtual_func(aBStack_c,5);
  iVar2 = Derived::virtual_func(aDStack_14,5);
  iVar3 = call_virtual_func(aBStack_c,5);
  iVar4 = call_virtual_func((Base *)aDStack_14,5);
  Derived::~Derived(aDStack_14);
  Base::~Base(aBStack_c);
  return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 000112c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  MultiDerived *local_38;
  undefined4 *local_18;
  undefined4 local_14;
  MultiDerived local_10 [4];
  undefined4 local_c;
  
  MultiDerived::MultiDerived((MultiDerived *)&local_18);
  local_14 = 100;
  local_c = 200;
  local_38 = (MultiDerived *)0x0;
  if ((MultiDerived *)&local_18 != (MultiDerived *)0x0) {
    local_38 = local_10;
  }
  iVar1 = (*(code *)*local_18)();
  iVar2 = (*(code *)**(undefined4 **)local_38)();
  MultiDerived::~MultiDerived((MultiDerived *)&local_18);
  return iVar1 + iVar2 + (uint)((MultiDerived *)&local_18 != local_38);
}



/* Function: test_cpp_diamond_inheritance @ 000113c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined4 *local_38;
  int local_20 [6];
  
  DiamondDerived::DiamondDerived((DiamondDerived *)local_20);
  *(undefined4 *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 0x32;
  local_38 = (undefined4 *)0x0;
  if ((DiamondDerived *)local_20 != (DiamondDerived *)0x0) {
    local_38 = (undefined4 *)((int)local_20 + *(int *)(local_20[0] + -0xc));
  }
  iVar1 = (**(code **)*local_38)();
  *(undefined4 *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 100;
  iVar2 = (**(code **)*local_38)();
  DiamondDerived::~DiamondDerived((DiamondDerived *)local_20);
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 000114c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
  byte bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  
  Point::Point(aPStack_10,1,2);
  Point::Point(aPStack_18,3,4);
  Point::operator+((Point *)&local_20,aPStack_10);
  bVar1 = Point::operator==(aPStack_10,aPStack_18);
  Point::operator++((Point *)&local_20);
  iVar2 = local_20 + local_1c + 10;
  if ((bVar1 & 1) != 0) {
    iVar2 = local_20 + local_1c;
  }
  return iVar2;
}



/* Function: test_cpp_template_func @ 00011550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  int iVar1;
  undefined4 extraout_r0;
  int iVar2;
  undefined4 extraout_r1;
  double extraout_d0;
  double extraout_d1;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  local_c = template_max<int>(3,7);
  template_max<double>(extraout_d0,extraout_d1);
  local_1c = 10;
  local_20 = 0x14;
  local_18 = extraout_r0;
  local_14 = extraout_r1;
  template_swap<int>(&local_1c,&local_20);
  iVar1 = local_c;
  iVar2 = __aeabi_d2iz(local_18,local_14);
  return iVar1 + iVar2 + local_1c + local_20;
}



/* Function: test_cpp_template_class @ 000115e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_s1;
  undefined8 uVar4;
  Container<double> aCStack_98 [92];
  int local_3c;
  int local_38;
  Container<int> aCStack_34 [44];
  
  Container<int>::Container(aCStack_34);
  Container<int>::push(aCStack_34,10);
  Container<int>::push(aCStack_34,0x14);
  Container<int>::push(aCStack_34,0x1e);
  local_38 = Container<int>::get(aCStack_34,0);
  local_3c = Container<int>::getSize(aCStack_34);
  uVar3 = Container<double>::Container(aCStack_98);
  Container<double>::push((double)CONCAT44(extraout_s1,uVar3));
  uVar4 = Container<double>::get(aCStack_98,0);
  iVar1 = local_38 + local_3c;
  iVar2 = __aeabi_d2iz((int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  return iVar1 + iVar2;
}



/* Function: test_cpp_lambda @ 000116b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
  int iVar1;
  int iVar2;
  __0 a_Stack_1c [4];
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 10;
  local_10 = 0x14;
  local_18 = 10;
  local_14 = &local_10;
  iVar1 = test_cpp_lambda()::$_1::operator()((__1 *)&local_18,3);
  iVar2 = test_cpp_lambda()::$_0::operator()(a_Stack_1c,10,0x14);
  return iVar1 + iVar2;
}



/* Function: operator() @ 00011724 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::$_1::operator()(__1 *this,int param_1)

{
  **(int **)(this + 4) = **(int **)(this + 4) + 5;
  return param_1 * *(int *)this + **(int **)(this + 4);
}



/* Function: operator() @ 00011760 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda()::$_0::operator()(__0 *this,int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: test_cpp_exception @ 00011784 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000118f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
  int *piVar1;
  undefined4 *puVar2;
  type *ptVar3;
  int iVar4;
  int iVar5;
  unique_ptr<int,test_cpp_smart_ptr()::__2> auStack_2c [4];
  __2 a_Stack_28 [4];
  int local_24;
  unique_ptr<int[],std::default_delete<int[]>> auStack_20 [4];
  int local_1c;
  unique_ptr<int,std::default_delete<int>> auStack_18 [12];
  unique_ptr<int,std::default_delete<int>> auStack_c [4];
  
  piVar1 = operator_new(4);
  *piVar1 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
            (auStack_c,piVar1);
  puVar2 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_c);
  *puVar2 = 200;
  ptVar3 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)auStack_c);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_18,(unique_ptr *)ptVar3);
  piVar1 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_18);
  local_1c = *piVar1;
  piVar1 = operator_new__(0x14);
  *piVar1 = 1;
  piVar1[1] = 2;
  piVar1[2] = 3;
  piVar1[3] = 4;
  piVar1[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr<int*,std::default_delete<int[]>,void,bool>(auStack_20,piVar1);
  piVar1 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](auStack_20,2);
  local_24 = *piVar1;
  piVar1 = operator_new(4);
  *piVar1 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::__2,void>
            (auStack_2c,piVar1,a_Stack_28);
  piVar1 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator*(auStack_2c);
  iVar4 = *piVar1;
  iVar5 = local_1c + local_24;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr(auStack_2c);
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(auStack_20);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_18);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_c);
  return iVar5 + iVar4;
}



/* Function: unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 00011acc */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,
   void>(int*, test_cpp_smart_ptr()::$_2 const&) */

unique_ptr<int,test_cpp_smart_ptr()::__2> * __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::__2,void>
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
  __uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
            ((__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *)this,param_1,param_2);
  return this;
}



/* Function: operator* @ 00011b10 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator*
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  get(this);
  return;
}



/* Function: ~unique_ptr @ 00011b44 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::~unique_ptr() */

unique_ptr<int,test_cpp_smart_ptr()::__2> * __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  int **ppiVar1;
  __2 *this_00;
  type *ptVar2;
  
  ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                              ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (__2 *)get_deleter(this);
    ptVar2 = move<int*&>(ppiVar1);
    test_cpp_smart_ptr()::$_2::operator()(this_00,*(int **)ptVar2);
  }
  *ppiVar1 = (int *)0x0;
  return this;
}



/* Function: test_cpp_rtti @ 00011bd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  int iVar1;
  char *__s;
  size_t sVar2;
  int local_44;
  int local_3c;
  int local_14;
  
  this = operator_new(4);
  *(undefined4 *)this = 0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(4);
  *(undefined4 *)this_00 = 0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  local_14 = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
  }
  iVar1 = std::type_info::operator==
                    (*(type_info **)(*(int *)this + -4),(type_info *)&RTTIDerivedA::typeinfo);
  if (iVar1 != 0) {
    local_14 = 10;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
  }
  iVar1 = std::type_info::operator==
                    (*(type_info **)(*(int *)this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
  if (iVar1 != 0) {
    local_14 = local_14 + 0x14;
  }
  if (this == (RTTIDerivedA *)0x0) {
    local_3c = 0;
  }
  else {
    local_3c = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_3c != 0) {
    iVar1 = RTTIDerivedA::derivedA_data();
    local_14 = local_14 + iVar1;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (local_44 != 0) {
    iVar1 = RTTIDerivedB::derivedB_data();
    local_14 = local_14 + iVar1;
  }
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
  }
  __s = (char *)std::type_info::name(*(type_info **)(*(int *)this + -4));
  sVar2 = strlen(__s);
  if (this != (RTTIDerivedA *)0x0) {
    (**(code **)(*(int *)this + 4))();
  }
  if (this_00 != (RTTIDerivedB *)0x0) {
    (**(code **)(*(int *)this_00 + 4))();
  }
  return local_14 + sVar2;
}



/* Function: test_cpp_oo_features @ 00011e74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined4 uVar1;
  
  printf(&DAT_00014221);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00014246,uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_00014264,uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_00014280,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_0001429c,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000142b8,uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_000142d5,uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_000142f1,uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_0001430d,uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00014329,uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00014345,uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_00014362,uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_0001437f,uVar1);
  return;
}



/* Function: main @ 00011fb4 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 00011fe0 */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true,
   false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)
    */

__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> * __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
          (__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *this,int *param_1,__2 *param_2
          )

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this,param_1,param_2);
  return this;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0001201c */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2
   const&>(int*, test_cpp_smart_ptr()::$_2 const&) */

__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> * __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
  __2 *p_Var1;
  int *local_10;
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *local_c;
  
  local_10 = param_1;
  local_c = this;
  p_Var1 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
            ((tuple<int*,test_cpp_smart_ptr()::__2> *)this,&local_10,p_Var1);
  return this;
}



/* Function: forward<test_cpp_smart_ptr()::$_2_const&> @ 00012064 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2
   const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&) */

__2 * std::forward<test_cpp_smart_ptr()::__2_const&>(type *param_1)

{
  return (__2 *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 00012078 */

/* std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&,
   true>(int*&, test_cpp_smart_ptr()::$_2 const&) */

tuple<int*,test_cpp_smart_ptr()::__2> * __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
          (tuple<int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
  int **ppiVar1;
  __2 *p_Var2;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  p_Var2 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
  _Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
  _Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
            ((_Tuple_impl<0u,int*,test_cpp_smart_ptr()::__2> *)this,ppiVar1,p_Var2);
  return this;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 000120d4 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,
   test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&) */

_Tuple_impl<0u,int*,test_cpp_smart_ptr()::__2> * __thiscall
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
          (_Tuple_impl<0u,int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
  int **ppiVar1;
  
  forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
  _Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
  ppiVar1 = forward<int*&>((type *)param_1);
  _Head_base<0u,int*,false>::_Head_base<int*&>((_Head_base<0u,int*,false> *)this,ppiVar1);
  return this;
}



/* Function: _Tuple_impl @ 0001212c */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&) */

__2 * std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
  return param_1;
}



/* Function: _Head_base @ 00012160 */

/* std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2
   const&) */

__2 * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)

{
  return param_1;
}



/* Function: _M_ptr @ 00012178 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
  get<0u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
  return;
}



/* Function: get_deleter @ 0001219c */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
                    ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
  return uVar1;
}



/* Function: operator() @ 000121d0 */

/* test_cpp_smart_ptr()::$_2::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall test_cpp_smart_ptr()::$_2::operator()(__2 *this,int *param_1)

{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0001221c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<0u, int*,
   test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std::get<0u,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 00012240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2>&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00012264 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2>&) */

void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_deleter @ 00012288 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
  get<1u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
  return;
}



/* Function: get<1u,int*,test_cpp_smart_ptr()::$_2> @ 000122ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<1u, int*,
   test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std::get<1u,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
  __2 *p_Var1;
  
  p_Var1 = __get_helper<1u,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}



/* Function: __get_helper<1u,test_cpp_smart_ptr()::$_2> @ 000122d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2& std::__get_helper<1u, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::$_2>&) */

__2 * std::__get_helper<1u,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
  __2 *p_Var1;
  
  p_Var1 = (__2 *)_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return p_Var1;
}



/* Function: _M_head @ 000122f4 */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::$_2>&) */

void std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00012318 */

/* std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1u,
   test_cpp_smart_ptr()::$_2, true>&) */

_Head_base * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 0001232c */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                    ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
  return uVar1;
}



/* Function: _M_ptr @ 00012360 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::$_2> @ 00012388 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type const& std::get<0u,
   int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&) */

type * std::get<0u,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 000123ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2> const&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 000123d0 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2> const&) */

void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: SimpleClass @ 000123f4 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}



/* Function: setValue @ 00012444 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
  *(int *)this = param_1;
  return;
}



/* Function: getValue @ 00012464 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return *(undefined4 *)this;
}



/* Function: compute @ 0001247c */

/* SimpleClass::compute(int) const */

int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  sVar1 = strlen((char *)(this + 4));
  return iVar2 * param_1 + sVar1;
}



/* Function: getClassID @ 000124c4 */

/* SimpleClass::getClassID() */

undefined4 SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 000124d0 */

/* LifecycleClass::LifecycleClass(unsigned int) */

LifecycleClass * __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  uint local_18;
  
  *(uint *)(this + 4) = param_1;
  uVar1 = param_1 << 2;
  if (param_1 != (param_1 & 0x3fffffff)) {
    uVar1 = 0xffffffff;
  }
  pvVar2 = operator_new__(uVar1);
  *(void **)this = pvVar2;
  for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
    *(uint *)(*(int *)this + local_18 * 4) = local_18 * 10;
  }
  instance_count = instance_count + 1;
  return this;
}



/* Function: getData @ 0001259c */

/* LifecycleClass::getData(unsigned int) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)

{
  undefined4 local_10;
  
  if (param_1 < *(uint *)(this + 4)) {
    local_10 = *(undefined4 *)(*(int *)this + param_1 * 4);
  }
  else {
    local_10 = 0xffffffff;
  }
  return local_10;
}



/* Function: getInstanceCount @ 000125f4 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: ~LifecycleClass @ 00012604 */

/* LifecycleClass::~LifecycleClass() */

LifecycleClass * __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return this;
}



/* Function: Base @ 0001266c */

/* Base::Base() */

void __thiscall Base::Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00024c48;
  return;
}



/* Function: Derived @ 00012694 */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00024c68;
  *(int *)(this + 4) = param_1;
  return;
}



/* Function: virtual_func @ 000126e0 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: virtual_func @ 000126fc */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 4);
}



/* Function: ~Derived @ 00012720 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  Base::~Base((Base *)this);
  return this;
}



/* Function: ~Base @ 0001274c */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  return this;
}



/* Function: MultiDerived @ 00012760 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 8));
  *(undefined ***)this = &PTR_funcA_00024c8c;
  *(undefined ***)(this + 8) = &PTR_funcB_00024ca4;
  return;
}



/* Function: ~MultiDerived @ 000127b4 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  BaseB::~BaseB((BaseB *)(this + 8));
  BaseA::~BaseA((BaseA *)this);
  return this;
}



/* Function: DiamondDerived @ 000127ec */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 8));
  *(undefined ***)this = &PTR_func_00024d14;
  *(undefined ***)(this + 0x10) = &PTR_func_00024d48;
  *(undefined ***)(this + 8) = &PTR_func_00024d2c;
  return;
}



/* Function: ~DiamondDerived @ 00012870 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
  return this;
}



/* Function: Point @ 000128b4 */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}



/* Function: operator+ @ 000128e0 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

void __thiscall Point::operator+(Point *this,Point *param_1)

{
  int *in_r2;
  
  Point(this,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
  return;
}



/* Function: operator== @ 00012924 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point::operator==(Point *this,Point *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)this == *(int *)param_1) {
    bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
  }
  return bVar1;
}



/* Function: operator++ @ 0001298c */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point::operator++(Point *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}



/* Function: template_max<int> @ 000129b8 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  int local_c;
  
  local_c = param_2;
  if (param_2 < param_1) {
    local_c = param_1;
  }
  return local_c;
}



/* Function: template_max<double> @ 000129fc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012a28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0),in_r0,in_r1,
                 in_r2,in_r3);
  return param_1;
}



/* Function: template_swap<int> @ 00012a74 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00012ab0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00012acc */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x28) < 10) {
    iVar1 = *(int *)(this + 0x28);
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 00012b14 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 local_4;
  
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined4 *)(this + param_1 * 4);
  }
  return local_4;
}



/* Function: getSize @ 00012b7c */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00012b94 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00012bb0 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar2;
  
  if (*(int *)(in_r0 + 0x50) < 10) {
    iVar2 = *(int *)(in_r0 + 0x50);
    *(int *)(in_r0 + 0x50) = iVar2 + 1;
    puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
    *puVar1 = in_r2;
    puVar1[1] = in_r3;
  }
  return SUB84(param_1,0);
}



/* Function: get @ 00012c04 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    local_4 = 0;
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(this + param_1 * 8);
    local_4 = *(undefined4 *)(this + param_1 * 8 + 4);
  }
  return CONCAT44(local_4,local_8);
}



/* Function: getSize @ 00012c7c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00012c94 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
    */

unique_ptr<int,std::default_delete<int>> * __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
          (unique_ptr<int,std::default_delete<int>> *this,int *param_1)

{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,param_1);
  return this;
}



/* Function: operator* @ 00012cd0 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
          (unique_ptr<int,std::default_delete<int>> *this)

{
  get(this);
  return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00012d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
   std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
   std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
  return (type *)param_1;
}



/* Function: unique_ptr @ 00012d18 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
   std::default_delete<int> >&&) */

unique_ptr<int,std::default_delete<int>> * __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr<int,std::default_delete<int>> *this,unique_ptr *param_1)

{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,
             (__uniq_ptr_data *)param_1);
  return this;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00012d4c */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
   []>, void, bool>(int*) */

unique_ptr<int[],std::default_delete<int[]>> * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr<int*,std::default_delete<int[]>,void,bool>
          (unique_ptr<int[],std::default_delete<int[]>> *this,int *param_1)

{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *)this,param_1);
  return this;
}



/* Function: operator[] @ 00012d88 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
          (unique_ptr<int[],std::default_delete<int[]>> *this,uint param_1)

{
  int iVar1;
  
  iVar1 = get(this);
  return iVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 00012dc8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

unique_ptr<int[],std::default_delete<int[]>> * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  int *piVar1;
  default_delete<int[]> *this_00;
  
  piVar1 = (int *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  if (*piVar1 != 0) {
    this_00 = (default_delete<int[]> *)get_deleter(this);
    default_delete<int[]>::operator()(this_00,(int *)*piVar1);
  }
  *piVar1 = 0;
  return this;
}



/* Function: ~unique_ptr @ 00012e3c */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

unique_ptr<int,std::default_delete<int>> * __thiscall
std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
          (unique_ptr<int,std::default_delete<int>> *this)

{
  int **ppiVar1;
  default_delete<int> *this_00;
  type *ptVar2;
  
  ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                              ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (default_delete<int> *)get_deleter(this);
    ptVar2 = move<int*&>(ppiVar1);
    default_delete<int>::operator()(this_00,*(int **)ptVar2);
  }
  *ppiVar1 = (int *)0x0;
  return this;
}



/* Function: RTTIDerivedA @ 00012ec0 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00024ec4;
  return;
}



/* Function: RTTIDerivedB @ 00012f00 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00024eec;
  return;
}



/* Function: operator== @ 00012f40 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(int *)(this + 4) != *(int *)(param_1 + 4)) && (bVar2 = false, **(char **)(this + 4) != '*')
     ) {
    iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



/* Function: derivedA_data @ 00012fe0 */

/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA::derivedA_data(void)

{
  return 100;
}



/* Function: derivedB_data @ 00012ff4 */

/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB::derivedB_data(void)

{
  return 200;
}



/* Function: name @ 00013008 */

/* std::type_info::name() const */

int __thiscall std::type_info::name(type_info *this)

{
  int local_c;
  
  if (**(char **)(this + 4) == '*') {
    local_c = *(int *)(this + 4) + 1;
  }
  else {
    local_c = *(int *)(this + 4);
  }
  return local_c;
}



/* Function: getName @ 0001305c */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_0001439d;
}



/* Function: ~Base @ 00013078 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this);
  return;
}



/* Function: getName @ 000130a8 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: ~Derived @ 000130c4 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
  operator_delete(this);
  return;
}



/* Function: BaseA @ 000130f4 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00024ce8;
  return;
}



/* Function: BaseB @ 0001311c */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00024cfc;
  return;
}



/* Function: funcA @ 00013144 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 00013158 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 00013188 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 0001319c */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB();
  return;
}



/* Function: ~MultiDerived @ 000131b4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~MultiDerived @ 000131d0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: funcA @ 000131e8 */

/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 000131fc */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA::~BaseA(BaseA *this)

{
  return this;
}



/* Function: ~BaseA @ 00013210 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 00013240 */

/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 00013254 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB::~BaseB(BaseB *this)

{
  return this;
}



/* Function: ~BaseB @ 00013268 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this);
  return;
}



/* Function: VirtualBase @ 00013298 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00024e38;
  return;
}



/* Function: MiddleA @ 000132c0 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
  undefined4 *in_r1;
  
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return;
}



/* Function: MiddleB @ 000132f4 */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
  undefined4 *in_r1;
  
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return;
}



/* Function: func @ 00013328 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 00013350 */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 8));
  return this;
}



/* Function: ~MiddleA @ 00013394 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this);
  operator_delete(this);
  return;
}



/* Function: func @ 000133c4 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: ~MiddleA @ 000133e4 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MiddleA @ 00013408 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00013428 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 00013450 */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 8));
  return this;
}



/* Function: ~MiddleB @ 00013494 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this);
  operator_delete(this);
  return;
}



/* Function: func @ 000134c4 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: ~MiddleB @ 000134e4 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MiddleB @ 00013508 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00013528 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00013550 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this);
  return;
}



/* Function: func @ 00013580 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00013598 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 000135b4 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: func @ 000135cc */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: ~DiamondDerived @ 000135ec */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~DiamondDerived @ 00013610 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00013630 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 00013644 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return this;
}



/* Function: ~VirtualBase @ 00013658 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this);
  return;
}



/* Function: ~MiddleA @ 00013688 */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return this;
}



/* Function: ~MiddleB @ 000136a0 */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 000136b8 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  MiddleB::~MiddleB((MiddleB *)(this + 8));
  MiddleA::~MiddleA((MiddleA *)this);
  return this;
}



/* Function: __uniq_ptr_data @ 00013708 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
   true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

__uniq_ptr_data<int,std::default_delete<int>,true,true> * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,__uniq_ptr_data *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,(__uniq_ptr_impl *)param_1);
  return this;
}



/* Function: __uniq_ptr_impl @ 0001373c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
   std::default_delete<int> >&&) */

__uniq_ptr_impl<int,std::default_delete<int>> * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
  type *ptVar1;
  undefined4 *puVar2;
  
  ptVar1 = move<std::tuple<int*,std::default_delete<int>>&>((tuple *)param_1);
  tuple<int*,std::default_delete<int>>::tuple
            ((tuple<int*,std::default_delete<int>> *)this,(tuple *)ptVar1);
  puVar2 = (undefined4 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
  *puVar2 = 0;
  return this;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 0001379c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
   std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
   >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
  return (type *)param_1;
}



/* Function: tuple @ 000137b0 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
    */

tuple<int*,std::default_delete<int>> * __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int>> *)this,(_Tuple_impl *)param_1);
  return this;
}



/* Function: _M_ptr @ 000137e4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<0u,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: __clang_call_terminate @ 00013808 */

void __clang_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



/* Function: _Tuple_impl @ 00013810 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&&) */

void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int>> *this,_Tuple_impl *param_1)

{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined4 *)this = *(undefined4 *)param_1;
  return;
}



/* Function: _Tuple_impl @ 00013850 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
   std::default_delete<int> >&&) */

_Tuple_impl * std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
  return param_1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00013868 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type& std::get<0u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 0001388c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 000138b0 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 000138d4 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false>&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: RTTIBase @ 000138e8 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00024ed8;
  return;
}



/* Function: ~RTTIDerivedA @ 00013910 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return this;
}



/* Function: ~RTTIDerivedA @ 0001393c */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 0001396c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 00013980 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return this;
}



/* Function: ~RTTIBase @ 00013994 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 000139c4 */

/* RTTIBase::getType() const */

undefined4 RTTIBase::getType(void)

{
  return 0;
}



/* Function: ~RTTIDerivedB @ 000139d8 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return this;
}



/* Function: ~RTTIDerivedB @ 00013a04 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00013a34 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: __uniq_ptr_impl @ 00013a48 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data<int,std::default_delete<int>,true,true> * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
  return this;
}



/* Function: __uniq_ptr_impl @ 00013a7c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

__uniq_ptr_impl<int,std::default_delete<int>> * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
  undefined4 *puVar1;
  
  tuple<int*,std::default_delete<int>>::tuple<true,true>
            ((tuple<int*,std::default_delete<int>> *)this);
  puVar1 = (undefined4 *)_M_ptr(this);
  *puVar1 = param_1;
  return this;
}



/* Function: tuple<true,true> @ 00013ac8 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

tuple<int*,std::default_delete<int>> * __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
          (tuple<int*,std::default_delete<int>> *this)

{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int>> *)this);
  return this;
}



/* Function: _Tuple_impl @ 00013afc */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl<0u,int*,std::default_delete<int>> * __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int>> *this)

{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<1u,std::default_delete<int>> *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base<0u,int*,false> *)this);
  return this;
}



/* Function: _Tuple_impl @ 00013b30 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl<1u,std::default_delete<int>> * __thiscall
std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<1u,std::default_delete<int>> *this)

{
  _Head_base<1u,std::default_delete<int>,true>::_Head_base
            ((_Head_base<1u,std::default_delete<int>,true> *)this);
  return this;
}



/* Function: _Head_base @ 00013b5c */

/* std::_Head_base<0u, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0u,int*,false>::_Head_base(_Head_base<0u,int*,false> *this)

{
  *(undefined4 *)this = 0;
  return;
}



/* Function: _Head_base @ 00013b78 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_Head_base() */

_Head_base<1u,std::default_delete<int>,true> * __thiscall
std::_Head_base<1u,std::default_delete<int>,true>::_Head_base
          (_Head_base<1u,std::default_delete<int>,true> *this)

{
  return this;
}



/* Function: get_deleter @ 00013b8c */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr<int,std::default_delete<int>> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
                    ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return uVar1;
}



/* Function: operator() @ 00013bc0 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}



/* Function: move<int*&> @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
  return (type *)param_1;
}



/* Function: _M_deleter @ 00013c14 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<1u,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: get<1u,int*,std::default_delete<int>> @ 00013c38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int> > >::type& std::get<1u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1u,int*,std::default_delete<int>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: __get_helper<1u,std::default_delete<int>> @ 00013c5c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1u, std::default_delete<int>>(std::_Tuple_impl<1u,
   std::default_delete<int>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}



/* Function: _M_head @ 00013c80 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int> >&) */

void std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00013ca4 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 00013cb8 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return uVar1;
}



/* Function: _M_ptr @ 00013cec */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00013d14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0u,
   int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00013d38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00013d5c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00013d80 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false> const&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: __uniq_ptr_impl @ 00013d94 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data<int,std::default_delete<int[]>,true,true> * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
  return this;
}



/* Function: __uniq_ptr_impl @ 00013dc8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

__uniq_ptr_impl<int,std::default_delete<int[]>> * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
  undefined4 *puVar1;
  
  tuple<int*,std::default_delete<int[]>>::tuple<true,true>
            ((tuple<int*,std::default_delete<int[]>> *)this);
  puVar1 = (undefined4 *)_M_ptr(this);
  *puVar1 = param_1;
  return this;
}



/* Function: tuple<true,true> @ 00013e14 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

tuple<int*,std::default_delete<int[]>> * __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
          (tuple<int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int[]>> *)this);
  return this;
}



/* Function: _M_ptr @ 00013e48 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: _Tuple_impl @ 00013e6c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl<0u,int*,std::default_delete<int[]>> * __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<1u,std::default_delete<int[]>> *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base<0u,int*,false> *)this);
  return this;
}



/* Function: _Tuple_impl @ 00013ea0 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl<1u,std::default_delete<int[]>> * __thiscall
std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<1u,std::default_delete<int[]>> *this)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_Head_base
            ((_Head_base<1u,std::default_delete<int[]>,true> *)this);
  return this;
}



/* Function: _Head_base @ 00013ecc */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_Head_base() */

_Head_base<1u,std::default_delete<int[]>,true> * __thiscall
std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base
          (_Head_base<1u,std::default_delete<int[]>,true> *this)

{
  return this;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00013ee0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00013f04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00013f28 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: get_deleter @ 00013f4c */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
                    ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return uVar1;
}



/* Function: operator() @ 00013f80 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
   []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: _M_deleter @ 00013fc0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<1u,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: get<1u,int*,std::default_delete<int[]>> @ 00013fe4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: __get_helper<1u,std::default_delete<int[]>> @ 00014008 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1u, std::default_delete<int
   []>>(std::_Tuple_impl<1u, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}



/* Function: _M_head @ 0001402c */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00014050 */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 00014064 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                    ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return uVar1;
}



/* Function: _M_ptr @ 00014098 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 000140c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type const& std::get<0u,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> > const&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 000140e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00014108 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: forward<int*&> @ 0001412c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00014140 */

/* std::_Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std::_Head_base<0u,int*,false>::_Head_base<int*&>(_Head_base<0u,int*,false> *this,int **param_1)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}



/* Function: _fini @ 00014180 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 214 */
