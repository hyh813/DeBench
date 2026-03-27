/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/5-1/5-1_gcc_O0_no_g
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
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  SimpleClass local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  SimpleClass::SimpleClass(local_38,5,"Test");
  SimpleClass::setValue(local_38,10);
  iVar1 = SimpleClass::getValue(local_38);
  iVar2 = SimpleClass::compute(local_38,3);
  iVar3 = SimpleClass::getClassID();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3 + iVar1 + iVar2;
}



/* Function: test_cpp_constructor @ 0010245c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  LifecycleClass local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  LifecycleClass::LifecycleClass(local_28,5);
  iVar1 = LifecycleClass::getData(local_28,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(local_28);
  iVar3 = LifecycleClass::getInstanceCount();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2 + iVar3 * 1000;
}



/* Function: call_virtual_func @ 001024de */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined8 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 0010250b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined **local_50;
  Base *local_48;
  Base *local_40;
  Derived local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = &PTR_virtual_func_00108b50;
  Derived::Derived(local_38,3);
  iVar1 = Base::virtual_func((Base *)&local_50,5);
  iVar2 = Derived::virtual_func(local_38,5);
  local_48 = (Base *)&local_50;
  local_40 = (Base *)local_38;
                    /* try { // try from 00102587 to 0010259f has its CatchHandler @ 001025e1 */
  iVar3 = call_virtual_func(local_48,5);
  iVar4 = call_virtual_func(local_40,5);
  Derived::~Derived(local_38);
  Base::~Base((Base *)&local_50);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00102616 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  MultiDerived::MultiDerived((MultiDerived *)&local_48);
  local_40 = 100;
  local_30 = 200;
                    /* try { // try from 00102671 to 00102688 has its CatchHandler @ 001026ca */
  iVar1 = (*(code *)*local_48)(&local_48);
  iVar2 = (*(code *)*local_38)(&local_38);
  MultiDerived::~MultiDerived((MultiDerived *)&local_48);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2 + (uint)(&local_48 != &local_38);
}



/* Function: test_cpp_diamond_inheritance @ 001026f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  DiamondDerived local_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  DiamondDerived::DiamondDerived(local_58);
  local_30 = 0x32;
                    /* try { // try from 0010273f to 0010275d has its CatchHandler @ 00102789 */
  iVar1 = (*(code *)*local_38)(&local_38);
  local_30 = 100;
  iVar2 = (*(code *)*local_38)(&local_38);
  DiamondDerived::~DiamondDerived(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 001027b2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  Point local_28 [8];
  Point local_20 [8];
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Point::Point(local_28,1,2);
  Point::Point(local_20,3,4);
  local_18 = Point::operator+(local_28,local_20);
  cVar1 = Point::operator==(local_28,local_20);
  Point::operator++((Point *)&local_18);
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  else {
    iVar2 = 0;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18._4_4_ + (int)local_18 + iVar2;
}



/* Function: test_cpp_template_func @ 00102864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  long in_FS_OFFSET;
  int local_24;
  int local_20;
  int local_1c;
  double local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = template_max<int>(3,7);
  local_18 = template_max<double>(2.5,1.5);
  local_24 = 10;
  local_20 = 0x14;
  template_swap<int>(&local_24,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_20 + (int)local_18 + local_1c + local_24;
}



/* Function: test_cpp_template_class @ 00102906 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  double dVar3;
  Container<int> local_98 [48];
  Container<double> local_68 [88];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Container<int>::Container(local_98);
  Container<int>::push(local_98,10);
  Container<int>::push(local_98,0x14);
  Container<int>::push(local_98,0x1e);
  iVar1 = Container<int>::get(local_98,0);
  iVar2 = Container<int>::getSize(local_98);
  Container<double>::Container(local_68);
  Container<double>::push(local_68,3.14);
  dVar3 = (double)Container<double>::get(local_68,0);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)dVar3 + iVar1 + iVar2;
}



/* Function: operator() @ 00102a12 */

/* test_cpp_lambda()::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  **(int **)(this + 8) = **(int **)(this + 8) + 5;
  return **(int **)(this + 8) + *(int *)this * param_1;
}



/* Function: test_cpp_lambda @ 00102a4e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
  long in_FS_OFFSET;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28 [2];
  undefined4 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 10;
  local_38 = 0x14;
  local_28[0] = 10;
  local_20 = &local_38;
  local_30 = test_cpp_lambda()::{lambda(int)#1}::operator()((_lambda_int__1_ *)local_28,3);
  local_2c = 0x1e;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_30 + 0x1e;
}



/* Function: test_cpp_exception @ 00102abe */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00102af6 to 00102afa has its CatchHandler @ 00102b03 */
  __cxa_throw(puVar1,int::typeinfo,0);
}



