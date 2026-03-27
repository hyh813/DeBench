// Decompiled by BinaryAI
// SHA256: 2939969a9bdb857b5c308b77a0260c3e11673c5180656257c2fbc268fd08f1ef

// Function: _init @ 0x10d2c
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10d4c
void * operator_new(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::std::terminate @ 0x10d58
void std::terminate(void)
{
  terminate();
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10d64
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10d70
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::printf @ 0x10d7c
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10d88
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x10d94
void * operator_new__(uint param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10da0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::operator.delete @ 0x10dac
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x10db8
void __cxa_bad_typeid(void)
{
  __cxa_bad_typeid();
  return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10dc4
void __cxa_end_cleanup(void)
{
  __cxa_end_cleanup();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10dd0
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x10ddc
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10de8
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10df4
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::strlen @ 0x10e00
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10e0c
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10e18
void __aeabi_d2iz(void)
{
  __aeabi_d2iz();
  return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10e24
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10e30
void __gxx_personality_v0(void)
{
  __gxx_personality_v0();
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x10e3c
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10e48
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10e54
void __aeabi_dcmpgt(void)
{
  __aeabi_dcmpgt();
  return;
}

// Function: <EXTERNAL>::strncpy @ 0x10e60
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x10e78
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: __cxx_global_var_init @ 0x10e84
void __cxx_global_var_init(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10ed0
void _GLOBAL__sub_I_5_1_cpp(void)
{
  __cxx_global_var_init();
  return;
}

// Function: _start @ 0x10ee4
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x10f28
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x10f4c
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10f90
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10fe0
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}

// Function: test_cpp_member_func @ 0x1104c
int test_cpp_member_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass aSStack_2c [36];
  SimpleClass::SimpleClass(aSStack_2c,5,"Test");
  SimpleClass::setValue(aSStack_2c,10);
  iVar1 = SimpleClass::getValue(aSStack_2c);
  iVar2 = SimpleClass::compute(aSStack_2c,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x110c8
int test_cpp_constructor(void)
{
  int iVar1;
  LifecycleClass aLStack_14 [8];
  int local_c;
  local_c = 0;
  LifecycleClass::LifecycleClass(aLStack_14,5);
  iVar1 = LifecycleClass::getData(aLStack_14,2);
  local_c = local_c + iVar1;
  iVar1 = LifecycleClass::getInstanceCount();
  local_c = local_c + iVar1;
  LifecycleClass::_LifecycleClass(aLStack_14);
  iVar1 = LifecycleClass::getInstanceCount();
  return iVar1 * 1000 + local_c;
}

// Function: call_virtual_func @ 0x11174
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)(param_1,param_2);
  return;
}

// Function: test_cpp_virtual_func @ 0x111ac
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Derived aDStack_14 [8];
  Base aBStack_c [4];
  Base::Base(aBStack_c);
  Derived::Derived(aDStack_14,3);
  iVar1 = Base::virtual_func(aBStack_c,5);
  iVar2 = Derived::virtual_func(aDStack_14,5);
  iVar3 = call_virtual_func(aBStack_c,5);
  iVar4 = call_virtual_func((Base *)aDStack_14,5);
  Derived::_Derived(aDStack_14);
  Base::_Base(aBStack_c);
  return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x112c0
int test_cpp_multiple_inheritance(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  code ***local_38;
  code **local_18 [4];
  MultiDerived::MultiDerived((MultiDerived *)local_18);
  local_18[1] = (code **)0x64;
  local_18[3] = (code **)0xc8;
  local_38 = (code ***)0x0;
  if (local_18 != (code ***)0x0) {
    local_38 = local_18 + 2;
  }
  iVar1 = (**local_18[0])();
  iVar2 = (***local_38)();
  iVar3 = (int)local_18 - (int)local_38;
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  MultiDerived::_MultiDerived((MultiDerived *)local_18);
  return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_diamond_inheritance @ 0x113c0
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  undefined4 *local_38;
  int local_20 [6];
  DiamondDerived::DiamondDerived((DiamondDerived *)local_20);
  *(undefined4 *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 0x32;
  local_38 = (undefined4 *)0x0;
  if (local_20 != (int *)0x0) {
    local_38 = (undefined4 *)((int)local_20 + *(int *)(local_20[0] + -0xc));
  }
  iVar1 = (**(code **)*local_38)();
  *(undefined4 *)((int)local_20 + *(int *)(local_20[0] + -0xc) + 4) = 100;
  iVar2 = (**(code **)*local_38)();
  DiamondDerived::_DiamondDerived((DiamondDerived *)local_20);
  return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x114c4
int test_cpp_operator_overload(void)
{
  byte bVar1;
  int iVar2;
  int local_20;
  int local_1c;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  Point::Point(aPStack_10,1,2);
  Point::Point(aPStack_18,3,4);
  Point::operator_((Point *)&local_20,aPStack_10);
  bVar1 = Point::operator__(aPStack_10,aPStack_18);
  Point::operator__((Point *)&local_20);
  iVar2 = local_20 + local_1c + 10;
  if ((bVar1 & 1) != 0) {
    iVar2 = local_20 + local_1c;
  }
  return iVar2;
}

// Function: test_cpp_template_func @ 0x11550
int test_cpp_template_func(void)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  int in_stack_ffffffe0;
  int iVar4;
  int in_stack_ffffffe4;
  int iVar5;
  iVar1 = template_max_int_(3,7);
  uVar2 = 0;
  template_max_double_
            ((double)CONCAT44(in_stack_ffffffdc,in_stack_ffffffd8),
             (double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0));
  iVar5 = 10;
  iVar4 = 0x14;
  template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe0);
  iVar3 = __aeabi_d2iz(uVar2,extraout_r1);
  return iVar1 + iVar3 + iVar5 + iVar4;
}

// Function: test_cpp_template_class @ 0x115e8
int test_cpp_template_class(void)
{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  Container_int_ *this;
  Container_double_ *this_00;
  Container_double_ aCStack_98 [92];
  int local_3c;
  int local_38;
  Container_int_ aCStack_34 [44];
  this = aCStack_34;
  Container<int>::Container(this);
  Container<int>::push(this,10);
  Container<int>::push(this,0x14);
  Container<int>::push(this,0x1e);
  local_38 = Container<int>::get(this,0);
  local_3c = Container<int>::getSize(this);
  this_00 = aCStack_98;
  Container<double>::Container(this_00);
  Container<double>::push((double)CONCAT44(this_00,this));
  uVar3 = Container<double>::get(this_00,0);
  iVar1 = local_38 + local_3c;
  iVar2 = __aeabi_d2iz((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
  return iVar1 + iVar2;
}

// Function: test_cpp_lambda @ 0x116b4
int test_cpp_lambda(void)
{
  int iVar1;
  auto aVar2;
  __0 a_Stack_1c [4];
  undefined4 local_18;
  undefined4 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  local_c = 10;
  local_10 = 0x14;
  local_18 = 10;
  local_14 = &local_10;
  iVar1 = test_cpp_lambda()::$_1::operator__((__1 *)&local_18,3);
  aVar2 = test_cpp_lambda()::$_0::operator__(a_Stack_1c,10,0x14);
  return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x11724
int __thiscall test_cpp_lambda()::$_1::operator__(__1 *this,int param_1)
{
  **(int **)(this + 4) = **(int **)(this + 4) + 5;
  return param_1 * *(int *)this + **(int **)(this + 4);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x11760
auto __thiscall test_cpp_lambda()::$_0::operator__(__0 *this,int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x11784
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x118f4
int test_cpp_smart_ptr(void)
{
  int *piVar1;
  undefined4 *puVar2;
  type *ptVar3;
  int iVar4;
  int iVar5;
  unique_ptr_int_test_cpp_smart_ptr______2_ auStack_2c [4];
  __2 a_Stack_28 [4];
  int local_24;
  unique_ptr_int___std__default_delete_int____ auStack_20 [4];
  int local_1c;
  unique_ptr_int_std__default_delete_int__ auStack_18 [12];
  unique_ptr_int_std__default_delete_int__ auStack_c [4];
  piVar1 = (int *)operator_new(4);
  *piVar1 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
            (auStack_c,piVar1);
  puVar2 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator_(auStack_c);
  *puVar2 = 200;
  ptVar3 = std::move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_c);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_18,(unique_ptr *)ptVar3);
  piVar1 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator_(auStack_18);
  local_1c = *piVar1;
  piVar1 = (int *)operator_new__(0x14);
  *piVar1 = 1;
  piVar1[1] = 2;
  piVar1[2] = 3;
  piVar1[3] = 4;
  piVar1[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr_int__std__default_delete_int____void_bool_(auStack_20,piVar1);
  piVar1 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator__(auStack_20,2);
  local_24 = *piVar1;
  piVar1 = (int *)operator_new(4);
  *piVar1 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
            (auStack_2c,piVar1,a_Stack_28);
  piVar1 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_(auStack_2c);
  iVar4 = *piVar1;
  iVar5 = local_1c + local_24;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::_unique_ptr(auStack_2c);
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr(auStack_20);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(auStack_18);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(auStack_c);
  return iVar5 + iVar4;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0x11acc
unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
  __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
            ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
  return this;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator* @ 0x11b10
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  get(this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr @ 0x11b44
unique_ptr_int_test_cpp_smart_ptr______2_ * __thiscall
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
  return this;
}

// Function: test_cpp_rtti @ 0x11bd4
int test_cpp_rtti(void)
{
  int *this;
  int *this_00;
  int iVar1;
  char *__s;
  size_t sVar2;
  int local_44;
  int local_3c;
  int local_14;
  this = (int *)operator_new(4);
  *this = 0;
  RTTIDerivedA::RTTIDerivedA((RTTIDerivedA *)this);
  this_00 = (int *)operator_new(4);
  *this_00 = 0;
  RTTIDerivedB::RTTIDerivedB((RTTIDerivedB *)this_00);
  local_14 = 0;
  if (this == (int *)0x0) {
    __cxa_bad_typeid();
  }
  iVar1 = std::type_info::operator__
                    (*(type_info **)(*this + -4),(type_info *)&RTTIDerivedA::typeinfo);
  if (iVar1 != 0) {
    local_14 = 10;
  }
  if (this_00 == (int *)0x0) {
    __cxa_bad_typeid();
  }
  iVar1 = std::type_info::operator__
                    (*(type_info **)(*this_00 + -4),(type_info *)&RTTIDerivedB::typeinfo);
  if (iVar1 != 0) {
    local_14 = local_14 + 0x14;
  }
  if (this == (int *)0x0) {
    local_3c = 0;
  }
  else {
    local_3c = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_3c != 0) {
    iVar1 = RTTIDerivedA::derivedA_data();
    local_14 = local_14 + iVar1;
  }
  if (this_00 == (int *)0x0) {
    local_44 = 0;
  }
  else {
    local_44 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (local_44 != 0) {
    iVar1 = RTTIDerivedB::derivedB_data();
    local_14 = local_14 + iVar1;
  }
  if (this == (int *)0x0) {
    __cxa_bad_typeid();
  }
  __s = (char *)std::type_info::name(*(type_info **)(*this + -4));
  sVar2 = strlen(__s);
  if (this != (int *)0x0) {
    (**(code **)(*this + 4))();
  }
  if (this_00 != (int *)0x0) {
    (**(code **)(*this_00 + 4))();
  }
  return local_14 + sVar2;
}

// Function: test_cpp_oo_features @ 0x11e74
void test_cpp_oo_features(void)
{
  undefined4 uVar1;
  printf(&DAT_00014221);
  uVar1 = test_cpp_member_func();
  printf(&DAT_00014246,uVar1);
  uVar1 = test_cpp_constructor();
  printf(&DAT_00014264,uVar1);
  uVar1 = test_cpp_virtual_func();
  printf(&DAT_00014280,uVar1);
  uVar1 = test_cpp_multiple_inheritance();
  printf(&DAT_0001429c,uVar1);
  uVar1 = test_cpp_diamond_inheritance();
  printf(&DAT_000142b8,uVar1);
  uVar1 = test_cpp_operator_overload();
  printf(&DAT_000142d5,uVar1);
  uVar1 = test_cpp_template_func();
  printf(&DAT_000142f1,uVar1);
  uVar1 = test_cpp_template_class();
  printf(&DAT_0001430d,uVar1);
  uVar1 = test_cpp_lambda();
  printf(&DAT_00014329,uVar1);
  uVar1 = test_cpp_exception();
  printf(&DAT_00014345,uVar1);
  uVar1 = test_cpp_smart_ptr();
  printf(&DAT_00014362,uVar1);
  uVar1 = test_cpp_rtti();
  printf(&DAT_0001437f,uVar1);
  return;
}

// Function: main @ 0x11fb4
undefined4 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x11fe0
__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ * __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
          (__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *this,int *param_1,__2 *param_2
          )
{
  __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
            ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this,param_1,param_2);
  return this;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x1201c
__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ * __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __2 *p_Var1;
  int *local_10;
  __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_c;
  local_10 = param_1;
  local_c = this;
  p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
            ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_10,p_Var1);
  return this;
}

// Function: std::forward<test_cpp_smart_ptr()::$_2_const&> @ 0x12064
__2 * std::forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
  return (__2 *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 0x12078
tuple_int__test_cpp_smart_ptr______2_ * __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
          (tuple_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
  int **ppiVar1;
  __2 *p_Var2;
  ppiVar1 = forward_int___((type *)param_1);
  p_Var2 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  _Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
  _Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
            ((_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *)this,ppiVar1,p_Var2);
  return this;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 0x120d4
_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ * __thiscall
std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl_int___test_cpp_smart_ptr______2_const__void_
          (_Tuple_impl_0u_int__test_cpp_smart_ptr______2_ *this,int **param_1,__2 *param_2)
{
  int **ppiVar1;
  forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  _Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
  ppiVar1 = forward_int___((type *)param_1);
  _Head_base<0u,int*,false>::_Head_base_int___((_Head_base_0u_int__false_ *)this,ppiVar1);
  return this;
}

// Function: std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl @ 0x1212c
__2 * std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)
{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
  return param_1;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base @ 0x12160
__2 * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)
{
  return param_1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x12178
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter @ 0x1219c
undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: test_cpp_smart_ptr()::$_2::operator() @ 0x121d0
void __thiscall test_cpp_smart_ptr()::$_2::operator__(__2 *this,int *param_1)
{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x1221c
type * std::get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12240
int ** std::__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x12264
void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter @ 0x12288
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_1u_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::get<1u,int*,test_cpp_smart_ptr()::$_2> @ 0x122ac
type * std::get_1u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  __2 *p_Var1;
  p_Var1 = __get_helper_1u_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}

// Function: std::__get_helper<1u,test_cpp_smart_ptr()::$_2> @ 0x122d0
__2 * std::__get_helper_1u_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  __2 *p_Var1;
  p_Var1 = (__2 *)_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return p_Var1;
}

// Function: std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head @ 0x122f4
void std::_Tuple_impl<1u,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head @ 0x12318
_Head_base * std::_Head_base<1u,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get @ 0x1232c
undefined4 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x12360
undefined4 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)get_0u_int__test_cpp_smart_ptr______2_((tuple *)this);
  return *puVar1;
}

// Function: std::get<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x12388
type * std::get_0u_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,test_cpp_smart_ptr()::$_2> @ 0x123ac
int ** std::__get_helper_0u_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x123d0
void std::_Tuple_impl<0u,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: SimpleClass::SimpleClass @ 0x123f4
void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}

// Function: SimpleClass::setValue @ 0x12444
void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
  *(int *)this = param_1;
  return;
}

// Function: SimpleClass::getValue @ 0x12464
undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)
{
  return *(undefined4 *)this;
}

// Function: SimpleClass::compute @ 0x1247c
int __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
  size_t sVar1;
  int iVar2;
  iVar2 = *(int *)this;
  sVar1 = strlen((char *)(this + 4));
  return iVar2 * param_1 + sVar1;
}

// Function: SimpleClass::getClassID @ 0x124c4
undefined4 SimpleClass::getClassID(void)
{
  return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x124d0
LifecycleClass * __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,uint param_1)
{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  uint local_18;
  *(uint *)(this + 4) = param_1;
  iVar3 = param_1 - (param_1 & 0x3fffffff);
  if (iVar3 != 0) {
    iVar3 = 1;
  }
  uVar1 = param_1 << 2;
  if (iVar3 != 0) {
    uVar1 = 0xffffffff;
  }
  pvVar2 = operator_new__(uVar1);
  *(void **)this = pvVar2;
  for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
    *(uint *)(*(int *)this + local_18 * 4) = local_18 * 10;
  }
  instance_count = instance_count + 1;
  return this;
}

// Function: LifecycleClass::getData @ 0x1259c
undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,uint param_1)
{
  undefined4 local_10;
  if (param_1 < *(uint *)(this + 4)) {
    local_10 = *(undefined4 *)(*(int *)this + param_1 * 4);
  }
  else {
    local_10 = 0xffffffff;
  }
  return local_10;
}

// Function: LifecycleClass::getInstanceCount @ 0x125f4
undefined4 LifecycleClass::getInstanceCount(void)
{
  return instance_count;
}

// Function: LifecycleClass::~LifecycleClass @ 0x12604
LifecycleClass * __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return this;
}

// Function: Base::Base @ 0x1266c
void __thiscall Base::Base(Base *this)
{
  *(undefined ***)this = &PTR_virtual_func_00024c48;
  return;
}

// Function: Derived::Derived @ 0x12694
void __thiscall Derived::Derived(Derived *this,int param_1)
{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00024c68;
  *(int *)(this + 4) = param_1;
  return;
}

// Function: Base::virtual_func @ 0x126e0
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x126fc
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return param_1 * *(int *)(this + 4);
}

// Function: Derived::~Derived @ 0x12720
Derived * __thiscall Derived::_Derived(Derived *this)
{
  Base::_Base((Base *)this);
  return this;
}

// Function: Base::~Base @ 0x1274c
Base * __thiscall Base::_Base(Base *this)
{
  return this;
}

// Function: MultiDerived::MultiDerived @ 0x12760
void __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 8));
  *(undefined ***)this = &PTR_funcA_00024c8c;
  *(undefined ***)(this + 8) = &PTR_funcB_00024ca4;
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x127b4
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  BaseB::_BaseB((BaseB *)(this + 8));
  BaseA::_BaseA((BaseA *)this);
  return this;
}

