/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_gcc_O0_g
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



/* Function: _start @ 001022e0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00102310 */

/* WARNING: Removing unreachable block (ram,0x00102323) */
/* WARNING: Removing unreachable block (ram,0x0010232f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00102340 */

/* WARNING: Removing unreachable block (ram,0x00102364) */
/* WARNING: Removing unreachable block (ram,0x00102370) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00102380 */

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



/* Function: test_cpp_member_func @ 001023ca */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int r1;
  int r2;
  int r3;
  SimpleClass obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  SimpleClass::SimpleClass(&obj,5,"Test");
  SimpleClass::setValue(&obj,10);
  iVar2 = SimpleClass::getValue(&obj);
  iVar3 = SimpleClass::compute(&obj,3);
  iVar4 = SimpleClass::getClassID();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 0010245c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  int result;
  LifecycleClass obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  LifecycleClass::LifecycleClass(&obj,5);
  iVar4 = 2;
  iVar2 = LifecycleClass::getData(&obj,2);
  iVar3 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(&obj,iVar4);
  iVar4 = LifecycleClass::getInstanceCount();
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + iVar3 + iVar4 * 1000;
}



/* Function: call_virtual_func @ 001024de */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  int x_local;
  Base *obj_local;
  
  iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 0010250b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int __in_chrg;
  long in_FS_OFFSET;
  int r1;
  int r2;
  int r3;
  int r4;
  Base base;
  Base *pb;
  Base *pd;
  Derived derived;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00108b50;
  Derived::Derived(&derived,3);
  iVar2 = Base::virtual_func(&base,5);
  iVar3 = Derived::virtual_func(&derived,5);
                    /* try { // try from 00102587 to 0010259f has its CatchHandler @ 001025e1 */
  iVar4 = call_virtual_func(&base,5);
  __in_chrg = 5;
  iVar5 = call_virtual_func(&derived.super_Base,5);
  Derived::~Derived(&derived,__in_chrg);
  Base::~Base(&base,__in_chrg);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + iVar3 + iVar4 + iVar5;
}



/* Function: test_cpp_multiple_inheritance @ 00102616 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int in_ESI;
  long in_FS_OFFSET;
  int r1;
  int r2;
  int ptr_equal;
  BaseA *pa;
  BaseB *pb;
  MultiDerived obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  MultiDerived::MultiDerived(&obj);
  obj.super_BaseA.dataA = 100;
  obj.super_BaseB.dataB = 200;
                    /* try { // try from 00102671 to 00102688 has its CatchHandler @ 001026ca */
  iVar2 = (**obj.super_BaseA._vptr_BaseA)(&obj);
  iVar3 = (**obj.super_BaseB._vptr_BaseB)(&obj.super_BaseB);
  MultiDerived::~MultiDerived(&obj,in_ESI);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2 + iVar3 + (uint)(&obj != (MultiDerived *)&obj.super_BaseB);
}



/* Function: test_cpp_diamond_inheritance @ 001026f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  void **in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int r1;
  int r2;
  VirtualBase *pb;
  DiamondDerived obj;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  DiamondDerived::DiamondDerived(&obj,in_ESI,in_RDX);
  obj._40_4_ = 0x32;
                    /* try { // try from 0010273f to 0010275d has its CatchHandler @ 00102789 */
  uVar2 = (**(code **)obj._32_8_)(&obj.field_0x20);
  obj._40_4_ = 100;
  iVar3 = (**(code **)obj._32_8_)(&obj.field_0x20);
  DiamondDerived::~DiamondDerived(&obj,in_ESI,(void **)(ulong)uVar2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 + iVar3;
}



/* Function: test_cpp_operator_overload @ 001027b2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long in_FS_OFFSET;
  bool eq;
  Point p1;
  Point p2;
  Point p3;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Point::Point(&p1,1,2);
  Point::Point(&p2,3,4);
  p3 = Point::operator+(&p1,&p2);
  bVar2 = Point::operator==(&p1,&p2);
  Point::operator++(&p3);
  if (bVar2) {
    iVar3 = 0;
  }
  else {
    iVar3 = 10;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return p3.y + p3.x + iVar3;
}



/* Function: test_cpp_template_func @ 00102864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  long in_FS_OFFSET;
  int a;
  int b;
  int r1;
  double r2;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  r1 = template_max<int>(3,7);
  r2 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return b + (int)r2 + r1 + a;
}



/* Function: test_cpp_template_class @ 00102906 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  double dVar4;
  int r1;
  int r2;
  double r3;
  Container<int> int_container;
  Container<double> double_container;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  Container<int>::Container(&int_container);
  Container<int>::push(&int_container,10);
  Container<int>::push(&int_container,0x14);
  Container<int>::push(&int_container,0x1e);
  iVar2 = Container<int>::get(&int_container,0);
  iVar3 = Container<int>::getSize(&int_container);
  Container<double>::Container(&double_container);
  Container<double>::push(&double_container,3.14);
  dVar4 = Container<double>::get(&double_container,0);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)dVar4 + iVar2 + iVar3;
}



/* Function: operator() @ 00102a12 */

/* DWARF original prototype: int operator()(anon_struct_16_2_484633fb * __closure, int x) */

int __thiscall
test_cpp_lambda::anon_struct_16_2_484633fb::operator()(anon_struct_16_2_484633fb *this,int x)

{
  int x_local;
  int *capture_by_value;
  
                    /* Unresolved local var: int * capture_by_ref@[???] */
  *this->__capture_by_ref = *this->__capture_by_ref + 5;
  return *this->__capture_by_ref + this->__capture_by_value * x;
}



/* Function: test_cpp_lambda @ 00102a4e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
  long lVar1;
  long in_FS_OFFSET;
  int capture_by_ref;
  int capture_by_value;
  int r1;
  int r2;
  anon_struct_16_2_484633fb lambda1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  capture_by_value = 10;
  capture_by_ref = 0x14;
  lambda1.__capture_by_value = 10;
  lambda1.__capture_by_ref = &capture_by_ref;
  r1 = test_cpp_lambda::anon_struct_16_2_484633fb::operator()(&lambda1,3);
  r2 = 0x1e;
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return r1 + 0x1e;
}



/* Function: test_cpp_exception @ 00102abe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
  undefined4 *puVar1;
  int result;
  int e;
  int e_1;
  BaseException *e_3;
  DerivedException *e_2;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00102af6 to 00102afa has its CatchHandler @ 00102b03 */
  __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: operator() @ 00102be4 */

/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
   int * p) */