/* Function: operator() @ 00102be4 */

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



/* Function: test_cpp_smart_ptr @ 00102c17 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  type *ptVar4;
  long in_FS_OFFSET;
  _lambda_int___1_ local_4d;
  int local_4c;
  int local_48;
  int local_44;
  unique_ptr<int,std::default_delete<int>> local_40 [8];
  unique_ptr<int,std::default_delete<int>> local_38 [8];
  unique_ptr<int[],std::default_delete<int[]>> local_30 [8];
  unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar2 = operator_new(4);
  *piVar2 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
            (local_40,piVar2);
  puVar3 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(local_40);
  *puVar3 = 200;
  ptVar4 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)local_40);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(local_38,(unique_ptr *)ptVar4);
  piVar2 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(local_38);
  local_4c = *piVar2;
                    /* try { // try from 00102c98 to 00102c9c has its CatchHandler @ 00102d90 */
  piVar2 = operator_new__(0x14);
  *piVar2 = 1;
  piVar2[1] = 2;
  piVar2[2] = 3;
  piVar2[3] = 4;
  piVar2[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr<int*,std::default_delete<int[]>,void,bool>(local_30,piVar2);
  piVar2 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](local_30,2);
  local_48 = *piVar2;
                    /* try { // try from 00102cfb to 00102cff has its CatchHandler @ 00102d7b */
  piVar2 = operator_new(4);
  *piVar2 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>(local_28,piVar2,&local_4d);
  piVar2 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*(local_28);
  local_44 = *piVar2;
  iVar1 = local_4c + local_48 + local_44;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr(local_28);
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(local_30);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(local_38);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1;
}



/* Function: test_cpp_rtti @ 00102dc5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  char cVar1;
  int iVar2;
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  long lVar3;
  char *__s;
  size_t sVar4;
  int local_3c;
  
  this = operator_new(8);
  *(undefined8 *)this = 0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(8);
  *(undefined8 *)this_00 = 0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  local_3c = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
LAB_00102e46:
    local_3c = 10;
  }
  else {
    cVar1 = std::type_info::operator==
                      (*(type_info **)(*(long *)this + -8),(type_info *)&RTTIDerivedA::typeinfo);
    if (cVar1 != '\0') goto LAB_00102e46;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
LAB_00102e77:
    local_3c = local_3c + 0x14;
  }
  else {
    cVar1 = std::type_info::operator==
                      (*(type_info **)(*(long *)this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
    if (cVar1 != '\0') goto LAB_00102e77;
  }
  if (this == (RTTIDerivedA *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (lVar3 != 0) {
    iVar2 = RTTIDerivedA::derivedA_data();
    local_3c = local_3c + iVar2;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (lVar3 != 0) {
    iVar2 = RTTIDerivedB::derivedB_data();
    local_3c = local_3c + iVar2;
  }
  if (this == (RTTIDerivedA *)0x0) {
    this = (RTTIDerivedA *)__cxa_bad_typeid();
  }
  else {
    __s = (char *)std::type_info::name(*(type_info **)(*(long *)this + -8));
    sVar4 = strlen(__s);
    local_3c = local_3c + (int)sVar4;
    if (this == (RTTIDerivedA *)0x0) goto LAB_00102f4e;
  }
  (**(code **)(*(long *)this + 8))(this);
LAB_00102f4e:
  if (this_00 != (RTTIDerivedB *)0x0) {
    (**(code **)(*(long *)this_00 + 8))(this_00);
  }
  return local_3c;
}



/* Function: test_cpp_oo_features @ 00102f6f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

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

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 001030e2 */

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



