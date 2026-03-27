/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/5-1/5-1_gcc_O0_no_g
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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  SimpleClass local_34 [36];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  SimpleClass::SimpleClass(local_34,5,"Test");
  SimpleClass::setValue(local_34,10);
  iVar1 = SimpleClass::getValue(local_34);
  iVar2 = SimpleClass::compute(local_34,3);
  iVar3 = SimpleClass::getClassID();
  iVar3 = iVar3 + iVar1 + iVar2;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar3 = __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: test_cpp_constructor @ 00011519 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  LifecycleClass local_18 [8];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  LifecycleClass::LifecycleClass(local_18,5);
  iVar1 = LifecycleClass::getData(local_18,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(local_18);
  iVar3 = LifecycleClass::getInstanceCount();
  iVar1 = iVar1 + iVar2 + iVar3 * 1000;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: call_virtual_func @ 0001159f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined4 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 000115ca */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int in_GS_OFFSET;
  undefined **local_34;
  int local_30;
  int local_2c;
  Base *local_28;
  Base *local_24;
  int local_20;
  int local_1c;
  Derived local_18 [8];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_34 = &PTR_virtual_func_00018da8;
  Derived::Derived(local_18,3);
  local_30 = Base::virtual_func((Base *)&local_34,5);
  local_2c = Derived::virtual_func(local_18,5);
  local_28 = (Base *)&local_34;
  local_24 = (Base *)local_18;
                    /* try { // try from 00011642 to 00011659 has its CatchHandler @ 000116a1 */
  local_20 = call_virtual_func(local_28,5);
  local_1c = call_virtual_func(local_24,5);
  iVar1 = local_30 + local_2c + local_20 + local_1c;
  Derived::~Derived(local_18);
  Base::~Base((Base *)&local_34);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: test_cpp_multiple_inheritance @ 000116de */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  MultiDerived::MultiDerived((MultiDerived *)&local_20);
  local_1c = 100;
  local_14 = 200;
                    /* try { // try from 00011739 to 0001174f has its CatchHandler @ 00011792 */
  iVar1 = (*(code *)*local_20)(&local_20);
  iVar2 = (*(code *)*local_18)(&local_18);
  iVar1 = iVar1 + iVar2 + (uint)(&local_20 != &local_18);
  MultiDerived::~MultiDerived((MultiDerived *)&local_20);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: test_cpp_diamond_inheritance @ 000117c0 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  DiamondDerived local_28 [16];
  undefined4 *local_18;
  undefined4 local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  DiamondDerived::DiamondDerived(local_28);
  local_14 = 0x32;
                    /* try { // try from 0001180e to 0001182b has its CatchHandler @ 0001185a */
  iVar1 = (*(code *)*local_18)(&local_18);
  local_14 = 100;
  iVar2 = (*(code *)*local_18)(&local_18);
  iVar1 = iVar1 + iVar2;
  DiamondDerived::~DiamondDerived(local_28);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: test_cpp_operator_overload @ 00011888 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
  char cVar1;
  int iVar2;
  int in_GS_OFFSET;
  Point local_28 [8];
  Point local_20 [8];
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  Point::Point(local_28,1,2);
  Point::Point(local_20,3,4);
  Point::operator+((Point *)&local_18,local_28);
  cVar1 = Point::operator==(local_28,local_20);
  Point::operator++((Point *)&local_18);
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = local_14 + local_18 + iVar2;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar2 = __stack_chk_fail_local();
  }
  return iVar2;
}