// Function: DiamondDerived::DiamondDerived @ 0x127ec
void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x10));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 8));
  *(undefined ***)this = &PTR_func_00024d14;
  *(undefined ***)(this + 0x10) = &PTR_func_00024d48;
  *(undefined ***)(this + 8) = &PTR_func_00024d2c;
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12870
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
  return this;
}

// Function: Point::Point @ 0x128b4
void __thiscall Point::Point(Point *this,int param_1,int param_2)
{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

// Function: Point::operator+ @ 0x128e0
void __thiscall Point::operator_(Point *this,Point *param_1)
{
  int *in_r2;
  Point(this,*(int *)param_1 + *in_r2,*(int *)(param_1 + 4) + in_r2[1]);
  return;
}

// Function: Point::operator== @ 0x12924
bool __thiscall Point::operator__(Point *this,Point *param_1)
{
  bool bVar1;
  bVar1 = false;
  if (*(int *)this == *(int *)param_1) {
    bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
  }
  return bVar1;
}

// Function: Point::operator++ @ 0x1298c
void __thiscall Point::operator__(Point *this)
{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

// Function: template_max<int> @ 0x129b8
int template_max_int_(int param_1,int param_2)
{
  int local_c;
  local_c = param_2;
  if (param_2 < param_1) {
    local_c = param_1;
  }
  return local_c;
}

// Function: template_max<double> @ 0x129fc
double template_max_double_(double param_1,double param_2)
{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  double extraout_d0;
  __aeabi_dcmpgt(in_r0,in_r1,in_r2,in_r3);
  return extraout_d0;
}

// Function: template_swap<int> @ 0x12a74
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x12ab0
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x12acc
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
  int iVar1;
  if (*(int *)(this + 0x28) < 10) {
    iVar1 = *(int *)(this + 0x28);
    *(int *)(this + 0x28) = iVar1 + 1;
    *(int *)(this + iVar1 * 4) = param_1;
  }
  return;
}

// Function: Container<int>::get @ 0x12b14
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 local_4;
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined4 *)(this + param_1 * 4);
  }
  return local_4;
}

