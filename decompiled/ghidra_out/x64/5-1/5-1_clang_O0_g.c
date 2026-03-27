/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_clang_O0_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00102000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00102020 @ 00102020 */

void FUN_00102020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: __cxx_global_var_init @ 00102180 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void __cxx_global_var_init(void)

{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 001021b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I_5_1_cpp(void)

{
  __cxx_global_var_init();
  return;
}



/* Function: _start @ 001021c0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 001021f0 */

/* WARNING: Removing unreachable block (ram,0x00102203) */
/* WARNING: Removing unreachable block (ram,0x0010220f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00102220 */

/* WARNING: Removing unreachable block (ram,0x00102244) */
/* WARNING: Removing unreachable block (ram,0x00102250) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102260 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  __cxa_finalize(__dso_handle);
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: test_cpp_member_func @ 001022b0 */

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



/* Function: test_cpp_constructor @ 00102310 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LifecycleClass obj;
  int result;
  
  LifecycleClass::LifecycleClass(&obj,5);
                    /* try { // try from 00102335 to 00102356 has its CatchHandler @ 0010238b */
  iVar1 = LifecycleClass::getData(&obj,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(&obj);
  iVar3 = LifecycleClass::getInstanceCount();
  return iVar3 * 1000 + iVar2 + iVar1;
}



/* Function: call_virtual_func @ 001023b0 */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  int x_local;
  Base *obj_local;
  
  iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 001023e0 */

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
                    /* try { // try from 001023f1 to 001023fe has its CatchHandler @ 001024ae */
  Derived::Derived(&derived,3);
                    /* try { // try from 00102404 to 00102475 has its CatchHandler @ 001024bf */
  iVar1 = Base::virtual_func(&base,5);
  iVar2 = Derived::virtual_func(&derived,5);
  iVar3 = call_virtual_func(&base,5);
  iVar4 = call_virtual_func(&derived.super_Base,5);
  Derived::~Derived(&derived);
  Base::~Base(&base);
  return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 001024f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  MultiDerived *local_60;
  int ptr_equal;
  int r2;
  int r1;
  BaseB *pb;
  BaseA *pa;
  MultiDerived obj;
  
  MultiDerived::MultiDerived(&obj);
  obj.super_BaseA.dataA = 100;
  obj.super_BaseB.dataB = 200;
  local_60 = (MultiDerived *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x28) {
    local_60 = (MultiDerived *)&obj.super_BaseB;
  }
                    /* try { // try from 00102549 to 00102564 has its CatchHandler @ 001025a9 */
  iVar1 = (**obj.super_BaseA._vptr_BaseA)();
  iVar2 = (**(local_60->super_BaseA)._vptr_BaseA)();
  MultiDerived::~MultiDerived(&obj);
  return iVar1 + iVar2 + (uint)(&obj != local_60);
}



/* Function: test_cpp_diamond_inheritance @ 001025d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  _func_int *local_60;
  int r2;
  int r1;
  VirtualBase *pb;
  DiamondDerived obj;
  
  DiamondDerived::DiamondDerived(&obj);
  *(undefined4 *)((long)&obj.super_MiddleA.dataA + (long)obj.super_MiddleA._vptr_MiddleA[-3]) = 0x32
  ;
  local_60 = (_func_int *)0x0;
  if (&stack0x00000000 != (undefined1 *)0x38) {
    local_60 = obj.super_MiddleA._vptr_MiddleA[-3] + (long)&obj.super_MiddleA;
  }
                    /* try { // try from 0010262a to 00102655 has its CatchHandler @ 0010267f */
  iVar1 = (*(code *)**(undefined8 **)local_60)();
  *(undefined4 *)((long)&obj.super_MiddleA.dataA + (long)obj.super_MiddleA._vptr_MiddleA[-3]) = 100;
  iVar2 = (*(code *)**(undefined8 **)local_60)();
  DiamondDerived::~DiamondDerived(&obj);
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 001026a0 */

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
  p3 = Point::operator+(&p1,&p2);
  bVar1 = Point::operator==(&p1,&p2);
  Point::operator++(&p3);
  iVar2 = 10;
  if (bVar1) {
    iVar2 = 0;
  }
  return p3.x + p3.y + iVar2;
}



/* Function: test_cpp_template_func @ 00102720 */

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
  return r1 + (int)r2 + a + b;
}



/* Function: test_cpp_template_class @ 00102790 */

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
  return iVar1 + iVar2 + (int)dVar3;
}



/* Function: test_cpp_lambda @ 00102840 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
  int iVar1;
  int iVar2;
  int r2;
  int r1;
  anon_class_1_0_00000001 lambda2;
  anon_class_16_2_b9b285fb lambda1;
  int capture_by_ref;
  int capture_by_value;
  
  capture_by_value = 10;
  capture_by_ref = 0x14;
  lambda1.capture_by_value = 10;
  lambda1.capture_by_ref = &capture_by_ref;
  iVar1 = test_cpp_lambda::anon_class_16_2_b9b285fb::operator()(&lambda1,3);
  iVar2 = test_cpp_lambda::anon_class_1_0_00000001::operator()<int,_int>(&lambda2,10,0x14);
  return iVar1 + iVar2;
}



/* Function: operator() @ 001028a0 */

/* DWARF original prototype: int operator()(anon_class_16_2_b9b285fb * this, int x) */

int __thiscall
test_cpp_lambda::anon_class_16_2_b9b285fb::operator()(anon_class_16_2_b9b285fb *this,int x)

{
  int x_local;
  anon_class_16_2_b9b285fb *this_local;
  
  *this->capture_by_ref = *this->capture_by_ref + 5;
  return x * this->capture_by_value + *this->capture_by_ref;
}



/* Function: operator()<int,_int> @ 001028d0 */

/* DWARF original name: operator()<int, int>
   DWARF original prototype: int operator()<int,_int>(anon_class_1_0_00000001 * this, int a, int b)
    */

int __thiscall
test_cpp_lambda::anon_class_1_0_00000001::operator()<int,_int>
          (anon_class_1_0_00000001 *this,int a,int b)

{
  int b_local;
  int a_local;
  anon_class_1_0_00000001 *this_local;
  
  return a + b;
}



/* Function: test_cpp_exception @ 001028f0 */

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
                    /* try { // try from 00102912 to 00102921 has its CatchHandler @ 00102927 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102a50 */

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
                    /* try { // try from 00102a7f to 00102a83 has its CatchHandler @ 00102bce */
  piVar4 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr1);
  *piVar4 = 200;
  ptVar5 = std::move<std::unique_ptr<int,_std::default_delete<int>_>_&>(&ptr1);
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr(&ptr2,ptVar5);
                    /* try { // try from 00102ab4 to 00102ad4 has its CatchHandler @ 00102bdf */
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
                    /* try { // try from 00102b15 to 00102b3a has its CatchHandler @ 00102bf0 */
  piVar4 = std::unique_ptr<int[],_std::default_delete<int[]>_>::operator[](&arr,2);
  iVar2 = *piVar4;
  __p_01 = operator_new(4);
  *__p_01 = 500;
  std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::
  unique_ptr<(lambda_at_src_5_1_cpp:445:20),_void>(&ptr3,__p_01,&deleter);
                    /* try { // try from 00102b6f to 00102b73 has its CatchHandler @ 00102c01 */
  piVar4 = std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::operator*(&ptr3);
  iVar3 = *piVar4;
  std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::~unique_ptr(&ptr3);
  std::unique_ptr<int[],_std::default_delete<int[]>_>::~unique_ptr(&arr);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr2);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr1);
  return iVar1 + iVar2 + iVar3;
}



/* Function: unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void> @ 00102c40 */