/* Function: test_cpp_template_func @ 00011938 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  int iVar1;
  int in_GS_OFFSET;
  int local_28;
  int local_24;
  int local_20;
  double local_1c;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_20 = template_max<int>(3,7);
  local_1c = template_max<double>(2.5,1.5);
  local_28 = 10;
  local_24 = 0x14;
  template_swap<int>(&local_28,&local_24);
  iVar1 = local_24 + (int)ROUND(local_1c) + local_20 + local_28;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: test_cpp_template_class @ 000119f3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  longdouble lVar3;
  Container<int> local_90 [44];
  Container<double> local_64 [84];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  Container<int>::Container(local_90);
  Container<int>::push(local_90,10);
  Container<int>::push(local_90,0x14);
  Container<int>::push(local_90,0x1e);
  iVar1 = Container<int>::get(local_90,0);
  iVar2 = Container<int>::getSize(local_90);
  Container<double>::Container(local_64);
  Container<double>::push((double)CONCAT44(0x51eb851f,local_64));
  lVar3 = (longdouble)Container<double>::get(local_64,0);
  iVar1 = (int)ROUND((double)lVar3) + iVar1 + iVar2;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: operator() @ 00011b34 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* test_cpp_lambda()::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  **(int **)(this + 4) = **(int **)(this + 4) + 5;
  return **(int **)(this + 4) + *(int *)this * param_1;
}



/* Function: test_cpp_lambda @ 00011b6b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
  int iVar1;
  int in_GS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_24 = 10;
  local_28 = 0x14;
  local_18 = 10;
  local_14 = &local_28;
  local_20 = test_cpp_lambda()::{lambda(int)#1}::operator()((_lambda_int__1_ *)&local_18,3);
  local_1c = 0x1e;
  iVar1 = local_20 + 0x1e;
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: test_cpp_exception @ 00011bd7 */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00011c1a to 00011c1e has its CatchHandler @ 00011c27 */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: operator() @ 00011d26 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* test_cpp_smart_ptr()::{lambda(int*)#1}::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall
test_cpp_smart_ptr()::{lambda(int*)#1}::operator()(_lambda_int___1_ *this,int *param_1)

{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}



/* Function: test_cpp_smart_ptr @ 00011d5e */

/* WARNING: Function: __x86.get_pc_thunk.si replaced with injection: get_pc_thunk_si */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
  int *piVar1;
  undefined4 *puVar2;
  type *ptVar3;
  int iVar4;
  int in_GS_OFFSET;
  _lambda_int___1_ local_2d;
  unique_ptr<int,std::default_delete<int>> local_2c [4];
  unique_ptr<int,std::default_delete<int>> local_28 [4];
  unique_ptr<int[],std::default_delete<int[]>> local_24 [4];
  unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> local_20 [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  piVar1 = operator_new(4);
  *piVar1 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
            (local_2c,piVar1);
  puVar2 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(local_2c);
  *puVar2 = 200;
  ptVar3 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)local_2c);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(local_28,(unique_ptr *)ptVar3);
  piVar1 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(local_28);
  local_1c = *piVar1;
                    /* try { // try from 00011df4 to 00011df8 has its CatchHandler @ 00011efe */
  piVar1 = operator_new__(0x14);
  *piVar1 = 1;
  piVar1[1] = 2;
  piVar1[2] = 3;
  piVar1[3] = 4;
  piVar1[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr<int*,std::default_delete<int[]>,void,bool>(local_24,piVar1);
  piVar1 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](local_24,2);
  local_18 = *piVar1;
                    /* try { // try from 00011e57 to 00011e5b has its CatchHandler @ 00011ee7 */
  piVar1 = operator_new(4);
  *piVar1 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>(local_20,piVar1,&local_2d);
  piVar1 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*(local_20);
  local_14 = *piVar1;
  iVar4 = local_1c + local_18 + local_14;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr(local_20);
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(local_24);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(local_28);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(local_2c);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar4 = __stack_chk_fail_local();
  }
  return iVar4;
}