void __thiscall
std::_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::
anon_struct_1_0_00000001_for__M_head_impl::operator()
          (anon_struct_1_0_00000001_for__M_head_impl *this,int *p)

{
  int *p_local;
  anon_struct_1_0_00000001_for__M_head_impl *this_local;
  
  *p = -1;
  if (p != (int *)0x0) {
    operator_delete(p,4);
  }
  return;
}



/* Function: test_cpp_smart_ptr @ 00102c17 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  pointer __p;
  type piVar5;
  type *ptVar6;
  int *__p_00;
  pointer __p_01;
  int __in_chrg;
  long in_FS_OFFSET;
  anon_struct_1_0_00000001_for__M_head_impl deleter;
  int r1;
  int r2;
  int r3;
  unique_ptr<int,_std::default_delete<int>_> ptr1;
  unique_ptr<int,_std::default_delete<int>_> ptr2;
  unique_ptr<int_[],_std::default_delete<int_[]>_> arr;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> ptr3;
  
  lVar4 = *(long *)(in_FS_OFFSET + 0x28);
  __p = operator_new(4);
  *__p = 100;
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<>(&ptr1,__p);
  piVar5 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr1);
  *piVar5 = 200;
  ptVar6 = std::move<std::unique_ptr<int>&>(&ptr1);
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr(&ptr2,ptVar6);
  piVar5 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr2);
  iVar1 = *piVar5;
                    /* try { // try from 00102c98 to 00102c9c has its CatchHandler @ 00102d90 */
  __p_00 = operator_new__(0x14);
  *__p_00 = 1;
  __p_00[1] = 2;
  __p_00[2] = 3;
  __p_00[3] = 4;
  __p_00[4] = 5;
  std::unique_ptr<int_[],_std::default_delete<int_[]>_>::unique_ptr<int*>(&arr,__p_00);
  piVar5 = std::unique_ptr<int_[],_std::default_delete<int_[]>_>::operator[](&arr,2);
  iVar2 = *piVar5;
                    /* try { // try from 00102cfb to 00102cff has its CatchHandler @ 00102d7b */
  __p_01 = operator_new(4);
  *__p_01 = 500;
  std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::unique_ptr<>(&ptr3,__p_01,&deleter);
  __in_chrg = (int)__p_01;
  piVar5 = std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::operator*(&ptr3);
  iVar3 = *piVar5;
  std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::~unique_ptr(&ptr3,__in_chrg);
  std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr(&arr,__in_chrg);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr2,__in_chrg);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr1,__in_chrg);
  if (lVar4 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_rtti @ 00102dc5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  bool bVar1;
  int iVar2;
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  RTTIDerivedA *this_01;
  RTTIDerivedB *this_02;
  char *__s;
  size_t sVar3;
  int result;
  RTTIBase *obj1;
  RTTIBase *obj2;
  RTTIDerivedA *derivedA;
  RTTIDerivedB *derivedB;
  
  this = operator_new(8);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(8);
  (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  result = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
LAB_00102e46:
    result = 10;
  }
  else {
    bVar1 = std::type_info::operator==
                      ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
                       (type_info *)&RTTIDerivedA::typeinfo);
    if (bVar1) goto LAB_00102e46;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
LAB_00102e77:
    result = result + 0x14;
  }
  else {
    bVar1 = std::type_info::operator==
                      ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
                       (type_info *)&RTTIDerivedB::typeinfo);
    if (bVar1) goto LAB_00102e77;
  }
  if (this == (RTTIDerivedA *)0x0) {
    this_01 = (RTTIDerivedA *)0x0;
  }
  else {
    this_01 = (RTTIDerivedA *)__dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (this_01 != (RTTIDerivedA *)0x0) {
    iVar2 = RTTIDerivedA::derivedA_data(this_01);
    result = result + iVar2;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    this_02 = (RTTIDerivedB *)0x0;
  }
  else {
    this_02 = (RTTIDerivedB *)__dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (this_02 != (RTTIDerivedB *)0x0) {
    iVar2 = RTTIDerivedB::derivedB_data(this_02);
    result = result + iVar2;
  }
  if (this == (RTTIDerivedA *)0x0) {
    this = (RTTIDerivedA *)__cxa_bad_typeid();
  }
  else {
    __s = std::type_info::name((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1]);
    sVar3 = strlen(__s);
    result = result + (int)sVar3;
    if (this == (RTTIDerivedA *)0x0) goto LAB_00102f4e;
  }
  (*(this->super_RTTIBase)._vptr_RTTIBase[1])(this);
LAB_00102f4e:
  if (this_00 != (RTTIDerivedB *)0x0) {
    (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])(this_00);
  }
  return result;
}



/* Function: test_cpp_oo_features @ 00102f6f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  uint uVar1;
  
  puts(&DAT_00105040);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00105064,(ulong)uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_00105082,(ulong)uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_0010509e,(ulong)uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_001050ba,(ulong)uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_001050d6,(ulong)uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_001050f3,(ulong)uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_0010510f,(ulong)uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_0010512b,(ulong)uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00105147,(ulong)uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00105163,(ulong)uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_00105180,(ulong)uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_0010519d,(ulong)uVar1);
  return;
}



/* Function: main @ 001030cd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 001030e2 */

/* DWARF original name: __uniq_ptr_data<const test_cpp_smart_ptr()::<lambda(int*)>&>
   DWARF original prototype: void
   __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>
   * this, pointer param_1, anon_struct_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std::__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>::
__uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>
          (__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false> *this,
          pointer param_1,anon_struct_1_0_00000001_for__M_head_impl *param_2)

{
  anon_struct_1_0_00000001_for__M_head_impl *param_2_local;
  pointer param_1_local;
  __uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false> *this_local;
  
  __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::
  __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&>
            (&this->super___uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>,param_1,
             param_2);
  return;
}



/* Function: unique_ptr<> @ 00103110 */

/* DWARF original prototype: void
   unique_ptr<>(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this, pointer __p,
   deleter_type * __d) */

void __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::unique_ptr<>
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,pointer __p,
          deleter_type *__d)

{
  deleter_type *__d_local;
  pointer __p_local;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  __uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>::
  __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>(&this->_M_t,__p,__d);
  return;
}



/* Function: ~unique_ptr @ 0010313e */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, int __in_chrg) */

void __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::~unique_ptr
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,int __in_chrg)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  int **__ptr;
  
  __t = __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
                  ((__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *)this);
  if (*__t != (pointer)0x0) {
    this_00 = get_deleter(this);
    ppiVar1 = move<int*&>(__t);
    _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::
    anon_struct_1_0_00000001_for__M_head_impl::operator()(this_00,*ppiVar1);
  }
  *__t = (pointer)0x0;
  return;
}



