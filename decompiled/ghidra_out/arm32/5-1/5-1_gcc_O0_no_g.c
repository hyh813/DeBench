/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/5-1/5-1_gcc_O0_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 00010a5c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: FUN_00010a68 @ 00010a68 */

void FUN_00010a68(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00010bcc */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010c10 */

/* WARNING: Removing unreachable block (ram,0x00010c24) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010c34 */

/* WARNING: Removing unreachable block (ram,0x00010c44) */
/* WARNING: Removing unreachable block (ram,0x00010c4c) */
/* WARNING: Removing unreachable block (ram,0x00010c50) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010c60 */

/* WARNING: Removing unreachable block (ram,0x00010c7c) */
/* WARNING: Removing unreachable block (ram,0x00010c84) */
/* WARNING: Removing unreachable block (ram,0x00010c88) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010c98 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: test_cpp_member_func @ 00010cc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass aSStack_30 [36];
  int local_c;
  
  local_c = 0;
  SimpleClass::SimpleClass(aSStack_30,5,"Test");
  SimpleClass::setValue(aSStack_30,10);
  iVar1 = SimpleClass::getValue(aSStack_30);
  iVar2 = SimpleClass::compute(aSStack_30,3);
  iVar3 = SimpleClass::getClassID();
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3,local_c,0);
  }
  return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00010d74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LifecycleClass aLStack_14 [8];
  int local_c;
  
  local_c = 0;
  LifecycleClass::LifecycleClass(aLStack_14,5);
  iVar1 = LifecycleClass::getData(aLStack_14,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(aLStack_14);
  iVar3 = LifecycleClass::getInstanceCount();
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3,local_c,0);
  }
  return iVar1 + iVar2 + iVar3 * 1000;
}



/* Function: call_virtual_func @ 00010e48 */

/* call_virtual_func(Base*, int) */

undefined4 call_virtual_func(Base *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)param_1)(param_1,param_2);
  return uVar1;
}



/* Function: test_cpp_virtual_func @ 00010e84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined **local_38;
  int local_34;
  int local_30;
  Base *local_2c;
  Base *local_28;
  int local_24;
  int local_20;
  Derived aDStack_1c [8];
  int local_14;
  
  local_14 = 0;
  local_38 = &PTR_virtual_func_000145f0;
  Derived::Derived(aDStack_1c,3);
  local_34 = Base::virtual_func((Base *)&local_38,5);
  local_30 = Derived::virtual_func(aDStack_1c,5);
  local_2c = (Base *)&local_38;
  local_28 = (Base *)aDStack_1c;
  local_24 = call_virtual_func(local_2c,5);
  local_20 = call_virtual_func(local_28,5);
  iVar2 = local_34 + local_30 + local_24 + local_20;
  Derived::~Derived(aDStack_1c);
  uVar1 = Base::~Base((Base *)&local_38);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1,local_14,0);
  }
  return iVar2;
}



/* Function: test_cpp_multiple_inheritance @ 00010fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  MultiDerived::MultiDerived((MultiDerived *)&local_24);
  local_20 = 100;
  local_18 = 200;
  iVar1 = (*(code *)*local_24)(&local_24);
  iVar2 = (*(code *)*local_1c)(&local_1c);
  uVar3 = MultiDerived::~MultiDerived((MultiDerived *)&local_24);
  if (local_14 == 0) {
    return iVar1 + iVar2 + (uint)(&local_24 != &local_1c);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3,local_14,0);
}



/* Function: test_cpp_diamond_inheritance @ 000110a4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  DiamondDerived aDStack_2c [16];
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0;
  DiamondDerived::DiamondDerived(aDStack_2c);
  local_18 = 0x32;
  iVar1 = (*(code *)*local_1c)(&local_1c);
  local_18 = 100;
  iVar2 = (*(code *)*local_1c)(&local_1c);
  uVar3 = DiamondDerived::~DiamondDerived(aDStack_2c);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3,local_14,0);
  }
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 0001117c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Point aPStack_24 [8];
  Point aPStack_1c [8];
  int local_14;
  int local_10;
  int local_c;
  
  local_c = 0;
  Point::Point(aPStack_24,1,2);
  Point::Point(aPStack_1c,3,4);
  Point::operator+((Point *)&local_14,aPStack_24);
  cVar1 = Point::operator==(aPStack_24,aPStack_1c);
  uVar2 = Point::operator++((Point *)&local_14);
  if (cVar1 == '\0') {
    iVar3 = 10;
  }
  else {
    iVar3 = 0;
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2,local_c,0);
  }
  return iVar3 + local_14 + local_10;
}



/* Function: test_cpp_template_func @ 00011250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  undefined4 extraout_r0;
  int iVar1;
  undefined4 extraout_r1;
  double extraout_d0;
  double extraout_d1;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_c;
  
  local_c = 0;
  local_1c = template_max<int>(3,7);
  template_max<double>(extraout_d0,extraout_d1);
  local_24 = 10;
  local_20 = 0x14;
  local_18 = extraout_r0;
  local_14 = extraout_r1;
  template_swap<int>(&local_24,&local_20);
  iVar1 = __aeabi_d2iz(local_18,local_14);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,local_c,0);
  }
  return iVar1 + local_1c + local_24 + local_20;
}



/* Function: test_cpp_template_class @ 00011324 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_s1;
  undefined8 uVar5;
  Container<int> aCStack_9c [44];
  Container<double> aCStack_70 [92];
  int local_14;
  
  local_14 = 0;
  Container<int>::Container(aCStack_9c);
  Container<int>::push(aCStack_9c,10);
  Container<int>::push(aCStack_9c,0x14);
  Container<int>::push(aCStack_9c,0x1e);
  iVar1 = Container<int>::get(aCStack_9c,0);
  iVar2 = Container<int>::getSize(aCStack_9c);
  uVar4 = Container<double>::Container(aCStack_70);
  Container<double>::push((double)CONCAT44(extraout_s1,uVar4));
  uVar5 = Container<double>::get(aCStack_70,0);
  iVar3 = __aeabi_d2iz((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3,local_14,0);
  }
  return iVar1 + iVar2 + iVar3;
}



/* Function: operator() @ 0001143c */

