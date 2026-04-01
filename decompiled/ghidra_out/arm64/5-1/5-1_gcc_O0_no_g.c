/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/5-1/5-1_gcc_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00101820 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_00101840 @ 00101840 */

void FUN_00101840(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00101a00 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00101a34 */

/* WARNING: Removing unreachable block (ram,0x00101a44) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00101a50 */

/* WARNING: Removing unreachable block (ram,0x00101a68) */
/* WARNING: Removing unreachable block (ram,0x00101a74) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101a80 */

/* WARNING: Removing unreachable block (ram,0x00101aa4) */
/* WARNING: Removing unreachable block (ram,0x00101ab0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00101abc @ 00101abc */

void FUN_00101abc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00101ac0 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: test_cpp_member_func @ 00101b14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SimpleClass::SimpleClass(aSStack_30,5,"Test");
  SimpleClass::setValue(aSStack_30,10);
  iVar1 = SimpleClass::getValue(aSStack_30);
  iVar2 = SimpleClass::compute(aSStack_30,3);
  iVar3 = SimpleClass::getClassID();
  iVar3 = iVar1 + iVar2 + iVar3;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar3,0,local_8 - ___stack_chk_guard);
  }
  return iVar3;
}



/* Function: test_cpp_constructor @ 00101bbc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  LifecycleClass aLStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LifecycleClass::LifecycleClass(aLStack_18,5);
  iVar1 = LifecycleClass::getData(aLStack_18,2);
  iVar2 = LifecycleClass::getInstanceCount();
  LifecycleClass::~LifecycleClass(aLStack_18);
  iVar3 = LifecycleClass::getInstanceCount();
  iVar1 = iVar1 + iVar2 + iVar3 * 1000;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: call_virtual_func @ 00101c70 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
  (*(code *)**(undefined8 **)param_1)(param_1,param_2);
  return;
}



/* Function: test_cpp_virtual_func @ 00101ca0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_30;
  Base *local_28;
  Base *local_20;
  Derived aDStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_30 = &PTR_virtual_func_00116b10;
  Derived::Derived(aDStack_18,3);
  iVar1 = Base::virtual_func((Base *)&local_30,5);
  iVar2 = Derived::virtual_func(aDStack_18,5);
  local_28 = (Base *)&local_30;
  local_20 = (Base *)aDStack_18;
                    /* try { // try from 00101d10 to 00101d23 has its CatchHandler @ 00101d78 */
  iVar3 = call_virtual_func(local_28,5);
  iVar4 = call_virtual_func(local_20,5);
  iVar4 = iVar1 + iVar2 + iVar3 + iVar4;
  Derived::~Derived(aDStack_18);
  Base::~Base((Base *)&local_30);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar4,0,local_8 - ___stack_chk_guard);
  }
  return iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00101da8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
  int iVar1;
  int iVar2;
  undefined8 *local_28;
  undefined4 local_20;
  undefined8 *local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  MultiDerived::MultiDerived((MultiDerived *)&local_28);
  local_20 = 100;
  local_10 = 200;
                    /* try { // try from 00101e04 to 00101e1f has its CatchHandler @ 00101e7c */
  iVar1 = (*(code *)*local_28)(&local_28);
  iVar2 = (*(code *)*local_18)(&local_18);
  iVar1 = iVar1 + iVar2 + (uint)(&local_28 != &local_18);
  MultiDerived::~MultiDerived((MultiDerived *)&local_28);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: test_cpp_diamond_inheritance @ 00101ea4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
  int iVar1;
  int iVar2;
  DiamondDerived aDStack_38 [32];
  undefined8 *local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DiamondDerived::DiamondDerived(aDStack_38);
  local_10 = 0x32;
                    /* try { // try from 00101ef0 to 00101f13 has its CatchHandler @ 00101f50 */
  iVar1 = (*(code *)*local_18)(&local_18);
  local_10 = 100;
  iVar2 = (*(code *)*local_18)(&local_18);
  DiamondDerived::~DiamondDerived(aDStack_38);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1 + iVar2,0,local_8 - ___stack_chk_guard);
  }
  return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00101f78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
  char cVar1;
  int iVar2;
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Point::Point(aPStack_20,1,2);
  Point::Point(aPStack_18,3,4);
  local_10 = Point::operator+(aPStack_20,aPStack_18);
  cVar1 = Point::operator==(aPStack_20,aPStack_18);
  Point::operator++((Point *)&local_10);
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + (int)local_10 + local_10._4_4_;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar2,0,local_8 - ___stack_chk_guard);
  }
  return iVar2;
}