/* Function: test_cpp_rtti @ 00011f3b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  char cVar1;
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  int iVar2;
  char *__s;
  size_t sVar3;
  int local_20;
  
  this = operator_new(4);
  *(undefined4 *)this = 0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(4);
  *(undefined4 *)this_00 = 0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  local_20 = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
LAB_00011fcb:
    local_20 = 10;
  }
  else {
    cVar1 = std::type_info::operator==
                      (*(type_info **)(*(int *)this + -4),(type_info *)&RTTIDerivedA::typeinfo);
    if (cVar1 != '\0') goto LAB_00011fcb;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
LAB_00011ff9:
    local_20 = local_20 + 0x14;
  }
  else {
    cVar1 = std::type_info::operator==
                      (*(type_info **)(*(int *)this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
    if (cVar1 != '\0') goto LAB_00011ff9;
  }
  if (this == (RTTIDerivedA *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (iVar2 != 0) {
    iVar2 = RTTIDerivedA::derivedA_data();
    local_20 = local_20 + iVar2;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (iVar2 != 0) {
    iVar2 = RTTIDerivedB::derivedB_data();
    local_20 = local_20 + iVar2;
  }
  if (this == (RTTIDerivedA *)0x0) {
    this = (RTTIDerivedA *)__cxa_bad_typeid();
  }
  else {
    __s = (char *)std::type_info::name(*(type_info **)(*(int *)this + -4));
    sVar3 = strlen(__s);
    local_20 = sVar3 + local_20;
    if (this == (RTTIDerivedA *)0x0) goto LAB_000120c9;
  }
  (**(code **)(*(int *)this + 4))(this);
LAB_000120c9:
  if (this_00 != (RTTIDerivedB *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  return local_20;
}



/* Function: test_cpp_oo_features @ 000120ea */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
  undefined4 uVar1;
  
  puts(&DAT_0001503c);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00015060,uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_0001507e,uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_0001509a,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_000150b6,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000150d2,uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_000150ef,uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_0001510b,uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_00015127,uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00015143,uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_0001515f,uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_0001517c,uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_00015199,uVar1);
  return;
}



/* Function: main @ 00012238 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 00012258 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_data<int, test_cpp_smart_ptr()::{lambda(int*)#1}, true,
   false>::__uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1} const&>(int*,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
__uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
          (__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda(int*)_1_,true,false> *this,int *param_1
          ,_lambda_int___1_ *param_2)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  __uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,param_1,param_2);
  return;
}



/* Function: unique_ptr<test_cpp_smart_ptr()::{lambda(int*)#1},void> @ 00012282 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr<test_cpp_smart_ptr()::{lambda(int*)#1},
   void>(int*, test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int *param_1,
          _lambda_int___1_ *param_2)

{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
  __uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
            ((__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda(int*)_1_,true,false> *)this,param_1,
             param_2);
  return;
}



/* Function: ~unique_ptr @ 000122aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr() */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  int **ppiVar1;
  _lambda_int___1_ *this_00;
  type *ptVar2;
  
  ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
                              ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (_lambda_int___1_ *)get_deleter(this);
    ptVar2 = move<int*&>(ppiVar1);
    test_cpp_smart_ptr()::{lambda(int*)#1}::operator()(this_00,*(int **)ptVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}



/* Function: operator* @ 00012312 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get(this);
  return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 0001233a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}
   const&>(int*, test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
__uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int *param_1,
          _lambda_int___1_ *param_2)

{
  _lambda_int___1_ *p_Var1;
  
  p_Var1 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
            ((tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,&param_1,p_Var1);
  return;
}



/* Function: _M_ptr @ 00012374 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00012396 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter() */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return;
}



/* Function: get @ 000123b8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return;
}



/* Function: forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 000123d9 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::{lambda(int*)#1} const& std::forward<test_cpp_smart_ptr()::{lambda(int*)#1}
   const&>(std::remove_reference<test_cpp_smart_ptr()::{lambda(int*)#1} const&>::type&) */

_lambda_int___1_ * std::forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>(type *param_1)