/* test_cpp_lambda()::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  **(int **)(this + 4) = **(int **)(this + 4) + 5;
  return *(int *)this * param_1 + **(int **)(this + 4);
}



/* Function: test_cpp_lambda @ 0001149c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  int local_c;
  
  local_c = 0;
  local_20 = 10;
  local_24 = 0x14;
  local_14 = 10;
  local_10 = &local_24;
  local_1c = test_cpp_lambda()::{lambda(int)#1}::operator()((_lambda_int__1_ *)&local_14,3);
  local_18 = 0x1e;
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_1c,local_c,0);
  }
  return local_1c + 0x1e;
}



/* Function: test_cpp_exception @ 0001152c */

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



/* Function: operator() @ 0001169c */

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



/* Function: test_cpp_smart_ptr @ 000116e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
  int *piVar1;
  undefined4 *puVar2;
  type *ptVar3;
  undefined4 uVar4;
  int iVar5;
  _lambda_int___1_ a_Stack_34 [4];
  unique_ptr<int,std::default_delete<int>> auStack_30 [4];
  unique_ptr<int,std::default_delete<int>> auStack_2c [4];
  unique_ptr<int[],std::default_delete<int[]>> auStack_28 [4];
  unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> auStack_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_14 = 0;
  piVar1 = operator_new(4);
  *piVar1 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
            (auStack_30,piVar1);
  puVar2 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_30);
  *puVar2 = 200;
  ptVar3 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)auStack_30);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_2c,(unique_ptr *)ptVar3);
  piVar1 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_2c);
  local_20 = *piVar1;
  piVar1 = operator_new__(0x14);
  *piVar1 = 1;
  piVar1[1] = 2;
  piVar1[2] = 3;
  piVar1[3] = 4;
  piVar1[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr<int*,std::default_delete<int[]>,void,bool>(auStack_28,piVar1);
  piVar1 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](auStack_28,2);
  local_1c = *piVar1;
  piVar1 = operator_new(4);
  *piVar1 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>(auStack_24,piVar1,a_Stack_34);
  piVar1 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*(auStack_24)
  ;
  local_18 = *piVar1;
  iVar5 = local_20 + local_1c + local_18;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr(auStack_24);
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(auStack_28);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_2c);
  uVar4 = std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_30);
  if (local_14 != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4,local_14,0);
  }
  return iVar5;
}



/* Function: test_cpp_rtti @ 000118c4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
  RTTIDerivedA *this;
  RTTIDerivedB *this_00;
  int iVar1;
  char *__s;
  size_t sVar2;
  RTTIDerivedA *extraout_r3;
  int local_24;
  
  this = operator_new(4);
  *(undefined4 *)this = 0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(4);
  *(undefined4 *)this_00 = 0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  local_24 = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
LAB_00011954:
    local_24 = 10;
  }
  else {
    iVar1 = std::type_info::operator==
                      (*(type_info **)(*(int *)this + -4),(type_info *)&RTTIDerivedA::typeinfo);
    if (iVar1 != 0) goto LAB_00011954;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
LAB_00011994:
    local_24 = local_24 + 0x14;
  }
  else {
    iVar1 = std::type_info::operator==
                      (*(type_info **)(*(int *)this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
    if (iVar1 != 0) goto LAB_00011994;
  }
  if (this == (RTTIDerivedA *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (iVar1 != 0) {
    iVar1 = RTTIDerivedA::derivedA_data();
    local_24 = local_24 + iVar1;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (iVar1 != 0) {
    iVar1 = RTTIDerivedB::derivedB_data();
    local_24 = local_24 + iVar1;
  }
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
    this = extraout_r3;
  }
  else {
    __s = (char *)std::type_info::name(*(type_info **)(*(int *)this + -4));
    sVar2 = strlen(__s);
    local_24 = sVar2 + local_24;
    if (this == (RTTIDerivedA *)0x0) goto LAB_00011aa0;
  }
  (**(code **)(*(int *)this + 4))(this);
LAB_00011aa0:
  if (this_00 != (RTTIDerivedB *)0x0) {
    (**(code **)(*(int *)this_00 + 4))(this_00);
  }
  return local_24;
}



/* Function: test_cpp_oo_features @ 00011adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
  undefined4 uVar1;
  int iVar2;
  
  puts(&DAT_0001426c);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00014290,uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_000142b0,uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_000142cc,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_000142e8,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_00014304,uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_00014324,uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_00014340,uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_0001435c,uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00014378,uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00014394,uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_000143b4,uVar1);
  uVar1 = test_cpp_rtti();
  iVar2 = printf(&DAT_000143d4,uVar1);
  return iVar2;
}



/* Function: main @ 00011c18 */

