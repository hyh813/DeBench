/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_clang_O0_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __cxx_global_var_init(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 000111f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int r3;
  int r2;
  int r1;
  SimpleClass obj;
  
  SimpleClass::SimpleClass(&obj,5,"Test");
  SimpleClass::setValue(&obj,10);
  iVar1 = SimpleClass::getValue(&obj);
  iVar2 = SimpleClass::compute(&obj,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00011420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LifecycleClass obj;
  int result;
  
  LifecycleClass::LifecycleClass(&obj,5);
                    /* try { // try from 00011459 to 00011483 has its CatchHandler @ 000114c0 */
  iVar1 = LifecycleClass::getData(&obj,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(&obj);
  iVar3 = LifecycleClass::getInstanceCount();
  return iVar3 * 1000 + iVar2 + iVar1;
}



/* Function: call_virtual_func @ 000114f0 */

/* WARNING: Unknown calling convention */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
  iVar1 = (**obj->_vptr_Base)(obj,x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 00011520 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int r4;
  int r3;
  Base *pd;
  Base *pb;
  int r2;
  int r1;
  Derived derived;
  Base base;
  
  Base::Base(&base);
                    /* try { // try from 00011545 to 00011557 has its CatchHandler @ 0001162d */
  Derived::Derived(&derived,3);
                    /* try { // try from 0001155d to 000115ea has its CatchHandler @ 00011638 */
  iVar1 = Base::virtual_func(&base,5);
  iVar2 = Derived::virtual_func(&derived,5);
  iVar3 = call_virtual_func(&base,5);
  iVar4 = call_virtual_func(&derived.super_Base,5);
  Derived::~Derived(&derived);
  Base::~Base(&base);
  return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00011670 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  MultiDerived *local_3c;
  int ptr_equal;
  int r2;
  int r1;
  BaseB *pb;
  BaseA *pa;
  MultiDerived obj;
  
  MultiDerived::MultiDerived(&obj);
  obj.super_BaseA.dataA = 100;
  obj.super_BaseB.dataB = 200;
  local_3c = (MultiDerived *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x1c) {
    local_3c = (MultiDerived *)&obj.super_BaseB;
  }
                    /* try { // try from 000116d0 to 000116f3 has its CatchHandler @ 0001173b */
  iVar1 = (**obj.super_BaseA._vptr_BaseA)(&obj);
  iVar2 = (**(local_3c->super_BaseA)._vptr_BaseA)(local_3c);
  MultiDerived::~MultiDerived(&obj);
  return iVar1 + iVar2 + (uint)(&obj != local_3c);
}



/* Function: test_cpp_diamond_inheritance @ 00011760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  _func_int *local_3c;
  int r2;
  int r1;
  VirtualBase *pb;
  DiamondDerived obj;
  
  DiamondDerived::DiamondDerived(&obj);
  *(undefined4 *)((int)&obj.super_MiddleA.dataA + (int)obj.super_MiddleA._vptr_MiddleA[-3]) = 0x32;
  local_3c = (_func_int *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x24) {
    local_3c = obj.super_MiddleA._vptr_MiddleA[-3] + (int)&obj.super_MiddleA;
  }
                    /* try { // try from 000117be to 000117ef has its CatchHandler @ 0001181e */
  iVar1 = (*(code *)**(undefined4 **)local_3c)(local_3c);
  *(undefined4 *)((int)&obj.super_MiddleA.dataA + (int)obj.super_MiddleA._vptr_MiddleA[-3]) = 100;
  iVar2 = (*(code *)**(undefined4 **)local_3c)(local_3c);
  DiamondDerived::~DiamondDerived(&obj);
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00011840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
  bool bVar1;
  int iVar2;
  bool eq;
  Point p3;
  Point p2;
  Point p1;
  
  Point::Point(&p1,1,2);
  Point::Point(&p2,3,4);
  Point::operator+(&p1,&p2);
  bVar1 = Point::operator==(&p1,&p2);
  Point::operator++(&p3);
  iVar2 = 10;
  if (bVar1) {
    iVar2 = 0;
  }
  return p3.x + p3.y + iVar2;
}



/* Function: test_cpp_template_func @ 00011900 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  int b;
  int a;
  double r2;
  int r1;
  
  r1 = template_max<int>(3,7);
  r2 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  return r1 + (int)ROUND(r2) + a + b;
}



/* Function: test_cpp_template_class @ 000119b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double r3;
  Container<double> double_container;
  int r2;
  int r1;
  Container<int> int_container;
  
  Container<int>::Container(&int_container);
  Container<int>::push(&int_container,10);
  Container<int>::push(&int_container,0x14);
  Container<int>::push(&int_container,0x1e);
  iVar1 = Container<int>::get(&int_container,0);
  iVar2 = Container<int>::getSize(&int_container);
  Container<double>::Container(&double_container);
  Container<double>::push(&double_container,3.14);
  dVar3 = Container<double>::get(&double_container,0);
  return iVar1 + iVar2 + (int)ROUND(dVar3);
}



/* Function: test_cpp_lambda @ 00011b20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  anon_class_1_0_00000001 lambda2;
  anon_class_8_2_336b0e7f lambda1;
  int capture_by_ref;
  int capture_by_value;
  
  capture_by_value = 10;
  capture_by_ref = 0x14;
  lambda1.capture_by_value = 10;
  lambda1.capture_by_ref = &capture_by_ref;
  iVar1 = test_cpp_lambda::anon_class_8_2_336b0e7f::operator()(&lambda1,3);
  iVar2 = test_cpp_lambda::anon_class_1_0_00000001::operator()<int,_int>(&lambda2,10,0x14);
  return iVar1 + iVar2;
}



/* Function: operator() @ 00011ba0 */

/* DWARF original prototype: int operator()(anon_class_8_2_336b0e7f * this, int x) */

int __thiscall
test_cpp_lambda::anon_class_8_2_336b0e7f::operator()(anon_class_8_2_336b0e7f *this,int x)

{
  *this->capture_by_ref = *this->capture_by_ref + 5;
  return x * this->capture_by_value + *this->capture_by_ref;
}



/* Function: operator()<int,_int> @ 00011bd0 */

/* DWARF original name: operator()<int, int>
   DWARF original prototype: int operator()<int,_int>(anon_class_1_0_00000001 * this, int a, int b)
    */

int __thiscall
test_cpp_lambda::anon_class_1_0_00000001::operator()<int,_int>
          (anon_class_1_0_00000001 *this,int a,int b)

{
  return a + b;
}



/* Function: test_cpp_exception @ 00011bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  DerivedException *e_1;
  BaseException *e_2;
  int e;
  int e_3;
  int result;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* try { // try from 00011c25 to 00011c3d has its CatchHandler @ 00011c43 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00011d90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  pointer __p;
  type piVar4;
  type *ptVar5;
  int *__p_00;
  pointer __p_01;
  int r3;
  unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> ptr3;
  anon_class_1_0_00000001_for__M_head_impl deleter;
  int r2;
  unique_ptr<int[],_std::default_delete<int[]>_> arr;
  int r1;
  unique_ptr<int,_std::default_delete<int>_> ptr2;
  unique_ptr<int,_std::default_delete<int>_> ptr1;
  
  __p = operator_new(4);
  *__p = 100;
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<std::default_delete<int>,_void>
            (&ptr1,__p);
                    /* try { // try from 00011dd6 to 00011dde has its CatchHandler @ 00011f55 */
  piVar4 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr1);
  *piVar4 = 200;
  ptVar5 = std::move<std::unique_ptr<int,_std::default_delete<int>_>_&>(&ptr1);
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr(&ptr2,ptVar5);
                    /* try { // try from 00011e1c to 00011e44 has its CatchHandler @ 00011f60 */
  piVar4 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr2);
  iVar1 = *piVar4;
  __p_00 = operator_new__(0x14);
  *__p_00 = 1;
  __p_00[1] = 2;
  __p_00[2] = 3;
  __p_00[3] = 4;
  __p_00[4] = 5;
  std::unique_ptr<int[],_std::default_delete<int[]>_>::
  unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>(&arr,__p_00);
                    /* try { // try from 00011e8d to 00011ebc has its CatchHandler @ 00011f6b */
  piVar4 = std::unique_ptr<int[],_std::default_delete<int[]>_>::operator[](&arr,2);
  iVar2 = *piVar4;
  __p_01 = operator_new(4);
  *__p_01 = 500;
  std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::
  unique_ptr<(lambda_at_src_5_1_cpp:445:20),_void>(&ptr3,__p_01,&deleter);
                    /* try { // try from 00011eef to 00011ef7 has its CatchHandler @ 00011f76 */
  piVar4 = std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::operator*(&ptr3);
  iVar3 = *piVar4;
  std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::~unique_ptr(&ptr3);
  std::unique_ptr<int[],_std::default_delete<int[]>_>::~unique_ptr(&arr);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr2);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr1);
  return iVar1 + iVar2 + iVar3;
}