/* Function: operator* @ 001031a2 */

/* DWARF original prototype: type operator*(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *
   this) */

type __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::operator*
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  pointer piVar1;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 001031c4 */

/* DWARF original name: __uniq_ptr_impl<const test_cpp_smart_ptr()::<lambda(int*)>&>
   DWARF original prototype: void
   __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, pointer __p, anon_struct_1_0_00000001_for__M_head_impl * __d) */

void __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::
__uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&>
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,pointer __p,
          anon_struct_1_0_00000001_for__M_head_impl *__d)

{
  anon_struct_1_0_00000001_for__M_head_impl *__a2;
  anon_struct_1_0_00000001_for__M_head_impl *__d_local;
  pointer __p_local;
  __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  __p_local = __p;
  this_local = this;
  __a2 = forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__d);
  tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::
  tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>(&this->_M_t,&__p_local,__a2);
  return;
}



/* Function: _M_ptr @ 00103202 */

/* DWARF original prototype: pointer *
   _M_ptr(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  __tuple_element_t *ppiVar1;
  __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  ppiVar1 = get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 0010321c */

/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::get_deleter
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  paVar1 = __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *)this);
  return paVar1;
}



/* Function: get @ 00103236 */

/* DWARF original prototype: pointer get(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *
   this) */

pointer __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::get
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  pointer piVar1;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  piVar1 = __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *)this);
  return piVar1;
}



/* Function: forward<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00103250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: forward<const test_cpp_smart_ptr()::<lambda(int*)>&> */

anon_struct_1_0_00000001_for__M_head_impl *
std::forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(type *__t)

{
  type *__t_local;
  
  return __t;
}



/* Function: tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 0010325e */

/* DWARF original name: tuple<int*&, const test_cpp_smart_ptr()::<lambda(int*)>&>
   DWARF original prototype: void
   tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>(tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, int * * __a1, anon_struct_1_0_00000001_for__M_head_impl * __a2) */

void __thiscall
std::tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::
tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,int **__a1,
          anon_struct_1_0_00000001_for__M_head_impl *__a2)

{
  int **__head;
  anon_struct_1_0_00000001_for__M_head_impl *__a2_local;
  int **__a1_local;
  tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__a2);
  __head = forward<int*&>(__a1);
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::
  _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>
            (&this->super__Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>,__head);
  return;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 001032ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std::get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  ppiVar1 = __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                      (&__t->super__Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>);
  return ppiVar1;
}



/* Function: _M_deleter @ 001032c6 */

/* DWARF original prototype: anon_struct_1_0_00000001_for__M_head_impl *
   _M_deleter(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_deleter
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  __tuple_element_t_conflict *p_Var1;
  __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  p_Var1 = get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>(&this->_M_t);
  return p_Var1;
}



/* Function: _M_ptr @ 001032e0 */

/* DWARF original prototype: pointer
   _M_ptr(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  __tuple_element_t *ppiVar1;
  __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  ppiVar1 = get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 001032fe */

/* DWARF original name: _Tuple_impl<int*&, const test_cpp_smart_ptr()::<lambda(int*)>&>
   DWARF original prototype: void
   _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>(_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, int * * __head) */

void __thiscall
std::_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::
_Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>
          (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,int **__head)

{
  anon_struct_1_0_00000001_for__M_head_impl *__head_00;
  int **__h;
  type *in_RDX;
  int **__head_local;
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  __head_00 = forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(in_RDX);
  _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>,__head_00);
  __h = forward<int*&>(__head);
  _Head_base<0,_int*,_false>::_Head_base<int*&>((_Head_base<0,_int*,_false> *)this,__h);
  return;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00103353 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

int ** std::__get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 0010336d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t_conflict *
std::get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  paVar1 = __get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
                     ((_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *)__t);
  return paVar1;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00103387 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std::get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  ppiVar1 = __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                      (&__t->super__Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 001033a2 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, anon_struct_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std::_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_Tuple_impl
          (_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,
          anon_struct_1_0_00000001_for__M_head_impl *__head)

{
  anon_struct_1_0_00000001_for__M_head_impl *__head_local;
  _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *this_local;
  
  _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_Head_base
            (&this->super__Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>,__head);
  return;
}



/* Function: _M_head @ 001033c8 */

int ** std::_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: __get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 001033e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, test_cpp_smart_ptr()::<lambda(int*)> > */

anon_struct_1_0_00000001_for__M_head_impl *
std::__get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  paVar1 = _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head(__t);
  return paVar1;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 001033fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

int ** std::__get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _Head_base @ 00103416 */

/* DWARF original prototype: void
   _Head_base(_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> * this,
   anon_struct_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std::_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_Head_base
          (_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> *this,
          anon_struct_1_0_00000001_for__M_head_impl *__h)

{
  anon_struct_1_0_00000001_for__M_head_impl *__h_local;
  _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> *this_local;
  
  return;
}



/* Function: _M_head @ 00103425 */

anon_struct_1_0_00000001_for__M_head_impl *
std::_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head
          (_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  paVar1 = _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_M_head
                     (&__t->super__Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>);
  return paVar1;
}



/* Function: _M_head @ 0010343f */

int ** std::_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t_local;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 00103459 */

anon_struct_1_0_00000001_for__M_head_impl *
std::_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_M_head
          (_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> *__b)

{
  _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: __static_initialization_and_destruction_0 @ 00103467 */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  int __priority_local;
  int __initialize_p_local;
  
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 001034bd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* Function: name @ 001034d6 */

/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std::type_info::name(type_info *this)

{
  char *pcVar1;
  type_info *this_local;
  
  if (**(char **)(this + 8) == '*') {
    pcVar1 = (char *)(*(long *)(this + 8) + 1);
  }
  else {
    pcVar1 = *(char **)(this + 8);
  }
  return pcVar1;
}



/* Function: operator== @ 0010350a */

/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std::type_info::operator==(type_info *this,type_info *__arg)

{
  bool bVar1;
  int iVar2;
  type_info *__arg_local;
  type_info *this_local;
  
  if (*(long *)(this + 8) == *(long *)(__arg + 8)) {
LAB_00103561:
    bVar1 = true;
  }
  else {
    if (**(char **)(this + 8) != '*') {
      iVar2 = strcmp(*(char **)(this + 8),*(char **)(__arg + 8));
      if (iVar2 == 0) goto LAB_00103561;
    }
    bVar1 = false;
  }
  return bVar1;
}



/* Function: SimpleClass @ 00103570 */

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



/* Function: getValue @ 001035b8 */

/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass::getValue(SimpleClass *this)

{
  SimpleClass *this_local;
  
  return this->value;
}



/* Function: setValue @ 001035cc */

/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int v)

{
  int v_local;
  SimpleClass *this_local;
  
  this->value = v;
  return;
}



/* Function: compute @ 001035e8 */

/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass::compute(SimpleClass *this,int x)

{
  int iVar1;
  size_t sVar2;
  int x_local;
  SimpleClass *this_local;
  
  iVar1 = this->value;
  sVar2 = strlen(this->name);
  return (int)sVar2 + iVar1 * x;
}



/* Function: getClassID @ 00103620 */

int SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00103630 */

/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,size_t s)