{
  return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,true> @ 000123ec */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple<int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&, true>(int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
          (tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int **param_1,
          _lambda_int___1_ *param_2)

{
  _lambda_int___1_ *p_Var1;
  int **ppiVar2;
  
  p_Var1 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  ppiVar2 = forward<int*&>((type *)param_1);
  _Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  _Tuple_impl<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,void>
            ((_Tuple_impl<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,ppiVar2,p_Var1);
  return;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0001242f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}> >::type&
   std::get<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::tuple<int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

type * std::get<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>
                             ((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 00012450 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get<1u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 00012472 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,void> @ 00012496 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl<int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&, void>(int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
_Tuple_impl<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,void>
          (_Tuple_impl<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int **param_1,
          _lambda_int___1_ *param_2)

{
  int **ppiVar1;
  
  forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  _Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl((_lambda_int___1_ *)this);
  ppiVar1 = forward<int*&>((type *)param_1);
  _Head_base<0u,int*,false>::_Head_base<int*&>((_Head_base<0u,int*,false> *)this,ppiVar1);
  return;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 000124e5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<0u,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00012505 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}> >::type&
   std::get<1u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::tuple<int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

type * std::get<1u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(tuple *param_1)

{
  _lambda_int___1_ *p_Var1;
  
  p_Var1 = __get_helper<1u,test_cpp_smart_ptr()::_lambda(int*)_1_>((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00012525 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}> >::type const&
   std::get<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::tuple<int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

type * std::get<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>
                             ((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _Tuple_impl @ 00012546 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl(test_cpp_smart_ptr()::{lambda(int*)#1}
   const&) */

void std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl
               (_lambda_int___1_ *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
  return;
}



/* Function: _M_head @ 0001256a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0u,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1u,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0001258b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::{lambda(int*)#1}& std::__get_helper<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

_lambda_int___1_ *
std::__get_helper<1u,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  _lambda_int___1_ *p_Var1;
  
  p_Var1 = (_lambda_int___1_ *)
           _Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return p_Var1;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 000125ab */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<0u, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Head_base @ 000125cc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<1u, test_cpp_smart_ptr()::{lambda(int*)#1},
   true>::_Head_base(test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

undefined **
std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
          (_lambda_int___1_ *param_1)

{
  return &_GLOBAL_OFFSET_TABLE_;
}



/* Function: _M_head @ 000125dc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

void std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 000125fc */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0u,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 0001261d */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<1u, test_cpp_smart_ptr()::{lambda(int*)#1}, true>::_M_head(std::_Head_base<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}, true>&) */

_Head_base *
std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 0001262f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 0001268c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* Function: name @ 000126b4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::type_info::name() const */

int __thiscall std::type_info::name(type_info *this)

{
  int iVar1;
  
  if (**(char **)(this + 4) == '*') {
    iVar1 = *(int *)(this + 4) + 1;
  }
  else {
    iVar1 = *(int *)(this + 4);
  }
  return iVar1;
}



/* Function: operator== @ 000126e6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

undefined4 __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 4) == *(int *)(param_1 + 4)) {
LAB_00012738:
    uVar2 = 1;
  }
  else {
    if (**(char **)(this + 4) != '*') {
      iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
      if (iVar1 == 0) goto LAB_00012738;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: SimpleClass @ 0001274a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}



/* Function: getValue @ 0001278e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return *(undefined4 *)this;
}



/* Function: setValue @ 000127a6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
  *(int *)this = param_1;
  return;
}



/* Function: compute @ 000127c2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::compute(int) const */

int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return sVar2 + iVar1 * param_1;
}



/* Function: getClassID @ 000127fd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* SimpleClass::getClassID() */

undefined4 SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00012816 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* LifecycleClass::LifecycleClass(unsigned int) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)

{
  void *pvVar1;
  uint local_10;
  
  *(uint *)(this + 4) = param_1;
  if (param_1 < 0x20000000) {
    pvVar1 = operator_new__(param_1 << 2);
    *(void **)this = pvVar1;
    for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
LAB_00012863:
      *(uint *)(local_10 * 4 + *(int *)this) = local_10 * 10;
    }
    instance_count = instance_count + 1;
    return;
  }
  __cxa_throw_bad_array_new_length();
  goto LAB_00012863;
}



/* Function: ~LifecycleClass @ 000128a4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (*(int *)this != 0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: getData @ 000128ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* LifecycleClass::getData(unsigned int) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < *(uint *)(this + 4)) {
    uVar1 = *(undefined4 *)(param_1 * 4 + *(int *)this);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: getInstanceCount @ 0001291e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: virtual_func @ 00012938 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 00012952 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_0001502d;
}



/* Function: ~Base @ 0001296c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00018da8;
  return;
}



/* Function: ~Base @ 0001298c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this,4);
  return;
}



/* Function: Base @ 000129c6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Base::Base() */

void __thiscall Base::Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00018da8;
  return;
}



/* Function: Derived @ 000129e6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00018d90;
  *(int *)(this + 4) = param_1;
  return;
}



/* Function: virtual_func @ 00012a26 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 4) * param_1;
}



/* Function: getName @ 00012a44 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 00012a5e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00012a76 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00018d7c;
  return;
}



/* Function: ~BaseA @ 00012a96 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this,8);
  return;
}



/* Function: funcB @ 00012ad0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 00012ae8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00018d68;
  return;
}



/* Function: ~BaseB @ 00012b08 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this,8);
  return;
}



/* Function: funcA @ 00012b42 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 00012b5a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00012b72 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB();
  return;
}



/* Function: BaseA @ 00012b7e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00018d7c;
  return;
}



/* Function: BaseB @ 00012b9e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00018d68;
  return;
}



/* Function: MultiDerived @ 00012bbe */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 8));
  *(undefined ***)this = &PTR_funcA_00018d3c;
  *(undefined ***)(this + 8) = &PTR_funcB_00018d54;
  return;
}



/* Function: func @ 00012c12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 00012c2a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00018d28;
  return;
}



/* Function: ~VirtualBase @ 00012c4a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this,8);
  return;
}



/* Function: func @ 00012c84 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 00012cb0 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00012cc4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00012cf0 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00012d04 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00012d30 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00012d43 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -8);
  return;
}



/* Function: VirtualBase @ 00012d4e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00018d28;
  return;
}



/* Function: MiddleA @ 00012d6e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}



/* Function: ~MiddleA @ 00012da6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}



/* Function: MiddleB @ 00012dde */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}



/* Function: ~MiddleB @ 00012e16 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  undefined4 *in_stack_00000008;
  
  *(undefined4 *)this = *in_stack_00000008;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_stack_00000008[1];
  return;
}



/* Function: DiamondDerived @ 00012e4e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 8));
  *(undefined4 *)this = 0x18c5c;
  *(undefined4 *)(this + 0x10) = 0x18c90;
  *(undefined4 *)(this + 8) = 0x18c74;
  return;
}



/* Function: Point @ 00012ed0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}



/* Function: operator+ @ 00012ef6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

Point * __thiscall Point::operator+(Point *this,Point *param_1)

{
  int *in_stack_0000000c;
  
  Point(this,*in_stack_0000000c + *(int *)param_1,*(int *)(param_1 + 4) + in_stack_0000000c[1]);
  return this;
}



/* Function: operator== @ 00012f3c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined4 __thiscall Point::operator==(Point *this,Point *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: operator++ @ 00012f7a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * __thiscall Point::operator++(Point *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return this;
}



/* Function: template_max<int> @ 00012fac */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00012fcf */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_swap<int> @ 00013011 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00013042 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00013060 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: get @ 0001309c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 000130d0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 000130ea */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00013108 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::push(double) */

void Container<double>::push(double param_1)

{
  int iVar1;
  undefined4 in_stack_0000000c;
  
  if (*(int *)(param_1._0_4_ + 0x50) < 10) {
    iVar1 = *(int *)(param_1._0_4_ + 0x50);
    *(int *)(param_1._0_4_ + 0x50) = iVar1 + 1;
    *(ulonglong *)(param_1._0_4_ + iVar1 * 8) = CONCAT44(in_stack_0000000c,param_1._4_4_);
  }
  return;
}



/* Function: get @ 0001314e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::get(int) const */

Container<double> * __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  Container<double> *pCVar1;
  
  pCVar1 = (Container<double> *)&_GLOBAL_OFFSET_TABLE_;
  if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
    pCVar1 = this;
  }
  return pCVar1;
}



/* Function: getSize @ 00013180 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: __uniq_ptr_data @ 0001319a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: unique_ptr @ 000131c4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: getType @ 000131ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIBase::getType() const */

undefined4 RTTIBase::getType(void)

{
  return 0;
}



/* Function: getType @ 00013206 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: derivedA_data @ 0001321e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA::derivedA_data(void)

{
  return 100;
}



/* Function: getType @ 00013236 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: derivedB_data @ 0001324e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB::derivedB_data(void)

{
  return 200;
}



/* Function: RTTIBase @ 00013266 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00018c44;
  return;
}



/* Function: ~RTTIBase @ 00013286 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00018c44;
  return;
}



/* Function: ~RTTIBase @ 000132a6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this,4);
  return;
}



/* Function: RTTIDerivedA @ 000132e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00018c30;
  return;
}



/* Function: RTTIDerivedB @ 00013316 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00018c1c;
  return;
}



/* Function: __uniq_ptr_impl @ 0001334c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
  return;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00013376 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
    */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
          (unique_ptr<int,std::default_delete<int>> *this,int *param_1)

{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,param_1);
  return;
}



/* Function: ~unique_ptr @ 000133a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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
    default_delete<int>::operator()(this_00,*(int **)ptVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}



/* Function: operator* @ 0001340c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
          (unique_ptr<int,std::default_delete<int>> *this)

{
  get(this);
  return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00013437 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
   std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
   std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 0001344e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: tuple @ 00013480 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: __uniq_ptr_impl @ 000134aa */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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
  puVar2 = (undefined4 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
  *puVar2 = 0;
  return;
}



/* Function: __uniq_ptr_impl @ 000134f8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
  return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00013522 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
   []>, void, bool>(int*) */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr<int*,std::default_delete<int[]>,void,bool>
          (unique_ptr<int[],std::default_delete<int[]>> *this,int *param_1)

{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *)this,param_1);
  return;
}



/* Function: ~unique_ptr @ 0001354c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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
    default_delete<int[]>::operator()(this_00,(int *)*piVar1);
  }
  *piVar1 = 0;
  return;
}



/* Function: operator[] @ 000135a8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
          (unique_ptr<int[],std::default_delete<int[]>> *this,uint param_1)

{
  int iVar1;
  
  iVar1 = get(this);
  return param_1 * 4 + iVar1;
}



/* Function: __uniq_ptr_impl @ 000135de */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: _M_ptr @ 0001361c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<0u,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00013642 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr<int,std::default_delete<int>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return;
}



