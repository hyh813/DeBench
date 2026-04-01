// Decompiled by BinaryAI
// SHA256: a4f63ef435eea5b112031a7b28170da2869a7716acab5f0eac8e58184eda89b8

// Function: _init @ 0x102000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102030
void * operator_new__(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::printf @ 0x102040
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::std::terminate @ 0x102050
void std::terminate(void)
{
  terminate();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102060
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x102070
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x102080
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x102090
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::memset @ 0x1020a0
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1020b0
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.delete @ 0x1020c0
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x1020d0
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x1020e0
void __cxa_bad_typeid(void)
{
  __cxa_bad_typeid();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1020f0
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102100
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x102110
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102120
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102130
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102140
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102150
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102160
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102170
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: __cxx_global_var_init @ 0x102180
void __cxx_global_var_init(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x1021b0
void _GLOBAL__sub_I_5_1_cpp(void)
{
  __cxx_global_var_init();
  return;
}

// Function: _start @ 0x1021c0
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x1021f0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x102220
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x102260
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

// Function: test_cpp_member_func @ 0x1022b0
int test_cpp_member_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass local_30 [40];
  SimpleClass::SimpleClass(local_30,5,"Test");
  SimpleClass::setValue(local_30,10);
  iVar1 = SimpleClass::getValue(local_30);
  iVar2 = SimpleClass::compute(local_30,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x102310
int test_cpp_constructor(void)
{
  int iVar1;
  LifecycleClass local_20 [20];
  int local_c;
  local_c = 0;
  LifecycleClass::LifecycleClass(local_20,5);
  iVar1 = LifecycleClass::getData(local_20,2);
  local_c = local_c + iVar1;
  iVar1 = LifecycleClass::getInstanceCount();
  local_c = iVar1 + local_c;
  LifecycleClass::_LifecycleClass(local_20);
  iVar1 = LifecycleClass::getInstanceCount();
  return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x1023b0
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)(param_1,param_2);
  return;
}

// Function: test_cpp_virtual_func @ 0x1023e0
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Derived local_20 [16];
  Base local_10 [8];
  Base::Base(local_10);
  Derived::Derived(local_20,3);
  iVar1 = Base::virtual_func(local_10,5);
  iVar2 = Derived::virtual_func(local_20,5);
  iVar3 = call_virtual_func(local_10,5);
  iVar4 = call_virtual_func((Base *)local_20,5);
  Derived::_Derived(local_20);
  Base::_Base(local_10);
  return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x1024f0
int test_cpp_multiple_inheritance(void)
{
  int iVar1;
  int iVar2;
  code ***local_60;
  code **local_28;
  undefined4 local_20;
  code **local_18;
  undefined4 local_10;
  MultiDerived::MultiDerived((MultiDerived *)&local_28);
  local_20 = 100;
  local_10 = 200;
  local_60 = (code ***)0x0;
  if (&stack0x00000000 != (undefined *)0x28) {
    local_60 = &local_18;
  }
  iVar1 = (**local_28)();
  iVar2 = (***local_60)();
  MultiDerived::_MultiDerived((MultiDerived *)&local_28);
  return iVar1 + iVar2 + (uint)(&local_28 != local_60);
}

// Function: test_cpp_diamond_inheritance @ 0x1025d0
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  undefined8 *local_60;
  long local_38;
  undefined4 auStack_30 [10];
  DiamondDerived::DiamondDerived((DiamondDerived *)&local_38);
  *(undefined4 *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 0x32;
  local_60 = (undefined8 *)0x0;
  if (&stack0x00000000 != (undefined *)0x38) {
    local_60 = (undefined8 *)((long)auStack_30 + *(long *)(local_38 + -0x18) + -8);
  }
  iVar1 = (**(code **)*local_60)();
  *(undefined4 *)((long)auStack_30 + *(long *)(local_38 + -0x18)) = 100;
  iVar2 = (**(code **)*local_60)();
  DiamondDerived::_DiamondDerived((DiamondDerived *)&local_38);
  return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x1026a0
int test_cpp_operator_overload(void)
{
  byte bVar1;
  int iVar2;
  undefined8 local_20;
  Point local_18 [8];
  Point local_10 [8];
  Point::Point(local_10,1,2);
  Point::Point(local_18,3,4);
  local_20 = Point::operator_(local_10,local_18);
  bVar1 = Point::operator__(local_10,local_18);
  Point::operator__((Point *)&local_20);
  iVar2 = 10;
  if ((bVar1 & 1) != 0) {
    iVar2 = 0;
  }
  return (int)local_20 + local_20._4_4_ + iVar2;
}

// Function: test_cpp_template_func @ 0x102720
int test_cpp_template_func(void)
{
  int local_20;
  int local_1c;
  double local_18;
  int local_c;
  local_c = template_max_int_(3,7);
  local_18 = template_max_double_(2.5,1.5);
  local_1c = 10;
  local_20 = 0x14;
  template_swap_int_(&local_1c,&local_20);
  return local_c + (int)local_18 + local_1c + local_20;
}

// Function: test_cpp_template_class @ 0x102790
int test_cpp_template_class(void)
{
  double dVar1;
  Container_double_ local_98 [88];
  int local_40;
  int local_3c;
  Container_int_ local_38 [48];
  Container<int>::Container(local_38);
  Container<int>::push(local_38,10);
  Container<int>::push(local_38,0x14);
  Container<int>::push(local_38,0x1e);
  local_3c = Container<int>::get(local_38,0);
  local_40 = Container<int>::getSize(local_38);
  Container<double>::Container(local_98);
  Container<double>::push(local_98,3.14);
  dVar1 = (double)Container<double>::get(local_98,0);
  return local_3c + local_40 + (int)dVar1;
}

// Function: test_cpp_lambda @ 0x102840
int test_cpp_lambda(void)
{
  int iVar1;
  auto aVar2;
  __0 local_28 [8];
  undefined4 local_20 [2];
  undefined4 *local_18;
  undefined4 local_10;
  undefined4 local_c;
  local_c = 10;
  local_10 = 0x14;
  local_20[0] = 10;
  local_18 = &local_10;
  iVar1 = test_cpp_lambda()::$_1::operator__((__1 *)local_20,3);
  aVar2 = test_cpp_lambda()::$_0::operator__(local_28,10,0x14);
  return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x1028a0
int __thiscall test_cpp_lambda()::$_1::operator__(__1 *this,int param_1)
{
  **(int **)(this + 8) = **(int **)(this + 8) + 5;
  return param_1 * *(int *)this + **(int **)(this + 8);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x1028d0
auto __thiscall test_cpp_lambda()::$_0::operator__(__0 *this,int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x1028f0
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x102a50
int test_cpp_smart_ptr(void)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  type *ptVar5;
  unique_ptr_int_test_cpp_smart_ptr______2_ local_48 [8];
  __2 local_40 [4];
  int local_3c;
  unique_ptr_int___std__default_delete_int____ local_38 [12];
  int local_2c;
  unique_ptr_int_std__default_delete_int__ local_28 [24];
  unique_ptr_int_std__default_delete_int__ local_10 [8];
  piVar3 = (int *)operator_new(4);
  *piVar3 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
            (local_10,piVar3);
  puVar4 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator_(local_10);
  *puVar4 = 200;
  ptVar5 = std::move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)local_10);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(local_28,(unique_ptr *)ptVar5);
  piVar3 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator_(local_28);
  local_2c = *piVar3;
  piVar3 = (int *)operator_new__(0x14);
  *piVar3 = 1;
  piVar3[1] = 2;
  piVar3[2] = 3;
  piVar3[3] = 4;
  piVar3[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr_int__std__default_delete_int____void_bool_(local_38,piVar3);
  piVar3 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator__(local_38,2);
  local_3c = *piVar3;
  piVar3 = (int *)operator_new(4);
  *piVar3 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
            (local_48,piVar3,local_40);
  piVar3 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_(local_48);
  iVar1 = *piVar3;
  iVar2 = local_2c + local_3c;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::_unique_ptr(local_48);
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr(local_38);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(local_28);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(local_10);
  return iVar2 + iVar1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0x102c40
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
  __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
            ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator* @ 0x102c80
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  get(this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr @ 0x102cb0
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::_unique_ptr
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  int **ppiVar1;
  __2 *this_00;
  int **ppiVar2;
  ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                              ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  if (*ppiVar1 != (int *)0x0) {
    this_00 = (__2 *)get_deleter(this);
    ppiVar2 = (int **)move_int___(ppiVar1);
    test_cpp_smart_ptr()::$_2::operator__(this_00,*ppiVar2);
  }
  *ppiVar1 = (int *)0x0;
  return;
}

// Function: test_cpp_rtti @ 0x102d30
int test_cpp_rtti(void)
{
  int iVar1;
  long *this;
  long *this_00;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  long local_70;
  long local_60;
  int local_1c;
  this = (long *)operator_new(8);
  memset(this,0,8);
  RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
  this_00 = (long *)operator_new(8);
  memset(this_00,0,8);
  RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
  local_1c = 0;
  if (this == (long *)0x0) {
    __cxa_bad_typeid();
  }
  uVar2 = std::type_info::operator__
                    (*(type_info **)(*this + -8),(type_info *)&RTTIDerivedA::typeinfo);
  if ((uVar2 & 1) != 0) {
    local_1c = 10;
  }
  if (this_00 == (long *)0x0) {
    __cxa_bad_typeid();
  }
  uVar2 = std::type_info::operator__
                    (*(type_info **)(*this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
  if ((uVar2 & 1) != 0) {
    local_1c = local_1c + 0x14;
  }
  if (this == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_60 != 0) {
    iVar1 = RTTIDerivedA::derivedA_data();
    local_1c = iVar1 + local_1c;
  }
  if (this_00 == (long *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (local_70 != 0) {
    iVar1 = RTTIDerivedB::derivedB_data();
    local_1c = iVar1 + local_1c;
  }
  if (this == (long *)0x0) {
    __cxa_bad_typeid();
  }
  __s = (char *)std::type_info::name(*(type_info **)(*this + -8));
  sVar3 = strlen(__s);
  if (this != (long *)0x0) {
    (**(code **)(*this + 8))();
  }
  if (this_00 != (long *)0x0) {
    (**(code **)(*this_00 + 8))();
  }
  return local_1c + (int)sVar3;
}

// Function: test_cpp_oo_features @ 0x102f70
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

// Function: main @ 0x103080
undefined8 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x1030a0
void __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
          (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
          )
{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
            ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x1030d0
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __2 *p_Var1;
  int *local_18;
  __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_10;
  local_18 = param_1;
  local_10 = this;
  p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
            ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_18,p_Var1);
  return;
}

// Function: std::forward<test_cpp_smart_ptr()::$_2_const&> @ 0x103110
__2 * std::forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
  return (__2 *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 0x103120
void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
          (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
  int **ppiVar1;
  __2 *p_Var2;
  ppiVar1 = forward_int___((type *)param_1);
  p_Var2 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  _Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
  _Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
            ((_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 0x103180
void __thiscall
std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
          (_Tuple_impl_0ul_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
  int **ppiVar1;
  forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  _Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
  ppiVar1 = forward_int___((type *)param_1);
  _Head_base<0ul,int*,false>::_Head_base_int___((_Head_base_0ul_int__false_ *)this,ppiVar1);
  return;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl @ 0x1031e0
void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)
{
  _Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
  return;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base @ 0x103210
void std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)
{
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x103220
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter @ 0x103240
undefined8 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: test_cpp_smart_ptr()::$_2::operator() @ 0x103270
void __thiscall test_cpp_smart_ptr()::$_2::operator__(__2 *this,int *param_1)
{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x1032b0
type * std::get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x1032d0
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x1032f0
void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter @ 0x103310
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_1ul_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::get<1ul,int*,test_cpp_smart_ptr()::$_2> @ 0x103330
type * std::get_1ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  __2 *p_Var1;
  p_Var1 = __get_helper_1ul_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}

// Function: std::__get_helper<1ul,test_cpp_smart_ptr()::$_2> @ 0x103350
__2 * std::__get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  __2 *p_Var1;
  p_Var1 = (__2 *)_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return p_Var1;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head @ 0x103370
void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head @ 0x103390
_Head_base * std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get @ 0x1033a0
undefined8 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x1033d0
undefined8 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
  return *puVar1;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x1033f0
type * std::get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x103410
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x103430
void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: SimpleClass::SimpleClass @ 0x103450
void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}

// Function: SimpleClass::setValue @ 0x103490
void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
  *(int *)this = param_1;
  return;
}

// Function: SimpleClass::getValue @ 0x1034b0
undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)
{
  return *(undefined4 *)this;
}

// Function: SimpleClass::compute @ 0x1034c0
long __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
  int iVar1;
  size_t sVar2;
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return (long)(iVar1 * param_1) + sVar2;
}

// Function: SimpleClass::getClassID @ 0x103500
undefined8 SimpleClass::getClassID(void)
{
  return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x103510
void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,ulong param_1)
{
  undefined auVar1 [16];
  ulong uVar2;
  void *pvVar3;
  ulong local_20;
  *(ulong *)(this + 8) = param_1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  uVar2 = SUB168(auVar1 * ZEXT816(4),0);
  if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  pvVar3 = operator_new__(uVar2);
  *(void **)this = pvVar3;
  for (local_20 = 0; local_20 < param_1; local_20 = local_20 + 1) {
    *(int *)(*(long *)this + local_20 * 4) = (int)local_20 * 10;
  }
  instance_count = instance_count + 1;
  return;
}

// Function: LifecycleClass::getData @ 0x1035b0
undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,ulong param_1)
{
  undefined4 local_24;
  if (param_1 < *(ulong *)(this + 8)) {
    local_24 = *(undefined4 *)(*(long *)this + param_1 * 4);
  }
  else {
    local_24 = 0xffffffff;
  }
  return local_24;
}

// Function: LifecycleClass::getInstanceCount @ 0x103600
undefined4 LifecycleClass::getInstanceCount(void)
{
  return instance_count;
}

// Function: LifecycleClass::~LifecycleClass @ 0x103610
void __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}

// Function: Base::Base @ 0x103650
void __thiscall Base::Base(Base *this)
{
  *(undefined ***)this = &PTR_virtual_func_00108878;
  return;
}

// Function: Derived::Derived @ 0x103670
void __thiscall Derived::Derived(Derived *this,int param_1)
{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_001088b8;
  *(int *)(this + 8) = param_1;
  return;
}

// Function: Base::virtual_func @ 0x1036b0
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x1036d0
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return param_1 * *(int *)(this + 8);
}

// Function: Derived::~Derived @ 0x1036f0
void __thiscall Derived::_Derived(Derived *this)
{
  Base::_Base((Base *)this);
  return;
}

// Function: Base::~Base @ 0x103710
void __thiscall Base::_Base(Base *this)
{
  return;
}

// Function: MultiDerived::MultiDerived @ 0x103720
void __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 0x10));
  *(undefined ***)this = &PTR_funcA_00108900;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00108930;
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x103770
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  BaseB::_BaseB((BaseB *)(this + 0x10));
  BaseA::_BaseA((BaseA *)this);
  return;
}

// Function: DiamondDerived::DiamondDerived @ 0x1037a0
void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x20));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 0x10));
  *(undefined8 *)this = 0x108a08;
  *(undefined8 *)(this + 0x20) = 0x108a70;
  *(undefined8 *)(this + 0x10) = 0x108a38;
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x103830
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x20));
  return;
}