/* DWARF original name: unique_ptr<(lambda at src/5-1.cpp:445:20), void>
   DWARF original prototype: void
   unique_ptr<(lambda_at_src/5-1.cpp:445:20),_void>(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
   * this, pointer __p, deleter_type * __d) */

void __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::
unique_ptr<(lambda_at_src_5_1_cpp:445:20),_void>
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this,pointer __p,deleter_type *__d)

{
  deleter_type *__d_local;
  pointer __p_local;
  unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
                    /* try { // try from 00102c60 to 00102c64 has its CatchHandler @ 00102c70 */
  __uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false>::__uniq_ptr_impl
            (&this->_M_t,__p,__d);
  return;
}



/* Function: operator* @ 00102c80 */

/* DWARF original prototype: type operator*(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this)
    */

type __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::operator*
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  pointer piVar1;
  unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: ~unique_ptr @ 00102cb0 */

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
  unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
                    /* try { // try from 00102cc4 to 00102d09 has its CatchHandler @ 00102d25 */
  __t = __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
                  ((__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *)this);
  if (*__t != (pointer)0x0) {
    this_00 = get_deleter(this);
    ppiVar1 = move<int_*&>(__t);
    _Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true>::anon_class_1_0_00000001_for__M_head_impl
    ::operator()(this_00,*ppiVar1);
  }
  *__t = (pointer)0x0;
  return;
}



/* Function: test_cpp_rtti @ 00102d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  bool bVar1;
  int iVar2;
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  char *__s;
  size_t sVar3;
  RTTIDerivedB *local_70;
  RTTIDerivedA *local_60;
  RTTIDerivedB *derivedB;
  RTTIDerivedA *derivedA;
  int result;
  RTTIBase *obj2;
  RTTIBase *obj1;
  
  this = operator_new(8);
  memset(this,0,8);
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(8);
  memset(this_00,0,8);
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
    local_60 = (RTTIDerivedA *)0x0;
  }
  else {
    local_60 = (RTTIDerivedA *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_60 != (RTTIDerivedA *)0x0) {
    iVar2 = RTTIDerivedA::derivedA_data(local_60);
    result = iVar2 + result;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    local_70 = (RTTIDerivedB *)0x0;
  }
  else {
    local_70 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0)
    ;
  }
  if (local_70 != (RTTIDerivedB *)0x0) {
    iVar2 = RTTIDerivedB::derivedB_data(local_70);
    result = iVar2 + result;
  }
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
  }
  __s = std::type_info::name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
  sVar3 = strlen(__s);
  if (this != (RTTIDerivedA *)0x0) {
    (*(this->super_RTTIBase)._vptr_RTTIBase[1])();
  }
  if (this_00 != (RTTIDerivedB *)0x0) {
    (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])();
  }
  return result + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102f70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  uint uVar1;
  
  printf(&DAT_00105025);
  uVar1 = test_cpp_member_func();
  printf(&DAT_0010504a,(ulong)uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_00105068,(ulong)uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_00105084,(ulong)uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_001050a0,(ulong)uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_001050bc,(ulong)uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_001050d9,(ulong)uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_001050f5,(ulong)uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_00105111,(ulong)uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_0010512d,(ulong)uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00105149,(ulong)uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_00105166,(ulong)uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_00105183,(ulong)uVar1);
  return;
}



/* Function: main @ 00103080 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl @ 001030a0 */

/* DWARF original prototype: void
   __uniq_ptr_impl(__uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false> * this, pointer
   param_1, anon_class_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std::__uniq_ptr_data<int,_(lambda_at_src/5-1.cpp:445:20),_true,_false>::__uniq_ptr_impl
          (__uniq_ptr_data<int,_(lambda_at_src_5_1_cpp:445:20),_true,_false> *this,pointer param_1,
          anon_class_1_0_00000001_for__M_head_impl *param_2)

{
  anon_class_1_0_00000001_for__M_head_impl *param_2_local;
  pointer param_1_local;
  __uniq_ptr_data<int,_(lambda_at_src_5_1_cpp:445:20),_true,_false> *this_local;
  
  __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::
  __uniq_ptr_impl<const_(lambda_at_src_5_1_cpp:445:20)_&>
            (&this->super___uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)>,param_1,param_2);
  return;
}



/* Function: __uniq_ptr_impl<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 001030d0 */

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
  anon_class_1_0_00000001_for__M_head_impl *__d_local;
  pointer __p_local;
  __uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  __p_local = __p;
  this_local = this;
  __a2 = forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(__d);
  tuple<int_*,_(lambda_at_src/5-1.cpp:445:20)>::
  tuple<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_true>(&this->_M_t,&__p_local,__a2);
  return;
}



/* Function: forward<const_(lambda_at_src/5-1.cpp:445:20)_&> @ 00103110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<const (lambda at src/5-1.cpp:445:20) &> */

anon_class_1_0_00000001_for__M_head_impl *
std::forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(type *__t)

{
  type *__t_local;
  
  return __t;
}



/* Function: tuple<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_true> @ 00103120 */

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
  anon_class_1_0_00000001_for__M_head_impl *__a2_local;
  int **__a1_local;
  tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  __head = forward<int_*&>(__a1);
  __tail = forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(__a2);
                    /* try { // try from 0010315d to 00103161 has its CatchHandler @ 0010316d */
  _Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::
  _Tuple_impl<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_void>
            (&this->super__Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>,__head,__tail);
  return;
}



/* Function: _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void> @ 00103180 */

/* DWARF original name: _Tuple_impl<int *&, const (lambda at src/5-1.cpp:445:20) &, void>
   DWARF original prototype: void
   _Tuple_impl<int_*&,_const_(lambda_at_src/5-1.cpp:445:20)_&,_void>(_Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>
   * this, int * * __head, anon_class_1_0_00000001_for__M_head_impl * __tail) */

void __thiscall
std::_Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::
_Tuple_impl<int_*&,_const_(lambda_at_src_5_1_cpp:445:20)_&,_void>
          (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *this,int **__head,
          anon_class_1_0_00000001_for__M_head_impl *__tail)

{
  anon_class_1_0_00000001_for__M_head_impl *__head_00;
  int **__h;
  anon_class_1_0_00000001_for__M_head_impl *__tail_local;
  int **__head_local;
  _Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  __head_00 = forward<const_(lambda_at_src_5_1_cpp:445:20)_&>(__tail);
  _Tuple_impl<1UL,_(lambda_at_src/5-1.cpp:445:20)>::_Tuple_impl
            (&this->super__Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)>,__head_00);
  __h = forward<int_*&>(__head);
  _Head_base<0UL,_int_*,_false>::_Head_base<int_*&>((_Head_base<0UL,_int_*,_false> *)this,__h);
  return;
}



/* Function: _Tuple_impl @ 001031e0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_(lambda_at_src/5-1.cpp:445:20)> *
   this, anon_class_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std::_Tuple_impl<1UL,_(lambda_at_src/5-1.cpp:445:20)>::_Tuple_impl
          (_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *this,
          anon_class_1_0_00000001_for__M_head_impl *__head)

{
  anon_class_1_0_00000001_for__M_head_impl *__head_local;
  _Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  _Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true>::_Head_base
            (&this->super__Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true>,__head);
  return;
}



/* Function: _Head_base @ 00103210 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true> *
   this, anon_class_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std::_Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true>::_Head_base
          (_Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true> *this,
          anon_class_1_0_00000001_for__M_head_impl *__h)

{
  anon_class_1_0_00000001_for__M_head_impl *__h_local;
  _Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true> *this_local;
  
  return;
}



/* Function: _M_ptr @ 00103220 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  __tuple_element_t<0UL,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *ppiVar1;
  __uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  ppiVar1 = get<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 00103240 */

