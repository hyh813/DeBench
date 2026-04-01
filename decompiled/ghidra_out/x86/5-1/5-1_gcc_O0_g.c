/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/5-1/5-1_gcc_O0_g
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



/* Function: _start @ 00011310 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001133c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011340 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001136b) */
/* WARNING: Removing unreachable block (ram,0x00011375) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011390 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000113be) */
/* WARNING: Removing unreachable block (ram,0x000113c8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000113e0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001143c) */
/* WARNING: Removing unreachable block (ram,0x00011440) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011479 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001147d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: test_cpp_member_func @ 00011482 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_GS_OFFSET;
  int r1;
  int r2;
  int r3;
  SimpleClass obj;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  SimpleClass::SimpleClass(&obj,5,"Test");
  SimpleClass::setValue(&obj,10);
  iVar2 = SimpleClass::getValue(&obj);
  iVar3 = SimpleClass::compute(&obj,3);
  iVar4 = SimpleClass::getClassID();
  iVar4 = iVar4 + iVar2 + iVar3;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar4 = __stack_chk_fail_local();
  }
  return iVar4;
}



/* Function: test_cpp_constructor @ 00011519 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int iVar4;
  int result;
  LifecycleClass obj;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  LifecycleClass::LifecycleClass(&obj,5);
  iVar4 = 2;
  iVar2 = LifecycleClass::getData(&obj,2);
  iVar3 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(&obj,iVar4);
  iVar4 = LifecycleClass::getInstanceCount();
  iVar2 = iVar2 + iVar3 + iVar4 * 1000;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: call_virtual_func @ 0001159f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_virtual_func(Base *obj,int x)

{
  int iVar1;
  
  iVar1 = (**obj->_vptr_Base)(obj,x);
  return iVar1;
}



/* Function: test_cpp_virtual_func @ 000115ca */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_GS_OFFSET;
  int __in_chrg;
  Base base;
  int r1;
  int r2;
  Base *pb;
  Base *pd;
  int r3;
  int r4;
  Derived derived;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018da8;
  Derived::Derived(&derived,3);
  iVar2 = Base::virtual_func(&base,5);
  iVar3 = Derived::virtual_func(&derived,5);
                    /* try { // try from 00011642 to 00011659 has its CatchHandler @ 000116a1 */
  iVar4 = call_virtual_func(&base,5);
  __in_chrg = 5;
  iVar5 = call_virtual_func(&derived.super_Base,5);
  iVar5 = iVar2 + iVar3 + iVar4 + iVar5;
  Derived::~Derived(&derived,__in_chrg);
  Base::~Base(&base,__in_chrg);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar5 = __stack_chk_fail_local();
  }
  return iVar5;
}



/* Function: test_cpp_multiple_inheritance @ 000116de */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int in_stack_ffffffb8;
  BaseA *pa;
  BaseB *pb;
  int r1;
  int r2;
  int ptr_equal;
  MultiDerived obj;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  MultiDerived::MultiDerived(&obj);
  obj.super_BaseA.dataA = 100;
  obj.super_BaseB.dataB = 200;
                    /* try { // try from 00011739 to 0001174f has its CatchHandler @ 00011792 */
  iVar2 = (**obj.super_BaseA._vptr_BaseA)(&obj);
  iVar3 = (**obj.super_BaseB._vptr_BaseB)(&obj.super_BaseB);
  iVar2 = iVar2 + iVar3 + (uint)(&obj != (MultiDerived *)&obj.super_BaseB);
  MultiDerived::~MultiDerived(&obj,in_stack_ffffffb8);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: test_cpp_diamond_inheritance @ 000117c0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int in_stack_ffffffb8;
  void **in_stack_ffffffbc;
  VirtualBase *pb;
  int r1;
  int r2;
  DiamondDerived obj;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  DiamondDerived::DiamondDerived(&obj,in_stack_ffffffb8,in_stack_ffffffbc);
  obj._20_4_ = 0x32;
                    /* try { // try from 0001180e to 0001182b has its CatchHandler @ 0001185a */
  iVar2 = (**(code **)obj._16_4_)(&obj.field_0x10);
  obj._20_4_ = 100;
  iVar3 = (**(code **)obj._16_4_)(&obj.field_0x10);
  iVar2 = iVar2 + iVar3;
  DiamondDerived::~DiamondDerived(&obj,in_stack_ffffffb8,in_stack_ffffffbc);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: test_cpp_operator_overload @ 00011888 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int in_GS_OFFSET;
  bool eq;
  Point p1;
  Point p2;
  Point p3;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  Point::Point(&p1,1,2);
  Point::Point(&p2,3,4);
  Point::operator+(&p1,&p2);
  bVar2 = Point::operator==(&p1,&p2);
  Point::operator++(&p3);
  if (bVar2) {
    iVar3 = 0;
  }
  else {
    iVar3 = 10;
  }
  iVar3 = p3.y + p3.x + iVar3;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar3 = __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: test_cpp_template_func @ 00011938 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int a;
  int b;
  int r1;
  double r2;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  r1 = template_max<int>(3,7);
  r2 = template_max<double>(2.5,1.5);
  a = 10;
  b = 0x14;
  template_swap<int>(&a,&b);
  iVar1 = b + (int)ROUND(r2) + r1 + a;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: test_cpp_template_class @ 000119f3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  double dVar4;
  int r1;
  int r2;
  double r3;
  Container<int> int_container;
  Container<double> double_container;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  Container<int>::Container(&int_container);
  Container<int>::push(&int_container,10);
  Container<int>::push(&int_container,0x14);
  Container<int>::push(&int_container,0x1e);
  iVar2 = Container<int>::get(&int_container,0);
  iVar3 = Container<int>::getSize(&int_container);
  Container<double>::Container(&double_container);
  Container<double>::push(&double_container,3.14);
  dVar4 = Container<double>::get(&double_container,0);
  iVar2 = (int)ROUND(dVar4) + iVar2 + iVar3;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: operator() @ 00011b34 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int operator()(anon_struct_8_2_35feab7f * __closure, int x) */

int __thiscall
test_cpp_lambda::anon_struct_8_2_35feab7f::operator()(anon_struct_8_2_35feab7f *this,int x)

{
                    /* Unresolved local var: int * capture_by_ref@[???] */
  *this->__capture_by_ref = *this->__capture_by_ref + 5;
  return *this->__capture_by_ref + this->__capture_by_value * x;
}