/* Function: unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void> @ 00011fd0 */

/* DWARF original name: unique_ptr<(lambda at src/5-1.cpp:445:20), void>
   DWARF original prototype: void
   unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void>(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
   * this, pointer __p, deleter_type * __d) */

void __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::
unique_ptr<(lambda_at_src_5_1_cpp:445:20),_void>
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this,pointer __p,deleter_type *__d)

{
                    /* try { // try from 00011ff9 to 00012007 has its CatchHandler @ 00012014 */
  __uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false>::__uniq_ptr_impl
            (&this->_M_t,__p,__d);
  return;
}



/* Function: operator* @ 00012020 */

/* DWARF original prototype: type operator*(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this)
    */

type __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::operator*
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  pointer piVar1;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: ~unique_ptr @ 00012060 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> *
   this) */

void __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::~unique_ptr
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
  pointer *__ptr;
  
                    /* try { // try from 0001207f to 000120d6 has its CatchHandler @ 000120f0 */
  __t = __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
                  ((__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *)this);
  if (*__t != (pointer)0x0) {
    this_00 = get_deleter(this);
    ppiVar1 = move<int_*&>(__t);
    _Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true>::anon_class_1_0_00000001_for__M_head_impl::
    operator()(this_00,*ppiVar1);
  }
  *__t = (pointer)0x0;
  return;
}



/* Function: test_cpp_rtti @ 00012100 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  bool bVar1;
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  int iVar2;
  char *__s;
  size_t sVar3;
  RTTIDerivedB *local_44;
  RTTIDerivedA *local_3c;
  RTTIDerivedB *derivedB;
  RTTIDerivedA *derivedA;
  int result;
  RTTIBase *obj2;
  RTTIBase *obj1;
  
  this = operator_new(4);
  memset(this,0,4);
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(4);
  memset(this_00,0,4);
  RTTIDerivedB::RTTIDerivedB(this_00);
  result = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
  }
  bVar1 = std::type_info::operator==
                    ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
                     (type_info *)&RTTIDerivedA::typeinfo);
  if (bVar1) {
    result = 10;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
  }
  bVar1 = std::type_info::operator==
                    ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
                     (type_info *)&RTTIDerivedB::typeinfo);
  if (bVar1) {
    result = result + 0x14;
  }
  if (this == (RTTIDerivedA *)0x0) {
    local_3c = (RTTIDerivedA *)0x0;
  }
  else {
    local_3c = (RTTIDerivedA *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_3c != (RTTIDerivedA *)0x0) {
    iVar2 = RTTIDerivedA::derivedA_data(local_3c);
    result = iVar2 + result;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    local_44 = (RTTIDerivedB *)0x0;
  }
  else {
    local_44 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0)
    ;
  }
  if (local_44 != (RTTIDerivedB *)0x0) {
    iVar2 = RTTIDerivedB::derivedB_data(local_44);
    result = iVar2 + result;
  }
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
  }
  __s = std::type_info::name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
  sVar3 = strlen(__s);
  if (this != (RTTIDerivedA *)0x0) {
    (*(this->super_RTTIBase)._vptr_RTTIBase[1])(this);
  }
  if (this_00 != (RTTIDerivedB *)0x0) {
    (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])(this_00);
  }
  return sVar3 + result;
}



/* Function: test_cpp_oo_features @ 000123a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  int iVar1;
  
  printf(&DAT_0001500d);
  iVar1 = test_cpp_member_func();
  printf(&DAT_00015032,iVar1);
  iVar1 = test_cpp_constructor();
  printf(&DAT_00015050,iVar1);
  iVar1 = test_cpp_virtual_func();
  printf(&DAT_0001506c,iVar1);
  iVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_00015088,iVar1);
  iVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000150a4,iVar1);
  iVar1 = test_cpp_operator_overload();
  printf(&DAT_000150c1,iVar1);
  iVar1 = test_cpp_template_func();
  printf(&DAT_000150dd,iVar1);
  iVar1 = test_cpp_template_class();
  printf(&DAT_000150f9,iVar1);
  iVar1 = test_cpp_lambda();
  printf(&DAT_00015115,iVar1);
  iVar1 = test_cpp_exception();
  printf(&DAT_00015131,iVar1);
  iVar1 = test_cpp_smart_ptr();
  printf(&DAT_0001514e,iVar1);
  iVar1 = test_cpp_rtti();
  printf(&DAT_0001516b,iVar1);
  return;
}



/* Function: main @ 00012530 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl @ 00012560 */

