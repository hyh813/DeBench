// Decompiled by BinaryAI
// SHA256: dbd4cb8a02206feb832e816e140464fbc2915c604b18d426db08f0a8fd1f6839

// Function: _init @ 0x101988
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001019a0 @ 0x1019a0
void FUN_001019a0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x1019c0
void * operator_new__(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new__(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::std::terminate @ 0x1019d0
void std::terminate(void)
{
  terminate();
}

// Function: <EXTERNAL>::strlen @ 0x1019e0
size_t strlen(char *__s)
{
  size_t sVar1;
  sVar1 = strlen(__s);
  return sVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x1019f0
void __cxa_begin_catch(void)
{
  __cxa_begin_catch();
  return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101a00
void __cxa_allocate_exception(void)
{
  __cxa_allocate_exception();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101a10
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x101a20
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::operator.delete @ 0x101a30
void operator_delete(void *param_1)
{
  operator_delete(param_1);
  return;
}

// Function: <EXTERNAL>::operator.new @ 0x101a40
void * operator_new(ulong param_1)
{
  void *pvVar1;
  pvVar1 = operator_new(param_1);
  return pvVar1;
}

// Function: <EXTERNAL>::strncpy @ 0x101a50
char * strncpy(char *__dest,char *__src,size_t __n)
{
  char *pcVar1;
  pcVar1 = strncpy(__dest,__src,__n);
  return pcVar1;
}

// Function: <EXTERNAL>::__cxa_bad_typeid @ 0x101a60
void __cxa_bad_typeid(void)
{
  __cxa_bad_typeid();
  return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x101a70
void __dynamic_cast(void)
{
  __dynamic_cast();
  return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101a80
void __cxa_atexit(void)
{
  __cxa_atexit();
  return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101a90
void operator_delete__(void *param_1)
{
  operator_delete__(param_1);
  return;
}

// Function: <EXTERNAL>::strcmp @ 0x101aa0
int strcmp(char *__s1,char *__s2)
{
  int iVar1;
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101ab0
void __cxa_rethrow(void)
{
  __cxa_rethrow();
  return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101ac0
void __thiscall std::ios_base::Init::Init(Init *this)
{
  Init(this);
  return;
}

// Function: <EXTERNAL>::abort @ 0x101ad0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101ae0
void __cxa_end_catch(void)
{
  __cxa_end_catch();
  return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x101af0
void __gxx_personality_v0(void)
{
  __gxx_personality_v0();
  return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101b00
void __cxa_throw(void)
{
  __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101b10
void _Unwind_Resume(void)
{
  _Unwind_Resume();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101b20
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::printf @ 0x101b30
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: __cxx_global_var_init @ 0x101b40
void __cxx_global_var_init(void)
{
  std::ios_base::Init::Init((Init *)&std::__ioinit);
  __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
  return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101b80
void _GLOBAL__sub_I_5_1_cpp(void)
{
  __cxx_global_var_init();
  return;
}

// Function: _start @ 0x101bc0
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x101bf4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x101c10
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101c40
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00101c7c @ 0x101c7c
void FUN_00101c7c(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x101c80
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: test_cpp_member_func @ 0x101cd4
int test_cpp_member_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  SimpleClass aSStack_34 [36];
  SimpleClass::SimpleClass(aSStack_34,5,"Test");
  SimpleClass::setValue(aSStack_34,10);
  iVar1 = SimpleClass::getValue(aSStack_34);
  iVar2 = SimpleClass::compute(aSStack_34,3);
  iVar3 = SimpleClass::getClassID();
  return iVar1 + iVar2 + iVar3;
}

// Function: test_cpp_constructor @ 0x101d4c
int test_cpp_constructor(void)
{
  int iVar1;
  LifecycleClass aLStack_28 [20];
  int local_14;
  local_14 = 0;
  LifecycleClass::LifecycleClass(aLStack_28,5);
  iVar1 = LifecycleClass::getData(aLStack_28,2);
  local_14 = local_14 + iVar1;
  iVar1 = LifecycleClass::getInstanceCount();
  local_14 = local_14 + iVar1;
  LifecycleClass::_LifecycleClass(aLStack_28);
  iVar1 = LifecycleClass::getInstanceCount();
  return local_14 + iVar1 * 1000;
}

// Function: call_virtual_func @ 0x101dfc
void call_virtual_func(Base *param_1,int param_2)
{
  (***(code ***)param_1)(param_1,param_2);
  return;
}

// Function: test_cpp_virtual_func @ 0x101e30
int test_cpp_virtual_func(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Derived aDStack_28 [16];
  Base aBStack_18 [8];
  Base::Base(aBStack_18);
  Derived::Derived(aDStack_28,3);
  iVar1 = Base::virtual_func(aBStack_18,5);
  iVar2 = Derived::virtual_func(aDStack_28,5);
  iVar3 = call_virtual_func(aBStack_18,5);
  iVar4 = call_virtual_func((Base *)aDStack_28,5);
  Derived::_Derived(aDStack_28);
  Base::_Base(aBStack_18);
  return iVar1 + iVar2 + iVar3 + iVar4;
}

// Function: test_cpp_multiple_inheritance @ 0x101f50
int test_cpp_multiple_inheritance(void)
{
  int iVar1;
  int iVar2;
  code ***local_68;
  code **local_30;
  undefined4 local_28;
  code **local_20;
  undefined4 local_18;
  MultiDerived::MultiDerived((MultiDerived *)&local_30);
  local_28 = 100;
  local_18 = 200;
  local_68 = (code ***)0x0;
  if (&local_30 != (code ***)0x0) {
    local_68 = &local_20;
  }
  iVar1 = (**local_30)();
  iVar2 = (***local_68)();
  MultiDerived::_MultiDerived((MultiDerived *)&local_30);
  return iVar1 + iVar2 + (uint)(&local_30 != local_68);
}

// Function: test_cpp_diamond_inheritance @ 0x102050
int test_cpp_diamond_inheritance(void)
{
  int iVar1;
  int iVar2;
  undefined8 *local_68;
  long local_40;
  undefined4 auStack_38 [10];
  DiamondDerived::DiamondDerived((DiamondDerived *)&local_40);
  *(undefined4 *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 0x32;
  local_68 = (undefined8 *)0x0;
  if (&local_40 != (long *)0x0) {
    local_68 = (undefined8 *)((long)auStack_38 + *(long *)(local_40 + -0x18) + -8);
  }
  iVar1 = (**(code **)*local_68)();
  *(undefined4 *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 100;
  iVar2 = (**(code **)*local_68)();
  DiamondDerived::_DiamondDerived((DiamondDerived *)&local_40);
  return iVar1 + iVar2;
}

// Function: test_cpp_operator_overload @ 0x102154
int test_cpp_operator_overload(void)
{
  byte bVar1;
  int iVar2;
  undefined8 local_28;
  Point aPStack_20 [8];
  Point aPStack_18 [8];
  Point::Point(aPStack_18,1,2);
  Point::Point(aPStack_20,3,4);
  local_28 = Point::operator_(aPStack_18,aPStack_20);
  bVar1 = Point::operator__(aPStack_18,aPStack_20);
  Point::operator__((Point *)&local_28);
  iVar2 = 0;
  if ((bVar1 & 1) == 0) {
    iVar2 = 10;
  }
  return (int)local_28 + local_28._4_4_ + iVar2;
}

// Function: test_cpp_template_func @ 0x1021fc
int test_cpp_template_func(void)
{
  int local_28;
  int local_24;
  double local_20;
  int local_14;
  local_14 = template_max_int_(3,7);
  local_20 = template_max_double_(2.5,1.5);
  local_24 = 10;
  local_28 = 0x14;
  template_swap_int_(&local_24,&local_28);
  return local_14 + (int)local_20 + local_24 + local_28;
}

// Function: test_cpp_template_class @ 0x102270
int test_cpp_template_class(void)
{
  double dVar1;
  Container_double_ aCStack_a0 [92];
  int local_44;
  int local_40;
  Container_int_ aCStack_3c [44];
  Container<int>::Container(aCStack_3c);
  Container<int>::push(aCStack_3c,10);
  Container<int>::push(aCStack_3c,0x14);
  Container<int>::push(aCStack_3c,0x1e);
  local_40 = Container<int>::get(aCStack_3c,0);
  local_44 = Container<int>::getSize(aCStack_3c);
  Container<double>::Container(aCStack_a0);
  Container<double>::push(aCStack_a0,3.14);
  dVar1 = (double)Container<double>::get(aCStack_a0,0);
  return local_40 + local_44 + (int)dVar1;
}

// Function: test_cpp_lambda @ 0x102330
int test_cpp_lambda(void)
{
  int iVar1;
  auto aVar2;
  __0 _Stack_29;
  undefined4 local_28 [2];
  undefined4 *local_20;
  undefined4 local_18;
  undefined4 local_14;
  local_14 = 10;
  local_20 = &local_18;
  local_18 = 0x14;
  local_28[0] = 10;
  iVar1 = test_cpp_lambda()::$_1::operator__((__1 *)local_28,3);
  aVar2 = test_cpp_lambda()::$_0::operator__(&_Stack_29,10,0x14);
  return iVar1 + aVar2;
}

// Function: test_cpp_lambda()::$_1::operator() @ 0x1023a0
int __thiscall test_cpp_lambda()::$_1::operator__(__1 *this,int param_1)
{
  **(int **)(this + 8) = **(int **)(this + 8) + 5;
  return param_1 * *(int *)this + **(int **)(this + 8);
}

// Function: test_cpp_lambda()::$_0::operator() @ 0x1023e0
auto __thiscall test_cpp_lambda()::$_0::operator__(__0 *this,int param_1,int param_2)
{
  return param_1 + param_2;
}

// Function: test_cpp_exception @ 0x102404
void test_cpp_exception(void)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar1 = 0x2a;
  __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x102574
int test_cpp_smart_ptr(void)
{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  type *ptVar5;
  unique_ptr_int_test_cpp_smart_ptr______2_ auStack_50 [11];
  __2 _Stack_45;
  int local_44;
  unique_ptr_int___std__default_delete_int____ auStack_40 [12];
  int local_34;
  unique_ptr_int_std__default_delete_int__ auStack_30 [24];
  unique_ptr_int_std__default_delete_int__ auStack_18 [8];
  piVar3 = (int *)operator_new(4);
  *piVar3 = 100;
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
            (auStack_18,piVar3);
  puVar4 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator_(auStack_18);
  *puVar4 = 200;
  ptVar5 = std::move_std__unique_ptr_int_std__default_delete_int____((unique_ptr *)auStack_18);
  std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_30,(unique_ptr *)ptVar5);
  piVar3 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator_(auStack_30);
  local_34 = *piVar3;
  piVar3 = (int *)operator_new__(0x14);
  *piVar3 = 1;
  piVar3[1] = 2;
  piVar3[2] = 3;
  piVar3[3] = 4;
  piVar3[4] = 5;
  std::unique_ptr<int[],std::default_delete<int[]>>::
  unique_ptr_int__std__default_delete_int____void_bool_(auStack_40,piVar3);
  piVar3 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator__(auStack_40,2);
  local_44 = *piVar3;
  piVar3 = (int *)operator_new(4);
  *piVar3 = 500;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
            (auStack_50,piVar3,&_Stack_45);
  piVar3 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_(auStack_50);
  iVar2 = *piVar3;
  iVar1 = local_34 + local_44;
  std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::_unique_ptr(auStack_50);
  std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr(auStack_40);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(auStack_30);
  std::unique_ptr<int,std::default_delete<int>>::_unique_ptr(auStack_18);
  return iVar1 + iVar2;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0x10275c
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr_test_cpp_smart_ptr______2_void_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
  __uniq_ptr_impl_test_cpp_smart_ptr______2_const__
            ((__uniq_ptr_data_int_test_cpp_smart_ptr______2_true_false_ *)this,param_1,param_2);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator* @ 0x102798
void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator_
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  get(this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr @ 0x1027cc
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

// Function: test_cpp_rtti @ 0x10284c
int test_cpp_rtti(void)
{
  int iVar1;
  long *this;
  long *this_00;
  ulong uVar2;
  char *__s;
  size_t sVar3;
  long local_80;
  long local_70;
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
  }
  uVar2 = std::type_info::operator__
                    (*(type_info **)(*this + -8),(type_info *)&RTTIDerivedA::typeinfo);
  if ((uVar2 & 1) != 0) {
    local_24 = 10;
  }
  if (this_00 == (long *)0x0) {
    __cxa_bad_typeid();
  }
  uVar2 = std::type_info::operator__
                    (*(type_info **)(*this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
  if ((uVar2 & 1) != 0) {
    local_24 = local_24 + 0x14;
  }
  if (this == (long *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
  }
  if (local_70 != 0) {
    iVar1 = RTTIDerivedA::derivedA_data();
    local_24 = local_24 + iVar1;
  }
  if (this_00 == (long *)0x0) {
    local_80 = 0;
  }
  else {
    local_80 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
  }
  if (local_80 != 0) {
    iVar1 = RTTIDerivedB::derivedB_data();
    local_24 = local_24 + iVar1;
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
  return local_24 + (int)sVar3;
}

// Function: test_cpp_oo_features @ 0x102a84
int test_cpp_oo_features(void)
{
  int iVar1;
  ulong uVar2;
  printf(&DAT_00104bd5);
  uVar2 = test_cpp_member_func();
  printf(&DAT_00104bfa,uVar2 & 0xffffffff);
  uVar2 = test_cpp_constructor();
  printf(&DAT_00104c18,uVar2 & 0xffffffff);
  uVar2 = test_cpp_virtual_func();
  printf(&DAT_00104c34,uVar2 & 0xffffffff);
  uVar2 = test_cpp_multiple_inheritance();
  printf(&DAT_00104c50,uVar2 & 0xffffffff);
  uVar2 = test_cpp_diamond_inheritance();
  printf(&DAT_00104c6c,uVar2 & 0xffffffff);
  uVar2 = test_cpp_operator_overload();
  printf(&DAT_00104c89,uVar2 & 0xffffffff);
  uVar2 = test_cpp_template_func();
  printf(&DAT_00104ca5,uVar2 & 0xffffffff);
  uVar2 = test_cpp_template_class();
  printf(&DAT_00104cc1,uVar2 & 0xffffffff);
  uVar2 = test_cpp_lambda();
  printf(&DAT_00104cdd,uVar2 & 0xffffffff);
  uVar2 = test_cpp_exception();
  printf(&DAT_00104cf9,uVar2 & 0xffffffff);
  uVar2 = test_cpp_smart_ptr();
  printf(&DAT_00104d16,uVar2 & 0xffffffff);
  uVar2 = test_cpp_rtti();
  iVar1 = printf(&DAT_00104d33,uVar2 & 0xffffffff);
  return iVar1;
}

// Function: main @ 0x102b90
undefined4 main(void)
{
  test_cpp_oo_features();
  return 0;
}

// Function: std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x102bbc
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

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 0x102bf0
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl_test_cpp_smart_ptr______2_const__
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this,int *param_1,__2 *param_2)
{
  __2 *p_Var1;
  int *local_20;
  __uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *local_18;
  local_20 = param_1;
  local_18 = this;
  p_Var1 = forward_test_cpp_smart_ptr______2_const__((type *)param_2);
  tuple<int*,test_cpp_smart_ptr()::$_2>::tuple_int___test_cpp_smart_ptr______2_const__true_
            ((tuple_int__test_cpp_smart_ptr______2_ *)this,&local_20,p_Var1);
  return;
}

// Function: std::forward<test_cpp_smart_ptr()::$_2_const&> @ 0x102c3c
__2 * std::forward_test_cpp_smart_ptr______2_const__(type *param_1)
{
  return (__2 *)param_1;
}

// Function: std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 0x102c50
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

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 0x102ca8
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

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl @ 0x102cfc
void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)
{
  _Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
  return;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base @ 0x102d28
void std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)
{
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x102d3c
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter @ 0x102d60
undefined8 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
          (unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: test_cpp_smart_ptr()::$_2::operator() @ 0x102d94
void __thiscall test_cpp_smart_ptr()::$_2::operator__(__2 *this,int *param_1)
{
  *param_1 = -1;
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x102ddc
type * std::get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x102e00
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x102e24
void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter @ 0x102e48
void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  get_1ul_int__test_cpp_smart_ptr______2_((tuple *)this);
  return;
}

// Function: std::get<1ul,int*,test_cpp_smart_ptr()::$_2> @ 0x102e6c
type * std::get_1ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  __2 *p_Var1;
  p_Var1 = __get_helper_1ul_test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)p_Var1;
}

// Function: std::__get_helper<1ul,test_cpp_smart_ptr()::$_2> @ 0x102e90
__2 * std::__get_helper_1ul_test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  __2 *p_Var1;
  p_Var1 = (__2 *)_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return p_Var1;
}

// Function: std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head @ 0x102eb4
void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head @ 0x102ed8
_Head_base * std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get @ 0x102eec
undefined8 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr_int_test_cpp_smart_ptr______2_ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
                    ((__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr @ 0x102f20
undefined8 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
          (__uniq_ptr_impl_int_test_cpp_smart_ptr______2_ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__test_cpp_smart_ptr______2_((tuple *)this);
  return *puVar1;
}

// Function: std::get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x102f48
type * std::get_0ul_int__test_cpp_smart_ptr______2_(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__test_cpp_smart_ptr______2_((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 0x102f6c
int ** std::__get_helper_0ul_int__test_cpp_smart_ptr______2_(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head @ 0x102f90
void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: SimpleClass::SimpleClass @ 0x102fb4
void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)
{
  *(int *)this = param_1;
  strncpy((char *)(this + 4),param_2,0x1f);
  this[0x23] = (SimpleClass)0x0;
  return;
}

// Function: SimpleClass::setValue @ 0x103000
void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)
{
  *(int *)this = param_1;
  return;
}

// Function: SimpleClass::getValue @ 0x103020
undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)
{
  return *(undefined4 *)this;
}

// Function: SimpleClass::compute @ 0x103038
ulong __thiscall SimpleClass::compute(SimpleClass *this,int param_1)
{
  int iVar1;
  size_t sVar2;
  iVar1 = *(int *)this;
  sVar2 = strlen((char *)(this + 4));
  return sVar2 + (long)(iVar1 * param_1) & 0xffffffff;
}

// Function: SimpleClass::getClassID @ 0x103080
undefined8 SimpleClass::getClassID(void)
{
  return 0x1234;
}

// Function: LifecycleClass::LifecycleClass @ 0x103088
void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,ulong param_1)
{
  undefined auVar1 [16];
  void *pvVar2;
  ulong uVar3;
  ulong local_28;
  *(ulong *)(this + 8) = param_1;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  uVar3 = param_1 * 4;
  if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
    uVar3 = 0xffffffffffffffff;
  }
  pvVar2 = operator_new__(uVar3);
  *(void **)this = pvVar2;
  for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
    *(int *)(*(long *)this + local_28 * 4) = (int)local_28 * 10;
  }
  instance_count = instance_count + 1;
  return;
}

// Function: LifecycleClass::getData @ 0x103138
undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,ulong param_1)
{
  undefined4 local_1c;
  if (param_1 < *(ulong *)(this + 8)) {
    local_1c = *(undefined4 *)(*(long *)this + param_1 * 4);
  }
  else {
    local_1c = 0xffffffff;
  }
  return local_1c;
}

// Function: LifecycleClass::getInstanceCount @ 0x103190
undefined4 LifecycleClass::getInstanceCount(void)
{
  return instance_count;
}

// Function: LifecycleClass::~LifecycleClass @ 0x10319c
void __thiscall LifecycleClass::_LifecycleClass(LifecycleClass *this)
{
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
  }
  instance_count = instance_count + -1;
  return;
}

// Function: Base::Base @ 0x1031e8
void __thiscall Base::Base(Base *this)
{
  *(undefined ***)this = &PTR_virtual_func_00117858;
  return;
}

// Function: Derived::Derived @ 0x10320c
void __thiscall Derived::Derived(Derived *this,int param_1)
{
  Base::Base((Base *)this);
  *(undefined ***)this = &PTR_virtual_func_00117898;
  *(int *)(this + 8) = param_1;
  return;
}

// Function: Base::virtual_func @ 0x10325c
int __thiscall Base::virtual_func(Base *this,int param_1)
{
  return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x103278
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
  return param_1 * *(int *)(this + 8);
}

// Function: Derived::~Derived @ 0x10329c
void __thiscall Derived::_Derived(Derived *this)
{
  Base::_Base((Base *)this);
  return;
}

// Function: Base::~Base @ 0x1032c0
void __thiscall Base::_Base(Base *this)
{
  return;
}

// Function: MultiDerived::MultiDerived @ 0x1032d0
void __thiscall MultiDerived::MultiDerived(MultiDerived *this)
{
  BaseA::BaseA((BaseA *)this);
  BaseB::BaseB((BaseB *)(this + 0x10));
  *(undefined ***)this = &PTR_funcA_001178e0;
  *(undefined ***)(this + 0x10) = &PTR_funcB_00117910;
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x103330
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  BaseB::_BaseB((BaseB *)(this + 0x10));
  BaseA::_BaseA((BaseA *)this);
  return;
}

// Function: DiamondDerived::DiamondDerived @ 0x103364
void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)
{
  VirtualBase::VirtualBase((VirtualBase *)(this + 0x20));
  MiddleA::MiddleA((MiddleA *)this);
  MiddleB::MiddleB((MiddleB *)(this + 0x10));
  *(undefined ***)this = &PTR_func_001179e8;
  *(undefined ***)(this + 0x20) = &PTR_func_00117a50;
  *(undefined ***)(this + 0x10) = &PTR_func_00117a18;
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x103400
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x20));
  return;
}

// Function: Point::Point @ 0x10343c
void __thiscall Point::Point(Point *this,int param_1,int param_2)
{
  *(int *)this = param_1;
  *(int *)(this + 4) = param_2;
  return;
}

// Function: Point::operator+ @ 0x103468
undefined8 __thiscall Point::operator_(Point *this,Point *param_1)
{
  undefined8 local_18;
  Point((Point *)&local_18,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
       );
  return local_18;
}

// Function: Point::operator== @ 0x1034b8
bool __thiscall Point::operator__(Point *this,Point *param_1)
{
  bool bVar1;
  bVar1 = false;
  if (*(int *)this == *(int *)param_1) {
    bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
  }
  return bVar1;
}

// Function: Point::operator++ @ 0x10351c
void __thiscall Point::operator__(Point *this)
{
  *(int *)this = *(int *)this + 1;
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  return;
}

// Function: template_max<int> @ 0x103548
int template_max_int_(int param_1,int param_2)
{
  int local_c;
  local_c = param_2;
  if (param_2 < param_1) {
    local_c = param_1;
  }
  return local_c;
}

// Function: template_max<double> @ 0x10358c
double template_max_double_(double param_1,double param_2)
{
  double local_18;
  local_18 = param_2;
  if (param_2 < param_1) {
    local_18 = param_1;
  }
  return local_18;
}

// Function: template_swap<int> @ 0x1035d4
void template_swap_int_(int *param_1,int *param_2)
{
  int iVar1;
  iVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = iVar1;
  return;
}

// Function: Container<int>::Container @ 0x103610
void __thiscall Container<int>::Container(Container_int_ *this)
{
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

// Function: Container<int>::push @ 0x103628
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

// Function: Container<int>::get @ 0x103674
undefined4 __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
  undefined4 local_4;
  if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
    local_4 = 0;
  }
  else {
    local_4 = *(undefined4 *)(this + (long)param_1 * 4);
  }
  return local_4;
}

// Function: Container<int>::getSize @ 0x1036d4
undefined4 __thiscall Container<int>::getSize(Container_int_ *this)
{
  return *(undefined4 *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1036ec
void __thiscall Container<double>::Container(Container_double_ *this)
{
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

// Function: Container<double>::push @ 0x103704
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

// Function: Container<double>::get @ 0x103750
undefined8 __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
  undefined8 local_8;
  if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
    local_8 = 0;
  }
  else {
    local_8 = *(undefined8 *)(this + (long)param_1 * 8);
  }
  return local_8;
}

// Function: Container<double>::getSize @ 0x1037b4
undefined4 __thiscall Container<double>::getSize(Container_double_ *this)
{
  return *(undefined4 *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void> @ 0x1037cc
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr_std__default_delete_int__void_
          (unique_ptr_int_std__default_delete_int__ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::operator* @ 0x103800
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator_
          (unique_ptr_int_std__default_delete_int__ *this)
{
  get(this);
  return;
}

// Function: std::move<std::unique_ptr<int,std::default_delete<int>>&> @ 0x103834
type * std::move_std__unique_ptr_int_std__default_delete_int____(unique_ptr *param_1)
{
  return (type *)param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::unique_ptr @ 0x103848
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
          (unique_ptr_int_std__default_delete_int__ *this,unique_ptr *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
            ((__uniq_ptr_data_int_std__default_delete_int__true_true_ *)this,
             (__uniq_ptr_data *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 0x103874
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr_int__std__default_delete_int____void_bool_
          (unique_ptr_int___std__default_delete_int____ *this,int *param_1)
{
  __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
            ((__uniq_ptr_data_int_std__default_delete_int____true_true_ *)this,param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::operator[] @ 0x1038a8
long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator__
          (unique_ptr_int___std__default_delete_int____ *this,ulong param_1)
{
  long lVar1;
  lVar1 = get(this);
  return lVar1 + param_1 * 4;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x1038e8
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

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x10394c
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

// Function: RTTIDerivedA::RTTIDerivedA @ 0x1039c0
void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedA_00117d30;
  return;
}

// Function: RTTIDerivedB::RTTIDerivedB @ 0x103a04
void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::RTTIBase((RTTIBase *)this);
  *(undefined ***)this = &PTR__RTTIDerivedB_00117d80;
  return;
}

// Function: std::type_info::operator== @ 0x103a48
bool __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
  bool bVar1;
  int iVar2;
  bVar1 = true;
  if ((*(long *)(this + 8) != *(long *)(param_1 + 8)) &&
     (bVar1 = false, **(char **)(this + 8) != '*')) {
    iVar2 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

// Function: RTTIDerivedA::derivedA_data @ 0x103ae8
undefined8 RTTIDerivedA::derivedA_data(void)
{
  return 100;
}

// Function: RTTIDerivedB::derivedB_data @ 0x103afc
undefined8 RTTIDerivedB::derivedB_data(void)
{
  return 200;
}

// Function: std::type_info::name @ 0x103b10
long __thiscall std::type_info::name(type_info *this)
{
  long local_18;
  if (**(char **)(this + 8) == '*') {
    local_18 = *(long *)(this + 8) + 1;
  }
  else {
    local_18 = *(long *)(this + 8);
  }
  return local_18;
}

// Function: Base::getName @ 0x103b64
undefined * Base::getName(void)
{
  return &DAT_00104d51;
}

// Function: Base::~Base @ 0x103b7c
void __thiscall Base::_Base(Base *this)
{
  _Base(this);
  operator_delete(this);
  return;
}

// Function: Derived::getName @ 0x103bac
char * Derived::getName(void)
{
  return "Derived";
}

// Function: Derived::~Derived @ 0x103bc4
void __thiscall Derived::_Derived(Derived *this)
{
  _Derived(this);
  operator_delete(this);
  return;
}

// Function: BaseA::BaseA @ 0x103bf4
void __thiscall BaseA::BaseA(BaseA *this)
{
  *(undefined ***)this = &PTR_funcA_00117990;
  return;
}

// Function: BaseB::BaseB @ 0x103c18
void __thiscall BaseB::BaseB(BaseB *this)
{
  *(undefined ***)this = &PTR_funcB_001179b8;
  return;
}

// Function: MultiDerived::funcA @ 0x103c3c
undefined8 MultiDerived::funcA(void)
{
  return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x103c50
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this);
  operator_delete(this);
  return;
}

// Function: MultiDerived::funcB @ 0x103c80
undefined8 MultiDerived::funcB(void)
{
  return 0x28;
}

// Function: MultiDerived::funcB @ 0x103c94
void __thiscall MultiDerived::funcB(MultiDerived *this)
{
  funcB();
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x103cac
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x103cc4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
  _MultiDerived(this + -0x10);
  return;
}

// Function: BaseA::funcA @ 0x103cdc
undefined8 BaseA::funcA(void)
{
  return 10;
}

// Function: BaseA::~BaseA @ 0x103cf0
void __thiscall BaseA::_BaseA(BaseA *this)
{
  return;
}

// Function: BaseA::~BaseA @ 0x103d00
void __thiscall BaseA::_BaseA(BaseA *this)
{
  _BaseA(this);
  operator_delete(this);
  return;
}

// Function: BaseB::funcB @ 0x103d30
undefined8 BaseB::funcB(void)
{
  return 0x14;
}

// Function: BaseB::~BaseB @ 0x103d44
void __thiscall BaseB::_BaseB(BaseB *this)
{
  return;
}

// Function: BaseB::~BaseB @ 0x103d54
void __thiscall BaseB::_BaseB(BaseB *this)
{
  _BaseB(this);
  operator_delete(this);
  return;
}

// Function: VirtualBase::VirtualBase @ 0x103d84
void __thiscall VirtualBase::VirtualBase(VirtualBase *this)
{
  *(undefined ***)this = &PTR_func_00117c18;
  return;
}

// Function: MiddleA::MiddleA @ 0x103da8
void __thiscall MiddleA::MiddleA(MiddleA *this)
{
  undefined8 *in_x1;
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}

// Function: MiddleB::MiddleB @ 0x103ddc
void __thiscall MiddleB::MiddleB(MiddleB *this)
{
  undefined8 *in_x1;
  *(undefined8 *)this = *in_x1;
  *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
  return;
}

// Function: MiddleA::func @ 0x103e10
int __thiscall MiddleA::func(MiddleA *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x103e38
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
  return;
}

// Function: MiddleA::~MiddleA @ 0x103e74
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::func @ 0x103ea4
void __thiscall MiddleA::func(MiddleA *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: MiddleA::~MiddleA @ 0x103ec4
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleA::~MiddleA @ 0x103ee4
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  _MiddleA(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleB::func @ 0x103f04
int __thiscall MiddleB::func(MiddleB *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x103f2c
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  VirtualBase::_VirtualBase((VirtualBase *)(this + 0x10));
  return;
}

// Function: MiddleB::~MiddleB @ 0x103f68
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this);
  operator_delete(this);
  return;
}

// Function: MiddleB::func @ 0x103f98
void __thiscall MiddleB::func(MiddleB *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: MiddleB::~MiddleB @ 0x103fb8
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: MiddleB::~MiddleB @ 0x103fd8
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  _MiddleB(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::func @ 0x103ff8
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
  return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104020
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this);
  operator_delete(this);
  return;
}

// Function: DiamondDerived::func @ 0x104050
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104068
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104080
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + -0x10);
  return;
}

// Function: DiamondDerived::func @ 0x104098
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
  func(this + *(long *)(*(long *)this + -0x18));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1040b8
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1040d8
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  _DiamondDerived(this + *(long *)(*(long *)this + -0x20));
  return;
}

// Function: VirtualBase::func @ 0x1040f8
undefined8 VirtualBase::func(void)
{
  return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x10410c
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  return;
}

// Function: VirtualBase::~VirtualBase @ 0x10411c
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
  _VirtualBase(this);
  operator_delete(this);
  return;
}

// Function: MiddleA::~MiddleA @ 0x10414c
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
  return;
}

// Function: MiddleB::~MiddleB @ 0x104160
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x104174
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
  MiddleB::_MiddleB((MiddleB *)(this + 0x10));
  MiddleA::_MiddleA((MiddleA *)this);
  return;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data @ 0x1041c0
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,__uniq_ptr_data *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,(__uniq_ptr_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x1041ec
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

// Function: std::move<std::tuple<int*,std::default_delete<int>>&> @ 0x104244
type * std::move_std__tuple_int__std__default_delete_int____(tuple *param_1)
{
  return (type *)param_1;
}

// Function: std::tuple<int*,std::default_delete<int>>::tuple @ 0x104258
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
          (tuple_int__std__default_delete_int__ *this,tuple *param_1)
{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this,(_Tuple_impl *)param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x104284
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_0ul_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: __clang_call_terminate @ 0x1042a8
void __clang_call_terminate(void)
{
  __cxa_begin_catch();
  std::terminate();
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl @ 0x1042b4
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int__ *this,_Tuple_impl *param_1)
{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
  *(undefined8 *)this = *(undefined8 *)param_1;
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl @ 0x1042f4
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)
{
  return;
}

// Function: std::get<0ul,int*,std::default_delete<int>> @ 0x104308
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int>> @ 0x10432c
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head @ 0x104350
void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x104374
_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: RTTIBase::RTTIBase @ 0x104388
void __thiscall RTTIBase::RTTIBase(RTTIBase *this)
{
  *(undefined ***)this = &PTR__RTTIBase_00117d58;
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1043ac
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1043d0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
  _RTTIDerivedA(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedA::getType @ 0x104400
undefined8 RTTIDerivedA::getType(void)
{
  return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x104414
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  return;
}

// Function: RTTIBase::~RTTIBase @ 0x104424
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
  _RTTIBase(this);
  operator_delete(this);
  return;
}

// Function: RTTIBase::getType @ 0x104454
undefined8 RTTIBase::getType(void)
{
  return 0;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x104468
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  RTTIBase::_RTTIBase((RTTIBase *)this);
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x10448c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
  _RTTIDerivedB(this);
  operator_delete(this);
  return;
}

// Function: RTTIDerivedB::getType @ 0x1044bc
undefined8 RTTIDerivedB::getType(void)
{
  return 2;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl @ 0x1044d0
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int__true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int__ *)this,param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl @ 0x1044fc
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

// Function: std::tuple<int*,std::default_delete<int>>::tuple<true,true> @ 0x104540
void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple_true_true_
          (tuple_int__std__default_delete_int__ *this)
{
  _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int__ *)this);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl @ 0x10456c
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int__ *this)
{
  _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base_0ul_int__false_ *)this);
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl @ 0x10459c
void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)
{
  _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_Head_base @ 0x1045c0
void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base_0ul_int__false_ *this)
{
  *(undefined8 *)this = 0;
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base @ 0x1045d8
void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)
{
  return;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get_deleter @ 0x1045e8
undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
          (unique_ptr_int_std__default_delete_int__ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::default_delete<int>::operator() @ 0x10461c
void __thiscall std::default_delete<int>::operator__(default_delete_int_ *this,int *param_1)
{
  if (param_1 != (int *)0x0) {
    operator_delete(param_1);
  }
  return;
}

// Function: std::move<int*&> @ 0x104658
type * std::move_int___(int **param_1)
{
  return (type *)param_1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter @ 0x10466c
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  get_1ul_int__std__default_delete_int__((tuple *)this);
  return;
}

// Function: std::get<1ul,int*,std::default_delete<int>> @ 0x104690
type * std::get_1ul_int__std__default_delete_int__(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1ul_std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1ul,std::default_delete<int>> @ 0x1046b4
default_delete * std::__get_helper_1ul_std__default_delete_int__(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head @ 0x1046d8
void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int>,true>::_M_head @ 0x1046fc
_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int,std::default_delete<int>>::get @ 0x104710
undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr_int_std__default_delete_int__ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int__ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr @ 0x104744
undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int__ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__std__default_delete_int__((tuple *)this);
  return *puVar1;
}

// Function: std::get<0ul,int*,std::default_delete<int>> @ 0x10476c
type * std::get_0ul_int__std__default_delete_int__(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int__((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int>> @ 0x104790
int ** std::__get_helper_0ul_int__std__default_delete_int__(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head @ 0x1047b4
void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<0ul,int*,false>::_M_head @ 0x1047d8
_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl @ 0x1047ec
void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
          (__uniq_ptr_data_int_std__default_delete_int____true_true_ *this,int *param_1)
{
  __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
            ((__uniq_ptr_impl_int_std__default_delete_int____ *)this,param_1);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl @ 0x104818
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

// Function: std::tuple<int*,std::default_delete<int[]>>::tuple<true,true> @ 0x10485c
void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple_true_true_
          (tuple_int__std__default_delete_int____ *this)
{
  _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
            ((_Tuple_impl_0ul_int__std__default_delete_int____ *)this);
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x104888
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_0ul_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl @ 0x1048ac
void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
          (_Tuple_impl_0ul_int__std__default_delete_int____ *this)
{
  _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
  _Head_base<0ul,int*,false>::_Head_base((_Head_base_0ul_int__false_ *)this);
  return;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl @ 0x1048dc
void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)
{
  _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base @ 0x104900
void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)
{
  return;
}

// Function: std::get<0ul,int*,std::default_delete<int[]>> @ 0x104910
type * std::get_0ul_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int[]>> @ 0x104934
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head @ 0x104958
void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter @ 0x10497c
undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x1049b0
void _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_
               (undefined8 param_1,void *param_2)
{
  if (param_2 != (void *)0x0) {
    operator_delete__(param_2);
  }
  return;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter @ 0x1049ec
void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  get_1ul_int__std__default_delete_int____((tuple *)this);
  return;
}

// Function: std::get<1ul,int*,std::default_delete<int[]>> @ 0x104a10
type * std::get_1ul_int__std__default_delete_int____(tuple *param_1)
{
  default_delete *pdVar1;
  pdVar1 = __get_helper_1ul_std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)pdVar1;
}

// Function: std::__get_helper<1ul,std::default_delete<int[]>> @ 0x104a34
default_delete * std::__get_helper_1ul_std__default_delete_int____(_Tuple_impl *param_1)
{
  default_delete *pdVar1;
  pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
  return pdVar1;
}

// Function: std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head @ 0x104a58
void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head @ 0x104a7c
_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)
{
  return param_1;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::get @ 0x104a90
undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
          (unique_ptr_int___std__default_delete_int____ *this)
{
  undefined8 uVar1;
  uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
                    ((__uniq_ptr_impl_int_std__default_delete_int____ *)this);
  return uVar1;
}

// Function: std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr @ 0x104ac4
undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
          (__uniq_ptr_impl_int_std__default_delete_int____ *this)
{
  undefined8 *puVar1;
  puVar1 = (undefined8 *)get_0ul_int__std__default_delete_int____((tuple *)this);
  return *puVar1;
}

// Function: std::get<0ul,int*,std::default_delete<int[]>> @ 0x104aec
type * std::get_0ul_int__std__default_delete_int____(tuple *param_1)
{
  int **ppiVar1;
  ppiVar1 = __get_helper_0ul_int__std__default_delete_int____((_Tuple_impl *)param_1);
  return (type *)ppiVar1;
}

// Function: std::__get_helper<0ul,int*,std::default_delete<int[]>> @ 0x104b10
int ** std::__get_helper_0ul_int__std__default_delete_int____(_Tuple_impl *param_1)
{
  int **ppiVar1;
  ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
  return ppiVar1;
}

// Function: std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head @ 0x104b34
void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)
{
  _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
  return;
}

// Function: std::forward<int*&> @ 0x104b58
int ** std::forward_int___(type *param_1)
{
  return (int **)param_1;
}

// Function: std::_Head_base<0ul,int*,false>::_Head_base<int*&> @ 0x104b6c
void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base_int___(_Head_base_0ul_int__false_ *this,int **param_1)
{
  int **ppiVar1;
  ppiVar1 = forward_int___((type *)param_1);
  *(int **)this = *ppiVar1;
  return;
}

// Function: _fini @ 0x104ba8
void _fini(void)
{
  return;
}