/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

deleter_type * __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::get_deleter
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
                    /* try { // try from 00103250 to 00103254 has its CatchHandler @ 00103268 */
  paVar1 = __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_deleter
                     ((__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *)this);
  return paVar1;
}



/* Function: operator() @ 00103270 */

/* DWARF original prototype: void operator()(anon_class_1_0_00000001_for__M_head_impl * this, int *
   p) */

void __thiscall
std::_Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true>::anon_class_1_0_00000001_for__M_head_impl
::operator()(anon_class_1_0_00000001_for__M_head_impl *this,int *p)

{
  int *p_local;
  anon_class_1_0_00000001_for__M_head_impl *this_local;
  
  *p = -1;
  if (p != (int *)0x0) {
    operator_delete(p);
  }
  return;
}



/* Function: get<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 001032b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t<0UL,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *
std::get<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  ppiVar1 = __get_helper<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                      (&__t->super__Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>);
  return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 001032d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std::__get_helper<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  ppiVar1 = _Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 001032f0 */

int ** std::_Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head
                 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  ppiVar1 = _Head_base<0UL,_int_*,_false>::_M_head((_Head_base<0UL,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_deleter @ 00103310 */

/* DWARF original prototype: anon_class_1_0_00000001_for__M_head_impl *
   _M_deleter(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

anon_class_1_0_00000001_for__M_head_impl * __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_deleter
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  __tuple_element_t<1UL,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *p_Var1;
  __uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  p_Var1 = get<1UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>(&this->_M_t);
  return p_Var1;
}



/* Function: get<1UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00103330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t<1UL,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *
std::get<1UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  paVar1 = __get_helper<1UL,_(lambda_at_src_5_1_cpp:445:20)>
                     ((_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *)__t);
  return paVar1;
}



/* Function: __get_helper<1UL,_(lambda_at_src/5-1.cpp:445:20)> @ 00103350 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, (lambda at src/5-1.cpp:445:20)> */

anon_class_1_0_00000001_for__M_head_impl *
std::__get_helper<1UL,_(lambda_at_src_5_1_cpp:445:20)>
          (_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  _Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  paVar1 = _Tuple_impl<1UL,_(lambda_at_src/5-1.cpp:445:20)>::_M_head(__t);
  return paVar1;
}



/* Function: _M_head @ 00103370 */

anon_class_1_0_00000001_for__M_head_impl *
std::_Tuple_impl<1UL,_(lambda_at_src/5-1.cpp:445:20)>::_M_head
          (_Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  anon_class_1_0_00000001_for__M_head_impl *paVar1;
  _Tuple_impl<1UL,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  paVar1 = _Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true>::_M_head
                     (&__t->super__Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true>);
  return paVar1;
}



/* Function: _M_head @ 00103390 */

anon_class_1_0_00000001_for__M_head_impl *
std::_Head_base<1UL,_(lambda_at_src/5-1.cpp:445:20),_true>::_M_head
          (_Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true> *__b)

{
  _Head_base<1UL,_(lambda_at_src_5_1_cpp:445:20),_true> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: get @ 001033a0 */

/* DWARF original prototype: pointer get(unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)> * this) */

pointer __thiscall
std::unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>::get
          (unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  pointer piVar1;
  unique_ptr<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
                    /* try { // try from 001033b0 to 001033b4 has its CatchHandler @ 001033c8 */
  piVar1 = __uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
                     ((__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *)this);
  return piVar1;
}



/* Function: _M_ptr @ 001033d0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)> *
   this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_(lambda_at_src/5-1.cpp:445:20)>::_M_ptr
          (__uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this)

{
  __tuple_element_t<0UL,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *ppiVar1;
  __uniq_ptr_impl<int,_(lambda_at_src_5_1_cpp:445:20)> *this_local;
  
  ppiVar1 = get<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>(&this->_M_t);
  return *ppiVar1;
}



/* Function: get<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 001033f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

__tuple_element_t<0UL,_std::tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)>_> *
std::get<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
          (tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  tuple<int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  ppiVar1 = __get_helper<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                      (&__t->super__Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>);
  return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)> @ 00103410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, (lambda at src/5-1.cpp:445:20)> */

int ** std::__get_helper<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)>
                 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  ppiVar1 = _Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00103430 */

int ** std::_Tuple_impl<0UL,_int_*,_(lambda_at_src/5-1.cpp:445:20)>::_M_head
                 (_Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_(lambda_at_src_5_1_cpp:445:20)> *__t_local;
  
  ppiVar1 = _Head_base<0UL,_int_*,_false>::_M_head((_Head_base<0UL,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: SimpleClass @ 00103450 */

/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int v,char *n)

{
  char *n_local;
  int v_local;
  SimpleClass *this_local;
  
  this->value = v;
  strncpy(this->name,n,0x1f);
  this->name[0x1f] = '\0';
  return;
}



/* Function: setValue @ 00103490 */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int v)

{
  int v_local;
  SimpleClass *this_local;
  
  this->value = v;
  return;
}



/* Function: getValue @ 001034b0 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass::getValue(SimpleClass *this)

{
  SimpleClass *this_local;
  
  return this->value;
}



/* Function: compute @ 001034c0 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass::compute(SimpleClass *this,int x)

{
  int iVar1;
  size_t sVar2;
  int x_local;
  SimpleClass *this_local;
  
  iVar1 = this->value;
  sVar2 = strlen(this->name);
  return iVar1 * x + (int)sVar2;
}



/* Function: getClassID @ 00103500 */

int SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00103510 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,size_t s)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  int *piVar3;
  size_t i;
  size_t s_local;
  LifecycleClass *this_local;
  
  this->size = s;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = s;
  uVar2 = SUB168(auVar1 * ZEXT816(4),0);
  if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  piVar3 = operator_new__(uVar2);
  this->data = piVar3;
  for (i = 0; i < s; i = i + 1) {
    this->data[i] = (int)i * 10;
  }
  instance_count = instance_count + 1;
  return;
}



/* Function: getData @ 001035b0 */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass::getData(LifecycleClass *this,size_t idx)

{
  int local_24;
  size_t idx_local;
  LifecycleClass *this_local;
  
  if (idx < this->size) {
    local_24 = this->data[idx];
  }
  else {
    local_24 = -1;
  }
  return local_24;
}



/* Function: getInstanceCount @ 00103600 */

int LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: ~LifecycleClass @ 00103610 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this) */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  LifecycleClass *this_local;
  
  if (this->data != (int *)0x0) {
    operator_delete__(this->data);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: Base @ 00103650 */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
  Base *this_local;
  
  this->_vptr_Base = (_func_int **)&PTR_virtual_func_00108878;
  return;
}



/* Function: Derived @ 00103670 */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived::Derived(Derived *this,int m)

{
  int m_local;
  Derived *this_local;
  
  Base::Base(&this->super_Base);
  (this->super_Base)._vptr_Base = (_func_int **)&PTR_virtual_func_001088b8;
  this->multiplier = m;
  return;
}



