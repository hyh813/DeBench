// Decompiled by BinaryAI
// SHA256: f5e11470a4ead088b7db76c8ec2eb04807e3e9d68fb11c6c7bdb1e2a9623eeb5

// Function: _init @ 0x101820
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_00101840 @ 0x101840
void FUN_00101840(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101860
void * operator_new__(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x101870
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x101880
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101890
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1018a0
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1018b0
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1018c0
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1018d0
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x1018e0
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1018f0
void operator_delete(void *param_1,ulong param_2)
{
  operator_delete(param_1,param_2);
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x101900
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x101910
void __cxa_bad_typeid(void)
{
  __cxa_bad_typeid();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101920
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101930
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101940
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::__cxa_throw_bad_array_new_length @ 0x101950
void __cxa_throw_bad_array_new_length(void)
{
  __cxa_throw_bad_array_new_length();
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x101960
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101970
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101980
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::abort @ 0x101990
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x1019a0
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1019b0
void __gxx_personality_v0(void)
{
  __gxx_personality_v0();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1019c0
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x1019d0
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x1019e0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::printf @ 0x1019f0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: _start @ 0x101a00
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x101a34
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x101a50
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101a80
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00101abc @ 0x101abc
void FUN_00101abc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x101ac0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: test_cpp_member_func @ 0x101b14
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
    __stack_chk_fail(&__stack_chk_guard,iVar3,0,local_8 - ___stack_chk_guard);
  }
  return iVar3;
}

// Function: test_cpp_constructor @ 0x101bbc
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
  LifecycleClass::_LifecycleClass(aLStack_18);
  iVar3 = LifecycleClass::getInstanceCount();
  iVar1 = iVar1 + iVar2 + iVar3 * 1000;
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: call_virtual_func @ 0x101c70
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)(param_1,param_2);
  return;
}

// Function: test_cpp_virtual_func @ 0x101ca0
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **local_30;
  undefined ***local_28;
  Derived *local_20;
  Derived aDStack_18 [16];
  long local_8;
  local_8 = ___stack_chk_guard;
  local_30 = &PTR_virtual_func_00116b10;
  Derived::Derived(aDStack_18,3);
  iVar1 = Base::virtual_func((Base *)&local_30,5);
  iVar2 = Derived::virtual_func(aDStack_18,5);
  local_28 = &local_30;
  local_20 = aDStack_18;
  iVar3 = call_virtual_func((Base *)local_28,5);
  iVar4 = call_virtual_func((Base *)local_20,5);
  iVar4 = iVar1 + iVar2 + iVar3 + iVar4;
  Derived::_Derived(aDStack_18);
  Base::_Base((Base *)&local_30);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar4,0,local_8 - ___stack_chk_guard);
  }
  return iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x101da8
int test_cpp_multiple_inheritance(void)
{
  int iVar1;
  int iVar2;
  code **local_28;
  undefined4 local_20;
  code **local_18;
  undefined4 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  MultiDerived::MultiDerived((MultiDerived *)&local_28);
  local_20 = 100;
  local_10 = 200;
  iVar1 = (**local_28)(&local_28);
  iVar2 = (**local_18)(&local_18);
  iVar1 = iVar1 + iVar2 + (uint)(&local_28 != &local_18);
  MultiDerived::_MultiDerived((MultiDerived *)&local_28);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: test_cpp_diamond_inheritance @ 0x101ea4
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  DiamondDerived aDStack_38 [32];
  code **local_18;
  undefined4 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  DiamondDerived::DiamondDerived(aDStack_38);
  local_10 = 0x32;
  iVar1 = (**local_18)(&local_18);
  local_10 = 100;
  iVar2 = (**local_18)(&local_18);
  DiamondDerived::_DiamondDerived(aDStack_38);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1 + iVar2,0,local_8 - ___stack_chk_guard);
  }
  return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x101f78
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
  local_10 = Point::operator_(aPStack_20,aPStack_18);
  cVar1 = Point::operator__(aPStack_20,aPStack_18);
  Point::operator__((Point *)&local_10);
  if (cVar1 == '\0') {
    iVar2 = 10;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + (int)local_10 + local_10._4_4_;
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar2,0,local_8 - ___stack_chk_guard);
  }
  return iVar2;
}