/* Function: test_cpp_template_func @ 00102034 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_14 = template_max<int>(3,7);
  local_10 = template_max<double>(2.5,1.5);
  local_1c = 10;
  local_18 = 0x14;
  template_swap<int>(&local_1c,&local_18);
  iVar1 = (int)local_10 + local_14 + local_1c + local_18;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: test_cpp_template_class @ 001020dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
  int iVar1;
  int iVar2;
  double dVar3;
  Container<int> aCStack_90 [48];
  Container<double> aCStack_60 [88];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Container<int>::Container(aCStack_90);
  Container<int>::push(aCStack_90,10);
  Container<int>::push(aCStack_90,0x14);
  Container<int>::push(aCStack_90,0x1e);
  iVar1 = Container<int>::get(aCStack_90,0);
  iVar2 = Container<int>::getSize(aCStack_90);
  Container<double>::Container(aCStack_60);
  Container<double>::push(aCStack_60,3.14);
  dVar3 = (double)Container<double>::get(aCStack_60,0);
  iVar1 = iVar1 + iVar2 + (int)dVar3;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: operator() @ 001021b0 */

/* test_cpp_lambda()::{lambda(int)#1}::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator()(_lambda_int__1_ *this,int param_1)

{
  **(int **)(this + 8) = **(int **)(this + 8) + 5;
  return *(int *)this * param_1 + **(int **)(this + 8);
}



/* Function: test_cpp_lambda @ 00102200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  undefined4 *local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_24 = 10;
  local_28 = 0x14;
  local_18[0] = 10;
  local_10 = &local_28;
  local_20 = test_cpp_lambda()::{lambda(int)#1}::operator()((_lambda_int__1_ *)local_18,3);
  local_1c = 0x1e;
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_20 + 0x1e,0,local_8 - ___stack_chk_guard);
  }
  return local_20 + 0x1e;
}



/* Function: test_cpp_exception @ 00102290 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 001022bc to 001022bf has its CatchHandler @ 001022c8 */
  __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: operator() @ 001023b4 */

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