/* DWARF original prototype: void
   __uniq_ptr_impl(__uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false> * this, pointer
   param_1, anon_class_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std::__uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false>::__uniq_ptr_impl
          (__uniq_ptr_data<int,_(lambda_at_src_5_1_cpp:445:20),_true,_false> *this,pointer param_2,
          anon_class_1_0_00000001_for__M_head_impl *param_3)

{
  __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::
  __uniq_ptr_impl<const_(lambda_at_src_5_1_cpp:445:20)_&>
            (&this->super___uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)>,param_2,param_3);
  return;
}



/* Function: __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 000125a0 */

/* DWARF original name: __uniq_ptr_impl<const (lambda at src/5-1.cpp:445:20) &>
   DWARF original prototype: void
   __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&>(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>
   * this, pointer __p, anon_class_1_0_00000001_for__M_head_impl * __d) */

void __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::
__uniq_ptr_impl<const_(lambda_at_src_5_1_cpp:445:20)_&>
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this,pointer __p,
          anon_class_1_0_00000001_for__M_head_impl *__d)

{
  anon_class_1_0_00000001_for__M_head_impl *__a2;
  
  __a2 = forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(__d);
  tuple<int_*,_(lambda_at_src/5-1.cpp:445:20)>::
  tuple<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_true>(&this->_M_t,&__p,__a2);
  return;
}



/* Function: forward<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 000125f0 */

/* WARNING: Unknown calling convention */
/* DWARF original name: forward<const (lambda at src/5-1.cpp:445:20) &> */

anon_class_1_0_00000001_for__M_head_impl *
std::forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(type *__t)

{
  return __t;
}



/* Function: tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true> @ 00012600 */

/* DWARF original name: tuple<int *&, const (lambda at src/5-1.cpp:445:20) &, true>
   DWARF original prototype: void
   tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true>(tuple<int_*,_(lambda_at_src/5-1.cpp:445:20)>
   * this, int * * __a1, anon_class_1_0_00000001_for__M_head_impl * __a2) */

void __thiscall
std::tuple<int_*,_(lambda_at_src/5-1.cpp:445:20)>::
tuple<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_true>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *this,int **__a1,
          anon_class_1_0_00000001_for__M_head_impl *__a2)

{
  int **__head;
  anon_class_1_0_00000001_for__M_head_impl *__tail;
  
  __head = forward<int_*&>(__a1);
  __tail = forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(__a2);
                    /* try { // try from 0001264f to 0001265d has its CatchHandler @ 0001266a */
  _Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::
  _Tuple_impl<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_void>
            (&this->super__Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>,__head,__tail);
  return;
}



/* Function: _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void> @ 00012680 */

/* DWARF original name: _Tuple_impl<int *&, const (lambda at src/5-1.cpp:445:20) &, void>
   DWARF original prototype: void
   _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void>(_Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>
   * this, int * * __head, anon_class_1_0_00000001_for__M_head_impl * __tail) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::
_Tuple_impl<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_void>
          (_Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *this,int **__head,
          anon_class_1_0_00000001_for__M_head_impl *__tail)

{
  anon_class_1_0_00000001_for__M_head_impl *__head_00;
  int **__h;
  
  __head_00 = forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(__tail);
  _Tuple_impl<1U,_(lambda_at_src/5-1.cpp:445:20)>::_Tuple_impl
            (&this->super__Tuple_impl<1U,_(lambda_at_src_5_1_cpp:445:20)>,__head_00);
  __h = forward<int_*&>(__head);
  _Head_base<0U,_int_*,_false>::_Head_base<int_*&>((_Head_base<0U,_int_*,_false> *)this,__h);
  return;
}



/* Function: _Tuple_impl @ 00012700 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_(lambda_at_src/5-1.cpp:445:20)> *
   this, anon_class_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std::_Tuple_impl<1U,_(lambda_at_src/5-1.cpp:445:20)>::_Tuple_impl
          (_Tuple_impl<1U,_(lambda_at_src_5_1_cpp:445:20)> *this,
          anon_class_1_0_00000001_for__M_head_impl *__head)

{
  _Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true>::_Head_base
            (&this->super__Head_base<1U,_(lambda_at_src_5_1_cpp:445:20),_true>,__head);
  return;
}



/* Function: _Head_base @ 00012740 */

/* DWARF original prototype: void _Head_base(_Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true> *
   this, anon_class_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std::_Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true>::_Head_base
          (_Head_base<1U,_(lambda_at_src_5_1_cpp:445:20),_true> *this,
          anon_class_1_0_00000001_for__M_head_impl *__h)

{
  return;
}



/* Function: _M_ptr @ 00012750 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  __tuple_element_t<0U,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *ppiVar1;
  
  ppiVar1 = get<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 00012780 */

/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

deleter_type * __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::get_deleter
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  
                    /* try { // try from 0001279c to 000127a4 has its CatchHandler @ 000127b6 */
  paVar1 = __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_deleter
                     ((__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *)this);
  return paVar1;
}



/* Function: operator() @ 000127d0 */

/* DWARF original prototype: void operator()(anon_class_1_0_00000001_for__M_head_impl * this, int *
   p) */

void __thiscall
std::_Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true>::anon_class_1_0_00000001_for__M_head_impl
::operator()(anon_class_1_0_00000001_for__M_head_impl *this,int *p)

{
  *p = -1;
  if (p != (int *)0x0) {
    operator_delete(p);
  }
  return;
}



/* Function: get<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00012820 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<0U, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t<0U,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *
std::get<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                      (&__t->super__Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>);
  return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00012850 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0U, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std::__get_helper<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                 (_Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00012880 */