{
  int *piVar1;
  size_t s_local;
  LifecycleClass *this_local;
  size_t i;
  
  this->size = s;
  if (s < 0x1fffffffffffffff) {
    piVar1 = operator_new__(s << 2);
    this->data = piVar1;
    for (i = 0; i < s; i = i + 1) {
LAB_00103688:
      this->data[i] = (int)i * 10;
    }
    instance_count = instance_count + 1;
    return;
  }
  __cxa_throw_bad_array_new_length();
  goto LAB_00103688;
}



/* Function: ~LifecycleClass @ 001036d0 */

/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this, int __in_chrg) */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this,int __in_chrg)

{
  LifecycleClass *this_local;
  
  if (this->data != (int *)0x0) {
    operator_delete__(this->data);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: getData @ 0010370e */

/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass::getData(LifecycleClass *this,size_t idx)

{
  int iVar1;
  size_t idx_local;
  LifecycleClass *this_local;
  
  if (idx < this->size) {
    iVar1 = this->data[idx];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: getInstanceCount @ 00103749 */

int LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: virtual_func @ 0010375a */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  int x_local;
  Base *this_local;
  
  return x + 1;
}



/* Function: getName @ 00103772 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  Base *this_local;
  
  return "Base";
}



/* Function: ~Base @ 00103788 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  Base *this_local;
  
  this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00108b50;
  return;
}



/* Function: ~Base @ 001037a6 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  Base *this_local;
  
  ~Base(this,__in_chrg);
  operator_delete(this,8);
  return;
}



/* Function: Base @ 001037d6 */

/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
  Base *this_local;
  
  this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00108b50;
  return;
}



/* Function: Derived @ 001037f4 */

/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived::Derived(Derived *this,int m)

{
  int m_local;
  Derived *this_local;
  
  Base::Base(&this->super_Base);
  (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00108b20;
  this->multiplier = m;
  return;
}



/* Function: virtual_func @ 0010382e */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  int x_local;
  Derived *this_local;
  
  return this->multiplier * x;
}



/* Function: getName @ 0010384a */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  Derived *this_local;
  
  return "Derived";
}



/* Function: funcA @ 00103860 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
  BaseA *this_local;
  
  return 10;
}



/* Function: ~BaseA @ 00103874 */

/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void __thiscall BaseA::~BaseA(BaseA *this,int __in_chrg)

{
  BaseA *this_local;
  
  this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00108af8;
  return;
}



/* Function: ~BaseA @ 00103892 */

/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void __thiscall BaseA::~BaseA(BaseA *this,int __in_chrg)

{
  BaseA *this_local;
  
  ~BaseA(this,__in_chrg);
  operator_delete(this,0x10);
  return;
}



/* Function: funcB @ 001038c2 */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
  BaseB *this_local;
  
  return 0x14;
}



/* Function: ~BaseB @ 001038d6 */

/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void __thiscall BaseB::~BaseB(BaseB *this,int __in_chrg)

{
  BaseB *this_local;
  
  this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00108ad0;
  return;
}



/* Function: ~BaseB @ 001038f4 */

/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void __thiscall BaseB::~BaseB(BaseB *this,int __in_chrg)

{
  BaseB *this_local;
  
  ~BaseB(this,__in_chrg);
  operator_delete(this,0x10);
  return;
}



/* Function: funcA @ 00103924 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  MultiDerived *this_local;
  
  return 0x1e;
}



/* Function: funcB @ 00103938 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  MultiDerived *this_local;
  
  return 0x28;
}



/* Function: funcB @ 0010394b */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB((MultiDerived *)&this[-1].super_BaseB);
  return;
}



/* Function: BaseA @ 00103956 */

/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA::BaseA(BaseA *this)

{
  BaseA *this_local;
  
  this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00108af8;
  return;
}



/* Function: BaseB @ 00103974 */

/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB::BaseB(BaseB *this)

{
  BaseB *this_local;
  
  this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00108ad0;
  return;
}



/* Function: MultiDerived @ 00103992 */

/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  MultiDerived *this_local;
  
  BaseA::BaseA(&this->super_BaseA);
  BaseB::BaseB(&this->super_BaseB);
  (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00108a78;
  (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00108aa8;
  return;
}



/* Function: func @ 001039de */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
  VirtualBase *this_local;
  
  return 100;
}



/* Function: ~VirtualBase @ 001039f2 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
  VirtualBase *this_local;
  
  this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00108a50;
  return;
}



/* Function: ~VirtualBase @ 00103a10 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
  VirtualBase *this_local;
  
  ~VirtualBase(this,__in_chrg);
  operator_delete(this,0x10);
  return;
}



/* Function: func @ 00103a40 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  MiddleA *this_local;
  
  return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00103a6e */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]));
  return;
}



/* Function: func @ 00103a7c */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  MiddleB *this_local;
  
  return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00103aaa */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]));
  return;
}



/* Function: func @ 00103ab8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  DiamondDerived *this_local;
  
  return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
                 ) + 0xfa;
}



/* Function: func @ 00103ae6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func((DiamondDerived *)
       ((long)&(this->super_MiddleA)._vptr_MiddleA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]))
  ;
  return;
}



/* Function: func @ 00103af3 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func((DiamondDerived *)&this[-1].field_0x20);
  return;
}



/* Function: VirtualBase @ 00103afe */

/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  VirtualBase *this_local;
  
  this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00108a50;
  return;
}



/* Function: MiddleA @ 00103b1c */

/* DWARF original prototype: void MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
  undefined4 in_register_00000034;
  void **__vtt_parm_local;
  MiddleA *this_local;
  
  this->_vptr_MiddleA = *(_func_int_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
  *(undefined8 *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) =
       ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
  return;
}



/* Function: ~MiddleA @ 00103b60 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
  undefined4 in_register_00000034;
  void **__vtt_parm_local;
  MiddleA *this_local;
  
  this->_vptr_MiddleA = *(_func_int_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
  *(undefined8 *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]) =
       ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
  return;
}



/* Function: MiddleB @ 00103ba4 */

