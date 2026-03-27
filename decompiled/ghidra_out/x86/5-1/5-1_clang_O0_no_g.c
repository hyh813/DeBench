/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/5-1/5-1_clang_O0_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00011000 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}



/* Function: FUN_00011030 @ 00011030 */

void FUN_00011030(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: __cxx_global_var_init @ 000111a0 */

void __cxx_global_var_init(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 000111f0 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  __cxx_global_var_init();
  return;
}



/* Function: _start @ 00011210 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001123c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011240 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011250 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001126b) */
/* WARNING: Removing unreachable block (ram,0x00011275) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011290 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112be) */
/* WARNING: Removing unreachable block (ram,0x000112c8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000112e0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001133c) */
/* WARNING: Removing unreachable block (ram,0x00011340) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011379 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001137d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: test_cpp_member_func @ 00011390 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass local_2c [36];
  
  SimpleClass::SimpleClass(local_2c,5,"Test");
  SimpleClass::setValue(local_2c,10);
  iVar1 = SimpleClass::getValue(local_2c);
  iVar2 = SimpleClass::compute(local_2c,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  LifecycleClass local_14 [8];
  int local_c;
  
  local_c = 0;
  LifecycleClass::LifecycleClass(local_14,5);
                    /* try { // try from 00011459 to 00011483 has its CatchHandler @ 000114c0 */
  iVar1 = LifecycleClass::getData(local_14,2);
  local_c = local_c + iVar1;
  iVar1 = LifecycleClass::getInstanceCount();
  local_c = iVar1 + local_c;
  LifecycleClass::~LifecycleClass(local_14);
  iVar1 = LifecycleClass::getInstanceCount();
  return iVar1 * 1000 + local_c;
}



/* Function: call_virtual_func @ 000114f0 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined4 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 00011520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Derived local_14 [8];
  Base local_c [4];
  
  Base::Base(local_c);
                    /* try { // try from 00011545 to 00011557 has its CatchHandler @ 0001162d */
  Derived::Derived(local_14,3);
                    /* try { // try from 0001155d to 000115ea has its CatchHandler @ 00011638 */
  iVar1 = Base::virtual_func(local_c,5);
  iVar2 = Derived::virtual_func(local_14,5);
  iVar3 = call_virtual_func(local_c,5);
  iVar4 = call_virtual_func((Base *)local_14,5);
  Derived::~Derived(local_14);
  Base::~Base(local_c);
  return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined4 **local_3c;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  
  MultiDerived::MultiDerived((MultiDerived *)&local_1c);
  local_18 = 100;
  local_10 = 200;
  local_3c = (undefined4 **)0x0;
  if (&stack0x00000000 != (undefined1 *)0x1c) {
    local_3c = &local_14;
  }
                    /* try { // try from 000116d0 to 000116f3 has its CatchHandler @ 0001173b */
  iVar1 = (*(code *)*local_1c)(&local_1c);
  iVar2 = (*(code *)**local_3c)(local_3c);
  MultiDerived::~MultiDerived((MultiDerived *)&local_1c);
  return iVar1 + iVar2 + (uint)(&local_1c != local_3c);
}



/* Function: test_cpp_diamond_inheritance @ 00011760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined4 *local_3c;
  int local_24 [7];
  
  DiamondDerived::DiamondDerived((DiamondDerived *)local_24);
  *(undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 0x32;
  local_3c = (undefined4 *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x24) {
    local_3c = (undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc));
  }
                    /* try { // try from 000117be to 000117ef has its CatchHandler @ 0001181e */
  iVar1 = (**(code **)*local_3c)(local_3c);
  *(undefined4 *)((int)local_24 + *(int *)(local_24[0] + -0xc) + 4) = 100;
  iVar2 = (**(code **)*local_3c)(local_3c);
  DiamondDerived::~DiamondDerived((DiamondDerived *)local_24);
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00011840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
  byte bVar1;
  int iVar2;
  int local_24;
  int local_20;
  Point local_1c [8];
  Point local_14 [12];
  
  Point::Point(local_14,1,2);
  Point::Point(local_1c,3,4);
  Point::operator+((Point *)&local_24,local_14);
  bVar1 = Point::operator==(local_14,local_1c);
  Point::operator++((Point *)&local_24);
  iVar2 = 10;
  if ((bVar1 & 1) != 0) {
    iVar2 = 0;
  }
  return local_24 + local_20 + iVar2;
}