/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head
                 (_Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_deleter @ 000128b0 */

/* DWARF original prototype: anon_class_1_0_00000001_for__M_head_impl *
   _M_deleter(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

anon_class_1_0_00000001_for__M_head_impl * __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_deleter
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  __tuple_element_t<1U,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *p_Var1;
  
  p_Var1 = get<1U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>(&this->_M_t);
  return p_Var1;
}



/* Function: get<1U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 000128e0 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<1U, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t<1U,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *
std::get<1U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = __get_helper<1U,_(lambda_at_src_5_1_cpp:445:20)>
                     ((_Tuple_impl<1U,_(lambda_at_src_5_1_cpp:445:20)> *)__t);
  return paVar1;
}



/* Function: __get_helper<1U,_(lambda_at_src/5-1.cpp:445:20)> @ 00012910 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1U, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std::__get_helper<1U,_(lambda_at_src_5_1_cpp:445:20)>
          (_Tuple_impl<1U,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = _Tuple_impl<1U,_(lambda_at_src/5-1.cpp:445:20)>::_M_head(__t);
  return paVar1;
}



/* Function: _M_head @ 00012940 */

/* WARNING: Unknown calling convention */

anon_class_1_0_00000001_for__M_head_impl *
std::_Tuple_impl<1U,_(lambda_at_src/5-1.cpp:445:20)>::_M_head
          (_Tuple_impl<1U,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = _Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true>::_M_head
                     (&__t->super__Head_base<1U,_(lambda_at_src_5_1_cpp:445:20),_true>);
  return paVar1;
}



/* Function: _M_head @ 00012970 */

/* WARNING: Unknown calling convention */

anon_class_1_0_00000001_for__M_head_impl *
std::_Head_base<1U,_(lambda_at_src/5-1.cpp:445:20),_true>::_M_head
          (_Head_base<1U,_(lambda_at_src_5_1_cpp:445:20),_true> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: get @ 00012980 */

/* DWARF original prototype: pointer get(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

pointer __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::get
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  pointer piVar1;
  
                    /* try { // try from 0001299c to 000129a4 has its CatchHandler @ 000129b6 */
  piVar1 = __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
                     ((__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *)this);
  return piVar1;
}



/* Function: _M_ptr @ 000129d0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
   this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  __tuple_element_t<0U,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *ppiVar1;
  
  ppiVar1 = get<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>(&this->_M_t);
  return *ppiVar1;
}



/* Function: get<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00012a00 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<0U, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t<0U,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *
std::get<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                      (&__t->super__Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>);
  return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00012a30 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0U, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std::__get_helper<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                 (_Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00012a60 */

/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0U,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head
                 (_Tuple_impl<0U,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: SimpleClass @ 00012a90 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int v,char *n)

{
  this->value = v;
  strncpy(this->name,n,0x1f);
  this->name[0x1f] = '\0';
  return;
}



/* Function: setValue @ 00012ae0 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int v)

{
  this->value = v;
  return;
}



/* Function: getValue @ 00012b00 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return this->value;
}



/* Function: compute @ 00012b10 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass::compute(SimpleClass *this,int x)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = this->value;
  sVar2 = strlen(this->name);
  return iVar1 * x + sVar2;
}



/* Function: getClassID @ 00012b50 */

int SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00012b60 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,size_t s)

{
  uint uVar1;
  int *piVar2;
  size_t i;
  
  this->size = s;
  uVar1 = (uint)((ulonglong)s * 4);
  if ((int)((ulonglong)s * 4 >> 0x20) != 0) {
    uVar1 = 0xffffffff;
  }
  piVar2 = operator_new__(uVar1);
  this->data = piVar2;
  for (i = 0; i < s; i = i + 1) {
    this->data[i] = i * 10;
  }
  instance_count = instance_count + 1;
  return;
}



/* Function: getData @ 00012c00 */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass::getData(LifecycleClass *this,size_t idx)

{
  int local_c;
  
  if (idx < this->size) {
    local_c = this->data[idx];
  }
  else {
    local_c = -1;
  }
  return local_c;
}



/* Function: getInstanceCount @ 00012c50 */

int LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: ~LifecycleClass @ 00012c70 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this) */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (this->data != (int *)0x0) {
    operator_delete__(this->data);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: Base @ 00012cc0 */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
  this->_vptr_Base = (_func_int **)&PTR_virtual_func_00018c3c;
  return;
}



/* Function: Derived @ 00012cf0 */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived::Derived(Derived *this,int m)

{
  Base::Base(&this->super_Base);
  (this->super_Base)._vptr_Base = (_func_int **)&PTR_virtual_func_00018c5c;
  this->multiplier = m;
  return;
}



/* Function: virtual_func @ 00012d40 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: virtual_func @ 00012d60 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return x * this->multiplier;
}



/* Function: ~Derived @ 00012d80 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
  Base::~Base(&this->super_Base);
  return;
}



/* Function: ~Base @ 00012db0 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  return;
}



/* Function: MultiDerived @ 00012dc0 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA(&this->super_BaseA);
  BaseB::BaseB(&this->super_BaseB);
  (this->super_BaseA)._vptr_BaseA = (_func_int **)&PTR_funcA_00018c80;
  (this->super_BaseB)._vptr_BaseB = (_func_int **)&PTR__ZThn8_N12MultiDerived5funcBEv_00018c98;
  return;
}



/* Function: ~MultiDerived @ 00012e20 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  BaseB::~BaseB(&this->super_BaseB);
  BaseA::~BaseA(&this->super_BaseA);
  return;
}



/* Function: DiamondDerived @ 00012e60 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)&this->field_0x10);
  MiddleA::MiddleA(&this->super_MiddleA,&PTR_construction_vtable_12__00018d4c);
  MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,&PTR_construction_vtable_12__00018d54
                  );
  (this->super_MiddleA)._vptr_MiddleA = (_func_int **)0x18d08;
  *(undefined4 *)&this->field_0x10 = 0x18d3c;
  *(undefined4 *)&(this->super_MiddleA).field_0x8 = 0x18d20;
  return;
}



/* Function: ~DiamondDerived @ 00012f00 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this,&VTT);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10);
  return;
}



/* Function: Point @ 00012f50 */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point::Point(Point *this,int _x,int _y)

{
  this->x = _x;
  this->y = _y;
  return;
}



/* Function: operator+ @ 00012f70 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point::operator+(Point *this,Point *other)

{
  int extraout_EDX;
  Point PVar1;
  Point *in_stack_00000004;
  
  Point(in_stack_00000004,this->x + other->x,this->y + other->y);
  PVar1.y = extraout_EDX;
  PVar1.x = (int)in_stack_00000004;
  return PVar1;
}



/* Function: operator== @ 00012fd0 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point::operator==(Point *this,Point *other)

{
  bool local_5;
  
  local_5 = false;
  if (this->x == other->x) {
    local_5 = this->y == other->y;
  }
  return local_5;
}



/* Function: operator++ @ 00013020 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point::operator++(Point *this)

{
  this->x = this->x + 1;
  this->y = this->y + 1;
  return this;
}



/* Function: template_max<int> @ 00013040 */

/* WARNING: Unknown calling convention */

int template_max<int>(int a,int b)

{
  undefined4 local_8;
  
  if (b < a) {
    local_8 = a;
  }
  else {
    local_8 = b;
  }
  return local_8;
}



/* Function: template_max<double> @ 00013070 */

/* WARNING: Unknown calling convention */

double template_max<double>(double a,double b)

{
  undefined8 local_c;
  
  if (a <= b) {
    local_c = b;
  }
  else {
    local_c = a;
  }
  return local_c;
}



/* Function: template_swap<int> @ 000130b0 */