/* DWARF original prototype: void MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
  undefined4 in_register_00000034;
  void **__vtt_parm_local;
  MiddleB *this_local;
  
  this->_vptr_MiddleB = *(_func_int_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
  *(undefined8 *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) =
       ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
  return;
}



/* Function: ~MiddleB @ 00103be8 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
  undefined4 in_register_00000034;
  void **__vtt_parm_local;
  MiddleB *this_local;
  
  this->_vptr_MiddleB = *(_func_int_varargs ***)CONCAT44(in_register_00000034,__in_chrg);
  *(undefined8 *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]) =
       ((undefined8 *)CONCAT44(in_register_00000034,__in_chrg))[1];
  return;
}



/* Function: DiamondDerived @ 00103c2c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  DiamondDerived *this_local;
  
  VirtualBase::VirtualBase((VirtualBase *)&this->field_0x20);
  MiddleA::MiddleA(&this->super_MiddleA,0x108940,&PTR_construction_vtable_24__00108940);
  MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,0x108950,
                   &PTR_construction_vtable_24__00108950);
  (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)0x1088b8;
  *(undefined8 *)&this->field_0x20 = 0x108920;
  *(undefined8 *)&(this->super_MiddleA).field_0x10 = 0x1088e8;
  return;
}



/* Function: Point @ 00103cae */

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



/* Function: operator+ @ 00103cd6 */

/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point::operator+(Point *this,Point *other)

{
  long in_FS_OFFSET;
  Point *other_local;
  Point *this_local;
  Point local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Point(&local_18,this->x + other->x,this->y + other->y);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* Function: operator== @ 00103d40 */

/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point::operator==(Point *this,Point *other)

{
  bool bVar1;
  Point *other_local;
  Point *this_local;
  
  if ((this->x == other->x) && (this->y == other->y)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: operator++ @ 00103d80 */

/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point::operator++(Point *this)

{
  Point *this_local;
  
  this->x = this->x + 1;
  this->y = this->y + 1;
  return this;
}



/* Function: template_max<int> @ 00103db2 */

int template_max<int>(int a,int b)

{
  int b_local;
  int a_local;
  
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 00103dd2 */

double template_max<double>(double a,double b)

{
  double b_local;
  double a_local;
  
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_swap<int> @ 00103e08 */

void template_swap<int>(int *a,int *b)

{
  int iVar1;
  int *b_local;
  int *a_local;
  int temp;
  
  iVar1 = *a;
  *a = *b;
  *b = iVar1;
  return;
}



/* Function: Container @ 00103e3a */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  Container<int> *this_local;
  
  this->size = 0;
  return;
}



/* Function: push @ 00103e54 */

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



/* Function: get @ 00103e90 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  int idx_local;
  Container<int> *this_local;
  
  if ((idx < 0) || (this->size <= idx)) {
    iVar1 = 0;
  }
  else {
    iVar1 = this->data[idx];
  }
  return iVar1;
}



/* Function: getSize @ 00103ec8 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  Container<int> *this_local;
  
  return this->size;
}



/* Function: Container @ 00103ede */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  Container<double> *this_local;
  
  this->size = 0;
  return;
}



/* Function: push @ 00103ef8 */

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



/* Function: get @ 00103f3a */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double dVar1;
  int idx_local;
  Container<double> *this_local;
  
  if ((idx < 0) || (this->size <= idx)) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = this->data[idx];
  }
  return dVar1;
}



/* Function: getSize @ 00103f7c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  Container<double> *this_local;
  
  return this->size;
}



/* Function: __uniq_ptr_data @ 00103f92 */

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



/* Function: unique_ptr @ 00103fbc */

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



/* Function: getType @ 00103fe6 */

/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
  RTTIBase *this_local;
  
  return 0;
}



/* Function: getType @ 00103ffa */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  return 1;
}



/* Function: derivedA_data @ 0010400e */

/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  return 100;
}



/* Function: getType @ 00104022 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  return 2;
}



/* Function: derivedB_data @ 00104036 */

/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  return 200;
}



/* Function: RTTIBase @ 0010404a */

/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  RTTIBase *this_local;
  
  this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00108888;
  return;
}



/* Function: ~RTTIBase @ 00104068 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this,int __in_chrg)

{
  RTTIBase *this_local;
  
  this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00108888;
  return;
}



/* Function: ~RTTIBase @ 00104086 */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this,int __in_chrg)

{
  RTTIBase *this_local;
  
  ~RTTIBase(this,__in_chrg);
  operator_delete(this,8);
  return;
}



/* Function: RTTIDerivedA @ 001040b6 */

/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIDerivedA *this_local;
  
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00108860;
  return;
}



/* Function: RTTIDerivedB @ 001040e4 */

/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIDerivedB *this_local;
  
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00108838;
  return;
}



/* Function: __uniq_ptr_data @ 00104112 */

/* DWARF original prototype: void
   __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
          (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,pointer param_1)

{
  pointer param_1_local;
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this_local;
  
  __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,param_1);
  return;
}



/* Function: unique_ptr<> @ 0010413c */

/* DWARF original prototype: void unique_ptr<>(unique_ptr<int,_std::default_delete<int>_> * this,
   pointer __p) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<>
          (unique_ptr<int,_std::default_delete<int>_> *this,pointer __p)

{
  pointer __p_local;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data(&this->_M_t,__p);
  return;
}



/* Function: ~unique_ptr @ 00104166 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
   __in_chrg) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this,int __in_chrg)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  int **__ptr;
  
  __t = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                  ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  if (*__t != (pointer)0x0) {
    this_00 = get_deleter(this);
    ppiVar1 = move<int*&>(__t);
    default_delete<int>::operator()(this_00,*ppiVar1);
  }
  *__t = (pointer)0x0;
  return;
}



/* Function: operator* @ 001041ce */

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



/* Function: move<std::unique_ptr<int>&> @ 001041f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std::move<std::unique_ptr<int>&>(unique_ptr<int,_std::default_delete<int>_> *__t)

{
  unique_ptr<int,_std::default_delete<int>_> *__t_local;
  
  return __t;
}



/* Function: _Tuple_impl @ 00104206 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int>_> *
   this, _Tuple_impl<0,_int*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0,_int*,_std::default_delete<int>_> *this,
          _Tuple_impl<0,_int*,_std::default_delete<int>_> *param_1)

{
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *param_1_local;
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_std::default_delete<int>_>,
             &param_1->super__Tuple_impl<1,_std::default_delete<int>_>);
  *this = *param_1;
  return;
}



/* Function: tuple @ 0010423e */