/* Function: test_cpp_smart_ptr @ 001023f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  type *ptVar4;
  _lambda_int___1_ a_Stack_38 [4];
  int local_34;
  int local_30;
  int local_2c;
  unique_ptr<int,std::default_delete<int>> auStack_28 [8];
  unique_ptr<int,std::default_delete<int>> auStack_20 [8];
  unique_ptr<int[],std::default_delete<int[]>> auStack_18 [8];
  unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  piVar2 = operator_new(4);
  *piVar2 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
            (auStack_28,piVar2);
  puVar3 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_28);
  *puVar3 = 200;
  ptVar4 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)auStack_28);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_20,(unique_ptr *)ptVar4);
  piVar2 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_20);
  local_34 = *piVar2;
                    /* try { // try from 0010246c to 0010246f has its CatchHandler @ 00102570 */
  piVar2 = operator_new__(0x14);
  *piVar2 = 1;
  piVar2[1] = 2;
  piVar2[2] = 3;
  piVar2[3] = 4;
  piVar2[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr<int*,std::default_delete<int[]>,void,bool>(auStack_18,piVar2);
  piVar2 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](auStack_18,2);
  local_30 = *piVar2;
                    /* try { // try from 001024d4 to 001024d7 has its CatchHandler @ 00102560 */
  piVar2 = operator_new(4);
  *piVar2 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  unique_ptr<test_cpp_smart_ptr()::_lambda(int*)_1_,void>(auStack_10,piVar2,a_Stack_38);
  piVar2 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*(auStack_10)
  ;
  local_2c = *piVar2;
  iVar1 = local_34 + local_30 + local_2c;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr(auStack_10);
  std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(auStack_18);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_20);
  std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_28);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: test_cpp_rtti @ 001025a0 */

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
  int local_24;
  
  this = operator_new(8);
  *(undefined8 *)this = 0;
  RTTIDerivedA::RTTIDerivedA(this);
  this_00 = operator_new(8);
  *(undefined8 *)this_00 = 0;
  RTTIDerivedB::RTTIDerivedB(this_00);
  local_24 = 0;
  if (this == (RTTIDerivedA *)0x0) {
    __cxa_bad_typeid();
LAB_00102620:
    local_24 = 10;
  }
  else {
    cVar1 = std::type_info::operator==
                      (*(type_info **)(*(long *)this + -8),(type_info *)&RTTIDerivedA::typeinfo);
    if (cVar1 != '\0') goto LAB_00102620;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    __cxa_bad_typeid();
LAB_00102664:
    local_24 = local_24 + 0x14;
  }
  else {
    cVar1 = std::type_info::operator==
                      (*(type_info **)(*(long *)this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
    if (cVar1 != '\0') goto LAB_00102664;
  }
  if (this == (RTTIDerivedA *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (lVar3 != 0) {
    iVar2 = RTTIDerivedA::derivedA_data();
    local_24 = local_24 + iVar2;
  }
  if (this_00 == (RTTIDerivedB *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (lVar3 != 0) {
    iVar2 = RTTIDerivedB::derivedB_data();
    local_24 = local_24 + iVar2;
  }
  if (this == (RTTIDerivedA *)0x0) {
    this = (RTTIDerivedA *)__cxa_bad_typeid();
  }
  else {
    __s = (char *)std::type_info::name(*(type_info **)(*(long *)this + -8));
    sVar4 = strlen(__s);
    local_24 = (int)sVar4 + local_24;
    if (this == (RTTIDerivedA *)0x0) goto LAB_00102768;
  }
  (**(code **)(*(long *)this + 8))();
LAB_00102768:
  if (this_00 != (RTTIDerivedB *)0x0) {
    (**(code **)(*(long *)this_00 + 8))();
  }
  return local_24;
}



/* Function: test_cpp_oo_features @ 00102794 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
  int iVar1;
  ulong uVar2;
  
  puts(&DAT_001045e8);
  uVar2 = test_cpp_member_func();
  printf(&DAT_00104610,uVar2 & 0xffffffff);
  uVar2 = test_cpp_constructor();
  printf(&DAT_00104630,uVar2 & 0xffffffff);
  uVar2 = test_cpp_virtual_func();
  printf(&DAT_00104650,uVar2 & 0xffffffff);
  uVar2 = test_cpp_multiple_inheritance();
  printf(&DAT_00104670,uVar2 & 0xffffffff);
  uVar2 = test_cpp_diamond_inheritance();
  printf(&DAT_00104690,uVar2 & 0xffffffff);
  uVar2 = test_cpp_operator_overload();
  printf(&DAT_001046b0,uVar2 & 0xffffffff);
  uVar2 = test_cpp_template_func();
  printf(&DAT_001046d0,uVar2 & 0xffffffff);
  uVar2 = test_cpp_template_class();
  printf(&DAT_001046f0,uVar2 & 0xffffffff);
  uVar2 = test_cpp_lambda();
  printf(&DAT_00104710,uVar2 & 0xffffffff);
  uVar2 = test_cpp_exception();
  printf(&DAT_00104730,uVar2 & 0xffffffff);
  uVar2 = test_cpp_smart_ptr();
  printf(&DAT_00104750,uVar2 & 0xffffffff);
  uVar2 = test_cpp_rtti();
  iVar1 = printf(&DAT_00104770,uVar2 & 0xffffffff);
  return iVar1;
}



/* Function: main @ 001028a4 */

undefined8 main(void)

{
  test_cpp_oo_features();
  return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 001028bc */

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



/* Function: unique_ptr<test_cpp_smart_ptr()::{lambda(int*)#1},void> @ 001028ec */

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



/* Function: ~unique_ptr @ 0010291c */

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



/* Function: operator* @ 00102984 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator*
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get(this);
  return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 001029a8 */

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
  int *local_10;
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *local_8;
  
  local_10 = param_1;
  local_8 = this;
  p_Var1 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
            ((tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,&local_10,p_Var1);
  return;
}



/* Function: _M_ptr @ 001029f4 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00102a10 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter() */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return;
}



/* Function: get @ 00102a2c */

/* std::unique_ptr<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::get() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get
          (unique_ptr<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
            ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this);
  return;
}



/* Function: forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 00102a48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::{lambda(int*)#1} const& std::forward<test_cpp_smart_ptr()::{lambda(int*)#1}
   const&>(std::remove_reference<test_cpp_smart_ptr()::{lambda(int*)#1} const&>::type&) */

_lambda_int___1_ * std::forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>(type *param_1)

{
  return (_lambda_int___1_ *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,true> @ 00102a5c */

/* std::tuple<int*, test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple<int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&, true>(int*&,
   test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
tuple<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,true>
          (tuple<int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *this,int **param_1,
          _lambda_int___1_ *param_2)

{
  int **ppiVar1;
  _lambda_int___1_ *p_Var2;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  p_Var2 = forward<test_cpp_smart_ptr()::_lambda(int*)_1_const&>((type *)param_2);
  _Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  _Tuple_impl<int*&,test_cpp_smart_ptr()::_lambda(int*)_1_const&,void>
            ((_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_> *)this,ppiVar1,p_Var2);
  return;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00102aac */

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



/* Function: _M_deleter @ 00102ac8 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  get<1ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 00102ae4 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr
          (__uniq_ptr_impl<int,test_cpp_smart_ptr()::_lambda(int*)_1_> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>((tuple *)this);
  return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::{lambda(int*)#1}const&,void> @ 00102b04 */

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



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00102b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::{lambda(int*)#1}>(std::_Tuple_impl<0ul,
   int*, test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

int ** std::__get_helper<0ul,int*,test_cpp_smart_ptr()::_lambda(int*)_1_>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00102b74 */

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



/* Function: get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00102b90 */

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



/* Function: _Tuple_impl @ 00102bac */

/* std::_Tuple_impl<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl(test_cpp_smart_ptr()::{lambda(int*)#1}
   const&) */

void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl
               (_lambda_int___1_ *param_1)

{
  _Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
  return;
}



/* Function: _M_head @ 00102bd4 */

/* std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00102bf0 */

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



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 00102c0c */

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



/* Function: _Head_base @ 00102c28 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::{lambda(int*)#1},
   true>::_Head_base(test_cpp_smart_ptr()::{lambda(int*)#1} const&) */

void std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
               (_lambda_int___1_ *param_1)

{
  return;
}



/* Function: _M_head @ 00102c40 */

/* std::_Tuple_impl<1ul, test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}>&) */

void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00102c5c */

/* std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head(std::_Tuple_impl<0ul, int*,
   test_cpp_smart_ptr()::{lambda(int*)#1}> const&) */

void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00102c78 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::{lambda(int*)#1}, true>::_M_head(std::_Head_base<1ul,
   test_cpp_smart_ptr()::{lambda(int*)#1}, true>&) */

_Head_base *
std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: __static_initialization_and_destruction_0 @ 00102c8c */

/* __static_initialization_and_destruction_0(int, int) */

void __static_initialization_and_destruction_0(int param_1,int param_2)

{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
  }
  return;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00102cec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}



/* Function: name @ 00102d08 */

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



/* Function: operator== @ 00102d44 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

undefined8 __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(long *)(this + 8) == *(long *)(param_1 + 8)) ||
     ((**(char **)(this + 8) != '*' &&
      (iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8)), iVar1 == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Function: SimpleClass @ 00102db8 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}



/* Function: getValue @ 00102e00 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
  return *(undefined4 *)this;
}



/* Function: setValue @ 00102e18 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
  *(int *)this = param_1;
  return;
}



/* Function: compute @ 00102e3c */

/* SimpleClass::compute(int) const */

int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
  int iVar1;
  size_t sVar2;
  
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return iVar1 * param_1 + (int)sVar2;
}



/* Function: getClassID @ 00102e80 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass::getClassID(void)

{
  return 0x1234;
}



/* Function: LifecycleClass @ 00102e88 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,ulong param_1)

{
  void *pvVar1;
  ulong local_8;
  
  *(ulong *)(this + 8) = param_1;
  if (param_1 < 0x1fffffffffffffff) {
    pvVar1 = operator_new__(param_1 << 2);
    *(void **)this = pvVar1;
    for (local_8 = 0; local_8 < param_1; local_8 = local_8 + 1) {
LAB_00102ed4:
      *(int *)(*(long *)this + local_8 * 4) = (int)local_8 * 10;
    }
    instance_count = instance_count + 1;
    return;
  }
  __cxa_throw_bad_array_new_length();
  goto LAB_00102ed4;
}



/* Function: ~LifecycleClass @ 00102f50 */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
  if (*(long *)this != 0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}



/* Function: getData @ 00102fa0 */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,ulong param_1)

{
  undefined4 uVar1;
  
  if (param_1 < *(ulong *)(this + 8)) {
    uVar1 = *(undefined4 *)(*(long *)this + param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: getInstanceCount @ 00102fe8 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
  return instance_count;
}



/* Function: virtual_func @ 00102ff8 */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
  return param_1 + 1;
}



/* Function: getName @ 00103014 */

/* Base::getName() const */

undefined * Base::getName(void)

{
  return &DAT_001045d8;
}



/* Function: ~Base @ 0010302c */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00116b10;
  return;
}



/* Function: ~Base @ 00103050 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
  ~Base(this);
  operator_delete(this,8);
  return;
}



/* Function: Base @ 00103078 */

/* Base::Base() */

void __thiscall Base::Base(Base *this)

{
  *(undefined ***)this = &PTR_virtual_func_00116b10;
  return;
}



/* Function: Derived @ 0010309c */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00116ae0;
  *(int *)(this + 8) = param_1;
  return;
}



/* Function: virtual_func @ 001030dc */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
  return *(int *)(this + 8) * param_1;
}



/* Function: getName @ 00103100 */

/* Derived::getName() const */

char * Derived::getName(void)

{
  return "Derived";
}



/* Function: funcA @ 00103118 */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
  return 10;
}



/* Function: ~BaseA @ 0010312c */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00116ab8;
  return;
}



/* Function: ~BaseA @ 00103150 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
  ~BaseA(this);
  operator_delete(this,0x10);
  return;
}



/* Function: funcB @ 00103178 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
  return 0x14;
}



/* Function: ~BaseB @ 0010318c */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00116a90;
  return;
}



/* Function: ~BaseB @ 001031b0 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
  ~BaseB(this);
  operator_delete(this,0x10);
  return;
}



/* Function: funcA @ 001031d8 */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
  return 0x1e;
}



/* Function: funcB @ 001031ec */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
  return 0x28;
}