/* Function: virtual_func @ 001036b0 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  int x_local;
  Base *this_local;
  
  return x + 1;
}



/* Function: virtual_func @ 001036d0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  int x_local;
  Derived *this_local;
  
  return x * this->multiplier;
}



/* Function: ~Derived @ 001036f0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
  Derived *this_local;
  
  Base::~Base(&this->super_Base);
  return;
}



/* Function: ~Base @ 00103710 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  Base *this_local;
  
  return;
}



/* Function: MultiDerived @ 00103720 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  MultiDerived *this_local;
  
  BaseA::BaseA(&this->super_BaseA);
  BaseB::BaseB(&this->super_BaseB);
  (this->super_BaseA)._vptr_BaseA = (_func_int **)&PTR_funcA_00108900;
  (this->super_BaseB)._vptr_BaseB = (_func_int **)&PTR__ZThn16_N12MultiDerived5funcBEv_00108930;
  return;
}



/* Function: ~MultiDerived @ 00103770 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  MultiDerived *this_local;
  
  BaseB::~BaseB(&this->super_BaseB);
  BaseA::~BaseA(&this->super_BaseA);
  return;
}



/* Function: DiamondDerived @ 001037a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  DiamondDerived *this_local;
  
  VirtualBase::VirtualBase((VirtualBase *)&this->field_0x20);
  MiddleA::MiddleA(&this->super_MiddleA,&PTR_construction_vtable_24__00108a90);
  MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,
                   &PTR_construction_vtable_24__00108aa0);
  (this->super_MiddleA)._vptr_MiddleA = (_func_int **)0x108a08;
  *(undefined8 *)&this->field_0x20 = 0x108a70;
  *(undefined8 *)&(this->super_MiddleA).field_0x10 = 0x108a38;
  return;
}



/* Function: ~DiamondDerived @ 00103830 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  DiamondDerived *this_local;
  
  ~DiamondDerived(this,&VTT);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x20);
  return;
}



/* Function: Point @ 00103870 */

/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point::Point(Point *this,int _x,int _y)

{
  int _y_local;
  int _x_local;
  Point *this_local;
  
  this->x = _x;
  this->y = _y;
  return;
}



/* Function: operator+ @ 00103890 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point::operator+(Point *this,Point *other)

{
  Point *other_local;
  Point *this_local;
  Point local_10;
  
  Point(&local_10,this->x + other->x,this->y + other->y);
  return local_10;
}



/* Function: operator== @ 001038d0 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point::operator==(Point *this,Point *other)

{
  bool local_19;
  Point *other_local;
  Point *this_local;
  
  local_19 = false;
  if (this->x == other->x) {
    local_19 = this->y == other->y;
  }
  return local_19;
}



/* Function: operator++ @ 00103920 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point::operator++(Point *this)

{
  Point *this_local;
  
  this->x = this->x + 1;
  this->y = this->y + 1;
  return this;
}



/* Function: template_max<int> @ 00103940 */

int template_max<int>(int a,int b)

{
  int local_14;
  int b_local;
  int a_local;
  
  local_14 = b;
  if (b < a) {
    local_14 = a;
  }
  return local_14;
}



/* Function: template_max<double> @ 00103970 */

double template_max<double>(double a,double b)

{
  double local_20;
  double b_local;
  double a_local;
  
  local_20 = b;
  if (b < a) {
    local_20 = a;
  }
  return local_20;
}



/* Function: template_swap<int> @ 001039b0 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  int temp;
  int *b_local;
  int *a_local;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 001039e0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  Container<int> *this_local;
  
  this->size = 0;
  return;
}



/* Function: push @ 00103a00 */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
  int iVar1;
  int value_local;
  Container<int> *this_local;
  
  if (this->size < 10) {
    iVar1 = this->size;
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00103a40 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int idx_local;
  Container<int> *this_local;
  int local_c;
  
  if ((idx < 0) || (this->size <= idx)) {
    local_c = 0;
  }
  else {
    local_c = this->data[idx];
  }
  return local_c;
}



/* Function: getSize @ 00103a90 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  Container<int> *this_local;
  
  return this->size;
}



/* Function: Container @ 00103ab0 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  Container<double> *this_local;
  
  this->size = 0;
  return;
}



/* Function: push @ 00103ad0 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
  int iVar1;
  double value_local;
  Container<double> *this_local;
  
  if (this->size < 10) {
    iVar1 = this->size;
    this->size = iVar1 + 1;
    this->data[iVar1] = value;
  }
  return;
}



/* Function: get @ 00103b10 */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  int idx_local;
  Container<double> *this_local;
  double local_10;
  
  if ((idx < 0) || (this->size <= idx)) {
    local_10 = 0.0;
  }
  else {
    local_10 = this->data[idx];
  }
  return local_10;
}



/* Function: getSize @ 00103b70 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  Container<double> *this_local;
  
  return this->size;
}



/* Function: unique_ptr<std::default_delete<int>,_void> @ 00103b90 */

/* DWARF original name: unique_ptr<std::default_delete<int>, void>
   DWARF original prototype: void
   unique_ptr<std::default_delete<int>,_void>(unique_ptr<int,_std::default_delete<int>_> * this,
   pointer __p) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<std::default_delete<int>,_void>
          (unique_ptr<int,_std::default_delete<int>_> *this,pointer __p)

{
  pointer __p_local;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
                    /* try { // try from 00103ba8 to 00103bac has its CatchHandler @ 00103bb8 */
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_impl(&this->_M_t,__p);
  return;
}



/* Function: operator* @ 00103bc0 */

/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::operator*
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: move<std::unique_ptr<int,_std::default_delete<int>_>_&> @ 00103bf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::unique_ptr<int, std::default_delete<int> > &> */

type * std::move<std::unique_ptr<int,_std::default_delete<int>_>_&>
                 (unique_ptr<int,_std::default_delete<int>_> *__t)

{
  unique_ptr<int,_std::default_delete<int>_> *__t_local;
  
  return __t;
}



/* Function: unique_ptr @ 00103c00 */

/* DWARF original prototype: void unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this,
   unique_ptr<int,_std::default_delete<int>_> * param_1) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this,
          unique_ptr<int,_std::default_delete<int>_> *param_1)

{
  unique_ptr<int,_std::default_delete<int>_> *param_1_local;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
            (&this->_M_t,&param_1->_M_t);
  return;
}



/* Function: unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool> @ 00103c30 */

/* DWARF original name: unique_ptr<int *, std::default_delete<int[]>, void, bool>
   DWARF original prototype: void
   unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>(unique_ptr<int[],_std::default_delete<int[]>_>
   * this, int * __p) */

void __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::
unique_ptr<int_*,_std::default_delete<int[]>,_void,_bool>
          (unique_ptr<int[],_std::default_delete<int[]>_> *this,int *__p)

{
  int *__p_local;
  unique_ptr<int[],_std::default_delete<int[]>_> *this_local;
  
                    /* try { // try from 00103c48 to 00103c4c has its CatchHandler @ 00103c58 */
  __uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true>::__uniq_ptr_impl(&this->_M_t,__p);
  return;
}



/* Function: operator[] @ 00103c60 */

/* DWARF original prototype: type operator[](unique_ptr<int[],_std::default_delete<int[]>_> * this,
   size_t __i) */

type __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::operator[]
          (unique_ptr<int[],_std::default_delete<int[]>_> *this,size_t __i)

{
  pointer piVar1;
  size_t __i_local;
  unique_ptr<int[],_std::default_delete<int[]>_> *this_local;
  
  piVar1 = get(this);
  return piVar1 + __i;
}



/* Function: ~unique_ptr @ 00103ca0 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int[],_std::default_delete<int[]>_> * this)
    */

void __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::~unique_ptr
          (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
  pointer *ppiVar1;
  deleter_type *this_00;
  pointer *__ptr;
  unique_ptr<int[],_std::default_delete<int[]>_> *this_local;
  
  ppiVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
                      ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
  if (*ppiVar1 != (pointer)0x0) {
    this_00 = get_deleter(this);
                    /* try { // try from 00103cde to 00103ce2 has its CatchHandler @ 00103cfe */
    default_delete<int[]>::operator()<int>(this_00,*ppiVar1);
  }
  *ppiVar1 = (pointer)0x0;
  return;
}