/* Function: test_cpp_lambda @ 00011b6b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int capture_by_ref;
  int capture_by_value;
  int r1;
  int r2;
  anon_struct_8_2_35feab7f lambda1;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  capture_by_value = 10;
  capture_by_ref = 0x14;
  lambda1.__capture_by_value = 10;
  lambda1.__capture_by_ref = &capture_by_ref;
  r1 = test_cpp_lambda::anon_struct_8_2_35feab7f::operator()(&lambda1,3);
  r2 = 0x1e;
  iVar2 = r1 + 0x1e;
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: test_cpp_exception @ 00011bd7 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
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
                    /* try { // try from 00011c1a to 00011c1e has its CatchHandler @ 00011c27 */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: operator() @ 00011d26 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void operator()(anon_struct_1_0_00000001_for__M_head_impl * __closure,
   int * p) */

void __thiscall
std::_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::
anon_struct_1_0_00000001_for__M_head_impl::operator()
          (anon_struct_1_0_00000001_for__M_head_impl *this,int *p)

{
  *p = -1;
  if (p != (int *)0x0) {
    operator_delete(p,4);
  }
  return;
}



/* Function: test_cpp_smart_ptr @ 00011d5e */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
  int iVar1;
  int iVar2;
  pointer __p;
  type piVar3;
  type *ptVar4;
  int *__p_00;
  pointer __p_01;
  int iVar5;
  int in_GS_OFFSET;
  anon_struct_1_0_00000001_for__M_head_impl deleter;
  unique_ptr<int,_std::default_delete<int>_> ptr1;
  unique_ptr<int,_std::default_delete<int>_> ptr2;
  unique_ptr<int_[],_std::default_delete<int_[]>_> arr;
  unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> ptr3;
  int r1;
  int r2;
  int r3;
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  __p = operator_new(4);
  *__p = 100;
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<>(&ptr1,__p);
  piVar3 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr1);
  *piVar3 = 200;
  ptVar4 = std::move<std::unique_ptr<int>&>(&ptr1);
  std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr(&ptr2,ptVar4);
  piVar3 = std::unique_ptr<int,_std::default_delete<int>_>::operator*(&ptr2);
  iVar5 = *piVar3;
                    /* try { // try from 00011df4 to 00011df8 has its CatchHandler @ 00011efe */
  __p_00 = operator_new__(0x14);
  *__p_00 = 1;
  __p_00[1] = 2;
  __p_00[2] = 3;
  __p_00[3] = 4;
  __p_00[4] = 5;
  std::unique_ptr<int_[],_std::default_delete<int_[]>_>::unique_ptr<int*>(&arr,__p_00);
  piVar3 = std::unique_ptr<int_[],_std::default_delete<int_[]>_>::operator[](&arr,2);
  iVar2 = *piVar3;
                    /* try { // try from 00011e57 to 00011e5b has its CatchHandler @ 00011ee7 */
  __p_01 = operator_new(4);
  *__p_01 = 500;
  std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::unique_ptr<>(&ptr3,__p_01,&deleter);
  piVar3 = std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::operator*(&ptr3);
  iVar5 = iVar5 + iVar2 + *piVar3;
  std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::~unique_ptr(&ptr3,(int)__p_01);
  std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr(&arr,(int)__p_01);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr2,(int)__p_01);
  std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr1,(int)__p_01);
  if (iVar1 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar5 = __stack_chk_fail_local();
  }
  return iVar5;
}



/* Function: test_cpp_rtti @ 00011f3b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
  bool bVar1;
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  RTTIDerivedA *this_01;
  int iVar2;
  RTTIDerivedB *this_02;
  char *__s;
  size_t sVar3;
  int result;
  RTTIBase *obj1;
  RTTIBase *obj2;
  RTTIDerivedA *derivedA;
  RTTIDerivedB *derivedB;
  
  this = operator_new(4);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(4);
  (this_00->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)0x0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  result = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
LAB_00011fcb:
    result = 10;
  }
  else {
    bVar1 = std::type_info::operator==
                      ((type_info *)(this->super_RTTIBase)._vptr_RTTIBase[-1],
                       (type_info *)&RTTIDerivedA::typeinfo);
    if (bVar1) goto LAB_00011fcb;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
LAB_00011ff9:
    result = result + 0x14;
  }
  else {
    bVar1 = std::type_info::operator==
                      ((type_info *)(this_00->super_RTTIBase)._vptr_RTTIBase[-1],
                       (type_info *)&RTTIDerivedB::typeinfo);
    if (bVar1) goto LAB_00011ff9;
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
    result = sVar3 + result;
    if (this == (RTTIDerivedA *)0x0) goto LAB_000120c9;
  }
  (*(this->super_RTTIBase)._vptr_RTTIBase[1])(this);
LAB_000120c9:
  if (this_00 != (RTTIDerivedB *)0x0) {
    (*(this_00->super_RTTIBase)._vptr_RTTIBase[1])(this_00);
  }
  return result;
}



/* Function: test_cpp_oo_features @ 000120ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
  int iVar1;
  
  puts(&DAT_0001503c);
  iVar1 = test_cpp_member_func();
  printf(&DAT_00015060,iVar1);
  iVar1 = test_cpp_constructor();
  printf(&DAT_0001507e,iVar1);
  iVar1 = test_cpp_virtual_func();
  printf(&DAT_0001509a,iVar1);
  iVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_000150b6,iVar1);
  iVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000150d2,iVar1);
  iVar1 = test_cpp_operator_overload();
  printf(&DAT_000150ef,iVar1);
  iVar1 = test_cpp_template_func();
  printf(&DAT_0001510b,iVar1);
  iVar1 = test_cpp_template_class();
  printf(&DAT_00015127,iVar1);
  iVar1 = test_cpp_lambda();
  printf(&DAT_00015143,iVar1);
  iVar1 = test_cpp_exception();
  printf(&DAT_0001515f,iVar1);
  iVar1 = test_cpp_smart_ptr();
  printf(&DAT_0001517c,iVar1);
  iVar1 = test_cpp_rtti();
  printf(&DAT_00015199,iVar1);
  return;
}



/* Function: main @ 00012238 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00012258 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original name: __uniq_ptr_data<const test_cpp_smart_ptr()::<lambda(int*)>&>
   DWARF original prototype: void
   __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>
   * this, pointer param_1, anon_struct_1_0_00000001_for__M_head_impl * param_2) */

void __thiscall
std::__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>::
__uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>
          (__uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false> *this,
          pointer param_2,anon_struct_1_0_00000001_for__M_head_impl *param_3)