undefined4 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 00011c30 */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr()::{lambda(int*)#1}, true,
   false>::__uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1} const&>(int*,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda(int*)_1_,true,false> * __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
__uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
          (__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda(int*)_1_,true,false> *this,int *param_1
          ,_lambda_int___1_ *param_2)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  __uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,param_1,param_2);
  return this;
}



/* Function: unique_ptr<test_cpp_smart_ptr()::{lambda(int*)#1},void> @ 00011c6c */

/* std::unique_ptr<int,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr<test_cpp_smart_ptr()::{lambda(int*)#1},
   void>(int*, test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> * __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int *param_1,
          _lambda_int___1_ *param_2)

{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
  __uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
            ((__uniq_ptr_data<int,test_cpp_smart_ptr()::_lambda(int*)_1_,true,false> *)this,param_1,
             param_2);
  return this;
}



/* Function: ~unique_ptr @ 00011ca8 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr() */

unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> * __thiscall
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
  return this;
}



/* Function: operator* @ 00011d1c */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::TEMPNAMEPLACEHOLDERVALUE() const */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  undefined4 uVar1;
  
  uVar1 = get(this);
  return uVar1;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 00011d4c */

/* std::__uniq_ptr_impl<int,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::__uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}
   const&>(int*, test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> * __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
__uniq_ptr_impl<test_cpp_smart_ptr()::_lambda(int*)_1_const&>
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int *param_1,
          _lambda_int___1_ *param_2)

{
  _lambda_int___1_ *p_Var1;
  int *local_18;
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *local_14;
  
  local_18 = param_1;
  local_14 = this;
  p_Var1 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
            ((tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,&local_18,p_Var1);
  return local_14;
}



/* Function: _M_ptr @ 00011d94 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() */

type * __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return ptVar1;
}



/* Function: get_deleter @ 00011dc0 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter() */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
                    ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return uVar1;
}



/* Function: get @ 00011dec */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get() const */

undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
                    ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return uVar1;
}