/* Function: funcB @ 00103200 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
  funcB();
  return;
}



/* Function: BaseA @ 00103208 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
  *(undefined ***)this = &PTR_funcA_00116ab8;
  return;
}



/* Function: BaseB @ 0010322c */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
  *(undefined ***)this = &PTR_funcB_00116a90;
  return;
}



/* Function: MultiDerived @ 00103250 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 0x10));
  *(undefined ***)this = &PTR_funcA_00116a38;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00116a68;
  return;
}



/* Function: func @ 0010329c */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
  return 100;
}



/* Function: ~VirtualBase @ 001032b0 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00116a10;
  return;
}



/* Function: ~VirtualBase @ 001032d4 */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
  ~VirtualBase(this);
  operator_delete(this,0x10);
  return;
}



/* Function: func @ 001032fc */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: func @ 00103330 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 00103340 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: func @ 00103374 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 00103384 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: func @ 001033b8 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}



/* Function: func @ 001033c8 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
  func(this + -0x10);
  return;
}



/* Function: VirtualBase @ 001033d0 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
  *(undefined ***)this = &PTR_func_00116a10;
  return;
}



/* Function: MiddleA @ 001033f4 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
  undefined8 *in_x1;
  
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}



/* Function: ~MiddleA @ 00103444 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
  undefined8 *in_x1;
  
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}



/* Function: MiddleB @ 00103494 */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
  undefined8 *in_x1;
  
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}