// Function: Point::Point @ 0x103870
void __thiscall Point::Point(Point *this,int param_1,int param_2)
{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

// Function: Point::operator+ @ 0x103890
undefined8 __thiscall Point::operator_(Point *this,Point *param_1)
{
  undefined8 local_10;
  Point((Point *)&local_10,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
       );
  return local_10;
}

// Function: Point::operator== @ 0x1038d0
bool __thiscall Point::operator__(Point *this,Point *param_1)
{
  bool local_19;
  local_19 = false;
  if (*(int *)this == *(int *)param_1) {
    local_19 = *(int *)(this + 4) == *(int *)(param_1 + 4);
  }
  return local_19;
}

// Function: Point::operator++ @ 0x103920
void __thiscall Point::operator__(Point *this)
{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

// Function: template_max<int> @ 0x103940
int template_max_int_(int param_1,int param_2)
{
  int local_14;
  local_14 = param_2;
  if (param_2 < param_1) {
    local_14 = param_1;
  }
  return local_14;
}

// Function: template_max<double> @ 0x103970
double template_max_double_(double param_1,double param_2)
{
  double local_20;
  local_20 = param_2;
  if (param_2 < param_1) {
    local_20 = param_1;
  }
  return local_20;
}

// Function: template_swap<int> @ 0x1039b0
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x1039e0
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x103a00
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

// Function: Container<int>::get @ 0x103a40
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 local_c;
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    local_c = 0;
  }
  else {
    local_c = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return local_c;
}

// Function: Container<int>::getSize @ 0x103a90
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x103ab0
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x103ad0
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

// Function: Container<double>::get @ 0x103b10
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined8 local_10;
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined8 *)(this + (long)param_1 * 8);
  }
  return local_10;
}