/* Function: test_cpp_template_func @ 00011900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  int local_1c;
  int local_18;
  double local_14;
  int local_c;
  
  local_c = template_max<int>(3,7);
  local_14 = template_max<double>(2.5,1.5);
  local_18 = 10;
  local_1c = 0x14;
  template_swap<int>(&local_18,&local_1c);
  return local_c + (int)ROUND(local_14) + local_18 + local_1c;
}



/* Function: test_cpp_template_class @ 000119b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  longdouble lVar1;
  Container<double> local_94 [88];
  int local_3c;
  int local_38;
  Container<int> local_34 [44];
  
  Container<int>::Container(local_34);
  Container<int>::push(local_34,10);
  Container<int>::push(local_34,0x14);
  Container<int>::push(local_34,0x1e);
  local_38 = Container<int>::get(local_34,0);
  local_3c = Container<int>::getSize(local_34);
  Container<double>::Container(local_94);
  Container<double>::push(local_94,3.14);
  lVar1 = (longdouble)Container<double>::get(local_94,0);
  return local_38 + local_3c + (int)ROUND((double)lVar1);
}



/* Function: test_cpp_lambda @ 00011b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
  int iVar1;
  int iVar2;
  __0 local_24 [8];
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = 10;
  local_10 = 0x14;
  local_1c = 10;
  local_18 = &local_10;
  iVar1 = test_cpp_lambda()::$_1::operator()((__1 *)&local_1c,3);
  iVar2 = test_cpp_lambda()::$_0::operator()(local_24,10,0x14);
  return iVar1 + iVar2;
}



/* Function: operator() @ 00011ba0 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::$_1::operator()(__1 *this,int param_1)

{
  **(int **)(this + 4) = **(int **)(this + 4) + 5;
  return param_1 * *(int *)this + **(int **)(this + 4);
}



/* Function: operator() @ 00011bd0 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda()::$_0::operator()(__0 *this,int param_1,int param_2)

{
  return param_1 + param_2;
}



/* Function: test_cpp_exception @ 00011bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 00011c25 to 00011c3d has its CatchHandler @ 00011c43 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  type *ptVar4;
  int iVar5;
  unique_ptr<int,test_cpp_smart_ptr()::__2> local_34 [8];
  __2 local_2c [4];
  int local_28;
  unique_ptr<int[],std::default_delete<int[]>> local_24 [4];
  int local_20;
  unique_ptr<int,std::default_delete<int>> local_1c [16];
  unique_ptr<int,std::default_delete<int>> local_c [4];
  
  piVar2 = operator_new(4);
  *piVar2 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
            (local_c,piVar2);
                    /* try { // try from 00011dd6 to 00011dde has its CatchHandler @ 00011f55 */
  puVar3 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(local_c);
  *puVar3 = 200;
  ptVar4 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)local_c);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(local_1c,(unique_ptr *)ptVar4);
                    /* try { // try from 00011e1c to 00011e44 has its CatchHandler @ 00011f60 */
  piVar2 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(local_1c);
  local_20 = *piVar2;
  piVar2 = operator_new__(0x14);
  *piVar2 = 1;
  piVar2[1] = 2;
  piVar2[2] = 3;
  piVar2[3] = 4;
  piVar2[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr<int*,std::default_delete<int[]>,void,bool>(local_24,piVar2);
                    /* try { // try from 00011e8d to 00011ebc has its CatchHandler @ 00011f6b */
  piVar2 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](local_24,2);
  local_28 = *piVar2;
  piVar2 = operator_new(4);
  *piVar2 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::__2,void>
            (local_34,piVar2,local_2c);
                    /* try { // try from 00011eef to 00011ef7 has its CatchHandler @ 00011f76 */
  piVar2 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator*(local_34);
  iVar1 = *piVar2;
  iVar5 = local_20 + local_28;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr(local_34);
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(local_24);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(local_1c);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(local_c);
  return iVar5 + iVar1;
}