/* Function: forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 00011e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::{lambda(int*)#1} const& std::forward<test_cpp_smart_ptr()::{lambda(int*)#1}
   const&>(std::remove_reference<test_cpp_smart_ptr()::{lambda(int*)#1} const&>::type&) */

_lambda_int___1_ * std::forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>(type *param_1)

{
  return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,true> @ 00011e3c */

/* std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple<int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&, true>(int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> * __thiscall
std::tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
          (tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int **param_1,
          _lambda_int___1_ *param_2)

{
  int **ppiVar1;
  _lambda_int___1_ *p_Var2;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  p_Var2 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  _Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  _Tuple_impl<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,void>
            ((_Tuple_impl<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,ppiVar1,p_Var2);
  return this;
}



/* Function: get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00011e90 */

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



/* Function: _M_deleter @ 00011ebc */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter() */

type * __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  type *ptVar1;
  
  ptVar1 = get<1u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return ptVar1;
}



/* Function: _M_ptr @ 00011ee8 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,void> @ 00011f18 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl<int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&, void>(int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

_Tuple_impl<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> * __thiscall
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
  return this;
}



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00011f74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<0u,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

int ** std::__get_helper<0u,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00011f9c */

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



/* Function: get<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00011fc4 */

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



/* Function: _Tuple_impl @ 00011ff0 */

/* std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl(test_cpp_smart_ptr()::{lambda(int*)#1}
   const&) */

_lambda_int___1_ *
std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl(_lambda_int___1_ *param_1)

{
  _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
  return param_1;
}



/* Function: _M_head @ 00012020 */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0u,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

undefined4
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: __get_helper<1u,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0001204c */

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



/* Function: __get_helper<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00012074 */

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



/* Function: _Head_base @ 0001209c */

/* std::_Head_base<1u, test_cpp_smart_ptr()::{lambda(int*)#1},
   true>::_Head_base(test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

_lambda_int___1_ *
std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
          (_lambda_int___1_ *param_1)

{
  return param_1;
}



/* Function: _M_head @ 000120c4 */

/* std::_Tuple_impl<1u, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

undefined4
std::_Tuple_impl<1u,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head((_Head_base *)param_1)
  ;
  return uVar1;
}



/* Function: _M_head @ 000120ec */

/* std::_Tuple_impl<0u, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0u,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

undefined4
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: _M_head @ 00012118 */

/* std::_Head_base<1u, test_cpp_smart_ptr()::{lambda(int*)#1}, true>::_M_head(std::_Head_base<1u,
   test_cpp_smart_ptr()::{lambda(int*)#1}, true>&) */

_Head_base *
std::_Head_base<1u,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 0001213c */

/* __static_initialization_and_destruction_0(int, int) */

int __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    param_1 = __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
  }
  return param_1;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 000121a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* Function: name @ 000121bc */

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



/* Function: SimpleClass @ 00012208 */

/* SimpleClass::SimpleClass(int, char const*) */

SimpleClass * __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return this;
}



/* Function: getValue @ 00012260 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return *(undefined4 *)this;
}



/* Function: setValue @ 00012288 */

/* SimpleClass::setValue(int) */

SimpleClass * __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
  *(int *)this = param_1;
  return this;
}



/* Function: compute @ 000122b8 */

/* SimpleClass::compute(int) const */

int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  sVar1 = strlen((char *)(this + 4));
  return param_1 * iVar2 + sVar1;
}



/* Function: getClassID @ 00012304 */

/* SimpleClass::getClassID() */

undefined4 SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00012324 */

/* LifecycleClass::LifecycleClass(unsigned int) */

LifecycleClass * __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)

{
  void *pvVar1;
  uint local_c;
  
  *(uint *)(this + 4) = param_1;
  if (param_1 < 0x1fffffff) {
    pvVar1 = operator_new__(param_1 << 2);
    *(void **)this = pvVar1;
    for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
LAB_0001237c:
      *(uint *)(*(int *)this + local_c * 4) = local_c * 10;
    }
    instance_count = instance_count + 1;
    return this;
  }
  __cxa_throw_bad_array_new_length();
  goto LAB_0001237c;
}



/* Function: ~LifecycleClass @ 000123f4 */

/* LifecycleClass::~LifecycleClass() */

LifecycleClass * __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (*(int *)this != 0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return this;
}