/* Function: unique_ptr<test_cpp_smart_ptr()::{lambda(int*)#1},void> @ 00103110 */

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



/* Function: ~unique_ptr @ 0010313e */

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



/* Function: operator* @ 001031a2 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get(this);
  return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 001031c4 */

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
  int *local_28;
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *local_20;
  
  local_28 = param_1;
  local_20 = this;
  p_Var1 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
            ((tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,&local_28,p_Var1);
  return;
}



/* Function: _M_ptr @ 00103202 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return;
}



/* Function: get_deleter @ 0010321c */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter() */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return;
}



/* Function: get @ 00103236 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return;
}



/* Function: forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 00103250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::{lambda(int*)#1} const& std::forward<test_cpp_smart_ptr()::{lambda(int*)#1}
   const&>(std::remove_reference<test_cpp_smart_ptr()::{lambda(int*)#1} const&>::type&) */

_lambda_int___1_ * std::forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>(type *param_1)

{
  return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,true> @ 0010325e */

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
  _Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  _Tuple_impl<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,void>
            ((_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,ppiVar2,p_Var1);
  return;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 001032ac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}> >::type&
   std::get<0ul, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::tuple<int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

type * std::get<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>
                             ((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 001032c6 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get<1ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 001032e0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,void> @ 001032fe */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl<int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&, void>(int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
_Tuple_impl<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,void>
          (_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int **param_1,
          _lambda_int___1_ *param_2)

{
  int **ppiVar1;
  
  forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  _Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl((_lambda_int___1_ *)this);
  ppiVar1 = forward<int*&>((type *)param_1);
  _Head_base<0ul,int*,false>::_Head_base<int*&>((_Head_base<0ul,int*,false> *)this,ppiVar1);
  return;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00103353 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<0ul,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

int ** std::__get_helper<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0010336d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}> >::type&
   std::get<1ul, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::tuple<int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

type * std::get<1ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(tuple *param_1)

{
  _lambda_int___1_ *p_Var1;
  
  p_Var1 = __get_helper<1ul,test_cpp_smart_ptr()::_lambda(int*)_1_>((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00103387 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}> >::type const&
   std::get<0ul, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::tuple<int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

type * std::get<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>
                             ((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _Tuple_impl @ 001033a2 */

/* std::_Tuple_impl<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl(test_cpp_smart_ptr()::{lambda(int*)#1}
   const&) */

void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl
               (_lambda_int___1_ *param_1)

{
  _Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
  return;
}



/* Function: _M_head @ 001033c8 */

/* std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 001033e2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::{lambda(int*)#1}& std::__get_helper<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

_lambda_int___1_ *
std::__get_helper<1ul,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  _lambda_int___1_ *p_Var1;
  
  p_Var1 = (_lambda_int___1_ *)
           _Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return p_Var1;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 001033fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

int ** std::__get_helper<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Head_base @ 00103416 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::{lambda(int*)#1},
   true>::_Head_base(test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
               (_lambda_int___1_ *param_1)

{
  return;
}



/* Function: _M_head @ 00103425 */

/* std::_Tuple_impl<1ul, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 0010343f */

/* std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00103459 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::{lambda(int*)#1}, true>::_M_head(std::_Head_base<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}, true>&) */

_Head_base *
std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 00103467 */

/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 001034bd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* Function: name @ 001034d6 */

/* std::type_info::name() const */

long __thiscall std::type_info::name(type_info *this)

{
  long lVar1;
  
  if (**(char **)(this + 8) == '*') {
    lVar1 = *(long *)(this + 8) + 1;
  }
  else {
    lVar1 = *(long *)(this + 8);
  }
  return lVar1;
}



/* Function: operator== @ 0010350a */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

undefined8 __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(long *)(this + 8) == *(long *)(param_1 + 8)) {
LAB_00103561:
    uVar2 = 1;
  }
  else {
    if (**(char **)(this + 8) != '*') {
      iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
      if (iVar1 == 0) goto LAB_00103561;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: SimpleClass @ 00103570 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}



/* Function: getValue @ 001035b8 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return *(undefined4 *)this;
}



/* Function: setValue @ 001035cc */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
  *(int *)this = param_1;
  return;
}



/* Function: compute @ 001035e8 */

/* SimpleClass::compute(int) const */

int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return (int)sVar2 + iVar1 * param_1;
}



/* Function: getClassID @ 00103620 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00103630 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,ulong param_1)

{
  void *pvVar1;
  ulong local_10;
  
  *(ulong *)(this + 8) = param_1;
  if (param_1 < 0x1fffffffffffffff) {
    pvVar1 = operator_new__(param_1 << 2);
    *(void **)this = pvVar1;
    for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
LAB_00103688:
      *(int *)(local_10 * 4 + *(long *)this) = (int)local_10 * 10;
    }
    instance_count = instance_count + 1;
    return;
  }
  __cxa_throw_bad_array_new_length();
  goto LAB_00103688;
}



/* Function: ~LifecycleClass @ 001036d0 */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (*(long *)this != 0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: getData @ 0010370e */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < *(ulong *)(this + 8)) {
    uVar1 = *(undefined4 *)(param_1 * 4 + *(long *)this);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: getInstanceCount @ 00103749 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: virtual_func @ 0010375a */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 00103772 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_0010502d;
}



/* Function: ~Base @ 00103788 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00108b50;
  return;
}



/* Function: ~Base @ 001037a6 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this,8);
  return;
}



/* Function: Base @ 001037d6 */

/* Base::Base() */

void __thiscall Base::Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00108b50;
  return;
}



/* Function: Derived @ 001037f4 */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00108b20;
  *(int *)(this + 8) = param_1;
  return;
}



/* Function: virtual_func @ 0010382e */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 8) * param_1;
}



/* Function: getName @ 0010384a */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 00103860 */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00103874 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00108af8;
  return;
}



/* Function: ~BaseA @ 00103892 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this,0x10);
  return;
}



/* Function: funcB @ 001038c2 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 001038d6 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00108ad0;
  return;
}



/* Function: ~BaseB @ 001038f4 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this,0x10);
  return;
}



/* Function: funcA @ 00103924 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 00103938 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 0010394b */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB();
  return;
}