/* Function: unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 00011fd0 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,
   void>(int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::__2,void>
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
                    /* try { // try from 00011ff9 to 00012007 has its CatchHandler @ 00012014 */
  __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
  __uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
            ((__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *)this,param_1,param_2);
  return;
}



/* Function: operator* @ 00012020 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator*
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  get(this);
  return;
}



/* Function: ~unique_ptr @ 00012060 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::~unique_ptr() */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  int **ppiVar1;
  __2 *this_00;
  type *ptVar2;
  
                    /* try { // try from 0001207f to 000120d6 has its CatchHandler @ 000120f0 */
  ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                              ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (__2 *)get_deleter(this);
    ptVar2 = move<int*&>(ppiVar1);
    test_cpp_smart_ptr()::$_2::operator()(this_00,*(int **)ptVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}



/* Function: test_cpp_rtti @ 00012100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  uint uVar1;
  int iVar2;
  char *__s;
  size_t sVar3;
  type_info *this_01;
  type_info *local_44;
  type_info *local_3c;
  int local_18;
  
  this = operator_new(4);
  memset(this,0,4);
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(4);
  memset(this_00,0,4);
  RTTIDerivedB::RTTIDerivedB(this_00);
  local_18 = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
  }
  uVar1 = std::type_info::operator==
                    (*(type_info **)(*(int *)this + -4),(type_info *)&RTTIDerivedA::typeinfo);
  if ((uVar1 & 1) != 0) {
    local_18 = 10;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
  }
  this_01 = *(type_info **)(*(int *)this_00 + -4);
  uVar1 = std::type_info::operator==(this_01,(type_info *)&RTTIDerivedB::typeinfo);
  if ((uVar1 & 1) != 0) {
    local_18 = local_18 + 0x14;
  }
  if (this == (RTTIDerivedA *)0x0) {
    local_3c = (type_info *)0x0;
  }
  else {
    this_01 = (type_info *)this;
    local_3c = (type_info *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_3c != (type_info *)0x0) {
    iVar2 = RTTIDerivedA::derivedA_data();
    local_18 = iVar2 + local_18;
    this_01 = local_3c;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    local_44 = (type_info *)0x0;
  }
  else {
    this_01 = (type_info *)this_00;
    local_44 = (type_info *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (local_44 != (type_info *)0x0) {
    iVar2 = RTTIDerivedB::derivedB_data();
    local_18 = iVar2 + local_18;
    this_01 = local_44;
  }
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid(this_01);
  }
  __s = (char *)std::type_info::name(*(type_info **)(*(int *)this + -4));
  sVar3 = strlen(__s);
  if (this != (RTTIDerivedA *)0x0) {
    (**(code **)(*(int *)this + 4))(this);
  }
  if (this_00 != (RTTIDerivedB *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  return sVar3 + local_18;
}



/* Function: test_cpp_oo_features @ 000123a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined4 uVar1;
  
  printf(&DAT_0001500d);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00015032,uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_00015050,uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_0001506c,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_00015088,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000150a4,uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_000150c1,uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_000150dd,uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_000150f9,uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00015115,uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00015131,uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_0001514e,uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_0001516b,uVar1);
  return;
}



/* Function: main @ 00012530 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 00012560 */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true,
   false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)
    */

void __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
          (__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *this,int *param_1,__2 *param_2
          )

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this,param_1,param_2);
  return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 000125a0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2
   const&>(int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
  __2 *p_Var1;
  
  p_Var1 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
            ((tuple<int*,test_cpp_smart_ptr()::__2> *)this,&param_1,p_Var1);
  return;
}



/* Function: forward<test_cpp_smart_ptr()::$_2_const&> @ 000125f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2
   const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&) */

__2 * std::forward<test_cpp_smart_ptr()::__2_const&>(type *param_1)