// Function: Container<double>::getSize @ 0x103b70
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void> @ 0x103b90
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
          (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::operator* @ 0x103bc0
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator_
          (unique_ptr_int_std__default_delete_int__ *this)
{
  get(this);
  return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x103bf0
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
  return (type *)param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr @ 0x103c00
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
             (__uniq_ptr_data *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x103c30
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
          (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x103c60
long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
          (unique_ptr_int___std__default_delete_int____ *this,ulong param_1)
{
  long lVar1;
  lVar1 = get(this);
  return lVar1 + param_1 * 4;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x103ca0
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
          (unique_ptr_int___std__default_delete_int____ *this)
{
  long *plVar1;
  undefined8 uVar2;
  plVar1 = (long *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                             ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  if (*plVar1 != 0) {
    uVar2 = get_deleter(this);
    _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
              (uVar2,*plVar1);
  }
  *plVar1 = 0;
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x103d10
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

// Function: RTTIDerivedA::RTTIDerivedA @ 0x103d80
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00108d50;
  return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x103dc0
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00108da0;
  return;
}

// Function: std::type_info::operator== @ 0x103e00
bool __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
  int iVar1;
  bool local_29;
  bool local_19;
  local_19 = true;
  if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
    local_29 = false;
    if (**(char **)(this + 8) != '*') {
      iVar1 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
      local_29 = iVar1 == 0;
    }
    local_19 = local_29;
  }
  return local_19;
}

// Function: RTTIDerivedA::derivedA_data @ 0x103e80
undefined8 RTTIDerivedA::derivedA_data(void)
{
  return 100;
}

// Function: RTTIDerivedB::derivedB_data @ 0x103e90
undefined8 RTTIDerivedB::derivedB_data(void)
{
  return 200;
}

// Function: std::type_info::name @ 0x103ea0
long __thiscall std::type_info::name(type_info *this)
{
  long local_20;
  if (**(char **)(this + 8) == '*') {
    local_20 = *(long *)(this + 8) + 1;
  }
  else {
    local_20 = *(long *)(this + 8);
  }
  return local_20;
}

// Function: Base::getName @ 0x103ef0
undefined * Base::getName(void)
{
  return &DAT_001051a1;
}

// Function: Base::~Base @ 0x103f10
void __thiscall Base::_Base(Base *this)
{
  _Base(this);
  operator_delete(this);
  return;
}

// Function: Derived::getName @ 0x103f40
char * Derived::getName(void)
{
  return "Derived";
}

// Function: Derived::~Derived @ 0x103f60
void __thiscall Derived::_Derived(Derived *this)
{
  _Derived(this);
  operator_delete(this);
  return;
}

// Function: BaseA::BaseA @ 0x103f90
void __thiscall BaseA::BaseA(BaseA *this)
{
  *(undefined ***)this = &PTR_funcA_001089b0;
  return;
}

// Function: BaseB::BaseB @ 0x103fb0
void __thiscall BaseB::BaseB(BaseB *this)
{
  *(undefined ***)this = &PTR_funcB_001089d8;
  return;
}

// Function: MultiDerived::funcA @ 0x103fd0
undefined8 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x103fe0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this);
  operator_delete(this);
  return;
}

// Function: MultiDerived::funcB @ 0x104010
undefined8 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x104020
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
  funcB();
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x104040
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x104060
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: BaseA::funcA @ 0x104080
undefined8 BaseA::funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x104090
void __thiscall BaseA::_BaseA(BaseA *this)
{
  return;
}

// Function: BaseA::~BaseA @ 0x1040a0
void __thiscall BaseA::_BaseA(BaseA *this)
{
  _BaseA(this);
  operator_delete(this);
  return;
}

// Function: BaseB::funcB @ 0x1040d0
undefined8 BaseB::funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x1040e0
void __thiscall BaseB::_BaseB(BaseB *this)
{
  return;
}

// Function: BaseB::~BaseB @ 0x1040f0
void __thiscall BaseB::_BaseB(BaseB *this)
{
  _BaseB(this);
  operator_delete(this);
  return;
}

// Function: VirtualBase::VirtualBase @ 0x104120
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(undefined ***)this = &PTR_func_00108c38;
  return;
}

// Function: MiddleA::MiddleA @ 0x104140
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
  undefined8 *in_RSI;
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
  return;
}