{
  __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::
  __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&>
            (&this->super___uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>,param_2,
             param_3);
  return;
}



/* Function: unique_ptr<> @ 00012282 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
   unique_ptr<>(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this, pointer __p,
   deleter_type * __d) */

void __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::unique_ptr<>
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,pointer __p,
          deleter_type *__d)

{
  __uniq_ptr_data<int,_test_cpp_smart_ptr()::<lambda(int*)>,_true,_false>::
  __uniq_ptr_data<const_test_cpp_smart_ptr()::<lambda(int*)>&>(&this->_M_t,__p,__d);
  return;
}



/* Function: ~unique_ptr @ 000122aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, int __in_chrg) */

void __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::~unique_ptr
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,int __in_chrg)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
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



/* Function: operator* @ 00012312 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: type operator*(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *
   this) */

type __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::operator*
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  pointer piVar1;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: __uniq_ptr_impl<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 0001233a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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
  
  __a2 = forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__d);
  tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::
  tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>(&this->_M_t,&__p,__a2);
  return;
}



/* Function: _M_ptr @ 00012374 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer *
   _M_ptr(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  __tuple_element_t *ppiVar1;
  
  ppiVar1 = get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 00012396 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::get_deleter
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *)this);
  return paVar1;
}



/* Function: get @ 000123b8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer get(unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *
   this) */

pointer __thiscall
std::unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::get
          (unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  pointer piVar1;
  
  piVar1 = __uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *)this);
  return piVar1;
}



/* Function: forward<const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 000123d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: forward<const test_cpp_smart_ptr()::<lambda(int*)>&> */

anon_struct_1_0_00000001_for__M_head_impl *
std::forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(type *__t)

{
  return __t;
}



/* Function: tuple<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 000123ec */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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
  
  forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(__a2);
  __head = forward<int*&>(__a1);
  _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::
  _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&>
            (&this->super__Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>,__head);
  return;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 0001242f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std::get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                      (&__t->super__Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>);
  return ppiVar1;
}



/* Function: _M_deleter @ 00012450 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: anon_struct_1_0_00000001_for__M_head_impl *
   _M_deleter(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

anon_struct_1_0_00000001_for__M_head_impl * __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_deleter
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  __tuple_element_t_conflict *p_Var1;
  
  p_Var1 = get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>(&this->_M_t);
  return p_Var1;
}



/* Function: _M_ptr @ 00012472 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer
   _M_ptr(__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> * this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_ptr
          (__uniq_ptr_impl<int,_test_cpp_smart_ptr()::<lambda(int*)>_> *this)

{
  __tuple_element_t *ppiVar1;
  
  ppiVar1 = get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: _Tuple_impl<int*&,_const_test_cpp_smart_ptr()::<lambda(int*)>&> @ 00012496 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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
  type *in_stack_0000000c;
  
  __head_00 = forward<const_test_cpp_smart_ptr()::<lambda(int*)>&>(in_stack_0000000c);
  _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>,__head_00);
  __h = forward<int*&>(__head);
  _Head_base<0,_int*,_false>::_Head_base<int*&>((_Head_base<0,_int*,_false> *)this,__h);
  return;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 000124e5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

int ** std::__get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00012505 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<1, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t_conflict *
std::get<1,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = __get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
                     ((_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *)__t);
  return paVar1;
}



/* Function: get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 00012525 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

__tuple_element_t *
std::get<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (tuple<int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                      (&__t->super__Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00012546 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
   * this, anon_struct_1_0_00000001_for__M_head_impl * __head) */

void __thiscall
std::_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_Tuple_impl
          (_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *this,
          anon_struct_1_0_00000001_for__M_head_impl *__head)

{
  _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_Head_base
            (&this->super__Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>,__head);
  return;
}



/* Function: _M_head @ 0001256a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: __get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 0001258b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1, test_cpp_smart_ptr()::<lambda(int*)> > */

anon_struct_1_0_00000001_for__M_head_impl *
std::__get_helper<1,_test_cpp_smart_ptr()::<lambda(int*)>_>
          (_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = _Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head(__t);
  return paVar1;
}



/* Function: __get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> @ 000125ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, test_cpp_smart_ptr()::<lambda(int*)> > */

int ** std::__get_helper<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _Head_base @ 000125cc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
   _Head_base(_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> * this,
   anon_struct_1_0_00000001_for__M_head_impl * __h) */

void __thiscall
std::_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_Head_base
          (_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> *this,
          anon_struct_1_0_00000001_for__M_head_impl *__h)

{
  return;
}



/* Function: _M_head @ 000125dc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

anon_struct_1_0_00000001_for__M_head_impl *
std::_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head
          (_Tuple_impl<1,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  anon_struct_1_0_00000001_for__M_head_impl *paVar1;
  
  paVar1 = _Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_M_head
                     (&__t->super__Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>);
  return paVar1;
}



/* Function: _M_head @ 000125fc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_>::_M_head
                 (_Tuple_impl<0,_int*,_test_cpp_smart_ptr()::<lambda(int*)>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 0001261d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

anon_struct_1_0_00000001_for__M_head_impl *
std::_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true>::_M_head
          (_Head_base<1,_test_cpp_smart_ptr()::<lambda(int*)>,_true> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: __static_initialization_and_destruction_0 @ 0001262f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

void __static_initialization_and_destruction_0(int __initialize_p,int __priority)

{
  if ((__initialize_p == 1) && (__priority == 0xffff)) {
    std::ios_base::Init::Init(&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0001268c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* Function: name @ 000126b4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * name(type_info * this) */

char * __thiscall std::type_info::name(type_info *this)

{
  char *pcVar1;
  
  if (**(char **)(this + 4) == '*') {
    pcVar1 = (char *)(*(int *)(this + 4) + 1);
  }
  else {
    pcVar1 = *(char **)(this + 4);
  }
  return pcVar1;
}



/* Function: operator== @ 000126e6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: bool operator==(type_info * this, type_info * __arg) */

bool __thiscall std::type_info::operator==(type_info *this,type_info *__arg)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(this + 4) == *(int *)(__arg + 4)) {
LAB_00012738:
    bVar1 = true;
  }
  else {
    if (**(char **)(this + 4) != '*') {
      iVar2 = strcmp(*(char **)(this + 4),*(char **)(__arg + 4));
      if (iVar2 == 0) goto LAB_00012738;
    }
    bVar1 = false;
  }
  return bVar1;
}