{
  return (__2 *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 00012600 */

/* std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&,
   true>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
          (tuple<int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
  int **ppiVar1;
  __2 *p_Var2;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  p_Var2 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
                    /* try { // try from 0001264f to 0001265d has its CatchHandler @ 0001266a */
  _Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
  _Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
            ((_Tuple_impl<0u,int*,test_cpp_smart_ptr()::__2> *)this,ppiVar1,p_Var2);
  return;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 00012680 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,
   test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
          (_Tuple_impl<0u,int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
  int **ppiVar1;
  
  forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
  _Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
  ppiVar1 = forward<int*&>((type *)param_1);
  _Head_base<0u,int*,false>::_Head_base<int*&>((_Head_base<0u,int*,false> *)this,ppiVar1);
  return;
}



/* Function: _Tuple_impl @ 00012700 */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&) */

void std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
  return;
}



/* Function: _Head_base @ 00012740 */

/* std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2
   const&) */

__2 * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)

{
  return param_1;
}



/* Function: _M_ptr @ 00012750 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
  get<0u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00012780 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
          (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  undefined4 uVar1;
  
                    /* try { // try from 0001279c to 000127a4 has its CatchHandler @ 000127b6 */
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
                    ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
  return uVar1;
}



/* Function: operator() @ 000127d0 */

/* test_cpp_smart_ptr()::$_2::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall test_cpp_smart_ptr()::$_2::operator()(__2 *this,int *param_1)

{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::$_2> @ 00012820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<0u, int*,
   test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std::get<0u,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 00012850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2>&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00012880 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2>&) */

void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_deleter @ 000128b0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
  get<1u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
  return;
}



/* Function: get<1u,int*,test_cpp_smart_ptr()::$_2> @ 000128e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<1u, int*,
   test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std::get<1u,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
  __2 *p_Var1;
  
  p_Var1 = __get_helper<1u,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}



/* Function: __get_helper<1u,test_cpp_smart_ptr()::$_2> @ 00012910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2& std::__get_helper<1u, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::$_2>&) */

__2 * std::__get_helper<1u,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
  __2 *p_Var1;
  
  p_Var1 = (__2 *)_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return p_Var1;
}



/* Function: _M_head @ 00012940 */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::$_2>&) */

void std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00012970 */

/* std::_Head_base<1u, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1u,
   test_cpp_smart_ptr()::$_2, true>&) */

_Head_base * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 00012980 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
  undefined4 uVar1;
  
                    /* try { // try from 0001299c to 000129a4 has its CatchHandler @ 000129b6 */
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                    ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
  return uVar1;
}



/* Function: _M_ptr @ 000129d0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::$_2> @ 00012a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type const& std::get<0u,
   int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&) */

type * std::get<0u,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 00012a30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2> const&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00012a60 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::$_2> const&) */

void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: SimpleClass @ 00012a90 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}



/* Function: setValue @ 00012ae0 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
  *(int *)this = param_1;
  return;
}



/* Function: getValue @ 00012b00 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return *(undefined4 *)this;
}



/* Function: compute @ 00012b10 */

/* SimpleClass::compute(int) const */

int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return iVar1 * param_1 + sVar2;
}



/* Function: getClassID @ 00012b50 */

/* SimpleClass::getClassID() */

undefined4 SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00012b60 */

/* LifecycleClass::LifecycleClass(unsigned int) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  uint local_c;
  
  *(uint *)(this + 4) = param_1;
  uVar1 = (uint)((ulonglong)param_1 * 4);
  if ((int)((ulonglong)param_1 * 4 >> 0x20) != 0) {
    uVar1 = 0xffffffff;
  }
  pvVar2 = operator_new__(uVar1);
  *(void **)this = pvVar2;
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
  }
  instance_count = instance_count + 1;
  return;
}



/* Function: getData @ 00012c00 */