// Function: Container<int>::getSize @ 0x12b7c
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x12b94
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x12bb0
void Container<double>::push(double param_1)
{
  int in_r0;
  undefined4 *puVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  int iVar2;
  if (*(int *)(in_r0 + 0x50) < 10) {
    iVar2 = *(int *)(in_r0 + 0x50);
    *(int *)(in_r0 + 0x50) = iVar2 + 1;
    puVar1 = (undefined4 *)(in_r0 + iVar2 * 8);
    *puVar1 = in_r2;
    puVar1[1] = in_r3;
  }
  return;
}

// Function: Container<double>::get @ 0x12c04
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined4 local_8;
  undefined4 local_4;
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    local_4 = 0;
    local_8 = 0;
  }
  else {
    local_8 = *(undefined4 *)(this + param_1 * 8);
    local_4 = *(undefined4 *)((int)(this + param_1 * 8) + 4);
  }
  return CONCAT44(local_4,local_8);
}

// Function: Container<double>::getSize @ 0x12c7c
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void> @ 0x12c94
unique_ptr_int_std__default_delete_int__ * __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
          (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
  return this;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::operator* @ 0x12cd0
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator_
          (unique_ptr_int_std__default_delete_int__ *this)
{
  get(this);
  return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x12d04
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
  return (type *)param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr @ 0x12d18
unique_ptr_int_std__default_delete_int__ * __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
             (__uniq_ptr_data *)param_1);
  return this;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x12d4c
unique_ptr_int___std__default_delete_int____ * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
          (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
  return this;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x12d88
int __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
          (unique_ptr_int___std__default_delete_int____ *this,uint param_1)
{
  int iVar1;
  iVar1 = get(this);
  return iVar1 + param_1 * 4;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x12dc8
unique_ptr_int___std__default_delete_int____ * __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
          (unique_ptr_int___std__default_delete_int____ *this)
{
  int *piVar1;
  undefined4 uVar2;
  piVar1 = (int *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  if (*piVar1 != 0) {
    uVar2 = get_deleter(this);
    _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
              (uVar2,*piVar1);
  }
  *piVar1 = 0;
  return this;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x12e3c
unique_ptr_int_std__default_delete_int__ * __thiscall
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
  return this;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x12ec0
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00024ec4;
  return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x12f00
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00024eec;
  return;
}

// Function: std::type_info::operator== @ 0x12f40
bool __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
  int iVar1;
  bool bVar2;
  bVar2 = true;
  if ((*(int *)(this + 4) != *(int *)(param_1 + 4)) && (bVar2 = false, **(char **)(this + 4) != '*')
     ) {
    iVar1 = strcmp(*(char **)(this + 4),*(char **)(param_1 + 4));
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

// Function: RTTIDerivedA::derivedA_data @ 0x12fe0
undefined4 RTTIDerivedA::derivedA_data(void)
{
  return 100;
}

// Function: RTTIDerivedB::derivedB_data @ 0x12ff4
undefined4 RTTIDerivedB::derivedB_data(void)
{
  return 200;
}

// Function: std::type_info::name @ 0x13008
int __thiscall std::type_info::name(type_info *this)
{
  int local_c;
  if (**(char **)(this + 4) == '*') {
    local_c = *(int *)(this + 4) + 1;
  }
  else {
    local_c = *(int *)(this + 4);
  }
  return local_c;
}

// Function: Base::getName @ 0x1305c
undefined * Base::getName(void)
{
  return &DAT_0001439d;
}

// Function: Base::~Base @ 0x13078
void __thiscall Base::_Base(Base *this)
{
  _Base(this);
  operator_delete(this);
  return;
}

// Function: Derived::getName @ 0x130a8
char * Derived::getName(void)
{
  return "Derived";
}

// Function: Derived::~Derived @ 0x130c4
void __thiscall Derived::_Derived(Derived *this)
{
  _Derived(this);
  operator_delete(this);
  return;
}

// Function: BaseA::BaseA @ 0x130f4
void __thiscall BaseA::BaseA(BaseA *this)
{
  *(undefined ***)this = &PTR_funcA_00024ce8;
  return;
}

// Function: BaseB::BaseB @ 0x1311c
void __thiscall BaseB::BaseB(BaseB *this)
{
  *(undefined ***)this = &PTR_funcB_00024cfc;
  return;
}

// Function: MultiDerived::funcA @ 0x13144
undefined4 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x13158
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this);
  operator_delete(this);
  return;
}

// Function: MultiDerived::funcB @ 0x13188
undefined4 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x1319c
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
  funcB();
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x131b4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -8);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x131d0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -8);
  return;
}