/* Function: ~unique_ptr @ 00103d10 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
  pointer *__ptr;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
  __t = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                  ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  if (*__t != (pointer)0x0) {
    this_00 = get_deleter(this);
    ppiVar1 = move<int_*&>(__t);
                    /* try { // try from 00103d58 to 00103d5c has its CatchHandler @ 00103d78 */
    default_delete<int>::operator()(this_00,*ppiVar1);
  }
  *__t = (pointer)0x0;
  return;
}



/* Function: RTTIDerivedA @ 00103d80 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedA_00108d50;
  return;
}



/* Function: RTTIDerivedB @ 00103dc0 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int **)&PTR__RTTIDerivedB_00108da0;
  return;
}



/* Function: operator== @ 00103e00 */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std::type_info::operator==(type_info *this,type_info *__arg)

{
  int iVar1;
  bool local_29;
  bool local_19;
  type_info *__arg_local;
  type_info *this_local;
  
  local_19 = true;
  if (*(long *)(this + 8) != *(long *)(__arg + 8)) {
    local_29 = false;
    if (**(char **)(this + 8) != '*') {
      iVar1 = strcmp(*(char **)(this + 8),*(char **)(__arg + 8));
      local_29 = iVar1 == 0;
    }
    local_19 = local_29;
  }
  return local_19;
}



/* Function: derivedA_data @ 00103e80 */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  return 100;
}



/* Function: derivedB_data @ 00103e90 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  return 200;
}



/* Function: name @ 00103ea0 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std::type_info::name(type_info *this)

{
  char *local_20;
  type_info *this_local;
  
  if (**(char **)(this + 8) == '*') {
    local_20 = (char *)(*(long *)(this + 8) + 1);
  }
  else {
    local_20 = *(char **)(this + 8);
  }
  return local_20;
}



/* Function: getName @ 00103ef0 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  Base *this_local;
  
  return "Base";
}



/* Function: ~Base @ 00103f10 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
  Base *this_local;
  
  ~Base(this);
  operator_delete(this);
  return;
}



/* Function: getName @ 00103f40 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  Derived *this_local;
  
  return "Derived";
}



/* Function: ~Derived @ 00103f60 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
  Derived *this_local;
  
  ~Derived(this);
  operator_delete(this);
  return;
}



/* Function: BaseA @ 00103f90 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA::BaseA(BaseA *this)

{
  BaseA *this_local;
  
  this->_vptr_BaseA = (_func_int **)&PTR_funcA_001089b0;
  return;
}



/* Function: BaseB @ 00103fb0 */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB::BaseB(BaseB *this)

{
  BaseB *this_local;
  
  this->_vptr_BaseB = (_func_int **)&PTR_funcB_001089d8;
  return;
}



/* Function: funcA @ 00103fd0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  MultiDerived *this_local;
  
  return 0x1e;
}



/* Function: ~MultiDerived @ 00103fe0 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  MultiDerived *this_local;
  
  ~MultiDerived(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 00104010 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  MultiDerived *this_local;
  
  return 0x28;
}



/* Function: _ZThn16_N12MultiDerived5funcBEv @ 00104020 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerived5funcBEv(void)

{
  long in_RDI;
  
  MultiDerived::funcB((MultiDerived *)(in_RDI + -0x10));
  return;
}



/* Function: _ZThn16_N12MultiDerivedD1Ev @ 00104040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD1Ev(void)

{
  long in_RDI;
  
  MultiDerived::~MultiDerived((MultiDerived *)(in_RDI + -0x10));
  return;
}



/* Function: _ZThn16_N12MultiDerivedD0Ev @ 00104060 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn16_N12MultiDerivedD0Ev(void)

{
  long in_RDI;
  
  MultiDerived::~MultiDerived((MultiDerived *)(in_RDI + -0x10));
  return;
}



/* Function: funcA @ 00104080 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
  BaseA *this_local;
  
  return 10;
}



/* Function: ~BaseA @ 00104090 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  BaseA *this_local;
  
  return;
}



/* Function: ~BaseA @ 001040a0 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  BaseA *this_local;
  
  ~BaseA(this);
  operator_delete(this);
  return;
}



/* Function: funcB @ 001040d0 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
  BaseB *this_local;
  
  return 0x14;
}



/* Function: ~BaseB @ 001040e0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  BaseB *this_local;
  
  return;
}



/* Function: ~BaseB @ 001040f0 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  BaseB *this_local;
  
  ~BaseB(this);
  operator_delete(this);
  return;
}



/* Function: VirtualBase @ 00104120 */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  VirtualBase *this_local;
  
  this->_vptr_VirtualBase = (_func_int **)&PTR_func_00108c38;
  return;
}



/* Function: MiddleA @ 00104140 */

/* DWARF original prototype: void MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::MiddleA(MiddleA *this,void **vtt)

{
  void **vtt_local;
  MiddleA *this_local;
  
  this->_vptr_MiddleA = *vtt;
  *(void **)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) = vtt[1];
  return;
}



/* Function: MiddleB @ 00104170 */

/* DWARF original prototype: void MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::MiddleB(MiddleB *this,void **vtt)

{
  void **vtt_local;
  MiddleB *this_local;
  
  this->_vptr_MiddleB = *vtt;
  *(void **)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) = vtt[1];
  return;
}



/* Function: func @ 001041a0 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  MiddleA *this_local;
  
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 001041c0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  MiddleA *this_local;
  
  ~MiddleA(this,&VTT);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10);
  return;
}



/* Function: ~MiddleA @ 00104200 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  MiddleA *this_local;
  
  ~MiddleA(this);
  operator_delete(this);
  return;
}



/* Function: _ZTv0_n24_N7MiddleA4funcEv @ 00104230 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleA4funcEv(void)

{
  long *in_RDI;
  
  MiddleA::func((MiddleA *)((long)in_RDI + *(long *)(*in_RDI + -0x18)));
  return;
}



/* Function: _ZTv0_n32_N7MiddleAD1Ev @ 00104250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD1Ev(void)

{
  long *in_RDI;
  
  MiddleA::~MiddleA((MiddleA *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: _ZTv0_n32_N7MiddleAD0Ev @ 00104270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleAD0Ev(void)

{
  long *in_RDI;
  
  MiddleA::~MiddleA((MiddleA *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: func @ 00104290 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  MiddleB *this_local;
  
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 001042b0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  MiddleB *this_local;
  
  ~MiddleB(this,&VTT);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10);
  return;
}



/* Function: ~MiddleB @ 001042f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  MiddleB *this_local;
  
  ~MiddleB(this);
  operator_delete(this);
  return;
}



/* Function: _ZTv0_n24_N7MiddleB4funcEv @ 00104320 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n24_N7MiddleB4funcEv(void)

{
  long *in_RDI;
  
  MiddleB::func((MiddleB *)((long)in_RDI + *(long *)(*in_RDI + -0x18)));
  return;
}



/* Function: _ZTv0_n32_N7MiddleBD1Ev @ 00104340 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD1Ev(void)

{
  long *in_RDI;
  
  MiddleB::~MiddleB((MiddleB *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: _ZTv0_n32_N7MiddleBD0Ev @ 00104360 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n32_N7MiddleBD0Ev(void)

{
  long *in_RDI;
  
  MiddleB::~MiddleB((MiddleB *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: func @ 00104380 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  DiamondDerived *this_local;
  
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: ~DiamondDerived @ 001043a0 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  DiamondDerived *this_local;
  
  ~DiamondDerived(this);
  operator_delete(this);
  return;
}



/* Function: _ZThn16_N14DiamondDerived4funcEv @ 001043d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerived4funcEv(void)

{
  long in_RDI;
  
  DiamondDerived::func((DiamondDerived *)(in_RDI + -0x10));
  return;
}



/* Function: _ZThn16_N14DiamondDerivedD1Ev @ 001043f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerivedD1Ev(void)

{
  long in_RDI;
  
  DiamondDerived::~DiamondDerived((DiamondDerived *)(in_RDI + -0x10));
  return;
}



/* Function: _ZThn16_N14DiamondDerivedD0Ev @ 00104410 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZThn16_N14DiamondDerivedD0Ev(void)

{
  long in_RDI;
  
  DiamondDerived::~DiamondDerived((DiamondDerived *)(in_RDI + -0x10));
  return;
}



/* Function: _ZTv0_n24_N14DiamondDerived4funcEv @ 00104430 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n24_N14DiamondDerived4funcEv(void)

{
  long *in_RDI;
  
  DiamondDerived::func((DiamondDerived *)((long)in_RDI + *(long *)(*in_RDI + -0x18)));
  return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD1Ev @ 00104450 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n32_N14DiamondDerivedD1Ev(void)

{
  long *in_RDI;
  
  DiamondDerived::~DiamondDerived((DiamondDerived *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: _ZTv0_n32_N14DiamondDerivedD0Ev @ 00104470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void _ZTv0_n32_N14DiamondDerivedD0Ev(void)

{
  long *in_RDI;
  
  DiamondDerived::~DiamondDerived((DiamondDerived *)((long)in_RDI + *(long *)(*in_RDI + -0x20)));
  return;
}



/* Function: func @ 00104490 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
  VirtualBase *this_local;
  
  return 100;
}



/* Function: ~VirtualBase @ 001044a0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  VirtualBase *this_local;
  
  return;
}



/* Function: ~VirtualBase @ 001044b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  VirtualBase *this_local;
  
  ~VirtualBase(this);
  operator_delete(this);
  return;
}



/* Function: ~MiddleA @ 001044e0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * vtt) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **vtt)

{
  void **vtt_local;
  MiddleA *this_local;
  
  return;
}



/* Function: ~MiddleB @ 001044f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * vtt) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **vtt)

{
  void **vtt_local;
  MiddleB *this_local;
  
  return;
}



/* Function: ~DiamondDerived @ 00104500 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * vtt) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **vtt)

{
  void **vtt_local;
  DiamondDerived *this_local;
  
  MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,vtt + 3);
  MiddleA::~MiddleA(&this->super_MiddleA,vtt + 1);
  return;
}



/* Function: __uniq_ptr_data @ 00104550 */