/* Function: ~MiddleB @ 001034e4 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
  undefined8 *in_x1;
  
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}



/* Function: DiamondDerived @ 00103534 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x20));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 0x10));
  *(undefined ***)this = &PTR_func_00116878;
  *(undefined ***)(this + 0x20) = &PTR_func_001168e0;
  *(undefined ***)(this + 0x10) = &PTR_func_001168a8;
  return;
}



/* Function: Point @ 001035c0 */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}



/* Function: operator+ @ 001035f4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point::operator+(Point *this,Point *param_1)

{
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
       );
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,local_10,0,local_8 - ___stack_chk_guard);
  }
  return local_10;
}



/* Function: operator== @ 00103684 */

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



/* Function: operator++ @ 001036d4 */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

Point * __thiscall Point::operator++(Point *this)

{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return this;
}



/* Function: template_max<int> @ 00103710 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}



/* Function: template_max<double> @ 00103740 */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}



/* Function: template_swap<int> @ 00103774 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}



/* Function: Container @ 001037b4 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}



/* Function: push @ 001037d0 */

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



/* Function: get @ 0010381c */

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



/* Function: getSize @ 00103864 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
  return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 0010387c */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}



/* Function: push @ 00103898 */

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



/* Function: get @ 001038e4 */

/* Container<double>::get(int) const */