/* Function: BaseA @ 00103956 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00108af8;
  return;
}



/* Function: BaseB @ 00103974 */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00108ad0;
  return;
}



/* Function: MultiDerived @ 00103992 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 0x10));
  *(undefined ***)this = &PTR_funcA_00108a78;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00108aa8;
  return;
}



/* Function: func @ 001039de */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 001039f2 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00108a50;
  return;
}



/* Function: ~VirtualBase @ 00103a10 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this,0x10);
  return;
}



/* Function: func @ 00103a40 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00103a6e */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 00103a7c */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00103aaa */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 00103ab8 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 00103ae6 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 00103af3 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -0x10);
  return;
}



/* Function: VirtualBase @ 00103afe */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00108a50;
  return;
}



/* Function: MiddleA @ 00103b1c */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
  undefined8 *in_RSI;
  
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
  return;
}



/* Function: ~MiddleA @ 00103b60 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  undefined8 *in_RSI;
  
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
  return;
}



/* Function: MiddleB @ 00103ba4 */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
  undefined8 *in_RSI;
  
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
  return;
}



/* Function: ~MiddleB @ 00103be8 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  undefined8 *in_RSI;
  
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
  return;
}



/* Function: DiamondDerived @ 00103c2c */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x20));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 0x10));
  *(undefined8 *)this = 0x1088b8;
  *(undefined8 *)(this + 0x20) = 0x108920;
  *(undefined8 *)(this + 0x10) = 0x1088e8;
  return;
}



/* Function: Point @ 00103cae */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}



/* Function: operator+ @ 00103cd6 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point::operator+(Point *this,Point *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  Point((Point *)&local_18,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
       );
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



/* Function: operator== @ 00103d40 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point::operator==(Point *this,Point *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)this == *(int *)param_1) && (*(int *)(this + 4) == *(int *)(param_1 + 4))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: operator++ @ 00103d80 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * __thiscall Point::operator++(Point *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return this;
}



/* Function: template_max<int> @ 00103db2 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00103dd2 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_swap<int> @ 00103e08 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00103e3a */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 00103e54 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x28) < 10) {
    iVar1 = *(int *)(this + 0x28);
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}