/* DWARF original prototype: void
   __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this,
   __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
          (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,
          __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *param_1)

{
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *param_1_local;
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this_local;
  
  __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,
             &param_1->super___uniq_ptr_impl<int,_std::default_delete<int>_>);
  return;
}



/* Function: __uniq_ptr_impl @ 00104580 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,
          __uniq_ptr_impl<int,_std::default_delete<int>_> *__u)

{
  type *ptVar1;
  pointer *ppiVar2;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *__u_local;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  ptVar1 = move<std::tuple<int_*,_std::default_delete<int>_>_&>(&__u->_M_t);
  tuple<int_*,_std::default_delete<int>_>::tuple(&this->_M_t,ptVar1);
                    /* try { // try from 001045b1 to 001045b5 has its CatchHandler @ 001045d0 */
  ppiVar2 = _M_ptr(__u);
  *ppiVar2 = (pointer)0x0;
  return;
}



/* Function: move<std::tuple<int_*,_std::default_delete<int>_>_&> @ 001045e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::tuple<int *, std::default_delete<int> > &> */

type * std::move<std::tuple<int_*,_std::default_delete<int>_>_&>
                 (tuple<int_*,_std::default_delete<int>_> *__t)

{
  tuple<int_*,_std::default_delete<int>_> *__t_local;
  
  return __t;
}



/* Function: tuple @ 001045f0 */

/* DWARF original prototype: void tuple(tuple<int_*,_std::default_delete<int>_> * this,
   tuple<int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::tuple<int_*,_std::default_delete<int>_>::tuple
          (tuple<int_*,_std::default_delete<int>_> *this,
          tuple<int_*,_std::default_delete<int>_> *param_1)

{
  tuple<int_*,_std::default_delete<int>_> *param_1_local;
  tuple<int_*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0UL,_int_*,_std::default_delete<int>_>,
             &param_1->super__Tuple_impl<0UL,_int_*,_std::default_delete<int>_>);
  return;
}



/* Function: _M_ptr @ 00104620 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int>_>_> *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  ppiVar1 = get<0UL,_int_*,_std::default_delete<int>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: __clang_call_terminate @ 00104640 */

void __clang_call_terminate(void)

{
  __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
  std::terminate();
}



/* Function: _Tuple_impl @ 00104650 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *
   this, _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::_Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *this,
          _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *param_1)

{
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *param_1_local;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<1UL,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1UL,_std::default_delete<int>_>,
             &param_1->super__Tuple_impl<1UL,_std::default_delete<int>_>);
  *this = *param_1;
  return;
}



/* Function: _Tuple_impl @ 00104690 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int>_> * this,
   _Tuple_impl<1UL,_std::default_delete<int>_> * __in) */

void __thiscall
std::_Tuple_impl<1UL,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1UL,_std::default_delete<int>_> *this,
          _Tuple_impl<1UL,_std::default_delete<int>_> *__in)

{
  _Tuple_impl<1UL,_std::default_delete<int>_> *__in_local;
  _Tuple_impl<1UL,_std::default_delete<int>_> *this_local;
  
  return;
}



/* Function: get<0UL,_int_*,_std::default_delete<int>_> @ 001046a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int>_>_> *
std::get<0UL,_int_*,_std::default_delete<int>_>(tuple<int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  tuple<int_*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = __get_helper<0UL,_int_*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0UL,_int_*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int>_> @ 001046c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int> > */

int ** std::__get_helper<0UL,_int_*,_std::default_delete<int>_>
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 001046e0 */

int ** std::_Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Head_base<0UL,_int_*,_false>::_M_head((_Head_base<0UL,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 00104700 */

int ** std::_Head_base<0UL,_int_*,_false>::_M_head(_Head_base<0UL,_int_*,_false> *__b)

{
  _Head_base<0UL,_int_*,_false> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: RTTIBase @ 00104710 */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  RTTIBase *this_local;
  
  this->_vptr_RTTIBase = (_func_int **)&PTR__RTTIBase_00108d78;
  return;
}



/* Function: ~RTTIDerivedA @ 00104730 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  RTTIBase::~RTTIBase(&this->super_RTTIBase);
  return;
}



/* Function: ~RTTIDerivedA @ 00104750 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  ~RTTIDerivedA(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00104780 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  return 1;
}



/* Function: ~RTTIBase @ 00104790 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  RTTIBase *this_local;
  
  return;
}



/* Function: ~RTTIBase @ 001047a0 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  RTTIBase *this_local;
  
  ~RTTIBase(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 001047d0 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
  RTTIBase *this_local;
  
  return 0;
}



/* Function: ~RTTIDerivedB @ 001047e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  RTTIBase::~RTTIBase(&this->super_RTTIBase);
  return;
}



/* Function: ~RTTIDerivedB @ 00104800 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  ~RTTIDerivedB(this);
  operator_delete(this);
  return;
}



/* Function: getType @ 00104830 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  return 2;
}



/* Function: __uniq_ptr_impl @ 00104840 */

/* DWARF original prototype: void
   __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,pointer param_1)

{
  pointer param_1_local;
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this_local;
  
  __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,param_1);
  return;
}



/* Function: __uniq_ptr_impl @ 00104870 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,pointer __p)

{
  pointer *ppiVar1;
  pointer __p_local;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  tuple<int_*,_std::default_delete<int>_>::tuple<true,_true>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: tuple<true,_true> @ 001048b0 */

/* DWARF original name: tuple<true, true>
   DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int>_> * this)
    */

void __thiscall
std::tuple<int_*,_std::default_delete<int>_>::tuple<true,_true>
          (tuple<int_*,_std::default_delete<int>_> *this)

{
  tuple<int_*,_std::default_delete<int>_> *this_local;
  
                    /* try { // try from 001048c0 to 001048c4 has its CatchHandler @ 001048d0 */
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0UL,_int_*,_std::default_delete<int>_>);
  return;
}



/* Function: _Tuple_impl @ 001048e0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *
   this) */

void __thiscall
std::_Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *this)