undefined1  [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ulong *)(this + (long)param_1 * 8);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Function: getSize @ 0010392c */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
  return *(undefined4 *)(this + 0x50);
}



/* Function: __uniq_ptr_data @ 00103944 */

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



/* Function: unique_ptr @ 0010396c */

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



/* Function: getType @ 00103994 */

/* RTTIBase::getType() const */

undefined8 RTTIBase::getType(void)

{
  return 0;
}



/* Function: getType @ 001039a8 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
  return 1;
}



/* Function: derivedA_data @ 001039bc */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA::derivedA_data(void)

{
  return 100;
}



/* Function: getType @ 001039d0 */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
  return 2;
}



/* Function: derivedB_data @ 001039e4 */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB::derivedB_data(void)

{
  return 200;
}



/* Function: RTTIBase @ 001039f8 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00116848;
  return;
}



/* Function: ~RTTIBase @ 00103a1c */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  *(undefined ***)this = &PTR__RTTIBase_00116848;
  return;
}



/* Function: ~RTTIBase @ 00103a40 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
  ~RTTIBase(this);
  operator_delete(this,8);
  return;
}



/* Function: RTTIDerivedA @ 00103a68 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00116820;
  return;
}



/* Function: RTTIDerivedB @ 00103a98 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_001167f8;
  return;
}



/* Function: __uniq_ptr_impl @ 00103ac8 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
  return;
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 00103af0 */

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



/* Function: ~unique_ptr @ 00103b18 */

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



/* Function: operator* @ 00103b80 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
          (unique_ptr<int,std::default_delete<int>> *this)

{
  get(this);
  return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00103ba4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
   std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
   std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 00103bb8 */

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



/* Function: tuple @ 00103bf0 */

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



/* Function: __uniq_ptr_impl @ 00103c18 */

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



/* Function: __uniq_ptr_impl @ 00103c60 */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
  return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00103c88 */

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



/* Function: ~unique_ptr @ 00103cb0 */

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



/* Function: operator[] @ 00103d0c */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
          (unique_ptr<int[],std::default_delete<int[]>> *this,ulong param_1)

{
  long lVar1;
  
  lVar1 = get(this);
  return lVar1 + param_1 * 4;
}



/* Function: __uniq_ptr_impl @ 00103d44 */

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



/* Function: _M_ptr @ 00103d80 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<0ul,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00103d9c */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr<int,std::default_delete<int>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return;
}



/* Function: move<int*&> @ 00103db8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
  return (type *)param_1;
}



/* Function: operator() @ 00103dcc */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}



/* Function: get @ 00103dfc */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
            ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
  return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00103e18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
   std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
   >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
  return (type *)param_1;
}



/* Function: _Tuple_impl @ 00103e2c */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1ul,
   std::default_delete<int> >&&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
  return;
}



/* Function: __uniq_ptr_impl @ 00103e44 */

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



/* Function: _M_ptr @ 00103e80 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: get_deleter @ 00103e9c */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return;
}



/* Function: operator() @ 00103eb8 */

/* std::enable_if<std::is_convertible<int (*) [], int (*) []>::value, void>::type
   std::default_delete<int []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return;
}



/* Function: get @ 00103ee8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr<int[],std::default_delete<int[]>> *this)

{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
            ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
  return;
}



/* Function: tuple<true,true> @ 00103f04 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
          (tuple<int*,std::default_delete<int>> *this)

{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this);
  return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00103f24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 00103f40 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  get<1ul,int*,std::default_delete<int>>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 00103f5c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0ul,int*,std::default_delete<int>>((tuple *)this);
  return *(undefined8 *)ptVar1;
}



/* Function: tuple<true,true> @ 00103f7c */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
          (tuple<int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl<0ul,int*,std::default_delete<int[]>> *)this);
  return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00103f9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _M_deleter @ 00103fb8 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  get<1ul,int*,std::default_delete<int[]>>((tuple *)this);
  return;
}