/* WARNING: Unknown calling convention */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  int temp;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 000130e0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00013100 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
  int iVar1;
  
  if (this->size < 10) {
    iVar1 = this->size;
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00013140 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int local_8;
  
  if ((idx < 0) || (this->size <= idx)) {
    local_8 = 0;
  }
  else {
    local_8 = this->data[idx];
  }
  return local_8;
}



/* Function: getSize @ 00013190 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 000131a0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 000131c0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  int iVar1;
  double value_local;
  
  if (this->size < 10) {
    iVar1 = this->size;
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00013200 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double local_c;
  
  if ((idx < 0) || (this->size <= idx)) {
    local_c = 0.0;
  }
  else {
    local_c = this->data[idx];
  }
  return local_c;
}



/* Function: getSize @ 00013260 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: unique_ptr<std::default_delete<int>,_void> @ 00013270 */

/* DWARF original name: unique_ptr<std::default_delete<int>, void>
   DWARF original prototype: void
   unique_ptr<std::default_delete<int>,_void>(unique_ptr<int,_std::default_delete<int>_> * this,
   pointer __p) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<std::default_delete<int>,_void>
          (unique_ptr<int,_std::default_delete<int>_> *this,pointer __p)

{
                    /* try { // try from 00013292 to 0001329d has its CatchHandler @ 000132a9 */
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_impl(&this->_M_t,__p);
  return;
}



/* Function: operator* @ 000132c0 */

/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::operator*
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: move<std::unique_ptr<int,_std::default_delete<int>_>_&> @ 00013300 */

/* WARNING: Unknown calling convention */
/* DWARF original name: move<std::unique_ptr<int, std::default_delete<int> > &> */

type * std::move<std::unique_ptr<int,_std::default_delete<int>_>_&>
                 (unique_ptr<int,_std::default_delete<int>_> *__t)

{
  return __t;
}



/* Function: unique_ptr @ 00013310 */

/* DWARF original prototype: void unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this,
   unique_ptr<int,_std::default_delete<int>_> * param_1) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this,
          unique_ptr<int,_std::default_delete<int>_> *param_2)

{
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
            (&this->_M_t,&param_2->_M_t);
  return;
}



/* Function: unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool> @ 00013350 */

/* DWARF original name: unique_ptr<int *, std::default_delete<int[]>, void, bool>
   DWARF original prototype: void
   unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>(unique_ptr<int[],_std::default_delete<int[]>_>
   * this, int * __p) */

void __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::
unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>
          (unique_ptr<int[],_std::default_delete<int[]>_> *this,int *__p)

{
                    /* try { // try from 00013372 to 0001337d has its CatchHandler @ 00013389 */
  __uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true>::__uniq_ptr_impl(&this->_M_t,__p);
  return;
}



/* Function: operator[] @ 000133a0 */

/* DWARF original prototype: type operator[](unique_ptr<int[],_std::default_delete<int[]>_> * this,
   size_t __i) */

type __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::operator[]
          (unique_ptr<int[],_std::default_delete<int[]>_> *this,size_t __i)

{
  pointer piVar1;
  
  piVar1 = get(this);
  return piVar1 + __i;
}



/* Function: ~unique_ptr @ 000133f0 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int[],_std::default_delete<int[]>_> * this)
    */

void __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::~unique_ptr
          (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
  pointer *ppiVar1;
  deleter_type *this_00;
  pointer *__ptr;
  
  ppiVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
                      ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
  if (*ppiVar1 != (pointer)0x0) {
    this_00 = get_deleter(this);
                    /* try { // try from 0001343f to 0001344a has its CatchHandler @ 00013464 */
    default_delete<int[]>::operator()<int>(this_00,*ppiVar1);
  }
  *ppiVar1 = (pointer)0x0;
  return;
}



/* Function: ~unique_ptr @ 00013470 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
  pointer *__ptr;
  
  __t = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                  ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  if (*__t != (pointer)0x0) {
    this_00 = get_deleter(this);
    ppiVar1 = move<int_*&>(__t);
                    /* try { // try from 000134cf to 000134da has its CatchHandler @ 000134f4 */
    default_delete<int>::operator()(this_00,*ppiVar1);
  }
  *__t = (pointer)0x0;
  return;
}



/* Function: RTTIDerivedA @ 00013500 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedA_00018eb8;
  return;
}



/* Function: RTTIDerivedB @ 00013540 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedB_00018ee0;
  return;
}



/* Function: operator== @ 00013580 */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std::type_info::operator==(type_info *this,type_info *__arg)

{
  int iVar1;
  bool local_15;
  bool local_9;
  
  local_9 = true;
  if (*(int *)(this + 4) != *(int *)(__arg + 4)) {
    local_15 = false;
    if (**(char **)(this + 4) != '*') {
      iVar1 = strcmp(*(char **)(this + 4),*(char **)(__arg + 4));
      local_15 = iVar1 == 0;
    }
    local_9 = local_15;
  }
  return local_9;
}



/* Function: derivedA_data @ 00013610 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
  return 100;
}



/* Function: derivedB_data @ 00013620 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
  return 200;
}



/* Function: name @ 00013630 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std::type_info::name(type_info *this)

{
  char *local_c;
  
  if (**(char **)(this + 4) == '*') {
    local_c = (char *)(*(int *)(this + 4) + 1);
  }
  else {
    local_c = *(char **)(this + 4);
  }
  return local_c;
}



/* Function: getName @ 00013670 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 00013690 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this);
  return;
}



/* Function: getName @ 000136d0 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: ~Derived @ 000136f0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
  operator_delete(this);
  return;
}



/* Function: BaseA @ 00013730 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA::BaseA(BaseA *this)

{
  this->_vptr_BaseA = (_func_int **)&PTR_funcA_00018cdc;
  return;
}



/* Function: BaseB @ 00013760 */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB::BaseB(BaseB *this)

{
  this->_vptr_BaseB = (_func_int **)&PTR_funcB_00018cf0;
  return;
}



/* Function: funcA @ 00013790 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: ~MultiDerived @ 000137a0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 000137e0 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 000137f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerived5funcBEv(void)

{
  int in_stack_00000004;
  
  MultiDerived::funcB((MultiDerived *)(in_stack_00000004 + -8));
  return;
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 00013820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
  int in_stack_00000004;
  
  MultiDerived::~MultiDerived((MultiDerived *)(in_stack_00000004 + -8));
  return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 00013850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(void)

{
  int in_stack_00000004;
  
  MultiDerived::~MultiDerived((MultiDerived *)(in_stack_00000004 + -8));
  return;
}



/* Function: funcA @ 00013880 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
  return 10;
}



/* Function: ~BaseA @ 00013890 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  return;
}



/* Function: ~BaseA @ 000138a0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 000138e0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
  return 0x14;
}



/* Function: ~BaseB @ 000138f0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  return;
}



/* Function: ~BaseB @ 00013900 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this);
  return;
}



/* Function: VirtualBase @ 00013940 */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  this->_vptr_VirtualBase = (_func_int **)&PTR_func_00018e2c;
  return;
}