/* Function: getData @ 0001244c */

/* LifecycleClass::getData(unsigned int) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < *(uint *)(this + 4)) {
    uVar1 = *(undefined4 *)(*(int *)this + param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: getInstanceCount @ 000124a4 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: virtual_func @ 000124c8 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 000124f4 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_0001425c;
}



/* Function: ~Base @ 0001251c */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_000145f0;
  return this;
}



/* Function: ~Base @ 00012550 */

/* Base::~Base() */

Base * __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this,4);
  return this;
}



/* Function: Base @ 00012584 */

/* Base::Base() */

Base * __thiscall Base::Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_000145f0;
  return this;
}



/* Function: Derived @ 000125b8 */

/* Derived::Derived(int) */

Derived * __thiscall Derived::Derived(Derived *this,int param_1)

{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_000145d8;
  *(int *)(this + 4) = param_1;
  return this;
}



/* Function: virtual_func @ 00012604 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 00012638 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 00012660 */

/* BaseA::funcA() */

undefined4 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 00012684 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA::~BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_000145c4;
  return this;
}



/* Function: ~BaseA @ 000126b8 */

/* BaseA::~BaseA() */

BaseA * __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this,8);
  return this;
}



/* Function: funcB @ 000126ec */

/* BaseB::funcB() */

undefined4 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 00012710 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB::~BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_000145b0;
  return this;
}



/* Function: ~BaseB @ 00012744 */

/* BaseB::~BaseB() */

BaseB * __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this,8);
  return this;
}



/* Function: funcA @ 00012778 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 0001279c */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 000127c0 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB();
  return;
}



/* Function: BaseA @ 000127c8 */

/* BaseA::BaseA() */

BaseA * __thiscall BaseA::BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_000145c4;
  return this;
}



/* Function: BaseB @ 000127fc */

/* BaseB::BaseB() */

BaseB * __thiscall BaseB::BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_000145b0;
  return this;
}



/* Function: MultiDerived @ 00012830 */

/* MultiDerived::MultiDerived() */

MultiDerived * __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 8));
  *(undefined ***)this = &PTR_funcA_00014584;
  *(undefined ***)(this + 8) = &PTR_funcB_0001459c;
  return this;
}



/* Function: func @ 0001288c */

/* VirtualBase::func() */

undefined4 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 000128b0 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00014570;
  return this;
}



/* Function: ~VirtualBase @ 000128e4 */

/* VirtualBase::~VirtualBase() */

VirtualBase * __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this,8);
  return this;
}



/* Function: func @ 00012918 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 0001295c */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00012970 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 000129b4 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 000129c8 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00012a0c */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}



/* Function: func @ 00012a20 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -8);
  return;
}



/* Function: VirtualBase @ 00012a28 */

/* VirtualBase::VirtualBase() */

VirtualBase * __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00014570;
  return this;
}



/* Function: MiddleA @ 00012a5c */

/* MiddleA::MiddleA() */

MiddleA * __thiscall MiddleA::MiddleA(MiddleA *this)

{
  undefined4 *in_r1;
  
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return this;
}



/* Function: ~MiddleA @ 00012abc */

/* MiddleA::~MiddleA() */

MiddleA * __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  undefined4 *in_r1;
  
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return this;
}



/* Function: MiddleB @ 00012b1c */

/* MiddleB::MiddleB() */

MiddleB * __thiscall MiddleB::MiddleB(MiddleB *this)

{
  undefined4 *in_r1;
  
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return this;
}



/* Function: ~MiddleB @ 00012b7c */

/* MiddleB::~MiddleB() */

MiddleB * __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  undefined4 *in_r1;
  
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return this;
}



/* Function: DiamondDerived @ 00012bdc */

/* DiamondDerived::DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 8));
  *(undefined ***)this = &PTR_func_000144a4;
  *(undefined ***)(this + 0x10) = &PTR_func_000144d8;
  *(undefined ***)(this + 8) = &PTR_func_000144bc;
  return this;
}



/* Function: Point @ 00012c74 */

/* Point::Point(int, int) */

Point * __thiscall Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return this;
}



/* Function: operator+ @ 00012cb8 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

Point * __thiscall Point::operator+(Point *this,Point *param_1)

{
  int *in_r2;
  
  Point(this,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
  return this;
}



/* Function: operator== @ 00012d10 */

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