/* Function: SimpleClass @ 0001274a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void SimpleClass(SimpleClass * this, int v, char * n) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int v,char *n)

{
  this->value = v;
  strncpy(this->name,n,0x1f);
  this->name[0x1f] = '\0';
  return;
}



/* Function: getValue @ 0001278e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getValue(SimpleClass * this) */

int __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return this->value;
}



/* Function: setValue @ 000127a6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void setValue(SimpleClass * this, int v) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int v)

{
  this->value = v;
  return;
}



/* Function: compute @ 000127c2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int compute(SimpleClass * this, int x) */

int __thiscall SimpleClass::compute(SimpleClass *this,int x)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = this->value;
  sVar2 = strlen(this->name);
  return sVar2 + iVar1 * x;
}



/* Function: getClassID @ 000127fd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00012816 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void LifecycleClass(LifecycleClass * this, size_t s) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,size_t s)

{
  int *piVar1;
  size_t i;
  
  this->size = s;
  if (s < 0x20000000) {
    piVar1 = operator_new__(s << 2);
    this->data = piVar1;
    for (i = 0; i < s; i = i + 1) {
LAB_00012863:
      this->data[i] = i * 10;
    }
    instance_count = instance_count + 1;
    return;
  }
  __cxa_throw_bad_array_new_length();
  goto LAB_00012863;
}



/* Function: ~LifecycleClass @ 000128a4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~LifecycleClass(LifecycleClass * this, int __in_chrg) */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this,int __in_chrg)