/* Function: move<int*&> @ 00013667 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
  return (type *)param_1;
}



/* Function: operator() @ 0001367e */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}



/* Function: get @ 000136b2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int, std::default_delete<int> >::get() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 000136d7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
   std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
   >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 000136ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
   std::default_delete<int> >&&) */

undefined ** std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
  return &_GLOBAL_OFFSET_TABLE_;
}



/* Function: __uniq_ptr_impl @ 00013702 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
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



/* Function: _M_ptr @ 00013740 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00013766 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return;
}



/* Function: operator() @ 0001378c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::enable_if<std::is_convertible<int (*) [], int (*) []>::value, void>::type
   std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: get @ 000137be */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return;
}



/* Function: tuple<true,true> @ 000137e4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
          (tuple<int*,std::default_delete<int>> *this)

{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int>> *)this);
  return;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 0001380a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type& std::get<0u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 00013830 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<1u,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 00013856 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: tuple<true,true> @ 0001387e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
          (tuple<int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int[]>> *)this);
  return;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 000138a4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 000138ca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<1u,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 000138f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: _Tuple_impl @ 00013918 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int>> *this)

{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl();
  _Head_base<0u,int*,false>::_Head_base((_Head_base<0u,int*,false> *)this);
  return;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 0001394c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1u,int*,std::default_delete<int>> @ 00013970 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int> > >::type& std::get<1u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1u,int*,std::default_delete<int>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00013994 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0u,
   int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _Tuple_impl @ 000139ba */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl();
  _Head_base<0u,int*,false>::_Head_base((_Head_base<0u,int*,false> *)this);
  return;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 000139ee */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1u,int*,std::default_delete<int[]>> @ 00013a12 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00013a36 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type const& std::get<0u,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> > const&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: forward<int*&> @ 00013a5b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* Function: _Tuple_impl @ 00013a72 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl() */