/* Function: operator++ @ 00012d70 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * __thiscall Point::operator++(Point *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return this;
}



/* Function: template_max<int> @ 00012dbc */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00012dfc */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00012e28 */
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



/* Function: template_swap<int> @ 00012e5c */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 00012ea8 */

/* Container<int>::Container() */

Container<int> * __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}



/* Function: push @ 00012ed8 */

/* Container<int>::push(int) */

Container<int> * __thiscall Container<int>::push(Container<int> *this,int param_1)

{
  Container<int> *pCVar1;
  int iVar2;
  
  pCVar1 = this;
  if (*(int *)(this + 0x28) < 10) {
    iVar2 = *(int *)(this + 0x28);
    pCVar1 = (Container<int> *)(iVar2 + 1);
    *(Container<int> **)(this + 0x28) = pCVar1;
    *(int *)(this + iVar2 * 4) = param_1;
  }
  return pCVar1;
}



/* Function: get @ 00012f2c */

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



/* Function: getSize @ 00012f84 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 00012fac */

/* Container<double>::Container() */

Container<double> * __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return this;
}



/* Function: push @ 00012fdc */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
  int in_r0;
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  
  if (*(int *)(in_r0 + 0x50) < 10) {
    iVar1 = *(int *)(in_r0 + 0x50);
    *(int *)(in_r0 + 0x50) = iVar1 + 1;
    puVar2 = (undefined4 *)(in_r0 + iVar1 * 8);
    *puVar2 = in_r2;
    puVar2[1] = in_r3;
  }
  return SUB84(param_1,0);
}



/* Function: get @ 00013040 */

/* Container<double>::get(int) const */

undefined8 __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(this + param_1 * 8);
    uVar2 = *(undefined4 *)(this + param_1 * 8 + 4);
  }
  return CONCAT44(uVar2,uVar1);
}



/* Function: getSize @ 000130a8 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: __uniq_ptr_data @ 000130d0 */

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



/* Function: unique_ptr @ 00013108 */

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



/* Function: getType @ 00013140 */

/* RTTIBase::getType() const */

undefined4 RTTIBase::getType(void)

{
  return 0;
}



/* Function: getType @ 00013164 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: derivedA_data @ 00013188 */

/* RTTIDerivedA::derivedA_data() const */

undefined4 RTTIDerivedA::derivedA_data(void)

{
  return 100;
}



/* Function: getType @ 000131ac */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: derivedB_data @ 000131d0 */

/* RTTIDerivedB::derivedB_data() const */

undefined4 RTTIDerivedB::derivedB_data(void)

{
  return 200;
}



/* Function: RTTIBase @ 000131f4 */

/* RTTIBase::RTTIBase() */

RTTIBase * __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_0001448c;
  return this;
}



/* Function: ~RTTIBase @ 00013228 */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_0001448c;
  return this;
}



/* Function: ~RTTIBase @ 0001325c */

/* RTTIBase::~RTTIBase() */

RTTIBase * __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this,4);
  return this;
}



/* Function: RTTIDerivedA @ 00013290 */

/* RTTIDerivedA::RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00014478;
  return this;
}



/* Function: RTTIDerivedB @ 000132cc */

/* RTTIDerivedB::RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00014464;
  return this;
}



/* Function: __uniq_ptr_impl @ 00013308 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data<int,std::default_delete<int>,true,true> * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
  return this;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00013340 */

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



/* Function: ~unique_ptr @ 00013374 */

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



/* Function: operator* @ 000133e8 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
          (unique_ptr<int,std::default_delete<int>> *this)

{
  undefined4 uVar1;
  
  uVar1 = get(this);
  return uVar1;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00013418 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
   std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
   std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 0001343c */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&&) */

_Tuple_impl<0u,int*,std::default_delete<int>> * __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0u,int*,std::default_delete<int>> *this,_Tuple_impl *param_1)

{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined4 *)this = *(undefined4 *)param_1;
  return this;
}



/* Function: tuple @ 0001347c */

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



/* Function: __uniq_ptr_impl @ 000134b4 */

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



/* Function: __uniq_ptr_impl @ 0001350c */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

__uniq_ptr_data<int,std::default_delete<int[]>,true,true> * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
  return this;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00013544 */

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



/* Function: ~unique_ptr @ 00013578 */

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