{
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<1UL,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1UL,_std::default_delete<int>_>);
  _Head_base<0UL,_int_*,_false>::_Head_base((_Head_base<0UL,_int_*,_false> *)this);
  return;
}



/* Function: _Tuple_impl @ 00104910 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int>_> * this) */

void __thiscall
std::_Tuple_impl<1UL,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1UL,_std::default_delete<int>_> *this)

{
  _Tuple_impl<1UL,_std::default_delete<int>_> *this_local;
  
  _Head_base<1UL,_std::default_delete<int>,_true>::_Head_base
            (&this->super__Head_base<1UL,_std::default_delete<int>,_true>);
  return;
}



/* Function: _Head_base @ 00104930 */

/* DWARF original prototype: void _Head_base(_Head_base<0UL,_int_*,_false> * this) */

void __thiscall std::_Head_base<0UL,_int_*,_false>::_Head_base(_Head_base<0UL,_int_*,_false> *this)

{
  _Head_base<0UL,_int_*,_false> *this_local;
  
  this->_M_head_impl = (int *)0x0;
  return;
}



/* Function: _Head_base @ 00104950 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_std::default_delete<int>,_true> * this)
    */

void __thiscall
std::_Head_base<1UL,_std::default_delete<int>,_true>::_Head_base
          (_Head_base<1UL,_std::default_delete<int>,_true> *this)

{
  _Head_base<1UL,_std::default_delete<int>,_true> *this_local;
  
  return;
}



/* Function: get_deleter @ 00104960 */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
   this) */

deleter_type * __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get_deleter
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  default_delete<int> *pdVar1;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
                    /* try { // try from 00104970 to 00104974 has its CatchHandler @ 00104988 */
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return pdVar1;
}



/* Function: operator() @ 00104990 */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *__ptr)

{
  int *__ptr_local;
  default_delete<int> *this_local;
  
  if (__ptr != (int *)0x0) {
    operator_delete(__ptr);
  }
  return;
}



/* Function: move<int_*&> @ 001049d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<int *&> */

type * std::move<int_*&>(int **__t)

{
  int **__t_local;
  
  return __t;
}



/* Function: _M_deleter @ 001049e0 */

/* DWARF original prototype: default_delete<int> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete<int> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t<1UL,_std::tuple<int_*,_std::default_delete<int>_>_> *p_Var1;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  p_Var1 = get<1UL,_int_*,_std::default_delete<int>_>(&this->_M_t);
  return p_Var1;
}



/* Function: get<1UL,_int_*,_std::default_delete<int>_> @ 00104a00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, std::default_delete<int> > */

__tuple_element_t<1UL,_std::tuple<int_*,_std::default_delete<int>_>_> *
std::get<1UL,_int_*,_std::default_delete<int>_>(tuple<int_*,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  tuple<int_*,_std::default_delete<int>_> *__t_local;
  
  pdVar1 = __get_helper<1UL,_std::default_delete<int>_>
                     ((_Tuple_impl<1UL,_std::default_delete<int>_> *)__t);
  return pdVar1;
}



/* Function: __get_helper<1UL,_std::default_delete<int>_> @ 00104a20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, std::default_delete<int> > */

default_delete<int> *
std::__get_helper<1UL,_std::default_delete<int>_>(_Tuple_impl<1UL,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  _Tuple_impl<1UL,_std::default_delete<int>_> *__t_local;
  
  pdVar1 = _Tuple_impl<1UL,_std::default_delete<int>_>::_M_head(__t);
  return pdVar1;
}



/* Function: _M_head @ 00104a40 */