// Function: BaseA::funcA @ 0x131e8
undefined4 BaseA::funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x131fc
BaseA * __thiscall BaseA::_BaseA(BaseA *this)
{
  return this;
}

// Function: BaseA::~BaseA @ 0x13210
void __thiscall BaseA::_BaseA(BaseA *this)
{
  _BaseA(this);
  operator_delete(this);
  return;
}

// Function: BaseB::funcB @ 0x13240
undefined4 BaseB::funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x13254
BaseB * __thiscall BaseB::_BaseB(BaseB *this)
{
  return this;
}

// Function: BaseB::~BaseB @ 0x13268
void __thiscall BaseB::_BaseB(BaseB *this)
{
  _BaseB(this);
  operator_delete(this);
  return;
}

// Function: VirtualBase::VirtualBase @ 0x13298
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(undefined ***)this = &PTR_func_00024e38;
  return;
}

// Function: MiddleA::MiddleA @ 0x132c0
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
  undefined4 *in_r1;
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return;
}

// Function: MiddleB::MiddleB @ 0x132f4
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
  undefined4 *in_r1;
  *(undefined4 *)this = *in_r1;
  *(undefined4 *)(this + *(int *)(*(int *)this + -0xc)) = in_r1[1];
  return;
}

// Function: MiddleA::func @ 0x13328
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x13350
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 8));
  return this;
}