{
  if (this->data != (int *)0x0) {
    operator_delete__(this->data);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: getData @ 000128ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getData(LifecycleClass * this, size_t idx) */

int __thiscall LifecycleClass::getData(LifecycleClass *this,size_t idx)

{
  int iVar1;
  
  if (idx < this->size) {
    iVar1 = this->data[idx];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: getInstanceCount @ 0001291e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: virtual_func @ 00012938 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
  return x + 1;
}



/* Function: getName @ 00012952 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
  return "Base";
}



/* Function: ~Base @ 0001296c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018da8;
  return;
}



/* Function: ~Base @ 0001298c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~Base(this,in_stack_ffffffe8);
  operator_delete(this,4);
  return;
}



/* Function: Base @ 000129c6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Base(Base * this) */

void __thiscall Base::Base(Base *this)

{
  this->_vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018da8;
  return;
}



/* Function: Derived @ 000129e6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void Derived(Derived * this, int m) */

void __thiscall Derived::Derived(Derived *this,int m)

{
  Base::Base(&this->super_Base);
  (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018d90;
  this->multiplier = m;
  return;
}



/* Function: virtual_func @ 00012a26 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
  return this->multiplier * x;
}



/* Function: getName @ 00012a44 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
  return "Derived";
}



/* Function: funcA @ 00012a5e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
  return 10;
}



/* Function: ~BaseA @ 00012a76 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void __thiscall BaseA::~BaseA(BaseA *this,int __in_chrg)

{
  this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d7c;
  return;
}



/* Function: ~BaseA @ 00012a96 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~BaseA(BaseA * this, int __in_chrg) */

void __thiscall BaseA::~BaseA(BaseA *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~BaseA(this,in_stack_ffffffe8);
  operator_delete(this,8);
  return;
}



/* Function: funcB @ 00012ad0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
  return 0x14;
}



/* Function: ~BaseB @ 00012ae8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void __thiscall BaseB::~BaseB(BaseB *this,int __in_chrg)

{
  this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d68;
  return;
}



/* Function: ~BaseB @ 00012b08 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~BaseB(BaseB * this, int __in_chrg) */

void __thiscall BaseB::~BaseB(BaseB *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~BaseB(this,in_stack_ffffffe8);
  operator_delete(this,8);
  return;
}



/* Function: funcA @ 00012b42 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
  return 0x1e;
}



/* Function: funcB @ 00012b5a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
  return 0x28;
}



/* Function: funcB @ 00012b72 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB((MultiDerived *)&this[-1].super_BaseB);
  return;
}



/* Function: BaseA @ 00012b7e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void BaseA(BaseA * this) */

void __thiscall BaseA::BaseA(BaseA *this)

{
  this->_vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d7c;
  return;
}



/* Function: BaseB @ 00012b9e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void BaseB(BaseB * this) */

void __thiscall BaseB::BaseB(BaseB *this)

{
  this->_vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d68;
  return;
}



/* Function: MultiDerived @ 00012bbe */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA(&this->super_BaseA);
  BaseB::BaseB(&this->super_BaseB);
  (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d3c;
  (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d54;
  return;
}



/* Function: func @ 00012c12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
  return 100;
}



/* Function: ~VirtualBase @ 00012c2a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
  this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00018d28;
  return;
}



/* Function: ~VirtualBase @ 00012c4a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~VirtualBase(this,in_stack_ffffffe8);
  operator_delete(this,8);
  return;
}



/* Function: func @ 00012c84 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00012cb0 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func((MiddleA *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]));
  return;
}



/* Function: func @ 00012cc4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 00012cf0 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func((MiddleB *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]));
  return;
}



/* Function: func @ 00012d04 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
         + 0xfa;
}



/* Function: func @ 00012d30 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func((DiamondDerived *)
       ((int)&(this->super_MiddleA)._vptr_MiddleA + (int)(this->super_MiddleA)._vptr_MiddleA[-3]));
  return;
}



/* Function: func @ 00012d43 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func((DiamondDerived *)&this[-1].field_0x10);
  return;
}



/* Function: VirtualBase @ 00012d4e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  this->_vptr_VirtualBase = (_func_int_varargs **)&PTR_func_00018d28;
  return;
}



/* Function: MiddleA @ 00012d6e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
  this->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
  *(undefined4 *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) =
       *(undefined4 *)(__in_chrg + 4);
  return;
}



/* Function: ~MiddleA @ 00012da6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
  this->_vptr_MiddleA = *(_func_int_varargs ***)__in_chrg;
  *(undefined4 *)((int)&this->_vptr_MiddleA + (int)this->_vptr_MiddleA[-3]) =
       *(undefined4 *)(__in_chrg + 4);
  return;
}



/* Function: MiddleB @ 00012dde */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
  this->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
  *(undefined4 *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) =
       *(undefined4 *)(__in_chrg + 4);
  return;
}



/* Function: ~MiddleB @ 00012e16 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
  this->_vptr_MiddleB = *(_func_int_varargs ***)__in_chrg;
  *(undefined4 *)((int)&this->_vptr_MiddleB + (int)this->_vptr_MiddleB[-3]) =
       *(undefined4 *)(__in_chrg + 4);
  return;
}



/* Function: DiamondDerived @ 00012e4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  void **in_stack_ffffffec;
  
  VirtualBase::VirtualBase((VirtualBase *)&this->field_0x10);
  MiddleA::MiddleA(&this->super_MiddleA,0x18ca0,in_stack_ffffffec);
  MiddleB::MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,0x18ca8,in_stack_ffffffec);
  (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)0x18c5c;
  *(undefined4 *)&this->field_0x10 = 0x18c90;
  *(undefined4 *)&(this->super_MiddleA).field_0x8 = 0x18c74;
  return;
}



/* Function: Point @ 00012ed0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Point(Point * this, int _x, int _y) */

void __thiscall Point::Point(Point *this,int _x,int _y)

{
  this->x = _x;
  this->y = _y;
  return;
}



/* Function: operator+ @ 00012ef6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: Point operator+(Point * this, Point * other) */

Point __thiscall Point::operator+(Point *this,Point *other)

{
  int extraout_EDX;
  Point PVar1;
  Point *in_stack_00000004;
  
  Point(in_stack_00000004,other->x + this->x,this->y + other->y);
  PVar1.y = extraout_EDX;
  PVar1.x = (int)in_stack_00000004;
  return PVar1;
}



/* Function: operator== @ 00012f3c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: bool operator==(Point * this, Point * other) */

bool __thiscall Point::operator==(Point *this,Point *other)

{
  bool bVar1;
  
  if ((this->x == other->x) && (this->y == other->y)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Function: operator++ @ 00012f7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: Point * operator++(Point * this) */

Point * __thiscall Point::operator++(Point *this)

{
  this->x = this->x + 1;
  this->y = this->y + 1;
  return this;
}



/* Function: template_max<int> @ 00012fac */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int template_max<int>(int a,int b)

{
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_max<double> @ 00012fcf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

double template_max<double>(double a,double b)

{
  double b_local;
  double a_local;
  
  if (b < a) {
    b = a;
  }
  return b;
}



/* Function: template_swap<int> @ 00013011 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: Container @ 00013042 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container(Container<int> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00013060 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: get @ 0001309c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
  int iVar1;
  
  if ((idx < 0) || (this->size <= idx)) {
    iVar1 = 0;
  }
  else {
    iVar1 = this->data[idx];
  }
  return iVar1;
}



/* Function: getSize @ 000130d0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
  return this->size;
}



/* Function: Container @ 000130ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
  this->size = 0;
  return;
}



/* Function: push @ 00013108 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: get @ 0001314e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
  double dVar1;
  
  if ((idx < 0) || (this->size <= idx)) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = this->data[idx];
  }
  return dVar1;
}



/* Function: getSize @ 00013180 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
  return this->size;
}



/* Function: __uniq_ptr_data @ 0001319a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: unique_ptr @ 000131c4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: getType @ 000131ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getType(RTTIBase * this) */

int __thiscall RTTIBase::getType(RTTIBase *this)

{
  return 0;
}



/* Function: getType @ 00013206 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
  return 1;
}



/* Function: derivedA_data @ 0001321e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int derivedA_data(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::derivedA_data(RTTIDerivedA *this)

{
  return 100;
}



/* Function: getType @ 00013236 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
  return 2;
}



/* Function: derivedB_data @ 0001324e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: int derivedB_data(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::derivedB_data(RTTIDerivedB *this)

{
  return 200;
}



/* Function: RTTIBase @ 00013266 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00018c44;
  return;
}



/* Function: ~RTTIBase @ 00013286 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this,int __in_chrg)

{
  this->_vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIBase_00018c44;
  return;
}



/* Function: ~RTTIBase @ 000132a6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIBase(RTTIBase * this, int __in_chrg) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~RTTIBase(this,in_stack_ffffffe8);
  operator_delete(this,4);
  return;
}



/* Function: RTTIDerivedA @ 000132e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00018c30;
  return;
}



/* Function: RTTIDerivedB @ 00013316 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase(&this->super_RTTIBase);
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00018c1c;
  return;
}



/* Function: __uniq_ptr_data @ 0001334c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
   __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data
          (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true> *this,pointer param_2)

{
  __uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int>_>,param_2);
  return;
}



/* Function: unique_ptr<> @ 00013376 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void unique_ptr<>(unique_ptr<int,_std::default_delete<int>_> * this,
   pointer __p) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::unique_ptr<>
          (unique_ptr<int,_std::default_delete<int>_> *this,pointer __p)

{
  __uniq_ptr_data<int,_std::default_delete<int>,_true,_true>::__uniq_ptr_data(&this->_M_t,__p);
  return;
}



/* Function: ~unique_ptr @ 000133a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
   __in_chrg) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr
          (unique_ptr<int,_std::default_delete<int>_> *this,int __in_chrg)

{
  pointer *__t;
  deleter_type *this_00;
  type *ppiVar1;
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



/* Function: operator* @ 0001340c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: type operator*(unique_ptr<int,_std::default_delete<int>_> * this) */

type __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::operator*
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  
  piVar1 = get(this);
  return piVar1;
}



/* Function: move<std::unique_ptr<int>&> @ 00013437 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

type * std::move<std::unique_ptr<int>&>(unique_ptr<int,_std::default_delete<int>_> *__t)

{
  return __t;
}



/* Function: _Tuple_impl @ 0001344e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int>_> *
   this, _Tuple_impl<0,_int*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0,_int*,_std::default_delete<int>_> *this,
          _Tuple_impl<0,_int*,_std::default_delete<int>_> *param_2)

{
  _Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_std::default_delete<int>_>,
             &param_2->super__Tuple_impl<1,_std::default_delete<int>_>);
  *this = *param_2;
  return;
}



/* Function: tuple @ 00013480 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void tuple(tuple<int*,_std::default_delete<int>_> * this,
   tuple<int*,_std::default_delete<int>_> * param_1) */

void __thiscall
std::tuple<int*,_std::default_delete<int>_>::tuple
          (tuple<int*,_std::default_delete<int>_> *this,
          tuple<int*,_std::default_delete<int>_> *param_2)

{
  _Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0,_int*,_std::default_delete<int>_>,
             &param_2->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return;
}



/* Function: __uniq_ptr_impl @ 000134aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, __uniq_ptr_impl<int,_std::default_delete<int>_> * __u) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,
          __uniq_ptr_impl<int,_std::default_delete<int>_> *__u)

{
  type *ptVar1;
  pointer *ppiVar2;
  
  ptVar1 = move<std::tuple<int*,_std::default_delete<int>_>&>(&__u->_M_t);
  tuple<int*,_std::default_delete<int>_>::tuple(&this->_M_t,ptVar1);
  ppiVar2 = _M_ptr(__u);
  *ppiVar2 = (pointer)0x0;
  return;
}



/* Function: __uniq_ptr_data @ 000134f8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void
   __uniq_ptr_data(__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> * this, pointer
   param_1) */

void __thiscall
std::__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true>::__uniq_ptr_data
          (__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true> *this,pointer param_2)

{
  __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::__uniq_ptr_impl
            (&this->super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>,param_2);
  return;
}



/* Function: unique_ptr<int*> @ 00013522 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void unique_ptr<int*>(unique_ptr<int_[],_std::default_delete<int_[]>_>
   * this, int * __p) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::unique_ptr<int*>
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int *__p)

{
  __uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true>::__uniq_ptr_data(&this->_M_t,__p);
  return;
}



/* Function: ~unique_ptr @ 0001354c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
   this, int __in_chrg) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int __in_chrg)

{
  pointer *ppiVar1;
  deleter_type *this_00;
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



/* Function: operator[] @ 000135a8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: type operator[](unique_ptr<int_[],_std::default_delete<int_[]>_> *
   this, size_t __i) */

type __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::operator[]
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,size_t __i)

{
  pointer piVar1;
  
  piVar1 = get(this);
  return piVar1 + __i;
}



/* Function: __uniq_ptr_impl @ 000135de */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this,pointer __p)

{
  pointer *ppiVar1;
  
  tuple<int*,_std::default_delete<int>_>::tuple<>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: _M_ptr @ 0001361c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t *ppiVar1;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 00013642 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: deleter_type * get_deleter(unique_ptr<int,_std::default_delete<int>_> *
   this) */

deleter_type * __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get_deleter
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return pdVar1;
}



/* Function: move<int*&> @ 00013667 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

type * std::move<int*&>(int **__t)

{
  return __t;
}



/* Function: operator() @ 0001367e */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* DWARF original prototype: void operator()(default_delete<int> * this, int * __ptr) */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *__ptr)

{
  if (__ptr != (int *)0x0) {
    operator_delete(__ptr,4);
  }
  return;
}



/* Function: get @ 000136b2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer get(unique_ptr<int,_std::default_delete<int>_> * this) */

pointer __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::get
          (unique_ptr<int,_std::default_delete<int>_> *this)

{
  pointer piVar1;
  
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int>_> *)this);
  return piVar1;
}



/* Function: move<std::tuple<int*,_std::default_delete<int>_>&> @ 000136d7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: move<std::tuple<int*, std::default_delete<int> >&> */

type * std::move<std::tuple<int*,_std::default_delete<int>_>&>
                 (tuple<int*,_std::default_delete<int>_> *__t)

{
  return __t;
}



/* Function: _Tuple_impl @ 000136ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std::default_delete<int>_> * this,
   _Tuple_impl<1,_std::default_delete<int>_> * __in) */

void __thiscall
std::_Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1,_std::default_delete<int>_> *this,
          _Tuple_impl<1,_std::default_delete<int>_> *__in)