/* Function: MiddleA @ 00013970 */

/* DWARF original prototype: void MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::MiddleA(MiddleA *this,void **vtt)

{
  this->_vptr_MiddleA = *vtt;
  *(void **)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) = vtt[1];
  return;
}



/* Function: MiddleB @ 00013990 */

/* DWARF original prototype: void MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::MiddleB(MiddleB *this,void **vtt)

{
  this->_vptr_MiddleB = *vtt;
  *(void **)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) = vtt[1];
  return;
}



/* Function: func @ 000139b0 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 000139d0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this,&VTT);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x8);
  return;
}



/* Function: ~MiddleA @ 00013a20 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  ~MiddleA(this);
  operator_delete(this);
  return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00013a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleA4funcEv(void)

{
  int *in_stack_00000004;
  
  MiddleA::func((MiddleA *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0xc)));
  return;
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00013a90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void)

{
  int *in_stack_00000004;
  
  MiddleA::~MiddleA((MiddleA *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
  return;
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00013ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(void)

{
  int *in_stack_00000004;
  
  MiddleA::~MiddleA((MiddleA *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
  return;
}



/* Function: func @ 00013af0 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 00013b10 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this,&VTT);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x8);
  return;
}



/* Function: ~MiddleB @ 00013b60 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  ~MiddleB(this);
  operator_delete(this);
  return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 00013ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n12_N7MiddleB4funcEv(void)

{
  int *in_stack_00000004;
  
  MiddleB::func((MiddleB *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0xc)));
  return;
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 00013bd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void)

{
  int *in_stack_00000004;
  
  MiddleB::~MiddleB((MiddleB *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
  return;
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(void)

{
  int *in_stack_00000004;
  
  MiddleB::~MiddleB((MiddleB *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
  return;
}



/* Function: func @ 00013c30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
         + 0xfa;
}



/* Function: ~DiamondDerived @ 00013c50 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this);
  return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00013c90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
  int in_stack_00000004;
  
  DiamondDerived::func((DiamondDerived *)(in_stack_00000004 + -8));
  return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00013cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
  int in_stack_00000004;
  
  DiamondDerived::~DiamondDerived((DiamondDerived *)(in_stack_00000004 + -8));
  return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00013cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn8_N14DiamondDerivedD0Ev(void)

{
  int in_stack_00000004;
  
  DiamondDerived::~DiamondDerived((DiamondDerived *)(in_stack_00000004 + -8));
  return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00013d20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n12_N14DiamondDerived4funcEv(void)

{
  int *in_stack_00000004;
  
  DiamondDerived::func
            ((DiamondDerived *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0xc)));
  return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00013d50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void)

{
  int *in_stack_00000004;
  
  DiamondDerived::~DiamondDerived
            ((DiamondDerived *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
  return;
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 00013d80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n16_N14DiamondDerivedD0Ev(void)

{
  int *in_stack_00000004;
  
  DiamondDerived::~DiamondDerived
            ((DiamondDerived *)((int)in_stack_00000004 + *(int *)(*in_stack_00000004 + -0x10)));
  return;
}



/* Function: func @ 00013db0 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
  return 100;
}



/* Function: ~VirtualBase @ 00013dc0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  return;
}



/* Function: ~VirtualBase @ 00013dd0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this);
  return;
}



/* Function: ~MiddleA @ 00013e10 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **vtt)

{
  return;
}



/* Function: ~MiddleB @ 00013e20 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **vtt)

{
  return;
}



/* Function: ~DiamondDerived @ 00013e30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * vtt) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **vtt)

{
  MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,vtt + 3);
  MiddleA::~MiddleA(&this->super_MiddleA,vtt + 1);
  return;
}



/* Function: __uniq_ptr_data @ 00013e90 */

/* DWARF original prototype: void
   __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this,
   __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
          (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,
          __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *param_2)

{
  __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,
             &param_2->super___uniq_ptr_impl<int,_std::default_delete<int>_>);
  return;
}



/* Function: __uniq_ptr_impl @ 00013ed0 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,
          __uniq_ptr_impl<int,_std::default_delete<int>_> *__u)

{
  type *ptVar1;
  pointer *ppiVar2;
  
  ptVar1 = move<std::tuple<int_*,_std::default_delete<int>_>_&>(&__u->_M_t);
  tuple<int_*,_std::default_delete<int>_>::tuple(&this->_M_t,ptVar1);
                    /* try { // try from 00013f18 to 00013f20 has its CatchHandler @ 00013f38 */
  ppiVar2 = _M_ptr(__u);
  *ppiVar2 = (pointer)0x0;
  return;
}



/* Function: move<std::tuple<int_*,_std::default_delete<int>_>_&> @ 00013f50 */

/* WARNING: Unknown calling convention */
/* DWARF original name: move<std::tuple<int *, std::default_delete<int> > &> */

type * std::move<std::tuple<int_*,_std::default_delete<int>_>_&>
                 (tuple<int_*,_std::default_delete<int>_> *__t)

{
  return __t;
}



/* Function: tuple @ 00013f60 */

/* DWARF original prototype: void tuple(tuple<int_*,_std::default_delete<int>_> * this,
   tuple<int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::tuple<int_*,_std::default_delete<int>_>::tuple
          (tuple<int_*,_std::default_delete<int>_> *this,
          tuple<int_*,_std::default_delete<int>_> *param_2)

{
  _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>,
             &param_2->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
  return;
}



/* Function: _M_ptr @ 00013fa0 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int>_>_> *ppiVar1;
  
  ppiVar1 = get<0U,_int_*,_std::default_delete<int>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: __clang_call_terminate @ 00013fd0 */

void __clang_call_terminate(undefined4 param_1)

{
  __cxa_begin_catch(param_1,&_GLOBAL_OFFSET_TABLE_);
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



/* Function: _Tuple_impl @ 00014000 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *
   this, _Tuple_impl<0U,_int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *this,
          _Tuple_impl<0U,_int_*,_std::default_delete<int>_> *param_2)

{
  _Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1U,_std::default_delete<int>_>,
             &param_2->super__Tuple_impl<1U,_std::default_delete<int>_>);
  *this = *param_2;
  return;
}



/* Function: _Tuple_impl @ 00014040 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_std::default_delete<int>_> * this,
   _Tuple_impl<1U,_std::default_delete<int>_> * __in) */

void __thiscall
std::_Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1U,_std::default_delete<int>_> *this,
          _Tuple_impl<1U,_std::default_delete<int>_> *__in)