// Function: MiddleA::~MiddleA @ 0x13394
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::func @ 0x133c4
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: MiddleA::~MiddleA @ 0x133e4
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleA::~MiddleA @ 0x13408
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleB::func @ 0x13428
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x13450
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 8));
  return this;
}

// Function: MiddleB::~MiddleB @ 0x13494
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  operator_delete(this);
  return;
}

// Function: MiddleB::func @ 0x134c4
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: MiddleB::~MiddleB @ 0x134e4
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: MiddleB::~MiddleB @ 0x13508
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: DiamondDerived::func @ 0x13528
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13550
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this);
  return;
}

// Function: DiamondDerived::func @ 0x13580
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13598
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -8);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x135b4
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -8);
  return;
}

// Function: DiamondDerived::func @ 0x135cc
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(int *)(*(int *)this + -0xc));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x135ec
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x13610
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
  return;
}

// Function: VirtualBase::func @ 0x13630
undefined4 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x13644
VirtualBase * __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return this;
}

// Function: VirtualBase::~VirtualBase @ 0x13658
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  _VirtualBase(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::~MiddleA @ 0x13688
MiddleA * __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  return this;
}

// Function: MiddleB::~MiddleB @ 0x136a0
MiddleB * __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x136b8
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  MiddleB::_MiddleB((MiddleB *)(this + 8));
  MiddleA::_MiddleA((MiddleA *)this);
  return this;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x13708
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
  return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x1373c
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int__ *this,__uniq_ptr_impl *param_1)
{
  undefined4 *puVar1;
  move_std__tuple_int__std__default_delete_int____((tuple *)param_1);
  tuple<int*,std::default_delete<int>>::tuple((tuple *)this);
  puVar1 = (undefined4 *)_M_ptr((__uniq_ptr_impl_int_std__default_delete_int__ *)param_1);
  *puVar1 = 0;
  return this;
}

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x1379c
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
  return (type *)param_1;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x137b0