/* LifecycleClass::getData(unsigned int) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)

{
  undefined4 local_c;
  
  if (param_1 < *(uint *)(this + 4)) {
    local_c = *(undefined4 *)(*(int *)this + param_1 * 4);
  }
  else {
    local_c = 0xffffffff;
  }
  return local_c;
}



/* Function: getInstanceCount @ 00012c50 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: ~LifecycleClass @ 00012c70 */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: Base @ 00012cc0 */

/* Base::Base() */

void __thiscall Base::Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00018c3c;
  return;
}



/* Function: Derived @ 00012cf0 */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00018c5c;
  *(int *)(this + 4) = param_1;
  return;
}



/* Function: virtual_func @ 00012d40 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: virtual_func @ 00012d60 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 4);
}



/* Function: ~Derived @ 00012d80 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  Base::~Base((Base *)this);
  return;
}



/* Function: ~Base @ 00012db0 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  return this;
}



/* Function: MultiDerived @ 00012dc0 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 8));
  *(undefined ***)this = &PTR_funcA_00018c80;
  *(undefined ***)(this + 8) = &PTR_funcB_00018c98;
  return;
}



/* Function: ~MultiDerived @ 00012e20 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  BaseB::~BaseB((BaseB *)(this + 8));
  BaseA::~BaseA((BaseA *)this);
  return;
}



/* Function: DiamondDerived @ 00012e60 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 8));
  *(undefined4 *)this = 0x18d08;
  *(undefined4 *)(this + 0x10) = 0x18d3c;
  *(undefined4 *)(this + 8) = 0x18d20;
  return;
}



/* Function: ~DiamondDerived @ 00012f00 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
  return;
}



/* Function: Point @ 00012f50 */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}



/* Function: operator+ @ 00012f70 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

Point * __thiscall Point::operator+(Point *this,Point *param_1)

{
  int *in_stack_0000000c;
  
  Point(this,*(int *)param_1 + *in_stack_0000000c,*(int *)(param_1 + 4) + in_stack_0000000c[1]);
  return this;
}



/* Function: operator== @ 00012fd0 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point::operator==(Point *this,Point *param_1)

{
  bool local_5;
  
  local_5 = false;
  if (*(int *)this == *(int *)param_1) {
    local_5 = *(int *)(this + 4) == *(int *)(param_1 + 4);
  }
  return local_5;
}



/* Function: operator++ @ 00013020 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point::operator++(Point *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}



/* Function: template_max<int> @ 00013040 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  undefined4 local_8;
  
  if (param_2 < param_1) {
    local_8 = param_1;
  }
  else {
    local_8 = param_2;
  }
  return local_8;
}



/* Function: template_max<double> @ 00013070 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  undefined8 local_c;
  
  if (param_1 <= param_2) {
    local_c = param_2;
  }
  else {
    local_c = param_1;
  }
  return local_c;
}



/* Function: template_swap<int> @ 000130b0 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 000130e0 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00013100 */

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



/* Function: get @ 00013140 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 local_8;
  
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(this + param_1 * 4);
  }
  return local_8;
}



/* Function: getSize @ 00013190 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 000131a0 */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 000131c0 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x50) < 10) {
    iVar1 = *(int *)(this + 0x50);
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00013200 */

/* Container<double>::get(int) const */

longdouble __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  double local_c;
  
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    local_c = 0.0;
  }
  else {
    local_c = *(double *)(this + param_1 * 8);
  }
  return (longdouble)local_c;
}



/* Function: getSize @ 00013260 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00013270 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
    */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
          (unique_ptr<int,std::default_delete<int>> *this,int *param_1)

{
                    /* try { // try from 00013292 to 0001329d has its CatchHandler @ 000132a9 */
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,param_1);
  return;
}



/* Function: operator* @ 000132c0 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
          (unique_ptr<int,std::default_delete<int>> *this)

{
  get(this);
  return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00013300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
   std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
   std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
  return (type *)param_1;
}



/* Function: unique_ptr @ 00013310 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
   std::default_delete<int> >&&) */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr<int,std::default_delete<int>> *this,unique_ptr *param_1)