// Function: MiddleB::MiddleB @ 0x104170
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
  undefined8 *in_RSI;
  *(undefined8 *)this = *in_RSI;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_RSI[1];
  return;
}

// Function: MiddleA::func @ 0x1041a0
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x1041c0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
  return;
}

// Function: MiddleA::~MiddleA @ 0x104200
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::func @ 0x104230
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: MiddleA::~MiddleA @ 0x104250
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleA::~MiddleA @ 0x104270
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleB::func @ 0x104290
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1042b0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
  return;
}

// Function: MiddleB::~MiddleB @ 0x1042f0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  operator_delete(this);
  return;
}

// Function: MiddleB::func @ 0x104320
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: MiddleB::~MiddleB @ 0x104340
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleB::~MiddleB @ 0x104360
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::func @ 0x104380
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1043a0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this);
  return;
}

// Function: DiamondDerived::func @ 0x1043d0
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1043f0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104410
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::func @ 0x104430
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104450
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104470
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: VirtualBase::func @ 0x104490
undefined8 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x1044a0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x1044b0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  _VirtualBase(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::~MiddleA @ 0x1044e0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  return;
}

// Function: MiddleB::~MiddleB @ 0x1044f0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104500
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  MiddleB::_MiddleB((MiddleB *)(this + 0x10));
  MiddleA::_MiddleA((MiddleA *)this);
  return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x104550
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x104580
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

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x1045e0
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
  return (type *)param_1;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x1045f0
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x104620
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_0ul_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: __clang_call_terminate @ 0x104640
void __clang_call_terminate(void)
{
  __cxa_begin_catch();
  std::terminate();
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl @ 0x104650
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl @ 0x104690
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
  return;
}