/* DWARF original prototype: void tuple(tuple<int*,_std::default_delete<int>_> * this,
   tuple<int*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::tuple<int*,_std::default_delete<int>_>::tuple
          (tuple<int*,_std::default_delete<int>_> *this,
          tuple<int*,_std::default_delete<int>_> *param_1)

{
  tuple<int*,_std::default_delete<int>_> *param_1_local;
  tuple<int*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0,_int*,_std::default_delete<int>_>,
             &param_1->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return;
}



/* Function: __uniq_ptr_impl @ 00104268 */

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
  
  ptVar1 = move<std::tuple<int*,_std::default_delete<int>_>&>(&__u->_M_t);
  tuple<int*,_std::default_delete<int>_>::tuple(&this->_M_t,ptVar1);
  ppiVar2 = _M_ptr(__u);
  *ppiVar2 = (pointer)0x0;
  return;
}



/* Function: __uniq_ptr_data @ 001042b2 */

/* DWARF original prototype: void
   __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true>::__uniq_ptr_data
          (__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> *this,pointer param_1)

{
  pointer param_1_local;
  __uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> *this_local;
  
  __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>,param_1);
  return;
}



/* Function: unique_ptr<int*> @ 001042dc */

/* DWARF original prototype: void unique_ptr<int*>(unique_ptr<int_[],_std::default_delete<int_[]>_>
   * this, int * __p) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::unique_ptr<int*>
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int *__p)

{
  int *__p_local;
  unique_ptr<int_[],_std::default_delete<int_[]>_> *this_local;
  
  __uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true>::__uniq_ptr_data(&this->_M_t,__p);
  return;
}



/* Function: ~unique_ptr @ 00104306 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
   this, int __in_chrg) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int __in_chrg)

{
  pointer *ppiVar1;
  deleter_type *this_00;
  unique_ptr<int_[],_std::default_delete<int_[]>_> *this_local;
  int **__ptr;
  
  ppiVar1 = __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
                      ((__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *)this);
  if (*ppiVar1 != (pointer)0x0) {
    this_00 = get_deleter(this);
    default_delete<int_[]>::operator()<int>(this_00,*ppiVar1);
  }
  *ppiVar1 = (pointer)0x0;
  return;
}



/* Function: operator[] @ 00104362 */

/* DWARF original prototype: type operator[](unique_ptr<int_[],_std::default_delete<int_[]>_> *
   this, size_t __i) */

type __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::operator[]
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,size_t __i)

{
  pointer piVar1;
  size_t __i_local;
  unique_ptr<int_[],_std::default_delete<int_[]>_> *this_local;
  
  piVar1 = get(this);
  return piVar1 + __i;
}



/* Function: __uniq_ptr_impl @ 0010439a */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,pointer __p)

{
  pointer *ppiVar1;
  pointer __p_local;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  tuple<int*,_std::default_delete<int>_>::tuple<>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: _M_ptr @ 001043d6 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 001043f4 */

/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
   this) */

deleter_type * __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get_deleter
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  default_delete<int> *pdVar1;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return pdVar1;
}



/* Function: move<int*&> @ 00104412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

type * std::move<int*&>(int **__t)

{
  int **__t_local;
  
  return __t;
}



/* Function: operator() @ 00104424 */

/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *__ptr)

{
  int *__ptr_local;
  default_delete<int> *this_local;
  
  if (__ptr != (int *)0x0) {
    operator_delete(__ptr,4);
  }
  return;
}



/* Function: get @ 00104452 */

/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  unique_ptr<int,_std::default_delete<int>_> *this_local;
  
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return piVar1;
}



/* Function: move<std::tuple<int*,_std::default_delete<int>_>&> @ 00104470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: move<std::tuple<int*, std::default_delete<int> >&> */

type * std::move<std::tuple<int*,_std::default_delete<int>_>&>
                 (tuple<int*,_std::default_delete<int>_> *__t)

{
  tuple<int*,_std::default_delete<int>_> *__t_local;
  
  return __t;
}



/* Function: _Tuple_impl @ 00104482 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std::default_delete<int>_> * this,
   _Tuple_impl<1,_std::default_delete<int>_> * __in) */

void __thiscall
std::_Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1,_std::default_delete<int>_> *this,
          _Tuple_impl<1,_std::default_delete<int>_> *__in)

{
  _Tuple_impl<1,_std::default_delete<int>_> *__in_local;
  _Tuple_impl<1,_std::default_delete<int>_> *this_local;
  
  return;
}



/* Function: __uniq_ptr_impl @ 00104496 */

/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int_[]>_>
   * this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this,pointer __p)

{
  pointer *ppiVar1;
  pointer __p_local;
  __uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this_local;
  
  tuple<int*,_std::default_delete<int_[]>_>::tuple<>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: _M_ptr @ 001044d2 */

/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this)

{
  __tuple_element_t *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this_local;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 001044f0 */

/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int_[],_std::default_delete<int_[]>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::get_deleter
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this)

{
  default_delete<int_[]> *pdVar1;
  unique_ptr<int_[],_std::default_delete<int_[]>_> *this_local;
  
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *)this);
  return pdVar1;
}



/* Function: operator()<int> @ 0010450e */

/* DWARF original prototype: void operator()<int>(default_delete<int_[]> * this, int * __ptr) */

void __thiscall
std::default_delete<int_[]>::operator()<int>(default_delete<int_[]> *this,int *__ptr)

{
  int *__ptr_local;
  default_delete<int_[]> *this_local;
  
  if (__ptr != (int *)0x0) {
    operator_delete__(__ptr);
  }
  return;
}



/* Function: get @ 00104538 */

/* DWARF original prototype: pointer get(unique_ptr<int_[],_std::default_delete<int_[]>_> * this) */

pointer __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::get
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this)

{
  pointer piVar1;
  unique_ptr<int_[],_std::default_delete<int_[]>_> *this_local;
  
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *)this);
  return piVar1;
}



/* Function: tuple<> @ 00104556 */

/* DWARF original prototype: void tuple<>(tuple<int*,_std::default_delete<int>_> * this) */

void __thiscall
std::tuple<int*,_std::default_delete<int>_>::tuple<>(tuple<int*,_std::default_delete<int>_> *this)

{
  tuple<int*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return;
}