tuple * std::tuple<int*,std::default_delete<int>>::tuple(tuple *param_1)
{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)param_1);
  return param_1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x137e4
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_0u_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: __clang_call_terminate @ 0x13808
void __clang_call_terminate(void)
{
  __cxa_begin_catch();
  std::terminate();
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl @ 0x13810
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
  undefined4 *in_r1;
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(param_1);
  *(undefined4 *)param_1 = *in_r1;
  return;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl @ 0x13850
_Tuple_impl * std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
  return param_1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x13868
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x1388c
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head @ 0x138b0
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0u,int*,false>::_M_head @ 0x138d4
_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: RTTIBase::RTTIBase @ 0x138e8
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(undefined ***)this = &PTR__RTTIBase_00024ed8;
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x13910
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1393c
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  _RTTIDerivedA(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x1396c
undefined4 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x13980
RTTIBase * __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return this;
}

// Function: RTTIBase::~RTTIBase @ 0x13994
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  _RTTIBase(this);
  operator_delete(this);
  return;
}

// Function: RTTIBase::getType @ 0x139c4
undefined4 RTTIBase::getType(void)
{
  return 0;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x139d8
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return this;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x13a04
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  _RTTIDerivedB(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x13a34
undefined4 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x13a48
__uniq_ptr_data_int_std__default_delete_int__true_true_ * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
  return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x13a7c
__uniq_ptr_impl_int_std__default_delete_int__ * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int__ *this,int *param_1)
{
  int **ppiVar1;
  tuple<int*,std::default_delete<int>>::tuple_true_true_
            ((tuple_int__std__default_delete_int__ *)this);
  ppiVar1 = (int **)_M_ptr(this);
  *ppiVar1 = param_1;
  return this;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x13ac8
tuple_int__std__default_delete_int__ * __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
          (tuple_int__std__default_delete_int__ *this)
{
  _Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0u_int__std__default_delete_int__ *)this);
  return this;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl @ 0x13afc
_Tuple_impl_0u_int__std__default_delete_int__ * __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0u_int__std__default_delete_int__ *this)
{
  _Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_1u_std__default_delete_int__ *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
  return this;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl @ 0x13b30
_Tuple_impl_1u_std__default_delete_int__ * __thiscall
std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_1u_std__default_delete_int__ *this)
{
  _Head_base<1u,std::default_delete<int>,true>::_Head_base
            ((_Head_base_1u_std__default_delete_int__true_ *)this);
  return this;
}