{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,
             (__uniq_ptr_data *)param_1);
  return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00013350 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
   []>, void, bool>(int*) */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr<int*,std::default_delete<int[]>,void,bool>
          (unique_ptr<int[],std::default_delete<int[]>> *this,int *param_1)

{
                    /* try { // try from 00013372 to 0001337d has its CatchHandler @ 00013389 */
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *)this,param_1);
  return;
}



/* Function: operator[] @ 000133a0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
          (unique_ptr<int[],std::default_delete<int[]>> *this,uint param_1)

{
  int iVar1;
  
  iVar1 = get(this);
  return iVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 000133f0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  int *piVar1;
  default_delete<int[]> *this_00;
  
  piVar1 = (int *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  if (*piVar1 != 0) {
    this_00 = (default_delete<int[]> *)get_deleter(this);
                    /* try { // try from 0001343f to 0001344a has its CatchHandler @ 00013464 */
    default_delete<int[]>::operator()(this_00,(int *)*piVar1);
  }
  *piVar1 = 0;
  return;
}



/* Function: ~unique_ptr @ 00013470 */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
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
                    /* try { // try from 000134cf to 000134da has its CatchHandler @ 000134f4 */
    default_delete<int>::operator()(this_00,*(int **)ptVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}



/* Function: RTTIDerivedA @ 00013500 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00018eb8;
  return;
}



/* Function: RTTIDerivedB @ 00013540 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00018ee0;
  return;
}



/* Function: operator== @ 00013580 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  bool local_15;
  bool local_9;
  
  local_9 = true;
  if (*(int *)(this + 4) != *(int *)(param_1 + 4)) {
    local_15 = false;
    if (**(char **)(this + 4) != '*') {
      iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
      local_15 = iVar1 == 0;
    }
    local_9 = local_15;
  }
  return local_9;
}



/* Function: derivedA_data @ 00013610 */

/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA::derivedA_data(void)

{
  return 100;
}



/* Function: derivedB_data @ 00013620 */

/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB::derivedB_data(void)

{
  return 200;
}



/* Function: name @ 00013630 */

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



/* Function: getName @ 00013670 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_00015189;
}



/* Function: ~Base @ 00013690 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this);
  return;
}



/* Function: getName @ 000136d0 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: ~Derived @ 000136f0 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
  operator_delete(this);
  return;
}



/* Function: BaseA @ 00013730 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00018cdc;
  return;
}



/* Function: BaseB @ 00013760 */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00018cf0;
  return;
}



/* Function: funcA @ 00013790 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 000137a0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 000137e0 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 000137f0 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB();
  return;
}



/* Function: ~MultiDerived @ 00013820 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~MultiDerived @ 00013850 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: funcA @ 00013880 */

/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00013890 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA::~BaseA(BaseA *this)

{
  return this;
}



/* Function: ~BaseA @ 000138a0 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 000138e0 */

/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 000138f0 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB::~BaseB(BaseB *this)

{
  return this;
}



/* Function: ~BaseB @ 00013900 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this);
  return;
}



/* Function: VirtualBase @ 00013940 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00018e2c;
  return;
}



/* Function: MiddleA @ 00013970 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}



/* Function: MiddleB @ 00013990 */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}



/* Function: func @ 000139b0 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: ~MiddleA @ 000139d0 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 8));
  return;
}



/* Function: ~MiddleA @ 00013a20 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this);
  operator_delete(this);
  return;
}



/* Function: func @ 00013a60 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: ~MiddleA @ 00013a90 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MiddleA @ 00013ac0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00013af0 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: ~MiddleB @ 00013b10 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 8));
  return;
}



/* Function: ~MiddleB @ 00013b60 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this);
  operator_delete(this);
  return;
}



/* Function: func @ 00013ba0 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: ~MiddleB @ 00013bd0 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MiddleB @ 00013c00 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00013c30 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: ~DiamondDerived @ 00013c50 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this);
  return;
}



/* Function: func @ 00013c90 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00013cc0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00013cf0 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: func @ 00013d20 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: ~DiamondDerived @ 00013d50 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~DiamondDerived @ 00013d80 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: func @ 00013db0 */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 00013dc0 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return this;
}