{
  return;
}



/* Function: __uniq_ptr_impl @ 00013702 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void __uniq_ptr_impl(__uniq_ptr_impl<int,_std::default_delete<int_[]>_>
   * this, pointer __p) */

void __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this,pointer __p)

{
  pointer *ppiVar1;
  
  tuple<int*,_std::default_delete<int_[]>_>::tuple<>(&this->_M_t);
  ppiVar1 = _M_ptr(this);
  *ppiVar1 = __p;
  return;
}



/* Function: _M_ptr @ 00013740 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer * _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
   this) */

pointer * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this)

{
  __tuple_element_t *ppiVar1;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
  return ppiVar1;
}



/* Function: get_deleter @ 00013766 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: deleter_type *
   get_deleter(unique_ptr<int_[],_std::default_delete<int_[]>_> * this) */

deleter_type * __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::get_deleter
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this)

{
  default_delete<int_[]> *pdVar1;
  
  pdVar1 = __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_deleter
                     ((__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *)this);
  return pdVar1;
}



/* Function: operator()<int> @ 0001378c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void operator()<int>(default_delete<int_[]> * this, int * __ptr) */

void __thiscall
std::default_delete<int_[]>::operator()<int>(default_delete<int_[]> *this,int *__ptr)

{
  if (__ptr != (int *)0x0) {
    operator_delete__(__ptr);
  }
  return;
}



/* Function: get @ 000137be */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer get(unique_ptr<int_[],_std::default_delete<int_[]>_> * this) */

pointer __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::get
          (unique_ptr<int_[],_std::default_delete<int_[]>_> *this)

{
  pointer piVar1;
  
  piVar1 = __uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
                     ((__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *)this);
  return piVar1;
}



/* Function: tuple<> @ 000137e4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void tuple<>(tuple<int*,_std::default_delete<int>_> * this) */

void __thiscall
std::tuple<int*,_std::default_delete<int>_>::tuple<>(tuple<int*,_std::default_delete<int>_> *this)

{
  _Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return;
}



/* Function: get<0,_int*,_std::default_delete<int>_> @ 0001380a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std::default_delete<int> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int>_>(tuple<int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: _M_deleter @ 00013830 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: default_delete<int> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int>_> * this) */

default_delete<int> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t_conflict *p_Var1;
  
  p_Var1 = get<1,_int*,_std::default_delete<int>_>(&this->_M_t);
  return (default_delete<int> *)p_Var1;
}



/* Function: _M_ptr @ 00013856 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int>_> * this)
    */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int>_> *this)

{
  __tuple_element_t *ppiVar1;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: tuple<> @ 0001387e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void tuple<>(tuple<int*,_std::default_delete<int_[]>_> * this) */

void __thiscall
std::tuple<int*,_std::default_delete<int_[]>_>::tuple<>
          (tuple<int*,_std::default_delete<int_[]>_> *this)

{
  _Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>);
  return;
}



/* Function: get<0,_int*,_std::default_delete<int_[]>_> @ 000138a4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int_[]>_>(tuple<int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int_[]>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>);
  return ppiVar1;
}



/* Function: _M_deleter @ 000138ca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: default_delete<int_[]> *
   _M_deleter(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> * this) */

default_delete<int_[]> * __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_deleter
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this)