// Function: std::_Head_base<0u,int*,false>::_Head_base @ 0x13b5c
void __thiscall std::_Head_base<0u,int*,false>::_Head_base(_Head_base_0u_int__false_ *this)
{
  *(undefined4 *)this = 0;
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int>,true>::_Head_base @ 0x13b78
_Head_base_1u_std__default_delete_int__true_ * __thiscall
std::_Head_base<1u,std::default_delete<int>,true>::_Head_base
          (_Head_base_1u_std__default_delete_int__true_ *this)
{
  return this;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x13b8c
undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr_int_std__default_delete_int__ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::default_delete<int>::operator() @ 0x13bc0
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::move<int*&> @ 0x13c00
type * std::move_int___(int **param_1)
{
  return (type *)param_1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x13c14
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_1u_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: std::get<1u,int*,std::default_delete<int>> @ 0x13c38
type * std::get_1u_int__std__default_delete_int__(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1u_std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1u,std::default_delete<int>> @ 0x13c5c
default_delete * std::__get_helper_1u_std__default_delete_int__(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int>>::_M_head @ 0x13c80
void std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1u,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int>,true>::_M_head @ 0x13ca4
_Head_base * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x13cb8
undefined4 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x13cec
undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)get_0u_int__std__default_delete_int__((tuple *)this);
  return *puVar1;
}

// Function: std::get<0u,int*,std::default_delete<int>> @ 0x13d14
type * std::get_0u_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int>> @ 0x13d38
int ** std::__get_helper_0u_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head @ 0x13d5c
void std::_Tuple_impl<0u,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0u,int*,false>::_M_head @ 0x13d80
_Head_base * std::_Head_base<0u,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x13d94
__uniq_ptr_data_int_std__default_delete_int____true_true_ * __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
  return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x13dc8
__uniq_ptr_impl_int_std__default_delete_int____ * __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
          (__uniq_ptr_impl_int_std__default_delete_int____ *this,int *param_1)
{
  int **ppiVar1;
  tuple<int*,std::default_delete<int[]>>::tuple_true_true_
            ((tuple_int__std__default_delete_int____ *)this);
  ppiVar1 = (int **)_M_ptr(this);
  *ppiVar1 = param_1;
  return this;
}

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x13e14
tuple_int__std__default_delete_int____ * __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
          (tuple_int__std__default_delete_int____ *this)
{
  _Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_0u_int__std__default_delete_int____ *)this);
  return this;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x13e48
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_0u_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl @ 0x13e6c
_Tuple_impl_0u_int__std__default_delete_int____ * __thiscall
std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_0u_int__std__default_delete_int____ *this)
{
  _Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_1u_std__default_delete_int____ *)this);
  _Head_base<0u,int*,false>::_Head_base((_Head_base_0u_int__false_ *)this);
  return this;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl @ 0x13ea0