// Function: test_cpp_template_func @ 0x102034
int test_cpp_template_func(void)
{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  double local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_14 = template_max_int_(3,7);
  local_10 = template_max_double_(2.5,1.5);
  local_1c = 10;
  local_18 = 0x14;
  template_swap_int_(&local_1c,&local_18);
  iVar1 = (int)local_10 + local_14 + local_1c + local_18;
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: test_cpp_template_class @ 0x1020dc
int test_cpp_template_class(void)
{
  int iVar1;
  int iVar2;
  double dVar3;
  Container_int_ aCStack_90 [48];
  Container_double_ aCStack_60 [88];
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
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: test_cpp_lambda()::{lambda(int)#1}::operator() @ 0x1021b0
int __thiscall test_cpp_lambda()::{lambda(int)#1}::operator__(_lambda_int__1_ *this,int param_1)
{
  **(int **)(this + 8) = **(int **)(this + 8) + 5;
  return *(int *)this * param_1 + **(int **)(this + 8);
}

// Function: test_cpp_lambda @ 0x102200
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
  local_20 = test_cpp_lambda()::{lambda(int)#1}::operator__((_lambda_int__1_ *)local_18,3);
  local_1c = 0x1e;
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,local_20 + 0x1e,0,local_8 - ___stack_chk_guard);
  }
  return local_20 + 0x1e;
}

// Function: test_cpp_exception @ 0x102290
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr()::{lambda(int*)#1}::operator() @ 0x1023b4
void __thiscall
test_cpp_smart_ptr()::{lambda(int*)#1}::operator__(_lambda_int___1_ *this,int *param_1)
{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}

// Function: test_cpp_smart_ptr @ 0x1023f0
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
  unique_ptr_int_std__default_delete_int__ auStack_28 [8];
  unique_ptr_int_std__default_delete_int__ auStack_20 [8];
  unique_ptr_int___std__default_delete_int____ auStack_18 [8];
  unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ auStack_10 [8];
  long local_8;
  local_8 = ___stack_chk_guard;
  piVar2 = (int *)operator_new(4);
  *piVar2 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
            (auStack_28,piVar2);
  puVar3 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator_(auStack_28);
  *puVar3 = 200;
  ptVar4 = std::move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_28);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_20,(unique_ptr *)ptVar4);
  piVar2 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator_(auStack_20);
  local_34 = *piVar2;
  piVar2 = (int *)operator_new__(0x14);
  *piVar2 = 1;
  piVar2[1] = 2;
  piVar2[2] = 3;
  piVar2[3] = 4;
  piVar2[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr_int__std__default_delete_int____void_bool_(auStack_18,piVar2);
  piVar2 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator__(auStack_18,2);
  local_30 = *piVar2;
  piVar2 = (int *)operator_new(4);
  *piVar2 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr__lambda_int___1__void_
            (auStack_10,piVar2,a_Stack_38);
  piVar2 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator_(auStack_10)
  ;
  local_2c = *piVar2;
  iVar1 = local_34 + local_30 + local_2c;
  std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_unique_ptr(auStack_10);
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr(auStack_18);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(auStack_20);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(auStack_28);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}

// Function: test_cpp_rtti @ 0x1025a0
int test_cpp_rtti(void)
{
  char cVar1;
  int iVar2;
  long *this;
  long *this_00;
  long lVar3;
  char *__s;
  size_t sVar4;
  int local_24;
  this = (long *)operator_new(8);
  *this = 0;
  RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
  this_00 = (long *)operator_new(8);
  *this_00 = 0;
  RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
  local_24 = 0;
  if (this == (long *)0x0) {
    __cxa_bad_typeid();
LAB_00102620:
    local_24 = 10;
  }
  else {
    cVar1 = std::type_info::operator__
                      (*(type_info **)(*this + -8),(type_info *)&RTTIDerivedA::typeinfo);
    if (cVar1 != '\0') goto LAB_00102620;
  }
  if (this_00 == (long *)0x0) {
    __cxa_bad_typeid();
LAB_00102664:
    local_24 = local_24 + 0x14;
  }
  else {
    cVar1 = std::type_info::operator__
                      (*(type_info **)(*this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
    if (cVar1 != '\0') goto LAB_00102664;
  }
  if (this == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (lVar3 != 0) {
    iVar2 = RTTIDerivedA::derivedA_data();
    local_24 = local_24 + iVar2;
  }
  if (this_00 == (long *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar3 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (lVar3 != 0) {
    iVar2 = RTTIDerivedB::derivedB_data();
    local_24 = local_24 + iVar2;
  }
  if (this == (long *)0x0) {
    this = (long *)__cxa_bad_typeid();
  }
  else {
    __s = (char *)std::type_info::name(*(type_info **)(*this + -8));
    sVar4 = strlen(__s);
    local_24 = (int)sVar4 + local_24;
    if (this == (long *)0x0) goto LAB_00102768;
  }
  (**(code **)(*this + 8))();
LAB_00102768:
  if (this_00 != (long *)0x0) {
    (**(code **)(*this_00 + 8))();
  }
  return local_24;
}

// Function: test_cpp_oo_features @ 0x102794
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

// Function: main @ 0x1028a4
undefined8 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::__uniq_ptr_impl<{lambda(int*)#1}const&> @ 0x1028bc
void __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
__uniq_ptr_impl__lambda_int___1_const__
          (__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *this,int *param_1
          ,_lambda_int___1_ *param_2)
{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  __uniq_ptr_impl__lambda_int___1_const__
            ((__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *)this,param_1,param_2);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr<{lambda(int*)#1},void> @ 0x1028ec
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::unique_ptr__lambda_int___1__void_
          (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this,int *param_1,
          _lambda_int___1_ *param_2)
{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::{lambda(int*)#1},true,false>::
  __uniq_ptr_impl__lambda_int___1_const__
            ((__uniq_ptr_data_int_test_cpp_smart_ptr_____lambda_int___1__true_false_ *)this,param_1,
             param_2);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::~unique_ptr @ 0x10291c
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_unique_ptr
          (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
  int **ppiVar1;
  _lambda_int___1_ *this_00;
  int **ppiVar2;
  ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr();
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (_lambda_int___1_ *)get_deleter();
    ppiVar2 = (int **)move_int___(ppiVar1);
    test_cpp_smart_ptr()::{lambda(int*)#1}::operator__(this_00,*ppiVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator* @ 0x102984
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::operator_
          (unique_ptr_int_test_cpp_smart_ptr_____lambda_int___1__ *this)
{
  get();
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::__uniq_ptr_impl<{lambda(int*)#1}const&> @ 0x1029a8
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::
__uniq_ptr_impl__lambda_int___1_const__
          (__uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *this,int *param_1,
          _lambda_int___1_ *param_2)
{
  _lambda_int___1_ *p_Var1;
  int *local_10;
  __uniq_ptr_impl_int_test_cpp_smart_ptr_____lambda_int___1__ *local_8;
  local_10 = param_1;
  local_8 = this;
  p_Var1 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple_int____lambda_int___1_const__true_
            ((tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *)this,&local_10,p_Var1);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr @ 0x1029f4
void std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr(void)
{
  int *in_x0;
  _lambda_int___1_ *in_x1;
  get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__(in_x0,in_x1);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter @ 0x102a10
void std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get_deleter(void)
{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter();
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get @ 0x102a2c
void std::unique_ptr<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::get(void)
{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr();
  return;
}

// Function: std::forward<test_cpp_smart_ptr()::{lambda(int*)#1}const&> @ 0x102a48
_lambda_int___1_ * std::forward_test_cpp_smart_ptr_____lambda_int___1_const__(type *param_1)
{
  return (_lambda_int___1_ *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple<int*&,{lambda(int*)#1}const&,true> @ 0x102a5c
void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::tuple_int____lambda_int___1_const__true_
          (tuple_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
          _lambda_int___1_ *param_2)
{
  int **ppiVar1;
  _lambda_int___1_ *p_Var2;
  ppiVar1 = forward_int___((type *)param_1);
  p_Var2 = forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
  _Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
  _Tuple_impl_int____lambda_int___1_const__void_
            ((_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *)this,ppiVar1,p_Var2);
  return;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x102aac
type * std::get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__
                 (int *param_1,_lambda_int___1_ *param_2)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter @ 0x102ac8
void std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_deleter(void)
{
  int *in_x0;
  _lambda_int___1_ *in_x1;
  get_1ul_int__test_cpp_smart_ptr_____lambda_int___1__(in_x0,in_x1);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr @ 0x102ae4
undefined8 std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_ptr(void)
{
  int *in_x0;
  undefined8 *puVar1;
  _lambda_int___1_ *in_x1;
  puVar1 = (undefined8 *)get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__(in_x0,in_x1);
  return *puVar1;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl<int*&,{lambda(int*)#1}const&,void> @ 0x102b04
void __thiscall
std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::
_Tuple_impl_int____lambda_int___1_const__void_
          (_Tuple_impl_0ul_int__test_cpp_smart_ptr_____lambda_int___1__ *this,int **param_1,
          _lambda_int___1_ *param_2)
{
  int **ppiVar1;
  forward_test_cpp_smart_ptr_____lambda_int___1_const__((type *)param_2);
  _Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl((_lambda_int___1_ *)this);
  ppiVar1 = forward_int___((type *)param_1);
  _Head_base<0ul,int*,false>::_Head_base_int___((_Head_base_0ul_int__false_ *)this,ppiVar1);
  return;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x102b58
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
                              ((_lambda_int___1_ *)param_1);
  return ppiVar1;
}

// Function: std::get<1ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x102b74
type * std::get_1ul_int__test_cpp_smart_ptr_____lambda_int___1__
                 (int *param_1,_lambda_int___1_ *param_2)
{
  _lambda_int___1_ *p_Var1;
  p_Var1 = __get_helper_1ul_test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x102b90
type * std::get_0ul_int__test_cpp_smart_ptr_____lambda_int___1__
                 (int *param_1,_lambda_int___1_ *param_2)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl @ 0x102bac
void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_Tuple_impl
               (_lambda_int___1_ *param_1)
{
  _Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base(param_1);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x102bd4
void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_lambda_int___1_ *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__get_helper<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x102bf0
_lambda_int___1_ *
std::__get_helper_1ul_test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
  _lambda_int___1_ *p_Var1;
  p_Var1 = (_lambda_int___1_ *)
           _Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
                     ((_lambda_int___1_ *)param_1);
  return p_Var1;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}> @ 0x102c0c
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr_____lambda_int___1__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
                              ((_lambda_int___1_ *)param_1);
  return ppiVar1;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base @ 0x102c28
void std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_Head_base
               (_lambda_int___1_ *param_1)
{
  return;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x102c40
void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_lambda_int___1_ *param_1)
{
  _Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(param_1);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head @ 0x102c5c
void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::{lambda(int*)#1}>::_M_head
               (_lambda_int___1_ *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head @ 0x102c78
_lambda_int___1_ *
std::_Head_base<1ul,test_cpp_smart_ptr()::{lambda(int*)#1},true>::_M_head(_lambda_int___1_ *param_1)
{
  return param_1;
}

// Function: __static_initialization_and_destruction_0 @ 0x102c8c
void __static_initialization_and_destruction_0(int param_1,int param_2)
{
  if ((param_1 == 1) && (param_2 == 0xffff)) {
    std::ios_base::Init::Init((Init *)&std::__ioinit);
    __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  }
  return;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102cec
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}

// Function: std::type_info::name @ 0x102d08
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

// Function: std::type_info::operator== @ 0x102d44
undefined8 __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
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

// Function: SimpleClass::SimpleClass @ 0x102db8
void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}

// Function: SimpleClass::getValue @ 0x102e00
undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)
{
  return *(undefined4 *)this;
}

// Function: SimpleClass::setValue @ 0x102e18
void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
  *(int *)this = param_1;
  return;
}

// Function: SimpleClass::compute @ 0x102e3c
int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
  int iVar1;
  size_t sVar2;
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return iVar1 * param_1 + (int)sVar2;
}

// Function: SimpleClass::getClassID @ 0x102e80
undefined8 SimpleClass::getClassID(void)
{
  return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x102e88
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

// Function: LifecycleClass::~LifecycleClass @ 0x102f50
void __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
  if (*(long *)this != 0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}

// Function: LifecycleClass::getData @ 0x102fa0
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

// Function: LifecycleClass::getInstanceCount @ 0x102fe8
undefined4 LifecycleClass::getInstanceCount(void)
{
  return instance_count;
}

// Function: Base::virtual_func @ 0x102ff8
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Base::getName @ 0x103014
undefined * Base::getName(void)
{
  return &DAT_001045d8;
}

// Function: Base::~Base @ 0x10302c
void __thiscall Base::_Base(Base *this)
{
  *(undefined ***)this = &PTR_virtual_func_00116b10;
  return;
}

// Function: Base::~Base @ 0x103050
void __thiscall Base::_Base(Base *this)
{
  _Base(this);
  operator_delete(this,8);
  return;
}

// Function: Base::Base @ 0x103078
void __thiscall Base::Base(Base *this)
{
  *(undefined ***)this = &PTR_virtual_func_00116b10;
  return;
}

// Function: Derived::Derived @ 0x10309c
void __thiscall Derived::Derived(Derived *this,int param_1)
{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00116ae0;
  *(int *)(this + 8) = param_1;
  return;
}

// Function: Derived::virtual_func @ 0x1030dc
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return *(int *)(this + 8) * param_1;
}

// Function: Derived::getName @ 0x103100
char * Derived::getName(void)
{
  return "Derived";
}

// Function: BaseA::funcA @ 0x103118
undefined8 BaseA::funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x10312c
void __thiscall BaseA::_BaseA(BaseA *this)
{
  *(undefined ***)this = &PTR_funcA_00116ab8;
  return;
}

// Function: BaseA::~BaseA @ 0x103150
void __thiscall BaseA::_BaseA(BaseA *this)
{
  _BaseA(this);
  operator_delete(this,0x10);
  return;
}

// Function: BaseB::funcB @ 0x103178
undefined8 BaseB::funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x10318c
void __thiscall BaseB::_BaseB(BaseB *this)
{
  *(undefined ***)this = &PTR_funcB_00116a90;
  return;
}

// Function: BaseB::~BaseB @ 0x1031b0
void __thiscall BaseB::_BaseB(BaseB *this)
{
  _BaseB(this);
  operator_delete(this,0x10);
  return;
}

// Function: MultiDerived::funcA @ 0x1031d8
undefined8 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1031ec
undefined8 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x103200
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
  funcB();
  return;
}

// Function: BaseA::BaseA @ 0x103208
void __thiscall BaseA::BaseA(BaseA *this)
{
  *(undefined ***)this = &PTR_funcA_00116ab8;
  return;
}

// Function: BaseB::BaseB @ 0x10322c
void __thiscall BaseB::BaseB(BaseB *this)
{
  *(undefined ***)this = &PTR_funcB_00116a90;
  return;
}

// Function: MultiDerived::MultiDerived @ 0x103250
void __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 0x10));
  *(undefined ***)this = &PTR_funcA_00116a38;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00116a68;
  return;
}

// Function: VirtualBase::func @ 0x10329c
undefined8 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x1032b0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  *(undefined ***)this = &PTR_func_00116a10;
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x1032d4
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  _VirtualBase(this);
  operator_delete(this,0x10);
  return;
}

// Function: MiddleA::func @ 0x1032fc
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x103330
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: MiddleB::func @ 0x103340
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x103374
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: DiamondDerived::func @ 0x103384
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x1033b8
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: DiamondDerived::func @ 0x1033c8
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -0x10);
  return;
}

// Function: VirtualBase::VirtualBase @ 0x1033d0
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(undefined ***)this = &PTR_func_00116a10;
  return;
}

// Function: MiddleA::MiddleA @ 0x1033f4
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
  undefined8 *in_x1;
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}

// Function: MiddleA::~MiddleA @ 0x103444
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  undefined8 *in_x1;
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}

// Function: MiddleB::MiddleB @ 0x103494
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
  undefined8 *in_x1;
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}

// Function: MiddleB::~MiddleB @ 0x1034e4
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  undefined8 *in_x1;
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}

// Function: DiamondDerived::DiamondDerived @ 0x103534
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

// Function: Point::Point @ 0x1035c0
void __thiscall Point::Point(Point *this,int param_1,int param_2)
{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

// Function: Point::operator+ @ 0x1035f4
undefined8 __thiscall Point::operator_(Point *this,Point *param_1)
{
  undefined8 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
       );
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,local_10,0,local_8 - ___stack_chk_guard);
  }
  return local_10;
}

// Function: Point::operator== @ 0x103684
undefined8 __thiscall Point::operator__(Point *this,Point *param_1)
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

// Function: Point::operator++ @ 0x1036d4
Point * __thiscall Point::operator__(Point *this)
{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return this;
}

// Function: template_max<int> @ 0x103710
int template_max_int_(int param_1,int param_2)
{
  if (param_2 < param_1) {
    param_2 = param_1;
  }
  return param_2;
}

// Function: template_max<double> @ 0x103740
double template_max_double_(double param_1,double param_2)
{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  return param_1;
}

// Function: template_swap<int> @ 0x103774
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x1037b4
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x1037d0
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  if (*(int *)(this + 0x28) < 10) {
    iVar1 = *(int *)(this + 0x28);
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + (long)iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x10381c
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
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

// Function: Container<int>::getSize @ 0x103864
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x10387c
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x103898
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
  int iVar1;
  if (*(int *)(this + 0x50) < 10) {
    iVar1 = *(int *)(this + 0x50);
    *(int *)(this + 0x50) = iVar1 + 1;
    *(double *)(this + (long)iVar1 * 8) = param_1;
  }
  return;
}

// Function: Container<double>::get @ 0x1038e4
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
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

// Function: Container<double>::getSize @ 0x10392c
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x103944
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr @ 0x10396c
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
             (__uniq_ptr_data *)param_1);
  return;
}

// Function: RTTIBase::getType @ 0x103994
undefined8 RTTIBase::getType(void)
{
  return 0;
}

// Function: RTTIDerivedA::getType @ 0x1039a8
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIDerivedA::derivedA_data @ 0x1039bc
undefined8 RTTIDerivedA::derivedA_data(void)
{
  return 100;
}

// Function: RTTIDerivedB::getType @ 0x1039d0
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: RTTIDerivedB::derivedB_data @ 0x1039e4
undefined8 RTTIDerivedB::derivedB_data(void)
{
  return 200;
}

// Function: RTTIBase::RTTIBase @ 0x1039f8
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(undefined ***)this = &PTR__RTTIBase_00116848;
  return;
}

// Function: RTTIBase::~RTTIBase @ 0x103a1c
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  *(undefined ***)this = &PTR__RTTIBase_00116848;
  return;
}

// Function: RTTIBase::~RTTIBase @ 0x103a40
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  _RTTIBase(this);
  operator_delete(this,8);
  return;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x103a68
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00116820;
  return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x103a98
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_001167f8;
  return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x103ac8
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void> @ 0x103af0
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
          (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x103b18
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this)
{
  int **ppiVar1;
  default_delete_int_ *this_00;
  int **ppiVar2;
  ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                              ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (default_delete_int_ *)get_deleter(this);
    ppiVar2 = (int **)move_int___(ppiVar1);
    default_delete<int>::operator__(this_00,*ppiVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::operator* @ 0x103b80
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator_
          (unique_ptr_int_std__default_delete_int__ *this)
{
  get(this);
  return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x103ba4
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
  return (type *)param_1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl @ 0x103bb8
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x103bf0
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x103c18
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
  type *ptVar1;
  undefined8 *puVar2;
  ptVar1 = move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
  tuple<int*,std::default_delete<int>>::tuple
            ((tuple_int__std__default_delete_int__ *)this,(tuple *)ptVar1);
  puVar2 = (undefined8 *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
  *puVar2 = 0;
  return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x103c60
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x103c88
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
          (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x103cb0
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
          (unique_ptr_int___std__default_delete_int____ *this)
{
  int **ppiVar1;
  default_delete_int___ *this_00;
  ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                              ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (default_delete_int___ *)get_deleter(this);
    default_delete<int[]>::operator__(this_00,*ppiVar1);
  }
  *ppiVar1 = (int *)0x0;
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x103d0c
long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
          (unique_ptr_int___std__default_delete_int____ *this,ulong param_1)
{
  long lVar1;
  lVar1 = get(this);
  return lVar1 + param_1 * 4;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x103d44
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
  int **ppiVar1;
  tuple<int*,std::default_delete<int>>::tuple_true_true_
            ((tuple_int__std__default_delete_int__ *)this);
  ppiVar1 = (int **)_M_ptr(this);
  *ppiVar1 = param_1;
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x103d80
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_0ul_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x103d9c
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr_int_std__default_delete_int__ *this)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return;
}

// Function: std::move<int*&> @ 0x103db8
type * std::move_int___(int **param_1)
{
  return (type *)param_1;
}

// Function: std::default_delete<int>::operator() @ 0x103dcc
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1,4);
  }
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x103dfc
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return;
}

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x103e18
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
  return (type *)param_1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl @ 0x103e2c
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x103e44
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
  int **ppiVar1;
  tuple<int*,std::default_delete<int[]>>::tuple_true_true_
            ((tuple_int__std__default_delete_int____ *)this);
  ppiVar1 = (int **)_M_ptr(this);
  *ppiVar1 = param_1;
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x103e80
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_0ul_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x103e9c
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr_int___std__default_delete_int____ *this)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return;
}

// Function: std::default_delete<int[]>::operator() @ 0x103eb8
type __thiscall std::default_delete<int[]>::operator__(default_delete_int___ *this,int *param_1)
{
  if (param_1 != (int *)0x0) {
    operator_delete__(param_1);
  }
  return (type)param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x103ee8
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr_int___std__default_delete_int____ *this)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x103f04
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
          (tuple_int__std__default_delete_int__ *this)
{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
  return;
}

// Function: std::get<0ul,int*,std::default_delete<int>> @ 0x103f24
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x103f40
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_1ul_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x103f5c
undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__std__default_delete_int__((tuple *)this);
  return *puVar1;
}

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x103f7c
void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
          (tuple_int__std__default_delete_int____ *this)
{
  _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
  return;
}

// Function: std::get<0ul,int*,std::default_delete<int[]>> @ 0x103f9c
type * std::get_0ul_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x103fb8
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_1ul_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x103fd4
undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__std__default_delete_int____((tuple *)this);
  return *puVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl @ 0x103ff4
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base_0ul_int__false_ *)this);
  return;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int>> @ 0x10401c
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::get<1ul,int*,std::default_delete<int>> @ 0x104038
type * std::get_1ul_int__std__default_delete_int__(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::get<0ul,int*,std::default_delete<int>> @ 0x104054
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl @ 0x104070
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
  _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base_0ul_int__false_ *)this);
  return;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int[]>> @ 0x104098
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::get<1ul,int*,std::default_delete<int[]>> @ 0x1040b4
type * std::get_1ul_int__std__default_delete_int____(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1ul_std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::get<0ul,int*,std::default_delete<int[]>> @ 0x1040d0
type * std::get_0ul_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::forward<int*&> @ 0x1040ec
int ** std::forward_int___(type *param_1)
{
  return (int **)param_1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl @ 0x104100
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)
{
  _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_Head_base @ 0x104120
void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base_0ul_int__false_ *this)
{
  *(undefined8 *)this = 0;
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head @ 0x10413c
void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__get_helper<1ul,std::default_delete<int>> @ 0x104158
default_delete * std::__get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int>> @ 0x104174
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl @ 0x104190
void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)
{
  _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head @ 0x1041b0
void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__get_helper<1ul,std::default_delete<int[]>> @ 0x1041cc
default_delete * std::__get_helper_1ul_std__default_delete_int____(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int[]>> @ 0x1041e8
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Head_base<0ul,int*,false>::_Head_base<int*&> @ 0x104204
void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base_int___(_Head_base_0ul_int__false_ *this,int **param_1)
{
  int **ppiVar1;
  ppiVar1 = forward_int___((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base @ 0x104234
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)
{
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x104248
_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head @ 0x10425c
void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head @ 0x104278
void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base @ 0x104294
void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)
{
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head @ 0x1042a8
void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head @ 0x1042c4
void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_M_head @ 0x1042e0
_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x1042f4
_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head @ 0x104308
_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10431c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  *(undefined ***)this = &PTR__RTTIDerivedB_001167f8;
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10434c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  _RTTIDerivedB(this);
  operator_delete(this,8);
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x104374
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  *(undefined ***)this = &PTR__RTTIDerivedA_00116820;
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1043a4
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  _RTTIDerivedA(this);
  operator_delete(this,8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1043cc
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  *(undefined ***)this = &PTR_func_00116878;
  *(undefined ***)(this + 0x20) = &PTR_func_001168e0;
  *(undefined ***)(this + 0x10) = &PTR_func_001168a8;
  MiddleB::_MiddleB((MiddleB *)(this + 0x10));
  MiddleA::_MiddleA((MiddleA *)this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x20));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104458
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104460
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104470
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this,0x30);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104498
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1044a0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x1044b0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  *(undefined ***)this = &PTR_funcA_00116a38;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00116a68;
  BaseB::_BaseB((BaseB *)(this + 0x10));
  BaseA::_BaseA((BaseA *)this);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x1044fc
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x104504
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this);
  operator_delete(this,0x20);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x10452c
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: Derived::~Derived @ 0x104534
void __thiscall Derived::_Derived(Derived *this)
{
  *(undefined ***)this = &PTR_virtual_func_00116ae0;
  Base::_Base((Base *)this);
  return;
}

// Function: Derived::~Derived @ 0x104564
void __thiscall Derived::_Derived(Derived *this)
{
  _Derived(this);
  operator_delete(this,0x10);
  return;
}

// Function: _fini @ 0x10458c
void _fini(void)
{
  return;
}