{
  __tuple_element_t_conflict *p_Var1;
  
  p_Var1 = get<1,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
  return (default_delete<int_[]> *)p_Var1;
}



/* Function: _M_ptr @ 000138f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: pointer _M_ptr(__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *
   this) */

pointer __thiscall
std::__uniq_ptr_impl<int,_std::default_delete<int_[]>_>::_M_ptr
          (__uniq_ptr_impl<int,_std::default_delete<int_[]>_> *this)

{
  __tuple_element_t *ppiVar1;
  
  ppiVar1 = get<0,_int*,_std::default_delete<int_[]>_>(&this->_M_t);
  return *ppiVar1;
}



/* Function: _Tuple_impl @ 00013918 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int>_> *
   this) */

void __thiscall
std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<0,_int*,_std::default_delete<int>_> *this)

{
  _Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_std::default_delete<int>_>);
  _Head_base<0,_int*,_false>::_Head_base((_Head_base<0,_int*,_false> *)this);
  return;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int>_> @ 0001394c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete<int>_> @ 00013970 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<1, int*, std::default_delete<int> > */

__tuple_element_t_conflict *
std::get<1,_int*,_std::default_delete<int>_>(tuple<int*,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = __get_helper<1,_std::default_delete<int>_>
                     ((_Tuple_impl<1,_std::default_delete<int>_> *)__t);
  return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get<0,_int*,_std::default_delete<int>_> @ 00013994 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std::default_delete<int> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int>_>(tuple<int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int>_>);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 000139ba */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *
   this) */

void __thiscall
std::_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_Tuple_impl
          (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *this)

{
  _Tuple_impl<1,_std::default_delete<int_[]>_>::_Tuple_impl
            (&this->super__Tuple_impl<1,_std::default_delete<int_[]>_>);
  _Head_base<0,_int*,_false>::_Head_base((_Head_base<0,_int*,_false> *)this);
  return;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int_[]>_> @ 000139ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int_[]>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: get<1,_int*,_std::default_delete<int_[]>_> @ 00013a12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<1, int*, std::default_delete<int []> > */

__tuple_element_t_conflict *
std::get<1,_int*,_std::default_delete<int_[]>_>(tuple<int*,_std::default_delete<int_[]>_> *__t)

{
  default_delete<int_[]> *pdVar1;
  
  pdVar1 = __get_helper<1,_std::default_delete<int_[]>_>
                     ((_Tuple_impl<1,_std::default_delete<int_[]>_> *)__t);
  return (__tuple_element_t_conflict *)pdVar1;
}



/* Function: get<0,_int*,_std::default_delete<int_[]>_> @ 00013a36 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: get<0, int*, std::default_delete<int []> > */

__tuple_element_t *
std::get<0,_int*,_std::default_delete<int_[]>_>(tuple<int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = __get_helper<0,_int*,_std::default_delete<int_[]>_>
                      (&__t->super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>);
  return ppiVar1;
}



/* Function: forward<int*&> @ 00013a5b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::forward<int*&>(type *__t)

{
  return __t;
}



/* Function: _Tuple_impl @ 00013a72 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std::default_delete<int>_> * this) */

void __thiscall
std::_Tuple_impl<1,_std::default_delete<int>_>::_Tuple_impl
          (_Tuple_impl<1,_std::default_delete<int>_> *this)

{
  _Head_base<1,_std::default_delete<int>,_true>::_Head_base
            (&this->super__Head_base<1,_std::default_delete<int>,_true>);
  return;
}



/* Function: _Head_base @ 00013a98 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base<0,_int*,_false> * this) */

void __thiscall std::_Head_base<0,_int*,_false>::_Head_base(_Head_base<0,_int*,_false> *this)

{
  this->_M_head_impl = (int *)0x0;
  return;
}



/* Function: _M_head @ 00013ab5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete<int>_> @ 00013ada */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1, std::default_delete<int> > */

default_delete<int> *
std::__get_helper<1,_std::default_delete<int>_>(_Tuple_impl<1,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = _Tuple_impl<1,_std::default_delete<int>_>::_M_head(__t);
  return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int>_> @ 00013afe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00013b22 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Tuple_impl(_Tuple_impl<1,_std::default_delete<int_[]>_> * this)
    */

void __thiscall
std::_Tuple_impl<1,_std::default_delete<int_[]>_>::_Tuple_impl
          (_Tuple_impl<1,_std::default_delete<int_[]>_> *this)

{
  _Head_base<1,_std::default_delete<int_[]>,_true>::_Head_base
            (&this->super__Head_base<1,_std::default_delete<int_[]>,_true>);
  return;
}



/* Function: _M_head @ 00013b47 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: __get_helper<1,_std::default_delete<int_[]>_> @ 00013b6c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<1, std::default_delete<int []> > */

default_delete<int_[]> *
std::__get_helper<1,_std::default_delete<int_[]>_>
          (_Tuple_impl<1,_std::default_delete<int_[]>_> *__t)

{
  default_delete<int_[]> *pdVar1;
  
  pdVar1 = _Tuple_impl<1,_std::default_delete<int_[]>_>::_M_head(__t);
  return pdVar1;
}



/* Function: __get_helper<0,_int*,_std::default_delete<int_[]>_> @ 00013b90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */
/* DWARF original name: __get_helper<0, int*, std::default_delete<int []> > */

int ** std::__get_helper<0,_int*,_std::default_delete<int_[]>_>
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head(__t);
  return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00013bb4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base<int*&>(_Head_base<0,_int*,_false> * this, int * * __h)
    */

void __thiscall
std::_Head_base<0,_int*,_false>::_Head_base<int*&>(_Head_base<0,_int*,_false> *this,int **__h)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>(__h);
  this->_M_head_impl = *ppiVar1;
  return;
}



/* Function: _Head_base @ 00013be0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base<1,_std::default_delete<int>,_true> * this)
    */

void __thiscall
std::_Head_base<1,_std::default_delete<int>,_true>::_Head_base
          (_Head_base<1,_std::default_delete<int>,_true> *this)

{
  return;
}



/* Function: _M_head @ 00013bf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Head_base<0,_int*,_false>::_M_head(_Head_base<0,_int*,_false> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013c0a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

default_delete<int> *
std::_Tuple_impl<1,_std::default_delete<int>_>::_M_head
          (_Tuple_impl<1,_std::default_delete<int>_> *__t)

{
  default_delete<int> *pdVar1;
  
  pdVar1 = _Head_base<1,_std::default_delete<int>,_true>::_M_head
                     (&__t->super__Head_base<1,_std::default_delete<int>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 00013c2e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: _Head_base @ 00013c54 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void _Head_base(_Head_base<1,_std::default_delete<int_[]>,_true> *
   this) */

void __thiscall
std::_Head_base<1,_std::default_delete<int_[]>,_true>::_Head_base
          (_Head_base<1,_std::default_delete<int_[]>,_true> *this)

{
  return;
}



/* Function: _M_head @ 00013c68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

default_delete<int_[]> *
std::_Tuple_impl<1,_std::default_delete<int_[]>_>::_M_head
          (_Tuple_impl<1,_std::default_delete<int_[]>_> *__t)

{
  default_delete<int_[]> *pdVar1;
  
  pdVar1 = _Head_base<1,_std::default_delete<int_[]>,_true>::_M_head
                     (&__t->super__Head_base<1,_std::default_delete<int_[]>,_true>);
  return pdVar1;
}



/* Function: _M_head @ 00013c8c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>::_M_head
                 (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_> *__t)

{
  int **ppiVar1;
  
  ppiVar1 = _Head_base<0,_int*,_false>::_M_head((_Head_base<0,_int*,_false> *)__t);
  return ppiVar1;
}



/* Function: _M_head @ 00013cb1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

default_delete<int> *
std::_Head_base<1,_std::default_delete<int>,_true>::_M_head
          (_Head_base<1,_std::default_delete<int>,_true> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013cc7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ** std::_Head_base<0,_int*,_false>::_M_head(_Head_base<0,_int*,_false> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: _M_head @ 00013cdd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

default_delete<int_[]> *
std::_Head_base<1,_std::default_delete<int_[]>,_true>::_M_head
          (_Head_base<1,_std::default_delete<int_[]>,_true> *__b)

{
  return &__b->_M_head_impl;
}



/* Function: ~RTTIDerivedB @ 00013cf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedB_00018c1c;
  RTTIBase::~RTTIBase(&this->super_RTTIBase,in_stack_ffffffe8);
  return;
}



/* Function: ~RTTIDerivedB @ 00013d26 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~RTTIDerivedB(this,in_stack_ffffffe8);
  operator_delete(this,4);
  return;
}



/* Function: ~RTTIDerivedA @ 00013d60 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  (this->super_RTTIBase)._vptr_RTTIBase = (_func_int_varargs **)&PTR__RTTIDerivedA_00018c30;
  RTTIBase::~RTTIBase(&this->super_RTTIBase,in_stack_ffffffe8);
  return;
}



/* Function: ~RTTIDerivedA @ 00013d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~RTTIDerivedA(this,in_stack_ffffffe8);
  operator_delete(this,4);
  return;
}



/* Function: ~DiamondDerived @ 00013dcc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  undefined **__in_chrg_00;
  void **in_stack_ffffffec;
  
  (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)0x18c5c;
  *(undefined4 *)&this->field_0x10 = 0x18c90;
  *(undefined4 *)&(this->super_MiddleA).field_0x8 = 0x18c74;
  MiddleB::~MiddleB((MiddleB *)&(this->super_MiddleA).field_0x8,0x18ca8,in_stack_ffffffec);
  __in_chrg_00 = &PTR_construction_vtable_12__00018ca0;
  MiddleA::~MiddleA(&this->super_MiddleA,0x18ca0,in_stack_ffffffec);
  VirtualBase::~VirtualBase((VirtualBase *)&this->field_0x10,(int)__in_chrg_00);
  return;
}



/* Function: ~DiamondDerived @ 00013e4e */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  int in_stack_00000008;
  void **in_stack_0000000c;
  
  ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10,in_stack_00000008,in_stack_0000000c);
  return;
}