/* Function: operator[] @ 000135e4 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned int) const */

int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
          (unique_ptr<int[],std::default_delete<int[]>> *this,uint param_1)

{
  int iVar1;
  
  iVar1 = get(this);
  return iVar1 + param_1 * 4;
}



/* Function: __uniq_ptr_impl @ 00013624 */

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



/* Function: _M_ptr @ 00013668 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

type * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int>>((tuple *)this);
  return ptVar1;
}



/* Function: get_deleter @ 00013694 */

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



/* Function: move<int*&> @ 000136c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
  return (type *)param_1;
}



/* Function: operator() @ 000136e4 */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}



/* Function: get @ 0001371c */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
  undefined4 uVar1;
  
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return uVar1;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00013748 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
   std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
   >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 0001376c */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1u,
   std::default_delete<int> >&&) */

_Tuple_impl * std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
  return param_1;
}



/* Function: __uniq_ptr_impl @ 00013794 */

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



/* Function: _M_ptr @ 000137d8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

type * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return ptVar1;
}



/* Function: get_deleter @ 00013804 */

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



/* Function: operator() @ 00013830 */

/* std::enable_if<std::is_convertible<int (*) [], int (*) []>::value, void>::type
   std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: get @ 00013864 */

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



/* Function: tuple<true,true> @ 00013890 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

tuple<int*,std::default_delete<int>> * __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
          (tuple<int*,std::default_delete<int>> *this)

{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int>> *)this);
  return this;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 000138bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type& std::get<0u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 000138e8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

type * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<1u,int*,std::default_delete<int>>((tuple *)this);
  return ptVar1;
}



/* Function: _M_ptr @ 00013914 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: tuple<true,true> @ 00013944 */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

tuple<int*,std::default_delete<int[]>> * __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
          (tuple<int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<0u,int*,std::default_delete<int[]>> *)this);
  return this;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00013970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 0001399c */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

type * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<1u,int*,std::default_delete<int[]>>((tuple *)this);
  return ptVar1;
}



/* Function: _M_ptr @ 000139c8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0u,int*,std::default_delete<int[]>>((tuple *)this);
  return *(undefined4 *)ptVar1;
}



/* Function: _Tuple_impl @ 000139f8 */

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



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00013a2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1u,int*,std::default_delete<int>> @ 00013a54 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int> > >::type& std::get<1u, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1u,int*,std::default_delete<int>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0u,int*,std::default_delete<int>> @ 00013a7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0u,
   int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0u,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _Tuple_impl @ 00013aa8 */

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



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00013adc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1u,int*,std::default_delete<int[]>> @ 00013b04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1u, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1u, int*,
   std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1u,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0u,int*,std::default_delete<int[]>> @ 00013b2c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0u, std::tuple<int*, std::default_delete<int []> > >::type const& std::get<0u,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> > const&) */

type * std::get<0u,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0u,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: forward<int*&> @ 00013b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* Function: _Tuple_impl @ 00013b7c */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_Tuple_impl() */

_Tuple_impl<1u,std::default_delete<int>> * __thiscall
std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<1u,std::default_delete<int>> *this)

{
  _Head_base<1u,std::default_delete<int>,true>::_Head_base
            ((_Head_base<1u,std::default_delete<int>,true> *)this);
  return this;
}



/* Function: _Head_base @ 00013ba4 */

/* std::_Head_base<0u, int*, false>::_Head_base() */

_Head_base<0u,int*,false> * __thiscall
std::_Head_base<0u,int*,false>::_Head_base(_Head_base<0u,int*,false> *this)

{
  *(undefined4 *)this = 0;
  return this;
}



/* Function: _M_head @ 00013bd4 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> >&) */

undefined4 std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: __get_helper<1u,std::default_delete<int>> @ 00013c00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1u, std::default_delete<int>>(std::_Tuple_impl<1u,
   std::default_delete<int>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int>> @ 00013c28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00013c50 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_Tuple_impl() */

_Tuple_impl<1u,std::default_delete<int[]>> * __thiscall
std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<1u,std::default_delete<int[]>> *this)

{
  _Head_base<1u,std::default_delete<int[]>,true>::_Head_base
            ((_Head_base<1u,std::default_delete<int[]>,true> *)this);
  return this;
}



/* Function: _M_head @ 00013c78 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> >&) */