/* Function: get<0,_int*,_std::default_delete<int>_> @ 00104575 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int>_>(tuple<int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  tuple<int*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: _M_deleter @ 00104594 */

/* DWARF original prototype: default_delete<int> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete<int> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t_conflict *p_Var1;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  p_Var1 = get<1,_int*,_std::default_delete<int>_>(&this->_M_t);
  return (default_delete<int> *)p_Var1;
}



/* Function: _M_ptr @ 001045b2 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
    */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int>_> *this_local;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: tuple<> @ 001045d4 */

/* DWARF original prototype: void tuple<>(tuple<int*,_std::default_delete<int_[]>_> * this) */

void __thiscall
std::tuple<int*,_std::default_delete<int_[]>_>::tuple<>
          (tuple<int*,_std::default_delete<int_[]>_> *this)

{
  tuple<int*,_std::default_delete<int_[]>_> *this_local;
  
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>);
  return;
}



/* Function: get<0,_int*,_std::default_delete<int_[]>_> @ 001045f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int_[]>_>(tuple<int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  tuple<int*,_std::default_delete<int_[]>_> *__t_local;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int_[]>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>);
  return ppiVar1;
}



/* Function: _M_deleter @ 00104612 */

/* DWARF original prototype: default_delete<int_[]> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> * this) */

default_delete<int_[]> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this)

{
  __tuple_element_t_conflict *p_Var1;
  __uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this_local;
  
  p_Var1 = get<1,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
  return (default_delete<int_[]> *)p_Var1;
}



/* Function: _M_ptr @ 00104630 */

/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
   this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this)

{
  __tuple_element_t *ppiVar1;
  __uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this_local;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: _Tuple_impl @ 00104652 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int>_> *
   this) */

void __thiscall
std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0,_int*,_std::default_delete<int>_> *this)

{
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *this_local;
  
  _Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_std::default_delete<int>_>);
  _Head_base<0,_int*,_false>::_Head_base((_Head_base<0,_int*,_false> *)this);
  return;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int>_> @ 0010467d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete<int>_> @ 0010469b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std::default_delete<int> > */