// Function: std::get<0ul,int*,std::default_delete<int>> @ 0x1046a0
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int>> @ 0x1046c0
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head @ 0x1046e0
void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x104700
_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: RTTIBase::RTTIBase @ 0x104710
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(undefined ***)this = &PTR__RTTIBase_00108d78;
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x104730
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x104750
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  _RTTIDerivedA(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x104780
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x104790
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return;
}

// Function: RTTIBase::~RTTIBase @ 0x1047a0
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  _RTTIBase(this);
  operator_delete(this);
  return;
}

// Function: RTTIBase::getType @ 0x1047d0
undefined8 RTTIBase::getType(void)
{
  return 0;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1047e0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x104800
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  _RTTIDerivedB(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x104830
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x104840
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x104870
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

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x1048b0
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
          (tuple_int__std__default_delete_int__ *this)
{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl @ 0x1048e0
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base_0ul_int__false_ *)this);
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl @ 0x104910
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)
{
  _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_Head_base @ 0x104930
void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base_0ul_int__false_ *this)
{
  *(undefined8 *)this = 0;
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base @ 0x104950
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)
{
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x104960
undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr_int_std__default_delete_int__ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::default_delete<int>::operator() @ 0x104990
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::move<int*&> @ 0x1049d0
type * std::move_int___(int **param_1)
{
  return (type *)param_1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x1049e0
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_1ul_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: std::get<1ul,int*,std::default_delete<int>> @ 0x104a00
type * std::get_1ul_int__std__default_delete_int__(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1ul,std::default_delete<int>> @ 0x104a20
default_delete * std::__get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head @ 0x104a40
void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_M_head @ 0x104a60
_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x104a70
undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x104aa0
undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__std__default_delete_int__((tuple *)this);
  return *puVar1;
}

// Function: std::get<0ul,int*,std::default_delete<int>> @ 0x104ac0
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int>> @ 0x104ae0
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head @ 0x104b00
void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x104b20
_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x104b30
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x104b60
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

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x104ba0
void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
          (tuple_int__std__default_delete_int____ *this)
{
  _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x104bd0
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_0ul_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl @ 0x104bf0
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
  _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base_0ul_int__false_ *)this);
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl @ 0x104c20
void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)
{
  _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base @ 0x104c40
void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)
{
  return;
}