{
  return;
}



/* Function: get<0U,_int_*,_std::default_delete<int>_> @ 00014050 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<0U, int *, std::default_delete<int> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int>_>_> *
std::get<0U,_int_*,_std::default_delete<int>_>(tuple<int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int>_> @ 00014080 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int> > */

int ** std::__get_helper<0U,_int_*,_std::default_delete<int>_>
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 000140b0 */

/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 000140e0 */

/* WARNING: Unknown calling convention */

int ** std::_Head_base<0U,_int_*,_false>::_M_head(_Head_base<0U,_int_*,_false> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: RTTIBase @ 000140f0 */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  this->_vptr_RTTIBase = (_func_int **)&PTR__RTTIBase_00018ecc;
  return;
}



/* Function: ~RTTIDerivedA @ 00014120 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::~RTTIBase(&this->super_RTTIBase);
  return;
}



/* Function: ~RTTIDerivedA @ 00014150 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00014190 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: ~RTTIBase @ 000141a0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  return;
}



/* Function: ~RTTIBase @ 000141b0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 000141f0 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
  return 0;
}



/* Function: ~RTTIDerivedB @ 00014200 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::~RTTIBase(&this->super_RTTIBase);
  return;
}



/* Function: ~RTTIDerivedB @ 00014230 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00014270 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: __uniq_ptr_impl @ 00014280 */

/* DWARF original prototype: void
   __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,pointer param_2)

{
  __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,param_2);
  return;
}



/* Function: __uniq_ptr_impl @ 000142c0 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,pointer __p)

{
  pointer *ppiVar1;
  
  tuple<int_*,_std::default_delete<int>_>::tuple<true,_true>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: tuple<true,_true> @ 00014310 */

/* DWARF original name: tuple<true, true>
   DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int>_> * this)
    */

void __thiscall
std::tuple<int_*,_std::default_delete<int>_>::tuple<true,_true>
          (tuple<int_*,_std::default_delete<int>_> *this)

{
                    /* try { // try from 0001432c to 00014334 has its CatchHandler @ 00014340 */
  _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
  return;
}



/* Function: _Tuple_impl @ 00014350 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *
   this) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *this)

{
  _Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1U,_std::default_delete<int>_>);
  _Head_base<0U,_int_*,_false>::_Head_base((_Head_base<0U,_int_*,_false> *)this);
  return;
}



/* Function: _Tuple_impl @ 00014390 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_std::default_delete<int>_> * this) */

void __thiscall
std::_Tuple_impl<1U,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1U,_std::default_delete<int>_> *this)

{
  _Head_base<1U,_std::default_delete<int>,_true>::_Head_base
            (&this->super__Head_base<1U,_std::default_delete<int>,_true>);
  return;
}



/* Function: _Head_base @ 000143c0 */

/* DWARF original prototype: void _Head_base(_Head_base<0U,_int_*,_false> * this) */

void __thiscall std::_Head_base<0U,_int_*,_false>::_Head_base(_Head_base<0U,_int_*,_false> *this)

{
  this->_M_head_impl = (int *)0x0;
  return;
}



/* Function: _Head_base @ 000143e0 */

/* DWARF original prototype: void _Head_base(_Head_base<1U,_std::default_delete<int>,_true> * this)
    */

void __thiscall
std::_Head_base<1U,_std::default_delete<int>,_true>::_Head_base
          (_Head_base<1U,_std::default_delete<int>,_true> *this)

{
  return;
}



/* Function: get_deleter @ 000143f0 */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
   this) */

deleter_type * __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get_deleter
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  default_delete<int> *pdVar1;
  
                    /* try { // try from 0001440c to 00014414 has its CatchHandler @ 00014426 */
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return pdVar1;
}



/* Function: operator() @ 00014440 */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *__ptr)

{
  if (__ptr != (int *)0x0) {
    operator_delete(__ptr);
  }
  return;
}



/* Function: move<int_*&> @ 00014480 */

/* WARNING: Unknown calling convention */
/* DWARF original name: move<int *&> */

type * std::move<int_*&>(int **__t)

{
  return __t;
}



/* Function: _M_deleter @ 00014490 */

/* DWARF original prototype: default_delete<int> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete<int> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int>_>_> *p_Var1;
  
  p_Var1 = get<1U,_int_*,_std::default_delete<int>_>(&this->_M_t);
  return p_Var1;
}



/* Function: get<1U,_int_*,_std::default_delete<int>_> @ 000144c0 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<1U, int *, std::default_delete<int> > */

__tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int>_>_> *
std::get<1U,_int_*,_std::default_delete<int>_>(tuple<int_*,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = __get_helper<1U,_std::default_delete<int>_>
                     ((_Tuple_impl<1U,_std::default_delete<int>_> *)__t);
  return pdVar1;
}



/* Function: __get_helper<1U,_std::default_delete<int>_> @ 000144f0 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1U, std::default_delete<int> > */

default_delete<int> *
std::__get_helper<1U,_std::default_delete<int>_>(_Tuple_impl<1U,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = _Tuple_impl<1U,_std::default_delete<int>_>::_M_head(__t);
  return pdVar1;
}



/* Function: _M_head @ 00014520 */

/* WARNING: Unknown calling convention */