__tuple_element_t_conflict *
std::get<1,_int*,_std::default_delete<int>_>(tuple<int*,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  tuple<int*,_std::default_delete<int>_> *__t_local;
  
  pdVar1 = __get_helper<1,_std::default_delete<int>_>
                     ((_Tuple_impl<1,_std::default_delete<int>_> *)__t);
  return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get<0,_int*,_std::default_delete<int>_> @ 001046b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int>_>(tuple<int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  tuple<int*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 001046d8 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *
   this) */

void __thiscall
std::_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_Tuple_impl
          (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *this)

{
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *this_local;
  
  _Tuple_impl<1,_std::default_delete<int_[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_std::default_delete<int_[]>_>);
  _Head_base<0,_int*,_false>::_Head_base((_Head_base<0,_int*,_false> *)this);
  return;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int_[]>_> @ 00104703 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int_[]>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete<int_[]>_> @ 00104721 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<1, int*, std::default_delete<int []> > */

__tuple_element_t_conflict *
std::get<1,_int*,_std::default_delete<int_[]>_>(tuple<int*,_std::default_delete<int_[]>_> *__t)

{
  default_delete<int_[]> *pdVar1;
  tuple<int*,_std::default_delete<int_[]>_> *__t_local;
  
  pdVar1 = __get_helper<1,_std::default_delete<int_[]>_>
                     ((_Tuple_impl<1,_std::default_delete<int_[]>_> *)__t);
  return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get<0,_int*,_std::default_delete<int_[]>_> @ 0010473f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int_[]>_>(tuple<int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  tuple<int*,_std::default_delete<int_[]>_> *__t_local;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int_[]>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>);
  return ppiVar1;
}



/* Function: forward<int*&> @ 0010475d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int ** std::forward<int*&>(type *__t)

{
  type *__t_local;
  
  return __t;
}



/* Function: _Tuple_impl @ 00104770 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std::default_delete<int>_> * this) */

void __thiscall
std::_Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1,_std::default_delete<int>_> *this)

{
  _Tuple_impl<1,_std::default_delete<int>_> *this_local;
  
  _Head_base<1,_std::default_delete<int>,_true>::_Head_base
            (&this->super__Head_base<1,_std::default_delete<int>,_true>);
  return;
}



/* Function: _Head_base @ 00104790 */

/* DWARF original prototype: void _Head_base(_Head_base<0,_int*,_false> * this) */

void __thiscall std::_Head_base<0,_int*,_false>::_Head_base(_Head_base<0,_int*,_false> *this)

{
  _Head_base<0,_int*,_false> *this_local;
  
  this->_M_head_impl = (int *)0x0;
  return;
}



/* Function: _M_head @ 001047aa */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete<int>_> @ 001047c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std::default_delete<int> > */

default_delete<int> *
std::__get_helper<1,_std::default_delete<int>_>(_Tuple_impl<1,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  _Tuple_impl<1,_std::default_delete<int>_> *__t_local;
  
  pdVar1 = _Tuple_impl<1,_std::default_delete<int>_>::_M_head(__t);
  return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int>_> @ 001047e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00104804 */

/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std::default_delete<int_[]>_> * this)
    */

void __thiscall
std::_Tuple_impl<1,_std::default_delete<int_[]>_>::_Tuple_impl
          (_Tuple_impl<1,_std::default_delete<int_[]>_> *this)

{
  _Tuple_impl<1,_std::default_delete<int_[]>_> *this_local;
  
  _Head_base<1,_std::default_delete<int_[]>,_true>::_Head_base
            (&this->super__Head_base<1,_std::default_delete<int_[]>,_true>);
  return;
}



/* Function: _M_head @ 00104823 */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t_local;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete<int_[]>_> @ 00104841 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<1, std::default_delete<int []> > */

default_delete<int_[]> *
std::__get_helper<1,_std::default_delete<int_[]>_>
          (_Tuple_impl<1,_std::default_delete<int_[]>_> *__t)

{
  default_delete<int_[]> *pdVar1;
  _Tuple_impl<1,_std::default_delete<int_[]>_> *__t_local;
  
  pdVar1 = _Tuple_impl<1,_std::default_delete<int_[]>_>::_M_head(__t);
  return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int_[]>_> @ 0010485f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int_[]>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t_local;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _Head_base<int*&> @ 0010487e */

/* DWARF original prototype: void _Head_base<int*&>(_Head_base<0,_int*,_false> * this, int * * __h)
    */

void __thiscall
std::_Head_base<0,_int*,_false>::_Head_base<int*&>(_Head_base<0,_int*,_false> *this,int **__h)

{
  int **ppiVar1;
  int **__h_local;
  _Head_base<0,_int*,_false> *this_local;
  
  ppiVar1 = forward<int*&>(__h);
  this->_M_head_impl = *ppiVar1;
  return;
}



/* Function: _Head_base @ 001048ac */

/* DWARF original prototype: void _Head_base(_Head_base<1,_std::default_delete<int>,_true> * this)
    */

void __thiscall
std::_Head_base<1,_std::default_delete<int>,_true>::_Head_base
          (_Head_base<1,_std::default_delete<int>,_true> *this)

{
  _Head_base<1,_std::default_delete<int>,_true> *this_local;
  
  return;
}



/* Function: _M_head @ 001048bb */

int ** std::_Head_base<0,_int*,_false>::_M_head(_Head_base<0,_int*,_false> *__b)

{
  _Head_base<0,_int*,_false> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: _M_head @ 001048cd */

default_delete<int> *
std::_Tuple_impl<1,_std::default_delete<int>_>::_M_head
          (_Tuple_impl<1,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  _Tuple_impl<1,_std::default_delete<int>_> *__t_local;
  
  pdVar1 = _Head_base<1,_std::default_delete<int>,_true>::_M_head
                     (&__t->super__Head_base<1,_std::default_delete<int>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 001048eb */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int>_> *__t_local;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: _Head_base @ 0010490a */

/* DWARF original prototype: void _Head_base(_Head_base<1,_std::default_delete<int_[]>,_true> *
   this) */

void __thiscall
std::_Head_base<1,_std::default_delete<int_[]>,_true>::_Head_base
          (_Head_base<1,_std::default_delete<int_[]>,_true> *this)

{
  _Head_base<1,_std::default_delete<int_[]>,_true> *this_local;
  
  return;
}



/* Function: _M_head @ 00104919 */

default_delete<int_[]> *
std::_Tuple_impl<1,_std::default_delete<int_[]>_>::_M_head
          (_Tuple_impl<1,_std::default_delete<int_[]>_> *__t)

{
  default_delete<int_[]> *pdVar1;
  _Tuple_impl<1,_std::default_delete<int_[]>_> *__t_local;
  
  pdVar1 = _Head_base<1,_std::default_delete<int_[]>,_true>::_M_head
                     (&__t->super__Head_base<1,_std::default_delete<int_[]>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 00104937 */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t_local;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 00104955 */

default_delete<int> *
std::_Head_base<1,_std::default_delete<int>,_true>::_M_head
          (_Head_base<1,_std::default_delete<int>,_true> *__b)

{
  _Head_base<1,_std::default_delete<int>,_true> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: _M_head @ 00104967 */

int ** std::_Head_base<0,_int*,_false>::_M_head(_Head_base<0,_int*,_false> *__b)

{
  _Head_base<0,_int*,_false> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: _M_head @ 00104979 */

default_delete<int_[]> *
std::_Head_base<1,_std::default_delete<int_[]>,_true>::_M_head
          (_Head_base<1,_std::default_delete<int_[]>,_true> *__b)

{
  _Head_base<1,_std::default_delete<int_[]>,_true> *__b_local;
  
  return &__b->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 0010498c */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  RTTIDerivedB *this_local;
  
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00108838;
  RTTIBase::~RTTIBase(&this->super_RTTIBase,__in_chrg);
  return;
}



/* Function: ~RTTIDerivedB @ 001049ba */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  RTTIDerivedB *this_local;
  
  ~RTTIDerivedB(this,__in_chrg);
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 001049ea */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  RTTIDerivedA *this_local;
  
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00108860;
  RTTIBase::~RTTIBase(&this->super_RTTIBase,__in_chrg);
  return;
}



/* Function: ~RTTIDerivedA @ 00104a18 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  RTTIDerivedA *this_local;
  
  ~RTTIDerivedA(this,__in_chrg);
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00104a48 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  int __in_chrg_00;
  DiamondDerived *this_local;
  
  (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)0x1088b8;
  *(undefined8 *)&this->field_0x20 = 0x108920;
  *(undefined8 *)&(this->super_MiddleA).field_0x10 = 0x1088e8;
  MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x10,0x108950,
                    &PTR_construction_vtable_24__00108950);
  __in_chrg_00 = 0x108940;
  MiddleA::~MiddleA(&this->super_MiddleA,0x108940,&PTR_construction_vtable_24__00108940);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x20,__in_chrg_00);
  return;
}



/* Function: ~DiamondDerived @ 00104aca */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  void **in_RDX;
  int in_ESI;
  
  ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20,in_ESI,in_RDX);
  return;
}



/* Function: ~DiamondDerived @ 00104ad7 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  void **in_RDX;
  int in_ESI;
  
  ~DiamondDerived((DiamondDerived *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]),in_ESI,in_RDX);
  return;
}



/* Function: ~DiamondDerived @ 00104ae8 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  DiamondDerived *this_local;
  
  ~DiamondDerived(this,__in_chrg,__vtt_parm);
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00104b17 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  void **in_RDX;
  int in_ESI;
  
  ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20,in_ESI,in_RDX);
  return;
}



/* Function: ~DiamondDerived @ 00104b21 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  void **in_RDX;
  int in_ESI;
  
  ~DiamondDerived((DiamondDerived *)
                  ((long)&(this->super_MiddleA)._vptr_MiddleA +
                  (long)(this->super_MiddleA)._vptr_MiddleA[-4]),in_ESI,in_RDX);
  return;
}



/* Function: ~MultiDerived @ 00104b2e */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  MultiDerived *this_local;
  
  (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00108a78;
  (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00108aa8;
  BaseB::~BaseB(&this->super_BaseB,__in_chrg);
  BaseA::~BaseA(&this->super_BaseA,__in_chrg);
  return;
}



/* Function: ~MultiDerived @ 00104b7a */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  int in_ESI;
  
  ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_ESI);
  return;
}



/* Function: ~MultiDerived @ 00104b84 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  MultiDerived *this_local;
  
  ~MultiDerived(this,__in_chrg);
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00104bb3 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  int in_ESI;
  
  ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_ESI);
  return;
}



/* Function: ~Derived @ 00104bbe */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  Derived *this_local;
  
  (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00108b20;
  Base::~Base(&this->super_Base,__in_chrg);
  return;
}



/* Function: ~Derived @ 00104bec */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  Derived *this_local;
  
  ~Derived(this,__in_chrg);
  operator_delete(this,0x10);
  return;
}



/* Function: _fini @ 00104c1c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 203 */