// Function: std::get<0ul,int*,std::default_delete<int[]>> @ 0x104c50
type * std::get_0ul_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int[]>> @ 0x104c70
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head @ 0x104c90
void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x104cb0
undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x104ce0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
               (undefined8 param_1,void *param_2)
{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x104d20
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_1ul_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::get<1ul,int*,std::default_delete<int[]>> @ 0x104d40
type * std::get_1ul_int__std__default_delete_int____(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1ul_std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1ul,std::default_delete<int[]>> @ 0x104d60
default_delete * std::__get_helper_1ul_std__default_delete_int____(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head @ 0x104d80
void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head @ 0x104da0
_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x104db0
undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x104de0
undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__std__default_delete_int____((tuple *)this);
  return *puVar1;
}

// Function: std::get<0ul,int*,std::default_delete<int[]>> @ 0x104e00
type * std::get_0ul_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int[]>> @ 0x104e20
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head @ 0x104e40
void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::forward<int*&> @ 0x104e60
int ** std::forward_int___(type *param_1)
{
  return (int **)param_1;
}

// Function: std::_Head_base<0ul,int*,false>::_Head_base<int*&> @ 0x104e70
void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base_int___(_Head_base_0ul_int__false_ *this,int **param_1)
{
  int **ppiVar1;
  ppiVar1 = forward_int___((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}

// Function: _fini @ 0x104ea4
void _fini(void)
{
  return;
}