/* Function: _M_ptr @ 00103fd4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
  type *ptVar1;
  
  ptVar1 = get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
  return *(undefined8 *)ptVar1;
}



/* Function: _Tuple_impl @ 00103ff4 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl<0ul,int*,std::default_delete<int>> *this)

{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
  return;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 0010401c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 00104038 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
   std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1ul,int*,std::default_delete<int>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1ul,std::default_delete<int>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104054 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
   int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
  type *ptVar1;
  
  ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
  return ptVar1;
}



/* Function: _Tuple_impl @ 00104070 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl<0ul,int*,std::default_delete<int[]>> *this)

{
  _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
  return;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104098 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
   std::default_delete<int []> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 001040b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
   int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = __get_helper<1ul,std::default_delete<int[]>>((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 001040d0 */

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



/* Function: forward<int*&> @ 001040ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
  return (int **)param_1;
}



/* Function: _Tuple_impl @ 00104100 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)

{
  _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
  return;
}



/* Function: _Head_base @ 00104120 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base<0ul,int*,false> *this)

{
  *(undefined8 *)this = 0;
  return;
}



/* Function: _M_head @ 0010413c */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 00104158 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
   std::default_delete<int>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 00104174 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Tuple_impl @ 00104190 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)

{
  _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
  return;
}



/* Function: _M_head @ 001041b0 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 001041cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
   []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  default_delete *pdVar1;
  
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 001041e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
   int*, std::default_delete<int []> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}



/* Function: _Head_base<int*&> @ 00104204 */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base<int*&>(_Head_base<0ul,int*,false> *this,int **param_1)

{
  int **ppiVar1;
  
  ppiVar1 = forward<int*&>((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}



/* Function: _Head_base @ 00104234 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)

{
  return;
}



/* Function: _M_head @ 00104248 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 0010425c */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_M_head(std::_Tuple_impl<1ul,
   std::default_delete<int> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 00104278 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _Head_base @ 00104294 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)

{
  return;
}



/* Function: _M_head @ 001042a8 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
   std::default_delete<int []> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 001042c4 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
   std::default_delete<int []> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}



/* Function: _M_head @ 001042e0 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(std::_Head_base<1ul,
   std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 001042f4 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: _M_head @ 00104308 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
   std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
  return param_1;
}



/* Function: ~RTTIDerivedB @ 0010431c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedB_001167f8;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedB @ 0010434c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
  ~RTTIDerivedB(this);
  operator_delete(this,8);
  return;
}



/* Function: ~RTTIDerivedA @ 00104374 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  *(undefined ***)this = &PTR__RTTIDerivedA_00116820;
  RTTIBase::~RTTIBase((RTTIBase *)this);
  return;
}



/* Function: ~RTTIDerivedA @ 001043a4 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
  ~RTTIDerivedA(this);
  operator_delete(this,8);
  return;
}



/* Function: ~DiamondDerived @ 001043cc */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  *(undefined ***)this = &PTR_func_00116878;
  *(undefined ***)(this + 0x20) = &PTR_func_001168e0;
  *(undefined ***)(this + 0x10) = &PTR_func_001168a8;
  MiddleB::~MiddleB((MiddleB *)(this + 0x10));
  MiddleA::~MiddleA((MiddleA *)this);
  VirtualBase::~VirtualBase((VirtualBase *)(this + 0x20));
  return;
}



/* Function: ~DiamondDerived @ 00104458 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -0x10);
  return;
}



/* Function: ~DiamondDerived @ 00104460 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~DiamondDerived @ 00104470 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this);
  operator_delete(this,0x30);
  return;
}



/* Function: ~DiamondDerived @ 00104498 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + -0x10);
  return;
}



/* Function: ~DiamondDerived @ 001044a0 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
  ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}



/* Function: ~MultiDerived @ 001044b0 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  *(undefined ***)this = &PTR_funcA_00116a38;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00116a68;
  BaseB::~BaseB((BaseB *)(this + 0x10));
  BaseA::~BaseA((BaseA *)this);
  return;
}



/* Function: ~MultiDerived @ 001044fc */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -0x10);
  return;
}



/* Function: ~MultiDerived @ 00104504 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this);
  operator_delete(this,0x20);
  return;
}



/* Function: ~MultiDerived @ 0010452c */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
  ~MultiDerived(this + -0x10);
  return;
}



/* Function: ~Derived @ 00104534 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  *(undefined ***)this = &PTR_virtual_func_00116ae0;
  Base::~Base((Base *)this);
  return;
}



/* Function: ~Derived @ 00104564 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
  ~Derived(this);
  operator_delete(this,0x10);
  return;
}



/* Function: _fini @ 0010458c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 205 */