default_delete<int> *
std::_Tuple_impl<1U,_std::default_delete<int>_>::_M_head
          (_Tuple_impl<1U,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = _Head_base<1U,_std::default_delete<int>,_true>::_M_head
                     (&__t->super__Head_base<1U,_std::default_delete<int>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 00014550 */

/* WARNING: Unknown calling convention */

default_delete<int> *
std::_Head_base<1U,_std::default_delete<int>,_true>::_M_head
          (_Head_base<1U,_std::default_delete<int>,_true> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: get @ 00014560 */

/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  
                    /* try { // try from 0001457c to 00014584 has its CatchHandler @ 00014596 */
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return piVar1;
}



/* Function: _M_ptr @ 000145b0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
    */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int>_>_> *ppiVar1;
  
  ppiVar1 = get<0U,_int_*,_std::default_delete<int>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: get<0U,_int_*,_std::default_delete<int>_> @ 000145e0 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<0U, int *, std::default_delete<int> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int>_>_> *
std::get<0U,_int_*,_std::default_delete<int>_>(tuple<int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int>_> @ 00014610 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int> > */

int ** std::__get_helper<0U,_int_*,_std::default_delete<int>_>
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00014640 */

/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 00014670 */

/* WARNING: Unknown calling convention */

int ** std::_Head_base<0U,_int_*,_false>::_M_head(_Head_base<0U,_int_*,_false> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: __uniq_ptr_impl @ 00014680 */

/* DWARF original prototype: void
   __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> *this,pointer param_2)

{
  __uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int[]>_>,param_2);
  return;
}



/* Function: __uniq_ptr_impl @ 000146c0 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int[]>_>
   * this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this,pointer __p)

{
  pointer *ppiVar1;
  
  tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: tuple<true,_true> @ 00014710 */

/* DWARF original name: tuple<true, true>
   DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int[]>_> *
   this) */

void __thiscall
std::tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>
          (tuple<int_*,_std::default_delete<int[]>_> *this)

{
                    /* try { // try from 0001472c to 00014734 has its CatchHandler @ 00014740 */
  _Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>);
  return;
}



/* Function: _M_ptr @ 00014750 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
  __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
  
  ppiVar1 = get<0U,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00014780 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *
   this) */

void __thiscall
std::_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_Tuple_impl
          (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *this)

{
  _Tuple_impl<1U,_std::default_delete<int[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<1U,_std::default_delete<int[]>_>);
  _Head_base<0U,_int_*,_false>::_Head_base((_Head_base<0U,_int_*,_false> *)this);
  return;
}



/* Function: _Tuple_impl @ 000147c0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1U,_std::default_delete<int[]>_> * this)
    */

void __thiscall
std::_Tuple_impl<1U,_std::default_delete<int[]>_>::_Tuple_impl
          (_Tuple_impl<1U,_std::default_delete<int[]>_> *this)

{
  _Head_base<1U,_std::default_delete<int[]>,_true>::_Head_base
            (&this->super__Head_base<1U,_std::default_delete<int[]>,_true>);
  return;
}



/* Function: _Head_base @ 000147f0 */

/* DWARF original prototype: void _Head_base(_Head_base<1U,_std::default_delete<int[]>,_true> *
   this) */

void __thiscall
std::_Head_base<1U,_std::default_delete<int[]>,_true>::_Head_base
          (_Head_base<1U,_std::default_delete<int[]>,_true> *this)

{
  return;
}



/* Function: get<0U,_int_*,_std::default_delete<int[]>_> @ 00014800 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<0U, int *, std::default_delete<int[]> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<0U,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int[]>_>
                      (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>);
  return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int[]>_> @ 00014830 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int[]> > */

int ** std::__get_helper<0U,_int_*,_std::default_delete<int[]>_>
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00014860 */

/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: get_deleter @ 00014890 */

/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get_deleter
          (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
  default_delete<int[]> *pdVar1;
  
                    /* try { // try from 000148ac to 000148b4 has its CatchHandler @ 000148c6 */
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
  return pdVar1;
}



/* Function: operator()<int> @ 000148e0 */

/* DWARF original prototype: type operator()<int>(default_delete<int[]> * this, int * __ptr) */

type __thiscall std::default_delete<int[]>::operator()<int>(default_delete<int[]> *this,int *__ptr)

{
  if (__ptr != (int *)0x0) {
    operator_delete__(__ptr);
  }
  return;
}



/* Function: _M_deleter @ 00014920 */

/* DWARF original prototype: default_delete<int[]> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int[]>_> * this) */

default_delete<int[]> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
  __tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *p_Var1;
  
  p_Var1 = get<1U,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
  return p_Var1;
}



/* Function: get<1U,_int_*,_std::default_delete<int[]>_> @ 00014950 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<1U, int *, std::default_delete<int[]> > */

__tuple_element_t<1U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<1U,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
  default_delete<int[]> *pdVar1;
  
  pdVar1 = __get_helper<1U,_std::default_delete<int[]>_>
                     ((_Tuple_impl<1U,_std::default_delete<int[]>_> *)__t);
  return pdVar1;
}



/* Function: __get_helper<1U,_std::default_delete<int[]>_> @ 00014980 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1U, std::default_delete<int[]> > */

default_delete<int[]> *
std::__get_helper<1U,_std::default_delete<int[]>_>
          (_Tuple_impl<1U,_std::default_delete<int[]>_> *__t)

{
  default_delete<int[]> *pdVar1;
  
  pdVar1 = _Tuple_impl<1U,_std::default_delete<int[]>_>::_M_head(__t);
  return pdVar1;
}



/* Function: _M_head @ 000149b0 */

/* WARNING: Unknown calling convention */

default_delete<int[]> *
std::_Tuple_impl<1U,_std::default_delete<int[]>_>::_M_head
          (_Tuple_impl<1U,_std::default_delete<int[]>_> *__t)

{
  default_delete<int[]> *pdVar1;
  
  pdVar1 = _Head_base<1U,_std::default_delete<int[]>,_true>::_M_head
                     (&__t->super__Head_base<1U,_std::default_delete<int[]>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 000149e0 */

/* WARNING: Unknown calling convention */

default_delete<int[]> *
std::_Head_base<1U,_std::default_delete<int[]>,_true>::_M_head
          (_Head_base<1U,_std::default_delete<int[]>,_true> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: get @ 000149f0 */

/* DWARF original prototype: pointer get(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

pointer __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get
          (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
  pointer piVar1;
  
                    /* try { // try from 00014a0c to 00014a14 has its CatchHandler @ 00014a26 */
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
  return piVar1;
}



/* Function: _M_ptr @ 00014a40 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
   this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
  __tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
  
  ppiVar1 = get<0U,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: get<0U,_int_*,_std::default_delete<int[]>_> @ 00014a70 */

/* WARNING: Unknown calling convention */
/* DWARF original name: get<0U, int *, std::default_delete<int[]> > */

__tuple_element_t<0U,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<0U,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0U,_int_*,_std::default_delete<int[]>_>
                      (&__t->super__Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>);
  return ppiVar1;
}



/* Function: __get_helper<0U,_int_*,_std::default_delete<int[]>_> @ 00014aa0 */

/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0U, int *, std::default_delete<int[]> > */

int ** std::__get_helper<0U,_int_*,_std::default_delete<int[]>_>
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00014ad0 */

/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_>::_M_head
                 (_Tuple_impl<0U,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0U,_int_*,_false>::_M_head((_Head_base<0U,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: forward<int_*&> @ 00014b00 */

/* WARNING: Unknown calling convention */
/* DWARF original name: forward<int *&> */

int ** std::forward<int_*&>(type *__t)

{
  return __t;
}



/* Function: _Head_base<int_*&> @ 00014b10 */

/* DWARF original name: _Head_base<int *&>
   DWARF original prototype: void _Head_base<int_*&>(_Head_base<0U,_int_*,_false> * this, int * *
   __h) */

void __thiscall
std::_Head_base<0U,_int_*,_false>::_Head_base<int_*&>(_Head_base<0U,_int_*,_false> *this,int **__h)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int_*&>(__h);
  this->_M_head_impl = *ppiVar1;
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