undefined4 std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: __get_helper<1u,std::default_delete<int[]>> @ 00013ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1u, std::default_delete<int
   []>>(std::_Tuple_impl<1u, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1u,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0u,int*,std::default_delete<int[]>> @ 00013ccc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0u, int*, std::default_delete<int []> >(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

int ** std::__get_helper<0u,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00013cf4 */

/* std::_Head_base<0u, int*, false>::_Head_base<int*&>(int*&) */

_Head_base<0u,int*,false> * __thiscall
std::_Head_base<0u,int*,false>::_Head_base<int*&>(_Head_base<0u,int*,false> *this,int **param_1)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  return this;
}



/* Function: _Head_base @ 00013d30 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_Head_base() */

_Head_base<1u,std::default_delete<int>,true> * __thiscall
std::_Head_base<1u,std::default_delete<int>,true>::_Head_base
          (_Head_base<1u,std::default_delete<int>,true> *this)

{
  return this;
}



/* Function: _M_head @ 00013d54 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false>&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00013d78 */

/* std::_Tuple_impl<1u, std::default_delete<int> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int> >&) */

undefined4 std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: _M_head @ 00013da0 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int> > const&) */

undefined4 std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: _Head_base @ 00013dcc */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_Head_base() */

_Head_base<1u,std::default_delete<int[]>,true> * __thiscall
std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base
          (_Head_base<1u,std::default_delete<int[]>,true> *this)

{
  return this;
}



/* Function: _M_head @ 00013df0 */

/* std::_Tuple_impl<1u, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1u,
   std::default_delete<int []> >&) */

undefined4 std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: _M_head @ 00013e18 */

/* std::_Tuple_impl<0u, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0u, int*,
   std::default_delete<int []> > const&) */

undefined4 std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  undefined4 uVar1;
  
  uVar1 = _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return uVar1;
}



/* Function: _M_head @ 00013e44 */

/* std::_Head_base<1u, std::default_delete<int>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00013e68 */

/* std::_Head_base<0u, int*, false>::_M_head(std::_Head_base<0u, int*, false> const&) */

_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00013e8c */

/* std::_Head_base<1u, std::default_delete<int []>, true>::_M_head(std::_Head_base<1u,
   std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: ~RTTIDerivedB @ 00013eb0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedB_00014464;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return this;
}



/* Function: ~RTTIDerivedB @ 00013eec */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB * __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this,4);
  return this;
}



/* Function: ~RTTIDerivedA @ 00013f20 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedA_00014478;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return this;
}



/* Function: ~RTTIDerivedA @ 00013f5c */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA * __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this,4);
  return this;
}



/* Function: ~DiamondDerived @ 00013f90 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  *(undefined ***)this = &PTR_func_000144a4;
  *(undefined ***)(this + 0x10) = &PTR_func_000144d8;
  *(undefined ***)(this + 8) = &PTR_func_000144bc;
  MiddleB::~MiddleB((MiddleB *)(this + 8));
  MiddleA::~MiddleA((MiddleA *)this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
  return this;
}



/* Function: ~DiamondDerived @ 00014028 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00014030 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~DiamondDerived @ 00014044 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived * __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x18);
  return this;
}



/* Function: ~DiamondDerived @ 00014078 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -8);
  return;
}



/* Function: ~DiamondDerived @ 00014080 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}



/* Function: ~MultiDerived @ 00014094 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  *(undefined ***)this = &PTR_funcA_00014584;
  *(undefined ***)(this + 8) = &PTR_funcB_0001459c;
  BaseB::~BaseB((BaseB *)(this + 8));
  BaseA::~BaseA((BaseA *)this);
  return this;
}



/* Function: ~MultiDerived @ 000140f0 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~MultiDerived @ 000140f8 */

/* MultiDerived::~MultiDerived() */

MultiDerived * __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this,0x10);
  return this;
}



/* Function: ~MultiDerived @ 0001412c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -8);
  return;
}



/* Function: ~Derived @ 00014134 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  *(undefined ***)this = &PTR_virtual_func_000145d8;
  Base::~Base((Base *)this);
  return this;
}



/* Function: ~Derived @ 00014170 */

/* Derived::~Derived() */

Derived * __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
  operator_delete(this,8);
  return this;
}



/* Function: _fini @ 000141a4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 203 */