/* Function: ~VirtualBase @ 00013dd0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this);
  return;
}



/* Function: ~MiddleA @ 00013e10 */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  return this;
}



/* Function: ~MiddleB @ 00013e20 */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  return this;
}



/* Function: ~DiamondDerived @ 00013e30 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  MiddleB::~MiddleB((MiddleB *)(this + 8));
  MiddleA::~MiddleA((MiddleA *)this);
  return;
}



/* Function: __uniq_ptr_data @ 00013e90 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
   true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,__uniq_ptr_data *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,(__uniq_ptr_impl *)param_1);
  return;
}



/* Function: __uniq_ptr_impl @ 00013ed0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
   std::default_delete<int> >&&) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
  type *ptVar1;
  undefined4 *puVar2;
  
  ptVar1 = move<std::tuple<int*,std::default_delete<int>>&>((tuple *)param_1);
  tuple<int*,std::default_delete<int>>::tuple
            ((tuple<int*,std::default_delete<int>> *)this,(tuple *)ptVar1);
                    /* try { // try from 00013f18 to 00013f20 has its CatchHandler @ 00013f38 */
  puVar2 = (undefined4 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
  *puVar2 = 0;
  return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00013f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
   std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
   >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
  return (type *)param_1;
}



/* Function: tuple @ 00013f60 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
    */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int>> *)this,(_Tuple_impl *)param_1);
  return;
}



/* Function: _M_ptr @ 00013fa0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<0u,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: __clang_call_terminate @ 00013fd0 */

void __clang_call_terminate(undefined4 param_1)

{
  __cxa_begin_catch(param_1,&_GLOBAL_OFFSET_TABLE_);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



/* Function: _Tuple_impl @ 00014000 */

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



/* Function: _Tuple_impl @ 00014040 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
   std::default_delete<int> >&&) */

_Tuple_impl * std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
  return param_1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00014050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type& std::get<0u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00014080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 000140b0 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 000140e0 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false>&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: RTTIBase @ 000140f0 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00018ecc;
  return;
}



/* Function: ~RTTIDerivedA @ 00014120 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedA @ 00014150 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00014190 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: ~RTTIBase @ 000141a0 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return this;
}



/* Function: ~RTTIBase @ 000141b0 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 000141f0 */

/* RTTIBase::getType() const */

undefined4 RTTIBase::getType(void)

{
  return 0;
}



/* Function: ~RTTIDerivedB @ 00014200 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedB @ 00014230 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00014270 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: __uniq_ptr_impl @ 00014280 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
  return;
}



/* Function: __uniq_ptr_impl @ 000142c0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
  undefined4 *puVar1;
  
  tuple<int*,std::default_delete<int>>::tuple<true,true>
            ((tuple<int*,std::default_delete<int>> *)this);
  puVar1 = (undefined4 *)_M_ptr(this);
  *puVar1 = param_1;
  return;
}



/* Function: tuple<true,true> @ 00014310 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
          (tuple<int*,std::default_delete<int>> *this)

{
                    /* try { // try from 0001432c to 00014334 has its CatchHandler @ 00014340 */
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int>> *)this);
  return;
}



/* Function: _Tuple_impl @ 00014350 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int>> *this)

{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<1u,std::default_delete<int>> *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base<0u,int*,false> *)this);
  return;
}



/* Function: _Tuple_impl @ 00014390 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<1u,std::default_delete<int>> *this)

{
  _Head_base<1u,std::default_delete<int>,true>::_Head_base
            ((_Head_base<1u,std::default_delete<int>,true> *)this);
  return;
}



/* Function: _Head_base @ 000143c0 */

/* std::_Head_base<0u, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0u,int*,false>::_Head_base(_Head_base<0u,int*,false> *this)

{
  *(undefined4 *)this = 0;
  return;
}



/* Function: _Head_base @ 000143e0 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_Head_base() */

_Head_base<1u,std::default_delete<int>,true> * __thiscall
std::_Head_base<1u,std::default_delete<int>,true>::_Head_base
          (_Head_base<1u,std::default_delete<int>,true> *this)