void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(void)

{
  _Head_base<1u,std::default_delete<int>,true>::_Head_base();
  return;
}



/* Function: _Head_base @ 00013a98 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<0u, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0u,int*,false>::_Head_base(_Head_base<0u,int*,false> *this)

{
  *(undefined4 *)this = 0;
  return;
}



/* Function: _M_head @ 00013ab5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1u,std::default_delete<int>> @ 00013ada */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1u, std::default_delete<int>>(std::_Tuple_impl<1u,
   std::default_delete<int>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00013afe */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00013b22 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u, std::default_delete<int []> >::_Tuple_impl() */

void std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl(void)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_Head_base();
  return;
}



/* Function: _M_head @ 00013b47 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1u,std::default_delete<int[]>> @ 00013b6c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1u, std::default_delete<int
   []>>(std::_Tuple_impl<1u, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00013b90 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00013bb4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std::_Head_base<0u,int*,false>::_Head_base<int*&>(_Head_base<0u,int*,false> *this,int **param_1)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}



/* Function: _Head_base @ 00013be0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<1u, std::default_delete<int>, true>::_Head_base() */

undefined ** std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(void)

{
  return &_GLOBAL_OFFSET_TABLE_;
}



/* Function: _M_head @ 00013bf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false>&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00013c0a */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u, std::default_delete<int> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int> >&) */