_Tuple_impl_1u_std__default_delete_int____ * __thiscall
std::_Tuple_impl<1u,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_1u_std__default_delete_int____ *this)
{
  _Head_base<1u,std::default_delete<int[]>,true>::_Head_base
            ((_Head_base_1u_std__default_delete_int____true_ *)this);
  return this;
}

// Function: std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base @ 0x13ecc
_Head_base_1u_std__default_delete_int____true_ * __thiscall
std::_Head_base<1u,std::default_delete<int[]>,true>::_Head_base
          (_Head_base_1u_std__default_delete_int____true_ *this)
{
  return this;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x13ee0
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x13f04
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head @ 0x13f28
void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x13f4c
undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x13f80
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
               (undefined4 param_1,void *param_2)
{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x13fc0
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_1u_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::get<1u,int*,std::default_delete<int[]>> @ 0x13fe4
type * std::get_1u_int__std__default_delete_int____(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1u_std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1u,std::default_delete<int[]>> @ 0x14008
default_delete * std::__get_helper_1u_std__default_delete_int____(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head @ 0x1402c
void std::_Tuple_impl<1u,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1u,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head @ 0x14050
_Head_base * std::_Head_base<1u,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x14064
undefined4 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined4 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x14098
undefined4 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)get_0u_int__std__default_delete_int____((tuple *)this);
  return *puVar1;
}

// Function: std::get<0u,int*,std::default_delete<int[]>> @ 0x140c0
type * std::get_0u_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0u_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0u,int*,std::default_delete<int[]>> @ 0x140e4
int ** std::__get_helper_0u_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head @ 0x14108
void std::_Tuple_impl<0u,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0u,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::forward<int*&> @ 0x1412c
int ** std::forward_int___(type *param_1)
{
  return (int **)param_1;
}

// Function: std::_Head_base<0u,int*,false>::_Head_base<int*&> @ 0x14140
void __thiscall
std::_Head_base<0u,int*,false>::_Head_base_int___(_Head_base_0u_int__false_ *this,int **param_1)
{
  int **ppiVar1;
  ppiVar1 = forward_int___((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}

// Function: _fini @ 0x14180
void _fini(void)
{
  return;
}