/* Function: get @ 00103e90 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return uVar1;
}



/* Function: getSize @ 00103ec8 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00103ede */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00103ef8 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
  int iVar1;
  
  if (*(int *)(this + 0x50) < 10) {
    iVar1 = *(int *)(this + 0x50);
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}



/* Function: get @ 00103f3a */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(this + (long)param_1 * 8);
  }
  return uVar1;
}



/* Function: getSize @ 00103f7c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: __uniq_ptr_data @ 00103f92 */

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



/* Function: unique_ptr @ 00103fbc */

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



/* Function: getType @ 00103fe6 */

/* RTTIBase::getType() const */

undefined8 RTTIBase::getType(void)

{
  return 0;
}



/* Function: getType @ 00103ffa */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: derivedA_data @ 0010400e */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA::derivedA_data(void)

{
  return 100;
}



/* Function: getType @ 00104022 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: derivedB_data @ 00104036 */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB::derivedB_data(void)

{
  return 200;
}



/* Function: RTTIBase @ 0010404a */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00108888;
  return;
}



/* Function: ~RTTIBase @ 00104068 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00108888;
  return;
}



/* Function: ~RTTIBase @ 00104086 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this,8);
  return;
}



/* Function: RTTIDerivedA @ 001040b6 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00108860;
  return;
}



/* Function: RTTIDerivedB @ 001040e4 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00108838;
  return;
}



/* Function: __uniq_ptr_impl @ 00104112 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
  return;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 0010413c */

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



/* Function: ~unique_ptr @ 00104166 */

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



/* Function: operator* @ 001041ce */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
          (unique_ptr<int,std::default_delete<int>> *this)

{
  get(this);
  return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 001041f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
   std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
   std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 00104206 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> >&&) */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0ul,int*,std::default_delete<int>> *this,_Tuple_impl *param_1)

{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}



/* Function: tuple @ 0010423e */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
    */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this,(_Tuple_impl *)param_1);
  return;
}



/* Function: __uniq_ptr_impl @ 00104268 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
   std::default_delete<int> >&&) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
  type *ptVar1;
  undefined8 *puVar2;
  
  ptVar1 = move<std::tuple<int*,std::default_delete<int>>&>((tuple *)param_1);
  tuple<int*,std::default_delete<int>>::tuple
            ((tuple<int*,std::default_delete<int>> *)this,(tuple *)ptVar1);
  puVar2 = (undefined8 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
  *puVar2 = 0;
  return;
}



/* Function: __uniq_ptr_impl @ 001042b2 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
  return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 001042dc */

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



/* Function: ~unique_ptr @ 00104306 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  long *plVar1;
  default_delete<int[]> *this_00;
  
  plVar1 = (long *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                             ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  if (*plVar1 != 0) {
    this_00 = (default_delete<int[]> *)get_deleter(this);
    default_delete<int[]>::operator()(this_00,(int *)*plVar1);
  }
  *plVar1 = 0;
  return;
}



/* Function: operator[] @ 00104362 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
          (unique_ptr<int[],std::default_delete<int[]>> *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = get(this);
  return param_1 * 4 + lVar1;
}



/* Function: __uniq_ptr_impl @ 0010439a */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
  undefined8 *puVar1;
  
  tuple<int*,std::default_delete<int>>::tuple<true,true>
            ((tuple<int*,std::default_delete<int>> *)this);
  puVar1 = (undefined8 *)_M_ptr(this);
  *puVar1 = param_1;
  return;
}



/* Function: _M_ptr @ 001043d6 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<0ul,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: get_deleter @ 001043f4 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr<int,std::default_delete<int>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return;
}



/* Function: move<int*&> @ 00104412 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
  return (type *)param_1;
}



/* Function: operator() @ 00104424 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}



/* Function: get @ 00104452 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00104470 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
   std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
   >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 00104482 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1ul,
   std::default_delete<int> >&&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
  return;
}



/* Function: __uniq_ptr_impl @ 00104496 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
  undefined8 *puVar1;
  
  tuple<int*,std::default_delete<int[]>>::tuple<true,true>
            ((tuple<int*,std::default_delete<int[]>> *)this);
  puVar1 = (undefined8 *)_M_ptr(this);
  *puVar1 = param_1;
  return;
}



/* Function: _M_ptr @ 001044d2 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: get_deleter @ 001044f0 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return;
}



/* Function: operator() @ 0010450e */