void std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00013c2e */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _Head_base @ 00013c54 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<1u, std::default_delete<int []>, true>::_Head_base() */

undefined ** std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base(void)

{
  return &_GLOBAL_OFFSET_TABLE_;
}



/* Function: _M_head @ 00013c68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<1u, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00013c8c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00013cb1 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<1u, std::default_delete<int>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00013cc7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false> const&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00013cdd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* std::_Head_base<1u, std::default_delete<int []>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: ~RTTIDerivedB @ 00013cf4 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedB_00018c1c;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedB @ 00013d26 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this,4);
  return;
}



/* Function: ~RTTIDerivedA @ 00013d60 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedA_00018c30;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedA @ 00013d92 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this,4);
  return;
}



/* Function: ~DiamondDerived @ 00013dcc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  *(undefined4 *)this = 0x18c5c;
  *(undefined4 *)(this + 0x10) = 0x18c90;
  *(undefined4 *)(this + 8) = 0x18c74;
  MiddleB::~MiddleB((MiddleB *)(this + 8));
  MiddleA::~MiddleA((MiddleA *)this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
  return;
}



/* Function: ~DiamondDerived @ 00013e4e */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00013e5c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~DiamondDerived @ 00013e72 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x18);
  return;
}



/* Function: ~DiamondDerived @ 00013eab */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00013eb6 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MultiDerived @ 00013eca */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  *(undefined ***)this = &PTR_funcA_00018d3c;
  *(undefined ***)(this + 8) = &PTR_funcB_00018d54;
  BaseB::~BaseB((BaseB *)(this + 8));
  BaseA::~BaseA((BaseA *)this);
  return;
}



/* Function: ~MultiDerived @ 00013f19 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~MultiDerived @ 00013f24 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this,0x10);
  return;
}



/* Function: ~MultiDerived @ 00013f5d */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~Derived @ 00013f68 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  *(undefined ***)this = &PTR_virtual_func_00018d90;
  Base::~Base((Base *)this);
  return;
}



/* Function: ~Derived @ 00013f9a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
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