{
  return this;
}



/* Function: get_deleter @ 000143f0 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr<int,std::default_delete<int>> *this)

{
  undefined4 uVar1;
  
                    /* try { // try from 0001440c to 00014414 has its CatchHandler @ 00014426 */
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
                    ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return uVar1;
}



/* Function: operator() @ 00014440 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}



/* Function: move<int*&> @ 00014480 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
  return (type *)param_1;
}



/* Function: _M_deleter @ 00014490 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<1u,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: get<1u,int*,std::default_delete<int>> @ 000144c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int> > >::type& std::get<1u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1u,int*,std::default_delete<int>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: __get_helper<1u,std::default_delete<int>> @ 000144f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1u, std::default_delete<int>>(std::_Tuple_impl<1u,
   std::default_delete<int>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}



/* Function: _M_head @ 00014520 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int> >&) */

void std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00014550 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 00014560 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
  undefined4 uVar1;
  
                    /* try { // try from 0001457c to 00014584 has its CatchHandler @ 00014596 */
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return uVar1;
}



/* Function: _M_ptr @ 000145b0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 000145e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0u,
   int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00014610 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00014640 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00014670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false> const&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: __uniq_ptr_impl @ 00014680 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
  return;
}



/* Function: __uniq_ptr_impl @ 000146c0 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
  undefined4 *puVar1;
  
  tuple<int*,std::default_delete<int[]>>::tuple<true,true>
            ((tuple<int*,std::default_delete<int[]>> *)this);
  puVar1 = (undefined4 *)_M_ptr(this);
  *puVar1 = param_1;
  return;
}



/* Function: tuple<true,true> @ 00014710 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
          (tuple<int*,std::default_delete<int[]>> *this)

{
                    /* try { // try from 0001472c to 00014734 has its CatchHandler @ 00014740 */
  _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int[]>> *)this);
  return;
}



/* Function: _M_ptr @ 00014750 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: _Tuple_impl @ 00014780 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<1u,std::default_delete<int[]>> *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base<0u,int*,false> *)this);
  return;
}



/* Function: _Tuple_impl @ 000147c0 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<1u,std::default_delete<int[]>> *this)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_Head_base
            ((_Head_base<1u,std::default_delete<int[]>,true> *)this);
  return;
}



/* Function: _Head_base @ 000147f0 */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_Head_base() */

_Head_base<1u,std::default_delete<int[]>,true> * __thiscall
std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base
          (_Head_base<1u,std::default_delete<int[]>,true> *this)

{
  return this;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00014800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00014830 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00014860 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: get_deleter @ 00014890 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  undefined4 uVar1;
  
                    /* try { // try from 000148ac to 000148b4 has its CatchHandler @ 000148c6 */
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
                    ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return uVar1;
}



/* Function: operator() @ 000148e0 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
   []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: _M_deleter @ 00014920 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<1u,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: get<1u,int*,std::default_delete<int[]>> @ 00014950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: __get_helper<1u,std::default_delete<int[]>> @ 00014980 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1u, std::default_delete<int
   []>>(std::_Tuple_impl<1u, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}



/* Function: _M_head @ 000149b0 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 000149e0 */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: get @ 000149f0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  undefined4 uVar1;
  
                    /* try { // try from 00014a0c to 00014a14 has its CatchHandler @ 00014a26 */
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                    ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return uVar1;
}



/* Function: _M_ptr @ 00014a40 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00014a70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type const& std::get<0u,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> > const&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00014aa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _M_head @ 00014ad0 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: forward<int*&> @ 00014b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00014b10 */

/* std::_Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std::_Head_base<0u,int*,false>::_Head_base<int*&>(_Head_base<0u,int*,false> *this,int **param_1)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}



/* Function: __do_global_ctors_aux @ 00014b50 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x00014b6a) */
/* WARNING: Removing unreachable block (ram,0x00014b80) */
/* WARNING: Removing unreachable block (ram,0x00014b8d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00014b9c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 219 */