/* std::enable_if<std::is_convertible<int (*) [], int (*) []>::value, void>::type
   std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: get @ 00104538 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return;
}



/* Function: tuple<true,true> @ 00104556 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
          (tuple<int*,std::default_delete<int>> *this)

{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this);
  return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104575 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 00104594 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<1ul,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 001045b2 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0ul,int*,std::default_delete<int>>((tuple *)this);
  return *(undefined8 *)ptVar1;
}



/* Function: tuple<true,true> @ 001045d4 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
          (tuple<int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<0ul,int*,std::default_delete<int[]>> *)this);
  return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 001045f3 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 00104612 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<1ul,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 00104630 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
  return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl @ 00104652 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0ul,int*,std::default_delete<int>> *this)

{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
  return;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 0010467d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 0010469b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1ul,int*,std::default_delete<int>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1ul,std::default_delete<int>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 001046b9 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
   int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _Tuple_impl @ 001046d8 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<0ul,int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
  return;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104703 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
   std::default_delete<int []> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 00104721 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1ul,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 0010473f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
   std::get<0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
   const&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: forward<int*&> @ 0010475d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* Function: _Tuple_impl @ 00104770 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)

{
  _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
  return;
}



/* Function: _Head_base @ 00104790 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base<0ul,int*,false> *this)

{
  *(undefined8 *)this = 0;
  return;
}



/* Function: _M_head @ 001047aa */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 001047c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
   std::default_delete<int>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 001047e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00104804 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)

{
  _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
  return;
}



/* Function: _M_head @ 00104823 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 00104841 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
   []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 0010485f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
   int*, std::default_delete<int []> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Head_base<int*&> @ 0010487e */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base<int*&>(_Head_base<0ul,int*,false> *this,int **param_1)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}



/* Function: _Head_base @ 001048ac */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)

{
  return;
}



/* Function: _M_head @ 001048bb */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 001048cd */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_M_head(std::_Tuple_impl<1ul,
   std::default_delete<int> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 001048eb */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _Head_base @ 0010490a */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)

{
  return;
}



/* Function: _M_head @ 00104919 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00104937 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int []> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00104955 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(std::_Head_base<1ul,
   std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00104967 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00104979 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
   std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: ~RTTIDerivedB @ 0010498c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedB_00108838;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedB @ 001049ba */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 001049ea */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedA_00108860;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedA @ 00104a18 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 00104a48 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  *(undefined8 *)this = 0x1088b8;
  *(undefined8 *)(this + 0x20) = 0x108920;
  *(undefined8 *)(this + 0x10) = 0x1088e8;
  MiddleB::~MiddleB((MiddleB *)(this + 0x10));
  MiddleA::~MiddleA((MiddleA *)this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 0x20));
  return;
}



/* Function: ~DiamondDerived @ 00104aca */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -0x10);
  return;
}



/* Function: ~DiamondDerived @ 00104ad7 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~DiamondDerived @ 00104ae8 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00104b17 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -0x10);
  return;
}



/* Function: ~DiamondDerived @ 00104b21 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~MultiDerived @ 00104b2e */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  *(undefined ***)this = &PTR_funcA_00108a78;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00108aa8;
  BaseB::~BaseB((BaseB *)(this + 0x10));
  BaseA::~BaseA((BaseA *)this);
  return;
}



/* Function: ~MultiDerived @ 00104b7a */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -0x10);
  return;
}



/* Function: ~MultiDerived @ 00104b84 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 00104bb3 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -0x10);
  return;
}



/* Function: ~Derived @ 00104bbe */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  *(undefined ***)this = &PTR_virtual_func_00108b20;
  Base::~Base((Base *)this);
  return;
}



/* Function: ~Derived @ 00104bec */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
  operator_delete(this,0x10);
  return;
}



/* Function: _fini @ 00104c1c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 203 */