default_delete<int> *
std::_Tuple_impl<1UL,_std::default_delete<int>_>::_M_head
          (_Tuple_impl<1UL,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  _Tuple_impl<1UL,_std::default_delete<int>_> *__t_local;
  
  pdVar1 = _Head_base<1UL,_std::default_delete<int>,_true>::_M_head
                     (&__t->super__Head_base<1UL,_std::default_delete<int>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 00104a60 */

default_delete<int> *
std::_Head_base<1UL,_std::default_delete<int>,_true>::_M_head
          (_Head_base<1UL,_std::default_delete<int>,_true> *__b)

{
  _Head_base<1UL,_std::default_delete<int>,_true> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: get @ 00104a70 */

/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
                    /* try { // try from 00104a80 to 00104a84 has its CatchHandler @ 00104a98 */
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return piVar1;
}



/* Function: _M_ptr @ 00104aa0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
    */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int>_>_> *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  ppiVar1 = get<0UL,_int_*,_std::default_delete<int>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: get<0UL,_int_*,_std::default_delete<int>_> @ 00104ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int>_>_> *
std::get<0UL,_int_*,_std::default_delete<int>_>(tuple<int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  tuple<int_*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = __get_helper<0UL,_int_*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0UL,_int_*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int>_> @ 00104ae0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int> > */

int ** std::__get_helper<0UL,_int_*,_std::default_delete<int>_>
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00104b00 */

int ** std::_Tuple_impl<0UL,_int_*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Head_base<0UL,_int_*,_false>::_M_head((_Head_base<0UL,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 00104b20 */

int ** std::_Head_base<0UL,_int_*,_false>::_M_head(_Head_base<0UL,_int_*,_false> *__b)

{
  _Head_base<0UL,_int_*,_false> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: __uniq_ptr_impl @ 00104b30 */

/* DWARF original prototype: void
   __uniq_ptr_impl(__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> *this,pointer param_1)

{
  pointer param_1_local;
  __uniq_ptr_data<int,_std::default_delete<int[]>,_true,_true> *this_local;
  
  __uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int[]>_>,param_1);
  return;
}



/* Function: __uniq_ptr_impl @ 00104b60 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int[]>_>
   * this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this,pointer __p)

{
  pointer *ppiVar1;
  pointer __p_local;
  __uniq_ptr_impl<int,_std::default_delete<int[]>_> *this_local;
  
  tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: tuple<true,_true> @ 00104ba0 */

/* DWARF original name: tuple<true, true>
   DWARF original prototype: void tuple<true,_true>(tuple<int_*,_std::default_delete<int[]>_> *
   this) */

void __thiscall
std::tuple<int_*,_std::default_delete<int[]>_>::tuple<true,_true>
          (tuple<int_*,_std::default_delete<int[]>_> *this)

{
  tuple<int_*,_std::default_delete<int[]>_> *this_local;
  
                    /* try { // try from 00104bb0 to 00104bb4 has its CatchHandler @ 00104bc0 */
  _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>);
  return;
}



/* Function: _M_ptr @ 00104bd0 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
  __tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int[]>_> *this_local;
  
  ppiVar1 = get<0UL,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00104bf0 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *
   this) */

void __thiscall
std::_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>::_Tuple_impl
          (_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *this)

{
  _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *this_local;
  
  _Tuple_impl<1UL,_std::default_delete<int[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<1UL,_std::default_delete<int[]>_>);
  _Head_base<0UL,_int_*,_false>::_Head_base((_Head_base<0UL,_int_*,_false> *)this);
  return;
}



/* Function: _Tuple_impl @ 00104c20 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1UL,_std::default_delete<int[]>_> * this)
    */

void __thiscall
std::_Tuple_impl<1UL,_std::default_delete<int[]>_>::_Tuple_impl
          (_Tuple_impl<1UL,_std::default_delete<int[]>_> *this)

{
  _Tuple_impl<1UL,_std::default_delete<int[]>_> *this_local;
  
  _Head_base<1UL,_std::default_delete<int[]>,_true>::_Head_base
            (&this->super__Head_base<1UL,_std::default_delete<int[]>,_true>);
  return;
}



/* Function: _Head_base @ 00104c40 */

/* DWARF original prototype: void _Head_base(_Head_base<1UL,_std::default_delete<int[]>,_true> *
   this) */

void __thiscall
std::_Head_base<1UL,_std::default_delete<int[]>,_true>::_Head_base
          (_Head_base<1UL,_std::default_delete<int[]>,_true> *this)

{
  _Head_base<1UL,_std::default_delete<int[]>,_true> *this_local;
  
  return;
}



/* Function: get<0UL,_int_*,_std::default_delete<int[]>_> @ 00104c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int[]> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<0UL,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  tuple<int_*,_std::default_delete<int[]>_> *__t_local;
  
  ppiVar1 = __get_helper<0UL,_int_*,_std::default_delete<int[]>_>
                      (&__t->super__Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>);
  return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int[]>_> @ 00104c70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int[]> > */

int ** std::__get_helper<0UL,_int_*,_std::default_delete<int[]>_>
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00104c90 */

int ** std::_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>::_M_head
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t_local;
  
  ppiVar1 = _Head_base<0UL,_int_*,_false>::_M_head((_Head_base<0UL,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: get_deleter @ 00104cb0 */

/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get_deleter
          (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
  default_delete<int[]> *pdVar1;
  unique_ptr<int[],_std::default_delete<int[]>_> *this_local;
  
                    /* try { // try from 00104cc0 to 00104cc4 has its CatchHandler @ 00104cd8 */
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
  return pdVar1;
}



/* Function: operator()<int> @ 00104ce0 */

/* DWARF original prototype: type operator()<int>(default_delete<int[]> * this, int * __ptr) */

type __thiscall std::default_delete<int[]>::operator()<int>(default_delete<int[]> *this,int *__ptr)

{
  int *__ptr_local;
  default_delete<int[]> *this_local;
  
  if (__ptr != (int *)0x0) {
    operator_delete__(__ptr);
  }
  return;
}



/* Function: _M_deleter @ 00104d20 */

/* DWARF original prototype: default_delete<int[]> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int[]>_> * this) */

default_delete<int[]> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
  __tuple_element_t<1UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *p_Var1;
  __uniq_ptr_impl<int,_std::default_delete<int[]>_> *this_local;
  
  p_Var1 = get<1UL,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
  return p_Var1;
}



/* Function: get<1UL,_int_*,_std::default_delete<int[]>_> @ 00104d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1UL, int *, std::default_delete<int[]> > */

__tuple_element_t<1UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<1UL,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
  default_delete<int[]> *pdVar1;
  tuple<int_*,_std::default_delete<int[]>_> *__t_local;
  
  pdVar1 = __get_helper<1UL,_std::default_delete<int[]>_>
                     ((_Tuple_impl<1UL,_std::default_delete<int[]>_> *)__t);
  return pdVar1;
}



/* Function: __get_helper<1UL,_std::default_delete<int[]>_> @ 00104d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1UL, std::default_delete<int[]> > */

default_delete<int[]> *
std::__get_helper<1UL,_std::default_delete<int[]>_>
          (_Tuple_impl<1UL,_std::default_delete<int[]>_> *__t)

{
  default_delete<int[]> *pdVar1;
  _Tuple_impl<1UL,_std::default_delete<int[]>_> *__t_local;
  
  pdVar1 = _Tuple_impl<1UL,_std::default_delete<int[]>_>::_M_head(__t);
  return pdVar1;
}



/* Function: _M_head @ 00104d80 */

default_delete<int[]> *
std::_Tuple_impl<1UL,_std::default_delete<int[]>_>::_M_head
          (_Tuple_impl<1UL,_std::default_delete<int[]>_> *__t)

{
  default_delete<int[]> *pdVar1;
  _Tuple_impl<1UL,_std::default_delete<int[]>_> *__t_local;
  
  pdVar1 = _Head_base<1UL,_std::default_delete<int[]>,_true>::_M_head
                     (&__t->super__Head_base<1UL,_std::default_delete<int[]>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 00104da0 */

default_delete<int[]> *
std::_Head_base<1UL,_std::default_delete<int[]>,_true>::_M_head
          (_Head_base<1UL,_std::default_delete<int[]>,_true> *__b)

{
  _Head_base<1UL,_std::default_delete<int[]>,_true> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: get @ 00104db0 */

/* DWARF original prototype: pointer get(unique_ptr<int[],_std::default_delete<int[]>_> * this) */

pointer __thiscall
std::unique_ptr<int[],_std::default_delete<int[]>_>::get
          (unique_ptr<int[],_std::default_delete<int[]>_> *this)

{
  pointer piVar1;
  unique_ptr<int[],_std::default_delete<int[]>_> *this_local;
  
                    /* try { // try from 00104dc0 to 00104dc4 has its CatchHandler @ 00104dd8 */
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int[]>_> *)this);
  return piVar1;
}



/* Function: _M_ptr @ 00104de0 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int[]>_> *
   this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int[]>_> *this)

{
  __tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int[]>_> *this_local;
  
  ppiVar1 = get<0UL,_int_*,_std::default_delete<int[]>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: get<0UL,_int_*,_std::default_delete<int[]>_> @ 00104e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0UL, int *, std::default_delete<int[]> > */

__tuple_element_t<0UL,_std::tuple<int_*,_std::default_delete<int[]>_>_> *
std::get<0UL,_int_*,_std::default_delete<int[]>_>(tuple<int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  tuple<int_*,_std::default_delete<int[]>_> *__t_local;
  
  ppiVar1 = __get_helper<0UL,_int_*,_std::default_delete<int[]>_>
                      (&__t->super__Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>);
  return ppiVar1;
}



/* Function: __get_helper<0UL,_int_*,_std::default_delete<int[]>_> @ 00104e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0UL, int *, std::default_delete<int[]> > */

int ** std::__get_helper<0UL,_int_*,_std::default_delete<int[]>_>
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _M_head @ 00104e40 */

int ** std::_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_>::_M_head
                 (_Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0UL,_int_*,_std::default_delete<int[]>_> *__t_local;
  
  ppiVar1 = _Head_base<0UL,_int_*,_false>::_M_head((_Head_base<0UL,_int_*,_false> *)__t);
  return ppiVar1;
}



/* Function: forward<int_*&> @ 00104e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<int *&> */

int ** std::forward<int_*&>(type *__t)

{
  type *__t_local;
  
  return __t;
}



/* Function: _Head_base<int_*&> @ 00104e70 */

/* DWARF original name: _Head_base<int *&>
   DWARF original prototype: void _Head_base<int_*&>(_Head_base<0UL,_int_*,_false> * this, int * *
   __h) */

void __thiscall
std::_Head_base<0UL,_int_*,_false>::_Head_base<int_*&>
          (_Head_base<0UL,_int_*,_false> *this,int **__h)

{
  int **ppiVar1;
  int **__h_local;
  _Head_base<0UL,_int_*,_false> *this_local;
  
  ppiVar1 = forward<int_*&>(__h);
  this->_M_head_impl = *ppiVar1;
  return;
}



/* Function: _fini @ 00104ea4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 214 */