/* Function: ~DiamondDerived @ 00013e5c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  int in_stack_00000008;
  void **in_stack_0000000c;
  
  ~DiamondDerived((DiamondDerived *)
                  ((int)&(this->super_MiddleA)._vptr_MiddleA +
                  (int)(this->super_MiddleA)._vptr_MiddleA[-4]),in_stack_00000008,in_stack_0000000c)
  ;
  return;
}



/* Function: ~DiamondDerived @ 00013e72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
   __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
  int in_stack_ffffffe8;
  void **in_stack_ffffffec;
  
  ~DiamondDerived(this,in_stack_ffffffe8,in_stack_ffffffec);
  operator_delete(this,0x18);
  return;
}



/* Function: ~DiamondDerived @ 00013eab */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  int in_stack_00000008;
  void **in_stack_0000000c;
  
  ~DiamondDerived((DiamondDerived *)&this[-1].field_0x10,in_stack_00000008,in_stack_0000000c);
  return;
}



/* Function: ~DiamondDerived @ 00013eb6 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  int in_stack_00000008;
  void **in_stack_0000000c;
  
  ~DiamondDerived((DiamondDerived *)
                  ((int)&(this->super_MiddleA)._vptr_MiddleA +
                  (int)(this->super_MiddleA)._vptr_MiddleA[-4]),in_stack_00000008,in_stack_0000000c)
  ;
  return;
}



/* Function: ~MultiDerived @ 00013eca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  (this->super_BaseA)._vptr_BaseA = (_func_int_varargs **)&PTR_funcA_00018d3c;
  (this->super_BaseB)._vptr_BaseB = (_func_int_varargs **)&PTR_funcB_00018d54;
  BaseB::~BaseB(&this->super_BaseB,in_stack_ffffffe8);
  BaseA::~BaseA(&this->super_BaseA,in_stack_ffffffe8);
  return;
}



/* Function: ~MultiDerived @ 00013f19 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  int in_stack_00000008;
  
  ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_stack_00000008);
  return;
}



/* Function: ~MultiDerived @ 00013f24 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~MultiDerived(this,in_stack_ffffffe8);
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00013f5d */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  int in_stack_00000008;
  
  ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_stack_00000008);
  return;
}



/* Function: ~Derived @ 00013f68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  (this->super_Base)._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00018d90;
  Base::~Base(&this->super_Base,in_stack_ffffffe8);
  return;
}



/* Function: ~Derived @ 00013f9a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~Derived(this,in_stack_ffffffe8);
  operator_delete(this,8);
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 00013fd3 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.si @ 00013fd7 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_si(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00013fe0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00014000 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001401a) */
/* WARNING: Removing unreachable block (ram,0x00014030) */
/* WARNING: Removing unreachable block (ram,0x0001403d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001404c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 211 */
